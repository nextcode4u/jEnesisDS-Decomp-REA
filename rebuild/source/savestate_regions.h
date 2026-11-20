#ifndef JENESIS_SAVESTATE_REGIONS_H
#define JENESIS_SAVESTATE_REGIONS_H

typedef struct {
    unsigned header;
    void *m68k_context;
    unsigned char *m68k_ram;
    void *vdp_registers, *vdp_cram, *vdp_vsram, *vdp_vram;
    void *z80_context;
    unsigned z80_bank;
    void *z80_ram, *ym2612_bank_0, *ym2612_bank_1, *psg_registers;
} SaveStateRegions;

extern SaveStateRegions savestate_regions;
extern SaveStateRegions *savestate_region_table;

#endif
