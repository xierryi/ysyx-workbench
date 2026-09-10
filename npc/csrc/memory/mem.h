#ifndef __MEM_H__
#define __MEM_H__

#define CONFIG_MBASE 0x80000000
#define RESET_VECTOR 0x80000000

#define SERIAL_ADDR 0x10000000U
#define RTC_ADDR    0x10000048U

void load_img(int argc, char** argv);

#ifdef __cplusplus
extern "C" {
#endif
    int pmem_read(int raddr);
    void pmem_write(int waddr, int wdata, char wmask); 
#ifdef __cplusplus
}
#endif

#endif
