/* Browser entries and cartridge selection. Release range 0x0200311c–0x020034b0. */


/* 0x0200311c */
.global free_rom_directory_list
free_rom_directory_list:
    push       {r4, r5, lr}
    ldr        r5, .L_02003194
    sub        sp, sp, #4
    ldr        r3, [r5]
    cmp        r3, #0
    beq        .L_0200316c
    ldr        r3, [r3, #4]
    cmp        r3, #0
    beq        .L_02003154
.L_02003140:
    mov        r2, r3
    ldr        r3, [r3, #4]
    cmp        r3, #0
    bne        .L_02003140
    str        r2, [r5]
.L_02003154:
    ldr        r0, [r5]
.L_02003158:
    ldr        r4, [r0]
    bl         address_020826fc
    subs       r0, r4, #0
    str        r4, [r5]
    bne        .L_02003158
.L_0200316c:
    ldr        r3, .L_02003198
    mov        r1, #0
    str        r1, [r3]
    ldr        r2, .L_0200319c
    ldr        r3, .L_020031a0
    str        r1, [r5]
    str        r1, [r3]
    str        r1, [r2]
    add        sp, sp, #4
    pop        {r4, r5, pc}
.L_02003194:
    .word 0x02098ff0
.L_02003198:
    .word 0x02098fd8
.L_0200319c:
    .word 0x02098fd4
.L_020031a0:
    .word 0x02098ff4

/* 0x020031a4 */
.global add_rom_browser_entry
add_rom_browser_entry:
    push       {r4, r5, r6, r7, lr}
    mov        r7, r1
    sub        sp, sp, #4
    mov        r6, r0
    bl         address_02083a6c
    cmp        r7, #2
    beq        .L_020031dc
    add        r3, r6, r0
    sub        r4, r3, #4
    ldr        r0, .L_02003290
    mov        r1, r4
    bl         address_02083638
    cmp        r0, #0
    bne        .L_02003250
.L_020031dc:
    ldr        r5, .L_02003294
    ldr        r4, [r5]
    cmp        r4, #0
    beq        .L_0200327c
    mov        r0, #0x10c
    bl         address_02082724
    ldr        r2, [r5]
    str        r0, [r4]
    ldr        r3, [r2]
    str        r2, [r3, #4]
    str        r3, [r5]
.L_02003208:
    ldr        r0, [r5]
    mov        r1, r6
    add        r0, r0, #0xc
    bl         strcpy
    ldr        r2, .L_02003298
    ldr        r0, [r5]
    ldr        r3, [r2]
    str        r7, [r0, #8]
    cmp        r3, #0
    mov        r3, #0
    str        r3, [r0]
    streq      r0, [r2]
    ldr        r2, .L_0200329c
    ldr        r3, [r2]
    add        r3, r3, #1
    str        r3, [r2]
.L_02003248:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, pc}
.L_02003250:
    ldr        r0, .L_020032a0
    mov        r1, r4
    bl         address_02083638
    cmp        r0, #0
    beq        .L_020031dc
    mov        r1, r4
    ldr        r0, .L_020032a4
    bl         address_02083638
    cmp        r0, #0
    beq        .L_020031dc
    b          .L_02003248
.L_0200327c:
    mov        r0, #0x10c
    bl         address_02082724
    str        r4, [r0, #4]
    str        r0, [r5]
    b          .L_02003208
.L_02003290:
    .word address_0208f20c
.L_02003294:
    .word 0x02098ff4
.L_02003298:
    .word 0x02098ff0
.L_0200329c:
    .word 0x02098fd4
.L_020032a0:
    .word address_0208f214
.L_020032a4:
    .word address_0208f21c

/* 0x020032a8 */
.global enumerate_rom_browser_directory
enumerate_rom_browser_directory:
    push       {r4, r5, r6, lr}
    sub        sp, sp, #0x48
    bl         free_rom_directory_list
    ldr        r0, .L_02003384
    bl         diropen
    ldr        r4, .L_02003388
    add        r5, sp, #4
    mov        r6, r4
    str        r0, [r4]
.L_020032cc:
    ldr        r1, .L_0200338c
    mov        r2, r5
    ldr        r0, [r4]
    bl         dirnext
    cmp        r0, #0
    ldr        r1, .L_02003384
    ldr        r0, .L_0200338c
    bne        .L_02003330
.L_020032ec:
    bl         strcmp
    cmp        r0, #0
    ldr        r0, .L_0200338c
    beq        .L_020032cc
    ldr        r3, [sp, #0xc]
    tst        r3, #0x4000
    moveq      r1, #1
    movne      r1, #2
    bl         add_rom_browser_entry
    ldr        r1, .L_0200338c
    mov        r2, r5
    ldr        r0, [r4]
    bl         dirnext
    cmp        r0, #0
    ldr        r1, .L_02003384
    ldr        r0, .L_0200338c
    beq        .L_020032ec
.L_02003330:
    ldr        r2, .L_02003390
    ldr        r4, .L_02003394
    ldr        r3, [r2]
    ldr        r2, .L_02003398
    sub        r3, r3, #1
    lsr        r3, r3, #4
    add        r3, r3, #1
    str        r3, [r2]
    ldr        r1, .L_0200339c
    ldr        r3, .L_020033a0
    mov        ip, #0
    ldrb       r0, [r4]
    str        ip, [r3]
    str        ip, [r1]
    bl         restore_overlay_tilemap_row
    mov        r3, #4
    ldr        r0, [r6]
    strb       r3, [r4]
    bl         dirclose
    add        sp, sp, #0x48
    pop        {r4, r5, r6, pc}
.L_02003384:
    .word address_0208f224
.L_02003388:
    .word 0x023cb614
.L_0200338c:
    .word 0x023cb510
.L_02003390:
    .word 0x02098fd4
.L_02003394:
    .word address_0208f344
.L_02003398:
    .word 0x02098fd8
.L_0200339c:
    .word 0x02098fe4
.L_020033a0:
    .word 0x02098fe0

/* 0x020033a4 */
.global open_rom_from_browser_selection
open_rom_from_browser_selection:
    push       {r4, r5, lr}
    ldr        r3, .L_0200349c
    sub        sp, sp, #4
    ldr        r2, [r3]
    mov        r1, r0
    cmp        r2, r0
    bls        .L_02003484
    ldr        r3, .L_020034a0
    ldr        r0, [r3]
    subs       r2, r0, #0
    movne      r2, #1
    cmp        r1, #0
    cmpne      r0, #0
    beq        .L_020033fc
    mov        r3, #0
.L_020033e0:
    ldr        r0, [r0]
    add        r3, r3, #1
    subs       r2, r0, #0
    movne      r2, #1
    cmp        r0, #0
    cmpne      r1, r3
    bhi        .L_020033e0
.L_020033fc:
    cmp        r2, #0
    moveq      r0, r2
    beq        .L_02003470
    ldr        r3, [r0, #8]
    cmp        r3, #2
    beq        .L_02003478
    add        r4, r0, #0xc
    bl         swiWaitForVBlank
    mov        r0, r4
    bl         draw_loading_message
    mov        r0, r4
    ldr        r1, .L_020034a4
    bl         fopen
    mov        r1, r4
    mov        r5, r0
    bl         load_genesis_rom_from_stream
    mov        r3, r0
    mov        r0, r5
    and        r4, r3, #0xff
    bl         fclose
    ldr        r3, .L_020034a8
    ldr        r0, [r3]
    ldrb       r2, [r0, #0x265]
    cmp        r2, #0
    bne        .L_0200348c
.L_02003460:
    ldr        r3, .L_020034ac
    mov        r2, #0
    str        r2, [r3]
    mov        r0, r4
.L_02003470:
    add        sp, sp, #4
    pop        {r4, r5, pc}
.L_02003478:
    add        r0, r0, #0xc
    bl         address_0208553c
    bl         enumerate_rom_browser_directory
.L_02003484:
    mov        r0, #0
    b          .L_02003470
.L_0200348c:
    ldr        r1, [r0, #0x248]
    ldr        r2, [r0, #0x244]
    bl         configure_cartridge_save_ram
    b          .L_02003460
.L_0200349c:
    .word 0x02098fd4
.L_020034a0:
    .word 0x02098ff0
.L_020034a4:
    .word address_0208f074
.L_020034a8:
    .word loaded_cartridge_metadata
.L_020034ac:
    .word 0x02098ff8
