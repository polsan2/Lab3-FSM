#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f f1_basic_top.vcd

# run Verilator to translate Verilog into C++, including the C++ testbench
verilator -Wall --cc --trace f1_basic_top.sv --exe f1_basic_top_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vf1_basic_top.mk Vf1_basic_top

# run executable simulation file
obj_dir/Vf1_basic_top
