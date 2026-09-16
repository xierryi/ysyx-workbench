#include <stdio.h>
#include <string.h>
#include "../cpu/cpu.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
};

int size = sizeof(regs) / sizeof(char *);

extern "C" void reg_get_val(int idx, int val) {
  if(idx >= 0 && idx < 16) cpu.gpr[idx] = val; // def
}

void isa_reg_display() {
  printf("pc\t\t0x%-8x\t%-d\n", cpu.pc, cpu.pc);
  for (int i = 0; i < size; i++)
  {
    printf("%s\t\t0x%-8x\t%-d\n",regs[i], cpu.gpr[i], cpu.gpr[i]);
  }
}

uint32_t isa_reg_str2val(const char *s, bool *success) {
  for (int i = 0; i < size; i++)
  {
    if (strcmp(s, regs[i]) == 0) {
      *success = true;
      return cpu.gpr[i];
    }
    else if (strcmp(s, "pc") == 0) {
      *success = true;
      return cpu.pc;
    }
  }
  *success = false;
  return 0;
}