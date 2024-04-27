#include <nvboard.h>
#include "VLFSR.h"

void nvboard_bind_all_pins(VLFSR* top) {
	nvboard_bind_pin( &top->clk, 1, BTNC);
	nvboard_bind_pin( &top->lfsr_seg, 14, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
}
