/* Frontend rom browser. Release range 0x020034b0–0x020037b4. */


/* 0x020034b0 */
.global run_rom_browser_event_loop
run_rom_browser_event_loop:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        r4, .L_02003790
    sub        sp, sp, #4
    ldrb       r3, [r4]
    mov        sb, r0
    cmp        r3, #0
    bne        .L_0200373c
.L_020034cc:
    ldr        r8, .L_02003794
    mov        r3, #4
    strb       r3, [r8]
.L_020034d8:
    ldr        fp, .L_02003798
    bl         enumerate_rom_browser_directory
    ldrb       r0, [r8]
    bl         draw_rom_browser_row_highlight
    ldr        r0, [fp]
    mov        r7, #0
    bl         render_rom_directory_page
    cmp        sb, #0
    ldr        r6, .L_0200379c
    mov        sl, r7
    bne        .L_02003610
.L_02003504:
    bl         scanKeys_arm_veneer
    bl         keysHeld_arm_veneer
    tst        r0, #0x80
    mov        r5, r0
    beq        .L_02003644
.L_02003518:
    ldrb       r1, [r8]
    cmp        r1, #0x12
    bhi        .L_0200369c
    ldr        r2, .L_020037a0
    ldr        r3, [r2]
    add        r3, r3, #3
    cmp        r1, r3
    bhs        .L_02003544
    sub        r3, sl, #1
    cmp        r3, #7
    bhi        .L_0200376c
.L_02003544:
    add        sl, sl, #1
.L_02003548:
    tst        r5, #0x40
    beq        .L_02003650
.L_02003550:
    ldrb       r3, [r8]
    cmp        r3, #4
    bls        .L_020036bc
    sub        r3, r7, #1
    cmp        r3, #7
    bhi        .L_02003720
.L_02003568:
    add        r7, r7, #1
.L_0200356c:
    tst        r5, #0x20
    beq        .L_02003580
    ldr        r3, [r6]
    tst        r3, #0x20
    beq        .L_020036d8
.L_02003580:
    tst        r5, #0x10
    beq        .L_02003594
    ldr        r3, [r6]
    tst        r3, #0x10
    beq        .L_020036e4
.L_02003594:
    tst        r5, #2
    beq        .L_020035a8
    ldr        r3, [r6]
    tst        r3, #2
    beq        .L_020036f0
.L_020035a8:
    ands       r3, r5, #1
    ldrne      r3, [r6]
    moveq      r1, r3
    eorne      r3, r3, #1
    andne      r1, r3, #1
    tst        r5, #4
    beq        .L_020035d8
    ldr        r3, [r6]
    tst        r3, #4
    bne        .L_020035d8
    cmp        sb, #0
    bne        .L_02003774
.L_020035d8:
    ldrb       r2, [r8]
    ldr        r3, .L_020037a4
    sub        r2, r2, #4
    cmp        r1, #0
    str        r2, [r3]
    bne        .L_02003658
.L_020035f0:
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    ldr        r0, [fp]
    str        r5, [r6]
    bl         render_rom_directory_page
    cmp        sb, #0
    beq        .L_02003504
.L_02003610:
    ldr        r0, .L_020037a8
    mov        r1, #0x15
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r0, .L_020037ac
    mov        r1, #0x16
    mov        r2, #1
    bl         write_text_at_tile_position
    bl         scanKeys_arm_veneer
    bl         keysHeld_arm_veneer
    tst        r0, #0x80
    mov        r5, r0
    bne        .L_02003518
.L_02003644:
    tst        r5, #0x40
    mov        sl, #0
    bne        .L_02003550
.L_02003650:
    mov        r7, #0
    b          .L_0200356c
.L_02003658:
    ldr        r0, [fp]
    add        r0, r2, r0, lsl #4
    bl         open_rom_from_browser_selection
    mov        r4, r0
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    cmp        r4, #0
    beq        .L_0200372c
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    str        r5, [r6]
    bl         free_rom_directory_list
.L_02003690:
    mov        r0, #1
.L_02003694:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_0200369c:
    cmp        r1, #0x13
    bne        .L_02003548
    ldr        r3, [r6]
    ands       r4, r3, #0x80
    bne        .L_02003644
    bl         select_next_rom_browser_page
    mov        sl, r4
    b          .L_02003548
.L_020036bc:
    bne        .L_02003568
    ldr        r3, [r6]
    ands       r4, r3, #0x40
    bne        .L_02003650
    bl         select_previous_rom_browser_page
    mov        r7, r4
    b          .L_0200356c
.L_020036d8:
    bl         select_previous_rom_browser_page
    bl         swiWaitForVBlank
    b          .L_02003580
.L_020036e4:
    bl         select_next_rom_browser_page
    bl         swiWaitForVBlank
    b          .L_02003594
.L_020036f0:
    ldr        r0, .L_020037b0
    bl         chdir
    bl         enumerate_rom_browser_directory
    ldrb       r0, [r8]
    bl         restore_overlay_tilemap_row
    mov        r3, #4
    mov        r0, r3
    strb       r3, [r8]
    bl         draw_rom_browser_row_highlight
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    b          .L_020035a8
.L_02003720:
    bl         move_rom_browser_highlight_up
    add        r7, r7, #1
    b          .L_0200356c
.L_0200372c:
    ldr        r3, .L_02003794
    ldrb       r0, [r3]
    bl         draw_rom_browser_row_highlight
    b          .L_020035f0
.L_0200373c:
    bl         fatInitDefault_arm_veneer
    cmp        r0, #0
    movne      r3, #0
    strbne     r3, [r4]
    bne        .L_020034cc
    ldrb       r2, [r4]
    ldr        r8, .L_02003794
    mov        r3, #4
    cmp        r2, #0
    strb       r3, [r8]
    beq        .L_020034d8
    b          .L_02003690
.L_0200376c:
    bl         move_rom_browser_highlight_down
    b          .L_02003544
.L_02003774:
    ldrb       r0, [r8]
    bl         restore_overlay_tilemap_row
    bl         free_rom_directory_list
    ldr        r3, .L_0200379c
    mov        r0, #2
    str        r5, [r3]
    b          .L_02003694
.L_02003790:
    .word address_0208f346
.L_02003794:
    .word address_0208f344
.L_02003798:
    .word 0x02098fe0
.L_0200379c:
    .word previous_ds_keys
.L_020037a0:
    .word 0x02098fdc
.L_020037a4:
    .word 0x02098fe4
.L_020037a8:
    .word address_0208f228
.L_020037ac:
    .word address_0208f240
.L_020037b0:
    .word address_0208f254
