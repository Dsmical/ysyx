// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLFSR.h for the primary calling header

#include "verilated.h"

#include "VLFSR__Syms.h"
#include "VLFSR___024root.h"

void VLFSR___024root___ctor_var_reset(VLFSR___024root* vlSelf);

VLFSR___024root::VLFSR___024root(VLFSR__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VLFSR___024root___ctor_var_reset(this);
}

void VLFSR___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VLFSR___024root::~VLFSR___024root() {
}
