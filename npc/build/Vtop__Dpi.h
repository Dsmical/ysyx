// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/dsm/ysyx-workbench/npc/vsrc/top.v:129:31
    extern svBit check_finish(int finish_flag);
    // DPI import at /home/dsm/ysyx-workbench/npc/vsrc/lsu.v:51:32
    extern void rtl_pmem_read(int raddr, int* rdata, svBit ren);
    // DPI import at /home/dsm/ysyx-workbench/npc/vsrc/lsu.v:52:32
    extern void rtl_pmem_write(int waddr, int wdata, char wmask);
    // DPI import at /home/dsm/ysyx-workbench/npc/vsrc/csrfile.v:62:32
    extern void set_csr_reg_ptr(const svOpenArrayHandle a);
    // DPI import at /home/dsm/ysyx-workbench/npc/vsrc/regfile.v:34:32
    extern void set_reg_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
