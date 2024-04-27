// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSR.h for the primary calling header

#include "verilated.h"

#include "VLFSR___024root.h"

void VLFSR___024root___eval_act(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 512> VLFSR__ConstPool__TABLE_h43c5b0e0_0;
extern const VlUnpacked<CData/*6:0*/, 16> VLFSR__ConstPool__TABLE_hb2a417e2_0;

VL_INLINE_OPT void VLFSR___024root___nba_sequent__TOP__0(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ LFSR__DOT____Vcellout__seg1__h;
    LFSR__DOT____Vcellout__seg1__h = 0;
    CData/*6:0*/ LFSR__DOT____Vcellout__seg0__h;
    LFSR__DOT____Vcellout__seg0__h = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->LFSR__DOT__state) 
                     << 1U) | (IData)(vlSelf->rst));
    vlSelf->LFSR__DOT__state = VLFSR__ConstPool__TABLE_h43c5b0e0_0
        [__Vtableidx1];
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

void VLFSR___024root___eval_nba(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VLFSR___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VLFSR___024root___eval_triggers__act(VLFSR___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VLFSR___024root___dump_triggers__act(VLFSR___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VLFSR___024root___dump_triggers__nba(VLFSR___024root* vlSelf);
#endif  // VL_DEBUG

void VLFSR___024root___eval(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VLFSR___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VLFSR___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/dsm/ysyx-workbench/dsm/verilator/LFSR/vsrc/LSFR.v", 29, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VLFSR___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VLFSR___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/dsm/ysyx-workbench/dsm/verilator/LFSR/vsrc/LSFR.v", 29, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VLFSR___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VLFSR___024root___eval_debug_assertions(VLFSR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLFSR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLFSR___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
