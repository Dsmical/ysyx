#include <stdlib.h>
#include <stdint.h>
#include "Vtop.h"

//#include <verilated.h>
#include <verilated_vcd_c.h>
//dpi-c
#include <verilated_dpi.h>
//#include "Vtop__Dpi.h"
static Vtop dut;
uint32_t *init_mem(size_t size);
uint32_t guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t *memory,uint32_t vaddr);
int check_finish(int instr);
void single_cycle(){
    dut.i_clk=0;dut.eval();
    dut.i_clk=1;dut.eval();
}

static void reset(int n){
    dut.i_rst_n = 0;
    while (n-- >0)single_cycle();
    dut.i_rst_n = 1;
}
int main(){
    uint32_t *memory;
    memory =init_mem(4);
    Verilated::traceEverOn(true);
    VerilatedContext* contextp =new VerilatedContext;
    VerilatedVcdC *m_trace =new VerilatedVcdC;
    dut.trace(m_trace, 5);
    m_trace -> open("build/waveform.vcd");

    reset(10);
    while(1){
        dut.ins = pmem_read(memory,dut.pc);
        single_cycle();
        dut.eval();
        VL_PRINTF("[%" PRId32 "] clk=%x rstl=%x ins=%" PRIx32 "  pc=%" PRIx32
                  "\n",contextp->time(), dut.i_clk, dut.i_rst_n, dut.ins, dut.pc);
        m_trace->dump(contextp->time());//记录当前时间的波形数据
        contextp->timeInc(1);//仿真时间+1

    }
    m_trace-> close();
    return 0;
}
