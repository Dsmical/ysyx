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
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(data,7,0);
    VL_OUT8(ascii_code,7,0);
    CData/*1:0*/ top__DOT__state;
    CData/*7:0*/ top__DOT__buff;
    CData/*7:0*/ top__DOT__count;
    CData/*0:0*/ top__DOT__flag_temp;
    CData/*0:0*/ top__DOT__flag;
    CData/*3:0*/ top__DOT__ps2_keyboard_init__DOT__count;
    CData/*2:0*/ top__DOT__ps2_keyboard_init__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT__ps2_keyboard_init__DOT____Vlvbound_h1a91ade8__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ top__DOT__ps2_value;
    SData/*9:0*/ top__DOT__ps2_keyboard_init__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(value_seg,41,0);
    VlUnpacked<CData/*7:0*/, 256> top__DOT__ScanCodeToASCII_init__DOT__lookup_table;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
