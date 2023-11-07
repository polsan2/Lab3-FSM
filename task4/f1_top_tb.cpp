#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1_top.h"
#include <iostream>

#include "vbuddy.cpp"     // include vbuddy code
#define MAX_SIM_CYC 100000

void BCDConversionPrint(int n)
{
     vbdHex(4, (n/1000)%10);
     vbdHex(3, (n/100)%10);
     vbdHex(2, (n/10)%10);
     vbdHex(1, (n)%10);
}

int main(int argc, char **argv, char **env) {
  bool reactionFlag = false;
  int iRecoded; 
  int reactionTime;
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges
  int lights = 0; // state to toggle LED lights

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vf1_top * top = new Vf1_top;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("f1_top.vcd");
 
  // init Vbuddy
  if (vbdOpen()!=1) return(-1);
  vbdHeader("F1");
  vbdSetMode(1);        // Flag mode set to one-shot

  // initialize simulation inputs
  top->clk = 1;
  top->rst = 1;
  top->trigger = 0;
  top->N = vbdValue();
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }
  

     if((top->data_out & 0xFF) == 0 && reactionFlag == false){
      vbdInitWatch();
      iRecoded = vbdElapsed();
      reactionFlag = true;
      std::cout << "set flag true" << std::endl;
    }
    
    vbdBar(top->data_out & 0xFF);
   
   
    if((top->data_out & 0xFF) == 1 && reactionFlag == true){
      reactionTime = (vbdElapsed()-iRecoded);
        vbdHex(4, (reactionTime/1000)%10);
        vbdHex(3, (reactionTime/100)%10);
        vbdHex(2, (reactionTime/10)%10);
        vbdHex(1, (reactionTime)%10);

      reactionFlag = false;
    }
    // if(reactionFlag == true && vbdFlag() == 1){
    //   std::cout << "happened" << std::endl;
    //   int recordedTime = vbdElapsed();
    //   std::cout << "time elapsed is " << recordedTime << std::endl;
    //   vbdHex(4, (recordedTime  >> 12 ) & 0xF);
    //   vbdHex(3, (recordedTime  >> 8 ) & 0xF);
    //   vbdHex(2, (recordedTime  >> 4 ) & 0xF);
    //   vbdHex(1, recordedTime & 0xF);
    //   reactionFlag = false;
    // }
      
      
      
    // set up input signals of testbench
    top->rst = (simcyc < 2);    // assert reset for 1st cycle
    top->trigger = vbdFlag();
    top->N = vbdValue();
    vbdCycle(simcyc);

    if (Verilated::gotFinish())  exit(0);
  }

  vbdClose();     // ++++
  tfp->close(); 
  exit(0);
}
