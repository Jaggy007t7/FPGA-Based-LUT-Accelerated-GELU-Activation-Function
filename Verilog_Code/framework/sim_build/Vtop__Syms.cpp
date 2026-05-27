// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_Gelu);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(250);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_Gelu.configure(this, name(), "Gelu", "Gelu", "Gelu", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_Gelu);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_Gelu.varInsert(__Vfinal,"In", &(TOP.Gelu__DOT__In), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_Gelu.varInsert(__Vfinal,"clk", &(TOP.Gelu__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_Gelu.varInsert(__Vfinal,"dataWidth", const_cast<void*>(static_cast<const void*>(&(TOP.Gelu__DOT__dataWidth))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Gelu.varInsert(__Vfinal,"in_width", const_cast<void*>(static_cast<const void*>(&(TOP.Gelu__DOT__in_width))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Gelu.varInsert(__Vfinal,"mem", &(TOP.Gelu__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,1023 ,31,0);
        __Vscope_Gelu.varInsert(__Vfinal,"out", &(TOP.Gelu__DOT__out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_Gelu.varInsert(__Vfinal,"y", &(TOP.Gelu__DOT__y), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_TOP.varInsert(__Vfinal,"In", &(TOP.In), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,9,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"out", &(TOP.out), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
    }
}
