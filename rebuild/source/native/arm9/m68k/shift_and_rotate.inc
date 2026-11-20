/* 68000 instruction handlers in ARM9 main memory. 0x0202aff8–0x0202d1f0. */


/* 0x0202aff8 */
.global m68k_asl_word_0202aff8
m68k_asl_word_0202aff8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    eors       r4, r5, r0, lsl #16
    orrmi      r7, r7, #2
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b040 */
.global m68k_asr_word_or_bftst_0202b040
m68k_asr_word_or_bftst_0202b040:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrsh      r0, [r2]
    bic        r7, r7, #0x1f
    asrs       r5, r0, #1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b07c */
.global m68k_lsl_word_0202b07c
m68k_lsl_word_0202b07c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b0bc */
.global m68k_lsr_word_0202b0bc
m68k_lsr_word_0202b0bc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsrs       r5, r0, #1
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b0f4 */
.global m68k_rol_word_0202b0f4
m68k_rol_word_0202b0f4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #1
    lsr        r4, r0, #0xf
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b138 */
.global m68k_ror_word_0202b138
m68k_ror_word_0202b138:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsrs       r5, r0, #1
    orrhs      r7, r7, #9
    orrshs     r5, r5, #0x8000
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b174 */
.global m68k_roxl_word_0202b174
m68k_roxl_word_0202b174:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    lsr        r4, r7, #4
    and        r4, r4, #1
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b1bc */
.global m68k_roxr_word_0202b1bc
m68k_roxr_word_0202b1bc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r7, r7, #8
    movne      r5, #0x8000
    moveq      r5, #0
    orrs       r5, r5, r0, lsr #1
    orrhs      r7, r7, #0x11
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b204 */
.global m68k_asl_word_0202b204
m68k_asl_word_0202b204:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    eors       r4, r5, r0, lsl #16
    orrmi      r7, r7, #2
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b258 */
.global m68k_asr_word_0202b258
m68k_asr_word_0202b258:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrsh      r0, [r3]
    bic        r7, r7, #0x1f
    asrs       r5, r0, #1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b2a0 */
.global m68k_lsl_word_0202b2a0
m68k_lsl_word_0202b2a0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b2ec */
.global m68k_lsr_word_0202b2ec
m68k_lsr_word_0202b2ec:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0x1f
    lsrs       r5, r0, #1
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b330 */
.global m68k_rol_word_0202b330
m68k_rol_word_0202b330:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #1
    lsr        r4, r0, #0xf
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b380 */
.global m68k_ror_word_0202b380
m68k_ror_word_0202b380:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0xf
    lsrs       r5, r0, #1
    orrhs      r7, r7, #9
    orrshs     r5, r5, #0x8000
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b3c8 */
.global m68k_roxl_word_0202b3c8
m68k_roxl_word_0202b3c8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    lsr        r4, r7, #4
    and        r4, r4, #1
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b41c */
.global m68k_roxr_word_0202b41c
m68k_roxr_word_0202b41c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r7, r7, #8
    movne      r5, #0x8000
    moveq      r5, #0
    orrs       r5, r5, r0, lsr #1
    orrhs      r7, r7, #0x11
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b470 */
.global m68k_asl_word_0202b470
m68k_asl_word_0202b470:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    eors       r4, r5, r0, lsl #16
    orrmi      r7, r7, #2
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b4c4 */
.global m68k_asr_word_0202b4c4
m68k_asr_word_0202b4c4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrsh      r0, [r3]
    bic        r7, r7, #0x1f
    asrs       r5, r0, #1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b50c */
.global m68k_lsl_word_0202b50c
m68k_lsl_word_0202b50c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b558 */
.global m68k_lsr_word_0202b558
m68k_lsr_word_0202b558:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0x1f
    lsrs       r5, r0, #1
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b59c */
.global m68k_rol_word_0202b59c
m68k_rol_word_0202b59c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #1
    lsr        r4, r0, #0xf
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b5ec */
.global m68k_ror_word_0202b5ec
m68k_ror_word_0202b5ec:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0xf
    lsrs       r5, r0, #1
    orrhs      r7, r7, #9
    orrshs     r5, r5, #0x8000
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b634 */
.global m68k_roxl_word_0202b634
m68k_roxl_word_0202b634:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    lsr        r4, r7, #4
    and        r4, r4, #1
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b688 */
.global m68k_roxr_word_0202b688
m68k_roxr_word_0202b688:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r7, r7, #8
    movne      r5, #0x8000
    moveq      r5, #0
    orrs       r5, r5, r0, lsr #1
    orrhs      r7, r7, #0x11
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b6dc */
.global m68k_asl_word_0202b6dc
m68k_asl_word_0202b6dc:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    eors       r4, r5, r0, lsl #16
    orrmi      r7, r7, #2
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b72c */
.global m68k_asr_word_or_bftst_0202b72c
m68k_asr_word_or_bftst_0202b72c:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrsh      r0, [r2]
    bic        r7, r7, #0x1f
    asrs       r5, r0, #1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b770 */
.global m68k_lsl_word_0202b770
m68k_lsl_word_0202b770:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b7b8 */
.global m68k_lsr_word_0202b7b8
m68k_lsr_word_0202b7b8:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsrs       r5, r0, #1
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b7f8 */
.global m68k_rol_word_0202b7f8
m68k_rol_word_0202b7f8:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #1
    lsr        r4, r0, #0xf
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b844 */
.global m68k_ror_word_0202b844
m68k_ror_word_0202b844:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsrs       r5, r0, #1
    orrhs      r7, r7, #9
    orrshs     r5, r5, #0x8000
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b888 */
.global m68k_roxl_word_0202b888
m68k_roxl_word_0202b888:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    lsr        r4, r7, #4
    and        r4, r4, #1
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b8d8 */
.global m68k_roxr_word_0202b8d8
m68k_roxr_word_0202b8d8:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r7, r7, #8
    movne      r5, #0x8000
    moveq      r5, #0
    orrs       r5, r5, r0, lsr #1
    orrhs      r7, r7, #0x11
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b928 */
.global m68k_asl_word_0202b928
m68k_asl_word_0202b928:
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
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    eors       r4, r5, r0, lsl #16
    orrmi      r7, r7, #2
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202b99c */
.global m68k_asr_word_or_bftst_0202b99c
m68k_asr_word_or_bftst_0202b99c:
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
    ldrsh      r0, [r2]
    bic        r7, r7, #0x1f
    asrs       r5, r0, #1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ba04 */
.global m68k_lsl_word_0202ba04
m68k_lsl_word_0202ba04:
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
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ba70 */
.global m68k_lsr_word_0202ba70
m68k_lsr_word_0202ba70:
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
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsrs       r5, r0, #1
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bad4 */
.global m68k_rol_word_0202bad4
m68k_rol_word_0202bad4:
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
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #1
    lsr        r4, r0, #0xf
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bb44 */
.global m68k_ror_word_0202bb44
m68k_ror_word_0202bb44:
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
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsrs       r5, r0, #1
    orrhs      r7, r7, #9
    orrshs     r5, r5, #0x8000
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bbac */
.global m68k_roxl_word_0202bbac
m68k_roxl_word_0202bbac:
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
    ldrh       r0, [r2]
    lsr        r4, r7, #4
    and        r4, r4, #1
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bc20 */
.global m68k_roxr_word_0202bc20
m68k_roxr_word_0202bc20:
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
    ldrh       r0, [r2]
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r7, r7, #8
    movne      r5, #0x8000
    moveq      r5, #0
    orrs       r5, r5, r0, lsr #1
    orrhs      r7, r7, #0x11
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bc94 */
.global m68k_asl_word_0202bc94
m68k_asl_word_0202bc94:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    eors       r4, r5, r0, lsl #16
    orrmi      r7, r7, #2
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bcd0 */
.global m68k_asr_word_or_bftst_0202bcd0
m68k_asr_word_or_bftst_0202bcd0:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrsh      r0, [r2]
    bic        r7, r7, #0x1f
    asrs       r5, r0, #1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bd00 */
.global m68k_lsl_word_0202bd00
m68k_lsl_word_0202bd00:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bd34 */
.global m68k_lsr_word_0202bd34
m68k_lsr_word_0202bd34:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsrs       r5, r0, #1
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bd60 */
.global m68k_rol_word_0202bd60
m68k_rol_word_0202bd60:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #1
    lsr        r4, r0, #0xf
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bd98 */
.global m68k_ror_word_0202bd98
m68k_ror_word_0202bd98:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsrs       r5, r0, #1
    orrhs      r7, r7, #9
    orrshs     r5, r5, #0x8000
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bdc8 */
.global m68k_roxl_word_0202bdc8
m68k_roxl_word_0202bdc8:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    lsr        r4, r7, #4
    and        r4, r4, #1
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202be04 */
.global m68k_roxr_word_0202be04
m68k_roxr_word_0202be04:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r7, r7, #8
    movne      r5, #0x8000
    moveq      r5, #0
    orrs       r5, r5, r0, lsr #1
    orrhs      r7, r7, #0x11
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202be40 */
.global m68k_asl_word_0202be40
m68k_asl_word_0202be40:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    eors       r4, r5, r0, lsl #16
    orrmi      r7, r7, #2
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202be80 */
.global m68k_asr_word_or_bftst_0202be80
m68k_asr_word_or_bftst_0202be80:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrsh      r0, [r2]
    bic        r7, r7, #0x1f
    asrs       r5, r0, #1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202beb4 */
.global m68k_lsl_word_0202beb4
m68k_lsl_word_0202beb4:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202beec */
.global m68k_lsr_word_0202beec
m68k_lsr_word_0202beec:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsrs       r5, r0, #1
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bf1c */
.global m68k_rol_word_0202bf1c
m68k_rol_word_0202bf1c:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #1
    lsr        r4, r0, #0xf
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bf58 */
.global m68k_ror_word_0202bf58
m68k_ror_word_0202bf58:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsrs       r5, r0, #1
    orrhs      r7, r7, #9
    orrshs     r5, r5, #0x8000
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bf8c */
.global m68k_roxl_word_0202bf8c
m68k_roxl_word_0202bf8c:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    lsr        r4, r7, #4
    and        r4, r4, #1
    bic        r7, r7, #0x1f
    lsls       r5, r0, #0x11
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrs       r5, r4, r5, lsr #16
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202bfcc */
.global m68k_roxr_word_0202bfcc
m68k_roxr_word_0202bfcc:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r7, r7, #8
    movne      r5, #0x8000
    moveq      r5, #0
    orrs       r5, r5, r0, lsr #1
    orrhs      r7, r7, #0x11
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202c00c */
.global m68k_bchg_byte_0202c00c
m68k_bchg_byte_0202c00c:
    and        r5, fp, #7
    add        r3, r6, #0x20
    ldr        r5, [r3, r5, lsl #2]
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    eor        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c050 */
.global m68k_bchg_byte_0202c050
m68k_bchg_byte_0202c050:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r5, fp, #7
    add        r3, r6, #0x20
    ldr        r5, [r3, r5, lsl #2]
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    eor        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c090 */
.global m68k_bchg_byte_0202c090
m68k_bchg_byte_0202c090:
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    mov        r0, r5
    cmp        r3, #7
    addeq      r1, r5, #2
    addne      r1, r5, #1
    str        r1, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    eor        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c0e4 */
.global m68k_bchg_byte_0202c0e4
m68k_bchg_byte_0202c0e4:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    mov        r0, r5
    cmp        r3, #7
    addeq      r1, r5, #2
    addne      r1, r5, #1
    str        r1, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    eor        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c134 */
.global m68k_bchg_byte_0202c134
m68k_bchg_byte_0202c134:
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    cmp        r3, #7
    subeq      r5, r5, #2
    subne      r5, r5, #1
    mov        r0, r5
    str        r5, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    eor        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c188 */
.global m68k_bchg_byte_0202c188
m68k_bchg_byte_0202c188:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    cmp        r3, #7
    subeq      r5, r5, #2
    subne      r5, r5, #1
    mov        r0, r5
    str        r5, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    eor        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c1d8 */
.global m68k_bchg_byte_0202c1d8
m68k_bchg_byte_0202c1d8:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r5, [r2, r1, lsl #2]
    add        r5, r5, r3
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    eor        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c224 */
.global m68k_bchg_byte_0202c224
m68k_bchg_byte_0202c224:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r5, [r2, r1, lsl #2]
    add        r5, r5, r3
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    eor        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c26c */
.global m68k_bchg_byte_0202c26c
m68k_bchg_byte_0202c26c:
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
    add        r5, r0, r1
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    eor        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c2dc */
.global m68k_bchg_byte_0202c2dc
m68k_bchg_byte_0202c2dc:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
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
    add        r5, r0, r1
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    eor        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c348 */
.global m68k_bchg_byte_0202c348
m68k_bchg_byte_0202c348:
    ldrsh      r5, [sl], #2
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    eor        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c384 */
.global m68k_bchg_byte_0202c384
m68k_bchg_byte_0202c384:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    ldrsh      r5, [sl], #2
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    eor        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c3bc */
.global m68k_bchg_byte_0202c3bc
m68k_bchg_byte_0202c3bc:
    ldrh       r3, [sl], #2
    ldrh       r0, [sl], #2
    orr        r5, r0, r3, lsl #16
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    eor        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c400 */
.global m68k_bchg_byte_0202c400
m68k_bchg_byte_0202c400:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    ldrh       r3, [sl], #2
    ldrh       r0, [sl], #2
    orr        r5, r0, r3, lsl #16
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    eor        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c440 */
.global m68k_bclr_byte_0202c440
m68k_bclr_byte_0202c440:
    and        r5, fp, #7
    add        r3, r6, #0x20
    ldr        r5, [r3, r5, lsl #2]
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    bic        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c484 */
.global m68k_bclr_byte_0202c484
m68k_bclr_byte_0202c484:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r5, fp, #7
    add        r3, r6, #0x20
    ldr        r5, [r3, r5, lsl #2]
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    bic        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c4c4 */
.global m68k_bclr_byte_0202c4c4
m68k_bclr_byte_0202c4c4:
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    mov        r0, r5
    cmp        r3, #7
    addeq      r1, r5, #2
    addne      r1, r5, #1
    str        r1, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    bic        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c518 */
.global m68k_bclr_byte_0202c518
m68k_bclr_byte_0202c518:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    mov        r0, r5
    cmp        r3, #7
    addeq      r1, r5, #2
    addne      r1, r5, #1
    str        r1, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    bic        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c568 */
.global m68k_bclr_byte_0202c568
m68k_bclr_byte_0202c568:
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    cmp        r3, #7
    subeq      r5, r5, #2
    subne      r5, r5, #1
    mov        r0, r5
    str        r5, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    bic        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c5bc */
.global m68k_bclr_byte_0202c5bc
m68k_bclr_byte_0202c5bc:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    cmp        r3, #7
    subeq      r5, r5, #2
    subne      r5, r5, #1
    mov        r0, r5
    str        r5, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    bic        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c60c */
.global m68k_bclr_byte_0202c60c
m68k_bclr_byte_0202c60c:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r5, [r2, r1, lsl #2]
    add        r5, r5, r3
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    bic        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c658 */
.global m68k_bclr_byte_0202c658
m68k_bclr_byte_0202c658:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r5, [r2, r1, lsl #2]
    add        r5, r5, r3
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    bic        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c6a0 */
.global m68k_bclr_byte_0202c6a0
m68k_bclr_byte_0202c6a0:
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
    add        r5, r0, r1
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    bic        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c710 */
.global m68k_bclr_byte_0202c710
m68k_bclr_byte_0202c710:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
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
    add        r5, r0, r1
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    bic        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c77c */
.global m68k_bclr_byte_0202c77c
m68k_bclr_byte_0202c77c:
    ldrsh      r5, [sl], #2
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    bic        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c7b8 */
.global m68k_bclr_byte_0202c7b8
m68k_bclr_byte_0202c7b8:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    ldrsh      r5, [sl], #2
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    bic        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c7f0 */
.global m68k_bclr_byte_0202c7f0
m68k_bclr_byte_0202c7f0:
    ldrh       r3, [sl], #2
    ldrh       r0, [sl], #2
    orr        r5, r0, r3, lsl #16
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    bic        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c834 */
.global m68k_bclr_byte_0202c834
m68k_bclr_byte_0202c834:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    ldrh       r3, [sl], #2
    ldrh       r0, [sl], #2
    orr        r5, r0, r3, lsl #16
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    bic        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c874 */
.global m68k_bset_byte_0202c874
m68k_bset_byte_0202c874:
    and        r5, fp, #7
    add        r3, r6, #0x20
    ldr        r5, [r3, r5, lsl #2]
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    orr        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c8b8 */
.global m68k_bset_byte_0202c8b8
m68k_bset_byte_0202c8b8:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r5, fp, #7
    add        r3, r6, #0x20
    ldr        r5, [r3, r5, lsl #2]
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    orr        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c8f8 */
.global m68k_bset_byte_0202c8f8
m68k_bset_byte_0202c8f8:
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    mov        r0, r5
    cmp        r3, #7
    addeq      r1, r5, #2
    addne      r1, r5, #1
    str        r1, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    orr        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c94c */
.global m68k_bset_byte_0202c94c
m68k_bset_byte_0202c94c:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    mov        r0, r5
    cmp        r3, #7
    addeq      r1, r5, #2
    addne      r1, r5, #1
    str        r1, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    orr        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c99c */
.global m68k_bset_byte_0202c99c
m68k_bset_byte_0202c99c:
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    cmp        r3, #7
    subeq      r5, r5, #2
    subne      r5, r5, #1
    mov        r0, r5
    str        r5, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    orr        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202c9f0 */
.global m68k_bset_byte_0202c9f0
m68k_bset_byte_0202c9f0:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    cmp        r3, #7
    subeq      r5, r5, #2
    subne      r5, r5, #1
    mov        r0, r5
    str        r5, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    orr        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202ca40 */
.global m68k_bset_byte_0202ca40
m68k_bset_byte_0202ca40:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r5, [r2, r1, lsl #2]
    add        r5, r5, r3
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    orr        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202ca8c */
.global m68k_bset_byte_0202ca8c
m68k_bset_byte_0202ca8c:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r5, [r2, r1, lsl #2]
    add        r5, r5, r3
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    orr        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202cad4 */
.global m68k_bset_byte_0202cad4
m68k_bset_byte_0202cad4:
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
    add        r5, r0, r1
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    orr        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202cb44 */
.global m68k_bset_byte_0202cb44
m68k_bset_byte_0202cb44:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
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
    add        r5, r0, r1
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    orr        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202cbb0 */
.global m68k_bset_byte_0202cbb0
m68k_bset_byte_0202cbb0:
    ldrsh      r5, [sl], #2
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    orr        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202cbec */
.global m68k_bset_byte_0202cbec
m68k_bset_byte_0202cbec:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    ldrsh      r5, [sl], #2
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    orr        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202cc24 */
.global m68k_bset_byte_0202cc24
m68k_bset_byte_0202cc24:
    ldrh       r3, [sl], #2
    ldrh       r0, [sl], #2
    orr        r5, r0, r3, lsl #16
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    ldrb       r1, [r6, r1, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r1, r1, #7
    tst        r4, r0, lsr r1
    orreq      r7, r7, #4
    orr        r1, r0, r4, lsl r1
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202cc68 */
.global m68k_bset_byte_0202cc68
m68k_bset_byte_0202cc68:
    ldrh       r4, [sl], #2
    bic        r7, r7, #4
    ldrh       r3, [sl], #2
    ldrh       r0, [sl], #2
    orr        r5, r0, r3, lsl #16
    mov        r0, r5
    bl         read_m68k_bus_byte
    mov        r3, #1
    and        r4, r4, #7
    tst        r3, r0, lsr r4
    orreq      r7, r7, #4
    orr        r1, r0, r3, lsl r4
    mov        r0, r5
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202cca8 */
.global m68k_btst_long_0202cca8
m68k_btst_long_0202cca8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202cce0 */
.global m68k_btst_byte_0202cce0
m68k_btst_byte_0202cce0:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202cd14 */
.global m68k_btst_long_0202cd14
m68k_btst_long_0202cd14:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    bl         read_m68k_bus_byte
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202cd60 */
.global m68k_btst_byte_0202cd60
m68k_btst_byte_0202cd60:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202cda8 */
.global m68k_btst_long_0202cda8
m68k_btst_long_0202cda8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202cdf4 */
.global m68k_btst_byte_0202cdf4
m68k_btst_byte_0202cdf4:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ce3c */
.global m68k_btst_long_0202ce3c
m68k_btst_long_0202ce3c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ce7c */
.global m68k_btst_byte_0202ce7c
m68k_btst_byte_0202ce7c:
    ldrh       r5, [sl], #2
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ceb8 */
.global m68k_btst_long_0202ceb8
m68k_btst_long_0202ceb8:
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
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202cf1c */
.global m68k_btst_byte_0202cf1c
m68k_btst_byte_0202cf1c:
    ldrh       r5, [sl], #2
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
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202cf7c */
.global m68k_btst_long_0202cf7c
m68k_btst_long_0202cf7c:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202cfac */
.global m68k_btst_byte_0202cfac
m68k_btst_byte_0202cfac:
    ldrh       r5, [sl], #2
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202cfd8 */
.global m68k_btst_long_0202cfd8
m68k_btst_long_0202cfd8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d010 */
.global m68k_btst_byte_0202d010
m68k_btst_byte_0202d010:
    ldrh       r5, [sl], #2
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d044 */
.global m68k_btst_long_0202d044
m68k_btst_long_0202d044:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_byte
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d088 */
.global m68k_btst_byte_0202d088
m68k_btst_byte_0202d088:
    ldrh       r5, [sl], #2
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_byte
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d0c8 */
.global m68k_btst_long_0202d0c8
m68k_btst_long_0202d0c8:
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
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d134 */
.global m68k_btst_byte_0202d134
m68k_btst_byte_0202d134:
    ldrh       r5, [sl], #2
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
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d19c */
.global m68k_btst_long_0202d19c
m68k_btst_long_0202d19c:
    ldrb       r0, [sl], #2
    and        r5, fp, #0xe00
    ldrb       r5, [r6, r5, lsr #7]
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202d1c8 */
.global m68k_unrecognized_opcode_0202d1c8
m68k_unrecognized_opcode_0202d1c8:
    ldrh       r5, [sl], #2
    ldrb       r0, [sl], #2
    bic        r7, r7, #4
    mov        r4, #1
    and        r5, r5, #7
    tst        r4, r0, lsr r5
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]
