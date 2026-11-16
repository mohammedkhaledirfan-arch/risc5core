// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_control);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(29);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_control.configure(this, name(), "control", "control", "control", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_control);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"alu_control", &(TOP.alu_control), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"alu_source", &(TOP.alu_source), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"alu_zero", &(TOP.alu_zero), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"func3", &(TOP.func3), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"func7", &(TOP.func7), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_TOP.varInsert(__Vfinal,"imm_source", &(TOP.imm_source), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"mem_write", &(TOP.mem_write), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"op", &(TOP.op), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_TOP.varInsert(__Vfinal,"reg_write", &(TOP.reg_write), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"write_back_source", &(TOP.write_back_source), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_control.varInsert(__Vfinal,"alu_control", &(TOP.control__DOT__alu_control), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_control.varInsert(__Vfinal,"alu_op", &(TOP.control__DOT__alu_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_control.varInsert(__Vfinal,"alu_source", &(TOP.control__DOT__alu_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_control.varInsert(__Vfinal,"alu_zero", &(TOP.control__DOT__alu_zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_control.varInsert(__Vfinal,"func3", &(TOP.control__DOT__func3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_control.varInsert(__Vfinal,"func7", &(TOP.control__DOT__func7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_control.varInsert(__Vfinal,"imm_source", &(TOP.control__DOT__imm_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_control.varInsert(__Vfinal,"mem_write", &(TOP.control__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_control.varInsert(__Vfinal,"op", &(TOP.control__DOT__op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_control.varInsert(__Vfinal,"reg_write", &(TOP.control__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_control.varInsert(__Vfinal,"write_back_source", &(TOP.control__DOT__write_back_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
    }
}
