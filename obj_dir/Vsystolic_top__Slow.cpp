// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_top.h for the primary calling header

#include "Vsystolic_top.h"
#include "Vsystolic_top__Syms.h"

//==========

VL_CTOR_IMP(Vsystolic_top) {
    Vsystolic_top__Syms* __restrict vlSymsp = __VlSymsp = new Vsystolic_top__Syms(this, name());
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vsystolic_top::__Vconfigure(Vsystolic_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vsystolic_top::~Vsystolic_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vsystolic_top::_settle__TOP__2(Vsystolic_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_settle__TOP__2\n"); );
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->systolic_top__DOT__a_reg_delayed[1U] = 
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg
        [0U];
    vlTOPp->systolic_top__DOT__a_reg_delayed[2U] = 
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg
        [1U];
    vlTOPp->systolic_top__DOT__a_reg_delayed[3U] = 
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg
        [2U];
    vlTOPp->systolic_top__DOT__sum_array[0U][0U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[0U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[0U][1U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[0U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[0U][2U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[0U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[0U][3U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[0U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[1U][0U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[1U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[1U][1U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[1U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[1U][2U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[1U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[1U][3U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[1U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[2U][0U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[2U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[2U][1U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[2U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[2U][2U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[2U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[2U][3U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[2U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[3U][0U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[3U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[3U][1U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[3U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[3U][2U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[3U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__sum_array[3U][3U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_array[3U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_delayed[0U] = 
        (0xffffU & (IData)(vlTOPp->systolic_top__DOT__a_in));
    vlTOPp->systolic_top__DOT__b_reg_delayed[0U] = 
        (0xffffU & (IData)(vlTOPp->systolic_top__DOT__b_in));
    if (((IData)(vlTOPp->state) | (IData)(vlTOPp->mode))) {
        vlTOPp->systolic_top__DOT__b_reg_delayed[1U] 
            = (0xffffU & vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg
               [0U]);
        vlTOPp->systolic_top__DOT__b_reg_delayed[2U] 
            = (0xffffU & vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg
               [1U]);
        vlTOPp->systolic_top__DOT__b_reg_delayed[3U] 
            = (0xffffU & vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg
               [2U]);
    } else {
        vlTOPp->systolic_top__DOT__b_reg_delayed[1U] 
            = (0xffffU & (IData)((vlTOPp->systolic_top__DOT__b_in 
                                  >> 0x10U)));
        vlTOPp->systolic_top__DOT__b_reg_delayed[2U] 
            = (0xffffU & (IData)((vlTOPp->systolic_top__DOT__b_in 
                                  >> 0x20U)));
        vlTOPp->systolic_top__DOT__b_reg_delayed[3U] 
            = (0xffffU & (IData)((vlTOPp->systolic_top__DOT__b_in 
                                  >> 0x30U)));
    }
    vlTOPp->systolic_top__DOT__b_reg_array[0U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[0U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[0U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[0U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[1U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[1U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[1U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[1U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[2U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[2U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[2U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[2U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[3U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[3U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[3U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[3U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
}

void Vsystolic_top::_eval_initial(Vsystolic_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_eval_initial\n"); );
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_n = vlTOPp->rst_n;
}

void Vsystolic_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::final\n"); );
    // Variables
    Vsystolic_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsystolic_top::_eval_settle(Vsystolic_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_eval_settle\n"); );
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vsystolic_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_n = VL_RAND_RESET_I(1);
    a_in_raw = VL_RAND_RESET_Q(64);
    b_in_raw = VL_RAND_RESET_Q(64);
    sum_in_raw = VL_RAND_RESET_Q(64);
    sum_out = VL_RAND_RESET_Q(64);
    mode = VL_RAND_RESET_I(1);
    state = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
                    systolic_top__DOT__sum_array[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
                    systolic_top__DOT__a_reg_array[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            { int __Vi1=0; for (; __Vi1<4; ++__Vi1) {
                    systolic_top__DOT__b_reg_array[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
            }}
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            systolic_top__DOT__a_reg_delayed[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            systolic_top__DOT__b_reg_delayed[__Vi0] = VL_RAND_RESET_I(16);
    }}
    systolic_top__DOT__a_in = VL_RAND_RESET_Q(64);
    systolic_top__DOT__b_in = VL_RAND_RESET_Q(64);
    systolic_top__DOT__sum_in = VL_RAND_RESET_Q(64);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg = VL_RAND_RESET_I(16);
    systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i = 0;
    systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i = 0;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i = 0;
    systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i = 0;
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i = 0;
    systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i = 0;
    systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i = 0;
    systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i = 0;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i = 0;
    systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i = 0;
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[__Vi0] = VL_RAND_RESET_I(16);
    }}
    systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i = 0;
    systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i = 0;
    systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
