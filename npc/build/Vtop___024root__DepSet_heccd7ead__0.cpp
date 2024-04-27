// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__check_finish_TOP(IData/*31:0*/ finish_flag, CData/*0:0*/ &check_finish__Vfuncrtn);

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__rdid = 0U;
    vlSelf->top__DOT__rdwen = 0U;
    vlSelf->top__DOT__u_idu__DOT__id_err = 0U;
    vlSelf->top__DOT__lsu_opt = ((3U == (0x7fU & vlSelf->ins))
                                  ? (0xeU & (vlSelf->ins 
                                             >> 0xbU))
                                  : ((0x23U == (0x7fU 
                                                & vlSelf->ins))
                                      ? (1U | (0xeU 
                                               & (vlSelf->ins 
                                                  >> 0xbU)))
                                      : 0xfU));
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
            if ((1U & (~ (vlSelf->ins >> 4U)))) {
                if ((8U & vlSelf->ins)) {
                    if ((4U & vlSelf->ins)) {
                        if ((2U & vlSelf->ins)) {
                            if ((1U & vlSelf->ins)) {
                                vlSelf->top__DOT__rdwen = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->ins)) {
                    if ((2U & vlSelf->ins)) {
                        if ((1U & vlSelf->ins)) {
                            vlSelf->top__DOT__rdwen = 1U;
                        }
                    }
                }
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
                  32,((IData)(vlSelf->top__DOT__a0zero)
                       ? 0x474f4f44U : 0x424144U));
        VL_FINISH_MT("/home/dsm/ysyx-workbench/npc/vsrc/top.v", 117, "");
    }
    vlSelf->top__DOT__exu_opt = 1U;
    vlSelf->top__DOT__rs2id = 0U;
    vlSelf->top__DOT__exu_src_sel = 1U;
    vlSelf->top__DOT__imm = 0U;
    vlSelf->top__DOT__rs1id = 0U;
    if ((0x40U & vlSelf->ins)) {
        if ((0x20U & vlSelf->ins)) {
            if ((1U & (~ (vlSelf->ins >> 4U)))) {
                if ((8U & vlSelf->ins)) {
                    if ((4U & vlSelf->ins)) {
                        if ((2U & vlSelf->ins)) {
                            if ((1U & vlSelf->ins)) {
                                vlSelf->top__DOT__exu_opt = 1U;
                                vlSelf->top__DOT__exu_src_sel = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->ins)) {
                    if ((2U & vlSelf->ins)) {
                        if ((1U & vlSelf->ins)) {
                            vlSelf->top__DOT__exu_opt = 1U;
                            vlSelf->top__DOT__exu_src_sel = 2U;
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
                    }
                }
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
            if ((0x10U & vlSelf->ins)) {
                if ((1U & (~ (vlSelf->ins >> 3U)))) {
                    if ((1U & (~ (vlSelf->ins >> 2U)))) {
                        if ((2U & vlSelf->ins)) {
                            if ((1U & vlSelf->ins)) {
                                vlSelf->top__DOT__imm 
                                    = (((- (IData)(
                                                   (vlSelf->ins 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->ins 
                                        >> 0x14U));
                                vlSelf->top__DOT__rs1id 
                                    = (0x1fU & (vlSelf->ins 
                                                >> 0xfU));
                            }
                        }
                    }
                }
            } else {
                if ((8U & vlSelf->ins)) {
                    if ((4U & vlSelf->ins)) {
                        if ((2U & vlSelf->ins)) {
                            if ((1U & vlSelf->ins)) {
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
                            vlSelf->top__DOT__imm = 
                                (((- (IData)((vlSelf->ins 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ins 
                                              >> 0x14U));
                        }
                    }
                } else if ((2U & vlSelf->ins)) {
                    if ((1U & vlSelf->ins)) {
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
        }
    } else if ((0x20U & vlSelf->ins)) {
        if ((0x10U & vlSelf->ins)) {
            if ((1U & (~ (vlSelf->ins >> 3U)))) {
                if ((4U & vlSelf->ins)) {
                    if ((2U & vlSelf->ins)) {
                        if ((1U & vlSelf->ins)) {
                            vlSelf->top__DOT__exu_opt = 1U;
                            vlSelf->top__DOT__exu_src_sel = 1U;
                            vlSelf->top__DOT__imm = 
                                (0xfffff000U & vlSelf->ins);
                            vlSelf->top__DOT__rs1id = 0U;
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
                        vlSelf->top__DOT__imm = 0U;
                        vlSelf->top__DOT__rs1id = (0x1fU 
                                                   & (vlSelf->ins 
                                                      >> 0xfU));
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
                        vlSelf->top__DOT__rs1id = (0x1fU 
                                                   & (vlSelf->ins 
                                                      >> 0xfU));
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
                    vlSelf->top__DOT__imm = (((- (IData)(
                                                         (vlSelf->ins 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->ins 
                                                >> 0x14U));
                    vlSelf->top__DOT__rs1id = (0x1fU 
                                               & (vlSelf->ins 
                                                  >> 0xfU));
                }
            }
        }
    }
    vlSelf->top__DOT__rs2 = vlSelf->top__DOT__u_regfile__DOT__rf
        [vlSelf->top__DOT__rs2id];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__u_regfile__DOT__rf[vlSelf->top__DOT__rs2id];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__imm)));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__imm)));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__imm;
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__imm;
    vlSelf->top__DOT__rs1 = vlSelf->top__DOT__u_regfile__DOT__rf
        [vlSelf->top__DOT__rs1id];
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_regfile__DOT__rf[vlSelf->top__DOT__rs1id];
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__u_regfile__DOT__rf[vlSelf->top__DOT__rs1id];
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->top__DOT__rs2));
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
    vlSelf->top__DOT__u_exu__DOT__src2 = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out
                                           : 0U);
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1)));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[3U] 
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
    vlSelf->top__DOT__u_exu__DOT__src1 = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out
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
                        = (IData)(((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->top__DOT__u_exu__DOT__src1 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_exu__DOT__src1))) 
                                   >> (0x3fU & vlSelf->top__DOT__u_exu__DOT__src2)));
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
                                                 ((IData)(4U) 
                                                  + vlSelf->pc)));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_regfile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__u_regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_regfile__DOT__rf__v0;
    __Vdlyvval__top__DOT__u_regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_regfile__DOT__rf__v0;
    __Vdlyvset__top__DOT__u_regfile__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__u_regfile__DOT__rf__v0 = 0U;
    if (vlSelf->top__DOT__rdwen) {
        __Vdlyvval__top__DOT__u_regfile__DOT__rf__v0 
            = ((0U == (IData)(vlSelf->top__DOT__rdid))
                ? 0U : ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                         ? vlSelf->top__DOT__exu_res
                         : ((8U & (IData)(vlSelf->top__DOT__lsu_opt))
                             ? ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                 ? 0U : ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                          ? ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                              ? 0U : 
                                             (0xffffU 
                                              & vlSelf->top__DOT__u_lsu__DOT__rdata))
                                          : ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                              ? 0U : 
                                             (0xffU 
                                              & vlSelf->top__DOT__u_lsu__DOT__rdata))))
                             : ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                 ? ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                     ? 0U : ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                              ? 0U : vlSelf->top__DOT__u_lsu__DOT__rdata))
                                 : ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                     ? ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                         ? 0U : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->top__DOT__u_lsu__DOT__rdata)))
                                     : ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                         ? 0U : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__u_lsu__DOT__rdata))))))));
        __Vdlyvset__top__DOT__u_regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_regfile__DOT__rf__v0 
            = vlSelf->top__DOT__rdid;
    }
    if (__Vdlyvset__top__DOT__u_regfile__DOT__rf__v0) {
        vlSelf->top__DOT__u_regfile__DOT__rf[__Vdlyvdim0__top__DOT__u_regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_regfile__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2) {
        vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U] 
            = (((IData)((((QData)((IData)(vlSelf->top__DOT__exu_res)) 
                          << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rs2)))) 
                << 8U) | ((1U == (IData)(vlSelf->top__DOT__lsu_opt))
                           ? 1U : ((3U == (IData)(vlSelf->top__DOT__lsu_opt))
                                    ? 3U : ((5U == (IData)(vlSelf->top__DOT__lsu_opt))
                                             ? 0xfU
                                             : 0U))));
        vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
            = (((IData)((((QData)((IData)(vlSelf->top__DOT__exu_res)) 
                          << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rs2)))) 
                >> 0x18U) | ((IData)(((((QData)((IData)(vlSelf->top__DOT__exu_res)) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rs2))) 
                                      >> 0x20U)) << 8U));
        vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[2U] 
            = ((IData)(((((QData)((IData)(vlSelf->top__DOT__exu_res)) 
                          << 0x20U) | (QData)((IData)(vlSelf->top__DOT__rs2))) 
                        >> 0x20U)) >> 0x18U);
        vlSelf->pc = vlSelf->top__DOT__u_pcu__DOT__pc_next;
    } else {
        vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U] = 0U;
        vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] = 0U;
        vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[2U] = 0U;
        vlSelf->pc = 0x80000000U;
    }
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[1U] 
        = (0x200000000ULL | (QData)((IData)(vlSelf->pc)));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->pc;
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__u_regfile__DOT__rf[vlSelf->top__DOT__rs2id];
    vlSelf->top__DOT__rs1 = vlSelf->top__DOT__u_regfile__DOT__rf
        [vlSelf->top__DOT__rs1id];
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_regfile__DOT__rf[vlSelf->top__DOT__rs1id];
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__u_regfile__DOT__rf[vlSelf->top__DOT__rs1id];
    vlSelf->top__DOT__rs2 = vlSelf->top__DOT__u_regfile__DOT__rf
        [vlSelf->top__DOT__rs2id];
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
    vlSelf->top__DOT__u_exu__DOT__src2 = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out
                                           : 0U);
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__rs1)));
    vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->top__DOT__rs1));
    vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[3U] 
        = (QData)((IData)(vlSelf->top__DOT__rs2));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2 = ((IData)(vlSelf->i_rst_n) 
                                                 & (IData)(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r1));
    vlSelf->top__DOT__u_stdrst__DOT__rst_n_r1 = vlSelf->i_rst_n;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
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
    vlSelf->top__DOT__u_exu__DOT__src1 = ((IData)(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit)
                                           ? vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out
                                           : 0U);
    vlSelf->top__DOT__u_exu__DOT__sububit = 0U;
    vlSelf->top__DOT__u_exu__DOT__alu_res = 0U;
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
                        = (IData)(((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->top__DOT__u_exu__DOT__src1 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_exu__DOT__src1))) 
                                   >> (0x3fU & vlSelf->top__DOT__u_exu__DOT__src2)));
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
                                                 ((IData)(4U) 
                                                  + vlSelf->pc)));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/dsm/ysyx-workbench/npc/vsrc/top.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/dsm/ysyx-workbench/npc/vsrc/top.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/dsm/ysyx-workbench/npc/vsrc/top.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_rst_n & 0xfeU))) {
        Verilated::overWidthError("i_rst_n");}
}
#endif  // VL_DEBUG
