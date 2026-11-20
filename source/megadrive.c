#include "megadrive.h"
#include "cartridge.h"

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

void megadrive_run_frame(struct megadrive *md)
{
    unsigned cycles = md->cycle_carry;
    while (cycles < md->frame_cycles && !md->cpu.stopped)
        cycles += m68k_step(&md->cpu, md);
    md->cycle_carry = cycles >= md->frame_cycles ? cycles - md->frame_cycles : 0;
}

uint16_t megadrive_backdrop(const struct megadrive *md)
{
    const uint16_t color = md->cram[md->vdp_registers[7] & 0x3f];
    // Expand the VDP's three-bit channels to the original DS palette levels.
    return ((color & 0x00e) << 1) | ((color & 0x0e0) << 2) | ((color & 0xe00) << 3);
}

uint8_t megadrive_read_byte(const struct megadrive *md, uint32_t address)
{
    address &= 0xffffff;
    if (address < md->rom_size)
        return md->rom[address];
    if (address >= 0xe00000)
        return md->ram[address & 0xffff];
    // The recovered I/O handler decodes the byte pair by masking bit zero.
    switch (address & 0xfffffe) {
    case 0xa10000:
        return md->version;
    case 0xa10008:
    case 0xa1000a:
    case 0xa1000c:
        return 0;  // Controller direction registers at reset.
    }
    return 0xff;
}

bool megadrive_write_byte(struct megadrive *md, uint32_t address, uint8_t value)
{
    address &= 0xffffff;
    if (address >= 0xe00000) {
        md->ram[address & 0xffff] = value;
        return true;
    }
    // The reference emulator does not gate VDP access on the TMSS handshake.
    return address >= 0xa14000 && address <= 0xa14003;
}

static bool vdp_write_control(struct megadrive *md, uint16_t value)
{
    if (!md->vdp_command_pending) {
        if ((value & 0xc000) == 0x8000) {
            unsigned reg = (value >> 8) & 0x1f;
            if (reg >= sizeof(md->vdp_registers))
                return false;
            md->vdp_registers[reg] = (uint8_t)value;
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
        if (md->vdp_code & 0x20)
            return false;
    }
    return true;
}

bool megadrive_write_word(struct megadrive *md, uint32_t address, uint16_t value)
{
    address &= 0xffffff;
    switch (address) {
    case 0xc00000:
    case 0xc00002:
        md->vdp_command_pending = false;
        if (md->vdp_code != 3)
            return false;
        md->cram[(md->vdp_address >> 1) & 0x3f] = value & 0x0eee;
        md->vdp_address += md->vdp_registers[15];
        return true;
    case 0xc00004:
    case 0xc00006:
        return vdp_write_control(md, value);
    default:
        return megadrive_write_byte(md, address, value >> 8) &&
               megadrive_write_byte(md, address + 1, value);
    }
}
