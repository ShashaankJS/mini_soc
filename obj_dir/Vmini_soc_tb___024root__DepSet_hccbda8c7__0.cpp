// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_soc_tb.h for the primary calling header

#include "verilated.h"

#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb___024root.h"

VlCoroutine Vmini_soc_tb___024root___eval_initial__TOP__0(Vmini_soc_tb___024root* vlSelf);
VlCoroutine Vmini_soc_tb___024root___eval_initial__TOP__1(Vmini_soc_tb___024root* vlSelf);

void Vmini_soc_tb___024root___eval_initial(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_initial\n"); );
    // Body
    Vmini_soc_tb___024root___eval_initial__TOP__0(vlSelf);
    Vmini_soc_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0 
        = vlSelf->mini_soc_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vmini_soc_tb___024root___eval_initial__TOP__1(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_initial__TOP__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "mini_soc_tb.v", 
                                           13);
        vlSelf->mini_soc_tb__DOT__clk = (1U & (~ (IData)(vlSelf->mini_soc_tb__DOT__clk)));
    }
}

void Vmini_soc_tb___024root___eval_act(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmini_soc_tb___024root___nba_sequent__TOP__0(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->mini_soc_tb__DOT__dut__DOT__count = ((IData)(vlSelf->mini_soc_tb__DOT__rst)
                                                  ? 0U
                                                  : 
                                                 (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->mini_soc_tb__DOT__dut__DOT__count))));
}

void Vmini_soc_tb___024root___eval_nba(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmini_soc_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmini_soc_tb___024root___eval_triggers__act(Vmini_soc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__act(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmini_soc_tb___024root___timing_resume(Vmini_soc_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__nba(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmini_soc_tb___024root___eval(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmini_soc_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmini_soc_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("mini_soc_tb.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmini_soc_tb___024root___timing_resume(vlSelf);
                Vmini_soc_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmini_soc_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("mini_soc_tb.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmini_soc_tb___024root___eval_nba(vlSelf);
        }
    }
}

void Vmini_soc_tb___024root___timing_resume(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

#ifdef VL_DEBUG
void Vmini_soc_tb___024root___eval_debug_assertions(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
