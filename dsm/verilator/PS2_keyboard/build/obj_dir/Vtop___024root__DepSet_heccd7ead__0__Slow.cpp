// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0xffU)) {
        vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x76U] = 0x1bU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[5U] = 0x70U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[6U] = 0x71U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[4U] = 0x72U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0xcU] = 0x73U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[3U] = 0x74U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0xbU] = 0x75U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x83U] = 0x76U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0xaU] = 0x77U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[1U] = 0x78U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[9U] = 0x79U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x78U] = 0x7aU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[7U] = 0x7bU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x1cU] = 0x41U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x32U] = 0x42U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x21U] = 0x43U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x23U] = 0x44U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x24U] = 0x45U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x2bU] = 0x46U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x34U] = 0x47U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x33U] = 0x48U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x43U] = 0x49U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x3bU] = 0x4aU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x42U] = 0x4bU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x4bU] = 0x4cU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x3aU] = 0x4dU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x31U] = 0x4eU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x44U] = 0x4fU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x4dU] = 0x50U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x15U] = 0x51U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x2dU] = 0x52U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x1bU] = 0x53U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x2cU] = 0x54U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x3cU] = 0x55U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x2aU] = 0x56U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x1dU] = 0x57U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x22U] = 0x58U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x35U] = 0x59U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x1aU] = 0x5aU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0xeU] = 0xc0U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x16U] = 0x60U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x1eU] = 0x61U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x26U] = 0x62U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x25U] = 0x63U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x2eU] = 0x64U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x36U] = 0x65U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x3dU] = 0x66U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x3eU] = 0x67U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x46U] = 0x68U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x45U] = 0x69U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x4eU] = 0xbdU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x55U] = 0xbbU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x5dU] = 0xdcU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x66U] = 0x2eU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0xdU] = 9U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x58U] = 0x14U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x12U] = 0x10U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x14U] = 0x11U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x11U] = 0x12U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x29U] = 0x20U;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x41U] = 0xbcU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x49U] = 0xbeU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x4aU] = 0xbfU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x4cU] = 0xbaU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x52U] = 0xdeU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x54U] = 0xdbU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x5bU] = 0xddU;
    vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[0x5aU] = 0x6cU;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/dsm/ysyx-workbench/dsm/verilator/PS2_keyboard/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_he578b082_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ top__DOT____Vcellout__seg5__h;
    top__DOT____Vcellout__seg5__h = 0;
    CData/*6:0*/ top__DOT____Vcellout__seg4__h;
    top__DOT____Vcellout__seg4__h = 0;
    CData/*6:0*/ top__DOT____Vcellout__seg3__h;
    top__DOT____Vcellout__seg3__h = 0;
    CData/*6:0*/ top__DOT____Vcellout__seg2__h;
    top__DOT____Vcellout__seg2__h = 0;
    CData/*6:0*/ top__DOT____Vcellout__seg1__h;
    top__DOT____Vcellout__seg1__h = 0;
    CData/*6:0*/ top__DOT____Vcellout__seg0__h;
    top__DOT____Vcellout__seg0__h = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    // Body
    __Vtableidx1 = (0xfU & ((IData)(vlSelf->top__DOT__count) 
                            >> 4U));
    top__DOT____Vcellout__seg5__h = Vtop__ConstPool__TABLE_he578b082_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & (IData)(vlSelf->top__DOT__count));
    top__DOT____Vcellout__seg4__h = Vtop__ConstPool__TABLE_he578b082_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->top__DOT__ps2_value) 
                            >> 0xcU));
    top__DOT____Vcellout__seg3__h = Vtop__ConstPool__TABLE_he578b082_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->top__DOT__ps2_value) 
                            >> 8U));
    top__DOT____Vcellout__seg2__h = Vtop__ConstPool__TABLE_he578b082_0
        [__Vtableidx4];
    __Vtableidx5 = (0xfU & ((IData)(vlSelf->top__DOT__ps2_value) 
                            >> 4U));
    top__DOT____Vcellout__seg1__h = Vtop__ConstPool__TABLE_he578b082_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & (IData)(vlSelf->top__DOT__ps2_value));
    top__DOT____Vcellout__seg0__h = Vtop__ConstPool__TABLE_he578b082_0
        [__Vtableidx6];
    vlSelf->value_seg = (((QData)((IData)(top__DOT____Vcellout__seg5__h)) 
                          << 0x23U) | (((QData)((IData)(top__DOT____Vcellout__seg4__h)) 
                                        << 0x1cU) | (QData)((IData)(
                                                                    (((IData)(top__DOT____Vcellout__seg3__h) 
                                                                      << 0x15U) 
                                                                     | (((IData)(top__DOT____Vcellout__seg2__h) 
                                                                         << 0xeU) 
                                                                        | (((IData)(top__DOT____Vcellout__seg1__h) 
                                                                            << 7U) 
                                                                           | (IData)(top__DOT____Vcellout__seg0__h))))))));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst_n = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->data = 0;
    vlSelf->ascii_code = 0;
    vlSelf->value_seg = 0;
    vlSelf->top__DOT__state = 0;
    vlSelf->top__DOT__buff = 0;
    vlSelf->top__DOT__count = 0;
    vlSelf->top__DOT__ps2_value = 0;
    vlSelf->top__DOT__flag_temp = 0;
    vlSelf->top__DOT__flag = 0;
    vlSelf->top__DOT__ps2_keyboard_init__DOT__buffer = 0;
    vlSelf->top__DOT__ps2_keyboard_init__DOT__count = 0;
    vlSelf->top__DOT__ps2_keyboard_init__DOT__ps2_clk_sync = 0;
    vlSelf->top__DOT__ps2_keyboard_init__DOT____Vlvbound_h1a91ade8__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ScanCodeToASCII_init__DOT__lookup_table[__Vi0] = 0;
    }
    vlSelf->__Vtrigrprev__TOP__clk = 0;
}
