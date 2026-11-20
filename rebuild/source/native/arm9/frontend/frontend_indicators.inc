/* Frontend indicators. Release range 0x02006730–0x02006a44. */


/* 0x02006730 */
.global adjust_overlay_tile_palette_indices
adjust_overlay_tile_palette_indices:
    ldr        r2, .L_02006780
    add        r1, r2, #0x740
.L_02006738:
    ldrb       r3, [r2]
    sub        r3, r3, #0x40
    strb       r3, [r2], #1
    cmp        r2, r1
    bne        .L_02006738
    add        r1, r2, #0x500
.L_02006750:
    ldrb       r3, [r2]
    sub        r3, r3, #0x20
    strb       r3, [r2], #1
    cmp        r2, r1
    bne        .L_02006750
    add        r1, r2, #0x780
.L_02006768:
    ldrb       r3, [r2]
    sub        r3, r3, #0x50
    strb       r3, [r2], #1
    cmp        r2, r1
    bne        .L_02006768
    bx         lr
.L_02006780:
    .word address_020887e8

/* 0x02006784 */
.global draw_rom_browser_row_highlight
draw_rom_browser_row_highlight:
    ldr        r2, .L_020067c8
    lsl        r0, r0, #6
    mov        r1, #0x4b
    strh       r1, [r0, r2]
    add        r3, r0, #0x6200000
    ldr        r1, .L_020067cc
    add        r3, r3, #0x1000
    ldr        ip, .L_020067d0
    strh       r1, [r3, #0x3e]
    mov        r2, #0
.L_020067ac:
    add        r3, r0, r2
    add        r2, r2, #2
    mov        r1, #0x4c
    cmp        r2, #0x3c
    strh       r1, [r3, ip]
    bne        .L_020067ac
    bx         lr
.L_020067c8:
    .word 0x06201000
.L_020067cc:
    .word 0x0000044b
.L_020067d0:
    .word 0x06201002

/* 0x020067d4 */
.global draw_rom_region_indicator
draw_rom_region_indicator:
    cmp        r0, #1
    ldr        r3, .L_0200688c
    beq        .L_02006858
    bhs        .L_02006818
    mov        r2, #0x62
    strh       r2, [r3, #0xbc]
    mov        r2, #0x52
    strh       r2, [r3, #0x78]
    mov        r2, #0x53
    strh       r2, [r3, #0x7a]
    mov        r2, #0x54
    strh       r2, [r3, #0x7c]
    mov        r2, #0x60
    strh       r2, [r3, #0xb8]
    mov        r2, #0x61
    strh       r2, [r3, #0xba]
    bx         lr
.L_02006818:
    cmp        r0, #2
    bxne       lr
    ldr        r3, .L_0200688c
    mov        r2, #0x65
    strh       r2, [r3, #0xbc]
    mov        r2, #0x55
    strh       r2, [r3, #0x78]
    mov        r2, #0x56
    strh       r2, [r3, #0x7a]
    mov        r2, #0x57
    strh       r2, [r3, #0x7c]
    mov        r2, #0x63
    strh       r2, [r3, #0xb8]
    mov        r2, #0x64
    strh       r2, [r3, #0xba]
    bx         lr
.L_02006858:
    mov        r2, #0x5f
    strh       r2, [r3, #0xbc]
    mov        r2, #0x4f
    strh       r2, [r3, #0x78]
    mov        r2, #0x50
    strh       r2, [r3, #0x7a]
    mov        r2, #0x51
    strh       r2, [r3, #0x7c]
    mov        r2, #0x5d
    strh       r2, [r3, #0xb8]
    mov        r2, #0x5e
    strh       r2, [r3, #0xba]
    bx         lr
.L_0200688c:
    .word 0x06201500

/* 0x02006890 */
.global draw_cartridge_sram_indicator
draw_cartridge_sram_indicator:
    ldr        r3, .L_020068a8
    mov        r2, #0x5c
    strh       r2, [r3, #0xb6]
    mov        r2, #0x4e
    strh       r2, [r3, #0x76]
    bx         lr
.L_020068a8:
    .word 0x06201500

/* 0x020068ac */
.global draw_rom_video_standard_indicator
draw_rom_video_standard_indicator:
    ldr        r2, .L_02006904
    cmp        r0, #0
    mov        r3, r2
    beq        .L_020068e0
    mov        r3, #0x69
    strh       r3, [r2, #0x8c]
    mov        r3, #0x5a
    strh       r3, [r2, #0x4a]
    mov        r3, #0x5b
    strh       r3, [r2, #0x4c]
    mov        r3, #0x68
    strh       r3, [r2, #0x8a]
    bx         lr
.L_020068e0:
    mov        r2, #0x67
    strh       r2, [r3, #0x8c]
    mov        r2, #0x58
    strh       r2, [r3, #0x4a]
    mov        r2, #0x59
    strh       r2, [r3, #0x4c]
    mov        r2, #0x66
    strh       r2, [r3, #0x8a]
    bx         lr
.L_02006904:
    .word 0x06201500

/* 0x02006908 */
.global set_fps_overlay_digits
set_fps_overlay_digits:
    push       {r4, lr}
    ldr        r3, .L_0200699c
    ldr        lr, .L_020069a0
    umull      r2, ip, r3, r0
    umull      r3, r2, lr, r0
    lsr        ip, ip, #5
    lsr        r2, r2, #3
    umull      r4, r1, lr, r2
    umull      r4, r3, lr, ip
    lsr        r1, r1, #3
    lsr        r3, r3, #3
    add        lr, r2, r2, lsl #2
    add        r3, r3, r3, lsl #2
    add        r1, r1, r1, lsl #2
    sub        ip, ip, r3, lsl #1
    sub        r0, r0, lr, lsl #1
    sub        r2, r2, r1, lsl #1
    add        ip, ip, #0x6a
    add        r2, r2, #0x6a
    add        r0, r0, #0x6a
    lsl        ip, ip, #0x10
    lsl        r2, r2, #0x10
    lsl        r0, r0, #0x10
    ldr        r1, .L_020069a4
    lsr        ip, ip, #0x10
    lsr        r2, r2, #0x10
    lsr        r0, r0, #0x10
    add        lr, ip, #0xa
    add        r4, r2, #0xa
    add        r3, r0, #0xa
    strh       r3, [r1, #0x86]
    strh       lr, [r1, #0x82]
    strh       r4, [r1, #0x84]
    strh       ip, [r1, #0x42]
    strh       r2, [r1, #0x44]
    strh       r0, [r1, #0x46]
    pop        {r4, pc}
.L_0200699c:
    .word 0x51eb851f
.L_020069a0:
    .word 0xcccccccd
.L_020069a4:
    .word 0x06201500

/* 0x020069a8 */
.global draw_state_slots_label
draw_state_slots_label:
    ldr        r3, .L_020069e0
    mov        r2, #0x9b
    strh       r2, [r3, #0xa6]
    mov        r2, #0x8a
    strh       r2, [r3, #0x62]
    mov        r2, #0x8b
    strh       r2, [r3, #0x64]
    mov        r2, #0x8c
    strh       r2, [r3, #0x66]
    mov        r2, #0x99
    strh       r2, [r3, #0xa2]
    mov        r2, #0x9a
    strh       r2, [r3, #0xa4]
    bx         lr
.L_020069e0:
    .word 0x06201500

/* 0x020069e4 */
.global draw_savestate_slot_presence_indicator
draw_savestate_slot_presence_indicator:
    and        r0, r0, #1
    lsl        r3, r0, #1
    push       {r4, r5, r6, lr}
    add        r3, r3, r0
    lsl        r5, r3, #1
    add        r4, r5, #0x7e
    cmp        r1, #0
    ldr        r6, .L_02006a40
    addeq      r4, r4, #3
    ldr        r3, .L_02006a40
    add        r6, r5, r6
    add        r2, r4, #0x11
    add        r1, r4, #1
    add        r0, r4, #2
    add        ip, r4, #0xf
    add        lr, r4, #0x10
    strh       r4, [r5, r3]
    strh       r2, [r6, #0x44]
    strh       r1, [r6, #2]
    strh       r0, [r6, #4]
    strh       ip, [r6, #0x40]
    strh       lr, [r6, #0x42]
    pop        {r4, r5, r6, pc}
.L_02006a40:
    .word 0x06201568
