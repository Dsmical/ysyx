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
//#include <Vtop___024root.h>
#include <isa.h>
extern uint32_t *dut_reg;//寄存器数组变量声明
extern uint32_t *dut_csr_reg;//寄存器数组变量声明
extern uint32_t pc;
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char *csrs[] = {
  "mstatus", "mtvec", "mepc", "mcause"
};

void isa_reg_display() {
  printf("32 General Registers:");
  for(int i = 0; i < 32; i++) {
    printf(ANSI_FG_GREEN " %-3s: " ANSI_FG_CYAN FMT_WORD " " ANSI_NONE, regs[i], dut_reg[i]);
    if(i%4 == 3) {
      printf("\n");
    }
  }
  printf("mstatus = 0x%lx\n",dut_csr_reg[0x300]);
  printf("mtvec   = 0x%lx\n",dut_csr_reg[0x305]);
  printf("mepc    = 0x%lx\n",dut_csr_reg[0x341]);
  printf("mcause  = 0x%lx\n",dut_csr_reg[0x342]);

  printf("Program Counter:");
  printf(ANSI_FG_RED " %-3s: " ANSI_FG_MAGENTA FMT_WORD ANSI_NONE "\n", "$pc", pc);
}


word_t isa_reg_str2val(const char *s, bool *success) {
 char tmp[2] ={s[1],s[2]};//remove $

  for(int i=0;i<32;i++){  
    if(strcmp(tmp,regs[i])==0){
      *success=true;
      return dut_reg[i];
    }
  }
  if(strcmp(tmp, "pc")==0) {
    *success = true;
    return pc;
  }
  Log("Register not found!");
  *success = false;
  return 0;  
}
