// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vf1_basic_top.h for the primary calling header

#ifndef VERILATED_VF1_BASIC_TOP___024ROOT_H_
#define VERILATED_VF1_BASIC_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vf1_basic_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vf1_basic_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(en,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ f1_basic_top__DOT__wire1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(N,15,0);
    SData/*15:0*/ f1_basic_top__DOT__my_divider__DOT__count;
    IData/*31:0*/ f1_basic_top__DOT__my_f1_machine__DOT__current_state;
    IData/*31:0*/ f1_basic_top__DOT__my_f1_machine__DOT__next_state;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vf1_basic_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vf1_basic_top___024root(Vf1_basic_top__Syms* symsp, const char* v__name);
    ~Vf1_basic_top___024root();
    VL_UNCOPYABLE(Vf1_basic_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
