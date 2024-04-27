// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_h29b46f07__0;
    VlWide<5>/*159:0*/ __Vtemp_h0d4ceef7__0;
    VlWide<3>/*95:0*/ __Vtemp_h877559c0__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__rs1id),5);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__rs2id),5);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__rdid),5);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__exu_opt),5);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__exu_src_sel),2);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__lsu_opt),4);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__imm),32);
        bufp->chgIData(oldp+15,(((8U & (IData)(vlSelf->top__DOT__lsu_opt))
                                  ? ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                      ? 0U : ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__lsu_opt))
                                                   ? 0U
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__u_lsu__DOT__rdata))
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__lsu_opt))
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__u_lsu__DOT__rdata))))
                                  : ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                      ? ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->top__DOT__lsu_opt))
                                                   ? 0U
                                                   : vlSelf->top__DOT__u_lsu__DOT__rdata))
                                      : ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                          ? ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                              ? 0U : 
                                             (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->top__DOT__u_lsu__DOT__rdata)))
                                          : ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                              ? 0U : 
                                             (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelf->top__DOT__u_lsu__DOT__rdata))))))),32);
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__rdwen));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__u_exu__DOT__alu_opt),5);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__u_idu__DOT__id_err),3);
        bufp->chgBit(oldp+19,((1U & (~ (IData)(vlSelf->top__DOT__lsu_opt)))));
        bufp->chgCData(oldp+20,(((1U == (IData)(vlSelf->top__DOT__lsu_opt))
                                  ? 1U : ((3U == (IData)(vlSelf->top__DOT__lsu_opt))
                                           ? 3U : (
                                                   (5U 
                                                    == (IData)(vlSelf->top__DOT__lsu_opt))
                                                    ? 0xfU
                                                    : 0U)))),8);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgQData(oldp+21,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+23,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+25,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+27,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[3]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__rs1),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__rs2),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__u_exu__DOT__src2),32);
        __Vtemp_h29b46f07__0[0U] = vlSelf->top__DOT__imm;
        __Vtemp_h29b46f07__0[1U] = 0x13U;
        __Vtemp_h29b46f07__0[2U] = (8U | (vlSelf->top__DOT__imm 
                                          << 4U));
        __Vtemp_h29b46f07__0[3U] = (0x10U | ((vlSelf->top__DOT__rs2 
                                              << 6U) 
                                             | (vlSelf->top__DOT__imm 
                                                >> 0x1cU)));
        __Vtemp_h29b46f07__0[4U] = (vlSelf->top__DOT__rs2 
                                    >> 0x1aU);
        bufp->chgWData(oldp+36,(__Vtemp_h29b46f07__0),136);
        bufp->chgQData(oldp+41,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+43,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+45,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgQData(oldp+47,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),34);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__exu_res),32);
        bufp->chgBit(oldp+56,((1U & (~ (IData)((0U 
                                                != vlSelf->top__DOT__exu_res))))));
        bufp->chgIData(oldp+57,(((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                  ? vlSelf->top__DOT__exu_res
                                  : ((8U & (IData)(vlSelf->top__DOT__lsu_opt))
                                      ? ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                          ? 0U : ((2U 
                                                   & (IData)(vlSelf->top__DOT__lsu_opt))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__lsu_opt))
                                                    ? 0U
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->top__DOT__u_lsu__DOT__rdata))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__lsu_opt))
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__u_lsu__DOT__rdata))))
                                      : ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                          ? ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                               ? 0U
                                               : vlSelf->top__DOT__u_lsu__DOT__rdata))
                                          : ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__lsu_opt))
                                                  ? 0U
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__u_lsu__DOT__rdata)))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__lsu_opt))
                                                  ? 0U
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__u_lsu__DOT__rdata)))))))),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__u_exu__DOT__src1),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__u_exu__DOT__alu_res),32);
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__u_exu__DOT__sububit));
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__u_exu__DOT__less));
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+96,((0xffU & vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U])),8);
        bufp->chgIData(oldp+97,(((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[2U] 
                                  << 0x18U) | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+98,(((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                                  << 0x18U) | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U] 
                                               >> 8U))),32);
        bufp->chgWData(oldp+99,(vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout),72);
    }
    bufp->chgBit(oldp+102,(vlSelf->i_clk));
    bufp->chgIData(oldp+103,(vlSelf->ins),32);
    bufp->chgIData(oldp+104,(vlSelf->pc),32);
    bufp->chgBit(oldp+105,(vlSelf->i_rst_n));
    bufp->chgBit(oldp+106,(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2));
    bufp->chgBit(oldp+107,((0x63U == (0x7fU & vlSelf->ins))));
    bufp->chgBit(oldp+108,((0x6fU == (0x7fU & vlSelf->ins))));
    bufp->chgBit(oldp+109,((0x67U == (0x7fU & vlSelf->ins))));
    __Vtemp_h0d4ceef7__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->pc))));
    __Vtemp_h0d4ceef7__0[1U] = ((vlSelf->pc << 2U) 
                                | (IData)(((0x300000000ULL 
                                            | (QData)((IData)(vlSelf->pc))) 
                                           >> 0x20U)));
    __Vtemp_h0d4ceef7__0[2U] = (8U | ((vlSelf->top__DOT__rs1 
                                       << 4U) | (vlSelf->pc 
                                                 >> 0x1eU)));
    __Vtemp_h0d4ceef7__0[3U] = (0x10U | ((vlSelf->top__DOT__rs1 
                                          << 6U) | 
                                         (vlSelf->top__DOT__rs1 
                                          >> 0x1cU)));
    __Vtemp_h0d4ceef7__0[4U] = (vlSelf->top__DOT__rs1 
                                >> 0x1aU);
    bufp->chgWData(oldp+110,(__Vtemp_h0d4ceef7__0),136);
    bufp->chgCData(oldp+115,((vlSelf->ins >> 0x19U)),7);
    bufp->chgCData(oldp+116,((0x1fU & (vlSelf->ins 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+117,((0x1fU & (vlSelf->ins 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+118,((7U & (vlSelf->ins >> 0xcU))),3);
    bufp->chgCData(oldp+119,((0x1fU & (vlSelf->ins 
                                       >> 7U))),5);
    bufp->chgCData(oldp+120,((0x7fU & vlSelf->ins)),7);
    __Vtemp_h877559c0__0[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__exu_res)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__rs2)))) 
                                 << 8U) | ((1U == (IData)(vlSelf->top__DOT__lsu_opt))
                                            ? 1U : 
                                           ((3U == (IData)(vlSelf->top__DOT__lsu_opt))
                                             ? 3U : 
                                            ((5U == (IData)(vlSelf->top__DOT__lsu_opt))
                                              ? 0xfU
                                              : 0U))));
    __Vtemp_h877559c0__0[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__exu_res)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__rs2)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->top__DOT__exu_res)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__rs2))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h877559c0__0[2U] = ((IData)(((((QData)((IData)(vlSelf->top__DOT__exu_res)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__rs2))) 
                                         >> 0x20U)) 
                                >> 0x18U);
    bufp->chgWData(oldp+121,(__Vtemp_h877559c0__0),72);
    bufp->chgIData(oldp+124,(((((0U != vlSelf->top__DOT__exu_res) 
                                & (0x63U == (0x7fU 
                                             & vlSelf->ins))) 
                               | (0x6fU == (0x7fU & vlSelf->ins)))
                               ? (vlSelf->pc + vlSelf->top__DOT__imm)
                               : ((0x67U == (0x7fU 
                                             & vlSelf->ins))
                                   ? (vlSelf->top__DOT__imm 
                                      + vlSelf->top__DOT__rs1)
                                   : ((IData)(4U) + vlSelf->pc)))),32);
    bufp->chgBit(oldp+125,(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r1));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
