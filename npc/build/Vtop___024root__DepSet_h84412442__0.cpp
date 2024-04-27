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
