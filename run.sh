#!/bin/bash

echo "======================================"
echo "       Mini-SoC Simulation"
echo "======================================"

echo "[1] Cleaning previous simulation..."
rm -rf obj_dir dump.vcd

echo "[2] Compiling with Verilator..."

verilator --binary -j 0 -Wall -Wno-fatal \
    counter.v \
    alu.v \
    mux2x1.v \
    mini_soc.v \
    mini_soc_tb.v \
    --top-module mini_soc_tb \
    --timing \
    --trace \
    --CFLAGS "-std=c++20"

if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

echo "[3] Running simulation..."

./obj_dir/Vmini_soc_tb

if [ $? -ne 0 ]; then
    echo "Simulation failed!"
    exit 1
fi

echo "[4] Simulation completed successfully!"

if [ -f dump.vcd ]; then
    echo "[5] Waveform generated: dump.vcd"
else
    echo "ERROR: dump.vcd was not generated!"
    exit 1
fi

echo "======================================"
echo " Simulation Complete"
echo "======================================"

echo "Opening GTKWave..."

gtkwave dump.vcd
