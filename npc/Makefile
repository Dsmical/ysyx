TOPNAME = top
VERILATOR = verilator

#directory
WORK_DIR = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build
LOG_DIR = $(WORK_DIR)/logs
OBJ_DIR = $(BUILD_DIR)/obj_dir

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# flags
VERILATOR_FLAGS += -MMD --build -cc -O3 \
	--x-assign fast --x-initial fast --noassert 
VERILATOR_FLAGS += --top-module $(TOPNAME) +incdir+vsrc/include #顶层文件名，包含目录的选项
VERILATOR_FLAGS += -Mdir $(BUILD_DIR)# 中间文件和编译产物放置在指定的目录 
VERILATOR_FLAGS += --exe --trace 
# rules for verilator
INC_PATH := $(WORK_DIR)/csrc/include $(INC_PATH)
INC_PATH ?=
INCFLAGS = $(addprefix -I, $(INC_PATH))

LDFLAGS += $(shell llvm-config --cxxflags) -fPIE #llvm 库
LDFLAGS += $(shell llvm-config --libs) 
LDFLAGS += -lreadline #添加readline库支持add_history函数

C_FLAGS += 	$(addprefix -CFLAGS ,$(INCFLAGS))#-CFLAGS :告诉编译器后面的内容是要包含的编译选项。
LD_FLAGS += $(addprefix -LDFLAGS , $(LDFLAGS))
#AM/..../npcmakefile 
IMAGE ?= #/home/dsm/ysyx-workbench/am-kernels/tests/cpu-tests/build/dummy-riscv32e-npc.bin
ARGS := -l $(BUILD_DIR)/npcc_log.txt -d /home/dsm/ysyx-workbench/npc/csrc/riscv32-nemu-interpreter-so

compile:
	@echo "Running simulation for test module"
	@rm -rf $(BUILD_DIR) $(LOG_DIR)
	$(VERILATOR) $(C_FLAGS) $(VERILATOR_FLAGS) $(LD_FLAGS) $(CSRCS)  $(VSRCS)
run: compile
	$(BUILD_DIR)/V$(TOPNAME) $(ARGS) $(IMAGE)
	
sim:run
#gtkwave $(BUILD_DIR)/waveform.vcd
clean:
	rm -rf $(BUILD_DIR) $(LOG_DIR)

.PHONY: compile sim clean wave 
