// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "verilated.h"

#include "VAlu___024root.h"

VL_ATTR_COLD void VAlu___024root___eval_static(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_static\n"); );
}

VL_ATTR_COLD void VAlu___024root___eval_initial(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr_h8fbfbcaa__0 = (1U & ((IData)(vlSelf->button) 
                                                  >> 1U));
    vlSelf->__Vtrigprevexpr_h8fcb19de__0 = (1U & (IData)(vlSelf->button));
    vlSelf->__Vtrigprevexpr_h8fca47c0__0 = (1U & ((IData)(vlSelf->button) 
                                                  >> 2U));
}

VL_ATTR_COLD void VAlu___024root___eval_final(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_final\n"); );
}

VL_ATTR_COLD void VAlu___024root___eval_triggers__stl(VAlu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__stl(VAlu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VAlu___024root___eval_stl(VAlu___024root* vlSelf);

VL_ATTR_COLD void VAlu___024root___eval_settle(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VAlu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VAlu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/dsm/ysyx-workbench/dsm/verilator/ALU/vsrc/Alu.v", 43, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VAlu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__stl(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> VAlu__ConstPool__TABLE_hafd3c2ae_0;

VL_ATTR_COLD void VAlu___024root___stl_sequent__TOP__0(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___stl_sequent__TOP__0\n"); );
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
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
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
    __Vtableidx2 = vlSelf->mode;
    vlSelf->mode_seg = VAlu__ConstPool__TABLE_hafd3c2ae_0
        [__Vtableidx2];
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

VL_ATTR_COLD void VAlu___024root___eval_stl(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VAlu___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__ico(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__act(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge button[1] or posedge button[0] or posedge button[2])\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__nba(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge button[1] or posedge button[0] or posedge button[2])\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VAlu___024root___ctor_var_reset(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a_in = 0;
    vlSelf->b_in = 0;
    vlSelf->button = 0;
    vlSelf->OF = 0;
    vlSelf->CF = 0;
    vlSelf->ZF = 0;
    vlSelf->mode = 0;
    vlSelf->mode_seg = 0;
    vlSelf->a_seg = 0;
    vlSelf->b_seg = 0;
    vlSelf->value_seg = 0;
    vlSelf->Alu__DOT__en = 0;
    vlSelf->Alu__DOT__a = 0;
    vlSelf->Alu__DOT__b = 0;
    vlSelf->Alu__DOT__value = 0;
    vlSelf->Alu__DOT____Vconcswap_1_h47ba86f8__0 = 0;
    vlSelf->Alu__DOT____Vconcswap_1_h491ac6b5__0 = 0;
    vlSelf->__Vtrigprevexpr_h8fbfbcaa__0 = 0;
    vlSelf->__Vtrigprevexpr_h8fcb19de__0 = 0;
    vlSelf->__Vtrigprevexpr_h8fca47c0__0 = 0;
}
