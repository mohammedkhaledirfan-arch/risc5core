SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += --trace --trace-structs

VERILOG_SOURCES += $(wildcard $(PWD)/../../src/*.sv)
TOPLEVEL = control
MODULE = test_control

include $(shell cocotb-config --makefiles)/Makefile.sim