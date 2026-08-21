/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

int mtrace_isnifetch;
enum {
  READ_MODE, WRITE_MODE,
};

extern bool g_print_step;

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

static void mtrace_log(paddr_t addr, word_t data, int len, int mode){
  #if defined(CONFIG_MTRACE) && defined(CONFIG_MTRACE_BASE) && defined(CONFIG_MTRACE_SIZE)
    if(addr >= CONFIG_MTRACE_BASE && addr <= CONFIG_MTRACE_BASE + CONFIG_MTRACE_SIZE
    && g_print_step && mtrace_isnifetch) {
      char buf[128] = {0};
      char *p = buf;
      p += snprintf(p, sizeof(buf), FMT_WORD ": ", addr);
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
  #endif
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) {
    word_t data;
    data = pmem_read(addr, len);
    mtrace_log(addr, data, len, READ_MODE);
    return data;
  }
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if (likely(in_pmem(addr))) { 
    pmem_write(addr, len, data); 
    mtrace_log(addr, data, len, WRITE_MODE);
    return; 
  }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  // #ifdef CONFIG_MTRACE
  // #endif
  out_of_bound(addr);
}
