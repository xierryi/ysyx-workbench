// csr
#ifndef __RISCV_REG_H__
#define __RISCV_REG_H__

#include <common.h>
enum {
  CSR_MSTATUS   = 0x300,
  CSR_MTVEC     = 0x305,
  CSR_MEPC      = 0x341,
  CSR_MCAUSE    = 0x342,
  CSR_MCYCLE    = 0xB00,
  CSR_MCYCLEH   = 0xB80,
  CSR_MVENDORID = 0xF11,
  CSR_MARCHID   = 0xF12,
  // ...
  CSR_NUM    = 0xFFF,   // 足够覆盖
};

extern word_t csr[CSR_NUM]; 

#endif
