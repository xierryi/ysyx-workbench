#ifndef __REG_H__
#define __REG_H__

#include <stdint.h>

void isa_reg_display();

extern "C" int reg_get_val(int idx); 

uint32_t isa_reg_str2val(const char *s, bool *success);

#endif
