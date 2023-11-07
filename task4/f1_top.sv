module f1_top(
    input logic             clk,
    input logic             rst,
    input logic [4:0]       N,
    input logic             trigger,
    output [7:0]            data_out
);

logic [6:0]                 K;

logic                       cmd_seq;
logic                       cmd_delay;

logic                       tick_to_mux;
logic                       time_out_to_mux;
logic                       mux_output;

clktick #(5) my_divider(
    .clk(clk),
    .rst(rst),
    .en(cmd_seq),
    .N(N),
    .tick(tick_to_mux)
);

// always_ff @ (posedge clk)
//     $display(cmd_delay);

lsfr my_rnggenerator(
    .clk(clk),
    .rst(rst),
    .en(1'b1),
    .data_out(K)
);

delay #(7) myDelay(
    .clk(clk),
    .rst(rst),
    .trigger(cmd_delay),
    .n(K),
    .time_out(time_out_to_mux)
);

always_comb
    mux_output = cmd_seq ? (tick_to_mux) : (time_out_to_mux);

f1_fsm myStateMachine(
    .clk(clk),
    .en(mux_output),
    .rst(rst),
    .trigger(trigger),
    .data_out(data_out),
    .cmd_seq(cmd_seq),
    .cmd_delay(cmd_delay)
);

endmodule
