#ifndef __MEM_H__
#define __MEM_H__

#define CONFIG_MBASE 0x80000000
// #define CONFIG_MBASE 0
#define RESET_VECTOR 0x80000000

#define SERIAL_ADDR 0x10000000U
#define RTC_ADDR    0x10000048U

#include <stdint.h>

int load_img(int argc, char** argv);

#ifdef __cplusplus
extern "C" {
#endif
    int vaddr_ifetch(int raddr, int len); 
    void vaddr_write(int waddr, int wdata, int len); 
#ifdef __cplusplus
}
#endif

uint8_t *guest_to_host(uint32_t paddr); 

uint32_t paddr_read(int raddr, int len);

// #endif

#endif
