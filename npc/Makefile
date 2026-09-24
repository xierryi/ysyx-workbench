VERILATOR = verilator
TOPNAME = top

PROJ_PATH = $(shell pwd)

# Generate C++ in executable form
VERILATOR_FLAGS += -cc -exe
# Make waveforms
VERILATOR_FLAGS += --trace 
# Enable all code-style warning 
VERILATOR_FLAGS += -Wall  
# Invoke the toolchain to build the model library
VERILATOR_FLAGS += --build
# Uses the number of threads in the current hardware
VERILATOR_FLAGS += -j 0   
# Specify the top file
VERILATOR_FLAGS += --top-module $(TOPNAME)
# Support readline
VERILATOR_FLAGS += --LDFLAGS "-lreadline -fsanitize=address"

# Input files for Verilator
VSRC_DIR := $(abspath ./vsrc)
VSRC := $(shell find $(VSRC_DIR) -name "*.v")
CSRC := $(shell find $(abspath ./csrc) -name "*.cpp")

-include $(NPC_HOME)/csrc/monitor/utils/filelist.mk

VERILATOR_INPUT := $(VSRC) $(CSRC)

VERILATOR_FLAGS += -I$(NPC_HOME)/csrc/tools/capstone/repo/include

VERILATOR_INC_DIRS = $(VSRC_DIR)/include

VERILATOR_FLAGS += -I$(VERILATOR_INC_DIRS)

VERILATOR_FLAGS += +define+ysyx_26060173_SIMULATION

SYNTHESIS_DEFINE = ysyx_26060173_SYNTHESIS

NEMU_DIFF = $(NEMU_HOME)/build/riscv32-nemu-interpreter-so
# NEMU_DIFF = $(NPC_HOME)/csrc/tools/nemu-diff/riscv32-nemu-interpreter-so

default: sim

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

	@echo 
	@echo "--VERILATE-----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	@echo	
	@echo "--RUN----------------------"
	obj_dir/Vtop $(IMG).bin $(IMG).elf $(NEMU_DIFF) 

run_sta:
	@echo
	@echo "--RUN--STA----------------"
	$(MAKE) -C $(YOSYS_STA_DIR) sta \
		RTL_FILES="$(VSRC)" \
		DESIGN=top \
		O="$(PROJ_PATH)/result" \
		YOSYS_INC_DIRS="$(VERILATOR_INC_DIRS)" \
		YOSYS_DEFINES="-D$(SYNTHESIS_DEFINE)"

clean:
	rm -rf obj_dir/
	rm -rf result/

include ../Makefile

.PHONY: clean

