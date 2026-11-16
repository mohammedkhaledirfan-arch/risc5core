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
    vlSelfRef.memory__DOT__clk = vlSelfRef.clk;
    vlSelfRef.memory__DOT__address = vlSelfRef.address;
    vlSelfRef.memory__DOT__write_data = vlSelfRef.write_data;
    vlSelfRef.memory__DOT__byte_enable = vlSelfRef.byte_enable;
    vlSelfRef.memory__DOT__write_enable = vlSelfRef.write_enable;
    vlSelfRef.memory__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.read_data = vlSelfRef.memory__DOT__mem
        [(0x3fU & (vlSelfRef.address >> 2U))];
    vlSelfRef.memory__DOT__read_data = vlSelfRef.memory__DOT__mem
        [(0x3fU & (vlSelfRef.address >> 2U))];
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
    IData/*31:0*/ __VdlyVal__memory__DOT__mem__v0;
    __VdlyVal__memory__DOT__mem__v0 = 0;
    CData/*5:0*/ __VdlyDim0__memory__DOT__mem__v0;
    __VdlyDim0__memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v0;
    __VdlySet__memory__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__memory__DOT__mem__v1;
    __VdlyVal__memory__DOT__mem__v1 = 0;
    CData/*5:0*/ __VdlyDim0__memory__DOT__mem__v1;
    __VdlyDim0__memory__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v1;
    __VdlySet__memory__DOT__mem__v1 = 0;
    IData/*31:0*/ __VdlyVal__memory__DOT__mem__v2;
    __VdlyVal__memory__DOT__mem__v2 = 0;
    CData/*5:0*/ __VdlyDim0__memory__DOT__mem__v2;
    __VdlyDim0__memory__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v2;
    __VdlySet__memory__DOT__mem__v2 = 0;
    IData/*31:0*/ __VdlyVal__memory__DOT__mem__v3;
    __VdlyVal__memory__DOT__mem__v3 = 0;
    CData/*5:0*/ __VdlyDim0__memory__DOT__mem__v3;
    __VdlyDim0__memory__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v3;
    __VdlySet__memory__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v4;
    __VdlySet__memory__DOT__mem__v4 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v5;
    __VdlySet__memory__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v6;
    __VdlySet__memory__DOT__mem__v6 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v7;
    __VdlySet__memory__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v8;
    __VdlySet__memory__DOT__mem__v8 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v9;
    __VdlySet__memory__DOT__mem__v9 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v10;
    __VdlySet__memory__DOT__mem__v10 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v11;
    __VdlySet__memory__DOT__mem__v11 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v12;
    __VdlySet__memory__DOT__mem__v12 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v13;
    __VdlySet__memory__DOT__mem__v13 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v14;
    __VdlySet__memory__DOT__mem__v14 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v15;
    __VdlySet__memory__DOT__mem__v15 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v16;
    __VdlySet__memory__DOT__mem__v16 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v17;
    __VdlySet__memory__DOT__mem__v17 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v18;
    __VdlySet__memory__DOT__mem__v18 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v19;
    __VdlySet__memory__DOT__mem__v19 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v20;
    __VdlySet__memory__DOT__mem__v20 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v21;
    __VdlySet__memory__DOT__mem__v21 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v22;
    __VdlySet__memory__DOT__mem__v22 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v23;
    __VdlySet__memory__DOT__mem__v23 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v24;
    __VdlySet__memory__DOT__mem__v24 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v25;
    __VdlySet__memory__DOT__mem__v25 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v26;
    __VdlySet__memory__DOT__mem__v26 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v27;
    __VdlySet__memory__DOT__mem__v27 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v28;
    __VdlySet__memory__DOT__mem__v28 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v29;
    __VdlySet__memory__DOT__mem__v29 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v30;
    __VdlySet__memory__DOT__mem__v30 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v31;
    __VdlySet__memory__DOT__mem__v31 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v32;
    __VdlySet__memory__DOT__mem__v32 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v33;
    __VdlySet__memory__DOT__mem__v33 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v34;
    __VdlySet__memory__DOT__mem__v34 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v35;
    __VdlySet__memory__DOT__mem__v35 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v36;
    __VdlySet__memory__DOT__mem__v36 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v37;
    __VdlySet__memory__DOT__mem__v37 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v38;
    __VdlySet__memory__DOT__mem__v38 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v39;
    __VdlySet__memory__DOT__mem__v39 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v40;
    __VdlySet__memory__DOT__mem__v40 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v41;
    __VdlySet__memory__DOT__mem__v41 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v42;
    __VdlySet__memory__DOT__mem__v42 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v43;
    __VdlySet__memory__DOT__mem__v43 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v44;
    __VdlySet__memory__DOT__mem__v44 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v45;
    __VdlySet__memory__DOT__mem__v45 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v46;
    __VdlySet__memory__DOT__mem__v46 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v47;
    __VdlySet__memory__DOT__mem__v47 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v48;
    __VdlySet__memory__DOT__mem__v48 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v49;
    __VdlySet__memory__DOT__mem__v49 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v50;
    __VdlySet__memory__DOT__mem__v50 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v51;
    __VdlySet__memory__DOT__mem__v51 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v52;
    __VdlySet__memory__DOT__mem__v52 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v53;
    __VdlySet__memory__DOT__mem__v53 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v54;
    __VdlySet__memory__DOT__mem__v54 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v55;
    __VdlySet__memory__DOT__mem__v55 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v56;
    __VdlySet__memory__DOT__mem__v56 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v57;
    __VdlySet__memory__DOT__mem__v57 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v58;
    __VdlySet__memory__DOT__mem__v58 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v59;
    __VdlySet__memory__DOT__mem__v59 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v60;
    __VdlySet__memory__DOT__mem__v60 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v61;
    __VdlySet__memory__DOT__mem__v61 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v62;
    __VdlySet__memory__DOT__mem__v62 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v63;
    __VdlySet__memory__DOT__mem__v63 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v64;
    __VdlySet__memory__DOT__mem__v64 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v65;
    __VdlySet__memory__DOT__mem__v65 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v66;
    __VdlySet__memory__DOT__mem__v66 = 0;
    CData/*0:0*/ __VdlySet__memory__DOT__mem__v67;
    __VdlySet__memory__DOT__mem__v67 = 0;
    // Body
    __VdlySet__memory__DOT__mem__v0 = 0U;
    __VdlySet__memory__DOT__mem__v1 = 0U;
    __VdlySet__memory__DOT__mem__v2 = 0U;
    __VdlySet__memory__DOT__mem__v3 = 0U;
    __VdlySet__memory__DOT__mem__v4 = 0U;
    __VdlySet__memory__DOT__mem__v5 = 0U;
    __VdlySet__memory__DOT__mem__v6 = 0U;
    __VdlySet__memory__DOT__mem__v7 = 0U;
    __VdlySet__memory__DOT__mem__v8 = 0U;
    __VdlySet__memory__DOT__mem__v9 = 0U;
    __VdlySet__memory__DOT__mem__v10 = 0U;
    __VdlySet__memory__DOT__mem__v11 = 0U;
    __VdlySet__memory__DOT__mem__v12 = 0U;
    __VdlySet__memory__DOT__mem__v13 = 0U;
    __VdlySet__memory__DOT__mem__v14 = 0U;
    __VdlySet__memory__DOT__mem__v15 = 0U;
    __VdlySet__memory__DOT__mem__v16 = 0U;
    __VdlySet__memory__DOT__mem__v17 = 0U;
    __VdlySet__memory__DOT__mem__v18 = 0U;
    __VdlySet__memory__DOT__mem__v19 = 0U;
    __VdlySet__memory__DOT__mem__v20 = 0U;
    __VdlySet__memory__DOT__mem__v21 = 0U;
    __VdlySet__memory__DOT__mem__v22 = 0U;
    __VdlySet__memory__DOT__mem__v23 = 0U;
    __VdlySet__memory__DOT__mem__v24 = 0U;
    __VdlySet__memory__DOT__mem__v25 = 0U;
    __VdlySet__memory__DOT__mem__v26 = 0U;
    __VdlySet__memory__DOT__mem__v27 = 0U;
    __VdlySet__memory__DOT__mem__v28 = 0U;
    __VdlySet__memory__DOT__mem__v29 = 0U;
    __VdlySet__memory__DOT__mem__v30 = 0U;
    __VdlySet__memory__DOT__mem__v31 = 0U;
    __VdlySet__memory__DOT__mem__v32 = 0U;
    __VdlySet__memory__DOT__mem__v33 = 0U;
    __VdlySet__memory__DOT__mem__v34 = 0U;
    __VdlySet__memory__DOT__mem__v35 = 0U;
    __VdlySet__memory__DOT__mem__v36 = 0U;
    __VdlySet__memory__DOT__mem__v37 = 0U;
    __VdlySet__memory__DOT__mem__v38 = 0U;
    __VdlySet__memory__DOT__mem__v39 = 0U;
    __VdlySet__memory__DOT__mem__v40 = 0U;
    __VdlySet__memory__DOT__mem__v41 = 0U;
    __VdlySet__memory__DOT__mem__v42 = 0U;
    __VdlySet__memory__DOT__mem__v43 = 0U;
    __VdlySet__memory__DOT__mem__v44 = 0U;
    __VdlySet__memory__DOT__mem__v45 = 0U;
    __VdlySet__memory__DOT__mem__v46 = 0U;
    __VdlySet__memory__DOT__mem__v47 = 0U;
    __VdlySet__memory__DOT__mem__v48 = 0U;
    __VdlySet__memory__DOT__mem__v49 = 0U;
    __VdlySet__memory__DOT__mem__v50 = 0U;
    __VdlySet__memory__DOT__mem__v51 = 0U;
    __VdlySet__memory__DOT__mem__v52 = 0U;
    __VdlySet__memory__DOT__mem__v53 = 0U;
    __VdlySet__memory__DOT__mem__v54 = 0U;
    __VdlySet__memory__DOT__mem__v55 = 0U;
    __VdlySet__memory__DOT__mem__v56 = 0U;
    __VdlySet__memory__DOT__mem__v57 = 0U;
    __VdlySet__memory__DOT__mem__v58 = 0U;
    __VdlySet__memory__DOT__mem__v59 = 0U;
    __VdlySet__memory__DOT__mem__v60 = 0U;
    __VdlySet__memory__DOT__mem__v61 = 0U;
    __VdlySet__memory__DOT__mem__v62 = 0U;
    __VdlySet__memory__DOT__mem__v63 = 0U;
    __VdlySet__memory__DOT__mem__v64 = 0U;
    __VdlySet__memory__DOT__mem__v65 = 0U;
    __VdlySet__memory__DOT__mem__v66 = 0U;
    __VdlySet__memory__DOT__mem__v67 = 0U;
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.write_enable) {
            if (VL_UNLIKELY(((0U != (3U & vlSelfRef.address))))) {
                VL_WRITEF_NX("Misaligned write at address %x\n",0,
                             32,vlSelfRef.address);
            } else {
                vlSelfRef.memory__DOT__unnamedblk2__DOT__i = 1U;
                if (vlSelfRef.write_enable) {
                    __VdlyVal__memory__DOT__mem__v0 
                        = vlSelfRef.write_data;
                    __VdlyDim0__memory__DOT__mem__v0 
                        = (0x3fU & (vlSelfRef.address 
                                    >> 2U));
                    __VdlySet__memory__DOT__mem__v0 = 1U;
                    __VdlyVal__memory__DOT__mem__v1 
                        = vlSelfRef.write_data;
                    __VdlyDim0__memory__DOT__mem__v1 
                        = (0x3fU & (vlSelfRef.address 
                                    >> 2U));
                    __VdlySet__memory__DOT__mem__v1 = 1U;
                    __VdlyVal__memory__DOT__mem__v2 
                        = vlSelfRef.write_data;
                    __VdlyDim0__memory__DOT__mem__v2 
                        = (0x3fU & (vlSelfRef.address 
                                    >> 2U));
                    __VdlySet__memory__DOT__mem__v2 = 1U;
                    __VdlyVal__memory__DOT__mem__v3 
                        = vlSelfRef.write_data;
                    __VdlyDim0__memory__DOT__mem__v3 
                        = (0x3fU & (vlSelfRef.address 
                                    >> 2U));
                    __VdlySet__memory__DOT__mem__v3 = 1U;
                }
                vlSelfRef.memory__DOT__unnamedblk2__DOT__i = 2U;
                vlSelfRef.memory__DOT__unnamedblk2__DOT__i = 3U;
                vlSelfRef.memory__DOT__unnamedblk2__DOT__i = 4U;
            }
        }
    } else {
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 1U;
        __VdlySet__memory__DOT__mem__v4 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 2U;
        __VdlySet__memory__DOT__mem__v5 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 3U;
        __VdlySet__memory__DOT__mem__v6 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 4U;
        __VdlySet__memory__DOT__mem__v7 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 5U;
        __VdlySet__memory__DOT__mem__v8 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 6U;
        __VdlySet__memory__DOT__mem__v9 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 7U;
        __VdlySet__memory__DOT__mem__v10 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 8U;
        __VdlySet__memory__DOT__mem__v11 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 9U;
        __VdlySet__memory__DOT__mem__v12 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xaU;
        __VdlySet__memory__DOT__mem__v13 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xbU;
        __VdlySet__memory__DOT__mem__v14 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xcU;
        __VdlySet__memory__DOT__mem__v15 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xdU;
        __VdlySet__memory__DOT__mem__v16 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xeU;
        __VdlySet__memory__DOT__mem__v17 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0xfU;
        __VdlySet__memory__DOT__mem__v18 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x10U;
        __VdlySet__memory__DOT__mem__v19 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x11U;
        __VdlySet__memory__DOT__mem__v20 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x12U;
        __VdlySet__memory__DOT__mem__v21 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x13U;
        __VdlySet__memory__DOT__mem__v22 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x14U;
        __VdlySet__memory__DOT__mem__v23 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x15U;
        __VdlySet__memory__DOT__mem__v24 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x16U;
        __VdlySet__memory__DOT__mem__v25 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x17U;
        __VdlySet__memory__DOT__mem__v26 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x18U;
        __VdlySet__memory__DOT__mem__v27 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x19U;
        __VdlySet__memory__DOT__mem__v28 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1aU;
        __VdlySet__memory__DOT__mem__v29 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1bU;
        __VdlySet__memory__DOT__mem__v30 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1cU;
        __VdlySet__memory__DOT__mem__v31 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1dU;
        __VdlySet__memory__DOT__mem__v32 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1eU;
        __VdlySet__memory__DOT__mem__v33 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x1fU;
        __VdlySet__memory__DOT__mem__v34 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x20U;
        __VdlySet__memory__DOT__mem__v35 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x21U;
        __VdlySet__memory__DOT__mem__v36 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x22U;
        __VdlySet__memory__DOT__mem__v37 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x23U;
        __VdlySet__memory__DOT__mem__v38 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x24U;
        __VdlySet__memory__DOT__mem__v39 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x25U;
        __VdlySet__memory__DOT__mem__v40 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x26U;
        __VdlySet__memory__DOT__mem__v41 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x27U;
        __VdlySet__memory__DOT__mem__v42 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x28U;
        __VdlySet__memory__DOT__mem__v43 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x29U;
        __VdlySet__memory__DOT__mem__v44 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2aU;
        __VdlySet__memory__DOT__mem__v45 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2bU;
        __VdlySet__memory__DOT__mem__v46 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2cU;
        __VdlySet__memory__DOT__mem__v47 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2dU;
        __VdlySet__memory__DOT__mem__v48 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2eU;
        __VdlySet__memory__DOT__mem__v49 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x2fU;
        __VdlySet__memory__DOT__mem__v50 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x30U;
        __VdlySet__memory__DOT__mem__v51 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x31U;
        __VdlySet__memory__DOT__mem__v52 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x32U;
        __VdlySet__memory__DOT__mem__v53 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x33U;
        __VdlySet__memory__DOT__mem__v54 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x34U;
        __VdlySet__memory__DOT__mem__v55 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x35U;
        __VdlySet__memory__DOT__mem__v56 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x36U;
        __VdlySet__memory__DOT__mem__v57 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x37U;
        __VdlySet__memory__DOT__mem__v58 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x38U;
        __VdlySet__memory__DOT__mem__v59 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x39U;
        __VdlySet__memory__DOT__mem__v60 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3aU;
        __VdlySet__memory__DOT__mem__v61 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3bU;
        __VdlySet__memory__DOT__mem__v62 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3cU;
        __VdlySet__memory__DOT__mem__v63 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3dU;
        __VdlySet__memory__DOT__mem__v64 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3eU;
        __VdlySet__memory__DOT__mem__v65 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x3fU;
        __VdlySet__memory__DOT__mem__v66 = 1U;
        vlSelfRef.memory__DOT__unnamedblk1__DOT__i = 0x40U;
        __VdlySet__memory__DOT__mem__v67 = 1U;
    }
    if (__VdlySet__memory__DOT__mem__v0) {
        vlSelfRef.memory__DOT__mem[__VdlyDim0__memory__DOT__mem__v0] 
            = __VdlyVal__memory__DOT__mem__v0;
    }
    if (__VdlySet__memory__DOT__mem__v1) {
        vlSelfRef.memory__DOT__mem[__VdlyDim0__memory__DOT__mem__v1] 
            = __VdlyVal__memory__DOT__mem__v1;
    }
    if (__VdlySet__memory__DOT__mem__v2) {
        vlSelfRef.memory__DOT__mem[__VdlyDim0__memory__DOT__mem__v2] 
            = __VdlyVal__memory__DOT__mem__v2;
    }
    if (__VdlySet__memory__DOT__mem__v3) {
        vlSelfRef.memory__DOT__mem[__VdlyDim0__memory__DOT__mem__v3] 
            = __VdlyVal__memory__DOT__mem__v3;
    }
    if (__VdlySet__memory__DOT__mem__v4) {
        vlSelfRef.memory__DOT__mem[0U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v5) {
        vlSelfRef.memory__DOT__mem[1U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v6) {
        vlSelfRef.memory__DOT__mem[2U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v7) {
        vlSelfRef.memory__DOT__mem[3U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v8) {
        vlSelfRef.memory__DOT__mem[4U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v9) {
        vlSelfRef.memory__DOT__mem[5U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v10) {
        vlSelfRef.memory__DOT__mem[6U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v11) {
        vlSelfRef.memory__DOT__mem[7U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v12) {
        vlSelfRef.memory__DOT__mem[8U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v13) {
        vlSelfRef.memory__DOT__mem[9U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v14) {
        vlSelfRef.memory__DOT__mem[0xaU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v15) {
        vlSelfRef.memory__DOT__mem[0xbU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v16) {
        vlSelfRef.memory__DOT__mem[0xcU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v17) {
        vlSelfRef.memory__DOT__mem[0xdU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v18) {
        vlSelfRef.memory__DOT__mem[0xeU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v19) {
        vlSelfRef.memory__DOT__mem[0xfU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v20) {
        vlSelfRef.memory__DOT__mem[0x10U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v21) {
        vlSelfRef.memory__DOT__mem[0x11U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v22) {
        vlSelfRef.memory__DOT__mem[0x12U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v23) {
        vlSelfRef.memory__DOT__mem[0x13U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v24) {
        vlSelfRef.memory__DOT__mem[0x14U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v25) {
        vlSelfRef.memory__DOT__mem[0x15U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v26) {
        vlSelfRef.memory__DOT__mem[0x16U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v27) {
        vlSelfRef.memory__DOT__mem[0x17U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v28) {
        vlSelfRef.memory__DOT__mem[0x18U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v29) {
        vlSelfRef.memory__DOT__mem[0x19U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v30) {
        vlSelfRef.memory__DOT__mem[0x1aU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v31) {
        vlSelfRef.memory__DOT__mem[0x1bU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v32) {
        vlSelfRef.memory__DOT__mem[0x1cU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v33) {
        vlSelfRef.memory__DOT__mem[0x1dU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v34) {
        vlSelfRef.memory__DOT__mem[0x1eU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v35) {
        vlSelfRef.memory__DOT__mem[0x1fU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v36) {
        vlSelfRef.memory__DOT__mem[0x20U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v37) {
        vlSelfRef.memory__DOT__mem[0x21U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v38) {
        vlSelfRef.memory__DOT__mem[0x22U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v39) {
        vlSelfRef.memory__DOT__mem[0x23U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v40) {
        vlSelfRef.memory__DOT__mem[0x24U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v41) {
        vlSelfRef.memory__DOT__mem[0x25U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v42) {
        vlSelfRef.memory__DOT__mem[0x26U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v43) {
        vlSelfRef.memory__DOT__mem[0x27U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v44) {
        vlSelfRef.memory__DOT__mem[0x28U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v45) {
        vlSelfRef.memory__DOT__mem[0x29U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v46) {
        vlSelfRef.memory__DOT__mem[0x2aU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v47) {
        vlSelfRef.memory__DOT__mem[0x2bU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v48) {
        vlSelfRef.memory__DOT__mem[0x2cU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v49) {
        vlSelfRef.memory__DOT__mem[0x2dU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v50) {
        vlSelfRef.memory__DOT__mem[0x2eU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v51) {
        vlSelfRef.memory__DOT__mem[0x2fU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v52) {
        vlSelfRef.memory__DOT__mem[0x30U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v53) {
        vlSelfRef.memory__DOT__mem[0x31U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v54) {
        vlSelfRef.memory__DOT__mem[0x32U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v55) {
        vlSelfRef.memory__DOT__mem[0x33U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v56) {
        vlSelfRef.memory__DOT__mem[0x34U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v57) {
        vlSelfRef.memory__DOT__mem[0x35U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v58) {
        vlSelfRef.memory__DOT__mem[0x36U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v59) {
        vlSelfRef.memory__DOT__mem[0x37U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v60) {
        vlSelfRef.memory__DOT__mem[0x38U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v61) {
        vlSelfRef.memory__DOT__mem[0x39U] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v62) {
        vlSelfRef.memory__DOT__mem[0x3aU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v63) {
        vlSelfRef.memory__DOT__mem[0x3bU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v64) {
        vlSelfRef.memory__DOT__mem[0x3cU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v65) {
        vlSelfRef.memory__DOT__mem[0x3dU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v66) {
        vlSelfRef.memory__DOT__mem[0x3eU] = 0U;
    }
    if (__VdlySet__memory__DOT__mem__v67) {
        vlSelfRef.memory__DOT__mem[0x3fU] = 0U;
    }
    vlSelfRef.read_data = vlSelfRef.memory__DOT__mem
        [(0x3fU & (vlSelfRef.address >> 2U))];
    vlSelfRef.memory__DOT__read_data = vlSelfRef.memory__DOT__mem
        [(0x3fU & (vlSelfRef.address >> 2U))];
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
            VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/memory/../../src/memory.sv", 2, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/memory/../../src/memory.sv", 2, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/wsl_khaled/risc5core/single_core_edition/tb/memory/../../src/memory.sv", 2, "", "Active region did not converge.");
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
    if (VL_UNLIKELY(((vlSelfRef.byte_enable & 0xf0U)))) {
        Verilated::overWidthError("byte_enable");}
    if (VL_UNLIKELY(((vlSelfRef.write_enable & 0xfeU)))) {
        Verilated::overWidthError("write_enable");}
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
