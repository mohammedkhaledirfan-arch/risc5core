// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_signext);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_signext.configure(this, name(), "signext", "signext", "signext", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_signext);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"imm_source", &(TOP.imm_source), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"immediate", &(TOP.immediate), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"raw_src", &(TOP.raw_src), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,24,0);
        __Vscope_signext.varInsert(__Vfinal,"gathered_imm", &(TOP.signext__DOT__gathered_imm), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_signext.varInsert(__Vfinal,"imm_source", &(TOP.signext__DOT__imm_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_signext.varInsert(__Vfinal,"immediate", &(TOP.signext__DOT__immediate), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_signext.varInsert(__Vfinal,"raw_src", &(TOP.signext__DOT__raw_src), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,24,0);
    }
}
