#ifndef __IRINGBUF_H__
#define __IRINGBUF_H__

#include <cpu/decode.h>

#define IRING_LENGTH 20

typedef struct {
    Decode *buffer;
    int length;
    int start;
    int end;
} RingBuffer;

void init_IringBuf();

void free_IringBuf();

void IringBuf_output(); 

int IringBuf_write(Decode *data, int length);

#endif
