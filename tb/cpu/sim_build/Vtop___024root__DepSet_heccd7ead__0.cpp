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

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h9abe1add_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_hc2e76f23_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h0d1d69ec_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h58d1ada5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h1813868b_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h4d3ee9d0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hb4e52f6b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he63a9787_0;
extern const VlUnpacked<SData/*8:0*/, 128> Vtop__ConstPool__TABLE_he391e21e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h6277acd9_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vtop__ConstPool__TABLE_he2fbb87b_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.cpu__DOT__instruction_memory__DOT__address 
        = vlSelfRef.cpu__DOT__pc;
    vlSelfRef.cpu__DOT__instruction = vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
        [(0x3fU & (vlSelfRef.cpu__DOT__pc >> 2U))];
    vlSelfRef.cpu__DOT__instruction_memory__DOT__read_data 
        = vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
        [(0x3fU & (vlSelfRef.cpu__DOT__pc >> 2U))];
    vlSelfRef.cpu__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.cpu__DOT__dest_reg = (0x1fU & (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                             [(0x3fU 
                                               & (vlSelfRef.cpu__DOT__pc 
                                                  >> 2U))] 
                                             >> 7U));
    vlSelfRef.cpu__DOT__clk = vlSelfRef.clk;
    vlSelfRef.cpu__DOT__pc_plus_four = ((IData)(4U) 
                                        + vlSelfRef.cpu__DOT__pc);
    vlSelfRef.cpu__DOT__source_reg1 = (0x1fU & (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                                [(0x3fU 
                                                  & (vlSelfRef.cpu__DOT__pc 
                                                     >> 2U))] 
                                                >> 0xfU));
    vlSelfRef.cpu__DOT__f3 = (7U & (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                    [(0x3fU & (vlSelfRef.cpu__DOT__pc 
                                               >> 2U))] 
                                    >> 0xcU));
    vlSelfRef.cpu__DOT__source_reg2 = (0x1fU & (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                                [(0x3fU 
                                                  & (vlSelfRef.cpu__DOT__pc 
                                                     >> 2U))] 
                                                >> 0x14U));
    vlSelfRef.cpu__DOT__raw_imm = (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                   [(0x3fU & (vlSelfRef.cpu__DOT__pc 
                                              >> 2U))] 
                                   >> 7U);
    vlSelfRef.cpu__DOT__op = (0x7fU & vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                              [(0x3fU & (vlSelfRef.cpu__DOT__pc 
                                         >> 2U))]);
    vlSelfRef.cpu__DOT__regfile__DOT__rst_n = vlSelfRef.cpu__DOT__rst_n;
    vlSelfRef.cpu__DOT__regfile__DOT__adr3 = vlSelfRef.cpu__DOT__dest_reg;
    vlSelfRef.cpu__DOT__instruction_memory__DOT__clk 
        = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__regfile__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__data_memory__DOT__clk = vlSelfRef.cpu__DOT__clk;
    vlSelfRef.cpu__DOT__regfile__DOT__adr1 = vlSelfRef.cpu__DOT__source_reg1;
    vlSelfRef.cpu__DOT__regfile__DOT__read_data1 = 
        ((0U == (IData)(vlSelfRef.cpu__DOT__source_reg1))
          ? 0U : vlSelfRef.cpu__DOT__regfile__DOT__registers
         [vlSelfRef.cpu__DOT__source_reg1]);
    vlSelfRef.cpu__DOT__control_unit__DOT__func3 = vlSelfRef.cpu__DOT__f3;
    vlSelfRef.cpu__DOT__regfile__DOT__adr2 = vlSelfRef.cpu__DOT__source_reg2;
    vlSelfRef.cpu__DOT__regfile__DOT__read_data2 = 
        ((0U == (IData)(vlSelfRef.cpu__DOT__source_reg2))
          ? 0U : vlSelfRef.cpu__DOT__regfile__DOT__registers
         [vlSelfRef.cpu__DOT__source_reg2]);
    vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
        = vlSelfRef.cpu__DOT__raw_imm;
    vlSelfRef.cpu__DOT__control_unit__DOT__op = vlSelfRef.cpu__DOT__op;
    __Vtableidx1 = vlSelfRef.cpu__DOT__op;
    vlSelfRef.cpu__DOT__control_unit__DOT__reg_write 
        = Vtop__ConstPool__TABLE_h9abe1add_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__imm_source 
        = Vtop__ConstPool__TABLE_hc2e76f23_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__mem_write 
        = Vtop__ConstPool__TABLE_h0d1d69ec_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_op = 
        Vtop__ConstPool__TABLE_h58d1ada5_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_source 
        = Vtop__ConstPool__TABLE_h1813868b_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__write_back_source 
        = Vtop__ConstPool__TABLE_h4d3ee9d0_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__branch = 
        Vtop__ConstPool__TABLE_hb4e52f6b_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__jump = Vtop__ConstPool__TABLE_he63a9787_0
        [__Vtableidx1];
    if ((0x100U & Vtop__ConstPool__TABLE_he391e21e_0
         [__Vtableidx1])) {
        vlSelfRef.cpu__DOT__control_unit__DOT__second_add_source 
            = Vtop__ConstPool__TABLE_h6277acd9_0[__Vtableidx1];
    }
    vlSelfRef.cpu__DOT__read_reg1 = vlSelfRef.cpu__DOT__regfile__DOT__read_data1;
    vlSelfRef.cpu__DOT__read_reg2 = vlSelfRef.cpu__DOT__regfile__DOT__read_data2;
    vlSelfRef.cpu__DOT__reg_write = vlSelfRef.cpu__DOT__control_unit__DOT__reg_write;
    vlSelfRef.cpu__DOT__mem_write = vlSelfRef.cpu__DOT__control_unit__DOT__mem_write;
    vlSelfRef.cpu__DOT__write_back_source = vlSelfRef.cpu__DOT__control_unit__DOT__write_back_source;
    vlSelfRef.cpu__DOT__second_add_source = vlSelfRef.cpu__DOT__control_unit__DOT__second_add_source;
    vlSelfRef.cpu__DOT__alu_source = vlSelfRef.cpu__DOT__control_unit__DOT__alu_source;
    __Vtableidx2 = (((IData)(vlSelfRef.cpu__DOT__f3) 
                     << 2U) | (IData)(vlSelfRef.cpu__DOT__control_unit__DOT__alu_op));
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_control 
        = Vtop__ConstPool__TABLE_he2fbb87b_0[__Vtableidx2];
    vlSelfRef.cpu__DOT__imm_source = vlSelfRef.cpu__DOT__control_unit__DOT__imm_source;
    vlSelfRef.cpu__DOT__alu_inst__DOT__src1 = vlSelfRef.cpu__DOT__read_reg1;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_data 
        = vlSelfRef.cpu__DOT__read_reg2;
    vlSelfRef.cpu__DOT__regfile__DOT__write_enable 
        = vlSelfRef.cpu__DOT__reg_write;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_enable 
        = vlSelfRef.cpu__DOT__mem_write;
    vlSelfRef.cpu__DOT__alu_control = vlSelfRef.cpu__DOT__control_unit__DOT__alu_control;
    vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.cpu__DOT__imm_source;
    vlSelfRef.cpu__DOT__sign_extender__DOT__immediate 
        = ((4U & (IData)(vlSelfRef.cpu__DOT__imm_source))
            ? ((2U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                ? 0U : ((1U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                         ? 0U : (0xfffff000U & (vlSelfRef.cpu__DOT__raw_imm 
                                                << 7U))))
            : ((2U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                ? ((1U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                    ? (((- (IData)((1U & (vlSelfRef.cpu__DOT__raw_imm 
                                          >> 0x18U)))) 
                        << 0x14U) | (((0xff000U & (vlSelfRef.cpu__DOT__raw_imm 
                                                   << 7U)) 
                                      | (0x800U & (vlSelfRef.cpu__DOT__raw_imm 
                                                   >> 2U))) 
                                     | (0x7feU & (vlSelfRef.cpu__DOT__raw_imm 
                                                  >> 0xdU))))
                    : (((- (IData)((1U & (vlSelfRef.cpu__DOT__raw_imm 
                                          >> 0x18U)))) 
                        << 0xcU) | ((0x800U & (vlSelfRef.cpu__DOT__raw_imm 
                                               << 0xbU)) 
                                    | ((0x7e0U & (vlSelfRef.cpu__DOT__raw_imm 
                                                  >> 0xdU)) 
                                       | (0x1eU & vlSelfRef.cpu__DOT__raw_imm)))))
                : ((1U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                    ? (((- (IData)((1U & (vlSelfRef.cpu__DOT__raw_imm 
                                          >> 0x18U)))) 
                        << 0xcU) | ((0xfe0U & (vlSelfRef.cpu__DOT__raw_imm 
                                               >> 0xdU)) 
                                    | (0x1fU & vlSelfRef.cpu__DOT__raw_imm)))
                    : (((- (IData)((1U & (vlSelfRef.cpu__DOT__raw_imm 
                                          >> 0x18U)))) 
                        << 0xcU) | (0xfffU & (vlSelfRef.cpu__DOT__raw_imm 
                                              >> 0xdU))))));
    vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control 
        = vlSelfRef.cpu__DOT__alu_control;
    vlSelfRef.cpu__DOT__pc_target = (vlSelfRef.cpu__DOT__pc 
                                     + vlSelfRef.cpu__DOT__sign_extender__DOT__immediate);
    vlSelfRef.cpu__DOT__immediate = vlSelfRef.cpu__DOT__sign_extender__DOT__immediate;
    if (vlSelfRef.cpu__DOT__second_add_source) {
        if (vlSelfRef.cpu__DOT__second_add_source) {
            vlSelfRef.cpu__DOT__pc_plus_second_add 
                = vlSelfRef.cpu__DOT__immediate;
        }
    } else {
        vlSelfRef.cpu__DOT__pc_plus_second_add = (vlSelfRef.cpu__DOT__pc 
                                                  + vlSelfRef.cpu__DOT__immediate);
    }
    vlSelfRef.cpu__DOT__alu_src2 = ((IData)(vlSelfRef.cpu__DOT__alu_source)
                                     ? vlSelfRef.cpu__DOT__immediate
                                     : vlSelfRef.cpu__DOT__read_reg2);
    vlSelfRef.cpu__DOT__alu_inst__DOT__src2 = vlSelfRef.cpu__DOT__alu_src2;
    vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result = 
        ((8U & (IData)(vlSelfRef.cpu__DOT__alu_control))
          ? ((4U & (IData)(vlSelfRef.cpu__DOT__alu_control))
              ? 0U : ((2U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                       ? 0U : ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                ? 0U : (vlSelfRef.cpu__DOT__read_reg1 
                                        ^ vlSelfRef.cpu__DOT__alu_src2))))
          : ((4U & (IData)(vlSelfRef.cpu__DOT__alu_control))
              ? ((2U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                  ? ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                      ? (vlSelfRef.cpu__DOT__read_reg1 
                         < vlSelfRef.cpu__DOT__alu_src2)
                      : 0U) : ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                ? VL_LTS_III(32, vlSelfRef.cpu__DOT__read_reg1, vlSelfRef.cpu__DOT__alu_src2)
                                : 0U)) : ((2U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                           ? ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                               ? (vlSelfRef.cpu__DOT__read_reg1 
                                                  | vlSelfRef.cpu__DOT__alu_src2)
                                               : (vlSelfRef.cpu__DOT__read_reg1 
                                                  & vlSelfRef.cpu__DOT__alu_src2))
                                           : ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                               ? (vlSelfRef.cpu__DOT__read_reg1 
                                                  - vlSelfRef.cpu__DOT__alu_src2)
                                               : (vlSelfRef.cpu__DOT__read_reg1 
                                                  + vlSelfRef.cpu__DOT__alu_src2)))));
    vlSelfRef.cpu__DOT__data_memory__DOT__read_data 
        = vlSelfRef.cpu__DOT__data_memory__DOT__mem
        [(0x3fU & (vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result 
                   >> 2U))];
    vlSelfRef.cpu__DOT__mem_read = vlSelfRef.cpu__DOT__data_memory__DOT__mem
        [(0x3fU & (vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result 
                   >> 2U))];
    vlSelfRef.cpu__DOT__alu_result = vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result;
    vlSelfRef.cpu__DOT__alu_zero = (0U == vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu__DOT__data_memory__DOT__address = vlSelfRef.cpu__DOT__alu_result;
    vlSelfRef.cpu__DOT__write_back_data = ((2U & (IData)(vlSelfRef.cpu__DOT__write_back_source))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.cpu__DOT__write_back_source))
                                                ? vlSelfRef.cpu__DOT__pc_plus_second_add
                                                : vlSelfRef.cpu__DOT__pc_plus_four)
                                            : ((1U 
                                                & (IData)(vlSelfRef.cpu__DOT__write_back_source))
                                                ? vlSelfRef.cpu__DOT__mem_read
                                                : vlSelfRef.cpu__DOT__alu_result));
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_zero 
        = vlSelfRef.cpu__DOT__alu_zero;
    vlSelfRef.cpu__DOT__alu_inst__DOT__zero = vlSelfRef.cpu__DOT__alu_zero;
    vlSelfRef.cpu__DOT__pc_source = (((IData)(vlSelfRef.cpu__DOT__alu_zero) 
                                      & (IData)(vlSelfRef.cpu__DOT__control_unit__DOT__branch)) 
                                     | (IData)(vlSelfRef.cpu__DOT__control_unit__DOT__jump));
    vlSelfRef.cpu__DOT__regfile__DOT__write_data = vlSelfRef.cpu__DOT__write_back_data;
    if (vlSelfRef.cpu__DOT__pc_source) {
        vlSelfRef.cpu__DOT__control_unit__DOT__pc_source = 1U;
        vlSelfRef.cpu__DOT__pc_next = ((IData)(vlSelfRef.cpu__DOT__pc_source)
                                        ? vlSelfRef.cpu__DOT__pc_plus_second_add
                                        : vlSelfRef.cpu__DOT__pc_plus_four);
    } else {
        vlSelfRef.cpu__DOT__control_unit__DOT__pc_source = 0U;
        vlSelfRef.cpu__DOT__pc_next = vlSelfRef.cpu__DOT__pc_plus_four;
    }
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
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __VdlyVal__cpu__DOT__regfile__DOT__registers__v0;
    __VdlyVal__cpu__DOT__regfile__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu__DOT__regfile__DOT__registers__v0;
    __VdlyDim0__cpu__DOT__regfile__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__regfile__DOT__registers__v0;
    __VdlySet__cpu__DOT__regfile__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__regfile__DOT__registers__v1;
    __VdlySet__cpu__DOT__regfile__DOT__registers__v1 = 0;
    IData/*31:0*/ __VdlyVal__cpu__DOT__data_memory__DOT__mem__v0;
    __VdlyVal__cpu__DOT__data_memory__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v0;
    __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__data_memory__DOT__mem__v0;
    __VdlySet__cpu__DOT__data_memory__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__cpu__DOT__data_memory__DOT__mem__v1;
    __VdlyVal__cpu__DOT__data_memory__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v1;
    __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__data_memory__DOT__mem__v1;
    __VdlySet__cpu__DOT__data_memory__DOT__mem__v1 = 0;
    IData/*31:0*/ __VdlyVal__cpu__DOT__data_memory__DOT__mem__v2;
    __VdlyVal__cpu__DOT__data_memory__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v2;
    __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__data_memory__DOT__mem__v2;
    __VdlySet__cpu__DOT__data_memory__DOT__mem__v2 = 0;
    IData/*31:0*/ __VdlyVal__cpu__DOT__data_memory__DOT__mem__v3;
    __VdlyVal__cpu__DOT__data_memory__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v3;
    __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu__DOT__data_memory__DOT__mem__v3;
    __VdlySet__cpu__DOT__data_memory__DOT__mem__v3 = 0;
    // Body
    __VdlySet__cpu__DOT__data_memory__DOT__mem__v0 = 0U;
    __VdlySet__cpu__DOT__data_memory__DOT__mem__v1 = 0U;
    __VdlySet__cpu__DOT__data_memory__DOT__mem__v2 = 0U;
    __VdlySet__cpu__DOT__data_memory__DOT__mem__v3 = 0U;
    __VdlySet__cpu__DOT__regfile__DOT__registers__v0 = 0U;
    __VdlySet__cpu__DOT__regfile__DOT__registers__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelfRef.cpu__DOT__mem_write) {
        if (VL_UNLIKELY(((0U != (3U & vlSelfRef.cpu__DOT__alu_result))))) {
            VL_WRITEF_NX("Misaligned write at address %x\n",0,
                         32,vlSelfRef.cpu__DOT__alu_result);
        } else {
            vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i = 1U;
            if (vlSelfRef.cpu__DOT__mem_write) {
                __VdlyVal__cpu__DOT__data_memory__DOT__mem__v0 
                    = vlSelfRef.cpu__DOT__read_reg2;
                __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v0 
                    = (0x3fU & (vlSelfRef.cpu__DOT__alu_result 
                                >> 2U));
                __VdlySet__cpu__DOT__data_memory__DOT__mem__v0 = 1U;
                __VdlyVal__cpu__DOT__data_memory__DOT__mem__v1 
                    = vlSelfRef.cpu__DOT__read_reg2;
                __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v1 
                    = (0x3fU & (vlSelfRef.cpu__DOT__alu_result 
                                >> 2U));
                __VdlySet__cpu__DOT__data_memory__DOT__mem__v1 = 1U;
                __VdlyVal__cpu__DOT__data_memory__DOT__mem__v2 
                    = vlSelfRef.cpu__DOT__read_reg2;
                __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v2 
                    = (0x3fU & (vlSelfRef.cpu__DOT__alu_result 
                                >> 2U));
                __VdlySet__cpu__DOT__data_memory__DOT__mem__v2 = 1U;
                __VdlyVal__cpu__DOT__data_memory__DOT__mem__v3 
                    = vlSelfRef.cpu__DOT__read_reg2;
                __VdlyDim0__cpu__DOT__data_memory__DOT__mem__v3 
                    = (0x3fU & (vlSelfRef.cpu__DOT__alu_result 
                                >> 2U));
                __VdlySet__cpu__DOT__data_memory__DOT__mem__v3 = 1U;
            }
            vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i = 2U;
            vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i = 3U;
            vlSelfRef.cpu__DOT__data_memory__DOT__unnamedblk2__DOT__i = 4U;
        }
    }
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.cpu__DOT__reg_write) 
             & (0U != (IData)(vlSelfRef.cpu__DOT__dest_reg)))) {
            __VdlyVal__cpu__DOT__regfile__DOT__registers__v0 
                = vlSelfRef.cpu__DOT__write_back_data;
            __VdlyDim0__cpu__DOT__regfile__DOT__registers__v0 
                = vlSelfRef.cpu__DOT__dest_reg;
            __VdlySet__cpu__DOT__regfile__DOT__registers__v0 = 1U;
        }
        vlSelfRef.cpu__DOT__pc = vlSelfRef.cpu__DOT__pc_next;
    } else {
        __VdlySet__cpu__DOT__regfile__DOT__registers__v1 = 1U;
        vlSelfRef.cpu__DOT__pc = 0U;
    }
    if (__VdlySet__cpu__DOT__data_memory__DOT__mem__v0) {
        vlSelfRef.cpu__DOT__data_memory__DOT__mem[__VdlyDim0__cpu__DOT__data_memory__DOT__mem__v0] 
            = __VdlyVal__cpu__DOT__data_memory__DOT__mem__v0;
    }
    if (__VdlySet__cpu__DOT__data_memory__DOT__mem__v1) {
        vlSelfRef.cpu__DOT__data_memory__DOT__mem[__VdlyDim0__cpu__DOT__data_memory__DOT__mem__v1] 
            = __VdlyVal__cpu__DOT__data_memory__DOT__mem__v1;
    }
    if (__VdlySet__cpu__DOT__data_memory__DOT__mem__v2) {
        vlSelfRef.cpu__DOT__data_memory__DOT__mem[__VdlyDim0__cpu__DOT__data_memory__DOT__mem__v2] 
            = __VdlyVal__cpu__DOT__data_memory__DOT__mem__v2;
    }
    if (__VdlySet__cpu__DOT__data_memory__DOT__mem__v3) {
        vlSelfRef.cpu__DOT__data_memory__DOT__mem[__VdlyDim0__cpu__DOT__data_memory__DOT__mem__v3] 
            = __VdlyVal__cpu__DOT__data_memory__DOT__mem__v3;
    }
    if (__VdlySet__cpu__DOT__regfile__DOT__registers__v0) {
        vlSelfRef.cpu__DOT__regfile__DOT__registers[__VdlyDim0__cpu__DOT__regfile__DOT__registers__v0] 
            = __VdlyVal__cpu__DOT__regfile__DOT__registers__v0;
    }
    if (__VdlySet__cpu__DOT__regfile__DOT__registers__v1) {
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[1U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[2U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[3U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[4U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[5U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[6U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[7U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[8U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[9U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0xaU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0xbU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0xcU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0xdU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0xeU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0xfU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x10U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x11U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x12U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x13U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x14U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x15U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x16U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x17U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x18U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x19U] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x1aU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x1bU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x1cU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x1dU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x1eU] = 0U;
        vlSelfRef.cpu__DOT__regfile__DOT__registers[0x1fU] = 0U;
    }
    vlSelfRef.cpu__DOT__instruction_memory__DOT__address 
        = vlSelfRef.cpu__DOT__pc;
    vlSelfRef.cpu__DOT__instruction = vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
        [(0x3fU & (vlSelfRef.cpu__DOT__pc >> 2U))];
    vlSelfRef.cpu__DOT__instruction_memory__DOT__read_data 
        = vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
        [(0x3fU & (vlSelfRef.cpu__DOT__pc >> 2U))];
    vlSelfRef.cpu__DOT__dest_reg = (0x1fU & (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                             [(0x3fU 
                                               & (vlSelfRef.cpu__DOT__pc 
                                                  >> 2U))] 
                                             >> 7U));
    vlSelfRef.cpu__DOT__pc_plus_four = ((IData)(4U) 
                                        + vlSelfRef.cpu__DOT__pc);
    vlSelfRef.cpu__DOT__source_reg1 = (0x1fU & (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                                [(0x3fU 
                                                  & (vlSelfRef.cpu__DOT__pc 
                                                     >> 2U))] 
                                                >> 0xfU));
    vlSelfRef.cpu__DOT__f3 = (7U & (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                    [(0x3fU & (vlSelfRef.cpu__DOT__pc 
                                               >> 2U))] 
                                    >> 0xcU));
    vlSelfRef.cpu__DOT__source_reg2 = (0x1fU & (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                                [(0x3fU 
                                                  & (vlSelfRef.cpu__DOT__pc 
                                                     >> 2U))] 
                                                >> 0x14U));
    vlSelfRef.cpu__DOT__raw_imm = (vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                                   [(0x3fU & (vlSelfRef.cpu__DOT__pc 
                                              >> 2U))] 
                                   >> 7U);
    vlSelfRef.cpu__DOT__op = (0x7fU & vlSelfRef.cpu__DOT__instruction_memory__DOT__mem
                              [(0x3fU & (vlSelfRef.cpu__DOT__pc 
                                         >> 2U))]);
    vlSelfRef.cpu__DOT__regfile__DOT__adr3 = vlSelfRef.cpu__DOT__dest_reg;
    vlSelfRef.cpu__DOT__regfile__DOT__adr1 = vlSelfRef.cpu__DOT__source_reg1;
    vlSelfRef.cpu__DOT__regfile__DOT__read_data1 = 
        ((0U == (IData)(vlSelfRef.cpu__DOT__source_reg1))
          ? 0U : vlSelfRef.cpu__DOT__regfile__DOT__registers
         [vlSelfRef.cpu__DOT__source_reg1]);
    vlSelfRef.cpu__DOT__control_unit__DOT__func3 = vlSelfRef.cpu__DOT__f3;
    vlSelfRef.cpu__DOT__regfile__DOT__adr2 = vlSelfRef.cpu__DOT__source_reg2;
    vlSelfRef.cpu__DOT__regfile__DOT__read_data2 = 
        ((0U == (IData)(vlSelfRef.cpu__DOT__source_reg2))
          ? 0U : vlSelfRef.cpu__DOT__regfile__DOT__registers
         [vlSelfRef.cpu__DOT__source_reg2]);
    vlSelfRef.cpu__DOT__sign_extender__DOT__raw_src 
        = vlSelfRef.cpu__DOT__raw_imm;
    vlSelfRef.cpu__DOT__control_unit__DOT__op = vlSelfRef.cpu__DOT__op;
    __Vtableidx1 = vlSelfRef.cpu__DOT__op;
    vlSelfRef.cpu__DOT__control_unit__DOT__reg_write 
        = Vtop__ConstPool__TABLE_h9abe1add_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__imm_source 
        = Vtop__ConstPool__TABLE_hc2e76f23_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__mem_write 
        = Vtop__ConstPool__TABLE_h0d1d69ec_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_op = 
        Vtop__ConstPool__TABLE_h58d1ada5_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_source 
        = Vtop__ConstPool__TABLE_h1813868b_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__write_back_source 
        = Vtop__ConstPool__TABLE_h4d3ee9d0_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__branch = 
        Vtop__ConstPool__TABLE_hb4e52f6b_0[__Vtableidx1];
    vlSelfRef.cpu__DOT__control_unit__DOT__jump = Vtop__ConstPool__TABLE_he63a9787_0
        [__Vtableidx1];
    if ((0x100U & Vtop__ConstPool__TABLE_he391e21e_0
         [__Vtableidx1])) {
        vlSelfRef.cpu__DOT__control_unit__DOT__second_add_source 
            = Vtop__ConstPool__TABLE_h6277acd9_0[__Vtableidx1];
    }
    vlSelfRef.cpu__DOT__read_reg1 = vlSelfRef.cpu__DOT__regfile__DOT__read_data1;
    vlSelfRef.cpu__DOT__read_reg2 = vlSelfRef.cpu__DOT__regfile__DOT__read_data2;
    vlSelfRef.cpu__DOT__reg_write = vlSelfRef.cpu__DOT__control_unit__DOT__reg_write;
    vlSelfRef.cpu__DOT__mem_write = vlSelfRef.cpu__DOT__control_unit__DOT__mem_write;
    vlSelfRef.cpu__DOT__write_back_source = vlSelfRef.cpu__DOT__control_unit__DOT__write_back_source;
    vlSelfRef.cpu__DOT__second_add_source = vlSelfRef.cpu__DOT__control_unit__DOT__second_add_source;
    vlSelfRef.cpu__DOT__alu_source = vlSelfRef.cpu__DOT__control_unit__DOT__alu_source;
    __Vtableidx2 = (((IData)(vlSelfRef.cpu__DOT__f3) 
                     << 2U) | (IData)(vlSelfRef.cpu__DOT__control_unit__DOT__alu_op));
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_control 
        = Vtop__ConstPool__TABLE_he2fbb87b_0[__Vtableidx2];
    vlSelfRef.cpu__DOT__imm_source = vlSelfRef.cpu__DOT__control_unit__DOT__imm_source;
    vlSelfRef.cpu__DOT__alu_inst__DOT__src1 = vlSelfRef.cpu__DOT__read_reg1;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_data 
        = vlSelfRef.cpu__DOT__read_reg2;
    vlSelfRef.cpu__DOT__regfile__DOT__write_enable 
        = vlSelfRef.cpu__DOT__reg_write;
    vlSelfRef.cpu__DOT__data_memory__DOT__write_enable 
        = vlSelfRef.cpu__DOT__mem_write;
    vlSelfRef.cpu__DOT__alu_control = vlSelfRef.cpu__DOT__control_unit__DOT__alu_control;
    vlSelfRef.cpu__DOT__sign_extender__DOT__imm_source 
        = vlSelfRef.cpu__DOT__imm_source;
    vlSelfRef.cpu__DOT__sign_extender__DOT__immediate 
        = ((4U & (IData)(vlSelfRef.cpu__DOT__imm_source))
            ? ((2U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                ? 0U : ((1U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                         ? 0U : (0xfffff000U & (vlSelfRef.cpu__DOT__raw_imm 
                                                << 7U))))
            : ((2U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                ? ((1U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                    ? (((- (IData)((1U & (vlSelfRef.cpu__DOT__raw_imm 
                                          >> 0x18U)))) 
                        << 0x14U) | (((0xff000U & (vlSelfRef.cpu__DOT__raw_imm 
                                                   << 7U)) 
                                      | (0x800U & (vlSelfRef.cpu__DOT__raw_imm 
                                                   >> 2U))) 
                                     | (0x7feU & (vlSelfRef.cpu__DOT__raw_imm 
                                                  >> 0xdU))))
                    : (((- (IData)((1U & (vlSelfRef.cpu__DOT__raw_imm 
                                          >> 0x18U)))) 
                        << 0xcU) | ((0x800U & (vlSelfRef.cpu__DOT__raw_imm 
                                               << 0xbU)) 
                                    | ((0x7e0U & (vlSelfRef.cpu__DOT__raw_imm 
                                                  >> 0xdU)) 
                                       | (0x1eU & vlSelfRef.cpu__DOT__raw_imm)))))
                : ((1U & (IData)(vlSelfRef.cpu__DOT__imm_source))
                    ? (((- (IData)((1U & (vlSelfRef.cpu__DOT__raw_imm 
                                          >> 0x18U)))) 
                        << 0xcU) | ((0xfe0U & (vlSelfRef.cpu__DOT__raw_imm 
                                               >> 0xdU)) 
                                    | (0x1fU & vlSelfRef.cpu__DOT__raw_imm)))
                    : (((- (IData)((1U & (vlSelfRef.cpu__DOT__raw_imm 
                                          >> 0x18U)))) 
                        << 0xcU) | (0xfffU & (vlSelfRef.cpu__DOT__raw_imm 
                                              >> 0xdU))))));
    vlSelfRef.cpu__DOT__alu_inst__DOT__alu_control 
        = vlSelfRef.cpu__DOT__alu_control;
    vlSelfRef.cpu__DOT__pc_target = (vlSelfRef.cpu__DOT__pc 
                                     + vlSelfRef.cpu__DOT__sign_extender__DOT__immediate);
    vlSelfRef.cpu__DOT__immediate = vlSelfRef.cpu__DOT__sign_extender__DOT__immediate;
    if (vlSelfRef.cpu__DOT__second_add_source) {
        if (vlSelfRef.cpu__DOT__second_add_source) {
            vlSelfRef.cpu__DOT__pc_plus_second_add 
                = vlSelfRef.cpu__DOT__immediate;
        }
    } else {
        vlSelfRef.cpu__DOT__pc_plus_second_add = (vlSelfRef.cpu__DOT__pc 
                                                  + vlSelfRef.cpu__DOT__immediate);
    }
    vlSelfRef.cpu__DOT__alu_src2 = ((IData)(vlSelfRef.cpu__DOT__alu_source)
                                     ? vlSelfRef.cpu__DOT__immediate
                                     : vlSelfRef.cpu__DOT__read_reg2);
    vlSelfRef.cpu__DOT__alu_inst__DOT__src2 = vlSelfRef.cpu__DOT__alu_src2;
    vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result = 
        ((8U & (IData)(vlSelfRef.cpu__DOT__alu_control))
          ? ((4U & (IData)(vlSelfRef.cpu__DOT__alu_control))
              ? 0U : ((2U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                       ? 0U : ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                ? 0U : (vlSelfRef.cpu__DOT__read_reg1 
                                        ^ vlSelfRef.cpu__DOT__alu_src2))))
          : ((4U & (IData)(vlSelfRef.cpu__DOT__alu_control))
              ? ((2U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                  ? ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                      ? (vlSelfRef.cpu__DOT__read_reg1 
                         < vlSelfRef.cpu__DOT__alu_src2)
                      : 0U) : ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                ? VL_LTS_III(32, vlSelfRef.cpu__DOT__read_reg1, vlSelfRef.cpu__DOT__alu_src2)
                                : 0U)) : ((2U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                           ? ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                               ? (vlSelfRef.cpu__DOT__read_reg1 
                                                  | vlSelfRef.cpu__DOT__alu_src2)
                                               : (vlSelfRef.cpu__DOT__read_reg1 
                                                  & vlSelfRef.cpu__DOT__alu_src2))
                                           : ((1U & (IData)(vlSelfRef.cpu__DOT__alu_control))
                                               ? (vlSelfRef.cpu__DOT__read_reg1 
                                                  - vlSelfRef.cpu__DOT__alu_src2)
                                               : (vlSelfRef.cpu__DOT__read_reg1 
                                                  + vlSelfRef.cpu__DOT__alu_src2)))));
    vlSelfRef.cpu__DOT__data_memory__DOT__read_data 
        = vlSelfRef.cpu__DOT__data_memory__DOT__mem
        [(0x3fU & (vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result 
                   >> 2U))];
    vlSelfRef.cpu__DOT__mem_read = vlSelfRef.cpu__DOT__data_memory__DOT__mem
        [(0x3fU & (vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result 
                   >> 2U))];
    vlSelfRef.cpu__DOT__alu_result = vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result;
    vlSelfRef.cpu__DOT__alu_zero = (0U == vlSelfRef.cpu__DOT__alu_inst__DOT__alu_result);
    vlSelfRef.cpu__DOT__data_memory__DOT__address = vlSelfRef.cpu__DOT__alu_result;
    vlSelfRef.cpu__DOT__write_back_data = ((2U & (IData)(vlSelfRef.cpu__DOT__write_back_source))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.cpu__DOT__write_back_source))
                                                ? vlSelfRef.cpu__DOT__pc_plus_second_add
                                                : vlSelfRef.cpu__DOT__pc_plus_four)
                                            : ((1U 
                                                & (IData)(vlSelfRef.cpu__DOT__write_back_source))
                                                ? vlSelfRef.cpu__DOT__mem_read
                                                : vlSelfRef.cpu__DOT__alu_result));
    vlSelfRef.cpu__DOT__control_unit__DOT__alu_zero 
        = vlSelfRef.cpu__DOT__alu_zero;
    vlSelfRef.cpu__DOT__alu_inst__DOT__zero = vlSelfRef.cpu__DOT__alu_zero;
    vlSelfRef.cpu__DOT__pc_source = (((IData)(vlSelfRef.cpu__DOT__alu_zero) 
                                      & (IData)(vlSelfRef.cpu__DOT__control_unit__DOT__branch)) 
                                     | (IData)(vlSelfRef.cpu__DOT__control_unit__DOT__jump));
    vlSelfRef.cpu__DOT__regfile__DOT__write_data = vlSelfRef.cpu__DOT__write_back_data;
    if (vlSelfRef.cpu__DOT__pc_source) {
        vlSelfRef.cpu__DOT__control_unit__DOT__pc_source = 1U;
        vlSelfRef.cpu__DOT__pc_next = ((IData)(vlSelfRef.cpu__DOT__pc_source)
                                        ? vlSelfRef.cpu__DOT__pc_plus_second_add
                                        : vlSelfRef.cpu__DOT__pc_plus_four);
    } else {
        vlSelfRef.cpu__DOT__control_unit__DOT__pc_source = 0U;
        vlSelfRef.cpu__DOT__pc_next = vlSelfRef.cpu__DOT__pc_plus_four;
    }
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
            VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/cpu/../../src/cpu.sv", 1, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/cpu/../../src/cpu.sv", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/cpu/../../src/cpu.sv", 1, "", "Active region did not converge.");
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
}
#endif  // VL_DEBUG
