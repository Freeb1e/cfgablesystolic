// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSYSTOLIC_TOP_H_
#define _VSYSTOLIC_TOP_H_  // guard

#include "verilated.h"

//==========

class Vsystolic_top__Syms;
class Vsystolic_top_VerilatedVcd;


//----------

VL_MODULE(Vsystolic_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(mode,0,0);
    VL_IN8(state,0,0);
    VL_IN64(a_in_raw,63,0);
    VL_IN64(b_in_raw,63,0);
    VL_IN64(sum_in_raw,63,0);
    VL_OUT64(sum_out,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    IData/*31:0*/ systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__unnamedblk1__DOT__i;
    QData/*63:0*/ systolic_top__DOT__a_in;
    QData/*63:0*/ systolic_top__DOT__b_in;
    QData/*63:0*/ systolic_top__DOT__sum_in;
    SData/*15:0*/ systolic_top__DOT__sum_array[4][4];
    SData/*15:0*/ systolic_top__DOT__a_reg_array[4][4];
    SData/*15:0*/ systolic_top__DOT__b_reg_array[4][4];
    SData/*15:0*/ systolic_top__DOT__a_reg_delayed[4];
    SData/*15:0*/ systolic_top__DOT__b_reg_delayed[4];
    SData/*15:0*/ systolic_top__DOT__input_split_loop__BRA__1__KET____DOT__a_delay_inst__DOT__shift_reg[1];
    SData/*15:0*/ systolic_top__DOT__input_split_loop__BRA__2__KET____DOT__a_delay_inst__DOT__shift_reg[2];
    SData/*15:0*/ systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT__shift_reg[3];
    SData/*15:0*/ systolic_top__DOT__input_split_loop_b__BRA__1__KET____DOT__b_delay_inst__DOT__shift_reg[1];
    SData/*15:0*/ systolic_top__DOT__input_split_loop_b__BRA__2__KET____DOT__b_delay_inst__DOT__shift_reg[2];
    SData/*15:0*/ systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT__shift_reg[3];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_n;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__0__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__1__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__2__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__0__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__1__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__2__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__sum_out;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__b_reg;
    SData/*15:0*/ systolic_top__DOT____Vcellout__row_loop__BRA__3__KET____DOT__col_loop__BRA__3__KET____DOT__pe_inst__a_reg;
    SData/*15:0*/ systolic_top__DOT__input_split_loop__BRA__3__KET____DOT__a_delay_inst__DOT____Vlvbound1;
    SData/*15:0*/ systolic_top__DOT__input_split_loop_b__BRA__3__KET____DOT__b_delay_inst__DOT____Vlvbound1;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vsystolic_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsystolic_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vsystolic_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vsystolic_top();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vsystolic_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vsystolic_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vsystolic_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vsystolic_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vsystolic_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vsystolic_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vsystolic_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vsystolic_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vsystolic_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vsystolic_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
