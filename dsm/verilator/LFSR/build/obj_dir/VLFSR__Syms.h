// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLFSR__SYMS_H_
#define VERILATED_VLFSR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VLFSR.h"

// INCLUDE MODULE CLASSES
#include "VLFSR___024root.h"

// SYMS CLASS (contains all model state)
class VLFSR__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VLFSR* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VLFSR___024root                TOP;

    // CONSTRUCTORS
    VLFSR__Syms(VerilatedContext* contextp, const char* namep, VLFSR* modelp);
    ~VLFSR__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
