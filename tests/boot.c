#include "frame_pacing.h"
#include "cartridge.h"
#include "megadrive.h"
#include "psg.h"
#include "savestate.h"
#include "vdp_render.h"
#include "z80_bus.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

#ifndef TEST_OUTPUT_DIR
#define TEST_OUTPUT_DIR "build/c"
#endif

static uint8_t rom[0x27c] = {
    0x00, 0xff, 0xfe, 0x00,  // Initial supervisor stack at $fffe00.
    0x00, 0x00, 0x02, 0x00,  // Reset PC at $200.
    [0x70] = 0x00, 0x00, 0x02, 0x76,            // Level 4 autovector.
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
    0x40, 0xe7,                                // move.w sr,-(sp)
    0x46, 0xdf,                                // move.w (sp)+,sr
    0x56, 0xf9, 0x00, 0xff, 0x00, 0x11,        // sne $ff0011
    0x50, 0xc1,                                // st d1
    0x52, 0x02,                                // addq.b #1,d2
    0x4e, 0x73,                                // rte
    0x60, 0xfe,                                // bra.s to self
};

static void test_pending_vdp_interrupt(void)
{
    static uint8_t program[0x104] = {
        0x00, 0xff, 0xfe, 0x00,  // Supervisor stack.
        0x00, 0x00, 0x00, 0x80,  // Reset PC.
        [0x70] = 0x00, 0x00, 0x01, 0x00, // Level 4 handler.
        [0x80] = 0x02, 0x7c, 0xf8, 0xff, // ANDI #$f8ff,SR.
        0x70, 0x01,                      // MOVEQ #1,D0.
        [0x90] = 0x30, 0xbc, 0x80, 0x10, // MOVE.W #$8010,(A0).
        0x70, 0x01,                      // MOVEQ #1,D0.
    };
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    const struct cartridge cart = {.data = program, .size = sizeof(program), .region = "U"};
    for (unsigned enable_vdp = 0; enable_vdp < 2; ++enable_vdp) {
        megadrive_reset(&md, &cart, GENESIS_REGION_USA);
        md.hint_pending = true;
        if (enable_vdp) {
            md.cpu.sr = 0x2000;
            md.cpu.pc = 0x90;
            md.cpu.a[0] = 0xc00004;
        } else {
            md.vdp_registers[0] = 0x10;
        }

        m68k_run_until(&md, 0, 22);
        assert(!md.hint_pending && !md.cpu.stopped);
        assert(md.cpu.pc == 0x100 && md.cpu.d[0] == 0);
        assert(md.cpu.a[7] == 0xfffdfa);
        assert(megadrive_read_word(&md, 0xfffdfe) == (enable_vdp ? 0x94 : 0x84));
    }
}

static void test_status_immediates(void)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    static uint8_t code[] = {
        0x00, 0x7c, 0x07, 0x01, // ORI #$0701,SR
        0x02, 0x3c, 0x00, 0x1e, // ANDI #$1e,CCR
        0x0a, 0x3c, 0xff, 0xf4, // EORI #$f4,CCR
        0xd3, 0x40,             // ADDX.W D0,D1
        0x93, 0x40,             // SUBX.W D0,D1
        0x48, 0x7a, 0x00, 0x06, // PEA 6(PC)
        0x4e, 0x56, 0xff, 0xf0, // LINK A6,#-16
        0x40, 0x44,             // NEGX.W D4
        0x40, 0x44,             // NEGX.W D4
        0x4e, 0x5e,             // UNLK A6
    };
    md.rom = code;
    md.rom_size = sizeof(code);
    md.cpu.sr = 0x2000;
    assert(m68k_step(&md.cpu, &md) == 20 && md.cpu.sr == 0x2701);
    assert(m68k_step(&md.cpu, &md) == 20 && md.cpu.sr == 0x2700);
    assert(m68k_step(&md.cpu, &md) == 20 && md.cpu.sr == 0x2714);
    md.cpu.d[0] = 0xffff;
    md.cpu.d[1] = 0x12340000;
    assert(m68k_step(&md.cpu, &md) == 4 && md.cpu.sr == 0x2715);
    assert(md.cpu.d[1] == 0x12340000);
    assert(m68k_step(&md.cpu, &md) == 4 && md.cpu.sr == 0x2715);
    assert(md.cpu.d[1] == 0x12340000);
    md.cpu.a[7] = 0xfffffc;
    assert(m68k_step(&md.cpu, &md) == 16 && md.cpu.a[7] == 0xfffff8);
    assert(megadrive_read_word(&md, 0xfffff8) == 0 && megadrive_read_word(&md, 0xfffffa) == 24);
    md.cpu.a[6] = 0x12345678;
    assert(m68k_step(&md.cpu, &md) == 16 && md.cpu.a[6] == 0xfffff4);
    assert(md.cpu.a[7] == 0xffffe4 && md.cpu.sr == 0x2715);
    assert(megadrive_read_word(&md, 0xfffff4) == 0x1234);
    assert(megadrive_read_word(&md, 0xfffff6) == 0x5678);
    md.cpu.d[4] = 0x1234ffff;
    assert(m68k_step(&md.cpu, &md) == 4 && md.cpu.sr == 0x2715);
    assert(md.cpu.d[4] == 0x12340000);
    assert(m68k_step(&md.cpu, &md) == 4 && md.cpu.sr == 0x2719);
    assert(md.cpu.d[4] == 0x1234ffff);
    assert(m68k_step(&md.cpu, &md) == 12 && md.cpu.a[6] == 0x12345678);
    assert(md.cpu.a[7] == 0xfffff8 && md.cpu.sr == 0x2719);
}

static void vdp_register(struct megadrive *md, unsigned reg, unsigned value)
{
    assert(megadrive_write_word(md, 0xc00004, 0x8000 | (reg << 8) | value));
}

static void test_six_button_controller(void)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    md.six_button = true;
    md.pad1_pressed = GENESIS_Z | GENESIS_X | GENESIS_START;
    assert(megadrive_write_byte(&md, 0xa10003, 0x40));
    assert(megadrive_write_byte(&md, 0xa10009, 0x40));
    for (unsigned phase = 1; phase <= 4; ++phase) {
        assert(megadrive_write_byte(&md, 0xa10003, 0));
        assert(md.th_phase[0] == phase);
        unsigned expected_low = phase == 3 ? 0x10 : phase == 4 ? 0x1f : 0x13;
        assert(megadrive_read_byte(&md, 0xa10003) == expected_low);
        assert(megadrive_write_byte(&md, 0xa10003, 0x40));
        assert(megadrive_read_byte(&md, 0xa10003) == (phase == 3 ? 0x7a : 0x7f));
    }
    md.controller_cycles += 0x2000;
    assert(megadrive_write_byte(&md, 0xa10003, 0));
    assert(md.th_phase[0] == 1 && megadrive_read_byte(&md, 0xa10003) == 0x13);
    assert(megadrive_read_byte(&md, 0xa10005) == 0x7f);
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
    assert(megadrive_read_byte(md, 0xa1000f) == 0xff);
    assert(megadrive_write_byte(md, 0xa1000f, 0x12));
    assert(megadrive_read_byte(md, 0xa1000e) == 0x12);
    assert(megadrive_write_byte(md, 0xa10011, 0xff));
    assert(megadrive_read_byte(md, 0xa10011) == 0);
    assert(megadrive_write_byte(md, 0xa10013, 0xff));
    assert(megadrive_read_byte(md, 0xa10012) == 0xf8);
}

static void test_z80_delay_loops(const struct cartridge *cart)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    megadrive_reset(&md, cart, GENESIS_REGION_AUTO);
    md.z80_reset = false;
    md.memory->z80_ram[0] = 0x10;
    md.memory->z80_ram[1] = 0xfe;
    md.sound_cpu.b = 12;
    md.sound_cpu.r = 0xfd;
    z80 expected = md.sound_cpu;
    expected.ram_limit = 0;
    for (unsigned i = 0; i < 7; ++i)
        z80_step(&expected);
    genesis_z80_sync(&md, 195);
    assert(md.sound_cpu.b == expected.b && md.sound_cpu.pc == expected.pc);
    assert(md.sound_cpu.cyc == expected.cyc && md.sound_cpu.r == expected.r);
    assert(md.sound_cpu.mem_ptr == expected.mem_ptr);

    genesis_z80_reset(&md);
    md.z80_synced_cycle = 0;
    const uint8_t poll[] = {0x7e, 0xb7, 0xf2, 0, 0};
    memcpy(md.memory->z80_ram, poll, sizeof(poll));
    md.sound_cpu.l = 0x20;
    md.memory->z80_ram[0x20] = 0x29;
    expected = md.sound_cpu;
    expected.ram_limit = 0;
    for (unsigned i = 0; i < 9; ++i)
        z80_step(&expected);
    genesis_z80_sync(&md, 135);
    assert(md.sound_cpu.a == expected.a && md.sound_cpu.pc == expected.pc);
    assert(md.sound_cpu.cyc == expected.cyc && md.sound_cpu.r == expected.r);
    assert(md.sound_cpu.mem_ptr == expected.mem_ptr && md.sound_cpu.pf == expected.pf);
    assert(md.sound_cpu.xf == expected.xf && md.sound_cpu.yf == expected.yf);
    assert(md.sound_cpu.sf == expected.sf && md.sound_cpu.zf == expected.zf);

    genesis_z80_reset(&md);
    md.z80_synced_cycle = 0;
    const uint8_t register_poll[] = {0x7a, 0xb3, 0x28, 0xfc};
    memcpy(md.memory->z80_ram, register_poll, sizeof(register_poll));
    md.sound_cpu.a = 0xff;
    md.sound_cpu.r = 0xfa;
    expected = md.sound_cpu;
    while (expected.cyc < 50)
        z80_step(&expected);
    genesis_z80_sync(&md, 108);
    assert(md.sound_cpu.pc == expected.pc && md.sound_cpu.a == expected.a);
    assert(md.sound_cpu.cyc == expected.cyc && md.sound_cpu.r == expected.r);
    assert(md.sound_cpu.mem_ptr == expected.mem_ptr && md.z80_instruction_debt == 10);
    assert(md.sound_cpu.zf && md.sound_cpu.pf && !md.sound_cpu.cf && !md.sound_cpu.sf);

    genesis_z80_reset(&md);
    md.z80_synced_cycle = 0;
    const uint8_t rotate[] = {0x07, 0x07, 0x07, 0x07};
    memcpy(md.memory->z80_ram, rotate, sizeof(rotate));
    md.sound_cpu.a = 0xb2;
    md.sound_cpu.r = 0xfe;
    md.ym_busy_cycles = 32;
    expected = md.sound_cpu;
    for (unsigned i = 0; i < sizeof(rotate); ++i)
        z80_step(&expected);
    genesis_z80_sync(&md, 35);
    assert(md.sound_cpu.pc == expected.pc && md.sound_cpu.a == expected.a);
    assert(md.sound_cpu.cyc == expected.cyc && md.sound_cpu.r == expected.r);
    assert(md.sound_cpu.cf == expected.cf && md.sound_cpu.nf == expected.nf);
    assert(md.sound_cpu.hf == expected.hf && md.sound_cpu.xf == expected.xf);
    assert(md.sound_cpu.yf == expected.yf && md.sound_cpu.zf == expected.zf);
    assert(md.sound_cpu.sf == expected.sf && md.sound_cpu.pf == expected.pf);
    assert(!md.ym_busy_cycles);
}

enum { TEST_FM_STRIDE = 130 };

static void setup_fm_pcm_patch(struct fm_chip *fm, unsigned algorithm, unsigned feedback)
{
    fm_reset(fm);
    for (unsigned slot = 0; slot < FM_OPERATORS; ++slot) {
        unsigned offset = slot * 4;
        fm_write(fm, 0x30 + offset, 1);
        fm_write(fm, 0x40 + offset, 20);
        fm_write(fm, 0x50 + offset, 31);
        fm_write(fm, 0x60 + offset, 0x80);
        fm_write(fm, 0x80 + offset, 15);
    }
    fm_write(fm, 0xb0, algorithm | feedback << 3);
    fm_write(fm, 0xb4, 0xf7);
    fm_write(fm, 0xa4, 0x22);
    fm_write(fm, 0xa0, 0x84);
    fm_write(fm, 0x28, 0xf0);
}

static void test_fm_output(void)
{
    // FNV-1a over PCM words produced by the original ARM7 renderer.
    static const uint32_t expected[8][3] = {
        {0xf6db7a71, 0xe900703b, 0xa0d3732e},
        {0x812efafe, 0x2edb81e2, 0x3fb7cbad},
        {0x94391472, 0xf48eb6d9, 0x4f4ebcd7},
        {0x47097980, 0x639f79db, 0x31d6c6e6},
        {0xb4da16f0, 0x356a876f, 0x91cace93},
        {0xea464f61, 0x9860d362, 0xee12ed48},
        {0x13695212, 0xb428b463, 0x8814a859},
        {0xac658513, 0xc5fd0fda, 0x6b07b97d},
    };
    static const unsigned feedback[] = {0, 4, 7};
    static const unsigned block_sizes[] = {128, 31, 64, 1, 127, 128, 16, 49, 128};
    int16_t pcm[FM_CHANNELS * TEST_FM_STRIDE];

    for (unsigned alg = 0; alg < 8; ++alg) {
        for (unsigned fb = 0; fb < 3; ++fb) {
            struct fm_chip fm;
            setup_fm_pcm_patch(&fm, alg, feedback[fb]);
            struct fm_chip with_lfo = fm;
            fm_write(&with_lfo, 0x22, 0x0f);
            int16_t lfo_pcm[FM_CHANNELS * TEST_FM_STRIDE];

            uint32_t hash = UINT32_C(2166136261);
            for (unsigned block = 0; block < sizeof(block_sizes) / sizeof(*block_sizes); ++block) {
                unsigned count = block_sizes[block];
                fm_render(&fm, count, TEST_FM_STRIDE, pcm);
                fm_render(&with_lfo, count, TEST_FM_STRIDE, lfo_pcm);
                assert(memcmp(pcm, lfo_pcm, count * sizeof(*pcm)) == 0);
                for (unsigned i = 0; i < count; ++i) {
                    hash = (hash ^ (uint16_t)pcm[i]) * UINT32_C(16777619);
                    for (unsigned channel = 1; channel < FM_CHANNELS; ++channel)
                        assert(pcm[channel * TEST_FM_STRIDE + i] == 0);
                }
            }
            assert(hash == expected[alg][fb]);
        }
    }

    // Channel 6 pauses its FM state while the DAC owns it.
    struct fm_chip fm;
    fm_reset(&fm);
    fm_write(&fm, 0x132, 1);
    fm_write(&fm, 0x152, 31);
    fm_write(&fm, 0x1b2, 7);
    fm_write(&fm, 0x1a6, 0x22);
    fm_write(&fm, 0x1a2, 0x84);
    fm_write(&fm, 0x28, 0x16);
    fm_render(&fm, 128, TEST_FM_STRIDE, pcm);
    struct fm_channel prior = fm.channels[5];
    fm_write(&fm, 0x2b, 0x80);
    fm_render(&fm, 128, TEST_FM_STRIDE, pcm);
    assert(memcmp(&fm.channels[5], &prior, sizeof(prior)) == 0);
    for (unsigned i = 0; i < 128; ++i)
        assert(pcm[5 * TEST_FM_STRIDE + i] == 0);
    fm_write(&fm, 0x2b, 0);
    fm_render(&fm, 128, TEST_FM_STRIDE, pcm);
    assert(fm.channels[5].op[0].phase != prior.op[0].phase);
}

static void test_fm_mask_transitions(void)
{
    static const struct {
        unsigned algorithm, level_register;
        uint32_t hash;
    } expected[] = {
        {2, 0x4c, UINT32_C(0x3519a99c)},
        {5, 0x40, UINT32_C(0x665afc00)},
    };
    static const unsigned counts[] = {128, 31, 64, 1, 2, 29, 128};
    int16_t pcm[FM_CHANNELS * TEST_FM_STRIDE];
    for (unsigned test = 0; test < sizeof(expected) / sizeof(*expected); ++test) {
        struct fm_chip fm;
        setup_fm_pcm_patch(&fm, expected[test].algorithm, 7);
        uint32_t hash = UINT32_C(2166136261);
        for (unsigned block = 0; block < sizeof(counts) / sizeof(*counts); ++block) {
            fm_write(&fm, expected[test].level_register, block == 3 || block == 4 ? 127 : 20);
            fm_render(&fm, counts[block], TEST_FM_STRIDE, pcm);
            for (unsigned i = 0; i < counts[block]; ++i)
                hash = (hash ^ (uint16_t)pcm[i]) * UINT32_C(16777619);
        }
        assert(hash == expected[test].hash);
    }
}

static void test_fm_zero_sustain_level(void)
{
    int16_t pcm[FM_CHANNELS * TEST_FM_STRIDE];
    for (unsigned sustain = 0; sustain <= 1; ++sustain) {
        struct fm_chip fm;
        fm_reset(&fm);
        fm_write(&fm, 0xb0, 7);
        fm_write(&fm, 0xa4, 0x22);
        fm_write(&fm, 0xa0, 0x84);
        fm_write(&fm, 0x30, 1);
        fm_write(&fm, 0x50, 31);
        fm_write(&fm, 0x70, 31);
        fm_write(&fm, 0x80, sustain << 4);
        fm_write(&fm, 0x28, 0x10);
        for (unsigned block = 0; block < 16; ++block)
            fm_render(&fm, 128, TEST_FM_STRIDE, pcm);
        bool audible = false;
        for (unsigned i = 0; i < 128; ++i)
            audible |= pcm[i] != 0;
        assert(audible == (sustain != 0));
    }
}

static void test_fm_phase_increment(void)
{
    struct fm_chip fm;
    fm_reset(&fm);
    fm_write(&fm, 0x30, 1);
    for (unsigned number = 0; number < 2048; ++number) {
        // Block 7 and multiplier 1 expose the full unshifted phase increment.
        fm_write(&fm, 0xa4, 0x38 | (number >> 8));
        fm_write(&fm, 0xa0, number & 0xff);
        uint32_t expected = (uint64_t)number * 4096 * 0x750ab5 / (27563 * 144);
        assert(fm.channels[0].op[0].step == expected);
    }
}

static void test_fm_timer_mode_writes(void)
{
    struct fm_chip fm;
    fm_reset(&fm);

    // A timer-only write can be the first configuration of channel 3.
    fm_write(&fm, 0x27, 0x0f);
    assert(fm.channels[2].op[0].rate[3] == 2);

    fm_write(&fm, 0xa6, 0x38);
    fm_write(&fm, 0xa2, 0x40);
    fm_write(&fm, 0xac, 0x38);
    fm_write(&fm, 0xa9, 0x80);
    unsigned normal_step = fm.channels[2].op[0].step;
    fm_write(&fm, 0x27, 0x4f);
    unsigned special_step = fm.channels[2].op[0].step;
    assert(special_step != normal_step);
    fm_write(&fm, 0x27, 0x5f);
    assert(fm.registers[0][0x27] == 0x5f && fm.channels[2].op[0].step == special_step);
    fm_write(&fm, 0x27, 0x0f);
    assert(fm.channels[2].op[0].step == normal_step);
}

static void test_fm_pitch_latches(const struct cartridge *cart)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    struct fm_chip fm;
    struct dac_frame frame = {.count = 8};
    megadrive_reset(&md, cart, GENESIS_REGION_USA);
    fm_reset(&fm);
    static const struct { uint16_t reg; uint8_t value; } writes[] = {
        {0x0a4, 0x22}, {0x0ac, 0x19}, {0x1a1, 0x84}, {0x0aa, 0x35},
        {0x1a5, 0x17}, {0x0a0, 0x56}, {0x0a6, 0x32}, {0x0ad, 0x28},
    };
    for (unsigned i = 0; i < sizeof(writes) / sizeof(writes[0]); ++i) {
        unsigned port = (writes[i].reg >> 8) * 2;
        megadrive_ym_write(&md, port, writes[i].reg & 0xff);
        megadrive_ym_write(&md, port + 1, writes[i].value);
        fm_write(&fm, writes[i].reg, writes[i].value);
    }
    assert(fm.pitch.channel[4] == 0x2284 && fm.pitch.channel[0] == 0x1756);
    assert(fm.pitch.special[2] == 0x1935);
    assert(fm.pitch.channel_high == 0x32 && fm.pitch.special_high == 0x28);
    uint32_t phase_step = fm.channels[4].op[0].step;
    assert(phase_step != 0);

    const char *path = TEST_OUTPUT_DIR "/boot-test-pitch.jsc";
    uint32_t identity = savestate_identity(&md);
    assert(savestate_save(path, identity, &md));
    memset(&md.ym_pitch, 0, sizeof(md.ym_pitch));
    assert(savestate_load(path, identity, &md));
    assert(remove(path) == 0);
    dac_begin(&md, &frame);
    dac_end(&md);
    fm_restore(&fm, frame.fm_registers, frame.fm_keys, &frame.fm_pitch);
    assert(fm.channels[4].op[0].step == phase_step);
    assert(fm.pitch.special[2] == 0x1935);
    fm_write(&fm, 0x1a2, 0x78);
    fm_write(&fm, 0x0a8, 0x9a);
    assert(fm.pitch.channel[5] == 0x3278 && fm.pitch.special[0] == 0x289a);
}

static void test_dac_timing(const struct cartridge *cart)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    struct dac_frame frame = {.count = 8};
    megadrive_reset(&md, cart, GENESIS_REGION_USA);
    dac_begin(&md, &frame);

    megadrive_ym_write_at(&md, 0, 0x2a, 0);
    megadrive_ym_write_at(&md, 1, 0xe0, 0);
    megadrive_ym_write_at(&md, 0, 0x2b, 0);
    megadrive_ym_write_at(&md, 1, 0x80, (md.frame_cycles + 3) / 4);
    megadrive_ym_write_at(&md, 2, 0xb6, md.frame_cycles / 2);
    megadrive_ym_write_at(&md, 3, 0x40, (md.frame_cycles + 1) / 2);
    megadrive_ym_write_at(&md, 0, 0x2a, 0);
    megadrive_ym_write_at(&md, 1, 0x20, (3 * md.frame_cycles + 3) / 4);
    dac_end(&md);

    const struct dac_sample expected[] = {
        {0, 0}, {0, 0}, {96, 96}, {96, 96},
        {0, 96}, {0, 96}, {0, -96}, {0, -96},
    };
    assert(frame.fm_count == 2);
    assert(frame.fm_writes[0].reg == 0x2b && frame.fm_writes[0].sample == 2);
    assert(frame.fm_writes[1].reg == 0x1b6 && frame.fm_writes[1].sample == 4);
    assert(!memcmp(frame.psg_registers, md.psg_registers, sizeof(frame.psg_registers)));
    assert(frame.dac_audible);
    assert(!md.dac_capture.frame);
    assert(!memcmp(frame.samples, expected, sizeof(expected)));

    dac_begin(&md, &frame);
    megadrive_ym_write_at(&md, 0, 0x2b, 0);
    megadrive_ym_write_at(&md, 1, 0, 0);
    dac_end(&md);
    assert(!frame.dac_audible);
}

static void test_z80_dac_writes(const struct cartridge *cart)
{
    static const uint8_t program[] = {
        0x3e, 0xe0, 0x32, 0x01, 0x40, // Write $e0 to YM2612 data.
        0x3e, 0x20, 0x32, 0x01, 0x40, // Write $20 to YM2612 data.
        0x76,
    };
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    struct dac_frame continuous = {.count = 24}, sliced = {.count = 24};
    for (unsigned run = 0; run < 2; ++run) {
        megadrive_reset(&md, cart, GENESIS_REGION_USA);
        memcpy(md.memory->z80_ram, program, sizeof(program));
        md.frame_cycles = 240;
        md.z80_reset = false;
        md.ym_registers[0][0x2b] = 0x80;
        md.ym_address[0] = 0x2a;
        dac_begin(&md, run ? &sliced : &continuous);

        // The first write finishes at cycle 42, after the first slice ends.
        if (run) {
            genesis_z80_sync(&md, 36);
            genesis_z80_sync(&md, 67);
        }
        genesis_z80_sync(&md, md.frame_cycles);
        dac_end(&md);
        assert(md.sound_cpu.halted);
    }

    assert(!memcmp(continuous.samples, sliced.samples,
                   continuous.count * sizeof(continuous.samples[0])));
    for (unsigned i = 0; i < continuous.count; ++i) {
        int level = i < 4 ? 0 : i < 8 ? 96 : -96;
        assert(continuous.samples[i].left == level);
        assert(continuous.samples[i].right == level);
    }
}

static void test_z80_indexed_dac(const struct cartridge *cart)
{
    static const uint8_t program[][13] = {
        {0x08, 0xdd, 0x86, 0xff, 0x32, 0x01, 0x40, 0x08, 0x41, 0xfb, 0x76},
        {0x08, 0xfd, 0x86, 0xff, 0x32, 0x01, 0x40, 0x08, 0xfb, 0xc3, 0x0c, 0x01, 0x76},
    };
    static const unsigned instruction_boundaries[] = {9, 50, 78, 86, 95};
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    struct dac_frame continuous = {.count = 64}, sliced = {.count = 64};
    for (unsigned sequence = 0; sequence < sizeof(program) / sizeof(program[0]); ++sequence) {
        z80 expected;
        for (unsigned stepped = 0; stepped < 2; ++stepped) {
            megadrive_reset(&md, cart, GENESIS_REGION_USA);
            md.frame_cycles = 256;
            md.z80_reset = false;
            md.sound_cpu.pc = 0x100;
            md.sound_cpu.ix = md.sound_cpu.iy = 0x2000;
            md.sound_cpu.a = 0x15;
            md.sound_cpu.a_ = 0xa1;
            md.sound_cpu.b = 1;
            md.sound_cpu.c = 9;
            md.sound_cpu.cf = true;
            md.sound_cpu.r = 0xfe;
            memcpy(md.memory->z80_ram + 0x100, program[sequence], sizeof(program[sequence]));
            md.memory->z80_ram[0x1fff] = 0x35;
            md.ym_address[0] = 0x2a;
            md.ym_registers[0][0x2a] = 0x80;
            md.ym_registers[0][0x2b] = 0x80;
            md.ym_registers[1][0xb6] = 0xc0;
            dac_begin(&md, stepped ? &sliced : &continuous);
            if (stepped)
                for (unsigned i = 0; i < sizeof(instruction_boundaries) / sizeof(*instruction_boundaries); ++i)
                    genesis_z80_sync(&md, instruction_boundaries[i]);
            genesis_z80_sync(&md, md.frame_cycles);
            dac_end(&md);
            assert(md.sound_cpu.halted && md.sound_cpu.iff1 && md.sound_cpu.iff2);
            assert(md.sound_cpu.a == 0x15 && md.sound_cpu.cf && md.sound_cpu.a_ == 0xd6);
            assert(md.ym_registers[0][0x2a] == 0xd6 && !md.ym_busy_cycles);
            if (stepped) {
                size_t state_offset = offsetof(z80, cyc);
                assert(memcmp((const uint8_t *)&expected + state_offset,
                              (const uint8_t *)&md.sound_cpu + state_offset,
                              sizeof(expected) - state_offset) == 0);
            } else {
                memcpy(&expected, &md.sound_cpu, sizeof(expected));
            }
        }
        assert(memcmp(continuous.samples, sliced.samples,
                      continuous.count * sizeof(continuous.samples[0])) == 0);
        for (unsigned i = 0; i < continuous.count; ++i) {
            int level = i < 19 ? 0 : 86;
            assert(continuous.samples[i].left == level && continuous.samples[i].right == level);
        }
    }
}

static void test_z80_delay_exits(const struct cartridge *cart)
{
    static const uint8_t programs[][5] = {
        {0x10, 0xfe, 0x76},
        {0x7a, 0xb3, 0x28, 0xfc, 0x76},
        {0x7e, 0xb7, 0xf2, 0, 0},
    };
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    // Fourteen Z80 clocks start the final untaken branch in each case.
    for (unsigned i = 0; i < sizeof(programs) / sizeof(programs[0]); ++i) {
        megadrive_reset(&md, cart, GENESIS_REGION_AUTO);
        memcpy(md.memory->z80_ram, programs[i], sizeof(programs[i]));
        md.memory->z80_ram[0x20] = 0x9e;
        md.z80_reset = false;
        md.sound_cpu.b = 2;
        md.sound_cpu.d = 0x8f;
        md.sound_cpu.l = 0x20;
        md.sound_cpu.mem_ptr = 0x7777;
        md.sound_cpu.r = 0xfe;
        z80 expected = md.sound_cpu;
        while (expected.cyc < 14)
            z80_step(&expected);
        genesis_z80_sync(&md, 30);
        size_t state_offset = offsetof(z80, cyc);
        assert(memcmp((const uint8_t *)&expected + state_offset,
                      (const uint8_t *)&md.sound_cpu + state_offset,
                      sizeof(expected) - state_offset) == 0);
        assert(md.z80_instruction_debt == expected.cyc - 14);
    }
}

static void test_z80_ym_status_poll(const struct cartridge *cart)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    static const unsigned slice_ends[] = {48, 50, 52, 70, 72, 142};
    for (unsigned prefix = 0xdd; prefix <= 0xfd; prefix += 0x20) {
        for (unsigned status = 0; status < 8; ++status) {
            for (unsigned i = 0; i < sizeof(slice_ends) / sizeof(slice_ends[0]); ++i) {
                megadrive_reset(&md, cart, GENESIS_REGION_AUTO);
                const uint8_t program[] = {prefix, 0x7e, 0xfa, 0x0f, 0xd2, 0, 0, 0x76};
                memcpy(memory.z80_ram, program, sizeof(program));
                md.z80_reset = false;
                md.sound_cpu.ix = md.sound_cpu.iy = 0x4008;
                md.sound_cpu.f = 0xff;
                md.sound_cpu.r = 0xfe;
                md.ym_registers[0][0x27] = 0x0f;
                md.ym_timer_clocks[0] = 310;
                md.ym_timer_clocks[1] = 610;
                md.ym_timer_flags = status & 3;
                md.ym_busy_cycles = (status & 4) ? 32 : 0;

                struct megadrive reference = md;
                genesis_z80_bind(&reference);
                unsigned budget = slice_ends[i] * 7 / 15;
                while (reference.sound_cpu.cyc < budget) {
                    unsigned long before = reference.sound_cpu.cyc;
                    z80_step(&reference.sound_cpu);
                    megadrive_ym_advance(&reference, (reference.sound_cpu.cyc - before) * 15);
                }

                genesis_z80_sync(&md, slice_ends[i]);
                size_t offset = offsetof(z80, cyc);
                assert(memcmp((const uint8_t *)&md.sound_cpu + offset,
                              (const uint8_t *)&reference.sound_cpu + offset,
                              sizeof(z80) - offset) == 0);
                assert(md.z80_instruction_debt == reference.sound_cpu.cyc - budget);
                assert(md.ym_timer_flags == reference.ym_timer_flags);
                assert(md.ym_busy_cycles == reference.ym_busy_cycles);
                assert(memcmp(md.ym_timer_clocks, reference.ym_timer_clocks,
                              sizeof(md.ym_timer_clocks)) == 0);
            }
        }
    }
}

static void test_z80_mirrored_words(const struct cartridge *cart)
{
    static const uint8_t program[] = {
        0x21, 0x34, 0x12, // LD HL,$1234
        0x22, 0xff, 0x1f, // LD ($1fff),HL across the RAM mirror
        0x21, 0, 0,       // LD HL,0
        0x2a, 0xff, 0x1f, // LD HL,($1fff)
        0x22, 0xff, 0x3f, // LD ($3fff),HL across the RAM and FM ports
        0x76,
    };
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    megadrive_reset(&md, cart, GENESIS_REGION_USA);
    memcpy(md.memory->z80_ram + 0x100, program, sizeof(program));
    md.sound_cpu.pc = 0x100;
    md.z80_reset = false;
    genesis_z80_sync(&md, 200);

    assert(md.sound_cpu.halted);
    assert(md.memory->z80_ram[0] == 0x12 && md.memory->z80_ram[0x1fff] == 0x34);
    assert(md.sound_cpu.h == 0x12 && md.sound_cpu.l == 0x34);
    assert(md.ym_address[0] == 0x12);
}

static void test_z80_and_ym(struct megadrive *md)
{
    static const uint8_t program[] = {
        0x3e, 0x24,                    // ld a,$24
        0x32, 0x00, 0x40,              // ld ($4000),a
        0x3e, 0xff,                    // ld a,$ff
        0x32, 0x01, 0x40,              // ld ($4001),a
        0x76,                          // halt
    };
    memcpy(md->memory->z80_ram, program, sizeof(program));
    genesis_z80_sync(md, 200);
    assert(md->sound_cpu.halted && md->ym_registers[0][0x24] == 0xff);
    assert(megadrive_write_byte(md, 0xa11100, 1));
    assert(megadrive_write_byte(md, 0xa04000, 0x25));
    assert(megadrive_write_byte(md, 0xa04001, 3));
    assert(megadrive_write_byte(md, 0xa04000, 0x27));
    assert(megadrive_write_byte(md, 0xa04001, 5));
    assert(megadrive_read_byte(md, 0xa04000) == 0x80);
    megadrive_ym_advance(md, 1007);
    assert(megadrive_read_byte(md, 0xa04000) == 0);
    megadrive_ym_advance(md, 1);
    assert(megadrive_read_byte(md, 0xa04000) == 1);
    assert(megadrive_write_byte(md, 0xa04001, 0x15));
    assert(megadrive_read_byte(md, 0xa04000) == 0x80);
    assert(megadrive_write_byte(md, 0xa04001, 0));
    assert(megadrive_write_byte(md, 0xa11100, 0));
}

static void test_vdp_dma(struct megadrive *md)
{
    vdp_register(md, 1, 0x14);
    vdp_register(md, 15, 2);
    vdp_register(md, 19, 2);
    assert(megadrive_write_word(md, 0xc00004, 0x4100));
    assert(megadrive_write_word(md, 0xc00004, 0x0080));
    assert(md->memory->vram[0x100] == 0 && md->memory->vram[0x101] == 0xff);
    assert(md->memory->vram[0x102] == 0xfe && md->memory->vram[0x103] == 0);
    assert(md->vdp_address == 0x104 && md->vdp_registers[19] == 0);
    uint32_t written_revision = md->memory->vram_revisions[0x100 / 32];
    assert(written_revision != 0 && md->memory->vram_revisions[0x120 / 32] == 0);

    // The two changed bytes straddle VRAM revision blocks.
    md->memory->ram[1] = 0x12;
    md->memory->ram[2] = 0x34;
    for (unsigned i = 0; i < 2; ++i) {
        vdp_register(md, 19, 2);
        vdp_register(md, 21, 0);
        vdp_register(md, 22, 0);
        vdp_register(md, 23, 0x70);
        uint32_t revision = md->video_revision;
        assert(megadrive_write_word(md, 0xc00004, 0x421e));
        assert(megadrive_write_word(md, 0xc00004, 0x0080));
        assert(md->vdp_address == 0x222 && md->vdp_registers[21] == 2);
        assert(md->memory->vram[0x21f] == 0x12 && md->memory->vram[0x220] == 0x34);
        if (!i) {
            assert(md->memory->vram_revisions[0x21f / 32] == revision + 1);
            assert(md->memory->vram_revisions[0x220 / 32] == revision + 2);
        } else {
            assert(md->video_revision == revision);
        }
    }
    md->memory->ram[1] = md->memory->ram[2] = 0;

    vdp_register(md, 15, 1);
    vdp_register(md, 19, 3);
    vdp_register(md, 23, 0x80);
    assert(megadrive_write_word(md, 0xc00004, 0x4100));
    assert(megadrive_write_word(md, 0xc00004, 0x0080));
    assert(md->vdp_fill_pending);
    assert(megadrive_write_word(md, 0xc00000, 0));
    for (unsigned i = 0; i < 5; ++i)
        assert(md->memory->vram[0x100 + i] == 0);
    assert(md->memory->vram_revisions[0x100 / 32] > written_revision);
    assert(!md->vdp_fill_pending && md->vdp_address == 0x104);
}

static void set_vram_word(struct megadrive *md, unsigned address, uint16_t word)
{
    md->memory->vram[address] = word >> 8;
    md->memory->vram[address + 1] = word;
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
    memset(md->memory->vram, 0, sizeof(md->memory->vram));
    memset(&md->memory->vram[32], 0x11, 32);
    memset(&md->memory->vram[64], 0x22, 32);
    memset(&md->memory->vram[96], 0x33, 32);
    set_vram_word(md, 0xc080, 0x2001);
    set_vram_word(md, 0xe080, 0x8002);
    // First sprite: 8x8, low priority, starting at viewport x=0 and y=0.
    set_vram_word(md, 0xf000, 16 + 128);
    set_vram_word(md, 0xf004, 3);
    set_vram_word(md, 0xf006, 128);
    vdp_render_frame(md, bitmap, false, VDP_VIEW_CENTER);
    assert(bitmap[0] == 0x0202 && bitmap[4] == 0);
    set_vram_word(md, 0xe080, 0x0002);
    vdp_render_frame(md, bitmap, false, VDP_VIEW_CENTER);
    assert(bitmap[0] == 0x0303);
    set_vram_word(md, 0xc080, 0xa001);
    vdp_render_frame(md, bitmap, false, VDP_VIEW_CENTER);
    assert(bitmap[0] == 0x1111);
    vdp_register(md, 1, 4);
    vdp_render_frame(md, bitmap, false, VDP_VIEW_CENTER);
    assert(bitmap[0] == 0);
}

static void test_sprite_scanline_limit(void)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    // Force the halfword-aligned output path as well as the sprite limit.
    _Alignas(4) static uint16_t storage[VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2 + 1];
    uint16_t *bitmap = storage + 1;
    vdp_register(&md, 1, 0x40);
    vdp_register(&md, 2, 0x30);
    vdp_register(&md, 4, 0x05);
    vdp_register(&md, 5, 0x78);
    memset(md.memory->vram + 32, 0x22, 32);
    for (unsigned i = 0; i < 17; ++i) {
        unsigned entry = 0xf000 + i * 8;
        set_vram_word(&md, entry, 128 + 16);
        set_vram_word(&md, entry + 2, i == 16 ? 0 : i + 1);
        set_vram_word(&md, entry + 4, 1);
        set_vram_word(&md, entry + 6, i == 16 ? 128 : 0);
    }
    vdp_render_frame(&md, bitmap, false, VDP_VIEW_CENTER);
    assert(bitmap[0] == 0); // The first sixteen sprites are offscreen.
    set_vram_word(&md, 0xf000 + 15 * 8 + 6, 128);
    vdp_render_frame(&md, bitmap, false, VDP_VIEW_CENTER);
    assert(bitmap[0] == 0x0202);
    assert(bitmap[(VDP_VIEW_WIDTH / 2) * 8] == 0);
}

static void test_vertical_scaling(void)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    static uint16_t bitmap[VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2];
    const unsigned stride = VDP_VIEW_WIDTH / 2;
    vdp_register(&md, 1, 0x40);
    vdp_register(&md, 2, 8);
    vdp_register(&md, 4, 3);
    vdp_register(&md, 5, 0x20);
    vdp_register(&md, 13, 0x3f);
    set_vram_word(&md, 0x2000, 1);
    memset(memory.vram + 32 + 5 * 4, 0x11, 4);
    memset(memory.vram + 32 + 6 * 4, 0x22, 4);
    memset(memory.vram + 32 + 7 * 4, 0x33, 4);
    set_vram_word(&md, 0x4000, 128 + 20);
    set_vram_word(&md, 0x4004, 2);
    set_vram_word(&md, 0x4006, 128 + 16);
    memset(memory.vram + 64, 0x44, 32);

    vdp_render_frame(&md, bitmap, true, VDP_VIEW_CENTER);
    assert(bitmap[5 * stride] == 0x0101);
    assert(bitmap[6 * stride] == 0x0303);
    assert(bitmap[16 * stride + 8] == 0);
    assert(bitmap[17 * stride + 8] == 0x0404);
    assert(bitmap[24 * stride + 8] == 0x0404);
    assert(bitmap[25 * stride + 8] == 0);
}

static void test_horizontal_view(void)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    _Alignas(4) static uint16_t bitmap[VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2];
    _Alignas(4) static uint16_t offset_bitmap[VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2 + 1];
    vdp_register(&md, 1, 0x40);
    vdp_register(&md, 2, 8);
    vdp_register(&md, 4, 3);
    vdp_register(&md, 5, 0x20);
    vdp_register(&md, 12, 1);
    vdp_register(&md, 13, 0x3f);
    vdp_register(&md, 16, 1);
    set_vram_word(&md, 0x2000, 1);
    set_vram_word(&md, 0x2000 + 39 * 2, 2);
    memset(memory.vram + 32, 0x11, 32);
    memset(memory.vram + 64, 0x22, 32);

    vdp_render_frame(&md, bitmap, true, VDP_VIEW_FIT);
    assert(bitmap[0] == 0x0101);
    assert(bitmap[VDP_VIEW_WIDTH / 2 - 1] == 0x0202);
    vdp_render_frame(&md, bitmap, true, VDP_VIEW_LEFT);
    assert(bitmap[0] == 0x0101);
    assert(bitmap[VDP_VIEW_WIDTH / 2 - 1] == 0);
    vdp_render_frame(&md, bitmap, true, VDP_VIEW_CENTER);
    assert(bitmap[0] == 0);

    // An alternating foreground should keep its phase across 5-to-4
    // groups and across the boundary between adjacent source tiles.
    set_vram_word(&md, 0x2002, 1);
    memset(memory.vram + 32, 0x12, 4);
    memset(memory.vram + 36, 0x21, 4);
    vdp_render_frame(&md, bitmap, true, VDP_VIEW_FIT);
    for (unsigned i = 0; i < 6; ++i) {
        assert(bitmap[i] == 0x0201);
        assert(bitmap[VDP_VIEW_WIDTH / 2 + i] == 0x0102);
    }
    // Halfword-aligned destinations use the scalar Fit path.
    vdp_render_frame(&md, offset_bitmap + 1, true, VDP_VIEW_FIT);
    assert(memcmp(bitmap, offset_bitmap + 1, sizeof(bitmap)) == 0);
}

static void test_vdp_reads(const struct cartridge *cart)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    megadrive_reset(&md, cart, GENESIS_REGION_USA);
    vdp_register(&md, 15, 2);
    set_vram_word(&md, 0x100, 0x1234);
    assert(megadrive_write_word(&md, 0xc00004, 0x0100));
    assert(megadrive_write_word(&md, 0xc00004, 0));
    assert(megadrive_read_word(&md, 0xc00002) == 0x1234 && md.vdp_address == 0x102);
    md.cram[1] = 0x00e;
    assert(megadrive_write_word(&md, 0xc00004, 2));
    assert(megadrive_write_word(&md, 0xc00004, 0x20));
    assert(megadrive_read_byte(&md, 0xc00001) == 0x0e && md.vdp_address == 4);
    md.vsram[1] = 0x7fa;
    assert(megadrive_write_word(&md, 0xc00004, 2));
    assert(megadrive_write_word(&md, 0xc00004, 0x10));
    assert(megadrive_read_word(&md, 0xc00000) == 0x7fa && md.vdp_address == 4);

    md.frame_cycle = (235 * 3420 + 6) / 7;
    assert(megadrive_read_word(&md, 0xc00008) == 0xe500);
    assert(megadrive_read_byte(&md, 0xc0000a) == 0xe5);
    md.frame_cycle = 485;
    assert(megadrive_read_word(&md, 0xc00008) == 0x00fe);
    vdp_register(&md, 12, 1);
    assert(megadrive_read_word(&md, 0xc00008) == 0x00fe);
}

static void test_scanline_scroll(void)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    static uint16_t pixels[VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2];
    uint8_t code[0x270] = {
        0x00, 0xff, 0xfe, 0x00,
        0x00, 0x00, 0x02, 0x00,
        [0x70] = 0x00, 0x00, 0x02, 0x10,
        [0x78] = 0x00, 0x00, 0x02, 0x40,
        [0x200] =
        0x46, 0xfc, 0x20, 0x00,                          // move #$2000,sr
        0x60, 0xfe,                                      // bra.s to self
        [0x210] =
        0x23, 0xfc, 0x40, 0x00, 0x00, 0x10, 0x00, 0xc0, 0x00, 0x04,
        0x33, 0xfc, 0x00, 0x04, 0x00, 0xc0, 0x00, 0x00,  // plane A vscroll = 4
        0x33, 0xfc, 0x82, 0x28, 0x00, 0xc0, 0x00, 0x04,  // switch plane A map
        0x33, 0xfc, 0x85, 0x68, 0x00, 0xc0, 0x00, 0x04,  // switch sprite table
        0x4e, 0x73,
        [0x240] =
        0x23, 0xfc, 0x40, 0x00, 0x00, 0x10, 0x00, 0xc0, 0x00, 0x04,
        0x33, 0xfc, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00,  // reset in VBlank
        0x33, 0xfc, 0x82, 0x30, 0x00, 0xc0, 0x00, 0x04,
        0x33, 0xfc, 0x85, 0x70, 0x00, 0xc0, 0x00, 0x04,
        0x4e, 0x73,
    };
    const struct cartridge cart = {.data = code, .size = sizeof(code)};
    megadrive_reset(&md, &cart, GENESIS_REGION_AUTO);
    vdp_register(&md, 0, 0x10);
    vdp_register(&md, 1, 0x60);
    vdp_register(&md, 2, 0x30);
    vdp_register(&md, 4, 0x05);
    vdp_register(&md, 5, 0x70);
    vdp_register(&md, 10, 112);
    vdp_register(&md, 13, 0x3f);
    memset(md.memory->vram, 0x11, 16);
    memset(md.memory->vram + 16, 0x22, 16);
    md.memory->vram[0xe000 + 1] = 1;
    md.memory->vram[0xd000 + 1] = 2;
    megadrive_run_frame(&md);
    assert(!md.cpu.stopped && md.vsram[0] == 0);
    assert(md.vdp_row_count == 224 && md.vdp_raster_layout);
    assert(md.memory->vdp_rows[64].plane_a_base == 0x30);
    assert(md.memory->vdp_rows[160].plane_a_base == 0x28);
    assert(md.vdp_sprite_table_count == 2);
    assert(md.memory->vdp_rows[64].sprite_table == 1 && md.memory->vdp_sprite_tables[0][1] == 1);
    assert(md.memory->vdp_rows[160].sprite_table == 2 && md.memory->vdp_sprite_tables[1][1] == 2);
    assert(megadrive_scanline_vscroll(&md, 64, 0) == 0);
    assert(megadrive_scanline_vscroll(&md, 160, 0) == 4);
    vdp_render_frame(&md, pixels, false, VDP_VIEW_CENTER);
    assert(pixels[48 * VDP_VIEW_WIDTH / 2] == 0x0101);
    assert(pixels[144 * VDP_VIEW_WIDTH / 2] == 0x0202);

    const char *path = TEST_OUTPUT_DIR "/boot-test-raster.jsc";
    remove(path);
    const uint32_t identity = savestate_identity(&md);
    assert(savestate_save(path, identity, &md));
    md.vdp_row_count = 0;
    assert(savestate_load(path, identity, &md));
    assert(md.vdp_row_count == 224 && md.vdp_raster_layout);
    assert(md.memory->vdp_rows[160].sprite_table == 2);
    assert(md.memory->vdp_sprite_tables[1][1] == 2);
    assert(remove(path) == 0);

    vdp_register(&md, 0, 0);
    uint32_t revision = md.video_revision;
    megadrive_run_frame(&md);
    assert(!md.cpu.stopped && md.vdp_row_count == 0);
    assert(md.video_revision > revision);
    vdp_render_frame(&md, pixels, false, VDP_VIEW_CENTER);
    assert(pixels[144 * VDP_VIEW_WIDTH / 2] == 0x0101);
}

static void test_raster_column_scroll(const struct cartridge *cart)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    static uint16_t pixels[VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2];

    megadrive_reset(&md, cart, GENESIS_REGION_USA);
    vdp_register(&md, 1, 0x50);
    vdp_register(&md, 2, 8);
    vdp_register(&md, 4, 3);
    vdp_register(&md, 11, 4);
    vdp_register(&md, 13, 0x3f);
    vdp_register(&md, 15, 2);
    for (unsigned row = 0; row < 32; ++row) {
        set_vram_word(&md, 0x2000 + row * 64 + 2, 1);
        set_vram_word(&md, 0x2000 + row * 64 + 4, 1);
    }
    memset(memory.vram + 32, 0x11, 16);
    memset(memory.vram + 48, 0x22, 16);

    md.vdp_active_lines = 224;
    md.vdp_capture_raster = true;
    md.frame_cycle = (64 * 3420 + 6) / 7;
    // DMA fills consecutive columns of plane A while leaving plane B alone.
    vdp_register(&md, 15, 4);
    vdp_register(&md, 19, 2);
    vdp_register(&md, 20, 0);
    vdp_register(&md, 21, 0);
    vdp_register(&md, 22, 0);
    vdp_register(&md, 23, 0x70);
    work_ram_store_word(&md, 0xe00000, 4);
    work_ram_store_word(&md, 0xe00002, 7);
    assert(megadrive_write_word(&md, 0xc00004, 0x4004));
    assert(megadrive_write_word(&md, 0xc00004, 0x0090));
    assert(md.vsram[2] == 4 && md.vsram[3] == 0 && md.vsram[4] == 7);
    md.frame_cycle = (160 * 3420 + 6) / 7;
    assert(megadrive_write_word(&md, 0xc00004, 0x4004));
    assert(megadrive_write_word(&md, 0xc00004, 0x0010));
    assert(megadrive_write_word(&md, 0xc00000, 0));
    md.vdp_capture_raster = false;
    assert(md.vsram[2] == 0);
    assert(memory.vdp_rows[48].column_scroll && memory.vdp_column_scroll[48][2] == 0);
    assert(memory.vdp_rows[128].column_scroll && memory.vdp_column_scroll[128][2] == 4);

    const char *path = TEST_OUTPUT_DIR "/boot-test-column-scroll.jsc";
    remove(path);
    uint32_t identity = savestate_identity(&md);
    assert(savestate_save(path, identity, &md));
    memory.vdp_column_scroll[128][2] = 0;
    assert(savestate_load(path, identity, &md));
    assert(remove(path) == 0);
    vdp_render_frame(&md, pixels, false, VDP_VIEW_CENTER);
    assert(pixels[32 * VDP_VIEW_WIDTH / 2 + 8] == 0x0101);
    assert(pixels[112 * VDP_VIEW_WIDTH / 2 + 8] == 0x0202);
    assert(pixels[160 * VDP_VIEW_WIDTH / 2 + 8] == 0x0101);

    // A one-pixel horizontal shift moves the column-scroll boundary with it.
    set_vram_word(&md, 0xfc00, 1);
    vdp_render_frame(&md, pixels, false, VDP_VIEW_CENTER);
    assert(pixels[112 * VDP_VIEW_WIDTH / 2 + 8] == 0x0201);
}

static void test_interlace(const struct cartridge *cart)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    static uint16_t bitmap[VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2];
    megadrive_reset(&md, cart, GENESIS_REGION_USA);
    vdp_register(&md, 1, 0x40);
    vdp_register(&md, 2, 8);
    vdp_register(&md, 4, 3);
    vdp_register(&md, 5, 0x20);
    vdp_register(&md, 12, 6);
    vdp_register(&md, 13, 0x3f);

    memset(md.memory->vram + 64, 0x11, 4);
    memset(md.memory->vram + 68, 0x22, 4);
    memset(md.memory->vram + 128, 0x33, 4);
    memset(md.memory->vram + 132, 0x44, 4);
    set_vram_word(&md, 0x2080, 1);
    set_vram_word(&md, 0x4000, 256 + 32);
    set_vram_word(&md, 0x4004, 2);
    set_vram_word(&md, 0x4006, 128 + 16);

    vdp_render_frame(&md, bitmap, false, VDP_VIEW_CENTER);
    assert(bitmap[0] == 0x0101 && bitmap[8] == 0x0303);
    assert(!(megadrive_read_word(&md, 0xc00004) & 0x10));
    md.cpu.stopped = true;
    megadrive_run_frame(&md);
    vdp_render_frame(&md, bitmap, false, VDP_VIEW_CENTER);
    assert(bitmap[0] == 0x0202 && bitmap[8] == 0x0404);
    assert(megadrive_read_byte(&md, 0xc00005) & 0x10);
    megadrive_run_frame(&md);
    assert(!(megadrive_read_word(&md, 0xc00004) & 0x10));
}

static void test_stable_poll_loop(bool vdp_status, bool vblank)
{
    static struct megadrive_memory step_memory, run_memory;
    static const uint8_t ram_poll[] = {
        0x46, 0xfc, 0x23, 0x00,             // MOVE #$2300,SR
        0x4e, 0xb9, 0, 0, 0, 0x20,         // JSR $20
        0x60, 0xf4,                         // BRA to the start
        [0x20] = 0x30, 0x38, 0xff, 0x00,     // MOVE.W ($FF00).W,D0
        0x67, 0x00, 0x00, 0x06,             // BEQ.W to RTS
        [0x2c] = 0x4e, 0x75,
    };
    const uint8_t status_poll[] = {
        0x08, 0x39, 0, 3, 0, 0xc0, 0, 5,
        vblank ? 0x66 : 0x67, 0xf6,
    };
    struct megadrive step = {
        .memory = &step_memory,
        .rom = vdp_status ? status_poll : ram_poll,
        .rom_size = vdp_status ? sizeof(status_poll) : sizeof(ram_poll),
        .cpu = {.sr = 0x2300, .a[7] = 0xfffffc, .d[0] = 0x12345678},
        .vblank = vblank, .vdp_command_pending = true, .z80_reset = true,
        .frame_cycles = 128005,
    };
    step.rom_fetch_limit = step.rom_size;
    struct megadrive run = step;
    memset(&step_memory, 0, sizeof(step_memory));
    run_memory = step_memory;
    run.memory = &run_memory;
    unsigned end = 5 * (vdp_status ? 30 : 84);
    unsigned cycles = 0;
    while (cycles < end) {
        step.frame_cycle = cycles;
        unsigned elapsed = m68k_step(&step.cpu, &step);
        assert(elapsed && !step.cpu.stopped);
        cycles += elapsed;
    }
    assert(cycles == end);
    assert(m68k_run_until(&run, 0, end) == end);
    assert(memcmp(&step.cpu, &run.cpu, sizeof(step.cpu)) == 0);
    assert(memcmp(step_memory.ram, run_memory.ram, sizeof(step_memory.ram)) == 0);
    assert(step.frame_cycle == run.frame_cycle && step.vdp_command_pending == run.vdp_command_pending);
}

static void test_sprite_word_batch(bool terminal)
{
    static struct megadrive_memory step_memory, run_memory;
    static const uint8_t code[] = {
        0x3e, 0x15, 0x6a, 0, 0, 6,
        0x3a, 0x07, 0x18, 0x05, 0x3a, 0xc4, 0x51, 0xce, 0xff, 0xf2,
    };
    struct megadrive step = {
        .memory = &step_memory, .rom = code,
        .rom_size = sizeof(code), .rom_fetch_limit = sizeof(code),
        .cpu = {.sr = 0x2310, .a[5] = 0xff3000, .d = {
            [4] = 0x1234ab11, [5] = 0x11223344,
            [6] = 0xff120000 | (terminal ? 3 : 4), [7] = 0x77889900,
        }},
        .z80_reset = true, .frame_cycles = 128005,
    };
    memset(&step_memory, 0, sizeof(step_memory));
    work_ram_store_word(&step, 0x3000, 0x1234);
    work_ram_store_word(&step, 0x3002, 0x8156);
    work_ram_store_word(&step, 0x3004, 0x9a78);
    work_ram_store_word(&step, 0x3006, 0x1100);
    struct megadrive run = step;
    run_memory = step_memory;
    run.memory = &run_memory;
    unsigned end = 2 * (36 + 46) + (terminal ? 4 : 0), cycles = 0;
    while (cycles < end) {
        step.frame_cycle = cycles;
        unsigned elapsed = m68k_step(&step.cpu, &step);
        assert(elapsed && !step.cpu.stopped);
        cycles += elapsed;
    }
    assert(cycles == end && m68k_run_until(&run, 0, end) == end);
    assert(memcmp(&step.cpu, &run.cpu, sizeof(step.cpu)) == 0);
    assert(memcmp(step_memory.ram, run_memory.ram, sizeof(step_memory.ram)) == 0);
    assert(step.frame_cycle == run.frame_cycle);
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
    md->memory->ram[0xf620] = 1;
    assert(m68k_step(cpu, md) == 12 && m68k_step(cpu, md) == 10);
    assert(m68k_skip_idle(cpu, md, 50) == 44 && cpu->pc == 0x25e);
    md->memory->ram[0xf620] = 0;
    assert(m68k_skip_idle(cpu, md, 50) == 0);
}

static void test_m68k_batched_loops(void)
{
    static struct megadrive_memory direct_memory, batched_memory;
    static struct megadrive direct = {.memory = &direct_memory};
    static struct megadrive batched = {.memory = &batched_memory};
    uint8_t code[] = {
        0x30, 0xc2, 0x30, 0xc3, // move.w d2,(a0)+; move.w d3,(a0)+
        0x48, 0x43, 0xd6, 0x40, 0x48, 0x43, // swap d3; add.w d0,d3; swap d3
        0x51, 0xc9, 0xff, 0xf4, // dbra d1,0
        0x1a, 0x2a, 0x00, 0x20, // move.b $20(a2),d5
        0x66, 0x00, 0x00, 0x08, // bne.w out of the scan
        0x45, 0xea, 0x00, 0x40, // lea $40(a2),a2
        0x51, 0xce, 0xff, 0xf2, // dbra d6,14
        0x4a, 0x78, 0xf6, 0x44, 0x66, 0xfa, // tst.w $f644; bne.s back
        0x4a, 0x39, 0x00, 0xff, 0xa6, 0xca, 0x67, 0xf8, // tst.b $ffa6ca; beq.s back
    };
    direct.rom = code;
    direct.rom_size = sizeof(code);
    for (unsigned wide = 0; wide < 2; ++wide) {
        code[7] = wide ? 0x80 : 0x40;
        direct.cpu.pc = 0;
        direct.cpu.d[0] = wide ? 0x12340020 : 0x0020;
        direct.cpu.d[1] = 5;
        direct.cpu.d[2] = 0xcafe;
        direct.cpu.d[3] = 0xff90beef;
        direct.cpu.a[0] = 0xffffe0;
        for (unsigned i = 0; i < 6; ++i)
            m68k_step(&direct.cpu, &direct);
        batched = direct;
        batched_memory = direct_memory;
        batched.memory = &batched_memory;
        unsigned cycles = 0;
        for (unsigned i = 0; i < 18; ++i)
            cycles += m68k_step(&direct.cpu, &direct);
        assert(cycles == (wide ? 126 : 114));
        assert(m68k_skip_idle(&batched.cpu, &batched, cycles) == cycles);
        assert(memcmp(&direct.cpu, &batched.cpu, sizeof(direct.cpu)) == 0);
        assert(memcmp(direct.memory->ram, batched.memory->ram, sizeof(direct.memory->ram)) == 0);
    }

    direct.cpu.pc = 14;
    direct.cpu.d[5] = 0x1234ff99;
    direct.cpu.d[6] = 5;
    direct.cpu.a[2] = 0xff8000;
    direct.memory->ram[0x8120] = 1; // A later object must still go through the interpreter.
    for (unsigned i = 0; i < 4; ++i)
        m68k_step(&direct.cpu, &direct);
    batched = direct;
    batched_memory = direct_memory;
    batched.memory = &batched_memory;
    unsigned cycles = 0;
    for (unsigned i = 0; i < 12; ++i)
        cycles += m68k_step(&direct.cpu, &direct);
    assert(cycles == 126 && m68k_skip_idle(&batched.cpu, &batched, 200) == cycles);
    assert(memcmp(&direct.cpu, &batched.cpu, sizeof(direct.cpu)) == 0);
    assert(m68k_skip_idle(&batched.cpu, &batched, 200) == 0);

    direct.cpu.pc = 30;
    direct.memory->ram[0xf645] = 1;
    assert(m68k_step(&direct.cpu, &direct) == 12 && m68k_step(&direct.cpu, &direct) == 10);
    assert(m68k_skip_idle(&direct.cpu, &direct, 50) == 44);

    direct.cpu.pc = 36;
    assert(m68k_step(&direct.cpu, &direct) == 16 && m68k_step(&direct.cpu, &direct) == 10);
    batched = direct;
    batched_memory = direct_memory;
    batched.memory = &batched_memory;
    for (unsigned i = 0; i < 2; ++i)
        assert(m68k_step(&direct.cpu, &direct) == 16 && m68k_step(&direct.cpu, &direct) == 10);
    assert(m68k_skip_idle(&batched.cpu, &batched, 77) == 52);
    assert(memcmp(&direct.cpu, &batched.cpu, sizeof(direct.cpu)) == 0);
    batched.memory->ram[0xa6ca] = 1;
    assert(m68k_skip_idle(&batched.cpu, &batched, 77) == 0);
}

static void test_signed_byte_copy(void)
{
    static struct megadrive_memory direct_memory, batched_memory;
    static struct megadrive direct = {.memory = &direct_memory};
    static struct megadrive batched = {.memory = &batched_memory};
    const uint8_t code[] = {
        0x10, 0x1a, 0x48, 0x80, 0xd0, 0x43, // move.b (a2)+,d0; ext.w d0; add.w d3,d0
        0x22, 0xc0, 0x51, 0xc9, 0xff, 0xf6, // move.l d0,(a1)+; dbra d1,0
        0x7f, 0x80, 0xff, 0x01, 0xc0,
    };
    direct.rom = code;
    direct.rom_size = sizeof(code);
    direct.cpu.a[1] = 0xff0020;
    direct.cpu.a[2] = 12;
    direct.cpu.d[0] = 0x12340000;
    direct.cpu.d[1] = 5;
    direct.cpu.d[3] = 70;
    for (unsigned i = 0; i < 5; ++i)
        assert(m68k_step(&direct.cpu, &direct));
    batched = direct;
    batched_memory = direct_memory;
    batched.memory = &batched_memory;
    unsigned cycles = 0;
    for (unsigned i = 0; i < 15; ++i)
        cycles += m68k_step(&direct.cpu, &direct);
    assert(cycles == 114 && m68k_skip_idle(&batched.cpu, &batched, cycles) == cycles);
    assert(memcmp(&direct.cpu, &batched.cpu, sizeof(direct.cpu)) == 0);
    assert(memcmp(direct.memory->ram, batched.memory->ram, sizeof(direct.memory->ram)) == 0);

    batched.cpu.a[2] = sizeof(code) - 1;
    assert(m68k_skip_idle(&batched.cpu, &batched, 100) == 38); // Stop at the ROM boundary.
}

static void test_opcode_fetch_alias(void)
{
    static const uint8_t code[] = {0x70, 0x80}; // MOVEQ #-128,D0
    struct megadrive md = {.rom = code, .rom_size = sizeof(code), .rom_fetch_limit = sizeof(code)};
    md.cpu.pc = 0x01000000;
    assert(m68k_step(&md.cpu, &md) == 4);
    assert(md.cpu.pc == 0x01000002 && md.cpu.d[0] == 0xffffff80);
}

static void test_sprite_record_loop(bool indexed)
{
    static struct megadrive_memory direct_memory, batched_memory;
    static struct megadrive direct = {.memory = &direct_memory};
    static struct megadrive batched = {.memory = &batched_memory};
    const uint8_t indexed_code[] = {
        0x10, 0x18, 0x48, 0x80, 0xd0, 0x45, 0x32, 0xc0, // biased signed byte to word
        0x16, 0x18, 0x12, 0xfb, 0x30, 0x34, // index the ROM table with D3
        0x52, 0x04, 0x12, 0xc4, 0x54, 0x48, // sequence byte and source skip
        0x30, 0x18, 0xd0, 0x4a, 0x32, 0xc0, // word with address register bias
        0x30, 0x18, 0xd0, 0x46, 0x02, 0x40, 0x01, 0xff, // masked word with bias
        0x66, 0x02, 0x52, 0x40, 0x32, 0xc0, // map zero to one and store
        0x51, 0xc9, 0xff, 0xd6, // dbra d1,0
        [64] = 0x91, 0xa2, 0xb3,
    };
    const uint8_t direct_code[] = {
        0x10, 0x18, 0x48, 0x80, 0xd0, 0x45, 0x32, 0xc0, // biased signed byte to word
        0x12, 0xd8, 0x52, 0x04, 0x12, 0xc4, // copy one byte and write the sequence
        0x30, 0x18, 0xd0, 0x4a, 0x32, 0xc0, 0x54, 0x48, // biased word and source skip
        0x30, 0x18, 0xd0, 0x46, 0x02, 0x40, 0x01, 0xff, // masked word with bias
        0x66, 0x02, 0x52, 0x40, 0x32, 0xc0, // map zero to one and store
        0x51, 0xc9, 0xff, 0xda, // dbra d1,0
        [43] = 0,
    };
    unsigned branch = indexed ? 40 : 36;
    unsigned iteration = indexed ? 138 : 124;
    const uint8_t records[] = {
        0x80, 0, 0, 0, 0x12, 0x34, 0xff, 0xfe,
        0x7f, 1, 0, 0, 0x43, 0x21, 0x03, 0x20,
        0xff, 2, 0, 0, 0x00, 0x19, 0xff, 0xff,
    };
    direct.rom = indexed ? indexed_code : direct_code;
    direct.rom_size = indexed ? sizeof(indexed_code) : sizeof(direct_code);
    direct.cpu.pc = 0;
    direct.cpu.instruction_address = branch;
    direct.cpu.opcode = 0x51c9;
    direct.cpu.a[0] = 0xff1000;
    direct.cpu.a[1] = 0xff2000;
    direct.cpu.a[2] = 0x0102;
    direct.cpu.d[0] = 0xf00d0000;
    direct.cpu.d[1] = 3;
    direct.cpu.d[3] = 0x12340000;
    direct.cpu.d[4] = 0x560000fe;
    direct.cpu.d[5] = 0x20;
    direct.cpu.d[6] = 2;
    memcpy(direct_memory.ram + 0x1000, records, sizeof(records));

    const struct m68k initial_cpu = direct.cpu;
    batched = direct;
    batched_memory = direct_memory;
    batched.memory = &batched_memory;
    assert(m68k_skip_idle(&batched.cpu, &batched, iteration) == 0);
    unsigned cycles = 0;
    for (unsigned record = 0; record < 3; ++record) {
        do {
            cycles += m68k_step(&direct.cpu, &direct);
            assert(!direct.cpu.stopped);
        } while (direct.cpu.pc != 0);
    }
    assert(cycles == iteration * 3 + 2 && m68k_skip_idle(&batched.cpu, &batched, cycles) == cycles);
    assert(memcmp(&direct.cpu, &batched.cpu, sizeof(direct.cpu)) == 0);
    assert(memcmp(direct_memory.ram, batched_memory.ram, sizeof(direct_memory.ram)) == 0);

    // The cached entry also handles a DBRA that ends the loop.
    direct.cpu = batched.cpu = initial_cpu;
    direct.cpu.d[1] = batched.cpu.d[1] = 0;
    direct.z80_reset = batched.z80_reset = true;
    direct.frame_cycles = batched.frame_cycles = 128005;
    cycles = 0;
    do {
        cycles += m68k_step(&direct.cpu, &direct);
        assert(!direct.cpu.stopped);
    } while (direct.cpu.pc != branch + 4);
    assert(cycles == iteration + 6 && m68k_run_until(&batched, 0, cycles) == cycles);
    assert(memcmp(&direct.cpu, &batched.cpu, sizeof(direct.cpu)) == 0);
    assert(memcmp(direct_memory.ram, batched_memory.ram, sizeof(direct_memory.ram)) == 0);
}

static void test_savestate(struct megadrive *md)
{
    const char *path = TEST_OUTPUT_DIR "/boot-test.jsc";
    remove(path);
    uint32_t identity = savestate_identity(md);
    const uint32_t pc = md->cpu.pc;
    md->memory->ram[75] = 0x81;
    md->memory->vram[5] = 0x93;
    md->hint_pending = true;
    md->sound_cpu.pc = 0x1234;
    md->ym_address[0] = 0x27;
    megadrive_ym_write(md, 1, 5);
    megadrive_ym_advance(md, 90);
    const uint32_t timer_a = md->ym_timer_clocks[0];
    assert(savestate_save(path, identity, md));
    assert(savestate_exists(path));
    md->memory->ram[75] = md->memory->vram[5] = 0;
    md->cpu.pc = 0;
    md->hint_pending = false;
    md->sound_cpu.pc = 0;
    md->ym_timer_clocks[0] = 0;
    assert(!savestate_load(path, identity ^ 1, md));
    assert(md->cpu.pc == 0 && md->memory->ram[75] == 0);
    assert(savestate_load(path, identity, md));
    assert(md->cpu.pc == pc && md->memory->ram[75] == 0x81 && md->memory->vram[5] == 0x93);
    assert(md->hint_pending);
    assert(md->sound_cpu.userdata == md && md->sound_cpu.pc == 0x1234);
    assert(md->sound_cpu.mirrored_ram == md->memory->z80_ram);
    assert(md->ym_timer_clocks[0] == timer_a && timer_a != 0);
    FILE *file = fopen(path, "ab");
    assert(file && fputc(0xff, file) != EOF && fclose(file) == 0);
    assert(!savestate_load(path, identity, md));
    assert(md->cpu.pc == pc && md->memory->ram[75] == 0x81);
    assert(remove(path) == 0);
}

static void test_cartridge_sram(void)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    uint8_t rom[0x204] = {
        [0x84] = 0x00, 0x00, 0x02, 0x00, // TRAP #1 vector
        [0x100] = 0x34, 0x56,
        [0x120] = 0x4e, 0x41,             // TRAP #1
        [0x122] = 0x07, 0x88, 0x00, 0x02, // MOVEP.W D3,2(A0)
        [0x126] = 0xb3, 0x08,             // CMPM.B (A0)+,(A1)+
        [0x200] = 0x4e, 0x77,             // RTR
    };
    struct cartridge cart = {.data = rom, .size = sizeof(rom), .sram_start = 0x100, .sram_size = 4};
    megadrive_reset(&md, &cart, GENESIS_REGION_AUTO);
    assert(megadrive_read_word(&md, 0x100) == 0x3456);
    assert(megadrive_write_word(&md, 0xa130f0, 1));
    assert(megadrive_read_word(&md, 0x100) == 0);
    assert(megadrive_write_word(&md, 0x100, 0x1234) && md.sram_dirty);
    assert(megadrive_write_byte(&md, 0xa130f1, 3));
    assert(megadrive_write_byte(&md, 0x101, 0xff));
    assert(megadrive_read_word(&md, 0x100) == 0x1234);

    const char *path = TEST_OUTPUT_DIR "/boot-test.srm";
    remove(path);
    assert(saveram_flush(path, &md) && !md.sram_dirty);
    memset(md.memory->sram, 0, md.sram_size);
    saveram_load(path, &md);
    assert(megadrive_read_word(&md, 0x100) == 0x1234 && !md.sram_dirty);
    assert(remove(path) == 0);

    md.cpu.pc = 0x120;
    md.cpu.a[7] = 0xfff000;
    md.cpu.sr = 0x2010;
    assert(m68k_step(&md.cpu, &md) == 34 && md.cpu.pc == 0x200);
    assert(m68k_step(&md.cpu, &md) == 20 && md.cpu.pc == 0x122);
    assert(md.cpu.a[7] == 0xfff000 && md.cpu.sr == 0x2010);
    md.cpu.d[3] = 0x23456789;
    md.cpu.a[0] = 0xff0020;
    md.cpu.a[1] = 0xff0024;
    assert(m68k_step(&md.cpu, &md) == 16 && md.cpu.sr == 0x2010);
    assert(megadrive_read_word(&md, 0xff0022) == 0x6700);
    assert(megadrive_read_word(&md, 0xff0024) == 0x8900);
    assert(m68k_step(&md.cpu, &md) == 12 && md.cpu.sr == 0x2018);
    assert(md.cpu.a[0] == 0xff0021 && md.cpu.a[1] == 0xff0025);

    const char *state = TEST_OUTPUT_DIR "/boot-sram-test.jsc";
    remove(state);
    unsigned identity = savestate_identity(&md);
    assert(savestate_save(state, identity, &md));
    md.memory->sram[0] = 0xff;
    assert(megadrive_write_byte(&md, 0xa130f1, 0));
    assert(savestate_load(state, identity, &md));
    assert(md.sram_control == 3 && md.sram_dirty && megadrive_read_word(&md, 0x100) == 0x1234);
    assert(remove(state) == 0);
}

static void test_sram_instruction_fetch(void)
{
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
    uint8_t program[0x10e] = {
        [4] = 0x00, 0x00, 0x00, 0x20,
        [0x20] = 0x13, 0xfc, 0x00, 0x01, 0x00, 0xa1, 0x30, 0xf1, // Enable SRAM
        [0x28] = 0x4e, 0xf9, 0x00, 0x00, 0x01, 0x00,             // JMP $100
        [0x100] = 0x4a, 0xfc,                                    // ILLEGAL in ROM
        [0x10a] = 0x52, 0x80,                                    // ADDQ.L #1,D0
        [0x10c] = 0x60, 0xfe,                                    // BRA.S to itself
    };
    const uint8_t overlay[] = {
        0x70, 0x2a,                                    // MOVEQ #42,D0
        0x13, 0xfc, 0x00, 0x00, 0x00, 0xa1, 0x30, 0xf1, // Disable SRAM
        0x4a, 0xfc,                                    // ILLEGAL in SRAM
    };
    struct cartridge cart = {
        .data = program, .size = sizeof(program),
        .sram_start = 0x100, .sram_size = sizeof(overlay),
    };
    megadrive_reset(&md, &cart, GENESIS_REGION_AUTO);
    memcpy(md.memory->sram, overlay, sizeof(overlay));

    megadrive_run_frame(&md);

    assert(!md.cpu.stopped && md.cpu.pc == 0x10c);
    assert(!md.sram_control && md.cpu.d[0] == 43);
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

    // The audible oscillator loop and the muted block advance must leave the
    // same phase when noise is clocked by the fastest tone.
    struct psg muted, audible;
    int16_t other[512];
    uint16_t registers[8] = {27, 15, 67, 15, 0, 15, 7, 15};
    psg_reset(&muted, true);
    psg_reset(&audible, true);
    psg_update(&muted, registers);
    registers[7] = 10;
    psg_update(&audible, registers);
    psg_render(&muted, samples, 512);
    psg_render(&audible, other, 512);
    for (unsigned i = 0; i < 512; ++i)
        assert(samples[i] == 0);
    assert(muted.noise == audible.noise && muted.clock_phase == audible.clock_phase);
    psg_update(&muted, registers);
    psg_render(&muted, samples, 512);
    psg_render(&audible, other, 512);
    assert(memcmp(samples, other, sizeof(samples)) == 0);
}

static void test_frame_pacing(void)
{
    struct frame_pacing pacing = {0};
    assert(frame_pacing_batch(&pacing, 40, true, false, false) == 1);
    assert(frame_pacing_batch(&pacing, 3, true, true, false) == 2);
    assert(pacing.pending_frames == 1);
    assert(frame_pacing_batch(&pacing, 0, true, true, false) == 1);
    assert(pacing.pending_frames == 0);
    assert(frame_pacing_batch(&pacing, 40, true, true, false) == 2);
    assert(pacing.pending_frames == 6);
    assert(frame_pacing_batch(&pacing, 0, false, true, false) == 0);
    assert(pacing.pending_frames == 0);

    unsigned pal_frames = frame_pacing_batch(&pacing, 1, true, false, true);
    for (unsigned i = 1; i < DS_REFRESH; ++i)
        pal_frames += frame_pacing_batch(&pacing, 1, true, true, true);
    assert(pal_frames == PAL_REFRESH && pacing.pending_frames == 0);

    struct video_pacing video = {0};
    video_pacing_observe(&video, 2);
    video_pacing_observe(&video, 1);
    assert(!video.limit_draws);
    video_pacing_observe(&video, 3);
    assert(video.limit_draws);
    video_pacing_advance(&video, 60, 100);
    assert(video_pacing_due(&video, 1));
    video_pacing_drawn(&video, 80, 1, 100);
    assert(!video_pacing_due(&video, 1));
    video_pacing_advance(&video, 60, 100);
    assert(!video_pacing_due(&video, 2));
    video_pacing_advance(&video, 60, 100);
    assert(video_pacing_due(&video, 3));
    video_pacing_advance(&video, 900, 100);
    assert(!video_pacing_due(&video, 5));
    assert(video_pacing_due(&video, 6));
}

int main(void)
{
    test_sprite_word_batch(false);
    test_sprite_word_batch(true);
    test_stable_poll_loop(false, false);
    test_stable_poll_loop(true, false);
    test_stable_poll_loop(true, true);
    test_frame_pacing();
    test_pending_vdp_interrupt();
    static struct megadrive_memory memory;
    static struct megadrive md = {.memory = &memory};
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
    test_status_immediates();
    test_cartridge_sram();
    test_sram_instruction_fetch();
    test_fm_output();
    test_fm_mask_transitions();
    test_fm_zero_sustain_level();
    test_fm_phase_increment();
    test_fm_timer_mode_writes();
    test_fm_pitch_latches(&cartridge);
    test_dac_timing(&cartridge);
    test_z80_dac_writes(&cartridge);
    test_z80_indexed_dac(&cartridge);
    test_z80_mirrored_words(&cartridge);
    test_startup_bus(&md);
    test_six_button_controller();
    test_z80_delay_loops(&cartridge);
    test_z80_delay_exits(&cartridge);
    test_z80_ym_status_poll(&cartridge);
    test_z80_and_ym(&md);
    test_vdp_dma(&md);
    test_vdp_render(&md);
    test_vdp_reads(&cartridge);
    test_interlace(&cartridge);
    test_sprite_scanline_limit();
    test_vertical_scaling();
    test_horizontal_view();
    test_scanline_scroll();
    test_raster_column_scroll(&cartridge);

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
    test_m68k_batched_loops();
    test_signed_byte_copy();
    test_opcode_fetch_alias();
    test_sprite_record_loop(true);
    test_sprite_record_loop(false);
    md.cpu.pc = 0x264;
    md.cpu.d[0] = 0x12345678;
    md.cpu.d[1] = 0x89abcdef;
    assert(m68k_step(&md.cpu, &md) == 6);
    assert(md.cpu.d[0] == 0x89abcdef && md.cpu.d[1] == 0x12345678);
    md.cpu.a[0] = 0xff0000;
    assert(megadrive_write_word(&md, 0xff0010, 0x8001));
    assert(m68k_step(&md.cpu, &md) == 16);
    assert(megadrive_read_word(&md, 0xff0010) == 0xc000 && (md.cpu.sr & 31) == 25);
    md.cpu.sr = 0x2704;
    uint32_t stack = md.cpu.a[7];
    assert(m68k_step(&md.cpu, &md) == 14 && md.cpu.a[7] == stack - 2);
    assert(megadrive_read_word(&md, stack - 2) == 0x2704);
    md.cpu.sr = 0x2300;
    assert(m68k_step(&md.cpu, &md) == 16 && md.cpu.a[7] == stack && md.cpu.sr == 0x2704);
    assert(megadrive_write_byte(&md, 0xff0011, 0x55));
    assert(m68k_step(&md.cpu, &md) == 20 && megadrive_read_byte(&md, 0xff0011) == 0);
    assert(m68k_step(&md.cpu, &md) == 6 && md.cpu.d[1] == 0x123456ff && md.cpu.sr == 0x2704);
    test_savestate(&md);
    test_psg();

    megadrive_reset(&md, &cartridge, GENESIS_REGION_USA);
    md.cpu.pc = 0x27a;
    vdp_register(&md, 0, 0x14);
    vdp_register(&md, 10, 55);
    megadrive_run_frame(&md);
    assert(md.hint_pending && md.cpu.d[2] == 0);
    md.cpu.sr = 0x2300;
    megadrive_run_frame(&md);
    assert(!md.hint_pending && !md.cpu.stopped && md.cpu.d[2] == 5);
    md.frame_cycle = 50;
    assert(megadrive_read_word(&md, 0xc00004) & 4);
    md.frame_cycle = 150;
    assert(!(megadrive_read_word(&md, 0xc00004) & 4));
}
