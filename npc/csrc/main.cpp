#include <stdlib.h>
#include <stdint.h>
#include <common.h>
#include "Vtop.h"
#include <verilated_vcd_c.h>
#include <verilated_dpi.h> // dpi-c

u_int32_t pc =NULL;
static uint64_t g_timer = 0; // unit: us
Vtop dut;
static VerilatedContext* contextp = nullptr; // 声明为全局变量
static VerilatedVcdC* m_trace = nullptr; // 声明为全局变量
static long cpu_cycle = 0;
extern uint32_t *dut_reg;

int check_finish(int instr);
word_t paddr_read(paddr_t addr, int len);
void cpu_exec(uint64_t n);
void init_monitor(int argc, char *argv[]);
void sdb_mainloop();
void trace_and_difftest(vaddr_t pc);
void difftest_step(vaddr_t pc, vaddr_t npc);
void trace_func_call_ret(paddr_t pc);

NPC_state npc_cpu = {.pc=0x80000000};

void single_cycle() {
    dut.i_clk = 0; dut.eval();
    dut.i_clk = 1; dut.eval();
}

static void reset(int n) {
    dut.i_rst_n = 0;
    while (n-- > 0) single_cycle();
    dut.i_rst_n = 1;
}

int main(int argc, char *argv[]) {
    init_monitor(argc, argv);
    Verilated::traceEverOn(true);
    contextp = new VerilatedContext;
    m_trace = new VerilatedVcdC;
    dut.trace(m_trace, 5);
    m_trace->open("build/waveform.vcd");
    reset(10);
    sdb_mainloop();
    m_trace->close();
    return 0;
}

void exec_once() {
    pc =dut.pc;//全局变量pc
    dut.ins = paddr_read(dut.pc, 4);
    
    single_cycle();
    dut.eval();

    npc_cpu.pc = dut.pc;
    for(int i=0;i<32;i++){
        npc_cpu.gpr[i] = dut_reg[i];}

    // cpu_cycle++ ;//不知道为啥cpu前两个周期变化
    trace_and_difftest(dut.pc);//log and difftest
    //   if(cpu_cycle >2)
    //      difftest_step(dut.pc, dut.pc);
    //trace_func_call_ret(dut.pc);//ftrace

    // VL_PRINTF("[%" PRId32 "] clk=%x rstl=%x ins=%" PRIx32 "  pc=%" PRIx32
    //               "\n",contextp->time(), dut.i_clk, dut.i_rst_n, dut.ins, dut.pc);
    m_trace->dump(contextp->time()); // 记录当前时间的波形数据
    contextp->timeInc(1); // 仿真时间+1
}

void cpu_exec(uint64_t n) {
    switch (npc_state.state) {
        case NPC_END: case NPC_ABORT:
            printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
            return;
        default: npc_state.state = NPC_RUNNING;
    }
    uint64_t timer_start = get_time();
    while (n-- > 0) exec_once();
    uint64_t timer_end = get_time();
    g_timer += timer_end - timer_start;
    switch (npc_state.state) {
        case NPC_RUNNING: npc_state.state = NPC_STOP; break;
        case NPC_ABORT:
        case NPC_END:
            Log("npc: %s at pc = " FMT_WORD,
                (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
                (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
                ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
                npc_state.halt_pc);
        case NPC_QUIT: return;
    }
}

