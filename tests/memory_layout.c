#include "cartridge.h"
#include "megadrive.h"
#include "savestate.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

#ifndef TEST_OUTPUT_DIR
#define TEST_OUTPUT_DIR "build/c"
#endif

static void copy_words_to_vram(struct megadrive *md, unsigned source, unsigned target)
{
    md->vdp_registers[1] = 0x14;
    md->vdp_registers[15] = 2;
    md->vdp_registers[19] = 2;
    md->vdp_registers[21] = source >> 1;
    md->vdp_registers[22] = source >> 9;
    md->vdp_registers[23] = source >> 17;
    assert(megadrive_write_word(md, 0xc00004, 0x4000 | (target & 0x3fff)));
    assert(megadrive_write_word(md, 0xc00004, 0x0080 | (target >> 14)));
}

int main(int argc, char **argv)
{
    static const uint8_t rom[] = {
        [0] = 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x02, 0x00,
        [0x100] = 'S', 'E', 'G', 'A',
        [0x1b8] = 0x20, 0xdc, 0x20, 0xd8,             // MOVE.L (A4)+,(A0)+ and (A0)+,(A0)+
        [0x1c0] = 0x04, 0x02, 0x00, 0x40,             // SUBI.B #$40,D2
        [0x1d0] = 0xc1, 0x09, 0xc1, 0x09,             // ABCD -(A1),-(A0), twice
        [0x1d4] = 0xcf, 0x0f, 0xc1, 0x01,             // ABCD -(A7),-(A7) and ABCD D1,D0
        [0x1e0] = 0x3e, 0x2d, 0xff, 0xfe,             // MOVE.W -2(A5),D7
        [0x1e4] = 0x52, 0x47,                         // ADDQ.W #1,D7
        [0x1e6] = 0x6e, 0x00, 0x00, 0x06,             // BGT.W to $1ee
        [0x1f8] = 0xde, 0x5d, 0x90, 0x5f,             // ADD.W (A5)+,D7 and SUB.W (A7)+,D0
        [0x1fc] = 0x4e, 0x75,                         // RTS
        [0x200] = 0x20, 0x3c, 0x12, 0x34, 0x56, 0x78, // MOVE.L #$12345678,D0
        [0x206] = 0x60, 0xfe,                         // BRA.S to itself
        [0x208] = 0xab,                               // Final unpaired byte
    };
    assert(argc == 2);
    const char *path = TEST_OUTPUT_DIR "/memory-layout-test.bin";
    FILE *file = fopen(path, "wb");
    assert(file && fwrite(rom, 1, sizeof(rom), file) == sizeof(rom));
    assert(fclose(file) == 0);
    struct cartridge cart = {0};
    assert(cartridge_load(&cart, path) == NULL);
    assert(remove(path) == 0 && cart.size == sizeof(rom));
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    megadrive_reset(&md, &cart, GENESIS_REGION_AUTO);

    for (unsigned i = 0; i < sizeof(rom); ++i)
        assert(megadrive_read_byte(&md, i) == rom[i]);
    assert(megadrive_read_word(&md, 0x201) == 0x3c12);
    assert(md.sound_cpu.read_byte(&md, 0x8208) == 0xab);
    assert(m68k_step(&md.cpu, &md) == 12 && md.cpu.d[0] == 0x12345678);

    assert(megadrive_write_word(&md, 0xff0000, 0x0012));
    assert(megadrive_write_byte(&md, 0xe00002, 0x34));
    assert(megadrive_read_word(&md, 0xff0001) == 0x1234);
    assert(megadrive_write_byte(&md, 0xffffff, 0x56));
    assert(megadrive_read_word(&md, 0xffffff) == 0x5600);

    assert(megadrive_write_word(&md, 0xfffffc, 0xfedc));
    assert(megadrive_write_word(&md, 0xfffffe, 0xba98));
    static const struct {
        uint32_t sp, expected_pc;
    } return_cases[] = {
        {0xeffffc, 0xfedcba98}, // Aligned pair at the end of a RAM mirror.
        {0xeffffe, 0xba980012}, // Unaligned pair across RAM mirrors.
        {0xfffffe, 0xba9800ff}, // The low word wraps to cartridge ROM.
    };
    struct m68k saved_cpu = md.cpu;
    for (unsigned i = 0; i < sizeof(return_cases) / sizeof(return_cases[0]); ++i) {
        md.cpu.pc = 0x1fc;
        md.cpu.a[7] = return_cases[i].sp;
        assert(m68k_step(&md.cpu, &md) == 16);
        assert(md.cpu.pc == return_cases[i].expected_pc);
        assert(md.cpu.a[7] == return_cases[i].sp + 4);
    }
    md.cpu = saved_cpu;

    md.cpu.pc = 0x1b8;
    md.cpu.a[0] = 0xff2000;
    md.cpu.a[4] = 0xff2002;
    assert(megadrive_write_word(&md, 0xff2002, 0xabcd));
    assert(megadrive_write_word(&md, 0xff2004, 0x8001));
    assert(m68k_step(&md.cpu, &md) == 20);
    assert(md.cpu.a[0] == 0xff2004 && md.cpu.a[4] == 0xff2006);
    assert(megadrive_read_word(&md, 0xff2000) == 0xabcd);
    assert(megadrive_read_word(&md, 0xff2002) == 0x8001);
    assert(md.cpu.sr == 0x2708);
    assert(m68k_step(&md.cpu, &md) == 20);
    assert(md.cpu.a[0] == 0xff200c);
    assert(megadrive_read_word(&md, 0xff2008) == 0x8001);
    md.cpu = saved_cpu;

    md.cpu.pc = 0x1c0;
    md.cpu.d[2] = 0xabcdef01;
    assert(m68k_step(&md.cpu, &md) == 8);
    assert(md.cpu.pc == 0x1c4 && md.cpu.d[2] == 0xabcdefc1 && md.cpu.sr == 0x2719);
    md.cpu.pc = 0x1c0;
    md.cpu.d[2] = 0xabcdef80;
    assert(m68k_step(&md.cpu, &md) == 8);
    assert(md.cpu.d[2] == 0xabcdef40 && md.cpu.sr == 0x2702);
    md.cpu = saved_cpu;

    md.cpu.pc = 0x1d0;
    md.cpu.sr = 0x2704;
    md.cpu.a[0] = 0xffa006;
    md.cpu.a[1] = 0xffa00a;
    assert(megadrive_write_word(&md, 0xffa004, 0x0099));
    assert(megadrive_write_word(&md, 0xffa008, 0x0001));
    assert(m68k_step(&md.cpu, &md) == 18 && md.cpu.sr == 0x2715);
    assert(megadrive_read_byte(&md, 0xffa005) == 0);
    assert(m68k_step(&md.cpu, &md) == 18 && md.cpu.sr == 0x2700);
    assert(megadrive_read_byte(&md, 0xffa004) == 1);
    assert(md.cpu.a[0] == 0xffa004 && md.cpu.a[1] == 0xffa008);

    md.cpu.a[7] = 0xffa014;
    assert(megadrive_write_byte(&md, 0xffa012, 0x56));
    assert(megadrive_write_byte(&md, 0xffa010, 0x37));
    assert(m68k_step(&md.cpu, &md) == 18 && md.cpu.a[7] == 0xffa010);
    assert(megadrive_read_byte(&md, 0xffa010) == 0x93);
    assert(megadrive_read_byte(&md, 0xffa012) == 0x56);
    md.cpu.d[0] = 0xabcd0079;
    md.cpu.d[1] = 1;
    assert(m68k_step(&md.cpu, &md) == 6 && md.cpu.d[0] == 0xabcd0080);
    assert(md.cpu.sr == 0x270a);
    md.cpu = saved_cpu;

    md.cpu.pc = 0x1e0;
    md.cpu.a[5] = 0xeffffe;
    md.cpu.d[7] = 0xabcd0000;
    assert(megadrive_write_word(&md, 0xeffffc, 0x7fff));
    assert(m68k_step(&md.cpu, &md) == 12);
    assert(md.cpu.a[5] == 0xeffffe && md.cpu.d[7] == 0xabcd7fff);
    assert(m68k_step(&md.cpu, &md) == 4);
    assert(md.cpu.d[7] == 0xabcd8000 && md.cpu.sr == 0x270a);
    assert(m68k_step(&md.cpu, &md) == 10 && md.cpu.pc == 0x1ee);
    md.cpu.pc = 0x1e6;
    md.cpu.sr = 0x2708;
    assert(m68k_step(&md.cpu, &md) == 12 && md.cpu.pc == 0x1ea);
    md.cpu = saved_cpu;

    md.cpu.pc = 0x1f8;
    md.cpu.a[5] = 0xeffffe;
    md.cpu.a[7] = 0x1000002; // Cartridge ROM mirrored above the 24-bit bus.
    md.cpu.d[7] = 0xabcd4568;
    md.cpu.d[0] = 0xabcd0000;
    assert(m68k_step(&md.cpu, &md) == 8);
    assert(md.cpu.a[5] == 0xf00000 && md.cpu.d[7] == 0xabcd0000 && md.cpu.sr == 0x2715);
    assert(m68k_step(&md.cpu, &md) == 8);
    assert(md.cpu.a[7] == 0x1000004 && md.cpu.d[0] == 0xabcd0200 && md.cpu.sr == 0x2711);
    md.cpu.pc = 0x1f8;
    md.cpu.a[5] = 0xefffff;
    assert(m68k_step(&md.cpu, &md) == 0 && md.cpu.stopped && md.cpu.a[5] == 0xf00001);
    md.cpu = saved_cpu;

    copy_words_to_vram(&md, 0x200, 0x100);
    assert(memcmp(md.memory->vram + 0x100, rom + 0x200, 4) == 0);
    copy_words_to_vram(&md, 0xe00000, 0x21e);
    assert(md.memory->vram[0x21f] == 0x12 && md.memory->vram[0x220] == 0x34);

    uint32_t identity = savestate_identity(&md);
    remove(argv[1]);
    assert(savestate_save(argv[1], identity, &md));
    assert(megadrive_write_word(&md, 0xff0000, 0xffff));
    assert(savestate_load(argv[1], identity, &md));
    assert(megadrive_read_word(&md, 0xff0001) == 0x1234);
    cartridge_unload(&cart);

    enum { LINEAR_ROM_SIZE = 0x400000 };
    file = fopen(path, "wb");
    assert(file && fwrite(rom, 1, sizeof(rom), file) == sizeof(rom));
    assert(fseek(file, LINEAR_ROM_SIZE - 1, SEEK_SET) == 0 && fputc(0x7a, file) == 0x7a);
    assert(fclose(file) == 0);
    assert(cartridge_load(&cart, path) == NULL && cart.size == LINEAR_ROM_SIZE);
    megadrive_reset(&md, &cart, GENESIS_REGION_AUTO);
    assert(megadrive_read_byte(&md, LINEAR_ROM_SIZE - 1) == 0x7a);
    cartridge_unload(&cart);

    file = fopen(path, "ab");
    assert(file && fputc(0, file) == 0 && fclose(file) == 0);
    assert(cartridge_load(&cart, path) && !cart.data);
    assert(remove(path) == 0);
}
