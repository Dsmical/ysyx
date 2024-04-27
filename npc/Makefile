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
#INC_PATH := $(WORK_DIR)/csrc/include $(INC_PATH)
INC_PATH ?=
INCFLAGS = $(addprefix -I, $(INC_PATH))

C_FLAGS += -CFLAGS "$(INCFLAGS)"#-CFLAGS :告诉编译器后面的内容是要包含的编译选项。

default:
	@echo "Running simulation for test module"
	$(VERILATOR) $(C_FLAGS) $(VERILATOR_FLAGS) $(CSRCS)  $(VSRCS)
run: default
	$(BUILD_DIR)/V$(TOPNAME)
sim:run
	gtkwave $(BUILD_DIR)/waveform.vcd

clean:
	rm -rf $(BUILD_DIR) $(LOG_DIR)

.PHONY: compile sim clean wave 