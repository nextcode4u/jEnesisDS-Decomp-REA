/* Gameplay input. Release range 0x020025a8–0x0200276c. */


/* 0x020025a8 */
.global read_gameplay_menu_and_touch_actions
read_gameplay_menu_and_touch_actions:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r7, .L_02002754
    sub        sp, sp, #0x10
    ldrb       r3, [r7]
    ldr        r5, .L_02002758
    cmp        r3, #1
    movne      r8, #0
    moveq      r8, #1
    bl         scanKeys_arm_veneer
    bl         keysHeld_arm_veneer
    mov        r6, r0
    mov        r0, sp
    bl         touchReadXY_arm_veneer
    mov        r1, sp
    mov        r0, r5
    mov        r2, #0xc
    bl         address_02082ec0
    ldrh       r1, [r5, #6]
    mov        r4, sp
    cmp        r1, #0
    beq        .L_02002608
    ldrh       r0, [r5, #4]
    cmp        r0, #0
    bne        .L_02002674
.L_02002608:
    ldr        r3, .L_0200275c
    mov        r2, #0
    strb       r2, [r3]
.L_02002614:
    tst        r6, #4
    ldreq      r4, .L_02002760
    bne        .L_02002630
.L_02002620:
    mov        r0, #0
    str        r6, [r4]
.L_02002628:
    add        sp, sp, #0x10
    pop        {r4, r5, r6, r7, r8, pc}
.L_02002630:
    ldr        r4, .L_02002760
    ldr        r3, [r4]
    tst        r3, #4
    bne        .L_02002620
    cmp        r8, #0
    movne      r3, #2
    moveq      r3, #6
    strbne     r3, [r7]
    strbeq     r3, [r7]
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         swiWaitForVBlank
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    ldrb       r0, [r7]
    str        r6, [r4]
    b          .L_02002628
.L_02002674:
    ldr        lr, .L_0200275c
    ldrb       r3, [lr]
    cmp        r3, #0
    bne        .L_02002614
    lsl        r3, r1, #0x10
    asr        r3, r3, #0x10
    lsl        r2, r0, #0x10
    asr        r2, r2, #0x10
    add        r1, r3, #7
    cmp        r3, #0
    movlt      r3, r1
    add        r0, r2, #7
    cmp        r2, #0
    movlt      r2, r0
    asr        r3, r3, #3
    asr        r2, r2, #3
    and        ip, r3, #0xff
    and        r0, r2, #0xff
    ldr        r3, .L_02002764
    ldr        r2, .L_02002768
    mov        r1, #1
    cmp        ip, #2
    strb       r1, [lr]
    strb       ip, [r3]
    strb       r0, [r2]
    strb       r1, [r7]
    bhi        .L_02002714
    cmp        r0, #0
    beq        .L_02002708
    cmp        r0, #4
    movls      r0, #6
    bls        .L_02002628
    cmp        r0, #5
    bls        .L_02002708
    cmp        r0, #0xa
    movls      r0, #8
    bls        .L_02002628
.L_02002708:
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    mov        r0, #1
    b          .L_02002628
.L_02002714:
    cmp        ip, #0x14
    bls        .L_02002708
    cmp        r0, #0x13
    bls        .L_0200273c
    cmp        r0, #0x16
    movls      r0, #9
    bls        .L_02002628
    cmp        r0, #0x19
    movls      r0, #0xa
    bls        .L_02002628
.L_0200273c:
    cmp        r8, #0
    movne      r3, #2
    strbne     r3, [r7]
    bl         arm_tail_branch_to_load_subscreen_palette_tiles_and_map
    ldrb       r0, [r7]
    b          .L_02002628
.L_02002754:
    .word address_0208f347
.L_02002758:
    .word 0x023cb618
.L_0200275c:
    .word 0x02098fec
.L_02002760:
    .word previous_ds_keys
.L_02002764:
    .word address_0208f344
.L_02002768:
    .word address_0208f345
