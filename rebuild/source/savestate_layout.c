/* ARM9 save-state slot naming and version 3 region setup. */
#include <stdlib.h>
#include <string.h>

typedef struct {
    /* The two CPU pointers follow ten words of emulator state in DTCM. */
    unsigned reserved[10];
    void *m68k;
    void *z80;
} EmulatorCpuPointers;

typedef struct {
    unsigned header;
    void *m68k_context;
    unsigned char *m68k_ram;
    void *vdp_registers, *vdp_cram, *vdp_vsram, *vdp_vram;
    void *z80_context;
    unsigned z80_bank;
    void *z80_ram, *ym2612_bank_0, *ym2612_bank_1, *psg_registers;
} SaveStateRegions;

extern EmulatorCpuPointers emulator_cpu_pointers;
extern unsigned char genesis_work_ram_bytes[];
extern SaveStateRegions savestate_regions;
extern SaveStateRegions *savestate_region_table;
extern int savestate_regions_initialized;
extern char *loaded_cartridge_metadata;

void *get_z80_work_ram_buffer(void);
void *get_ym2612_bank_0_mirror_for_savestate(void);
void *get_ym2612_bank_1_mirror_for_savestate(void);
void *get_psg_mirror_for_savestate(void);
void bind_vdp_memory_regions_for_savestate(void);

char *make_savestate_slot_path(unsigned char slot_number)
{
    size_t length = strlen(loaded_cartridge_metadata);
    char *path = malloc(length + 3);
    char *end;

    /* Replace the four-character ROM extension with _N.jst. */
    strncpy(path, loaded_cartridge_metadata, length);
    end = path + length;
    end[-4] = '_';
    end[-3] = '0' + (slot_number & 3);
    end[-2] = '.';
    end[-1] = 'j';
    path[length] = 's';
    end[1] = 't';
    end[2] = '\0';
    return path;
}

void prepare_savestate_header_and_regions(void)
{
    savestate_region_table = &savestate_regions;
    savestate_regions.header = 0x4a530003;
    savestate_regions.m68k_context = emulator_cpu_pointers.m68k;
    savestate_regions.m68k_ram = genesis_work_ram_bytes;
    savestate_regions.z80_context = emulator_cpu_pointers.z80;
    savestate_regions.z80_ram = get_z80_work_ram_buffer();
    savestate_regions.ym2612_bank_0 = get_ym2612_bank_0_mirror_for_savestate();
    savestate_regions.ym2612_bank_1 = get_ym2612_bank_1_mirror_for_savestate();
    savestate_regions.psg_registers = get_psg_mirror_for_savestate();
    bind_vdp_memory_regions_for_savestate();
    savestate_regions_initialized = 1;
}
