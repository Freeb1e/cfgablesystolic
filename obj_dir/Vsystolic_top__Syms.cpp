// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsystolic_top__pch.h"
#include "Vsystolic_top.h"
#include "Vsystolic_top___024root.h"

// FUNCTIONS
Vsystolic_top__Syms::~Vsystolic_top__Syms()
{
}

Vsystolic_top__Syms::Vsystolic_top__Syms(VerilatedContext* contextp, const char* namep, Vsystolic_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(197);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
