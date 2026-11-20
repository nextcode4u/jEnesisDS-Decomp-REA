/* 68000 instruction handlers in ARM9 main memory. 0x0202e3d4–0x0202fe48. */


/* 0x0202e3d4 */
.global m68k_jmp_0202e3d4
m68k_jmp_0202e3d4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    mov        r1, #0x80000000
    tst        r0, #0xc00000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e420 */
.global m68k_jmp_0202e420
m68k_jmp_0202e420:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    mov        r1, #0x80000000
    tst        r0, #0xc00000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e474 */
.global m68k_jmp_0202e474
m68k_jmp_0202e474:
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
    mov        r1, #0x80000000
    tst        r0, #0xc00000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e4ec */
.global m68k_jmp_0202e4ec
m68k_jmp_0202e4ec:
    ldrsh      r0, [sl], #2
    mov        r1, #0x80000000
    tst        r0, #0xc00000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e530 */
.global m68k_jmp_0202e530
m68k_jmp_0202e530:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    mov        r1, #0x80000000
    tst        r0, #0xc00000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0xc0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e57c */
.global m68k_jmp_0202e57c
m68k_jmp_0202e57c:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    mov        r1, #0x80000000
    tst        r0, #0xc00000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e5d4 */
.global m68k_jmp_0202e5d4
m68k_jmp_0202e5d4:
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
    mov        r1, #0x80000000
    tst        r0, #0xc00000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e654 */
.global m68k_jsr_0202e654
m68k_jsr_0202e654:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    ldr        r4, [r6, #0x3c]
    ldr        lr, [r6, #0x54]
    sub        r4, r4, #4
    ldr        r1, [r6, #0x9c]
    sub        r3, sl, lr
    str        r4, [r6, #0x3c]
    orr        r3, r3, r1
    lsr        r2, r3, #0x10
    lsl        r4, r4, #0x10
    add        r4, r8, r4, lsr #16
    strh       r2, [r4], #2
    tst        r0, #0xc00000
    strh       r3, [r4]
    mov        r1, #0x80000000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0x100000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e6d0 */
.global m68k_jsr_0202e6d0
m68k_jsr_0202e6d0:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    ldr        r4, [r6, #0x3c]
    ldr        lr, [r6, #0x54]
    sub        r4, r4, #4
    ldr        r1, [r6, #0x9c]
    sub        r3, sl, lr
    str        r4, [r6, #0x3c]
    orr        r3, r3, r1
    lsr        r2, r3, #0x10
    lsl        r4, r4, #0x10
    add        r4, r8, r4, lsr #16
    strh       r2, [r4], #2
    tst        r0, #0xc00000
    strh       r3, [r4]
    mov        r1, #0x80000000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0x120000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e754 */
.global m68k_jsr_0202e754
m68k_jsr_0202e754:
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
    ldr        r4, [r6, #0x3c]
    ldr        lr, [r6, #0x54]
    sub        r4, r4, #4
    ldr        r1, [r6, #0x9c]
    sub        r3, sl, lr
    str        r4, [r6, #0x3c]
    orr        r3, r3, r1
    lsr        r2, r3, #0x10
    lsl        r4, r4, #0x10
    add        r4, r8, r4, lsr #16
    strh       r2, [r4], #2
    tst        r0, #0xc00000
    strh       r3, [r4]
    mov        r1, #0x80000000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0x160000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e7fc */
.global m68k_jsr_0202e7fc
m68k_jsr_0202e7fc:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    ldr        r4, [r6, #0x3c]
    ldr        lr, [r6, #0x54]
    sub        r4, r4, #4
    ldr        r1, [r6, #0x9c]
    sub        r3, sl, lr
    str        r4, [r6, #0x3c]
    orr        r3, r3, r1
    lsr        r2, r3, #0x10
    lsl        r4, r4, #0x10
    add        r4, r8, r4, lsr #16
    strh       r2, [r4], #2
    tst        r0, #0xc00000
    strh       r3, [r4]
    mov        r1, #0x80000000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0x120000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e884 */
.global m68k_jsr_0202e884
m68k_jsr_0202e884:
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
    ldr        r4, [r6, #0x3c]
    ldr        lr, [r6, #0x54]
    sub        r4, r4, #4
    ldr        r1, [r6, #0x9c]
    sub        r3, sl, lr
    str        r4, [r6, #0x3c]
    orr        r3, r3, r1
    lsr        r2, r3, #0x10
    lsl        r4, r4, #0x10
    add        r4, r8, r4, lsr #16
    strh       r2, [r4], #2
    tst        r0, #0xc00000
    strh       r3, [r4]
    mov        r1, #0x80000000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0x160000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202e934 */
.global m68k_movem_word_0202e934
m68k_movem_word_0202e934:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r4, [r2, r1, lsl #2]
    lsls       r0, r4, #0x10
    add        r3, r8, r0, lsr #16
    addeq      r3, r3, #0x10000
    tst        r5, #0xff
    mov        r1, #0
    beq        .L_0202e9dc
    tst        r5, #1
    ldrhne     r0, [r2, #0x1c]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #2
    ldrhne     r0, [r2, #0x18]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #4
    ldrhne     r0, [r2, #0x14]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #8
    ldrhne     r0, [r2, #0x10]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x10
    ldrhne     r0, [r2, #0xc]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x20
    ldrhne     r0, [r2, #8]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x40
    ldrhne     r0, [r2, #4]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x80
    ldrhne     r0, [r2]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
.L_0202e9dc:
    tst        r5, #0x100
    ldrhne     r0, [r6, #0x1c]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x200
    ldrhne     r0, [r6, #0x18]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x400
    ldrhne     r0, [r6, #0x14]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x800
    ldrhne     r0, [r6, #0x10]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x1000
    ldrhne     r0, [r6, #0xc]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x2000
    ldrhne     r0, [r6, #8]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x4000
    ldrhne     r0, [r6, #4]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    tst        r5, #0x8000
    ldrhne     r0, [r6]
    addne      r1, r1, #1
    strhne     r0, [r3, #-2]!
    sub        r4, r4, r1, lsl #1
    and        r5, fp, #7
    str        r4, [r2, r5, lsl #2]
    sub        r7, r7, r1, lsl #18
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ea7c */
.global m68k_movem_word_0202ea7c
m68k_movem_word_0202ea7c:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    sub        r7, r7, #0x80000
    b          .L_0202eb2c

/* 0x0202ea94 */
.global m68k_movem_word_0202ea94
m68k_movem_word_0202ea94:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    sub        r7, r7, #0xc0000
    add        r0, r0, r3
    b          .L_0202eb2c

/* 0x0202eab4 */
.global m68k_movem_word_0202eab4
m68k_movem_word_0202eab4:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    ldrh       r3, [sl], #2
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
    sub        r7, r7, #0xe0000
    add        r0, r0, r1
    add        r2, r6, #0x20
    b          .L_0202eb2c

/* 0x0202eafc */
.global m68k_movem_word_0202eafc
m68k_movem_word_0202eafc:
    ldrh       r5, [sl], #2
    add        r2, r6, #0x20
    sub        r7, r7, #0xc0000
    ldrsh      r0, [sl], #2
    b          .L_0202eb2c

/* 0x0202eb10 */
.global m68k_movem_word_0202eb10
m68k_movem_word_0202eb10:
    ldrh       r5, [sl], #2
    ldrh       r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       r1, [sl], #2
    add        r2, r6, #0x20
    orr        r0, r1, r0, lsl #16
    b          .L_0202eb2c
.L_0202eb2c:
    and        r1, r0, #0xe00000
    cmp        r1, #0xe00000
    bne        .L_0202ec5c
    tst        r5, #0xff
    lsl        r4, r0, #0x10
    add        r3, r8, r4, lsr #16
    mov        r1, #0
    beq        .L_0202ebcc
    tst        r5, #1
    ldrhne     r4, [r6]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #2
    ldrhne     r4, [r6, #4]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #4
    ldrhne     r4, [r6, #8]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #8
    ldrhne     r4, [r6, #0xc]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x10
    ldrhne     r4, [r6, #0x10]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x20
    ldrhne     r4, [r6, #0x14]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x40
    ldrhne     r4, [r6, #0x18]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x80
    ldrhne     r4, [r6, #0x1c]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
.L_0202ebcc:
    tst        r5, #0x100
    ldrhne     r4, [r2]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x200
    ldrhne     r4, [r2, #4]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x400
    ldrhne     r4, [r2, #8]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x800
    ldrhne     r4, [r2, #0xc]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x1000
    ldrhne     r4, [r2, #0x10]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x2000
    ldrhne     r4, [r2, #0x14]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x4000
    ldrhne     r4, [r2, #0x18]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    tst        r5, #0x8000
    ldrhne     r4, [r2, #0x1c]
    addne      r1, r1, #1
    strhne     r4, [r3], #2
    subs       r7, r7, r1, lsl #18
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202ec5c:
    tst        r5, #0xff
    mov        r4, r0
    beq        .L_0202ed24
    tst        r5, #1
    ldrhne     r1, [r6]
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #2
    ldrhne     r1, [r6, #4]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #4
    ldrhne     r1, [r6, #8]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #8
    ldrhne     r1, [r6, #0xc]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x10
    ldrhne     r1, [r6, #0x10]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x20
    ldrhne     r1, [r6, #0x14]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x40
    ldrhne     r1, [r6, #0x18]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x80
    ldrhne     r1, [r6, #0x1c]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
.L_0202ed24:
    tst        r5, #0x100
    ldrhne     r1, [r6, #0x20]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x200
    ldrhne     r1, [r6, #0x24]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x400
    ldrhne     r1, [r6, #0x28]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x800
    ldrhne     r1, [r6, #0x2c]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x1000
    ldrhne     r1, [r6, #0x30]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x2000
    ldrhne     r1, [r6, #0x34]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x4000
    ldrhne     r1, [r6, #0x38]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    tst        r5, #0x8000
    ldrhne     r1, [r6, #0x3c]
    movne      r0, r4
    blne       write_m68k_bus_word
    addne      r4, r4, #2
    addne      r5, r5, #0x10000
    lsr        r1, r5, #0x10
    subs       r7, r7, r1, lsl #18
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084

/* 0x0202edf8 */
.global m68k_movem_word_0202edf8
m68k_movem_word_0202edf8:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r4, [r2, r1, lsl #2]
    tst        r4, #0xc00000
    lslne      r0, r4, #0x10
    addne      r3, r8, r0, lsr #16
    ldreq      r3, [r6, #0x60]
    lsleq      r0, r4, #0xa
    addeq      r3, r3, r0, lsr #10
    mov        r1, r4
    tst        r5, #0xff
    beq        .L_0202eec8
    tst        r5, #1
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    strne      r0, [r6]
    tst        r5, #2
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r6, #4]
    tst        r5, #4
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r6, #8]
    tst        r5, #8
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r6, #0xc]
    tst        r5, #0x10
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r6, #0x10]
    tst        r5, #0x20
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r6, #0x14]
    tst        r5, #0x40
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r6, #0x18]
    tst        r5, #0x80
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r6, #0x1c]
.L_0202eec8:
    tst        r5, #0x100
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r2]
    tst        r5, #0x200
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r2, #4]
    tst        r5, #0x400
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r2, #8]
    tst        r5, #0x800
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r2, #0xc]
    tst        r5, #0x1000
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r2, #0x10]
    tst        r5, #0x2000
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r2, #0x14]
    tst        r5, #0x4000
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r2, #0x18]
    tst        r5, #0x8000
    ldrshne    r0, [r3], #2
    addne      r1, r1, #2
    subne      r7, r7, #0x40000
    strne      r0, [r2, #0x1c]
    and        r5, fp, #7
    str        r1, [r2, r5, lsl #2]
    subs       r7, r7, #0xc0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ef80 */
.global m68k_movem_word_0202ef80
m68k_movem_word_0202ef80:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    sub        r7, r7, #0xc0000
    b          .L_0202f0a8

/* 0x0202ef98 */
.global m68k_movem_word_0202ef98
m68k_movem_word_0202ef98:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrsh      r3, [sl], #2
    ldr        r0, [r2, r1, lsl #2]
    sub        r7, r7, #0x100000
    add        r0, r0, r3
    b          .L_0202f0a8

/* 0x0202efb8 */
.global m68k_movem_word_0202efb8
m68k_movem_word_0202efb8:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrh       r3, [sl], #2
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
    sub        r7, r7, #0x120000
    add        r0, r0, r1
    add        r2, r6, #0x20
    b          .L_0202f0a8

/* 0x0202f000 */
.global m68k_movem_word_0202f000
m68k_movem_word_0202f000:
    ldrh       r5, [sl], #2
    add        r2, r6, #0x20
    sub        r7, r7, #0x100000
    ldrsh      r0, [sl], #2
    b          .L_0202f0a8

/* 0x0202f014 */
.global m68k_movem_word_0202f014
m68k_movem_word_0202f014:
    ldrh       r5, [sl], #2
    add        r2, r6, #0x20
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    sub        r7, r7, #0x140000
    orr        r0, r1, r0, lsl #16
    b          .L_0202f0a8

/* 0x0202f030 */
.global m68k_movem_word_0202f030
m68k_movem_word_0202f030:
    ldr        lr, [r6, #0x54]
    ldrh       r5, [sl], #2
    sub        r7, r7, #0x100000
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r3, [sl], #2
    orr        r0, r0, r1
    add        r2, r6, #0x20
    add        r0, r0, r3
    b          .L_0202f0a8

/* 0x0202f058 */
.global m68k_movem_word_0202f058
m68k_movem_word_0202f058:
    ldr        lr, [r6, #0x54]
    ldrh       r5, [sl], #2
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
    sub        r7, r7, #0x120000
    add        r2, r6, #0x20
    add        r0, r0, r1
    b          .L_0202f0a8
.L_0202f0a8:
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r3, r8, r0, lsr #16
    ldreq      r3, [r6, #0x60]
    lsleq      r0, r0, #0xa
    addeq      r3, r3, r0, lsr #10
    mov        r1, #0
    tst        r5, #0xff
    beq        .L_0202f14c
    tst        r5, #1
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r6]
    tst        r5, #2
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r6, #4]
    tst        r5, #4
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r6, #8]
    tst        r5, #8
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r6, #0xc]
    tst        r5, #0x10
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r6, #0x10]
    tst        r5, #0x20
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r6, #0x14]
    tst        r5, #0x40
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r6, #0x18]
    tst        r5, #0x80
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r6, #0x1c]
.L_0202f14c:
    tst        r5, #0x100
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r2]
    tst        r5, #0x200
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r2, #4]
    tst        r5, #0x400
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r2, #8]
    tst        r5, #0x800
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r2, #0xc]
    tst        r5, #0x1000
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r2, #0x10]
    tst        r5, #0x2000
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r2, #0x14]
    tst        r5, #0x4000
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r2, #0x18]
    tst        r5, #0x8000
    ldrshne    r0, [r3], #2
    addne      r1, r1, #1
    strne      r0, [r2, #0x1c]
    subs       r7, r7, r1, lsl #18
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084

/* 0x0202f1dc */
.global m68k_movem_long_0202f1dc
m68k_movem_long_0202f1dc:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r4, [r2, r1, lsl #2]
    and        r0, r4, #0xe00000
    cmp        r0, #0xe00000
    bne        .L_0202f3b4
    lsls       r0, r4, #0x10
    add        r3, r8, r0, lsr #16
    addeq      r3, r3, #0x10000
    tst        r5, #0xff
    mov        r1, #0
    beq        .L_0202f2d0
    tst        r5, #1
    ldrne      r0, [r2, #0x1c]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #2
    ldrne      r0, [r2, #0x18]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #4
    ldrne      r0, [r2, #0x14]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #8
    ldrne      r0, [r2, #0x10]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x10
    ldrne      r0, [r2, #0xc]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x20
    ldrne      r0, [r2, #8]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x40
    ldrne      r0, [r2, #4]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x80
    ldrne      r0, [r2]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
.L_0202f2d0:
    tst        r5, #0x100
    ldrne      r0, [r6, #0x1c]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x200
    ldrne      r0, [r6, #0x18]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x400
    ldrne      r0, [r6, #0x14]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x800
    ldrne      r0, [r6, #0x10]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x1000
    ldrne      r0, [r6, #0xc]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x2000
    ldrne      r0, [r6, #8]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x4000
    ldrne      r0, [r6, #4]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    tst        r5, #0x8000
    ldrne      r0, [r6]
    addne      r1, r1, #1
    lsrne      r4, r0, #0x10
    strhne     r0, [r3, #-2]!
    strhne     r4, [r3, #-2]!
    and        r5, fp, #7
    ldr        r4, [r2, r5, lsl #2]
    sub        r4, r4, r1, lsl #2
    str        r4, [r2, r5, lsl #2]
    sub        r7, r7, r1, lsl #19
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202f3b4:
    tst        r5, #0xff
    mov        r1, #0
    beq        .L_0202f480
    tst        r5, #1
    ldrne      r1, [r6, #0x3c]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #2
    ldrne      r1, [r6, #0x38]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #4
    ldrne      r1, [r6, #0x34]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #8
    ldrne      r1, [r6, #0x30]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x10
    ldrne      r1, [r6, #0x2c]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x20
    ldrne      r1, [r6, #0x28]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x40
    ldrne      r1, [r6, #0x24]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x80
    ldrne      r1, [r6, #0x20]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
.L_0202f480:
    tst        r5, #0x100
    ldrne      r1, [r6, #0x1c]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x200
    ldrne      r1, [r6, #0x18]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x400
    ldrne      r1, [r6, #0x14]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x800
    ldrne      r1, [r6, #0x10]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x1000
    ldrne      r1, [r6, #0xc]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x2000
    ldrne      r1, [r6, #8]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x4000
    ldrne      r1, [r6, #4]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    tst        r5, #0x8000
    ldrne      r1, [r6]
    subne      r4, r4, #4
    movne      r0, r4
    blne       write_m68k_bus_long_via_table
    addne      r5, r5, #0x10000
    and        r5, fp, #7
    add        r2, r6, #0x20
    str        r4, [r2, r5, lsl #2]
    lsr        r1, r5, #0x10
    sub        r7, r7, r1, lsl #19
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202f564 */
.global m68k_movem_long_0202f564
m68k_movem_long_0202f564:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    sub        r7, r7, #0x80000
    b          .L_0202f614

/* 0x0202f57c */
.global m68k_movem_long_0202f57c
m68k_movem_long_0202f57c:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    sub        r7, r7, #0xc0000
    add        r0, r0, r3
    b          .L_0202f614

/* 0x0202f59c */
.global m68k_movem_long_0202f59c
m68k_movem_long_0202f59c:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    ldrh       r3, [sl], #2
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
    sub        r7, r7, #0xe0000
    add        r0, r0, r1
    add        r2, r6, #0x20
    b          .L_0202f614

/* 0x0202f5e4 */
.global m68k_movem_long_0202f5e4
m68k_movem_long_0202f5e4:
    ldrh       r5, [sl], #2
    sub        r7, r7, #0xc0000
    ldrsh      r0, [sl], #2
    add        r2, r6, #0x20
    b          .L_0202f614

/* 0x0202f5f8 */
.global m68k_movem_long_0202f5f8
m68k_movem_long_0202f5f8:
    ldrh       r5, [sl], #2
    ldrh       r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       r1, [sl], #2
    add        r2, r6, #0x20
    orr        r0, r1, r0, lsl #16
    b          .L_0202f614
.L_0202f614:
    and        r1, r0, #0xe00000
    cmp        r1, #0xe00000
    bne        .L_0202f7c4
    tst        r5, #0xff
    lsl        r4, r0, #0x10
    add        r3, r8, r4, lsr #16
    mov        r1, #0
    beq        .L_0202f6f4
    tst        r5, #1
    ldrne      r4, [r6]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #2
    ldrne      r4, [r6, #4]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #4
    ldrne      r4, [r6, #8]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #8
    ldrne      r4, [r6, #0xc]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x10
    ldrne      r4, [r6, #0x10]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x20
    ldrne      r4, [r6, #0x14]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x40
    ldrne      r4, [r6, #0x18]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x80
    ldrne      r4, [r6, #0x1c]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
.L_0202f6f4:
    tst        r5, #0x100
    ldrne      r4, [r2]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x200
    ldrne      r4, [r2, #4]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x400
    ldrne      r4, [r2, #8]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x800
    ldrne      r4, [r2, #0xc]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x1000
    ldrne      r4, [r2, #0x10]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x2000
    ldrne      r4, [r2, #0x14]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x4000
    ldrne      r4, [r2, #0x18]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    tst        r5, #0x8000
    ldrne      r4, [r2, #0x1c]
    addne      r1, r1, #1
    lsrne      r0, r4, #0x10
    strhne     r0, [r3], #2
    strhne     r4, [r3], #2
    subs       r7, r7, r1, lsl #19
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
.L_0202f7c4:
    tst        r5, #0xff
    mov        r4, r0
    beq        .L_0202f88c
    tst        r5, #1
    ldrne      r1, [r6]
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #2
    ldrne      r1, [r6, #4]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #4
    ldrne      r1, [r6, #8]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #8
    ldrne      r1, [r6, #0xc]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x10
    ldrne      r1, [r6, #0x10]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x20
    ldrne      r1, [r6, #0x14]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x40
    ldrne      r1, [r6, #0x18]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x80
    ldrne      r1, [r6, #0x1c]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
.L_0202f88c:
    tst        r5, #0x100
    ldrne      r1, [r6, #0x20]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x200
    ldrne      r1, [r6, #0x24]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x400
    ldrne      r1, [r6, #0x28]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x800
    ldrne      r1, [r6, #0x2c]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x1000
    ldrne      r1, [r6, #0x30]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x2000
    ldrne      r1, [r6, #0x34]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x4000
    ldrne      r1, [r6, #0x38]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    tst        r5, #0x8000
    ldrne      r1, [r6, #0x3c]
    movne      r0, r4
    blne       write_m68k_bus_long
    addne      r4, r4, #4
    addne      r5, r5, #0x10000
    lsr        r1, r5, #0x10
    subs       r7, r7, r1, lsl #19
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084

/* 0x0202f960 */
.global m68k_movem_long_0202f960
m68k_movem_long_0202f960:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r4, [r2, r1, lsl #2]
    tst        r4, #0xc00000
    lslne      r0, r4, #0x10
    addne      r3, r8, r0, lsr #16
    ldreq      r3, [r6, #0x60]
    lsleq      r0, r4, #0xa
    addeq      r3, r3, r0, lsr #10
    mov        r1, r4
    tst        r5, #0xff
    beq        .L_0202fa74
    tst        r5, #1
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6]
    tst        r5, #2
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #4]
    tst        r5, #4
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #8]
    tst        r5, #8
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0xc]
    tst        r5, #0x10
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0x10]
    tst        r5, #0x20
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0x14]
    tst        r5, #0x40
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0x18]
    tst        r5, #0x80
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0x1c]
.L_0202fa74:
    tst        r5, #0x100
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2]
    tst        r5, #0x200
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #4]
    tst        r5, #0x400
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #8]
    tst        r5, #0x800
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0xc]
    tst        r5, #0x1000
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0x10]
    tst        r5, #0x2000
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0x14]
    tst        r5, #0x4000
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0x18]
    tst        r5, #0x8000
    ldrhne     r0, [r3], #2
    subne      r7, r7, #0x80000
    ldrhne     r4, [r3], #2
    addne      r1, r1, #4
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0x1c]
    and        r5, fp, #7
    str        r1, [r2, r5, lsl #2]
    subs       r7, r7, #0xc0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202fb6c */
.global m68k_movem_long_0202fb6c
m68k_movem_long_0202fb6c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    sub        r7, r7, #0xc0000
    ldrh       r5, [sl], #2
    b          .L_0202fc94

/* 0x0202fb84 */
.global m68k_movem_long_0202fb84
m68k_movem_long_0202fb84:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrsh      r3, [sl], #2
    sub        r7, r7, #0x100000
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    b          .L_0202fc94

/* 0x0202fba4 */
.global m68k_movem_long_0202fba4
m68k_movem_long_0202fba4:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    sub        r7, r7, #0x120000
    ldrh       r3, [sl], #2
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
    add        r2, r6, #0x20
    b          .L_0202fc94

/* 0x0202fbec */
.global m68k_movem_long_0202fbec
m68k_movem_long_0202fbec:
    ldrh       r5, [sl], #2
    add        r2, r6, #0x20
    sub        r7, r7, #0x100000
    ldrsh      r0, [sl], #2
    b          .L_0202fc94

/* 0x0202fc00 */
.global m68k_movem_long_0202fc00
m68k_movem_long_0202fc00:
    ldrh       r5, [sl], #2
    add        r2, r6, #0x20
    ldrh       r0, [sl], #2
    sub        r7, r7, #0x140000
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    b          .L_0202fc94

/* 0x0202fc1c */
.global m68k_movem_long_0202fc1c
m68k_movem_long_0202fc1c:
    ldr        lr, [r6, #0x54]
    ldrh       r5, [sl], #2
    sub        r7, r7, #0x100000
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r3, [sl], #2
    orr        r0, r0, r1
    add        r2, r6, #0x20
    add        r0, r0, r3
    b          .L_0202fc94

/* 0x0202fc44 */
.global m68k_movem_long_0202fc44
m68k_movem_long_0202fc44:
    ldr        lr, [r6, #0x54]
    ldrh       r5, [sl], #2
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
    sub        r7, r7, #0x120000
    add        r2, r6, #0x20
    add        r0, r0, r1
    b          .L_0202fc94
.L_0202fc94:
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r3, r8, r0, lsr #16
    ldreq      r3, [r6, #0x60]
    lsleq      r0, r0, #0xa
    addeq      r3, r3, r0, lsr #10
    mov        r1, #0
    tst        r5, #0xff
    beq        .L_0202fd78
    tst        r5, #1
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6]
    tst        r5, #2
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #4]
    tst        r5, #4
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #8]
    tst        r5, #8
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0xc]
    tst        r5, #0x10
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0x10]
    tst        r5, #0x20
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0x14]
    tst        r5, #0x40
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0x18]
    tst        r5, #0x80
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r6, #0x1c]
.L_0202fd78:
    tst        r5, #0x100
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2]
    tst        r5, #0x200
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #4]
    tst        r5, #0x400
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #8]
    tst        r5, #0x800
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0xc]
    tst        r5, #0x1000
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0x10]
    tst        r5, #0x2000
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0x14]
    tst        r5, #0x4000
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0x18]
    tst        r5, #0x8000
    ldrhne     r0, [r3], #2
    ldrhne     r4, [r3], #2
    addne      r1, r1, #1
    orrne      r0, r4, r0, lsl #16
    strne      r0, [r2, #0x1c]
    subs       r7, r7, r1, lsl #19
    ldrhgt     fp, [sl], #2
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084
