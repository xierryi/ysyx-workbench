#ifndef __MTRACE_H__
#define __MTRACE_H__

#include <stdint.h>

enum {
    READ_MODE, WRITE_MODE
};

void mtrace_output(uint32_t addr, uint32_t data, int len, int mode);

#endif

