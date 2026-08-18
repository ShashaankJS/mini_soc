// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmini_soc_tb__Syms.h"


void Vmini_soc_tb___024root__trace_chg_sub_0(Vmini_soc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmini_soc_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vmini_soc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmini_soc_tb___024root*>(voidSelf);
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmini_soc_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmini_soc_tb___024root__trace_chg_sub_0(Vmini_soc_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->mini_soc_tb__DOT__dut__DOT__count),4);
        bufp->chgCData(oldp+1,((3U & ((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                                      >> 2U))),2);
        bufp->chgCData(oldp+2,((3U & (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count))),2);
    }
    bufp->chgBit(oldp+3,(vlSelf->mini_soc_tb__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelf->mini_soc_tb__DOT__rst));
    bufp->chgBit(oldp+5,(vlSelf->mini_soc_tb__DOT__alu_sel));
    bufp->chgBit(oldp+6,(vlSelf->mini_soc_tb__DOT__mux_sel));
    bufp->chgCData(oldp+7,((3U & ((IData)(vlSelf->mini_soc_tb__DOT__mux_sel)
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
    bufp->chgCData(oldp+8,((3U & ((IData)(vlSelf->mini_soc_tb__DOT__alu_sel)
                                   ? ((IData)(vlSelf->mini_soc_tb__DOT__alu_sel)
                                       ? (((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                                           >> 2U) - (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count))
                                       : 0U) : (((IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count) 
                                                 >> 2U) 
                                                + (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count))))),2);
}

void Vmini_soc_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root__trace_cleanup\n"); );
    // Init
    Vmini_soc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmini_soc_tb___024root*>(voidSelf);
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
