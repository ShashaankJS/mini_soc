// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmini_soc_tb.h for the primary calling header

#ifndef VERILATED_VMINI_SOC_TB___024ROOT_H_
#define VERILATED_VMINI_SOC_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmini_soc_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmini_soc_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mini_soc_tb__DOT__clk;
    CData/*0:0*/ mini_soc_tb__DOT__rst;
    CData/*0:0*/ mini_soc_tb__DOT__alu_sel;
    CData/*0:0*/ mini_soc_tb__DOT__mux_sel;
    CData/*3:0*/ mini_soc_tb__DOT__dut__DOT__count;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmini_soc_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmini_soc_tb___024root(Vmini_soc_tb__Syms* symsp, const char* v__name);
    ~Vmini_soc_tb___024root();
    VL_UNCOPYABLE(Vmini_soc_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
