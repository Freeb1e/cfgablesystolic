// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_top.h for the primary calling header

#include "Vsystolic_top.h"
#include "Vsystolic_top__Syms.h"

//==========

void Vsystolic_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsystolic_top::eval\n"); );
    Vsystolic_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("systolic.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsystolic_top::_eval_initial_loop(Vsystolic_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("systolic.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vsystolic_top::_sequent__TOP__1(Vsystolic_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_sequent__TOP__1\n"); );
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v0;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v2;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v0;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v1;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v2;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v3;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v0;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v2;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v0;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v1;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v2;
    CData/*0:0*/ __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v3;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg__v0;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v0;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v1;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v0;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v1;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v2;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg__v0;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v0;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v1;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v0;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v1;
    SData/*15:0*/ __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v2;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    // Body
    __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v0 = 0U;
    __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v2 = 0U;
    __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v0 = 0U;
    __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v2 = 0U;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v0 = 0U;
    __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v1 = 0U;
    __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v2 = 0U;
    __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v3 = 0U;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v0 = 0U;
    __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v1 = 0U;
    __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v2 = 0U;
    __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v3 = 0U;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    if (vlTOPp->rst_n) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i = 1U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i = 1U;
    }
    if (vlTOPp->rst_n) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i = 2U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i = 2U;
    }
    if (vlTOPp->rst_n) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i = 3U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i = 3U;
    }
    if (vlTOPp->rst_n) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i = 1U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i = 1U;
    }
    if (vlTOPp->rst_n) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i = 2U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i = 2U;
    }
    if (vlTOPp->rst_n) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i = 3U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i = 3U;
    }
    __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg__v0 
        = ((IData)(vlTOPp->rst_n) ? (0xffffU & (IData)(
                                                       (vlTOPp->systolic_top__DOT__a_in 
                                                        >> 0x10U)))
            : 0U);
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_delayed
               [3U] : vlTOPp->systolic_top__DOT__a_reg_delayed
               [3U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_delayed
                [3U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_delayed
               [2U] : vlTOPp->systolic_top__DOT__a_reg_delayed
               [2U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_delayed
                [2U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_delayed
               [1U] : vlTOPp->systolic_top__DOT__a_reg_delayed
               [1U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_delayed
                [1U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_delayed
               [0U] : vlTOPp->systolic_top__DOT__a_reg_delayed
               [0U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_delayed
                [0U];
        }
    }
    __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg__v0 
        = ((IData)(vlTOPp->rst_n) ? (0xffffU & (IData)(
                                                       (vlTOPp->systolic_top__DOT__b_in 
                                                        >> 0x10U)))
            : 0U);
    if (vlTOPp->rst_n) {
        __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v0 
            = (0xffffU & (IData)((vlTOPp->systolic_top__DOT__a_in 
                                  >> 0x20U)));
        __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v0 = 1U;
        __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v1 
            = vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg
            [0U];
    } else {
        __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v2 = 1U;
    }
    if (vlTOPp->rst_n) {
        __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v0 
            = (0xffffU & (IData)((vlTOPp->systolic_top__DOT__b_in 
                                  >> 0x20U)));
        __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v0 = 1U;
        __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v1 
            = vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg
            [0U];
    } else {
        __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v2 = 1U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_delayed
                              [0U] * vlTOPp->systolic_top__DOT__b_reg_delayed
                              [0U])) : (IData)(vlTOPp->systolic_top__DOT__sum_in)));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
                = (0xffffU & ((IData)(vlTOPp->systolic_top__DOT__sum_in) 
                              + (vlTOPp->systolic_top__DOT__a_reg_delayed
                                 [0U] * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [3U][2U] : vlTOPp->systolic_top__DOT__a_reg_array
               [3U][2U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [3U][2U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [3U][1U] : vlTOPp->systolic_top__DOT__a_reg_array
               [3U][1U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [3U][1U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [3U][0U] : vlTOPp->systolic_top__DOT__a_reg_array
               [3U][0U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [3U][0U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [2U][2U] : vlTOPp->systolic_top__DOT__a_reg_array
               [2U][2U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [2U][2U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [2U][1U] : vlTOPp->systolic_top__DOT__a_reg_array
               [2U][1U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [2U][1U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [2U][0U] : vlTOPp->systolic_top__DOT__a_reg_array
               [2U][0U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [2U][0U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [1U][2U] : vlTOPp->systolic_top__DOT__a_reg_array
               [1U][2U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [1U][2U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [1U][1U] : vlTOPp->systolic_top__DOT__a_reg_array
               [1U][1U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [1U][1U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [1U][0U] : vlTOPp->systolic_top__DOT__a_reg_array
               [1U][0U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [1U][0U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [0U][2U] : vlTOPp->systolic_top__DOT__a_reg_array
               [0U][2U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [0U][2U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [0U][1U] : vlTOPp->systolic_top__DOT__a_reg_array
               [0U][1U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [0U][1U];
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__a_reg_array
               [0U][0U] : vlTOPp->systolic_top__DOT__a_reg_array
               [0U][0U]);
    } else {
        if (vlTOPp->state) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg 
                = vlTOPp->systolic_top__DOT__a_reg_array
                [0U][0U];
        }
    }
    if (vlTOPp->rst_n) {
        __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v0 
            = (0xffffU & (IData)((vlTOPp->systolic_top__DOT__a_in 
                                  >> 0x30U)));
        __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v0 = 1U;
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT____Vlvbound1 
            = vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg
            [0U];
        __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v1 
            = vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT____Vlvbound1;
        __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v1 = 1U;
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT____Vlvbound1 
            = vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg
            [1U];
        __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v2 
            = vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT____Vlvbound1;
        __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v2 = 1U;
    } else {
        __Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v3 = 1U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [0U][2U] * vlTOPp->systolic_top__DOT__b_reg_delayed
                              [3U])) : (IData)((vlTOPp->systolic_top__DOT__sum_in 
                                                >> 0x30U))));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
                = (0xffffU & ((IData)((vlTOPp->systolic_top__DOT__sum_in 
                                       >> 0x30U)) + 
                              (vlTOPp->systolic_top__DOT__a_reg_array
                               [0U][2U] * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [0U][1U] * vlTOPp->systolic_top__DOT__b_reg_delayed
                              [2U])) : (IData)((vlTOPp->systolic_top__DOT__sum_in 
                                                >> 0x20U))));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
                = (0xffffU & ((IData)((vlTOPp->systolic_top__DOT__sum_in 
                                       >> 0x20U)) + 
                              (vlTOPp->systolic_top__DOT__a_reg_array
                               [0U][1U] * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [0U][0U] * vlTOPp->systolic_top__DOT__b_reg_delayed
                              [1U])) : (IData)((vlTOPp->systolic_top__DOT__sum_in 
                                                >> 0x10U))));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
                = (0xffffU & ((IData)((vlTOPp->systolic_top__DOT__sum_in 
                                       >> 0x10U)) + 
                              (vlTOPp->systolic_top__DOT__a_reg_array
                               [0U][0U] * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg))));
        }
    }
    if (vlTOPp->rst_n) {
        __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v0 
            = (0xffffU & (IData)((vlTOPp->systolic_top__DOT__b_in 
                                  >> 0x30U)));
        __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v0 = 1U;
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT____Vlvbound1 
            = vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg
            [0U];
        __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v1 
            = vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT____Vlvbound1;
        __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v1 = 1U;
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT____Vlvbound1 
            = vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg
            [1U];
        __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v2 
            = vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT____Vlvbound1;
        __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v2 = 1U;
    } else {
        __Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v3 = 1U;
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_delayed
                              [3U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [2U][0U])) : vlTOPp->systolic_top__DOT__sum_array
                          [2U][0U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [2U][0U] + (vlTOPp->systolic_top__DOT__a_reg_delayed
                                          [3U] * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_delayed
                              [2U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [1U][0U])) : vlTOPp->systolic_top__DOT__sum_array
                          [1U][0U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [1U][0U] + (vlTOPp->systolic_top__DOT__a_reg_delayed
                                          [2U] * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_delayed
                              [1U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [0U][0U])) : vlTOPp->systolic_top__DOT__sum_array
                          [0U][0U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [0U][0U] + (vlTOPp->systolic_top__DOT__a_reg_delayed
                                          [1U] * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [3U][2U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [2U][3U])) : vlTOPp->systolic_top__DOT__sum_array
                          [2U][3U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [2U][3U] + (vlTOPp->systolic_top__DOT__a_reg_array
                                          [3U][2U] 
                                          * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [3U][1U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [2U][2U])) : vlTOPp->systolic_top__DOT__sum_array
                          [2U][2U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [2U][2U] + (vlTOPp->systolic_top__DOT__a_reg_array
                                          [3U][1U] 
                                          * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [3U][0U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [2U][1U])) : vlTOPp->systolic_top__DOT__sum_array
                          [2U][1U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [2U][1U] + (vlTOPp->systolic_top__DOT__a_reg_array
                                          [3U][0U] 
                                          * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [2U][2U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [1U][3U])) : vlTOPp->systolic_top__DOT__sum_array
                          [1U][3U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [1U][3U] + (vlTOPp->systolic_top__DOT__a_reg_array
                                          [2U][2U] 
                                          * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [2U][1U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [1U][2U])) : vlTOPp->systolic_top__DOT__sum_array
                          [1U][2U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [1U][2U] + (vlTOPp->systolic_top__DOT__a_reg_array
                                          [2U][1U] 
                                          * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [2U][0U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [1U][1U])) : vlTOPp->systolic_top__DOT__sum_array
                          [1U][1U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [1U][1U] + (vlTOPp->systolic_top__DOT__a_reg_array
                                          [2U][0U] 
                                          * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [1U][2U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [0U][3U])) : vlTOPp->systolic_top__DOT__sum_array
                          [0U][3U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [0U][3U] + (vlTOPp->systolic_top__DOT__a_reg_array
                                          [1U][2U] 
                                          * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [1U][1U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [0U][2U])) : vlTOPp->systolic_top__DOT__sum_array
                          [0U][2U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [0U][2U] + (vlTOPp->systolic_top__DOT__a_reg_array
                                          [1U][1U] 
                                          * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg))));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out = 0U;
    }
    if (vlTOPp->mode) {
        __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
            = (0xffffU & ((IData)(vlTOPp->state) ? 
                          ((IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out) 
                           + (vlTOPp->systolic_top__DOT__a_reg_array
                              [1U][0U] * vlTOPp->systolic_top__DOT__b_reg_array
                              [0U][1U])) : vlTOPp->systolic_top__DOT__sum_array
                          [0U][1U]));
    } else {
        if (vlTOPp->state) {
            __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
                = (0xffffU & (vlTOPp->systolic_top__DOT__sum_array
                              [0U][1U] + (vlTOPp->systolic_top__DOT__a_reg_array
                                          [1U][0U] 
                                          * (IData)(vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg))));
        }
    }
    vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg[0U] 
        = __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg__v0;
    vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg[0U] 
        = __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg__v0;
    if (__Vdlyvset__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v0) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[0U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v0;
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[1U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v1;
    }
    if (__Vdlyvset__systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg__v2) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[0U] = 0U;
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[1U] = 0U;
    }
    if (__Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v0) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[0U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v0;
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[1U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v1;
    }
    if (__Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg__v2) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[0U] = 0U;
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[1U] = 0U;
    }
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    if (__Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v0) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[0U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v0;
    }
    if (__Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v1) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[1U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v1;
    }
    if (__Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v2) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[2U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v2;
    }
    if (__Vdlyvset__systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg__v3) {
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[0U] = 0U;
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[1U] = 0U;
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[2U] = 0U;
    }
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    if (__Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v0) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[0U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v0;
    }
    if (__Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v1) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[1U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v1;
    }
    if (__Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v2) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[2U] 
            = __Vdlyvval__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v2;
    }
    if (__Vdlyvset__systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg__v3) {
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[0U] = 0U;
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[1U] = 0U;
        vlTOPp->systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[2U] = 0U;
    }
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out 
        = __Vdly__systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__a_reg_delayed[1U] = 
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg
        [0U];
    vlTOPp->systolic_top__DOT__a_reg_array[3U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[2U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[1U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[0U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_delayed[2U] = 
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg
        [1U];
    vlTOPp->systolic_top__DOT__sum_array[0U][0U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_delayed
               [0U] : vlTOPp->systolic_top__DOT__b_reg_delayed
               [0U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_delayed
                [0U];
        }
    }
    vlTOPp->systolic_top__DOT__a_reg_array[3U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[3U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[3U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[2U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[2U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[2U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[1U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[1U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[1U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[0U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[0U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_array[0U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    vlTOPp->systolic_top__DOT__a_reg_delayed[3U] = 
        vlTOPp->systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg
        [2U];
    vlTOPp->systolic_top__DOT__a_in = ((IData)(vlTOPp->rst_n)
                                        ? vlTOPp->a_in_raw
                                        : 0ULL);
    vlTOPp->systolic_top__DOT__sum_array[0U][3U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_delayed
               [3U] : vlTOPp->systolic_top__DOT__b_reg_delayed
               [3U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_delayed
                [3U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[0U][2U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_delayed
               [2U] : vlTOPp->systolic_top__DOT__b_reg_delayed
               [2U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_delayed
                [2U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[0U][1U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    vlTOPp->systolic_top__DOT__sum_in = ((IData)(vlTOPp->rst_n)
                                          ? vlTOPp->sum_in_raw
                                          : 0ULL);
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_delayed
               [1U] : vlTOPp->systolic_top__DOT__b_reg_delayed
               [1U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_delayed
                [1U];
        }
    }
    vlTOPp->systolic_top__DOT__b_in = ((IData)(vlTOPp->rst_n)
                                        ? vlTOPp->b_in_raw
                                        : 0ULL);
    vlTOPp->systolic_top__DOT__sum_array[3U][0U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [2U][0U] : vlTOPp->systolic_top__DOT__b_reg_array
               [2U][0U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [2U][0U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[2U][0U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [1U][0U] : vlTOPp->systolic_top__DOT__b_reg_array
               [1U][0U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [1U][0U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[1U][0U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [0U][0U] : vlTOPp->systolic_top__DOT__b_reg_array
               [0U][0U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [0U][0U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[3U][3U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [2U][3U] : vlTOPp->systolic_top__DOT__b_reg_array
               [2U][3U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [2U][3U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[3U][2U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [2U][2U] : vlTOPp->systolic_top__DOT__b_reg_array
               [2U][2U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [2U][2U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[3U][1U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [2U][1U] : vlTOPp->systolic_top__DOT__b_reg_array
               [2U][1U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [2U][1U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[2U][3U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [1U][3U] : vlTOPp->systolic_top__DOT__b_reg_array
               [1U][3U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [1U][3U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[2U][2U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [1U][2U] : vlTOPp->systolic_top__DOT__b_reg_array
               [1U][2U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [1U][2U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[2U][1U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [1U][1U] : vlTOPp->systolic_top__DOT__b_reg_array
               [1U][1U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [1U][1U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[1U][3U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [0U][3U] : vlTOPp->systolic_top__DOT__b_reg_array
               [0U][3U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [0U][3U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[1U][2U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [0U][2U] : vlTOPp->systolic_top__DOT__b_reg_array
               [0U][2U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [0U][2U];
        }
    }
    vlTOPp->systolic_top__DOT__sum_array[1U][1U] = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    if ((1U & (~ (IData)(vlTOPp->rst_n)))) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg = 0U;
    }
    if (vlTOPp->mode) {
        vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg 
            = ((IData)(vlTOPp->state) ? vlTOPp->systolic_top__DOT__b_reg_array
               [0U][1U] : vlTOPp->systolic_top__DOT__b_reg_array
               [0U][1U]);
    } else {
        if ((1U & (~ (IData)(vlTOPp->state)))) {
            vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg 
                = vlTOPp->systolic_top__DOT__b_reg_array
                [0U][1U];
        }
    }
    vlTOPp->systolic_top__DOT__b_reg_array[0U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__a_reg_delayed[0U] = 
        (0xffffU & (IData)(vlTOPp->systolic_top__DOT__a_in));
    vlTOPp->systolic_top__DOT__b_reg_array[0U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[0U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[0U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_delayed[0U] = 
        (0xffffU & (IData)(vlTOPp->systolic_top__DOT__b_in));
    vlTOPp->systolic_top__DOT__b_reg_array[3U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[2U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[1U][0U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[3U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[3U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[3U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[2U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[2U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[2U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[1U][3U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[1U][2U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    vlTOPp->systolic_top__DOT__b_reg_array[1U][1U] 
        = vlTOPp->systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
}

VL_INLINE_OPT void Vsystolic_top::_combo__TOP__3(Vsystolic_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_combo__TOP__3\n"); );
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

void Vsystolic_top::_eval(Vsystolic_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_eval\n"); );
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->rst_n)) & (IData)(vlTOPp->__Vclklast__TOP__rst_n)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_n = vlTOPp->rst_n;
}

VL_INLINE_OPT QData Vsystolic_top::_change_request(Vsystolic_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_change_request\n"); );
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vsystolic_top::_change_request_1(Vsystolic_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_change_request_1\n"); );
    Vsystolic_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsystolic_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((mode & 0xfeU))) {
        Verilated::overWidthError("mode");}
    if (VL_UNLIKELY((state & 0xfeU))) {
        Verilated::overWidthError("state");}
}
#endif  // VL_DEBUG
