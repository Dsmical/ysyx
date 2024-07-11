// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

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
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__i_clk = vlSelf->i_clk;
    vlSelf->__Vtrigrprev__TOP__i_rst_n = vlSelf->i_rst_n;
    vlSelf->__Vtrigrprev__TOP__top__DOT__u_stdrst__DOT__rst_n_r2 
        = vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2;
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a);
void Vtop___024root____Vdpiimwrap_top__DOT__u_csrfile__DOT__set_csr_reg_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 4096> &a);

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[0U] = 0x700000000ULL;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[1U] = 0x600000000ULL;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[2U] = 0x500000000ULL;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[3U] = 0x400000000ULL;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[5U] = 4U;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[5U] = 0x200000004ULL;
    Vtop___024root____Vdpiimwrap_top__DOT__u_regfile__DOT__set_reg_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_regfile__DOT__rf);
    Vtop___024root____Vdpiimwrap_top__DOT__u_csrfile__DOT__set_csr_reg_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_csrfile__DOT__csr);
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
                VL_FATAL_MT("/home/dsm/ysyx-workbench/npc/vsrc/top.v", 2, "", "Settle region did not converge.");
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

void Vtop___024root____Vdpiimwrap_top__DOT__check_finish_TOP(IData/*31:0*/ finish_flag, CData/*0:0*/ &check_finish__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__u_lsu__DOT__rtl_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__u_lsu__DOT__rtl_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*0:0*/ ren);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__rdid = 0U;
    vlSelf->top__DOT__rdwen = 0U;
    vlSelf->top__DOT__u_idu__DOT__id_err = 0U;
    if ((0x40U & vlSelf->ins)) {
        if ((0x20U & vlSelf->ins)) {
            if ((0x10U & vlSelf->ins)) {
                if ((1U & (~ (vlSelf->ins >> 3U)))) {
                    if ((1U & (~ (vlSelf->ins >> 2U)))) {
                        if ((2U & vlSelf->ins)) {
                            if ((1U & vlSelf->ins)) {
                                vlSelf->top__DOT__rdid 
                                    = (0x1fU & (vlSelf->ins 
                                                >> 7U));
                                vlSelf->top__DOT__rdwen = 1U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->ins)) {
                    vlSelf->top__DOT__u_idu__DOT__id_err 
                        = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                } else if ((4U & vlSelf->ins)) {
                    vlSelf->top__DOT__u_idu__DOT__id_err 
                        = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                } else if ((2U & vlSelf->ins)) {
                    if ((1U & (~ vlSelf->ins))) {
                        vlSelf->top__DOT__u_idu__DOT__id_err 
                            = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                    }
                } else {
                    vlSelf->top__DOT__u_idu__DOT__id_err 
                        = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                }
            } else if ((8U & vlSelf->ins)) {
                if ((4U & vlSelf->ins)) {
                    if ((2U & vlSelf->ins)) {
                        if ((1U & vlSelf->ins)) {
                            vlSelf->top__DOT__rdid 
                                = (0x1fU & (vlSelf->ins 
                                            >> 7U));
                            vlSelf->top__DOT__rdwen = 1U;
                        }
                        if ((1U & (~ vlSelf->ins))) {
                            vlSelf->top__DOT__u_idu__DOT__id_err 
                                = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                        }
                    } else {
                        vlSelf->top__DOT__u_idu__DOT__id_err 
                            = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                    }
                } else {
                    vlSelf->top__DOT__u_idu__DOT__id_err 
                        = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                }
            } else if ((4U & vlSelf->ins)) {
                if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
                        vlSelf->top__DOT__rdid = (0x1fU 
                                                  & (vlSelf->ins 
                                                     >> 7U));
                        vlSelf->top__DOT__rdwen = 1U;
                    }
                    if ((1U & (~ vlSelf->ins))) {
                        vlSelf->top__DOT__u_idu__DOT__id_err 
                            = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                    }
                } else {
                    vlSelf->top__DOT__u_idu__DOT__id_err 
                        = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                }
            } else if ((2U & vlSelf->ins)) {
                if ((1U & vlSelf->ins)) {
                    if ((1U & (~ (vlSelf->ins >> 0xeU)))) {
                        if ((0x2000U & vlSelf->ins)) {
                            vlSelf->top__DOT__u_idu__DOT__id_err 
                                = (2U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                        }
                    }
                } else {
                    vlSelf->top__DOT__u_idu__DOT__id_err 
                        = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                }
            } else {
                vlSelf->top__DOT__u_idu__DOT__id_err 
                    = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
            }
        } else {
            vlSelf->top__DOT__u_idu__DOT__id_err = 
                (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
        }
    } else if ((0x20U & vlSelf->ins)) {
        if ((0x10U & vlSelf->ins)) {
            if ((1U & (~ (vlSelf->ins >> 3U)))) {
                if ((4U & vlSelf->ins)) {
                    if ((2U & vlSelf->ins)) {
                        if ((1U & vlSelf->ins)) {
                            vlSelf->top__DOT__rdid 
                                = (0x1fU & (vlSelf->ins 
                                            >> 7U));
                            vlSelf->top__DOT__rdwen = 1U;
                        }
                    }
                } else if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
                        vlSelf->top__DOT__rdid = (0x1fU 
                                                  & (vlSelf->ins 
                                                     >> 7U));
                        vlSelf->top__DOT__rdwen = 1U;
                    }
                }
            }
            if ((8U & vlSelf->ins)) {
                vlSelf->top__DOT__u_idu__DOT__id_err 
                    = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
            } else if ((4U & vlSelf->ins)) {
                if ((2U & vlSelf->ins)) {
                    if ((1U & (~ vlSelf->ins))) {
                        vlSelf->top__DOT__u_idu__DOT__id_err 
                            = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                    }
                } else {
                    vlSelf->top__DOT__u_idu__DOT__id_err 
                        = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                }
            } else if ((2U & vlSelf->ins)) {
                if ((1U & vlSelf->ins)) {
                    if ((0x4000U & vlSelf->ins)) {
                        if ((0x2000U & vlSelf->ins)) {
                            if ((0x1000U & vlSelf->ins)) {
                                if ((0U != (vlSelf->ins 
                                            >> 0x19U))) {
                                    vlSelf->top__DOT__u_idu__DOT__id_err 
                                        = (4U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                                }
                            } else if ((0U != (vlSelf->ins 
                                               >> 0x19U))) {
                                vlSelf->top__DOT__u_idu__DOT__id_err 
                                    = (4U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                            }
                        } else if ((0x1000U & vlSelf->ins)) {
                            if ((0U != (vlSelf->ins 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelf->ins 
                                               >> 0x19U))) {
                                    vlSelf->top__DOT__u_idu__DOT__id_err 
                                        = (4U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                                }
                            }
                        } else if ((0U != (vlSelf->ins 
                                           >> 0x19U))) {
                            vlSelf->top__DOT__u_idu__DOT__id_err 
                                = (4U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                        }
                    } else if ((0x2000U & vlSelf->ins)) {
                        if ((0x1000U & vlSelf->ins)) {
                            if ((0U != (vlSelf->ins 
                                        >> 0x19U))) {
                                vlSelf->top__DOT__u_idu__DOT__id_err 
                                    = (4U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                            }
                        } else if ((0U != (vlSelf->ins 
                                           >> 0x19U))) {
                            vlSelf->top__DOT__u_idu__DOT__id_err 
                                = (4U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                        }
                    } else if ((0x1000U & vlSelf->ins)) {
                        if ((0U != (vlSelf->ins >> 0x19U))) {
                            vlSelf->top__DOT__u_idu__DOT__id_err 
                                = (4U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                        }
                    } else if ((0U != (vlSelf->ins 
                                       >> 0x19U))) {
                        if ((0x20U != (vlSelf->ins 
                                       >> 0x19U))) {
                            vlSelf->top__DOT__u_idu__DOT__id_err 
                                = (4U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                        }
                    }
                } else {
                    vlSelf->top__DOT__u_idu__DOT__id_err 
                        = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                }
            } else {
                vlSelf->top__DOT__u_idu__DOT__id_err 
                    = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
            }
        } else if ((8U & vlSelf->ins)) {
            vlSelf->top__DOT__u_idu__DOT__id_err = 
                (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
        } else if ((4U & vlSelf->ins)) {
            vlSelf->top__DOT__u_idu__DOT__id_err = 
                (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
        } else if ((2U & vlSelf->ins)) {
            if ((1U & (~ vlSelf->ins))) {
                vlSelf->top__DOT__u_idu__DOT__id_err 
                    = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
            }
        } else {
            vlSelf->top__DOT__u_idu__DOT__id_err = 
                (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
        }
    } else if ((0x10U & vlSelf->ins)) {
        if ((1U & (~ (vlSelf->ins >> 3U)))) {
            if ((4U & vlSelf->ins)) {
                if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
                        vlSelf->top__DOT__rdid = (0x1fU 
                                                  & (vlSelf->ins 
                                                     >> 7U));
                        vlSelf->top__DOT__rdwen = 1U;
                    }
                }
            } else if ((2U & vlSelf->ins)) {
                if ((1U & vlSelf->ins)) {
                    vlSelf->top__DOT__rdid = (0x1fU 
                                              & (vlSelf->ins 
                                                 >> 7U));
                    vlSelf->top__DOT__rdwen = 1U;
                }
            }
        }
        if ((8U & vlSelf->ins)) {
            vlSelf->top__DOT__u_idu__DOT__id_err = 
                (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
        } else if ((4U & vlSelf->ins)) {
            if ((2U & vlSelf->ins)) {
                if ((1U & (~ vlSelf->ins))) {
                    vlSelf->top__DOT__u_idu__DOT__id_err 
                        = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                }
            } else {
                vlSelf->top__DOT__u_idu__DOT__id_err 
                    = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
            }
        } else if ((2U & vlSelf->ins)) {
            if ((1U & vlSelf->ins)) {
                if ((0x4000U & vlSelf->ins)) {
                    if ((1U & (~ (vlSelf->ins >> 0xdU)))) {
                        if ((0x1000U & vlSelf->ins)) {
                            if ((0U != (vlSelf->ins 
                                        >> 0x1aU))) {
                                if ((0x10U != (vlSelf->ins 
                                               >> 0x1aU))) {
                                    vlSelf->top__DOT__u_idu__DOT__id_err 
                                        = (4U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->top__DOT__u_idu__DOT__id_err 
                    = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
            }
        } else {
            vlSelf->top__DOT__u_idu__DOT__id_err = 
                (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
        }
    } else {
        if ((1U & (~ (vlSelf->ins >> 3U)))) {
            if ((1U & (~ (vlSelf->ins >> 2U)))) {
                if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
                        vlSelf->top__DOT__rdid = (0x1fU 
                                                  & (vlSelf->ins 
                                                     >> 7U));
                        vlSelf->top__DOT__rdwen = 1U;
                    }
                }
            }
        }
        if ((8U & vlSelf->ins)) {
            vlSelf->top__DOT__u_idu__DOT__id_err = 
                (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
        } else if ((4U & vlSelf->ins)) {
            vlSelf->top__DOT__u_idu__DOT__id_err = 
                (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
        } else if ((2U & vlSelf->ins)) {
            if ((1U & (~ vlSelf->ins))) {
                vlSelf->top__DOT__u_idu__DOT__id_err 
                    = (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
            }
        } else {
            vlSelf->top__DOT__u_idu__DOT__id_err = 
                (1U | (IData)(vlSelf->top__DOT__u_idu__DOT__id_err));
        }
    }
    Vtop___024root____Vdpiimwrap_top__DOT__check_finish_TOP(vlSelf->ins, vlSelf->__Vfunc_top__DOT__check_finish__0__Vfuncout);
    if (VL_UNLIKELY(vlSelf->__Vfunc_top__DOT__check_finish__0__Vfuncout)) {
        VL_WRITEF("\n----------EBREAK: HIT !!%s!! TRAP!!---------------\n\n",
                  32,((0U != vlSelf->top__DOT__u_regfile__DOT__rf
                       [0xaU]) ? 0x424144U : 0x474f4f44U));
        VL_FINISH_MT("/home/dsm/ysyx-workbench/npc/vsrc/top.v", 134, "");
    }
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[5U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__lsu_opt = ((3U == (0x7fU & vlSelf->ins))
                                  ? (0xeU & (vlSelf->ins 
                                             >> 0xbU))
                                  : ((0x23U == (0x7fU 
                                                & vlSelf->ins))
                                      ? (1U | (0xeU 
                                               & (vlSelf->ins 
                                                  >> 0xbU)))
                                      : 0xfU));
    vlSelf->top__DOT__exu_opt = 1U;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[4U] 
        = vlSelf->pc;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[5U] 
        = vlSelf->pc;
    vlSelf->top__DOT__rs2id = 0U;
    vlSelf->top__DOT__exu_src_sel = 1U;
    vlSelf->top__DOT__rs1id = 0U;
    vlSelf->top__DOT__imm = 0U;
    if ((0x40U & vlSelf->ins)) {
        if ((0x20U & vlSelf->ins)) {
            if ((0x10U & vlSelf->ins)) {
                if ((1U & (~ (vlSelf->ins >> 3U)))) {
                    if ((1U & (~ (vlSelf->ins >> 2U)))) {
                        if ((2U & vlSelf->ins)) {
                            if ((1U & vlSelf->ins)) {
                                if ((1U == (7U & (vlSelf->ins 
                                                  >> 0xcU)))) {
                                    vlSelf->top__DOT__exu_opt = 1U;
                                } else if ((2U == (7U 
                                                   & (vlSelf->ins 
                                                      >> 0xcU)))) {
                                    vlSelf->top__DOT__exu_opt = 1U;
                                }
                                vlSelf->top__DOT__exu_src_sel = 4U;
                                vlSelf->top__DOT__rs1id 
                                    = (0x1fU & (vlSelf->ins 
                                                >> 0xfU));
                                vlSelf->top__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ins 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->ins 
                                        >> 0x14U));
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelf->ins)) {
                    if ((4U & vlSelf->ins)) {
                        if ((2U & vlSelf->ins)) {
                            if ((1U & vlSelf->ins)) {
                                vlSelf->top__DOT__exu_opt = 1U;
                                vlSelf->top__DOT__exu_src_sel = 2U;
                                vlSelf->top__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ins 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->ins) 
                                        | ((0x800U 
                                            & (vlSelf->ins 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->ins 
                                                 >> 0x14U)))));
                            }
                        }
                    }
                } else if ((4U & vlSelf->ins)) {
                    if ((2U & vlSelf->ins)) {
                        if ((1U & vlSelf->ins)) {
                            vlSelf->top__DOT__exu_opt = 1U;
                            vlSelf->top__DOT__exu_src_sel = 2U;
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->ins 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ins 
                                              >> 0x14U));
                        }
                    }
                } else if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
                        if ((0x4000U & vlSelf->ins)) {
                            vlSelf->top__DOT__exu_opt 
                                = ((0x2000U & vlSelf->ins)
                                    ? ((0x1000U & vlSelf->ins)
                                        ? 0x16U : 0x15U)
                                    : ((0x1000U & vlSelf->ins)
                                        ? 0x14U : 0x13U));
                        } else if ((1U & (~ (vlSelf->ins 
                                             >> 0xdU)))) {
                            vlSelf->top__DOT__exu_opt 
                                = ((0x1000U & vlSelf->ins)
                                    ? 0x12U : 0x11U);
                        }
                        vlSelf->top__DOT__exu_src_sel = 0U;
                        vlSelf->top__DOT__imm = (((- (IData)(
                                                             (vlSelf->ins 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelf->ins 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->ins 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->ins 
                                                             >> 7U)))));
                    }
                }
                if ((1U & (~ (vlSelf->ins >> 3U)))) {
                    if ((4U & vlSelf->ins)) {
                        if ((2U & vlSelf->ins)) {
                            if ((1U & vlSelf->ins)) {
                                vlSelf->top__DOT__rs1id 
                                    = (0x1fU & (vlSelf->ins 
                                                >> 0xfU));
                            }
                        }
                    } else if ((2U & vlSelf->ins)) {
                        if ((1U & vlSelf->ins)) {
                            vlSelf->top__DOT__rs1id 
                                = (0x1fU & (vlSelf->ins 
                                            >> 0xfU));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->ins >> 4U)))) {
                if ((1U & (~ (vlSelf->ins >> 3U)))) {
                    if ((1U & (~ (vlSelf->ins >> 2U)))) {
                        if ((2U & vlSelf->ins)) {
                            if ((1U & vlSelf->ins)) {
                                vlSelf->top__DOT__rs2id 
                                    = (0x1fU & (vlSelf->ins 
                                                >> 0x14U));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->ins)) {
        if ((0x10U & vlSelf->ins)) {
            if ((1U & (~ (vlSelf->ins >> 3U)))) {
                if ((4U & vlSelf->ins)) {
                    if ((2U & vlSelf->ins)) {
                        if ((1U & vlSelf->ins)) {
                            vlSelf->top__DOT__exu_opt = 1U;
                            vlSelf->top__DOT__exu_src_sel = 1U;
                            vlSelf->top__DOT__rs1id = 0U;
                            vlSelf->top__DOT__imm = 
                                (0xfffff000U & vlSelf->ins);
                        }
                    }
                } else if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
                        if ((0x4000U & vlSelf->ins)) {
                            if ((0x2000U & vlSelf->ins)) {
                                if ((0x1000U & vlSelf->ins)) {
                                    if ((0U == (vlSelf->ins 
                                                >> 0x19U))) {
                                        vlSelf->top__DOT__exu_opt = 3U;
                                    }
                                } else if ((0U == (vlSelf->ins 
                                                   >> 0x19U))) {
                                    vlSelf->top__DOT__exu_opt = 4U;
                                }
                            } else if ((0x1000U & vlSelf->ins)) {
                                if ((0U == (vlSelf->ins 
                                            >> 0x19U))) {
                                    vlSelf->top__DOT__exu_opt = 7U;
                                } else if ((0x20U == 
                                            (vlSelf->ins 
                                             >> 0x19U))) {
                                    vlSelf->top__DOT__exu_opt = 8U;
                                }
                            } else if ((0U == (vlSelf->ins 
                                               >> 0x19U))) {
                                vlSelf->top__DOT__exu_opt = 5U;
                            }
                        } else if ((0x2000U & vlSelf->ins)) {
                            if ((0x1000U & vlSelf->ins)) {
                                if ((0U == (vlSelf->ins 
                                            >> 0x19U))) {
                                    vlSelf->top__DOT__exu_opt = 0x10U;
                                }
                            } else if ((0U == (vlSelf->ins 
                                               >> 0x19U))) {
                                vlSelf->top__DOT__exu_opt = 9U;
                            }
                        } else if ((0x1000U & vlSelf->ins)) {
                            if ((0U == (vlSelf->ins 
                                        >> 0x19U))) {
                                vlSelf->top__DOT__exu_opt = 6U;
                            }
                        } else if ((0U == (vlSelf->ins 
                                           >> 0x19U))) {
                            vlSelf->top__DOT__exu_opt = 1U;
                        } else if ((0x20U == (vlSelf->ins 
                                              >> 0x19U))) {
                            vlSelf->top__DOT__exu_opt = 2U;
                        }
                        vlSelf->top__DOT__exu_src_sel = 0U;
                        vlSelf->top__DOT__rs1id = (0x1fU 
                                                   & (vlSelf->ins 
                                                      >> 0xfU));
                        vlSelf->top__DOT__imm = 0U;
                    }
                }
                if ((1U & (~ (vlSelf->ins >> 2U)))) {
                    if ((2U & vlSelf->ins)) {
                        if ((1U & vlSelf->ins)) {
                            vlSelf->top__DOT__rs2id 
                                = (0x1fU & (vlSelf->ins 
                                            >> 0x14U));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->ins >> 3U)))) {
            if ((1U & (~ (vlSelf->ins >> 2U)))) {
                if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
                        vlSelf->top__DOT__exu_opt = 1U;
                        vlSelf->top__DOT__rs2id = (0x1fU 
                                                   & (vlSelf->ins 
                                                      >> 0x14U));
                        vlSelf->top__DOT__exu_src_sel = 1U;
                        vlSelf->top__DOT__rs1id = (0x1fU 
                                                   & (vlSelf->ins 
                                                      >> 0xfU));
                        vlSelf->top__DOT__imm = (((- (IData)(
                                                             (vlSelf->ins 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->ins 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->ins 
                                                          >> 7U))));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->ins)) {
        if ((1U & (~ (vlSelf->ins >> 3U)))) {
            if ((4U & vlSelf->ins)) {
                if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
                        vlSelf->top__DOT__exu_opt = 1U;
                        vlSelf->top__DOT__exu_src_sel = 3U;
                        vlSelf->top__DOT__imm = (0xfffff000U 
                                                 & vlSelf->ins);
                    }
                }
            } else if ((2U & vlSelf->ins)) {
                if ((1U & vlSelf->ins)) {
                    if ((0x4000U & vlSelf->ins)) {
                        if ((0x2000U & vlSelf->ins)) {
                            vlSelf->top__DOT__exu_opt 
                                = ((0x1000U & vlSelf->ins)
                                    ? 3U : 4U);
                        } else if ((0x1000U & vlSelf->ins)) {
                            if ((0U == (vlSelf->ins 
                                        >> 0x1aU))) {
                                vlSelf->top__DOT__exu_opt = 7U;
                            } else if ((0x10U == (vlSelf->ins 
                                                  >> 0x1aU))) {
                                vlSelf->top__DOT__exu_opt = 8U;
                            }
                        } else {
                            vlSelf->top__DOT__exu_opt = 5U;
                        }
                    } else {
                        vlSelf->top__DOT__exu_opt = 
                            ((0x2000U & vlSelf->ins)
                              ? ((0x1000U & vlSelf->ins)
                                  ? 0x10U : 9U) : (
                                                   (0x1000U 
                                                    & vlSelf->ins)
                                                    ? 6U
                                                    : 1U));
                    }
                    vlSelf->top__DOT__exu_src_sel = 1U;
                    vlSelf->top__DOT__imm = (((- (IData)(
                                                         (vlSelf->ins 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->ins 
                                                >> 0x14U));
                }
            }
            if ((1U & (~ (vlSelf->ins >> 2U)))) {
                if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
                        vlSelf->top__DOT__rs1id = (0x1fU 
                                                   & (vlSelf->ins 
                                                      >> 0xfU));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->ins >> 3U)))) {
        if ((1U & (~ (vlSelf->ins >> 2U)))) {
            if ((2U & vlSelf->ins)) {
                if ((1U & vlSelf->ins)) {
                    vlSelf->top__DOT__exu_opt = 1U;
                    vlSelf->top__DOT__exu_src_sel = 1U;
                    vlSelf->top__DOT__rs1id = (0x1fU 
                                               & (vlSelf->ins 
                                                  >> 0xfU));
                    vlSelf->top__DOT__imm = (((- (IData)(
                                                         (vlSelf->ins 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->ins 
                                                >> 0x14U));
                }
            }
        }
    }
    vlSelf->top__DOT__rs2 = vlSelf->top__DOT__u_regfile__DOT__rf
        [vlSelf->top__DOT__rs2id];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[7U] 
        = vlSelf->top__DOT__u_regfile__DOT__rf[vlSelf->top__DOT__rs2id];
    vlSelf->top__DOT__rs1 = vlSelf->top__DOT__u_regfile__DOT__rf
        [vlSelf->top__DOT__rs1id];
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[6U] 
        = vlSelf->top__DOT__u_regfile__DOT__rf[vlSelf->top__DOT__rs1id];
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[7U] 
        = vlSelf->top__DOT__u_regfile__DOT__rf[vlSelf->top__DOT__rs1id];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__imm)));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[6U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__imm)));
    vlSelf->top__DOT__csr = vlSelf->top__DOT__u_csrfile__DOT__csr
        [(0xfffU & vlSelf->top__DOT__imm)];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[4U] 
        = vlSelf->top__DOT__imm;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[6U] 
        = vlSelf->top__DOT__imm;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_csrfile__DOT__csr[(0xfffU 
                                                 & vlSelf->top__DOT__imm)];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_csrfile__DOT__csr[(0xfffU 
                                                 & vlSelf->top__DOT__imm)];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_csrfile__DOT__csr[(0xfffU 
                                                 & vlSelf->top__DOT__imm)];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__u_csrfile__DOT__csr[(0xfffU 
                                                 & vlSelf->top__DOT__imm)];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[7U] 
        = (QData)((IData)(vlSelf->top__DOT__rs2));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[6U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1)));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[7U] 
        = (QData)((IData)(vlSelf->top__DOT__rs1));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                       == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_src_sel) == 
           vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__u_exu__DOT__src1 = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out
                                           : 0U);
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[0U] 
        = (0x700000000ULL | (QData)((IData)(vlSelf->top__DOT__csr)));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[1U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->top__DOT__csr)));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[2U] 
        = (0x500000000ULL | (QData)((IData)(vlSelf->top__DOT__csr)));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[3U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__csr)));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                       == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__exu_src_sel) == 
           vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__exu_src_sel) 
                          == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__exu_src_sel) 
              == vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__u_exu__DOT__src2 = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out
                                           : 0U);
    vlSelf->top__DOT__u_exu__DOT__sububit = 0U;
    vlSelf->top__DOT__u_exu__DOT__alu_res = 0U;
    vlSelf->top__DOT__u_exu__DOT__alu_opt = ((0x10U 
                                              & (IData)(vlSelf->top__DOT__exu_opt))
                                              ? ((8U 
                                                  & (IData)(vlSelf->top__DOT__exu_opt))
                                                  ? (IData)(vlSelf->top__DOT__exu_opt)
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT__exu_opt))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__exu_opt))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__exu_opt))
                                                     ? (IData)(vlSelf->top__DOT__exu_opt)
                                                     : 0x17U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__exu_opt))
                                                     ? 0x17U
                                                     : 2U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__exu_opt))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__exu_opt))
                                                     ? 2U
                                                     : 0x17U))))
                                              : ((8U 
                                                  & (IData)(vlSelf->top__DOT__exu_opt))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT__exu_opt))
                                                   ? (IData)(vlSelf->top__DOT__exu_opt)
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__exu_opt))
                                                    ? (IData)(vlSelf->top__DOT__exu_opt)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__exu_opt))
                                                     ? 2U
                                                     : (IData)(vlSelf->top__DOT__exu_opt))))
                                                  : (IData)(vlSelf->top__DOT__exu_opt)));
    if ((0x10U & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))) {
                if ((2U & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))) {
                    if ((1U & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))) {
                        vlSelf->top__DOT__u_exu__DOT__sububit 
                            = (1U & (IData)((1ULL & 
                                             (((QData)((IData)(vlSelf->top__DOT__u_exu__DOT__src1)) 
                                               - (QData)((IData)(vlSelf->top__DOT__u_exu__DOT__src2))) 
                                              >> 0x20U))));
                        vlSelf->top__DOT__u_exu__DOT__alu_res 
                            = (vlSelf->top__DOT__u_exu__DOT__src1 
                               - vlSelf->top__DOT__u_exu__DOT__src2);
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt)))) {
                    vlSelf->top__DOT__u_exu__DOT__alu_res 
                        = ((0x1fU >= (0x3fU & vlSelf->top__DOT__u_exu__DOT__src2))
                            ? (vlSelf->top__DOT__u_exu__DOT__src1 
                               >> (0x3fU & vlSelf->top__DOT__u_exu__DOT__src2))
                            : 0U);
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))) {
        vlSelf->top__DOT__u_exu__DOT__alu_res = ((2U 
                                                  & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))
                                                   ? 
                                                  ((0x1fU 
                                                    >= 
                                                    (0x3fU 
                                                     & vlSelf->top__DOT__u_exu__DOT__src2))
                                                    ? 
                                                   (vlSelf->top__DOT__u_exu__DOT__src1 
                                                    >> 
                                                    (0x3fU 
                                                     & vlSelf->top__DOT__u_exu__DOT__src2))
                                                    : 0U)
                                                   : 
                                                  ((0x1fU 
                                                    >= 
                                                    (0x3fU 
                                                     & vlSelf->top__DOT__u_exu__DOT__src2))
                                                    ? 
                                                   (vlSelf->top__DOT__u_exu__DOT__src1 
                                                    << 
                                                    (0x3fU 
                                                     & vlSelf->top__DOT__u_exu__DOT__src2))
                                                    : 0U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))
                                                   ? 
                                                  (vlSelf->top__DOT__u_exu__DOT__src1 
                                                   ^ vlSelf->top__DOT__u_exu__DOT__src2)
                                                   : 
                                                  (vlSelf->top__DOT__u_exu__DOT__src1 
                                                   | vlSelf->top__DOT__u_exu__DOT__src2)));
    } else if ((2U & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))) {
        vlSelf->top__DOT__u_exu__DOT__alu_res = ((1U 
                                                  & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))
                                                  ? 
                                                 (vlSelf->top__DOT__u_exu__DOT__src1 
                                                  & vlSelf->top__DOT__u_exu__DOT__src2)
                                                  : 
                                                 (vlSelf->top__DOT__u_exu__DOT__src1 
                                                  - vlSelf->top__DOT__u_exu__DOT__src2));
    } else if ((1U & (IData)(vlSelf->top__DOT__u_exu__DOT__alu_opt))) {
        vlSelf->top__DOT__u_exu__DOT__alu_res = (vlSelf->top__DOT__u_exu__DOT__src1 
                                                 + vlSelf->top__DOT__u_exu__DOT__src2);
    }
    vlSelf->top__DOT__u_exu__DOT__less = ((0x80000000U 
                                           != vlSelf->top__DOT__u_exu__DOT__src2) 
                                          & ((0x80000000U 
                                              == vlSelf->top__DOT__u_exu__DOT__src1) 
                                             | ((~ 
                                                 ((~ 
                                                   (vlSelf->top__DOT__u_exu__DOT__src1 
                                                    >> 0x1fU)) 
                                                  & (vlSelf->top__DOT__u_exu__DOT__src2 
                                                     >> 0x1fU))) 
                                                & (((~ 
                                                     (vlSelf->top__DOT__u_exu__DOT__src2 
                                                      >> 0x1fU)) 
                                                    & (vlSelf->top__DOT__u_exu__DOT__src1 
                                                       >> 0x1fU)) 
                                                   | (vlSelf->top__DOT__u_exu__DOT__alu_res 
                                                      >> 0x1fU)))));
    vlSelf->top__DOT__exu_res = ((0x10U & (IData)(vlSelf->top__DOT__exu_opt))
                                  ? ((8U & (IData)(vlSelf->top__DOT__exu_opt))
                                      ? vlSelf->top__DOT__u_exu__DOT__alu_res
                                      : ((4U & (IData)(vlSelf->top__DOT__exu_opt))
                                          ? ((2U & (IData)(vlSelf->top__DOT__exu_opt))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__exu_opt))
                                                  ? vlSelf->top__DOT__u_exu__DOT__alu_res
                                                  : 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->top__DOT__u_exu__DOT__sububit))))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__exu_opt))
                                                  ? (IData)(vlSelf->top__DOT__u_exu__DOT__sububit)
                                                  : 
                                                 (1U 
                                                  & (~ (IData)(vlSelf->top__DOT__u_exu__DOT__less)))))
                                          : ((2U & (IData)(vlSelf->top__DOT__exu_opt))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__exu_opt))
                                                  ? (IData)(vlSelf->top__DOT__u_exu__DOT__less)
                                                  : 
                                                 (0U 
                                                  != vlSelf->top__DOT__u_exu__DOT__alu_res))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__exu_opt))
                                                  ? 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlSelf->top__DOT__u_exu__DOT__alu_res))))
                                                  : (IData)(vlSelf->top__DOT__u_exu__DOT__sububit)))))
                                  : ((8U & (IData)(vlSelf->top__DOT__exu_opt))
                                      ? ((4U & (IData)(vlSelf->top__DOT__exu_opt))
                                          ? vlSelf->top__DOT__u_exu__DOT__alu_res
                                          : ((2U & (IData)(vlSelf->top__DOT__exu_opt))
                                              ? vlSelf->top__DOT__u_exu__DOT__alu_res
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__exu_opt))
                                                  ? (IData)(vlSelf->top__DOT__u_exu__DOT__less)
                                                  : vlSelf->top__DOT__u_exu__DOT__alu_res)))
                                      : vlSelf->top__DOT__u_exu__DOT__alu_res));
    Vtop___024root____Vdpiimwrap_top__DOT__u_lsu__DOT__rtl_pmem_write_TOP(
                                                                          ((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[2U] 
                                                                            << 0x18U) 
                                                                           | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                                                                              >> 8U)), 
                                                                          ((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                                                                            << 0x18U) 
                                                                           | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U] 
                                                                              >> 8U)), 
                                                                          (0xffU 
                                                                           & vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U]));
    Vtop___024root____Vdpiimwrap_top__DOT__u_lsu__DOT__rtl_pmem_read_TOP(vlSelf->top__DOT__exu_res, vlSelf->__Vtask_top__DOT__u_lsu__DOT__rtl_pmem_read__4__rdata, 
                                                                         (1U 
                                                                          & (~ (IData)(vlSelf->top__DOT__lsu_opt))));
    vlSelf->top__DOT__u_lsu__DOT__rdata = vlSelf->__Vtask_top__DOT__u_lsu__DOT__rtl_pmem_read__4__rdata;
    vlSelf->top__DOT__u_pcu__DOT__pc_next = ((((0U 
                                                != vlSelf->top__DOT__exu_res) 
                                               & (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ins))) 
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ins)))
                                              ? (vlSelf->pc 
                                                 + vlSelf->top__DOT__imm)
                                              : ((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ins))
                                                  ? 
                                                 (vlSelf->top__DOT__imm 
                                                  + vlSelf->top__DOT__rs1)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__ecall)
                                                   ? vlSelf->top__DOT__u_csrfile__DOT__pc_temp
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc))));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk or negedge i_rst_n)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge i_clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge i_clk or negedge top.u_stdrst.rst_n_r2)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk or negedge i_rst_n)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge i_clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge i_clk or negedge top.u_stdrst.rst_n_r2)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = 0;
    vlSelf->ins = 0;
    vlSelf->pc = 0;
    vlSelf->i_rst_n = 0;
    vlSelf->top__DOT__rs1id = 0;
    vlSelf->top__DOT__rs2id = 0;
    vlSelf->top__DOT__rdid = 0;
    vlSelf->top__DOT__exu_opt = 0;
    vlSelf->top__DOT__exu_src_sel = 0;
    vlSelf->top__DOT__lsu_opt = 0;
    vlSelf->top__DOT__rs1 = 0;
    vlSelf->top__DOT__rs2 = 0;
    vlSelf->top__DOT__imm = 0;
    vlSelf->top__DOT__exu_res = 0;
    vlSelf->top__DOT__csr = 0;
    vlSelf->top__DOT__ecall = 0;
    vlSelf->top__DOT__rdwen = 0;
    vlSelf->top__DOT__u_stdrst__DOT__rst_n_r1 = 0;
    vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__u_regfile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_idu__DOT__id_err = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->top__DOT__u_csrfile__DOT__csr[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_csrfile__DOT__pc_temp = 0;
    vlSelf->top__DOT__u_csrfile__DOT__csr_temp = 0;
    vlSelf->top__DOT__u_exu__DOT__src1 = 0;
    vlSelf->top__DOT__u_exu__DOT__src2 = 0;
    vlSelf->top__DOT__u_exu__DOT__alu_opt = 0;
    vlSelf->top__DOT__u_exu__DOT__alu_res = 0;
    vlSelf->top__DOT__u_exu__DOT__sububit = 0;
    vlSelf->top__DOT__u_exu__DOT__less = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit = 0;
    vlSelf->top__DOT__u_lsu__DOT__rdata = 0;
    VL_ZERO_RESET_W(72, vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout);
    vlSelf->top__DOT__u_pcu__DOT__pc_next = 0;
    vlSelf->__Vfunc_top__DOT__check_finish__0__Vfuncout = 0;
    vlSelf->__Vtask_top__DOT__u_lsu__DOT__rtl_pmem_read__4__rdata = 0;
    vlSelf->__Vtrigrprev__TOP__i_clk = 0;
    vlSelf->__Vtrigrprev__TOP__i_rst_n = 0;
    vlSelf->__Vtrigrprev__TOP__top__DOT__u_stdrst__DOT__rst_n_r2 = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
