/* YM2612 fixed-point PCM sample loops by FM algorithm. 0x038004c0–0x03800e50. */


/* 0x038004c0 */
.global ym2612_render_algorithm_7_mask_00
ym2612_render_algorithm_7_mask_00:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_038004cc:
    mov        r0, #0
    asr        r0, sl, #0x10
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
    bgt        .L_038004cc
    b          finish_ym2612_sample_loop

/* 0x03800504 */
.global ym2612_render_algorithm_7_mask_08
ym2612_render_algorithm_7_mask_08:
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
    asr        r0, sl, #0x10
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
    bgt        ym2612_render_algorithm_7_mask_08
    b          finish_ym2612_sample_loop

/* 0x0380057c */
.global ym2612_render_algorithm_7_mask_01
ym2612_render_algorithm_7_mask_01:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_03800588:
    mov        r0, #0
    ldr        r3, [sp, #0x2c]
    lsr        r0, r7, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
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
    bgt        .L_03800588
    b          finish_ym2612_sample_loop

/* 0x038005e0 */
.global ym2612_render_algorithm_7_mask_09
ym2612_render_algorithm_7_mask_09:
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
    add        r0, r0, sl, asr #16
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
    bgt        ym2612_render_algorithm_7_mask_09
    b          finish_ym2612_sample_loop

/* 0x03800678 */
.global ym2612_render_algorithm_7_mask_02
ym2612_render_algorithm_7_mask_02:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_03800684:
    mov        r0, #0
    ldr        r3, [sp, #0x24]
    lsr        r0, r5, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
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
    bgt        .L_03800684
    b          finish_ym2612_sample_loop

/* 0x038006dc */
.global ym2612_render_algorithm_7_mask_0a
ym2612_render_algorithm_7_mask_0a:
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
    ldr        r3, [sp, #0x24]
    lsr        r0, r5, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
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
    bgt        ym2612_render_algorithm_7_mask_0a
    b          finish_ym2612_sample_loop

/* 0x03800774 */
.global ym2612_render_algorithm_7_mask_03
ym2612_render_algorithm_7_mask_03:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_03800780:
    mov        r0, #0
    ldr        r3, [sp, #0x24]
    lsr        r0, r5, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
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
    bgt        .L_03800780
    b          finish_ym2612_sample_loop

/* 0x038007fc */
.global ym2612_render_algorithm_7_mask_0b
ym2612_render_algorithm_7_mask_0b:
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
    ldr        r3, [sp, #0x24]
    lsr        r0, r5, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
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
    bgt        ym2612_render_algorithm_7_mask_0b
    b          finish_ym2612_sample_loop

/* 0x038008b8 */
.global ym2612_render_algorithm_7_mask_04
ym2612_render_algorithm_7_mask_04:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_038008c4:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    lsr        r0, r6, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
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
    bgt        .L_038008c4
    b          finish_ym2612_sample_loop

/* 0x0380091c */
.global ym2612_render_algorithm_7_mask_0c
ym2612_render_algorithm_7_mask_0c:
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
    lsr        r0, r6, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
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
    bgt        ym2612_render_algorithm_7_mask_0c
    b          finish_ym2612_sample_loop

/* 0x038009b4 */
.global ym2612_render_algorithm_7_mask_05
ym2612_render_algorithm_7_mask_05:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_038009c0:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    lsr        r0, r6, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
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
    bgt        .L_038009c0
    b          finish_ym2612_sample_loop

/* 0x03800a3c */
.global ym2612_render_algorithm_7_mask_0d
ym2612_render_algorithm_7_mask_0d:
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
    lsr        r0, r6, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
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
    bgt        ym2612_render_algorithm_7_mask_0d
    b          finish_ym2612_sample_loop

/* 0x03800af8 */
.global ym2612_render_algorithm_7_mask_06
ym2612_render_algorithm_7_mask_06:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_03800b04:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    lsr        r0, r6, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
    ldr        r3, [sp, #0x24]
    lsr        r1, r5, #0x10
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
    bgt        .L_03800b04
    b          finish_ym2612_sample_loop

/* 0x03800b80 */
.global ym2612_render_algorithm_7_mask_0e
ym2612_render_algorithm_7_mask_0e:
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
    lsr        r0, r6, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
    ldr        r3, [sp, #0x24]
    lsr        r1, r5, #0x10
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
    bgt        ym2612_render_algorithm_7_mask_0e
    b          finish_ym2612_sample_loop

/* 0x03800c3c */
.global ym2612_render_algorithm_7_mask_07
ym2612_render_algorithm_7_mask_07:
    cmp        lr, #0x200
    lsl        sl, sl, #0x10
    lslge      sl, sl, #0x10
.L_03800c48:
    mov        r0, #0
    ldr        r3, [sp, #0x28]
    lsr        r0, r6, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
    ldr        r3, [sp, #0x24]
    lsr        r1, r5, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
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
    bgt        .L_03800c48
    b          finish_ym2612_sample_loop

/* 0x03800ce8 */
.global ym2612_render_algorithm_7_mask_0f
ym2612_render_algorithm_7_mask_0f:
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
    lsr        r0, r6, #0x10
    bic        r0, r0, #0xfc00
    ldr        r2, [sb, r0, lsl #2]
    mov        r0, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r0, [r8, r2]
    add        r0, r0, sl, asr #16
    ldr        r3, [sp, #0x24]
    lsr        r1, r5, #0x10
    bic        r1, r1, #0xfc00
    ldr        r2, [sb, r1, lsl #2]
    mov        r1, #0
    add        r2, r3, r2, lsl #1
    cmp        r2, #0x3400
    ldrshlt    r1, [r8, r2]
    add        r0, r0, r1
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
    bgt        ym2612_render_algorithm_7_mask_0f
    b          finish_ym2612_sample_loop
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x03800dd0 */
.global dispatch_fm_algorithm_and_operator_mask
dispatch_fm_algorithm_and_operator_mask:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    str        sp, [r0, #0x48]
    mov        sp, r0
    ldr        r4, [sp, #0x44]
    mov        ip, r1
    and        r4, r4, #0xf
    orr        lr, r4, r2, lsl #8
    ldm        r0!, {r4, r5, r6, r7, r8, sb, sl, fp}
    ldr        r1, [sp, #0x40]
    and        r1, r1, #7
    lsl        r1, r1, #4
    ldr        r2, [sp, #0x20]
    ldr        r3, [sp, #0x28]
    cmp        r2, #0x3400
    orrlt      r1, r1, #8
    cmp        r3, #0x3400
    orrlt      r1, r1, #4
    ldr        r2, [sp, #0x24]
    ldr        r3, [sp, #0x2c]
    cmp        r2, #0x3400
    /* Fetch the first entry in the adjacent C dispatch table. */
    ldr        r2, [pc, #0x228]
    orrlt      r1, r1, #2
    cmp        r3, #0x3400
    orrlt      r1, r1, #1
    ldr        pc, [r2, r1, lsl #2]

/* 0x03800e34 */
.global finish_ym2612_sample_loop
finish_ym2612_sample_loop:
    mov        r0, sp
    stm        r0!, {r4, r5, r6, r7, r8, sb, sl, fp}
    ldr        sp, [sp, #0x48]
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0
