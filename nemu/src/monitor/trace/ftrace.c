#include <isa.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ftrace.h>
#include <elf.h>
// FEAT ME with ELF64 

elf_func func_list[64];
int func_count = 0;

void load_elf(char * elf_file) {
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
    // int e_shunitsize = e_shentsize / e_shnum;
    // printf("%x, %x, %x, %x\n", e_shoff, e_shentsize,
    // e_shnum, e_shstrndx);

    /* parse section header table */
    assert(e_shentsize * e_shnum < 1024);
    uint8_t section_header_tbl[1024];
    int symtbl_offset = 0;
    int symtbl_size = 0;
    int strtbl_offset = 0;
    int strtbl_size = 0;
    int stridx = -1;  // depends on sh_link of symtab in section header
    fseek(fp, e_shoff, SEEK_SET);
    int ret = fread(section_header_tbl, e_shentsize * e_shnum, 1, fp);
    assert(ret == 1);

    Elf32_Shdr *shdr = NULL;
    for (int i = 0; i < e_shnum; i++)
    {
      shdr = (Elf32_Shdr *)(section_header_tbl + i * e_shentsize);
      // printf("%d\n", i * e_shentsize);
      /* locate symbol tbl  */
    //   printf("%d\n",shdr->sh_name);
      if(shdr->sh_type == SHT_SYMTAB) {
        stridx = shdr->sh_link;
        symtbl_offset = shdr->sh_offset;
        symtbl_size   = shdr->sh_size;
        // printf("symbol_off:0x%x\n", symtbl_offset);
        // printf("symbol_size:0x%x\n", symtbl_size);
      }

      /* locate string tbl */
      else if(stridx == i) {
        strtbl_offset = shdr->sh_offset;
        strtbl_size   = shdr->sh_size;
        // printf("strtbl_offset:0x%x\n", strtbl_offset);
        // printf("strtbl_size:0x%x\n", strtbl_size);
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
    int symtbl_unitsize = sizeof(Elf32_Sym);
    int symtbl_count = symtbl_size / symtbl_unitsize; 
    for (int i = 0; i < symtbl_count; i++)
    {
      symtbl = (Elf32_Sym *)(sym_tbl + i * symtbl_unitsize);
      if(ELF32_ST_TYPE(symtbl->st_info) == STT_FUNC) { // filter func type
        func_list[func_count].name_idx = symtbl->st_name; 
        func_list[func_count].start_addr    = symtbl->st_value; 
        func_list[func_count].end_addr    = (symtbl->st_value + symtbl->st_size); 
        // printf("name_idx:%d\n", func_list[func_count].name_idx);
        // printf("start_addr:0x%x\n", func_list[func_count].start_addr);
        // printf("end_addr:0x%x\n", func_list[func_count].end_addr);
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
    for (int i = 0; i < func_count; i++)
    {
      name_offset = func_list[i].name_idx;
      strcpy((char *)func_list[i].name_str, (const char*)(str_seq + name_offset));
    //   printf("%d:\t%s\n",i, func_list[i].name_str);
    }
  }
  // else { }
  fclose(fp);
}

#ifdef CONFIG_FTRACE
static bool is_in_range(uint32_t func_addr, int i) {
    return (func_addr >= func_list[i].start_addr && func_addr < func_list[i].end_addr);
}

static bool is_ret(int rs1, int rd, uint32_t imm) {
    return (rs1 == 1 && rd == 0 && imm == 0);
}

static bool is_call(int rd) {
    return (rd != 0);
}

static bool get_func_idx(uint32_t addr, int *idx) {
    bool in_range = false;
    for (int i = 0; i < func_count; i++)
    {
        if(is_in_range(addr, i)) {
            *idx = i;               
            in_range = true;
            break;
        }
    }
    return in_range;
}
#endif

void ftrace_get_addr(uint32_t inst_addr, uint32_t func_addr, int rs1, int rd, uint32_t imm) { 
  #ifdef CONFIG_FTRACE
  int idx = 0;
  static int func_depth = 0;
  if(is_ret(rs1, rd, imm)) {
      printf("0x%8x: ", inst_addr);
      if(get_func_idx(inst_addr, &idx)) {
          for (int i = 1; i < func_depth; i++) printf("  ");
          printf("ret  [%s]\n", func_list[idx].name_str);
          func_depth --;
      }
      else printf("???\n");
  }
  else if(is_call(rd)){
      printf("0x%8x: ", inst_addr);
          if(get_func_idx(func_addr, &idx)) {
          for (int i = 0; i < func_depth; i++) printf("  ");
          printf("call [%s@%8x]\n", func_list[idx].name_str,
          func_list[idx].start_addr);
          func_depth ++;
      }
      else printf("???\n");
  }
      // printf("call_nr: %d, ret_nr: %d\n",call_nr, ret_nr);
  
  // else printf("???");
  #endif
}