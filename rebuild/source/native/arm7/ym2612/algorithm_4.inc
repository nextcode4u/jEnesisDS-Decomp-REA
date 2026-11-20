/* YM2612 fixed-point PCM sample loops by FM algorithm. 0x037fe918–0x037ff1d0. */


/* 0x037fe918 */
.global ym2612_silence_algorithm_4_mask_00
ym2612_silence_algorithm_4_mask_00:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037fe924:
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
    bgt        .L_037fe924
    b          finish_ym2612_sample_loop

/* 0x037fe958 */
.global ym2612_silence_algorithm_4_mask_08
ym2612_silence_algorithm_4_mask_08:
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
    bgt        ym2612_silence_algorithm_4_mask_08
    b          finish_ym2612_sample_loop

/* 0x037fe9cc */
.global ym2612_render_algorithm_4_mask_01
ym2612_render_algorithm_4_mask_01:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037fe9d8:
    mov        r0, #0
    ldr        r3, [sp, #0x2c]
    lsr        r0, r7, #0x10
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
    bgt        .L_037fe9d8
    b          finish_ym2612_sample_loop

/* 0x037fea2c */
.global ym2612_render_algorithm_4_mask_09
ym2612_render_algorithm_4_mask_09:
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
    lsr        r0, r7, #0x10
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
    bgt        ym2612_render_algorithm_4_mask_09
    b          finish_ym2612_sample_loop

/* 0x037feac0 */
.global ym2612_render_algorithm_4_mask_02
ym2612_render_algorithm_4_mask_02:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037feacc:
    mov        r0, #0
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, r1, lsl #15
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
    bgt        .L_037feacc
    b          finish_ym2612_sample_loop

/* 0x037feb2c */
.global ym2612_render_algorithm_4_mask_0a
ym2612_render_algorithm_4_mask_0a:
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
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, r1, lsl #15
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
    bgt        ym2612_render_algorithm_4_mask_0a
    b          finish_ym2612_sample_loop

/* 0x037febcc */
.global ym2612_render_algorithm_4_mask_03
ym2612_render_algorithm_4_mask_03:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037febd8:
    mov        r0, #0
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, r1, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    ldr        r3, [sp, #0x2c]
    lsr        r1, r7, #0x10
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
    bgt        .L_037febd8
    b          finish_ym2612_sample_loop

/* 0x037fec5c */
.global ym2612_render_algorithm_4_mask_0b
ym2612_render_algorithm_4_mask_0b:
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
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, r1, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    ldr        r3, [sp, #0x2c]
    lsr        r1, r7, #0x10
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
    bgt        ym2612_render_algorithm_4_mask_0b
    b          finish_ym2612_sample_loop

/* 0x037fed20 */
.global ym2612_silence_algorithm_4_mask_04
ym2612_silence_algorithm_4_mask_04:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037fed2c:
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
    bgt        .L_037fed2c
    b          finish_ym2612_sample_loop

/* 0x037fed60 */
.global ym2612_silence_algorithm_4_mask_0c
ym2612_silence_algorithm_4_mask_0c:
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
    bgt        ym2612_silence_algorithm_4_mask_0c
    b          finish_ym2612_sample_loop

/* 0x037fedd4 */
.global ym2612_render_algorithm_4_mask_05
ym2612_render_algorithm_4_mask_05:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037fede0:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    lsr        r1, r6, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
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
    bgt        .L_037fede0
    b          finish_ym2612_sample_loop

/* 0x037fee5c */
.global ym2612_render_algorithm_4_mask_0d
ym2612_render_algorithm_4_mask_0d:
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
    bgt        ym2612_render_algorithm_4_mask_0d
    b          finish_ym2612_sample_loop

/* 0x037fef18 */
.global ym2612_render_algorithm_4_mask_06
ym2612_render_algorithm_4_mask_06:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037fef24:
    mov        r0, #0
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, r1, lsl #15
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
    bgt        .L_037fef24
    b          finish_ym2612_sample_loop

/* 0x037fef84 */
.global ym2612_render_algorithm_4_mask_0e
ym2612_render_algorithm_4_mask_0e:
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
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, r1, lsl #15
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
    bgt        ym2612_render_algorithm_4_mask_0e
    b          finish_ym2612_sample_loop

/* 0x037ff024 */
.global ym2612_render_algorithm_4_mask_07
ym2612_render_algorithm_4_mask_07:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_037ff030:
    mov        r0, #0
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, r1, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    ldr        r3, [sp, #0x28]
    lsr        r1, r6, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    mov        r2, r1
    ldr        r3, [sp, #0x2c]
    bic        r1, r7, #0x8000
    add        r1, r1, r2, lsl #15
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
    bgt        .L_037ff030
    b          finish_ym2612_sample_loop

/* 0x037ff0e0 */
.global ym2612_render_algorithm_4_mask_0f
ym2612_render_algorithm_4_mask_0f:
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
    asr        r1, sl, #0x10
    ldr        r3, [sp, #0x24]
    bic        r0, r5, #0x8000
    add        r0, r0, r1, lsl #15
    lsr        r0, r0, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    ldr        r3, [sp, #0x28]
    lsr        r1, r6, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    mov        r2, r1
    ldr        r3, [sp, #0x2c]
    bic        r1, r7, #0x8000
    add        r1, r1, r2, lsl #15
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
    bgt        ym2612_render_algorithm_4_mask_0f
    b          finish_ym2612_sample_loop
