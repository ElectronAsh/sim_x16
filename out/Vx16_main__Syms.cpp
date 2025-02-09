// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vx16_main__pch.h"
#include "Vx16_main.h"
#include "Vx16_main___024root.h"

// FUNCTIONS
Vx16_main__Syms::~Vx16_main__Syms()
{
}

Vx16_main__Syms::Vx16_main__Syms(VerilatedContext* contextp, const char* namep, Vx16_main* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(561);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
