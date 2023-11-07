// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_top.h for the primary calling header

#ifndef VERILATED_VF1_TOP___024ROOT_H_
#define VERILATED_VF1_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vf1_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vf1_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(N,4,0);
    VL_IN8(trigger,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ f1_top__DOT__cmd_delay;
    CData/*0:0*/ f1_top__DOT__tick_to_mux;
    CData/*0:0*/ f1_top__DOT__mux_output;
    CData/*4:0*/ f1_top__DOT__my_divider__DOT__count;
    CData/*6:0*/ f1_top__DOT__my_rnggenerator__DOT__sreg;
    CData/*6:0*/ f1_top__DOT__myDelay__DOT__count;
    CData/*0:0*/ f1_top__DOT__myStateMachine__DOT__flag;
    CData/*6:0*/ __Vdly__f1_top__DOT__my_rnggenerator__DOT__sreg;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ f1_top__DOT__myDelay__DOT__current_state;
    IData/*31:0*/ f1_top__DOT__myDelay__DOT__next_state;
    IData/*31:0*/ f1_top__DOT__myStateMachine__DOT__current_state;
    IData/*31:0*/ f1_top__DOT__myStateMachine__DOT__next_state;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vf1_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_top___024root(Vf1_top__Syms* symsp, const char* v__name);
    ~Vf1_top___024root();
    VL_UNCOPYABLE(Vf1_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
