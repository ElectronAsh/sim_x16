// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vx16_main__pch.h"

//============================================================
// Constructors

Vx16_main::Vx16_main(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vx16_main__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset_n{vlSymsp->TOP.reset_n}
    , cpu_din{vlSymsp->TOP.cpu_din}
    , cpu_dout{vlSymsp->TOP.cpu_dout}
    , cpu_we{vlSymsp->TOP.cpu_we}
    , cpu_nmi{vlSymsp->TOP.cpu_nmi}
    , vga_r{vlSymsp->TOP.vga_r}
    , vga_g{vlSymsp->TOP.vga_g}
    , vga_b{vlSymsp->TOP.vga_b}
    , vga_hsync{vlSymsp->TOP.vga_hsync}
    , vga_vsync{vlSymsp->TOP.vga_vsync}
    , audio_lrck{vlSymsp->TOP.audio_lrck}
    , audio_bck{vlSymsp->TOP.audio_bck}
    , audio_data{vlSymsp->TOP.audio_data}
    , spi_sclk{vlSymsp->TOP.spi_sclk}
    , spi_mosi{vlSymsp->TOP.spi_mosi}
    , spi_miso{vlSymsp->TOP.spi_miso}
    , spi_ssel_n_sd{vlSymsp->TOP.spi_ssel_n_sd}
    , cpu_addr{vlSymsp->TOP.cpu_addr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vx16_main::Vx16_main(const char* _vcname__)
    : Vx16_main(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vx16_main::~Vx16_main() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vx16_main___024root___eval_debug_assertions(Vx16_main___024root* vlSelf);
#endif  // VL_DEBUG
void Vx16_main___024root___eval_static(Vx16_main___024root* vlSelf);
void Vx16_main___024root___eval_initial(Vx16_main___024root* vlSelf);
void Vx16_main___024root___eval_settle(Vx16_main___024root* vlSelf);
void Vx16_main___024root___eval(Vx16_main___024root* vlSelf);

void Vx16_main::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vx16_main::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vx16_main___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vx16_main___024root___eval_static(&(vlSymsp->TOP));
        Vx16_main___024root___eval_initial(&(vlSymsp->TOP));
        Vx16_main___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vx16_main___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vx16_main::eventsPending() { return false; }

uint64_t Vx16_main::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vx16_main::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vx16_main___024root___eval_final(Vx16_main___024root* vlSelf);

VL_ATTR_COLD void Vx16_main::final() {
    Vx16_main___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vx16_main::hierName() const { return vlSymsp->name(); }
const char* Vx16_main::modelName() const { return "Vx16_main"; }
unsigned Vx16_main::threads() const { return 1; }
void Vx16_main::prepareClone() const { contextp()->prepareClone(); }
void Vx16_main::atClone() const {
    contextp()->threadPoolpOnClone();
}
