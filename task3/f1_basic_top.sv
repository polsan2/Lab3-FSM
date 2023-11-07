module f1_basic_top(
input logic                 clk,
input logic                 en,
input logic                 rst,
input logic [15:0]          N,
output logic [7:0]           data_out
);

logic                       wire1;

clktick my_divider(
    .clk(clk),
    .rst(rst),
    .en(en),
    .N(N),
    .tick(wire1)
);

f1_fsm my_f1_machine(
    // input logic             clk,
    // input logic             en,
    // input logic             rst,
    // output [7:0]            data_out
    .clk(clk),
    .en(wire1),
    .rst(rst),
    .data_out(data_out)
);
endmodule
