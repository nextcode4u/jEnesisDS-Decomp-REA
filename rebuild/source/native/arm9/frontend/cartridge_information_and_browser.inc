/* Cartridge information and browser. Release range 0x0200276c–0x02002c68. */


/* 0x0200276c */
.global draw_loading_message
draw_loading_message:
    push       {r4, r5, lr}
    ldr        r4, .L_020027c8
    sub        sp, sp, #4
    mov        r5, r0
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    mov        r0, #3
    bl         clear_text_rows_from
    mov        r1, r5
    mov        r2, #0x1d
    mov        r0, r4
    bl         strncpy
    mov        r3, #0
    mov        r1, #6
    mov        r2, #1
    ldr        r0, .L_020027cc
    strb       r3, [r4, #0x1c]
    bl         write_text_at_tile_position
    mov        r0, r4
    mov        r1, #7
    mov        r2, #1
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          write_text_at_tile_position
.L_020027c8:
    .word 0x023cb4f0
.L_020027cc:
    .word address_0208f0ac

/* 0x020027d0 */
.global draw_current_rom_information
draw_current_rom_information:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r5, .L_02002964
    ldr        r6, .L_02002968
    ldr        r3, [r5]
    ldr        r8, .L_02002964
    ldrb       r7, [r3, #0x254]
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    mov        r0, #3
    bl         clear_text_rows_from
    ldr        r4, [r5]
    mov        r1, #0x2f
    mov        r0, r4
    bl         strrchr
    subs       r1, r0, #0
    mov        r0, r6
    ldreq      r6, .L_02002968
    mov        r2, #0x1d
    moveq      r0, r6
    moveq      r2, #0x1d
    add        r1, r1, #1
    moveq      r1, r4
    bl         strncpy
    mov        r4, #0
    ldr        r0, .L_0200296c
    mov        r1, #6
    mov        r2, #1
    strb       r4, [r6, #0x1c]
    bl         write_text_at_tile_position
    ldr        r0, .L_02002968
    mov        r1, #7
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r0, .L_02002970
    mov        r1, #9
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r3, [r5]
    mov        r1, #9
    ldr        r0, [r3, #0x244]
    mov        r2, #0xf
    bl         format_hexadecimal_value
    ldr        r0, .L_02002974
    mov        r1, #0xa
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r3, [r5]
    mov        r1, #0xa
    ldr        r0, [r3, #0x240]
    mov        r2, #0xf
    bl         write_hexadecimal_value_to_overlay
    ldr        r0, .L_02002978
    mov        r1, #0xb
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r3, [r5]
    ldr        r0, .L_0200297c
    ldrb       r2, [r3, #0x260]
    ldr        r3, .L_02002980
    cmp        r2, r4
    moveq      r0, r3
    mov        r1, #0xb
    mov        r2, #0xf
    bl         write_text_at_tile_position
    ldr        r0, .L_02002984
    mov        r1, #0xd
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r0, .L_02002988
    mov        r1, #0x10
    mov        r2, #1
    bl         write_text_at_tile_position
    mov        r2, #1
    mov        r1, #0x11
    ldr        r0, .L_0200298c
    bl         write_text_at_tile_position
    mov        r0, #7
    bl         draw_rom_browser_row_highlight
    bl         copy_rom_information_overlay_tiles
    mov        r0, r7
    bl         draw_rom_region_indicator
    ldr        r3, [r5]
    ldrb       r2, [r3, #0x261]
    cmp        r2, r4
    beq        .L_02002924
    bl         draw_cartridge_sram_indicator
.L_02002924:
    cmp        r7, #2
    movne      r0, #0
    moveq      r0, #1
    bl         draw_rom_video_standard_indicator
    bl         draw_state_slots_label
    ldr        r3, [r8]
    mov        r0, r4
    ldr        r1, [r3, #0x258]
    and        r1, r1, #0x20
    bl         draw_savestate_slot_presence_indicator
    ldr        r3, [r8]
    mov        r0, #1
    ldr        r1, [r3, #0x258]
    and        r1, r1, #0x40
    pop        {r4, r5, r6, r7, r8, lr}
    b          draw_savestate_slot_presence_indicator
.L_02002964:
    .word loaded_cartridge_metadata
.L_02002968:
    .word 0x023cb4f0
.L_0200296c:
    .word address_0208f0b8
.L_02002970:
    .word address_0208f0c8
.L_02002974:
    .word address_0208f0d4
.L_02002978:
    .word address_0208f0e4
.L_0200297c:
    .word address_0208f0f0
.L_02002980:
    .word address_0208f0f4
.L_02002984:
    .word address_0208f0f8
.L_02002988:
    .word address_0208f118
.L_0200298c:
    .word address_0208f134

/* 0x02002990 */
.global render_rom_directory_page
render_rom_directory_page:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r3, .L_02002b08
    ldr        r7, .L_02002b0c
    ldr        r4, [r3]
    mov        r3, #0
    cmp        r4, #0
    sub        sp, sp, #0x20
    str        r3, [r7]
    mov        r8, r0
    beq        .L_020029e0
    lsls       r2, r0, #4
    beq        .L_020029e8
    add        r3, r3, #1
    b          .L_020029d4
.L_020029c8:
    cmp        r2, r3
    add        r3, r3, #1
    beq        .L_020029e8
.L_020029d4:
    ldr        r4, [r4]
    cmp        r4, #0
    bne        .L_020029c8
.L_020029e0:
    add        sp, sp, #0x20
    pop        {r4, r5, r6, r7, r8, pc}
.L_020029e8:
    mov        r0, #3
    bl         clear_text_rows_from
    mov        r5, #4
    add        r6, sp, #3
    b          .L_02002a40
.L_020029fc:
    add        r1, r4, #0xc
    mov        r2, #0x1d
    mov        r0, r6
    bl         strlcpy
.L_02002a0c:
    mov        r1, r5
    mov        r2, #1
    mov        r0, r6
    add        r5, r5, r2
    bl         write_clipped_text_row
    ldr        r3, [r7]
    ldr        r4, [r4]
    add        r3, r3, #1
    cmp        r4, #0
    str        r3, [r7]
    beq        .L_02002a80
    cmp        r5, #0x14
    beq        .L_02002a80
.L_02002a40:
    ldr        r3, [r4, #8]
    mov        r0, r6
    cmp        r3, #2
    ldr        r1, .L_02002b10
    mov        r2, #0x1d
    bne        .L_020029fc
    bl         strlcpy
    add        r1, r4, #0xc
    mov        r0, r6
    mov        r2, #0x1b
    bl         strncat
    mov        r0, r6
    ldr        r1, .L_02002b14
    mov        r2, #0x1d
    bl         strlcat
    b          .L_02002a0c
.L_02002a80:
    ldr        r5, .L_02002b18
    ldr        r3, [r5]
    cmp        r3, #0
    bne        .L_02002ac8
.L_02002a90:
    add        r0, r8, #1
    mov        r1, #0x15
    mov        r2, #0x1a
    bl         format_hexadecimal_value
    ldr        r0, .L_02002b1c
    mov        r1, #0x15
    mov        r2, #0x1c
    bl         write_text_at_tile_position
    ldr        r3, .L_02002b20
    mov        r1, #0x15
    ldr        r0, [r3]
    mov        r2, #0x1e
    bl         format_hexadecimal_value
    b          .L_020029e0
.L_02002ac8:
    ldr        r4, .L_02002b24
    ldrb       r0, [r4]
    bl         restore_overlay_tilemap_row
    ldr        r3, .L_02002b0c
    ldr        r2, [r3]
    ldr        r3, .L_02002b28
    add        r2, r2, #3
    and        r2, r2, #0xff
    sub        r1, r2, #4
    str        r1, [r3]
    mov        r0, r2
    strb       r2, [r4]
    bl         draw_rom_browser_row_highlight
    mov        r3, #0
    str        r3, [r5]
    b          .L_02002a90
.L_02002b08:
    .word 0x02098ff0
.L_02002b0c:
    .word 0x02098fdc
.L_02002b10:
    .word address_0208f150
.L_02002b14:
    .word address_0208f154
.L_02002b18:
    .word 0x02098fcc
.L_02002b1c:
    .word address_0208f2fc
.L_02002b20:
    .word 0x02098fd8
.L_02002b24:
    .word address_0208f344
.L_02002b28:
    .word 0x02098fe4

/* 0x02002b2c */
.global move_settings_highlight_down
move_settings_highlight_down:
    push       {r4, lr}
    ldr        r4, .L_02002b58
    ldr        r0, [r4]
    add        r0, r0, #8
    bl         restore_overlay_tilemap_row
    ldr        r3, [r4]
    add        r0, r3, #9
    add        r3, r3, #1
    str        r3, [r4]
    pop        {r4, lr}
    b          draw_rom_browser_row_highlight
.L_02002b58:
    .word 0x02098fe8

/* 0x02002b5c */
.global move_settings_highlight_up
move_settings_highlight_up:
    push       {r4, lr}
    ldr        r4, .L_02002b88
    ldr        r0, [r4]
    add        r0, r0, #8
    bl         restore_overlay_tilemap_row
    ldr        r3, [r4]
    add        r0, r3, #7
    sub        r3, r3, #1
    str        r3, [r4]
    pop        {r4, lr}
    b          draw_rom_browser_row_highlight
.L_02002b88:
    .word 0x02098fe8

/* 0x02002b8c */
.global select_next_rom_browser_page
select_next_rom_browser_page:
    push       {r4, r5, r6, lr}
    ldr        r5, .L_02002bd8
    ldr        r6, .L_02002bdc
    ldrb       r0, [r5]
    bl         restore_overlay_tilemap_row
    ldr        r3, .L_02002be0
    ldr        r0, [r6]
    ldr        r1, [r3]
    ldr        r3, .L_02002be4
    mov        r2, #0
    mov        r4, #4
    str        r2, [r3]
    add        r0, r0, #1
    strb       r4, [r5]
    bl         __aeabi_uidivmod
    mov        r0, r4
    str        r1, [r6]
    pop        {r4, r5, r6, lr}
    b          draw_rom_browser_row_highlight
.L_02002bd8:
    .word address_0208f344
.L_02002bdc:
    .word 0x02098fe0
.L_02002be0:
    .word 0x02098fd8
.L_02002be4:
    .word 0x02098fe4

/* 0x02002be8 */
.global move_rom_browser_highlight_down
move_rom_browser_highlight_down:
    push       {r4, lr}
    ldr        r4, .L_02002c20
    ldrb       r0, [r4]
    bl         restore_overlay_tilemap_row
    ldrb       r3, [r4]
    ldr        r2, .L_02002c24
    add        r3, r3, #1
    and        r3, r3, #0xff
    sub        r1, r3, #4
    mov        r0, r3
    str        r1, [r2]
    strb       r3, [r4]
    pop        {r4, lr}
    b          draw_rom_browser_row_highlight
.L_02002c20:
    .word address_0208f344
.L_02002c24:
    .word 0x02098fe4

/* 0x02002c28 */
.global move_rom_browser_highlight_up
move_rom_browser_highlight_up:
    push       {r4, lr}
    ldr        r4, .L_02002c60
    ldrb       r0, [r4]
    bl         restore_overlay_tilemap_row
    ldrb       r3, [r4]
    ldr        r2, .L_02002c64
    sub        r3, r3, #1
    and        r3, r3, #0xff
    sub        r1, r3, #4
    mov        r0, r3
    str        r1, [r2]
    strb       r3, [r4]
    pop        {r4, lr}
    b          draw_rom_browser_row_highlight
.L_02002c60:
    .word address_0208f344
.L_02002c64:
    .word 0x02098fe4
