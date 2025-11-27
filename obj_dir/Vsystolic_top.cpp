// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsystolic_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsystolic_top::Vsystolic_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsystolic_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , mode{vlSymsp->TOP.mode}
    , state{vlSymsp->TOP.state}
    , a_in_raw{vlSymsp->TOP.a_in_raw}
    , b_in_raw{vlSymsp->TOP.b_in_raw}
    , sum_in_raw{vlSymsp->TOP.sum_in_raw}
    , sum_out{vlSymsp->TOP.sum_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsystolic_top::Vsystolic_top(const char* _vcname__)
    : Vsystolic_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsystolic_top::~Vsystolic_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsystolic_top___024root___eval_debug_assertions(Vsystolic_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsystolic_top___024root___eval_static(Vsystolic_top___024root* vlSelf);
void Vsystolic_top___024root___eval_initial(Vsystolic_top___024root* vlSelf);
void Vsystolic_top___024root___eval_settle(Vsystolic_top___024root* vlSelf);
void Vsystolic_top___024root___eval(Vsystolic_top___024root* vlSelf);

void Vsystolic_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsystolic_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsystolic_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsystolic_top___024root___eval_static(&(vlSymsp->TOP));
        Vsystolic_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsystolic_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsystolic_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsystolic_top::eventsPending() { return false; }

uint64_t Vsystolic_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsystolic_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsystolic_top___024root___eval_final(Vsystolic_top___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_top::final() {
    Vsystolic_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsystolic_top::hierName() const { return vlSymsp->name(); }
const char* Vsystolic_top::modelName() const { return "Vsystolic_top"; }
unsigned Vsystolic_top::threads() const { return 1; }
void Vsystolic_top::prepareClone() const { contextp()->prepareClone(); }
void Vsystolic_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsystolic_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsystolic_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsystolic_top___024root__trace_init_top(Vsystolic_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsystolic_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_top___024root*>(voidSelf);
    Vsystolic_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsystolic_top___024root__trace_decl_types(tracep);
    Vsystolic_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsystolic_top___024root__trace_register(Vsystolic_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsystolic_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsystolic_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsystolic_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
