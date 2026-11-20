#include "megadrive.h"
#include "cartridge.h"
#include "vdp_render.h"

#include <string.h>

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

void megadrive_reset(struct megadrive *md, const struct cartridge *cart, enum genesis_region region)
{
    memset(md, 0, sizeof(*md));
    md->rom = cart->data;
    md->rom_size = cart->size;
    md->z80_reset = true;
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

static unsigned run_cpu_until(struct megadrive *md, unsigned cycles, unsigned end)
{
    while (cycles < end && !md->cpu.stopped) {
        if ((md->vdp_registers[0] & 0x10) && md->hint_pending && (md->cpu.sr & 0x0700) < 0x0400) {
            unsigned elapsed = m68k_interrupt(&md->cpu, md, 4);
            if (elapsed) {
                md->hint_pending = false;
                md->ym_busy_cycles = md->ym_busy_cycles > elapsed ? md->ym_busy_cycles - elapsed : 0;
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
        md->ym_busy_cycles = md->ym_busy_cycles > elapsed ? md->ym_busy_cycles - elapsed : 0;
        cycles += elapsed;
    }
    return cycles;
}

void megadrive_run_frame(struct megadrive *md)
{
    unsigned cycles = md->cycle_carry;
    unsigned active_lines = (md->vdp_registers[1] & 8) ? 240 : 224;
    md->vblank = false;
    // Run to each counter expiration. Reload from R10 at the start of
    // active display and when it expires, so writes take effect on reload.
    unsigned hint_line = md->vdp_registers[10];
    while (hint_line <= active_lines && !md->cpu.stopped) {
        cycles = run_cpu_until(md, cycles, 3420 * hint_line / 7);
        md->hint_pending = true;
        hint_line += md->vdp_registers[10] + 1;
    }
    cycles = run_cpu_until(md, cycles, 3420 * active_lines / 7);
    md->vblank = true;
    if (!md->cpu.stopped && (md->vdp_registers[1] & 0x20))
        cycles += m68k_interrupt(&md->cpu, md, 6);
    cycles = run_cpu_until(md, cycles, md->frame_cycles);
    md->cycle_carry = cycles >= md->frame_cycles ? cycles - md->frame_cycles : 0;
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

uint8_t megadrive_read_byte(const struct megadrive *md, uint32_t address)
{
    address &= 0xffffff;
    if (address < md->rom_size)
        return md->rom[address];
    if (address >= 0xe00000)
        return md->ram[address & 0xffff];
    if (address >= 0xa00000 && address < 0xa04000 && md->z80_bus_requested)
        return md->z80_ram[address & 0x1fff];
    if (address >= 0xa04000 && address <= 0xa04003 && md->z80_bus_requested)
        return md->ym_busy_cycles ? 0x80 : 0;
    if (address >= 0xa10002 && address <= 0xa10007)
        return read_port(md, (address - 0xa10002) >> 1);
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
    if (address < md->rom_size && md->rom_size - address >= 2)
        return (uint16_t)md->rom[address] << 8 | md->rom[address + 1];
    if (address >= 0xe00000)
        return (uint16_t)md->ram[address & 0xffff] << 8 | md->ram[(address + 1) & 0xffff];
    if (address == 0xc00004 || address == 0xc00006) {
        md->vdp_command_pending = false;
        unsigned clocks = (md->frame_cycle * 7) % 3420;
        bool wide = (md->vdp_registers[12] & 1) != 0;
        bool hblank = wide ? clocks >= 228 && clocks < 872 : clocks >= 280 && clocks < 860;
        // Synchronous transfers leave the FIFO empty and DMA idle.
        return 0x0200 | (md->vblank ? 8 : 0) | (hblank ? 4 : 0) | ((md->version & 0x40) ? 1 : 0);
    }
    if (address == 0xa11100)
        return (uint16_t)megadrive_read_byte(md, address) << 8;
    return (uint16_t)megadrive_read_byte(md, address) << 8 |
           megadrive_read_byte(md, address + 1);
}

bool megadrive_write_byte(struct megadrive *md, uint32_t address, uint8_t value)
{
    address &= 0xffffff;
    if (address >= 0xe00000) {
        md->ram[address & 0xffff] = value;
        return true;
    }
    if (address >= 0xa00000 && address < 0xa04000 && md->z80_bus_requested) {
        md->z80_ram[address & 0x1fff] = value;
        return true;
    }
    if (address >= 0xa04000 && address <= 0xa04003 && md->z80_bus_requested) {
        unsigned bank = (address >> 1) & 1;
        if (address & 1) {
            md->ym_registers[bank][md->ym_address[bank]] = value;
            md->ym_busy_cycles = 32;
        } else {
            md->ym_address[bank] = value;
        }
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
    if (address == 0xa11100 || address == 0xa11200) {
        if (address == 0xa11100)
            md->z80_bus_requested = (value & 1) != 0;
        else
            md->z80_reset = (value & 1) == 0;
        return true;
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

static bool vdp_store(struct megadrive *md, uint16_t value)
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
            md->vsram[word] = value;
            ++md->video_revision;
        }
        break;
    default:
        return false;
    }
    md->vdp_address += md->vdp_registers[15];
    return true;
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
            if (!vdp_store(md, value))
                return false;
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
        if (!vdp_store(md, value))
            return false;
        unsigned length = dma_length(md);
        for (unsigned i = 0; i < length; ++i) {
            store_vram_byte(md, md->vdp_address ^ 1, value >> 8);
            md->vdp_address += md->vdp_registers[15];
        }
        dma_complete(md);
        return true;
    }
    return vdp_store(md, value);
}

static bool vdp_write_control(struct megadrive *md, uint16_t value)
{
    if (!md->vdp_command_pending) {
        if ((value & 0xc000) == 0x8000) {
            unsigned reg = (value >> 8) & 0x1f;
            if (reg >= sizeof(md->vdp_registers))
                return false;
            if (md->vdp_registers[reg] != (uint8_t)value) {
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
    case 0xa11100:
    case 0xa11200:
        return megadrive_write_byte(md, address, value >> 8);
    default:
        return megadrive_write_byte(md, address, value >> 8) &&
               megadrive_write_byte(md, address + 1, value);
    }
}
