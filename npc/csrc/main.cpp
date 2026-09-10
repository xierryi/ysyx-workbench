#include <stdio.h>

#include "monitor/sdb/sdb.h"
#include "memory/mem.h"
#include "cpu/cpu.h"

int main(int argc, char** argv) {

  system_init(argc, argv);

  printf("file_img:%s\n",argv[1]);

  load_img(argc, argv);

  cpu_init();

  sdb_mainloop();

  // while(!contextp->gotFinish())
  // // for(int i=0; i < 40; i ++)
  // {
  //   top->clk = ~top->clk;
  //   top->eval();
  // }

  system_free();

  return system_isGoodret();
}
