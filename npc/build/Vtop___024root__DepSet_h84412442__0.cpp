// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" svBit check_finish(int finish_flag);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__check_finish_TOP(IData/*31:0*/ finish_flag, CData/*0:0*/ &check_finish__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__check_finish_TOP\n"); );
    // Body
    int finish_flag__Vcvt;
    for (size_t finish_flag__Vidx = 0; finish_flag__Vidx < 1; ++finish_flag__Vidx) finish_flag__Vcvt = finish_flag;
    svBit check_finish__Vfuncrtn__Vcvt;
    check_finish__Vfuncrtn__Vcvt = check_finish(finish_flag__Vcvt);
    check_finish__Vfuncrtn = (1U & check_finish__Vfuncrtn__Vcvt);
}

extern "C" void set_reg_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_reg_ptr(&a__Vopenarray);
}

extern "C" void set_csr_reg_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_csrfile__DOT__set_csr_reg_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 4096> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_csrfile__DOT__set_csr_reg_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {4095, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_csr_reg_ptr(&a__Vopenarray);
}

extern "C" void rtl_pmem_read(int raddr, int* rdata, svBit ren);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_lsu__DOT__rtl_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*0:0*/ ren) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_lsu__DOT__rtl_pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    svBit ren__Vcvt;
    for (size_t ren__Vidx = 0; ren__Vidx < 1; ++ren__Vidx) ren__Vcvt = ren;
    rtl_pmem_read(raddr__Vcvt, &rdata__Vcvt, ren__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void rtl_pmem_write(int waddr, int wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_lsu__DOT__rtl_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_lsu__DOT__rtl_pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    rtl_pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->i_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__i_clk))) 
                                      | ((~ (IData)(vlSelf->i_rst_n)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__i_rst_n)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->i_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__i_clk)));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->i_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__i_clk))) 
                                      | ((~ (IData)(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2)) 
                                         & (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__u_stdrst__DOT__rst_n_r2)));
    vlSelf->__Vtrigrprev__TOP__i_clk = vlSelf->i_clk;
    vlSelf->__Vtrigrprev__TOP__i_rst_n = vlSelf->i_rst_n;
    vlSelf->__Vtrigrprev__TOP__top__DOT__u_stdrst__DOT__rst_n_r2 
        = vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
