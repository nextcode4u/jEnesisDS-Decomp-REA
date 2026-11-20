#include "cartridge.h"
#include "megadrive.h"

#include <assert.h>

static uint8_t rom[0x250] = {
    0x00, 0xff, 0xfe, 0x00,  // Initial supervisor stack at $fffe00.
    0x00, 0x00, 0x02, 0x00,  // Reset PC at $200.
    [0x200] =
    0x46, 0xfc, 0x27, 0x00,                    // move.w #$2700,sr
    0x41, 0xf9, 0x00, 0xc0, 0x00, 0x04,        // lea $c00004,a0
    0x43, 0xf9, 0x00, 0xc0, 0x00, 0x00,        // lea $c00000,a1
    0x30, 0xbc, 0x87, 0x01,                    // move.w #$8701,(a0)
    0x30, 0xbc, 0x8f, 0x02,                    // move.w #$8f02,(a0)
    0x20, 0xbc, 0xc0, 0x02, 0x00, 0x00,        // move.l #$c0020000,(a0)
    0x70, 0xff,                                // moveq #-1,d0
    0x30, 0x3c, 0x00, 0x0e,                    // move.w #$e,d0
    0x32, 0x80,                                // move.w d0,(a1)
    0x0a, 0x40, 0x0e, 0xee,                    // eori.w #$eee,d0
    0x60, 0xf8,                                // bra.s to the CRAM write
    [0x230] =
    0x4a, 0xb9, 0x00, 0xa1, 0x00, 0x08,        // tst.l $a10008
    0x67, 0x02,                                // beq.s to the LEA
    0xff, 0xff,                                // Unsupported opcode
    0x4b, 0xfa, 0x00, 0x02,                    // lea $23e(pc),a5
    0x4c, 0x9d, 0x20, 0x81,                    // movem.w (a5)+,d0/d7/a5
    0xff, 0xff,                                // Unsupported opcode
};

int main(void)
{
    static struct megadrive md;
    const struct cartridge cartridge = {.data = rom, .size = sizeof(rom), .region = "JUE"};
    megadrive_reset(&md, &cartridge);
    assert(md.cpu.pc == 0x200 && md.cpu.a[7] == 0xfffe00);
    assert(megadrive_read_byte(&md, 0xa10001) == 0xa1);

    for (unsigned i = 0; i < 9; ++i)
        assert(m68k_step(&md.cpu, &md) != 0);
    assert(md.cpu.d[0] == 0xffff000e);
    assert(md.cram[1] == 0x000e && md.vdp_address == 4);
    assert(megadrive_backdrop(&md) == 0x001c);
    assert(m68k_step(&md.cpu, &md) == 8);
    assert(md.cpu.d[0] == 0xffff0ee0);
    assert(m68k_step(&md.cpu, &md) == 10 && md.cpu.pc == 0x224);
    assert(m68k_step(&md.cpu, &md) == 8 && md.cram[2] == 0x0ee0);

    assert(megadrive_write_word(&md, 0xc00004, 0x8702));
    assert(megadrive_backdrop(&md) == 0x7380);
    assert(megadrive_write_word(&md, 0xff1234, 0xabcd));
    assert(megadrive_read_byte(&md, 0xe01234) == 0xab);
    assert(megadrive_read_byte(&md, 0xe01235) == 0xcd);

    md.cpu.pc = 0x230;
    assert(m68k_step(&md.cpu, &md) == 20 && (md.cpu.sr & 4));
    assert(m68k_step(&md.cpu, &md) == 10 && md.cpu.pc == 0x23a);
    assert(m68k_step(&md.cpu, &md) == 8 && md.cpu.a[5] == 0x23e);
    assert(m68k_step(&md.cpu, &md) == 24);
    assert(md.cpu.a[5] == 0x244 && md.cpu.d[0] == 0x4c9d && md.cpu.d[7] == 0x2081);
    assert(m68k_step(&md.cpu, &md) == 0 && md.cpu.stopped);
    assert(md.cpu.instruction_address == 0x242);
}
