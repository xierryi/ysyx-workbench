#include <isa.h>
#include "local-include/csr.h"

word_t csr[CSR_NUM] = {
    [CSR_MSTATUS] = 0x1800,
    [CSR_MARCHID] = 0x18DA58D,
    [CSR_MVENDORID] = 0x79737978
};