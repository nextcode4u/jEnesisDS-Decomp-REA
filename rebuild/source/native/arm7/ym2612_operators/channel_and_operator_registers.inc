/* YM2612 envelope stepping and register decoding. 0x037f8e1c–0x037f9238. */


/* 0x037f8e1c */
.global write_ym2612_channel_or_operator_register
write_ym2612_channel_or_operator_register:
    push       {r4, r5, r6, r7, r8, lr}
    and        r5, r0, #3
    cmp        r5, #3
    mov        r4, r1
    beq        .L_037f8e88
    cmp        r0, #0xff
    addgt      r5, r5, #3
    asr        r3, r0, #2
    lsl        lr, r5, #1
    and        ip, r3, #3
    add        r2, lr, r5
    ldr        r3, .L_037f91f0
    add        r2, r2, r2, lsl #3
    and        r1, r0, #0xf0
    add        r7, r3, r2, lsl #3
    cmp        r1, #0x60
    add        r3, ip, ip, lsl #1
    add        r6, r7, r3, lsl #4
    beq        .L_037f8ef4
    ble        .L_037f8e98
    cmp        r1, #0x80
    beq        .L_037f9014
    ble        .L_037f8f40
    cmp        r1, #0xa0
    beq        .L_037f90e0
    cmp        r1, #0xb0
    beq        .L_037f9064
.L_037f8e88:
    mov        r8, #0
.L_037f8e8c:
    mov        r0, r8
    pop        {r4, r5, r6, r7, r8, lr}
    bx         lr
.L_037f8e98:
    cmp        r1, #0x40
    andeq      r3, r4, #0x7f
    lsleq      r3, r3, #3
    moveq      r8, #1
    strheq     r3, [r6, #0x18]
    beq        .L_037f8e8c
    cmp        r1, #0x50
    beq        .L_037f8f94
    cmp        r1, #0x30
    bne        .L_037f8e88
    ands       r3, r4, #0xf
    lslne      r1, r3, #1
    ldr        r2, .L_037f91f4
    lsl        r3, r4, #3
    and        r3, r3, #0x380
    add        r3, r3, r2
    moveq      r1, #1
    mvn        r2, #0
    mov        r8, #1
    str        r3, [r6]
    str        r2, [r7, #0x10]
    str        r1, [r6, #8]
    b          .L_037f8e8c
.L_037f8ef4:
    ands       r0, r4, #0x1f
    lslne      r3, r0, #1
    moveq      r3, r0
    ldrb       r0, [r6, #0x15]
    addne      r3, r3, #0x20
    add        r0, r3, r0
    moveq      lr, r3
    movne      lr, r3
    ldr        r3, .L_037f91f8
    ldr        r2, .L_037f91fc
    ldrb       ip, [r3, r0]
    ldr        r3, .L_037f9200
    ldr        r1, [r2, ip, lsl #2]
    ldrb       r2, [r3, r0]
    mov        r8, #1
    orr        r1, r1, r2, lsl #24
    str        r1, [r6, #0x24]
    strb       lr, [r6, #5]
    b          .L_037f8e8c
.L_037f8f40:
    cmp        r1, #0x70
    bne        .L_037f8e88
    ands       r0, r4, #0x1f
    lslne      r3, r0, #1
    moveq      r3, r0
    ldrb       r0, [r6, #0x15]
    addne      r3, r3, #0x20
    add        r0, r3, r0
    moveq      lr, r3
    movne      lr, r3
    ldr        r3, .L_037f91f8
    ldr        r2, .L_037f91fc
    ldrb       ip, [r3, r0]
    ldr        r3, .L_037f9200
    ldr        r1, [r2, ip, lsl #2]
    ldrb       r2, [r3, r0]
    mov        r8, #1
    orr        r1, r1, r2, lsl #24
    str        r1, [r6, #0x28]
    strb       lr, [r6, #6]
    b          .L_037f8e8c
.L_037f8f94:
    ands       r3, r4, #0x1f
    lslne      r3, r3, #1
    moveq      r1, r3
    addne      r1, r3, #0x20
    asr        r3, r4, #6
    ldrb       r2, [r6, #0x14]
    rsb        r3, r3, #3
    and        r3, r3, #0xff
    cmp        r2, r3
    strb       r3, [r6, #0x14]
    mvnne      r3, #0
    strb       r1, [r6, #4]
    movne      r8, #1
    strne      r3, [r7, #0x10]
    bne        .L_037f8e8c
    ldrb       r3, [r6, #0x15]
    ldrb       r2, [r6, #4]
    add        r0, r2, r3
    cmp        r0, #0x5d
    ldrle      r3, .L_037f9200
    ldrle      r2, .L_037f91f8
    ldrble     r1, [r3, r0]
    ldrble     r3, [r2, r0]
    ldr        r2, .L_037f91fc
    movgt      r3, #0x11
    ldr        r3, [r2, r3, lsl #2]
    movgt      r1, #0
    lslle      r1, r1, #0x18
    orr        r3, r1, r3
    mov        r8, #1
    str        r3, [r6, #0x20]
    b          .L_037f8e8c
.L_037f9014:
    and        r0, r4, #0xf
    lsl        r0, r0, #2
    ldrb       r1, [r6, #0x15]
    add        r0, r0, #0x22
    ldr        r3, .L_037f91f8
    add        r1, r0, r1
    ldrb       ip, [r3, r1]
    ldr        r2, .L_037f9200
    ldr        r3, .L_037f91fc
    ldrb       lr, [r2, r1]
    ldr        r2, [r3, ip, lsl #2]
    ldr        r3, .L_037f9204
    asr        r1, r4, #4
    ldr        ip, [r3, r1, lsl #2]
    orr        r2, r2, lr, lsl #24
    mov        r8, #1
    str        r2, [r6, #0x2c]
    str        ip, [r6, #0x1c]
    strb       r0, [r6, #7]
    b          .L_037f8e8c
.L_037f9064:
    cmp        ip, #0
    beq        .L_037f91d0
    cmp        ip, #1
    bne        .L_037f8e88
    mov        r3, #3
    lsl        r3, r3, lr
    ldr        r0, .L_037f9208
    ldr        r2, [r0, #0x44c]
    mvn        r3, r3
    and        r1, r4, #0xc0
    asr        r1, r1, #6
    and        r2, r2, r3
    orr        r2, r2, r1, lsl lr
    mov        lr, #0x4000000
    str        r2, [r0, #0x44c]
    add        lr, lr, #0x400
    ldr        r3, [lr, r5, lsl #4]
    ldr        r2, .L_037f920c
    cmp        r3, #0
    ldr        r3, .L_037f9210
    ldr        ip, [r2, r1, lsl #2]
    ldr        r0, [r3, r1, lsl #2]
    orrlt      r3, ip, #0xa8000000
    orrlt      r3, r3, r0, lsl #16
    addlt      r2, r5, #6
    strlt      r3, [lr, r5, lsl #4]
    movlt      r8, #1
    strlt      r3, [lr, r2, lsl #4]
    blt        .L_037f8e8c
.L_037f90d8:
    mov        r8, #1
    b          .L_037f8e8c
.L_037f90e0:
    cmp        ip, #3
    ldrls      pc, [pc, ip, lsl #2]
    b          .L_037f8e88
    .word .L_037f90fc
    .word .L_037f9144
    .word .L_037f9158
    .word .L_037f91b4
.L_037f90fc:
    ldr        r3, .L_037f9208
    ldrb       ip, [r3, #0x13]
    ldr        r3, .L_037f9214
    and        r0, ip, #7
    add        r0, r4, r0, lsl #8
    ldr        lr, [r3, r0, lsl #3]
    lsr        ip, ip, #3
    rsb        r3, ip, #7
    lsr        lr, lr, r3
    ldr        r2, .L_037f9218
    ldrb       r1, [r2, r0, lsr #7]
    mvn        r3, #0
    orr        r1, r1, ip, lsl #2
    mov        r8, #1
    str        r3, [r7, #0x10]
    strb       r1, [r7, #0xcc]
    str        lr, [r7, #0xd0]
    b          .L_037f8e8c
.L_037f9144:
    ldr        r3, .L_037f9208
    and        r2, r4, #0x3f
    mov        r8, #0
    strb       r2, [r3, #0x13]
    b          .L_037f8e8c
.L_037f9158:
    cmp        r0, #0xff
    bgt        .L_037f90d8
    ldr        lr, .L_037f9208
    ldrb       r1, [lr, #0x43c]
    ldr        r3, .L_037f9214
    and        r0, r1, #7
    add        r0, r4, r0, lsl #8
    ldr        ip, [r3, r0, lsl #3]
    lsr        r1, r1, #3
    rsb        r2, r1, #7
    lsr        ip, ip, r2
    ldr        r3, .L_037f9218
    ldrb       r2, [r3, r0, lsr #7]
    add        r3, r5, lr
    orr        r2, r2, r1, lsl #2
    add        r4, lr, r5, lsl #2
    strb       r2, [r3, #0x43d]
    mov        r8, #1
    mvn        r3, #0
    str        r0, [r4, #0x440]
    str        ip, [r4, #0x430]
    str        r3, [lr, #0x620]
    b          .L_037f8e8c
.L_037f91b4:
    cmp        r0, #0xff
    ldrle      r3, .L_037f9208
    andle      r2, r4, #0x3f
    movle      r8, #0
    strble     r2, [r3, #0x43c]
    ble        .L_037f8e8c
    b          .L_037f8e88
.L_037f91d0:
    asr        r3, r4, #3
    ands       r3, r3, #7
    and        r2, r4, #7
    addne      r3, r3, #6
    mov        r8, #1
    strb       r2, [r7, #0xc0]
    strb       r3, [r7, #0xc1]
    b          .L_037f8e8c
.L_037f91f0:
    .word 0x03807308
.L_037f91f4:
    .word 0x03806ed4
.L_037f91f8:
    .word ym2612_tables + 0x44b0 /* envelope_pattern_index */
.L_037f91fc:
    .word ym2612_tables + 0x4530 /* envelope_patterns */
.L_037f9200:
    .word ym2612_tables + 0x4430 /* envelope_shift */
.L_037f9204:
    .word ym2612_tables + 0x457c /* sustain_attenuation */
.L_037f9208:
    .word 0x03806ea8
.L_037f920c:
    .word ym2612_tables + 0x4420 /* ds_channel_volume */
.L_037f9210:
    .word ym2612_tables + 0x4410 /* ds_channel_pan */
.L_037f9214:
    .word 0x03807820
.L_037f9218:
    .word ym2612_tables + 0x4400 /* key_code_from_f_number */
    cmp        r1, #0
    bxle       lr
.L_037f9224:
    mov        r3, #0
    subs       r1, r1, #1
    strh       r3, [r0], #2
    bne        .L_037f9224
    bx         lr
