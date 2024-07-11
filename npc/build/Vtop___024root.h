// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst_n,0,0);
    CData/*0:0*/ top__DOT__u_stdrst__DOT__rst_n_r2;
    CData/*4:0*/ top__DOT__rs1id;
    CData/*4:0*/ top__DOT__rs2id;
    CData/*4:0*/ top__DOT__rdid;
    CData/*4:0*/ top__DOT__exu_opt;
    CData/*2:0*/ top__DOT__exu_src_sel;
    CData/*3:0*/ top__DOT__lsu_opt;
    CData/*0:0*/ top__DOT__ecall;
    CData/*0:0*/ top__DOT__rdwen;
    CData/*0:0*/ top__DOT__u_stdrst__DOT__rst_n_r1;
    CData/*2:0*/ top__DOT__u_idu__DOT__id_err;
    CData/*4:0*/ top__DOT__u_exu__DOT__alu_opt;
    CData/*0:0*/ top__DOT__u_exu__DOT__sububit;
    CData/*0:0*/ top__DOT__u_exu__DOT__less;
    CData/*0:0*/ top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vfunc_top__DOT__check_finish__0__Vfuncout;
    CData/*0:0*/ __Vtrigrprev__TOP__i_clk;
    CData/*0:0*/ __Vtrigrprev__TOP__i_rst_n;
    CData/*0:0*/ __Vtrigrprev__TOP__top__DOT__u_stdrst__DOT__rst_n_r2;
    CData/*0:0*/ __VactContinue;
    VL_IN(ins,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ top__DOT__rs1;
    IData/*31:0*/ top__DOT__rs2;
    IData/*31:0*/ top__DOT__imm;
    IData/*31:0*/ top__DOT__exu_res;
    IData/*31:0*/ top__DOT__csr;
    IData/*31:0*/ top__DOT__u_csrfile__DOT__pc_temp;
    IData/*31:0*/ top__DOT__u_csrfile__DOT__csr_temp;
    IData/*31:0*/ top__DOT__u_exu__DOT__src1;
    IData/*31:0*/ top__DOT__u_exu__DOT__src2;
    IData/*31:0*/ top__DOT__u_exu__DOT__alu_res;
    IData/*31:0*/ top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out;
    IData/*31:0*/ top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out;
    IData/*31:0*/ top__DOT__u_lsu__DOT__rdata;
    VlWide<3>/*71:0*/ top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout;
    IData/*31:0*/ top__DOT__u_pcu__DOT__pc_next;
    IData/*31:0*/ __Vtask_top__DOT__u_lsu__DOT__rtl_pmem_read__4__rdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__u_regfile__DOT__rf;
    VlUnpacked<IData/*31:0*/, 4096> top__DOT__u_csrfile__DOT__csr;
    VlUnpacked<QData/*34:0*/, 8> top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 8> top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 8> top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*34:0*/, 8> top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 8> top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 8> top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
