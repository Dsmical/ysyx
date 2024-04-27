// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+103,"i_clk", false,-1);
    tracep->declBus(c+104,"ins", false,-1, 31,0);
    tracep->declBus(c+105,"pc", false,-1, 31,0);
    tracep->declBit(c+106,"i_rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+103,"i_clk", false,-1);
    tracep->declBus(c+104,"ins", false,-1, 31,0);
    tracep->declBus(c+105,"pc", false,-1, 31,0);
    tracep->declBit(c+106,"i_rst_n", false,-1);
    tracep->declBit(c+107,"rst_n_sync", false,-1);
    tracep->declBus(c+9,"rs1id", false,-1, 4,0);
    tracep->declBus(c+10,"rs2id", false,-1, 4,0);
    tracep->declBus(c+11,"rdid", false,-1, 4,0);
    tracep->declBus(c+12,"exu_opt", false,-1, 4,0);
    tracep->declBus(c+13,"exu_src_sel", false,-1, 1,0);
    tracep->declBus(c+14,"lsu_opt", false,-1, 3,0);
    tracep->declBus(c+34,"rs1", false,-1, 31,0);
    tracep->declBus(c+35,"rs2", false,-1, 31,0);
    tracep->declBus(c+15,"imm", false,-1, 31,0);
    tracep->declBus(c+56,"exu_res", false,-1, 31,0);
    tracep->declBus(c+16,"lsu_res", false,-1, 31,0);
    tracep->declBit(c+57,"zero", false,-1);
    tracep->declBit(c+108,"brch", false,-1);
    tracep->declBit(c+109,"jal", false,-1);
    tracep->declBit(c+110,"jalr", false,-1);
    tracep->declBus(c+58,"rd", false,-1, 31,0);
    tracep->declBit(c+17,"rdwen", false,-1);
    tracep->declBit(c+127,"a0zero", false,-1);
    tracep->pushNamePrefix("u_exu ");
    tracep->declBus(c+105,"i_pc", false,-1, 31,0);
    tracep->declBus(c+34,"i_rs1", false,-1, 31,0);
    tracep->declBus(c+35,"i_rs2", false,-1, 31,0);
    tracep->declBus(c+15,"i_imm", false,-1, 31,0);
    tracep->declBus(c+13,"i_src_sel", false,-1, 1,0);
    tracep->declBus(c+12,"i_opt", false,-1, 4,0);
    tracep->declBus(c+56,"o_exu_res", false,-1, 31,0);
    tracep->declBit(c+57,"o_zero", false,-1);
    tracep->declBus(c+59,"src1", false,-1, 31,0);
    tracep->declBus(c+36,"src2", false,-1, 31,0);
    tracep->declBus(c+18,"alu_opt", false,-1, 4,0);
    tracep->declBus(c+60,"alu_res", false,-1, 31,0);
    tracep->declBit(c+61,"sububit", false,-1);
    tracep->declBit(c+62,"less", false,-1);
    tracep->pushNamePrefix("mux_src1 ");
    tracep->declBus(c+128,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+129,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+130,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 1,0);
    tracep->declBus(c+131,"default_out", false,-1, 31,0);
    tracep->declArray(c+111,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+128,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+129,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+130,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+132,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 1,0);
    tracep->declBus(c+131,"default_out", false,-1, 31,0);
    tracep->declArray(c+111,"lut", false,-1, 135,0);
    tracep->declBus(c+133,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+22+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+30+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+63,"lut_out", false,-1, 31,0);
    tracep->declBit(c+64,"hit", false,-1);
    tracep->declBus(c+134,"i", false,-1, 31,0);
    tracep->pushNamePrefix("gen_block ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux_src2 ");
    tracep->declBus(c+128,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+129,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+130,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+36,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 1,0);
    tracep->declBus(c+131,"default_out", false,-1, 31,0);
    tracep->declArray(c+37,"lut", false,-1, 135,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+128,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+129,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+130,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+132,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+36,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 1,0);
    tracep->declBus(c+131,"default_out", false,-1, 31,0);
    tracep->declArray(c+37,"lut", false,-1, 135,0);
    tracep->declBus(c+133,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+42+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+50+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+54,"lut_out", false,-1, 31,0);
    tracep->declBit(c+55,"hit", false,-1);
    tracep->declBus(c+134,"i", false,-1, 31,0);
    tracep->pushNamePrefix("gen_block ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+59,"i_src1", false,-1, 31,0);
    tracep->declBus(c+36,"i_src2", false,-1, 31,0);
    tracep->declBus(c+18,"i_opt", false,-1, 4,0);
    tracep->declBus(c+60,"o_alu_res", false,-1, 31,0);
    tracep->declBit(c+61,"o_sububit", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_idu ");
    tracep->declBus(c+104,"i_ins", false,-1, 31,0);
    tracep->declBit(c+107,"i_rst_n", false,-1);
    tracep->declBus(c+11,"o_rdid", false,-1, 4,0);
    tracep->declBus(c+9,"o_rs1id", false,-1, 4,0);
    tracep->declBus(c+10,"o_rs2id", false,-1, 4,0);
    tracep->declBit(c+17,"o_rdwen", false,-1);
    tracep->declBus(c+15,"o_imm", false,-1, 31,0);
    tracep->declBus(c+13,"o_exu_src_sel", false,-1, 1,0);
    tracep->declBus(c+12,"o_exu_opt", false,-1, 4,0);
    tracep->declBus(c+14,"o_lsu_opt", false,-1, 3,0);
    tracep->declBit(c+108,"o_brch", false,-1);
    tracep->declBit(c+109,"o_jal", false,-1);
    tracep->declBit(c+110,"o_jalr", false,-1);
    tracep->declBus(c+116,"func7", false,-1, 6,0);
    tracep->declBus(c+117,"rs2id", false,-1, 4,0);
    tracep->declBus(c+118,"rs1id", false,-1, 4,0);
    tracep->declBus(c+119,"func3", false,-1, 2,0);
    tracep->declBus(c+120,"rdid", false,-1, 4,0);
    tracep->declBus(c+121,"opcode", false,-1, 6,0);
    tracep->declBus(c+19,"id_err", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_lsu ");
    tracep->declBit(c+103,"i_clk", false,-1);
    tracep->declBit(c+107,"i_rst_n", false,-1);
    tracep->declBus(c+14,"i_opt", false,-1, 3,0);
    tracep->declBus(c+56,"i_addr", false,-1, 31,0);
    tracep->declBus(c+35,"i_regst", false,-1, 31,0);
    tracep->declBus(c+16,"o_regld", false,-1, 31,0);
    tracep->declBit(c+20,"ren", false,-1);
    tracep->declBus(c+56,"raddr", false,-1, 31,0);
    tracep->declBus(c+135,"rdata", false,-1, 31,0);
    tracep->declBus(c+21,"mask", false,-1, 7,0);
    tracep->declBus(c+97,"wmask", false,-1, 7,0);
    tracep->declBus(c+98,"waddr", false,-1, 31,0);
    tracep->declBus(c+99,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_stdreg ");
    tracep->declBus(c+136,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+137,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"i_clk", false,-1);
    tracep->declBit(c+107,"i_rst_n", false,-1);
    tracep->declBit(c+138,"i_wen", false,-1);
    tracep->declArray(c+122,"i_din", false,-1, 71,0);
    tracep->declArray(c+100,"o_dout", false,-1, 71,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pcu ");
    tracep->declBit(c+103,"i_clk", false,-1);
    tracep->declBit(c+107,"i_rst_n", false,-1);
    tracep->declBit(c+108,"i_brch", false,-1);
    tracep->declBit(c+109,"i_jal", false,-1);
    tracep->declBit(c+110,"i_jalr", false,-1);
    tracep->declBit(c+57,"i_zero", false,-1);
    tracep->declBus(c+34,"i_rs1", false,-1, 31,0);
    tracep->declBus(c+15,"i_imm", false,-1, 31,0);
    tracep->declBus(c+105,"o_pc", false,-1, 31,0);
    tracep->declBus(c+125,"pc_next", false,-1, 31,0);
    tracep->pushNamePrefix("u_stdreg ");
    tracep->declBus(c+130,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+139,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+103,"i_clk", false,-1);
    tracep->declBit(c+107,"i_rst_n", false,-1);
    tracep->declBit(c+138,"i_wen", false,-1);
    tracep->declBus(c+125,"i_din", false,-1, 31,0);
    tracep->declBus(c+105,"o_dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_regfile ");
    tracep->declBit(c+103,"i_clk", false,-1);
    tracep->declBit(c+17,"i_wen", false,-1);
    tracep->declBus(c+11,"i_waddr", false,-1, 4,0);
    tracep->declBus(c+58,"i_wdata", false,-1, 31,0);
    tracep->declBus(c+9,"i_raddr1", false,-1, 4,0);
    tracep->declBus(c+10,"i_raddr2", false,-1, 4,0);
    tracep->declBus(c+34,"o_rdata1", false,-1, 31,0);
    tracep->declBus(c+35,"o_rdata2", false,-1, 31,0);
    tracep->declBit(c+127,"s_a0zero", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+65+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_stdrst ");
    tracep->declBit(c+103,"i_clk", false,-1);
    tracep->declBit(c+106,"i_rst_n", false,-1);
    tracep->declBit(c+107,"o_rst_n_sync", false,-1);
    tracep->declBit(c+126,"rst_n_r1", false,-1);
    tracep->declBit(c+107,"rst_n_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_wbu ");
    tracep->declBus(c+56,"i_exu_res", false,-1, 31,0);
    tracep->declBus(c+16,"i_lsu_res", false,-1, 31,0);
    tracep->declBit(c+20,"i_ld_en", false,-1);
    tracep->declBus(c+58,"o_rd", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h29b46f07__0;
    VlWide<5>/*159:0*/ __Vtemp_h0d4ceef7__0;
    VlWide<3>/*95:0*/ __Vtemp_h877559c0__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__rs1id),5);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__rs2id),5);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__rdid),5);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__exu_opt),5);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__exu_src_sel),2);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__lsu_opt),4);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__imm),32);
    bufp->fullIData(oldp+16,(((8U & (IData)(vlSelf->top__DOT__lsu_opt))
                               ? ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                   ? 0U : ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__lsu_opt))
                                                ? 0U
                                                : (0xffffU 
                                                   & vlSelf->top__DOT__u_lsu__DOT__rdata))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__lsu_opt))
                                                ? 0U
                                                : (0xffU 
                                                   & vlSelf->top__DOT__u_lsu__DOT__rdata))))
                               : ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                   ? ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->top__DOT__lsu_opt))
                                                ? 0U
                                                : vlSelf->top__DOT__u_lsu__DOT__rdata))
                                   : ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                       ? ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                           ? 0U : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__u_lsu__DOT__rdata)))
                                       : ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                           ? 0U : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__u_lsu__DOT__rdata))))))),32);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__rdwen));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__u_exu__DOT__alu_opt),5);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__u_idu__DOT__id_err),3);
    bufp->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->top__DOT__lsu_opt)))));
    bufp->fullCData(oldp+21,(((1U == (IData)(vlSelf->top__DOT__lsu_opt))
                               ? 1U : ((3U == (IData)(vlSelf->top__DOT__lsu_opt))
                                        ? 3U : ((5U 
                                                 == (IData)(vlSelf->top__DOT__lsu_opt))
                                                 ? 0xfU
                                                 : 0U)))),8);
    bufp->fullQData(oldp+22,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+24,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+26,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+28,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__rs1),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__rs2),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__u_exu__DOT__src2),32);
    __Vtemp_h29b46f07__0[0U] = vlSelf->top__DOT__imm;
    __Vtemp_h29b46f07__0[1U] = 0x13U;
    __Vtemp_h29b46f07__0[2U] = (8U | (vlSelf->top__DOT__imm 
                                      << 4U));
    __Vtemp_h29b46f07__0[3U] = (0x10U | ((vlSelf->top__DOT__rs2 
                                          << 6U) | 
                                         (vlSelf->top__DOT__imm 
                                          >> 0x1cU)));
    __Vtemp_h29b46f07__0[4U] = (vlSelf->top__DOT__rs2 
                                >> 0x1aU);
    bufp->fullWData(oldp+37,(__Vtemp_h29b46f07__0),136);
    bufp->fullQData(oldp+42,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+44,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+46,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullQData(oldp+48,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),34);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__exu_res),32);
    bufp->fullBit(oldp+57,((1U & (~ (IData)((0U != vlSelf->top__DOT__exu_res))))));
    bufp->fullIData(oldp+58,(((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                               ? vlSelf->top__DOT__exu_res
                               : ((8U & (IData)(vlSelf->top__DOT__lsu_opt))
                                   ? ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelf->top__DOT__lsu_opt))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__lsu_opt))
                                                    ? 0U
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->top__DOT__u_lsu__DOT__rdata))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__lsu_opt))
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__u_lsu__DOT__rdata))))
                                   : ((4U & (IData)(vlSelf->top__DOT__lsu_opt))
                                       ? ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__lsu_opt))
                                                    ? 0U
                                                    : vlSelf->top__DOT__u_lsu__DOT__rdata))
                                       : ((2U & (IData)(vlSelf->top__DOT__lsu_opt))
                                           ? ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                               ? 0U
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__u_lsu__DOT__rdata)))
                                           : ((1U & (IData)(vlSelf->top__DOT__lsu_opt))
                                               ? 0U
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__u_lsu__DOT__rdata 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__u_lsu__DOT__rdata)))))))),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__u_exu__DOT__src1),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__u_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__u_exu__DOT__sububit));
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__u_exu__DOT__less));
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
    bufp->fullCData(oldp+97,((0xffU & vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U])),8);
    bufp->fullIData(oldp+98,(((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[2U] 
                               << 0x18U) | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+99,(((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                               << 0x18U) | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U] 
                                            >> 8U))),32);
    bufp->fullWData(oldp+100,(vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout),72);
    bufp->fullBit(oldp+103,(vlSelf->i_clk));
    bufp->fullIData(oldp+104,(vlSelf->ins),32);
    bufp->fullIData(oldp+105,(vlSelf->pc),32);
    bufp->fullBit(oldp+106,(vlSelf->i_rst_n));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2));
    bufp->fullBit(oldp+108,((0x63U == (0x7fU & vlSelf->ins))));
    bufp->fullBit(oldp+109,((0x6fU == (0x7fU & vlSelf->ins))));
    bufp->fullBit(oldp+110,((0x67U == (0x7fU & vlSelf->ins))));
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
    bufp->fullWData(oldp+111,(__Vtemp_h0d4ceef7__0),136);
    bufp->fullCData(oldp+116,((vlSelf->ins >> 0x19U)),7);
    bufp->fullCData(oldp+117,((0x1fU & (vlSelf->ins 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+118,((0x1fU & (vlSelf->ins 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+119,((7U & (vlSelf->ins >> 0xcU))),3);
    bufp->fullCData(oldp+120,((0x1fU & (vlSelf->ins 
                                        >> 7U))),5);
    bufp->fullCData(oldp+121,((0x7fU & vlSelf->ins)),7);
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
    bufp->fullWData(oldp+122,(__Vtemp_h877559c0__0),72);
    bufp->fullIData(oldp+125,(((((0U != vlSelf->top__DOT__exu_res) 
                                 & (0x63U == (0x7fU 
                                              & vlSelf->ins))) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->ins)))
                                ? (vlSelf->pc + vlSelf->top__DOT__imm)
                                : ((0x67U == (0x7fU 
                                              & vlSelf->ins))
                                    ? (vlSelf->top__DOT__imm 
                                       + vlSelf->top__DOT__rs1)
                                    : ((IData)(4U) 
                                       + vlSelf->pc)))),32);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r1));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__a0zero));
    bufp->fullIData(oldp+128,(4U),32);
    bufp->fullIData(oldp+129,(2U),32);
    bufp->fullIData(oldp+130,(0x20U),32);
    bufp->fullIData(oldp+131,(0U),32);
    bufp->fullIData(oldp+132,(1U),32);
    bufp->fullIData(oldp+133,(0x22U),32);
    bufp->fullIData(oldp+134,(4U),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__u_lsu__DOT__rdata),32);
    bufp->fullIData(oldp+136,(0x48U),32);
    bufp->fullIData(oldp+137,(0U),32);
    bufp->fullBit(oldp+138,(1U));
    bufp->fullIData(oldp+139,(0x80000000U),32);
}
