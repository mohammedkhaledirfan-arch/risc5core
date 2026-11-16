// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu__DOT__instruction_memory__DOT__byte_enable = 0xfU;
    vlSelfRef.cpu__DOT__data_memory__DOT__byte_enable = 0xfU;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6d6f7279U;
    __Vtemp_1[2U] = 0x5f696d65U;
    __Vtemp_1[3U] = 0x74657374U;
    __Vtemp_1[4U] = 0x2e2fU;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelfRef.cpu__DOT__instruction_memory__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6d6f7279U;
    __Vtemp_2[2U] = 0x5f646d65U;
    __Vtemp_2[3U] = 0x74657374U;
    __Vtemp_2[4U] = 0x2e2fU;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                 ,  &(vlSelfRef.cpu__DOT__data_memory__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.cpu__DOT__instruction_memory__DOT__write_data = 0U;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__write_enable = 0U;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__rst_n = 1U;
    vlSelfRef.cpu__DOT__control_unit__DOT__func7 = 0U;
    vlSelfRef.cpu__DOT__data_memory__DOT__rst_n = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/cpu/../../src/cpu.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus_second_add = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus_four = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_source = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__second_add_source = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__f3 = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__imm_source = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_source = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__write_back_source = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__source_reg1 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__source_reg2 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__dest_reg = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__read_reg1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__read_reg2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__write_back_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__mem_read = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__raw_imm = VL_RAND_RESET_I(25);
    vlSelf->cpu__DOT__alu_src2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instruction_memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instruction_memory__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instruction_memory__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instruction_memory__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__instruction_memory__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instruction_memory__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__instruction_memory__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__instruction_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__instruction_memory__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->cpu__DOT__instruction_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__control_unit__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__control_unit__DOT__func3 = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__control_unit__DOT__func7 = VL_RAND_RESET_I(7);
    vlSelf->cpu__DOT__control_unit__DOT__alu_zero = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__control_unit__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__control_unit__DOT__imm_source = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__control_unit__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__control_unit__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__control_unit__DOT__alu_source = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__control_unit__DOT__write_back_source = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__control_unit__DOT__pc_source = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__control_unit__DOT__second_add_source = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__control_unit__DOT__alu_op = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__control_unit__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__control_unit__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__regfile__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__regfile__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__regfile__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__regfile__DOT__adr1 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__regfile__DOT__adr2 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__regfile__DOT__adr3 = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__regfile__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__regfile__DOT__read_data1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__regfile__DOT__read_data2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu__DOT__regfile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__sign_extender__DOT__raw_src = VL_RAND_RESET_I(25);
    vlSelf->cpu__DOT__sign_extender__DOT__imm_source = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__sign_extender__DOT__immediate = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__sign_extender__DOT__gathered_imm = VL_RAND_RESET_I(12);
    vlSelf->cpu__DOT__alu_inst__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__alu_inst__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_inst__DOT__src2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_inst__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_inst__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__data_memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__data_memory__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__data_memory__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__data_memory__DOT__byte_enable = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__data_memory__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__data_memory__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__data_memory__DOT__read_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu__DOT__data_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->cpu__DOT__data_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
