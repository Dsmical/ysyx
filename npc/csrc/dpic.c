#include "verilated_dpi.h"
extern "C" int check_finish(int instr){
  if(instr == 0x100073) //ebreak;
    return 1;
  else 
    return 0;
}
