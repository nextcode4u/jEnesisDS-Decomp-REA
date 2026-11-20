.L_0200df20:
    push {r4, lr} @ 0200df20
    add r0, r0, #0x400 @ 0200df24
    ldr r1, [pc, #0xf0] @ 0200df28
    ldr r2, [pc, #0xf0] @ 0200df2c
    ldr r3, [pc, #0xf0] @ 0200df30
    ldr r4, [pc, #0xf0] @ 0200df34
    str r1, [r0, #0x94] @ 0200df38
    str r2, [r0, #0x98] @ 0200df3c
    str r3, [r0, #0x9c] @ 0200df40
    str r4, [r0, #0xa0] @ 0200df44
    pop {r4, pc} @ 0200df48
    .zero 4
.L_0200df50:
@ FUN_0200df50 at 0x0200df50
    push {r4, r5, r6, r7, r8, sb, sl, fp, ip, lr} @ 0200df50
    add r0, r0, #0x400 @ 0200df54
    str sp, [r0, #0x60] @ 0200df58
    mov sp, r0 @ 0200df5c
    ldm r0!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, ip} @ 0200df60
    str r1, [sp, #0x74] @ 0200df64
    ldr r0, [sp, #0x80] @ 0200df68
    ldr r2, [sp, #0x88] @ 0200df6c
    tst r0, #0x100 @ 0200df70
    beq .L_0200df84 @ 0200df74
    cmp r2, #0 @ 0200df78
    cmpgt r1, r2 @ 0200df7c
    movgt r1, r2 @ 0200df80
.L_0200df84:
    tst r0, #0x200 @ 0200df84
    beq .L_0200df9c @ 0200df88
    ldr r2, [sp, #0x90] @ 0200df8c
    cmp r2, #0 @ 0200df90
    cmpgt r1, r2 @ 0200df94
    movgt r1, r2 @ 0200df98
.L_0200df9c:
    add r5, r5, r1, lsl #16 @ 0200df9c
    str r1, [sp, #0x78] @ 0200dfa0
    ldr r2, [pc, #0x74] @ 0200dfa4
.L_0200dfa8:
    ldr r0, [sp, #0xa4] @ 0200dfa8
    tst r0, r0 @ 0200dfac
    beq .L_0200e018 @ 0200dfb0
    ldr r0, [sp, #0x44] @ 0200dfb4
    tst r0, #8 @ 0200dfb8
    beq .L_0200e018 @ 0200dfbc
    mov r1, #0 @ 0200dfc0
    str r1, [sp, #0xa4] @ 0200dfc4
    ldrb r1, [fp] @ 0200dfc8
    cmp r1, #0x76 @ 0200dfcc
    addeq fp, fp, #1 @ 0200dfd0
    bic r1, r0, #0xc @ 0200dfd4
    str r1, [sp, #0x44] @ 0200dfd8
    and r0, r0, #3 @ 0200dfdc
    cmp r0, #2 @ 0200dfe0
    beq .L_0200e004 @ 0200dfe4
    sub lr, fp, r3 @ 0200dfe8
    lsr r1, lr, #8 @ 0200dfec
    strb r1, [ip, #-1]! @ 0200dff0
    strb lr, [ip, #-1]! @ 0200dff4
    sub r5, r5, #0xd0000 @ 0200dff8
    add fp, r3, #0x38 @ 0200dffc
    b .L_0200e018 @ 0200e000
.L_0200e004:
    sub lr, fp, r3 @ 0200e004
    lsr r1, lr, #8 @ 0200e008
    strb r1, [ip, #-1]! @ 0200e00c
    strb lr, [ip, #-1]! @ 0200e010
    sub r5, r5, #0x130000 @ 0200e014
.L_0200e018:
    ldrb r0, [fp], #1 @ 0200e018
    ldr pc, [r2, r0, lsl #2] @ 0200e01c
    .byte 0xb0, 0x54, 0x01, 0x02, 0xf0, 0x53, 0x01, 0x02, 0x30, 0x54, 0x01, 0x02, 0x70, 0x54, 0x01, 0x02 @ 0200e020
.L_0200e030:
    sub fp, fp, #1 @ 0200e030
    ldr r0, [sp, #0x28] @ 0200e034
    mov r1, #0 @ 0200e038
    cmp r0, #0 @ 0200e03c
    strgt r1, [sp, #0x28] @ 0200e040
    addsgt r5, r5, r0, lsl #16 @ 0200e044
    bgt .L_0200dfa8 @ 0200e048
    ldr r0, [sp, #0x80] @ 0200e04c
    ldr lr, [sp, #0x78] @ 0200e050
    tst r0, #0x300 @ 0200e054
    beq .L_0200e10c @ 0200e058
    tst r0, #0x100 @ 0200e05c
    beq .L_0200e088 @ 0200e060
    ldr r2, [sp, #0x84] @ 0200e064
    ldr r1, [sp, #0x88] @ 0200e068
    cmp r2, #0 @ 0200e06c
    movle r2, lr @ 0200e070
    subs r1, r1, lr @ 0200e074
    orrle r0, r0, #1 @ 0200e078
.L_0200e07c:
    addsle r1, r1, r2 @ 0200e07c
    blt .L_0200e07c @ 0200e080
    str r1, [sp, #0x88] @ 0200e084
.L_0200e088:
    tst r0, #0x200 @ 0200e088
    beq .L_0200e0b4 @ 0200e08c
    ldr r2, [sp, #0x8c] @ 0200e090
    ldr r1, [sp, #0x90] @ 0200e094
    cmp r2, #0 @ 0200e098
    movle r2, lr @ 0200e09c
    subs r1, r1, lr @ 0200e0a0
    orrle r0, r0, #2 @ 0200e0a4
.L_0200e0a8:
    addsle r1, r1, r2 @ 0200e0a8
    blt .L_0200e0a8 @ 0200e0ac
    str r1, [sp, #0x90] @ 0200e0b0
.L_0200e0b4:
    str r0, [sp, #0x80] @ 0200e0b4
    ldr r1, [sp, #0x74] @ 0200e0b8
    subs lr, r1, lr @ 0200e0bc
    ble .L_0200e134 @ 0200e0c0
    str lr, [sp, #0x74] @ 0200e0c4
    tst r0, #0x100 @ 0200e0c8
    ldrne r1, [sp, #0x88] @ 0200e0cc
    beq .L_0200e0e0 @ 0200e0d0
    cmp r1, #0 @ 0200e0d4
    cmpgt lr, r1 @ 0200e0d8
    movgt lr, r1 @ 0200e0dc
.L_0200e0e0:
    tst r0, #0x200 @ 0200e0e0
    ldrne r1, [sp, #0x90] @ 0200e0e4
    beq .L_0200e0f8 @ 0200e0e8
    cmp r1, #0 @ 0200e0ec
    cmpgt lr, r1 @ 0200e0f0
    movgt lr, r1 @ 0200e0f4
.L_0200e0f8:
    str lr, [sp, #0x78] @ 0200e0f8
    ldr r2, [sp, #0x94] @ 0200e0fc
    add r5, r5, lr, lsl #16 @ 0200e100
    ldrb r0, [fp], #1 @ 0200e104
    ldr pc, [r2, r0, lsl #2] @ 0200e108
.L_0200e10c:
    ldr r0, [sp, #0x74] @ 0200e10c
    subs r0, r0, lr @ 0200e110
    ble .L_0200e134 @ 0200e114
    cmp r0, lr @ 0200e118
    movlt lr, r0 @ 0200e11c
    strlt lr, [sp, #0x78] @ 0200e120
    str r0, [sp, #0x74] @ 0200e124
    add r5, r5, lr, lsl #16 @ 0200e128
    ldrb r0, [fp], #1 @ 0200e12c
    ldr pc, [r2, r0, lsl #2] @ 0200e130
.L_0200e134:
    mov r1, sp @ 0200e134
    stm r1!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, ip} @ 0200e138
    asr r0, r5, #0x10 @ 0200e13c
    ldr sp, [sp, #0x60] @ 0200e140
    pop {r4, r5, r6, r7, r8, sb, sl, fp, ip, pc} @ 0200e144
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x5f, 0x2d, 0xe9, 0xf8, 0x9f, 0xbd, 0xe8 @ 0200e148
    .zero 8
@ z80_dispatch_0200e160 at 0x0200e160
    ldr r1, [pc, #0xd00] @ 0200e160
    bic r5, r5, #0xd7 @ 0200e164
    lsls r6, r6, #1 @ 0200e168
    orrhs r6, r6, #0x1000000 @ 0200e16c
    ldrb r1, [r1, r6, lsr #24] @ 0200e170
    orrhs r5, r5, #1 @ 0200e174
    orr r5, r5, r1 @ 0200e178
    ldrb r0, [fp], #1 @ 0200e17c
    subs r5, r5, #0x80000 @ 0200e180
    ldrgt pc, [r2, r0, lsl #2] @ 0200e184
    b .L_0200e030 @ 0200e188
@ z80_dispatch_0200e18c at 0x0200e18c
    ldr r1, [pc, #0xcd4] @ 0200e18c
    bic r5, r5, #0xd7 @ 0200e190
    lsls r7, r7, #1 @ 0200e194
    orrhs r7, r7, #0x1000000 @ 0200e198
    ldrb r1, [r1, r7, lsr #24] @ 0200e19c
    orrhs r5, r5, #1 @ 0200e1a0
    orr r5, r5, r1 @ 0200e1a4
    ldrb r0, [fp], #1 @ 0200e1a8
    subs r5, r5, #0x80000 @ 0200e1ac
    ldrgt pc, [r2, r0, lsl #2] @ 0200e1b0
    b .L_0200e030 @ 0200e1b4
@ z80_dispatch_0200e1b8 at 0x0200e1b8
    ldr r1, [pc, #0xca8] @ 0200e1b8
    bic r5, r5, #0xd7 @ 0200e1bc
    lsls r8, r8, #1 @ 0200e1c0
    orrhs r8, r8, #0x1000000 @ 0200e1c4
    ldrb r1, [r1, r8, lsr #24] @ 0200e1c8
    orrhs r5, r5, #1 @ 0200e1cc
    orr r5, r5, r1 @ 0200e1d0
    ldrb r0, [fp], #1 @ 0200e1d4
    subs r5, r5, #0x80000 @ 0200e1d8
    ldrgt pc, [r2, r0, lsl #2] @ 0200e1dc
    b .L_0200e030 @ 0200e1e0
@ z80_dispatch_0200e1e4 at 0x0200e1e4
    ldr r1, [pc, #0xc7c] @ 0200e1e4
    bic r5, r5, #0xd7 @ 0200e1e8
    lsls sb, sb, #1 @ 0200e1ec
    orrhs sb, sb, #0x1000000 @ 0200e1f0
    ldrb r1, [r1, sb, lsr #24] @ 0200e1f4
    orrhs r5, r5, #1 @ 0200e1f8
    orr r5, r5, r1 @ 0200e1fc
    ldrb r0, [fp], #1 @ 0200e200
    subs r5, r5, #0x80000 @ 0200e204
    ldrgt pc, [r2, r0, lsl #2] @ 0200e208
    b .L_0200e030 @ 0200e20c
@ z80_dispatch_0200e210 at 0x0200e210
    and r0, sl, #0xff000000 @ 0200e210
    ldr r1, [pc, #0xc4c] @ 0200e214
    bic r5, r5, #0xd7 @ 0200e218
    lsls r0, r0, #1 @ 0200e21c
    orrhs r0, r0, #0x1000000 @ 0200e220
    ldrb r1, [r1, r0, lsr #24] @ 0200e224
    orrhs r5, r5, #1 @ 0200e228
    orr r5, r5, r1 @ 0200e22c
    and sl, sl, #0xff0000 @ 0200e230
    orr sl, sl, r0 @ 0200e234
    ldrb r0, [fp], #1 @ 0200e238
    subs r5, r5, #0x80000 @ 0200e23c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e240
    b .L_0200e030 @ 0200e244
@ z80_dispatch_0200e248 at 0x0200e248
    lsl r0, sl, #8 @ 0200e248
    ldr r1, [pc, #0xc14] @ 0200e24c
    bic r5, r5, #0xd7 @ 0200e250
    lsls r0, r0, #1 @ 0200e254
    orrhs r0, r0, #0x1000000 @ 0200e258
    ldrb r1, [r1, r0, lsr #24] @ 0200e25c
    orrhs r5, r5, #1 @ 0200e260
    orr r5, r5, r1 @ 0200e264
    and sl, sl, #0xff000000 @ 0200e268
    orr sl, sl, r0, lsr #8 @ 0200e26c
    ldrb r0, [fp], #1 @ 0200e270
    subs r5, r5, #0x80000 @ 0200e274
    ldrgt pc, [r2, r0, lsl #2] @ 0200e278
    b .L_0200e030 @ 0200e27c
@ z80_dispatch_0200e280 at 0x0200e280
    cmp sl, #0x20000000 @ 0200e280
    .word 0x2bbfd298 @ 0200e284 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200e288
    ldr r1, [pc, #0xbd4] @ 0200e28c
    lsls r0, r0, #0x19 @ 0200e290
    orrhs r0, r0, #0x1000000 @ 0200e294
    ldrb r1, [r1, r0, lsr #24] @ 0200e298
    bic r5, r5, #0xd7 @ 0200e29c
    orrhs r5, r5, #1 @ 0200e2a0
    orr r5, r5, r1 @ 0200e2a4
    lsr r0, r0, #0x18 @ 0200e2a8
    mov r1, r0 @ 0200e2ac
    cmp sl, #0x20000000 @ 0200e2b0
    .word 0x2bbfd29c @ 0200e2b4 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200e2b8
    ldrb r0, [fp], #1 @ 0200e2bc
    subs r5, r5, #0xf0000 @ 0200e2c0
    ldrgt pc, [r2, r0, lsl #2] @ 0200e2c4
    b .L_0200e030 @ 0200e2c8
@ z80_dispatch_0200e2cc at 0x0200e2cc
    ldr r1, [pc, #0xb94] @ 0200e2cc
    bic r5, r5, #0xd7 @ 0200e2d0
    lsls r4, r4, #1 @ 0200e2d4
    orrhs r4, r4, #0x1000000 @ 0200e2d8
    ldrb r1, [r1, r4, lsr #24] @ 0200e2dc
    orrhs r5, r5, #1 @ 0200e2e0
    orr r5, r5, r1 @ 0200e2e4
    ldrb r0, [fp], #1 @ 0200e2e8
    subs r5, r5, #0x80000 @ 0200e2ec
    ldrgt pc, [r2, r0, lsl #2] @ 0200e2f0
    b .L_0200e030 @ 0200e2f4
@ z80_dispatch_0200e2f8 at 0x0200e2f8
    ldr r1, [pc, #0xb68] @ 0200e2f8
    bic r5, r5, #0xd7 @ 0200e2fc
    lsrs r6, r6, #0x19 @ 0200e300
    orrhs r6, r6, #0x80 @ 0200e304
    ldrb r1, [r1, r6] @ 0200e308
    orrhs r5, r5, #1 @ 0200e30c
    lsls r6, r6, #0x18 @ 0200e310
    orr r5, r5, r1 @ 0200e314
    ldrb r0, [fp], #1 @ 0200e318
    subs r5, r5, #0x80000 @ 0200e31c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e320
    b .L_0200e030 @ 0200e324
@ z80_dispatch_0200e328 at 0x0200e328
    ldr r1, [pc, #0xb38] @ 0200e328
    bic r5, r5, #0xd7 @ 0200e32c
    lsrs r7, r7, #0x19 @ 0200e330
    orrhs r7, r7, #0x80 @ 0200e334
    ldrb r1, [r1, r7] @ 0200e338
    orrhs r5, r5, #1 @ 0200e33c
    lsls r7, r7, #0x18 @ 0200e340
    orr r5, r5, r1 @ 0200e344
    ldrb r0, [fp], #1 @ 0200e348
    subs r5, r5, #0x80000 @ 0200e34c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e350
    b .L_0200e030 @ 0200e354
@ z80_dispatch_0200e358 at 0x0200e358
    ldr r1, [pc, #0xb08] @ 0200e358
    bic r5, r5, #0xd7 @ 0200e35c
    lsrs r8, r8, #0x19 @ 0200e360
    orrhs r8, r8, #0x80 @ 0200e364
    ldrb r1, [r1, r8] @ 0200e368
    orrhs r5, r5, #1 @ 0200e36c
    lsls r8, r8, #0x18 @ 0200e370
    orr r5, r5, r1 @ 0200e374
    ldrb r0, [fp], #1 @ 0200e378
    subs r5, r5, #0x80000 @ 0200e37c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e380
    b .L_0200e030 @ 0200e384
@ z80_dispatch_0200e388 at 0x0200e388
    ldr r1, [pc, #0xad8] @ 0200e388
    bic r5, r5, #0xd7 @ 0200e38c
    lsrs sb, sb, #0x19 @ 0200e390
    orrhs sb, sb, #0x80 @ 0200e394
    ldrb r1, [r1, sb] @ 0200e398
    orrhs r5, r5, #1 @ 0200e39c
    lsls sb, sb, #0x18 @ 0200e3a0
    orr r5, r5, r1 @ 0200e3a4
    ldrb r0, [fp], #1 @ 0200e3a8
    subs r5, r5, #0x80000 @ 0200e3ac
    ldrgt pc, [r2, r0, lsl #2] @ 0200e3b0
    b .L_0200e030 @ 0200e3b4
@ z80_dispatch_0200e3b8 at 0x0200e3b8
    and r0, sl, #0xff000000 @ 0200e3b8
    ldr r1, [pc, #0xaa4] @ 0200e3bc
    bic r5, r5, #0xd7 @ 0200e3c0
    lsrs r0, r0, #0x19 @ 0200e3c4
    orrhs r0, r0, #0x80 @ 0200e3c8
    ldrb r1, [r1, r0] @ 0200e3cc
    orrhs r5, r5, #1 @ 0200e3d0
    lsls r0, r0, #0x18 @ 0200e3d4
    orr r5, r5, r1 @ 0200e3d8
    and sl, sl, #0xff0000 @ 0200e3dc
    orr sl, sl, r0 @ 0200e3e0
    ldrb r0, [fp], #1 @ 0200e3e4
    subs r5, r5, #0x80000 @ 0200e3e8
    ldrgt pc, [r2, r0, lsl #2] @ 0200e3ec
    b .L_0200e030 @ 0200e3f0
@ z80_dispatch_0200e3f4 at 0x0200e3f4
    lsl r0, sl, #8 @ 0200e3f4
    ldr r1, [pc, #0xa68] @ 0200e3f8
    bic r5, r5, #0xd7 @ 0200e3fc
    lsrs r0, r0, #0x19 @ 0200e400
    orrhs r0, r0, #0x80 @ 0200e404
    ldrb r1, [r1, r0] @ 0200e408
    orrhs r5, r5, #1 @ 0200e40c
    lsls r0, r0, #0x18 @ 0200e410
    orr r5, r5, r1 @ 0200e414
    and sl, sl, #0xff000000 @ 0200e418
    orr sl, sl, r0, lsr #8 @ 0200e41c
    ldrb r0, [fp], #1 @ 0200e420
    subs r5, r5, #0x80000 @ 0200e424
    ldrgt pc, [r2, r0, lsl #2] @ 0200e428
    b .L_0200e030 @ 0200e42c
@ z80_dispatch_0200e430 at 0x0200e430
    cmp sl, #0x20000000 @ 0200e430
    .word 0x2bbfd22c @ 0200e434 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200e438
    ldr r1, [pc, #0xa24] @ 0200e43c
    lsrs r0, r0, #1 @ 0200e440
    orrhs r0, r0, #0x80 @ 0200e444
    ldrb r1, [r1, r0] @ 0200e448
    bic r5, r5, #0xd7 @ 0200e44c
    orrhs r5, r5, #0x81 @ 0200e450
    orr r5, r5, r1 @ 0200e454
    mov r1, r0 @ 0200e458
    cmp sl, #0x20000000 @ 0200e45c
    .word 0x2bbfd231 @ 0200e460 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200e464
    ldrb r0, [fp], #1 @ 0200e468
    subs r5, r5, #0xf0000 @ 0200e46c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e470
    b .L_0200e030 @ 0200e474
@ z80_dispatch_0200e478 at 0x0200e478
    ldr r1, [pc, #0x9e8] @ 0200e478
    bic r5, r5, #0xd7 @ 0200e47c
    lsrs r4, r4, #0x19 @ 0200e480
    orrhs r4, r4, #0x80 @ 0200e484
    ldrb r1, [r1, r4] @ 0200e488
    orrhs r5, r5, #1 @ 0200e48c
    lsls r4, r4, #0x18 @ 0200e490
    orr r5, r5, r1 @ 0200e494
    ldrb r0, [fp], #1 @ 0200e498
    subs r5, r5, #0x80000 @ 0200e49c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e4a0
    b .L_0200e030 @ 0200e4a4
@ z80_dispatch_0200e4a8 at 0x0200e4a8
    ldr r1, [pc, #0x9b8] @ 0200e4a8
    tst r5, #1 @ 0200e4ac
    bic r5, r5, #0xd7 @ 0200e4b0
    orrne r6, r6, #0x800000 @ 0200e4b4
    lsls r6, r6, #1 @ 0200e4b8
    ldrb r1, [r1, r6, lsr #24] @ 0200e4bc
    orrhs r5, r5, #1 @ 0200e4c0
    orr r5, r5, r1 @ 0200e4c4
    ldrb r0, [fp], #1 @ 0200e4c8
    subs r5, r5, #0x80000 @ 0200e4cc
    ldrgt pc, [r2, r0, lsl #2] @ 0200e4d0
    b .L_0200e030 @ 0200e4d4
@ z80_dispatch_0200e4d8 at 0x0200e4d8
    ldr r1, [pc, #0x988] @ 0200e4d8
    tst r5, #1 @ 0200e4dc
    bic r5, r5, #0xd7 @ 0200e4e0
    orrne r7, r7, #0x800000 @ 0200e4e4
    lsls r7, r7, #1 @ 0200e4e8
    ldrb r1, [r1, r7, lsr #24] @ 0200e4ec
    orrhs r5, r5, #1 @ 0200e4f0
    orr r5, r5, r1 @ 0200e4f4
    ldrb r0, [fp], #1 @ 0200e4f8
    subs r5, r5, #0x80000 @ 0200e4fc
    ldrgt pc, [r2, r0, lsl #2] @ 0200e500
    b .L_0200e030 @ 0200e504
@ z80_dispatch_0200e508 at 0x0200e508
    ldr r1, [pc, #0x958] @ 0200e508
    tst r5, #1 @ 0200e50c
    bic r5, r5, #0xd7 @ 0200e510
    orrne r8, r8, #0x800000 @ 0200e514
    lsls r8, r8, #1 @ 0200e518
    ldrb r1, [r1, r8, lsr #24] @ 0200e51c
    orrhs r5, r5, #1 @ 0200e520
    orr r5, r5, r1 @ 0200e524
    ldrb r0, [fp], #1 @ 0200e528
    subs r5, r5, #0x80000 @ 0200e52c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e530
    b .L_0200e030 @ 0200e534
@ z80_dispatch_0200e538 at 0x0200e538
    ldr r1, [pc, #0x928] @ 0200e538
    tst r5, #1 @ 0200e53c
    bic r5, r5, #0xd7 @ 0200e540
    orrne sb, sb, #0x800000 @ 0200e544
    lsls sb, sb, #1 @ 0200e548
    ldrb r1, [r1, sb, lsr #24] @ 0200e54c
    orrhs r5, r5, #1 @ 0200e550
    orr r5, r5, r1 @ 0200e554
    ldrb r0, [fp], #1 @ 0200e558
    subs r5, r5, #0x80000 @ 0200e55c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e560
    b .L_0200e030 @ 0200e564
@ z80_dispatch_0200e568 at 0x0200e568
    and r0, sl, #0xff000000 @ 0200e568
    ldr r1, [pc, #0x8f4] @ 0200e56c
    tst r5, #1 @ 0200e570
    bic r5, r5, #0xd7 @ 0200e574
    orrne r0, r0, #0x800000 @ 0200e578
    lsls r0, r0, #1 @ 0200e57c
    ldrb r1, [r1, r0, lsr #24] @ 0200e580
    orrhs r5, r5, #1 @ 0200e584
    orr r5, r5, r1 @ 0200e588
    and sl, sl, #0xff0000 @ 0200e58c
    orr sl, sl, r0 @ 0200e590
    ldrb r0, [fp], #1 @ 0200e594
    subs r5, r5, #0x80000 @ 0200e598
    ldrgt pc, [r2, r0, lsl #2] @ 0200e59c
    b .L_0200e030 @ 0200e5a0
@ z80_dispatch_0200e5a4 at 0x0200e5a4
    lsl r0, sl, #8 @ 0200e5a4
    ldr r1, [pc, #0x8b8] @ 0200e5a8
    tst r5, #1 @ 0200e5ac
    bic r5, r5, #0xd7 @ 0200e5b0
    orrne r0, r0, #0x800000 @ 0200e5b4
    lsls r0, r0, #1 @ 0200e5b8
    ldrb r1, [r1, r0, lsr #24] @ 0200e5bc
    orrhs r5, r5, #1 @ 0200e5c0
    orr r5, r5, r1 @ 0200e5c4
    and sl, sl, #0xff000000 @ 0200e5c8
    orr sl, sl, r0, lsr #8 @ 0200e5cc
    ldrb r0, [fp], #1 @ 0200e5d0
    subs r5, r5, #0x80000 @ 0200e5d4
    ldrgt pc, [r2, r0, lsl #2] @ 0200e5d8
    b .L_0200e030 @ 0200e5dc
@ z80_dispatch_0200e5e0 at 0x0200e5e0
    cmp sl, #0x20000000 @ 0200e5e0
    .word 0x2bbfd1c0 @ 0200e5e4 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200e5e8
    and r1, r5, #1 @ 0200e5ec
    lsls r0, r0, #0x19 @ 0200e5f0
    orr r0, r0, r1, lsl #24 @ 0200e5f4
    ldr r1, [pc, #0x868] @ 0200e5f8
    bic r5, r5, #0xd7 @ 0200e5fc
    ldrb r1, [r1, r0, lsr #24] @ 0200e600
    orrhs r5, r5, #1 @ 0200e604
    lsr r0, r0, #0x18 @ 0200e608
    orr r5, r5, r1 @ 0200e60c
    mov r1, r0 @ 0200e610
    cmp sl, #0x20000000 @ 0200e614
    .word 0x2bbfd1c3 @ 0200e618 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200e61c
    ldrb r0, [fp], #1 @ 0200e620
    subs r5, r5, #0xf0000 @ 0200e624
    ldrgt pc, [r2, r0, lsl #2] @ 0200e628
    b .L_0200e030 @ 0200e62c
@ z80_dispatch_0200e630 at 0x0200e630
    ldr r1, [pc, #0x830] @ 0200e630
    tst r5, #1 @ 0200e634
    bic r5, r5, #0xd7 @ 0200e638
    orrne r4, r4, #0x800000 @ 0200e63c
    lsls r4, r4, #1 @ 0200e640
    ldrb r1, [r1, r4, lsr #24] @ 0200e644
    orrhs r5, r5, #1 @ 0200e648
    orr r5, r5, r1 @ 0200e64c
    ldrb r0, [fp], #1 @ 0200e650
    subs r5, r5, #0x80000 @ 0200e654
    ldrgt pc, [r2, r0, lsl #2] @ 0200e658
    b .L_0200e030 @ 0200e65c
@ z80_dispatch_0200e660 at 0x0200e660
    and r1, r5, #1 @ 0200e660
    bic r5, r5, #0xd7 @ 0200e664
    lsrs r6, r6, #0x19 @ 0200e668
    orr r6, r6, r1, lsl #7 @ 0200e66c
    ldr r1, [pc, #0x7f0] @ 0200e670
    lsl r6, r6, #0x18 @ 0200e674
    ldrb r1, [r1, r6, lsr #24] @ 0200e678
    orrhs r5, r5, #1 @ 0200e67c
    orr r5, r5, r1 @ 0200e680
    ldrb r0, [fp], #1 @ 0200e684
    subs r5, r5, #0x80000 @ 0200e688
    ldrgt pc, [r2, r0, lsl #2] @ 0200e68c
    b .L_0200e030 @ 0200e690
@ z80_dispatch_0200e694 at 0x0200e694
    and r1, r5, #1 @ 0200e694
    bic r5, r5, #0xd7 @ 0200e698
    lsrs r7, r7, #0x19 @ 0200e69c
    orr r7, r7, r1, lsl #7 @ 0200e6a0
    ldr r1, [pc, #0x7bc] @ 0200e6a4
    lsl r7, r7, #0x18 @ 0200e6a8
    ldrb r1, [r1, r7, lsr #24] @ 0200e6ac
    orrhs r5, r5, #1 @ 0200e6b0
    orr r5, r5, r1 @ 0200e6b4
    ldrb r0, [fp], #1 @ 0200e6b8
    subs r5, r5, #0x80000 @ 0200e6bc
    ldrgt pc, [r2, r0, lsl #2] @ 0200e6c0
    b .L_0200e030 @ 0200e6c4
@ z80_dispatch_0200e6c8 at 0x0200e6c8
    and r1, r5, #1 @ 0200e6c8
    bic r5, r5, #0xd7 @ 0200e6cc
    lsrs r8, r8, #0x19 @ 0200e6d0
    orr r8, r8, r1, lsl #7 @ 0200e6d4
    ldr r1, [pc, #0x788] @ 0200e6d8
    lsl r8, r8, #0x18 @ 0200e6dc
    ldrb r1, [r1, r8, lsr #24] @ 0200e6e0
    orrhs r5, r5, #1 @ 0200e6e4
    orr r5, r5, r1 @ 0200e6e8
    ldrb r0, [fp], #1 @ 0200e6ec
    subs r5, r5, #0x80000 @ 0200e6f0
    ldrgt pc, [r2, r0, lsl #2] @ 0200e6f4
    b .L_0200e030 @ 0200e6f8
@ z80_dispatch_0200e6fc at 0x0200e6fc
    and r1, r5, #1 @ 0200e6fc
    bic r5, r5, #0xd7 @ 0200e700
    lsrs sb, sb, #0x19 @ 0200e704
    orr sb, sb, r1, lsl #7 @ 0200e708
    ldr r1, [pc, #0x754] @ 0200e70c
    lsl sb, sb, #0x18 @ 0200e710
    ldrb r1, [r1, sb, lsr #24] @ 0200e714
    orrhs r5, r5, #1 @ 0200e718
    orr r5, r5, r1 @ 0200e71c
    ldrb r0, [fp], #1 @ 0200e720
    subs r5, r5, #0x80000 @ 0200e724
    ldrgt pc, [r2, r0, lsl #2] @ 0200e728
    b .L_0200e030 @ 0200e72c
@ z80_dispatch_0200e730 at 0x0200e730
    and r0, sl, #0xff000000 @ 0200e730
    and r1, r5, #1 @ 0200e734
    bic r5, r5, #0xd7 @ 0200e738
    lsrs r0, r0, #0x19 @ 0200e73c
    orr r0, r0, r1, lsl #7 @ 0200e740
    ldr r1, [pc, #0x71c] @ 0200e744
    lsl r0, r0, #0x18 @ 0200e748
    ldrb r1, [r1, r0, lsr #24] @ 0200e74c
    orrhs r5, r5, #1 @ 0200e750
    orr r5, r5, r1 @ 0200e754
    and sl, sl, #0xff0000 @ 0200e758
    orr sl, sl, r0 @ 0200e75c
    ldrb r0, [fp], #1 @ 0200e760
    subs r5, r5, #0x80000 @ 0200e764
    ldrgt pc, [r2, r0, lsl #2] @ 0200e768
    b .L_0200e030 @ 0200e76c
@ z80_dispatch_0200e770 at 0x0200e770
    lsl r0, sl, #8 @ 0200e770
    and r1, r5, #1 @ 0200e774
    bic r5, r5, #0xd7 @ 0200e778
    lsrs r0, r0, #0x19 @ 0200e77c
    orr r0, r0, r1, lsl #7 @ 0200e780
    ldr r1, [pc, #0x6dc] @ 0200e784
    lsl r0, r0, #0x18 @ 0200e788
    ldrb r1, [r1, r0, lsr #24] @ 0200e78c
    orrhs r5, r5, #1 @ 0200e790
    orr r5, r5, r1 @ 0200e794
    and sl, sl, #0xff000000 @ 0200e798
    orr sl, sl, r0, lsr #8 @ 0200e79c
    ldrb r0, [fp], #1 @ 0200e7a0
    subs r5, r5, #0x80000 @ 0200e7a4
    ldrgt pc, [r2, r0, lsl #2] @ 0200e7a8
    b .L_0200e030 @ 0200e7ac
@ z80_dispatch_0200e7b0 at 0x0200e7b0
    cmp sl, #0x20000000 @ 0200e7b0
    .word 0x2bbfd14c @ 0200e7b4 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200e7b8
    ldr r1, [pc, #0x6a4] @ 0200e7bc
    tst r5, #1 @ 0200e7c0
    orrne r0, r0, #0x100 @ 0200e7c4
    lsrs r0, r0, #1 @ 0200e7c8
    ldrb r1, [r1, r0] @ 0200e7cc
    bic r5, r5, #0xd7 @ 0200e7d0
    orrhs r5, r5, #1 @ 0200e7d4
    orr r5, r5, r1 @ 0200e7d8
    mov r1, r0 @ 0200e7dc
    cmp sl, #0x20000000 @ 0200e7e0
    .word 0x2bbfd150 @ 0200e7e4 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200e7e8
    ldrb r0, [fp], #1 @ 0200e7ec
    subs r5, r5, #0xf0000 @ 0200e7f0
    ldrgt pc, [r2, r0, lsl #2] @ 0200e7f4
    b .L_0200e030 @ 0200e7f8
@ z80_dispatch_0200e7fc at 0x0200e7fc
    and r1, r5, #1 @ 0200e7fc
    bic r5, r5, #0xd7 @ 0200e800
    lsrs r4, r4, #0x19 @ 0200e804
    orr r4, r4, r1, lsl #7 @ 0200e808
    ldr r1, [pc, #0x654] @ 0200e80c
    lsl r4, r4, #0x18 @ 0200e810
    ldrb r1, [r1, r4, lsr #24] @ 0200e814
    orrhs r5, r5, #1 @ 0200e818
    orr r5, r5, r1 @ 0200e81c
    ldrb r0, [fp], #1 @ 0200e820
    subs r5, r5, #0x80000 @ 0200e824
    ldrgt pc, [r2, r0, lsl #2] @ 0200e828
    b .L_0200e030 @ 0200e82c
@ z80_dispatch_0200e830 at 0x0200e830
    ldr r1, [pc, #0x630] @ 0200e830
    lsls r6, r6, #1 @ 0200e834
    ldrb r1, [r1, r6, lsr #24] @ 0200e838
    bic r5, r5, #0xd7 @ 0200e83c
    orrhs r5, r5, #1 @ 0200e840
    orr r5, r5, r1 @ 0200e844
    ldrb r0, [fp], #1 @ 0200e848
    subs r5, r5, #0x80000 @ 0200e84c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e850
    b .L_0200e030 @ 0200e854
@ z80_dispatch_0200e858 at 0x0200e858
    ldr r1, [pc, #0x608] @ 0200e858
    lsls r7, r7, #1 @ 0200e85c
    ldrb r1, [r1, r7, lsr #24] @ 0200e860
    bic r5, r5, #0xd7 @ 0200e864
    orrhs r5, r5, #1 @ 0200e868
    orr r5, r5, r1 @ 0200e86c
    ldrb r0, [fp], #1 @ 0200e870
    subs r5, r5, #0x80000 @ 0200e874
    ldrgt pc, [r2, r0, lsl #2] @ 0200e878
    b .L_0200e030 @ 0200e87c
@ z80_dispatch_0200e880 at 0x0200e880
    ldr r1, [pc, #0x5e0] @ 0200e880
    lsls r8, r8, #1 @ 0200e884
    ldrb r1, [r1, r8, lsr #24] @ 0200e888
    bic r5, r5, #0xd7 @ 0200e88c
    orrhs r5, r5, #1 @ 0200e890
    orr r5, r5, r1 @ 0200e894
    ldrb r0, [fp], #1 @ 0200e898
    subs r5, r5, #0x80000 @ 0200e89c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e8a0
    b .L_0200e030 @ 0200e8a4
@ z80_dispatch_0200e8a8 at 0x0200e8a8
    ldr r1, [pc, #0x5b8] @ 0200e8a8
    lsls sb, sb, #1 @ 0200e8ac
    ldrb r1, [r1, sb, lsr #24] @ 0200e8b0
    bic r5, r5, #0xd7 @ 0200e8b4
    orrhs r5, r5, #1 @ 0200e8b8
    orr r5, r5, r1 @ 0200e8bc
    ldrb r0, [fp], #1 @ 0200e8c0
    subs r5, r5, #0x80000 @ 0200e8c4
    ldrgt pc, [r2, r0, lsl #2] @ 0200e8c8
    b .L_0200e030 @ 0200e8cc
@ z80_dispatch_0200e8d0 at 0x0200e8d0
    and r0, sl, #0xff000000 @ 0200e8d0
    ldr r1, [pc, #0x58c] @ 0200e8d4
    lsls r0, r0, #1 @ 0200e8d8
    ldrb r1, [r1, r0, lsr #24] @ 0200e8dc
    bic r5, r5, #0xd7 @ 0200e8e0
    orrhs r5, r5, #1 @ 0200e8e4
    orr r5, r5, r1 @ 0200e8e8
    and sl, sl, #0xff0000 @ 0200e8ec
    orr sl, sl, r0 @ 0200e8f0
    ldrb r0, [fp], #1 @ 0200e8f4
    subs r5, r5, #0x80000 @ 0200e8f8
    ldrgt pc, [r2, r0, lsl #2] @ 0200e8fc
    b .L_0200e030 @ 0200e900
@ z80_dispatch_0200e904 at 0x0200e904
    lsl r0, sl, #8 @ 0200e904
    ldr r1, [pc, #0x558] @ 0200e908
    lsls r0, r0, #1 @ 0200e90c
    ldrb r1, [r1, r0, lsr #24] @ 0200e910
    bic r5, r5, #0xd7 @ 0200e914
    orrhs r5, r5, #1 @ 0200e918
    orr r5, r5, r1 @ 0200e91c
    and sl, sl, #0xff000000 @ 0200e920
    orr sl, sl, r0, lsr #8 @ 0200e924
    ldrb r0, [fp], #1 @ 0200e928
    subs r5, r5, #0x80000 @ 0200e92c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e930
    b .L_0200e030 @ 0200e934
@ z80_dispatch_0200e938 at 0x0200e938
    cmp sl, #0x20000000 @ 0200e938
    .word 0x2bbfd0ea @ 0200e93c blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200e940
    ldr r1, [pc, #0x51c] @ 0200e944
    lsls r0, r0, #0x19 @ 0200e948
    ldrb r1, [r1, r0, lsr #24] @ 0200e94c
    bic r5, r5, #0xd7 @ 0200e950
    orrhs r5, r5, #1 @ 0200e954
    orr r5, r5, r1 @ 0200e958
    lsr r0, r0, #0x18 @ 0200e95c
    mov r1, r0 @ 0200e960
    cmp sl, #0x20000000 @ 0200e964
    .word 0x2bbfd0ef @ 0200e968 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200e96c
    ldrb r0, [fp], #1 @ 0200e970
    subs r5, r5, #0xf0000 @ 0200e974
    ldrgt pc, [r2, r0, lsl #2] @ 0200e978
    b .L_0200e030 @ 0200e97c
@ z80_dispatch_0200e980 at 0x0200e980
    ldr r1, [pc, #0x4e0] @ 0200e980
    lsls r4, r4, #1 @ 0200e984
    ldrb r1, [r1, r4, lsr #24] @ 0200e988
    bic r5, r5, #0xd7 @ 0200e98c
    orrhs r5, r5, #1 @ 0200e990
    orr r5, r5, r1 @ 0200e994
    ldrb r0, [fp], #1 @ 0200e998
    subs r5, r5, #0x80000 @ 0200e99c
    ldrgt pc, [r2, r0, lsl #2] @ 0200e9a0
    b .L_0200e030 @ 0200e9a4
@ z80_dispatch_0200e9a8 at 0x0200e9a8
    ldr r1, [pc, #0x4b8] @ 0200e9a8
    asrs r6, r6, #0x19 @ 0200e9ac
    ldrb r1, [r1, r6] @ 0200e9b0
    bic r5, r5, #0xd7 @ 0200e9b4
    orrhs r5, r5, #1 @ 0200e9b8
    lsl r6, r6, #0x18 @ 0200e9bc
    orr r5, r5, r1 @ 0200e9c0
    ldrb r0, [fp], #1 @ 0200e9c4
    subs r5, r5, #0x80000 @ 0200e9c8
    ldrgt pc, [r2, r0, lsl #2] @ 0200e9cc
    b .L_0200e030 @ 0200e9d0
@ z80_dispatch_0200e9d4 at 0x0200e9d4
    ldr r1, [pc, #0x48c] @ 0200e9d4
    asrs r7, r7, #0x19 @ 0200e9d8
    ldrb r1, [r1, r7] @ 0200e9dc
    bic r5, r5, #0xd7 @ 0200e9e0
    orrhs r5, r5, #1 @ 0200e9e4
    lsl r7, r7, #0x18 @ 0200e9e8
    orr r5, r5, r1 @ 0200e9ec
    ldrb r0, [fp], #1 @ 0200e9f0
    subs r5, r5, #0x80000 @ 0200e9f4
    ldrgt pc, [r2, r0, lsl #2] @ 0200e9f8
    b .L_0200e030 @ 0200e9fc
@ z80_dispatch_0200ea00 at 0x0200ea00
    ldr r1, [pc, #0x460] @ 0200ea00
    asrs r8, r8, #0x19 @ 0200ea04
    ldrb r1, [r1, r8] @ 0200ea08
    bic r5, r5, #0xd7 @ 0200ea0c
    orrhs r5, r5, #1 @ 0200ea10
    lsl r8, r8, #0x18 @ 0200ea14
    orr r5, r5, r1 @ 0200ea18
    ldrb r0, [fp], #1 @ 0200ea1c
    subs r5, r5, #0x80000 @ 0200ea20
    ldrgt pc, [r2, r0, lsl #2] @ 0200ea24
    b .L_0200e030 @ 0200ea28
@ z80_dispatch_0200ea2c at 0x0200ea2c
    ldr r1, [pc, #0x434] @ 0200ea2c
    asrs sb, sb, #0x19 @ 0200ea30
    ldrb r1, [r1, sb] @ 0200ea34
    bic r5, r5, #0xd7 @ 0200ea38
    orrhs r5, r5, #1 @ 0200ea3c
    lsl sb, sb, #0x18 @ 0200ea40
    orr r5, r5, r1 @ 0200ea44
    ldrb r0, [fp], #1 @ 0200ea48
    subs r5, r5, #0x80000 @ 0200ea4c
    ldrgt pc, [r2, r0, lsl #2] @ 0200ea50
    b .L_0200e030 @ 0200ea54
@ z80_dispatch_0200ea58 at 0x0200ea58
    and r0, sl, #0xff000000 @ 0200ea58
    ldr r1, [pc, #0x404] @ 0200ea5c
    asrs r0, r0, #0x19 @ 0200ea60
    ldrb r1, [r1, r0] @ 0200ea64
    bic r5, r5, #0xd7 @ 0200ea68
    orrhs r5, r5, #1 @ 0200ea6c
    lsl r0, r0, #0x18 @ 0200ea70
    orr r5, r5, r1 @ 0200ea74
    and sl, sl, #0xff0000 @ 0200ea78
    orr sl, sl, r0 @ 0200ea7c
    ldrb r0, [fp], #1 @ 0200ea80
    subs r5, r5, #0x80000 @ 0200ea84
    ldrgt pc, [r2, r0, lsl #2] @ 0200ea88
    b .L_0200e030 @ 0200ea8c
@ z80_dispatch_0200ea90 at 0x0200ea90
    lsl r0, sl, #8 @ 0200ea90
    ldr r1, [pc, #0x3cc] @ 0200ea94
    asrs r0, r0, #0x19 @ 0200ea98
    ldrb r1, [r1, r0] @ 0200ea9c
    bic r5, r5, #0xd7 @ 0200eaa0
    orrhs r5, r5, #1 @ 0200eaa4
    lsl r0, r0, #0x18 @ 0200eaa8
    orr r5, r5, r1 @ 0200eaac
    and sl, sl, #0xff000000 @ 0200eab0
    orr sl, sl, r0, lsr #8 @ 0200eab4
    ldrb r0, [fp], #1 @ 0200eab8
    subs r5, r5, #0x80000 @ 0200eabc
    ldrgt pc, [r2, r0, lsl #2] @ 0200eac0
    b .L_0200e030 @ 0200eac4
@ z80_dispatch_0200eac8 at 0x0200eac8
    cmp sl, #0x20000000 @ 0200eac8
    .word 0x2bbfd086 @ 0200eacc blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200ead0
    ldr r1, [pc, #0x38c] @ 0200ead4
    lsl r0, r0, #0x18 @ 0200ead8
    asrs r0, r0, #0x19 @ 0200eadc
    and r0, r0, #0xff @ 0200eae0
    ldrb r1, [r1, r0] @ 0200eae4
    bic r5, r5, #0xd7 @ 0200eae8
    orrhs r5, r5, #1 @ 0200eaec
    orr r5, r5, r1 @ 0200eaf0
    mov r1, r0 @ 0200eaf4
    cmp sl, #0x20000000 @ 0200eaf8
    .word 0x2bbfd08a @ 0200eafc blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200eb00
    ldrb r0, [fp], #1 @ 0200eb04
    subs r5, r5, #0xf0000 @ 0200eb08
    ldrgt pc, [r2, r0, lsl #2] @ 0200eb0c
    b .L_0200e030 @ 0200eb10
@ z80_dispatch_0200eb14 at 0x0200eb14
    ldr r1, [pc, #0x34c] @ 0200eb14
    asrs r4, r4, #0x19 @ 0200eb18
    ldrb r1, [r1, r4] @ 0200eb1c
    bic r5, r5, #0xd7 @ 0200eb20
    orrhs r5, r5, #1 @ 0200eb24
    lsl r4, r4, #0x18 @ 0200eb28
    orr r5, r5, r1 @ 0200eb2c
    ldrb r0, [fp], #1 @ 0200eb30
    subs r5, r5, #0x80000 @ 0200eb34
    ldrgt pc, [r2, r0, lsl #2] @ 0200eb38
    b .L_0200e030 @ 0200eb3c
@ z80_dispatch_0200eb40 at 0x0200eb40
    ldr r1, [pc, #0x320] @ 0200eb40
    lsls r6, r6, #1 @ 0200eb44
    orr r6, r6, #0x1000000 @ 0200eb48
    ldrb r1, [r1, r6, lsr #24] @ 0200eb4c
    bic r5, r5, #0xd7 @ 0200eb50
    orrhs r5, r5, #1 @ 0200eb54
    orr r5, r5, r1 @ 0200eb58
    ldrb r0, [fp], #1 @ 0200eb5c
    subs r5, r5, #0x80000 @ 0200eb60
    ldrgt pc, [r2, r0, lsl #2] @ 0200eb64
    b .L_0200e030 @ 0200eb68
@ z80_dispatch_0200eb6c at 0x0200eb6c
    ldr r1, [pc, #0x2f4] @ 0200eb6c
    lsls r7, r7, #1 @ 0200eb70
    orr r7, r7, #0x1000000 @ 0200eb74
    ldrb r1, [r1, r7, lsr #24] @ 0200eb78
    bic r5, r5, #0xd7 @ 0200eb7c
    orrhs r5, r5, #1 @ 0200eb80
    orr r5, r5, r1 @ 0200eb84
    ldrb r0, [fp], #1 @ 0200eb88
    subs r5, r5, #0x80000 @ 0200eb8c
    ldrgt pc, [r2, r0, lsl #2] @ 0200eb90
    b .L_0200e030 @ 0200eb94
@ z80_dispatch_0200eb98 at 0x0200eb98
    ldr r1, [pc, #0x2c8] @ 0200eb98
    lsls r8, r8, #1 @ 0200eb9c
    orr r8, r8, #0x1000000 @ 0200eba0
    ldrb r1, [r1, r8, lsr #24] @ 0200eba4
    bic r5, r5, #0xd7 @ 0200eba8
    orrhs r5, r5, #1 @ 0200ebac
    orr r5, r5, r1 @ 0200ebb0
    ldrb r0, [fp], #1 @ 0200ebb4
    subs r5, r5, #0x80000 @ 0200ebb8
    ldrgt pc, [r2, r0, lsl #2] @ 0200ebbc
    b .L_0200e030 @ 0200ebc0
@ z80_dispatch_0200ebc4 at 0x0200ebc4
    ldr r1, [pc, #0x29c] @ 0200ebc4
    lsls sb, sb, #1 @ 0200ebc8
    orr sb, sb, #0x1000000 @ 0200ebcc
    ldrb r1, [r1, sb, lsr #24] @ 0200ebd0
    bic r5, r5, #0xd7 @ 0200ebd4
    orrhs r5, r5, #1 @ 0200ebd8
    orr r5, r5, r1 @ 0200ebdc
    ldrb r0, [fp], #1 @ 0200ebe0
    subs r5, r5, #0x80000 @ 0200ebe4
    ldrgt pc, [r2, r0, lsl #2] @ 0200ebe8
    b .L_0200e030 @ 0200ebec
@ z80_dispatch_0200ebf0 at 0x0200ebf0
    and r0, sl, #0xff000000 @ 0200ebf0
    ldr r1, [pc, #0x26c] @ 0200ebf4
    lsls r0, r0, #1 @ 0200ebf8
    orr r0, r0, #0x1000000 @ 0200ebfc
    ldrb r1, [r1, r0, lsr #24] @ 0200ec00
    bic r5, r5, #0xd7 @ 0200ec04
    orrhs r5, r5, #1 @ 0200ec08
    orr r5, r5, r1 @ 0200ec0c
    and sl, sl, #0xff0000 @ 0200ec10
    orr sl, sl, r0 @ 0200ec14
    ldrb r0, [fp], #1 @ 0200ec18
    subs r5, r5, #0x80000 @ 0200ec1c
    ldrgt pc, [r2, r0, lsl #2] @ 0200ec20
    b .L_0200e030 @ 0200ec24
@ z80_dispatch_0200ec28 at 0x0200ec28
    lsl r0, sl, #8 @ 0200ec28
    ldr r1, [pc, #0x234] @ 0200ec2c
    lsls r0, r0, #1 @ 0200ec30
    orr r0, r0, #0x1000000 @ 0200ec34
    ldrb r1, [r1, r0, lsr #24] @ 0200ec38
    bic r5, r5, #0xd7 @ 0200ec3c
    orrhs r5, r5, #1 @ 0200ec40
    orr r5, r5, r1 @ 0200ec44
    and sl, sl, #0xff000000 @ 0200ec48
    orr sl, sl, r0, lsr #8 @ 0200ec4c
    ldrb r0, [fp], #1 @ 0200ec50
    subs r5, r5, #0x80000 @ 0200ec54
    ldrgt pc, [r2, r0, lsl #2] @ 0200ec58
    b .L_0200e030 @ 0200ec5c
@ z80_dispatch_0200ec60 at 0x0200ec60
    cmp sl, #0x20000000 @ 0200ec60
    .word 0x2bbfd020 @ 0200ec64 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200ec68
    ldr r1, [pc, #0x1f4] @ 0200ec6c
    lsls r0, r0, #0x19 @ 0200ec70
    orr r0, r0, #0x1000000 @ 0200ec74
    ldrb r1, [r1, r0, lsr #24] @ 0200ec78
    bic r5, r5, #0xd7 @ 0200ec7c
    orrhs r5, r5, #1 @ 0200ec80
    lsr r0, r0, #0x18 @ 0200ec84
    orr r5, r5, r1 @ 0200ec88
    mov r1, r0 @ 0200ec8c
    cmp sl, #0x20000000 @ 0200ec90
    .word 0x2bbfd024 @ 0200ec94 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200ec98
    ldrb r0, [fp], #1 @ 0200ec9c
    subs r5, r5, #0xf0000 @ 0200eca0
    ldrgt pc, [r2, r0, lsl #2] @ 0200eca4
    b .L_0200e030 @ 0200eca8
@ z80_dispatch_0200ecac at 0x0200ecac
    ldr r1, [pc, #0x1b4] @ 0200ecac
    lsls r4, r4, #1 @ 0200ecb0
    orr r4, r4, #0x1000000 @ 0200ecb4
    ldrb r1, [r1, r4, lsr #24] @ 0200ecb8
    bic r5, r5, #0xd7 @ 0200ecbc
    orrhs r5, r5, #1 @ 0200ecc0
    orr r5, r5, r1 @ 0200ecc4
    ldrb r0, [fp], #1 @ 0200ecc8
    subs r5, r5, #0x80000 @ 0200eccc
    ldrgt pc, [r2, r0, lsl #2] @ 0200ecd0
    b .L_0200e030 @ 0200ecd4
@ z80_dispatch_0200ecd8 at 0x0200ecd8
    ldr r1, [pc, #0x188] @ 0200ecd8
    lsrs r6, r6, #0x19 @ 0200ecdc
    ldrb r1, [r1, r6] @ 0200ece0
    bic r5, r5, #0xd7 @ 0200ece4
    orrhs r5, r5, #1 @ 0200ece8
    lsl r6, r6, #0x18 @ 0200ecec
    orr r5, r5, r1 @ 0200ecf0
    ldrb r0, [fp], #1 @ 0200ecf4
    subs r5, r5, #0x80000 @ 0200ecf8
    ldrgt pc, [r2, r0, lsl #2] @ 0200ecfc
    b .L_0200e030 @ 0200ed00
@ z80_dispatch_0200ed04 at 0x0200ed04
    ldr r1, [pc, #0x15c] @ 0200ed04
    lsrs r7, r7, #0x19 @ 0200ed08
    ldrb r1, [r1, r7] @ 0200ed0c
    bic r5, r5, #0xd7 @ 0200ed10
    orrhs r5, r5, #1 @ 0200ed14
    lsl r7, r7, #0x18 @ 0200ed18
    orr r5, r5, r1 @ 0200ed1c
    ldrb r0, [fp], #1 @ 0200ed20
    subs r5, r5, #0x80000 @ 0200ed24
    ldrgt pc, [r2, r0, lsl #2] @ 0200ed28
    b .L_0200e030 @ 0200ed2c
@ z80_dispatch_0200ed30 at 0x0200ed30
    ldr r1, [pc, #0x130] @ 0200ed30
    lsrs r8, r8, #0x19 @ 0200ed34
    ldrb r1, [r1, r8] @ 0200ed38
    bic r5, r5, #0xd7 @ 0200ed3c
    orrhs r5, r5, #1 @ 0200ed40
    lsl r8, r8, #0x18 @ 0200ed44
    orr r5, r5, r1 @ 0200ed48
    ldrb r0, [fp], #1 @ 0200ed4c
    subs r5, r5, #0x80000 @ 0200ed50
    ldrgt pc, [r2, r0, lsl #2] @ 0200ed54
    b .L_0200e030 @ 0200ed58
@ z80_dispatch_0200ed5c at 0x0200ed5c
    ldr r1, [pc, #0x104] @ 0200ed5c
    lsrs sb, sb, #0x19 @ 0200ed60
    ldrb r1, [r1, sb] @ 0200ed64
    bic r5, r5, #0xd7 @ 0200ed68
    orrhs r5, r5, #1 @ 0200ed6c
    lsl sb, sb, #0x18 @ 0200ed70
    orr r5, r5, r1 @ 0200ed74
    ldrb r0, [fp], #1 @ 0200ed78
    subs r5, r5, #0x80000 @ 0200ed7c
    ldrgt pc, [r2, r0, lsl #2] @ 0200ed80
    b .L_0200e030 @ 0200ed84
@ z80_dispatch_0200ed88 at 0x0200ed88
    and r0, sl, #0xff000000 @ 0200ed88
    ldr r1, [pc, #0xd4] @ 0200ed8c
    lsrs r0, r0, #0x19 @ 0200ed90
    ldrb r1, [r1, r0] @ 0200ed94
    bic r5, r5, #0xd7 @ 0200ed98
    orrhs r5, r5, #1 @ 0200ed9c
    lsl r0, r0, #0x18 @ 0200eda0
    orr r5, r5, r1 @ 0200eda4
    and sl, sl, #0xff0000 @ 0200eda8
    orr sl, sl, r0 @ 0200edac
    ldrb r0, [fp], #1 @ 0200edb0
    subs r5, r5, #0x80000 @ 0200edb4
    ldrgt pc, [r2, r0, lsl #2] @ 0200edb8
    b .L_0200e030 @ 0200edbc
@ z80_dispatch_0200edc0 at 0x0200edc0
    lsl r0, sl, #8 @ 0200edc0
    ldr r1, [pc, #0x9c] @ 0200edc4
    lsrs r0, r0, #0x19 @ 0200edc8
    ldrb r1, [r1, r0] @ 0200edcc
    bic r5, r5, #0xd7 @ 0200edd0
    orrhs r5, r5, #1 @ 0200edd4
    lsl r0, r0, #0x18 @ 0200edd8
    orr r5, r5, r1 @ 0200eddc
    and sl, sl, #0xff000000 @ 0200ede0
    orr sl, sl, r0, lsr #8 @ 0200ede4
    ldrb r0, [fp], #1 @ 0200ede8
    subs r5, r5, #0x80000 @ 0200edec
    ldrgt pc, [r2, r0, lsl #2] @ 0200edf0
    b .L_0200e030 @ 0200edf4
@ z80_dispatch_0200edf8 at 0x0200edf8
    cmp sl, #0x20000000 @ 0200edf8
    .word 0x2bbfcfba @ 0200edfc blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200ee00
    ldr r1, [pc, #0x5c] @ 0200ee04
    lsrs r0, r0, #1 @ 0200ee08
    ldrb r1, [r1, r0] @ 0200ee0c
    bic r5, r5, #0xd7 @ 0200ee10
    orrhs r5, r5, #1 @ 0200ee14
    orr r5, r5, r1 @ 0200ee18
    mov r1, r0 @ 0200ee1c
    cmp sl, #0x20000000 @ 0200ee20
    .word 0x2bbfcfc0 @ 0200ee24 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200ee28
    ldrb r0, [fp], #1 @ 0200ee2c
    subs r5, r5, #0xf0000 @ 0200ee30
    ldrgt pc, [r2, r0, lsl #2] @ 0200ee34
    b .L_0200e030 @ 0200ee38
@ z80_dispatch_0200ee3c at 0x0200ee3c
    ldr r1, [pc, #0x24] @ 0200ee3c
    lsrs r4, r4, #0x19 @ 0200ee40
    ldrb r1, [r1, r4] @ 0200ee44
    bic r5, r5, #0xd7 @ 0200ee48
    orrhs r5, r5, #1 @ 0200ee4c
    lsl r4, r4, #0x18 @ 0200ee50
    orr r5, r5, r1 @ 0200ee54
    ldrb r0, [fp], #1 @ 0200ee58
    subs r5, r5, #0x80000 @ 0200ee5c
    ldrgt pc, [r2, r0, lsl #2] @ 0200ee60
    b .L_0200e030 @ 0200ee64
    .byte 0x20, 0xde, 0x00, 0x02 @ 0200ee68
@ z80_dispatch_0200ee6c at 0x0200ee6c
    bic r5, r5, #0xd6 @ 0200ee6c
    ands r1, r6, #0x1000000 @ 0200ee70
    orreq r5, r5, #0x44 @ 0200ee74
    orrmi r5, r5, #0x80 @ 0200ee78
    ldrb r0, [fp], #1 @ 0200ee7c
    subs r5, r5, #0x80000 @ 0200ee80
    ldrgt pc, [r2, r0, lsl #2] @ 0200ee84
    b .L_0200e030 @ 0200ee88
@ z80_dispatch_0200ee8c at 0x0200ee8c
    bic r5, r5, #0xd6 @ 0200ee8c
    ands r1, r7, #0x1000000 @ 0200ee90
    orreq r5, r5, #0x44 @ 0200ee94
    orrmi r5, r5, #0x80 @ 0200ee98
    ldrb r0, [fp], #1 @ 0200ee9c
    subs r5, r5, #0x80000 @ 0200eea0
    ldrgt pc, [r2, r0, lsl #2] @ 0200eea4
    b .L_0200e030 @ 0200eea8
@ z80_dispatch_0200eeac at 0x0200eeac
    bic r5, r5, #0xd6 @ 0200eeac
    ands r1, r8, #0x1000000 @ 0200eeb0
    orreq r5, r5, #0x44 @ 0200eeb4
    orrmi r5, r5, #0x80 @ 0200eeb8
    ldrb r0, [fp], #1 @ 0200eebc
    subs r5, r5, #0x80000 @ 0200eec0
    ldrgt pc, [r2, r0, lsl #2] @ 0200eec4
    b .L_0200e030 @ 0200eec8
@ z80_dispatch_0200eecc at 0x0200eecc
    bic r5, r5, #0xd6 @ 0200eecc
    ands r1, sb, #0x1000000 @ 0200eed0
    orreq r5, r5, #0x44 @ 0200eed4
    orrmi r5, r5, #0x80 @ 0200eed8
    ldrb r0, [fp], #1 @ 0200eedc
    subs r5, r5, #0x80000 @ 0200eee0
    ldrgt pc, [r2, r0, lsl #2] @ 0200eee4
    b .L_0200e030 @ 0200eee8
@ z80_dispatch_0200eeec at 0x0200eeec
    and r0, sl, #0xff000000 @ 0200eeec
    bic r5, r5, #0xd6 @ 0200eef0
    ands r1, r0, #0x1000000 @ 0200eef4
    orreq r5, r5, #0x44 @ 0200eef8
    orrmi r5, r5, #0x80 @ 0200eefc
    ldrb r0, [fp], #1 @ 0200ef00
    subs r5, r5, #0x80000 @ 0200ef04
    ldrgt pc, [r2, r0, lsl #2] @ 0200ef08
    b .L_0200e030 @ 0200ef0c
@ z80_dispatch_0200ef10 at 0x0200ef10
    lsl r0, sl, #8 @ 0200ef10
    bic r5, r5, #0xd6 @ 0200ef14
    ands r1, r0, #0x1000000 @ 0200ef18
    orreq r5, r5, #0x44 @ 0200ef1c
    orrmi r5, r5, #0x80 @ 0200ef20
    ldrb r0, [fp], #1 @ 0200ef24
    subs r5, r5, #0x80000 @ 0200ef28
    ldrgt pc, [r2, r0, lsl #2] @ 0200ef2c
    b .L_0200e030 @ 0200ef30
    .zero 12
@ z80_dispatch_0200ef40 at 0x0200ef40
    bic r5, r5, #0xd6 @ 0200ef40
    ands r1, r6, #0x2000000 @ 0200ef44
    orreq r5, r5, #0x44 @ 0200ef48
    orrmi r5, r5, #0x80 @ 0200ef4c
    ldrb r0, [fp], #1 @ 0200ef50
    subs r5, r5, #0x80000 @ 0200ef54
    ldrgt pc, [r2, r0, lsl #2] @ 0200ef58
    b .L_0200e030 @ 0200ef5c
@ z80_dispatch_0200ef60 at 0x0200ef60
    bic r5, r5, #0xd6 @ 0200ef60
    ands r1, r7, #0x2000000 @ 0200ef64
    orreq r5, r5, #0x44 @ 0200ef68
    orrmi r5, r5, #0x80 @ 0200ef6c
    ldrb r0, [fp], #1 @ 0200ef70
    subs r5, r5, #0x80000 @ 0200ef74
    ldrgt pc, [r2, r0, lsl #2] @ 0200ef78
    b .L_0200e030 @ 0200ef7c
@ z80_dispatch_0200ef80 at 0x0200ef80
    bic r5, r5, #0xd6 @ 0200ef80
    ands r1, r8, #0x2000000 @ 0200ef84
    orreq r5, r5, #0x44 @ 0200ef88
    orrmi r5, r5, #0x80 @ 0200ef8c
    ldrb r0, [fp], #1 @ 0200ef90
    subs r5, r5, #0x80000 @ 0200ef94
    ldrgt pc, [r2, r0, lsl #2] @ 0200ef98
    b .L_0200e030 @ 0200ef9c
@ z80_dispatch_0200efa0 at 0x0200efa0
    bic r5, r5, #0xd6 @ 0200efa0
    ands r1, sb, #0x2000000 @ 0200efa4
    orreq r5, r5, #0x44 @ 0200efa8
    orrmi r5, r5, #0x80 @ 0200efac
    ldrb r0, [fp], #1 @ 0200efb0
    subs r5, r5, #0x80000 @ 0200efb4
    ldrgt pc, [r2, r0, lsl #2] @ 0200efb8
    b .L_0200e030 @ 0200efbc
@ z80_dispatch_0200efc0 at 0x0200efc0
    and r0, sl, #0xff000000 @ 0200efc0
    bic r5, r5, #0xd6 @ 0200efc4
    ands r1, r0, #0x2000000 @ 0200efc8
    orreq r5, r5, #0x44 @ 0200efcc
    orrmi r5, r5, #0x80 @ 0200efd0
    ldrb r0, [fp], #1 @ 0200efd4
    subs r5, r5, #0x80000 @ 0200efd8
    ldrgt pc, [r2, r0, lsl #2] @ 0200efdc
    b .L_0200e030 @ 0200efe0
@ z80_dispatch_0200efe4 at 0x0200efe4
    lsl r0, sl, #8 @ 0200efe4
    bic r5, r5, #0xd6 @ 0200efe8
    ands r1, r0, #0x2000000 @ 0200efec
    orreq r5, r5, #0x44 @ 0200eff0
    orrmi r5, r5, #0x80 @ 0200eff4
    ldrb r0, [fp], #1 @ 0200eff8
    subs r5, r5, #0x80000 @ 0200effc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f000
    b .L_0200e030 @ 0200f004
    .zero 8
@ z80_dispatch_0200f010 at 0x0200f010
    bic r5, r5, #0xd6 @ 0200f010
    ands r1, r6, #0x4000000 @ 0200f014
    orreq r5, r5, #0x44 @ 0200f018
    orrmi r5, r5, #0x80 @ 0200f01c
    ldrb r0, [fp], #1 @ 0200f020
    subs r5, r5, #0x80000 @ 0200f024
    ldrgt pc, [r2, r0, lsl #2] @ 0200f028
    b .L_0200e030 @ 0200f02c
@ z80_dispatch_0200f030 at 0x0200f030
    bic r5, r5, #0xd6 @ 0200f030
    ands r1, r7, #0x4000000 @ 0200f034
    orreq r5, r5, #0x44 @ 0200f038
    orrmi r5, r5, #0x80 @ 0200f03c
    ldrb r0, [fp], #1 @ 0200f040
    subs r5, r5, #0x80000 @ 0200f044
    ldrgt pc, [r2, r0, lsl #2] @ 0200f048
    b .L_0200e030 @ 0200f04c
@ z80_dispatch_0200f050 at 0x0200f050
    bic r5, r5, #0xd6 @ 0200f050
    ands r1, r8, #0x4000000 @ 0200f054
    orreq r5, r5, #0x44 @ 0200f058
    orrmi r5, r5, #0x80 @ 0200f05c
    ldrb r0, [fp], #1 @ 0200f060
    subs r5, r5, #0x80000 @ 0200f064
    ldrgt pc, [r2, r0, lsl #2] @ 0200f068
    b .L_0200e030 @ 0200f06c
@ z80_dispatch_0200f070 at 0x0200f070
    bic r5, r5, #0xd6 @ 0200f070
    ands r1, sb, #0x4000000 @ 0200f074
    orreq r5, r5, #0x44 @ 0200f078
    orrmi r5, r5, #0x80 @ 0200f07c
    ldrb r0, [fp], #1 @ 0200f080
    subs r5, r5, #0x80000 @ 0200f084
    ldrgt pc, [r2, r0, lsl #2] @ 0200f088
    b .L_0200e030 @ 0200f08c
@ z80_dispatch_0200f090 at 0x0200f090
    and r0, sl, #0xff000000 @ 0200f090
    bic r5, r5, #0xd6 @ 0200f094
    ands r1, r0, #0x4000000 @ 0200f098
    orreq r5, r5, #0x44 @ 0200f09c
    orrmi r5, r5, #0x80 @ 0200f0a0
    ldrb r0, [fp], #1 @ 0200f0a4
    subs r5, r5, #0x80000 @ 0200f0a8
    ldrgt pc, [r2, r0, lsl #2] @ 0200f0ac
    b .L_0200e030 @ 0200f0b0
@ z80_dispatch_0200f0b4 at 0x0200f0b4
    lsl r0, sl, #8 @ 0200f0b4
    bic r5, r5, #0xd6 @ 0200f0b8
    ands r1, r0, #0x4000000 @ 0200f0bc
    orreq r5, r5, #0x44 @ 0200f0c0
    orrmi r5, r5, #0x80 @ 0200f0c4
    ldrb r0, [fp], #1 @ 0200f0c8
    subs r5, r5, #0x80000 @ 0200f0cc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f0d0
    b .L_0200e030 @ 0200f0d4
@ z80_dispatch_0200f0d8 at 0x0200f0d8
    cmp sl, #0x20000000 @ 0200f0d8
    .word 0x2bbfcf02 @ 0200f0dc blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f0e0
    bic r5, r5, #0xd6 @ 0200f0e4
    lsl r1, r0, #0x18 @ 0200f0e8
    ands r1, r1, #0x4000000 @ 0200f0ec
    orreq r5, r5, #0x44 @ 0200f0f0
    orrmi r5, r5, #0x80 @ 0200f0f4
    ldrb r0, [fp], #1 @ 0200f0f8
    subs r5, r5, #0xc0000 @ 0200f0fc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f100
    b .L_0200e030 @ 0200f104
@ z80_dispatch_0200f108 at 0x0200f108
    bic r5, r5, #0xd6 @ 0200f108
    ands r1, r4, #0x4000000 @ 0200f10c
    orreq r5, r5, #0x44 @ 0200f110
    orrmi r5, r5, #0x80 @ 0200f114
    ldrb r0, [fp], #1 @ 0200f118
    subs r5, r5, #0x80000 @ 0200f11c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f120
    b .L_0200e030 @ 0200f124
@ z80_dispatch_0200f128 at 0x0200f128
    bic r5, r5, #0xd6 @ 0200f128
    ands r1, r6, #0x8000000 @ 0200f12c
    orreq r5, r5, #0x44 @ 0200f130
    orrmi r5, r5, #0x80 @ 0200f134
    ldrb r0, [fp], #1 @ 0200f138
    subs r5, r5, #0x80000 @ 0200f13c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f140
    b .L_0200e030 @ 0200f144
@ z80_dispatch_0200f148 at 0x0200f148
    bic r5, r5, #0xd6 @ 0200f148
    ands r1, r7, #0x8000000 @ 0200f14c
    orreq r5, r5, #0x44 @ 0200f150
    orrmi r5, r5, #0x80 @ 0200f154
    ldrb r0, [fp], #1 @ 0200f158
    subs r5, r5, #0x80000 @ 0200f15c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f160
    b .L_0200e030 @ 0200f164
@ z80_dispatch_0200f168 at 0x0200f168
    bic r5, r5, #0xd6 @ 0200f168
    ands r1, r8, #0x8000000 @ 0200f16c
    orreq r5, r5, #0x44 @ 0200f170
    orrmi r5, r5, #0x80 @ 0200f174
    ldrb r0, [fp], #1 @ 0200f178
    subs r5, r5, #0x80000 @ 0200f17c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f180
    b .L_0200e030 @ 0200f184
@ z80_dispatch_0200f188 at 0x0200f188
    bic r5, r5, #0xd6 @ 0200f188
    ands r1, sb, #0x8000000 @ 0200f18c
    orreq r5, r5, #0x44 @ 0200f190
    orrmi r5, r5, #0x80 @ 0200f194
    ldrb r0, [fp], #1 @ 0200f198
    subs r5, r5, #0x80000 @ 0200f19c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f1a0
    b .L_0200e030 @ 0200f1a4
@ z80_dispatch_0200f1a8 at 0x0200f1a8
    and r0, sl, #0xff000000 @ 0200f1a8
    bic r5, r5, #0xd6 @ 0200f1ac
    ands r1, r0, #0x8000000 @ 0200f1b0
    orreq r5, r5, #0x44 @ 0200f1b4
    orrmi r5, r5, #0x80 @ 0200f1b8
    ldrb r0, [fp], #1 @ 0200f1bc
    subs r5, r5, #0x80000 @ 0200f1c0
    ldrgt pc, [r2, r0, lsl #2] @ 0200f1c4
    b .L_0200e030 @ 0200f1c8
@ z80_dispatch_0200f1cc at 0x0200f1cc
    lsl r0, sl, #8 @ 0200f1cc
    bic r5, r5, #0xd6 @ 0200f1d0
    ands r1, r0, #0x8000000 @ 0200f1d4
    orreq r5, r5, #0x44 @ 0200f1d8
    orrmi r5, r5, #0x80 @ 0200f1dc
    ldrb r0, [fp], #1 @ 0200f1e0
    subs r5, r5, #0x80000 @ 0200f1e4
    ldrgt pc, [r2, r0, lsl #2] @ 0200f1e8
    b .L_0200e030 @ 0200f1ec
@ z80_dispatch_0200f1f0 at 0x0200f1f0
    cmp sl, #0x20000000 @ 0200f1f0
    .word 0x2bbfcebc @ 0200f1f4 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f1f8
    bic r5, r5, #0xd6 @ 0200f1fc
    lsl r1, r0, #0x18 @ 0200f200
    ands r1, r1, #0x8000000 @ 0200f204
    orreq r5, r5, #0x44 @ 0200f208
    orrmi r5, r5, #0x80 @ 0200f20c
    ldrb r0, [fp], #1 @ 0200f210
    subs r5, r5, #0xc0000 @ 0200f214
    ldrgt pc, [r2, r0, lsl #2] @ 0200f218
    b .L_0200e030 @ 0200f21c
@ z80_dispatch_0200f220 at 0x0200f220
    bic r5, r5, #0xd6 @ 0200f220
    ands r1, r4, #0x8000000 @ 0200f224
    orreq r5, r5, #0x44 @ 0200f228
    orrmi r5, r5, #0x80 @ 0200f22c
    ldrb r0, [fp], #1 @ 0200f230
    subs r5, r5, #0x80000 @ 0200f234
    ldrgt pc, [r2, r0, lsl #2] @ 0200f238
    b .L_0200e030 @ 0200f23c
@ z80_dispatch_0200f240 at 0x0200f240
    bic r5, r5, #0xd6 @ 0200f240
    ands r1, r6, #0x10000000 @ 0200f244
    orreq r5, r5, #0x44 @ 0200f248
    orrmi r5, r5, #0x80 @ 0200f24c
    ldrb r0, [fp], #1 @ 0200f250
    subs r5, r5, #0x80000 @ 0200f254
    ldrgt pc, [r2, r0, lsl #2] @ 0200f258
    b .L_0200e030 @ 0200f25c
@ z80_dispatch_0200f260 at 0x0200f260
    bic r5, r5, #0xd6 @ 0200f260
    ands r1, r7, #0x10000000 @ 0200f264
    orreq r5, r5, #0x44 @ 0200f268
    orrmi r5, r5, #0x80 @ 0200f26c
    ldrb r0, [fp], #1 @ 0200f270
    subs r5, r5, #0x80000 @ 0200f274
    ldrgt pc, [r2, r0, lsl #2] @ 0200f278
    b .L_0200e030 @ 0200f27c
@ z80_dispatch_0200f280 at 0x0200f280
    bic r5, r5, #0xd6 @ 0200f280
    ands r1, r8, #0x10000000 @ 0200f284
    orreq r5, r5, #0x44 @ 0200f288
    orrmi r5, r5, #0x80 @ 0200f28c
    ldrb r0, [fp], #1 @ 0200f290
    subs r5, r5, #0x80000 @ 0200f294
    ldrgt pc, [r2, r0, lsl #2] @ 0200f298
    b .L_0200e030 @ 0200f29c
@ z80_dispatch_0200f2a0 at 0x0200f2a0
    bic r5, r5, #0xd6 @ 0200f2a0
    ands r1, sb, #0x10000000 @ 0200f2a4
    orreq r5, r5, #0x44 @ 0200f2a8
    orrmi r5, r5, #0x80 @ 0200f2ac
    ldrb r0, [fp], #1 @ 0200f2b0
    subs r5, r5, #0x80000 @ 0200f2b4
    ldrgt pc, [r2, r0, lsl #2] @ 0200f2b8
    b .L_0200e030 @ 0200f2bc
@ z80_dispatch_0200f2c0 at 0x0200f2c0
    and r0, sl, #0xff000000 @ 0200f2c0
    bic r5, r5, #0xd6 @ 0200f2c4
    ands r1, r0, #0x10000000 @ 0200f2c8
    orreq r5, r5, #0x44 @ 0200f2cc
    orrmi r5, r5, #0x80 @ 0200f2d0
    ldrb r0, [fp], #1 @ 0200f2d4
    subs r5, r5, #0x80000 @ 0200f2d8
    ldrgt pc, [r2, r0, lsl #2] @ 0200f2dc
    b .L_0200e030 @ 0200f2e0
@ z80_dispatch_0200f2e4 at 0x0200f2e4
    lsl r0, sl, #8 @ 0200f2e4
    bic r5, r5, #0xd6 @ 0200f2e8
    ands r1, r0, #0x10000000 @ 0200f2ec
    orreq r5, r5, #0x44 @ 0200f2f0
    orrmi r5, r5, #0x80 @ 0200f2f4
    ldrb r0, [fp], #1 @ 0200f2f8
    subs r5, r5, #0x80000 @ 0200f2fc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f300
    b .L_0200e030 @ 0200f304
@ z80_dispatch_0200f308 at 0x0200f308
    cmp sl, #0x20000000 @ 0200f308
    .word 0x2bbfce76 @ 0200f30c blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f310
    bic r5, r5, #0xd6 @ 0200f314
    lsl r1, r0, #0x18 @ 0200f318
    ands r1, r1, #0x10000000 @ 0200f31c
    orreq r5, r5, #0x44 @ 0200f320
    orrmi r5, r5, #0x80 @ 0200f324
    ldrb r0, [fp], #1 @ 0200f328
    subs r5, r5, #0xc0000 @ 0200f32c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f330
    b .L_0200e030 @ 0200f334
@ z80_dispatch_0200f338 at 0x0200f338
    bic r5, r5, #0xd6 @ 0200f338
    ands r1, r4, #0x10000000 @ 0200f33c
    orreq r5, r5, #0x44 @ 0200f340
    orrmi r5, r5, #0x80 @ 0200f344
    ldrb r0, [fp], #1 @ 0200f348
    subs r5, r5, #0x80000 @ 0200f34c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f350
    b .L_0200e030 @ 0200f354
@ z80_dispatch_0200f358 at 0x0200f358
    bic r5, r5, #0xd6 @ 0200f358
    ands r1, r6, #0x20000000 @ 0200f35c
    orreq r5, r5, #0x44 @ 0200f360
    orrmi r5, r5, #0x80 @ 0200f364
    ldrb r0, [fp], #1 @ 0200f368
    subs r5, r5, #0x80000 @ 0200f36c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f370
    b .L_0200e030 @ 0200f374
@ z80_dispatch_0200f378 at 0x0200f378
    bic r5, r5, #0xd6 @ 0200f378
    ands r1, r7, #0x20000000 @ 0200f37c
    orreq r5, r5, #0x44 @ 0200f380
    orrmi r5, r5, #0x80 @ 0200f384
    ldrb r0, [fp], #1 @ 0200f388
    subs r5, r5, #0x80000 @ 0200f38c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f390
    b .L_0200e030 @ 0200f394
@ z80_dispatch_0200f398 at 0x0200f398
    bic r5, r5, #0xd6 @ 0200f398
    ands r1, r8, #0x20000000 @ 0200f39c
    orreq r5, r5, #0x44 @ 0200f3a0
    orrmi r5, r5, #0x80 @ 0200f3a4
    ldrb r0, [fp], #1 @ 0200f3a8
    subs r5, r5, #0x80000 @ 0200f3ac
    ldrgt pc, [r2, r0, lsl #2] @ 0200f3b0
    b .L_0200e030 @ 0200f3b4
@ z80_dispatch_0200f3b8 at 0x0200f3b8
    bic r5, r5, #0xd6 @ 0200f3b8
    ands r1, sb, #0x20000000 @ 0200f3bc
    orreq r5, r5, #0x44 @ 0200f3c0
    orrmi r5, r5, #0x80 @ 0200f3c4
    ldrb r0, [fp], #1 @ 0200f3c8
    subs r5, r5, #0x80000 @ 0200f3cc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f3d0
    b .L_0200e030 @ 0200f3d4
@ z80_dispatch_0200f3d8 at 0x0200f3d8
    and r0, sl, #0xff000000 @ 0200f3d8
    bic r5, r5, #0xd6 @ 0200f3dc
    ands r1, r0, #0x20000000 @ 0200f3e0
    orreq r5, r5, #0x44 @ 0200f3e4
    orrmi r5, r5, #0x80 @ 0200f3e8
    ldrb r0, [fp], #1 @ 0200f3ec
    subs r5, r5, #0x80000 @ 0200f3f0
    ldrgt pc, [r2, r0, lsl #2] @ 0200f3f4
    b .L_0200e030 @ 0200f3f8
@ z80_dispatch_0200f3fc at 0x0200f3fc
    lsl r0, sl, #8 @ 0200f3fc
    bic r5, r5, #0xd6 @ 0200f400
    ands r1, r0, #0x20000000 @ 0200f404
    orreq r5, r5, #0x44 @ 0200f408
    orrmi r5, r5, #0x80 @ 0200f40c
    ldrb r0, [fp], #1 @ 0200f410
    subs r5, r5, #0x80000 @ 0200f414
    ldrgt pc, [r2, r0, lsl #2] @ 0200f418
    b .L_0200e030 @ 0200f41c
@ z80_dispatch_0200f420 at 0x0200f420
    cmp sl, #0x20000000 @ 0200f420
    .word 0x2bbfce30 @ 0200f424 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f428
    bic r5, r5, #0xd6 @ 0200f42c
    lsl r1, r0, #0x18 @ 0200f430
    ands r1, r1, #0x20000000 @ 0200f434
    orreq r5, r5, #0x44 @ 0200f438
    orrmi r5, r5, #0x80 @ 0200f43c
    ldrb r0, [fp], #1 @ 0200f440
    subs r5, r5, #0xc0000 @ 0200f444
    ldrgt pc, [r2, r0, lsl #2] @ 0200f448
    b .L_0200e030 @ 0200f44c
@ z80_dispatch_0200f450 at 0x0200f450
    bic r5, r5, #0xd6 @ 0200f450
    ands r1, r4, #0x20000000 @ 0200f454
    orreq r5, r5, #0x44 @ 0200f458
    orrmi r5, r5, #0x80 @ 0200f45c
    ldrb r0, [fp], #1 @ 0200f460
    subs r5, r5, #0x80000 @ 0200f464
    ldrgt pc, [r2, r0, lsl #2] @ 0200f468
    b .L_0200e030 @ 0200f46c
@ z80_dispatch_0200f470 at 0x0200f470
    bic r5, r5, #0xd6 @ 0200f470
    ands r1, r6, #0x40000000 @ 0200f474
    orreq r5, r5, #0x44 @ 0200f478
    orrmi r5, r5, #0x80 @ 0200f47c
    ldrb r0, [fp], #1 @ 0200f480
    subs r5, r5, #0x80000 @ 0200f484
    ldrgt pc, [r2, r0, lsl #2] @ 0200f488
    b .L_0200e030 @ 0200f48c
@ z80_dispatch_0200f490 at 0x0200f490
    bic r5, r5, #0xd6 @ 0200f490
    ands r1, r7, #0x40000000 @ 0200f494
    orreq r5, r5, #0x44 @ 0200f498
    orrmi r5, r5, #0x80 @ 0200f49c
    ldrb r0, [fp], #1 @ 0200f4a0
    subs r5, r5, #0x80000 @ 0200f4a4
    ldrgt pc, [r2, r0, lsl #2] @ 0200f4a8
    b .L_0200e030 @ 0200f4ac
@ z80_dispatch_0200f4b0 at 0x0200f4b0
    bic r5, r5, #0xd6 @ 0200f4b0
    ands r1, r8, #0x40000000 @ 0200f4b4
    orreq r5, r5, #0x44 @ 0200f4b8
    orrmi r5, r5, #0x80 @ 0200f4bc
    ldrb r0, [fp], #1 @ 0200f4c0
    subs r5, r5, #0x80000 @ 0200f4c4
    ldrgt pc, [r2, r0, lsl #2] @ 0200f4c8
    b .L_0200e030 @ 0200f4cc
@ z80_dispatch_0200f4d0 at 0x0200f4d0
    bic r5, r5, #0xd6 @ 0200f4d0
    ands r1, sb, #0x40000000 @ 0200f4d4
    orreq r5, r5, #0x44 @ 0200f4d8
    orrmi r5, r5, #0x80 @ 0200f4dc
    ldrb r0, [fp], #1 @ 0200f4e0
    subs r5, r5, #0x80000 @ 0200f4e4
    ldrgt pc, [r2, r0, lsl #2] @ 0200f4e8
    b .L_0200e030 @ 0200f4ec
@ z80_dispatch_0200f4f0 at 0x0200f4f0
    and r0, sl, #0xff000000 @ 0200f4f0
    bic r5, r5, #0xd6 @ 0200f4f4
    ands r1, r0, #0x40000000 @ 0200f4f8
    orreq r5, r5, #0x44 @ 0200f4fc
    orrmi r5, r5, #0x80 @ 0200f500
    ldrb r0, [fp], #1 @ 0200f504
    subs r5, r5, #0x80000 @ 0200f508
    ldrgt pc, [r2, r0, lsl #2] @ 0200f50c
    b .L_0200e030 @ 0200f510
@ z80_dispatch_0200f514 at 0x0200f514
    lsl r0, sl, #8 @ 0200f514
    bic r5, r5, #0xd6 @ 0200f518
    ands r1, r0, #0x40000000 @ 0200f51c
    orreq r5, r5, #0x44 @ 0200f520
    orrmi r5, r5, #0x80 @ 0200f524
    ldrb r0, [fp], #1 @ 0200f528
    subs r5, r5, #0x80000 @ 0200f52c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f530
    b .L_0200e030 @ 0200f534
@ z80_dispatch_0200f538 at 0x0200f538
    cmp sl, #0x20000000 @ 0200f538
    .word 0x2bbfcdea @ 0200f53c blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f540
    bic r5, r5, #0xd6 @ 0200f544
    lsl r1, r0, #0x18 @ 0200f548
    ands r1, r1, #0x40000000 @ 0200f54c
    orreq r5, r5, #0x44 @ 0200f550
    orrmi r5, r5, #0x80 @ 0200f554
    ldrb r0, [fp], #1 @ 0200f558
    subs r5, r5, #0xc0000 @ 0200f55c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f560
    b .L_0200e030 @ 0200f564
@ z80_dispatch_0200f568 at 0x0200f568
    bic r5, r5, #0xd6 @ 0200f568
    ands r1, r4, #0x40000000 @ 0200f56c
    orreq r5, r5, #0x44 @ 0200f570
    orrmi r5, r5, #0x80 @ 0200f574
    ldrb r0, [fp], #1 @ 0200f578
    subs r5, r5, #0x80000 @ 0200f57c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f580
    b .L_0200e030 @ 0200f584
@ z80_dispatch_0200f588 at 0x0200f588
    bic r5, r5, #0xd6 @ 0200f588
    ands r1, r6, #0x80000000 @ 0200f58c
    orreq r5, r5, #0x44 @ 0200f590
    orrmi r5, r5, #0x80 @ 0200f594
    ldrb r0, [fp], #1 @ 0200f598
    subs r5, r5, #0x80000 @ 0200f59c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f5a0
    b .L_0200e030 @ 0200f5a4
@ z80_dispatch_0200f5a8 at 0x0200f5a8
    bic r5, r5, #0xd6 @ 0200f5a8
    ands r1, r7, #0x80000000 @ 0200f5ac
    orreq r5, r5, #0x44 @ 0200f5b0
    orrmi r5, r5, #0x80 @ 0200f5b4
    ldrb r0, [fp], #1 @ 0200f5b8
    subs r5, r5, #0x80000 @ 0200f5bc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f5c0
    b .L_0200e030 @ 0200f5c4
@ z80_dispatch_0200f5c8 at 0x0200f5c8
    bic r5, r5, #0xd6 @ 0200f5c8
    ands r1, r8, #0x80000000 @ 0200f5cc
    orreq r5, r5, #0x44 @ 0200f5d0
    orrmi r5, r5, #0x80 @ 0200f5d4
    ldrb r0, [fp], #1 @ 0200f5d8
    subs r5, r5, #0x80000 @ 0200f5dc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f5e0
    b .L_0200e030 @ 0200f5e4
@ z80_dispatch_0200f5e8 at 0x0200f5e8
    bic r5, r5, #0xd6 @ 0200f5e8
    ands r1, sb, #0x80000000 @ 0200f5ec
    orreq r5, r5, #0x44 @ 0200f5f0
    orrmi r5, r5, #0x80 @ 0200f5f4
    ldrb r0, [fp], #1 @ 0200f5f8
    subs r5, r5, #0x80000 @ 0200f5fc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f600
    b .L_0200e030 @ 0200f604
@ z80_dispatch_0200f608 at 0x0200f608
    and r0, sl, #0xff000000 @ 0200f608
    bic r5, r5, #0xd6 @ 0200f60c
    ands r1, r0, #0x80000000 @ 0200f610
    orreq r5, r5, #0x44 @ 0200f614
    orrmi r5, r5, #0x80 @ 0200f618
    ldrb r0, [fp], #1 @ 0200f61c
    subs r5, r5, #0x80000 @ 0200f620
    ldrgt pc, [r2, r0, lsl #2] @ 0200f624
    b .L_0200e030 @ 0200f628
@ z80_dispatch_0200f62c at 0x0200f62c
    lsl r0, sl, #8 @ 0200f62c
    bic r5, r5, #0xd6 @ 0200f630
    ands r1, r0, #0x80000000 @ 0200f634
    orreq r5, r5, #0x44 @ 0200f638
    orrmi r5, r5, #0x80 @ 0200f63c
    ldrb r0, [fp], #1 @ 0200f640
    subs r5, r5, #0x80000 @ 0200f644
    ldrgt pc, [r2, r0, lsl #2] @ 0200f648
    b .L_0200e030 @ 0200f64c
@ z80_dispatch_0200f650 at 0x0200f650
    cmp sl, #0x20000000 @ 0200f650
    .word 0x2bbfcda4 @ 0200f654 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f658
    bic r5, r5, #0xd6 @ 0200f65c
    lsl r1, r0, #0x18 @ 0200f660
    ands r1, r1, #0x80000000 @ 0200f664
    orreq r5, r5, #0x44 @ 0200f668
    orrmi r5, r5, #0x80 @ 0200f66c
    ldrb r0, [fp], #1 @ 0200f670
    subs r5, r5, #0xc0000 @ 0200f674
    ldrgt pc, [r2, r0, lsl #2] @ 0200f678
    b .L_0200e030 @ 0200f67c
@ z80_dispatch_0200f680 at 0x0200f680
    bic r5, r5, #0xd6 @ 0200f680
    ands r1, r4, #0x80000000 @ 0200f684
    orreq r5, r5, #0x44 @ 0200f688
    orrmi r5, r5, #0x80 @ 0200f68c
    ldrb r0, [fp], #1 @ 0200f690
    subs r5, r5, #0x80000 @ 0200f694
    ldrgt pc, [r2, r0, lsl #2] @ 0200f698
    b .L_0200e030 @ 0200f69c
@ z80_dispatch_0200f6a0 at 0x0200f6a0
    bic r6, r6, #0x1000000 @ 0200f6a0
    ldrb r0, [fp], #1 @ 0200f6a4
    subs r5, r5, #0x80000 @ 0200f6a8
    ldrgt pc, [r2, r0, lsl #2] @ 0200f6ac
    b .L_0200e030 @ 0200f6b0
@ z80_dispatch_0200f6b4 at 0x0200f6b4
    bic r7, r7, #0x1000000 @ 0200f6b4
    ldrb r0, [fp], #1 @ 0200f6b8
    subs r5, r5, #0x80000 @ 0200f6bc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f6c0
    b .L_0200e030 @ 0200f6c4
@ z80_dispatch_0200f6c8 at 0x0200f6c8
    bic r8, r8, #0x1000000 @ 0200f6c8
    ldrb r0, [fp], #1 @ 0200f6cc
    subs r5, r5, #0x80000 @ 0200f6d0
    ldrgt pc, [r2, r0, lsl #2] @ 0200f6d4
    b .L_0200e030 @ 0200f6d8
@ z80_dispatch_0200f6dc at 0x0200f6dc
    bic sb, sb, #0x1000000 @ 0200f6dc
    ldrb r0, [fp], #1 @ 0200f6e0
    subs r5, r5, #0x80000 @ 0200f6e4
    ldrgt pc, [r2, r0, lsl #2] @ 0200f6e8
    b .L_0200e030 @ 0200f6ec
@ z80_dispatch_0200f6f0 at 0x0200f6f0
    bic sl, sl, #0x1000000 @ 0200f6f0
    ldrb r0, [fp], #1 @ 0200f6f4
    subs r5, r5, #0x80000 @ 0200f6f8
    ldrgt pc, [r2, r0, lsl #2] @ 0200f6fc
    b .L_0200e030 @ 0200f700
@ z80_dispatch_0200f704 at 0x0200f704
    bic sl, sl, #0x10000 @ 0200f704
    ldrb r0, [fp], #1 @ 0200f708
    subs r5, r5, #0x80000 @ 0200f70c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f710
    b .L_0200e030 @ 0200f714
@ z80_dispatch_0200f718 at 0x0200f718
    cmp sl, #0x20000000 @ 0200f718
    .word 0x2bbfcd72 @ 0200f71c blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f720
    bic r0, r0, #1 @ 0200f724
    mov r1, r0 @ 0200f728
    cmp sl, #0x20000000 @ 0200f72c
    .word 0x2bbfcd7d @ 0200f730 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200f734
    ldrb r0, [fp], #1 @ 0200f738
    subs r5, r5, #0xf0000 @ 0200f73c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f740
    b .L_0200e030 @ 0200f744
@ z80_dispatch_0200f748 at 0x0200f748
    bic r4, r4, #0x1000000 @ 0200f748
    ldrb r0, [fp], #1 @ 0200f74c
    subs r5, r5, #0x80000 @ 0200f750
    ldrgt pc, [r2, r0, lsl #2] @ 0200f754
    b .L_0200e030 @ 0200f758
@ z80_dispatch_0200f75c at 0x0200f75c
    bic r6, r6, #0x2000000 @ 0200f75c
    ldrb r0, [fp], #1 @ 0200f760
    subs r5, r5, #0x80000 @ 0200f764
    ldrgt pc, [r2, r0, lsl #2] @ 0200f768
    b .L_0200e030 @ 0200f76c
@ z80_dispatch_0200f770 at 0x0200f770
    bic r7, r7, #0x2000000 @ 0200f770
    ldrb r0, [fp], #1 @ 0200f774
    subs r5, r5, #0x80000 @ 0200f778
    ldrgt pc, [r2, r0, lsl #2] @ 0200f77c
    b .L_0200e030 @ 0200f780
@ z80_dispatch_0200f784 at 0x0200f784
    bic r8, r8, #0x2000000 @ 0200f784
    ldrb r0, [fp], #1 @ 0200f788
    subs r5, r5, #0x80000 @ 0200f78c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f790
    b .L_0200e030 @ 0200f794
@ z80_dispatch_0200f798 at 0x0200f798
    bic sb, sb, #0x2000000 @ 0200f798
    ldrb r0, [fp], #1 @ 0200f79c
    subs r5, r5, #0x80000 @ 0200f7a0
    ldrgt pc, [r2, r0, lsl #2] @ 0200f7a4
    b .L_0200e030 @ 0200f7a8
@ z80_dispatch_0200f7ac at 0x0200f7ac
    bic sl, sl, #0x2000000 @ 0200f7ac
    ldrb r0, [fp], #1 @ 0200f7b0
    subs r5, r5, #0x80000 @ 0200f7b4
    ldrgt pc, [r2, r0, lsl #2] @ 0200f7b8
    b .L_0200e030 @ 0200f7bc
@ z80_dispatch_0200f7c0 at 0x0200f7c0
    bic sl, sl, #0x20000 @ 0200f7c0
    ldrb r0, [fp], #1 @ 0200f7c4
    subs r5, r5, #0x80000 @ 0200f7c8
    ldrgt pc, [r2, r0, lsl #2] @ 0200f7cc
    b .L_0200e030 @ 0200f7d0
@ z80_dispatch_0200f7d4 at 0x0200f7d4
    cmp sl, #0x20000000 @ 0200f7d4
    .word 0x2bbfcd43 @ 0200f7d8 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f7dc
    bic r0, r0, #2 @ 0200f7e0
    mov r1, r0 @ 0200f7e4
    cmp sl, #0x20000000 @ 0200f7e8
    .word 0x2bbfcd4e @ 0200f7ec blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200f7f0
    ldrb r0, [fp], #1 @ 0200f7f4
    subs r5, r5, #0xf0000 @ 0200f7f8
    ldrgt pc, [r2, r0, lsl #2] @ 0200f7fc
    b .L_0200e030 @ 0200f800
@ z80_dispatch_0200f804 at 0x0200f804
    bic r4, r4, #0x2000000 @ 0200f804
    ldrb r0, [fp], #1 @ 0200f808
    subs r5, r5, #0x80000 @ 0200f80c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f810
    b .L_0200e030 @ 0200f814
@ z80_dispatch_0200f818 at 0x0200f818
    bic r6, r6, #0x4000000 @ 0200f818
    ldrb r0, [fp], #1 @ 0200f81c
    subs r5, r5, #0x80000 @ 0200f820
    ldrgt pc, [r2, r0, lsl #2] @ 0200f824
    b .L_0200e030 @ 0200f828
@ z80_dispatch_0200f82c at 0x0200f82c
    bic r7, r7, #0x4000000 @ 0200f82c
    ldrb r0, [fp], #1 @ 0200f830
    subs r5, r5, #0x80000 @ 0200f834
    ldrgt pc, [r2, r0, lsl #2] @ 0200f838
    b .L_0200e030 @ 0200f83c
@ z80_dispatch_0200f840 at 0x0200f840
    bic r8, r8, #0x4000000 @ 0200f840
    ldrb r0, [fp], #1 @ 0200f844
    subs r5, r5, #0x80000 @ 0200f848
    ldrgt pc, [r2, r0, lsl #2] @ 0200f84c
    b .L_0200e030 @ 0200f850
@ z80_dispatch_0200f854 at 0x0200f854
    bic sb, sb, #0x4000000 @ 0200f854
    ldrb r0, [fp], #1 @ 0200f858
    subs r5, r5, #0x80000 @ 0200f85c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f860
    b .L_0200e030 @ 0200f864
@ z80_dispatch_0200f868 at 0x0200f868
    bic sl, sl, #0x4000000 @ 0200f868
    ldrb r0, [fp], #1 @ 0200f86c
    subs r5, r5, #0x80000 @ 0200f870
    ldrgt pc, [r2, r0, lsl #2] @ 0200f874
    b .L_0200e030 @ 0200f878
@ z80_dispatch_0200f87c at 0x0200f87c
    bic sl, sl, #0x40000 @ 0200f87c
    ldrb r0, [fp], #1 @ 0200f880
    subs r5, r5, #0x80000 @ 0200f884
    ldrgt pc, [r2, r0, lsl #2] @ 0200f888
    b .L_0200e030 @ 0200f88c
@ z80_dispatch_0200f890 at 0x0200f890
    cmp sl, #0x20000000 @ 0200f890
    .word 0x2bbfcd14 @ 0200f894 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f898
    bic r0, r0, #4 @ 0200f89c
    mov r1, r0 @ 0200f8a0
    cmp sl, #0x20000000 @ 0200f8a4
    .word 0x2bbfcd1f @ 0200f8a8 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200f8ac
    ldrb r0, [fp], #1 @ 0200f8b0
    subs r5, r5, #0xf0000 @ 0200f8b4
    ldrgt pc, [r2, r0, lsl #2] @ 0200f8b8
    b .L_0200e030 @ 0200f8bc
@ z80_dispatch_0200f8c0 at 0x0200f8c0
    bic r4, r4, #0x4000000 @ 0200f8c0
    ldrb r0, [fp], #1 @ 0200f8c4
    subs r5, r5, #0x80000 @ 0200f8c8
    ldrgt pc, [r2, r0, lsl #2] @ 0200f8cc
    b .L_0200e030 @ 0200f8d0
@ z80_dispatch_0200f8d4 at 0x0200f8d4
    bic r6, r6, #0x8000000 @ 0200f8d4
    ldrb r0, [fp], #1 @ 0200f8d8
    subs r5, r5, #0x80000 @ 0200f8dc
    ldrgt pc, [r2, r0, lsl #2] @ 0200f8e0
    b .L_0200e030 @ 0200f8e4
@ z80_dispatch_0200f8e8 at 0x0200f8e8
    bic r7, r7, #0x8000000 @ 0200f8e8
    ldrb r0, [fp], #1 @ 0200f8ec
    subs r5, r5, #0x80000 @ 0200f8f0
    ldrgt pc, [r2, r0, lsl #2] @ 0200f8f4
    b .L_0200e030 @ 0200f8f8
@ z80_dispatch_0200f8fc at 0x0200f8fc
    bic r8, r8, #0x8000000 @ 0200f8fc
    ldrb r0, [fp], #1 @ 0200f900
    subs r5, r5, #0x80000 @ 0200f904
    ldrgt pc, [r2, r0, lsl #2] @ 0200f908
    b .L_0200e030 @ 0200f90c
@ z80_dispatch_0200f910 at 0x0200f910
    bic sb, sb, #0x8000000 @ 0200f910
    ldrb r0, [fp], #1 @ 0200f914
    subs r5, r5, #0x80000 @ 0200f918
    ldrgt pc, [r2, r0, lsl #2] @ 0200f91c
    b .L_0200e030 @ 0200f920
@ z80_dispatch_0200f924 at 0x0200f924
    bic sl, sl, #0x8000000 @ 0200f924
    ldrb r0, [fp], #1 @ 0200f928
    subs r5, r5, #0x80000 @ 0200f92c
    ldrgt pc, [r2, r0, lsl #2] @ 0200f930
    b .L_0200e030 @ 0200f934
@ z80_dispatch_0200f938 at 0x0200f938
    bic sl, sl, #0x80000 @ 0200f938
    ldrb r0, [fp], #1 @ 0200f93c
    subs r5, r5, #0x80000 @ 0200f940
    ldrgt pc, [r2, r0, lsl #2] @ 0200f944
    b .L_0200e030 @ 0200f948
@ z80_dispatch_0200f94c at 0x0200f94c
    cmp sl, #0x20000000 @ 0200f94c
    .word 0x2bbfcce5 @ 0200f950 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200f954
    bic r0, r0, #8 @ 0200f958
    mov r1, r0 @ 0200f95c
    cmp sl, #0x20000000 @ 0200f960
    .word 0x2bbfccf0 @ 0200f964 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200f968
    ldrb r0, [fp], #1 @ 0200f96c
    subs r5, r5, #0xf0000 @ 0200f970
    ldrgt pc, [r2, r0, lsl #2] @ 0200f974
    b .L_0200e030 @ 0200f978
@ z80_dispatch_0200f97c at 0x0200f97c
    bic r4, r4, #0x8000000 @ 0200f97c
    ldrb r0, [fp], #1 @ 0200f980
    subs r5, r5, #0x80000 @ 0200f984
    ldrgt pc, [r2, r0, lsl #2] @ 0200f988
    b .L_0200e030 @ 0200f98c
@ z80_dispatch_0200f990 at 0x0200f990
    bic r6, r6, #0x10000000 @ 0200f990
    ldrb r0, [fp], #1 @ 0200f994
    subs r5, r5, #0x80000 @ 0200f998
    ldrgt pc, [r2, r0, lsl #2] @ 0200f99c
    b .L_0200e030 @ 0200f9a0
@ z80_dispatch_0200f9a4 at 0x0200f9a4
    bic r7, r7, #0x10000000 @ 0200f9a4
    ldrb r0, [fp], #1 @ 0200f9a8
    subs r5, r5, #0x80000 @ 0200f9ac
    ldrgt pc, [r2, r0, lsl #2] @ 0200f9b0
    b .L_0200e030 @ 0200f9b4
@ z80_dispatch_0200f9b8 at 0x0200f9b8
    bic r8, r8, #0x10000000 @ 0200f9b8
    ldrb r0, [fp], #1 @ 0200f9bc
    subs r5, r5, #0x80000 @ 0200f9c0
    ldrgt pc, [r2, r0, lsl #2] @ 0200f9c4
    b .L_0200e030 @ 0200f9c8
@ z80_dispatch_0200f9cc at 0x0200f9cc
    bic sb, sb, #0x10000000 @ 0200f9cc
    ldrb r0, [fp], #1 @ 0200f9d0
    subs r5, r5, #0x80000 @ 0200f9d4
    ldrgt pc, [r2, r0, lsl #2] @ 0200f9d8
    b .L_0200e030 @ 0200f9dc
@ z80_dispatch_0200f9e0 at 0x0200f9e0
    bic sl, sl, #0x10000000 @ 0200f9e0
    ldrb r0, [fp], #1 @ 0200f9e4
    subs r5, r5, #0x80000 @ 0200f9e8
    ldrgt pc, [r2, r0, lsl #2] @ 0200f9ec
    b .L_0200e030 @ 0200f9f0
@ z80_dispatch_0200f9f4 at 0x0200f9f4
    bic sl, sl, #0x100000 @ 0200f9f4
    ldrb r0, [fp], #1 @ 0200f9f8
    subs r5, r5, #0x80000 @ 0200f9fc
    ldrgt pc, [r2, r0, lsl #2] @ 0200fa00
    b .L_0200e030 @ 0200fa04
@ z80_dispatch_0200fa08 at 0x0200fa08
    cmp sl, #0x20000000 @ 0200fa08
    .word 0x2bbfccb6 @ 0200fa0c blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200fa10
    bic r0, r0, #0x10 @ 0200fa14
    mov r1, r0 @ 0200fa18
    cmp sl, #0x20000000 @ 0200fa1c
    .word 0x2bbfccc1 @ 0200fa20 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200fa24
    ldrb r0, [fp], #1 @ 0200fa28
    subs r5, r5, #0xf0000 @ 0200fa2c
    ldrgt pc, [r2, r0, lsl #2] @ 0200fa30
    b .L_0200e030 @ 0200fa34
@ z80_dispatch_0200fa38 at 0x0200fa38
    bic r4, r4, #0x10000000 @ 0200fa38
    ldrb r0, [fp], #1 @ 0200fa3c
    subs r5, r5, #0x80000 @ 0200fa40
    ldrgt pc, [r2, r0, lsl #2] @ 0200fa44
    b .L_0200e030 @ 0200fa48
@ z80_dispatch_0200fa4c at 0x0200fa4c
    bic r6, r6, #0x20000000 @ 0200fa4c
    ldrb r0, [fp], #1 @ 0200fa50
    subs r5, r5, #0x80000 @ 0200fa54
    ldrgt pc, [r2, r0, lsl #2] @ 0200fa58
    b .L_0200e030 @ 0200fa5c
@ z80_dispatch_0200fa60 at 0x0200fa60
    bic r7, r7, #0x20000000 @ 0200fa60
    ldrb r0, [fp], #1 @ 0200fa64
    subs r5, r5, #0x80000 @ 0200fa68
    ldrgt pc, [r2, r0, lsl #2] @ 0200fa6c
    b .L_0200e030 @ 0200fa70
@ z80_dispatch_0200fa74 at 0x0200fa74
    bic r8, r8, #0x20000000 @ 0200fa74
    ldrb r0, [fp], #1 @ 0200fa78
    subs r5, r5, #0x80000 @ 0200fa7c
    ldrgt pc, [r2, r0, lsl #2] @ 0200fa80
    b .L_0200e030 @ 0200fa84
@ z80_dispatch_0200fa88 at 0x0200fa88
    bic sb, sb, #0x20000000 @ 0200fa88
    ldrb r0, [fp], #1 @ 0200fa8c
    subs r5, r5, #0x80000 @ 0200fa90
    ldrgt pc, [r2, r0, lsl #2] @ 0200fa94
    b .L_0200e030 @ 0200fa98
@ z80_dispatch_0200fa9c at 0x0200fa9c
    bic sl, sl, #0x20000000 @ 0200fa9c
    ldrb r0, [fp], #1 @ 0200faa0
    subs r5, r5, #0x80000 @ 0200faa4
    ldrgt pc, [r2, r0, lsl #2] @ 0200faa8
    b .L_0200e030 @ 0200faac
@ z80_dispatch_0200fab0 at 0x0200fab0
    bic sl, sl, #0x200000 @ 0200fab0
    ldrb r0, [fp], #1 @ 0200fab4
    subs r5, r5, #0x80000 @ 0200fab8
    ldrgt pc, [r2, r0, lsl #2] @ 0200fabc
    b .L_0200e030 @ 0200fac0
@ z80_dispatch_0200fac4 at 0x0200fac4
    cmp sl, #0x20000000 @ 0200fac4
    .word 0x2bbfcc87 @ 0200fac8 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200facc
    bic r0, r0, #0x20 @ 0200fad0
    mov r1, r0 @ 0200fad4
    cmp sl, #0x20000000 @ 0200fad8
    .word 0x2bbfcc92 @ 0200fadc blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200fae0
    ldrb r0, [fp], #1 @ 0200fae4
    subs r5, r5, #0xf0000 @ 0200fae8
    ldrgt pc, [r2, r0, lsl #2] @ 0200faec
    b .L_0200e030 @ 0200faf0
@ z80_dispatch_0200faf4 at 0x0200faf4
    bic r4, r4, #0x20000000 @ 0200faf4
    ldrb r0, [fp], #1 @ 0200faf8
    subs r5, r5, #0x80000 @ 0200fafc
    ldrgt pc, [r2, r0, lsl #2] @ 0200fb00
    b .L_0200e030 @ 0200fb04
@ z80_dispatch_0200fb08 at 0x0200fb08
    bic r6, r6, #0x40000000 @ 0200fb08
    ldrb r0, [fp], #1 @ 0200fb0c
    subs r5, r5, #0x80000 @ 0200fb10
    ldrgt pc, [r2, r0, lsl #2] @ 0200fb14
    b .L_0200e030 @ 0200fb18
@ z80_dispatch_0200fb1c at 0x0200fb1c
    bic r7, r7, #0x40000000 @ 0200fb1c
    ldrb r0, [fp], #1 @ 0200fb20
    subs r5, r5, #0x80000 @ 0200fb24
    ldrgt pc, [r2, r0, lsl #2] @ 0200fb28
    b .L_0200e030 @ 0200fb2c
@ z80_dispatch_0200fb30 at 0x0200fb30
    bic r8, r8, #0x40000000 @ 0200fb30
    ldrb r0, [fp], #1 @ 0200fb34
    subs r5, r5, #0x80000 @ 0200fb38
    ldrgt pc, [r2, r0, lsl #2] @ 0200fb3c
    b .L_0200e030 @ 0200fb40
@ z80_dispatch_0200fb44 at 0x0200fb44
    bic sb, sb, #0x40000000 @ 0200fb44
    ldrb r0, [fp], #1 @ 0200fb48
    subs r5, r5, #0x80000 @ 0200fb4c
    ldrgt pc, [r2, r0, lsl #2] @ 0200fb50
    b .L_0200e030 @ 0200fb54
@ z80_dispatch_0200fb58 at 0x0200fb58
    bic sl, sl, #0x40000000 @ 0200fb58
    ldrb r0, [fp], #1 @ 0200fb5c
    subs r5, r5, #0x80000 @ 0200fb60
    ldrgt pc, [r2, r0, lsl #2] @ 0200fb64
    b .L_0200e030 @ 0200fb68
@ z80_dispatch_0200fb6c at 0x0200fb6c
    bic sl, sl, #0x400000 @ 0200fb6c
    ldrb r0, [fp], #1 @ 0200fb70
    subs r5, r5, #0x80000 @ 0200fb74
    ldrgt pc, [r2, r0, lsl #2] @ 0200fb78
    b .L_0200e030 @ 0200fb7c
@ z80_dispatch_0200fb80 at 0x0200fb80
    cmp sl, #0x20000000 @ 0200fb80
    .word 0x2bbfcc58 @ 0200fb84 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200fb88
    bic r0, r0, #0x40 @ 0200fb8c
    mov r1, r0 @ 0200fb90
    cmp sl, #0x20000000 @ 0200fb94
    .word 0x2bbfcc63 @ 0200fb98 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200fb9c
    ldrb r0, [fp], #1 @ 0200fba0
    subs r5, r5, #0xf0000 @ 0200fba4
    ldrgt pc, [r2, r0, lsl #2] @ 0200fba8
    b .L_0200e030 @ 0200fbac
@ z80_dispatch_0200fbb0 at 0x0200fbb0
    bic r4, r4, #0x40000000 @ 0200fbb0
    ldrb r0, [fp], #1 @ 0200fbb4
    subs r5, r5, #0x80000 @ 0200fbb8
    ldrgt pc, [r2, r0, lsl #2] @ 0200fbbc
    b .L_0200e030 @ 0200fbc0
@ z80_dispatch_0200fbc4 at 0x0200fbc4
    bic r6, r6, #0x80000000 @ 0200fbc4
    ldrb r0, [fp], #1 @ 0200fbc8
    subs r5, r5, #0x80000 @ 0200fbcc
    ldrgt pc, [r2, r0, lsl #2] @ 0200fbd0
    b .L_0200e030 @ 0200fbd4
@ z80_dispatch_0200fbd8 at 0x0200fbd8
    bic r7, r7, #0x80000000 @ 0200fbd8
    ldrb r0, [fp], #1 @ 0200fbdc
    subs r5, r5, #0x80000 @ 0200fbe0
    ldrgt pc, [r2, r0, lsl #2] @ 0200fbe4
    b .L_0200e030 @ 0200fbe8
@ z80_dispatch_0200fbec at 0x0200fbec
    bic r8, r8, #0x80000000 @ 0200fbec
    ldrb r0, [fp], #1 @ 0200fbf0
    subs r5, r5, #0x80000 @ 0200fbf4
    ldrgt pc, [r2, r0, lsl #2] @ 0200fbf8
    b .L_0200e030 @ 0200fbfc
@ z80_dispatch_0200fc00 at 0x0200fc00
    bic sb, sb, #0x80000000 @ 0200fc00
    ldrb r0, [fp], #1 @ 0200fc04
    subs r5, r5, #0x80000 @ 0200fc08
    ldrgt pc, [r2, r0, lsl #2] @ 0200fc0c
    b .L_0200e030 @ 0200fc10
@ z80_dispatch_0200fc14 at 0x0200fc14
    bic sl, sl, #0x80000000 @ 0200fc14
    ldrb r0, [fp], #1 @ 0200fc18
    subs r5, r5, #0x80000 @ 0200fc1c
    ldrgt pc, [r2, r0, lsl #2] @ 0200fc20
    b .L_0200e030 @ 0200fc24
@ z80_dispatch_0200fc28 at 0x0200fc28
    bic sl, sl, #0x800000 @ 0200fc28
    ldrb r0, [fp], #1 @ 0200fc2c
    subs r5, r5, #0x80000 @ 0200fc30
    ldrgt pc, [r2, r0, lsl #2] @ 0200fc34
    b .L_0200e030 @ 0200fc38
@ z80_dispatch_0200fc3c at 0x0200fc3c
    cmp sl, #0x20000000 @ 0200fc3c
    .word 0x2bbfcc29 @ 0200fc40 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200fc44
    bic r0, r0, #0x80 @ 0200fc48
    mov r1, r0 @ 0200fc4c
    cmp sl, #0x20000000 @ 0200fc50
    .word 0x2bbfcc34 @ 0200fc54 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200fc58
    ldrb r0, [fp], #1 @ 0200fc5c
    subs r5, r5, #0xf0000 @ 0200fc60
    ldrgt pc, [r2, r0, lsl #2] @ 0200fc64
    b .L_0200e030 @ 0200fc68
@ z80_dispatch_0200fc6c at 0x0200fc6c
    bic r4, r4, #0x80000000 @ 0200fc6c
    ldrb r0, [fp], #1 @ 0200fc70
    subs r5, r5, #0x80000 @ 0200fc74
    ldrgt pc, [r2, r0, lsl #2] @ 0200fc78
    b .L_0200e030 @ 0200fc7c
@ z80_dispatch_0200fc80 at 0x0200fc80
    orr r6, r6, #0x1000000 @ 0200fc80
    ldrb r0, [fp], #1 @ 0200fc84
    subs r5, r5, #0x80000 @ 0200fc88
    ldrgt pc, [r2, r0, lsl #2] @ 0200fc8c
    b .L_0200e030 @ 0200fc90
@ z80_dispatch_0200fc94 at 0x0200fc94
    orr r7, r7, #0x1000000 @ 0200fc94
    ldrb r0, [fp], #1 @ 0200fc98
    subs r5, r5, #0x80000 @ 0200fc9c
    ldrgt pc, [r2, r0, lsl #2] @ 0200fca0
    b .L_0200e030 @ 0200fca4
@ z80_dispatch_0200fca8 at 0x0200fca8
    orr r8, r8, #0x1000000 @ 0200fca8
    ldrb r0, [fp], #1 @ 0200fcac
    subs r5, r5, #0x80000 @ 0200fcb0
    ldrgt pc, [r2, r0, lsl #2] @ 0200fcb4
    b .L_0200e030 @ 0200fcb8
@ z80_dispatch_0200fcbc at 0x0200fcbc
    orr sb, sb, #0x1000000 @ 0200fcbc
    ldrb r0, [fp], #1 @ 0200fcc0
    subs r5, r5, #0x80000 @ 0200fcc4
    ldrgt pc, [r2, r0, lsl #2] @ 0200fcc8
    b .L_0200e030 @ 0200fccc
@ z80_dispatch_0200fcd0 at 0x0200fcd0
    orr sl, sl, #0x1000000 @ 0200fcd0
    ldrb r0, [fp], #1 @ 0200fcd4
    subs r5, r5, #0x80000 @ 0200fcd8
    ldrgt pc, [r2, r0, lsl #2] @ 0200fcdc
    b .L_0200e030 @ 0200fce0
@ z80_dispatch_0200fce4 at 0x0200fce4
    orr sl, sl, #0x10000 @ 0200fce4
    ldrb r0, [fp], #1 @ 0200fce8
    subs r5, r5, #0x80000 @ 0200fcec
    ldrgt pc, [r2, r0, lsl #2] @ 0200fcf0
    b .L_0200e030 @ 0200fcf4
@ z80_dispatch_0200fcf8 at 0x0200fcf8
    cmp sl, #0x20000000 @ 0200fcf8
    .word 0x2bbfcbfa @ 0200fcfc blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200fd00
    orr r0, r0, #1 @ 0200fd04
    mov r1, r0 @ 0200fd08
    cmp sl, #0x20000000 @ 0200fd0c
    .word 0x2bbfcc05 @ 0200fd10 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200fd14
    ldrb r0, [fp], #1 @ 0200fd18
    subs r5, r5, #0xf0000 @ 0200fd1c
    ldrgt pc, [r2, r0, lsl #2] @ 0200fd20
    b .L_0200e030 @ 0200fd24
@ z80_dispatch_0200fd28 at 0x0200fd28
    orr r4, r4, #0x1000000 @ 0200fd28
    ldrb r0, [fp], #1 @ 0200fd2c
    subs r5, r5, #0x80000 @ 0200fd30
    ldrgt pc, [r2, r0, lsl #2] @ 0200fd34
    b .L_0200e030 @ 0200fd38
@ z80_dispatch_0200fd3c at 0x0200fd3c
    orr r6, r6, #0x2000000 @ 0200fd3c
    ldrb r0, [fp], #1 @ 0200fd40
    subs r5, r5, #0x80000 @ 0200fd44
    ldrgt pc, [r2, r0, lsl #2] @ 0200fd48
    b .L_0200e030 @ 0200fd4c
@ z80_dispatch_0200fd50 at 0x0200fd50
    orr r7, r7, #0x2000000 @ 0200fd50
    ldrb r0, [fp], #1 @ 0200fd54
    subs r5, r5, #0x80000 @ 0200fd58
    ldrgt pc, [r2, r0, lsl #2] @ 0200fd5c
    b .L_0200e030 @ 0200fd60
@ z80_dispatch_0200fd64 at 0x0200fd64
    orr r8, r8, #0x2000000 @ 0200fd64
    ldrb r0, [fp], #1 @ 0200fd68
    subs r5, r5, #0x80000 @ 0200fd6c
    ldrgt pc, [r2, r0, lsl #2] @ 0200fd70
    b .L_0200e030 @ 0200fd74
@ z80_dispatch_0200fd78 at 0x0200fd78
    orr sb, sb, #0x2000000 @ 0200fd78
    ldrb r0, [fp], #1 @ 0200fd7c
    subs r5, r5, #0x80000 @ 0200fd80
    ldrgt pc, [r2, r0, lsl #2] @ 0200fd84
    b .L_0200e030 @ 0200fd88
@ z80_dispatch_0200fd8c at 0x0200fd8c
    orr sl, sl, #0x2000000 @ 0200fd8c
    ldrb r0, [fp], #1 @ 0200fd90
    subs r5, r5, #0x80000 @ 0200fd94
    ldrgt pc, [r2, r0, lsl #2] @ 0200fd98
    b .L_0200e030 @ 0200fd9c
@ z80_dispatch_0200fda0 at 0x0200fda0
    orr sl, sl, #0x20000 @ 0200fda0
    ldrb r0, [fp], #1 @ 0200fda4
    subs r5, r5, #0x80000 @ 0200fda8
    ldrgt pc, [r2, r0, lsl #2] @ 0200fdac
    b .L_0200e030 @ 0200fdb0
@ z80_dispatch_0200fdb4 at 0x0200fdb4
    cmp sl, #0x20000000 @ 0200fdb4
    .word 0x2bbfcbcb @ 0200fdb8 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200fdbc
    orr r0, r0, #2 @ 0200fdc0
    mov r1, r0 @ 0200fdc4
    cmp sl, #0x20000000 @ 0200fdc8
    .word 0x2bbfcbd6 @ 0200fdcc blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200fdd0
    ldrb r0, [fp], #1 @ 0200fdd4
    subs r5, r5, #0xf0000 @ 0200fdd8
    ldrgt pc, [r2, r0, lsl #2] @ 0200fddc
    b .L_0200e030 @ 0200fde0
@ z80_dispatch_0200fde4 at 0x0200fde4
    orr r4, r4, #0x2000000 @ 0200fde4
    ldrb r0, [fp], #1 @ 0200fde8
    subs r5, r5, #0x80000 @ 0200fdec
    ldrgt pc, [r2, r0, lsl #2] @ 0200fdf0
    b .L_0200e030 @ 0200fdf4
@ z80_dispatch_0200fdf8 at 0x0200fdf8
    orr r6, r6, #0x4000000 @ 0200fdf8
    ldrb r0, [fp], #1 @ 0200fdfc
    subs r5, r5, #0x80000 @ 0200fe00
    ldrgt pc, [r2, r0, lsl #2] @ 0200fe04
    b .L_0200e030 @ 0200fe08
@ z80_dispatch_0200fe0c at 0x0200fe0c
    orr r7, r7, #0x4000000 @ 0200fe0c
    ldrb r0, [fp], #1 @ 0200fe10
    subs r5, r5, #0x80000 @ 0200fe14
    ldrgt pc, [r2, r0, lsl #2] @ 0200fe18
    b .L_0200e030 @ 0200fe1c
@ z80_dispatch_0200fe20 at 0x0200fe20
    orr r8, r8, #0x4000000 @ 0200fe20
    ldrb r0, [fp], #1 @ 0200fe24
    subs r5, r5, #0x80000 @ 0200fe28
    ldrgt pc, [r2, r0, lsl #2] @ 0200fe2c
    b .L_0200e030 @ 0200fe30
@ z80_dispatch_0200fe34 at 0x0200fe34
    orr sb, sb, #0x4000000 @ 0200fe34
    ldrb r0, [fp], #1 @ 0200fe38
    subs r5, r5, #0x80000 @ 0200fe3c
    ldrgt pc, [r2, r0, lsl #2] @ 0200fe40
    b .L_0200e030 @ 0200fe44
@ z80_dispatch_0200fe48 at 0x0200fe48
    orr sl, sl, #0x4000000 @ 0200fe48
    ldrb r0, [fp], #1 @ 0200fe4c
    subs r5, r5, #0x80000 @ 0200fe50
    ldrgt pc, [r2, r0, lsl #2] @ 0200fe54
    b .L_0200e030 @ 0200fe58
@ z80_dispatch_0200fe5c at 0x0200fe5c
    orr sl, sl, #0x40000 @ 0200fe5c
    ldrb r0, [fp], #1 @ 0200fe60
    subs r5, r5, #0x80000 @ 0200fe64
    ldrgt pc, [r2, r0, lsl #2] @ 0200fe68
    b .L_0200e030 @ 0200fe6c
@ z80_dispatch_0200fe70 at 0x0200fe70
    cmp sl, #0x20000000 @ 0200fe70
    .word 0x2bbfcb9c @ 0200fe74 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200fe78
    orr r0, r0, #4 @ 0200fe7c
    mov r1, r0 @ 0200fe80
    cmp sl, #0x20000000 @ 0200fe84
    .word 0x2bbfcba7 @ 0200fe88 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200fe8c
    ldrb r0, [fp], #1 @ 0200fe90
    subs r5, r5, #0xf0000 @ 0200fe94
    ldrgt pc, [r2, r0, lsl #2] @ 0200fe98
    b .L_0200e030 @ 0200fe9c
@ z80_dispatch_0200fea0 at 0x0200fea0
    orr r4, r4, #0x4000000 @ 0200fea0
    ldrb r0, [fp], #1 @ 0200fea4
    subs r5, r5, #0x80000 @ 0200fea8
    ldrgt pc, [r2, r0, lsl #2] @ 0200feac
    b .L_0200e030 @ 0200feb0
@ z80_dispatch_0200feb4 at 0x0200feb4
    orr r6, r6, #0x8000000 @ 0200feb4
    ldrb r0, [fp], #1 @ 0200feb8
    subs r5, r5, #0x80000 @ 0200febc
    ldrgt pc, [r2, r0, lsl #2] @ 0200fec0
    b .L_0200e030 @ 0200fec4
@ z80_dispatch_0200fec8 at 0x0200fec8
    orr r7, r7, #0x8000000 @ 0200fec8
    ldrb r0, [fp], #1 @ 0200fecc
    subs r5, r5, #0x80000 @ 0200fed0
    ldrgt pc, [r2, r0, lsl #2] @ 0200fed4
    b .L_0200e030 @ 0200fed8
@ z80_dispatch_0200fedc at 0x0200fedc
    orr r8, r8, #0x8000000 @ 0200fedc
    ldrb r0, [fp], #1 @ 0200fee0
    subs r5, r5, #0x80000 @ 0200fee4
    ldrgt pc, [r2, r0, lsl #2] @ 0200fee8
    b .L_0200e030 @ 0200feec
@ z80_dispatch_0200fef0 at 0x0200fef0
    orr sb, sb, #0x8000000 @ 0200fef0
    ldrb r0, [fp], #1 @ 0200fef4
    subs r5, r5, #0x80000 @ 0200fef8
    ldrgt pc, [r2, r0, lsl #2] @ 0200fefc
    b .L_0200e030 @ 0200ff00
@ z80_dispatch_0200ff04 at 0x0200ff04
    orr sl, sl, #0x8000000 @ 0200ff04
    ldrb r0, [fp], #1 @ 0200ff08
    subs r5, r5, #0x80000 @ 0200ff0c
    ldrgt pc, [r2, r0, lsl #2] @ 0200ff10
    b .L_0200e030 @ 0200ff14
@ z80_dispatch_0200ff18 at 0x0200ff18
    orr sl, sl, #0x80000 @ 0200ff18
    ldrb r0, [fp], #1 @ 0200ff1c
    subs r5, r5, #0x80000 @ 0200ff20
    ldrgt pc, [r2, r0, lsl #2] @ 0200ff24
    b .L_0200e030 @ 0200ff28
@ z80_dispatch_0200ff2c at 0x0200ff2c
    cmp sl, #0x20000000 @ 0200ff2c
    .word 0x2bbfcb6d @ 0200ff30 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200ff34
    orr r0, r0, #8 @ 0200ff38
    mov r1, r0 @ 0200ff3c
    cmp sl, #0x20000000 @ 0200ff40
    .word 0x2bbfcb78 @ 0200ff44 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0200ff48
    ldrb r0, [fp], #1 @ 0200ff4c
    subs r5, r5, #0xf0000 @ 0200ff50
    ldrgt pc, [r2, r0, lsl #2] @ 0200ff54
    b .L_0200e030 @ 0200ff58
@ z80_dispatch_0200ff5c at 0x0200ff5c
    orr r4, r4, #0x8000000 @ 0200ff5c
    ldrb r0, [fp], #1 @ 0200ff60
    subs r5, r5, #0x80000 @ 0200ff64
    ldrgt pc, [r2, r0, lsl #2] @ 0200ff68
    b .L_0200e030 @ 0200ff6c
@ z80_dispatch_0200ff70 at 0x0200ff70
    orr r6, r6, #0x10000000 @ 0200ff70
    ldrb r0, [fp], #1 @ 0200ff74
    subs r5, r5, #0x80000 @ 0200ff78
    ldrgt pc, [r2, r0, lsl #2] @ 0200ff7c
    b .L_0200e030 @ 0200ff80
@ z80_dispatch_0200ff84 at 0x0200ff84
    orr r7, r7, #0x10000000 @ 0200ff84
    ldrb r0, [fp], #1 @ 0200ff88
    subs r5, r5, #0x80000 @ 0200ff8c
    ldrgt pc, [r2, r0, lsl #2] @ 0200ff90
    b .L_0200e030 @ 0200ff94
@ z80_dispatch_0200ff98 at 0x0200ff98
    orr r8, r8, #0x10000000 @ 0200ff98
    ldrb r0, [fp], #1 @ 0200ff9c
    subs r5, r5, #0x80000 @ 0200ffa0
    ldrgt pc, [r2, r0, lsl #2] @ 0200ffa4
    b .L_0200e030 @ 0200ffa8
@ z80_dispatch_0200ffac at 0x0200ffac
    orr sb, sb, #0x10000000 @ 0200ffac
    ldrb r0, [fp], #1 @ 0200ffb0
    subs r5, r5, #0x80000 @ 0200ffb4
    ldrgt pc, [r2, r0, lsl #2] @ 0200ffb8
    b .L_0200e030 @ 0200ffbc
@ z80_dispatch_0200ffc0 at 0x0200ffc0
    orr sl, sl, #0x10000000 @ 0200ffc0
    ldrb r0, [fp], #1 @ 0200ffc4
    subs r5, r5, #0x80000 @ 0200ffc8
    ldrgt pc, [r2, r0, lsl #2] @ 0200ffcc
    b .L_0200e030 @ 0200ffd0
@ z80_dispatch_0200ffd4 at 0x0200ffd4
    orr sl, sl, #0x100000 @ 0200ffd4
    ldrb r0, [fp], #1 @ 0200ffd8
    subs r5, r5, #0x80000 @ 0200ffdc
    ldrgt pc, [r2, r0, lsl #2] @ 0200ffe0
    b .L_0200e030 @ 0200ffe4
@ z80_dispatch_0200ffe8 at 0x0200ffe8
    cmp sl, #0x20000000 @ 0200ffe8
    .word 0x2bbfcb3e @ 0200ffec blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0200fff0
    orr r0, r0, #0x10 @ 0200fff4
    mov r1, r0 @ 0200fff8
    cmp sl, #0x20000000 @ 0200fffc
    .word 0x2bbfcb49 @ 02010000 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 02010004
    ldrb r0, [fp], #1 @ 02010008
    subs r5, r5, #0xf0000 @ 0201000c
    ldrgt pc, [r2, r0, lsl #2] @ 02010010
    b .L_0200e030 @ 02010014
@ z80_dispatch_02010018 at 0x02010018
    orr r4, r4, #0x10000000 @ 02010018
    ldrb r0, [fp], #1 @ 0201001c
    subs r5, r5, #0x80000 @ 02010020
    ldrgt pc, [r2, r0, lsl #2] @ 02010024
    b .L_0200e030 @ 02010028
@ z80_dispatch_0201002c at 0x0201002c
    orr r6, r6, #0x20000000 @ 0201002c
    ldrb r0, [fp], #1 @ 02010030
    subs r5, r5, #0x80000 @ 02010034
    ldrgt pc, [r2, r0, lsl #2] @ 02010038
    b .L_0200e030 @ 0201003c
@ z80_dispatch_02010040 at 0x02010040
    orr r7, r7, #0x20000000 @ 02010040
    ldrb r0, [fp], #1 @ 02010044
    subs r5, r5, #0x80000 @ 02010048
    ldrgt pc, [r2, r0, lsl #2] @ 0201004c
    b .L_0200e030 @ 02010050
@ z80_dispatch_02010054 at 0x02010054
    orr r8, r8, #0x20000000 @ 02010054
    ldrb r0, [fp], #1 @ 02010058
    subs r5, r5, #0x80000 @ 0201005c
    ldrgt pc, [r2, r0, lsl #2] @ 02010060
    b .L_0200e030 @ 02010064
@ z80_dispatch_02010068 at 0x02010068
    orr sb, sb, #0x20000000 @ 02010068
    ldrb r0, [fp], #1 @ 0201006c
    subs r5, r5, #0x80000 @ 02010070
    ldrgt pc, [r2, r0, lsl #2] @ 02010074
    b .L_0200e030 @ 02010078
@ z80_dispatch_0201007c at 0x0201007c
    orr sl, sl, #0x20000000 @ 0201007c
    ldrb r0, [fp], #1 @ 02010080
    subs r5, r5, #0x80000 @ 02010084
    ldrgt pc, [r2, r0, lsl #2] @ 02010088
    b .L_0200e030 @ 0201008c
@ z80_dispatch_02010090 at 0x02010090
    orr sl, sl, #0x200000 @ 02010090
    ldrb r0, [fp], #1 @ 02010094
    subs r5, r5, #0x80000 @ 02010098
    ldrgt pc, [r2, r0, lsl #2] @ 0201009c
    b .L_0200e030 @ 020100a0
@ z80_dispatch_020100a4 at 0x020100a4
    cmp sl, #0x20000000 @ 020100a4
    .word 0x2bbfcb0f @ 020100a8 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 020100ac
    orr r0, r0, #0x20 @ 020100b0
    mov r1, r0 @ 020100b4
    cmp sl, #0x20000000 @ 020100b8
    .word 0x2bbfcb1a @ 020100bc blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 020100c0
    ldrb r0, [fp], #1 @ 020100c4
    subs r5, r5, #0xf0000 @ 020100c8
    ldrgt pc, [r2, r0, lsl #2] @ 020100cc
    b .L_0200e030 @ 020100d0
@ z80_dispatch_020100d4 at 0x020100d4
    orr r4, r4, #0x20000000 @ 020100d4
    ldrb r0, [fp], #1 @ 020100d8
    subs r5, r5, #0x80000 @ 020100dc
    ldrgt pc, [r2, r0, lsl #2] @ 020100e0
    b .L_0200e030 @ 020100e4
@ z80_dispatch_020100e8 at 0x020100e8
    orr r6, r6, #0x40000000 @ 020100e8
    ldrb r0, [fp], #1 @ 020100ec
    subs r5, r5, #0x80000 @ 020100f0
    ldrgt pc, [r2, r0, lsl #2] @ 020100f4
    b .L_0200e030 @ 020100f8
@ z80_dispatch_020100fc at 0x020100fc
    orr r7, r7, #0x40000000 @ 020100fc
    ldrb r0, [fp], #1 @ 02010100
    subs r5, r5, #0x80000 @ 02010104
    ldrgt pc, [r2, r0, lsl #2] @ 02010108
    b .L_0200e030 @ 0201010c
@ z80_dispatch_02010110 at 0x02010110
    orr r8, r8, #0x40000000 @ 02010110
    ldrb r0, [fp], #1 @ 02010114
    subs r5, r5, #0x80000 @ 02010118
    ldrgt pc, [r2, r0, lsl #2] @ 0201011c
    b .L_0200e030 @ 02010120
@ z80_dispatch_02010124 at 0x02010124
    orr sb, sb, #0x40000000 @ 02010124
    ldrb r0, [fp], #1 @ 02010128
    subs r5, r5, #0x80000 @ 0201012c
    ldrgt pc, [r2, r0, lsl #2] @ 02010130
    b .L_0200e030 @ 02010134
@ z80_dispatch_02010138 at 0x02010138
    orr sl, sl, #0x40000000 @ 02010138
    ldrb r0, [fp], #1 @ 0201013c
    subs r5, r5, #0x80000 @ 02010140
    ldrgt pc, [r2, r0, lsl #2] @ 02010144
    b .L_0200e030 @ 02010148
@ z80_dispatch_0201014c at 0x0201014c
    orr sl, sl, #0x400000 @ 0201014c
    ldrb r0, [fp], #1 @ 02010150
    subs r5, r5, #0x80000 @ 02010154
    ldrgt pc, [r2, r0, lsl #2] @ 02010158
    b .L_0200e030 @ 0201015c
@ z80_dispatch_02010160 at 0x02010160
    cmp sl, #0x20000000 @ 02010160
    .word 0x2bbfcae0 @ 02010164 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010168
    orr r0, r0, #0x40 @ 0201016c
    mov r1, r0 @ 02010170
    cmp sl, #0x20000000 @ 02010174
    .word 0x2bbfcaeb @ 02010178 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 0201017c
    ldrb r0, [fp], #1 @ 02010180
    subs r5, r5, #0xf0000 @ 02010184
    ldrgt pc, [r2, r0, lsl #2] @ 02010188
    b .L_0200e030 @ 0201018c
@ z80_dispatch_02010190 at 0x02010190
    orr r4, r4, #0x40000000 @ 02010190
    ldrb r0, [fp], #1 @ 02010194
    subs r5, r5, #0x80000 @ 02010198
    ldrgt pc, [r2, r0, lsl #2] @ 0201019c
    b .L_0200e030 @ 020101a0
@ z80_dispatch_020101a4 at 0x020101a4
    orr r6, r6, #0x80000000 @ 020101a4
    ldrb r0, [fp], #1 @ 020101a8
    subs r5, r5, #0x80000 @ 020101ac
    ldrgt pc, [r2, r0, lsl #2] @ 020101b0
    b .L_0200e030 @ 020101b4
@ z80_dispatch_020101b8 at 0x020101b8
    orr r7, r7, #0x80000000 @ 020101b8
    ldrb r0, [fp], #1 @ 020101bc
    subs r5, r5, #0x80000 @ 020101c0
    ldrgt pc, [r2, r0, lsl #2] @ 020101c4
    b .L_0200e030 @ 020101c8
@ z80_dispatch_020101cc at 0x020101cc
    orr r8, r8, #0x80000000 @ 020101cc
    ldrb r0, [fp], #1 @ 020101d0
    subs r5, r5, #0x80000 @ 020101d4
    ldrgt pc, [r2, r0, lsl #2] @ 020101d8
    b .L_0200e030 @ 020101dc
@ z80_dispatch_020101e0 at 0x020101e0
    orr sb, sb, #0x80000000 @ 020101e0
    ldrb r0, [fp], #1 @ 020101e4
    subs r5, r5, #0x80000 @ 020101e8
    ldrgt pc, [r2, r0, lsl #2] @ 020101ec
    b .L_0200e030 @ 020101f0
@ z80_dispatch_020101f4 at 0x020101f4
    orr sl, sl, #0x80000000 @ 020101f4
    ldrb r0, [fp], #1 @ 020101f8
    subs r5, r5, #0x80000 @ 020101fc
    ldrgt pc, [r2, r0, lsl #2] @ 02010200
    b .L_0200e030 @ 02010204
@ z80_dispatch_02010208 at 0x02010208
    orr sl, sl, #0x800000 @ 02010208
    ldrb r0, [fp], #1 @ 0201020c
    subs r5, r5, #0x80000 @ 02010210
    ldrgt pc, [r2, r0, lsl #2] @ 02010214
    b .L_0200e030 @ 02010218
@ z80_dispatch_0201021c at 0x0201021c
    cmp sl, #0x20000000 @ 0201021c
    .word 0x2bbfcab1 @ 02010220 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010224
    orr r0, r0, #0x80 @ 02010228
    mov r1, r0 @ 0201022c
    cmp sl, #0x20000000 @ 02010230
    .word 0x2bbfcabc @ 02010234 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 02010238
    ldrb r0, [fp], #1 @ 0201023c
    subs r5, r5, #0xf0000 @ 02010240
    ldrgt pc, [r2, r0, lsl #2] @ 02010244
    b .L_0200e030 @ 02010248
@ z80_dispatch_0201024c at 0x0201024c
    orr r4, r4, #0x80000000 @ 0201024c
    ldrb r0, [fp], #1 @ 02010250
    subs r5, r5, #0x80000 @ 02010254
    ldrgt pc, [r2, r0, lsl #2] @ 02010258
    b .L_0200e030 @ 0201025c
@ z80_dispatch_02010260 at 0x02010260
    orr r0, r6, r7, lsr #8 @ 02010260
    lsr r0, r0, #0x10 @ 02010264
    mov r6, #0xff000000 @ 02010268
    bic r5, r5, #0xd7 @ 0201026c
    orr r5, r5, #0x84 @ 02010270
    ldrb r0, [fp], #1 @ 02010274
    subs r5, r5, #0xc0000 @ 02010278
    ldrgt pc, [r2, r0, lsl #2] @ 0201027c
    b .L_0200e030 @ 02010280
@ z80_dispatch_02010284 at 0x02010284
    orr r0, r6, r7, lsr #8 @ 02010284
    lsr r0, r0, #0x10 @ 02010288
    ldrb r0, [fp], #1 @ 0201028c
    subs r5, r5, #0xc0000 @ 02010290
    ldrgt pc, [r2, r0, lsl #2] @ 02010294
    b .L_0200e030 @ 02010298
@ z80_dispatch_0201029c at 0x0201029c
    orr r0, r6, r7, lsr #8 @ 0201029c
    and lr, r5, #1 @ 020102a0
    bic r5, r5, #0xd7 @ 020102a4
    orr r5, r5, #2 @ 020102a8
    subs sl, sl, lr, lsl #16 @ 020102ac
    orrlo r5, r5, #1 @ 020102b0
    orrvs r5, r5, #4 @ 020102b4
    subs sl, sl, r0 @ 020102b8
    orrmi r5, r5, #0x80 @ 020102bc
    orreq r5, r5, #0x40 @ 020102c0
    orrlo r5, r5, #1 @ 020102c4
    eorvs r5, r5, #4 @ 020102c8
    ldrb r0, [fp], #1 @ 020102cc
    subs r5, r5, #0xf0000 @ 020102d0
    ldrgt pc, [r2, r0, lsl #2] @ 020102d4
    b .L_0200e030 @ 020102d8
@ z80_dispatch_020102dc at 0x020102dc
    ldrb r0, [fp], #1 @ 020102dc
    ldrb lr, [fp], #1 @ 020102e0
    orr r0, r0, lr, lsl #8 @ 020102e4
    orr r1, r6, r7, lsr #8 @ 020102e8
    lsr r1, r1, #0x10 @ 020102ec
    strb r1, [r3, r0] @ 020102f0
    lsr r1, r1, #8 @ 020102f4
    add r0, r0, #1 @ 020102f8
    strb r1, [r3, r0] @ 020102fc
    ldrb r0, [fp], #1 @ 02010300
    subs r5, r5, #0x140000 @ 02010304
    ldrgt pc, [r2, r0, lsl #2] @ 02010308
    b .L_0200e030 @ 0201030c
@ z80_dispatch_02010310 at 0x02010310
    mov r0, r4 @ 02010310
    mov r4, #0 @ 02010314
    bic r5, r5, #0xd7 @ 02010318
    orr r5, r5, #2 @ 0201031c
    subs r4, r4, r0 @ 02010320
    orrmi r5, r5, #0x80 @ 02010324
    orreq r5, r5, #0x40 @ 02010328
    orrlo r5, r5, #1 @ 0201032c
    orrvs r5, r5, #4 @ 02010330
    ldrb r0, [fp], #1 @ 02010334
    subs r5, r5, #0x80000 @ 02010338
    ldrgt pc, [r2, r0, lsl #2] @ 0201033c
    b .L_0200e030 @ 02010340
@ z80_dispatch_02010344 at 0x02010344
    ldr r0, [sp, #0x44] @ 02010344
    ldrb fp, [ip], #1 @ 02010348
    ldrb lr, [ip], #1 @ 0201034c
    add fp, r3, fp @ 02010350
    add fp, fp, lr, lsl #8 @ 02010354
    tst r0, #4 @ 02010358
    orrne r0, r0, #8 @ 0201035c
    biceq r0, r0, #8 @ 02010360
    str r0, [sp, #0x44] @ 02010364
    sub r5, r5, #0xe0000 @ 02010368
    b .L_0200dfa8 @ 0201036c
@ z80_dispatch_02010370 at 0x02010370
    ldr r0, [sp, #0x44] @ 02010370
    bic r0, r0, #3 @ 02010374
    str r0, [sp, #0x44] @ 02010378
    ldrb r0, [fp], #1 @ 0201037c
    subs r5, r5, #0x80000 @ 02010380
    ldrgt pc, [r2, r0, lsl #2] @ 02010384
    b .L_0200e030 @ 02010388
@ z80_dispatch_0201038c at 0x0201038c
    str r4, [sp, #0x38] @ 0201038c
    ldrb r0, [fp], #1 @ 02010390
    subs r5, r5, #0x90000 @ 02010394
    ldrgt pc, [r2, r0, lsl #2] @ 02010398
    b .L_0200e030 @ 0201039c
@ z80_dispatch_020103a0 at 0x020103a0
    orr r0, r6, r7, lsr #8 @ 020103a0
    lsr r0, r0, #0x10 @ 020103a4
    mov r7, #0xff000000 @ 020103a8
    bic r5, r5, #0xd7 @ 020103ac
    orr r5, r5, #0x84 @ 020103b0
    ldrb r0, [fp], #1 @ 020103b4
    subs r5, r5, #0xc0000 @ 020103b8
    ldrgt pc, [r2, r0, lsl #2] @ 020103bc
    b .L_0200e030 @ 020103c0
@ z80_dispatch_020103c4 at 0x020103c4
    orr r0, r6, r7, lsr #8 @ 020103c4
    lsr r0, r0, #0x10 @ 020103c8
    ldrb r0, [fp], #1 @ 020103cc
    subs r5, r5, #0xc0000 @ 020103d0
    ldrgt pc, [r2, r0, lsl #2] @ 020103d4
    b .L_0200e030 @ 020103d8
@ z80_dispatch_020103dc at 0x020103dc
    orr r0, r6, r7, lsr #8 @ 020103dc
    lsrs r1, r5, #1 @ 020103e0
    bic r5, r5, #0xd7 @ 020103e4
    addshs sl, sl, #0x10000 @ 020103e8
    orrhs r5, r5, #1 @ 020103ec
    orrvs r5, r5, #4 @ 020103f0
    adds sl, sl, r0 @ 020103f4
    orrmi r5, r5, #0x80 @ 020103f8
    orreq r5, r5, #0x40 @ 020103fc
    orrhs r5, r5, #1 @ 02010400
    eorvs r5, r5, #4 @ 02010404
    ldrb r0, [fp], #1 @ 02010408
    subs r5, r5, #0xf0000 @ 0201040c
    ldrgt pc, [r2, r0, lsl #2] @ 02010410
    b .L_0200e030 @ 02010414
@ z80_dispatch_02010418 at 0x02010418
    ldrb r0, [fp], #1 @ 02010418
    ldrb lr, [fp], #1 @ 0201041c
    orr r0, r0, lr, lsl #8 @ 02010420
    cmp r0, #0x2000 @ 02010424
    .word 0xabbfca33 @ 02010428 blge #0x1002cfc
    ldrb lr, [r3, r0] @ 0201042c
    add r0, r0, #1 @ 02010430
    ldrb r0, [r3, r0] @ 02010434
    orr r0, lr, r0, lsl #8 @ 02010438
    lsl r6, r0, #0x10 @ 0201043c
    lsl r7, r0, #0x18 @ 02010440
    and r6, r6, #0xff000000 @ 02010444
    ldrb r0, [fp], #1 @ 02010448
    subs r5, r5, #0x140000 @ 0201044c
    ldrgt pc, [r2, r0, lsl #2] @ 02010450
    b .L_0200e030 @ 02010454
@ z80_dispatch_02010458 at 0x02010458
    ldrb fp, [ip], #1 @ 02010458
    ldrb lr, [ip], #1 @ 0201045c
    add fp, r3, fp @ 02010460
    add fp, fp, lr, lsl #8 @ 02010464
    ldrb r0, [fp], #1 @ 02010468
    subs r5, r5, #0xe0000 @ 0201046c
    ldrgt pc, [r2, r0, lsl #2] @ 02010470
    b .L_0200e030 @ 02010474
@ z80_dispatch_02010478 at 0x02010478
    str r4, [sp, #0x3c] @ 02010478
    ldrb r0, [fp], #1 @ 0201047c
    subs r5, r5, #0x90000 @ 02010480
    ldrgt pc, [r2, r0, lsl #2] @ 02010484
    b .L_0200e030 @ 02010488
@ z80_dispatch_0201048c at 0x0201048c
    orr r0, r6, r7, lsr #8 @ 0201048c
    lsr r0, r0, #0x10 @ 02010490
    mov r8, #0xff000000 @ 02010494
    bic r5, r5, #0xd7 @ 02010498
    orr r5, r5, #0x84 @ 0201049c
    ldrb r0, [fp], #1 @ 020104a0
    subs r5, r5, #0xc0000 @ 020104a4
    ldrgt pc, [r2, r0, lsl #2] @ 020104a8
    b .L_0200e030 @ 020104ac
@ z80_dispatch_020104b0 at 0x020104b0
    orr r0, r6, r7, lsr #8 @ 020104b0
    lsr r0, r0, #0x10 @ 020104b4
    ldrb r0, [fp], #1 @ 020104b8
    subs r5, r5, #0xc0000 @ 020104bc
    ldrgt pc, [r2, r0, lsl #2] @ 020104c0
    b .L_0200e030 @ 020104c4
@ z80_dispatch_020104c8 at 0x020104c8
    orr r0, r8, sb, lsr #8 @ 020104c8
    and lr, r5, #1 @ 020104cc
    bic r5, r5, #0xd7 @ 020104d0
    orr r5, r5, #2 @ 020104d4
    subs sl, sl, lr, lsl #16 @ 020104d8
    orrlo r5, r5, #1 @ 020104dc
    orrvs r5, r5, #4 @ 020104e0
    subs sl, sl, r0 @ 020104e4
    orrmi r5, r5, #0x80 @ 020104e8
    orreq r5, r5, #0x40 @ 020104ec
    orrlo r5, r5, #1 @ 020104f0
    eorvs r5, r5, #4 @ 020104f4
    ldrb r0, [fp], #1 @ 020104f8
    subs r5, r5, #0xf0000 @ 020104fc
    ldrgt pc, [r2, r0, lsl #2] @ 02010500
    b .L_0200e030 @ 02010504
@ z80_dispatch_02010508 at 0x02010508
    ldrb r0, [fp], #1 @ 02010508
    ldrb lr, [fp], #1 @ 0201050c
    orr r0, r0, lr, lsl #8 @ 02010510
    orr r1, r8, sb, lsr #8 @ 02010514
    lsr r1, r1, #0x10 @ 02010518
    strb r1, [r3, r0] @ 0201051c
    lsr r1, r1, #8 @ 02010520
    add r0, r0, #1 @ 02010524
    strb r1, [r3, r0] @ 02010528
    ldrb r0, [fp], #1 @ 0201052c
    subs r5, r5, #0x140000 @ 02010530
    ldrgt pc, [r2, r0, lsl #2] @ 02010534
    b .L_0200e030 @ 02010538
@ z80_dispatch_0201053c at 0x0201053c
    ldr r0, [sp, #0x44] @ 0201053c
    bic r0, r0, #3 @ 02010540
    orr r0, r0, #1 @ 02010544
    str r0, [sp, #0x44] @ 02010548
    ldrb r0, [fp], #1 @ 0201054c
    subs r5, r5, #0x80000 @ 02010550
    ldrgt pc, [r2, r0, lsl #2] @ 02010554
    b .L_0200e030 @ 02010558
@ z80_dispatch_0201055c at 0x0201055c
    ldr r0, [sp, #0x38] @ 0201055c
    bic r5, r5, #0xd7 @ 02010560
    ldr r1, [sp, #0x44] @ 02010564
    movs r4, r0 @ 02010568
    orrmi r5, r5, #0x80 @ 0201056c
    orreq r5, r5, #0x40 @ 02010570
    tst r1, #4 @ 02010574
    orrne r5, r5, #4 @ 02010578
    ldrb r0, [fp], #1 @ 0201057c
    subs r5, r5, #0x90000 @ 02010580
    ldrgt pc, [r2, r0, lsl #2] @ 02010584
    b .L_0200e030 @ 02010588
@ z80_dispatch_0201058c at 0x0201058c
    orr r0, r6, r7, lsr #8 @ 0201058c
    lsr r0, r0, #0x10 @ 02010590
    mov sb, #0xff000000 @ 02010594
    bic r5, r5, #0xd7 @ 02010598
    orr r5, r5, #0x84 @ 0201059c
    ldrb r0, [fp], #1 @ 020105a0
    subs r5, r5, #0xc0000 @ 020105a4
    ldrgt pc, [r2, r0, lsl #2] @ 020105a8
    b .L_0200e030 @ 020105ac
@ z80_dispatch_020105b0 at 0x020105b0
    orr r0, r6, r7, lsr #8 @ 020105b0
    lsr r0, r0, #0x10 @ 020105b4
    ldrb r0, [fp], #1 @ 020105b8
    subs r5, r5, #0xc0000 @ 020105bc
    ldrgt pc, [r2, r0, lsl #2] @ 020105c0
    b .L_0200e030 @ 020105c4
@ z80_dispatch_020105c8 at 0x020105c8
    orr r0, r8, sb, lsr #8 @ 020105c8
    lsrs r1, r5, #1 @ 020105cc
    bic r5, r5, #0xd7 @ 020105d0
    addshs sl, sl, #0x10000 @ 020105d4
    orrhs r5, r5, #1 @ 020105d8
    orrvs r5, r5, #4 @ 020105dc
    adds sl, sl, r0 @ 020105e0
    orrmi r5, r5, #0x80 @ 020105e4
    orreq r5, r5, #0x40 @ 020105e8
    orrhs r5, r5, #1 @ 020105ec
    eorvs r5, r5, #4 @ 020105f0
    ldrb r0, [fp], #1 @ 020105f4
    subs r5, r5, #0xf0000 @ 020105f8
    ldrgt pc, [r2, r0, lsl #2] @ 020105fc
    b .L_0200e030 @ 02010600
@ z80_dispatch_02010604 at 0x02010604
    ldrb r0, [fp], #1 @ 02010604
    ldrb lr, [fp], #1 @ 02010608
    orr r0, r0, lr, lsl #8 @ 0201060c
    cmp r0, #0x2000 @ 02010610
    .word 0xabbfc9b8 @ 02010614 blge #0x1002cfc
    ldrb lr, [r3, r0] @ 02010618
    add r0, r0, #1 @ 0201061c
    ldrb r0, [r3, r0] @ 02010620
    orr r0, lr, r0, lsl #8 @ 02010624
    lsl r8, r0, #0x10 @ 02010628
    lsl sb, r0, #0x18 @ 0201062c
    and r8, r8, #0xff000000 @ 02010630
    ldrb r0, [fp], #1 @ 02010634
    subs r5, r5, #0x140000 @ 02010638
    ldrgt pc, [r2, r0, lsl #2] @ 0201063c
    b .L_0200e030 @ 02010640
@ z80_dispatch_02010644 at 0x02010644
    ldr r0, [sp, #0x44] @ 02010644
    bic r0, r0, #3 @ 02010648
    orr r0, r0, #2 @ 0201064c
    str r0, [sp, #0x44] @ 02010650
    ldrb r0, [fp], #1 @ 02010654
    subs r5, r5, #0x80000 @ 02010658
    ldrgt pc, [r2, r0, lsl #2] @ 0201065c
    b .L_0200e030 @ 02010660
@ z80_dispatch_02010664 at 0x02010664
    ldr r0, [sp, #0x3c] @ 02010664
    bic r5, r5, #0xd7 @ 02010668
    ldr r1, [sp, #0x44] @ 0201066c
    movs r4, r0 @ 02010670
    orrmi r5, r5, #0x80 @ 02010674
    orreq r5, r5, #0x40 @ 02010678
    tst r1, #4 @ 0201067c
    orrne r5, r5, #4 @ 02010680
    ldrb r0, [fp], #1 @ 02010684
    subs r5, r5, #0x90000 @ 02010688
    ldrgt pc, [r2, r0, lsl #2] @ 0201068c
    b .L_0200e030 @ 02010690
@ z80_dispatch_02010694 at 0x02010694
    orr r0, r6, r7, lsr #8 @ 02010694
    lsr r0, r0, #0x10 @ 02010698
    mov r1, #0xff000000 @ 0201069c
    bic r5, r5, #0xd7 @ 020106a0
    orr r5, r5, #0x84 @ 020106a4
    and sl, sl, #0xff0000 @ 020106a8
    orr sl, sl, r1 @ 020106ac
    ldrb r0, [fp], #1 @ 020106b0
    subs r5, r5, #0xc0000 @ 020106b4
    ldrgt pc, [r2, r0, lsl #2] @ 020106b8
    b .L_0200e030 @ 020106bc
@ z80_dispatch_020106c0 at 0x020106c0
    orr r0, r6, r7, lsr #8 @ 020106c0
    lsr r0, r0, #0x10 @ 020106c4
    and r1, sl, #0xff000000 @ 020106c8
    ldrb r0, [fp], #1 @ 020106cc
    subs r5, r5, #0xc0000 @ 020106d0
    ldrgt pc, [r2, r0, lsl #2] @ 020106d4
    b .L_0200e030 @ 020106d8
@ z80_dispatch_020106dc at 0x020106dc
    mov r0, sl @ 020106dc
    and lr, r5, #1 @ 020106e0
    bic r5, r5, #0xd7 @ 020106e4
    orr r5, r5, #2 @ 020106e8
    subs sl, sl, lr, lsl #16 @ 020106ec
    orrlo r5, r5, #1 @ 020106f0
    orrvs r5, r5, #4 @ 020106f4
    subs sl, sl, r0 @ 020106f8
    orrmi r5, r5, #0x80 @ 020106fc
    orreq r5, r5, #0x40 @ 02010700
    orrlo r5, r5, #1 @ 02010704
    eorvs r5, r5, #4 @ 02010708
    ldrb r0, [fp], #1 @ 0201070c
    subs r5, r5, #0xf0000 @ 02010710
    ldrgt pc, [r2, r0, lsl #2] @ 02010714
    b .L_0200e030 @ 02010718
@ z80_dispatch_0201071c at 0x0201071c
    ldrb r0, [fp], #1 @ 0201071c
    ldrb lr, [fp], #1 @ 02010720
    orr r0, r0, lr, lsl #8 @ 02010724
    lsr r1, sl, #0x10 @ 02010728
    strb r1, [r3, r0] @ 0201072c
    lsr r1, r1, #8 @ 02010730
    add r0, r0, #1 @ 02010734
    strb r1, [r3, r0] @ 02010738
    ldrb r0, [fp], #1 @ 0201073c
    subs r5, r5, #0x140000 @ 02010740
    ldrgt pc, [r2, r0, lsl #2] @ 02010744
    b .L_0200e030 @ 02010748
@ z80_dispatch_0201074c at 0x0201074c
    cmp sl, #0x20000000 @ 0201074c
    .word 0x2bbfc965 @ 02010750 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010754
    lsl r1, r4, #4 @ 02010758
    orr r1, r1, r0, lsl #20 @ 0201075c
    lsr r1, r1, #0x18 @ 02010760
    and r0, r0, #0xf @ 02010764
    and r4, r4, #0xf0000000 @ 02010768
    orrs r4, r4, r0, lsl #24 @ 0201076c
    ldr lr, [pc, #0x2c] @ 02010770
    bic r5, r5, #0xd6 @ 02010774
    ldrb lr, [lr, r4, lsr #24] @ 02010778
    orrmi r5, r5, #0x80 @ 0201077c
    orreq r5, r5, #0x40 @ 02010780
    orr r5, r5, lr @ 02010784
    cmp sl, #0x20000000 @ 02010788
    .word 0x2bbfc966 @ 0201078c blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 02010790
    ldrb r0, [fp], #1 @ 02010794
    subs r5, r5, #0x120000 @ 02010798
    ldrgt pc, [r2, r0, lsl #2] @ 0201079c
    b .L_0200e030 @ 020107a0
    .byte 0x20, 0xdd, 0x00, 0x02 @ 020107a4
@ z80_dispatch_020107a8 at 0x020107a8
    orr r0, r6, r7, lsr #8 @ 020107a8
    lsr r0, r0, #0x10 @ 020107ac
    mov r1, #0xff000000 @ 020107b0
    bic r5, r5, #0xd7 @ 020107b4
    orr r5, r5, #0x84 @ 020107b8
    and sl, sl, #0xff000000 @ 020107bc
    orr sl, sl, r1, lsr #8 @ 020107c0
    ldrb r0, [fp], #1 @ 020107c4
    subs r5, r5, #0xc0000 @ 020107c8
    ldrgt pc, [r2, r0, lsl #2] @ 020107cc
    b .L_0200e030 @ 020107d0
@ z80_dispatch_020107d4 at 0x020107d4
    orr r0, r6, r7, lsr #8 @ 020107d4
    lsr r0, r0, #0x10 @ 020107d8
    lsl r1, sl, #8 @ 020107dc
    ldrb r0, [fp], #1 @ 020107e0
    subs r5, r5, #0xc0000 @ 020107e4
    ldrgt pc, [r2, r0, lsl #2] @ 020107e8
    b .L_0200e030 @ 020107ec
@ z80_dispatch_020107f0 at 0x020107f0
    mov r0, sl @ 020107f0
    lsrs r1, r5, #1 @ 020107f4
    bic r5, r5, #0xd7 @ 020107f8
    addshs sl, sl, #0x10000 @ 020107fc
    orrhs r5, r5, #1 @ 02010800
    orrvs r5, r5, #4 @ 02010804
    adds sl, sl, r0 @ 02010808
    orrmi r5, r5, #0x80 @ 0201080c
    orreq r5, r5, #0x40 @ 02010810
    orrhs r5, r5, #1 @ 02010814
    eorvs r5, r5, #4 @ 02010818
    ldrb r0, [fp], #1 @ 0201081c
    subs r5, r5, #0xf0000 @ 02010820
    ldrgt pc, [r2, r0, lsl #2] @ 02010824
    b .L_0200e030 @ 02010828
@ z80_dispatch_0201082c at 0x0201082c
    ldrb r0, [fp], #1 @ 0201082c
    ldrb lr, [fp], #1 @ 02010830
    orr r0, r0, lr, lsl #8 @ 02010834
    cmp r0, #0x2000 @ 02010838
    .word 0xabbfc92e @ 0201083c blge #0x1002cfc
    ldrb lr, [r3, r0] @ 02010840
    add r0, r0, #1 @ 02010844
    ldrb r0, [r3, r0] @ 02010848
    orr r0, lr, r0, lsl #8 @ 0201084c
    lsl sl, r0, #0x10 @ 02010850
    ldrb r0, [fp], #1 @ 02010854
    subs r5, r5, #0x140000 @ 02010858
    ldrgt pc, [r2, r0, lsl #2] @ 0201085c
    b .L_0200e030 @ 02010860
@ z80_dispatch_02010864 at 0x02010864
    cmp sl, #0x20000000 @ 02010864
    .word 0x2bbfc91f @ 02010868 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 0201086c
    and r1, r4, #0xf000000 @ 02010870
    orr r1, r1, r0, lsl #28 @ 02010874
    lsr r1, r1, #0x18 @ 02010878
    lsr r0, r0, #4 @ 0201087c
    and r4, r4, #0xf0000000 @ 02010880
    orrs r4, r4, r0, lsl #24 @ 02010884
    ldr lr, [pc, #0x2c] @ 02010888
    bic r5, r5, #0xd6 @ 0201088c
    ldrb lr, [lr, r4, lsr #24] @ 02010890
    orrmi r5, r5, #0x80 @ 02010894
    orreq r5, r5, #0x40 @ 02010898
    orr r5, r5, lr @ 0201089c
    cmp sl, #0x20000000 @ 020108a0
    .word 0x2bbfc920 @ 020108a4 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 020108a8
    ldrb r0, [fp], #1 @ 020108ac
    subs r5, r5, #0x120000 @ 020108b0
    ldrgt pc, [r2, r0, lsl #2] @ 020108b4
    b .L_0200e030 @ 020108b8
    .byte 0x20, 0xdd, 0x00, 0x02 @ 020108bc
@ z80_dispatch_020108c0 at 0x020108c0
    orr r0, r6, r7, lsr #8 @ 020108c0
    lsr r0, r0, #0x10 @ 020108c4
    mov r1, #0xff000000 @ 020108c8
    bic r5, r5, #0xd7 @ 020108cc
    orr r5, r5, #0x84 @ 020108d0
    ldrb r0, [fp], #1 @ 020108d4
    subs r5, r5, #0xc0000 @ 020108d8
    ldrgt pc, [r2, r0, lsl #2] @ 020108dc
    b .L_0200e030 @ 020108e0
@ z80_dispatch_020108e4 at 0x020108e4
    orr r0, r6, r7, lsr #8 @ 020108e4
    lsr r0, r0, #0x10 @ 020108e8
    mov r1, #0 @ 020108ec
    ldrb r0, [fp], #1 @ 020108f0
    subs r5, r5, #0xc0000 @ 020108f4
    ldrgt pc, [r2, r0, lsl #2] @ 020108f8
    b .L_0200e030 @ 020108fc
@ z80_dispatch_02010900 at 0x02010900
    sub r0, ip, r3 @ 02010900
    lsl r0, r0, #0x10 @ 02010904
    and lr, r5, #1 @ 02010908
    bic r5, r5, #0xd7 @ 0201090c
    orr r5, r5, #2 @ 02010910
    subs sl, sl, lr, lsl #16 @ 02010914
    orrlo r5, r5, #1 @ 02010918
    orrvs r5, r5, #4 @ 0201091c
    subs sl, sl, r0 @ 02010920
    orrmi r5, r5, #0x80 @ 02010924
    orreq r5, r5, #0x40 @ 02010928
    orrlo r5, r5, #1 @ 0201092c
    eorvs r5, r5, #4 @ 02010930
    ldrb r0, [fp], #1 @ 02010934
    subs r5, r5, #0xf0000 @ 02010938
    ldrgt pc, [r2, r0, lsl #2] @ 0201093c
    b .L_0200e030 @ 02010940
@ z80_dispatch_02010944 at 0x02010944
    ldrb r0, [fp], #1 @ 02010944
    ldrb lr, [fp], #1 @ 02010948
    orr r0, r0, lr, lsl #8 @ 0201094c
    sub r1, ip, r3 @ 02010950
    strb r1, [r3, r0] @ 02010954
    lsr r1, r1, #8 @ 02010958
    add r0, r0, #1 @ 0201095c
    strb r1, [r3, r0] @ 02010960
    ldrb r0, [fp], #1 @ 02010964
    subs r5, r5, #0x140000 @ 02010968
    ldrgt pc, [r2, r0, lsl #2] @ 0201096c
    b .L_0200e030 @ 02010970
@ z80_dispatch_02010974 at 0x02010974
    ldrb r0, [fp], #1 @ 02010974
    subs r5, r5, #0x80000 @ 02010978
    ldrgt pc, [r2, r0, lsl #2] @ 0201097c
    b .L_0200e030 @ 02010980
@ z80_dispatch_02010984 at 0x02010984
    orr r0, r6, r7, lsr #8 @ 02010984
    lsr r0, r0, #0x10 @ 02010988
    mov r4, #0xff000000 @ 0201098c
    bic r5, r5, #0xd7 @ 02010990
    orr r5, r5, #0x84 @ 02010994
    ldrb r0, [fp], #1 @ 02010998
    subs r5, r5, #0xc0000 @ 0201099c
    ldrgt pc, [r2, r0, lsl #2] @ 020109a0
    b .L_0200e030 @ 020109a4
@ z80_dispatch_020109a8 at 0x020109a8
    orr r0, r6, r7, lsr #8 @ 020109a8
    lsr r0, r0, #0x10 @ 020109ac
    ldrb r0, [fp], #1 @ 020109b0
    subs r5, r5, #0xc0000 @ 020109b4
    ldrgt pc, [r2, r0, lsl #2] @ 020109b8
    b .L_0200e030 @ 020109bc
@ z80_dispatch_020109c0 at 0x020109c0
    sub r0, ip, r3 @ 020109c0
    lsl r0, r0, #0x10 @ 020109c4
    lsrs r1, r5, #1 @ 020109c8
    bic r5, r5, #0xd7 @ 020109cc
    addshs sl, sl, #0x10000 @ 020109d0
    orrhs r5, r5, #1 @ 020109d4
    orrvs r5, r5, #4 @ 020109d8
    adds sl, sl, r0 @ 020109dc
    orrmi r5, r5, #0x80 @ 020109e0
    orreq r5, r5, #0x40 @ 020109e4
    orrhs r5, r5, #1 @ 020109e8
    eorvs r5, r5, #4 @ 020109ec
    ldrb r0, [fp], #1 @ 020109f0
    subs r5, r5, #0xf0000 @ 020109f4
    ldrgt pc, [r2, r0, lsl #2] @ 020109f8
    b .L_0200e030 @ 020109fc
@ z80_dispatch_02010a00 at 0x02010a00
    ldrb r0, [fp], #1 @ 02010a00
    ldrb lr, [fp], #1 @ 02010a04
    orr r0, r0, lr, lsl #8 @ 02010a08
    cmp r0, #0x2000 @ 02010a0c
    .word 0xabbfc8b9 @ 02010a10 blge #0x1002cfc
    ldrb lr, [r3, r0] @ 02010a14
    add r0, r0, #1 @ 02010a18
    ldrb r0, [r3, r0] @ 02010a1c
    orr r0, lr, r0, lsl #8 @ 02010a20
    add ip, r3, r0 @ 02010a24
    ldrb r0, [fp], #1 @ 02010a28
    subs r5, r5, #0x140000 @ 02010a2c
    ldrgt pc, [r2, r0, lsl #2] @ 02010a30
    b .L_0200e030 @ 02010a34
@ z80_dispatch_02010a38 at 0x02010a38
    cmp sl, #0x20000000 @ 02010a38
    .word 0x2bbfc8aa @ 02010a3c blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010a40
    add sl, sl, #0x10000 @ 02010a44
    mov r1, r0 @ 02010a48
    orr r0, r8, sb, lsr #8 @ 02010a4c
    lsr r0, r0, #0x10 @ 02010a50
    cmp r0, #0x2000 @ 02010a54
    .word 0xabbfc8ac @ 02010a58 blge #0x1002d10
    strb r1, [r3, r0] @ 02010a5c
    adds sb, sb, #0x1000000 @ 02010a60
    addhs r8, r8, #0x1000000 @ 02010a64
    bic r5, r5, #0x16 @ 02010a68
    orr r6, r6, r7, lsr #8 @ 02010a6c
    subs r6, r6, #0x10000 @ 02010a70
    lsl r7, r6, #8 @ 02010a74
    and r6, r6, #0xff000000 @ 02010a78
    orrne r5, r5, #4 @ 02010a7c
    ldrb r0, [fp], #1 @ 02010a80
    subs r5, r5, #0x100000 @ 02010a84
    ldrgt pc, [r2, r0, lsl #2] @ 02010a88
    b .L_0200e030 @ 02010a8c
@ z80_dispatch_02010a90 at 0x02010a90
    lsr r0, sl, #0x10 @ 02010a90
    cmp r0, #0x2000 @ 02010a94
    .word 0xabbfc88c @ 02010a98 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02010a9c
    bic r5, r5, #0xd6 @ 02010aa0
    cmp r4, r0, lsl #24 @ 02010aa4
    orr r5, r5, #2 @ 02010aa8
    orrmi r5, r5, #0x80 @ 02010aac
    orreq r5, r5, #0x40 @ 02010ab0
    add sl, sl, #0x10000 @ 02010ab4
    orr r6, r6, r7, lsr #8 @ 02010ab8
    subs r6, r6, #0x10000 @ 02010abc
    lsl r7, r6, #8 @ 02010ac0
    and r6, r6, #0xff000000 @ 02010ac4
    orrne r5, r5, #4 @ 02010ac8
    ldrb r0, [fp], #1 @ 02010acc
    subs r5, r5, #0x100000 @ 02010ad0
    ldrgt pc, [r2, r0, lsl #2] @ 02010ad4
    b .L_0200e030 @ 02010ad8
@ z80_dispatch_02010adc at 0x02010adc
    orr r0, r6, r7, lsr #8 @ 02010adc
    lsr r0, r0, #0x10 @ 02010ae0
    mov r0, #0xff @ 02010ae4
    mov r1, r0 @ 02010ae8
    cmp sl, #0x20000000 @ 02010aec
    .word 0x2bbfc88d @ 02010af0 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 02010af4
    add sl, sl, #0x10000 @ 02010af8
    bic r5, r5, #0x40 @ 02010afc
    orr r5, r5, #2 @ 02010b00
    subs r6, r6, #0x1000000 @ 02010b04
    orreq r5, r5, #0x40 @ 02010b08
    ldrb r0, [fp], #1 @ 02010b0c
    subs r5, r5, #0x100000 @ 02010b10
    ldrgt pc, [r2, r0, lsl #2] @ 02010b14
    b .L_0200e030 @ 02010b18
@ z80_dispatch_02010b1c at 0x02010b1c
    bic r5, r5, #0x40 @ 02010b1c
    orr r5, r5, #2 @ 02010b20
    subs r6, r6, #0x1000000 @ 02010b24
    orreq r5, r5, #0x40 @ 02010b28
    cmp sl, #0x20000000 @ 02010b2c
    .word 0x2bbfc86d @ 02010b30 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010b34
    mov r1, r0 @ 02010b38
    orr r0, r6, r7, lsr #8 @ 02010b3c
    lsr r0, r0, #0x10 @ 02010b40
    add sl, sl, #0x10000 @ 02010b44
    ldrb r0, [fp], #1 @ 02010b48
    subs r5, r5, #0x100000 @ 02010b4c
    ldrgt pc, [r2, r0, lsl #2] @ 02010b50
    b .L_0200e030 @ 02010b54
@ z80_dispatch_02010b58 at 0x02010b58
    cmp sl, #0x20000000 @ 02010b58
    .word 0x2bbfc862 @ 02010b5c blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010b60
    sub sl, sl, #0x10000 @ 02010b64
    mov r1, r0 @ 02010b68
    orr r0, r8, sb, lsr #8 @ 02010b6c
    lsr r0, r0, #0x10 @ 02010b70
    cmp r0, #0x2000 @ 02010b74
    .word 0xabbfc864 @ 02010b78 blge #0x1002d10
    strb r1, [r3, r0] @ 02010b7c
    subs sb, sb, #0x1000000 @ 02010b80
    sublo r8, r8, #0x1000000 @ 02010b84
    bic r5, r5, #0x16 @ 02010b88
    orr r6, r6, r7, lsr #8 @ 02010b8c
    subs r6, r6, #0x10000 @ 02010b90
    lsl r7, r6, #8 @ 02010b94
    and r6, r6, #0xff000000 @ 02010b98
    orrne r5, r5, #4 @ 02010b9c
    ldrb r0, [fp], #1 @ 02010ba0
    subs r5, r5, #0x100000 @ 02010ba4
    ldrgt pc, [r2, r0, lsl #2] @ 02010ba8
    b .L_0200e030 @ 02010bac
@ z80_dispatch_02010bb0 at 0x02010bb0
    cmp sl, #0x20000000 @ 02010bb0
    .word 0x2bbfc84c @ 02010bb4 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010bb8
    bic r5, r5, #0xd6 @ 02010bbc
    cmp r4, r0, lsl #24 @ 02010bc0
    orr r5, r5, #2 @ 02010bc4
    orrmi r5, r5, #0x80 @ 02010bc8
    orreq r5, r5, #0x40 @ 02010bcc
    sub sl, sl, #0x10000 @ 02010bd0
    orr r6, r6, r7, lsr #8 @ 02010bd4
    subs r6, r6, #0x10000 @ 02010bd8
    lsl r7, r6, #8 @ 02010bdc
    and r6, r6, #0xff000000 @ 02010be0
    orrne r5, r5, #4 @ 02010be4
    ldrb r0, [fp], #1 @ 02010be8
    subs r5, r5, #0x100000 @ 02010bec
    ldrgt pc, [r2, r0, lsl #2] @ 02010bf0
    b .L_0200e030 @ 02010bf4
@ z80_dispatch_02010bf8 at 0x02010bf8
    orr r0, r6, r7, lsr #8 @ 02010bf8
    lsr r0, r0, #0x10 @ 02010bfc
    mov r0, #0xff @ 02010c00
    mov r1, r0 @ 02010c04
    cmp sl, #0x20000000 @ 02010c08
    .word 0x2bbfc846 @ 02010c0c blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 02010c10
    sub sl, sl, #0x10000 @ 02010c14
    bic r5, r5, #0x40 @ 02010c18
    orr r5, r5, #2 @ 02010c1c
    subs r6, r6, #0x1000000 @ 02010c20
    orreq r5, r5, #0x40 @ 02010c24
    ldrb r0, [fp], #1 @ 02010c28
    subs r5, r5, #0x100000 @ 02010c2c
    ldrgt pc, [r2, r0, lsl #2] @ 02010c30
    b .L_0200e030 @ 02010c34
@ z80_dispatch_02010c38 at 0x02010c38
    bic r5, r5, #0x40 @ 02010c38
    orr r5, r5, #2 @ 02010c3c
    subs r6, r6, #0x1000000 @ 02010c40
    orreq r5, r5, #0x40 @ 02010c44
    cmp sl, #0x20000000 @ 02010c48
    .word 0x2bbfc826 @ 02010c4c blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010c50
    mov r1, r0 @ 02010c54
    orr r0, r6, r7, lsr #8 @ 02010c58
    lsr r0, r0, #0x10 @ 02010c5c
    sub sl, sl, #0x10000 @ 02010c60
    ldrb r0, [fp], #1 @ 02010c64
    subs r5, r5, #0x100000 @ 02010c68
    ldrgt pc, [r2, r0, lsl #2] @ 02010c6c
    b .L_0200e030 @ 02010c70
@ z80_dispatch_02010c74 at 0x02010c74
    cmp sl, #0x20000000 @ 02010c74
    .word 0x2bbfc81b @ 02010c78 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010c7c
    add sl, sl, #0x10000 @ 02010c80
    mov r1, r0 @ 02010c84
    orr r0, r8, sb, lsr #8 @ 02010c88
    lsr r0, r0, #0x10 @ 02010c8c
    cmp r0, #0x2000 @ 02010c90
    .word 0xabbfc81d @ 02010c94 blge #0x1002d10
    strb r1, [r3, r0] @ 02010c98
    adds sb, sb, #0x1000000 @ 02010c9c
    addhs r8, r8, #0x1000000 @ 02010ca0
    bic r5, r5, #0x16 @ 02010ca4
    orr r6, r6, r7, lsr #8 @ 02010ca8
    subs r6, r6, #0x10000 @ 02010cac
    lsl r7, r6, #8 @ 02010cb0
    and r6, r6, #0xff000000 @ 02010cb4
    orrne r5, r5, #4 @ 02010cb8
    subne r5, r5, #0x50000 @ 02010cbc
    subne fp, fp, #2 @ 02010cc0
    ldrb r0, [fp], #1 @ 02010cc4
    subs r5, r5, #0x100000 @ 02010cc8
    ldrgt pc, [r2, r0, lsl #2] @ 02010ccc
    b .L_0200e030 @ 02010cd0
@ z80_dispatch_02010cd4 at 0x02010cd4
    lsr r0, sl, #0x10 @ 02010cd4
    cmp r0, #0x2000 @ 02010cd8
    .word 0xabbfc7fb @ 02010cdc blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02010ce0
    bic r5, r5, #0xd6 @ 02010ce4
    cmp r4, r0, lsl #24 @ 02010ce8
    orr r5, r5, #2 @ 02010cec
    orrmi r5, r5, #0x80 @ 02010cf0
    orreq r5, r5, #0x40 @ 02010cf4
    add sl, sl, #0x10000 @ 02010cf8
    orr r6, r6, r7, lsr #8 @ 02010cfc
    subs r6, r6, #0x10000 @ 02010d00
    lsl r7, r6, #8 @ 02010d04
    and r6, r6, #0xff000000 @ 02010d08
    orrne r5, r5, #4 @ 02010d0c
    and r0, r5, #0x44 @ 02010d10
    cmp r0, #4 @ 02010d14
    subeq r5, r5, #0x50000 @ 02010d18
    subeq fp, fp, #2 @ 02010d1c
    ldrb r0, [fp], #1 @ 02010d20
    subs r5, r5, #0x100000 @ 02010d24
    ldrgt pc, [r2, r0, lsl #2] @ 02010d28
    b .L_0200e030 @ 02010d2c
@ z80_dispatch_02010d30 at 0x02010d30
    orr r0, r6, r7, lsr #8 @ 02010d30
    lsr r0, r0, #0x10 @ 02010d34
    mov r0, #0xff @ 02010d38
    mov r1, r0 @ 02010d3c
    cmp sl, #0x20000000 @ 02010d40
    .word 0x2bbfc7f8 @ 02010d44 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 02010d48
    add sl, sl, #0x10000 @ 02010d4c
    bic r5, r5, #0x40 @ 02010d50
    orr r5, r5, #2 @ 02010d54
    subs r6, r6, #0x1000000 @ 02010d58
    orreq r5, r5, #0x40 @ 02010d5c
    subne r5, r5, #0x50000 @ 02010d60
    subne fp, fp, #2 @ 02010d64
    ldrb r0, [fp], #1 @ 02010d68
    subs r5, r5, #0x100000 @ 02010d6c
    ldrgt pc, [r2, r0, lsl #2] @ 02010d70
    b .L_0200e030 @ 02010d74
@ z80_dispatch_02010d78 at 0x02010d78
    subs r6, r6, #0x1000000 @ 02010d78
    bicne r5, r5, #0x40 @ 02010d7c
    orreq r5, r5, #0x40 @ 02010d80
    orr r5, r5, #2 @ 02010d84
    subne r5, r5, #0x50000 @ 02010d88
    subne fp, fp, #2 @ 02010d8c
    cmp sl, #0x20000000 @ 02010d90
    .word 0x2bbfc7d4 @ 02010d94 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010d98
    add sl, sl, #0x10000 @ 02010d9c
    mov r1, r0 @ 02010da0
    orr r0, r6, r7, lsr #8 @ 02010da4
    lsr r0, r0, #0x10 @ 02010da8
    ldrb r0, [fp], #1 @ 02010dac
    subs r5, r5, #0x100000 @ 02010db0
    ldrgt pc, [r2, r0, lsl #2] @ 02010db4
    b .L_0200e030 @ 02010db8
@ z80_dispatch_02010dbc at 0x02010dbc
    cmp sl, #0x20000000 @ 02010dbc
    .word 0x2bbfc7c9 @ 02010dc0 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010dc4
    sub sl, sl, #0x10000 @ 02010dc8
    mov r1, r0 @ 02010dcc
    orr r0, r8, sb, lsr #8 @ 02010dd0
    lsr r0, r0, #0x10 @ 02010dd4
    cmp r0, #0x2000 @ 02010dd8
    .word 0xabbfc7cb @ 02010ddc blge #0x1002d10
    strb r1, [r3, r0] @ 02010de0
    subs sb, sb, #0x1000000 @ 02010de4
    sublo r8, r8, #0x1000000 @ 02010de8
    bic r5, r5, #0x16 @ 02010dec
    orr r6, r6, r7, lsr #8 @ 02010df0
    subs r6, r6, #0x10000 @ 02010df4
    lsl r7, r6, #8 @ 02010df8
    and r6, r6, #0xff000000 @ 02010dfc
    orrne r5, r5, #4 @ 02010e00
    subne r5, r5, #0x50000 @ 02010e04
    subne fp, fp, #2 @ 02010e08
    ldrb r0, [fp], #1 @ 02010e0c
    subs r5, r5, #0x100000 @ 02010e10
    ldrgt pc, [r2, r0, lsl #2] @ 02010e14
    b .L_0200e030 @ 02010e18
@ z80_dispatch_02010e1c at 0x02010e1c
    cmp sl, #0x20000000 @ 02010e1c
    .word 0x2bbfc7b1 @ 02010e20 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010e24
    bic r5, r5, #0xd6 @ 02010e28
    cmp r4, r0, lsl #24 @ 02010e2c
    orr r5, r5, #2 @ 02010e30
    orrmi r5, r5, #0x80 @ 02010e34
    orreq r5, r5, #0x40 @ 02010e38
    sub sl, sl, #0x10000 @ 02010e3c
    orr r6, r6, r7, lsr #8 @ 02010e40
    subs r6, r6, #0x10000 @ 02010e44
    lsl r7, r6, #8 @ 02010e48
    and r6, r6, #0xff000000 @ 02010e4c
    orrne r5, r5, #4 @ 02010e50
    and r0, r5, #0x44 @ 02010e54
    cmp r0, #4 @ 02010e58
    subeq r5, r5, #0x50000 @ 02010e5c
    subeq fp, fp, #2 @ 02010e60
    ldrb r0, [fp], #1 @ 02010e64
    subs r5, r5, #0x100000 @ 02010e68
    ldrgt pc, [r2, r0, lsl #2] @ 02010e6c
    b .L_0200e030 @ 02010e70
@ z80_dispatch_02010e74 at 0x02010e74
    orr r0, r6, r7, lsr #8 @ 02010e74
    lsr r0, r0, #0x10 @ 02010e78
    mov r0, #0xff @ 02010e7c
    mov r1, r0 @ 02010e80
    cmp sl, #0x20000000 @ 02010e84
    .word 0x2bbfc7a7 @ 02010e88 blhs #0x1002d2c
    strb r1, [r3, sl, lsr #16] @ 02010e8c
    sub sl, sl, #0x10000 @ 02010e90
    bic r5, r5, #0x40 @ 02010e94
    orr r5, r5, #2 @ 02010e98
    subs r6, r6, #0x1000000 @ 02010e9c
    orreq r5, r5, #0x40 @ 02010ea0
    subne r5, r5, #0x50000 @ 02010ea4
    subne fp, fp, #2 @ 02010ea8
    ldrb r0, [fp], #1 @ 02010eac
    subs r5, r5, #0x100000 @ 02010eb0
    ldrgt pc, [r2, r0, lsl #2] @ 02010eb4
    b .L_0200e030 @ 02010eb8
@ z80_dispatch_02010ebc at 0x02010ebc
    bic r5, r5, #0x40 @ 02010ebc
    orr r5, r5, #2 @ 02010ec0
    subs r6, r6, #0x1000000 @ 02010ec4
    orreq r5, r5, #0x40 @ 02010ec8
    subne r5, r5, #0x50000 @ 02010ecc
    subne fp, fp, #2 @ 02010ed0
    cmp sl, #0x20000000 @ 02010ed4
    .word 0x2bbfc783 @ 02010ed8 blhs #0x1002cec
    ldrb r0, [r3, sl, lsr #16] @ 02010edc
    mov r1, r0 @ 02010ee0
    orr r0, r6, r7, lsr #8 @ 02010ee4
    lsr r0, r0, #0x10 @ 02010ee8
    sub sl, sl, #0x10000 @ 02010eec
    ldrb r0, [fp], #1 @ 02010ef0
    subs r5, r5, #0x100000 @ 02010ef4
    ldrgt pc, [r2, r0, lsl #2] @ 02010ef8
    b .L_0200e030 @ 02010efc
@ z80_dispatch_02010f00 at 0x02010f00
    ldrb r0, [fp], #1 @ 02010f00
    subs r5, r5, #0x80000 @ 02010f04
    ldrgt pc, [r2, r0, lsl #2] @ 02010f08
    b .L_0200e030 @ 02010f0c
@ z80_dispatch_02010f10 at 0x02010f10
    orr r1, r6, r7, lsr #8 @ 02010f10
    adds r0, r0, r1 @ 02010f14
    bic r5, r5, #0x13 @ 02010f18
    orrhs r5, r5, #1 @ 02010f1c
    str r0, [lr] @ 02010f20
    ldrb r0, [fp], #1 @ 02010f24
    subs r5, r5, #0xf0000 @ 02010f28
    ldrgt pc, [r2, r0, lsl #2] @ 02010f2c
    b .L_0200e030 @ 02010f30
@ z80_dispatch_02010f34 at 0x02010f34
    orr r1, r8, sb, lsr #8 @ 02010f34
    adds r0, r0, r1 @ 02010f38
    bic r5, r5, #0x13 @ 02010f3c
    orrhs r5, r5, #1 @ 02010f40
    str r0, [lr] @ 02010f44
    ldrb r0, [fp], #1 @ 02010f48
    subs r5, r5, #0xf0000 @ 02010f4c
    ldrgt pc, [r2, r0, lsl #2] @ 02010f50
    b .L_0200e030 @ 02010f54
@ z80_dispatch_02010f58 at 0x02010f58
    ldrb r0, [fp], #1 @ 02010f58
    ldrb r1, [fp], #1 @ 02010f5c
    orr r0, r0, r1, lsl #8 @ 02010f60
    lsl r0, r0, #0x10 @ 02010f64
    str r0, [lr] @ 02010f68
    ldrb r0, [fp], #1 @ 02010f6c
    subs r5, r5, #0xe0000 @ 02010f70
    ldrgt pc, [r2, r0, lsl #2] @ 02010f74
    b .L_0200e030 @ 02010f78
@ z80_dispatch_02010f7c at 0x02010f7c
    lsr r1, r0, #0x10 @ 02010f7c
    ldrb r0, [fp], #1 @ 02010f80
    ldrb lr, [fp], #1 @ 02010f84
    orr r0, r0, lr, lsl #8 @ 02010f88
    strb r1, [r3, r0] @ 02010f8c
    lsr r1, r1, #8 @ 02010f90
    add r0, r0, #1 @ 02010f94
    strb r1, [r3, r0] @ 02010f98
    ldrb r0, [fp], #1 @ 02010f9c
    subs r5, r5, #0x140000 @ 02010fa0
    ldrgt pc, [r2, r0, lsl #2] @ 02010fa4
    b .L_0200e030 @ 02010fa8
@ z80_dispatch_02010fac at 0x02010fac
    add r0, r0, #0x10000 @ 02010fac
    str r0, [lr] @ 02010fb0
    ldrb r0, [fp], #1 @ 02010fb4
    subs r5, r5, #0xa0000 @ 02010fb8
    ldrgt pc, [r2, r0, lsl #2] @ 02010fbc
    b .L_0200e030 @ 02010fc0
@ z80_dispatch_02010fc4 at 0x02010fc4
    and r1, r0, #0xff000000 @ 02010fc4
    bic r5, r5, #0xd6 @ 02010fc8
    adds r1, r1, #0x1000000 @ 02010fcc
    orrmi r5, r5, #0x80 @ 02010fd0
    orrvs r5, r5, #4 @ 02010fd4
    orreq r5, r5, #0x40 @ 02010fd8
    and r0, r0, #0xff0000 @ 02010fdc
    orr r0, r0, r1 @ 02010fe0
    str r0, [lr] @ 02010fe4
    ldrb r0, [fp], #1 @ 02010fe8
    subs r5, r5, #0x80000 @ 02010fec
    ldrgt pc, [r2, r0, lsl #2] @ 02010ff0
    b .L_0200e030 @ 02010ff4
@ z80_dispatch_02010ff8 at 0x02010ff8
    and r1, r0, #0xff000000 @ 02010ff8
    bic r5, r5, #0xd6 @ 02010ffc
    subs r1, r1, #0x1000000 @ 02011000
    orr r5, r5, #2 @ 02011004
    orrmi r5, r5, #0x80 @ 02011008
    orreq r5, r5, #0x40 @ 0201100c
    orrvs r5, r5, #4 @ 02011010
    and r0, r0, #0xff0000 @ 02011014
    orr r0, r0, r1 @ 02011018
    str r0, [lr] @ 0201101c
    ldrb r0, [fp], #1 @ 02011020
    subs r5, r5, #0x80000 @ 02011024
    ldrgt pc, [r2, r0, lsl #2] @ 02011028
    b .L_0200e030 @ 0201102c
@ z80_dispatch_02011030 at 0x02011030
    ldrb r1, [fp], #1 @ 02011030
    and r0, r0, #0xff0000 @ 02011034
    orr r0, r0, r1, lsl #24 @ 02011038
    str r0, [lr] @ 0201103c
    ldrb r0, [fp], #1 @ 02011040
    subs r5, r5, #0xb0000 @ 02011044
    ldrgt pc, [r2, r0, lsl #2] @ 02011048
    b .L_0200e030 @ 0201104c
@ z80_dispatch_02011050 at 0x02011050
    mov r1, r0 @ 02011050
    adds r0, r0, r1 @ 02011054
    bic r5, r5, #0x13 @ 02011058
    orrhs r5, r5, #1 @ 0201105c
    str r0, [lr] @ 02011060
    ldrb r0, [fp], #1 @ 02011064
    subs r5, r5, #0xf0000 @ 02011068
    ldrgt pc, [r2, r0, lsl #2] @ 0201106c
    b .L_0200e030 @ 02011070
@ z80_dispatch_02011074 at 0x02011074
    ldrb r0, [fp], #1 @ 02011074
    ldrb r1, [fp], #1 @ 02011078
    orr r0, r0, r1, lsl #8 @ 0201107c
    str lr, [sp, #0x64] @ 02011080
    cmp r0, #0x2000 @ 02011084
    .word 0xabbfc71b @ 02011088 blge #0x1002cfc
    add r0, r3, r0 @ 0201108c
    ldrb r1, [r0], #1 @ 02011090
    ldrb r0, [r0] @ 02011094
    orr r0, r1, r0, lsl #8 @ 02011098
    ldr lr, [sp, #0x64] @ 0201109c
    lsl r0, r0, #0x10 @ 020110a0
    str r0, [lr] @ 020110a4
    ldrb r0, [fp], #1 @ 020110a8
    subs r5, r5, #0x140000 @ 020110ac
    ldrgt pc, [r2, r0, lsl #2] @ 020110b0
    b .L_0200e030 @ 020110b4
@ z80_dispatch_020110b8 at 0x020110b8
    sub r0, r0, #0x10000 @ 020110b8
    str r0, [lr] @ 020110bc
    ldrb r0, [fp], #1 @ 020110c0
    subs r5, r5, #0xa0000 @ 020110c4
    ldrgt pc, [r2, r0, lsl #2] @ 020110c8
    b .L_0200e030 @ 020110cc
@ z80_dispatch_020110d0 at 0x020110d0
    lsl r1, r0, #8 @ 020110d0
    bic r5, r5, #0xd6 @ 020110d4
    adds r1, r1, #0x1000000 @ 020110d8
    orrmi r5, r5, #0x80 @ 020110dc
    orrvs r5, r5, #4 @ 020110e0
    orreq r5, r5, #0x40 @ 020110e4
    and r0, r0, #0xff000000 @ 020110e8
    orr r0, r0, r1, lsr #8 @ 020110ec
    str r0, [lr] @ 020110f0
    ldrb r0, [fp], #1 @ 020110f4
    subs r5, r5, #0x80000 @ 020110f8
    ldrgt pc, [r2, r0, lsl #2] @ 020110fc
    b .L_0200e030 @ 02011100
@ z80_dispatch_02011104 at 0x02011104
    lsl r1, r0, #8 @ 02011104
    bic r5, r5, #0xd6 @ 02011108
    subs r1, r1, #0x1000000 @ 0201110c
    orr r5, r5, #2 @ 02011110
    orrmi r5, r5, #0x80 @ 02011114
    orreq r5, r5, #0x40 @ 02011118
    orrvs r5, r5, #4 @ 0201111c
    and r0, r0, #0xff000000 @ 02011120
    orr r0, r0, r1, lsr #8 @ 02011124
    str r0, [lr] @ 02011128
    ldrb r0, [fp], #1 @ 0201112c
    subs r5, r5, #0x80000 @ 02011130
    ldrgt pc, [r2, r0, lsl #2] @ 02011134
    b .L_0200e030 @ 02011138
@ z80_dispatch_0201113c at 0x0201113c
    ldrb r1, [fp], #1 @ 0201113c
    and r0, r0, #0xff000000 @ 02011140
    orr r0, r0, r1, lsl #16 @ 02011144
    str r0, [lr] @ 02011148
    ldrb r0, [fp], #1 @ 0201114c
    subs r5, r5, #0xb0000 @ 02011150
    ldrgt pc, [r2, r0, lsl #2] @ 02011154
    b .L_0200e030 @ 02011158
@ z80_dispatch_0201115c at 0x0201115c
    ldrsb r1, [fp], #1 @ 0201115c
    add r0, r0, r1, lsl #16 @ 02011160
    lsr r0, r0, #0x10 @ 02011164
    mov r1, r0 @ 02011168
    cmp r0, #0x2000 @ 0201116c
    .word 0xabbfc6d9 @ 02011170 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02011174
    orr r1, r0, r1, lsl #16 @ 02011178
    lsr r0, r1, #0x10 @ 0201117c
    lsl r1, r1, #0x18 @ 02011180
    bic r5, r5, #0xd6 @ 02011184
    adds r1, r1, #0x1000000 @ 02011188
    orrmi r5, r5, #0x80 @ 0201118c
    orrvs r5, r5, #4 @ 02011190
    orreq r5, r5, #0x40 @ 02011194
    lsr r1, r1, #0x18 @ 02011198
    cmp r0, #0x2000 @ 0201119c
    .word 0xabbfc6da @ 020111a0 blge #0x1002d10
    strb r1, [r3, r0] @ 020111a4
    ldrb r0, [fp], #1 @ 020111a8
    subs r5, r5, #0x170000 @ 020111ac
    ldrgt pc, [r2, r0, lsl #2] @ 020111b0
    b .L_0200e030 @ 020111b4
@ z80_dispatch_020111b8 at 0x020111b8
    ldrsb r1, [fp], #1 @ 020111b8
    add r0, r0, r1, lsl #16 @ 020111bc
    lsr r0, r0, #0x10 @ 020111c0
    mov r1, r0 @ 020111c4
    cmp r0, #0x2000 @ 020111c8
    .word 0xabbfc6c2 @ 020111cc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020111d0
    orr r1, r0, r1, lsl #16 @ 020111d4
    lsr r0, r1, #0x10 @ 020111d8
    lsl r1, r1, #0x18 @ 020111dc
    bic r5, r5, #0xd6 @ 020111e0
    subs r1, r1, #0x1000000 @ 020111e4
    orr r5, r5, #2 @ 020111e8
    orrmi r5, r5, #0x80 @ 020111ec
    orreq r5, r5, #0x40 @ 020111f0
    orrvs r5, r5, #4 @ 020111f4
    lsr r1, r1, #0x18 @ 020111f8
    cmp r0, #0x2000 @ 020111fc
    .word 0xabbfc6c2 @ 02011200 blge #0x1002d10
    strb r1, [r3, r0] @ 02011204
    ldrb r0, [fp], #1 @ 02011208
    subs r5, r5, #0x170000 @ 0201120c
    ldrgt pc, [r2, r0, lsl #2] @ 02011210
    b .L_0200e030 @ 02011214
@ z80_dispatch_02011218 at 0x02011218
    ldrsb r1, [fp], #1 @ 02011218
    add r0, r0, r1, lsl #16 @ 0201121c
    lsr r0, r0, #0x10 @ 02011220
    ldrb r1, [fp], #1 @ 02011224
    cmp r0, #0x2000 @ 02011228
    .word 0xabbfc6b7 @ 0201122c blge #0x1002d10
    strb r1, [r3, r0] @ 02011230
    ldrb r0, [fp], #1 @ 02011234
    subs r5, r5, #0x130000 @ 02011238
    ldrgt pc, [r2, r0, lsl #2] @ 0201123c
    b .L_0200e030 @ 02011240
@ z80_dispatch_02011244 at 0x02011244
    sub r1, ip, r3 @ 02011244
    lsl r1, r1, #0x10 @ 02011248
    adds r0, r0, r1 @ 0201124c
    bic r5, r5, #0x13 @ 02011250
    orrhs r5, r5, #1 @ 02011254
    str r0, [lr] @ 02011258
    ldrb r0, [fp], #1 @ 0201125c
    subs r5, r5, #0xf0000 @ 02011260
    ldrgt pc, [r2, r0, lsl #2] @ 02011264
    b .L_0200e030 @ 02011268
@ z80_dispatch_0201126c at 0x0201126c
    and r6, r0, #0xff000000 @ 0201126c
    ldrb r0, [fp], #1 @ 02011270
    subs r5, r5, #0x80000 @ 02011274
    ldrgt pc, [r2, r0, lsl #2] @ 02011278
    b .L_0200e030 @ 0201127c
@ z80_dispatch_02011280 at 0x02011280
    lsl r6, r0, #8 @ 02011280
    ldrb r0, [fp], #1 @ 02011284
    subs r5, r5, #0x80000 @ 02011288
    ldrgt pc, [r2, r0, lsl #2] @ 0201128c
    b .L_0200e030 @ 02011290
@ z80_dispatch_02011294 at 0x02011294
    ldrsb r1, [fp], #1 @ 02011294
    add r0, r0, r1, lsl #16 @ 02011298
    lsr r0, r0, #0x10 @ 0201129c
    cmp r0, #0x2000 @ 020112a0
    .word 0xabbfc689 @ 020112a4 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 020112a8
    lsl r6, r0, #0x18 @ 020112ac
    ldrb r0, [fp], #1 @ 020112b0
    subs r5, r5, #0xf0000 @ 020112b4
    ldrgt pc, [r2, r0, lsl #2] @ 020112b8
    b .L_0200e030 @ 020112bc
@ z80_dispatch_020112c0 at 0x020112c0
    and r7, r0, #0xff000000 @ 020112c0
    ldrb r0, [fp], #1 @ 020112c4
    subs r5, r5, #0x80000 @ 020112c8
    ldrgt pc, [r2, r0, lsl #2] @ 020112cc
    b .L_0200e030 @ 020112d0
@ z80_dispatch_020112d4 at 0x020112d4
    lsl r7, r0, #8 @ 020112d4
    ldrb r0, [fp], #1 @ 020112d8
    subs r5, r5, #0x80000 @ 020112dc
    ldrgt pc, [r2, r0, lsl #2] @ 020112e0
    b .L_0200e030 @ 020112e4
@ z80_dispatch_020112e8 at 0x020112e8
    ldrsb r1, [fp], #1 @ 020112e8
    add r0, r0, r1, lsl #16 @ 020112ec
    lsr r0, r0, #0x10 @ 020112f0
    cmp r0, #0x2000 @ 020112f4
    .word 0xabbfc674 @ 020112f8 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 020112fc
    lsl r7, r0, #0x18 @ 02011300
    ldrb r0, [fp], #1 @ 02011304
    subs r5, r5, #0xf0000 @ 02011308
    ldrgt pc, [r2, r0, lsl #2] @ 0201130c
    b .L_0200e030 @ 02011310
@ z80_dispatch_02011314 at 0x02011314
    and r8, r0, #0xff000000 @ 02011314
    ldrb r0, [fp], #1 @ 02011318
    subs r5, r5, #0x80000 @ 0201131c
    ldrgt pc, [r2, r0, lsl #2] @ 02011320
    b .L_0200e030 @ 02011324
@ z80_dispatch_02011328 at 0x02011328
    lsl r8, r0, #8 @ 02011328
    ldrb r0, [fp], #1 @ 0201132c
    subs r5, r5, #0x80000 @ 02011330
    ldrgt pc, [r2, r0, lsl #2] @ 02011334
    b .L_0200e030 @ 02011338
@ z80_dispatch_0201133c at 0x0201133c
    ldrsb r1, [fp], #1 @ 0201133c
    add r0, r0, r1, lsl #16 @ 02011340
    lsr r0, r0, #0x10 @ 02011344
    cmp r0, #0x2000 @ 02011348
    .word 0xabbfc65f @ 0201134c blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02011350
    lsl r8, r0, #0x18 @ 02011354
    ldrb r0, [fp], #1 @ 02011358
    subs r5, r5, #0x130000 @ 0201135c
    ldrgt pc, [r2, r0, lsl #2] @ 02011360
    b .L_0200e030 @ 02011364
@ z80_dispatch_02011368 at 0x02011368
    and sb, r0, #0xff000000 @ 02011368
    ldrb r0, [fp], #1 @ 0201136c
    subs r5, r5, #0x80000 @ 02011370
    ldrgt pc, [r2, r0, lsl #2] @ 02011374
    b .L_0200e030 @ 02011378
@ z80_dispatch_0201137c at 0x0201137c
    lsl sb, r0, #8 @ 0201137c
    ldrb r0, [fp], #1 @ 02011380
    subs r5, r5, #0x80000 @ 02011384
    ldrgt pc, [r2, r0, lsl #2] @ 02011388
    b .L_0200e030 @ 0201138c
@ z80_dispatch_02011390 at 0x02011390
    ldrsb r1, [fp], #1 @ 02011390
    add r0, r0, r1, lsl #16 @ 02011394
    lsr r0, r0, #0x10 @ 02011398
    cmp r0, #0x2000 @ 0201139c
    .word 0xabbfc64a @ 020113a0 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 020113a4
    lsl sb, r0, #0x18 @ 020113a8
    ldrb r0, [fp], #1 @ 020113ac
    subs r5, r5, #0x130000 @ 020113b0
    ldrgt pc, [r2, r0, lsl #2] @ 020113b4
    b .L_0200e030 @ 020113b8
@ z80_dispatch_020113bc at 0x020113bc
    and r0, r0, #0xff0000 @ 020113bc
    orr r0, r0, r6 @ 020113c0
    str r0, [lr] @ 020113c4
    ldrb r0, [fp], #1 @ 020113c8
    subs r5, r5, #0x80000 @ 020113cc
    ldrgt pc, [r2, r0, lsl #2] @ 020113d0
    b .L_0200e030 @ 020113d4
@ z80_dispatch_020113d8 at 0x020113d8
    and r0, r0, #0xff0000 @ 020113d8
    orr r0, r0, r7 @ 020113dc
    str r0, [lr] @ 020113e0
    ldrb r0, [fp], #1 @ 020113e4
    subs r5, r5, #0x80000 @ 020113e8
    ldrgt pc, [r2, r0, lsl #2] @ 020113ec
    b .L_0200e030 @ 020113f0
@ z80_dispatch_020113f4 at 0x020113f4
    and r0, r0, #0xff0000 @ 020113f4
    orr r0, r0, r8 @ 020113f8
    str r0, [lr] @ 020113fc
    ldrb r0, [fp], #1 @ 02011400
    subs r5, r5, #0x80000 @ 02011404
    ldrgt pc, [r2, r0, lsl #2] @ 02011408
    b .L_0200e030 @ 0201140c
@ z80_dispatch_02011410 at 0x02011410
    and r0, r0, #0xff0000 @ 02011410
    orr r0, r0, sb @ 02011414
    str r0, [lr] @ 02011418
    ldrb r0, [fp], #1 @ 0201141c
    subs r5, r5, #0x80000 @ 02011420
    ldrgt pc, [r2, r0, lsl #2] @ 02011424
    b .L_0200e030 @ 02011428
@ z80_dispatch_0201142c at 0x0201142c
    ldrb r0, [fp], #1 @ 0201142c
    subs r5, r5, #0x80000 @ 02011430
    ldrgt pc, [r2, r0, lsl #2] @ 02011434
    b .L_0200e030 @ 02011438
@ z80_dispatch_0201143c at 0x0201143c
    and r0, r0, #0xff0000 @ 0201143c
    orr r0, r0, r0, lsl #8 @ 02011440
    str r0, [lr] @ 02011444
    ldrb r0, [fp], #1 @ 02011448
    subs r5, r5, #0x80000 @ 0201144c
    ldrgt pc, [r2, r0, lsl #2] @ 02011450
    b .L_0200e030 @ 02011454
@ z80_dispatch_02011458 at 0x02011458
    ldrsb r1, [fp], #1 @ 02011458
    add r0, r0, r1, lsl #16 @ 0201145c
    lsr r0, r0, #0x10 @ 02011460
    cmp r0, #0x2000 @ 02011464
    .word 0xabbfc618 @ 02011468 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 0201146c
    and sl, sl, #0xff0000 @ 02011470
    orr sl, sl, r0, lsl #24 @ 02011474
    ldrb r0, [fp], #1 @ 02011478
    subs r5, r5, #0x130000 @ 0201147c
    ldrgt pc, [r2, r0, lsl #2] @ 02011480
    b .L_0200e030 @ 02011484
@ z80_dispatch_02011488 at 0x02011488
    and r0, r0, #0xff0000 @ 02011488
    orr r0, r0, r4 @ 0201148c
    str r0, [lr] @ 02011490
    ldrb r0, [fp], #1 @ 02011494
    subs r5, r5, #0x80000 @ 02011498
    ldrgt pc, [r2, r0, lsl #2] @ 0201149c
    b .L_0200e030 @ 020114a0
@ z80_dispatch_020114a4 at 0x020114a4
    and r0, r0, #0xff000000 @ 020114a4
    orr r0, r0, r6, lsr #8 @ 020114a8
    str r0, [lr] @ 020114ac
    ldrb r0, [fp], #1 @ 020114b0
    subs r5, r5, #0x80000 @ 020114b4
    ldrgt pc, [r2, r0, lsl #2] @ 020114b8
    b .L_0200e030 @ 020114bc
@ z80_dispatch_020114c0 at 0x020114c0
    and r0, r0, #0xff000000 @ 020114c0
    orr r0, r0, r7, lsr #8 @ 020114c4
    str r0, [lr] @ 020114c8
    ldrb r0, [fp], #1 @ 020114cc
    subs r5, r5, #0x80000 @ 020114d0
    ldrgt pc, [r2, r0, lsl #2] @ 020114d4
    b .L_0200e030 @ 020114d8
@ z80_dispatch_020114dc at 0x020114dc
    and r0, r0, #0xff000000 @ 020114dc
    orr r0, r0, r8, lsr #8 @ 020114e0
    str r0, [lr] @ 020114e4
    ldrb r0, [fp], #1 @ 020114e8
    subs r5, r5, #0x80000 @ 020114ec
    ldrgt pc, [r2, r0, lsl #2] @ 020114f0
    b .L_0200e030 @ 020114f4
@ z80_dispatch_020114f8 at 0x020114f8
    and r0, r0, #0xff000000 @ 020114f8
    orr r0, r0, sb, lsr #8 @ 020114fc
    str r0, [lr] @ 02011500
    ldrb r0, [fp], #1 @ 02011504
    subs r5, r5, #0x80000 @ 02011508
    ldrgt pc, [r2, r0, lsl #2] @ 0201150c
    b .L_0200e030 @ 02011510
@ z80_dispatch_02011514 at 0x02011514
    and r0, r0, #0xff000000 @ 02011514
    orr r0, r0, r0, lsr #8 @ 02011518
    str r0, [lr] @ 0201151c
    ldrb r0, [fp], #1 @ 02011520
    subs r5, r5, #0x80000 @ 02011524
    ldrgt pc, [r2, r0, lsl #2] @ 02011528
    b .L_0200e030 @ 0201152c
@ z80_dispatch_02011530 at 0x02011530
    ldrb r0, [fp], #1 @ 02011530
    subs r5, r5, #0x80000 @ 02011534
    ldrgt pc, [r2, r0, lsl #2] @ 02011538
    b .L_0200e030 @ 0201153c
@ z80_dispatch_02011540 at 0x02011540
    ldrsb r1, [fp], #1 @ 02011540
    add r0, r0, r1, lsl #16 @ 02011544
    lsr r0, r0, #0x10 @ 02011548
    cmp r0, #0x2000 @ 0201154c
    .word 0xabbfc5de @ 02011550 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02011554
    and sl, sl, #0xff000000 @ 02011558
    orr sl, sl, r0, lsl #16 @ 0201155c
    ldrb r0, [fp], #1 @ 02011560
    subs r5, r5, #0x130000 @ 02011564
    ldrgt pc, [r2, r0, lsl #2] @ 02011568
    b .L_0200e030 @ 0201156c
@ z80_dispatch_02011570 at 0x02011570
    and r0, r0, #0xff000000 @ 02011570
    orr r0, r0, r4, lsr #8 @ 02011574
    str r0, [lr] @ 02011578
    ldrb r0, [fp], #1 @ 0201157c
    subs r5, r5, #0x80000 @ 02011580
    ldrgt pc, [r2, r0, lsl #2] @ 02011584
    b .L_0200e030 @ 02011588
@ z80_dispatch_0201158c at 0x0201158c
    ldrsb r1, [fp], #1 @ 0201158c
    add r0, r0, r1, lsl #16 @ 02011590
    lsr r0, r0, #0x10 @ 02011594
    lsr r1, r6, #0x18 @ 02011598
    cmp r0, #0x2000 @ 0201159c
    .word 0xabbfc5da @ 020115a0 blge #0x1002d10
    strb r1, [r3, r0] @ 020115a4
    ldrb r0, [fp], #1 @ 020115a8
    subs r5, r5, #0x130000 @ 020115ac
    ldrgt pc, [r2, r0, lsl #2] @ 020115b0
    b .L_0200e030 @ 020115b4
@ z80_dispatch_020115b8 at 0x020115b8
    ldrsb r1, [fp], #1 @ 020115b8
    add r0, r0, r1, lsl #16 @ 020115bc
    lsr r0, r0, #0x10 @ 020115c0
    lsr r1, r7, #0x18 @ 020115c4
    cmp r0, #0x2000 @ 020115c8
    .word 0xabbfc5cf @ 020115cc blge #0x1002d10
    strb r1, [r3, r0] @ 020115d0
    ldrb r0, [fp], #1 @ 020115d4
    subs r5, r5, #0x130000 @ 020115d8
    ldrgt pc, [r2, r0, lsl #2] @ 020115dc
    b .L_0200e030 @ 020115e0
@ z80_dispatch_020115e4 at 0x020115e4
    ldrsb r1, [fp], #1 @ 020115e4
    add r0, r0, r1, lsl #16 @ 020115e8
    lsr r0, r0, #0x10 @ 020115ec
    lsr r1, r8, #0x18 @ 020115f0
    cmp r0, #0x2000 @ 020115f4
    .word 0xabbfc5c4 @ 020115f8 blge #0x1002d10
    strb r1, [r3, r0] @ 020115fc
    ldrb r0, [fp], #1 @ 02011600
    subs r5, r5, #0x130000 @ 02011604
    ldrgt pc, [r2, r0, lsl #2] @ 02011608
    b .L_0200e030 @ 0201160c
@ z80_dispatch_02011610 at 0x02011610
    ldrsb r1, [fp], #1 @ 02011610
    add r0, r0, r1, lsl #16 @ 02011614
    lsr r0, r0, #0x10 @ 02011618
    lsr r1, sb, #0x18 @ 0201161c
    cmp r0, #0x2000 @ 02011620
    .word 0xabbfc5b9 @ 02011624 blge #0x1002d10
    strb r1, [r3, r0] @ 02011628
    ldrb r0, [fp], #1 @ 0201162c
    subs r5, r5, #0x130000 @ 02011630
    ldrgt pc, [r2, r0, lsl #2] @ 02011634
    b .L_0200e030 @ 02011638
@ z80_dispatch_0201163c at 0x0201163c
    ldrsb r1, [fp], #1 @ 0201163c
    add r0, r0, r1, lsl #16 @ 02011640
    lsr r0, r0, #0x10 @ 02011644
    lsr r1, sl, #0x18 @ 02011648
    cmp r0, #0x2000 @ 0201164c
    .word 0xabbfc5ae @ 02011650 blge #0x1002d10
    strb r1, [r3, r0] @ 02011654
    ldrb r0, [fp], #1 @ 02011658
    subs r5, r5, #0x130000 @ 0201165c
    ldrgt pc, [r2, r0, lsl #2] @ 02011660
    b .L_0200e030 @ 02011664
@ z80_dispatch_02011668 at 0x02011668
    ldrsb r1, [fp], #1 @ 02011668
    add r0, r0, r1, lsl #16 @ 0201166c
    lsr r0, r0, #0x10 @ 02011670
    and r1, sl, #0xff0000 @ 02011674
    lsr r1, r1, #0x10 @ 02011678
    cmp r0, #0x2000 @ 0201167c
    .word 0xabbfc5a2 @ 02011680 blge #0x1002d10
    strb r1, [r3, r0] @ 02011684
    ldrb r0, [fp], #1 @ 02011688
    subs r5, r5, #0x130000 @ 0201168c
    ldrgt pc, [r2, r0, lsl #2] @ 02011690
    b .L_0200e030 @ 02011694
@ z80_dispatch_02011698 at 0x02011698
    ldrsb r1, [fp], #1 @ 02011698
    add r0, r0, r1, lsl #16 @ 0201169c
    lsr r0, r0, #0x10 @ 020116a0
    lsr r1, r4, #0x18 @ 020116a4
    cmp r0, #0x2000 @ 020116a8
    .word 0xabbfc597 @ 020116ac blge #0x1002d10
    strb r1, [r3, r0] @ 020116b0
    ldrb r0, [fp], #1 @ 020116b4
    subs r5, r5, #0x130000 @ 020116b8
    ldrgt pc, [r2, r0, lsl #2] @ 020116bc
    b .L_0200e030 @ 020116c0
@ z80_dispatch_020116c4 at 0x020116c4
    and r4, r0, #0xff000000 @ 020116c4
    ldrb r0, [fp], #1 @ 020116c8
    subs r5, r5, #0x80000 @ 020116cc
    ldrgt pc, [r2, r0, lsl #2] @ 020116d0
    b .L_0200e030 @ 020116d4
@ z80_dispatch_020116d8 at 0x020116d8
    lsl r4, r0, #8 @ 020116d8
    ldrb r0, [fp], #1 @ 020116dc
    subs r5, r5, #0x80000 @ 020116e0
    ldrgt pc, [r2, r0, lsl #2] @ 020116e4
    b .L_0200e030 @ 020116e8
@ z80_dispatch_020116ec at 0x020116ec
    ldrsb r1, [fp], #1 @ 020116ec
    add r0, r0, r1, lsl #16 @ 020116f0
    lsr r0, r0, #0x10 @ 020116f4
    cmp r0, #0x2000 @ 020116f8
    .word 0xabbfc573 @ 020116fc blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02011700
    lsl r4, r0, #0x18 @ 02011704
    ldrb r0, [fp], #1 @ 02011708
    subs r5, r5, #0x130000 @ 0201170c
    ldrgt pc, [r2, r0, lsl #2] @ 02011710
    b .L_0200e030 @ 02011714
@ z80_dispatch_02011718 at 0x02011718
    and r0, r0, #0xff000000 @ 02011718
    bic r5, r5, #0xd7 @ 0201171c
    adds r4, r4, r0 @ 02011720
    orrmi r5, r5, #0x80 @ 02011724
    orreq r5, r5, #0x40 @ 02011728
    orrhs r5, r5, #1 @ 0201172c
    orrvs r5, r5, #4 @ 02011730
    ldrb r0, [fp], #1 @ 02011734
    subs r5, r5, #0x80000 @ 02011738
    ldrgt pc, [r2, r0, lsl #2] @ 0201173c
    b .L_0200e030 @ 02011740
@ z80_dispatch_02011744 at 0x02011744
    lsl r0, r0, #8 @ 02011744
    bic r5, r5, #0xd7 @ 02011748
    adds r4, r4, r0 @ 0201174c
    orrmi r5, r5, #0x80 @ 02011750
    orreq r5, r5, #0x40 @ 02011754
    orrhs r5, r5, #1 @ 02011758
    orrvs r5, r5, #4 @ 0201175c
    ldrb r0, [fp], #1 @ 02011760
    subs r5, r5, #0x80000 @ 02011764
    ldrgt pc, [r2, r0, lsl #2] @ 02011768
    b .L_0200e030 @ 0201176c
@ z80_dispatch_02011770 at 0x02011770
    ldrsb r1, [fp], #1 @ 02011770
    add r0, r0, r1, lsl #16 @ 02011774
    lsr r0, r0, #0x10 @ 02011778
    cmp r0, #0x2000 @ 0201177c
    .word 0xabbfc552 @ 02011780 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02011784
    bic r5, r5, #0xd7 @ 02011788
    adds r4, r4, r0, lsl #24 @ 0201178c
    orrmi r5, r5, #0x80 @ 02011790
    orreq r5, r5, #0x40 @ 02011794
    orrhs r5, r5, #1 @ 02011798
    orrvs r5, r5, #4 @ 0201179c
    ldrb r0, [fp], #1 @ 020117a0
    subs r5, r5, #0x130000 @ 020117a4
    ldrgt pc, [r2, r0, lsl #2] @ 020117a8
    b .L_0200e030 @ 020117ac
@ z80_dispatch_020117b0 at 0x020117b0
    and r0, r0, #0xff000000 @ 020117b0
    lsrs r1, r5, #1 @ 020117b4
    bic r5, r5, #0xd7 @ 020117b8
    addshs r4, r4, #0x1000000 @ 020117bc
    orrhs r5, r5, #1 @ 020117c0
    orrvs r5, r5, #4 @ 020117c4
    adds r4, r4, r0 @ 020117c8
    orrmi r5, r5, #0x80 @ 020117cc
    orreq r5, r5, #0x40 @ 020117d0
    orrhs r5, r5, #1 @ 020117d4
    eorvs r5, r5, #4 @ 020117d8
    ldrb r0, [fp], #1 @ 020117dc
    subs r5, r5, #0x80000 @ 020117e0
    ldrgt pc, [r2, r0, lsl #2] @ 020117e4
    b .L_0200e030 @ 020117e8
@ z80_dispatch_020117ec at 0x020117ec
    lsl r0, r0, #8 @ 020117ec
    lsrs r1, r5, #1 @ 020117f0
    bic r5, r5, #0xd7 @ 020117f4
    addshs r4, r4, #0x1000000 @ 020117f8
    orrhs r5, r5, #1 @ 020117fc
    orrvs r5, r5, #4 @ 02011800
    adds r4, r4, r0 @ 02011804
    orrmi r5, r5, #0x80 @ 02011808
    orreq r5, r5, #0x40 @ 0201180c
    orrhs r5, r5, #1 @ 02011810
    eorvs r5, r5, #4 @ 02011814
    ldrb r0, [fp], #1 @ 02011818
    subs r5, r5, #0x80000 @ 0201181c
    ldrgt pc, [r2, r0, lsl #2] @ 02011820
    b .L_0200e030 @ 02011824
@ z80_dispatch_02011828 at 0x02011828
    ldrsb r1, [fp], #1 @ 02011828
    add r0, r0, r1, lsl #16 @ 0201182c
    lsr r0, r0, #0x10 @ 02011830
    cmp r0, #0x2000 @ 02011834
    .word 0xabbfc524 @ 02011838 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 0201183c
    lsl r0, r0, #0x18 @ 02011840
    lsrs r1, r5, #1 @ 02011844
    bic r5, r5, #0xd7 @ 02011848
    addshs r4, r4, #0x1000000 @ 0201184c
    orrhs r5, r5, #1 @ 02011850
    orrvs r5, r5, #4 @ 02011854
    adds r4, r4, r0 @ 02011858
    orrmi r5, r5, #0x80 @ 0201185c
    orreq r5, r5, #0x40 @ 02011860
    orrhs r5, r5, #1 @ 02011864
    eorvs r5, r5, #4 @ 02011868
    ldrb r0, [fp], #1 @ 0201186c
    subs r5, r5, #0x130000 @ 02011870
    ldrgt pc, [r2, r0, lsl #2] @ 02011874
    b .L_0200e030 @ 02011878
@ z80_dispatch_0201187c at 0x0201187c
    and r0, r0, #0xff000000 @ 0201187c
    bic r5, r5, #0xd7 @ 02011880
    orr r5, r5, #2 @ 02011884
    subs r4, r4, r0 @ 02011888
    orrmi r5, r5, #0x80 @ 0201188c
    orreq r5, r5, #0x40 @ 02011890
    orrlo r5, r5, #1 @ 02011894
    orrvs r5, r5, #4 @ 02011898
    ldrb r0, [fp], #1 @ 0201189c
    subs r5, r5, #0x80000 @ 020118a0
    ldrgt pc, [r2, r0, lsl #2] @ 020118a4
    b .L_0200e030 @ 020118a8
@ z80_dispatch_020118ac at 0x020118ac
    lsl r0, r0, #8 @ 020118ac
    bic r5, r5, #0xd7 @ 020118b0
    orr r5, r5, #2 @ 020118b4
    subs r4, r4, r0 @ 020118b8
    orrmi r5, r5, #0x80 @ 020118bc
    orreq r5, r5, #0x40 @ 020118c0
    orrlo r5, r5, #1 @ 020118c4
    orrvs r5, r5, #4 @ 020118c8
    ldrb r0, [fp], #1 @ 020118cc
    subs r5, r5, #0x80000 @ 020118d0
    ldrgt pc, [r2, r0, lsl #2] @ 020118d4
    b .L_0200e030 @ 020118d8
@ z80_dispatch_020118dc at 0x020118dc
    ldrsb r1, [fp], #1 @ 020118dc
    add r0, r0, r1, lsl #16 @ 020118e0
    lsr r0, r0, #0x10 @ 020118e4
    cmp r0, #0x2000 @ 020118e8
    .word 0xabbfc4f7 @ 020118ec blge #0x1002cd0
    ldrb r0, [r3, r0] @ 020118f0
    bic r5, r5, #0xd7 @ 020118f4
    orr r5, r5, #2 @ 020118f8
    subs r4, r4, r0, lsl #24 @ 020118fc
    orrmi r5, r5, #0x80 @ 02011900
    orreq r5, r5, #0x40 @ 02011904
    orrlo r5, r5, #1 @ 02011908
    orrvs r5, r5, #4 @ 0201190c
    ldrb r0, [fp], #1 @ 02011910
    subs r5, r5, #0x130000 @ 02011914
    ldrgt pc, [r2, r0, lsl #2] @ 02011918
    b .L_0200e030 @ 0201191c
@ z80_dispatch_02011920 at 0x02011920
    and r0, r0, #0xff000000 @ 02011920
    and lr, r5, #1 @ 02011924
    bic r5, r5, #0xd7 @ 02011928
    orr r5, r5, #2 @ 0201192c
    subs r4, r4, lr, lsl #24 @ 02011930
    orrlo r5, r5, #1 @ 02011934
    orrvs r5, r5, #4 @ 02011938
    subs r4, r4, r0 @ 0201193c
    orrmi r5, r5, #0x80 @ 02011940
    orreq r5, r5, #0x40 @ 02011944
    orrlo r5, r5, #1 @ 02011948
    eorvs r5, r5, #4 @ 0201194c
    ldrb r0, [fp], #1 @ 02011950
    subs r5, r5, #0x80000 @ 02011954
    ldrgt pc, [r2, r0, lsl #2] @ 02011958
    b .L_0200e030 @ 0201195c
@ z80_dispatch_02011960 at 0x02011960
    lsl r0, r0, #8 @ 02011960
    and lr, r5, #1 @ 02011964
    bic r5, r5, #0xd7 @ 02011968
    orr r5, r5, #2 @ 0201196c
    subs r4, r4, lr, lsl #24 @ 02011970
    orrlo r5, r5, #1 @ 02011974
    orrvs r5, r5, #4 @ 02011978
    subs r4, r4, r0 @ 0201197c
    orrmi r5, r5, #0x80 @ 02011980
    orreq r5, r5, #0x40 @ 02011984
    orrlo r5, r5, #1 @ 02011988
    eorvs r5, r5, #4 @ 0201198c
    ldrb r0, [fp], #1 @ 02011990
    subs r5, r5, #0x80000 @ 02011994
    ldrgt pc, [r2, r0, lsl #2] @ 02011998
    b .L_0200e030 @ 0201199c
@ z80_dispatch_020119a0 at 0x020119a0
    ldrsb r1, [fp], #1 @ 020119a0
    add r0, r0, r1, lsl #16 @ 020119a4
    lsr r0, r0, #0x10 @ 020119a8
    cmp r0, #0x2000 @ 020119ac
    .word 0xabbfc4c6 @ 020119b0 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 020119b4
    lsl r0, r0, #0x18 @ 020119b8
    and lr, r5, #1 @ 020119bc
    bic r5, r5, #0xd7 @ 020119c0
    orr r5, r5, #2 @ 020119c4
    subs r4, r4, lr, lsl #24 @ 020119c8
    orrlo r5, r5, #1 @ 020119cc
    orrvs r5, r5, #4 @ 020119d0
    subs r4, r4, r0 @ 020119d4
    orrmi r5, r5, #0x80 @ 020119d8
    orreq r5, r5, #0x40 @ 020119dc
    orrlo r5, r5, #1 @ 020119e0
    eorvs r5, r5, #4 @ 020119e4
    ldrb r0, [fp], #1 @ 020119e8
    subs r5, r5, #0x130000 @ 020119ec
    ldrgt pc, [r2, r0, lsl #2] @ 020119f0
    b .L_0200e030 @ 020119f4
@ z80_dispatch_020119f8 at 0x020119f8
    and r0, r0, #0xff000000 @ 020119f8
    ldr r1, [pc, #0x198] @ 020119fc
    and r4, r4, r0 @ 02011a00
    ldrb r1, [r1, r4, lsr #24] @ 02011a04
    bic r5, r5, #0xd7 @ 02011a08
    orr r5, r5, r1 @ 02011a0c
    ldrb r0, [fp], #1 @ 02011a10
    subs r5, r5, #0x80000 @ 02011a14
    ldrgt pc, [r2, r0, lsl #2] @ 02011a18
    b .L_0200e030 @ 02011a1c
@ z80_dispatch_02011a20 at 0x02011a20
    lsl r0, r0, #8 @ 02011a20
    ldr r1, [pc, #0x170] @ 02011a24
    and r4, r4, r0 @ 02011a28
    ldrb r1, [r1, r4, lsr #24] @ 02011a2c
    bic r5, r5, #0xd7 @ 02011a30
    orr r5, r5, r1 @ 02011a34
    ldrb r0, [fp], #1 @ 02011a38
    subs r5, r5, #0x80000 @ 02011a3c
    ldrgt pc, [r2, r0, lsl #2] @ 02011a40
    b .L_0200e030 @ 02011a44
@ z80_dispatch_02011a48 at 0x02011a48
    ldrsb r1, [fp], #1 @ 02011a48
    add r0, r0, r1, lsl #16 @ 02011a4c
    lsr r0, r0, #0x10 @ 02011a50
    cmp r0, #0x2000 @ 02011a54
    .word 0xabbfc49c @ 02011a58 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02011a5c
    ldr r1, [pc, #0x134] @ 02011a60
    and r4, r4, r0, lsl #24 @ 02011a64
    ldrb r1, [r1, r4, lsr #24] @ 02011a68
    bic r5, r5, #0xd7 @ 02011a6c
    orr r5, r5, r1 @ 02011a70
    ldrb r0, [fp], #1 @ 02011a74
    subs r5, r5, #0x130000 @ 02011a78
    ldrgt pc, [r2, r0, lsl #2] @ 02011a7c
    b .L_0200e030 @ 02011a80
@ z80_dispatch_02011a84 at 0x02011a84
    and r0, r0, #0xff000000 @ 02011a84
    ldr r1, [pc, #0x10c] @ 02011a88
    eor r4, r4, r0 @ 02011a8c
    ldrb r1, [r1, r4, lsr #24] @ 02011a90
    bic r5, r5, #0xd7 @ 02011a94
    orr r5, r5, r1 @ 02011a98
    ldrb r0, [fp], #1 @ 02011a9c
    subs r5, r5, #0x80000 @ 02011aa0
    ldrgt pc, [r2, r0, lsl #2] @ 02011aa4
    b .L_0200e030 @ 02011aa8
@ z80_dispatch_02011aac at 0x02011aac
    lsl r0, r0, #8 @ 02011aac
    ldr r1, [pc, #0xe4] @ 02011ab0
    eor r4, r4, r0 @ 02011ab4
    ldrb r1, [r1, r4, lsr #24] @ 02011ab8
    bic r5, r5, #0xd7 @ 02011abc
    orr r5, r5, r1 @ 02011ac0
    ldrb r0, [fp], #1 @ 02011ac4
    subs r5, r5, #0x80000 @ 02011ac8
    ldrgt pc, [r2, r0, lsl #2] @ 02011acc
    b .L_0200e030 @ 02011ad0
@ z80_dispatch_02011ad4 at 0x02011ad4
    ldrsb r1, [fp], #1 @ 02011ad4
    add r0, r0, r1, lsl #16 @ 02011ad8
    lsr r0, r0, #0x10 @ 02011adc
    cmp r0, #0x2000 @ 02011ae0
    .word 0xabbfc479 @ 02011ae4 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02011ae8
    ldr r1, [pc, #0xa8] @ 02011aec
    eor r4, r4, r0, lsl #24 @ 02011af0
    ldrb r1, [r1, r4, lsr #24] @ 02011af4
    bic r5, r5, #0xd7 @ 02011af8
    orr r5, r5, r1 @ 02011afc
    ldrb r0, [fp], #1 @ 02011b00
    subs r5, r5, #0x130000 @ 02011b04
    ldrgt pc, [r2, r0, lsl #2] @ 02011b08
    b .L_0200e030 @ 02011b0c
@ z80_dispatch_02011b10 at 0x02011b10
    and r0, r0, #0xff000000 @ 02011b10
    ldr r1, [pc, #0x80] @ 02011b14
    orr r4, r4, r0 @ 02011b18
    ldrb r1, [r1, r4, lsr #24] @ 02011b1c
    bic r5, r5, #0xd7 @ 02011b20
    orr r5, r5, r1 @ 02011b24
    ldrb r0, [fp], #1 @ 02011b28
    subs r5, r5, #0x80000 @ 02011b2c
    ldrgt pc, [r2, r0, lsl #2] @ 02011b30
    b .L_0200e030 @ 02011b34
@ z80_dispatch_02011b38 at 0x02011b38
    lsl r0, r0, #8 @ 02011b38
    ldr r1, [pc, #0x58] @ 02011b3c
    orr r4, r4, r0 @ 02011b40
    ldrb r1, [r1, r4, lsr #24] @ 02011b44
    bic r5, r5, #0xd7 @ 02011b48
    orr r5, r5, r1 @ 02011b4c
    ldrb r0, [fp], #1 @ 02011b50
    subs r5, r5, #0x80000 @ 02011b54
    ldrgt pc, [r2, r0, lsl #2] @ 02011b58
    b .L_0200e030 @ 02011b5c
@ z80_dispatch_02011b60 at 0x02011b60
    ldrsb r1, [fp], #1 @ 02011b60
    add r0, r0, r1, lsl #16 @ 02011b64
    lsr r0, r0, #0x10 @ 02011b68
    cmp r0, #0x2000 @ 02011b6c
    .word 0xabbfc456 @ 02011b70 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02011b74
    ldr r1, [pc, #0x1c] @ 02011b78
    orr r4, r4, r0, lsl #24 @ 02011b7c
    ldrb r1, [r1, r4, lsr #24] @ 02011b80
    bic r5, r5, #0xd7 @ 02011b84
    orr r5, r5, r1 @ 02011b88
    ldrb r0, [fp], #1 @ 02011b8c
    subs r5, r5, #0x130000 @ 02011b90
    ldrgt pc, [r2, r0, lsl #2] @ 02011b94
    b .L_0200e030 @ 02011b98
    .byte 0x20, 0xde, 0x00, 0x02 @ 02011b9c
@ z80_dispatch_02011ba0 at 0x02011ba0
    and r0, r0, #0xff000000 @ 02011ba0
    cmp r4, r0 @ 02011ba4
    bic r5, r5, #0xd7 @ 02011ba8
    orr r5, r5, #2 @ 02011bac
    orrmi r5, r5, #0x80 @ 02011bb0
    orreq r5, r5, #0x40 @ 02011bb4
    orrlo r5, r5, #1 @ 02011bb8
    orrvs r5, r5, #4 @ 02011bbc
    ldrb r0, [fp], #1 @ 02011bc0
    subs r5, r5, #0x80000 @ 02011bc4
    ldrgt pc, [r2, r0, lsl #2] @ 02011bc8
    b .L_0200e030 @ 02011bcc
@ z80_dispatch_02011bd0 at 0x02011bd0
    lsl r0, r0, #8 @ 02011bd0
    cmp r4, r0 @ 02011bd4
    bic r5, r5, #0xd7 @ 02011bd8
    orr r5, r5, #2 @ 02011bdc
    orrmi r5, r5, #0x80 @ 02011be0
    orreq r5, r5, #0x40 @ 02011be4
    orrlo r5, r5, #1 @ 02011be8
    orrvs r5, r5, #4 @ 02011bec
    ldrb r0, [fp], #1 @ 02011bf0
    subs r5, r5, #0x80000 @ 02011bf4
    ldrgt pc, [r2, r0, lsl #2] @ 02011bf8
    b .L_0200e030 @ 02011bfc
@ z80_dispatch_02011c00 at 0x02011c00
    ldrsb r1, [fp], #1 @ 02011c00
    add r0, r0, r1, lsl #16 @ 02011c04
    lsr r0, r0, #0x10 @ 02011c08
    cmp r0, #0x2000 @ 02011c0c
    .word 0xabbfc42e @ 02011c10 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02011c14
    lsl r0, r0, #0x18 @ 02011c18
    cmp r4, r0 @ 02011c1c
    bic r5, r5, #0xd7 @ 02011c20
    orr r5, r5, #2 @ 02011c24
    orrmi r5, r5, #0x80 @ 02011c28
    orreq r5, r5, #0x40 @ 02011c2c
    orrlo r5, r5, #1 @ 02011c30
    orrvs r5, r5, #4 @ 02011c34
    ldrb r0, [fp], #1 @ 02011c38
    subs r5, r5, #0x130000 @ 02011c3c
    ldrgt pc, [r2, r0, lsl #2] @ 02011c40
    b .L_0200e030 @ 02011c44
@ z80_dispatch_02011c48 at 0x02011c48
    ldrsb r1, [fp], #1 @ 02011c48
    add lr, r2, #0x1000 @ 02011c4c
    add r0, r0, r1, lsl #16 @ 02011c50
    ldrb r1, [fp], #1 @ 02011c54
    lsr r0, r0, #0x10 @ 02011c58
    ldr pc, [lr, r1, lsl #2] @ 02011c5c
@ z80_dispatch_02011c60 at 0x02011c60
    ldrb r1, [ip], #1 @ 02011c60
    ldrb r0, [ip], #1 @ 02011c64
    orr r0, r1, r0, lsl #8 @ 02011c68
    lsl r0, r0, #0x10 @ 02011c6c
    str r0, [lr] @ 02011c70
    ldrb r0, [fp], #1 @ 02011c74
    subs r5, r5, #0xe0000 @ 02011c78
    ldrgt pc, [r2, r0, lsl #2] @ 02011c7c
    b .L_0200e030 @ 02011c80
@ z80_dispatch_02011c84 at 0x02011c84
    ldrb r1, [ip] @ 02011c84
    lsr r0, r0, #0x10 @ 02011c88
    strb r0, [ip] @ 02011c8c
    ldrb r2, [ip, #1] @ 02011c90
    lsr r0, r0, #8 @ 02011c94
    strb r0, [ip, #1] @ 02011c98
    orr r1, r1, r2, lsl #8 @ 02011c9c
    lsl r1, r1, #0x10 @ 02011ca0
    ldr r2, [sp, #0x94] @ 02011ca4
    str r1, [lr] @ 02011ca8
    ldrb r0, [fp], #1 @ 02011cac
    subs r5, r5, #0x170000 @ 02011cb0
    ldrgt pc, [r2, r0, lsl #2] @ 02011cb4
    b .L_0200e030 @ 02011cb8
@ z80_dispatch_02011cbc at 0x02011cbc
    lsr r0, r0, #0x10 @ 02011cbc
    lsr r1, r0, #8 @ 02011cc0
    strb r1, [ip, #-1]! @ 02011cc4
    strb r0, [ip, #-1]! @ 02011cc8
    ldrb r0, [fp], #1 @ 02011ccc
    subs r5, r5, #0xf0000 @ 02011cd0
    ldrgt pc, [r2, r0, lsl #2] @ 02011cd4
    b .L_0200e030 @ 02011cd8
@ z80_dispatch_02011cdc at 0x02011cdc
    add fp, r3, r0, lsr #16 @ 02011cdc
    ldrb r0, [fp], #1 @ 02011ce0
    subs r5, r5, #0x80000 @ 02011ce4
    ldrgt pc, [r2, r0, lsl #2] @ 02011ce8
    b .L_0200e030 @ 02011cec
@ z80_dispatch_02011cf0 at 0x02011cf0
    add ip, r3, r0, lsr #16 @ 02011cf0
    ldrb r0, [fp], #1 @ 02011cf4
    subs r5, r5, #0xa0000 @ 02011cf8
    ldrgt pc, [r2, r0, lsl #2] @ 02011cfc
    b .L_0200e030 @ 02011d00
@ z80_dispatch_02011d04 at 0x02011d04
    sub fp, fp, #1 @ 02011d04
    ldrb r0, [fp], #1 @ 02011d08
    subs r5, r5, #0x40000 @ 02011d0c
    ldrgt pc, [r2, r0, lsl #2] @ 02011d10
    b .L_0200e030 @ 02011d14
@ z80_dispatch_02011d18 at 0x02011d18
    ldrb r0, [fp], #1 @ 02011d18
    subs r5, r5, #0x80000 @ 02011d1c
    ldrgt pc, [r2, r0, lsl #2] @ 02011d20
    b .L_0200e030 @ 02011d24
@ z80_dispatch_02011d28 at 0x02011d28
    sub fp, fp, #1 @ 02011d28
    ldrb r0, [fp], #1 @ 02011d2c
    subs r5, r5, #0x40000 @ 02011d30
    ldrgt pc, [r2, r0, lsl #2] @ 02011d34
    b .L_0200e030 @ 02011d38
@ z80_dispatch_02011d3c at 0x02011d3c
    mov r1, r0 @ 02011d3c
    cmp r0, #0x2000 @ 02011d40
    .word 0xabbfc3e4 @ 02011d44 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02011d48
    mov lr, r1 @ 02011d4c
    lsl r6, r0, #0x18 @ 02011d50
    ldr r1, [pc, #0x708] @ 02011d54
    bic r5, r5, #0xd7 @ 02011d58
    lsls r6, r6, #1 @ 02011d5c
    orrhs r6, r6, #0x1000000 @ 02011d60
    ldrb r1, [r1, r6, lsr #24] @ 02011d64
    orrhs r5, r5, #1 @ 02011d68
    orr r5, r5, r1 @ 02011d6c
    lsr r1, r6, #0x18 @ 02011d70
    mov r0, lr @ 02011d74
    cmp r0, #0x2000 @ 02011d78
    .word 0xabbfc3e3 @ 02011d7c blge #0x1002d10
    strb r1, [r3, r0] @ 02011d80
    ldrb r0, [fp], #1 @ 02011d84
    subs r5, r5, #0x170000 @ 02011d88
    ldrgt pc, [r2, r0, lsl #2] @ 02011d8c
    b .L_0200e030 @ 02011d90
@ z80_dispatch_02011d94 at 0x02011d94
    mov r1, r0 @ 02011d94
    cmp r0, #0x2000 @ 02011d98
    .word 0xabbfc3ce @ 02011d9c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02011da0
    mov lr, r1 @ 02011da4
    lsl r7, r0, #0x18 @ 02011da8
    ldr r1, [pc, #0x6b0] @ 02011dac
    bic r5, r5, #0xd7 @ 02011db0
    lsls r7, r7, #1 @ 02011db4
    orrhs r7, r7, #0x1000000 @ 02011db8
    ldrb r1, [r1, r7, lsr #24] @ 02011dbc
    orrhs r5, r5, #1 @ 02011dc0
    orr r5, r5, r1 @ 02011dc4
    lsr r1, r7, #0x18 @ 02011dc8
    mov r0, lr @ 02011dcc
    cmp r0, #0x2000 @ 02011dd0
    .word 0xabbfc3cd @ 02011dd4 blge #0x1002d10
    strb r1, [r3, r0] @ 02011dd8
    ldrb r0, [fp], #1 @ 02011ddc
    subs r5, r5, #0x170000 @ 02011de0
    ldrgt pc, [r2, r0, lsl #2] @ 02011de4
    b .L_0200e030 @ 02011de8
@ z80_dispatch_02011dec at 0x02011dec
    mov r1, r0 @ 02011dec
    cmp r0, #0x2000 @ 02011df0
    .word 0xabbfc3b8 @ 02011df4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02011df8
    mov lr, r1 @ 02011dfc
    lsl r8, r0, #0x18 @ 02011e00
    ldr r1, [pc, #0x658] @ 02011e04
    bic r5, r5, #0xd7 @ 02011e08
    lsls r8, r8, #1 @ 02011e0c
    orrhs r8, r8, #0x1000000 @ 02011e10
    ldrb r1, [r1, r8, lsr #24] @ 02011e14
    orrhs r5, r5, #1 @ 02011e18
    orr r5, r5, r1 @ 02011e1c
    lsr r1, r8, #0x18 @ 02011e20
    mov r0, lr @ 02011e24
    cmp r0, #0x2000 @ 02011e28
    .word 0xabbfc3b7 @ 02011e2c blge #0x1002d10
    strb r1, [r3, r0] @ 02011e30
    ldrb r0, [fp], #1 @ 02011e34
    subs r5, r5, #0x170000 @ 02011e38
    ldrgt pc, [r2, r0, lsl #2] @ 02011e3c
    b .L_0200e030 @ 02011e40
@ z80_dispatch_02011e44 at 0x02011e44
    mov r1, r0 @ 02011e44
    cmp r0, #0x2000 @ 02011e48
    .word 0xabbfc3a2 @ 02011e4c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02011e50
    mov lr, r1 @ 02011e54
    lsl sb, r0, #0x18 @ 02011e58
    ldr r1, [pc, #0x600] @ 02011e5c
    bic r5, r5, #0xd7 @ 02011e60
    lsls sb, sb, #1 @ 02011e64
    orrhs sb, sb, #0x1000000 @ 02011e68
    ldrb r1, [r1, sb, lsr #24] @ 02011e6c
    orrhs r5, r5, #1 @ 02011e70
    orr r5, r5, r1 @ 02011e74
    lsr r1, sb, #0x18 @ 02011e78
    mov r0, lr @ 02011e7c
    cmp r0, #0x2000 @ 02011e80
    .word 0xabbfc3a1 @ 02011e84 blge #0x1002d10
    strb r1, [r3, r0] @ 02011e88
    ldrb r0, [fp], #1 @ 02011e8c
    subs r5, r5, #0x170000 @ 02011e90
    ldrgt pc, [r2, r0, lsl #2] @ 02011e94
    b .L_0200e030 @ 02011e98
@ z80_dispatch_02011e9c at 0x02011e9c
    mov r1, r0 @ 02011e9c
    cmp r0, #0x2000 @ 02011ea0
    .word 0xabbfc38c @ 02011ea4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02011ea8
    mov lr, r1 @ 02011eac
    lsl r0, r0, #0x18 @ 02011eb0
    ldr r1, [pc, #0x5a8] @ 02011eb4
    bic r5, r5, #0xd7 @ 02011eb8
    lsls r0, r0, #1 @ 02011ebc
    orrhs r0, r0, #0x1000000 @ 02011ec0
    ldrb r1, [r1, r0, lsr #24] @ 02011ec4
    orrhs r5, r5, #1 @ 02011ec8
    orr r5, r5, r1 @ 02011ecc
    and sl, sl, #0xff0000 @ 02011ed0
    orr sl, sl, r0, lsl #24 @ 02011ed4
    lsr r1, r0, #0x18 @ 02011ed8
    mov r0, lr @ 02011edc
    cmp r0, #0x2000 @ 02011ee0
    .word 0xabbfc389 @ 02011ee4 blge #0x1002d10
    strb r1, [r3, r0] @ 02011ee8
    ldrb r0, [fp], #1 @ 02011eec
    subs r5, r5, #0x170000 @ 02011ef0
    ldrgt pc, [r2, r0, lsl #2] @ 02011ef4
    b .L_0200e030 @ 02011ef8
@ z80_dispatch_02011efc at 0x02011efc
    mov r1, r0 @ 02011efc
    cmp r0, #0x2000 @ 02011f00
    .word 0xabbfc374 @ 02011f04 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02011f08
    mov lr, r1 @ 02011f0c
    lsl r0, r0, #0x18 @ 02011f10
    ldr r1, [pc, #0x548] @ 02011f14
    bic r5, r5, #0xd7 @ 02011f18
    lsls r0, r0, #1 @ 02011f1c
    orrhs r0, r0, #0x1000000 @ 02011f20
    ldrb r1, [r1, r0, lsr #24] @ 02011f24
    orrhs r5, r5, #1 @ 02011f28
    orr r5, r5, r1 @ 02011f2c
    and sl, sl, #0xff000000 @ 02011f30
    orr sl, sl, r0, lsl #16 @ 02011f34
    lsr r1, r0, #0x18 @ 02011f38
    mov r0, lr @ 02011f3c
    cmp r0, #0x2000 @ 02011f40
    .word 0xabbfc371 @ 02011f44 blge #0x1002d10
    strb r1, [r3, r0] @ 02011f48
    ldrb r0, [fp], #1 @ 02011f4c
    subs r5, r5, #0x170000 @ 02011f50
    ldrgt pc, [r2, r0, lsl #2] @ 02011f54
    b .L_0200e030 @ 02011f58
@ z80_dispatch_02011f5c at 0x02011f5c
    mov r1, r0 @ 02011f5c
    cmp r0, #0x2000 @ 02011f60
    .word 0xabbfc35c @ 02011f64 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02011f68
    mov lr, r1 @ 02011f6c
    ldr r1, [pc, #0x4ec] @ 02011f70
    lsls r0, r0, #0x19 @ 02011f74
    orrhs r0, r0, #0x1000000 @ 02011f78
    ldrb r1, [r1, r0, lsr #24] @ 02011f7c
    bic r5, r5, #0xd7 @ 02011f80
    orrhs r5, r5, #1 @ 02011f84
    orr r5, r5, r1 @ 02011f88
    lsr r0, r0, #0x18 @ 02011f8c
    mov r1, r0 @ 02011f90
    mov r0, lr @ 02011f94
    cmp r0, #0x2000 @ 02011f98
    .word 0xabbfc35b @ 02011f9c blge #0x1002d10
    strb r1, [r3, r0] @ 02011fa0
    ldrb r0, [fp], #1 @ 02011fa4
    subs r5, r5, #0x170000 @ 02011fa8
    ldrgt pc, [r2, r0, lsl #2] @ 02011fac
    b .L_0200e030 @ 02011fb0
@ z80_dispatch_02011fb4 at 0x02011fb4
    mov r1, r0 @ 02011fb4
    cmp r0, #0x2000 @ 02011fb8
    .word 0xabbfc346 @ 02011fbc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02011fc0
    mov lr, r1 @ 02011fc4
    lsl r4, r0, #0x18 @ 02011fc8
    ldr r1, [pc, #0x490] @ 02011fcc
    bic r5, r5, #0xd7 @ 02011fd0
    lsls r4, r4, #1 @ 02011fd4
    orrhs r4, r4, #0x1000000 @ 02011fd8
    ldrb r1, [r1, r4, lsr #24] @ 02011fdc
    orrhs r5, r5, #1 @ 02011fe0
    orr r5, r5, r1 @ 02011fe4
    lsr r1, r4, #0x18 @ 02011fe8
    mov r0, lr @ 02011fec
    cmp r0, #0x2000 @ 02011ff0
    .word 0xabbfc345 @ 02011ff4 blge #0x1002d10
    strb r1, [r3, r0] @ 02011ff8
    ldrb r0, [fp], #1 @ 02011ffc
    subs r5, r5, #0x170000 @ 02012000
    ldrgt pc, [r2, r0, lsl #2] @ 02012004
    b .L_0200e030 @ 02012008
@ z80_dispatch_0201200c at 0x0201200c
    mov r1, r0 @ 0201200c
    cmp r0, #0x2000 @ 02012010
    .word 0xabbfc330 @ 02012014 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012018
    mov lr, r1 @ 0201201c
    lsl r6, r0, #0x18 @ 02012020
    ldr r1, [pc, #0x438] @ 02012024
    bic r5, r5, #0xd7 @ 02012028
    lsrs r6, r6, #0x19 @ 0201202c
    orrhs r6, r6, #0x80 @ 02012030
    ldrb r1, [r1, r6] @ 02012034
    orrhs r5, r5, #1 @ 02012038
    lsls r6, r6, #0x18 @ 0201203c
    orr r5, r5, r1 @ 02012040
    lsr r1, r6, #0x18 @ 02012044
    mov r0, lr @ 02012048
    cmp r0, #0x2000 @ 0201204c
    .word 0xabbfc32e @ 02012050 blge #0x1002d10
    strb r1, [r3, r0] @ 02012054
    ldrb r0, [fp], #1 @ 02012058
    subs r5, r5, #0x170000 @ 0201205c
    ldrgt pc, [r2, r0, lsl #2] @ 02012060
    b .L_0200e030 @ 02012064
@ z80_dispatch_02012068 at 0x02012068
    mov r1, r0 @ 02012068
    cmp r0, #0x2000 @ 0201206c
    .word 0xabbfc319 @ 02012070 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012074
    mov lr, r1 @ 02012078
    lsl r7, r0, #0x18 @ 0201207c
    ldr r1, [pc, #0x3dc] @ 02012080
    bic r5, r5, #0xd7 @ 02012084
    lsrs r7, r7, #0x19 @ 02012088
    orrhs r7, r7, #0x80 @ 0201208c
    ldrb r1, [r1, r7] @ 02012090
    orrhs r5, r5, #1 @ 02012094
    lsls r7, r7, #0x18 @ 02012098
    orr r5, r5, r1 @ 0201209c
    lsr r1, r7, #0x18 @ 020120a0
    mov r0, lr @ 020120a4
    cmp r0, #0x2000 @ 020120a8
    .word 0xabbfc317 @ 020120ac blge #0x1002d10
    strb r1, [r3, r0] @ 020120b0
    ldrb r0, [fp], #1 @ 020120b4
    subs r5, r5, #0x170000 @ 020120b8
    ldrgt pc, [r2, r0, lsl #2] @ 020120bc
    b .L_0200e030 @ 020120c0
@ z80_dispatch_020120c4 at 0x020120c4
    mov r1, r0 @ 020120c4
    cmp r0, #0x2000 @ 020120c8
    .word 0xabbfc302 @ 020120cc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020120d0
    mov lr, r1 @ 020120d4
    lsl r8, r0, #0x18 @ 020120d8
    ldr r1, [pc, #0x380] @ 020120dc
    bic r5, r5, #0xd7 @ 020120e0
    lsrs r8, r8, #0x19 @ 020120e4
    orrhs r8, r8, #0x80 @ 020120e8
    ldrb r1, [r1, r8] @ 020120ec
    orrhs r5, r5, #1 @ 020120f0
    lsls r8, r8, #0x18 @ 020120f4
    orr r5, r5, r1 @ 020120f8
    lsr r1, r8, #0x18 @ 020120fc
    mov r0, lr @ 02012100
    cmp r0, #0x2000 @ 02012104
    .word 0xabbfc300 @ 02012108 blge #0x1002d10
    strb r1, [r3, r0] @ 0201210c
    ldrb r0, [fp], #1 @ 02012110
    subs r5, r5, #0x170000 @ 02012114
    ldrgt pc, [r2, r0, lsl #2] @ 02012118
    b .L_0200e030 @ 0201211c
@ z80_dispatch_02012120 at 0x02012120
    mov r1, r0 @ 02012120
    cmp r0, #0x2000 @ 02012124
    .word 0xabbfc2eb @ 02012128 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 0201212c
    mov lr, r1 @ 02012130
    lsl sb, r0, #0x18 @ 02012134
    ldr r1, [pc, #0x324] @ 02012138
    bic r5, r5, #0xd7 @ 0201213c
    lsrs sb, sb, #0x19 @ 02012140
    orrhs sb, sb, #0x80 @ 02012144
    ldrb r1, [r1, sb] @ 02012148
    orrhs r5, r5, #1 @ 0201214c
    lsls sb, sb, #0x18 @ 02012150
    orr r5, r5, r1 @ 02012154
    lsr r1, sb, #0x18 @ 02012158
    mov r0, lr @ 0201215c
    cmp r0, #0x2000 @ 02012160
    .word 0xabbfc2e9 @ 02012164 blge #0x1002d10
    strb r1, [r3, r0] @ 02012168
    ldrb r0, [fp], #1 @ 0201216c
    subs r5, r5, #0x170000 @ 02012170
    ldrgt pc, [r2, r0, lsl #2] @ 02012174
    b .L_0200e030 @ 02012178
@ z80_dispatch_0201217c at 0x0201217c
    mov r1, r0 @ 0201217c
    cmp r0, #0x2000 @ 02012180
    .word 0xabbfc2d4 @ 02012184 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012188
    mov lr, r1 @ 0201218c
    lsl r0, r0, #0x18 @ 02012190
    ldr r1, [pc, #0x2c8] @ 02012194
    bic r5, r5, #0xd7 @ 02012198
    lsrs r0, r0, #0x19 @ 0201219c
    orrhs r0, r0, #0x80 @ 020121a0
    ldrb r1, [r1, r0] @ 020121a4
    orrhs r5, r5, #1 @ 020121a8
    lsls r0, r0, #0x18 @ 020121ac
    orr r5, r5, r1 @ 020121b0
    and sl, sl, #0xff0000 @ 020121b4
    orr sl, sl, r0, lsl #24 @ 020121b8
    lsr r1, r0, #0x18 @ 020121bc
    mov r0, lr @ 020121c0
    cmp r0, #0x2000 @ 020121c4
    .word 0xabbfc2d0 @ 020121c8 blge #0x1002d10
    strb r1, [r3, r0] @ 020121cc
    ldrb r0, [fp], #1 @ 020121d0
    subs r5, r5, #0x170000 @ 020121d4
    ldrgt pc, [r2, r0, lsl #2] @ 020121d8
    b .L_0200e030 @ 020121dc
@ z80_dispatch_020121e0 at 0x020121e0
    mov r1, r0 @ 020121e0
    cmp r0, #0x2000 @ 020121e4
    .word 0xabbfc2bb @ 020121e8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020121ec
    mov lr, r1 @ 020121f0
    lsl r0, r0, #0x18 @ 020121f4
    ldr r1, [pc, #0x264] @ 020121f8
    bic r5, r5, #0xd7 @ 020121fc
    lsrs r0, r0, #0x19 @ 02012200
    orrhs r0, r0, #0x80 @ 02012204
    ldrb r1, [r1, r0] @ 02012208
    orrhs r5, r5, #1 @ 0201220c
    lsls r0, r0, #0x18 @ 02012210
    orr r5, r5, r1 @ 02012214
    and sl, sl, #0xff000000 @ 02012218
    orr sl, sl, r0, lsl #16 @ 0201221c
    lsr r1, r0, #0x18 @ 02012220
    mov r0, lr @ 02012224
    cmp r0, #0x2000 @ 02012228
    .word 0xabbfc2b7 @ 0201222c blge #0x1002d10
    strb r1, [r3, r0] @ 02012230
    ldrb r0, [fp], #1 @ 02012234
    subs r5, r5, #0x170000 @ 02012238
    ldrgt pc, [r2, r0, lsl #2] @ 0201223c
    b .L_0200e030 @ 02012240
@ z80_dispatch_02012244 at 0x02012244
    mov r1, r0 @ 02012244
    cmp r0, #0x2000 @ 02012248
    .word 0xabbfc2a2 @ 0201224c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012250
    mov lr, r1 @ 02012254
    ldr r1, [pc, #0x204] @ 02012258
    lsrs r0, r0, #1 @ 0201225c
    orrhs r0, r0, #0x80 @ 02012260
    ldrb r1, [r1, r0] @ 02012264
    bic r5, r5, #0xd7 @ 02012268
    orrhs r5, r5, #0x81 @ 0201226c
    orr r5, r5, r1 @ 02012270
    mov r1, r0 @ 02012274
    mov r0, lr @ 02012278
    cmp r0, #0x2000 @ 0201227c
    .word 0xabbfc2a2 @ 02012280 blge #0x1002d10
    strb r1, [r3, r0] @ 02012284
    ldrb r0, [fp], #1 @ 02012288
    subs r5, r5, #0x170000 @ 0201228c
    ldrgt pc, [r2, r0, lsl #2] @ 02012290
    b .L_0200e030 @ 02012294
@ z80_dispatch_02012298 at 0x02012298
    mov r1, r0 @ 02012298
    cmp r0, #0x2000 @ 0201229c
    .word 0xabbfc28d @ 020122a0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020122a4
    mov lr, r1 @ 020122a8
    lsl r4, r0, #0x18 @ 020122ac
    ldr r1, [pc, #0x1ac] @ 020122b0
    bic r5, r5, #0xd7 @ 020122b4
    lsrs r4, r4, #0x19 @ 020122b8
    orrhs r4, r4, #0x80 @ 020122bc
    ldrb r1, [r1, r4] @ 020122c0
    orrhs r5, r5, #1 @ 020122c4
    lsls r4, r4, #0x18 @ 020122c8
    orr r5, r5, r1 @ 020122cc
    lsr r1, r4, #0x18 @ 020122d0
    mov r0, lr @ 020122d4
    cmp r0, #0x2000 @ 020122d8
    .word 0xabbfc28b @ 020122dc blge #0x1002d10
    strb r1, [r3, r0] @ 020122e0
    ldrb r0, [fp], #1 @ 020122e4
    subs r5, r5, #0x170000 @ 020122e8
    ldrgt pc, [r2, r0, lsl #2] @ 020122ec
    b .L_0200e030 @ 020122f0
@ z80_dispatch_020122f4 at 0x020122f4
    mov r1, r0 @ 020122f4
    cmp r0, #0x2000 @ 020122f8
    .word 0xabbfc276 @ 020122fc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012300
    mov lr, r1 @ 02012304
    lsl r6, r0, #0x18 @ 02012308
    ldr r1, [pc, #0x150] @ 0201230c
    tst r5, #1 @ 02012310
    bic r5, r5, #0xd7 @ 02012314
    orrne r6, r6, #0x800000 @ 02012318
    lsls r6, r6, #1 @ 0201231c
    ldrb r1, [r1, r6, lsr #24] @ 02012320
    orrhs r5, r5, #1 @ 02012324
    orr r5, r5, r1 @ 02012328
    lsr r1, r6, #0x18 @ 0201232c
    mov r0, lr @ 02012330
    cmp r0, #0x2000 @ 02012334
    .word 0xabbfc274 @ 02012338 blge #0x1002d10
    strb r1, [r3, r0] @ 0201233c
    ldrb r0, [fp], #1 @ 02012340
    subs r5, r5, #0x170000 @ 02012344
    ldrgt pc, [r2, r0, lsl #2] @ 02012348
    b .L_0200e030 @ 0201234c
@ z80_dispatch_02012350 at 0x02012350
    mov r1, r0 @ 02012350
    cmp r0, #0x2000 @ 02012354
    .word 0xabbfc25f @ 02012358 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 0201235c
    mov lr, r1 @ 02012360
    lsl r7, r0, #0x18 @ 02012364
    ldr r1, [pc, #0xf4] @ 02012368
    tst r5, #1 @ 0201236c
    bic r5, r5, #0xd7 @ 02012370
    orrne r7, r7, #0x800000 @ 02012374
    lsls r7, r7, #1 @ 02012378
    ldrb r1, [r1, r7, lsr #24] @ 0201237c
    orrhs r5, r5, #1 @ 02012380
    orr r5, r5, r1 @ 02012384
    lsr r1, r7, #0x18 @ 02012388
    mov r0, lr @ 0201238c
    cmp r0, #0x2000 @ 02012390
    .word 0xabbfc25d @ 02012394 blge #0x1002d10
    strb r1, [r3, r0] @ 02012398
    ldrb r0, [fp], #1 @ 0201239c
    subs r5, r5, #0x170000 @ 020123a0
    ldrgt pc, [r2, r0, lsl #2] @ 020123a4
    b .L_0200e030 @ 020123a8
@ z80_dispatch_020123ac at 0x020123ac
    mov r1, r0 @ 020123ac
    cmp r0, #0x2000 @ 020123b0
    .word 0xabbfc248 @ 020123b4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020123b8
    mov lr, r1 @ 020123bc
    lsl r8, r0, #0x18 @ 020123c0
    ldr r1, [pc, #0x98] @ 020123c4
    tst r5, #1 @ 020123c8
    bic r5, r5, #0xd7 @ 020123cc
    orrne r8, r8, #0x800000 @ 020123d0
    lsls r8, r8, #1 @ 020123d4
    ldrb r1, [r1, r8, lsr #24] @ 020123d8
    orrhs r5, r5, #1 @ 020123dc
    orr r5, r5, r1 @ 020123e0
    lsr r1, r8, #0x18 @ 020123e4
    mov r0, lr @ 020123e8
    cmp r0, #0x2000 @ 020123ec
    .word 0xabbfc246 @ 020123f0 blge #0x1002d10
    strb r1, [r3, r0] @ 020123f4
    ldrb r0, [fp], #1 @ 020123f8
    subs r5, r5, #0x170000 @ 020123fc
    ldrgt pc, [r2, r0, lsl #2] @ 02012400
    b .L_0200e030 @ 02012404
@ z80_dispatch_02012408 at 0x02012408
    mov r1, r0 @ 02012408
    cmp r0, #0x2000 @ 0201240c
    .word 0xabbfc231 @ 02012410 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012414
    mov lr, r1 @ 02012418
    lsl sb, r0, #0x18 @ 0201241c
    ldr r1, [pc, #0x3c] @ 02012420
    tst r5, #1 @ 02012424
    bic r5, r5, #0xd7 @ 02012428
    orrne sb, sb, #0x800000 @ 0201242c
    lsls sb, sb, #1 @ 02012430
    ldrb r1, [r1, sb, lsr #24] @ 02012434
    orrhs r5, r5, #1 @ 02012438
    orr r5, r5, r1 @ 0201243c
    lsr r1, sb, #0x18 @ 02012440
    mov r0, lr @ 02012444
    cmp r0, #0x2000 @ 02012448
    .word 0xabbfc22f @ 0201244c blge #0x1002d10
    strb r1, [r3, r0] @ 02012450
    ldrb r0, [fp], #1 @ 02012454
    subs r5, r5, #0x170000 @ 02012458
    ldrgt pc, [r2, r0, lsl #2] @ 0201245c
    b .L_0200e030 @ 02012460
    .byte 0x20, 0xde, 0x00, 0x02 @ 02012464
@ z80_dispatch_02012468 at 0x02012468
    mov r1, r0 @ 02012468
    cmp r0, #0x2000 @ 0201246c
    .word 0xabbfc219 @ 02012470 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012474
    mov lr, r1 @ 02012478
    lsl r0, r0, #0x18 @ 0201247c
    ldr r1, [pc, #0x104] @ 02012480
    tst r5, #1 @ 02012484
    bic r5, r5, #0xd7 @ 02012488
    orrne r0, r0, #0x800000 @ 0201248c
    lsls r0, r0, #1 @ 02012490
    ldrb r1, [r1, r0, lsr #24] @ 02012494
    orrhs r5, r5, #1 @ 02012498
    orr r5, r5, r1 @ 0201249c
    and sl, sl, #0xff0000 @ 020124a0
    orr sl, sl, r0, lsl #24 @ 020124a4
    lsr r1, r0, #0x18 @ 020124a8
    mov r0, lr @ 020124ac
    cmp r0, #0x2000 @ 020124b0
    .word 0xabbfc215 @ 020124b4 blge #0x1002d10
    strb r1, [r3, r0] @ 020124b8
    ldrb r0, [fp], #1 @ 020124bc
    subs r5, r5, #0x170000 @ 020124c0
    ldrgt pc, [r2, r0, lsl #2] @ 020124c4
    b .L_0200e030 @ 020124c8
@ z80_dispatch_020124cc at 0x020124cc
    mov r1, r0 @ 020124cc
    cmp r0, #0x2000 @ 020124d0
    .word 0xabbfc200 @ 020124d4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020124d8
    mov lr, r1 @ 020124dc
    lsl r0, r0, #0x18 @ 020124e0
    ldr r1, [pc, #0xa0] @ 020124e4
    tst r5, #1 @ 020124e8
    bic r5, r5, #0xd7 @ 020124ec
    orrne r0, r0, #0x800000 @ 020124f0
    lsls r0, r0, #1 @ 020124f4
    ldrb r1, [r1, r0, lsr #24] @ 020124f8
    orrhs r5, r5, #1 @ 020124fc
    orr r5, r5, r1 @ 02012500
    and sl, sl, #0xff000000 @ 02012504
    orr sl, sl, r0, lsl #16 @ 02012508
    lsr r1, r0, #0x18 @ 0201250c
    mov r0, lr @ 02012510
    cmp r0, #0x2000 @ 02012514
    .word 0xabbfc1fc @ 02012518 blge #0x1002d10
    strb r1, [r3, r0] @ 0201251c
    ldrb r0, [fp], #1 @ 02012520
    subs r5, r5, #0x170000 @ 02012524
    ldrgt pc, [r2, r0, lsl #2] @ 02012528
    b .L_0200e030 @ 0201252c
@ z80_dispatch_02012530 at 0x02012530
    mov r1, r0 @ 02012530
    cmp r0, #0x2000 @ 02012534
    .word 0xabbfc1e7 @ 02012538 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 0201253c
    mov lr, r1 @ 02012540
    and r1, r5, #1 @ 02012544
    lsls r0, r0, #0x19 @ 02012548
    orr r0, r0, r1, lsl #24 @ 0201254c
    ldr r1, [pc, #0x34] @ 02012550
    bic r5, r5, #0xd7 @ 02012554
    ldrb r1, [r1, r0, lsr #24] @ 02012558
    orrhs r5, r5, #1 @ 0201255c
    lsr r0, r0, #0x18 @ 02012560
    orr r5, r5, r1 @ 02012564
    mov r1, r0 @ 02012568
    mov r0, lr @ 0201256c
    cmp r0, #0x2000 @ 02012570
    .word 0xabbfc1e5 @ 02012574 blge #0x1002d10
    strb r1, [r3, r0] @ 02012578
    ldrb r0, [fp], #1 @ 0201257c
    subs r5, r5, #0x170000 @ 02012580
    ldrgt pc, [r2, r0, lsl #2] @ 02012584
    b .L_0200e030 @ 02012588
    .byte 0x20, 0xde, 0x00, 0x02 @ 0201258c
@ z80_dispatch_02012590 at 0x02012590
    mov r1, r0 @ 02012590
    cmp r0, #0x2000 @ 02012594
    .word 0xabbfc1cf @ 02012598 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 0201259c
    mov lr, r1 @ 020125a0
    lsl r4, r0, #0x18 @ 020125a4
    ldr r1, [pc, #0xe5c] @ 020125a8
    tst r5, #1 @ 020125ac
    bic r5, r5, #0xd7 @ 020125b0
    orrne r4, r4, #0x800000 @ 020125b4
    lsls r4, r4, #1 @ 020125b8
    ldrb r1, [r1, r4, lsr #24] @ 020125bc
    orrhs r5, r5, #1 @ 020125c0
    orr r5, r5, r1 @ 020125c4
    lsr r1, r4, #0x18 @ 020125c8
    mov r0, lr @ 020125cc
    cmp r0, #0x2000 @ 020125d0
    .word 0xabbfc1cd @ 020125d4 blge #0x1002d10
    strb r1, [r3, r0] @ 020125d8
    ldrb r0, [fp], #1 @ 020125dc
    subs r5, r5, #0x170000 @ 020125e0
    ldrgt pc, [r2, r0, lsl #2] @ 020125e4
    b .L_0200e030 @ 020125e8
@ z80_dispatch_020125ec at 0x020125ec
    mov r1, r0 @ 020125ec
    cmp r0, #0x2000 @ 020125f0
    .word 0xabbfc1b8 @ 020125f4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020125f8
    mov lr, r1 @ 020125fc
    lsl r6, r0, #0x18 @ 02012600
    and r1, r5, #1 @ 02012604
    bic r5, r5, #0xd7 @ 02012608
    lsrs r6, r6, #0x19 @ 0201260c
    orr r6, r6, r1, lsl #7 @ 02012610
    ldr r1, [pc, #0xdf0] @ 02012614
    lsl r6, r6, #0x18 @ 02012618
    ldrb r1, [r1, r6, lsr #24] @ 0201261c
    orrhs r5, r5, #1 @ 02012620
    orr r5, r5, r1 @ 02012624
    lsr r1, r6, #0x18 @ 02012628
    mov r0, lr @ 0201262c
    cmp r0, #0x2000 @ 02012630
    .word 0xabbfc1b5 @ 02012634 blge #0x1002d10
    strb r1, [r3, r0] @ 02012638
    ldrb r0, [fp], #1 @ 0201263c
    subs r5, r5, #0x170000 @ 02012640
    ldrgt pc, [r2, r0, lsl #2] @ 02012644
    b .L_0200e030 @ 02012648
@ z80_dispatch_0201264c at 0x0201264c
    mov r1, r0 @ 0201264c
    cmp r0, #0x2000 @ 02012650
    .word 0xabbfc1a0 @ 02012654 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012658
    mov lr, r1 @ 0201265c
    lsl r7, r0, #0x18 @ 02012660
    and r1, r5, #1 @ 02012664
    bic r5, r5, #0xd7 @ 02012668
    lsrs r7, r7, #0x19 @ 0201266c
    orr r7, r7, r1, lsl #7 @ 02012670
    ldr r1, [pc, #0xd90] @ 02012674
    lsl r7, r7, #0x18 @ 02012678
    ldrb r1, [r1, r7, lsr #24] @ 0201267c
    orrhs r5, r5, #1 @ 02012680
    orr r5, r5, r1 @ 02012684
    lsr r1, r7, #0x18 @ 02012688
    mov r0, lr @ 0201268c
    cmp r0, #0x2000 @ 02012690
    .word 0xabbfc19d @ 02012694 blge #0x1002d10
    strb r1, [r3, r0] @ 02012698
    ldrb r0, [fp], #1 @ 0201269c
    subs r5, r5, #0x170000 @ 020126a0
    ldrgt pc, [r2, r0, lsl #2] @ 020126a4
    b .L_0200e030 @ 020126a8
@ z80_dispatch_020126ac at 0x020126ac
    mov r1, r0 @ 020126ac
    cmp r0, #0x2000 @ 020126b0
    .word 0xabbfc188 @ 020126b4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020126b8
    mov lr, r1 @ 020126bc
    lsl r8, r0, #0x18 @ 020126c0
    and r1, r5, #1 @ 020126c4
    bic r5, r5, #0xd7 @ 020126c8
    lsrs r8, r8, #0x19 @ 020126cc
    orr r8, r8, r1, lsl #7 @ 020126d0
    ldr r1, [pc, #0xd30] @ 020126d4
    lsl r8, r8, #0x18 @ 020126d8
    ldrb r1, [r1, r8, lsr #24] @ 020126dc
    orrhs r5, r5, #1 @ 020126e0
    orr r5, r5, r1 @ 020126e4
    lsr r1, r8, #0x18 @ 020126e8
    mov r0, lr @ 020126ec
    cmp r0, #0x2000 @ 020126f0
    .word 0xabbfc185 @ 020126f4 blge #0x1002d10
    strb r1, [r3, r0] @ 020126f8
    ldrb r0, [fp], #1 @ 020126fc
    subs r5, r5, #0x170000 @ 02012700
    ldrgt pc, [r2, r0, lsl #2] @ 02012704
    b .L_0200e030 @ 02012708
@ z80_dispatch_0201270c at 0x0201270c
    mov r1, r0 @ 0201270c
    cmp r0, #0x2000 @ 02012710
    .word 0xabbfc170 @ 02012714 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012718
    mov lr, r1 @ 0201271c
    lsl sb, r0, #0x18 @ 02012720
    and r1, r5, #1 @ 02012724
    bic r5, r5, #0xd7 @ 02012728
    lsrs sb, sb, #0x19 @ 0201272c
    orr sb, sb, r1, lsl #7 @ 02012730
    ldr r1, [pc, #0xcd0] @ 02012734
    lsl sb, sb, #0x18 @ 02012738
    ldrb r1, [r1, sb, lsr #24] @ 0201273c
    orrhs r5, r5, #1 @ 02012740
    orr r5, r5, r1 @ 02012744
    lsr r1, sb, #0x18 @ 02012748
    mov r0, lr @ 0201274c
    cmp r0, #0x2000 @ 02012750
    .word 0xabbfc16d @ 02012754 blge #0x1002d10
    strb r1, [r3, r0] @ 02012758
    ldrb r0, [fp], #1 @ 0201275c
    subs r5, r5, #0x170000 @ 02012760
    ldrgt pc, [r2, r0, lsl #2] @ 02012764
    b .L_0200e030 @ 02012768
@ z80_dispatch_0201276c at 0x0201276c
    mov r1, r0 @ 0201276c
    cmp r0, #0x2000 @ 02012770
    .word 0xabbfc158 @ 02012774 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012778
    mov lr, r1 @ 0201277c
    lsl r0, r0, #0x18 @ 02012780
    and r1, r5, #1 @ 02012784
    bic r5, r5, #0xd7 @ 02012788
    lsrs r0, r0, #0x19 @ 0201278c
    orr r0, r0, r1, lsl #7 @ 02012790
    ldr r1, [pc, #0xc70] @ 02012794
    lsl r0, r0, #0x18 @ 02012798
    ldrb r1, [r1, r0, lsr #24] @ 0201279c
    orrhs r5, r5, #1 @ 020127a0
    orr r5, r5, r1 @ 020127a4
    and sl, sl, #0xff0000 @ 020127a8
    orr sl, sl, r0, lsl #24 @ 020127ac
    lsr r1, r0, #0x18 @ 020127b0
    mov r0, lr @ 020127b4
    cmp r0, #0x2000 @ 020127b8
    .word 0xabbfc153 @ 020127bc blge #0x1002d10
    strb r1, [r3, r0] @ 020127c0
    ldrb r0, [fp], #1 @ 020127c4
    subs r5, r5, #0x170000 @ 020127c8
    ldrgt pc, [r2, r0, lsl #2] @ 020127cc
    b .L_0200e030 @ 020127d0
@ z80_dispatch_020127d4 at 0x020127d4
    mov r1, r0 @ 020127d4
    cmp r0, #0x2000 @ 020127d8
    .word 0xabbfc13e @ 020127dc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020127e0
    mov lr, r1 @ 020127e4
    lsl r0, r0, #0x18 @ 020127e8
    and r1, r5, #1 @ 020127ec
    bic r5, r5, #0xd7 @ 020127f0
    lsrs r0, r0, #0x19 @ 020127f4
    orr r0, r0, r1, lsl #7 @ 020127f8
    ldr r1, [pc, #0xc08] @ 020127fc
    lsl r0, r0, #0x18 @ 02012800
    ldrb r1, [r1, r0, lsr #24] @ 02012804
    orrhs r5, r5, #1 @ 02012808
    orr r5, r5, r1 @ 0201280c
    and sl, sl, #0xff000000 @ 02012810
    orr sl, sl, r0, lsl #16 @ 02012814
    lsr r1, r0, #0x18 @ 02012818
    mov r0, lr @ 0201281c
    cmp r0, #0x2000 @ 02012820
    .word 0xabbfc139 @ 02012824 blge #0x1002d10
    strb r1, [r3, r0] @ 02012828
    ldrb r0, [fp], #1 @ 0201282c
    subs r5, r5, #0x170000 @ 02012830
    ldrgt pc, [r2, r0, lsl #2] @ 02012834
    b .L_0200e030 @ 02012838
@ z80_dispatch_0201283c at 0x0201283c
    mov r1, r0 @ 0201283c
    cmp r0, #0x2000 @ 02012840
    .word 0xabbfc124 @ 02012844 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012848
    mov lr, r1 @ 0201284c
    ldr r1, [pc, #0xbb4] @ 02012850
    tst r5, #1 @ 02012854
    orrne r0, r0, #0x100 @ 02012858
    lsrs r0, r0, #1 @ 0201285c
    ldrb r1, [r1, r0] @ 02012860
    bic r5, r5, #0xd7 @ 02012864
    orrhs r5, r5, #1 @ 02012868
    orr r5, r5, r1 @ 0201286c
    mov r1, r0 @ 02012870
    mov r0, lr @ 02012874
    cmp r0, #0x2000 @ 02012878
    .word 0xabbfc123 @ 0201287c blge #0x1002d10
    strb r1, [r3, r0] @ 02012880
    ldrb r0, [fp], #1 @ 02012884
    subs r5, r5, #0x170000 @ 02012888
    ldrgt pc, [r2, r0, lsl #2] @ 0201288c
    b .L_0200e030 @ 02012890
@ z80_dispatch_02012894 at 0x02012894
    mov r1, r0 @ 02012894
    cmp r0, #0x2000 @ 02012898
    .word 0xabbfc10e @ 0201289c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020128a0
    mov lr, r1 @ 020128a4
    lsl r4, r0, #0x18 @ 020128a8
    and r1, r5, #1 @ 020128ac
    bic r5, r5, #0xd7 @ 020128b0
    lsrs r4, r4, #0x19 @ 020128b4
    orr r4, r4, r1, lsl #7 @ 020128b8
    ldr r1, [pc, #0xb48] @ 020128bc
    lsl r4, r4, #0x18 @ 020128c0
    ldrb r1, [r1, r4, lsr #24] @ 020128c4
    orrhs r5, r5, #1 @ 020128c8
    orr r5, r5, r1 @ 020128cc
    lsr r1, r4, #0x18 @ 020128d0
    mov r0, lr @ 020128d4
    cmp r0, #0x2000 @ 020128d8
    .word 0xabbfc10b @ 020128dc blge #0x1002d10
    strb r1, [r3, r0] @ 020128e0
    ldrb r0, [fp], #1 @ 020128e4
    subs r5, r5, #0x170000 @ 020128e8
    ldrgt pc, [r2, r0, lsl #2] @ 020128ec
    b .L_0200e030 @ 020128f0
@ z80_dispatch_020128f4 at 0x020128f4
    mov r1, r0 @ 020128f4
    cmp r0, #0x2000 @ 020128f8
    .word 0xabbfc0f6 @ 020128fc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012900
    mov lr, r1 @ 02012904
    lsl r6, r0, #0x18 @ 02012908
    ldr r1, [pc, #0xaf8] @ 0201290c
    lsls r6, r6, #1 @ 02012910
    ldrb r1, [r1, r6, lsr #24] @ 02012914
    bic r5, r5, #0xd7 @ 02012918
    orrhs r5, r5, #1 @ 0201291c
    orr r5, r5, r1 @ 02012920
    lsr r1, r6, #0x18 @ 02012924
    mov r0, lr @ 02012928
    cmp r0, #0x2000 @ 0201292c
    .word 0xabbfc0f6 @ 02012930 blge #0x1002d10
    strb r1, [r3, r0] @ 02012934
    ldrb r0, [fp], #1 @ 02012938
    subs r5, r5, #0x170000 @ 0201293c
    ldrgt pc, [r2, r0, lsl #2] @ 02012940
    b .L_0200e030 @ 02012944
@ z80_dispatch_02012948 at 0x02012948
    mov r1, r0 @ 02012948
    cmp r0, #0x2000 @ 0201294c
    .word 0xabbfc0e1 @ 02012950 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012954
    mov lr, r1 @ 02012958
    lsl r7, r0, #0x18 @ 0201295c
    ldr r1, [pc, #0xaa4] @ 02012960
    lsls r7, r7, #1 @ 02012964
    ldrb r1, [r1, r7, lsr #24] @ 02012968
    bic r5, r5, #0xd7 @ 0201296c
    orrhs r5, r5, #1 @ 02012970
    orr r5, r5, r1 @ 02012974
    lsr r1, r7, #0x18 @ 02012978
    mov r0, lr @ 0201297c
    cmp r0, #0x2000 @ 02012980
    .word 0xabbfc0e1 @ 02012984 blge #0x1002d10
    strb r1, [r3, r0] @ 02012988
    ldrb r0, [fp], #1 @ 0201298c
    subs r5, r5, #0x170000 @ 02012990
    ldrgt pc, [r2, r0, lsl #2] @ 02012994
    b .L_0200e030 @ 02012998
@ z80_dispatch_0201299c at 0x0201299c
    mov r1, r0 @ 0201299c
    cmp r0, #0x2000 @ 020129a0
    .word 0xabbfc0cc @ 020129a4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020129a8
    mov lr, r1 @ 020129ac
    lsl r8, r0, #0x18 @ 020129b0
    ldr r1, [pc, #0xa50] @ 020129b4
    lsls r8, r8, #1 @ 020129b8
    ldrb r1, [r1, r8, lsr #24] @ 020129bc
    bic r5, r5, #0xd7 @ 020129c0
    orrhs r5, r5, #1 @ 020129c4
    orr r5, r5, r1 @ 020129c8
    lsr r1, r8, #0x18 @ 020129cc
    mov r0, lr @ 020129d0
    cmp r0, #0x2000 @ 020129d4
    .word 0xabbfc0cc @ 020129d8 blge #0x1002d10
    strb r1, [r3, r0] @ 020129dc
    ldrb r0, [fp], #1 @ 020129e0
    subs r5, r5, #0x170000 @ 020129e4
    ldrgt pc, [r2, r0, lsl #2] @ 020129e8
    b .L_0200e030 @ 020129ec
@ z80_dispatch_020129f0 at 0x020129f0
    mov r1, r0 @ 020129f0
    cmp r0, #0x2000 @ 020129f4
    .word 0xabbfc0b7 @ 020129f8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020129fc
    mov lr, r1 @ 02012a00
    lsl sb, r0, #0x18 @ 02012a04
    ldr r1, [pc, #0x9fc] @ 02012a08
    lsls sb, sb, #1 @ 02012a0c
    ldrb r1, [r1, sb, lsr #24] @ 02012a10
    bic r5, r5, #0xd7 @ 02012a14
    orrhs r5, r5, #1 @ 02012a18
    orr r5, r5, r1 @ 02012a1c
    lsr r1, sb, #0x18 @ 02012a20
    mov r0, lr @ 02012a24
    cmp r0, #0x2000 @ 02012a28
    .word 0xabbfc0b7 @ 02012a2c blge #0x1002d10
    strb r1, [r3, r0] @ 02012a30
    ldrb r0, [fp], #1 @ 02012a34
    subs r5, r5, #0x170000 @ 02012a38
    ldrgt pc, [r2, r0, lsl #2] @ 02012a3c
    b .L_0200e030 @ 02012a40
@ z80_dispatch_02012a44 at 0x02012a44
    mov r1, r0 @ 02012a44
    cmp r0, #0x2000 @ 02012a48
    .word 0xabbfc0a2 @ 02012a4c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012a50
    mov lr, r1 @ 02012a54
    lsl r0, r0, #0x18 @ 02012a58
    ldr r1, [pc, #0x9a8] @ 02012a5c
    lsls r0, r0, #1 @ 02012a60
    ldrb r1, [r1, r0, lsr #24] @ 02012a64
    bic r5, r5, #0xd7 @ 02012a68
    orrhs r5, r5, #1 @ 02012a6c
    orr r5, r5, r1 @ 02012a70
    and sl, sl, #0xff0000 @ 02012a74
    orr sl, sl, r0, lsl #24 @ 02012a78
    lsr r1, r0, #0x18 @ 02012a7c
    mov r0, lr @ 02012a80
    cmp r0, #0x2000 @ 02012a84
    .word 0xabbfc0a0 @ 02012a88 blge #0x1002d10
    strb r1, [r3, r0] @ 02012a8c
    ldrb r0, [fp], #1 @ 02012a90
    subs r5, r5, #0x170000 @ 02012a94
    ldrgt pc, [r2, r0, lsl #2] @ 02012a98
    b .L_0200e030 @ 02012a9c
@ z80_dispatch_02012aa0 at 0x02012aa0
    mov r1, r0 @ 02012aa0
    cmp r0, #0x2000 @ 02012aa4
    .word 0xabbfc08b @ 02012aa8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012aac
    mov lr, r1 @ 02012ab0
    lsl r0, r0, #0x18 @ 02012ab4
    ldr r1, [pc, #0x94c] @ 02012ab8
    lsls r0, r0, #1 @ 02012abc
    ldrb r1, [r1, r0, lsr #24] @ 02012ac0
    bic r5, r5, #0xd7 @ 02012ac4
    orrhs r5, r5, #1 @ 02012ac8
    orr r5, r5, r1 @ 02012acc
    and sl, sl, #0xff000000 @ 02012ad0
    orr sl, sl, r0, lsl #16 @ 02012ad4
    lsr r1, r0, #0x18 @ 02012ad8
    mov r0, lr @ 02012adc
    cmp r0, #0x2000 @ 02012ae0
    .word 0xabbfc089 @ 02012ae4 blge #0x1002d10
    strb r1, [r3, r0] @ 02012ae8
    ldrb r0, [fp], #1 @ 02012aec
    subs r5, r5, #0x170000 @ 02012af0
    ldrgt pc, [r2, r0, lsl #2] @ 02012af4
    b .L_0200e030 @ 02012af8
@ z80_dispatch_02012afc at 0x02012afc
    mov r1, r0 @ 02012afc
    cmp r0, #0x2000 @ 02012b00
    .word 0xabbfc074 @ 02012b04 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012b08
    mov lr, r1 @ 02012b0c
    ldr r1, [pc, #0x8f4] @ 02012b10
    lsls r0, r0, #0x19 @ 02012b14
    ldrb r1, [r1, r0, lsr #24] @ 02012b18
    bic r5, r5, #0xd7 @ 02012b1c
    orrhs r5, r5, #1 @ 02012b20
    orr r5, r5, r1 @ 02012b24
    lsr r0, r0, #0x18 @ 02012b28
    mov r1, r0 @ 02012b2c
    mov r0, lr @ 02012b30
    cmp r0, #0x2000 @ 02012b34
    .word 0xabbfc074 @ 02012b38 blge #0x1002d10
    strb r1, [r3, r0] @ 02012b3c
    ldrb r0, [fp], #1 @ 02012b40
    subs r5, r5, #0x170000 @ 02012b44
    ldrgt pc, [r2, r0, lsl #2] @ 02012b48
    b .L_0200e030 @ 02012b4c
@ z80_dispatch_02012b50 at 0x02012b50
    mov r1, r0 @ 02012b50
    cmp r0, #0x2000 @ 02012b54
    .word 0xabbfc05f @ 02012b58 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012b5c
    mov lr, r1 @ 02012b60
    lsl r4, r0, #0x18 @ 02012b64
    ldr r1, [pc, #0x89c] @ 02012b68
    lsls r4, r4, #1 @ 02012b6c
    ldrb r1, [r1, r4, lsr #24] @ 02012b70
    bic r5, r5, #0xd7 @ 02012b74
    orrhs r5, r5, #1 @ 02012b78
    orr r5, r5, r1 @ 02012b7c
    lsr r1, r4, #0x18 @ 02012b80
    mov r0, lr @ 02012b84
    cmp r0, #0x2000 @ 02012b88
    .word 0xabbfc05f @ 02012b8c blge #0x1002d10
    strb r1, [r3, r0] @ 02012b90
    ldrb r0, [fp], #1 @ 02012b94
    subs r5, r5, #0x170000 @ 02012b98
    ldrgt pc, [r2, r0, lsl #2] @ 02012b9c
    b .L_0200e030 @ 02012ba0
@ z80_dispatch_02012ba4 at 0x02012ba4
    mov r1, r0 @ 02012ba4
    cmp r0, #0x2000 @ 02012ba8
    .word 0xabbfc04a @ 02012bac blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012bb0
    mov lr, r1 @ 02012bb4
    lsl r6, r0, #0x18 @ 02012bb8
    ldr r1, [pc, #0x848] @ 02012bbc
    asrs r6, r6, #0x19 @ 02012bc0
    ldrb r1, [r1, r6] @ 02012bc4
    bic r5, r5, #0xd7 @ 02012bc8
    orrhs r5, r5, #1 @ 02012bcc
    lsl r6, r6, #0x18 @ 02012bd0
    orr r5, r5, r1 @ 02012bd4
    lsr r1, r6, #0x18 @ 02012bd8
    mov r0, lr @ 02012bdc
    cmp r0, #0x2000 @ 02012be0
    .word 0xabbfc049 @ 02012be4 blge #0x1002d10
    strb r1, [r3, r0] @ 02012be8
    ldrb r0, [fp], #1 @ 02012bec
    subs r5, r5, #0x170000 @ 02012bf0
    ldrgt pc, [r2, r0, lsl #2] @ 02012bf4
    b .L_0200e030 @ 02012bf8
@ z80_dispatch_02012bfc at 0x02012bfc
    mov r1, r0 @ 02012bfc
    cmp r0, #0x2000 @ 02012c00
    .word 0xabbfc034 @ 02012c04 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012c08
    mov lr, r1 @ 02012c0c
    lsl r7, r0, #0x18 @ 02012c10
    ldr r1, [pc, #0x7f0] @ 02012c14
    asrs r7, r7, #0x19 @ 02012c18
    ldrb r1, [r1, r7] @ 02012c1c
    bic r5, r5, #0xd7 @ 02012c20
    orrhs r5, r5, #1 @ 02012c24
    lsl r7, r7, #0x18 @ 02012c28
    orr r5, r5, r1 @ 02012c2c
    lsr r1, r7, #0x18 @ 02012c30
    mov r0, lr @ 02012c34
    cmp r0, #0x2000 @ 02012c38
    .word 0xabbfc033 @ 02012c3c blge #0x1002d10
    strb r1, [r3, r0] @ 02012c40
    ldrb r0, [fp], #1 @ 02012c44
    subs r5, r5, #0x170000 @ 02012c48
    ldrgt pc, [r2, r0, lsl #2] @ 02012c4c
    b .L_0200e030 @ 02012c50
@ z80_dispatch_02012c54 at 0x02012c54
    mov r1, r0 @ 02012c54
    cmp r0, #0x2000 @ 02012c58
    .word 0xabbfc01e @ 02012c5c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012c60
    mov lr, r1 @ 02012c64
    lsl r8, r0, #0x18 @ 02012c68
    ldr r1, [pc, #0x798] @ 02012c6c
    asrs r8, r8, #0x19 @ 02012c70
    ldrb r1, [r1, r8] @ 02012c74
    bic r5, r5, #0xd7 @ 02012c78
    orrhs r5, r5, #1 @ 02012c7c
    lsl r8, r8, #0x18 @ 02012c80
    orr r5, r5, r1 @ 02012c84
    lsr r1, r8, #0x18 @ 02012c88
    mov r0, lr @ 02012c8c
    cmp r0, #0x2000 @ 02012c90
    .word 0xabbfc01d @ 02012c94 blge #0x1002d10
    strb r1, [r3, r0] @ 02012c98
    ldrb r0, [fp], #1 @ 02012c9c
    subs r5, r5, #0x170000 @ 02012ca0
    ldrgt pc, [r2, r0, lsl #2] @ 02012ca4
    b .L_0200e030 @ 02012ca8
@ z80_dispatch_02012cac at 0x02012cac
    mov r1, r0 @ 02012cac
    cmp r0, #0x2000 @ 02012cb0
    .word 0xabbfc008 @ 02012cb4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012cb8
    mov lr, r1 @ 02012cbc
    lsl sb, r0, #0x18 @ 02012cc0
    ldr r1, [pc, #0x740] @ 02012cc4
    asrs sb, sb, #0x19 @ 02012cc8
    ldrb r1, [r1, sb] @ 02012ccc
    bic r5, r5, #0xd7 @ 02012cd0
    orrhs r5, r5, #1 @ 02012cd4
    lsl sb, sb, #0x18 @ 02012cd8
    orr r5, r5, r1 @ 02012cdc
    lsr r1, sb, #0x18 @ 02012ce0
    mov r0, lr @ 02012ce4
    cmp r0, #0x2000 @ 02012ce8
    .word 0xabbfc007 @ 02012cec blge #0x1002d10
    strb r1, [r3, r0] @ 02012cf0
    ldrb r0, [fp], #1 @ 02012cf4
    subs r5, r5, #0x170000 @ 02012cf8
    ldrgt pc, [r2, r0, lsl #2] @ 02012cfc
    b .L_0200e030 @ 02012d00
@ z80_dispatch_02012d04 at 0x02012d04
    mov r1, r0 @ 02012d04
    cmp r0, #0x2000 @ 02012d08
    .word 0xabbfbff2 @ 02012d0c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012d10
    mov lr, r1 @ 02012d14
    lsl r0, r0, #0x18 @ 02012d18
    ldr r1, [pc, #0x6e8] @ 02012d1c
    asrs r0, r0, #0x19 @ 02012d20
    ldrb r1, [r1, r0] @ 02012d24
    bic r5, r5, #0xd7 @ 02012d28
    orrhs r5, r5, #1 @ 02012d2c
    lsl r0, r0, #0x18 @ 02012d30
    orr r5, r5, r1 @ 02012d34
    and sl, sl, #0xff0000 @ 02012d38
    orr sl, sl, r0, lsl #24 @ 02012d3c
    lsr r1, r0, #0x18 @ 02012d40
    mov r0, lr @ 02012d44
    cmp r0, #0x2000 @ 02012d48
    .word 0xabbfbfef @ 02012d4c blge #0x1002d10
    strb r1, [r3, r0] @ 02012d50
    ldrb r0, [fp], #1 @ 02012d54
    subs r5, r5, #0x170000 @ 02012d58
    ldrgt pc, [r2, r0, lsl #2] @ 02012d5c
    b .L_0200e030 @ 02012d60
@ z80_dispatch_02012d64 at 0x02012d64
    mov r1, r0 @ 02012d64
    cmp r0, #0x2000 @ 02012d68
    .word 0xabbfbfda @ 02012d6c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012d70
    mov lr, r1 @ 02012d74
    lsl r0, r0, #0x18 @ 02012d78
    ldr r1, [pc, #0x688] @ 02012d7c
    asrs r0, r0, #0x19 @ 02012d80
    ldrb r1, [r1, r0] @ 02012d84
    bic r5, r5, #0xd7 @ 02012d88
    orrhs r5, r5, #1 @ 02012d8c
    lsl r0, r0, #0x18 @ 02012d90
    orr r5, r5, r1 @ 02012d94
    and sl, sl, #0xff000000 @ 02012d98
    orr sl, sl, r0, lsl #16 @ 02012d9c
    lsr r1, r0, #0x18 @ 02012da0
    mov r0, lr @ 02012da4
    cmp r0, #0x2000 @ 02012da8
    .word 0xabbfbfd7 @ 02012dac blge #0x1002d10
    strb r1, [r3, r0] @ 02012db0
    ldrb r0, [fp], #1 @ 02012db4
    subs r5, r5, #0x170000 @ 02012db8
    ldrgt pc, [r2, r0, lsl #2] @ 02012dbc
    b .L_0200e030 @ 02012dc0
@ z80_dispatch_02012dc4 at 0x02012dc4
    mov r1, r0 @ 02012dc4
    cmp r0, #0x2000 @ 02012dc8
    .word 0xabbfbfc2 @ 02012dcc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012dd0
    mov lr, r1 @ 02012dd4
    ldr r1, [pc, #0x62c] @ 02012dd8
    lsl r0, r0, #0x18 @ 02012ddc
    asrs r0, r0, #0x19 @ 02012de0
    and r0, r0, #0xff @ 02012de4
    ldrb r1, [r1, r0] @ 02012de8
    bic r5, r5, #0xd7 @ 02012dec
    orrhs r5, r5, #1 @ 02012df0
    orr r5, r5, r1 @ 02012df4
    mov r1, r0 @ 02012df8
    mov r0, lr @ 02012dfc
    cmp r0, #0x2000 @ 02012e00
    .word 0xabbfbfc1 @ 02012e04 blge #0x1002d10
    strb r1, [r3, r0] @ 02012e08
    ldrb r0, [fp], #1 @ 02012e0c
    subs r5, r5, #0x170000 @ 02012e10
    ldrgt pc, [r2, r0, lsl #2] @ 02012e14
    b .L_0200e030 @ 02012e18
@ z80_dispatch_02012e1c at 0x02012e1c
    mov r1, r0 @ 02012e1c
    cmp r0, #0x2000 @ 02012e20
    .word 0xabbfbfac @ 02012e24 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012e28
    mov lr, r1 @ 02012e2c
    lsl r4, r0, #0x18 @ 02012e30
    ldr r1, [pc, #0x5d0] @ 02012e34
    asrs r4, r4, #0x19 @ 02012e38
    ldrb r1, [r1, r4] @ 02012e3c
    bic r5, r5, #0xd7 @ 02012e40
    orrhs r5, r5, #1 @ 02012e44
    lsl r4, r4, #0x18 @ 02012e48
    orr r5, r5, r1 @ 02012e4c
    lsr r1, r4, #0x18 @ 02012e50
    mov r0, lr @ 02012e54
    cmp r0, #0x2000 @ 02012e58
    .word 0xabbfbfab @ 02012e5c blge #0x1002d10
    strb r1, [r3, r0] @ 02012e60
    ldrb r0, [fp], #1 @ 02012e64
    subs r5, r5, #0x170000 @ 02012e68
    ldrgt pc, [r2, r0, lsl #2] @ 02012e6c
    b .L_0200e030 @ 02012e70
@ z80_dispatch_02012e74 at 0x02012e74
    mov r1, r0 @ 02012e74
    cmp r0, #0x2000 @ 02012e78
    .word 0xabbfbf96 @ 02012e7c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012e80
    mov lr, r1 @ 02012e84
    lsl r6, r0, #0x18 @ 02012e88
    ldr r1, [pc, #0x578] @ 02012e8c
    lsls r6, r6, #1 @ 02012e90
    orr r6, r6, #0x1000000 @ 02012e94
    ldrb r1, [r1, r6, lsr #24] @ 02012e98
    bic r5, r5, #0xd7 @ 02012e9c
    orrhs r5, r5, #1 @ 02012ea0
    orr r5, r5, r1 @ 02012ea4
    lsr r1, r6, #0x18 @ 02012ea8
    mov r0, lr @ 02012eac
    cmp r0, #0x2000 @ 02012eb0
    .word 0xabbfbf95 @ 02012eb4 blge #0x1002d10
    strb r1, [r3, r0] @ 02012eb8
    ldrb r0, [fp], #1 @ 02012ebc
    subs r5, r5, #0x170000 @ 02012ec0
    ldrgt pc, [r2, r0, lsl #2] @ 02012ec4
    b .L_0200e030 @ 02012ec8
@ z80_dispatch_02012ecc at 0x02012ecc
    mov r1, r0 @ 02012ecc
    cmp r0, #0x2000 @ 02012ed0
    .word 0xabbfbf80 @ 02012ed4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012ed8
    mov lr, r1 @ 02012edc
    lsl r7, r0, #0x18 @ 02012ee0
    ldr r1, [pc, #0x520] @ 02012ee4
    lsls r7, r7, #1 @ 02012ee8
    orr r7, r7, #0x1000000 @ 02012eec
    ldrb r1, [r1, r7, lsr #24] @ 02012ef0
    bic r5, r5, #0xd7 @ 02012ef4
    orrhs r5, r5, #1 @ 02012ef8
    orr r5, r5, r1 @ 02012efc
    lsr r1, r7, #0x18 @ 02012f00
    mov r0, lr @ 02012f04
    cmp r0, #0x2000 @ 02012f08
    .word 0xabbfbf7f @ 02012f0c blge #0x1002d10
    strb r1, [r3, r0] @ 02012f10
    ldrb r0, [fp], #1 @ 02012f14
    subs r5, r5, #0x170000 @ 02012f18
    ldrgt pc, [r2, r0, lsl #2] @ 02012f1c
    b .L_0200e030 @ 02012f20
@ z80_dispatch_02012f24 at 0x02012f24
    mov r1, r0 @ 02012f24
    cmp r0, #0x2000 @ 02012f28
    .word 0xabbfbf6a @ 02012f2c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012f30
    mov lr, r1 @ 02012f34
    lsl r8, r0, #0x18 @ 02012f38
    ldr r1, [pc, #0x4c8] @ 02012f3c
    lsls r8, r8, #1 @ 02012f40
    orr r8, r8, #0x1000000 @ 02012f44
    ldrb r1, [r1, r8, lsr #24] @ 02012f48
    bic r5, r5, #0xd7 @ 02012f4c
    orrhs r5, r5, #1 @ 02012f50
    orr r5, r5, r1 @ 02012f54
    lsr r1, r8, #0x18 @ 02012f58
    mov r0, lr @ 02012f5c
    cmp r0, #0x2000 @ 02012f60
    .word 0xabbfbf69 @ 02012f64 blge #0x1002d10
    strb r1, [r3, r0] @ 02012f68
    ldrb r0, [fp], #1 @ 02012f6c
    subs r5, r5, #0x170000 @ 02012f70
    ldrgt pc, [r2, r0, lsl #2] @ 02012f74
    b .L_0200e030 @ 02012f78
@ z80_dispatch_02012f7c at 0x02012f7c
    mov r1, r0 @ 02012f7c
    cmp r0, #0x2000 @ 02012f80
    .word 0xabbfbf54 @ 02012f84 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012f88
    mov lr, r1 @ 02012f8c
    lsl sb, r0, #0x18 @ 02012f90
    ldr r1, [pc, #0x470] @ 02012f94
    lsls sb, sb, #1 @ 02012f98
    orr sb, sb, #0x1000000 @ 02012f9c
    ldrb r1, [r1, sb, lsr #24] @ 02012fa0
    bic r5, r5, #0xd7 @ 02012fa4
    orrhs r5, r5, #1 @ 02012fa8
    orr r5, r5, r1 @ 02012fac
    lsr r1, sb, #0x18 @ 02012fb0
    mov r0, lr @ 02012fb4
    cmp r0, #0x2000 @ 02012fb8
    .word 0xabbfbf53 @ 02012fbc blge #0x1002d10
    strb r1, [r3, r0] @ 02012fc0
    ldrb r0, [fp], #1 @ 02012fc4
    subs r5, r5, #0x170000 @ 02012fc8
    ldrgt pc, [r2, r0, lsl #2] @ 02012fcc
    b .L_0200e030 @ 02012fd0
@ z80_dispatch_02012fd4 at 0x02012fd4
    mov r1, r0 @ 02012fd4
    cmp r0, #0x2000 @ 02012fd8
    .word 0xabbfbf3e @ 02012fdc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02012fe0
    mov lr, r1 @ 02012fe4
    lsl r0, r0, #0x18 @ 02012fe8
    ldr r1, [pc, #0x418] @ 02012fec
    lsls r0, r0, #1 @ 02012ff0
    orr r0, r0, #0x1000000 @ 02012ff4
    ldrb r1, [r1, r0, lsr #24] @ 02012ff8
    bic r5, r5, #0xd7 @ 02012ffc
    orrhs r5, r5, #1 @ 02013000
    orr r5, r5, r1 @ 02013004
    and sl, sl, #0xff0000 @ 02013008
    orr sl, sl, r0, lsl #24 @ 0201300c
    lsr r1, r0, #0x18 @ 02013010
    mov r0, lr @ 02013014
    cmp r0, #0x2000 @ 02013018
    .word 0xabbfbf3b @ 0201301c blge #0x1002d10
    strb r1, [r3, r0] @ 02013020
    ldrb r0, [fp], #1 @ 02013024
    subs r5, r5, #0x170000 @ 02013028
    ldrgt pc, [r2, r0, lsl #2] @ 0201302c
    b .L_0200e030 @ 02013030
@ z80_dispatch_02013034 at 0x02013034
    mov r1, r0 @ 02013034
    cmp r0, #0x2000 @ 02013038
    .word 0xabbfbf26 @ 0201303c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013040
    mov lr, r1 @ 02013044
    lsl r0, r0, #0x18 @ 02013048
    ldr r1, [pc, #0x3b8] @ 0201304c
    lsls r0, r0, #1 @ 02013050
    orr r0, r0, #0x1000000 @ 02013054
    ldrb r1, [r1, r0, lsr #24] @ 02013058
    bic r5, r5, #0xd7 @ 0201305c
    orrhs r5, r5, #1 @ 02013060
    orr r5, r5, r1 @ 02013064
    and sl, sl, #0xff000000 @ 02013068
    orr sl, sl, r0, lsl #16 @ 0201306c
    lsr r1, r0, #0x18 @ 02013070
    mov r0, lr @ 02013074
    cmp r0, #0x2000 @ 02013078
    .word 0xabbfbf23 @ 0201307c blge #0x1002d10
    strb r1, [r3, r0] @ 02013080
    ldrb r0, [fp], #1 @ 02013084
    subs r5, r5, #0x170000 @ 02013088
    ldrgt pc, [r2, r0, lsl #2] @ 0201308c
    b .L_0200e030 @ 02013090
@ z80_dispatch_02013094 at 0x02013094
    mov r1, r0 @ 02013094
    cmp r0, #0x2000 @ 02013098
    .word 0xabbfbf0e @ 0201309c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020130a0
    mov lr, r1 @ 020130a4
    ldr r1, [pc, #0x35c] @ 020130a8
    lsls r0, r0, #0x19 @ 020130ac
    orr r0, r0, #0x1000000 @ 020130b0
    ldrb r1, [r1, r0, lsr #24] @ 020130b4
    bic r5, r5, #0xd7 @ 020130b8
    orrhs r5, r5, #1 @ 020130bc
    lsr r0, r0, #0x18 @ 020130c0
    orr r5, r5, r1 @ 020130c4
    mov r1, r0 @ 020130c8
    mov r0, lr @ 020130cc
    cmp r0, #0x2000 @ 020130d0
    .word 0xabbfbf0d @ 020130d4 blge #0x1002d10
    strb r1, [r3, r0] @ 020130d8
    ldrb r0, [fp], #1 @ 020130dc
    subs r5, r5, #0x170000 @ 020130e0
    ldrgt pc, [r2, r0, lsl #2] @ 020130e4
    b .L_0200e030 @ 020130e8
@ z80_dispatch_020130ec at 0x020130ec
    mov r1, r0 @ 020130ec
    cmp r0, #0x2000 @ 020130f0
    .word 0xabbfbef8 @ 020130f4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020130f8
    mov lr, r1 @ 020130fc
    lsl r4, r0, #0x18 @ 02013100
    ldr r1, [pc, #0x300] @ 02013104
    lsls r4, r4, #1 @ 02013108
    orr r4, r4, #0x1000000 @ 0201310c
    ldrb r1, [r1, r4, lsr #24] @ 02013110
    bic r5, r5, #0xd7 @ 02013114
    orrhs r5, r5, #1 @ 02013118
    orr r5, r5, r1 @ 0201311c
    lsr r1, r4, #0x18 @ 02013120
    mov r0, lr @ 02013124
    cmp r0, #0x2000 @ 02013128
    .word 0xabbfbef7 @ 0201312c blge #0x1002d10
    strb r1, [r3, r0] @ 02013130
    ldrb r0, [fp], #1 @ 02013134
    subs r5, r5, #0x170000 @ 02013138
    ldrgt pc, [r2, r0, lsl #2] @ 0201313c
    b .L_0200e030 @ 02013140
@ z80_dispatch_02013144 at 0x02013144
    mov r1, r0 @ 02013144
    cmp r0, #0x2000 @ 02013148
    .word 0xabbfbee2 @ 0201314c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013150
    mov lr, r1 @ 02013154
    lsl r6, r0, #0x18 @ 02013158
    ldr r1, [pc, #0x2a8] @ 0201315c
    lsrs r6, r6, #0x19 @ 02013160
    ldrb r1, [r1, r6] @ 02013164
    bic r5, r5, #0xd7 @ 02013168
    orrhs r5, r5, #1 @ 0201316c
    lsl r6, r6, #0x18 @ 02013170
    orr r5, r5, r1 @ 02013174
    lsr r1, r6, #0x18 @ 02013178
    mov r0, lr @ 0201317c
    cmp r0, #0x2000 @ 02013180
    .word 0xabbfbee1 @ 02013184 blge #0x1002d10
    strb r1, [r3, r0] @ 02013188
    ldrb r0, [fp], #1 @ 0201318c
    subs r5, r5, #0x170000 @ 02013190
    ldrgt pc, [r2, r0, lsl #2] @ 02013194
    b .L_0200e030 @ 02013198
@ z80_dispatch_0201319c at 0x0201319c
    mov r1, r0 @ 0201319c
    cmp r0, #0x2000 @ 020131a0
    .word 0xabbfbecc @ 020131a4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020131a8
    mov lr, r1 @ 020131ac
    lsl r7, r0, #0x18 @ 020131b0
    ldr r1, [pc, #0x250] @ 020131b4
    lsrs r7, r7, #0x19 @ 020131b8
    ldrb r1, [r1, r7] @ 020131bc
    bic r5, r5, #0xd7 @ 020131c0
    orrhs r5, r5, #1 @ 020131c4
    lsl r7, r7, #0x18 @ 020131c8
    orr r5, r5, r1 @ 020131cc
    lsr r1, r7, #0x18 @ 020131d0
    mov r0, lr @ 020131d4
    cmp r0, #0x2000 @ 020131d8
    .word 0xabbfbecb @ 020131dc blge #0x1002d10
    strb r1, [r3, r0] @ 020131e0
    ldrb r0, [fp], #1 @ 020131e4
    subs r5, r5, #0x170000 @ 020131e8
    ldrgt pc, [r2, r0, lsl #2] @ 020131ec
    b .L_0200e030 @ 020131f0
@ z80_dispatch_020131f4 at 0x020131f4
    mov r1, r0 @ 020131f4
    cmp r0, #0x2000 @ 020131f8
    .word 0xabbfbeb6 @ 020131fc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013200
    mov lr, r1 @ 02013204
    lsl r8, r0, #0x18 @ 02013208
    ldr r1, [pc, #0x1f8] @ 0201320c
    lsrs r8, r8, #0x19 @ 02013210
    ldrb r1, [r1, r8] @ 02013214
    bic r5, r5, #0xd7 @ 02013218
    orrhs r5, r5, #1 @ 0201321c
    lsl r8, r8, #0x18 @ 02013220
    orr r5, r5, r1 @ 02013224
    lsr r1, r8, #0x18 @ 02013228
    mov r0, lr @ 0201322c
    cmp r0, #0x2000 @ 02013230
    .word 0xabbfbeb5 @ 02013234 blge #0x1002d10
    strb r1, [r3, r0] @ 02013238
    ldrb r0, [fp], #1 @ 0201323c
    subs r5, r5, #0x170000 @ 02013240
    ldrgt pc, [r2, r0, lsl #2] @ 02013244
    b .L_0200e030 @ 02013248
@ z80_dispatch_0201324c at 0x0201324c
    mov r1, r0 @ 0201324c
    cmp r0, #0x2000 @ 02013250
    .word 0xabbfbea0 @ 02013254 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013258
    mov lr, r1 @ 0201325c
    lsl sb, r0, #0x18 @ 02013260
    ldr r1, [pc, #0x1a0] @ 02013264
    lsrs sb, sb, #0x19 @ 02013268
    ldrb r1, [r1, sb] @ 0201326c
    bic r5, r5, #0xd7 @ 02013270
    orrhs r5, r5, #1 @ 02013274
    lsl sb, sb, #0x18 @ 02013278
    orr r5, r5, r1 @ 0201327c
    lsr r1, sb, #0x18 @ 02013280
    mov r0, lr @ 02013284
    cmp r0, #0x2000 @ 02013288
    .word 0xabbfbe9f @ 0201328c blge #0x1002d10
    strb r1, [r3, r0] @ 02013290
    ldrb r0, [fp], #1 @ 02013294
    subs r5, r5, #0x170000 @ 02013298
    ldrgt pc, [r2, r0, lsl #2] @ 0201329c
    b .L_0200e030 @ 020132a0
@ z80_dispatch_020132a4 at 0x020132a4
    mov r1, r0 @ 020132a4
    cmp r0, #0x2000 @ 020132a8
    .word 0xabbfbe8a @ 020132ac blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020132b0
    mov lr, r1 @ 020132b4
    lsl r0, r0, #0x18 @ 020132b8
    ldr r1, [pc, #0x148] @ 020132bc
    lsrs r0, r0, #0x19 @ 020132c0
    ldrb r1, [r1, r0] @ 020132c4
    bic r5, r5, #0xd7 @ 020132c8
    orrhs r5, r5, #1 @ 020132cc
    lsl r0, r0, #0x18 @ 020132d0
    orr r5, r5, r1 @ 020132d4
    and sl, sl, #0xff0000 @ 020132d8
    orr sl, sl, r0, lsl #24 @ 020132dc
    lsr r1, r0, #0x18 @ 020132e0
    mov r0, lr @ 020132e4
    cmp r0, #0x2000 @ 020132e8
    .word 0xabbfbe87 @ 020132ec blge #0x1002d10
    strb r1, [r3, r0] @ 020132f0
    ldrb r0, [fp], #1 @ 020132f4
    subs r5, r5, #0x170000 @ 020132f8
    ldrgt pc, [r2, r0, lsl #2] @ 020132fc
    b .L_0200e030 @ 02013300
@ z80_dispatch_02013304 at 0x02013304
    mov r1, r0 @ 02013304
    cmp r0, #0x2000 @ 02013308
    .word 0xabbfbe72 @ 0201330c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013310
    mov lr, r1 @ 02013314
    lsl r0, r0, #0x18 @ 02013318
    ldr r1, [pc, #0xe8] @ 0201331c
    lsrs r0, r0, #0x19 @ 02013320
    ldrb r1, [r1, r0] @ 02013324
    bic r5, r5, #0xd7 @ 02013328
    orrhs r5, r5, #1 @ 0201332c
    lsl r0, r0, #0x18 @ 02013330
    orr r5, r5, r1 @ 02013334
    and sl, sl, #0xff000000 @ 02013338
    orr sl, sl, r0, lsl #16 @ 0201333c
    lsr r1, r0, #0x18 @ 02013340
    mov r0, lr @ 02013344
    cmp r0, #0x2000 @ 02013348
    .word 0xabbfbe6f @ 0201334c blge #0x1002d10
    strb r1, [r3, r0] @ 02013350
    ldrb r0, [fp], #1 @ 02013354
    subs r5, r5, #0x170000 @ 02013358
    ldrgt pc, [r2, r0, lsl #2] @ 0201335c
    b .L_0200e030 @ 02013360
@ z80_dispatch_02013364 at 0x02013364
    mov r1, r0 @ 02013364
    cmp r0, #0x2000 @ 02013368
    .word 0xabbfbe5a @ 0201336c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013370
    mov lr, r1 @ 02013374
    ldr r1, [pc, #0x8c] @ 02013378
    lsrs r0, r0, #1 @ 0201337c
    ldrb r1, [r1, r0] @ 02013380
    bic r5, r5, #0xd7 @ 02013384
    orrhs r5, r5, #1 @ 02013388
    orr r5, r5, r1 @ 0201338c
    mov r1, r0 @ 02013390
    mov r0, lr @ 02013394
    cmp r0, #0x2000 @ 02013398
    .word 0xabbfbe5b @ 0201339c blge #0x1002d10
    strb r1, [r3, r0] @ 020133a0
    ldrb r0, [fp], #1 @ 020133a4
    subs r5, r5, #0x170000 @ 020133a8
    ldrgt pc, [r2, r0, lsl #2] @ 020133ac
    b .L_0200e030 @ 020133b0
@ z80_dispatch_020133b4 at 0x020133b4
    mov r1, r0 @ 020133b4
    cmp r0, #0x2000 @ 020133b8
    .word 0xabbfbe46 @ 020133bc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020133c0
    mov lr, r1 @ 020133c4
    lsl r4, r0, #0x18 @ 020133c8
    ldr r1, [pc, #0x38] @ 020133cc
    lsrs r4, r4, #0x19 @ 020133d0
    ldrb r1, [r1, r4] @ 020133d4
    bic r5, r5, #0xd7 @ 020133d8
    orrhs r5, r5, #1 @ 020133dc
    lsl r4, r4, #0x18 @ 020133e0
    orr r5, r5, r1 @ 020133e4
    lsr r1, r4, #0x18 @ 020133e8
    mov r0, lr @ 020133ec
    cmp r0, #0x2000 @ 020133f0
    .word 0xabbfbe45 @ 020133f4 blge #0x1002d10
    strb r1, [r3, r0] @ 020133f8
    ldrb r0, [fp], #1 @ 020133fc
    subs r5, r5, #0x170000 @ 02013400
    ldrgt pc, [r2, r0, lsl #2] @ 02013404
    b .L_0200e030 @ 02013408
    .byte 0x20, 0xde, 0x00, 0x02 @ 0201340c
@ z80_dispatch_02013410 at 0x02013410
    cmp r0, #0x2000 @ 02013410
    .word 0xabbfbe2d @ 02013414 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02013418
    bic r5, r5, #0xd6 @ 0201341c
    orr r5, r5, #0x10 @ 02013420
    lsl r1, r0, #0x18 @ 02013424
    ands r1, r1, #0x1000000 @ 02013428
    orreq r5, r5, #0x44 @ 0201342c
    orrmi r5, r5, #0x80 @ 02013430
    ldrb r0, [fp], #1 @ 02013434
    subs r5, r5, #0x140000 @ 02013438
    ldrgt pc, [r2, r0, lsl #2] @ 0201343c
    b .L_0200e030 @ 02013440
@ z80_dispatch_02013444 at 0x02013444
    cmp r0, #0x2000 @ 02013444
    .word 0xabbfbe20 @ 02013448 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 0201344c
    bic r5, r5, #0xd6 @ 02013450
    orr r5, r5, #0x10 @ 02013454
    lsl r1, r0, #0x18 @ 02013458
    ands r1, r1, #0x2000000 @ 0201345c
    orreq r5, r5, #0x44 @ 02013460
    orrmi r5, r5, #0x80 @ 02013464
    ldrb r0, [fp], #1 @ 02013468
    subs r5, r5, #0x140000 @ 0201346c
    ldrgt pc, [r2, r0, lsl #2] @ 02013470
    b .L_0200e030 @ 02013474
@ z80_dispatch_02013478 at 0x02013478
    cmp r0, #0x2000 @ 02013478
    .word 0xabbfbe13 @ 0201347c blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02013480
    bic r5, r5, #0xd6 @ 02013484
    orr r5, r5, #0x10 @ 02013488
    lsl r1, r0, #0x18 @ 0201348c
    ands r1, r1, #0x4000000 @ 02013490
    orreq r5, r5, #0x44 @ 02013494
    orrmi r5, r5, #0x80 @ 02013498
    ldrb r0, [fp], #1 @ 0201349c
    subs r5, r5, #0x140000 @ 020134a0
    ldrgt pc, [r2, r0, lsl #2] @ 020134a4
    b .L_0200e030 @ 020134a8
@ z80_dispatch_020134ac at 0x020134ac
    cmp r0, #0x2000 @ 020134ac
    .word 0xabbfbe06 @ 020134b0 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 020134b4
    bic r5, r5, #0xd6 @ 020134b8
    orr r5, r5, #0x10 @ 020134bc
    lsl r1, r0, #0x18 @ 020134c0
    ands r1, r1, #0x8000000 @ 020134c4
    orreq r5, r5, #0x44 @ 020134c8
    orrmi r5, r5, #0x80 @ 020134cc
    ldrb r0, [fp], #1 @ 020134d0
    subs r5, r5, #0x140000 @ 020134d4
    ldrgt pc, [r2, r0, lsl #2] @ 020134d8
    b .L_0200e030 @ 020134dc
@ z80_dispatch_020134e0 at 0x020134e0
    cmp r0, #0x2000 @ 020134e0
    .word 0xabbfbdf9 @ 020134e4 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 020134e8
    bic r5, r5, #0xd6 @ 020134ec
    orr r5, r5, #0x10 @ 020134f0
    lsl r1, r0, #0x18 @ 020134f4
    ands r1, r1, #0x10000000 @ 020134f8
    orreq r5, r5, #0x44 @ 020134fc
    orrmi r5, r5, #0x80 @ 02013500
    ldrb r0, [fp], #1 @ 02013504
    subs r5, r5, #0x140000 @ 02013508
    ldrgt pc, [r2, r0, lsl #2] @ 0201350c
    b .L_0200e030 @ 02013510
@ z80_dispatch_02013514 at 0x02013514
    cmp r0, #0x2000 @ 02013514
    .word 0xabbfbdec @ 02013518 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 0201351c
    bic r5, r5, #0xd6 @ 02013520
    orr r5, r5, #0x10 @ 02013524
    lsl r1, r0, #0x18 @ 02013528
    ands r1, r1, #0x20000000 @ 0201352c
    orreq r5, r5, #0x44 @ 02013530
    orrmi r5, r5, #0x80 @ 02013534
    ldrb r0, [fp], #1 @ 02013538
    subs r5, r5, #0x140000 @ 0201353c
    ldrgt pc, [r2, r0, lsl #2] @ 02013540
    b .L_0200e030 @ 02013544
@ z80_dispatch_02013548 at 0x02013548
    cmp r0, #0x2000 @ 02013548
    .word 0xabbfbddf @ 0201354c blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02013550
    bic r5, r5, #0xd6 @ 02013554
    orr r5, r5, #0x10 @ 02013558
    lsl r1, r0, #0x18 @ 0201355c
    ands r1, r1, #0x40000000 @ 02013560
    orreq r5, r5, #0x44 @ 02013564
    orrmi r5, r5, #0x80 @ 02013568
    ldrb r0, [fp], #1 @ 0201356c
    subs r5, r5, #0x140000 @ 02013570
    ldrgt pc, [r2, r0, lsl #2] @ 02013574
    b .L_0200e030 @ 02013578
@ z80_dispatch_0201357c at 0x0201357c
    cmp r0, #0x2000 @ 0201357c
    .word 0xabbfbdd2 @ 02013580 blge #0x1002cd0
    ldrb r0, [r3, r0] @ 02013584
    bic r5, r5, #0xd6 @ 02013588
    orr r5, r5, #0x10 @ 0201358c
    lsl r1, r0, #0x18 @ 02013590
    ands r1, r1, #0x80000000 @ 02013594
    orreq r5, r5, #0x44 @ 02013598
    orrmi r5, r5, #0x80 @ 0201359c
    ldrb r0, [fp], #1 @ 020135a0
    subs r5, r5, #0x140000 @ 020135a4
    ldrgt pc, [r2, r0, lsl #2] @ 020135a8
    b .L_0200e030 @ 020135ac
@ z80_dispatch_020135b0 at 0x020135b0
    mov r1, r0 @ 020135b0
    cmp r0, #0x2000 @ 020135b4
    .word 0xabbfbdc7 @ 020135b8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020135bc
    mov lr, r1 @ 020135c0
    bic r1, r0, #1 @ 020135c4
    lsl r6, r1, #0x18 @ 020135c8
    mov r0, lr @ 020135cc
    cmp r0, #0x2000 @ 020135d0
    .word 0xabbfbdcd @ 020135d4 blge #0x1002d10
    strb r1, [r3, r0] @ 020135d8
    ldrb r0, [fp], #1 @ 020135dc
    subs r5, r5, #0x170000 @ 020135e0
    ldrgt pc, [r2, r0, lsl #2] @ 020135e4
    b .L_0200e030 @ 020135e8
@ z80_dispatch_020135ec at 0x020135ec
    mov r1, r0 @ 020135ec
    cmp r0, #0x2000 @ 020135f0
    .word 0xabbfbdb8 @ 020135f4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020135f8
    mov lr, r1 @ 020135fc
    bic r1, r0, #1 @ 02013600
    lsl r7, r1, #0x18 @ 02013604
    mov r0, lr @ 02013608
    cmp r0, #0x2000 @ 0201360c
    .word 0xabbfbdbe @ 02013610 blge #0x1002d10
    strb r1, [r3, r0] @ 02013614
    ldrb r0, [fp], #1 @ 02013618
    subs r5, r5, #0x170000 @ 0201361c
    ldrgt pc, [r2, r0, lsl #2] @ 02013620
    b .L_0200e030 @ 02013624
@ z80_dispatch_02013628 at 0x02013628
    mov r1, r0 @ 02013628
    cmp r0, #0x2000 @ 0201362c
    .word 0xabbfbda9 @ 02013630 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013634
    mov lr, r1 @ 02013638
    bic r1, r0, #1 @ 0201363c
    lsl r8, r1, #0x18 @ 02013640
    mov r0, lr @ 02013644
    cmp r0, #0x2000 @ 02013648
    .word 0xabbfbdaf @ 0201364c blge #0x1002d10
    strb r1, [r3, r0] @ 02013650
    ldrb r0, [fp], #1 @ 02013654
    subs r5, r5, #0x170000 @ 02013658
    ldrgt pc, [r2, r0, lsl #2] @ 0201365c
    b .L_0200e030 @ 02013660
@ z80_dispatch_02013664 at 0x02013664
    mov r1, r0 @ 02013664
    cmp r0, #0x2000 @ 02013668
    .word 0xabbfbd9a @ 0201366c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013670
    mov lr, r1 @ 02013674
    bic r1, r0, #1 @ 02013678
    lsl sb, r1, #0x18 @ 0201367c
    mov r0, lr @ 02013680
    cmp r0, #0x2000 @ 02013684
    .word 0xabbfbda0 @ 02013688 blge #0x1002d10
    strb r1, [r3, r0] @ 0201368c
    ldrb r0, [fp], #1 @ 02013690
    subs r5, r5, #0x170000 @ 02013694
    ldrgt pc, [r2, r0, lsl #2] @ 02013698
    b .L_0200e030 @ 0201369c
@ z80_dispatch_020136a0 at 0x020136a0
    mov r1, r0 @ 020136a0
    cmp r0, #0x2000 @ 020136a4
    .word 0xabbfbd8b @ 020136a8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020136ac
    mov lr, r1 @ 020136b0
    and sl, sl, #0xff0000 @ 020136b4
    bic r1, r0, #1 @ 020136b8
    orr sl, sl, r1, lsl #24 @ 020136bc
    mov r0, lr @ 020136c0
    cmp r0, #0x2000 @ 020136c4
    .word 0xabbfbd90 @ 020136c8 blge #0x1002d10
    strb r1, [r3, r0] @ 020136cc
    ldrb r0, [fp], #1 @ 020136d0
    subs r5, r5, #0x170000 @ 020136d4
    ldrgt pc, [r2, r0, lsl #2] @ 020136d8
    b .L_0200e030 @ 020136dc
@ z80_dispatch_020136e0 at 0x020136e0
    mov r1, r0 @ 020136e0
    cmp r0, #0x2000 @ 020136e4
    .word 0xabbfbd7b @ 020136e8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020136ec
    mov lr, r1 @ 020136f0
    and sl, sl, #0xff000000 @ 020136f4
    bic r1, r0, #1 @ 020136f8
    orr sl, sl, r1, lsl #16 @ 020136fc
    mov r0, lr @ 02013700
    cmp r0, #0x2000 @ 02013704
    .word 0xabbfbd80 @ 02013708 blge #0x1002d10
    strb r1, [r3, r0] @ 0201370c
    ldrb r0, [fp], #1 @ 02013710
    subs r5, r5, #0x170000 @ 02013714
    ldrgt pc, [r2, r0, lsl #2] @ 02013718
    b .L_0200e030 @ 0201371c
@ z80_dispatch_02013720 at 0x02013720
    mov r1, r0 @ 02013720
    cmp r0, #0x2000 @ 02013724
    .word 0xabbfbd6b @ 02013728 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 0201372c
    mov lr, r1 @ 02013730
    bic r1, r0, #1 @ 02013734
    mov r0, lr @ 02013738
    cmp r0, #0x2000 @ 0201373c
    .word 0xabbfbd72 @ 02013740 blge #0x1002d10
    strb r1, [r3, r0] @ 02013744
    ldrb r0, [fp], #1 @ 02013748
    subs r5, r5, #0x170000 @ 0201374c
    ldrgt pc, [r2, r0, lsl #2] @ 02013750
    b .L_0200e030 @ 02013754
@ z80_dispatch_02013758 at 0x02013758
    mov r1, r0 @ 02013758
    cmp r0, #0x2000 @ 0201375c
    .word 0xabbfbd5d @ 02013760 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013764
    mov lr, r1 @ 02013768
    bic r1, r0, #1 @ 0201376c
    lsl r4, r1, #0x18 @ 02013770
    mov r0, lr @ 02013774
    cmp r0, #0x2000 @ 02013778
    .word 0xabbfbd63 @ 0201377c blge #0x1002d10
    strb r1, [r3, r0] @ 02013780
    ldrb r0, [fp], #1 @ 02013784
    subs r5, r5, #0x170000 @ 02013788
    ldrgt pc, [r2, r0, lsl #2] @ 0201378c
    b .L_0200e030 @ 02013790
@ z80_dispatch_02013794 at 0x02013794
    mov r1, r0 @ 02013794
    cmp r0, #0x2000 @ 02013798
    .word 0xabbfbd4e @ 0201379c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020137a0
    mov lr, r1 @ 020137a4
    bic r1, r0, #2 @ 020137a8
    lsl r6, r1, #0x18 @ 020137ac
    mov r0, lr @ 020137b0
    cmp r0, #0x2000 @ 020137b4
    .word 0xabbfbd54 @ 020137b8 blge #0x1002d10
    strb r1, [r3, r0] @ 020137bc
    ldrb r0, [fp], #1 @ 020137c0
    subs r5, r5, #0x170000 @ 020137c4
    ldrgt pc, [r2, r0, lsl #2] @ 020137c8
    b .L_0200e030 @ 020137cc
@ z80_dispatch_020137d0 at 0x020137d0
    mov r1, r0 @ 020137d0
    cmp r0, #0x2000 @ 020137d4
    .word 0xabbfbd3f @ 020137d8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020137dc
    mov lr, r1 @ 020137e0
    bic r1, r0, #2 @ 020137e4
    lsl r7, r1, #0x18 @ 020137e8
    mov r0, lr @ 020137ec
    cmp r0, #0x2000 @ 020137f0
    .word 0xabbfbd45 @ 020137f4 blge #0x1002d10
    strb r1, [r3, r0] @ 020137f8
    ldrb r0, [fp], #1 @ 020137fc
    subs r5, r5, #0x170000 @ 02013800
    ldrgt pc, [r2, r0, lsl #2] @ 02013804
    b .L_0200e030 @ 02013808
@ z80_dispatch_0201380c at 0x0201380c
    mov r1, r0 @ 0201380c
    cmp r0, #0x2000 @ 02013810
    .word 0xabbfbd30 @ 02013814 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013818
    mov lr, r1 @ 0201381c
    bic r1, r0, #2 @ 02013820
    lsl r8, r1, #0x18 @ 02013824
    mov r0, lr @ 02013828
    cmp r0, #0x2000 @ 0201382c
    .word 0xabbfbd36 @ 02013830 blge #0x1002d10
    strb r1, [r3, r0] @ 02013834
    ldrb r0, [fp], #1 @ 02013838
    subs r5, r5, #0x170000 @ 0201383c
    ldrgt pc, [r2, r0, lsl #2] @ 02013840
    b .L_0200e030 @ 02013844
@ z80_dispatch_02013848 at 0x02013848
    mov r1, r0 @ 02013848
    cmp r0, #0x2000 @ 0201384c
    .word 0xabbfbd21 @ 02013850 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013854
    mov lr, r1 @ 02013858
    bic r1, r0, #2 @ 0201385c
    lsl sb, r1, #0x18 @ 02013860
    mov r0, lr @ 02013864
    cmp r0, #0x2000 @ 02013868
    .word 0xabbfbd27 @ 0201386c blge #0x1002d10
    strb r1, [r3, r0] @ 02013870
    ldrb r0, [fp], #1 @ 02013874
    subs r5, r5, #0x170000 @ 02013878
    ldrgt pc, [r2, r0, lsl #2] @ 0201387c
    b .L_0200e030 @ 02013880
@ z80_dispatch_02013884 at 0x02013884
    mov r1, r0 @ 02013884
    cmp r0, #0x2000 @ 02013888
    .word 0xabbfbd12 @ 0201388c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013890
    mov lr, r1 @ 02013894
    and sl, sl, #0xff0000 @ 02013898
    bic r1, r0, #2 @ 0201389c
    orr sl, sl, r1, lsl #24 @ 020138a0
    mov r0, lr @ 020138a4
    cmp r0, #0x2000 @ 020138a8
    .word 0xabbfbd17 @ 020138ac blge #0x1002d10
    strb r1, [r3, r0] @ 020138b0
    ldrb r0, [fp], #1 @ 020138b4
    subs r5, r5, #0x170000 @ 020138b8
    ldrgt pc, [r2, r0, lsl #2] @ 020138bc
    b .L_0200e030 @ 020138c0
@ z80_dispatch_020138c4 at 0x020138c4
    mov r1, r0 @ 020138c4
    cmp r0, #0x2000 @ 020138c8
    .word 0xabbfbd02 @ 020138cc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020138d0
    mov lr, r1 @ 020138d4
    and sl, sl, #0xff000000 @ 020138d8
    bic r1, r0, #2 @ 020138dc
    orr sl, sl, r1, lsl #16 @ 020138e0
    mov r0, lr @ 020138e4
    cmp r0, #0x2000 @ 020138e8
    .word 0xabbfbd07 @ 020138ec blge #0x1002d10
    strb r1, [r3, r0] @ 020138f0
    ldrb r0, [fp], #1 @ 020138f4
    subs r5, r5, #0x170000 @ 020138f8
    ldrgt pc, [r2, r0, lsl #2] @ 020138fc
    b .L_0200e030 @ 02013900
@ z80_dispatch_02013904 at 0x02013904
    mov r1, r0 @ 02013904
    cmp r0, #0x2000 @ 02013908
    .word 0xabbfbcf2 @ 0201390c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013910
    mov lr, r1 @ 02013914
    bic r1, r0, #2 @ 02013918
    mov r0, lr @ 0201391c
    cmp r0, #0x2000 @ 02013920
    .word 0xabbfbcf9 @ 02013924 blge #0x1002d10
    strb r1, [r3, r0] @ 02013928
    ldrb r0, [fp], #1 @ 0201392c
    subs r5, r5, #0x170000 @ 02013930
    ldrgt pc, [r2, r0, lsl #2] @ 02013934
    b .L_0200e030 @ 02013938
@ z80_dispatch_0201393c at 0x0201393c
    mov r1, r0 @ 0201393c
    cmp r0, #0x2000 @ 02013940
    .word 0xabbfbce4 @ 02013944 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013948
    mov lr, r1 @ 0201394c
    bic r1, r0, #2 @ 02013950
    lsl r4, r1, #0x18 @ 02013954
    mov r0, lr @ 02013958
    cmp r0, #0x2000 @ 0201395c
    .word 0xabbfbcea @ 02013960 blge #0x1002d10
    strb r1, [r3, r0] @ 02013964
    ldrb r0, [fp], #1 @ 02013968
    subs r5, r5, #0x170000 @ 0201396c
    ldrgt pc, [r2, r0, lsl #2] @ 02013970
    b .L_0200e030 @ 02013974
@ z80_dispatch_02013978 at 0x02013978
    mov r1, r0 @ 02013978
    cmp r0, #0x2000 @ 0201397c
    .word 0xabbfbcd5 @ 02013980 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013984
    mov lr, r1 @ 02013988
    bic r1, r0, #4 @ 0201398c
    lsl r6, r1, #0x18 @ 02013990
    mov r0, lr @ 02013994
    cmp r0, #0x2000 @ 02013998
    .word 0xabbfbcdb @ 0201399c blge #0x1002d10
    strb r1, [r3, r0] @ 020139a0
    ldrb r0, [fp], #1 @ 020139a4
    subs r5, r5, #0x170000 @ 020139a8
    ldrgt pc, [r2, r0, lsl #2] @ 020139ac
    b .L_0200e030 @ 020139b0
@ z80_dispatch_020139b4 at 0x020139b4
    mov r1, r0 @ 020139b4
    cmp r0, #0x2000 @ 020139b8
    .word 0xabbfbcc6 @ 020139bc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020139c0
    mov lr, r1 @ 020139c4
    bic r1, r0, #4 @ 020139c8
    lsl r7, r1, #0x18 @ 020139cc
    mov r0, lr @ 020139d0
    cmp r0, #0x2000 @ 020139d4
    .word 0xabbfbccc @ 020139d8 blge #0x1002d10
    strb r1, [r3, r0] @ 020139dc
    ldrb r0, [fp], #1 @ 020139e0
    subs r5, r5, #0x170000 @ 020139e4
    ldrgt pc, [r2, r0, lsl #2] @ 020139e8
    b .L_0200e030 @ 020139ec
@ z80_dispatch_020139f0 at 0x020139f0
    mov r1, r0 @ 020139f0
    cmp r0, #0x2000 @ 020139f4
    .word 0xabbfbcb7 @ 020139f8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020139fc
    mov lr, r1 @ 02013a00
    bic r1, r0, #4 @ 02013a04
    lsl r8, r1, #0x18 @ 02013a08
    mov r0, lr @ 02013a0c
    cmp r0, #0x2000 @ 02013a10
    .word 0xabbfbcbd @ 02013a14 blge #0x1002d10
    strb r1, [r3, r0] @ 02013a18
    ldrb r0, [fp], #1 @ 02013a1c
    subs r5, r5, #0x170000 @ 02013a20
    ldrgt pc, [r2, r0, lsl #2] @ 02013a24
    b .L_0200e030 @ 02013a28
@ z80_dispatch_02013a2c at 0x02013a2c
    mov r1, r0 @ 02013a2c
    cmp r0, #0x2000 @ 02013a30
    .word 0xabbfbca8 @ 02013a34 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013a38
    mov lr, r1 @ 02013a3c
    bic r1, r0, #4 @ 02013a40
    lsl sb, r1, #0x18 @ 02013a44
    mov r0, lr @ 02013a48
    cmp r0, #0x2000 @ 02013a4c
    .word 0xabbfbcae @ 02013a50 blge #0x1002d10
    strb r1, [r3, r0] @ 02013a54
    ldrb r0, [fp], #1 @ 02013a58
    subs r5, r5, #0x170000 @ 02013a5c
    ldrgt pc, [r2, r0, lsl #2] @ 02013a60
    b .L_0200e030 @ 02013a64
@ z80_dispatch_02013a68 at 0x02013a68
    mov r1, r0 @ 02013a68
    cmp r0, #0x2000 @ 02013a6c
    .word 0xabbfbc99 @ 02013a70 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013a74
    mov lr, r1 @ 02013a78
    and sl, sl, #0xff0000 @ 02013a7c
    bic r1, r0, #4 @ 02013a80
    orr sl, sl, r1, lsl #24 @ 02013a84
    mov r0, lr @ 02013a88
    cmp r0, #0x2000 @ 02013a8c
    .word 0xabbfbc9e @ 02013a90 blge #0x1002d10
    strb r1, [r3, r0] @ 02013a94
    ldrb r0, [fp], #1 @ 02013a98
    subs r5, r5, #0x170000 @ 02013a9c
    ldrgt pc, [r2, r0, lsl #2] @ 02013aa0
    b .L_0200e030 @ 02013aa4
@ z80_dispatch_02013aa8 at 0x02013aa8
    mov r1, r0 @ 02013aa8
    cmp r0, #0x2000 @ 02013aac
    .word 0xabbfbc89 @ 02013ab0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013ab4
    mov lr, r1 @ 02013ab8
    and sl, sl, #0xff000000 @ 02013abc
    bic r1, r0, #4 @ 02013ac0
    orr sl, sl, r1, lsl #16 @ 02013ac4
    mov r0, lr @ 02013ac8
    cmp r0, #0x2000 @ 02013acc
    .word 0xabbfbc8e @ 02013ad0 blge #0x1002d10
    strb r1, [r3, r0] @ 02013ad4
    ldrb r0, [fp], #1 @ 02013ad8
    subs r5, r5, #0x170000 @ 02013adc
    ldrgt pc, [r2, r0, lsl #2] @ 02013ae0
    b .L_0200e030 @ 02013ae4
@ z80_dispatch_02013ae8 at 0x02013ae8
    mov r1, r0 @ 02013ae8
    cmp r0, #0x2000 @ 02013aec
    .word 0xabbfbc79 @ 02013af0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013af4
    mov lr, r1 @ 02013af8
    bic r1, r0, #4 @ 02013afc
    mov r0, lr @ 02013b00
    cmp r0, #0x2000 @ 02013b04
    .word 0xabbfbc80 @ 02013b08 blge #0x1002d10
    strb r1, [r3, r0] @ 02013b0c
    ldrb r0, [fp], #1 @ 02013b10
    subs r5, r5, #0x170000 @ 02013b14
    ldrgt pc, [r2, r0, lsl #2] @ 02013b18
    b .L_0200e030 @ 02013b1c
@ z80_dispatch_02013b20 at 0x02013b20
    mov r1, r0 @ 02013b20
    cmp r0, #0x2000 @ 02013b24
    .word 0xabbfbc6b @ 02013b28 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013b2c
    mov lr, r1 @ 02013b30
    bic r1, r0, #4 @ 02013b34
    lsl r4, r1, #0x18 @ 02013b38
    mov r0, lr @ 02013b3c
    cmp r0, #0x2000 @ 02013b40
    .word 0xabbfbc71 @ 02013b44 blge #0x1002d10
    strb r1, [r3, r0] @ 02013b48
    ldrb r0, [fp], #1 @ 02013b4c
    subs r5, r5, #0x170000 @ 02013b50
    ldrgt pc, [r2, r0, lsl #2] @ 02013b54
    b .L_0200e030 @ 02013b58
@ z80_dispatch_02013b5c at 0x02013b5c
    mov r1, r0 @ 02013b5c
    cmp r0, #0x2000 @ 02013b60
    .word 0xabbfbc5c @ 02013b64 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013b68
    mov lr, r1 @ 02013b6c
    bic r1, r0, #8 @ 02013b70
    lsl r6, r1, #0x18 @ 02013b74
    mov r0, lr @ 02013b78
    cmp r0, #0x2000 @ 02013b7c
    .word 0xabbfbc62 @ 02013b80 blge #0x1002d10
    strb r1, [r3, r0] @ 02013b84
    ldrb r0, [fp], #1 @ 02013b88
    subs r5, r5, #0x170000 @ 02013b8c
    ldrgt pc, [r2, r0, lsl #2] @ 02013b90
    b .L_0200e030 @ 02013b94
@ z80_dispatch_02013b98 at 0x02013b98
    mov r1, r0 @ 02013b98
    cmp r0, #0x2000 @ 02013b9c
    .word 0xabbfbc4d @ 02013ba0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013ba4
    mov lr, r1 @ 02013ba8
    bic r1, r0, #8 @ 02013bac
    lsl r7, r1, #0x18 @ 02013bb0
    mov r0, lr @ 02013bb4
    cmp r0, #0x2000 @ 02013bb8
    .word 0xabbfbc53 @ 02013bbc blge #0x1002d10
    strb r1, [r3, r0] @ 02013bc0
    ldrb r0, [fp], #1 @ 02013bc4
    subs r5, r5, #0x170000 @ 02013bc8
    ldrgt pc, [r2, r0, lsl #2] @ 02013bcc
    b .L_0200e030 @ 02013bd0
@ z80_dispatch_02013bd4 at 0x02013bd4
    mov r1, r0 @ 02013bd4
    cmp r0, #0x2000 @ 02013bd8
    .word 0xabbfbc3e @ 02013bdc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013be0
    mov lr, r1 @ 02013be4
    bic r1, r0, #8 @ 02013be8
    lsl r8, r1, #0x18 @ 02013bec
    mov r0, lr @ 02013bf0
    cmp r0, #0x2000 @ 02013bf4
    .word 0xabbfbc44 @ 02013bf8 blge #0x1002d10
    strb r1, [r3, r0] @ 02013bfc
    ldrb r0, [fp], #1 @ 02013c00
    subs r5, r5, #0x170000 @ 02013c04
    ldrgt pc, [r2, r0, lsl #2] @ 02013c08
    b .L_0200e030 @ 02013c0c
@ z80_dispatch_02013c10 at 0x02013c10
    mov r1, r0 @ 02013c10
    cmp r0, #0x2000 @ 02013c14
    .word 0xabbfbc2f @ 02013c18 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013c1c
    mov lr, r1 @ 02013c20
    bic r1, r0, #8 @ 02013c24
    lsl sb, r1, #0x18 @ 02013c28
    mov r0, lr @ 02013c2c
    cmp r0, #0x2000 @ 02013c30
    .word 0xabbfbc35 @ 02013c34 blge #0x1002d10
    strb r1, [r3, r0] @ 02013c38
    ldrb r0, [fp], #1 @ 02013c3c
    subs r5, r5, #0x170000 @ 02013c40
    ldrgt pc, [r2, r0, lsl #2] @ 02013c44
    b .L_0200e030 @ 02013c48
@ z80_dispatch_02013c4c at 0x02013c4c
    mov r1, r0 @ 02013c4c
    cmp r0, #0x2000 @ 02013c50
    .word 0xabbfbc20 @ 02013c54 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013c58
    mov lr, r1 @ 02013c5c
    and sl, sl, #0xff0000 @ 02013c60
    bic r1, r0, #8 @ 02013c64
    orr sl, sl, r1, lsl #24 @ 02013c68
    mov r0, lr @ 02013c6c
    cmp r0, #0x2000 @ 02013c70
    .word 0xabbfbc25 @ 02013c74 blge #0x1002d10
    strb r1, [r3, r0] @ 02013c78
    ldrb r0, [fp], #1 @ 02013c7c
    subs r5, r5, #0x170000 @ 02013c80
    ldrgt pc, [r2, r0, lsl #2] @ 02013c84
    b .L_0200e030 @ 02013c88
@ z80_dispatch_02013c8c at 0x02013c8c
    mov r1, r0 @ 02013c8c
    cmp r0, #0x2000 @ 02013c90
    .word 0xabbfbc10 @ 02013c94 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013c98
    mov lr, r1 @ 02013c9c
    and sl, sl, #0xff000000 @ 02013ca0
    bic r1, r0, #8 @ 02013ca4
    orr sl, sl, r1, lsl #16 @ 02013ca8
    mov r0, lr @ 02013cac
    cmp r0, #0x2000 @ 02013cb0
    .word 0xabbfbc15 @ 02013cb4 blge #0x1002d10
    strb r1, [r3, r0] @ 02013cb8
    ldrb r0, [fp], #1 @ 02013cbc
    subs r5, r5, #0x170000 @ 02013cc0
    ldrgt pc, [r2, r0, lsl #2] @ 02013cc4
    b .L_0200e030 @ 02013cc8
@ z80_dispatch_02013ccc at 0x02013ccc
    mov r1, r0 @ 02013ccc
    cmp r0, #0x2000 @ 02013cd0
    .word 0xabbfbc00 @ 02013cd4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013cd8
    mov lr, r1 @ 02013cdc
    bic r1, r0, #8 @ 02013ce0
    mov r0, lr @ 02013ce4
    cmp r0, #0x2000 @ 02013ce8
    .word 0xabbfbc07 @ 02013cec blge #0x1002d10
    strb r1, [r3, r0] @ 02013cf0
    ldrb r0, [fp], #1 @ 02013cf4
    subs r5, r5, #0x170000 @ 02013cf8
    ldrgt pc, [r2, r0, lsl #2] @ 02013cfc
    b .L_0200e030 @ 02013d00
@ z80_dispatch_02013d04 at 0x02013d04
    mov r1, r0 @ 02013d04
    cmp r0, #0x2000 @ 02013d08
    .word 0xabbfbbf2 @ 02013d0c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013d10
    mov lr, r1 @ 02013d14
    bic r1, r0, #8 @ 02013d18
    lsl r4, r1, #0x18 @ 02013d1c
    mov r0, lr @ 02013d20
    cmp r0, #0x2000 @ 02013d24
    .word 0xabbfbbf8 @ 02013d28 blge #0x1002d10
    strb r1, [r3, r0] @ 02013d2c
    ldrb r0, [fp], #1 @ 02013d30
    subs r5, r5, #0x170000 @ 02013d34
    ldrgt pc, [r2, r0, lsl #2] @ 02013d38
    b .L_0200e030 @ 02013d3c
@ z80_dispatch_02013d40 at 0x02013d40
    mov r1, r0 @ 02013d40
    cmp r0, #0x2000 @ 02013d44
    .word 0xabbfbbe3 @ 02013d48 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013d4c
    mov lr, r1 @ 02013d50
    bic r1, r0, #0x10 @ 02013d54
    lsl r6, r1, #0x18 @ 02013d58
    mov r0, lr @ 02013d5c
    cmp r0, #0x2000 @ 02013d60
    .word 0xabbfbbe9 @ 02013d64 blge #0x1002d10
    strb r1, [r3, r0] @ 02013d68
    ldrb r0, [fp], #1 @ 02013d6c
    subs r5, r5, #0x170000 @ 02013d70
    ldrgt pc, [r2, r0, lsl #2] @ 02013d74
    b .L_0200e030 @ 02013d78
@ z80_dispatch_02013d7c at 0x02013d7c
    mov r1, r0 @ 02013d7c
    cmp r0, #0x2000 @ 02013d80
    .word 0xabbfbbd4 @ 02013d84 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013d88
    mov lr, r1 @ 02013d8c
    bic r1, r0, #0x10 @ 02013d90
    lsl r7, r1, #0x18 @ 02013d94
    mov r0, lr @ 02013d98
    cmp r0, #0x2000 @ 02013d9c
    .word 0xabbfbbda @ 02013da0 blge #0x1002d10
    strb r1, [r3, r0] @ 02013da4
    ldrb r0, [fp], #1 @ 02013da8
    subs r5, r5, #0x170000 @ 02013dac
    ldrgt pc, [r2, r0, lsl #2] @ 02013db0
    b .L_0200e030 @ 02013db4
@ z80_dispatch_02013db8 at 0x02013db8
    mov r1, r0 @ 02013db8
    cmp r0, #0x2000 @ 02013dbc
    .word 0xabbfbbc5 @ 02013dc0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013dc4
    mov lr, r1 @ 02013dc8
    bic r1, r0, #0x10 @ 02013dcc
    lsl r8, r1, #0x18 @ 02013dd0
    mov r0, lr @ 02013dd4
    cmp r0, #0x2000 @ 02013dd8
    .word 0xabbfbbcb @ 02013ddc blge #0x1002d10
    strb r1, [r3, r0] @ 02013de0
    ldrb r0, [fp], #1 @ 02013de4
    subs r5, r5, #0x170000 @ 02013de8
    ldrgt pc, [r2, r0, lsl #2] @ 02013dec
    b .L_0200e030 @ 02013df0
@ z80_dispatch_02013df4 at 0x02013df4
    mov r1, r0 @ 02013df4
    cmp r0, #0x2000 @ 02013df8
    .word 0xabbfbbb6 @ 02013dfc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013e00
    mov lr, r1 @ 02013e04
    bic r1, r0, #0x10 @ 02013e08
    lsl sb, r1, #0x18 @ 02013e0c
    mov r0, lr @ 02013e10
    cmp r0, #0x2000 @ 02013e14
    .word 0xabbfbbbc @ 02013e18 blge #0x1002d10
    strb r1, [r3, r0] @ 02013e1c
    ldrb r0, [fp], #1 @ 02013e20
    subs r5, r5, #0x170000 @ 02013e24
    ldrgt pc, [r2, r0, lsl #2] @ 02013e28
    b .L_0200e030 @ 02013e2c
@ z80_dispatch_02013e30 at 0x02013e30
    mov r1, r0 @ 02013e30
    cmp r0, #0x2000 @ 02013e34
    .word 0xabbfbba7 @ 02013e38 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013e3c
    mov lr, r1 @ 02013e40
    and sl, sl, #0xff0000 @ 02013e44
    bic r1, r0, #0x10 @ 02013e48
    orr sl, sl, r1, lsl #24 @ 02013e4c
    mov r0, lr @ 02013e50
    cmp r0, #0x2000 @ 02013e54
    .word 0xabbfbbac @ 02013e58 blge #0x1002d10
    strb r1, [r3, r0] @ 02013e5c
    ldrb r0, [fp], #1 @ 02013e60
    subs r5, r5, #0x170000 @ 02013e64
    ldrgt pc, [r2, r0, lsl #2] @ 02013e68
    b .L_0200e030 @ 02013e6c
@ z80_dispatch_02013e70 at 0x02013e70
    mov r1, r0 @ 02013e70
    cmp r0, #0x2000 @ 02013e74
    .word 0xabbfbb97 @ 02013e78 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013e7c
    mov lr, r1 @ 02013e80
    and sl, sl, #0xff000000 @ 02013e84
    bic r1, r0, #0x10 @ 02013e88
    orr sl, sl, r1, lsl #16 @ 02013e8c
    mov r0, lr @ 02013e90
    cmp r0, #0x2000 @ 02013e94
    .word 0xabbfbb9c @ 02013e98 blge #0x1002d10
    strb r1, [r3, r0] @ 02013e9c
    ldrb r0, [fp], #1 @ 02013ea0
    subs r5, r5, #0x170000 @ 02013ea4
    ldrgt pc, [r2, r0, lsl #2] @ 02013ea8
    b .L_0200e030 @ 02013eac
@ z80_dispatch_02013eb0 at 0x02013eb0
    mov r1, r0 @ 02013eb0
    cmp r0, #0x2000 @ 02013eb4
    .word 0xabbfbb87 @ 02013eb8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013ebc
    mov lr, r1 @ 02013ec0
    bic r1, r0, #0x10 @ 02013ec4
    mov r0, lr @ 02013ec8
    cmp r0, #0x2000 @ 02013ecc
    .word 0xabbfbb8e @ 02013ed0 blge #0x1002d10
    strb r1, [r3, r0] @ 02013ed4
    ldrb r0, [fp], #1 @ 02013ed8
    subs r5, r5, #0x170000 @ 02013edc
    ldrgt pc, [r2, r0, lsl #2] @ 02013ee0
    b .L_0200e030 @ 02013ee4
@ z80_dispatch_02013ee8 at 0x02013ee8
    mov r1, r0 @ 02013ee8
    cmp r0, #0x2000 @ 02013eec
    .word 0xabbfbb79 @ 02013ef0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013ef4
    mov lr, r1 @ 02013ef8
    bic r1, r0, #0x10 @ 02013efc
    lsl r4, r1, #0x18 @ 02013f00
    mov r0, lr @ 02013f04
    cmp r0, #0x2000 @ 02013f08
    .word 0xabbfbb7f @ 02013f0c blge #0x1002d10
    strb r1, [r3, r0] @ 02013f10
    ldrb r0, [fp], #1 @ 02013f14
    subs r5, r5, #0x170000 @ 02013f18
    ldrgt pc, [r2, r0, lsl #2] @ 02013f1c
    b .L_0200e030 @ 02013f20
@ z80_dispatch_02013f24 at 0x02013f24
    mov r1, r0 @ 02013f24
    cmp r0, #0x2000 @ 02013f28
    .word 0xabbfbb6a @ 02013f2c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013f30
    mov lr, r1 @ 02013f34
    bic r1, r0, #0x20 @ 02013f38
    lsl r6, r1, #0x18 @ 02013f3c
    mov r0, lr @ 02013f40
    cmp r0, #0x2000 @ 02013f44
    .word 0xabbfbb70 @ 02013f48 blge #0x1002d10
    strb r1, [r3, r0] @ 02013f4c
    ldrb r0, [fp], #1 @ 02013f50
    subs r5, r5, #0x170000 @ 02013f54
    ldrgt pc, [r2, r0, lsl #2] @ 02013f58
    b .L_0200e030 @ 02013f5c
@ z80_dispatch_02013f60 at 0x02013f60
    mov r1, r0 @ 02013f60
    cmp r0, #0x2000 @ 02013f64
    .word 0xabbfbb5b @ 02013f68 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013f6c
    mov lr, r1 @ 02013f70
    bic r1, r0, #0x20 @ 02013f74
    lsl r7, r1, #0x18 @ 02013f78
    mov r0, lr @ 02013f7c
    cmp r0, #0x2000 @ 02013f80
    .word 0xabbfbb61 @ 02013f84 blge #0x1002d10
    strb r1, [r3, r0] @ 02013f88
    ldrb r0, [fp], #1 @ 02013f8c
    subs r5, r5, #0x170000 @ 02013f90
    ldrgt pc, [r2, r0, lsl #2] @ 02013f94
    b .L_0200e030 @ 02013f98
@ z80_dispatch_02013f9c at 0x02013f9c
    mov r1, r0 @ 02013f9c
    cmp r0, #0x2000 @ 02013fa0
    .word 0xabbfbb4c @ 02013fa4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013fa8
    mov lr, r1 @ 02013fac
    bic r1, r0, #0x20 @ 02013fb0
    lsl r8, r1, #0x18 @ 02013fb4
    mov r0, lr @ 02013fb8
    cmp r0, #0x2000 @ 02013fbc
    .word 0xabbfbb52 @ 02013fc0 blge #0x1002d10
    strb r1, [r3, r0] @ 02013fc4
    ldrb r0, [fp], #1 @ 02013fc8
    subs r5, r5, #0x170000 @ 02013fcc
    ldrgt pc, [r2, r0, lsl #2] @ 02013fd0
    b .L_0200e030 @ 02013fd4
@ z80_dispatch_02013fd8 at 0x02013fd8
    mov r1, r0 @ 02013fd8
    cmp r0, #0x2000 @ 02013fdc
    .word 0xabbfbb3d @ 02013fe0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02013fe4
    mov lr, r1 @ 02013fe8
    bic r1, r0, #0x20 @ 02013fec
    lsl sb, r1, #0x18 @ 02013ff0
    mov r0, lr @ 02013ff4
    cmp r0, #0x2000 @ 02013ff8
    .word 0xabbfbb43 @ 02013ffc blge #0x1002d10
    strb r1, [r3, r0] @ 02014000
    ldrb r0, [fp], #1 @ 02014004
    subs r5, r5, #0x170000 @ 02014008
    ldrgt pc, [r2, r0, lsl #2] @ 0201400c
    b .L_0200e030 @ 02014010
@ z80_dispatch_02014014 at 0x02014014
    mov r1, r0 @ 02014014
    cmp r0, #0x2000 @ 02014018
    .word 0xabbfbb2e @ 0201401c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014020
    mov lr, r1 @ 02014024
    and sl, sl, #0xff0000 @ 02014028
    bic r1, r0, #0x20 @ 0201402c
    orr sl, sl, r1, lsl #24 @ 02014030
    mov r0, lr @ 02014034
    cmp r0, #0x2000 @ 02014038
    .word 0xabbfbb33 @ 0201403c blge #0x1002d10
    strb r1, [r3, r0] @ 02014040
    ldrb r0, [fp], #1 @ 02014044
    subs r5, r5, #0x170000 @ 02014048
    ldrgt pc, [r2, r0, lsl #2] @ 0201404c
    b .L_0200e030 @ 02014050
@ z80_dispatch_02014054 at 0x02014054
    mov r1, r0 @ 02014054
    cmp r0, #0x2000 @ 02014058
    .word 0xabbfbb1e @ 0201405c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014060
    mov lr, r1 @ 02014064
    and sl, sl, #0xff000000 @ 02014068
    bic r1, r0, #0x20 @ 0201406c
    orr sl, sl, r1, lsl #16 @ 02014070
    mov r0, lr @ 02014074
    cmp r0, #0x2000 @ 02014078
    .word 0xabbfbb23 @ 0201407c blge #0x1002d10
    strb r1, [r3, r0] @ 02014080
    ldrb r0, [fp], #1 @ 02014084
    subs r5, r5, #0x170000 @ 02014088
    ldrgt pc, [r2, r0, lsl #2] @ 0201408c
    b .L_0200e030 @ 02014090
@ z80_dispatch_02014094 at 0x02014094
    mov r1, r0 @ 02014094
    cmp r0, #0x2000 @ 02014098
    .word 0xabbfbb0e @ 0201409c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020140a0
    mov lr, r1 @ 020140a4
    bic r1, r0, #0x20 @ 020140a8
    mov r0, lr @ 020140ac
    cmp r0, #0x2000 @ 020140b0
    .word 0xabbfbb15 @ 020140b4 blge #0x1002d10
    strb r1, [r3, r0] @ 020140b8
    ldrb r0, [fp], #1 @ 020140bc
    subs r5, r5, #0x170000 @ 020140c0
    ldrgt pc, [r2, r0, lsl #2] @ 020140c4
    b .L_0200e030 @ 020140c8
@ z80_dispatch_020140cc at 0x020140cc
    mov r1, r0 @ 020140cc
    cmp r0, #0x2000 @ 020140d0
    .word 0xabbfbb00 @ 020140d4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020140d8
    mov lr, r1 @ 020140dc
    bic r1, r0, #0x20 @ 020140e0
    lsl r4, r1, #0x18 @ 020140e4
    mov r0, lr @ 020140e8
    cmp r0, #0x2000 @ 020140ec
    .word 0xabbfbb06 @ 020140f0 blge #0x1002d10
    strb r1, [r3, r0] @ 020140f4
    ldrb r0, [fp], #1 @ 020140f8
    subs r5, r5, #0x170000 @ 020140fc
    ldrgt pc, [r2, r0, lsl #2] @ 02014100
    b .L_0200e030 @ 02014104
@ z80_dispatch_02014108 at 0x02014108
    mov r1, r0 @ 02014108
    cmp r0, #0x2000 @ 0201410c
    .word 0xabbfbaf1 @ 02014110 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014114
    mov lr, r1 @ 02014118
    bic r1, r0, #0x40 @ 0201411c
    lsl r6, r1, #0x18 @ 02014120
    mov r0, lr @ 02014124
    cmp r0, #0x2000 @ 02014128
    .word 0xabbfbaf7 @ 0201412c blge #0x1002d10
    strb r1, [r3, r0] @ 02014130
    ldrb r0, [fp], #1 @ 02014134
    subs r5, r5, #0x170000 @ 02014138
    ldrgt pc, [r2, r0, lsl #2] @ 0201413c
    b .L_0200e030 @ 02014140
@ z80_dispatch_02014144 at 0x02014144
    mov r1, r0 @ 02014144
    cmp r0, #0x2000 @ 02014148
    .word 0xabbfbae2 @ 0201414c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014150
    mov lr, r1 @ 02014154
    bic r1, r0, #0x40 @ 02014158
    lsl r7, r1, #0x18 @ 0201415c
    mov r0, lr @ 02014160
    cmp r0, #0x2000 @ 02014164
    .word 0xabbfbae8 @ 02014168 blge #0x1002d10
    strb r1, [r3, r0] @ 0201416c
    ldrb r0, [fp], #1 @ 02014170
    subs r5, r5, #0x170000 @ 02014174
    ldrgt pc, [r2, r0, lsl #2] @ 02014178
    b .L_0200e030 @ 0201417c
@ z80_dispatch_02014180 at 0x02014180
    mov r1, r0 @ 02014180
    cmp r0, #0x2000 @ 02014184
    .word 0xabbfbad3 @ 02014188 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 0201418c
    mov lr, r1 @ 02014190
    bic r1, r0, #0x40 @ 02014194
    lsl r8, r1, #0x18 @ 02014198
    mov r0, lr @ 0201419c
    cmp r0, #0x2000 @ 020141a0
    .word 0xabbfbad9 @ 020141a4 blge #0x1002d10
    strb r1, [r3, r0] @ 020141a8
    ldrb r0, [fp], #1 @ 020141ac
    subs r5, r5, #0x170000 @ 020141b0
    ldrgt pc, [r2, r0, lsl #2] @ 020141b4
    b .L_0200e030 @ 020141b8
@ z80_dispatch_020141bc at 0x020141bc
    mov r1, r0 @ 020141bc
    cmp r0, #0x2000 @ 020141c0
    .word 0xabbfbac4 @ 020141c4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020141c8
    mov lr, r1 @ 020141cc
    bic r1, r0, #0x40 @ 020141d0
    lsl sb, r1, #0x18 @ 020141d4
    mov r0, lr @ 020141d8
    cmp r0, #0x2000 @ 020141dc
    .word 0xabbfbaca @ 020141e0 blge #0x1002d10
    strb r1, [r3, r0] @ 020141e4
    ldrb r0, [fp], #1 @ 020141e8
    subs r5, r5, #0x170000 @ 020141ec
    ldrgt pc, [r2, r0, lsl #2] @ 020141f0
    b .L_0200e030 @ 020141f4
@ z80_dispatch_020141f8 at 0x020141f8
    mov r1, r0 @ 020141f8
    cmp r0, #0x2000 @ 020141fc
    .word 0xabbfbab5 @ 02014200 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014204
    mov lr, r1 @ 02014208
    and sl, sl, #0xff0000 @ 0201420c
    bic r1, r0, #0x40 @ 02014210
    orr sl, sl, r1, lsl #24 @ 02014214
    mov r0, lr @ 02014218
    cmp r0, #0x2000 @ 0201421c
    .word 0xabbfbaba @ 02014220 blge #0x1002d10
    strb r1, [r3, r0] @ 02014224
    ldrb r0, [fp], #1 @ 02014228
    subs r5, r5, #0x170000 @ 0201422c
    ldrgt pc, [r2, r0, lsl #2] @ 02014230
    b .L_0200e030 @ 02014234
@ z80_dispatch_02014238 at 0x02014238
    mov r1, r0 @ 02014238
    cmp r0, #0x2000 @ 0201423c
    .word 0xabbfbaa5 @ 02014240 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014244
    mov lr, r1 @ 02014248
    and sl, sl, #0xff000000 @ 0201424c
    bic r1, r0, #0x40 @ 02014250
    orr sl, sl, r1, lsl #16 @ 02014254
    mov r0, lr @ 02014258
    cmp r0, #0x2000 @ 0201425c
    .word 0xabbfbaaa @ 02014260 blge #0x1002d10
    strb r1, [r3, r0] @ 02014264
    ldrb r0, [fp], #1 @ 02014268
    subs r5, r5, #0x170000 @ 0201426c
    ldrgt pc, [r2, r0, lsl #2] @ 02014270
    b .L_0200e030 @ 02014274
@ z80_dispatch_02014278 at 0x02014278
    mov r1, r0 @ 02014278
    cmp r0, #0x2000 @ 0201427c
    .word 0xabbfba95 @ 02014280 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014284
    mov lr, r1 @ 02014288
    bic r1, r0, #0x40 @ 0201428c
    mov r0, lr @ 02014290
    cmp r0, #0x2000 @ 02014294
    .word 0xabbfba9c @ 02014298 blge #0x1002d10
    strb r1, [r3, r0] @ 0201429c
    ldrb r0, [fp], #1 @ 020142a0
    subs r5, r5, #0x170000 @ 020142a4
    ldrgt pc, [r2, r0, lsl #2] @ 020142a8
    b .L_0200e030 @ 020142ac
@ z80_dispatch_020142b0 at 0x020142b0
    mov r1, r0 @ 020142b0
    cmp r0, #0x2000 @ 020142b4
    .word 0xabbfba87 @ 020142b8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020142bc
    mov lr, r1 @ 020142c0
    bic r1, r0, #0x40 @ 020142c4
    lsl r4, r1, #0x18 @ 020142c8
    mov r0, lr @ 020142cc
    cmp r0, #0x2000 @ 020142d0
    .word 0xabbfba8d @ 020142d4 blge #0x1002d10
    strb r1, [r3, r0] @ 020142d8
    ldrb r0, [fp], #1 @ 020142dc
    subs r5, r5, #0x170000 @ 020142e0
    ldrgt pc, [r2, r0, lsl #2] @ 020142e4
    b .L_0200e030 @ 020142e8
@ z80_dispatch_020142ec at 0x020142ec
    mov r1, r0 @ 020142ec
    cmp r0, #0x2000 @ 020142f0
    .word 0xabbfba78 @ 020142f4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020142f8
    mov lr, r1 @ 020142fc
    bic r1, r0, #0x80 @ 02014300
    lsl r6, r1, #0x18 @ 02014304
    mov r0, lr @ 02014308
    cmp r0, #0x2000 @ 0201430c
    .word 0xabbfba7e @ 02014310 blge #0x1002d10
    strb r1, [r3, r0] @ 02014314
    ldrb r0, [fp], #1 @ 02014318
    subs r5, r5, #0x170000 @ 0201431c
    ldrgt pc, [r2, r0, lsl #2] @ 02014320
    b .L_0200e030 @ 02014324
@ z80_dispatch_02014328 at 0x02014328
    mov r1, r0 @ 02014328
    cmp r0, #0x2000 @ 0201432c
    .word 0xabbfba69 @ 02014330 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014334
    mov lr, r1 @ 02014338
    bic r1, r0, #0x80 @ 0201433c
    lsl r7, r1, #0x18 @ 02014340
    mov r0, lr @ 02014344
    cmp r0, #0x2000 @ 02014348
    .word 0xabbfba6f @ 0201434c blge #0x1002d10
    strb r1, [r3, r0] @ 02014350
    ldrb r0, [fp], #1 @ 02014354
    subs r5, r5, #0x170000 @ 02014358
    ldrgt pc, [r2, r0, lsl #2] @ 0201435c
    b .L_0200e030 @ 02014360
@ z80_dispatch_02014364 at 0x02014364
    mov r1, r0 @ 02014364
    cmp r0, #0x2000 @ 02014368
    .word 0xabbfba5a @ 0201436c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014370
    mov lr, r1 @ 02014374
    bic r1, r0, #0x80 @ 02014378
    lsl r8, r1, #0x18 @ 0201437c
    mov r0, lr @ 02014380
    cmp r0, #0x2000 @ 02014384
    .word 0xabbfba60 @ 02014388 blge #0x1002d10
    strb r1, [r3, r0] @ 0201438c
    ldrb r0, [fp], #1 @ 02014390
    subs r5, r5, #0x170000 @ 02014394
    ldrgt pc, [r2, r0, lsl #2] @ 02014398
    b .L_0200e030 @ 0201439c
@ z80_dispatch_020143a0 at 0x020143a0
    mov r1, r0 @ 020143a0
    cmp r0, #0x2000 @ 020143a4
    .word 0xabbfba4b @ 020143a8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020143ac
    mov lr, r1 @ 020143b0
    bic r1, r0, #0x80 @ 020143b4
    lsl sb, r1, #0x18 @ 020143b8
    mov r0, lr @ 020143bc
    cmp r0, #0x2000 @ 020143c0
    .word 0xabbfba51 @ 020143c4 blge #0x1002d10
    strb r1, [r3, r0] @ 020143c8
    ldrb r0, [fp], #1 @ 020143cc
    subs r5, r5, #0x170000 @ 020143d0
    ldrgt pc, [r2, r0, lsl #2] @ 020143d4
    b .L_0200e030 @ 020143d8
@ z80_dispatch_020143dc at 0x020143dc
    mov r1, r0 @ 020143dc
    cmp r0, #0x2000 @ 020143e0
    .word 0xabbfba3c @ 020143e4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020143e8
    mov lr, r1 @ 020143ec
    and sl, sl, #0xff0000 @ 020143f0
    bic r1, r0, #0x80 @ 020143f4
    orr sl, sl, r1, lsl #24 @ 020143f8
    mov r0, lr @ 020143fc
    cmp r0, #0x2000 @ 02014400
    .word 0xabbfba41 @ 02014404 blge #0x1002d10
    strb r1, [r3, r0] @ 02014408
    ldrb r0, [fp], #1 @ 0201440c
    subs r5, r5, #0x170000 @ 02014410
    ldrgt pc, [r2, r0, lsl #2] @ 02014414
    b .L_0200e030 @ 02014418
@ z80_dispatch_0201441c at 0x0201441c
    mov r1, r0 @ 0201441c
    cmp r0, #0x2000 @ 02014420
    .word 0xabbfba2c @ 02014424 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014428
    mov lr, r1 @ 0201442c
    and sl, sl, #0xff000000 @ 02014430
    bic r1, r0, #0x80 @ 02014434
    orr sl, sl, r1, lsl #16 @ 02014438
    mov r0, lr @ 0201443c
    cmp r0, #0x2000 @ 02014440
    .word 0xabbfba31 @ 02014444 blge #0x1002d10
    strb r1, [r3, r0] @ 02014448
    ldrb r0, [fp], #1 @ 0201444c
    subs r5, r5, #0x170000 @ 02014450
    ldrgt pc, [r2, r0, lsl #2] @ 02014454
    b .L_0200e030 @ 02014458
@ z80_dispatch_0201445c at 0x0201445c
    mov r1, r0 @ 0201445c
    cmp r0, #0x2000 @ 02014460
    .word 0xabbfba1c @ 02014464 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014468
    mov lr, r1 @ 0201446c
    bic r1, r0, #0x80 @ 02014470
    mov r0, lr @ 02014474
    cmp r0, #0x2000 @ 02014478
    .word 0xabbfba23 @ 0201447c blge #0x1002d10
    strb r1, [r3, r0] @ 02014480
    ldrb r0, [fp], #1 @ 02014484
    subs r5, r5, #0x170000 @ 02014488
    ldrgt pc, [r2, r0, lsl #2] @ 0201448c
    b .L_0200e030 @ 02014490
@ z80_dispatch_02014494 at 0x02014494
    mov r1, r0 @ 02014494
    cmp r0, #0x2000 @ 02014498
    .word 0xabbfba0e @ 0201449c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020144a0
    mov lr, r1 @ 020144a4
    bic r1, r0, #0x80 @ 020144a8
    lsl r4, r1, #0x18 @ 020144ac
    mov r0, lr @ 020144b0
    cmp r0, #0x2000 @ 020144b4
    .word 0xabbfba14 @ 020144b8 blge #0x1002d10
    strb r1, [r3, r0] @ 020144bc
    ldrb r0, [fp], #1 @ 020144c0
    subs r5, r5, #0x170000 @ 020144c4
    ldrgt pc, [r2, r0, lsl #2] @ 020144c8
    b .L_0200e030 @ 020144cc
@ z80_dispatch_020144d0 at 0x020144d0
    mov r1, r0 @ 020144d0
    cmp r0, #0x2000 @ 020144d4
    .word 0xabbfb9ff @ 020144d8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020144dc
    mov lr, r1 @ 020144e0
    orr r1, r0, #1 @ 020144e4
    lsl r6, r1, #0x18 @ 020144e8
    mov r0, lr @ 020144ec
    cmp r0, #0x2000 @ 020144f0
    .word 0xabbfba05 @ 020144f4 blge #0x1002d10
    strb r1, [r3, r0] @ 020144f8
    ldrb r0, [fp], #1 @ 020144fc
    subs r5, r5, #0x170000 @ 02014500
    ldrgt pc, [r2, r0, lsl #2] @ 02014504
    b .L_0200e030 @ 02014508
@ z80_dispatch_0201450c at 0x0201450c
    mov r1, r0 @ 0201450c
    cmp r0, #0x2000 @ 02014510
    .word 0xabbfb9f0 @ 02014514 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014518
    mov lr, r1 @ 0201451c
    orr r1, r0, #1 @ 02014520
    lsl r7, r1, #0x18 @ 02014524
    mov r0, lr @ 02014528
    cmp r0, #0x2000 @ 0201452c
    .word 0xabbfb9f6 @ 02014530 blge #0x1002d10
    strb r1, [r3, r0] @ 02014534
    ldrb r0, [fp], #1 @ 02014538
    subs r5, r5, #0x170000 @ 0201453c
    ldrgt pc, [r2, r0, lsl #2] @ 02014540
    b .L_0200e030 @ 02014544
@ z80_dispatch_02014548 at 0x02014548
    mov r1, r0 @ 02014548
    cmp r0, #0x2000 @ 0201454c
    .word 0xabbfb9e1 @ 02014550 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014554
    mov lr, r1 @ 02014558
    orr r1, r0, #1 @ 0201455c
    lsl r8, r1, #0x18 @ 02014560
    mov r0, lr @ 02014564
    cmp r0, #0x2000 @ 02014568
    .word 0xabbfb9e7 @ 0201456c blge #0x1002d10
    strb r1, [r3, r0] @ 02014570
    ldrb r0, [fp], #1 @ 02014574
    subs r5, r5, #0x170000 @ 02014578
    ldrgt pc, [r2, r0, lsl #2] @ 0201457c
    b .L_0200e030 @ 02014580
@ z80_dispatch_02014584 at 0x02014584
    mov r1, r0 @ 02014584
    cmp r0, #0x2000 @ 02014588
    .word 0xabbfb9d2 @ 0201458c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014590
    mov lr, r1 @ 02014594
    orr r1, r0, #1 @ 02014598
    lsl sb, r1, #0x18 @ 0201459c
    mov r0, lr @ 020145a0
    cmp r0, #0x2000 @ 020145a4
    .word 0xabbfb9d8 @ 020145a8 blge #0x1002d10
    strb r1, [r3, r0] @ 020145ac
    ldrb r0, [fp], #1 @ 020145b0
    subs r5, r5, #0x170000 @ 020145b4
    ldrgt pc, [r2, r0, lsl #2] @ 020145b8
    b .L_0200e030 @ 020145bc
@ z80_dispatch_020145c0 at 0x020145c0
    mov r1, r0 @ 020145c0
    cmp r0, #0x2000 @ 020145c4
    .word 0xabbfb9c3 @ 020145c8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020145cc
    mov lr, r1 @ 020145d0
    and sl, sl, #0xff0000 @ 020145d4
    orr r1, r0, #1 @ 020145d8
    orr sl, sl, r1, lsl #24 @ 020145dc
    mov r0, lr @ 020145e0
    cmp r0, #0x2000 @ 020145e4
    .word 0xabbfb9c8 @ 020145e8 blge #0x1002d10
    strb r1, [r3, r0] @ 020145ec
    ldrb r0, [fp], #1 @ 020145f0
    subs r5, r5, #0x170000 @ 020145f4
    ldrgt pc, [r2, r0, lsl #2] @ 020145f8
    b .L_0200e030 @ 020145fc
@ z80_dispatch_02014600 at 0x02014600
    mov r1, r0 @ 02014600
    cmp r0, #0x2000 @ 02014604
    .word 0xabbfb9b3 @ 02014608 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 0201460c
    mov lr, r1 @ 02014610
    and sl, sl, #0xff000000 @ 02014614
    orr r1, r0, #1 @ 02014618
    orr sl, sl, r1, lsl #16 @ 0201461c
    mov r0, lr @ 02014620
    cmp r0, #0x2000 @ 02014624
    .word 0xabbfb9b8 @ 02014628 blge #0x1002d10
    strb r1, [r3, r0] @ 0201462c
    ldrb r0, [fp], #1 @ 02014630
    subs r5, r5, #0x170000 @ 02014634
    ldrgt pc, [r2, r0, lsl #2] @ 02014638
    b .L_0200e030 @ 0201463c
@ z80_dispatch_02014640 at 0x02014640
    mov r1, r0 @ 02014640
    cmp r0, #0x2000 @ 02014644
    .word 0xabbfb9a3 @ 02014648 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 0201464c
    mov lr, r1 @ 02014650
    orr r1, r0, #1 @ 02014654
    mov r0, lr @ 02014658
    cmp r0, #0x2000 @ 0201465c
    .word 0xabbfb9aa @ 02014660 blge #0x1002d10
    strb r1, [r3, r0] @ 02014664
    ldrb r0, [fp], #1 @ 02014668
    subs r5, r5, #0x170000 @ 0201466c
    ldrgt pc, [r2, r0, lsl #2] @ 02014670
    b .L_0200e030 @ 02014674
@ z80_dispatch_02014678 at 0x02014678
    mov r1, r0 @ 02014678
    cmp r0, #0x2000 @ 0201467c
    .word 0xabbfb995 @ 02014680 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014684
    mov lr, r1 @ 02014688
    orr r1, r0, #1 @ 0201468c
    lsl r4, r1, #0x18 @ 02014690
    mov r0, lr @ 02014694
    cmp r0, #0x2000 @ 02014698
    .word 0xabbfb99b @ 0201469c blge #0x1002d10
    strb r1, [r3, r0] @ 020146a0
    ldrb r0, [fp], #1 @ 020146a4
    subs r5, r5, #0x170000 @ 020146a8
    ldrgt pc, [r2, r0, lsl #2] @ 020146ac
    b .L_0200e030 @ 020146b0
@ z80_dispatch_020146b4 at 0x020146b4
    mov r1, r0 @ 020146b4
    cmp r0, #0x2000 @ 020146b8
    .word 0xabbfb986 @ 020146bc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020146c0
    mov lr, r1 @ 020146c4
    orr r1, r0, #2 @ 020146c8
    lsl r6, r1, #0x18 @ 020146cc
    mov r0, lr @ 020146d0
    cmp r0, #0x2000 @ 020146d4
    .word 0xabbfb98c @ 020146d8 blge #0x1002d10
    strb r1, [r3, r0] @ 020146dc
    ldrb r0, [fp], #1 @ 020146e0
    subs r5, r5, #0x170000 @ 020146e4
    ldrgt pc, [r2, r0, lsl #2] @ 020146e8
    b .L_0200e030 @ 020146ec
@ z80_dispatch_020146f0 at 0x020146f0
    mov r1, r0 @ 020146f0
    cmp r0, #0x2000 @ 020146f4
    .word 0xabbfb977 @ 020146f8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020146fc
    mov lr, r1 @ 02014700
    orr r1, r0, #2 @ 02014704
    lsl r7, r1, #0x18 @ 02014708
    mov r0, lr @ 0201470c
    cmp r0, #0x2000 @ 02014710
    .word 0xabbfb97d @ 02014714 blge #0x1002d10
    strb r1, [r3, r0] @ 02014718
    ldrb r0, [fp], #1 @ 0201471c
    subs r5, r5, #0x170000 @ 02014720
    ldrgt pc, [r2, r0, lsl #2] @ 02014724
    b .L_0200e030 @ 02014728
@ z80_dispatch_0201472c at 0x0201472c
    mov r1, r0 @ 0201472c
    cmp r0, #0x2000 @ 02014730
    .word 0xabbfb968 @ 02014734 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014738
    mov lr, r1 @ 0201473c
    orr r1, r0, #2 @ 02014740
    lsl r8, r1, #0x18 @ 02014744
    mov r0, lr @ 02014748
    cmp r0, #0x2000 @ 0201474c
    .word 0xabbfb96e @ 02014750 blge #0x1002d10
    strb r1, [r3, r0] @ 02014754
    ldrb r0, [fp], #1 @ 02014758
    subs r5, r5, #0x170000 @ 0201475c
    ldrgt pc, [r2, r0, lsl #2] @ 02014760
    b .L_0200e030 @ 02014764
@ z80_dispatch_02014768 at 0x02014768
    mov r1, r0 @ 02014768
    cmp r0, #0x2000 @ 0201476c
    .word 0xabbfb959 @ 02014770 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014774
    mov lr, r1 @ 02014778
    orr r1, r0, #2 @ 0201477c
    lsl sb, r1, #0x18 @ 02014780
    mov r0, lr @ 02014784
    cmp r0, #0x2000 @ 02014788
    .word 0xabbfb95f @ 0201478c blge #0x1002d10
    strb r1, [r3, r0] @ 02014790
    ldrb r0, [fp], #1 @ 02014794
    subs r5, r5, #0x170000 @ 02014798
    ldrgt pc, [r2, r0, lsl #2] @ 0201479c
    b .L_0200e030 @ 020147a0
@ z80_dispatch_020147a4 at 0x020147a4
    mov r1, r0 @ 020147a4
    cmp r0, #0x2000 @ 020147a8
    .word 0xabbfb94a @ 020147ac blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020147b0
    mov lr, r1 @ 020147b4
    and sl, sl, #0xff0000 @ 020147b8
    orr r1, r0, #2 @ 020147bc
    orr sl, sl, r1, lsl #24 @ 020147c0
    mov r0, lr @ 020147c4
    cmp r0, #0x2000 @ 020147c8
    .word 0xabbfb94f @ 020147cc blge #0x1002d10
    strb r1, [r3, r0] @ 020147d0
    ldrb r0, [fp], #1 @ 020147d4
    subs r5, r5, #0x170000 @ 020147d8
    ldrgt pc, [r2, r0, lsl #2] @ 020147dc
    b .L_0200e030 @ 020147e0
@ z80_dispatch_020147e4 at 0x020147e4
    mov r1, r0 @ 020147e4
    cmp r0, #0x2000 @ 020147e8
    .word 0xabbfb93a @ 020147ec blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020147f0
    mov lr, r1 @ 020147f4
    and sl, sl, #0xff000000 @ 020147f8
    orr r1, r0, #2 @ 020147fc
    orr sl, sl, r1, lsl #16 @ 02014800
    mov r0, lr @ 02014804
    cmp r0, #0x2000 @ 02014808
    .word 0xabbfb93f @ 0201480c blge #0x1002d10
    strb r1, [r3, r0] @ 02014810
    ldrb r0, [fp], #1 @ 02014814
    subs r5, r5, #0x170000 @ 02014818
    ldrgt pc, [r2, r0, lsl #2] @ 0201481c
    b .L_0200e030 @ 02014820
@ z80_dispatch_02014824 at 0x02014824
    mov r1, r0 @ 02014824
    cmp r0, #0x2000 @ 02014828
    .word 0xabbfb92a @ 0201482c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014830
    mov lr, r1 @ 02014834
    orr r1, r0, #2 @ 02014838
    mov r0, lr @ 0201483c
    cmp r0, #0x2000 @ 02014840
    .word 0xabbfb931 @ 02014844 blge #0x1002d10
    strb r1, [r3, r0] @ 02014848
    ldrb r0, [fp], #1 @ 0201484c
    subs r5, r5, #0x170000 @ 02014850
    ldrgt pc, [r2, r0, lsl #2] @ 02014854
    b .L_0200e030 @ 02014858
@ z80_dispatch_0201485c at 0x0201485c
    mov r1, r0 @ 0201485c
    cmp r0, #0x2000 @ 02014860
    .word 0xabbfb91c @ 02014864 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014868
    mov lr, r1 @ 0201486c
    orr r1, r0, #2 @ 02014870
    lsl r4, r1, #0x18 @ 02014874
    mov r0, lr @ 02014878
    cmp r0, #0x2000 @ 0201487c
    .word 0xabbfb922 @ 02014880 blge #0x1002d10
    strb r1, [r3, r0] @ 02014884
    ldrb r0, [fp], #1 @ 02014888
    subs r5, r5, #0x170000 @ 0201488c
    ldrgt pc, [r2, r0, lsl #2] @ 02014890
    b .L_0200e030 @ 02014894
@ z80_dispatch_02014898 at 0x02014898
    mov r1, r0 @ 02014898
    cmp r0, #0x2000 @ 0201489c
    .word 0xabbfb90d @ 020148a0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020148a4
    mov lr, r1 @ 020148a8
    orr r1, r0, #4 @ 020148ac
    lsl r6, r1, #0x18 @ 020148b0
    mov r0, lr @ 020148b4
    cmp r0, #0x2000 @ 020148b8
    .word 0xabbfb913 @ 020148bc blge #0x1002d10
    strb r1, [r3, r0] @ 020148c0
    ldrb r0, [fp], #1 @ 020148c4
    subs r5, r5, #0x170000 @ 020148c8
    ldrgt pc, [r2, r0, lsl #2] @ 020148cc
    b .L_0200e030 @ 020148d0
@ z80_dispatch_020148d4 at 0x020148d4
    mov r1, r0 @ 020148d4
    cmp r0, #0x2000 @ 020148d8
    .word 0xabbfb8fe @ 020148dc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020148e0
    mov lr, r1 @ 020148e4
    orr r1, r0, #4 @ 020148e8
    lsl r7, r1, #0x18 @ 020148ec
    mov r0, lr @ 020148f0
    cmp r0, #0x2000 @ 020148f4
    .word 0xabbfb904 @ 020148f8 blge #0x1002d10
    strb r1, [r3, r0] @ 020148fc
    ldrb r0, [fp], #1 @ 02014900
    subs r5, r5, #0x170000 @ 02014904
    ldrgt pc, [r2, r0, lsl #2] @ 02014908
    b .L_0200e030 @ 0201490c
@ z80_dispatch_02014910 at 0x02014910
    mov r1, r0 @ 02014910
    cmp r0, #0x2000 @ 02014914
    .word 0xabbfb8ef @ 02014918 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 0201491c
    mov lr, r1 @ 02014920
    orr r1, r0, #4 @ 02014924
    lsl r8, r1, #0x18 @ 02014928
    mov r0, lr @ 0201492c
    cmp r0, #0x2000 @ 02014930
    .word 0xabbfb8f5 @ 02014934 blge #0x1002d10
    strb r1, [r3, r0] @ 02014938
    ldrb r0, [fp], #1 @ 0201493c
    subs r5, r5, #0x170000 @ 02014940
    ldrgt pc, [r2, r0, lsl #2] @ 02014944
    b .L_0200e030 @ 02014948
@ z80_dispatch_0201494c at 0x0201494c
    mov r1, r0 @ 0201494c
    cmp r0, #0x2000 @ 02014950
    .word 0xabbfb8e0 @ 02014954 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014958
    mov lr, r1 @ 0201495c
    orr r1, r0, #4 @ 02014960
    lsl sb, r1, #0x18 @ 02014964
    mov r0, lr @ 02014968
    cmp r0, #0x2000 @ 0201496c
    .word 0xabbfb8e6 @ 02014970 blge #0x1002d10
    strb r1, [r3, r0] @ 02014974
    ldrb r0, [fp], #1 @ 02014978
    subs r5, r5, #0x170000 @ 0201497c
    ldrgt pc, [r2, r0, lsl #2] @ 02014980
    b .L_0200e030 @ 02014984
@ z80_dispatch_02014988 at 0x02014988
    mov r1, r0 @ 02014988
    cmp r0, #0x2000 @ 0201498c
    .word 0xabbfb8d1 @ 02014990 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014994
    mov lr, r1 @ 02014998
    and sl, sl, #0xff0000 @ 0201499c
    orr r1, r0, #4 @ 020149a0
    orr sl, sl, r1, lsl #24 @ 020149a4
    mov r0, lr @ 020149a8
    cmp r0, #0x2000 @ 020149ac
    .word 0xabbfb8d6 @ 020149b0 blge #0x1002d10
    strb r1, [r3, r0] @ 020149b4
    ldrb r0, [fp], #1 @ 020149b8
    subs r5, r5, #0x170000 @ 020149bc
    ldrgt pc, [r2, r0, lsl #2] @ 020149c0
    b .L_0200e030 @ 020149c4
@ z80_dispatch_020149c8 at 0x020149c8
    mov r1, r0 @ 020149c8
    cmp r0, #0x2000 @ 020149cc
    .word 0xabbfb8c1 @ 020149d0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020149d4
    mov lr, r1 @ 020149d8
    and sl, sl, #0xff000000 @ 020149dc
    orr r1, r0, #4 @ 020149e0
    orr sl, sl, r1, lsl #16 @ 020149e4
    mov r0, lr @ 020149e8
    cmp r0, #0x2000 @ 020149ec
    .word 0xabbfb8c6 @ 020149f0 blge #0x1002d10
    strb r1, [r3, r0] @ 020149f4
    ldrb r0, [fp], #1 @ 020149f8
    subs r5, r5, #0x170000 @ 020149fc
    ldrgt pc, [r2, r0, lsl #2] @ 02014a00
    b .L_0200e030 @ 02014a04
@ z80_dispatch_02014a08 at 0x02014a08
    mov r1, r0 @ 02014a08
    cmp r0, #0x2000 @ 02014a0c
    .word 0xabbfb8b1 @ 02014a10 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014a14
    mov lr, r1 @ 02014a18
    orr r1, r0, #4 @ 02014a1c
    mov r0, lr @ 02014a20
    cmp r0, #0x2000 @ 02014a24
    .word 0xabbfb8b8 @ 02014a28 blge #0x1002d10
    strb r1, [r3, r0] @ 02014a2c
    ldrb r0, [fp], #1 @ 02014a30
    subs r5, r5, #0x170000 @ 02014a34
    ldrgt pc, [r2, r0, lsl #2] @ 02014a38
    b .L_0200e030 @ 02014a3c
@ z80_dispatch_02014a40 at 0x02014a40
    mov r1, r0 @ 02014a40
    cmp r0, #0x2000 @ 02014a44
    .word 0xabbfb8a3 @ 02014a48 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014a4c
    mov lr, r1 @ 02014a50
    orr r1, r0, #4 @ 02014a54
    lsl r4, r1, #0x18 @ 02014a58
    mov r0, lr @ 02014a5c
    cmp r0, #0x2000 @ 02014a60
    .word 0xabbfb8a9 @ 02014a64 blge #0x1002d10
    strb r1, [r3, r0] @ 02014a68
    ldrb r0, [fp], #1 @ 02014a6c
    subs r5, r5, #0x170000 @ 02014a70
    ldrgt pc, [r2, r0, lsl #2] @ 02014a74
    b .L_0200e030 @ 02014a78
@ z80_dispatch_02014a7c at 0x02014a7c
    mov r1, r0 @ 02014a7c
    cmp r0, #0x2000 @ 02014a80
    .word 0xabbfb894 @ 02014a84 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014a88
    mov lr, r1 @ 02014a8c
    orr r1, r0, #8 @ 02014a90
    lsl r6, r1, #0x18 @ 02014a94
    mov r0, lr @ 02014a98
    cmp r0, #0x2000 @ 02014a9c
    .word 0xabbfb89a @ 02014aa0 blge #0x1002d10
    strb r1, [r3, r0] @ 02014aa4
    ldrb r0, [fp], #1 @ 02014aa8
    subs r5, r5, #0x170000 @ 02014aac
    ldrgt pc, [r2, r0, lsl #2] @ 02014ab0
    b .L_0200e030 @ 02014ab4
@ z80_dispatch_02014ab8 at 0x02014ab8
    mov r1, r0 @ 02014ab8
    cmp r0, #0x2000 @ 02014abc
    .word 0xabbfb885 @ 02014ac0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014ac4
    mov lr, r1 @ 02014ac8
    orr r1, r0, #8 @ 02014acc
    lsl r7, r1, #0x18 @ 02014ad0
    mov r0, lr @ 02014ad4
    cmp r0, #0x2000 @ 02014ad8
    .word 0xabbfb88b @ 02014adc blge #0x1002d10
    strb r1, [r3, r0] @ 02014ae0
    ldrb r0, [fp], #1 @ 02014ae4
    subs r5, r5, #0x170000 @ 02014ae8
    ldrgt pc, [r2, r0, lsl #2] @ 02014aec
    b .L_0200e030 @ 02014af0
@ z80_dispatch_02014af4 at 0x02014af4
    mov r1, r0 @ 02014af4
    cmp r0, #0x2000 @ 02014af8
    .word 0xabbfb876 @ 02014afc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014b00
    mov lr, r1 @ 02014b04
    orr r1, r0, #8 @ 02014b08
    lsl r8, r1, #0x18 @ 02014b0c
    mov r0, lr @ 02014b10
    cmp r0, #0x2000 @ 02014b14
    .word 0xabbfb87c @ 02014b18 blge #0x1002d10
    strb r1, [r3, r0] @ 02014b1c
    ldrb r0, [fp], #1 @ 02014b20
    subs r5, r5, #0x170000 @ 02014b24
    ldrgt pc, [r2, r0, lsl #2] @ 02014b28
    b .L_0200e030 @ 02014b2c
@ z80_dispatch_02014b30 at 0x02014b30
    mov r1, r0 @ 02014b30
    cmp r0, #0x2000 @ 02014b34
    .word 0xabbfb867 @ 02014b38 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014b3c
    mov lr, r1 @ 02014b40
    orr r1, r0, #8 @ 02014b44
    lsl sb, r1, #0x18 @ 02014b48
    mov r0, lr @ 02014b4c
    cmp r0, #0x2000 @ 02014b50
    .word 0xabbfb86d @ 02014b54 blge #0x1002d10
    strb r1, [r3, r0] @ 02014b58
    ldrb r0, [fp], #1 @ 02014b5c
    subs r5, r5, #0x170000 @ 02014b60
    ldrgt pc, [r2, r0, lsl #2] @ 02014b64
    b .L_0200e030 @ 02014b68
@ z80_dispatch_02014b6c at 0x02014b6c
    mov r1, r0 @ 02014b6c
    cmp r0, #0x2000 @ 02014b70
    .word 0xabbfb858 @ 02014b74 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014b78
    mov lr, r1 @ 02014b7c
    and sl, sl, #0xff0000 @ 02014b80
    orr r1, r0, #8 @ 02014b84
    orr sl, sl, r1, lsl #24 @ 02014b88
    mov r0, lr @ 02014b8c
    cmp r0, #0x2000 @ 02014b90
    .word 0xabbfb85d @ 02014b94 blge #0x1002d10
    strb r1, [r3, r0] @ 02014b98
    ldrb r0, [fp], #1 @ 02014b9c
    subs r5, r5, #0x170000 @ 02014ba0
    ldrgt pc, [r2, r0, lsl #2] @ 02014ba4
    b .L_0200e030 @ 02014ba8
@ z80_dispatch_02014bac at 0x02014bac
    mov r1, r0 @ 02014bac
    cmp r0, #0x2000 @ 02014bb0
    .word 0xabbfb848 @ 02014bb4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014bb8
    mov lr, r1 @ 02014bbc
    and sl, sl, #0xff000000 @ 02014bc0
    orr r1, r0, #8 @ 02014bc4
    orr sl, sl, r1, lsl #16 @ 02014bc8
    mov r0, lr @ 02014bcc
    cmp r0, #0x2000 @ 02014bd0
    .word 0xabbfb84d @ 02014bd4 blge #0x1002d10
    strb r1, [r3, r0] @ 02014bd8
    ldrb r0, [fp], #1 @ 02014bdc
    subs r5, r5, #0x170000 @ 02014be0
    ldrgt pc, [r2, r0, lsl #2] @ 02014be4
    b .L_0200e030 @ 02014be8
@ z80_dispatch_02014bec at 0x02014bec
    mov r1, r0 @ 02014bec
    cmp r0, #0x2000 @ 02014bf0
    .word 0xabbfb838 @ 02014bf4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014bf8
    mov lr, r1 @ 02014bfc
    orr r1, r0, #8 @ 02014c00
    mov r0, lr @ 02014c04
    cmp r0, #0x2000 @ 02014c08
    .word 0xabbfb83f @ 02014c0c blge #0x1002d10
    strb r1, [r3, r0] @ 02014c10
    ldrb r0, [fp], #1 @ 02014c14
    subs r5, r5, #0x170000 @ 02014c18
    ldrgt pc, [r2, r0, lsl #2] @ 02014c1c
    b .L_0200e030 @ 02014c20
@ z80_dispatch_02014c24 at 0x02014c24
    mov r1, r0 @ 02014c24
    cmp r0, #0x2000 @ 02014c28
    .word 0xabbfb82a @ 02014c2c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014c30
    mov lr, r1 @ 02014c34
    orr r1, r0, #8 @ 02014c38
    lsl r4, r1, #0x18 @ 02014c3c
    mov r0, lr @ 02014c40
    cmp r0, #0x2000 @ 02014c44
    .word 0xabbfb830 @ 02014c48 blge #0x1002d10
    strb r1, [r3, r0] @ 02014c4c
    ldrb r0, [fp], #1 @ 02014c50
    subs r5, r5, #0x170000 @ 02014c54
    ldrgt pc, [r2, r0, lsl #2] @ 02014c58
    b .L_0200e030 @ 02014c5c
@ z80_dispatch_02014c60 at 0x02014c60
    mov r1, r0 @ 02014c60
    cmp r0, #0x2000 @ 02014c64
    .word 0xabbfb81b @ 02014c68 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014c6c
    mov lr, r1 @ 02014c70
    orr r1, r0, #0x10 @ 02014c74
    lsl r6, r1, #0x18 @ 02014c78
    mov r0, lr @ 02014c7c
    cmp r0, #0x2000 @ 02014c80
    .word 0xabbfb821 @ 02014c84 blge #0x1002d10
    strb r1, [r3, r0] @ 02014c88
    ldrb r0, [fp], #1 @ 02014c8c
    subs r5, r5, #0x170000 @ 02014c90
    ldrgt pc, [r2, r0, lsl #2] @ 02014c94
    b .L_0200e030 @ 02014c98
@ z80_dispatch_02014c9c at 0x02014c9c
    mov r1, r0 @ 02014c9c
    cmp r0, #0x2000 @ 02014ca0
    .word 0xabbfb80c @ 02014ca4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014ca8
    mov lr, r1 @ 02014cac
    orr r1, r0, #0x10 @ 02014cb0
    lsl r7, r1, #0x18 @ 02014cb4
    mov r0, lr @ 02014cb8
    cmp r0, #0x2000 @ 02014cbc
    .word 0xabbfb812 @ 02014cc0 blge #0x1002d10
    strb r1, [r3, r0] @ 02014cc4
    ldrb r0, [fp], #1 @ 02014cc8
    subs r5, r5, #0x170000 @ 02014ccc
    ldrgt pc, [r2, r0, lsl #2] @ 02014cd0
    b .L_0200e030 @ 02014cd4
@ z80_dispatch_02014cd8 at 0x02014cd8
    mov r1, r0 @ 02014cd8
    cmp r0, #0x2000 @ 02014cdc
    .word 0xabbfb7fd @ 02014ce0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014ce4
    mov lr, r1 @ 02014ce8
    orr r1, r0, #0x10 @ 02014cec
    lsl r8, r1, #0x18 @ 02014cf0
    mov r0, lr @ 02014cf4
    cmp r0, #0x2000 @ 02014cf8
    .word 0xabbfb803 @ 02014cfc blge #0x1002d10
    strb r1, [r3, r0] @ 02014d00
    ldrb r0, [fp], #1 @ 02014d04
    subs r5, r5, #0x170000 @ 02014d08
    ldrgt pc, [r2, r0, lsl #2] @ 02014d0c
    b .L_0200e030 @ 02014d10
@ z80_dispatch_02014d14 at 0x02014d14
    mov r1, r0 @ 02014d14
    cmp r0, #0x2000 @ 02014d18
    .word 0xabbfb7ee @ 02014d1c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014d20
    mov lr, r1 @ 02014d24
    orr r1, r0, #0x10 @ 02014d28
    lsl sb, r1, #0x18 @ 02014d2c
    mov r0, lr @ 02014d30
    cmp r0, #0x2000 @ 02014d34
    .word 0xabbfb7f4 @ 02014d38 blge #0x1002d10
    strb r1, [r3, r0] @ 02014d3c
    ldrb r0, [fp], #1 @ 02014d40
    subs r5, r5, #0x170000 @ 02014d44
    ldrgt pc, [r2, r0, lsl #2] @ 02014d48
    b .L_0200e030 @ 02014d4c
@ z80_dispatch_02014d50 at 0x02014d50
    mov r1, r0 @ 02014d50
    cmp r0, #0x2000 @ 02014d54
    .word 0xabbfb7df @ 02014d58 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014d5c
    mov lr, r1 @ 02014d60
    and sl, sl, #0xff0000 @ 02014d64
    orr r1, r0, #0x10 @ 02014d68
    orr sl, sl, r1, lsl #24 @ 02014d6c
    mov r0, lr @ 02014d70
    cmp r0, #0x2000 @ 02014d74
    .word 0xabbfb7e4 @ 02014d78 blge #0x1002d10
    strb r1, [r3, r0] @ 02014d7c
    ldrb r0, [fp], #1 @ 02014d80
    subs r5, r5, #0x170000 @ 02014d84
    ldrgt pc, [r2, r0, lsl #2] @ 02014d88
    b .L_0200e030 @ 02014d8c
@ z80_dispatch_02014d90 at 0x02014d90
    mov r1, r0 @ 02014d90
    cmp r0, #0x2000 @ 02014d94
    .word 0xabbfb7cf @ 02014d98 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014d9c
    mov lr, r1 @ 02014da0
    and sl, sl, #0xff000000 @ 02014da4
    orr r1, r0, #0x10 @ 02014da8
    orr sl, sl, r1, lsl #16 @ 02014dac
    mov r0, lr @ 02014db0
    cmp r0, #0x2000 @ 02014db4
    .word 0xabbfb7d4 @ 02014db8 blge #0x1002d10
    strb r1, [r3, r0] @ 02014dbc
    ldrb r0, [fp], #1 @ 02014dc0
    subs r5, r5, #0x170000 @ 02014dc4
    ldrgt pc, [r2, r0, lsl #2] @ 02014dc8
    b .L_0200e030 @ 02014dcc
@ z80_dispatch_02014dd0 at 0x02014dd0
    mov r1, r0 @ 02014dd0
    cmp r0, #0x2000 @ 02014dd4
    .word 0xabbfb7bf @ 02014dd8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014ddc
    mov lr, r1 @ 02014de0
    orr r1, r0, #0x10 @ 02014de4
    mov r0, lr @ 02014de8
    cmp r0, #0x2000 @ 02014dec
    .word 0xabbfb7c6 @ 02014df0 blge #0x1002d10
    strb r1, [r3, r0] @ 02014df4
    ldrb r0, [fp], #1 @ 02014df8
    subs r5, r5, #0x170000 @ 02014dfc
    ldrgt pc, [r2, r0, lsl #2] @ 02014e00
    b .L_0200e030 @ 02014e04
@ z80_dispatch_02014e08 at 0x02014e08
    mov r1, r0 @ 02014e08
    cmp r0, #0x2000 @ 02014e0c
    .word 0xabbfb7b1 @ 02014e10 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014e14
    mov lr, r1 @ 02014e18
    orr r1, r0, #0x10 @ 02014e1c
    lsl r4, r1, #0x18 @ 02014e20
    mov r0, lr @ 02014e24
    cmp r0, #0x2000 @ 02014e28
    .word 0xabbfb7b7 @ 02014e2c blge #0x1002d10
    strb r1, [r3, r0] @ 02014e30
    ldrb r0, [fp], #1 @ 02014e34
    subs r5, r5, #0x170000 @ 02014e38
    ldrgt pc, [r2, r0, lsl #2] @ 02014e3c
    b .L_0200e030 @ 02014e40
@ z80_dispatch_02014e44 at 0x02014e44
    mov r1, r0 @ 02014e44
    cmp r0, #0x2000 @ 02014e48
    .word 0xabbfb7a2 @ 02014e4c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014e50
    mov lr, r1 @ 02014e54
    orr r1, r0, #0x20 @ 02014e58
    lsl r6, r1, #0x18 @ 02014e5c
    mov r0, lr @ 02014e60
    cmp r0, #0x2000 @ 02014e64
    .word 0xabbfb7a8 @ 02014e68 blge #0x1002d10
    strb r1, [r3, r0] @ 02014e6c
    ldrb r0, [fp], #1 @ 02014e70
    subs r5, r5, #0x170000 @ 02014e74
    ldrgt pc, [r2, r0, lsl #2] @ 02014e78
    b .L_0200e030 @ 02014e7c
@ z80_dispatch_02014e80 at 0x02014e80
    mov r1, r0 @ 02014e80
    cmp r0, #0x2000 @ 02014e84
    .word 0xabbfb793 @ 02014e88 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014e8c
    mov lr, r1 @ 02014e90
    orr r1, r0, #0x20 @ 02014e94
    lsl r7, r1, #0x18 @ 02014e98
    mov r0, lr @ 02014e9c
    cmp r0, #0x2000 @ 02014ea0
    .word 0xabbfb799 @ 02014ea4 blge #0x1002d10
    strb r1, [r3, r0] @ 02014ea8
    ldrb r0, [fp], #1 @ 02014eac
    subs r5, r5, #0x170000 @ 02014eb0
    ldrgt pc, [r2, r0, lsl #2] @ 02014eb4
    b .L_0200e030 @ 02014eb8
@ z80_dispatch_02014ebc at 0x02014ebc
    mov r1, r0 @ 02014ebc
    cmp r0, #0x2000 @ 02014ec0
    .word 0xabbfb784 @ 02014ec4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014ec8
    mov lr, r1 @ 02014ecc
    orr r1, r0, #0x20 @ 02014ed0
    lsl r8, r1, #0x18 @ 02014ed4
    mov r0, lr @ 02014ed8
    cmp r0, #0x2000 @ 02014edc
    .word 0xabbfb78a @ 02014ee0 blge #0x1002d10
    strb r1, [r3, r0] @ 02014ee4
    ldrb r0, [fp], #1 @ 02014ee8
    subs r5, r5, #0x170000 @ 02014eec
    ldrgt pc, [r2, r0, lsl #2] @ 02014ef0
    b .L_0200e030 @ 02014ef4
@ z80_dispatch_02014ef8 at 0x02014ef8
    mov r1, r0 @ 02014ef8
    cmp r0, #0x2000 @ 02014efc
    .word 0xabbfb775 @ 02014f00 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014f04
    mov lr, r1 @ 02014f08
    orr r1, r0, #0x20 @ 02014f0c
    lsl sb, r1, #0x18 @ 02014f10
    mov r0, lr @ 02014f14
    cmp r0, #0x2000 @ 02014f18
    .word 0xabbfb77b @ 02014f1c blge #0x1002d10
    strb r1, [r3, r0] @ 02014f20
    ldrb r0, [fp], #1 @ 02014f24
    subs r5, r5, #0x170000 @ 02014f28
    ldrgt pc, [r2, r0, lsl #2] @ 02014f2c
    b .L_0200e030 @ 02014f30
@ z80_dispatch_02014f34 at 0x02014f34
    mov r1, r0 @ 02014f34
    cmp r0, #0x2000 @ 02014f38
    .word 0xabbfb766 @ 02014f3c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014f40
    mov lr, r1 @ 02014f44
    and sl, sl, #0xff0000 @ 02014f48
    orr r1, r0, #0x20 @ 02014f4c
    orr sl, sl, r1, lsl #24 @ 02014f50
    mov r0, lr @ 02014f54
    cmp r0, #0x2000 @ 02014f58
    .word 0xabbfb76b @ 02014f5c blge #0x1002d10
    strb r1, [r3, r0] @ 02014f60
    ldrb r0, [fp], #1 @ 02014f64
    subs r5, r5, #0x170000 @ 02014f68
    ldrgt pc, [r2, r0, lsl #2] @ 02014f6c
    b .L_0200e030 @ 02014f70
@ z80_dispatch_02014f74 at 0x02014f74
    mov r1, r0 @ 02014f74
    cmp r0, #0x2000 @ 02014f78
    .word 0xabbfb756 @ 02014f7c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014f80
    mov lr, r1 @ 02014f84
    and sl, sl, #0xff000000 @ 02014f88
    orr r1, r0, #0x20 @ 02014f8c
    orr sl, sl, r1, lsl #16 @ 02014f90
    mov r0, lr @ 02014f94
    cmp r0, #0x2000 @ 02014f98
    .word 0xabbfb75b @ 02014f9c blge #0x1002d10
    strb r1, [r3, r0] @ 02014fa0
    ldrb r0, [fp], #1 @ 02014fa4
    subs r5, r5, #0x170000 @ 02014fa8
    ldrgt pc, [r2, r0, lsl #2] @ 02014fac
    b .L_0200e030 @ 02014fb0
@ z80_dispatch_02014fb4 at 0x02014fb4
    mov r1, r0 @ 02014fb4
    cmp r0, #0x2000 @ 02014fb8
    .word 0xabbfb746 @ 02014fbc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014fc0
    mov lr, r1 @ 02014fc4
    orr r1, r0, #0x20 @ 02014fc8
    mov r0, lr @ 02014fcc
    cmp r0, #0x2000 @ 02014fd0
    .word 0xabbfb74d @ 02014fd4 blge #0x1002d10
    strb r1, [r3, r0] @ 02014fd8
    ldrb r0, [fp], #1 @ 02014fdc
    subs r5, r5, #0x170000 @ 02014fe0
    ldrgt pc, [r2, r0, lsl #2] @ 02014fe4
    b .L_0200e030 @ 02014fe8
@ z80_dispatch_02014fec at 0x02014fec
    mov r1, r0 @ 02014fec
    cmp r0, #0x2000 @ 02014ff0
    .word 0xabbfb738 @ 02014ff4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02014ff8
    mov lr, r1 @ 02014ffc
    orr r1, r0, #0x20 @ 02015000
    lsl r4, r1, #0x18 @ 02015004
    mov r0, lr @ 02015008
    cmp r0, #0x2000 @ 0201500c
    .word 0xabbfb73e @ 02015010 blge #0x1002d10
    strb r1, [r3, r0] @ 02015014
    ldrb r0, [fp], #1 @ 02015018
    subs r5, r5, #0x170000 @ 0201501c
    ldrgt pc, [r2, r0, lsl #2] @ 02015020
    b .L_0200e030 @ 02015024
@ z80_dispatch_02015028 at 0x02015028
    mov r1, r0 @ 02015028
    cmp r0, #0x2000 @ 0201502c
    .word 0xabbfb729 @ 02015030 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015034
    mov lr, r1 @ 02015038
    orr r1, r0, #0x40 @ 0201503c
    lsl r6, r1, #0x18 @ 02015040
    mov r0, lr @ 02015044
    cmp r0, #0x2000 @ 02015048
    .word 0xabbfb72f @ 0201504c blge #0x1002d10
    strb r1, [r3, r0] @ 02015050
    ldrb r0, [fp], #1 @ 02015054
    subs r5, r5, #0x170000 @ 02015058
    ldrgt pc, [r2, r0, lsl #2] @ 0201505c
    b .L_0200e030 @ 02015060
@ z80_dispatch_02015064 at 0x02015064
    mov r1, r0 @ 02015064
    cmp r0, #0x2000 @ 02015068
    .word 0xabbfb71a @ 0201506c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015070
    mov lr, r1 @ 02015074
    orr r1, r0, #0x40 @ 02015078
    lsl r7, r1, #0x18 @ 0201507c
    mov r0, lr @ 02015080
    cmp r0, #0x2000 @ 02015084
    .word 0xabbfb720 @ 02015088 blge #0x1002d10
    strb r1, [r3, r0] @ 0201508c
    ldrb r0, [fp], #1 @ 02015090
    subs r5, r5, #0x170000 @ 02015094
    ldrgt pc, [r2, r0, lsl #2] @ 02015098
    b .L_0200e030 @ 0201509c
@ z80_dispatch_020150a0 at 0x020150a0
    mov r1, r0 @ 020150a0
    cmp r0, #0x2000 @ 020150a4
    .word 0xabbfb70b @ 020150a8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020150ac
    mov lr, r1 @ 020150b0
    orr r1, r0, #0x40 @ 020150b4
    lsl r8, r1, #0x18 @ 020150b8
    mov r0, lr @ 020150bc
    cmp r0, #0x2000 @ 020150c0
    .word 0xabbfb711 @ 020150c4 blge #0x1002d10
    strb r1, [r3, r0] @ 020150c8
    ldrb r0, [fp], #1 @ 020150cc
    subs r5, r5, #0x170000 @ 020150d0
    ldrgt pc, [r2, r0, lsl #2] @ 020150d4
    b .L_0200e030 @ 020150d8
@ z80_dispatch_020150dc at 0x020150dc
    mov r1, r0 @ 020150dc
    cmp r0, #0x2000 @ 020150e0
    .word 0xabbfb6fc @ 020150e4 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020150e8
    mov lr, r1 @ 020150ec
    orr r1, r0, #0x40 @ 020150f0
    lsl sb, r1, #0x18 @ 020150f4
    mov r0, lr @ 020150f8
    cmp r0, #0x2000 @ 020150fc
    .word 0xabbfb702 @ 02015100 blge #0x1002d10
    strb r1, [r3, r0] @ 02015104
    ldrb r0, [fp], #1 @ 02015108
    subs r5, r5, #0x170000 @ 0201510c
    ldrgt pc, [r2, r0, lsl #2] @ 02015110
    b .L_0200e030 @ 02015114
@ z80_dispatch_02015118 at 0x02015118
    mov r1, r0 @ 02015118
    cmp r0, #0x2000 @ 0201511c
    .word 0xabbfb6ed @ 02015120 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015124
    mov lr, r1 @ 02015128
    and sl, sl, #0xff0000 @ 0201512c
    orr r1, r0, #0x40 @ 02015130
    orr sl, sl, r1, lsl #24 @ 02015134
    mov r0, lr @ 02015138
    cmp r0, #0x2000 @ 0201513c
    .word 0xabbfb6f2 @ 02015140 blge #0x1002d10
    strb r1, [r3, r0] @ 02015144
    ldrb r0, [fp], #1 @ 02015148
    subs r5, r5, #0x170000 @ 0201514c
    ldrgt pc, [r2, r0, lsl #2] @ 02015150
    b .L_0200e030 @ 02015154
@ z80_dispatch_02015158 at 0x02015158
    mov r1, r0 @ 02015158
    cmp r0, #0x2000 @ 0201515c
    .word 0xabbfb6dd @ 02015160 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015164
    mov lr, r1 @ 02015168
    and sl, sl, #0xff000000 @ 0201516c
    orr r1, r0, #0x40 @ 02015170
    orr sl, sl, r1, lsl #16 @ 02015174
    mov r0, lr @ 02015178
    cmp r0, #0x2000 @ 0201517c
    .word 0xabbfb6e2 @ 02015180 blge #0x1002d10
    strb r1, [r3, r0] @ 02015184
    ldrb r0, [fp], #1 @ 02015188
    subs r5, r5, #0x170000 @ 0201518c
    ldrgt pc, [r2, r0, lsl #2] @ 02015190
    b .L_0200e030 @ 02015194
@ z80_dispatch_02015198 at 0x02015198
    mov r1, r0 @ 02015198
    cmp r0, #0x2000 @ 0201519c
    .word 0xabbfb6cd @ 020151a0 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020151a4
    mov lr, r1 @ 020151a8
    orr r1, r0, #0x40 @ 020151ac
    mov r0, lr @ 020151b0
    cmp r0, #0x2000 @ 020151b4
    .word 0xabbfb6d4 @ 020151b8 blge #0x1002d10
    strb r1, [r3, r0] @ 020151bc
    ldrb r0, [fp], #1 @ 020151c0
    subs r5, r5, #0x170000 @ 020151c4
    ldrgt pc, [r2, r0, lsl #2] @ 020151c8
    b .L_0200e030 @ 020151cc
@ z80_dispatch_020151d0 at 0x020151d0
    mov r1, r0 @ 020151d0
    cmp r0, #0x2000 @ 020151d4
    .word 0xabbfb6bf @ 020151d8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020151dc
    mov lr, r1 @ 020151e0
    orr r1, r0, #0x40 @ 020151e4
    lsl r4, r1, #0x18 @ 020151e8
    mov r0, lr @ 020151ec
    cmp r0, #0x2000 @ 020151f0
    .word 0xabbfb6c5 @ 020151f4 blge #0x1002d10
    strb r1, [r3, r0] @ 020151f8
    ldrb r0, [fp], #1 @ 020151fc
    subs r5, r5, #0x170000 @ 02015200
    ldrgt pc, [r2, r0, lsl #2] @ 02015204
    b .L_0200e030 @ 02015208
@ z80_dispatch_0201520c at 0x0201520c
    mov r1, r0 @ 0201520c
    cmp r0, #0x2000 @ 02015210
    .word 0xabbfb6b0 @ 02015214 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015218
    mov lr, r1 @ 0201521c
    orr r1, r0, #0x80 @ 02015220
    lsl r6, r1, #0x18 @ 02015224
    mov r0, lr @ 02015228
    cmp r0, #0x2000 @ 0201522c
    .word 0xabbfb6b6 @ 02015230 blge #0x1002d10
    strb r1, [r3, r0] @ 02015234
    ldrb r0, [fp], #1 @ 02015238
    subs r5, r5, #0x170000 @ 0201523c
    ldrgt pc, [r2, r0, lsl #2] @ 02015240
    b .L_0200e030 @ 02015244
@ z80_dispatch_02015248 at 0x02015248
    mov r1, r0 @ 02015248
    cmp r0, #0x2000 @ 0201524c
    .word 0xabbfb6a1 @ 02015250 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015254
    mov lr, r1 @ 02015258
    orr r1, r0, #0x80 @ 0201525c
    lsl r7, r1, #0x18 @ 02015260
    mov r0, lr @ 02015264
    cmp r0, #0x2000 @ 02015268
    .word 0xabbfb6a7 @ 0201526c blge #0x1002d10
    strb r1, [r3, r0] @ 02015270
    ldrb r0, [fp], #1 @ 02015274
    subs r5, r5, #0x170000 @ 02015278
    ldrgt pc, [r2, r0, lsl #2] @ 0201527c
    b .L_0200e030 @ 02015280
@ z80_dispatch_02015284 at 0x02015284
    mov r1, r0 @ 02015284
    cmp r0, #0x2000 @ 02015288
    .word 0xabbfb692 @ 0201528c blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015290
    mov lr, r1 @ 02015294
    orr r1, r0, #0x80 @ 02015298
    lsl r8, r1, #0x18 @ 0201529c
    mov r0, lr @ 020152a0
    cmp r0, #0x2000 @ 020152a4
    .word 0xabbfb698 @ 020152a8 blge #0x1002d10
    strb r1, [r3, r0] @ 020152ac
    ldrb r0, [fp], #1 @ 020152b0
    subs r5, r5, #0x170000 @ 020152b4
    ldrgt pc, [r2, r0, lsl #2] @ 020152b8
    b .L_0200e030 @ 020152bc
@ z80_dispatch_020152c0 at 0x020152c0
    mov r1, r0 @ 020152c0
    cmp r0, #0x2000 @ 020152c4
    .word 0xabbfb683 @ 020152c8 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020152cc
    mov lr, r1 @ 020152d0
    orr r1, r0, #0x80 @ 020152d4
    lsl sb, r1, #0x18 @ 020152d8
    mov r0, lr @ 020152dc
    cmp r0, #0x2000 @ 020152e0
    .word 0xabbfb689 @ 020152e4 blge #0x1002d10
    strb r1, [r3, r0] @ 020152e8
    ldrb r0, [fp], #1 @ 020152ec
    subs r5, r5, #0x170000 @ 020152f0
    ldrgt pc, [r2, r0, lsl #2] @ 020152f4
    b .L_0200e030 @ 020152f8
@ z80_dispatch_020152fc at 0x020152fc
    mov r1, r0 @ 020152fc
    cmp r0, #0x2000 @ 02015300
    .word 0xabbfb674 @ 02015304 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015308
    mov lr, r1 @ 0201530c
    and sl, sl, #0xff0000 @ 02015310
    orr r1, r0, #0x80 @ 02015314
    orr sl, sl, r1, lsl #24 @ 02015318
    mov r0, lr @ 0201531c
    cmp r0, #0x2000 @ 02015320
    .word 0xabbfb679 @ 02015324 blge #0x1002d10
    strb r1, [r3, r0] @ 02015328
    ldrb r0, [fp], #1 @ 0201532c
    subs r5, r5, #0x170000 @ 02015330
    ldrgt pc, [r2, r0, lsl #2] @ 02015334
    b .L_0200e030 @ 02015338
@ z80_dispatch_0201533c at 0x0201533c
    mov r1, r0 @ 0201533c
    cmp r0, #0x2000 @ 02015340
    .word 0xabbfb664 @ 02015344 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015348
    mov lr, r1 @ 0201534c
    and sl, sl, #0xff000000 @ 02015350
    orr r1, r0, #0x80 @ 02015354
    orr sl, sl, r1, lsl #16 @ 02015358
    mov r0, lr @ 0201535c
    cmp r0, #0x2000 @ 02015360
    .word 0xabbfb669 @ 02015364 blge #0x1002d10
    strb r1, [r3, r0] @ 02015368
    ldrb r0, [fp], #1 @ 0201536c
    subs r5, r5, #0x170000 @ 02015370
    ldrgt pc, [r2, r0, lsl #2] @ 02015374
    b .L_0200e030 @ 02015378
@ z80_dispatch_0201537c at 0x0201537c
    mov r1, r0 @ 0201537c
    cmp r0, #0x2000 @ 02015380
    .word 0xabbfb654 @ 02015384 blge #0x1002cdc
    ldrb r0, [r3, r0] @ 02015388
    mov lr, r1 @ 0201538c
    orr r1, r0, #0x80 @ 02015390
    mov r0, lr @ 02015394
    cmp r0, #0x2000 @ 02015398
    .word 0xabbfb65b @ 0201539c blge #0x1002d10
    strb r1, [r3, r0] @ 020153a0
    ldrb r0, [fp], #1 @ 020153a4
    subs r5, r5, #0x170000 @ 020153a8
    ldrgt pc, [r2, r0, lsl #2] @ 020153ac
    b .L_0200e030 @ 020153b0
@ z80_dispatch_020153b4 at 0x020153b4
    mov r1, r0 @ 020153b4
    cmp r0, #0x2000 @ 020153b8
    .word 0xabbfb646 @ 020153bc blge #0x1002cdc
    ldrb r0, [r3, r0] @ 020153c0
    mov lr, r1 @ 020153c4
    orr r1, r0, #0x80 @ 020153c8
    lsl r4, r1, #0x18 @ 020153cc
    mov r0, lr @ 020153d0
    cmp r0, #0x2000 @ 020153d4
    .word 0xabbfb64c @ 020153d8 blge #0x1002d10
    strb r1, [r3, r0] @ 020153dc
    ldrb r0, [fp], #1 @ 020153e0
    subs r5, r5, #0x170000 @ 020153e4
    ldrgt pc, [r2, r0, lsl #2] @ 020153e8
    b .L_0200e030 @ 020153ec
z80_dispatch_table:
    .word 0x01002d6c, 0x01002d6c, 0x01002d6c, 0x01002d6c, 0x01002d7c, 0x01002d7c, 0x01002d8c, 0x01002d98
    .word 0x01002dc0, 0x01002dc0, 0x01002dc0, 0x01002dc0, 0x01002dc0, 0x01002dc0, 0x01002dc0, 0x01002dc0
    .word 0x01002e00, 0x01002e00, 0x01002e00, 0x01002e00, 0x01002e14, 0x01002e14, 0x01002e28, 0x01002e38
    .word 0x01002e60, 0x01002e60, 0x01002e60, 0x01002e60, 0x01002e60, 0x01002e60, 0x01002e60, 0x01002e60
    .word 0x01002ea8, 0x01002ea8, 0x01002ea8, 0x01002ea8, 0x01002ec4, 0x01002ec4, 0x01002ed8, 0x01002ee8
    .word 0x01002f14, 0x01002f14, 0x01002f14, 0x01002f14, 0x01002f14, 0x01002f14, 0x01002f14, 0x01002f14
    .word 0x01000020, 0x01000030, 0x01000060, 0x01000090, 0x010000b0, 0x010000e0, 0x01000110, 0x01000130
    .word 0x01000150, 0x01000180, 0x010001a0, 0x010001d0, 0x010001f0, 0x01000220, 0x01000250, 0x01000270
    .word 0x010002a0, 0x010002e0, 0x01000310, 0x01000340, 0x01000360, 0x01000390, 0x010003c0, 0x010003e0
    .word 0x01000410, 0x01000430, 0x01000450, 0x01000480, 0x010004a0, 0x010004d0, 0x01000500, 0x01000520
    .word 0x01000550, 0x01000580, 0x010005a0, 0x010005d0, 0x010005f0, 0x01000620, 0x01000650, 0x01000670
    .word 0x010006a0, 0x010006d0, 0x010006f0, 0x01000730, 0x01000750, 0x01000780, 0x010007c0, 0x010007e0
    .word 0x01000800, 0x01000830, 0x01000850, 0x01000880, 0x010008a0, 0x010008f0, 0x01000940, 0x01000960
    .word 0x01000980, 0x010009b0, 0x010009d0, 0x01000a00, 0x01000a20, 0x01000a50, 0x01000a80, 0x01000aa0
    .word 0x01000ad0, 0x01000ae0, 0x01000b00, 0x01000b20, 0x01000b40, 0x01000b60, 0x01000b80, 0x01000ba0
    .word 0x01000bc0, 0x01000be0, 0x01000bf0, 0x01000c10, 0x01000c30, 0x01000c50, 0x01000c70, 0x01000c90
    .word 0x01000cb0, 0x01000cd0, 0x01000cf0, 0x01000d00, 0x01000d20, 0x01000d40, 0x01000d60, 0x01000d80
    .word 0x01000da0, 0x01000dc0, 0x01000de0, 0x01000e00, 0x01000e10, 0x01000e30, 0x01000e50, 0x01000e70
    .word 0x01000e90, 0x01000eb0, 0x01000ed0, 0x01000ef0, 0x01000f10, 0x01000f20, 0x01000f40, 0x01000f70
    .word 0x01000f90, 0x01000fb0, 0x01000fd0, 0x01000ff0, 0x01001010, 0x01001030, 0x01001040, 0x01001070
    .word 0x01001090, 0x010010b0, 0x010010d0, 0x010010f0, 0x01001110, 0x01001130, 0x01001160, 0x01001180
    .word 0x010011a0, 0x010011c0, 0x010011e0, 0x01001200, 0x01001220, 0x01001240, 0x01001260, 0x01001280
    .word 0x01001290, 0x010012c0, 0x010012f0, 0x01001320, 0x01001350, 0x01001380, 0x010013b0, 0x010013f0
    .word 0x01001420, 0x01001460, 0x010014a0, 0x010014e0, 0x01001520, 0x01001560, 0x010015a0, 0x010015f0
    .word 0x01001630, 0x01001660, 0x01001690, 0x010016c0, 0x010016f0, 0x01001720, 0x01001750, 0x01001790
    .word 0x010017c0, 0x01001800, 0x01001840, 0x01001880, 0x010018c0, 0x01001900, 0x01001940, 0x01001990
    .word 0x010019d0, 0x01001a00, 0x01001a30, 0x01001a60, 0x01001a90, 0x01001ac0, 0x01001af0, 0x01001b20
    .word 0x01001b50, 0x01001b80, 0x01001bb0, 0x01001be0, 0x01001c10, 0x01001c40, 0x01001c70, 0x01001ca0
    .word 0x01001cd0, 0x01001d00, 0x01001d30, 0x01001d60, 0x01001d90, 0x01001dc0, 0x01001df0, 0x01001e20
    .word 0x01001e50, 0x01001e80, 0x01001eb0, 0x01001ee0, 0x01001f10, 0x01001f40, 0x01001f70, 0x01001fb0
    .word 0x01001fe0, 0x01002010, 0x01002040, 0x01002070, 0x01002090, 0x010020d0, 0x01002100, 0x01002130
    .word 0x01002160, 0x01002190, 0x010021b0, 0x010021e0, 0x010021f0, 0x01002230, 0x01002270, 0x010022b0
    .word 0x010022e0, 0x01002310, 0x01002340, 0x01002370, 0x010023a0, 0x010023e0, 0x01002410, 0x01002450
    .word 0x01002480, 0x010024b0, 0x01002500, 0x01002530, 0x01002550, 0x01002590, 0x010025b0, 0x01002600
    .word 0x01002630, 0x01002660, 0x01002680, 0x010026b0, 0x010026e0, 0x01002720, 0x01002740, 0x01002770
    .word 0x010027a0, 0x010027d0, 0x010027f0, 0x01002820, 0x01002850, 0x01002890, 0x010028a0, 0x010028d0
    .word 0x01002900, 0x01002930, 0x01002960, 0x01002990, 0x010029b0, 0x010029f0, 0x01002a20, 0x01002a50
    .word 0x01002a80, 0x01002ab0, 0x01002ad0, 0x01002b00, 0x01002b30, 0x01002b70, 0x01002b90, 0x01002bd0
    .word 0x0200e160, 0x0200e18c, 0x0200e1b8, 0x0200e1e4, 0x0200e210, 0x0200e248, 0x0200e280, 0x0200e2cc
    .word 0x0200e2f8, 0x0200e328, 0x0200e358, 0x0200e388, 0x0200e3b8, 0x0200e3f4, 0x0200e430, 0x0200e478
    .word 0x0200e4a8, 0x0200e4d8, 0x0200e508, 0x0200e538, 0x0200e568, 0x0200e5a4, 0x0200e5e0, 0x0200e630
    .word 0x0200e660, 0x0200e694, 0x0200e6c8, 0x0200e6fc, 0x0200e730, 0x0200e770, 0x0200e7b0, 0x0200e7fc
    .word 0x0200e830, 0x0200e858, 0x0200e880, 0x0200e8a8, 0x0200e8d0, 0x0200e904, 0x0200e938, 0x0200e980
    .word 0x0200e9a8, 0x0200e9d4, 0x0200ea00, 0x0200ea2c, 0x0200ea58, 0x0200ea90, 0x0200eac8, 0x0200eb14
    .word 0x0200eb40, 0x0200eb6c, 0x0200eb98, 0x0200ebc4, 0x0200ebf0, 0x0200ec28, 0x0200ec60, 0x0200ecac
    .word 0x0200ecd8, 0x0200ed04, 0x0200ed30, 0x0200ed5c, 0x0200ed88, 0x0200edc0, 0x0200edf8, 0x0200ee3c
    .word 0x0200ee6c, 0x0200ee8c, 0x0200eeac, 0x0200eecc, 0x0200eeec, 0x0200ef10, 0x01002c30, 0x01002c60
    .word 0x0200ef40, 0x0200ef60, 0x0200ef80, 0x0200efa0, 0x0200efc0, 0x0200efe4, 0x01002c80, 0x01002cb0
    .word 0x0200f010, 0x0200f030, 0x0200f050, 0x0200f070, 0x0200f090, 0x0200f0b4, 0x0200f0d8, 0x0200f108
    .word 0x0200f128, 0x0200f148, 0x0200f168, 0x0200f188, 0x0200f1a8, 0x0200f1cc, 0x0200f1f0, 0x0200f220
    .word 0x0200f240, 0x0200f260, 0x0200f280, 0x0200f2a0, 0x0200f2c0, 0x0200f2e4, 0x0200f308, 0x0200f338
    .word 0x0200f358, 0x0200f378, 0x0200f398, 0x0200f3b8, 0x0200f3d8, 0x0200f3fc, 0x0200f420, 0x0200f450
    .word 0x0200f470, 0x0200f490, 0x0200f4b0, 0x0200f4d0, 0x0200f4f0, 0x0200f514, 0x0200f538, 0x0200f568
    .word 0x0200f588, 0x0200f5a8, 0x0200f5c8, 0x0200f5e8, 0x0200f608, 0x0200f62c, 0x0200f650, 0x0200f680
    .word 0x0200f6a0, 0x0200f6b4, 0x0200f6c8, 0x0200f6dc, 0x0200f6f0, 0x0200f704, 0x0200f718, 0x0200f748
    .word 0x0200f75c, 0x0200f770, 0x0200f784, 0x0200f798, 0x0200f7ac, 0x0200f7c0, 0x0200f7d4, 0x0200f804
    .word 0x0200f818, 0x0200f82c, 0x0200f840, 0x0200f854, 0x0200f868, 0x0200f87c, 0x0200f890, 0x0200f8c0
    .word 0x0200f8d4, 0x0200f8e8, 0x0200f8fc, 0x0200f910, 0x0200f924, 0x0200f938, 0x0200f94c, 0x0200f97c
    .word 0x0200f990, 0x0200f9a4, 0x0200f9b8, 0x0200f9cc, 0x0200f9e0, 0x0200f9f4, 0x0200fa08, 0x0200fa38
    .word 0x0200fa4c, 0x0200fa60, 0x0200fa74, 0x0200fa88, 0x0200fa9c, 0x0200fab0, 0x0200fac4, 0x0200faf4
    .word 0x0200fb08, 0x0200fb1c, 0x0200fb30, 0x0200fb44, 0x0200fb58, 0x0200fb6c, 0x0200fb80, 0x0200fbb0
    .word 0x0200fbc4, 0x0200fbd8, 0x0200fbec, 0x0200fc00, 0x0200fc14, 0x0200fc28, 0x0200fc3c, 0x0200fc6c
    .word 0x0200fc80, 0x0200fc94, 0x0200fca8, 0x0200fcbc, 0x0200fcd0, 0x0200fce4, 0x0200fcf8, 0x0200fd28
    .word 0x0200fd3c, 0x0200fd50, 0x0200fd64, 0x0200fd78, 0x0200fd8c, 0x0200fda0, 0x0200fdb4, 0x0200fde4
    .word 0x0200fdf8, 0x0200fe0c, 0x0200fe20, 0x0200fe34, 0x0200fe48, 0x0200fe5c, 0x0200fe70, 0x0200fea0
    .word 0x0200feb4, 0x0200fec8, 0x0200fedc, 0x0200fef0, 0x0200ff04, 0x0200ff18, 0x0200ff2c, 0x0200ff5c
    .word 0x0200ff70, 0x0200ff84, 0x0200ff98, 0x0200ffac, 0x0200ffc0, 0x0200ffd4, 0x0200ffe8, 0x02010018
    .word 0x0201002c, 0x02010040, 0x02010054, 0x02010068, 0x0201007c, 0x02010090, 0x020100a4, 0x020100d4
    .word 0x020100e8, 0x020100fc, 0x02010110, 0x02010124, 0x02010138, 0x0201014c, 0x02010160, 0x02010190
    .word 0x020101a4, 0x020101b8, 0x020101cc, 0x020101e0, 0x020101f4, 0x02010208, 0x0201021c, 0x0201024c
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010260, 0x02010284, 0x0201029c, 0x020102dc, 0x02010310, 0x02010344, 0x02010370, 0x0201038c
    .word 0x020103a0, 0x020103c4, 0x020103dc, 0x02010418, 0x02010310, 0x02010458, 0x02010370, 0x02010478
    .word 0x0201048c, 0x020104b0, 0x020104c8, 0x02010508, 0x02010310, 0x02010344, 0x0201053c, 0x0201055c
    .word 0x0201058c, 0x020105b0, 0x020105c8, 0x02010604, 0x02010310, 0x02010344, 0x02010644, 0x02010664
    .word 0x02010694, 0x020106c0, 0x020106dc, 0x0201071c, 0x02010310, 0x02010344, 0x02010370, 0x0201074c
    .word 0x020107a8, 0x020107d4, 0x020107f0, 0x0201082c, 0x02010310, 0x02010344, 0x02010370, 0x02010864
    .word 0x020108c0, 0x020108e4, 0x02010900, 0x02010944, 0x02010310, 0x02010344, 0x0201053c, 0x02010974
    .word 0x02010984, 0x020109a8, 0x020109c0, 0x02010a00, 0x02010310, 0x02010344, 0x02010644, 0x02010974
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010a38, 0x02010a90, 0x02010adc, 0x02010b1c, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010b58, 0x02010bb0, 0x02010bf8, 0x02010c38, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010c74, 0x02010cd4, 0x02010d30, 0x02010d78, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010dbc, 0x02010e1c, 0x02010e74, 0x02010ebc, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00, 0x02010f00
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02010f10, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02010f34, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02010f58, 0x02010f7c, 0x02010fac, 0x02010fc4, 0x02010ff8, 0x02011030, 0x02011d28
    .word 0x02011d28, 0x02011050, 0x02011074, 0x020110b8, 0x020110d0, 0x02011104, 0x0201113c, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x0201115c, 0x020111b8, 0x02011218, 0x02011d28
    .word 0x02011d28, 0x02011244, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x0201126c, 0x02011280, 0x02011294, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x020112c0, 0x020112d4, 0x020112e8, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011314, 0x02011328, 0x0201133c, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011368, 0x0201137c, 0x02011390, 0x02011d28
    .word 0x020113bc, 0x020113d8, 0x020113f4, 0x02011410, 0x0201142c, 0x0201143c, 0x02011458, 0x02011488
    .word 0x020114a4, 0x020114c0, 0x020114dc, 0x020114f8, 0x02011514, 0x02011530, 0x02011540, 0x02011570
    .word 0x0201158c, 0x020115b8, 0x020115e4, 0x02011610, 0x0201163c, 0x02011668, 0x02011d28, 0x02011698
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x020116c4, 0x020116d8, 0x020116ec, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011718, 0x02011744, 0x02011770, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x020117b0, 0x020117ec, 0x02011828, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x0201187c, 0x020118ac, 0x020118dc, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011920, 0x02011960, 0x020119a0, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x020119f8, 0x02011a20, 0x02011a48, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011a84, 0x02011aac, 0x02011ad4, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011b10, 0x02011b38, 0x02011b60, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011ba0, 0x02011bd0, 0x02011c00, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011c48, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d04, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02011c60, 0x02011d28, 0x02011c84, 0x02011d28, 0x02011cbc, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02011cdc, 0x02011d28, 0x02011d18, 0x02011d28, 0x02011d18, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d28
    .word 0x02011d28, 0x02011cf0, 0x02011d28, 0x02011d28, 0x02011d28, 0x02011d04, 0x02011d28, 0x02011d28
    .word 0x02011d3c, 0x02011d94, 0x02011dec, 0x02011e44, 0x02011e9c, 0x02011efc, 0x02011f5c, 0x02011fb4
    .word 0x0201200c, 0x02012068, 0x020120c4, 0x02012120, 0x0201217c, 0x020121e0, 0x02012244, 0x02012298
    .word 0x020122f4, 0x02012350, 0x020123ac, 0x02012408, 0x02012468, 0x020124cc, 0x02012530, 0x02012590
    .word 0x020125ec, 0x0201264c, 0x020126ac, 0x0201270c, 0x0201276c, 0x020127d4, 0x0201283c, 0x02012894
    .word 0x020128f4, 0x02012948, 0x0201299c, 0x020129f0, 0x02012a44, 0x02012aa0, 0x02012afc, 0x02012b50
    .word 0x02012ba4, 0x02012bfc, 0x02012c54, 0x02012cac, 0x02012d04, 0x02012d64, 0x02012dc4, 0x02012e1c
    .word 0x02012e74, 0x02012ecc, 0x02012f24, 0x02012f7c, 0x02012fd4, 0x02013034, 0x02013094, 0x020130ec
    .word 0x02013144, 0x0201319c, 0x020131f4, 0x0201324c, 0x020132a4, 0x02013304, 0x02013364, 0x020133b4
    .word 0x02013410, 0x02013410, 0x02013410, 0x02013410, 0x02013410, 0x02013410, 0x02013410, 0x02013410
    .word 0x02013444, 0x02013444, 0x02013444, 0x02013444, 0x02013444, 0x02013444, 0x02013444, 0x02013444
    .word 0x02013478, 0x02013478, 0x02013478, 0x02013478, 0x02013478, 0x02013478, 0x02013478, 0x02013478
    .word 0x020134ac, 0x020134ac, 0x020134ac, 0x020134ac, 0x020134ac, 0x020134ac, 0x020134ac, 0x020134ac
    .word 0x020134e0, 0x020134e0, 0x020134e0, 0x020134e0, 0x020134e0, 0x020134e0, 0x020134e0, 0x020134e0
    .word 0x02013514, 0x02013514, 0x02013514, 0x02013514, 0x02013514, 0x02013514, 0x02013514, 0x02013514
    .word 0x02013548, 0x02013548, 0x02013548, 0x02013548, 0x02013548, 0x02013548, 0x02013548, 0x02013548
    .word 0x0201357c, 0x0201357c, 0x0201357c, 0x0201357c, 0x0201357c, 0x0201357c, 0x0201357c, 0x0201357c
    .word 0x020135b0, 0x020135ec, 0x02013628, 0x02013664, 0x020136a0, 0x020136e0, 0x02013720, 0x02013758
    .word 0x02013794, 0x020137d0, 0x0201380c, 0x02013848, 0x02013884, 0x020138c4, 0x02013904, 0x0201393c
    .word 0x02013978, 0x020139b4, 0x020139f0, 0x02013a2c, 0x02013a68, 0x02013aa8, 0x02013ae8, 0x02013b20
    .word 0x02013b5c, 0x02013b98, 0x02013bd4, 0x02013c10, 0x02013c4c, 0x02013c8c, 0x02013ccc, 0x02013d04
    .word 0x02013d40, 0x02013d7c, 0x02013db8, 0x02013df4, 0x02013e30, 0x02013e70, 0x02013eb0, 0x02013ee8
    .word 0x02013f24, 0x02013f60, 0x02013f9c, 0x02013fd8, 0x02014014, 0x02014054, 0x02014094, 0x020140cc
    .word 0x02014108, 0x02014144, 0x02014180, 0x020141bc, 0x020141f8, 0x02014238, 0x02014278, 0x020142b0
    .word 0x020142ec, 0x02014328, 0x02014364, 0x020143a0, 0x020143dc, 0x0201441c, 0x0201445c, 0x02014494
    .word 0x020144d0, 0x0201450c, 0x02014548, 0x02014584, 0x020145c0, 0x02014600, 0x02014640, 0x02014678
    .word 0x020146b4, 0x020146f0, 0x0201472c, 0x02014768, 0x020147a4, 0x020147e4, 0x02014824, 0x0201485c
    .word 0x02014898, 0x020148d4, 0x02014910, 0x0201494c, 0x02014988, 0x020149c8, 0x02014a08, 0x02014a40
    .word 0x02014a7c, 0x02014ab8, 0x02014af4, 0x02014b30, 0x02014b6c, 0x02014bac, 0x02014bec, 0x02014c24
    .word 0x02014c60, 0x02014c9c, 0x02014cd8, 0x02014d14, 0x02014d50, 0x02014d90, 0x02014dd0, 0x02014e08
    .word 0x02014e44, 0x02014e80, 0x02014ebc, 0x02014ef8, 0x02014f34, 0x02014f74, 0x02014fb4, 0x02014fec
    .word 0x02015028, 0x02015064, 0x020150a0, 0x020150dc, 0x02015118, 0x02015158, 0x02015198, 0x020151d0
    .word 0x0201520c, 0x02015248, 0x02015284, 0x020152c0, 0x020152fc, 0x0201533c, 0x0201537c, 0x020153b4
    .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff @ 020168b0
    .zero 16
    .byte 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00 @ 020168d0
    .byte 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff @ 020168e0
    .byte 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00 @ 020168f0
    .byte 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff @ 02016900
    .byte 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 @ 02016910
    .byte 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff @ 02016920
    .byte 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00 @ 02016930
    .byte 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff @ 02016940
    .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 02016950
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff @ 02016960
    .byte 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff @ 02016970
    .byte 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00 @ 02016980
    .byte 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00 @ 02016990
    .byte 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff @ 020169a0
    .byte 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06 @ 020169b0
    .byte 0x07, 0x08, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x00, 0x01, 0x02, 0x03, 0x04 @ 020169c0
    .byte 0x05, 0x06, 0x07, 0x08, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x00, 0x01, 0x02 @ 020169d0
    .byte 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x00 @ 020169e0
    .byte 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f @ 020169f0
    .byte 0x10, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e @ 02016a00
    .byte 0x0f, 0x10, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d @ 02016a10
    .byte 0x0e, 0x0f, 0x10, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c @ 02016a20
    .byte 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f @ 02016a30
    .byte 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f @ 02016a40
    .byte 0x20, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e @ 02016a50
    .byte 0x0f, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e @ 02016a60
