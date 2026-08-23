#ifndef __FTRACE_H__
#define __FTRACE_H__

typedef struct{
  uint32_t name_idx;
  uint32_t start_addr;
  uint32_t end_addr;
  char name_str[20];
} elf_func;

void load_elf(char * elf_file);

void ftrace_get_addr(uint32_t inst_addr, uint32_t func_addr, int rs1, int rd, uint32_t imm); 

#endif
