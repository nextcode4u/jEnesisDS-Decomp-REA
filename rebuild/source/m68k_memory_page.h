#ifndef JENESIS_M68K_MEMORY_PAGE_H
#define JENESIS_M68K_MEMORY_PAGE_H

typedef struct {
    unsigned char *backing;
    unsigned mask;
} M68kMemoryPage;

extern volatile M68kMemoryPage cartridge_mapping;
extern volatile M68kMemoryPage genesis_work_ram_mapping;

#endif
