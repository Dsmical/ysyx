/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write
//ftrace///////////////////////////////////////////////
#define TRACE_jal IFDEF(CONFIG_FTRACE,{ \
  if(rd==1){trace_func_call(s->pc,s->dnpc,false);}})
#define TRACE_jalr IFDEF(CONFIG_FTRACE,{ \
  if(s->isa.inst.val == 0x00008067){  \
    trace_func_ret(s->pc);} \
  else if(rd == 1){ \
    trace_func_call(s->pc,s->dnpc,false);} \
  else if(rd == 0 && imm == 0){ \
    trace_func_call(s->pc,s->dnpc,true);}})

IFDEF(CONFIG_FTRACE,void trace_func_call(paddr_t pc, paddr_t target, bool is_tail));
IFDEF(CONFIG_FTRACE,void trace_func_ret(paddr_t pc) );
//mret///////////////////////////////////////////////
#define MRET() { \
  s->dnpc = CSR(0x341); \
  cpu.csr.mstatus &= ~(1<<3); \
  cpu.csr.mstatus |= ((cpu.csr.mstatus&(1<<7))>>4); \
  cpu.csr.mstatus |= (1<<7); \
  cpu.csr.mstatus &= ~((1<<11)+(1<<12)); \
}//MIE->0 MPIE->MIE MPIE->1 MPP->00
//////////////////////////////////////////////
//etrace
static void etrace() {
  IFDEF(CONFIG_ETRACE, {
    printf("\n" 
      ANSI_FMT("[ETRACE]", ANSI_FG_YELLOW) 
      "ecall in mepc = " FMT_WORD ", mcause = " FMT_WORD "\n",
      cpu.csr.mepc, cpu.csr.mcause);
  });
}
//////////////////////////////////////////////

static vaddr_t *csr_id_instr2address(word_t imm) {
  switch (imm)
  {
  case 0x341: return &(cpu.csr.mepc);
  case 0x342: return &(cpu.csr.mcause);
  case 0x300: return &(cpu.csr.mstatus);
  case 0x305: return &(cpu.csr.mtvec);
  default: panic("Unknown csr");
  }
}
//说明：ECALL：li a7, -1 ;mcause 用户模式下为8,在机器模式下为11(应该默认就是运行在M模式下，所以直接给它赋值11)
#define ECALL(dnpc) { dnpc = (isa_raise_intr(11, s->pc)); }
#define CSR(i) *csr_id_instr2address(i)

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_J,TYPE_R,TYPE_B,
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 19, 12) << 12 | BITS(i, 20, 20) << 11 | BITS(i, 30, 21) << 1; } while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | BITS(i, 7, 7) << 11 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1; } while(0)

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:                   immJ(); break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_R: src1R(); src2R();       ; break;
  }
}

static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2);
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + imm);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1 & src2);
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1 & imm);
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);

  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2) ? (s->pc + imm) : s->snpc);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, if ((sword_t)src1 >= (sword_t)src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, if (src1 >= src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if ((sword_t)src1 != (sword_t)src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, if ((sword_t)src1 < (sword_t)src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltU   , B, if (src1 < src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , I, R(rd) = CSR(imm);CSR(imm)=src1;);
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , I, R(rd) = CSR(imm);CSR(imm)|=src1;);

  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(rd) = ((sword_t)src1 / (sword_t)src2));
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(rd) = src1 / src2);
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1), 8));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) = imm);
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2),16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2));

  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(rd) = src1 * src2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(rd) = (SEXT(src1, 32) * SEXT(src2, 32)) >> 32);
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(rd) = ((uint64_t)src1 * (uint64_t)src2) >> 32);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(rd) = ((sword_t)src1 % (sword_t)src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, BITS(src2, 7, 0)));
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , S, R(rd) = src1<<src2);
  INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = src1<<imm);

  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(rd) = ((sword_t)src1 >>src2 ));
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I, R(rd) = ((sword_t)src1 >> (imm & 0x1f)));
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(rd) = src1 >>src2 );
  INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli   , I, R(rd) = src1 >> imm );
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = ((sword_t)src1 < (sword_t)src2));
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(rd) = ((sword_t)src1 < (sword_t)imm));
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = src1<imm);
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) = src1<src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1-src2);
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = SEXT(Mr(src1+imm,4),32));
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(rd) =s->pc + 4;s->dnpc = s->pc + imm; TRACE_jal);
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(rd) = s->pc + 4;s->dnpc=(src1+imm)&~(word_t)1;TRACE_jalr);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1|src2);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(rd) = src1 | imm);

  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(rd) = src1 % src2);
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1^src2);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1^imm);

  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , R, MRET(););
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ECALL  , I, ECALL(s->dnpc);etrace());
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}
IFDEF(CONFIG_ITRACE, void iringbuf_inst_get(word_t pc, uint32_t inst);)//函数申明

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  IFDEF(CONFIG_ITRACE, iringbuf_inst_get(s->pc, s->isa.inst.val));//Itrace inst fetch(iringbuf)
  return decode_exec(s);
}
