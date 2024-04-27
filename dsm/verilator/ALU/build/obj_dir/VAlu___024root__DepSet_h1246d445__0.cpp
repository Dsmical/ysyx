// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "verilated.h"

#include "VAlu__Syms.h"
#include "VAlu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__ico(VAlu___024root* vlSelf);
#endif  // VL_DEBUG

void VAlu___024root___eval_triggers__ico(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAlu___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAlu___024root___dump_triggers__act(VAlu___024root* vlSelf);
#endif  // VL_DEBUG

void VAlu___024root___eval_triggers__act(VAlu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAlu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAlu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (1U & (((((IData)(vlSelf->button) 
                                               >> 1U) 
                                              & (~ (IData)(vlSelf->__Vtrigprevexpr_h8fbfbcaa__0))) 
                                             | ((IData)(vlSelf->button) 
                                                & (~ (IData)(vlSelf->__Vtrigprevexpr_h8fcb19de__0)))) 
                                            | (((IData)(vlSelf->button) 
                                                >> 2U) 
                                               & (~ (IData)(vlSelf->__Vtrigprevexpr_h8fca47c0__0)))));
    vlSelf->__Vtrigprevexpr_h8fbfbcaa__0 = (1U & ((IData)(vlSelf->button) 
                                                  >> 1U));
    vlSelf->__Vtrigprevexpr_h8fcb19de__0 = (1U & (IData)(vlSelf->button));
    vlSelf->__Vtrigprevexpr_h8fca47c0__0 = (1U & ((IData)(vlSelf->button) 
                                                  >> 2U));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VAlu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
