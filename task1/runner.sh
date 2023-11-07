#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f sigdelay.vcd

# run Verilator to translate Verilog into C++, including the C++ testbench
verilator -Wall --cc --trace lsfr.sv --exe lsfr_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vlsfr.mk Vlsfr

# run executable simulation file
obj_dir/Vlsfr