#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->ps2_clk, 1, PS2_CLK);
	nvboard_bind_pin( &top->ps2_data, 1, PS2_DAT);
	nvboard_bind_pin( &top->value_seg, 42, SEG7G, SEG7F, SEG7E, SEG7D, SEG7C, SEG7B, SEG7A, SEG6G, SEG6F, SEG6E, SEG6D, SEG6C, SEG6B, SEG6A, SEG3G, SEG3F, SEG3E, SEG3D, SEG3C, SEG3B, SEG3A, SEG2G, SEG2F, SEG2E, SEG2D, SEG2C, SEG2B, SEG2A, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
}
