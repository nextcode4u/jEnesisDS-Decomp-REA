/* 68000 instruction handlers in ARM9 main memory. 0x0202d1f0–0x0202e3d4. */


/* 0x0202d1f0 */
.global m68k_nbcd_byte_0202d1f0
m68k_nbcd_byte_0202d1f0:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    tst        r7, #0x10
    rsb        r5, r0, #0x9a
    subne      r5, r5, #1
    and        r5, r5, #0xff
    cmp        r5, #0x9a
    biceq      r7, r7, #0x11
    beq        .L_0202d234
    and        r4, r5, #0xf
    cmp        r4, #0xa
    andeq      r5, r5, #0xf0
    addeq      r5, r5, #0x10
    ands       r5, r5, #0xff
    orr        r7, r7, #0x11
    bicne      r7, r7, #4
    strb       r5, [r6, r1, lsl #2]
.L_0202d234:
    tst        r5, #0x80
    orrne      r7, r7, #8
    biceq      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d24c */
.global m68k_unrecognized_opcode_0202d24c
m68k_unrecognized_opcode_0202d24c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    tst        r7, #0x10
    rsb        r5, r0, #0x9a
    subne      r5, r5, #1
    and        r5, r5, #0xff
    cmp        r5, #0x9a
    biceq      r7, r7, #0x11
    beq        .L_0202d294
    and        r4, r5, #0xf
    cmp        r4, #0xa
    andeq      r5, r5, #0xf0
    addeq      r5, r5, #0x10
    ands       r5, r5, #0xff
    orr        r7, r7, #0x11
    bicne      r7, r7, #4
    strb       r5, [r2, r1, lsl #2]
.L_0202d294:
    tst        r5, #0x80
    orrne      r7, r7, #8
    biceq      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d2ac */
.global m68k_nbcd_byte_0202d2ac
m68k_nbcd_byte_0202d2ac:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    tst        r7, #0x10
    rsb        r5, r0, #0x9a
    subne      r5, r5, #1
    and        r5, r5, #0xff
    cmp        r5, #0x9a
    biceq      r7, r7, #0x11
    beq        .L_0202d304
    and        r4, r5, #0xf
    cmp        r4, #0xa
    andeq      r5, r5, #0xf0
    addeq      r5, r5, #0x10
    ands       r5, r5, #0xff
    orr        r7, r7, #0x11
    bicne      r7, r7, #4
    strb       r5, [r2]
.L_0202d304:
    tst        r5, #0x80
    orrne      r7, r7, #8
    biceq      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d31c */
.global m68k_nbcd_byte_0202d31c
m68k_nbcd_byte_0202d31c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    tst        r7, #0x10
    rsb        r5, r0, #0x9a
    subne      r5, r5, #1
    and        r5, r5, #0xff
    cmp        r5, #0x9a
    biceq      r7, r7, #0x11
    beq        .L_0202d388
    and        r4, r5, #0xf
    cmp        r4, #0xa
    andeq      r5, r5, #0xf0
    addeq      r5, r5, #0x10
    ands       r5, r5, #0xff
    orr        r7, r7, #0x11
    bicne      r7, r7, #4
    strb       r5, [r3]
.L_0202d388:
    tst        r5, #0x80
    orrne      r7, r7, #8
    biceq      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d3a0 */
.global m68k_nbcd_byte_0202d3a0
m68k_nbcd_byte_0202d3a0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    tst        r7, #0x10
    rsb        r5, r0, #0x9a
    subne      r5, r5, #1
    and        r5, r5, #0xff
    cmp        r5, #0x9a
    biceq      r7, r7, #0x11
    beq        .L_0202d40c
    and        r4, r5, #0xf
    cmp        r4, #0xa
    andeq      r5, r5, #0xf0
    addeq      r5, r5, #0x10
    ands       r5, r5, #0xff
    orr        r7, r7, #0x11
    bicne      r7, r7, #4
    strb       r5, [r3]
.L_0202d40c:
    tst        r5, #0x80
    orrne      r7, r7, #8
    biceq      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d424 */
.global m68k_nbcd_byte_0202d424
m68k_nbcd_byte_0202d424:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    tst        r7, #0x10
    rsb        r5, r0, #0x9a
    subne      r5, r5, #1
    and        r5, r5, #0xff
    cmp        r5, #0x9a
    biceq      r7, r7, #0x11
    beq        .L_0202d484
    and        r4, r5, #0xf
    cmp        r4, #0xa
    andeq      r5, r5, #0xf0
    addeq      r5, r5, #0x10
    ands       r5, r5, #0xff
    orr        r7, r7, #0x11
    bicne      r7, r7, #4
    strb       r5, [r2]
.L_0202d484:
    tst        r5, #0x80
    orrne      r7, r7, #8
    biceq      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d49c */
.global m68k_nbcd_byte_0202d49c
m68k_nbcd_byte_0202d49c:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    tst        r7, #0x10
    rsb        r5, r0, #0x9a
    subne      r5, r5, #1
    and        r5, r5, #0xff
    cmp        r5, #0x9a
    biceq      r7, r7, #0x11
    beq        .L_0202d520
    and        r4, r5, #0xf
    cmp        r4, #0xa
    andeq      r5, r5, #0xf0
    addeq      r5, r5, #0x10
    ands       r5, r5, #0xff
    orr        r7, r7, #0x11
    bicne      r7, r7, #4
    strb       r5, [r2]
.L_0202d520:
    tst        r5, #0x80
    orrne      r7, r7, #8
    biceq      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d538 */
.global m68k_nbcd_byte_0202d538
m68k_nbcd_byte_0202d538:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    tst        r7, #0x10
    rsb        r5, r0, #0x9a
    subne      r5, r5, #1
    and        r5, r5, #0xff
    cmp        r5, #0x9a
    biceq      r7, r7, #0x11
    beq        .L_0202d584
    and        r4, r5, #0xf
    cmp        r4, #0xa
    andeq      r5, r5, #0xf0
    addeq      r5, r5, #0x10
    ands       r5, r5, #0xff
    orr        r7, r7, #0x11
    bicne      r7, r7, #4
    strb       r5, [r2]
.L_0202d584:
    tst        r5, #0x80
    orrne      r7, r7, #8
    biceq      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d59c */
.global m68k_nbcd_byte_0202d59c
m68k_nbcd_byte_0202d59c:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    tst        r7, #0x10
    rsb        r5, r0, #0x9a
    subne      r5, r5, #1
    and        r5, r5, #0xff
    cmp        r5, #0x9a
    biceq      r7, r7, #0x11
    beq        .L_0202d5ec
    and        r4, r5, #0xf
    cmp        r4, #0xa
    andeq      r5, r5, #0xf0
    addeq      r5, r5, #0x10
    ands       r5, r5, #0xff
    orr        r7, r7, #0x11
    bicne      r7, r7, #4
    strb       r5, [r2]
.L_0202d5ec:
    tst        r5, #0x80
    orrne      r7, r7, #8
    biceq      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d604 */
.global m68k_chk_word_0202d604
m68k_chk_word_0202d604:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d64c
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d64c
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d64c:
    mov        r0, #6
    sub        r7, r7, #0x2c0000
    b          start_m68k_move_handlers

/* 0x0202d658 */
.global m68k_chk_word_0202d658
m68k_chk_word_0202d658:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d6a4
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d6a4
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d6a4:
    mov        r0, #6
    sub        r7, r7, #0x300000
    b          start_m68k_move_handlers

/* 0x0202d6b0 */
.global m68k_chk_word_0202d6b0
m68k_chk_word_0202d6b0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d708
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d708
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d708:
    mov        r0, #6
    sub        r7, r7, #0x300000
    b          start_m68k_move_handlers

/* 0x0202d714 */
.global m68k_chk_word_0202d714
m68k_chk_word_0202d714:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d76c
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d76c
    subs       r7, r7, #0x100000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d76c:
    mov        r0, #6
    sub        r7, r7, #0x320000
    b          start_m68k_move_handlers

/* 0x0202d778 */
.global m68k_chk_word_0202d778
m68k_chk_word_0202d778:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d7cc
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d7cc
    subs       r7, r7, #0x120000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d7cc:
    mov        r0, #6
    sub        r7, r7, #0x340000
    b          start_m68k_move_handlers

/* 0x0202d7d8 */
.global m68k_chk_word_0202d7d8
m68k_chk_word_0202d7d8:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d850
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d850
    subs       r7, r7, #0x140000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d850:
    mov        r0, #6
    sub        r7, r7, #0x360000
    b          start_m68k_move_handlers

/* 0x0202d85c */
.global m68k_chk_word_0202d85c
m68k_chk_word_0202d85c:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d8a0
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d8a0
    subs       r7, r7, #0x120000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d8a0:
    mov        r0, #6
    sub        r7, r7, #0x340000
    b          start_m68k_move_handlers

/* 0x0202d8ac */
.global m68k_chk_word_0202d8ac
m68k_chk_word_0202d8ac:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d8f8
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d8f8
    subs       r7, r7, #0x160000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d8f8:
    mov        r0, #6
    sub        r7, r7, #0x380000
    b          start_m68k_move_handlers

/* 0x0202d904 */
.global m68k_chk_word_0202d904
m68k_chk_word_0202d904:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d95c
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d95c
    subs       r7, r7, #0x120000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d95c:
    mov        r0, #6
    sub        r7, r7, #0x340000
    b          start_m68k_move_handlers

/* 0x0202d968 */
.global m68k_chk_word_0202d968
m68k_chk_word_0202d968:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    orr        r0, r0, r1
    ldrh       r3, [sl], #2
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    addne      r2, r6, #0x20
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202d9e8
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202d9e8
    subs       r7, r7, #0x140000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202d9e8:
    mov        r0, #6
    sub        r7, r7, #0x360000
    b          start_m68k_move_handlers

/* 0x0202d9f4 */
.global m68k_chk_word_0202d9f4
m68k_chk_word_0202d9f4:
    ldrh       r0, [sl], #2
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #7
    tst        r2, r2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    bmi        .L_0202da34
    cmp        r2, r0
    bicgt      r7, r7, #8
    bgt        .L_0202da34
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202da34:
    mov        r0, #6
    sub        r7, r7, #0x300000
    b          start_m68k_move_handlers

/* 0x0202da40 */
.global m68k_move_word_0202da40
m68k_move_word_0202da40:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202da94
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202da84
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202da84:
    subs       r7, r7, #0xc0000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202da94:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202daa0 */
.global m68k_move_word_0202daa0
m68k_move_word_0202daa0:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202daf8
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202dae8
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202dae8:
    subs       r7, r7, #0x100000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202daf8:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202db04 */
.global m68k_move_word_0202db04
m68k_move_word_0202db04:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202db68
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202db58
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202db58:
    subs       r7, r7, #0x100000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202db68:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202db74 */
.global m68k_move_word_0202db74
m68k_move_word_0202db74:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202dbd8
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202dbc8
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202dbc8:
    subs       r7, r7, #0x120000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202dbd8:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202dbe4 */
.global m68k_move_word_0202dbe4
m68k_move_word_0202dbe4:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202dc44
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202dc34
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202dc34:
    subs       r7, r7, #0x140000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202dc44:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202dc50 */
.global m68k_move_word_0202dc50
m68k_move_word_0202dc50:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202dcd4
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202dcc4
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202dcc4:
    subs       r7, r7, #0x160000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202dcd4:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202dce0 */
.global m68k_move_word_0202dce0
m68k_move_word_0202dce0:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202dd30
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202dd20
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202dd20:
    subs       r7, r7, #0x140000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202dd30:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202dd3c */
.global m68k_move_word_0202dd3c
m68k_move_word_0202dd3c:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202dd94
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202dd84
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202dd84:
    subs       r7, r7, #0x180000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202dd94:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202dda0 */
.global m68k_move_word_0202dda0
m68k_move_word_0202dda0:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202de04
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202ddf4
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202ddf4:
    subs       r7, r7, #0x140000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202de04:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202de10 */
.global m68k_move_word_0202de10
m68k_move_word_0202de10:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202de9c
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    orr        r0, r0, r1
    ldrh       r3, [sl], #2
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    addne      r2, r6, #0x20
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202de8c
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202de8c:
    subs       r7, r7, #0x160000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202de9c:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202dea8 */
.global m68k_move_word_0202dea8
m68k_move_word_0202dea8:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_0202def4
    ldrh       r0, [sl], #2
    bic        r7, r7, #0x1f
    and        r1, r0, #0x1f
    orr        r7, r7, r1
    and        r1, r0, #0xa700
    str        r1, [r6, #0x50]
    tst        r0, #0x2000
    bne        .L_0202dee4
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0202dee4:
    subs       r7, r7, #0x100000
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202def4:
    mov        r0, #8
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x0202df00 */
.global m68k_move_word_0202df00
m68k_move_word_0202df00:
    ldr        r1, [r6, #0x50]
    and        r0, r7, #0x1f
    and        r1, r1, #0xa700
    orr        r1, r1, r0
    and        r2, fp, #7
    lsl        r2, r2, #2
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202df28 */
.global m68k_move_word_0202df28
m68k_move_word_0202df28:
    ldr        r1, [r6, #0x50]
    and        r0, r7, #0x1f
    and        r1, r1, #0xa700
    orr        r1, r1, r0
    add        r2, r6, #0x20
    and        r0, fp, #7
    ldr        r0, [r2, r0, lsl #2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202df50 */
.global m68k_move_word_0202df50
m68k_move_word_0202df50:
    ldr        r1, [r6, #0x50]
    and        r0, r7, #0x1f
    and        r1, r1, #0xa700
    orr        r1, r1, r0
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202df84 */
.global m68k_move_word_0202df84
m68k_move_word_0202df84:
    ldr        r1, [r6, #0x50]
    and        r0, r7, #0x1f
    and        r1, r1, #0xa700
    orr        r1, r1, r0
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202dfb8 */
.global m68k_move_word_0202dfb8
m68k_move_word_0202dfb8:
    ldr        r1, [r6, #0x50]
    and        r0, r7, #0x1f
    and        r1, r1, #0xa700
    orr        r1, r1, r0
    add        r2, r6, #0x20
    and        r3, fp, #7
    ldr        r0, [r2, r3, lsl #2]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202dfe8 */
.global m68k_move_word_0202dfe8
m68k_move_word_0202dfe8:
    ldr        r1, [r6, #0x50]
    and        r0, r7, #0x1f
    and        r1, r1, #0xa700
    orr        r1, r1, r0
    add        r2, r6, #0x20
    and        r3, fp, #7
    ldr        r0, [r2, r3, lsl #2]
    ldrh       r4, [sl], #2
    lsl        r3, r4, #0x18
    add        r0, r0, r3, asr #24
    tst        r4, #0x8000
    moveq      r2, r6
    and        r3, r4, #0x7000
    lsr        r3, r3, #0xa
    tst        r4, #0x800
    ldrsheq    r3, [r2, r3]
    ldrne      r3, [r2, r3]
    add        r0, r0, r3
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202e03c */
.global m68k_move_word_0202e03c
m68k_move_word_0202e03c:
    ldr        r1, [r6, #0x50]
    and        r0, r7, #0x1f
    and        r1, r1, #0xa700
    orr        r1, r1, r0
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202e05c */
.global m68k_move_word_0202e05c
m68k_move_word_0202e05c:
    ldr        r1, [r6, #0x50]
    and        r0, r7, #0x1f
    and        r1, r1, #0xa700
    orr        r1, r1, r0
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202e084 */
.global m68k_move_word_0202e084
m68k_move_word_0202e084:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e0a8 */
.global m68k_move_word_0202e0a8
m68k_move_word_0202e0a8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e0d0 */
.global m68k_move_word_0202e0d0
m68k_move_word_0202e0d0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e104 */
.global m68k_move_word_0202e104
m68k_move_word_0202e104:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e138 */
.global m68k_move_word_0202e138
m68k_move_word_0202e138:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e168 */
.global m68k_move_word_0202e168
m68k_move_word_0202e168:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e1bc */
.global m68k_move_word_0202e1bc
m68k_move_word_0202e1bc:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e1dc */
.global m68k_move_word_0202e1dc
m68k_move_word_0202e1dc:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e204 */
.global m68k_move_word_0202e204
m68k_move_word_0202e204:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e238 */
.global m68k_move_word_0202e238
m68k_move_word_0202e238:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    orr        r0, r0, r1
    ldrh       r3, [sl], #2
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    addne      r2, r6, #0x20
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e294 */
.global m68k_move_word_0202e294
m68k_move_word_0202e294:
    ldrh       r0, [sl], #2
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e2b0 */
.global m68k_unrecognized_opcode_0202e2b0
m68k_unrecognized_opcode_0202e2b0:
    and        r1, r7, #0x1f
    and        r2, fp, #7
    lsl        r2, r2, #2
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e2cc */
.global m68k_unrecognized_opcode_0202e2cc
m68k_unrecognized_opcode_0202e2cc:
    and        r1, r7, #0x1f
    add        r2, r6, #0x20
    and        r0, fp, #7
    ldr        r0, [r2, r0, lsl #2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202e2e8 */
.global m68k_unrecognized_opcode_0202e2e8
m68k_unrecognized_opcode_0202e2e8:
    and        r1, r7, #0x1f
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202e310 */
.global m68k_unrecognized_opcode_0202e310
m68k_unrecognized_opcode_0202e310:
    and        r1, r7, #0x1f
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202e338 */
.global m68k_unrecognized_opcode_0202e338
m68k_unrecognized_opcode_0202e338:
    and        r1, r7, #0x1f
    add        r2, r6, #0x20
    and        r3, fp, #7
    ldr        r0, [r2, r3, lsl #2]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202e35c */
.global m68k_unrecognized_opcode_0202e35c
m68k_unrecognized_opcode_0202e35c:
    and        r1, r7, #0x1f
    add        r2, r6, #0x20
    and        r3, fp, #7
    ldr        r0, [r2, r3, lsl #2]
    ldrh       r4, [sl], #2
    lsl        r3, r4, #0x18
    add        r0, r0, r3, asr #24
    tst        r4, #0x8000
    moveq      r2, r6
    and        r3, r4, #0x7000
    lsr        r3, r3, #0xa
    tst        r4, #0x800
    ldrsheq    r3, [r2, r3]
    ldrne      r3, [r2, r3]
    add        r0, r0, r3
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202e3a4 */
.global m68k_unrecognized_opcode_0202e3a4
m68k_unrecognized_opcode_0202e3a4:
    and        r1, r7, #0x1f
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202e3b8 */
.global m68k_unrecognized_opcode_0202e3b8
m68k_unrecognized_opcode_0202e3b8:
    and        r1, r7, #0x1f
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214
