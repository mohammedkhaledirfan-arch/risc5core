SIM ?= verilator
TOPLEVEL_LANG ?= verilog
EXTRA_ARGS += --trace --trace-structs

VERILOG_SOURCES += $(wildcard $(PWD)/../../src/*.sv)
TOPLEVEL = signext
MODULE = test_signext

include $(shell cocotb-config --makefiles)/Makefile.sim