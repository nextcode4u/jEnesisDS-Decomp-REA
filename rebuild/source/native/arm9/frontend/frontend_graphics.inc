/* Frontend graphics. Release range 0x02006b78–0x02006f2c. */


/* 0x02006b78 */
.global copy_rom_information_overlay_tiles
copy_rom_information_overlay_tiles:
    ldr        r0, .L_02006b88
    ldr        r1, .L_02006b8c
    mov        r2, #0x80
    b          swiCopy_arm_veneer
.L_02006b88:
    .word address_0208a0e8
.L_02006b8c:
    .word 0x06201540

/* 0x02006b90 */
.global restore_overlay_tilemap_row
restore_overlay_tilemap_row:
    lsl        r3, r0, #6
    ldr        r0, .L_02006bac
    add        r1, r3, #0x6200000
    add        r0, r3, r0
    add        r1, r1, #0x1000
    mov        r2, #0x40
    b          swiCopy_arm_veneer
.L_02006bac:
    .word address_02089ba8

/* 0x02006bb0 */
.global load_subscreen_palette_tiles_and_map
load_subscreen_palette_tiles_and_map:
    str        lr, [sp, #-4]!
    ldr        r2, .L_02006c10
    ldr        ip, .L_02006c14
    ldr        r0, .L_02006c18
    ldr        r1, .L_02006c1c
    sub        sp, sp, #4
.L_02006bc8:
    add        r3, r2, ip
    ldrh       r3, [r3, r0]
    strh       r3, [r2], #2
    cmp        r2, r1
    bne        .L_02006bc8
    ldr        ip, .L_02006c20
    ldr        r3, .L_02006c24
    ldr        r0, .L_02006c28
    ldr        r1, .L_02006c2c
    mov        r2, #0x2700
    strh       ip, [r3, #0xfe]
    bl         swiCopy_arm_veneer
    ldr        r0, .L_02006c30
    ldr        r1, .L_02006c34
    mov        r2, #0x600
    add        sp, sp, #4
    ldr         lr, [sp], #4
    b          swiCopy_arm_veneer
.L_02006c10:
    .word 0x05000400
.L_02006c14:
    .word address_020872a8
.L_02006c18:
    .word 0xfafffc00
.L_02006c1c:
    .word 0x050005e0
.L_02006c20:
    .word 0x0000035f
.L_02006c24:
    .word 0x05000500
.L_02006c28:
    .word address_020874a8
.L_02006c2c:
    .word 0x06208000
.L_02006c30:
    .word address_02089ba8
.L_02006c34:
    .word 0x06201000
    push       {r4, r5, r6, lr}
    sub        sp, sp, #8
    bl         swiWaitForVBlank
    ldr        r3, .L_02006cf4
    mov        r5, #0x4000000
    mov        r0, #0
    str        r3, [r5]
    bl         select_background_tilemap_layout
    bl         initialize_ds_sprite_attribute_buffer
    ldrh       r4, [r5]
    ldr        ip, .L_02006cf8
    ldr        r6, .L_02006cfc
    orr        r4, r4, #0x20
    mov        r1, #9
    mov        r2, #4
    mov        r3, #2
    strh       r4, [r5]
    mov        r0, #1
    str        ip, [r6]
    bl         vramSetMainBanks_arm_veneer
    mov        r0, #2
    bl         vramSetBankE_arm_veneer
    mov        ip, #0x288
    strh       ip, [r6, #0xa]
    ldr        ip, .L_02006d00
    ldr        r0, .L_02006d04
    strh       ip, [r6, #8]
    ldr        r1, .L_02006d08
    ldr        r2, .L_02006d0c
    mov        r3, #0x5f
    mov        r4, #0xf
    str        r4, [sp]
    bl         initialize_text_overlay_tiles
    bl         load_subscreen_palette_tiles_and_map
    bl         adjust_overlay_tile_palette_indices
    ldr        r2, .L_02006d10
    ldr        ip, .L_02006d14
    ldr        r0, .L_02006d18
    ldr        r1, .L_02006d1c
.L_02006cd4:
    add        r3, r2, ip
    ldrh       r3, [r3, r0]
    strh       r3, [r2], #2
    cmp        r2, r1
    bne        .L_02006cd4
    add        sp, sp, #8
    pop        {r4, r5, r6, lr}
    b          swiWaitForVBlank
.L_02006cf4:
    .word 0x00113f10
.L_02006cf8:
    .word 0x00010300
.L_02006cfc:
    .word SUB_DISPLAY_CR
.L_02006d00:
    .word 0x00001f90
.L_02006d04:
    .word address_02085aa8
.L_02006d08:
    .word 0x06210000
.L_02006d0c:
    .word 0x0620f800
.L_02006d10:
    .word 0x050005e0
.L_02006d14:
    .word address_02085a88
.L_02006d18:
    .word 0xfafffa20
.L_02006d1c:
    .word 0x05000600

/* 0x02006d20 */
.global show_startup_graphics_and_run_scanline_transition
show_startup_graphics_and_run_scanline_transition:
    push       {r4, r5, r6, lr}
    bl         swiWaitForVBlank
    ldr        ip, .L_02006ee0
    mov        r4, #0x4000000
    mov        r1, #9
    mov        r2, #4
    mov        r3, #2
    mov        r0, #1
    str        ip, [r4]
    bl         vramSetMainBanks_arm_veneer
    ldr        r3, .L_02006ee4
    mov        r2, #0
    strh       r3, [r4, #0xe]
    mov        r3, #0x100
    strh       r3, [r4, #0x30]
    strh       r3, [r4, #0x36]
    str        r2, [r4, #0x38]
    ldr        r3, .L_02006ee8
    str        r2, [r4, #0x3c]
    ldr        r2, .L_02006eec
    mov        r6, #0xc8
    ldr        r0, .L_02006ef0
    ldr        r1, .L_02006ef4
    strh       r6, [r4, #0x50]
    str        r2, [r3]
    mov        r3, #0x5000000
.L_02006d88:
    ldrh       r2, [r1], #2
    strh       r2, [r3], #2
    cmp        r3, r0
    bne        .L_02006d88
    ldr        r0, .L_02006ef8
    ldr        r1, .L_02006efc
    mov        r2, #0x3e80
    bl         swiCopy_arm_veneer
    ldr        r0, .L_02006f00
    ldr        r1, .L_02006f04
    mov        r2, #0x300
    bl         swiCopy_arm_veneer
    mov        r4, #0
.L_02006dbc:
    add        r4, r4, #1
    bl         swiWaitForVBlank
    cmp        r4, #0x78
    bne        .L_02006dbc
    sub        r4, r4, #0x78
    mov        r5, r4
.L_02006dd4:
    mov        r2, #0x4000000
    ldrh       r3, [r2, #6]
    lsl        r3, r3, #0x17
    lsr        r3, r3, #0x17
    cmp        r3, #0
    bne        .L_02006dd4
    mov        r0, r3
    mov        lr, r2
    and        ip, r5, #1
.L_02006df8:
    cmp        ip, #0
    streq      ip, [lr, #0x38]
    beq        .L_02006e44
    ldr        r2, .L_02006f08
    sub        r3, r0, #0x60
    cmp        r3, #0
    rsblt      r3, r3, #0
    smull      r6, r1, r2, r3
    asr        r3, r3, #0x1f
    rsb        r3, r3, r1, asr #2
    mul        r2, r3, r3
    tst        r0, #1
    rsbeq      r3, r4, #0
    addne      r3, r2, r4
    rsbeq      r3, r2, r3
    lslne      r3, r3, #7
    lsleq      r3, r3, #7
    strne      r3, [lr, #0x38]
    streq      r3, [lr, #0x38]
.L_02006e44:
    mov        r2, #0x4000000
    ldrh       r3, [r2, #6]
    lsl        r3, r3, #0x17
    lsr        r3, r3, #0x17
    cmp        r0, r3
    beq        .L_02006e44
    add        r0, r0, #1
    cmp        r0, #0xc0
    bne        .L_02006df8
    lsl        r3, r5, #0x10
    add        r5, r5, #1
    lsr        r3, r3, #0x10
    cmp        r5, #0x1f
    strh       r3, [r2, #0x54]
    addls      r4, r4, #3
    bls        .L_02006dd4
    bl         swiWaitForVBlank
    ldr        r2, .L_02006ef0
    mov        r3, #0x5000000
.L_02006e90:
    mov        r1, #0
    strh       r1, [r3], #2
    cmp        r3, r2
    bne        .L_02006e90
    ldr        r3, .L_02006efc
    ldr        r2, .L_02006f0c
.L_02006ea8:
    mov        r6, #0
    strh       r6, [r3], #2
    cmp        r3, r2
    bne        .L_02006ea8
    ldr        r3, .L_02006f04
    ldr        r2, .L_02006f10
.L_02006ec0:
    mov        r1, #0
    strh       r1, [r3], #2
    cmp        r3, r2
    bne        .L_02006ec0
    mov        r3, #0x4000000
    strh       r1, [r3, #0x54]
    strh       r1, [r3, #0x50]
    pop        {r4, r5, r6, pc}
.L_02006ee0:
    .word 0x00010801
.L_02006ee4:
    .word 0x000042c8
.L_02006ee8:
    .word SUB_DISPLAY_CR
.L_02006eec:
    .word 0x00010100
.L_02006ef0:
    .word 0x05000200
.L_02006ef4:
    .word address_0208a1a8
.L_02006ef8:
    .word address_0208a3a8
.L_02006efc:
    .word 0x06008000
.L_02006f00:
    .word address_0208e228
.L_02006f04:
    .word 0x06001000
.L_02006f08:
    .word 0x66666667
.L_02006f0c:
    .word 0x0600be80
.L_02006f10:
    .word 0x06001300
    ldr        r3, .L_02006f28
    mov        r2, #0
    ldr        r0, [r3]
    str        r2, [r3]
    bx         lr
.L_02006f28:
    .word 0x020993c8
