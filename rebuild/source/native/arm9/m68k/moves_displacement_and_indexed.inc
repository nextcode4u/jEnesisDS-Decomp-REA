/* 68000 instruction handlers in ARM9 main memory. 0x020183a8–0x02019e28. */


/* 0x020183a8 */
.global m68k_move_word_020183a8
m68k_move_word_020183a8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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

/* 0x0201841c */
.global m68k_move_long_0201841c
m68k_move_long_0201841c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201848c */
.global m68k_move_byte_0201848c
m68k_move_byte_0201848c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020184d4 */
.global m68k_move_word_020184d4
m68k_move_word_020184d4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02018514 */
.global m68k_move_byte_02018514
m68k_move_byte_02018514:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018564 */
.global m68k_move_word_02018564
m68k_move_word_02018564:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x020185ac */
.global m68k_move_long_020185ac
m68k_move_long_020185ac:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020185f0 */
.global m68k_move_byte_020185f0
m68k_move_byte_020185f0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    and        r2, fp, #0xe00
    strb       r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201863c */
.global m68k_move_word_0201863c
m68k_move_word_0201863c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02018684 */
.global m68k_move_long_02018684
m68k_move_long_02018684:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020186c4 */
.global m68k_move_byte_020186c4
m68k_move_byte_020186c4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018714 */
.global m68k_move_word_02018714
m68k_move_word_02018714:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201875c */
.global m68k_move_long_0201875c
m68k_move_long_0201875c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020187a0 */
.global m68k_move_byte_020187a0
m68k_move_byte_020187a0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    addeq      r3, r0, #2
    addne      r3, r0, #1
    str        r3, [r2]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018804 */
.global m68k_move_word_02018804
m68k_move_word_02018804:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02018858 */
.global m68k_move_long_02018858
m68k_move_long_02018858:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #4
    str        r3, [r2]
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020188a8 */
.global m68k_move_byte_020188a8
m68k_move_byte_020188a8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201890c */
.global m68k_move_word_0201890c
m68k_move_word_0201890c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02018960 */
.global m68k_move_long_02018960
m68k_move_long_02018960:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x020189b0 */
.global m68k_move_byte_020189b0
m68k_move_byte_020189b0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018a08 */
.global m68k_move_word_02018a08
m68k_move_word_02018a08:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02018a58 */
.global m68k_move_long_02018a58
m68k_move_long_02018a58:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02018aa4 */
.global m68k_move_byte_02018aa4
m68k_move_byte_02018aa4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018b20 */
.global m68k_move_word_02018b20
m68k_move_word_02018b20:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02018b94 */
.global m68k_move_long_02018b94
m68k_move_long_02018b94:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02018c04 */
.global m68k_move_byte_02018c04
m68k_move_byte_02018c04:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018c4c */
.global m68k_move_word_02018c4c
m68k_move_word_02018c4c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02018c8c */
.global m68k_move_long_02018c8c
m68k_move_long_02018c8c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02018cc8 */
.global m68k_move_byte_02018cc8
m68k_move_byte_02018cc8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018d18 */
.global m68k_move_word_02018d18
m68k_move_word_02018d18:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02018d60 */
.global m68k_move_long_02018d60
m68k_move_long_02018d60:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x1e0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02018da4 */
.global m68k_move_byte_02018da4
m68k_move_byte_02018da4:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    and        r2, fp, #0xe00
    strb       r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x02018df0 */
.global m68k_move_long_02018df0
m68k_move_long_02018df0:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02018e2c */
.global m68k_move_byte_02018e2c
m68k_move_byte_02018e2c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018e70 */
.global m68k_move_word_02018e70
m68k_move_word_02018e70:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02018eb4 */
.global m68k_move_long_02018eb4
m68k_move_long_02018eb4:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02018ef4 */
.global m68k_move_byte_02018ef4
m68k_move_byte_02018ef4:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    addeq      r3, r0, #2
    addne      r3, r0, #1
    str        r3, [r2]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018f4c */
.global m68k_move_word_02018f4c
m68k_move_word_02018f4c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02018f9c */
.global m68k_move_long_02018f9c
m68k_move_long_02018f9c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #4
    str        r3, [r2]
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02018fe8 */
.global m68k_move_byte_02018fe8
m68k_move_byte_02018fe8:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02019040 */
.global m68k_move_word_02019040
m68k_move_word_02019040:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02019090 */
.global m68k_move_long_02019090
m68k_move_long_02019090:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x020190dc */
.global m68k_move_byte_020190dc
m68k_move_byte_020190dc:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02019128 */
.global m68k_move_word_02019128
m68k_move_word_02019128:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02019174 */
.global m68k_move_long_02019174
m68k_move_long_02019174:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020191bc */
.global m68k_move_byte_020191bc
m68k_move_byte_020191bc:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201922c */
.global m68k_move_word_0201922c
m68k_move_word_0201922c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201929c */
.global m68k_move_long_0201929c
m68k_move_long_0201929c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x1e0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02019308 */
.global m68k_move_byte_02019308
m68k_move_byte_02019308:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02019344 */
.global m68k_move_word_02019344
m68k_move_word_02019344:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02019380 */
.global m68k_move_long_02019380
m68k_move_long_02019380:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020193b8 */
.global m68k_move_byte_020193b8
m68k_move_byte_020193b8:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020193fc */
.global m68k_move_word_020193fc
m68k_move_word_020193fc:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02019440 */
.global m68k_move_long_02019440
m68k_move_long_02019440:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x200000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02019480 */
.global m68k_move_byte_02019480
m68k_move_byte_02019480:
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
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    and        r2, fp, #0xe00
    strb       r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020194e4 */
.global m68k_move_word_020194e4
m68k_move_word_020194e4:
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
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201954c */
.global m68k_move_long_0201954c
m68k_move_long_0201954c:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020195ac */
.global m68k_move_byte_020195ac
m68k_move_byte_020195ac:
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
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02019614 */
.global m68k_move_word_02019614
m68k_move_word_02019614:
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
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201967c */
.global m68k_move_long_0201967c
m68k_move_long_0201967c:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020196e0 */
.global m68k_move_byte_020196e0
m68k_move_byte_020196e0:
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
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    addeq      r3, r0, #2
    addne      r3, r0, #1
    str        r3, [r2]
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201975c */
.global m68k_move_word_0201975c
m68k_move_word_0201975c:
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
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x020197d0 */
.global m68k_move_long_020197d0
m68k_move_long_020197d0:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #4
    str        r3, [r2]
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02019840 */
.global m68k_move_byte_02019840
m68k_move_byte_02019840:
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
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020198bc */
.global m68k_move_word_020198bc
m68k_move_word_020198bc:
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
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02019930 */
.global m68k_move_long_02019930
m68k_move_long_02019930:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x020199a0 */
.global m68k_move_byte_020199a0
m68k_move_byte_020199a0:
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
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02019a10 */
.global m68k_move_word_02019a10
m68k_move_word_02019a10:
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
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02019a80 */
.global m68k_move_long_02019a80
m68k_move_long_02019a80:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x1e0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02019aec */
.global m68k_move_byte_02019aec
m68k_move_byte_02019aec:
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
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02019b80 */
.global m68k_move_word_02019b80
m68k_move_word_02019b80:
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
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02019c14 */
.global m68k_move_long_02019c14
m68k_move_long_02019c14:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0x200000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02019ca4 */
.global m68k_move_byte_02019ca4
m68k_move_byte_02019ca4:
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
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02019d04 */
.global m68k_move_word_02019d04
m68k_move_word_02019d04:
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
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02019d64 */
.global m68k_move_long_02019d64
m68k_move_long_02019d64:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x1e0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02019dc0 */
.global m68k_move_byte_02019dc0
m68k_move_byte_02019dc0:
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
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_010041f4
