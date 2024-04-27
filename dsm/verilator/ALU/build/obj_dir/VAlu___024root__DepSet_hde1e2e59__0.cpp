// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "verilated.h"

#include "VAlu___024root.h"

extern const VlUnpacked<CData/*6:0*/, 16> VAlu__ConstPool__TABLE_hafd3c2ae_0;

VL_INLINE_OPT void VAlu___024root___ico_sequent__TOP__0(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ Alu__DOT__b_comp;
    Alu__DOT__b_comp = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg6__h;
    Alu__DOT____Vcellout__seg6__h = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg5__h;
    Alu__DOT____Vcellout__seg5__h = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg4__h;
    Alu__DOT____Vcellout__seg4__h = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg3__h;
    Alu__DOT____Vcellout__seg3__h = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg2__h;
    Alu__DOT____Vcellout__seg2__h = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg1__h;
    Alu__DOT____Vcellout__seg1__h = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg0__h;
    Alu__DOT____Vcellout__seg0__h = 0;
    IData/*31:0*/ Alu__DOT____VdfgTmp_h6acde73f__0;
    Alu__DOT____VdfgTmp_h6acde73f__0 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    __Vtableidx3 = (0xaU | (4U & ((IData)(vlSelf->a_in) 
                                  >> 1U)));
    Alu__DOT____Vcellout__seg6__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx3];
    __Vtableidx4 = (7U & (IData)(vlSelf->a_in));
    Alu__DOT____Vcellout__seg5__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx4];
    __Vtableidx5 = (0xaU | (4U & ((IData)(vlSelf->b_in) 
                                  >> 1U)));
    Alu__DOT____Vcellout__seg4__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx5];
    __Vtableidx6 = (7U & (IData)(vlSelf->b_in));
    Alu__DOT____Vcellout__seg3__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx6];
    vlSelf->Alu__DOT__a = ((8U & (IData)(vlSelf->a_in))
                            ? ((8U & (IData)(vlSelf->a_in)) 
                               | (7U & ((IData)(1U) 
                                        + (~ (IData)(vlSelf->a_in)))))
                            : (IData)(vlSelf->a_in));
    vlSelf->Alu__DOT__b = ((8U & (IData)(vlSelf->b_in))
                            ? ((8U & (IData)(vlSelf->b_in)) 
                               | (7U & ((IData)(1U) 
                                        + (~ (IData)(vlSelf->b_in)))))
                            : (IData)(vlSelf->b_in));
    vlSelf->a_seg = (((IData)(Alu__DOT____Vcellout__seg6__h) 
                      << 7U) | (IData)(Alu__DOT____Vcellout__seg5__h));
    vlSelf->b_seg = (((IData)(Alu__DOT____Vcellout__seg4__h) 
                      << 7U) | (IData)(Alu__DOT____Vcellout__seg3__h));
    Alu__DOT__b_comp = (0xfU & ((- (IData)((1U & (IData)(vlSelf->mode)))) 
                                ^ (IData)(vlSelf->Alu__DOT__b)));
    if (vlSelf->Alu__DOT__en) {
        if ((4U & (IData)(vlSelf->mode))) {
            if ((2U & (IData)(vlSelf->mode))) {
                if ((1U & (IData)(vlSelf->mode))) {
                    vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                               == (IData)(vlSelf->Alu__DOT__b));
                    vlSelf->CF = 0U;
                    vlSelf->OF = 0U;
                } else {
                    vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                               < (IData)(vlSelf->Alu__DOT__b));
                    vlSelf->CF = 0U;
                    vlSelf->OF = 0U;
                }
            } else if ((1U & (IData)(vlSelf->mode))) {
                vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                           ^ (IData)(vlSelf->Alu__DOT__b));
                vlSelf->CF = 0U;
                vlSelf->OF = 0U;
            } else {
                vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                           | (IData)(vlSelf->Alu__DOT__b));
                vlSelf->CF = 0U;
                vlSelf->OF = 0U;
            }
        } else if ((2U & (IData)(vlSelf->mode))) {
            if ((1U & (IData)(vlSelf->mode))) {
                vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                           & (IData)(vlSelf->Alu__DOT__b));
                vlSelf->CF = 0U;
                vlSelf->OF = 0U;
            } else {
                vlSelf->Alu__DOT__value = (0xfU & (
                                                   (8U 
                                                    & (IData)(vlSelf->Alu__DOT__a))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->Alu__DOT__a)))
                                                    : 
                                                   (8U 
                                                    | (7U 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ (IData)(vlSelf->Alu__DOT__a)))))));
                vlSelf->CF = 0U;
                vlSelf->OF = 0U;
            }
        } else {
            vlSelf->Alu__DOT__value = (0xfU & ((IData)(Alu__DOT__b_comp) 
                                               + (IData)(vlSelf->mode)));
            vlSelf->Alu__DOT____Vconcswap_1_h47ba86f8__0 
                = (1U & (((IData)(vlSelf->Alu__DOT__value) 
                          + (IData)(vlSelf->Alu__DOT__a)) 
                         >> 4U));
            vlSelf->Alu__DOT____Vconcswap_1_h491ac6b5__0 
                = (0xfU & ((IData)(vlSelf->Alu__DOT__value) 
                           + (IData)(vlSelf->Alu__DOT__a)));
            vlSelf->CF = vlSelf->Alu__DOT____Vconcswap_1_h47ba86f8__0;
            vlSelf->Alu__DOT__value = vlSelf->Alu__DOT____Vconcswap_1_h491ac6b5__0;
            vlSelf->OF = (((1U & ((IData)(vlSelf->Alu__DOT__a) 
                                  >> 3U)) == (1U & 
                                              ((IData)(Alu__DOT__b_comp) 
                                               >> 3U))) 
                          & ((1U & ((IData)(vlSelf->Alu__DOT__value) 
                                    >> 3U)) != (1U 
                                                & ((IData)(vlSelf->Alu__DOT__a) 
                                                   >> 3U))));
        }
        vlSelf->ZF = (0U == (IData)(vlSelf->Alu__DOT__value));
    } else {
        vlSelf->Alu__DOT__value = 0U;
        vlSelf->CF = 0U;
        vlSelf->ZF = 0U;
        vlSelf->OF = 0U;
    }
    __Vtableidx7 = (0xaU | (4U & ((IData)(vlSelf->Alu__DOT__value) 
                                  >> 1U)));
    Alu__DOT____Vcellout__seg2__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx7];
    Alu__DOT____VdfgTmp_h6acde73f__0 = (0xfU & ((8U 
                                                 & (IData)(vlSelf->Alu__DOT__value))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelf->Alu__DOT__value)))
                                                 : (IData)(vlSelf->Alu__DOT__value)));
    __Vtableidx8 = (0xfU & VL_DIV_III(32, Alu__DOT____VdfgTmp_h6acde73f__0, (IData)(0xaU)));
    Alu__DOT____Vcellout__seg1__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx8];
    __Vtableidx9 = (0xfU & VL_MODDIV_III(32, Alu__DOT____VdfgTmp_h6acde73f__0, (IData)(0xaU)));
    Alu__DOT____Vcellout__seg0__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx9];
    vlSelf->value_seg = (((IData)(Alu__DOT____Vcellout__seg2__h) 
                          << 0xeU) | (((IData)(Alu__DOT____Vcellout__seg1__h) 
                                       << 7U) | (IData)(Alu__DOT____Vcellout__seg0__h)));
}

void VAlu___024root___eval_ico(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VAlu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VAlu___024root___eval_act(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 128> VAlu__ConstPool__TABLE_hacb6b215_0;
extern const VlUnpacked<CData/*1:0*/, 128> VAlu__ConstPool__TABLE_hbea119dc_0;
extern const VlUnpacked<CData/*2:0*/, 128> VAlu__ConstPool__TABLE_h0f767830_0;

VL_INLINE_OPT void VAlu___024root___nba_sequent__TOP__0(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->mode) << 4U) | 
                    (((IData)(vlSelf->Alu__DOT__en) 
                      << 3U) | (IData)(vlSelf->button)));
    vlSelf->Alu__DOT__en = VAlu__ConstPool__TABLE_hacb6b215_0
        [__Vtableidx1];
    if ((2U & VAlu__ConstPool__TABLE_hbea119dc_0[__Vtableidx1])) {
        vlSelf->mode = VAlu__ConstPool__TABLE_h0f767830_0
            [__Vtableidx1];
    }
    __Vtableidx2 = vlSelf->mode;
    vlSelf->mode_seg = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx2];
}

VL_INLINE_OPT void VAlu___024root___nba_sequent__TOP__1(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ Alu__DOT__b_comp;
    Alu__DOT__b_comp = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg2__h;
    Alu__DOT____Vcellout__seg2__h = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg1__h;
    Alu__DOT____Vcellout__seg1__h = 0;
    CData/*6:0*/ Alu__DOT____Vcellout__seg0__h;
    Alu__DOT____Vcellout__seg0__h = 0;
    IData/*31:0*/ Alu__DOT____VdfgTmp_h6acde73f__0;
    Alu__DOT____VdfgTmp_h6acde73f__0 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    Alu__DOT__b_comp = (0xfU & ((- (IData)((1U & (IData)(vlSelf->mode)))) 
                                ^ (IData)(vlSelf->Alu__DOT__b)));
    if (vlSelf->Alu__DOT__en) {
        if ((4U & (IData)(vlSelf->mode))) {
            if ((2U & (IData)(vlSelf->mode))) {
                if ((1U & (IData)(vlSelf->mode))) {
                    vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                               == (IData)(vlSelf->Alu__DOT__b));
                    vlSelf->CF = 0U;
                    vlSelf->OF = 0U;
                } else {
                    vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                               < (IData)(vlSelf->Alu__DOT__b));
                    vlSelf->CF = 0U;
                    vlSelf->OF = 0U;
                }
            } else if ((1U & (IData)(vlSelf->mode))) {
                vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                           ^ (IData)(vlSelf->Alu__DOT__b));
                vlSelf->CF = 0U;
                vlSelf->OF = 0U;
            } else {
                vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                           | (IData)(vlSelf->Alu__DOT__b));
                vlSelf->CF = 0U;
                vlSelf->OF = 0U;
            }
        } else if ((2U & (IData)(vlSelf->mode))) {
            if ((1U & (IData)(vlSelf->mode))) {
                vlSelf->Alu__DOT__value = ((IData)(vlSelf->Alu__DOT__a) 
                                           & (IData)(vlSelf->Alu__DOT__b));
                vlSelf->CF = 0U;
                vlSelf->OF = 0U;
            } else {
                vlSelf->Alu__DOT__value = (0xfU & (
                                                   (8U 
                                                    & (IData)(vlSelf->Alu__DOT__a))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->Alu__DOT__a)))
                                                    : 
                                                   (8U 
                                                    | (7U 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ (IData)(vlSelf->Alu__DOT__a)))))));
                vlSelf->CF = 0U;
                vlSelf->OF = 0U;
            }
        } else {
            vlSelf->Alu__DOT__value = (0xfU & ((IData)(Alu__DOT__b_comp) 
                                               + (IData)(vlSelf->mode)));
            vlSelf->Alu__DOT____Vconcswap_1_h47ba86f8__0 
                = (1U & (((IData)(vlSelf->Alu__DOT__value) 
                          + (IData)(vlSelf->Alu__DOT__a)) 
                         >> 4U));
            vlSelf->Alu__DOT____Vconcswap_1_h491ac6b5__0 
                = (0xfU & ((IData)(vlSelf->Alu__DOT__value) 
                           + (IData)(vlSelf->Alu__DOT__a)));
            vlSelf->CF = vlSelf->Alu__DOT____Vconcswap_1_h47ba86f8__0;
            vlSelf->Alu__DOT__value = vlSelf->Alu__DOT____Vconcswap_1_h491ac6b5__0;
            vlSelf->OF = (((1U & ((IData)(vlSelf->Alu__DOT__a) 
                                  >> 3U)) == (1U & 
                                              ((IData)(Alu__DOT__b_comp) 
                                               >> 3U))) 
                          & ((1U & ((IData)(vlSelf->Alu__DOT__value) 
                                    >> 3U)) != (1U 
                                                & ((IData)(vlSelf->Alu__DOT__a) 
                                                   >> 3U))));
        }
        vlSelf->ZF = (0U == (IData)(vlSelf->Alu__DOT__value));
    } else {
        vlSelf->Alu__DOT__value = 0U;
        vlSelf->CF = 0U;
        vlSelf->ZF = 0U;
        vlSelf->OF = 0U;
    }
    __Vtableidx7 = (0xaU | (4U & ((IData)(vlSelf->Alu__DOT__value) 
                                  >> 1U)));
    Alu__DOT____Vcellout__seg2__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx7];
    Alu__DOT____VdfgTmp_h6acde73f__0 = (0xfU & ((8U 
                                                 & (IData)(vlSelf->Alu__DOT__value))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 (~ (IData)(vlSelf->Alu__DOT__value)))
                                                 : (IData)(vlSelf->Alu__DOT__value)));
    __Vtableidx8 = (0xfU & VL_DIV_III(32, Alu__DOT____VdfgTmp_h6acde73f__0, (IData)(0xaU)));
    Alu__DOT____Vcellout__seg1__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx8];
    __Vtableidx9 = (0xfU & VL_MODDIV_III(32, Alu__DOT____VdfgTmp_h6acde73f__0, (IData)(0xaU)));
    Alu__DOT____Vcellout__seg0__h = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx9];
    vlSelf->value_seg = (((IData)(Alu__DOT____Vcellout__seg2__h) 
                          << 0xeU) | (((IData)(Alu__DOT____Vcellout__seg1__h) 
                                       << 7U) | (IData)(Alu__DOT____Vcellout__seg0__h)));
}

void VAlu___024root___eval_nba(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VAlu___024root___nba_sequent__TOP__0(vlSelf);
        VAlu___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VAlu___024root___eval_triggers__ico(VAlu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__ico(VAlu___024root* vlSelf);
#endif  // VL_DEBUG
void VAlu___024root___eval_triggers__act(VAlu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__act(VAlu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__nba(VAlu___024root* vlSelf);
#endif  // VL_DEBUG

void VAlu___024root___eval(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VAlu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VAlu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/dsm/ysyx-workbench/dsm/verilator/ALU/vsrc/Alu.v", 43, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VAlu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VAlu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VAlu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/dsm/ysyx-workbench/dsm/verilator/ALU/vsrc/Alu.v", 43, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VAlu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VAlu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/dsm/ysyx-workbench/dsm/verilator/ALU/vsrc/Alu.v", 43, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VAlu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VAlu___024root___eval_debug_assertions(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a_in & 0xf0U))) {
        Verilated::overWidthError("a_in");}
    if (VL_UNLIKELY((vlSelf->b_in & 0xf0U))) {
        Verilated::overWidthError("b_in");}
    if (VL_UNLIKELY((vlSelf->button & 0xf8U))) {
        Verilated::overWidthError("button");}
}
#endif  // VL_DEBUG
