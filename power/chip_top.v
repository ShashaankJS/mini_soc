`timescale 1ns/1ps

module pd0_block (
    input  wire       clk,
    input  wire       reset,
    input  wire [7:0] data_in,
    output reg  [7:0] data_out
);

    always @(posedge clk) begin
        if (reset)
            data_out <= 8'h00;
        else
            data_out <= data_in + 8'h01;
    end

endmodule


module pd1_block (
    input  wire       clk,
    input  wire       reset,
    input  wire [7:0] data_in,
    output reg  [7:0] data_out
);

    always @(posedge clk) begin
        if (reset)
            data_out <= 8'h00;
        else
            data_out <= data_in + 8'h10;
    end

endmodule


module pmc (
    input  wire clk,
    input  wire reset,
    output reg  pd0_enable,
    output reg  isolation_enable
);

    always @(posedge clk) begin
        if (reset) begin
            pd0_enable       <= 1'b0;
            isolation_enable <= 1'b1;
        end
        else begin
            pd0_enable       <= 1'b1;
            isolation_enable <= 1'b0;
        end
    end

endmodule


module chip_top (
    input  wire       clk,
    input  wire       reset,
    input  wire [7:0] data_in,
    output wire [7:0] data_out
);

    wire [7:0] pd0_data;
    wire [7:0] pd1_data;

    wire pd0_enable;
    wire isolation_enable;

    pd0_block PD0_inst (
        .clk      (clk),
        .reset    (reset),
        .data_in  (data_in),
        .data_out (pd0_data)
    );

    pd1_block PD1_inst (
        .clk      (clk),
        .reset    (reset),
        .data_in  (pd0_data),
        .data_out (pd1_data)
    );

    pmc PMC (
        .clk              (clk),
        .reset            (reset),
        .pd0_enable       (pd0_enable),
        .isolation_enable (isolation_enable)
    );

    assign data_out = isolation_enable ? 8'h00 : pd1_data;

endmodule
