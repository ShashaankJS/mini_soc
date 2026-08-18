`timescale 1ns/1ps

// 2-bit ALU
// sel = 0 -> addition
// sel = 1 -> subtraction
module alu (
    input wire [1:0] a,
    input wire [1:0] b,
    input wire sel,
    output reg [1:0] result
);

    always @(*) begin
        case (sel)
            1'b0: result = a + b;
            1'b1: result = a - b;
            default: result = 2'b00;
        endcase
    end

endmodule
