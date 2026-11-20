/* 68000 instruction handlers in ARM9 main memory. 0x0201b088–0x0201ca30. */


/* 0x0201b088 */
.global m68k_move_word_0201b088
m68k_move_word_0201b088:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
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

/* 0x0201b0c8 */
.global m68k_move_long_0201b0c8
m68k_move_long_0201b0c8:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201b104 */
.global m68k_move_byte_0201b104
m68k_move_byte_0201b104:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
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

/* 0x0201b14c */
.global m68k_move_word_0201b14c
m68k_move_word_0201b14c:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
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

/* 0x0201b194 */
.global m68k_move_long_0201b194
m68k_move_long_0201b194:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
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

/* 0x0201b1d8 */
.global m68k_move_byte_0201b1d8
m68k_move_byte_0201b1d8:
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

/* 0x0201b244 */
.global m68k_move_word_0201b244
m68k_move_word_0201b244:
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

/* 0x0201b2b4 */
.global m68k_move_long_0201b2b4
m68k_move_long_0201b2b4:
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

/* 0x0201b31c */
.global m68k_move_byte_0201b31c
m68k_move_byte_0201b31c:
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

/* 0x0201b38c */
.global m68k_move_word_0201b38c
m68k_move_word_0201b38c:
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

/* 0x0201b3fc */
.global m68k_move_long_0201b3fc
m68k_move_long_0201b3fc:
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

/* 0x0201b468 */
.global m68k_move_byte_0201b468
m68k_move_byte_0201b468:
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

/* 0x0201b4ec */
.global m68k_move_word_0201b4ec
m68k_move_word_0201b4ec:
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

/* 0x0201b568 */
.global m68k_move_long_0201b568
m68k_move_long_0201b568:
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

/* 0x0201b5e0 */
.global m68k_move_byte_0201b5e0
m68k_move_byte_0201b5e0:
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

/* 0x0201b664 */
.global m68k_move_word_0201b664
m68k_move_word_0201b664:
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

/* 0x0201b6e0 */
.global m68k_move_long_0201b6e0
m68k_move_long_0201b6e0:
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

/* 0x0201b758 */
.global m68k_move_byte_0201b758
m68k_move_byte_0201b758:
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

/* 0x0201b7d0 */
.global m68k_move_word_0201b7d0
m68k_move_word_0201b7d0:
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

/* 0x0201b848 */
.global m68k_move_long_0201b848
m68k_move_long_0201b848:
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

/* 0x0201b8bc */
.global m68k_move_byte_0201b8bc
m68k_move_byte_0201b8bc:
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

/* 0x0201b958 */
.global m68k_move_word_0201b958
m68k_move_word_0201b958:
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

/* 0x0201b9f4 */
.global m68k_move_long_0201b9f4
m68k_move_long_0201b9f4:
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

/* 0x0201ba8c */
.global m68k_move_byte_0201ba8c
m68k_move_byte_0201ba8c:
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

/* 0x0201baf4 */
.global m68k_move_word_0201baf4
m68k_move_word_0201baf4:
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
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201bb5c */
.global m68k_move_long_0201bb5c
m68k_move_long_0201bb5c:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x1e0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201bbc0 */
.global m68k_move_byte_0201bbc0
m68k_move_byte_0201bbc0:
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

/* 0x0201bc30 */
.global m68k_move_word_0201bc30
m68k_move_word_0201bc30:
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
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201bca0 */
.global m68k_move_long_0201bca0
m68k_move_long_0201bca0:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x220000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201bd0c */
.global m68k_move_byte_0201bd0c
m68k_move_byte_0201bd0c:
    ldrb       r0, [sl], #2
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    and        r2, fp, #0xe00
    strb       r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201bd38 */
.global m68k_move_word_0201bd38
m68k_move_word_0201bd38:
    ldrh       r0, [sl], #2
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201bd68 */
.global m68k_move_long_0201bd68
m68k_move_long_0201bd68:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201bd98 */
.global m68k_move_byte_0201bd98
m68k_move_byte_0201bd98:
    ldrb       r0, [sl], #2
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201bdc8 */
.global m68k_move_word_0201bdc8
m68k_move_word_0201bdc8:
    ldrh       r0, [sl], #2
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201bdf8 */
.global m68k_move_long_0201bdf8
m68k_move_long_0201bdf8:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201be2c */
.global m68k_move_byte_0201be2c
m68k_move_byte_0201be2c:
    ldrb       r0, [sl], #2
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
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201be70 */
.global m68k_move_word_0201be70
m68k_move_word_0201be70:
    ldrh       r0, [sl], #2
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
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201beac */
.global m68k_move_long_0201beac
m68k_move_long_0201beac:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
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
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201beec */
.global m68k_move_byte_0201beec
m68k_move_byte_0201beec:
    ldrb       r0, [sl], #2
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
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201bf30 */
.global m68k_move_word_0201bf30
m68k_move_word_0201bf30:
    ldrh       r0, [sl], #2
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
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201bf6c */
.global m68k_move_long_0201bf6c
m68k_move_long_0201bf6c:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
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
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x0201bfac */
.global m68k_move_byte_0201bfac
m68k_move_byte_0201bfac:
    ldrb       r0, [sl], #2
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
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201bfe4 */
.global m68k_move_word_0201bfe4
m68k_move_word_0201bfe4:
    ldrh       r0, [sl], #2
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
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201c01c */
.global m68k_move_long_0201c01c
m68k_move_long_0201c01c:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201c058 */
.global m68k_move_byte_0201c058
m68k_move_byte_0201c058:
    ldrb       r0, [sl], #2
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
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201c0b4 */
.global m68k_move_word_0201c0b4
m68k_move_word_0201c0b4:
    ldrh       r0, [sl], #2
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

/* 0x0201c110 */
.global m68k_move_long_0201c110
m68k_move_long_0201c110:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
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

/* 0x0201c170 */
.global m68k_move_byte_0201c170
m68k_move_byte_0201c170:
    ldrb       r0, [sl], #2
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201c198 */
.global m68k_move_word_0201c198
m68k_move_word_0201c198:
    ldrh       r0, [sl], #2
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201c1c0 */
.global m68k_move_long_0201c1c0
m68k_move_long_0201c1c0:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201c1ec */
.global m68k_move_byte_0201c1ec
m68k_move_byte_0201c1ec:
    ldrb       r0, [sl], #2
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

/* 0x0201c21c */
.global m68k_move_word_0201c21c
m68k_move_word_0201c21c:
    ldrh       r0, [sl], #2
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

/* 0x0201c24c */
.global m68k_move_long_0201c24c
m68k_move_long_0201c24c:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
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

/* 0x0201c280 */
.global m68k_movea_word_0201c280
m68k_movea_word_0201c280:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsh      r0, [r6, r1]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c2a4 */
.global m68k_movea_long_0201c2a4
m68k_movea_long_0201c2a4:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c2c4 */
.global m68k_movea_word_0201c2c4
m68k_movea_word_0201c2c4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrsh      r0, [r2, r1]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c2ec */
.global m68k_movea_long_0201c2ec
m68k_movea_long_0201c2ec:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c310 */
.global m68k_movea_word_0201c310
m68k_movea_word_0201c310:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c340 */
.global m68k_movea_word_0201c340
m68k_movea_word_0201c340:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c37c */
.global m68k_movea_word_0201c37c
m68k_movea_word_0201c37c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c3b8 */
.global m68k_movea_long_0201c3b8
m68k_movea_long_0201c3b8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c3ec */
.global m68k_movea_word_0201c3ec
m68k_movea_word_0201c3ec:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c424 */
.global m68k_movea_long_0201c424
m68k_movea_long_0201c424:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c454 */
.global m68k_movea_word_0201c454
m68k_movea_word_0201c454:
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
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c4b0 */
.global m68k_movea_long_0201c4b0
m68k_movea_long_0201c4b0:
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
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c504 */
.global m68k_movea_word_0201c504
m68k_movea_word_0201c504:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c52c */
.global m68k_movea_long_0201c52c
m68k_movea_long_0201c52c:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c54c */
.global m68k_movea_word_0201c54c
m68k_movea_word_0201c54c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c57c */
.global m68k_movea_long_0201c57c
m68k_movea_long_0201c57c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c5a4 */
.global m68k_movea_word_0201c5a4
m68k_movea_word_0201c5a4:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c5e0 */
.global m68k_movea_long_0201c5e0
m68k_movea_long_0201c5e0:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c614 */
.global m68k_movea_word_0201c614
m68k_movea_word_0201c614:
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
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c678 */
.global m68k_movea_long_0201c678
m68k_movea_long_0201c678:
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
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c6d4 */
.global m68k_movea_word_0201c6d4
m68k_movea_word_0201c6d4:
    ldrsh      r0, [sl], #2
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c6f0 */
.global m68k_movea_long_0201c6f0
m68k_movea_long_0201c6f0:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c714 */
.global m68k_lea_long_0201c714
m68k_lea_long_0201c714:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c738 */
.global m68k_lea_long_0201c738
m68k_lea_long_0201c738:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c764 */
.global m68k_lea_long_0201c764
m68k_lea_long_0201c764:
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
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c7b4 */
.global m68k_lea_long_0201c7b4
m68k_lea_long_0201c7b4:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c7e4 */
.global m68k_lea_long_0201c7e4
m68k_lea_long_0201c7e4:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrh       r3, [sl], #2
    orr        r0, r0, r1
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
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c83c */
.global m68k_pea_long_0201c83c
m68k_pea_long_0201c83c:
    ldr        r5, [r6, #0x3c]
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    sub        r5, r5, #4
    lsl        r1, r5, #0x10
    str        r5, [r6, #0x3c]
    add        r4, r8, r1, lsr #16
    lsr        r2, r0, #0x10
    strh       r2, [r4], #2
    strh       r0, [r4]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c874 */
.global m68k_pea_long_0201c874
m68k_pea_long_0201c874:
    ldr        r5, [r6, #0x3c]
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    sub        r5, r5, #4
    lsl        r1, r5, #0x10
    str        r5, [r6, #0x3c]
    add        r4, r8, r1, lsr #16
    lsr        r2, r0, #0x10
    strh       r2, [r4], #2
    strh       r0, [r4]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c8b4 */
.global m68k_pea_long_0201c8b4
m68k_pea_long_0201c8b4:
    ldr        r5, [r6, #0x3c]
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
    sub        r5, r5, #4
    lsl        r1, r5, #0x10
    str        r5, [r6, #0x3c]
    add        r4, r8, r1, lsr #16
    lsr        r2, r0, #0x10
    strh       r2, [r4], #2
    strh       r0, [r4]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c918 */
.global m68k_pea_long_0201c918
m68k_pea_long_0201c918:
    ldr        r5, [r6, #0x3c]
    ldrsh      r0, [sl], #2
    sub        r5, r5, #4
    lsl        r1, r5, #0x10
    str        r5, [r6, #0x3c]
    add        r4, r8, r1, lsr #16
    lsr        r2, r0, #0x10
    strh       r2, [r4], #2
    strh       r0, [r4]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c948 */
.global m68k_pea_long_0201c948
m68k_pea_long_0201c948:
    ldr        r5, [r6, #0x3c]
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    sub        r5, r5, #4
    lsl        r1, r5, #0x10
    str        r5, [r6, #0x3c]
    add        r4, r8, r1, lsr #16
    lsr        r2, r0, #0x10
    strh       r2, [r4], #2
    strh       r0, [r4]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c980 */
.global m68k_pea_long_0201c980
m68k_pea_long_0201c980:
    ldr        r5, [r6, #0x3c]
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    sub        r5, r5, #4
    lsl        r1, r5, #0x10
    str        r5, [r6, #0x3c]
    add        r4, r8, r1, lsr #16
    lsr        r2, r0, #0x10
    strh       r2, [r4], #2
    strh       r0, [r4]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201c9c4 */
.global m68k_pea_long_0201c9c4
m68k_pea_long_0201c9c4:
    ldr        r5, [r6, #0x3c]
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrh       r3, [sl], #2
    orr        r0, r0, r1
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
    sub        r5, r5, #4
    lsl        r1, r5, #0x10
    str        r5, [r6, #0x3c]
    add        r4, r8, r1, lsr #16
    lsr        r2, r0, #0x10
    strh       r2, [r4], #2
    strh       r0, [r4]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]
