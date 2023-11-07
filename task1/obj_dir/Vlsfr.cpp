// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlsfr.h"
#include "Vlsfr__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlsfr::Vlsfr(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlsfr__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlsfr::Vlsfr(const char* _vcname__)
    : Vlsfr(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlsfr::~Vlsfr() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlsfr___024root___eval_debug_assertions(Vlsfr___024root* vlSelf);
#endif  // VL_DEBUG
void Vlsfr___024root___eval_static(Vlsfr___024root* vlSelf);
void Vlsfr___024root___eval_initial(Vlsfr___024root* vlSelf);
void Vlsfr___024root___eval_settle(Vlsfr___024root* vlSelf);
void Vlsfr___024root___eval(Vlsfr___024root* vlSelf);

void Vlsfr::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlsfr::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlsfr___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlsfr___024root___eval_static(&(vlSymsp->TOP));
        Vlsfr___024root___eval_initial(&(vlSymsp->TOP));
        Vlsfr___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlsfr___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlsfr::eventsPending() { return false; }

uint64_t Vlsfr::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlsfr::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlsfr___024root___eval_final(Vlsfr___024root* vlSelf);

VL_ATTR_COLD void Vlsfr::final() {
    Vlsfr___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlsfr::hierName() const { return vlSymsp->name(); }
const char* Vlsfr::modelName() const { return "Vlsfr"; }
unsigned Vlsfr::threads() const { return 1; }
void Vlsfr::prepareClone() const { contextp()->prepareClone(); }
void Vlsfr::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vlsfr::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlsfr___024root__trace_init_top(Vlsfr___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlsfr___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlsfr___024root*>(voidSelf);
    Vlsfr__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vlsfr___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vlsfr___024root__trace_register(Vlsfr___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlsfr::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vlsfr::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlsfr___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}