# Mini-SoC Integration Lab

A simple modular Mini-SoC implemented in Verilog and simulated using Verilator and GTKWave.

## IP Blocks

- 4-bit synchronous up counter
- 2-bit ALU
- 2:1 2-bit multiplexer

## Architecture

The counter output is divided into two 2-bit values.

- `count[3:2]` -> ALU input A
- `count[1:0]` -> ALU input B
- `alu_sel` -> ALU operation
- `mux_sel` -> MUX selection
- `soc_out` -> Mini-SoC output

## Requirements

- Verilator
- GTKWave
- Git

## Run Simulation

```bash
chmod +x run.sh
./run.sh
