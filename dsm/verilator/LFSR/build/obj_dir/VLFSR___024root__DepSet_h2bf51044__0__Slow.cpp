// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSR.h for the primary calling header

#include "verilated.h"

#include "VLFSR___024root.h"

VL_ATTR_COLD void VLFSR___024root___eval_static__TOP(VLFSR___024root* vlSelf);

VL_ATTR_COLD void VLFSR___024root___eval_static(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_static\n"); );
    // Body
    VLFSR___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VLFSR___024root___eval_static__TOP(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->LFSR__DOT__state = 1U;
}

VL_ATTR_COLD void VLFSR___024root___eval_initial(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void VLFSR___024root___eval_final(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_final\n"); );
}

VL_ATTR_COLD void VLFSR___024root___eval_triggers__stl(VLFSR___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VLFSR___024root___dump_triggers__stl(VLFSR___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VLFSR___024root___eval_stl(VLFSR___024root* vlSelf);

VL_ATTR_COLD void VLFSR___024root___eval_settle(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VLFSR___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VLFSR___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/dsm/ysyx-workbench/dsm/verilator/LFSR/vsrc/LSFR.v", 29, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VLFSR___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLFSR___024root___dump_triggers__stl(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> VLFSR__ConstPool__TABLE_hb2a417e2_0;

VL_ATTR_COLD void VLFSR___024root___stl_sequent__TOP__0(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ LFSR__DOT____Vcellout__seg1__h;
    LFSR__DOT____Vcellout__seg1__h = 0;
    CData/*6:0*/ LFSR__DOT____Vcellout__seg0__h;
    LFSR__DOT____Vcellout__seg0__h = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->LFSR__DOT__state) 
                            >> 4U));
    LFSR__DOT____Vcellout__seg1__h = VLFSR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & (IData)(vlSelf->LFSR__DOT__state));
    LFSR__DOT____Vcellout__seg0__h = VLFSR__ConstPool__TABLE_hb2a417e2_0
        [__Vtableidx3];
    vlSelf->lfsr_seg = (((IData)(LFSR__DOT____Vcellout__seg1__h) 
                         << 7U) | (IData)(LFSR__DOT____Vcellout__seg0__h));
}

VL_ATTR_COLD void VLFSR___024root___eval_stl(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VLFSR___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLFSR___024root___dump_triggers__act(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VLFSR___024root___dump_triggers__nba(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VLFSR___024root___ctor_var_reset(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->lfsr_seg = 0;
    vlSelf->LFSR__DOT__state = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    vlSelf->__Vtrigrprev__TOP__rst = 0;
}
