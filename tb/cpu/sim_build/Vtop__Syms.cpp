// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_cpu);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__alu_inst);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__control_unit);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__data_memory);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__instruction_memory);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__regfile);
    __Vhier.remove(&__Vscope_cpu, &__Vscope_cpu__sign_extender);
    __Vhier.remove(&__Vscope_cpu__data_memory, &__Vscope_cpu__data_memory__unnamedblk1);
    __Vhier.remove(&__Vscope_cpu__data_memory, &__Vscope_cpu__data_memory__unnamedblk2);
    __Vhier.remove(&__Vscope_cpu__instruction_memory, &__Vscope_cpu__instruction_memory__unnamedblk1);
    __Vhier.remove(&__Vscope_cpu__instruction_memory, &__Vscope_cpu__instruction_memory__unnamedblk2);
    __Vhier.remove(&__Vscope_cpu__regfile, &__Vscope_cpu__regfile__unnamedblk1);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(139);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu.configure(this, name(), "cpu", "cpu", "cpu", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__alu_inst.configure(this, name(), "cpu.alu_inst", "alu_inst", "alu", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__control_unit.configure(this, name(), "cpu.control_unit", "control_unit", "control", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__data_memory.configure(this, name(), "cpu.data_memory", "data_memory", "memory", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__data_memory__unnamedblk1.configure(this, name(), "cpu.data_memory.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu__data_memory__unnamedblk2.configure(this, name(), "cpu.data_memory.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu__instruction_memory.configure(this, name(), "cpu.instruction_memory", "instruction_memory", "memory", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__instruction_memory__unnamedblk1.configure(this, name(), "cpu.instruction_memory.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu__instruction_memory__unnamedblk2.configure(this, name(), "cpu.instruction_memory.unnamedblk2", "unnamedblk2", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu__regfile.configure(this, name(), "cpu.regfile", "regfile", "regfile", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_cpu__regfile__unnamedblk1.configure(this, name(), "cpu.regfile.unnamedblk1", "unnamedblk1", "<null>", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_cpu__sign_extender.configure(this, name(), "cpu.sign_extender", "sign_extender", "signext", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_cpu);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__alu_inst);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__control_unit);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__data_memory);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__instruction_memory);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__regfile);
    __Vhier.add(&__Vscope_cpu, &__Vscope_cpu__sign_extender);
    __Vhier.add(&__Vscope_cpu__data_memory, &__Vscope_cpu__data_memory__unnamedblk1);
    __Vhier.add(&__Vscope_cpu__data_memory, &__Vscope_cpu__data_memory__unnamedblk2);
    __Vhier.add(&__Vscope_cpu__instruction_memory, &__Vscope_cpu__instruction_memory__unnamedblk1);
    __Vhier.add(&__Vscope_cpu__instruction_memory, &__Vscope_cpu__instruction_memory__unnamedblk2);
    __Vhier.add(&__Vscope_cpu__regfile, &__Vscope_cpu__regfile__unnamedblk1);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_cpu.varInsert(__Vfinal,"alu_control", &(TOP.cpu__DOT__alu_control), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cpu.varInsert(__Vfinal,"alu_result", &(TOP.cpu__DOT__alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"alu_source", &(TOP.cpu__DOT__alu_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu.varInsert(__Vfinal,"alu_src2", &(TOP.cpu__DOT__alu_src2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"alu_zero", &(TOP.cpu__DOT__alu_zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu.varInsert(__Vfinal,"clk", &(TOP.cpu__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu.varInsert(__Vfinal,"dest_reg", &(TOP.cpu__DOT__dest_reg), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cpu.varInsert(__Vfinal,"f3", &(TOP.cpu__DOT__f3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cpu.varInsert(__Vfinal,"imm_source", &(TOP.cpu__DOT__imm_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cpu.varInsert(__Vfinal,"immediate", &(TOP.cpu__DOT__immediate), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"instruction", &(TOP.cpu__DOT__instruction), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"mem_read", &(TOP.cpu__DOT__mem_read), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"mem_write", &(TOP.cpu__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu.varInsert(__Vfinal,"op", &(TOP.cpu__DOT__op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc", &(TOP.cpu__DOT__pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_next", &(TOP.cpu__DOT__pc_next), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_plus_four", &(TOP.cpu__DOT__pc_plus_four), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_plus_second_add", &(TOP.cpu__DOT__pc_plus_second_add), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_source", &(TOP.cpu__DOT__pc_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu.varInsert(__Vfinal,"pc_target", &(TOP.cpu__DOT__pc_target), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"raw_imm", &(TOP.cpu__DOT__raw_imm), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,24,0);
        __Vscope_cpu.varInsert(__Vfinal,"read_reg1", &(TOP.cpu__DOT__read_reg1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"read_reg2", &(TOP.cpu__DOT__read_reg2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"reg_write", &(TOP.cpu__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu.varInsert(__Vfinal,"rst_n", &(TOP.cpu__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu.varInsert(__Vfinal,"second_add_source", &(TOP.cpu__DOT__second_add_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu.varInsert(__Vfinal,"source_reg1", &(TOP.cpu__DOT__source_reg1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cpu.varInsert(__Vfinal,"source_reg2", &(TOP.cpu__DOT__source_reg2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cpu.varInsert(__Vfinal,"write_back_data", &(TOP.cpu__DOT__write_back_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu.varInsert(__Vfinal,"write_back_source", &(TOP.cpu__DOT__write_back_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_cpu__alu_inst.varInsert(__Vfinal,"alu_control", &(TOP.cpu__DOT__alu_inst__DOT__alu_control), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cpu__alu_inst.varInsert(__Vfinal,"alu_result", &(TOP.cpu__DOT__alu_inst__DOT__alu_result), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__alu_inst.varInsert(__Vfinal,"src1", &(TOP.cpu__DOT__alu_inst__DOT__src1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__alu_inst.varInsert(__Vfinal,"src2", &(TOP.cpu__DOT__alu_inst__DOT__src2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__alu_inst.varInsert(__Vfinal,"zero", &(TOP.cpu__DOT__alu_inst__DOT__zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"alu_control", &(TOP.cpu__DOT__control_unit__DOT__alu_control), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"alu_op", &(TOP.cpu__DOT__control_unit__DOT__alu_op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"alu_source", &(TOP.cpu__DOT__control_unit__DOT__alu_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"alu_zero", &(TOP.cpu__DOT__control_unit__DOT__alu_zero), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"branch", &(TOP.cpu__DOT__control_unit__DOT__branch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"func3", &(TOP.cpu__DOT__control_unit__DOT__func3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"func7", &(TOP.cpu__DOT__control_unit__DOT__func7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"imm_source", &(TOP.cpu__DOT__control_unit__DOT__imm_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"jump", &(TOP.cpu__DOT__control_unit__DOT__jump), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"mem_write", &(TOP.cpu__DOT__control_unit__DOT__mem_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"op", &(TOP.cpu__DOT__control_unit__DOT__op), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,6,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"pc_source", &(TOP.cpu__DOT__control_unit__DOT__pc_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"reg_write", &(TOP.cpu__DOT__control_unit__DOT__reg_write), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"second_add_source", &(TOP.cpu__DOT__control_unit__DOT__second_add_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__control_unit.varInsert(__Vfinal,"write_back_source", &(TOP.cpu__DOT__control_unit__DOT__write_back_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"WORDS", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__data_memory__DOT__WORDS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"address", &(TOP.cpu__DOT__data_memory__DOT__address), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"byte_enable", &(TOP.cpu__DOT__data_memory__DOT__byte_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"clk", &(TOP.cpu__DOT__data_memory__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"mem", &(TOP.cpu__DOT__data_memory__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,63 ,31,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"mem_init", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__data_memory__DOT__mem_init))), true, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,143,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"read_data", &(TOP.cpu__DOT__data_memory__DOT__read_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"rst_n", &(TOP.cpu__DOT__data_memory__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"write_data", &(TOP.cpu__DOT__data_memory__DOT__write_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__data_memory.varInsert(__Vfinal,"write_enable", &(TOP.cpu__DOT__data_memory__DOT__write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__data_memory__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_cpu__data_memory__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"WORDS", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__instruction_memory__DOT__WORDS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"address", &(TOP.cpu__DOT__instruction_memory__DOT__address), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"byte_enable", &(TOP.cpu__DOT__instruction_memory__DOT__byte_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"clk", &(TOP.cpu__DOT__instruction_memory__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"mem", &(TOP.cpu__DOT__instruction_memory__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,63 ,31,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"mem_init", const_cast<void*>(static_cast<const void*>(&(TOP.cpu__DOT__instruction_memory__DOT__mem_init))), true, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,143,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"read_data", &(TOP.cpu__DOT__instruction_memory__DOT__read_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"rst_n", &(TOP.cpu__DOT__instruction_memory__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"write_data", &(TOP.cpu__DOT__instruction_memory__DOT__write_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__instruction_memory.varInsert(__Vfinal,"write_enable", &(TOP.cpu__DOT__instruction_memory__DOT__write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__instruction_memory__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_cpu__instruction_memory__unnamedblk2.varInsert(__Vfinal,"i", &(TOP.cpu__DOT__instruction_memory__DOT__unnamedblk2__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"adr1", &(TOP.cpu__DOT__regfile__DOT__adr1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"adr2", &(TOP.cpu__DOT__regfile__DOT__adr2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"adr3", &(TOP.cpu__DOT__regfile__DOT__adr3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"clk", &(TOP.cpu__DOT__regfile__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"read_data1", &(TOP.cpu__DOT__regfile__DOT__read_data1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"read_data2", &(TOP.cpu__DOT__regfile__DOT__read_data2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"registers", &(TOP.cpu__DOT__regfile__DOT__registers), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,31 ,31,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"rst_n", &(TOP.cpu__DOT__regfile__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"write_data", &(TOP.cpu__DOT__regfile__DOT__write_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__regfile.varInsert(__Vfinal,"write_enable", &(TOP.cpu__DOT__regfile__DOT__write_enable), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_cpu__regfile__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,1 ,31,0);
        __Vscope_cpu__sign_extender.varInsert(__Vfinal,"gathered_imm", &(TOP.cpu__DOT__sign_extender__DOT__gathered_imm), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_cpu__sign_extender.varInsert(__Vfinal,"imm_source", &(TOP.cpu__DOT__sign_extender__DOT__imm_source), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_cpu__sign_extender.varInsert(__Vfinal,"immediate", &(TOP.cpu__DOT__sign_extender__DOT__immediate), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_cpu__sign_extender.varInsert(__Vfinal,"raw_src", &(TOP.cpu__DOT__sign_extender__DOT__raw_src), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,24,0);
    }
}
