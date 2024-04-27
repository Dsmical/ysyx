#include <nvboard.h>
#include "VAlu.h"

void nvboard_bind_all_pins(VAlu* top) {
	nvboard_bind_pin( &top->a_in, 4, SW7, SW6, SW5, SW4);
	nvboard_bind_pin( &top->b_in, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->button, 3, BTNC, BTNR, BTNL);
	nvboard_bind_pin( &top->mode, 3, LD2, LD1, LD0);
	nvboard_bind_pin( &top->OF, 1, LD6);
	nvboard_bind_pin( &top->CF, 1, LD5);
	nvboard_bind_pin( &top->ZF, 1, LD4);
	nvboard_bind_pin( &top->mode_seg, 7, SEG7G, SEG7F, SEG7E, SEG7D, SEG7C, SEG7B, SEG7A);
	nvboard_bind_pin( &top->a_seg, 14, SEG6G, SEG6F, SEG6E, SEG6D, SEG6C, SEG6B, SEG6A, SEG5G, SEG5F, SEG5E, SEG5D, SEG5C, SEG5B, SEG5A);
	nvboard_bind_pin( &top->b_seg, 14, SEG4G, SEG4F, SEG4E, SEG4D, SEG4C, SEG4B, SEG4A, SEG3G, SEG3F, SEG3E, SEG3D, SEG3C, SEG3B, SEG3A);
	nvboard_bind_pin( &top->value_seg, 21, SEG2G, SEG2F, SEG2E, SEG2D, SEG2C, SEG2B, SEG2A, SEG1G, SEG1F, SEG1E, SEG1D, SEG1C, SEG1B, SEG1A, SEG0G, SEG0F, SEG0E, SEG0D, SEG0C, SEG0B, SEG0A);
}
