module f1_fsm (
    input logic             clk,
    input logic             en,
    input logic             rst,
    input logic             trigger,
    output [7:0]            data_out,
    output logic            cmd_seq,
    output logic            cmd_delay
);

logic                       flag;

always_ff @ (posedge clk) begin//prob wrong implementation
    //$display(flag);
end

//define our states
typedef enum {S0, S1, S2, S3, S4, S5, S6, S7, S8, S9} my_state;
my_state current_state, next_state;

//next state logic
always_comb 
    case(current_state)
        S0:     if(en) next_state = S1;
                else next_state = S0;
        S1:     if(en) next_state = S2;
                else next_state = S1;
        S2:     if(en) next_state = S3;
                else next_state = S2;
        S3:     if(en) next_state = S4;
                else next_state = S3;
        S4:     if(en) next_state = S5;
                else next_state = S4;
        S5:     if(en) next_state = S6;
                else next_state = S5;
        S6:     if(en) next_state = S7;
                else next_state = S6;
        S7:     if(en) next_state = S8;
                else next_state = S7;
        S8:     if(en) next_state = S9;
                else next_state = S8;
        S9:     if(trigger) next_state = S0;
                else next_state = S9;
        default: next_state = S0;
    endcase

//state transtition
always_ff @ (posedge clk)
    begin
    if(rst)  begin
        current_state <= S0;
        cmd_delay <= 0;
    end
    else
        current_state <= next_state;
        if(en)
            cmd_delay <= (current_state == S7) & (next_state == S8);
        else 
            cmd_delay <= 0;
    end

//output logic
always_comb begin
    case(current_state)
        S0:     data_out = 8'b0;
        S1:     data_out = 8'b1;
        S2:     data_out = 8'b11;
        S3:     data_out = 8'b111;
        S4:     data_out = 8'b1111;
        S5:     data_out = 8'b11111;
        S6:     data_out = 8'b111111;
        S7:     data_out = 8'b1111111;
        S8:     data_out = 8'b11111111;
        S9:     data_out = 8'b0;
        default: data_out = 8'b0;
    endcase
    cmd_seq = current_state != S8;
end
    
endmodule
