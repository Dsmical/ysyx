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
    tracep->declBit(c+144,"i_clk", false,-1);
    tracep->declBus(c+145,"ins", false,-1, 31,0);
    tracep->declBus(c+146,"pc", false,-1, 31,0);
    tracep->declBit(c+147,"i_rst_n", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+144,"i_clk", false,-1);
    tracep->declBus(c+145,"ins", false,-1, 31,0);
    tracep->declBus(c+146,"pc", false,-1, 31,0);
    tracep->declBit(c+147,"i_rst_n", false,-1);
    tracep->declBit(c+148,"rst_n_sync", false,-1);
    tracep->declBus(c+17,"rs1id", false,-1, 4,0);
    tracep->declBus(c+18,"rs2id", false,-1, 4,0);
    tracep->declBus(c+19,"rdid", false,-1, 4,0);
    tracep->declBus(c+20,"exu_opt", false,-1, 4,0);
    tracep->declBus(c+21,"exu_src_sel", false,-1, 2,0);
    tracep->declBus(c+22,"lsu_opt", false,-1, 3,0);
    tracep->declBus(c+53,"rs1", false,-1, 31,0);
    tracep->declBus(c+54,"rs2", false,-1, 31,0);
    tracep->declBus(c+23,"imm", false,-1, 31,0);
    tracep->declBus(c+92,"exu_res", false,-1, 31,0);
    tracep->declBus(c+93,"lsu_res", false,-1, 31,0);
    tracep->declBus(c+55,"csr", false,-1, 31,0);
    tracep->declBus(c+103,"ecall_pc", false,-1, 31,0);
    tracep->declBit(c+94,"zero", false,-1);
    tracep->declBit(c+149,"brch", false,-1);
    tracep->declBit(c+150,"jal", false,-1);
    tracep->declBit(c+151,"jalr", false,-1);
    tracep->declBit(c+104,"ecall", false,-1);
    tracep->declBus(c+95,"rd", false,-1, 31,0);
    tracep->declBit(c+24,"rdwen", false,-1);
    tracep->declBit(c+105,"a0zero", false,-1);
    tracep->pushNamePrefix("u_csrfile ");
    tracep->declBit(c+144,"i_clk", false,-1);
    tracep->declBit(c+148,"i_rst_n", false,-1);
    tracep->declBit(c+24,"i_wen", false,-1);
    tracep->declBus(c+145,"i_ins", false,-1, 31,0);
    tracep->declBus(c+146,"i_pc", false,-1, 31,0);
    tracep->declBus(c+23,"i_imm", false,-1, 31,0);
    tracep->declBus(c+53,"i_src1", false,-1, 31,0);
    tracep->declBus(c+103,"o_pc", false,-1, 31,0);
    tracep->declBit(c+104,"o_ecall", false,-1);
    tracep->declBus(c+55,"o_csr", false,-1, 31,0);
    tracep->declBus(c+103,"pc_temp", false,-1, 31,0);
    tracep->declBus(c+172,"csr_temp", false,-1, 31,0);
    tracep->declBus(c+152,"func7", false,-1, 6,0);
    tracep->declBus(c+153,"func3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_exu ");
    tracep->declBus(c+146,"i_pc", false,-1, 31,0);
    tracep->declBus(c+53,"i_rs1", false,-1, 31,0);
    tracep->declBus(c+54,"i_rs2", false,-1, 31,0);
    tracep->declBus(c+23,"i_imm", false,-1, 31,0);
    tracep->declBus(c+55,"i_csr", false,-1, 31,0);
    tracep->declBus(c+21,"i_src_sel", false,-1, 2,0);
    tracep->declBus(c+20,"i_opt", false,-1, 4,0);
    tracep->declBus(c+92,"o_exu_res", false,-1, 31,0);
    tracep->declBit(c+94,"o_zero", false,-1);
    tracep->declBus(c+96,"src1", false,-1, 31,0);
    tracep->declBus(c+56,"src2", false,-1, 31,0);
    tracep->declBus(c+25,"alu_opt", false,-1, 4,0);
    tracep->declBus(c+97,"alu_res", false,-1, 31,0);
    tracep->declBit(c+98,"sububit", false,-1);
    tracep->declBit(c+99,"less", false,-1);
    tracep->pushNamePrefix("mux_src1 ");
    tracep->declBus(c+173,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+174,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+96,"out", false,-1, 31,0);
    tracep->declBus(c+21,"key", false,-1, 2,0);
    tracep->declBus(c+176,"default_out", false,-1, 31,0);
    tracep->declArray(c+154,"lut", false,-1, 279,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+173,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+174,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+177,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+96,"out", false,-1, 31,0);
    tracep->declBus(c+21,"key", false,-1, 2,0);
    tracep->declBus(c+176,"default_out", false,-1, 31,0);
    tracep->declArray(c+154,"lut", false,-1, 279,0);
    tracep->declBus(c+178,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+29+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+45+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+100,"lut_out", false,-1, 31,0);
    tracep->declBit(c+101,"hit", false,-1);
    tracep->declBus(c+179,"i", false,-1, 31,0);
    tracep->pushNamePrefix("gen_block ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mux_src2 ");
    tracep->declBus(c+173,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+174,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+56,"out", false,-1, 31,0);
    tracep->declBus(c+21,"key", false,-1, 2,0);
    tracep->declBus(c+176,"default_out", false,-1, 31,0);
    tracep->declArray(c+57,"lut", false,-1, 279,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+173,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+174,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+175,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+177,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+56,"out", false,-1, 31,0);
    tracep->declBus(c+21,"key", false,-1, 2,0);
    tracep->declBus(c+176,"default_out", false,-1, 31,0);
    tracep->declArray(c+57,"lut", false,-1, 279,0);
    tracep->declBus(c+178,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+66+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+82+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+90,"lut_out", false,-1, 31,0);
    tracep->declBit(c+91,"hit", false,-1);
    tracep->declBus(c+179,"i", false,-1, 31,0);
    tracep->pushNamePrefix("gen_block ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+96,"i_src1", false,-1, 31,0);
    tracep->declBus(c+56,"i_src2", false,-1, 31,0);
    tracep->declBus(c+25,"i_opt", false,-1, 4,0);
    tracep->declBus(c+97,"o_alu_res", false,-1, 31,0);
    tracep->declBit(c+98,"o_sububit", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_idu ");
    tracep->declBus(c+145,"i_ins", false,-1, 31,0);
    tracep->declBit(c+148,"i_rst_n", false,-1);
    tracep->declBus(c+19,"o_rdid", false,-1, 4,0);
    tracep->declBus(c+17,"o_rs1id", false,-1, 4,0);
    tracep->declBus(c+18,"o_rs2id", false,-1, 4,0);
    tracep->declBit(c+24,"o_rdwen", false,-1);
    tracep->declBus(c+23,"o_imm", false,-1, 31,0);
    tracep->declBus(c+21,"o_exu_src_sel", false,-1, 2,0);
    tracep->declBus(c+20,"o_exu_opt", false,-1, 4,0);
    tracep->declBus(c+22,"o_lsu_opt", false,-1, 3,0);
    tracep->declBit(c+149,"o_brch", false,-1);
    tracep->declBit(c+150,"o_jal", false,-1);
    tracep->declBit(c+151,"o_jalr", false,-1);
    tracep->declBus(c+152,"func7", false,-1, 6,0);
    tracep->declBus(c+163,"rs2id", false,-1, 4,0);
    tracep->declBus(c+164,"rs1id", false,-1, 4,0);
    tracep->declBus(c+153,"func3", false,-1, 2,0);
    tracep->declBus(c+165,"rdid", false,-1, 4,0);
    tracep->declBus(c+166,"opcode", false,-1, 6,0);
    tracep->declBus(c+26,"id_err", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_lsu ");
    tracep->declBit(c+144,"i_clk", false,-1);
    tracep->declBit(c+148,"i_rst_n", false,-1);
    tracep->declBus(c+22,"i_opt", false,-1, 3,0);
    tracep->declBus(c+92,"i_addr", false,-1, 31,0);
    tracep->declBus(c+54,"i_regst", false,-1, 31,0);
    tracep->declBus(c+93,"o_regld", false,-1, 31,0);
    tracep->declBit(c+27,"ren", false,-1);
    tracep->declBus(c+92,"raddr", false,-1, 31,0);
    tracep->declBus(c+102,"rdata", false,-1, 31,0);
    tracep->declBus(c+28,"mask", false,-1, 7,0);
    tracep->declBus(c+138,"wmask", false,-1, 7,0);
    tracep->declBus(c+139,"waddr", false,-1, 31,0);
    tracep->declBus(c+140,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("u_stdreg ");
    tracep->declBus(c+180,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+181,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"i_clk", false,-1);
    tracep->declBit(c+148,"i_rst_n", false,-1);
    tracep->declBit(c+182,"i_wen", false,-1);
    tracep->declArray(c+167,"i_din", false,-1, 71,0);
    tracep->declArray(c+141,"o_dout", false,-1, 71,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_pcu ");
    tracep->declBit(c+144,"i_clk", false,-1);
    tracep->declBit(c+148,"i_rst_n", false,-1);
    tracep->declBit(c+149,"i_brch", false,-1);
    tracep->declBit(c+150,"i_jal", false,-1);
    tracep->declBit(c+151,"i_jalr", false,-1);
    tracep->declBit(c+104,"i_ecall", false,-1);
    tracep->declBit(c+94,"i_zero", false,-1);
    tracep->declBus(c+53,"i_rs1", false,-1, 31,0);
    tracep->declBus(c+23,"i_imm", false,-1, 31,0);
    tracep->declBus(c+103,"i_ecall_pc", false,-1, 31,0);
    tracep->declBus(c+146,"o_pc", false,-1, 31,0);
    tracep->declBus(c+170,"pc_next", false,-1, 31,0);
    tracep->pushNamePrefix("u_stdreg ");
    tracep->declBus(c+175,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+183,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+144,"i_clk", false,-1);
    tracep->declBit(c+148,"i_rst_n", false,-1);
    tracep->declBit(c+182,"i_wen", false,-1);
    tracep->declBus(c+170,"i_din", false,-1, 31,0);
    tracep->declBus(c+146,"o_dout", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_regfile ");
    tracep->declBit(c+144,"i_clk", false,-1);
    tracep->declBit(c+24,"i_wen", false,-1);
    tracep->declBus(c+19,"i_waddr", false,-1, 4,0);
    tracep->declBus(c+95,"i_wdata", false,-1, 31,0);
    tracep->declBus(c+17,"i_raddr1", false,-1, 4,0);
    tracep->declBus(c+18,"i_raddr2", false,-1, 4,0);
    tracep->declBus(c+53,"o_rdata1", false,-1, 31,0);
    tracep->declBus(c+54,"o_rdata2", false,-1, 31,0);
    tracep->declBit(c+105,"s_a0zero", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+106+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_stdrst ");
    tracep->declBit(c+144,"i_clk", false,-1);
    tracep->declBit(c+147,"i_rst_n", false,-1);
    tracep->declBit(c+148,"o_rst_n_sync", false,-1);
    tracep->declBit(c+171,"rst_n_r1", false,-1);
    tracep->declBit(c+148,"rst_n_r2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_wbu ");
    tracep->declBus(c+92,"i_exu_res", false,-1, 31,0);
    tracep->declBus(c+93,"i_lsu_res", false,-1, 31,0);
    tracep->declBit(c+27,"i_ld_en", false,-1);
    tracep->declBus(c+95,"o_rd", false,-1, 31,0);
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
    VlWide<9>/*287:0*/ __Vtemp_hfcfdcfe5__0;
    VlWide<9>/*287:0*/ __Vtemp_h875d4b1c__0;
    VlWide<3>/*95:0*/ __Vtemp_h877559c0__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__rs1id),5);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__rs2id),5);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__rdid),5);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__exu_opt),5);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__exu_src_sel),3);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__lsu_opt),4);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__imm),32);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__rdwen));
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__u_exu__DOT__alu_opt),5);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__u_idu__DOT__id_err),3);
    bufp->fullBit(oldp+27,((1U & (~ (IData)(vlSelf->top__DOT__lsu_opt)))));
    bufp->fullCData(oldp+28,(((1U == (IData)(vlSelf->top__DOT__lsu_opt))
                               ? 1U : ((3U == (IData)(vlSelf->top__DOT__lsu_opt))
                                        ? 3U : ((5U 
                                                 == (IData)(vlSelf->top__DOT__lsu_opt))
                                                 ? 0xfU
                                                 : 0U)))),8);
    bufp->fullQData(oldp+29,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+31,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+33,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+35,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+37,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+39,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+41,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullQData(oldp+43,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__pair_list[7]),35);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__rs1),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__rs2),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__csr),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__u_exu__DOT__src2),32);
    __Vtemp_hfcfdcfe5__0[0U] = (IData)((0x700000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__csr))));
    __Vtemp_hfcfdcfe5__0[1U] = ((vlSelf->top__DOT__csr 
                                 << 3U) | (IData)((
                                                   (0x700000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__csr))) 
                                                   >> 0x20U)));
    __Vtemp_hfcfdcfe5__0[2U] = (0x30U | ((vlSelf->top__DOT__csr 
                                          << 6U) | 
                                         (vlSelf->top__DOT__csr 
                                          >> 0x1dU)));
    __Vtemp_hfcfdcfe5__0[3U] = (0x140U | ((vlSelf->top__DOT__csr 
                                           << 9U) | 
                                          (vlSelf->top__DOT__csr 
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
    bufp->fullWData(oldp+57,(__Vtemp_hfcfdcfe5__0),280);
    bufp->fullQData(oldp+66,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+68,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+70,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+72,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+74,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+76,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+78,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullQData(oldp+80,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__pair_list[7]),35);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__u_exu__DOT__mux_src2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__exu_res),32);
    bufp->fullIData(oldp+93,(((8U & (IData)(vlSelf->top__DOT__lsu_opt))
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
    bufp->fullBit(oldp+94,((1U & (~ (IData)((0U != vlSelf->top__DOT__exu_res))))));
    bufp->fullIData(oldp+95,(((1U & (IData)(vlSelf->top__DOT__lsu_opt))
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
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__u_exu__DOT__src1),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__u_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__u_exu__DOT__sububit));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__u_exu__DOT__less));
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__u_exu__DOT__mux_src1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__u_lsu__DOT__rdata),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__u_csrfile__DOT__pc_temp),32);
    bufp->fullBit(oldp+104,(vlSelf->top__DOT__ecall));
    bufp->fullBit(oldp+105,((1U & (~ (IData)((0U != 
                                              vlSelf->top__DOT__u_regfile__DOT__rf
                                              [0xaU]))))));
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__u_regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__u_regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__u_regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__u_regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__u_regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__u_regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__u_regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__u_regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__u_regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__u_regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__u_regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__u_regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__u_regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__u_regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__u_regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__u_regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__u_regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__u_regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__u_regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__u_regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__u_regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__u_regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__u_regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__u_regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__u_regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__u_regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__u_regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__u_regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__u_regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__u_regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__u_regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__u_regfile__DOT__rf[31]),32);
    bufp->fullCData(oldp+138,((0xffU & vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U])),8);
    bufp->fullIData(oldp+139,(((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[2U] 
                                << 0x18U) | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+140,(((vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[1U] 
                                << 0x18U) | (vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout[0U] 
                                             >> 8U))),32);
    bufp->fullWData(oldp+141,(vlSelf->top__DOT__u_lsu__DOT____Vcellout__u_stdreg__o_dout),72);
    bufp->fullBit(oldp+144,(vlSelf->i_clk));
    bufp->fullIData(oldp+145,(vlSelf->ins),32);
    bufp->fullIData(oldp+146,(vlSelf->pc),32);
    bufp->fullBit(oldp+147,(vlSelf->i_rst_n));
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r2));
    bufp->fullBit(oldp+149,((0x63U == (0x7fU & vlSelf->ins))));
    bufp->fullBit(oldp+150,((0x6fU == (0x7fU & vlSelf->ins))));
    bufp->fullBit(oldp+151,((0x67U == (0x7fU & vlSelf->ins))));
    bufp->fullCData(oldp+152,((vlSelf->ins >> 0x19U)),7);
    bufp->fullCData(oldp+153,((7U & (vlSelf->ins >> 0xcU))),3);
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
    bufp->fullWData(oldp+154,(__Vtemp_h875d4b1c__0),280);
    bufp->fullCData(oldp+163,((0x1fU & (vlSelf->ins 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+164,((0x1fU & (vlSelf->ins 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+165,((0x1fU & (vlSelf->ins 
                                        >> 7U))),5);
    bufp->fullCData(oldp+166,((0x7fU & vlSelf->ins)),7);
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
    bufp->fullWData(oldp+167,(__Vtemp_h877559c0__0),72);
    bufp->fullIData(oldp+170,(((((0U != vlSelf->top__DOT__exu_res) 
                                 & (0x63U == (0x7fU 
                                              & vlSelf->ins))) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->ins)))
                                ? (vlSelf->pc + vlSelf->top__DOT__imm)
                                : ((0x67U == (0x7fU 
                                              & vlSelf->ins))
                                    ? (vlSelf->top__DOT__imm 
                                       + vlSelf->top__DOT__rs1)
                                    : ((IData)(vlSelf->top__DOT__ecall)
                                        ? vlSelf->top__DOT__u_csrfile__DOT__pc_temp
                                        : ((IData)(4U) 
                                           + vlSelf->pc))))),32);
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__u_stdrst__DOT__rst_n_r1));
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__u_csrfile__DOT__csr_temp),32);
    bufp->fullIData(oldp+173,(8U),32);
    bufp->fullIData(oldp+174,(3U),32);
    bufp->fullIData(oldp+175,(0x20U),32);
    bufp->fullIData(oldp+176,(0U),32);
    bufp->fullIData(oldp+177,(1U),32);
    bufp->fullIData(oldp+178,(0x23U),32);
    bufp->fullIData(oldp+179,(8U),32);
    bufp->fullIData(oldp+180,(0x48U),32);
    bufp->fullIData(oldp+181,(0U),32);
    bufp->fullBit(oldp+182,(1U));
    bufp->fullIData(oldp+183,(0x80000000U),32);
}
