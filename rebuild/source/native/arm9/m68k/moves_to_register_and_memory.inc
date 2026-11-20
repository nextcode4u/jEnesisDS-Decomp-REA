/* 68000 instruction handlers in ARM9 main memory. 0x02019e28–0x0201b088. */


/* 0x02019e28 */
.global m68k_move_word_02019e28
m68k_move_word_02019e28:
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
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02019e90 */
.global m68k_move_long_02019e90
m68k_move_long_02019e90:
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
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x220000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02019ef4 */
.global m68k_move_byte_02019ef4
m68k_move_byte_02019ef4:
    ldrsh      r0, [sl], #2
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

/* 0x02019f24 */
.global m68k_move_word_02019f24
m68k_move_word_02019f24:
    ldrsh      r0, [sl], #2
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
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02019f58 */
.global m68k_move_long_02019f58
m68k_move_long_02019f58:
    ldrsh      r0, [sl], #2
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

/* 0x02019f84 */
.global m68k_move_byte_02019f84
m68k_move_byte_02019f84:
    ldrsh      r0, [sl], #2
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

/* 0x02019fb8 */
.global m68k_move_word_02019fb8
m68k_move_word_02019fb8:
    ldrsh      r0, [sl], #2
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

/* 0x02019fec */
.global m68k_move_long_02019fec
m68k_move_long_02019fec:
    ldrsh      r0, [sl], #2
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

/* 0x0201a01c */
.global m68k_move_byte_0201a01c
m68k_move_byte_0201a01c:
    ldrsh      r0, [sl], #2
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

/* 0x0201a064 */
.global m68k_move_word_0201a064
m68k_move_word_0201a064:
    ldrsh      r0, [sl], #2
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

/* 0x0201a0a4 */
.global m68k_move_long_0201a0a4
m68k_move_long_0201a0a4:
    ldrsh      r0, [sl], #2
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

/* 0x0201a0e0 */
.global m68k_move_byte_0201a0e0
m68k_move_byte_0201a0e0:
    ldrsh      r0, [sl], #2
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

/* 0x0201a128 */
.global m68k_move_word_0201a128
m68k_move_word_0201a128:
    ldrsh      r0, [sl], #2
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

/* 0x0201a168 */
.global m68k_move_byte_0201a168
m68k_move_byte_0201a168:
    ldrsh      r0, [sl], #2
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

/* 0x0201a1a4 */
.global m68k_move_word_0201a1a4
m68k_move_word_0201a1a4:
    ldrsh      r0, [sl], #2
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

/* 0x0201a1e0 */
.global m68k_move_long_0201a1e0
m68k_move_long_0201a1e0:
    ldrsh      r0, [sl], #2
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

/* 0x0201a218 */
.global m68k_move_byte_0201a218
m68k_move_byte_0201a218:
    ldrsh      r0, [sl], #2
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

/* 0x0201a278 */
.global m68k_move_word_0201a278
m68k_move_word_0201a278:
    ldrsh      r0, [sl], #2
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

/* 0x0201a2d8 */
.global m68k_move_long_0201a2d8
m68k_move_long_0201a2d8:
    ldrsh      r0, [sl], #2
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

/* 0x0201a334 */
.global m68k_move_byte_0201a334
m68k_move_byte_0201a334:
    ldrsh      r0, [sl], #2
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

/* 0x0201a360 */
.global m68k_move_word_0201a360
m68k_move_word_0201a360:
    ldrsh      r0, [sl], #2
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

/* 0x0201a38c */
.global m68k_move_long_0201a38c
m68k_move_long_0201a38c:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201a3b4 */
.global m68k_move_byte_0201a3b4
m68k_move_byte_0201a3b4:
    ldrsh      r0, [sl], #2
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

/* 0x0201a3e8 */
.global m68k_move_word_0201a3e8
m68k_move_word_0201a3e8:
    ldrsh      r0, [sl], #2
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

/* 0x0201a41c */
.global m68k_move_long_0201a41c
m68k_move_long_0201a41c:
    ldrsh      r0, [sl], #2
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

/* 0x0201a44c */
.global m68k_move_byte_0201a44c
m68k_move_byte_0201a44c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    and        r2, fp, #0xe00
    strb       r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201a484 */
.global m68k_move_long_0201a484
m68k_move_long_0201a484:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201a4b8 */
.global m68k_move_byte_0201a4b8
m68k_move_byte_0201a4b8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201a4f4 */
.global m68k_move_word_0201a4f4
m68k_move_word_0201a4f4:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201a530 */
.global m68k_move_long_0201a530
m68k_move_long_0201a530:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201a568 */
.global m68k_move_byte_0201a568
m68k_move_byte_0201a568:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201a5b8 */
.global m68k_move_word_0201a5b8
m68k_move_word_0201a5b8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201a600 */
.global m68k_move_long_0201a600
m68k_move_long_0201a600:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201a644 */
.global m68k_move_byte_0201a644
m68k_move_byte_0201a644:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201a694 */
.global m68k_move_word_0201a694
m68k_move_word_0201a694:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201a6dc */
.global m68k_move_long_0201a6dc
m68k_move_long_0201a6dc:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x0201a720 */
.global m68k_move_byte_0201a720
m68k_move_byte_0201a720:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201a764 */
.global m68k_move_word_0201a764
m68k_move_word_0201a764:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201a7a8 */
.global m68k_move_long_0201a7a8
m68k_move_long_0201a7a8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x200000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201a7e8 */
.global m68k_move_byte_0201a7e8
m68k_move_byte_0201a7e8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201a850 */
.global m68k_move_word_0201a850
m68k_move_word_0201a850:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201a8b8 */
.global m68k_move_long_0201a8b8
m68k_move_long_0201a8b8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
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
    sub        r7, r7, #0x220000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201a91c */
.global m68k_move_byte_0201a91c
m68k_move_byte_0201a91c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201a950 */
.global m68k_move_word_0201a950
m68k_move_word_0201a950:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201a984 */
.global m68k_move_long_0201a984
m68k_move_long_0201a984:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x200000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201a9b4 */
.global m68k_move_byte_0201a9b4
m68k_move_byte_0201a9b4:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201a9f0 */
.global m68k_move_word_0201a9f0
m68k_move_word_0201a9f0:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201aa2c */
.global m68k_move_long_0201aa2c
m68k_move_long_0201aa2c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x240000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201aa64 */
.global m68k_move_byte_0201aa64
m68k_move_byte_0201aa64:
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
    and        r2, fp, #0xe00
    strb       r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201aaa8 */
.global m68k_move_word_0201aaa8
m68k_move_word_0201aaa8:
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
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201aaf0 */
.global m68k_move_long_0201aaf0
m68k_move_long_0201aaf0:
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
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ab30 */
.global m68k_move_byte_0201ab30
m68k_move_byte_0201ab30:
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
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201ab78 */
.global m68k_move_word_0201ab78
m68k_move_word_0201ab78:
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
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201abc0 */
.global m68k_move_long_0201abc0
m68k_move_long_0201abc0:
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
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201ac04 */
.global m68k_move_byte_0201ac04
m68k_move_byte_0201ac04:
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

/* 0x0201ac60 */
.global m68k_move_word_0201ac60
m68k_move_word_0201ac60:
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
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201acb4 */
.global m68k_move_long_0201acb4
m68k_move_long_0201acb4:
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
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #4
    str        r3, [r2]
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201ad04 */
.global m68k_move_byte_0201ad04
m68k_move_byte_0201ad04:
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

/* 0x0201ad60 */
.global m68k_move_word_0201ad60
m68k_move_word_0201ad60:
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
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201adb4 */
.global m68k_move_long_0201adb4
m68k_move_long_0201adb4:
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
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x0201ae04 */
.global m68k_move_byte_0201ae04
m68k_move_byte_0201ae04:
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
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201ae54 */
.global m68k_move_word_0201ae54
m68k_move_word_0201ae54:
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
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201aea4 */
.global m68k_move_long_0201aea4
m68k_move_long_0201aea4:
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
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201aef0 */
.global m68k_move_byte_0201aef0
m68k_move_byte_0201aef0:
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

/* 0x0201af64 */
.global m68k_move_word_0201af64
m68k_move_word_0201af64:
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

/* 0x0201afd8 */
.global m68k_move_long_0201afd8
m68k_move_long_0201afd8:
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

/* 0x0201b048 */
.global m68k_move_byte_0201b048
m68k_move_byte_0201b048:
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
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4
