VERILATOR = verilator

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

# Input files for Verilator
VERILATOR_INPUT = csrc/main.cpp vsrc/example.v

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
	obj_dir/Vexample

include ../Makefile
