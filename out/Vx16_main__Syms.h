// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VX16_MAIN__SYMS_H_
#define VERILATED_VX16_MAIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vx16_main.h"

// INCLUDE MODULE CLASSES
#include "Vx16_main___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vx16_main__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vx16_main* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vx16_main___024root            TOP;

    // CONSTRUCTORS
    Vx16_main__Syms(VerilatedContext* contextp, const char* namep, Vx16_main* modelp);
    ~Vx16_main__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
