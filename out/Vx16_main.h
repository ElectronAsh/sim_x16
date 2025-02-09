// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VX16_MAIN_H_
#define VERILATED_VX16_MAIN_H_  // guard

#include "verilated.h"

class Vx16_main__Syms;
class Vx16_main___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vx16_main VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vx16_main__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset_n,0,0);
    VL_IN8(&cpu_din,7,0);
    VL_OUT8(&cpu_dout,7,0);
    VL_OUT8(&cpu_we,0,0);
    VL_IN8(&cpu_nmi,0,0);
    VL_OUT8(&vga_r,3,0);
    VL_OUT8(&vga_g,3,0);
    VL_OUT8(&vga_b,3,0);
    VL_OUT8(&vga_hsync,0,0);
    VL_OUT8(&vga_vsync,0,0);
    VL_OUT8(&audio_lrck,0,0);
    VL_OUT8(&audio_bck,0,0);
    VL_OUT8(&audio_data,0,0);
    VL_OUT8(&spi_sclk,0,0);
    VL_OUT8(&spi_mosi,0,0);
    VL_IN8(&spi_miso,0,0);
    VL_OUT8(&spi_ssel_n_sd,0,0);
    VL_OUT16(&cpu_addr,15,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vx16_main___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vx16_main(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vx16_main(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vx16_main();
  private:
    VL_UNCOPYABLE(Vx16_main);  ///< Copying not allowed

  public:
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
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
