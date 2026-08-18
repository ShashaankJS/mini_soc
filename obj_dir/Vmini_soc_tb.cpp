// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmini_soc_tb.h"
#include "Vmini_soc_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmini_soc_tb::Vmini_soc_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmini_soc_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmini_soc_tb::Vmini_soc_tb(const char* _vcname__)
    : Vmini_soc_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmini_soc_tb::~Vmini_soc_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmini_soc_tb___024root___eval_debug_assertions(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vmini_soc_tb___024root___eval_static(Vmini_soc_tb___024root* vlSelf);
void Vmini_soc_tb___024root___eval_initial(Vmini_soc_tb___024root* vlSelf);
void Vmini_soc_tb___024root___eval_settle(Vmini_soc_tb___024root* vlSelf);
void Vmini_soc_tb___024root___eval(Vmini_soc_tb___024root* vlSelf);

void Vmini_soc_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmini_soc_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmini_soc_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmini_soc_tb___024root___eval_static(&(vlSymsp->TOP));
        Vmini_soc_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vmini_soc_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmini_soc_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vmini_soc_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vmini_soc_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vmini_soc_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vmini_soc_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vmini_soc_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmini_soc_tb___024root___eval_final(Vmini_soc_tb___024root* vlSelf);

VL_ATTR_COLD void Vmini_soc_tb::final() {
    Vmini_soc_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmini_soc_tb::hierName() const { return vlSymsp->name(); }
const char* Vmini_soc_tb::modelName() const { return "Vmini_soc_tb"; }
unsigned Vmini_soc_tb::threads() const { return 1; }
void Vmini_soc_tb::prepareClone() const { contextp()->prepareClone(); }
void Vmini_soc_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmini_soc_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmini_soc_tb___024root__trace_init_top(Vmini_soc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmini_soc_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmini_soc_tb___024root*>(voidSelf);
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmini_soc_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmini_soc_tb___024root__trace_register(Vmini_soc_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmini_soc_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmini_soc_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmini_soc_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
