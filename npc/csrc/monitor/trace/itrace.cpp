#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "../utils/disasm.h"
// #include "/home/xierry/ysyx-workbench/npc/csrc/monitor/utils/disasm.h"

void itrace_output(int inst, int pc) {
    char buf[128];
    char *p = buf;

    int ilen = 4;
    int space_len = 2;
    p += snprintf(p, sizeof(buf), "0x%08x: ", pc);
    for (int j = ilen - 1; j >= 0; j --) {
        p += snprintf(p, 4, " %02x", (inst >> (j * 8)) & 0xFF);
    }
    memset(p, ' ', space_len);
    p += space_len;
    disassemble(p, buf + sizeof(buf) - p, pc, (uint8_t *)&inst, ilen);

    printf("%s\n",buf);
    memset(buf, 0, sizeof(buf));
    p = buf;
}

