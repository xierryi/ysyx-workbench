#include <assert.h>
#include <stdlib.h>
#include <iringbuf.h>
#include <cpu/cpu.h>

void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

RingBuffer *iringbuf = NULL;

RingBuffer *IringBuf_create();
void IringBuf_destroy(RingBuffer *buffer);
int IringBuf_read(Decode *target, int amount);

void init_IringBuf() {
    iringbuf = IringBuf_create();
}

void free_IringBuf() {
    IringBuf_destroy(iringbuf);
}

RingBuffer *IringBuf_create() {
    RingBuffer *buffer = calloc(1, sizeof(RingBuffer));
    buffer->length = IRING_LENGTH;
    buffer->start = 0;
    buffer->end = 0;
    buffer->buffer = calloc(buffer->length, sizeof(Decode));
    return buffer;
}

void IringBuf_destroy(RingBuffer *buffer) {
    if(buffer) {
        free(buffer->buffer);
        free(buffer);
    }
}

int IringBuf_write(Decode *data, int length) {
    assert(data != NULL);
    assert(iringbuf != NULL);
    assert(length > 0);
    for (int i = 0; i < length; i++)
    {
        iringbuf->buffer[iringbuf->end] = data[i];
        iringbuf->end = (iringbuf->end + 1) % iringbuf->length;

        if(iringbuf->start == iringbuf->end) {
            iringbuf->start = (iringbuf->start + 1) % iringbuf->length;
        }
    }
    return length;
}

void IringBuf_output() {
    Decode s[IRING_LENGTH];
    int ret = IringBuf_read(s, IRING_LENGTH);
    assert(ret > 0);
    char buf[128];
    char *p = buf;

    int ilen = s[iringbuf->start].snpc - s[iringbuf->start].pc;
    int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
    int space_len = ilen_max - ilen;

    if (space_len < 0) space_len = 0;
    space_len = space_len * 3 + 1;
    printf("[IringBuf]-last %d insts before error:\n",ret);
    for (int i = 0; i < ret; i++)
    {
        if(i < ret - 1) p += sprintf(p, "\t");
        else p += sprintf(p, "-->\t");
        p += snprintf(p, sizeof(buf), FMT_WORD ":", s[i].pc);
        uint8_t *inst = (uint8_t *)&s[i].isa.inst;
        #ifdef CONFIG_ISA_x86
        for (int j = 0; j < ilen; j ++) {
        #else
        for (int j = ilen - 1; j >= 0; j --) {
        #endif
            p += snprintf(p, 4, " %02x", inst[j]);
        }
        memset(p, ' ', space_len);
        p += space_len;
        disassemble(p, buf + sizeof(buf) - p,
            MUXDEF(CONFIG_ISA_x86, s[i].snpc, s[i].pc), (uint8_t *)&s[i].isa.inst, ilen);
        printf("%s\n",buf);
        memset(buf, 0, sizeof(buf));
        p = buf;
    }
}

int IringBuf_read(Decode *target, int amount) {
    assert(iringbuf != NULL);
    assert(iringbuf->buffer != NULL);
    int available;
    if(iringbuf->end >= iringbuf->start) {
        available = iringbuf->end - iringbuf->start;
    }
    else {
        available = iringbuf->end - iringbuf->start + iringbuf->length;
    }

    int read_count = (amount < available) ? amount : available;

    for (int i = 0; i < read_count; i++)
    {
        target[i] = iringbuf->buffer[iringbuf->start];
        iringbuf->start = (iringbuf->start + 1) % iringbuf->length;
    }
    return read_count;
}
