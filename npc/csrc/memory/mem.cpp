#include <stdio.h>
#include <stdint.h>
#include <sys/time.h>
#include <math.h>
#include "mem.h"
#include <assert.h>
#include "../monitor/trace/itrace.h"
#include "../monitor/trace/mtrace.h"
#include "../cpu/cpu.h"

extern bool g_print_step;

char *img_file = NULL;
uint8_t pmem[65535000];
// uint8_t pmem[6555300] = {
//     // 0x04402083: lw x1, 0x44(x0)
//     0x83, 0x20, 0x40, 0x04,
//     // 0x04404103: lbu x2, 0x44(x0)
//     0x03, 0x41, 0x40, 0x04,
//     // 0x04504183: lbu x3, 0x45(x0)
//     0x83, 0x41, 0x50, 0x04,
//     // 0x04604203: lbu x4, 0x46(x0)
//     0x03, 0x42, 0x60, 0x04,
//     // 0x04704283: lbu x5, 0x47(x0)
//     0x83, 0x42, 0x70, 0x04,
//     // 0x00008013: addi x0, x0, 0  (实际是 addi x0, x1, 0 的编码)
//     0x13, 0x80, 0x00, 0x00,
//     // 0x00010013: addi x0, x2, 0
//     0x13, 0x00, 0x01, 0x00,
//     // 0x00018013: addi x0, x3, 0
//     0x13, 0x80, 0x01, 0x00,
//     // 0x00020013: addi x0, x4, 0
//     0x13, 0x00, 0x02, 0x00,
//     // 0x00028013: addi x0, x5, 0
//     0x13, 0x80, 0x02, 0x00,
//     // 0x00002023: sw x0, 0(x0)
//     0x23, 0x20, 0x00, 0x00,
//     // 0x00102023: sw x1, 0(x0)
//     0x23, 0x20, 0x10, 0x00,
//     // 0x00200223: sb x2, 4(x0)
//     0x23, 0x02, 0x20, 0x00,
//     // 0x003002a3: sb x3, 5(x0)
//     0xa3, 0x02, 0x30, 0x00,
//     // 0x00400323: sb x4, 6(x0)
//     0x23, 0x03, 0x40, 0x00,
//     // 0x005003a3: sb x5, 7(x0)
//     0xa3, 0x03, 0x50, 0x00,
//     // 0x00100073: ebreak
//     0x73, 0x00, 0x10, 0x00,
//     // 0x12345678: 数据（小端序存储）
//     0x78, 0x56, 0x34, 0x12,
// };

int load_img(int argc, char** argv) {
  img_file = argv[1];
  if(img_file == NULL) {
    printf("Error loading img 1.\n");
    return 1;
  }
  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) {
    printf("Error: Cannot open file %s\n", img_file);
    return 1;
  }
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  
  if(fp) printf("The image is %s, size = %ld", img_file, size);
  else printf("Error loading img.\n");

  fseek(fp, 0, SEEK_SET);
  int ret = fread(pmem, size, 4, fp);

  fclose(fp);
  return 0;
}

static uint8_t *gest_to_host(uint32_t paddr) {
  return pmem + paddr - CONFIG_MBASE;
} 

static inline uint32_t host_read(void *addr, int len) {
  switch (len)
  {
    case 1: return *(uint8_t *)addr; break;
    case 2: return *(uint16_t *)addr; break;
    case 4: return *(uint32_t *)addr; break;
    default: assert(0); break;
  }
}

static inline void host_write(void *addr, int len, uint32_t data) {
  switch (len)
  {
    case 1: *(uint8_t *)addr = data; break;
    case 2: *(uint16_t *)addr = data; break;
    case 4: *(uint32_t *)addr = data; break;
    default: assert(0); break;
  }
}

static uint32_t pmem_read(uint32_t addr, int len) {
  uint32_t ret = host_read(gest_to_host(addr), len);
  return ret;
}

uint32_t paddr_read(int raddr, int len) {
 if(raddr == RTC_ADDR || raddr == (RTC_ADDR + 4)) {
    struct timeval now;
    gettimeofday(&now, NULL); 

    uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
    if(raddr == RTC_ADDR) return (uint32_t)us;
    if(raddr == RTC_ADDR + 4) return  (uint32_t)(us >> 32);
  }
  uint32_t data;
  data = pmem_read(raddr, len);
  // printf("C:raddr=0x%x\n",raddr);
  // printf("C:data=0x%x\n",data);
  return data;
}
// static uint32_t pmem_
// load inst api
extern "C" int vaddr_read(int raddr, int len) {
  uint32_t data = paddr_read(raddr, len);
  static int call_count_2 = 0; 
  if(g_print_step) {
    if(call_count_2 > 1) call_count_2 = 0; 
    else call_count_2 ++;
    if(call_count_2 == 0) mtrace_output(raddr, data, len, READ_MODE);
  }
  return data; // avoid any shift in RTL
  // return pmem[raddr - CONFIG_MBASE];
}

extern "C" int vaddr_ifetch(int raddr, int len) {
  int inst = paddr_read(raddr, len);
  static int call_count_2 = 0; // call_count_2 is strange!! TO FIX ME
  if(g_print_step) {
    if(call_count_2 > 1) call_count_2 = 0; 
    else call_count_2 ++;
    if(call_count_2 == 1)itrace_output(inst, raddr);
  }
  return inst; // avoid any shift in RTL
}
// store inst api
extern "C" void vaddr_write(int waddr, int wdata, int len, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变

  // printf("C:wdata:%x\n",wdata);
  /* SERIAL PART */
  static int call_count_2 = 0; // call_count_2 is strange!! TO FIX ME
  if(waddr == SERIAL_ADDR) 
  { 
    if(call_count_2 > 1) call_count_2 = 0; 
    else call_count_2 ++;
    // printf("call_count:%d\n",call_count);
    if(!call_count_2)
    putchar(wdata);   
    return;
  }

  unsigned wmask_buf = wmask;
  unsigned char wmask_byte[4];
  /* hex to binary */
  wmask_byte[3] = (wmask_buf / 8) * 0xFF; wmask_buf = wmask_buf % 8;
  wmask_byte[2] = (wmask_buf / 4) * 0xFF; wmask_buf = wmask_buf % 4;
  wmask_byte[1] = (wmask_buf / 2) * 0xFF; wmask_buf = wmask_buf % 2;
  wmask_byte[0] = (wmask_buf)     * 0xFF;

  /* get bit mask */
  int wmask_4byte = (wmask_byte[3] << 24) + (wmask_byte[2] << 16) + (wmask_byte[1] << 8) + wmask_byte[0]; 
  char one_pos = log2(wmask & -wmask);
  // printf("waddr:%x\twaddr - CONFIG_MBASE:%x\n", waddr, waddr - CONFIG_MBASE);
  // pmem[(waddr - CONFIG_MBASE) >> 2] = (pmem[(waddr - CONFIG_MBASE) >> 2] & ~wmask_4byte) | ((wdata << one_pos * 8) & wmask_4byte);
  // pmem[(waddr - CONFIG_MBASE)] = (pmem[(waddr - CONFIG_MBASE)] & ~wmask_4byte) | ((wdata << one_pos * 8) & wmask_4byte);
  host_write(gest_to_host(waddr), len, wdata);
  if(g_print_step) {
    if(call_count_2 > 1) call_count_2 = 0; 
    else call_count_2 ++;
    if(call_count_2 == 0) mtrace_output(waddr, wdata, len, WRITE_MODE);
  }
}