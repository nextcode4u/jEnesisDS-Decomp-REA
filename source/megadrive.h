#ifndef JENESIS_MEGADRIVE_H
#define JENESIS_MEGADRIVE_H

#include "cartridge.h"
#include "dac.h"
#include "m68k.h"
#include "third_party/z80/z80.h"

#include <stddef.h>

enum {
    VDP_MAX_ACTIVE_LINES = 240,
    VDP_SPRITE_TABLE_BYTES = 80 * 8,
    VDP_RASTER_SPRITE_TABLES = 8,
};

struct vdp_scanline {
    uint16_t vscroll[2];
    uint8_t plane_a_base;
    uint8_t sprite_table;
    bool display_enabled;
};

enum genesis_region {
    GENESIS_REGION_AUTO,
    GENESIS_REGION_USA,
    GENESIS_REGION_JAPAN,
    GENESIS_REGION_EUROPE,
    GENESIS_REGION_COUNT,
};

enum genesis_button {
    GENESIS_UP = 1 << 0,
    GENESIS_DOWN = 1 << 1,
    GENESIS_LEFT = 1 << 2,
    GENESIS_RIGHT = 1 << 3,
    GENESIS_B = 1 << 4,
    GENESIS_C = 1 << 5,
    GENESIS_A = 1 << 6,
    GENESIS_START = 1 << 7,
};

struct megadrive {
    struct m68k cpu;
    const uint8_t *rom;
    size_t rom_size;
    uint32_t sram_start, sram_size;
    uint8_t sram_control;
    bool sram_dirty;
    uint8_t ram[0x10000];
    uint8_t z80_ram[0x2000];
    z80 sound_cpu;
    uint16_t z80_bank;
    uint8_t z80_clock_phase;
    uint8_t z80_irq_clocks;
    uint32_t z80_instruction_debt;
    unsigned z80_synced_cycle;
    unsigned z80_slice_start;
    unsigned long z80_slice_clocks;
    bool z80_bus_requested;
    bool z80_reset;
    uint8_t port_data[3];
    uint8_t port_direction[3];
    uint8_t serial_tx[3];
    uint8_t serial_control[3];
    uint8_t pad1_pressed;
    uint8_t vram[0x10000];
    uint16_t cram[64];
    uint16_t vsram[40];
    struct vdp_scanline vdp_rows[VDP_MAX_ACTIVE_LINES];
    uint8_t vdp_sprite_tables[VDP_RASTER_SPRITE_TABLES][VDP_SPRITE_TABLE_BYTES];
    unsigned vdp_row_count, vdp_sprite_table_count, vdp_active_lines;
    bool vdp_capture_raster, vdp_raster_layout;
    uint32_t video_revision;
    uint32_t vram_revisions[0x10000 / 32];
    uint8_t vdp_registers[24];
    uint16_t vdp_address;
    uint8_t vdp_code;
    bool vdp_command_pending;
    bool vdp_odd_field;
    bool vdp_fill_pending;
    bool vblank;
    bool hint_pending;
    uint8_t psg_latch;
    uint16_t psg_registers[8];
    uint8_t ym_address[2];
    uint8_t ym_fm_keys[FM_CHANNELS];
    uint8_t ym_registers[2][256];
    unsigned ym_busy_cycles;
    uint32_t ym_timer_clocks[2];
    uint8_t ym_timer_flags;
    struct dac_capture dac_capture;
    uint8_t version;
    unsigned frame_cycles;
    unsigned cycle_carry;
    unsigned frame_cycle;
    uint8_t sram[CARTRIDGE_SRAM_CAPACITY];
};

static inline bool megadrive_sram_visible(const struct megadrive *md, uint32_t address)
{
    return (md->sram_control & 1) && address - md->sram_start < md->sram_size;
}

static inline uint16_t megadrive_scanline_vscroll(const struct megadrive *md,
                                                unsigned y, unsigned plane)
{
    return y < md->vdp_row_count ? md->vdp_rows[y].vscroll[plane] : md->vsram[plane];
}

void megadrive_reset_serial(struct megadrive *md);
void megadrive_reset(struct megadrive *md, const struct cartridge *cart, enum genesis_region region);
void megadrive_run_frame(struct megadrive *md);
uint16_t megadrive_backdrop(const struct megadrive *md);
uint8_t megadrive_read_byte(struct megadrive *md, uint32_t address);
uint16_t megadrive_read_word(struct megadrive *md, uint32_t address);
bool megadrive_write_byte(struct megadrive *md, uint32_t address, uint8_t value);
bool megadrive_write_word(struct megadrive *md, uint32_t address, uint16_t value);

#endif
