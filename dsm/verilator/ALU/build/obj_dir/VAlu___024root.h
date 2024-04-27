// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAlu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class VAlu__Syms;

class VAlu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a_in,3,0);
    VL_IN8(b_in,3,0);
    VL_IN8(button,2,0);
    VL_OUT8(OF,0,0);
    VL_OUT8(CF,0,0);
    VL_OUT8(ZF,0,0);
    VL_OUT8(mode,2,0);
    VL_OUT8(mode_seg,6,0);
    CData/*0:0*/ Alu__DOT__en;
    CData/*3:0*/ Alu__DOT__a;
    CData/*3:0*/ Alu__DOT__b;
    CData/*3:0*/ Alu__DOT__value;
    CData/*0:0*/ Alu__DOT____Vconcswap_1_h47ba86f8__0;
    CData/*3:0*/ Alu__DOT____Vconcswap_1_h491ac6b5__0;
    CData/*0:0*/ __Vtrigprevexpr_h8fbfbcaa__0;
    CData/*0:0*/ __Vtrigprevexpr_h8fcb19de__0;
    CData/*0:0*/ __Vtrigprevexpr_h8fca47c0__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(a_seg,13,0);
    VL_OUT16(b_seg,13,0);
    VL_OUT(value_seg,20,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAlu__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAlu___024root(VAlu__Syms* symsp, const char* v__name);
    ~VAlu___024root();
    VL_UNCOPYABLE(VAlu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
