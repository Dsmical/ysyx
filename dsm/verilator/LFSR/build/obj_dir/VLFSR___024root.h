// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLFSR.h for the primary calling header

#ifndef VERILATED_VLFSR___024ROOT_H_
#define VERILATED_VLFSR___024ROOT_H_  // guard

#include "verilated.h"

class VLFSR__Syms;

class VLFSR___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*7:0*/ LFSR__DOT__state;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__rst;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(lfsr_seg,13,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VLFSR__Syms* const vlSymsp;

    // CONSTRUCTORS
    VLFSR___024root(VLFSR__Syms* symsp, const char* v__name);
    ~VLFSR___024root();
    VL_UNCOPYABLE(VLFSR___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
