all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	
	verilator -Wall --trace --cc switch.v --exe tb_switch.cpp
	make -C obj_dir -f Vswitch.mk Vswitch
	./obj_dir/Vswitch
clean:
	rm -rf obj_dir/
include ../Makefile
