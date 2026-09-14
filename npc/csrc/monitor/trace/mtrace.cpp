#include <stdio.h>
#include <stdint.h>
#include "../../cpu/cpu.h"
#include "mtrace.h"

extern bool g_print_step;

void mtrace_output(uint32_t addr, uint32_t data, int len, int mode){
    char buf[128] = {0};
    char *p = buf;
    p += snprintf(p, sizeof(buf), "0x%08x: ", addr);
    p += snprintf(p, buf + sizeof(buf) - p, "%d 0x%x", data, data);
    switch (mode)
    {
    case READ_MODE: 
        p += snprintf(p, buf + sizeof(buf) - p, "\t[mtrace: read");
        break;
    case WRITE_MODE:
        p += snprintf(p, buf + sizeof(buf) - p, "\t[mtrace: write");
        break;
    default: assert(0); break;
    }
    if(len == 1)
    p += snprintf(p, buf + sizeof(buf) - p, " %d byte]", len);
    else 
    p += snprintf(p, buf + sizeof(buf) - p, " %d bytes]", len);
    printf("%s\n",buf);
}