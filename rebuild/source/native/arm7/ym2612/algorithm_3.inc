/* YM2612 fixed-point PCM sample loops by FM algorithm. 0x037fe018–0x037fe918. */


/* 0x037fe018 */
.global ym2612_silence_algorithm_3_mask_00
ym2612_silence_algorithm_3_mask_00:
    cmp        lr, #0x200
    ldr        r8, [sp, #0x30]
    lsl        sl, sl, #0x10
    ldr        sb, [sp, #0x34]
    lslge      sl, sl, #0x10
    ldr        r3, [sp, #0x38]
    ldr        fp, [sp, #0x3c]
    mov        r0, #0
.L_037fe038:
    add        r4, r4, r8
    add        r5, r5, sb
    add        r6, r6, r3
    add        r7, r7, fp
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe038
    mov        fp, #0
    b          finish_ym2612_sample_loop

/* 0x037fe05c */
.global ym2612_render_algorithm_3_mask_01
ym2612_render_algorithm_3_mask_01:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037fe068:
    mov        r0, #0
    ldr        r3, [sp, #0x2c]
    bic        r0, r7, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    mov        fp, #0
    ldr        r1, [sp, #0x30]
    ldr        r2, [sp, #0x34]
    add        r4, r4, r1
    add        r5, r5, r2
    ldr        r1, [sp, #0x38]
    ldr        r2, [sp, #0x3c]
    add        r6, r6, r1
    add        r7, r7, r2
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe068
    b          finish_ym2612_sample_loop

/* 0x037fe0c8 */
.global ym2612_silence_algorithm_3_mask_08
ym2612_silence_algorithm_3_mask_08:
    ldr        r0, [sp, #0x30]
    ldr        fp, [sp, #0x38]
.L_037fe0d0:
    ands       r2, lr, #0xf
    addne      r1, sl, sl, asr #16
    rsbne      r2, r2, #0x10
    lslne      r1, r1, #0x10
    asrne      r2, r1, r2
    ldr        r3, [sp, #0x20]
    bic        r1, r4, #0x8000
    add        r1, r1, r2
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrhlt     r1, [r8, r2]
    orr        sl, r1, sl, lsl #16
    ldr        r3, [sp, #0x34]
    add        r4, r4, r0
    add        r5, r5, r3
    ldr        r3, [sp, #0x3c]
    add        r6, r6, fp
    add        r7, r7, r3
    mov        r1, #0
    strh       r1, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe0d0
    mov        fp, #0
    b          finish_ym2612_sample_loop

/* 0x037fe140 */
.global ym2612_render_algorithm_3_mask_09
ym2612_render_algorithm_3_mask_09:
    ands       r1, lr, #0xf
    addne      r2, sl, sl, asr #16
    rsbne      r1, r1, #0x10
    lslne      r2, r2, #0x10
    asrne      r1, r2, r1
    ldr        r3, [sp, #0x20]
    bic        r0, r4, #0x8000
    add        r0, r0, r1
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrhlt     r0, [r8, r2]
    orr        sl, r0, sl, lsl #16
    mov        r0, #0
    ldr        r3, [sp, #0x2c]
    bic        r0, r7, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    mov        fp, #0
    ldr        r1, [sp, #0x30]
    ldr        r2, [sp, #0x34]
    add        r4, r4, r1
    add        r5, r5, r2
    ldr        r1, [sp, #0x38]
    ldr        r2, [sp, #0x3c]
    add        r6, r6, r1
    add        r7, r7, r2
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        ym2612_render_algorithm_3_mask_09
    b          finish_ym2612_sample_loop

/* 0x037fe1e0 */
.global ym2612_silence_algorithm_3_mask_02
ym2612_silence_algorithm_3_mask_02:
    cmp        lr, #0x200
    ldr        r8, [sp, #0x30]
    lsl        sl, sl, #0x10
    ldr        sb, [sp, #0x34]
    lslge      sl, sl, #0x10
    ldr        r3, [sp, #0x38]
    ldr        fp, [sp, #0x3c]
    mov        r0, #0
.L_037fe200:
    add        r4, r4, r8
    add        r5, r5, sb
    add        r6, r6, r3
    add        r7, r7, fp
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe200
    mov        fp, #0
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        fp, r5, #0x8000
    add        fp, fp, r1, lsl #15
    lsr        fp, fp, #0x10
    bic        fp, fp, #0xfc00
    ldr        r2, [sb, fp, lsl #2]
    mov        fp, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    fp, [r8, r2]
    b          finish_ym2612_sample_loop

/* 0x037fe250 */
.global ym2612_render_algorithm_3_mask_03
ym2612_render_algorithm_3_mask_03:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037fe25c:
    mov        r0, #0
    ldr        r3, [sp, #0x2c]
    bic        r0, r7, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        fp, r5, #0x8000
    add        fp, fp, r1, lsl #15
    lsr        fp, fp, #0x10
    bic        fp, fp, #0xfc00
    ldr        r2, [sb, fp, lsl #2]
    mov        fp, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    fp, [r8, r2]
    ldr        r1, [sp, #0x30]
    ldr        r2, [sp, #0x34]
    add        r4, r4, r1
    add        r5, r5, r2
    ldr        r1, [sp, #0x38]
    ldr        r2, [sp, #0x3c]
    add        r6, r6, r1
    add        r7, r7, r2
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe25c
    b          finish_ym2612_sample_loop

/* 0x037fe2e4 */
.global ym2612_silence_algorithm_3_mask_0a
ym2612_silence_algorithm_3_mask_0a:
    ldr        r0, [sp, #0x30]
    ldr        fp, [sp, #0x38]
.L_037fe2ec:
    ands       r2, lr, #0xf
    addne      r1, sl, sl, asr #16
    rsbne      r2, r2, #0x10
    lslne      r1, r1, #0x10
    asrne      r2, r1, r2
    ldr        r3, [sp, #0x20]
    bic        r1, r4, #0x8000
    add        r1, r1, r2
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrhlt     r1, [r8, r2]
    orr        sl, r1, sl, lsl #16
    ldr        r3, [sp, #0x34]
    add        r4, r4, r0
    add        r5, r5, r3
    ldr        r3, [sp, #0x3c]
    add        r6, r6, fp
    add        r7, r7, r3
    mov        r1, #0
    strh       r1, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe2ec
    mov        fp, #0
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        fp, r5, #0x8000
    add        fp, fp, r1, lsl #15
    lsr        fp, fp, #0x10
    bic        fp, fp, #0xfc00
    ldr        r2, [sb, fp, lsl #2]
    mov        fp, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    fp, [r8, r2]
    b          finish_ym2612_sample_loop

/* 0x037fe388 */
.global ym2612_render_algorithm_3_mask_0b
ym2612_render_algorithm_3_mask_0b:
    ands       r1, lr, #0xf
    addne      r2, sl, sl, asr #16
    rsbne      r1, r1, #0x10
    lslne      r2, r2, #0x10
    asrne      r1, r2, r1
    ldr        r3, [sp, #0x20]
    bic        r0, r4, #0x8000
    add        r0, r0, r1
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrhlt     r0, [r8, r2]
    orr        sl, r0, sl, lsl #16
    mov        r0, #0
    ldr        r3, [sp, #0x2c]
    bic        r0, r7, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        fp, r5, #0x8000
    add        fp, fp, r1, lsl #15
    lsr        fp, fp, #0x10
    bic        fp, fp, #0xfc00
    ldr        r2, [sb, fp, lsl #2]
    mov        fp, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    fp, [r8, r2]
    ldr        r1, [sp, #0x30]
    ldr        r2, [sp, #0x34]
    add        r4, r4, r1
    add        r5, r5, r2
    ldr        r1, [sp, #0x38]
    ldr        r2, [sp, #0x3c]
    add        r6, r6, r1
    add        r7, r7, r2
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        ym2612_render_algorithm_3_mask_0b
    b          finish_ym2612_sample_loop

/* 0x037fe450 */
.global ym2612_silence_algorithm_3_mask_04
ym2612_silence_algorithm_3_mask_04:
    cmp        lr, #0x200
    ldr        r8, [sp, #0x30]
    lsl        sl, sl, #0x10
    ldr        sb, [sp, #0x34]
    lslge      sl, sl, #0x10
    ldr        r3, [sp, #0x38]
    ldr        fp, [sp, #0x3c]
    mov        r0, #0
.L_037fe470:
    add        r4, r4, r8
    add        r5, r5, sb
    add        r6, r6, r3
    add        r7, r7, fp
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe470
    mov        fp, #0
    b          finish_ym2612_sample_loop

/* 0x037fe494 */
.global ym2612_render_algorithm_3_mask_05
ym2612_render_algorithm_3_mask_05:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037fe4a0:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    lsr        r1, r6, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r1, r1, fp
    ldr        r3, [sp, #0x2c]
    bic        r0, r7, #0x8000
    add        r0, r0, r1, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    mov        fp, #0
    ldr        r1, [sp, #0x30]
    ldr        r2, [sp, #0x34]
    add        r4, r4, r1
    add        r5, r5, r2
    ldr        r1, [sp, #0x38]
    ldr        r2, [sp, #0x3c]
    add        r6, r6, r1
    add        r7, r7, r2
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe4a0
    b          finish_ym2612_sample_loop

/* 0x037fe524 */
.global ym2612_silence_algorithm_3_mask_0c
ym2612_silence_algorithm_3_mask_0c:
    ldr        r0, [sp, #0x30]
    ldr        fp, [sp, #0x38]
.L_037fe52c:
    ands       r2, lr, #0xf
    addne      r1, sl, sl, asr #16
    rsbne      r2, r2, #0x10
    lslne      r1, r1, #0x10
    asrne      r2, r1, r2
    ldr        r3, [sp, #0x20]
    bic        r1, r4, #0x8000
    add        r1, r1, r2
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrhlt     r1, [r8, r2]
    orr        sl, r1, sl, lsl #16
    ldr        r3, [sp, #0x34]
    add        r4, r4, r0
    add        r5, r5, r3
    ldr        r3, [sp, #0x3c]
    add        r6, r6, fp
    add        r7, r7, r3
    mov        r1, #0
    strh       r1, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe52c
    mov        fp, #0
    b          finish_ym2612_sample_loop

/* 0x037fe59c */
.global ym2612_render_algorithm_3_mask_0d
ym2612_render_algorithm_3_mask_0d:
    ands       r1, lr, #0xf
    addne      r2, sl, sl, asr #16
    rsbne      r1, r1, #0x10
    lslne      r2, r2, #0x10
    asrne      r1, r2, r1
    ldr        r3, [sp, #0x20]
    bic        r0, r4, #0x8000
    add        r0, r0, r1
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrhlt     r0, [r8, r2]
    orr        sl, r0, sl, lsl #16
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    lsr        r1, r6, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r1, r1, fp
    ldr        r3, [sp, #0x2c]
    bic        r0, r7, #0x8000
    add        r0, r0, r1, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    mov        fp, #0
    ldr        r1, [sp, #0x30]
    ldr        r2, [sp, #0x34]
    add        r4, r4, r1
    add        r5, r5, r2
    ldr        r1, [sp, #0x38]
    ldr        r2, [sp, #0x3c]
    add        r6, r6, r1
    add        r7, r7, r2
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        ym2612_render_algorithm_3_mask_0d
    b          finish_ym2612_sample_loop

/* 0x037fe660 */
.global ym2612_silence_algorithm_3_mask_06
ym2612_silence_algorithm_3_mask_06:
    cmp        lr, #0x200
    ldr        r8, [sp, #0x30]
    lsl        sl, sl, #0x10
    ldr        sb, [sp, #0x34]
    lslge      sl, sl, #0x10
    ldr        r3, [sp, #0x38]
    ldr        fp, [sp, #0x3c]
    mov        r0, #0
.L_037fe680:
    add        r4, r4, r8
    add        r5, r5, sb
    add        r6, r6, r3
    add        r7, r7, fp
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe680
    mov        fp, #0
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        fp, r5, #0x8000
    add        fp, fp, r1, lsl #15
    lsr        fp, fp, #0x10
    bic        fp, fp, #0xfc00
    ldr        r2, [sb, fp, lsl #2]
    mov        fp, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    fp, [r8, r2]
    b          finish_ym2612_sample_loop

/* 0x037fe6d0 */
.global ym2612_render_algorithm_3_mask_07
ym2612_render_algorithm_3_mask_07:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037fe6dc:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    lsr        r1, r6, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r1, r1, fp
    ldr        r3, [sp, #0x2c]
    bic        r0, r7, #0x8000
    add        r0, r0, r1, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        fp, r5, #0x8000
    add        fp, fp, r1, lsl #15
    lsr        fp, fp, #0x10
    bic        fp, fp, #0xfc00
    ldr        r2, [sb, fp, lsl #2]
    mov        fp, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    fp, [r8, r2]
    ldr        r1, [sp, #0x30]
    ldr        r2, [sp, #0x34]
    add        r4, r4, r1
    add        r5, r5, r2
    ldr        r1, [sp, #0x38]
    ldr        r2, [sp, #0x3c]
    add        r6, r6, r1
    add        r7, r7, r2
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe6dc
    b          finish_ym2612_sample_loop

/* 0x037fe788 */
.global ym2612_silence_algorithm_3_mask_0e
ym2612_silence_algorithm_3_mask_0e:
    ldr        r0, [sp, #0x30]
    ldr        fp, [sp, #0x38]
.L_037fe790:
    ands       r2, lr, #0xf
    addne      r1, sl, sl, asr #16
    rsbne      r2, r2, #0x10
    lslne      r1, r1, #0x10
    asrne      r2, r1, r2
    ldr        r3, [sp, #0x20]
    bic        r1, r4, #0x8000
    add        r1, r1, r2
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrhlt     r1, [r8, r2]
    orr        sl, r1, sl, lsl #16
    ldr        r3, [sp, #0x34]
    add        r4, r4, r0
    add        r5, r5, r3
    ldr        r3, [sp, #0x3c]
    add        r6, r6, fp
    add        r7, r7, r3
    mov        r1, #0
    strh       r1, [ip], #2
    subs       lr, lr, #0x100
    bgt        .L_037fe790
    mov        fp, #0
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        fp, r5, #0x8000
    add        fp, fp, r1, lsl #15
    lsr        fp, fp, #0x10
    bic        fp, fp, #0xfc00
    ldr        r2, [sb, fp, lsl #2]
    mov        fp, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    fp, [r8, r2]
    b          finish_ym2612_sample_loop

/* 0x037fe82c */
.global ym2612_render_algorithm_3_mask_0f
ym2612_render_algorithm_3_mask_0f:
    ands       r1, lr, #0xf
    addne      r2, sl, sl, asr #16
    rsbne      r1, r1, #0x10
    lslne      r2, r2, #0x10
    asrne      r1, r2, r1
    ldr        r3, [sp, #0x20]
    bic        r0, r4, #0x8000
    add        r0, r0, r1
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrhlt     r0, [r8, r2]
    orr        sl, r0, sl, lsl #16
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    lsr        r1, r6, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r1, r1, fp
    ldr        r3, [sp, #0x2c]
    bic        r0, r7, #0x8000
    add        r0, r0, r1, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        fp, r5, #0x8000
    add        fp, fp, r1, lsl #15
    lsr        fp, fp, #0x10
    bic        fp, fp, #0xfc00
    ldr        r2, [sb, fp, lsl #2]
    mov        fp, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    fp, [r8, r2]
    ldr        r1, [sp, #0x30]
    ldr        r2, [sp, #0x34]
    add        r4, r4, r1
    add        r5, r5, r2
    ldr        r1, [sp, #0x38]
    ldr        r2, [sp, #0x3c]
    add        r6, r6, r1
    add        r7, r7, r2
    strh       r0, [ip], #2
    subs       lr, lr, #0x100
    bgt        ym2612_render_algorithm_3_mask_0f
    b          finish_ym2612_sample_loop
