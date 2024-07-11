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
    VlWide<9>/*287:0*/ __Vtemp_hfcfdcfe5__0;
    VlWide<9>/*287:0*/ __Vtemp_h875d4b1c__0;
    VlWide<3>/*95:0*/ __Vtemp_h877559c0__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[7]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__rs1id),5);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__rs2id),5);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__rdid),5);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__exu_opt),5);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__exu_src_sel),3);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__lsu_opt),4);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__imm),32);
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__rdwen));
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__u_exu__DOT__alu_opt),5);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__u_idu__DOT__id_err),3);
        bufp->chgBit(oldp+26,((1U & (~ (IData)(vlSelf->top__DOT__lsu_opt)))));
        bufp->chgCData(oldp+27,(((1U == (IData)(vlSelf->top__DOT__lsu_opt))
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
        bufp->chgQData(oldp+28,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+30,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+32,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+34,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+36,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+38,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgQData(oldp+40,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[6]),35);
        bufp->chgQData(oldp+42,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[7]),35);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[7]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__rs1),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__rs2),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__csr),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__u_exu__DOT__src2),32);
        __Vtemp_hfcfdcfe5__0[0U] = (IData)((0x700000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__csr))));
        __Vtemp_hfcfdcfe5__0[1U] = ((vlSelf->top__DOT__csr 
                                     << 3U) | (IData)(
                                                      ((0x700000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__csr))) 
                                                       >> 0x20U)));
        __Vtemp_hfcfdcfe5__0[2U] = (0x30U | ((vlSelf->top__DOT__csr 
                                              << 6U) 
                                             | (vlSelf->top__DOT__csr 
                                                >> 0x1dU)));
        __Vtemp_hfcfdcfe5__0[3U] = (0x140U | ((vlSelf->top__DOT__csr 
                                               << 9U) 
                                              | (vlSelf->top__DOT__csr 
                                                 >> 0x1aU)));
        __Vtemp_hfcfdcfe5__0[4U] = (0x800U | ((vlSelf->top__DOT__imm 
                                               << 0xcU) 
                                              | (vlSelf->top__DOT__csr 
                                                 >> 0x17U)));
        __Vtemp_hfcfdcfe5__0[5U] = (0x23000U | (vlSelf->top__DOT__imm 
                                                >> 0x14U));
        __Vtemp_hfcfdcfe5__0[6U] = (0x10000U | (vlSelf->top__DOT__imm 
                                                << 0x12U));
        __Vtemp_hfcfdcfe5__0[7U] = (0x40000U | ((vlSelf->top__DOT__rs2 
                                                 << 0x15U) 
                                                | (vlSelf->top__DOT__imm 
                                                   >> 0xeU)));
        __Vtemp_hfcfdcfe5__0[8U] = (vlSelf->top__DOT__rs2 
                                    >> 0xbU);
        bufp->chgWData(oldp+56,(__Vtemp_hfcfdcfe5__0),280);
        bufp->chgQData(oldp+65,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+67,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+69,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+71,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+73,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+75,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgQData(oldp+77,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[6]),35);
        bufp->chgQData(oldp+79,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[7]),35);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__exu_res),32);
        bufp->chgIData(oldp+92,(((8U & (IData)(vlSelf->top__DOT__lsu_opt))
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
        bufp->chgBit(oldp+93,((1U & (~ (IData)((0U 
                                                != vlSelf->top__DOT__exu_res))))));
        bufp->chgIData(oldp+94,(((1U & (IData)(vlSelf->top__DOT__lsu_opt))
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
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__u_exu__DOT__src1),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__u_exu__DOT__alu_res),32);
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__u_exu__DOT__sububit));
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__u_exu__DOT__less));
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__u_lsu__DOT__rdata),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__u_csrfile__DOT__pc_temp),32);
        bufp->chgBit(oldp+103,(vlSelf->top__DOT__ecall));
        bufp->chgBit(oldp+104,((1U & (~ (IData)((0U 
                                                 != 
                                                 vlSelf->top__DOT__u_regfile__DOT__rf
                                                 [0xaU]))))));
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+137,((0xffU & vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U])),8);
        bufp->chgIData(oldp+138,(((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[2U] 
                                   << 0x18U) | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+139,(((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                                   << 0x18U) | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U] 
                                                >> 8U))),32);
        bufp->chgWData(oldp+140,(vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout),72);
    }
    bufp->chgBit(oldp+143,(vlSelf->i_clk));
    bufp->chgIData(oldp+144,(vlSelf->ins),32);
    bufp->chgIData(oldp+145,(vlSelf->pc),32);
    bufp->chgBit(oldp+146,(vlSelf->i_rst_n));
    bufp->chgBit(oldp+147,(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2));
    bufp->chgBit(oldp+148,((0x63U == (0x7fU & vlSelf->ins))));
    bufp->chgBit(oldp+149,((0x6fU == (0x7fU & vlSelf->ins))));
    bufp->chgBit(oldp+150,((0x67U == (0x7fU & vlSelf->ins))));
    bufp->chgCData(oldp+151,((vlSelf->ins >> 0x19U)),7);
    bufp->chgCData(oldp+152,((7U & (vlSelf->ins >> 0xcU))),3);
    __Vtemp_h875d4b1c__0[0U] = 0U;
    __Vtemp_h875d4b1c__0[1U] = 7U;
    __Vtemp_h875d4b1c__0[2U] = 0x30U;
    __Vtemp_h875d4b1c__0[3U] = 0x140U;
    __Vtemp_h875d4b1c__0[4U] = (0x800U | (vlSelf->pc 
                                          << 0xcU));
    __Vtemp_h875d4b1c__0[5U] = (0x3000U | ((vlSelf->pc 
                                            << 0xfU) 
                                           | (vlSelf->pc 
                                              >> 0x14U)));
    __Vtemp_h875d4b1c__0[6U] = (0x10000U | ((vlSelf->top__DOT__rs1 
                                             << 0x12U) 
                                            | (vlSelf->pc 
                                               >> 0x11U)));
    __Vtemp_h875d4b1c__0[7U] = (0x40000U | ((vlSelf->top__DOT__rs1 
                                             << 0x15U) 
                                            | (vlSelf->top__DOT__rs1 
                                               >> 0xeU)));
    __Vtemp_h875d4b1c__0[8U] = (vlSelf->top__DOT__rs1 
                                >> 0xbU);
    bufp->chgWData(oldp+153,(__Vtemp_h875d4b1c__0),280);
    bufp->chgCData(oldp+162,((0x1fU & (vlSelf->ins 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+163,((0x1fU & (vlSelf->ins 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+164,((0x1fU & (vlSelf->ins 
                                       >> 7U))),5);
    bufp->chgCData(oldp+165,((0x7fU & vlSelf->ins)),7);
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
    bufp->chgWData(oldp+166,(__Vtemp_h877559c0__0),72);
    bufp->chgIData(oldp+169,(((((0U != vlSelf->top__DOT__exu_res) 
                                & (0x63U == (0x7fU 
                                             & vlSelf->ins))) 
                               | (0x6fU == (0x7fU & vlSelf->ins)))
                               ? (vlSelf->pc + vlSelf->top__DOT__imm)
                               : ((0x67U == (0x7fU 
                                             & vlSelf->ins))
                                   ? (vlSelf->top__DOT__imm 
                                      + vlSelf->top__DOT__rs1)
                                   : ((IData)(vlSelf->top__DOT__ecall)
                                       ? vlSelf->top__DOT__u_csrfile__DOT__pc_temp
                                       : ((IData)(4U) 
                                          + vlSelf->pc))))),32);
    bufp->chgBit(oldp+170,(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r1));
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
