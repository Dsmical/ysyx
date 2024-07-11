#include <memory/paddr.h>
static const uint32_t img[]={
0b00000000010100000000000010010011,//addi x1 x0 5 //500093
0b00000000000100000000000100010011,//addi x2 x0 1 //100113
//0x008000EF,//jal pc+8
//0x00000073, //ecall
0b00000000001000000000000100010011,//addi x2 x0 2 //200113
0b00000000010100001000000100010011,//addi x2 x1 5 //508113
0b00000000000100000000000001110011 //ebreak   //100073
};

void init_mem() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
}
