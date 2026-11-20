/* Configuration and savestates. Release range 0x02002c68–0x0200311c. */


/* 0x02002c68 */
.global run_configuration_menu
run_configuration_menu:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        sb, .L_02002e30
    sub        sp, sp, #4
    mov        r8, r0
    ldr        sl, [sb]
    bl         clear_text_overlay_tilemap
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    ldr        r0, .L_02002e34
    mov        r1, #5
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r0, .L_02002e38
    mov        r1, #6
    mov        r2, #1
    bl         write_text_at_tile_position
    cmp        r8, #0
    beq        .L_02002df0
    ldr        r0, .L_02002e3c
    mov        r1, #0x15
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r0, .L_02002e40
    mov        r1, #0x16
    mov        r2, #1
    bl         write_text_at_tile_position
.L_02002ccc:
    ldr        r6, .L_02002e44
    mov        r3, #0
    ldr        fp, .L_02002e48
    ldr        r7, .L_02002e4c
    str        r3, [r6]
.L_02002ce0:
    bl         scanKeys_arm_veneer
    ldr        r5, .L_02002e48
    mov        r4, #0
.L_02002cec:
    mov        r0, r5
    mov        r1, r4
    add        r4, r4, #1
    bl         draw_on_off_option_text
    cmp        r4, #0xa
    add        r5, r5, #0xc
    bne        .L_02002cec
    ldr        r0, [r7]
    add        r0, r0, #8
    bl         draw_rom_browser_row_highlight
    bl         keysHeld_arm_veneer
    tst        r0, #0x40
    mov        r4, r0
    beq        .L_02002d6c
    ldr        r3, [r6]
    tst        r3, #0x40
    bne        .L_02002d6c
    ldr        r3, .L_02002e4c
    ldr        r2, [r3]
    cmp        r2, #0
    bne        .L_02002e28
.L_02002d40:
    tst        r4, #1
    beq        .L_02002d54
    ldr        r3, [r6]
    tst        r3, #1
    beq        .L_02002e14
.L_02002d54:
    tst        r4, #4
    bne        .L_02002d94
    str        r4, [r6]
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    b          .L_02002ce0
.L_02002d6c:
    tst        r4, #0x80
    beq        .L_02002d40
    ldr        r3, [r6]
    tst        r3, #0x80
    bne        .L_02002d40
    ldr        r3, [r7]
    cmp        r3, #8
    bhi        .L_02002d40
    bl         move_settings_highlight_down
    b          .L_02002d40
.L_02002d94:
    str        r4, [r6]
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    ldr        r0, [r7]
    add        r0, r0, #8
    bl         restore_overlay_tilemap_row
    bl         swiWaitForVBlank
    ldr        r3, [sb]
    cmp        sl, r3
    beq        .L_02002dc4
    bl         configure_frame_timing_callbacks
.L_02002dc4:
    bl         swiWaitForVBlank
    mov        r3, #0
    cmp        r8, #0
    str        r3, [r6]
    beq        .L_02002de4
    bl         clear_text_overlay_tilemap
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    bl         draw_current_rom_information
.L_02002de4:
    mov        r0, #1
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02002df0:
    ldr        r0, .L_02002e3c
    mov        r1, #0x15
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r0, .L_02002e50
    mov        r1, #0x16
    mov        r2, #1
    bl         write_text_at_tile_position
    b          .L_02002ccc
.L_02002e14:
    ldr        r0, [r7]
    add        r0, r0, r0, lsl #1
    add        r0, fp, r0, lsl #2
    bl         advance_configuration_value
    b          .L_02002d54
.L_02002e28:
    bl         move_settings_highlight_up
    b          .L_02002d40
.L_02002e30:
    .word emulator_option_flags
.L_02002e34:
    .word address_0208f158
.L_02002e38:
    .word address_0208f0f8
.L_02002e3c:
    .word address_0208f168
.L_02002e40:
    .word address_0208f180
.L_02002e44:
    .word previous_ds_keys
.L_02002e48:
    .word address_02085a10
.L_02002e4c:
    .word 0x02098fe8
.L_02002e50:
    .word address_0208f198

/* 0x02002e54 */
.global display_savestate_slot_status
display_savestate_slot_status:
    push       {r4, r5, r6, r7, r8, sl, lr}
    ldr        r8, .L_020030f8
    mov        r3, #0
    cmp        r0, #1
    sub        sp, sp, #4
    mov        r7, r0
    str        r3, [r8]
    beq        .L_0200304c
    cmp        r0, #2
    beq        .L_02002fd4
.L_02002e7c:
    bl         swiWaitForVBlank
    mov        r0, #0xe
    bl         clear_text_rows_from
    mov        r1, #0xe
    mov        r2, #8
    ldr        r0, .L_020030fc
    bl         write_text_at_tile_position
    mov        r0, r7
    mov        r1, #0xe
    mov        r2, #0x17
    bl         format_hexadecimal_value
    mov        sl, #1
.L_02002eac:
    ldr        r0, .L_02003100
    mov        r1, #0x12
    mov        r2, #0xe
    bl         write_text_at_tile_position
    mov        r1, #0x13
    mov        r2, #0xd
    ldr        r0, .L_02003104
    bl         write_text_at_tile_position
    mov        r0, #0x13
    bl         draw_rom_browser_row_highlight
    bl         swiWaitForVBlank
    mov        r6, #2
.L_02002edc:
    add        r5, r6, #0x11
    bl         scanKeys_arm_veneer
    mov        r0, r5
    bl         draw_rom_browser_row_highlight
    bl         keysHeld_arm_veneer
    tst        r0, #0x40
    mov        r4, r0
    beq        .L_02002f10
    ldr        r3, [r8]
    tst        r3, #0x40
    bne        .L_02002f10
    cmp        r6, sl
    bhi        .L_0200302c
.L_02002f10:
    tst        r4, #0x80
    beq        .L_02002f2c
    ldr        r3, [r8]
    tst        r3, #0x80
    bne        .L_02002f2c
    cmp        r6, #1
    bls        .L_0200303c
.L_02002f2c:
    ands       r3, r4, #1
    ldrne      r3, [r8]
    moveq      r5, r3
    eorne      r3, r3, #1
    andne      r5, r3, #1
    tst        r4, #4
    bne        .L_02002f94
    str        r4, [r8]
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    cmp        r5, #0
    beq        .L_02002edc
    add        r0, r6, #0x11
    bl         restore_overlay_tilemap_row
    cmp        r6, #0
    bne        .L_0200309c
    mov        r1, #0xf
    mov        r2, #1
    ldr        r0, .L_02003108
    bl         write_text_at_tile_position
    mov        r0, r7
    bl         load_emulator_savestate
    ldr        r3, .L_0200310c
    str        r6, [r3, #0x24]
    b          .L_02002fac
.L_02002f94:
    str        r4, [r8]
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    mov        r0, #0x13
    bl         restore_overlay_tilemap_row
.L_02002fac:
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    bl         swiWaitForVBlank
    bl         draw_current_rom_information
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    mov        r0, #1
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sl, pc}
.L_02002fd4:
    ldr        r3, .L_02003110
    ldr        r2, [r3]
    ldr        r1, [r2, #0x258]
    tst        r1, #0x40
    beq        .L_02002e7c
    bl         swiWaitForVBlank
    mov        r0, #0xe
    bl         clear_text_rows_from
    ldr        r0, .L_020030fc
    mov        r1, #0xe
    mov        r2, #8
    bl         write_text_at_tile_position
    mov        r0, #2
    mov        r1, #0xe
    mov        r2, #0x17
    bl         format_hexadecimal_value
    mov        sl, #0
.L_02003018:
    ldr        r0, .L_02003114
    mov        r1, #0x11
    mov        r2, #0xe
    bl         write_text_at_tile_position
    b          .L_02002eac
.L_0200302c:
    mov        r0, r5
    bl         restore_overlay_tilemap_row
    sub        r6, r6, #1
    b          .L_02002f10
.L_0200303c:
    add        r0, r6, #0x11
    bl         restore_overlay_tilemap_row
    add        r6, r6, #1
    b          .L_02002f2c
.L_0200304c:
    ldr        r3, .L_02003110
    ldr        r2, [r3]
    ldr        r4, [r2, #0x258]
    bl         swiWaitForVBlank
    mov        r0, #0xe
    bl         clear_text_rows_from
    lsr        r4, r4, #5
    mov        r1, #0xe
    mov        r2, #8
    ldr        r0, .L_020030fc
    bl         write_text_at_tile_position
    and        r4, r4, #1
    mov        r0, r7
    mov        r1, #0xe
    mov        r2, #0x17
    bl         format_hexadecimal_value
    cmp        r4, #0
    eor        sl, r4, #1
    bne        .L_02003018
    b          .L_02002eac
.L_0200309c:
    cmp        r6, #1
    bne        .L_02002fac
    mov        r2, r6
    ldr        r0, .L_02003118
    mov        r1, #0xf
    bl         write_text_at_tile_position
    cmp        r7, #1
    beq        .L_020030e0
    cmp        r7, #2
    ldreq      r3, .L_02003110
    ldreq      r1, [r3]
    ldreq      r2, [r1, #0x258]
    orreq      r2, r2, #0x40
    streq      r2, [r1, #0x258]
.L_020030d4:
    mov        r0, r7
    bl         write_emulator_savestate
    b          .L_02002fac
.L_020030e0:
    ldr        r3, .L_02003110
    ldr        r1, [r3]
    ldr        r2, [r1, #0x258]
    orr        r2, r2, #0x20
    str        r2, [r1, #0x258]
    b          .L_020030d4
.L_020030f8:
    .word previous_ds_keys
.L_020030fc:
    .word address_0208f1ac
.L_02003100:
    .word address_0208f1c4
.L_02003104:
    .word address_0208f1cc
.L_02003108:
    .word address_0208f1d4
.L_0200310c:
    .word frame_timing
.L_02003110:
    .word loaded_cartridge_metadata
.L_02003114:
    .word address_0208f1bc
.L_02003118:
    .word address_0208f1f0
