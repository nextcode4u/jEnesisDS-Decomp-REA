/* YM2612 fixed-point PCM sample loops by FM algorithm. 0x037ff1d0–0x037ffb98. */


/* 0x037ff1d0 */
.global ym2612_silence_algorithm_5_mask_00
ym2612_silence_algorithm_5_mask_00:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037ff1dc:
    mov        r0, #0
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
    bgt        .L_037ff1dc
    asr        fp, sl, #0x10
    b          finish_ym2612_sample_loop

/* 0x037ff214 */
.global ym2612_silence_algorithm_5_mask_08
ym2612_silence_algorithm_5_mask_08:
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
    bgt        ym2612_silence_algorithm_5_mask_08
    asr        fp, sl, #0x10
    b          finish_ym2612_sample_loop

/* 0x037ff28c */
.global ym2612_render_algorithm_5_mask_01
ym2612_render_algorithm_5_mask_01:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037ff298:
    mov        r0, #0
    asr        fp, sl, #0x10
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
    bgt        .L_037ff298
    b          finish_ym2612_sample_loop

/* 0x037ff2f8 */
.global ym2612_render_algorithm_5_mask_09
ym2612_render_algorithm_5_mask_09:
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
    asr        fp, sl, #0x10
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
    bgt        ym2612_render_algorithm_5_mask_09
    b          finish_ym2612_sample_loop

/* 0x037ff398 */
.global ym2612_render_algorithm_5_mask_02
ym2612_render_algorithm_5_mask_02:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037ff3a4:
    mov        r0, #0
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
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
    bgt        .L_037ff3a4
    b          finish_ym2612_sample_loop

/* 0x037ff404 */
.global ym2612_render_algorithm_5_mask_0a
ym2612_render_algorithm_5_mask_0a:
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
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
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
    bgt        ym2612_render_algorithm_5_mask_0a
    b          finish_ym2612_sample_loop

/* 0x037ff4a4 */
.global ym2612_render_algorithm_5_mask_03
ym2612_render_algorithm_5_mask_03:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037ff4b0:
    mov        r0, #0
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r1, r5, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
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
    add        r0, r0, r1
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
    bgt        .L_037ff4b0
    b          finish_ym2612_sample_loop

/* 0x037ff53c */
.global ym2612_render_algorithm_5_mask_0b
ym2612_render_algorithm_5_mask_0b:
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
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r1, r5, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
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
    add        r0, r0, r1
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
    bgt        ym2612_render_algorithm_5_mask_0b
    b          finish_ym2612_sample_loop

/* 0x037ff608 */
.global ym2612_render_algorithm_5_mask_04
ym2612_render_algorithm_5_mask_04:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037ff614:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    bic        r0, r6, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        fp, sl, #0x10
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
    bgt        .L_037ff614
    b          finish_ym2612_sample_loop

/* 0x037ff674 */
.global ym2612_render_algorithm_5_mask_0c
ym2612_render_algorithm_5_mask_0c:
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
    bic        r0, r6, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        fp, sl, #0x10
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
    bgt        ym2612_render_algorithm_5_mask_0c
    b          finish_ym2612_sample_loop

/* 0x037ff714 */
.global ym2612_render_algorithm_5_mask_05
ym2612_render_algorithm_5_mask_05:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037ff720:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    bic        r0, r6, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x2c]
    bic        r1, r7, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
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
    bgt        .L_037ff720
    b          finish_ym2612_sample_loop

/* 0x037ff7ac */
.global ym2612_render_algorithm_5_mask_0d
ym2612_render_algorithm_5_mask_0d:
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
    bic        r0, r6, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x2c]
    bic        r1, r7, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
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
    bgt        ym2612_render_algorithm_5_mask_0d
    b          finish_ym2612_sample_loop

/* 0x037ff878 */
.global ym2612_render_algorithm_5_mask_06
ym2612_render_algorithm_5_mask_06:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037ff884:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    bic        r0, r6, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r1, r5, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
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
    bgt        .L_037ff884
    b          finish_ym2612_sample_loop

/* 0x037ff910 */
.global ym2612_render_algorithm_5_mask_0e
ym2612_render_algorithm_5_mask_0e:
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
    bic        r0, r6, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r1, r5, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
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
    bgt        ym2612_render_algorithm_5_mask_0e
    b          finish_ym2612_sample_loop

/* 0x037ff9dc */
.global ym2612_render_algorithm_5_mask_07
ym2612_render_algorithm_5_mask_07:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037ff9e8:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    bic        r0, r6, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r1, r5, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
    ldr        r3, [sp, #0x2c]
    bic        r1, r7, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
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
    bgt        .L_037ff9e8
    b          finish_ym2612_sample_loop

/* 0x037ffaa0 */
.global ym2612_render_algorithm_5_mask_0f
ym2612_render_algorithm_5_mask_0f:
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
    bic        r0, r6, #0x8000
    add        r0, r0, fp, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    asr        fp, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r1, r5, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
    ldr        r3, [sp, #0x2c]
    bic        r1, r7, #0x8000
    add        r1, r1, fp, lsl #15
    lsr        r1, r1, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
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
    bgt        ym2612_render_algorithm_5_mask_0f
    b          finish_ym2612_sample_loop
