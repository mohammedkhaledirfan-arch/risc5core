#test_regfile.py
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random
import numpy as np

@cocotb.test()
async def regfile_test(dut):
    # Start a 10 ns clock
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())
    await RisingEdge(dut.clk)

    # Init and reset
    dut.rst_n.value = 0
    dut.write_enable.value = 0
    dut.adr1.value = 0
    dut.adr2.value = 0
    dut.adr3.value = 0
    dut.write_data.value = 0  

    await RisingEdge(dut.clk)   
    dut.rst_n.value = 1  # realease reset_n   
    await RisingEdge(dut.clk)    

    # fill a heorical state of the regs, all 0s for starters
    theorical_regs = [0 for _ in range(32)]

    # Loop to write and read random values, 1000 test shall be enough
    for _ in range(1000): 
        # Generate a random register address (1 to 31, skip 0)
        adr1 = random.randint(1, 31)
        adr2 = random.randint(1, 31)
        adr3 = random.randint(1, 31)
        write_value = random.randint(0, 0xFFFFFFFF)

        # perform reads
        await Timer(1, units="ns") # wait a ns to test async read
        dut.adr1.value = adr1
        dut.adr2.value = adr2
        await Timer(1, units="ns")
        assert dut.read_data1.value == theorical_regs[adr1]
        assert dut.read_data2.value == theorical_regs[adr2]

        # perform a random write
        dut.adr3.value = adr3
        dut.write_enable.value = 1
        dut.write_data.value = write_value
        await RisingEdge(dut.clk)
        dut.write_enable.value = 0
        theorical_regs[adr3] = write_value
        await Timer(1, units="ns")

    # try to write at 0 and check if it's still 0
    await Timer(1, units="ns")
    dut.adr3.value = 0
    dut.write_enable.value = 1
    dut.write_data.value = 0xAEAEAEAE
    await RisingEdge(dut.clk)
    dut.write_enable.value = 0
    theorical_regs[adr3] = 0

    await Timer(1, units="ns") # wait a ns to test async read
    dut.adr1.value = 0
    await Timer(1, units="ns")
    print(dut.read_data1.value)
    assert int(dut.read_data1.value) == 0

    print("Random write/read test completed successfully.")