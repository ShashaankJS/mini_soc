// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmini_soc_tb__Syms.h"


VL_ATTR_COLD void Vmini_soc_tb___024root__trace_init_sub__TOP__0(Vmini_soc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("mini_soc_tb ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"alu_sel", false,-1);
    tracep->declBit(c+7,"mux_sel", false,-1);
    tracep->declBus(c+8,"soc_out", false,-1, 1,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"alu_sel", false,-1);
    tracep->declBit(c+7,"mux_sel", false,-1);
    tracep->declBus(c+8,"soc_out", false,-1, 1,0);
    tracep->declBus(c+1,"count", false,-1, 3,0);
    tracep->declBus(c+9,"alu_out", false,-1, 1,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+2,"a", false,-1, 1,0);
    tracep->declBus(c+3,"b", false,-1, 1,0);
    tracep->declBit(c+6,"sel", false,-1);
    tracep->declBus(c+9,"result", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_counter ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBus(c+1,"count", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mux ");
    tracep->declBus(c+2,"in0", false,-1, 1,0);
    tracep->declBus(c+9,"in1", false,-1, 1,0);
    tracep->declBit(c+7,"sel", false,-1);
    tracep->declBus(c+8,"out", false,-1, 1,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vmini_soc_tb___024root__trace_init_top(Vmini_soc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root__trace_init_top\n"); );
    // Body
    Vmini_soc_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmini_soc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmini_soc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmini_soc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmini_soc_tb___024root__trace_register(Vmini_soc_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmini_soc_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmini_soc_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmini_soc_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmini_soc_tb___024root__trace_full_sub_0(Vmini_soc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmini_soc_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root__trace_full_top_0\n"); );
    // Init
    Vmini_soc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmini_soc_tb___024root*>(voidSelf);
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmini_soc_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmini_soc_tb___024root__trace_full_sub_0(Vmini_soc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->mini_soc_tb__DOT__dut__DOT__count),4);
    bufp->fullCData(oldp+2,((3U & ((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                                   >> 2U))),2);
    bufp->fullCData(oldp+3,((3U & (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count))),2);
    bufp->fullBit(oldp+4,(vlSelf->mini_soc_tb__DOT__clk));
    bufp->fullBit(oldp+5,(vlSelf->mini_soc_tb__DOT__rst));
    bufp->fullBit(oldp+6,(vlSelf->mini_soc_tb__DOT__alu_sel));
    bufp->fullBit(oldp+7,(vlSelf->mini_soc_tb__DOT__mux_sel));
    bufp->fullCData(oldp+8,((3U & ((IData)(vlSelf->mini_soc_tb__DOT__mux_sel)
                                    ? ((IData)(vlSelf->mini_soc_tb__DOT__alu_sel)
                                        ? ((IData)(vlSelf->mini_soc_tb__DOT__alu_sel)
                                            ? (((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                                                >> 2U) 
                                               - (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count))
                                            : 0U) : 
                                       (((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                                         >> 2U) + (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count)))
                                    : ((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                                       >> 2U)))),2);
    bufp->fullCData(oldp+9,((3U & ((IData)(vlSelf->mini_soc_tb__DOT__alu_sel)
                                    ? ((IData)(vlSelf->mini_soc_tb__DOT__alu_sel)
                                        ? (((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                                            >> 2U) 
                                           - (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count))
                                        : 0U) : (((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                                                  >> 2U) 
                                                 + (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count))))),2);
}
