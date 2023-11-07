module lsfr (
    input logic         clk, //clock
    input logic         rst, //reset
    input logic         en,
    output logic [7:1]  data_out //pseudo random output
);
    logic [7:1]         sreg;

always_ff @ (posedge clk, posedge rst) begin
    //$display(sreg);
    if(rst) begin
        sreg <= 7'b1;
    end
    else if (en) 
    //$display(sreg);
        sreg <= {sreg[6:1], sreg[7] ^ sreg[3]};
    else
        sreg <= sreg;
end

assign data_out = sreg;
endmodule   
