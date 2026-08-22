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

#include <isa.h>
#include <memory/paddr.h>
#include <iringbuf.h>
#include <elf.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm();

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  //Log("Exercise: Please remove me in the source code and compile NEMU again.");
  //assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;

typedef struct{
  uint32_t name_idx;
  uint32_t laddr;
  uint32_t haddr;
  uint8_t name_str[20];
} elf_func;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static void load_elf() {
  if(elf_file == NULL) {
    Log("No elf is given.");
  }
  FILE *fp = fopen(elf_file, "rb");
  Assert(fp, "Can not open '%s'", elf_file);

  /* def ELF file header */
  uint8_t header[EI_NIDENT + sizeof(Elf64_Ehdr)] = {0};
  int ret = fread(header, sizeof(header), 1, fp);
  assert(ret == 1);

  /* identify Magic number */
  bool magic_ident = header[0] == 0x7f && 
  header[1] == 'E' && header[2] == 'L' && header[3] == 'F';

  Assert(magic_ident == true, "Can't indentify elf file '%s'", elf_file);

  /* parse ELF header */
  if(header[EI_CLASS] == ELFCLASS32) {
    Elf32_Ehdr *ehdr = (Elf32_Ehdr *)header;
    Elf32_Off e_shoff = ehdr->e_shoff;
    Elf32_Half e_shentsize = ehdr->e_shentsize;
    Elf32_Half e_shnum = ehdr->e_shnum;
    Elf32_Half e_shstrndx = ehdr->e_shstrndx;
    // int e_shunitsize = e_shentsize / e_shnum;
    printf("%x, %x, %x\n", e_shoff, e_shentsize,
    e_shnum);

    /* parse section header table */
    assert(e_shentsize * e_shnum < 1024);
    uint8_t section_header_tbl[1024];
    int symtbl_offset = 0;
    int symtbl_size = 0;
    int strtbl_offset = 0;
    int strtbl_size = 0;
    fseek(fp, e_shoff, SEEK_SET);
    int ret = fread(section_header_tbl, e_shentsize * e_shnum, 1, fp);
    assert(ret == 1);

    Elf32_Shdr *shdr = NULL;
    for (int i = 0; i < e_shnum; i++)
    {
      shdr = (Elf32_Shdr *)(section_header_tbl + i * e_shentsize);
      // printf("%d\n", i * e_shentsize);
      /* locate symbol tbl  */
      if(shdr->sh_type == SHT_SYMTAB) {
        symtbl_offset = shdr->sh_offset;
        symtbl_size   = shdr->sh_size;
        printf("symbol_off:0x%x\n", symtbl_offset);
        printf("symbol_size:0x%x\n", symtbl_size);
      }

      /* locate string tbl */
      // else if(shdr->sh_type == SHT_STRTAB && shdr->sh_name == e_shstrndx) {
      else if(shdr->sh_name == e_shstrndx) {
        strtbl_offset = shdr->sh_offset;
        strtbl_size   = shdr->sh_size;
        printf("strtbl_offset:0x%x\n", strtbl_offset);
        printf("strtbl_size:0x%x\n", strtbl_size);
      }
    }
    
    /* parse symbol table */
    assert(symtbl_size < 4096);
    uint8_t sym_tbl[4096];
    assert(symtbl_offset != 0);
    fseek(fp, symtbl_offset, SEEK_SET);
    ret = fread(sym_tbl, symtbl_size, 1, fp);
    assert(ret == 1);

    Elf32_Sym *symtbl = NULL;
    elf_func func_list[64];
    int func_count = 0;
    int symtbl_unitsize = sizeof(Elf32_Sym);
    int symtbl_count = symtbl_size / symtbl_unitsize; 
    for (int i = 0; i < symtbl_count; i++)
    {
      symtbl = (Elf32_Sym *)(sym_tbl + i * symtbl_unitsize);
      if(ELF32_ST_TYPE(symtbl->st_info) == STT_FUNC) { // filter func type
        func_list[func_count].name_idx = symtbl->st_name; 
        printf("name_idx:%d\n", func_list[func_count].name_idx);
        func_list[func_count].laddr    = symtbl->st_value; 
        printf("laddr:0x%x\n", func_list[func_count].laddr);
        func_list[func_count].haddr    = (symtbl->st_value + symtbl->st_size); 
        printf("haddr:0x%x\n", func_list[func_count].haddr);
        func_count ++; 
        assert(func_count < 64);
      }
    }

    /* get func name */
    assert(strtbl_size < 4096);
    uint8_t str_seq[4096];
    assert(strtbl_offset != 0);
    fseek(fp, strtbl_offset, SEEK_SET);
    ret = fread(str_seq, strtbl_size, 1, fp);
    assert(ret == 1);
    
    int name_offset = 0;
    uint8_t *dst_p, *src_p = NULL;
    for (int i = 0; i < func_count; i++)
    {
      name_offset = func_list[i].name_idx;
      dst_p = func_list[i].name_str;
      for (src_p = str_seq + name_offset; *src_p; src_p ++)
      {
        *dst_p = *src_p;
        dst_p ++;
      }
      printf("%d:\t%s\n",i, func_list[i].name_str);
    }
  }
  // else { }
  fclose(fp);
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Load the elf file to parse the function information*/
  load_elf();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm());

  // IFDEF(CONFIG_IRINGBUF, init_IringBuf());
  init_IringBuf();

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
