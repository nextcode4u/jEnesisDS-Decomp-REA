/* Frontend main. Release range 0x020011b0–0x02001530. */


/* 0x020011b0 */
.global initialize_ds_display_and_overlay
initialize_ds_display_and_overlay:
    str        lr, [sp, #-4]!
    sub        sp, sp, #4
    bl         configure_menu_vblank_interrupt
    ldr        r2, .L_020011e0
    ldrh       r3, [r2, #4]
    orr        r3, r3, #0x20c
    orr        r3, r3, #3
    strh       r3, [r2, #4]
    bl         show_startup_graphics_and_run_scanline_transition
    add        sp, sp, #4
    ldr         lr, [sp], #4
    b          address_02006c38
.L_020011e0:
    .word 0x04000300

/* 0x020011e4 */
.global run_emulator_and_file_menu
run_emulator_and_file_menu:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    sub        sp, sp, #4
    bl         initialize_default_emulator_options
    bl         initialize_ds_display_and_overlay
    ldr        r2, .L_020014ec
.L_020011f8:
    ldrh       r3, [r2, #0x80]
    tst        r3, #0xf
    beq        .L_020011f8
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    ldr        r1, .L_020014f0
    ldr        r5, .L_020014f4
    ldrb       r0, [r1]
    bl         run_rom_browser_event_loop
    cmp        r0, #1
    ldr        r8, .L_020014f8
    ldr        r4, .L_020014fc
    ldr        r6, .L_02001500
    ldr        fp, .L_02001504
    ldr        sb, .L_02001508
    beq        .L_02001438
.L_0200123c:
    cmp        r0, #2
    beq        .L_020014cc
    ldr        r0, .L_0200150c
    bl         write_popup_text_tiles
    bl         draw_current_rom_information
.L_02001250:
    bl         initialize_emulator_state_and_shared_audio
.L_02001254:
    bl         reset_emulation_for_cartridge
    ldr        r2, .L_02001510
    mov        r3, #0
    str        r3, [r2]
    str        r3, [r5]
    bl         configure_gameplay_display_interrupts
.L_0200126c:
    ldr        r1, .L_020014f0
    mov        r2, #1
    mov        r3, #0
    str        r2, [r1]
    str        r3, [r8]
    mov        sl, r3
    mov        r7, r2
.L_02001288:
    ldr        r3, [r4]
    add        r3, r3, #1
    cmp        r3, #8
    str        r3, [r4]
    bne        .L_020013bc
    ldr        r3, .L_02001514
    ldr        r2, [r3]
    ldrb       r3, [r2, #0x261]
    cmp        r3, #0
    beq        .L_020012dc
    ldrb       r3, [r2, #0x263]
    cmp        r3, #0
    beq        .L_020012dc
    ldr        r1, .L_02001518
    ldr        r2, [r6, #8]
    ldr        r3, [r1]
    rsb        r3, r3, r2
    cmp        r3, #0x78
    bhi        .L_020014dc
.L_020012d4:
    ldr        r3, .L_02001518
    str        r2, [r3]
.L_020012dc:
    str        sl, [r4]
    bl         read_gameplay_menu_and_touch_actions
    sub        r0, r0, #1
    cmp        r0, #9
    ldrls      pc, [pc, r0, lsl #2]
    b          .L_02001444
    .word .L_0200131c
    .word .L_020013a4
    .word .L_02001254
    .word .L_02001444
    .word .L_02001444
    .word .L_0200140c
    .word .L_02001444
    .word .L_02001454
    .word .L_020014a0
    .word .L_0200147c
.L_0200131c:
    bl         swiWaitForVBlank
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    bl         draw_current_rom_information
    ldr        r2, .L_0200151c
    ldr        r0, [r2]
    bl         display_fps_count
    mov        r1, #0xe
    mov        r2, #0xa
    ldr        r0, .L_02001520
    bl         write_text_at_tile_position
    mov        r0, #0x10
    bl         clear_text_rows_from
    ldr        r0, .L_02001524
    mov        r1, #0x10
    mov        r2, #5
    bl         write_text_at_tile_position
    ldr        r0, .L_02001528
    mov        r1, #0x11
    mov        r2, #5
    bl         write_text_at_tile_position
    ldr        r0, .L_0200152c
    mov        r1, #0x13
    mov        r2, #2
    bl         write_text_at_tile_position
    str        r7, [r8]
.L_02001380:
    bl         adjust_paused_viewport
    bl         swiWaitForVBlank
    mov        r0, #1
    bl         set_arm7_audio_muted
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    mov        lr, pc
    ldr        pc, [r6, #0x3c]
    b          .L_020012dc
.L_020013a4:
    bl         clear_text_overlay_tilemap
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    bl         draw_current_rom_information
    mov        r0, #0
    bl         set_arm7_audio_muted
    str        sl, [r8]
.L_020013bc:
    mov        lr, pc
    ldr        pc, [r6, #0x38]
    bl         update_genesis_controller_state
    ldr        r3, [fp]
    tst        r3, #0x40
    beq        .L_020013e8
    ldr        r1, .L_02001510
    ldr        r2, [r5]
    ldr        r3, [r1]
    cmp        r2, r3
    bhi        .L_020014c4
.L_020013e8:
    mov        lr, pc
    ldr        pc, [r6, #0x3c]
    ldr        r3, [sb]
    ldr        r2, [r5]
    add        r3, r3, #1
    add        r2, r2, #1
    str        r3, [sb]
    str        r2, [r5]
    b          .L_02001288
.L_0200140c:
    mov        r0, r7
    str        r7, [r8]
    bl         set_arm7_audio_muted
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    ldr        r1, .L_020014f0
    ldrb       r0, [r1]
    bl         run_rom_browser_event_loop
    cmp        r0, #1
    bne        .L_0200123c
.L_02001438:
    bl         clear_text_overlay_tilemap
    bl         draw_current_rom_information
    b          .L_02001250
.L_02001444:
    ldr        r3, [r8]
    cmp        r3, #0
    bne        .L_02001380
    b          .L_020013bc
.L_02001454:
    mov        r0, r7
    str        r7, [r8]
    bl         set_arm7_audio_muted
    ldr        r3, .L_020014f0
    ldrb       r0, [r3]
    bl         run_configuration_menu
    mov        r0, #0
    bl         set_arm7_audio_muted
    str        sl, [r8]
    b          .L_020013bc
.L_0200147c:
    mov        r0, r7
    str        r7, [r8]
    bl         set_arm7_audio_muted
    mov        r0, #2
    bl         display_savestate_slot_status
    mov        r0, #0
    bl         set_arm7_audio_muted
    str        sl, [r8]
    b          .L_020013bc
.L_020014a0:
    mov        r0, r7
    str        r7, [r8]
    bl         set_arm7_audio_muted
    mov        r0, r7
    bl         display_savestate_slot_status
    mov        r0, #0
    bl         set_arm7_audio_muted
    str        sl, [r8]
    b          .L_020013bc
.L_020014c4:
    bl         swiWaitForVBlank
    b          .L_020013e8
.L_020014cc:
    bl         draw_current_rom_information
    mov        r0, #0
    bl         set_arm7_audio_muted
    b          .L_0200126c
.L_020014dc:
    bl         flush_cartridge_save_ram
    ldr        r3, .L_02001500
    ldr        r2, [r3, #8]
    b          .L_020012d4
.L_020014ec:
    .word 0x04000100
.L_020014f0:
    .word 0x02098fb0
.L_020014f4:
    .word 0x02098fa0
.L_020014f8:
    .word 0x02098fa8
.L_020014fc:
    .word 0x02098fac
.L_02001500:
    .word frame_timing
.L_02001504:
    .word emulator_option_flags
.L_02001508:
    .word 0x02098fbc
.L_0200150c:
    .word address_0208efe4
.L_02001510:
    .word 0x02098fa4
.L_02001514:
    .word loaded_cartridge_metadata
.L_02001518:
    .word 0x02098fb4
.L_0200151c:
    .word 0x02098fc0
.L_02001520:
    .word address_0208f014
.L_02001524:
    .word address_0208f024
.L_02001528:
    .word address_0208f03c
.L_0200152c:
    .word address_0208f050
