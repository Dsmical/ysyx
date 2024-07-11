#include "verilated_dpi.h"
#include <memory/paddr.h>
#include <memory/host.h>

#define PG_ALIGN __attribute((aligned(4096)))
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

extern "C" int check_finish(int instr){
  if(instr == 0x100073) //ebreak;
    return 1;
  else 
    return 0;
}
uint8_t *guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }


static void pmem_write(paddr_t addr, int len, word_t data)
{host_write(guest_to_host(addr), len, data);}

static word_t pmem_read(paddr_t addr, int len)
{word_t ret = host_read(guest_to_host(addr), len);return ret;}

extern "C" void rtl_pmem_write(int waddr, int wdata, char wmask){
  switch (wmask)
  {
    case 1:   pmem_write(waddr, 1, wdata); break; // 0000_0001, 1byte.
    case 3:   pmem_write(waddr, 2, wdata); break; // 0000_0011, 2byte.
    case 15:  pmem_write(waddr, 4, wdata); break; // 0000_1111, 4byte.
    default:  break;
  }
}

extern "C" void rtl_pmem_read(int raddr,int *rdata, svBit ren){
  if (ren && raddr>=PMEM_LEFT && raddr<=PMEM_RIGHT){
    *rdata = pmem_read(raddr,4);
  }
  else 
    *rdata = 0;
}

word_t paddr_read(paddr_t addr, int len) {
 return pmem_read(addr, len);
}

uint32_t *dut_reg= NULL;//RTL中通用寄存器
uint32_t *dut_csr_reg= NULL;//RTL中通用寄存器

extern "C" void set_reg_ptr(const svOpenArrayHandle r) {
  dut_reg = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_csr_reg_ptr(const svOpenArrayHandle r) {
  dut_csr_reg = (uint32_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
