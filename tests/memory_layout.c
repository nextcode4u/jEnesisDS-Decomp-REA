#include "cartridge.h"
#include "megadrive.h"
#include "savestate.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

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
        [0x1fc] = 0x4e, 0x75,                         // RTS
        [0x200] = 0x20, 0x3c, 0x12, 0x34, 0x56, 0x78, // MOVE.L #$12345678,D0
        [0x206] = 0x60, 0xfe,                         // BRA.S to itself
        [0x208] = 0xab,                               // Final unpaired byte
    };
    assert(argc == 2);
    const char *path = "build/c/memory-layout-test.bin";
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
}
