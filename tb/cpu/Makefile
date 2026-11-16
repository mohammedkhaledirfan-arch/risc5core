SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += --trace --trace-structs

VERILOG_SOURCES += $(wildcard $(PWD)/../../src/*.sv)
TOPLEVEL = cpu
MODULE = test_cpu

include $(shell cocotb-config --makefiles)/Makefile.sim
