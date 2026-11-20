#include "megadrive.h"
#include "cartridge.h"
#include "vdp_render.h"
#include "z80_bus.h"

#include <string.h>

#ifdef __NDS__
#include <nds/ndstypes.h>
#else
#define ITCM_CODE
#endif

static uint8_t detect_region(const char *region)
{
    // Prefer the USA release as jEnesisDS 0.7.4 does by default.
    if (strchr(region, 'U'))
        return 0xa1;
    switch (*region) {
    case 'J':
    case '1':
        return 0x21;
    case '4':
    case '5':
    case 'F':
    case '\0':
        return 0xa1;
    default:
        return 0xe1;
    }
}

void megadrive_reset_serial(struct megadrive *md)
{
    md->serial_tx[0] = md->serial_tx[1] = 0xff;
    md->serial_tx[2] = 0xfb;
    memset(md->serial_control, 0, sizeof(md->serial_control));
}

void megadrive_reset(struct megadrive *md, const struct cartridge *cart, enum genesis_region region)
{
    memset(md, 0, sizeof(*md));
    md->rom = cart->data;
    md->rom_size = cart->size;
    md->sram_start = cart->sram_start;
    md->sram_size = cart->sram_size;
    if (md->sram_size && md->sram_start >= md->rom_size)
        md->sram_control = 1;
    md->z80_reset = true;
    genesis_z80_reset(md);
    md->ym_registers[0][0x2a] = 0x80;
    for (unsigned bank = 0; bank < 2; ++bank)
        for (unsigned channel = 0; channel < 3; ++channel)
            md->ym_registers[bank][0xb4 + channel] = 0xc0;
    megadrive_reset_serial(md);
    for (unsigned i = 1; i < 8; i += 2)
        md->psg_registers[i] = 15;
    md->version = detect_region(cart->region);
    if (region == GENESIS_REGION_USA)
        md->version = 0xa1;
    else if (region == GENESIS_REGION_JAPAN)
        md->version = 0x21;
    else if (region == GENESIS_REGION_EUROPE)
        md->version = 0xe1;
    // A scanline is 3420 master clocks and one 68000 cycle is seven.
    unsigned lines = (md->version & 0x40) ? 313 : 262;
    md->frame_cycles = 3420 * lines / 7;
    m68k_reset(&md->cpu, md);
}

static ITCM_CODE __attribute__((noinline)) unsigned run_cpu_until(struct megadrive *md, unsigned cycles, unsigned end)
{
    while (cycles < end && !md->cpu.stopped) {
        if ((md->vdp_registers[0] & 0x10) && md->hint_pending && (md->cpu.sr & 0x0700) < 0x0400) {
            unsigned elapsed = m68k_interrupt(&md->cpu, md, 4);
            if (elapsed) {
                md->hint_pending = false;
                cycles += elapsed;
                continue;
            }
            if (md->cpu.stopped)
                break;
        }
        md->frame_cycle = cycles;
        unsigned elapsed = m68k_step(&md->cpu, md);
        uint16_t op = md->cpu.opcode;
        if (elapsed == 10 && md->cpu.pc <= md->cpu.instruction_address &&
            elapsed < end - cycles &&
            ((op & 0xfff8) == 0x51c8 || op == 0x66fa || op == 0x67fa))
            elapsed += m68k_skip_idle(&md->cpu, md, end - cycles - elapsed);
        cycles += elapsed;
        if (cycles - md->z80_synced_cycle >= 128)
            genesis_z80_sync(md, cycles);
    }
    genesis_z80_sync(md, cycles < end ? end : cycles);
    return cycles;
}

static unsigned snapshot_sprite_table(struct megadrive *md)
{
    bool wide = (md->vdp_registers[12] & 1) != 0;
    unsigned size = (wide ? 80 : 64) * 8;
    unsigned base = (md->vdp_registers[5] & (wide ? 0x7e : 0x7f)) << 9;
    const uint8_t *table = md->vram + base;
    unsigned count = md->vdp_sprite_table_count;
    if (count && !memcmp(md->vdp_sprite_tables[count - 1], table, size))
        return count;
    if (count == VDP_RASTER_SPRITE_TABLES)
        return 0;
    memcpy(md->vdp_sprite_tables[count], table, size);
    if (size < VDP_SPRITE_TABLE_BYTES)
        memset(md->vdp_sprite_tables[count] + size, 0, VDP_SPRITE_TABLE_BYTES - size);
    return ++md->vdp_sprite_table_count;
}

static void capture_raster_through(struct megadrive *md, unsigned next_line)
{
    if (next_line > md->vdp_active_lines)
        next_line = md->vdp_active_lines;
    bool first_layout_snapshot = md->vdp_raster_layout && !md->vdp_sprite_table_count;
    if (next_line <= md->vdp_row_count && !first_layout_snapshot)
        return;
    bool display = (md->vdp_registers[1] & 0x40) != 0;
    unsigned sprite_table = 0;
    if (md->vdp_raster_layout && display) {
        sprite_table = snapshot_sprite_table(md);
        if (first_layout_snapshot && sprite_table) {
            // Earlier scroll writes may already have recorded this display span.
            for (unsigned y = 0; y < md->vdp_row_count; ++y)
                if (md->vdp_rows[y].display_enabled)
                    md->vdp_rows[y].sprite_table = sprite_table;
        }
    }
    struct vdp_scanline row = {
        .vscroll = {md->vsram[0], md->vsram[1]},
        .plane_a_base = md->vdp_registers[2],
        .sprite_table = sprite_table,
        .display_enabled = display,
    };
    while (md->vdp_row_count < next_line)
        md->vdp_rows[md->vdp_row_count++] = row;
}

void megadrive_run_frame(struct megadrive *md)
{
    unsigned cycles = md->cycle_carry;
    md->z80_synced_cycle = 0;
    md->frame_cycle = cycles;
    unsigned active_lines = (md->vdp_registers[1] & 8) ? VDP_MAX_ACTIVE_LINES : 224;
    bool had_raster = md->vdp_row_count != 0;
    md->vdp_row_count = 0;
    md->vdp_sprite_table_count = 0;
    md->vdp_raster_layout = false;
    md->vdp_active_lines = active_lines;
    md->vdp_capture_raster = true;
    md->vblank = false;
    md->vdp_odd_field = (md->vdp_registers[12] & 2) && !md->vdp_odd_field;
    if ((md->vdp_registers[12] & 6) == 6)
        ++md->video_revision;
    // Run to each counter expiration. Reload from R10 at the start of
    // active display and when it expires, so writes take effect on reload.
    unsigned hint_line = md->vdp_registers[10];
    while (hint_line <= active_lines && !md->cpu.stopped) {
        cycles = run_cpu_until(md, cycles, 3420 * hint_line / 7);
        md->hint_pending = true;
        hint_line += md->vdp_registers[10] + 1;
    }
    cycles = run_cpu_until(md, cycles, 3420 * active_lines / 7);
    md->vdp_capture_raster = false;
    if (md->vdp_row_count)
        capture_raster_through(md, active_lines);
    if (had_raster || md->vdp_row_count)
        ++md->video_revision;
    md->vblank = true;
    genesis_z80_vblank(md, cycles);
    if (!md->cpu.stopped && (md->vdp_registers[1] & 0x20))
        cycles += m68k_interrupt(&md->cpu, md, 6);
    cycles = run_cpu_until(md, cycles, md->frame_cycles);
    md->cycle_carry = cycles >= md->frame_cycles ? cycles - md->frame_cycles : 0;
    md->frame_cycle = 0;
}

static unsigned ym_timer_period(const struct megadrive *md, unsigned timer)
{
    enum { MASTER_CLOCKS_PER_FM_SAMPLE = 7 * 144 };
    const uint8_t *regs = md->ym_registers[0];
    if (timer == 0) {
        unsigned value = (unsigned)regs[0x24] << 2 | (regs[0x25] & 3);
        return (1024 - value) * MASTER_CLOCKS_PER_FM_SAMPLE;
    }
    return (256 - regs[0x26]) * 16 * MASTER_CLOCKS_PER_FM_SAMPLE;
}

void megadrive_ym_advance(struct megadrive *md, unsigned master_clocks)
{
    unsigned m68k_cycles = master_clocks / 7;
    md->ym_busy_cycles = m68k_cycles < md->ym_busy_cycles ?
                         md->ym_busy_cycles - m68k_cycles : 0;
    uint8_t mode = md->ym_registers[0][0x27];
    if (!(mode & 3))
        return;
    for (unsigned timer = 0; timer < 2; ++timer) {
        if (!(mode & (1 << timer)))
            continue;
        uint32_t *remaining = &md->ym_timer_clocks[timer];
        if (master_clocks < *remaining) {
            *remaining -= master_clocks;
        } else {
            if (mode & (4 << timer))
                md->ym_timer_flags |= 1 << timer;
            unsigned period = ym_timer_period(md, timer);
            unsigned overrun = master_clocks - *remaining;
            *remaining = period - (overrun < period ? overrun : overrun % period);
        }
    }
}

uint8_t megadrive_ym_status(const struct megadrive *md)
{
    return (md->ym_busy_cycles ? 0x80 : 0) | md->ym_timer_flags;
}

void megadrive_ym_write_at(struct megadrive *md, unsigned port, uint8_t data, unsigned cycle)
{
    unsigned bank = port >> 1;
    if (!(port & 1)) {
        md->ym_address[bank] = data;
        return;
    }

    unsigned reg = md->ym_address[bank];
    if (!bank && reg == 0x27) {
        uint8_t prior = md->ym_registers[0][reg];
        for (unsigned timer = 0; timer < 2; ++timer) {
            unsigned running = (data >> timer) & 1;
            if (!running)
                md->ym_timer_clocks[timer] = 0;
            else if (!(prior & (1 << timer)))
                md->ym_timer_clocks[timer] = ym_timer_period(md, timer);
        }
        md->ym_timer_flags &= ~(data >> 4 & 3);
    }
    if (md->ym_registers[bank][reg] != data &&
        ((!bank && (reg == 0x2a || reg == 0x2b)) || (bank && reg == 0xb6)))
        dac_sync(md, cycle);
    if (!bank && reg == 0x28) {
        unsigned channel = data & 3;
        if (channel != 3)
            md->ym_fm_keys[channel + ((data & 4) ? 3 : 0)] = data >> 4;
    }
    if ((!bank && (reg == 0x22 || reg == 0x27 || reg == 0x28 || reg == 0x2b)) ||
        (reg >= 0x30 && reg <= 0xb6 && (reg & 3) != 3))
        capture_fm_write(md, bank * 256 + reg, data, cycle);
    md->ym_registers[bank][reg] = data;
    md->ym_busy_cycles = 32;
}

void megadrive_ym_write(struct megadrive *md, unsigned port, uint8_t data)
{
    megadrive_ym_write_at(md, port, data, md->frame_cycle);
}

uint16_t megadrive_backdrop(const struct megadrive *md)
{
    return vdp_ds_color(md->cram[md->vdp_registers[7] & 0x3f]);
}

static uint8_t read_port(const struct megadrive *md, unsigned port)
{
    unsigned output = md->port_data[port], direction = md->port_direction[port];
    unsigned pins = 0x7f;
    if (port == 0) {
        bool th_high = !(direction & 0x40) || (output & 0x40);
        unsigned buttons = md->pad1_pressed;
        if (th_high)
            pins &= ~(buttons & 0x3f);
        else
            pins = 0x33 & ~(buttons & 3) & ~(buttons >> 2 & 0x30);
    }
    return (output & direction) | (pins & ~direction);
}

static uint8_t read_serial(const struct megadrive *md, unsigned reg)
{
    unsigned port = reg / 3;
    switch (reg % 3) {
    case 0: return md->serial_tx[port];
    case 1: return 0;
    default: return md->serial_control[port];
    }
}

static void write_serial(struct megadrive *md, unsigned reg, uint8_t value)
{
    unsigned port = reg / 3;
    switch (reg % 3) {
    case 0: md->serial_tx[port] = value; break;
    case 2: md->serial_control[port] = value & 0xf8; break;
    }
}

static uint16_t read_vdp_data(struct megadrive *md)
{
    unsigned address = md->vdp_address & 0xfffe;
    unsigned word = (address >> 1) & 63;
    md->vdp_command_pending = false;
    md->vdp_address += md->vdp_registers[15];
    switch (md->vdp_code & 15) {
    case 0: return (uint16_t)md->vram[address] << 8 | md->vram[address + 1];
    case 4: return word < 40 ? md->vsram[word] : md->vsram[0];
    case 8: return md->cram[word];
    default: return 0;
    }
}

static uint16_t read_vdp_counters(const struct megadrive *md)
{
    unsigned master_clocks = md->frame_cycle * 7;
    unsigned vertical = master_clocks / 3420;
    unsigned horizontal_clocks = master_clocks % 3420;
    bool wide = (md->vdp_registers[12] & 1) != 0;
    unsigned horizontal = horizontal_clocks * (wide ? 211 : 171) / 3420;
    if (horizontal >= (wide ? 0xb7U : 0x94U))
        horizontal += wide ? 0xe4 - 0xb7 : 0xe9 - 0x94;

    bool pal = (md->version & 0x40) != 0;
    bool tall = (md->vdp_registers[1] & 8) != 0;
    unsigned overflow = tall ? (pal ? 0x10a : 0x106) : (pal ? 0x102 : 0xea);
    if (vertical > overflow)
        vertical -= pal ? 313 : 262;

    unsigned interlace = md->vdp_registers[12] & 6;
    if (interlace & 2) {
        if (interlace == 6)
            vertical *= 2;
        vertical = (vertical & ~1U) | ((vertical >> 8) & 1);
    }
    return (vertical << 8) | horizontal;
}

uint8_t megadrive_read_byte(struct megadrive *md, uint32_t address)
{
    address &= 0xffffff;
    if (megadrive_sram_visible(md, address))
        return md->sram[address - md->sram_start];
    if (address < md->rom_size)
        return md->rom[address];
    if (address >= 0xe00000)
        return md->ram[address & 0xffff];
    if (address >= 0xa00000 && address < 0xa04000 && md->z80_bus_requested)
        return md->z80_ram[address & 0x1fff];
    if (address >= 0xa04000 && address < 0xa06000 && md->z80_bus_requested) {
        genesis_z80_sync(md, md->frame_cycle);
        return megadrive_ym_status(md);
    }
    if (address >= 0xa10002 && address <= 0xa10007)
        return read_port(md, (address - 0xa10002) >> 1);
    if (address >= 0xc00000 && address <= 0xc0000f) {
        unsigned status = megadrive_read_word(md, address & ~1U);
        return address & 1 ? status : status >> 8;
    }
    if (address >= 0xa1000e && address <= 0xa1001f)
        return read_serial(md, (address - 0xa1000e) >> 1);
    // The recovered I/O handler decodes the byte pair by masking bit zero.
    switch (address & 0xfffffe) {
    case 0xa10000:
        return md->version;
    case 0xa10008:
    case 0xa1000a:
    case 0xa1000c:
        return md->port_direction[(address - 0xa10008) >> 1];
    case 0xa11100:
        return md->z80_bus_requested ? 0 : 1;
    }
    return 0xff;
}

uint16_t megadrive_read_word(struct megadrive *md, uint32_t address)
{
    address &= 0xffffff;
    if (address < md->rom_size && md->rom_size - address >= 2 &&
        !megadrive_sram_visible(md, address))
        return (uint16_t)md->rom[address] << 8 | md->rom[address + 1];
    if (address >= 0xe00000)
        return (uint16_t)md->ram[address & 0xffff] << 8 | md->ram[(address + 1) & 0xffff];
    if (address == 0xc00000 || address == 0xc00002)
        return read_vdp_data(md);
    if (address >= 0xc00008 && address <= 0xc0000e)
        return read_vdp_counters(md);
    if (address == 0xc00004 || address == 0xc00006) {
        md->vdp_command_pending = false;
        unsigned clocks = (md->frame_cycle * 7) % 3420;
        bool wide = (md->vdp_registers[12] & 1) != 0;
        bool hblank = wide ? clocks >= 228 && clocks < 872 : clocks >= 280 && clocks < 860;
        // Synchronous transfers leave the FIFO empty and DMA idle.
        bool odd_field = (md->vdp_registers[12] & 2) && md->vdp_odd_field;
        return 0x0200 | (odd_field ? 0x10 : 0) | (md->vblank ? 8 : 0) |
               (hblank ? 4 : 0) | ((md->version & 0x40) ? 1 : 0);
    }
    if (address == 0xa11100)
        return (uint16_t)megadrive_read_byte(md, address) << 8;
    return (uint16_t)megadrive_read_byte(md, address) << 8 |
           megadrive_read_byte(md, address + 1);
}

static bool vdp_write_data(struct megadrive *md, uint16_t value);
static bool vdp_write_control(struct megadrive *md, uint16_t value);

bool megadrive_write_byte(struct megadrive *md, uint32_t address, uint8_t value)
{
    address &= 0xffffff;
    if (address >= 0xe00000) {
        md->ram[address & 0xffff] = value;
        return true;
    }
    if (megadrive_sram_visible(md, address)) {
        uint8_t *byte = &md->sram[address - md->sram_start];
        if (!(md->sram_control & 2) && *byte != value) {
            *byte = value;
            md->sram_dirty = true;
        }
        return true;
    }
    if (address == 0xa130f1) {
        if (md->sram_size)
            md->sram_control = value & 3;
        return true;
    }
    if (address >= 0xa00000 && address < 0xa04000 && md->z80_bus_requested) {
        md->z80_ram[address & 0x1fff] = value;
        return true;
    }
    if (address >= 0xa04000 && address < 0xa06000 && md->z80_bus_requested) {
        genesis_z80_sync(md, md->frame_cycle);
        megadrive_ym_write(md, address & 3, value);
        return true;
    }
    if (address >= 0xa06000 && address < 0xa06100 && md->z80_bus_requested) {
        md->z80_bank = md->z80_bank >> 1 | (value & 1) << 8;
        return true;
    }
    if (address >= 0xa10002 && address <= 0xa10007) {
        md->port_data[(address - 0xa10002) >> 1] = value;
        return true;
    }
    if (address >= 0xa10008 && address <= 0xa1000d) {
        md->port_direction[(address - 0xa10008) >> 1] = value;
        return true;
    }
    if (address >= 0xa1000e && address <= 0xa1001f) {
        write_serial(md, (address - 0xa1000e) >> 1, value);
        return true;
    }
    if (address == 0xa11100 || address == 0xa11200) {
        genesis_z80_sync(md, md->frame_cycle);
        if (address == 0xa11100)
            md->z80_bus_requested = (value & 1) != 0;
        else {
            if (!md->z80_reset && !(value & 1))
                genesis_z80_reset(md);
            md->z80_reset = (value & 1) == 0;
        }
        return true;
    }
    if (address >= 0xc00000 && address <= 0xc00007) {
        uint16_t word = (uint16_t)value * 0x101;
        return (address & 4) ? vdp_write_control(md, word) : vdp_write_data(md, word);
    }
    if (address >= 0xc00011 && address <= 0xc00017 && (address & 1)) {
        if (value & 0x80)
            md->psg_latch = (value >> 4) & 7;
        uint16_t *reg = &md->psg_registers[md->psg_latch];
        if (value & 0x80)
            *reg = (*reg & 0x3f0) | (value & 15);
        else if (md->psg_latch < 6 && !(md->psg_latch & 1))
            *reg = (*reg & 15) | ((value & 0x3f) << 4);
        else
            *reg = value & 15;
        return true;
    }
    // The reference emulator does not gate VDP access on the TMSS handshake.
    return address >= 0xa14000 && address <= 0xa14003;
}

static void store_vram_byte(struct megadrive *md, uint16_t address, uint8_t value)
{
    if (md->vram[address] != value) {
        md->vram[address] = value;
        md->vram_revisions[address >> 5] = ++md->video_revision;
    }
}

static void vdp_store(struct megadrive *md, uint16_t value)
{
    uint16_t address = md->vdp_address;
    unsigned word = (address >> 1) & 0x3f;
    switch (md->vdp_code & 0xf) {
    case 1:
        store_vram_byte(md, address, value >> 8);
        store_vram_byte(md, address ^ 1, value);
        break;
    case 3:
        md->cram[word] = value & 0x0eee;
        break;
    case 5:
        value &= 0x07ff;
        if (word < 40 && md->vsram[word] != value) {
            if (word < 2 && md->vdp_capture_raster && !(md->vdp_registers[11] & 4))
                capture_raster_through(md, md->frame_cycle * 7 / 3420 + 1);
            md->vsram[word] = value;
            ++md->video_revision;
        }
        break;
    default:
        break;
    }
    md->vdp_address += md->vdp_registers[15];
}

static unsigned dma_length(const struct megadrive *md)
{
    unsigned length = md->vdp_registers[19] | (md->vdp_registers[20] << 8);
    return length ? length : 0x10000;
}

static void dma_complete(struct megadrive *md)
{
    md->vdp_registers[19] = md->vdp_registers[20] = 0;
}

static bool vdp_dma(struct megadrive *md)
{
    unsigned mode = md->vdp_registers[23] >> 6;
    if (mode == 2) {
        if ((md->vdp_code & 15) != 1)
            return false;
        md->vdp_fill_pending = true;
        return true;
    }
    unsigned length = dma_length(md);
    unsigned offset = md->vdp_registers[21] | (md->vdp_registers[22] << 8);
    if (mode == 3) {
        if (!(md->vdp_code & 0x10))
            return false;
        for (unsigned i = 0; i < length; ++i) {
            store_vram_byte(md, md->vdp_address ^ 1, md->vram[(uint16_t)offset ^ 1]);
            md->vdp_address += md->vdp_registers[15];
            ++offset;
        }
    } else {
        const uint32_t bank = (md->vdp_registers[23] & 0x7f) << 17;
        for (unsigned i = 0; i < length; ++i) {
            uint16_t value = megadrive_read_word(md, bank | ((uint16_t)offset << 1));
            vdp_store(md, value);
            ++offset;
        }
    }
    md->vdp_registers[21] = offset;
    md->vdp_registers[22] = offset >> 8;
    dma_complete(md);
    return true;
}

static bool vdp_write_data(struct megadrive *md, uint16_t value)
{
    md->vdp_command_pending = false;
    if (md->vdp_fill_pending) {
        md->vdp_fill_pending = false;
        // The initial word precedes the repeated high-byte writes.
        vdp_store(md, value);
        unsigned length = dma_length(md);
        for (unsigned i = 0; i < length; ++i) {
            store_vram_byte(md, md->vdp_address ^ 1, value >> 8);
            md->vdp_address += md->vdp_registers[15];
        }
        dma_complete(md);
        return true;
    }
    vdp_store(md, value);
    return true;
}

static bool vdp_write_control(struct megadrive *md, uint16_t value)
{
    if (!md->vdp_command_pending) {
        if ((value & 0xc000) == 0x8000) {
            unsigned reg = (value >> 8) & 0x1f;
            if (reg >= sizeof(md->vdp_registers))
                return false;
            uint8_t changed = md->vdp_registers[reg] ^ (uint8_t)value;
            if (changed) {
                if (md->vdp_capture_raster &&
                    ((reg == 1 && (changed & 0x40)) || reg == 2 || reg == 5)) {
                    md->vdp_raster_layout = true;
                    capture_raster_through(md, md->frame_cycle * 7 / 3420 + 1);
                }
                md->vdp_registers[reg] = (uint8_t)value;
                if (reg <= 18)
                    ++md->video_revision;
            }
            md->vdp_code = 0;
        } else {
            md->vdp_address = (md->vdp_address & 0xc000) | (value & 0x3fff);
            md->vdp_code = (md->vdp_code & 0x3c) | (value >> 14);
            md->vdp_command_pending = true;
        }
    } else {
        md->vdp_address = (md->vdp_address & 0x3fff) | ((value & 3) << 14);
        md->vdp_code = (md->vdp_code & 3) | ((value >> 2) & 0x3c);
        md->vdp_command_pending = false;
        if ((md->vdp_code & 0x20) && (md->vdp_registers[1] & 0x10))
            return vdp_dma(md);
    }
    return true;
}

bool megadrive_write_word(struct megadrive *md, uint32_t address, uint16_t value)
{
    address &= 0xffffff;
    if (address >= 0xe00000) {
        md->ram[address & 0xffff] = value >> 8;
        md->ram[(address + 1) & 0xffff] = value;
        return true;
    }
    switch (address) {
    case 0xc00000:
    case 0xc00002:
        return vdp_write_data(md, value);
    case 0xc00004:
    case 0xc00006:
        return vdp_write_control(md, value);
    case 0xa130f0:
        return megadrive_write_byte(md, address + 1, value);
    case 0xa11100:
    case 0xa11200:
        return megadrive_write_byte(md, address, value >> 8);
    default:
        return megadrive_write_byte(md, address, value >> 8) &&
               megadrive_write_byte(md, address + 1, value);
    }
}
