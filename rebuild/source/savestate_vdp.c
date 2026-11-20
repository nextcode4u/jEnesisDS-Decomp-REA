/* Map VDP memory into the version 3 save-state region table. */
#include "savestate_regions.h"

extern unsigned char vdp_registers[];
extern unsigned short vdp_cram[];
extern unsigned short vdp_vsram[];
extern unsigned char vdp_vram[];

void bind_vdp_memory_regions_for_savestate(void)
{
    SaveStateRegions *regions = savestate_region_table;
    regions->vdp_registers = vdp_registers;
    regions->vdp_vram = vdp_vram;
    regions->vdp_cram = vdp_cram;
    regions->vdp_vsram = vdp_vsram;
}
