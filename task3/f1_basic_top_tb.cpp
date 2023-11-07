#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_basic_top.h"

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vf1_basic_top * top = new Vf1_basic_top;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("clktick.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("L3T2:Clktick");
  vbdSetMode(1);        // Flag mode set to one-shot

//   input logic                 clk,
// input logic                 en,
// input logic                 rst,
// input logic [15:0]          N,
// ouput logic [7:0]           data_out

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 0;
  top->en = 1;
  top->N = 40;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    // set up input signals of testbench
    top->rst = (simcyc < 2);    // assert reset for 1st cycle
    top->en = (simcyc > 2);
    vbdCycle(simcyc);

    vbdBar(top->data_out & 0xFF);

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
