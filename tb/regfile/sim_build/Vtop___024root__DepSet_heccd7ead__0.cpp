// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.regfile__DOT__clk = vlSelfRef.clk;
    vlSelfRef.regfile__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.regfile__DOT__write_enable = vlSelfRef.write_enable;
    vlSelfRef.regfile__DOT__adr1 = vlSelfRef.adr1;
    vlSelfRef.regfile__DOT__adr2 = vlSelfRef.adr2;
    vlSelfRef.regfile__DOT__adr3 = vlSelfRef.adr3;
    vlSelfRef.regfile__DOT__write_data = vlSelfRef.write_data;
    vlSelfRef.regfile__DOT__read_data1 = ((0U == (IData)(vlSelfRef.adr1))
                                           ? 0U : vlSelfRef.regfile__DOT__registers
                                          [vlSelfRef.adr1]);
    vlSelfRef.regfile__DOT__read_data2 = ((0U == (IData)(vlSelfRef.adr2))
                                           ? 0U : vlSelfRef.regfile__DOT__registers
                                          [vlSelfRef.adr2]);
    vlSelfRef.read_data1 = vlSelfRef.regfile__DOT__read_data1;
    vlSelfRef.read_data2 = vlSelfRef.regfile__DOT__read_data2;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__regfile__DOT__registers__v0;
    __VdlyVal__regfile__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__regfile__DOT__registers__v0;
    __VdlyDim0__regfile__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__regfile__DOT__registers__v0;
    __VdlySet__regfile__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__regfile__DOT__registers__v1;
    __VdlySet__regfile__DOT__registers__v1 = 0;
    // Body
    __VdlySet__regfile__DOT__registers__v0 = 0U;
    __VdlySet__regfile__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.regfile__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.write_enable) & (0U 
                                                != (IData)(vlSelfRef.adr3)))) {
            __VdlyVal__regfile__DOT__registers__v0 
                = vlSelfRef.write_data;
            __VdlyDim0__regfile__DOT__registers__v0 
                = vlSelfRef.adr3;
            __VdlySet__regfile__DOT__registers__v0 = 1U;
        }
    } else {
        __VdlySet__regfile__DOT__registers__v1 = 1U;
    }
    if (__VdlySet__regfile__DOT__registers__v0) {
        vlSelfRef.regfile__DOT__registers[__VdlyDim0__regfile__DOT__registers__v0] 
            = __VdlyVal__regfile__DOT__registers__v0;
    }
    if (__VdlySet__regfile__DOT__registers__v1) {
        vlSelfRef.regfile__DOT__registers[0U] = 0U;
        vlSelfRef.regfile__DOT__registers[1U] = 0U;
        vlSelfRef.regfile__DOT__registers[2U] = 0U;
        vlSelfRef.regfile__DOT__registers[3U] = 0U;
        vlSelfRef.regfile__DOT__registers[4U] = 0U;
        vlSelfRef.regfile__DOT__registers[5U] = 0U;
        vlSelfRef.regfile__DOT__registers[6U] = 0U;
        vlSelfRef.regfile__DOT__registers[7U] = 0U;
        vlSelfRef.regfile__DOT__registers[8U] = 0U;
        vlSelfRef.regfile__DOT__registers[9U] = 0U;
        vlSelfRef.regfile__DOT__registers[0xaU] = 0U;
        vlSelfRef.regfile__DOT__registers[0xbU] = 0U;
        vlSelfRef.regfile__DOT__registers[0xcU] = 0U;
        vlSelfRef.regfile__DOT__registers[0xdU] = 0U;
        vlSelfRef.regfile__DOT__registers[0xeU] = 0U;
        vlSelfRef.regfile__DOT__registers[0xfU] = 0U;
        vlSelfRef.regfile__DOT__registers[0x10U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x11U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x12U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x13U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x14U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x15U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x16U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x17U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x18U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x19U] = 0U;
        vlSelfRef.regfile__DOT__registers[0x1aU] = 0U;
        vlSelfRef.regfile__DOT__registers[0x1bU] = 0U;
        vlSelfRef.regfile__DOT__registers[0x1cU] = 0U;
        vlSelfRef.regfile__DOT__registers[0x1dU] = 0U;
        vlSelfRef.regfile__DOT__registers[0x1eU] = 0U;
        vlSelfRef.regfile__DOT__registers[0x1fU] = 0U;
    }
    vlSelfRef.regfile__DOT__read_data1 = ((0U == (IData)(vlSelfRef.adr1))
                                           ? 0U : vlSelfRef.regfile__DOT__registers
                                          [vlSelfRef.adr1]);
    vlSelfRef.regfile__DOT__read_data2 = ((0U == (IData)(vlSelfRef.adr2))
                                           ? 0U : vlSelfRef.regfile__DOT__registers
                                          [vlSelfRef.adr2]);
    vlSelfRef.read_data1 = vlSelfRef.regfile__DOT__read_data1;
    vlSelfRef.read_data2 = vlSelfRef.regfile__DOT__read_data2;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/regfile/../../src/regfile.sv", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/regfile/../../src/regfile.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/regfile/../../src/regfile.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY(((vlSelfRef.write_enable & 0xfeU)))) {
        Verilated::overWidthError("write_enable");}
    if (VL_UNLIKELY(((vlSelfRef.adr1 & 0xe0U)))) {
        Verilated::overWidthError("adr1");}
    if (VL_UNLIKELY(((vlSelfRef.adr2 & 0xe0U)))) {
        Verilated::overWidthError("adr2");}
    if (VL_UNLIKELY(((vlSelfRef.adr3 & 0xe0U)))) {
        Verilated::overWidthError("adr3");}
}
#endif  // VL_DEBUG
