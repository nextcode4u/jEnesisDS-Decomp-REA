#include "cartridge.h"
#include "megadrive.h"
#include "psg.h"
#include "savestate.h"
#include "vdp_render.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

static uint8_t rom[0x26a] = {
    0x00, 0xff, 0xfe, 0x00,  // Initial supervisor stack at $fffe00.
    0x00, 0x00, 0x02, 0x00,  // Reset PC at $200.
    [0x78] = 0x00, 0x00, 0x02, 0x48,            // Level 6 autovector.
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
    [0x248] =
    0x72, 0x07,                                // moveq #7,d1
    0x4e, 0x73,                                // rte
    0xc3, 0xfc, 0xff, 0xfd,                    // muls #-3,d1
    0x83, 0xfc, 0x00, 0x04,                    // divs #4,d1
    0x51, 0xc8, 0xff, 0xfe,                    // dbra d0, self
    0x4e, 0x71,                                // nop
    0x51, 0xc8, 0xff, 0xfc,                    // dbra d0, previous nop
    0x4a, 0x38, 0xf6, 0x20,                    // tst.b $f620.w
    0x66, 0xfa,                                // bne.s to the TST
    0xc1, 0x41,                                // exg d0,d1
    0xe0, 0xe8, 0x00, 0x10,                    // asr.w $10(a0)
};

static void vdp_register(struct megadrive *md, unsigned reg, unsigned value)
{
    assert(megadrive_write_word(md, 0xc00004, 0x8000 | (reg << 8) | value));
}

static void test_startup_bus(struct megadrive *md)
{
    assert(!megadrive_write_byte(md, 0xa00000, 0x55));
    assert(megadrive_write_word(md, 0xa11100, 0x0100));
    assert(megadrive_read_word(md, 0xa11100) == 0);
    assert(megadrive_write_byte(md, 0xa00000, 0x55));
    assert(megadrive_read_byte(md, 0xa02000) == 0x55);
    assert(megadrive_write_word(md, 0xa11200, 0x0100) && !md->z80_reset);
    assert(megadrive_write_word(md, 0xa11100, 0) && !md->z80_bus_requested);

    md->pad1_pressed = GENESIS_A | GENESIS_LEFT;
    assert(megadrive_write_byte(md, 0xa10009, 0x40));
    assert(megadrive_write_byte(md, 0xa10003, 0x40));
    assert(megadrive_read_byte(md, 0xa10003) == 0x7b);
    assert(megadrive_write_byte(md, 0xa10003, 0));
    assert(megadrive_read_byte(md, 0xa10003) == 0x23);
}

static void test_vdp_dma(struct megadrive *md)
{
    vdp_register(md, 1, 0x14);
    vdp_register(md, 15, 2);
    vdp_register(md, 19, 2);
    assert(megadrive_write_word(md, 0xc00004, 0x4100));
    assert(megadrive_write_word(md, 0xc00004, 0x0080));
    assert(md->vram[0x100] == 0 && md->vram[0x101] == 0xff);
    assert(md->vram[0x102] == 0xfe && md->vram[0x103] == 0);
    assert(md->vdp_address == 0x104 && md->vdp_registers[19] == 0);
    uint32_t written_revision = md->vram_revisions[0x100 / 32];
    assert(written_revision != 0 && md->vram_revisions[0x120 / 32] == 0);

    vdp_register(md, 15, 1);
    vdp_register(md, 19, 3);
    vdp_register(md, 23, 0x80);
    assert(megadrive_write_word(md, 0xc00004, 0x4100));
    assert(megadrive_write_word(md, 0xc00004, 0x0080));
    assert(md->vdp_fill_pending);
    assert(megadrive_write_word(md, 0xc00000, 0));
    for (unsigned i = 0; i < 5; ++i)
        assert(md->vram[0x100 + i] == 0);
    assert(md->vram_revisions[0x100 / 32] > written_revision);
    assert(!md->vdp_fill_pending && md->vdp_address == 0x104);
}

static void set_vram_word(struct megadrive *md, unsigned address, uint16_t word)
{
    md->vram[address] = word >> 8;
    md->vram[address + 1] = word;
}

static void test_vdp_render(struct megadrive *md)
{
    static uint16_t bitmap[VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2];
    vdp_register(md, 1, 0x44);
    vdp_register(md, 2, 0x30);
    vdp_register(md, 4, 7);
    vdp_register(md, 5, 0x78);
    vdp_register(md, 13, 0x3f);
    vdp_register(md, 16, 0);
    memset(md->vram, 0, sizeof(md->vram));
    memset(&md->vram[32], 0x11, 32);
    memset(&md->vram[64], 0x22, 32);
    memset(&md->vram[96], 0x33, 32);
    set_vram_word(md, 0xc080, 0x2001);
    set_vram_word(md, 0xe080, 0x8002);
    // First sprite: 8x8, low priority, starting at viewport x=0 and y=0.
    set_vram_word(md, 0xf000, 16 + 128);
    set_vram_word(md, 0xf004, 3);
    set_vram_word(md, 0xf006, 128);
    vdp_render_frame(md, bitmap);
    assert(bitmap[0] == 0x0202 && bitmap[4] == 0);
    set_vram_word(md, 0xe080, 0x0002);
    vdp_render_frame(md, bitmap);
    assert(bitmap[0] == 0x0303);
    set_vram_word(md, 0xc080, 0xa001);
    vdp_render_frame(md, bitmap);
    assert(bitmap[0] == 0x1111);
    vdp_register(md, 1, 4);
    vdp_render_frame(md, bitmap);
    assert(bitmap[0] == 0);
}

static void test_idle_loops(struct megadrive *md)
{
    struct m68k *cpu = &md->cpu;
    cpu->pc = 0x254;
    cpu->d[0] = 0x56780004;
    assert(m68k_step(cpu, md) == 10);
    assert(m68k_skip_idle(cpu, md, 29) == 20 && cpu->d[0] == 0x56780001);
    assert(m68k_step(cpu, md) == 10);
    assert(m68k_skip_idle(cpu, md, 40) == 0);
    assert(m68k_step(cpu, md) == 14 && cpu->pc == 0x258);

    cpu->d[0] = 4;
    assert(m68k_step(cpu, md) == 4 && m68k_step(cpu, md) == 10);
    assert(m68k_skip_idle(cpu, md, 29) == 28 && cpu->d[0] == 1);
    assert(cpu->pc == 0x258);

    cpu->pc = 0x25e;
    md->ram[0xf620] = 1;
    assert(m68k_step(cpu, md) == 12 && m68k_step(cpu, md) == 10);
    assert(m68k_skip_idle(cpu, md, 50) == 44 && cpu->pc == 0x25e);
    md->ram[0xf620] = 0;
    assert(m68k_skip_idle(cpu, md, 50) == 0);
}

static void test_savestate(struct megadrive *md)
{
    const char *path = "build/c/boot-test.jsc";
    remove(path);
    uint32_t identity = savestate_identity(md);
    const uint32_t pc = md->cpu.pc;
    md->ram[75] = 0x81;
    md->vram[5] = 0x93;
    assert(savestate_save(path, identity, md));
    assert(savestate_exists(path));
    md->ram[75] = md->vram[5] = 0;
    md->cpu.pc = 0;
    assert(!savestate_load(path, identity ^ 1, md));
    assert(md->cpu.pc == 0 && md->ram[75] == 0);
    assert(savestate_load(path, identity, md));
    assert(md->cpu.pc == pc && md->ram[75] == 0x81 && md->vram[5] == 0x93);
    FILE *file = fopen(path, "ab");
    assert(file && fputc(0xff, file) != EOF && fclose(file) == 0);
    assert(!savestate_load(path, identity, md));
    assert(md->cpu.pc == pc && md->ram[75] == 0x81);
    assert(remove(path) == 0);
}

static void test_psg(void)
{
    struct psg chip;
    int16_t samples[512];
    psg_reset(&chip, false);
    psg_render(&chip, samples, 512);
    for (unsigned i = 0; i < 512; ++i)
        assert(samples[i] == 0);
    const uint16_t tone[8] = {0x122, 0, 0, 15, 0, 15, 0, 15};
    psg_update(&chip, tone);
    psg_render(&chip, samples, 512);
    unsigned transitions = 0;
    for (unsigned i = 1; i < 512; ++i) {
        assert((samples[i] == 3276 || samples[i] == -3276));
        transitions += samples[i] != samples[i - 1];
    }
    assert(transitions >= 13 && transitions <= 15);
}

int main(void)
{
    static struct megadrive md;
    const struct cartridge cartridge = {.data = rom, .size = sizeof(rom), .region = "JUE"};
    megadrive_reset(&md, &cartridge, GENESIS_REGION_AUTO);
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

    megadrive_reset(&md, &cartridge, GENESIS_REGION_EUROPE);
    assert(megadrive_read_byte(&md, 0xa10001) == 0xe1);
    assert(md.frame_cycles > 150000 && !md.cpu.stopped);
    test_startup_bus(&md);
    test_vdp_dma(&md);
    test_vdp_render(&md);

    assert(m68k_interrupt(&md.cpu, &md, 6) == 0);  // Reset masks level 6.
    md.cpu.sr = 0x2304;
    assert(m68k_interrupt(&md.cpu, &md, 6) == 44);
    assert(md.cpu.sr == 0x2604 && md.cpu.pc == 0x248 && md.cpu.a[7] == 0xfffdfa);
    assert(m68k_step(&md.cpu, &md) == 4 && md.cpu.d[1] == 7);
    assert(m68k_step(&md.cpu, &md) == 20);
    assert(md.cpu.sr == 0x2304 && md.cpu.pc == 0x200 && md.cpu.a[7] == 0xfffe00);
    md.cpu.pc = 0x24c;
    assert(m68k_step(&md.cpu, &md) != 0 && md.cpu.d[1] == 0xffffffeb);
    assert(m68k_step(&md.cpu, &md) != 0 && md.cpu.d[1] == 0xfffffffb);
    test_idle_loops(&md);
    md.cpu.pc = 0x264;
    md.cpu.d[0] = 0x12345678;
    md.cpu.d[1] = 0x89abcdef;
    assert(m68k_step(&md.cpu, &md) == 6);
    assert(md.cpu.d[0] == 0x89abcdef && md.cpu.d[1] == 0x12345678);
    md.cpu.a[0] = 0xff0000;
    assert(megadrive_write_word(&md, 0xff0010, 0x8001));
    assert(m68k_step(&md.cpu, &md) == 16);
    assert(megadrive_read_word(&md, 0xff0010) == 0xc000 && (md.cpu.sr & 31) == 25);
    test_savestate(&md);
    test_psg();
}
