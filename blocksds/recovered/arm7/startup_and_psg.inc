.L_037f80d0:
@ FUN_037f80d0 at 0x037f80d0
    mov ip, sp @ 037f80d0
    push {r3, r4, r5, r6, r7, r8, sb, sl, fp, ip, lr, pc} @ 037f80d4
    sub fp, ip, #4 @ 037f80d8
    sub sp, fp, #0x28 @ 037f80dc
    ldm sp, {r4, r5, r6, r7, r8, sb, sl, fp, sp, lr} @ 037f80e0
    bx lr @ 037f80e4
    .zero 8
.global arm7_call_via_r3
.type arm7_call_via_r3, %function
arm7_call_via_r3:
    ldr ip, [pc] @ 037f80f0
    bx ip @ 037f80f4
    .byte 0x41, 0x1b, 0x80, 0x03 @ 037f80f8
.L_037f80fc:
@ thunk_FUN_03801200 at 0x037f80fc
    ldr ip, [pc] @ 037f80fc
    bx ip @ 037f8100
    .byte 0x01, 0x12, 0x80, 0x03 @ 037f8104
.L_037f8108:
@ thunk_FUN_038015d0 at 0x037f8108
    ldr ip, [pc] @ 037f8108
    bx ip @ 037f810c
    .byte 0xd1, 0x15, 0x80, 0x03 @ 037f8110
.L_037f8114:
@ thunk_FUN_03801564 at 0x037f8114
    ldr ip, [pc] @ 037f8114
    bx ip @ 037f8118
    .byte 0x65, 0x15, 0x80, 0x03 @ 037f811c
.L_037f8120:
@ thunk_FUN_038016d8 at 0x037f8120
    ldr ip, [pc] @ 037f8120
    bx ip @ 037f8124
    .byte 0xd9, 0x16, 0x80, 0x03 @ 037f8128
.L_037f812c:
@ thunk_FUN_0380178c at 0x037f812c
    ldr ip, [pc] @ 037f812c
    bx ip @ 037f8130
    .byte 0x8d, 0x17, 0x80, 0x03 @ 037f8134
.L_037f8138:
@ thunk_FUN_03801360 at 0x037f8138
    ldr ip, [pc] @ 037f8138
    bx ip @ 037f813c
    .byte 0x61, 0x13, 0x80, 0x03 @ 037f8140
.L_037f8144:
@ thunk_FUN_038019ec at 0x037f8144
.thumb
    bx pc @ 037f8144
    .byte 0xc0, 0x46 @ 037f8146
@ thunk_FUN_038019ec at 0x037f8148
.arm
    b .L_038019ec @ 037f8148
@ FUN_037f814c at 0x037f814c
    push {r4, lr} @ 037f814c
    ldr r4, [pc, #0x2c] @ 037f8150
    ldrb r3, [r4] @ 037f8154
    cmp r3, #0 @ 037f8158
    ldr r2, [pc, #0x24] @ 037f815c
    bne .L_037f817c @ 037f8160
    cmp r2, #0 @ 037f8164
    ldr r0, [pc, #0x1c] @ 037f8168
    movne lr, pc @ 037f816c
    bxne r2 @ 037f8170
    mov r3, #1 @ 037f8174
    strb r3, [r4] @ 037f8178
.L_037f817c:
    pop {r4, lr} @ 037f817c
    bx lr @ 037f8180
    .byte 0x94, 0x6d, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x6d, 0x80, 0x03 @ 037f8184
@ FUN_037f8190 at 0x037f8190
    str lr, [sp, #-4]! @ 037f8190
    ldr r3, [pc, #0x40] @ 037f8194
    cmp r3, #0 @ 037f8198
    sub sp, sp, #4 @ 037f819c
    ldr r0, [pc, #0x38] @ 037f81a0
    ldr r1, [pc, #0x38] @ 037f81a4
    movne lr, pc @ 037f81a8
    bxne r3 @ 037f81ac
    ldr r0, [pc, #0x30] @ 037f81b0
    ldr r3, [r0] @ 037f81b4
    cmp r3, #0 @ 037f81b8
    ldr r3, [pc, #0x28] @ 037f81bc
    beq .L_037f81d0 @ 037f81c0
    cmp r3, #0 @ 037f81c4
    movne lr, pc @ 037f81c8
    bxne r3 @ 037f81cc
.L_037f81d0:
    add sp, sp, #4 @ 037f81d0
    .word 0xe49de004 @ 037f81d4 pop {lr}
    bx lr @ 037f81d8
    .byte 0x00, 0x00, 0x00, 0x00, 0x3c, 0x6d, 0x80, 0x03, 0x98, 0x6d, 0x80, 0x03, 0x40, 0x6d, 0x80, 0x03 @ 037f81dc
    .byte 0x00, 0x00, 0x00, 0x00, 0x1e, 0xff, 0x2f, 0xe1 @ 037f81ec
@ arm7_main at 0x037f81f4
    push {r4, r5, lr} @ 037f81f4
    sub sp, sp, #4 @ 037f81f8
    bl .L_037f80fc @ 037f81fc
    mov r1, #0x4000000 @ 037f8200
    add r1, r1, #0x300 @ 037f8204
    ldrh r0, [r1, #4] @ 037f8208
    mov ip, #0x4000000 @ 037f820c
    mvn r3, #0x7f00 @ 037f8210
    mov r2, #0x27c0000 @ 037f8214
    add r2, r2, #0x3f000 @ 037f8218
    add ip, ip, #0x500 @ 037f821c
    orr r0, r0, #1 @ 037f8220
    sub r3, r3, #0x80 @ 037f8224
    mov r5, #0 @ 037f8228
    strh r0, [r1, #4] @ 037f822c
    mov r4, #0x4000000 @ 037f8230
    strh r3, [ip] @ 037f8234
    str r5, [r2, #0x28] @ 037f8238
    bl .L_037f8108 @ 037f823c
    ldrh r3, [r4, #4] @ 037f8240
    and r3, r3, #0x7f @ 037f8244
    orr r3, r3, #0x5000 @ 037f8248
    strh r3, [r4, #4] @ 037f824c
    ldr r1, [pc, #0xbc] @ 037f8250
    mov r0, #4 @ 037f8254
    bl .L_037f8114 @ 037f8258
    mov r0, #4 @ 037f825c
    bl .L_037f8120 @ 037f8260
    bl .L_037fbf5c @ 037f8264
    bl .L_037fc0cc @ 037f8268
    mov r0, #1 @ 037f826c
    bl .L_037fc14c @ 037f8270
    ldr r4, [pc, #0x9c] @ 037f8274
    mov r1, r5 @ 037f8278
    mov r0, #1 @ 037f827c
    bl .L_037f8114 @ 037f8280
    mov r0, #1 @ 037f8284
    bl .L_037f8120 @ 037f8288
    ldr r2, [r4, #0x3c] @ 037f828c
    mov r3, #0x4000000 @ 037f8290
    cmp r2, r5 @ 037f8294
    add r3, r3, #0x100 @ 037f8298
    mov r2, #0x100 @ 037f829c
    strh r2, [r3, #0x80] @ 037f82a0
    bne .L_037f82c8 @ 037f82a4
    mov r5, r4 @ 037f82a8
.L_037f82ac:
    ldr r3, [r4, #0x40] @ 037f82ac
    cmp r3, #0 @ 037f82b0
    blne .L_037fc14c @ 037f82b4
    bl .L_037f812c @ 037f82b8
    ldr r3, [r5, #0x3c] @ 037f82bc
    cmp r3, #0 @ 037f82c0
    beq .L_037f82ac @ 037f82c4
.L_037f82c8:
    ldr r3, [r4, #0x3c] @ 037f82c8
    cmp r3, #0 @ 037f82cc
    bne .L_037f82f4 @ 037f82d0
.L_037f82d4:
    ldr r3, [pc, #0x3c] @ 037f82d4
    ldr r2, [r3, #0x40] @ 037f82d8
    cmp r2, #0 @ 037f82dc
    bne .L_037f8308 @ 037f82e0
.L_037f82e4:
    bl .L_037f812c @ 037f82e4
.L_037f82e8:
    ldr r3, [r4, #0x3c] @ 037f82e8
    cmp r3, #0 @ 037f82ec
    beq .L_037f82d4 @ 037f82f0
.L_037f82f4:
    bl .L_037fbeb8 @ 037f82f4
    ldr r3, [pc, #0x18] @ 037f82f8
    ldr r2, [r3, #0x40] @ 037f82fc
    cmp r2, #0 @ 037f8300
    beq .L_037f82e4 @ 037f8304
.L_037f8308:
    bl .L_037fc14c @ 037f8308
    bl .L_037f812c @ 037f830c
    b .L_037f82e8 @ 037f8310
    .byte 0x1c, 0x83, 0x7f, 0x03, 0xb8, 0xbd, 0x80, 0x03 @ 037f8314
    mov r3, #0x4000000 @ 037f831c
    add r3, r3, #0x100 @ 037f8320
    push {r4, r5, r6, r7, r8, sl, lr} @ 037f8324
    ldrh r2, [r3, #0x36] @ 037f8328
    ldr r7, [pc, #0xe8] @ 037f832c
    lsl r2, r2, #0x10 @ 037f8330
    ldr r3, [r7] @ 037f8334
    lsr r4, r2, #0x10 @ 037f8338
    eor r3, r4, r3 @ 037f833c
    sub sp, sp, #0x14 @ 037f8340
    mov r2, #0 @ 037f8344
    ands r5, r3, #0x40 @ 037f8348
    mov r8, sp @ 037f834c
    ldr r6, [pc, #0xc8] @ 037f8350
    mov r0, sp @ 037f8354
    mov r1, r2 @ 037f8358
    mov sl, r2 @ 037f835c
    beq .L_037f83a8 @ 037f8360
    str r4, [r7] @ 037f8364
    mov r0, r2 @ 037f8368
    orr r4, r4, #0x40 @ 037f836c
    mov lr, r2 @ 037f8370
    mov ip, r2 @ 037f8374
.L_037f8378:
    mov r3, #0x27c0000 @ 037f8378
    add r3, r3, #0x3f000 @ 037f837c
    strh r0, [r3, #4] @ 037f8380
    strh r2, [r3, #6] @ 037f8384
    strh lr, [r3, #8] @ 037f8388
    strh r1, [r3, #0xa] @ 037f838c
    strh ip, [r3, #0xc] @ 037f8390
    strh sl, [r3, #0xe] @ 037f8394
    strh r4, [r3, #0x18] @ 037f8398
    add sp, sp, #0x14 @ 037f839c
    pop {r4, r5, r6, r7, r8, sl, lr} @ 037f83a0
    bx lr @ 037f83a4
.L_037f83a8:
    bl .L_037f8138 @ 037f83a8
    mov r1, sp @ 037f83ac
    mov r2, #0xc @ 037f83b0
    mov r0, r6 @ 037f83b4
    bl .L_038025ac @ 037f83b8
    mov r2, r5 @ 037f83bc
    ldrh r5, [r6] @ 037f83c0
    cmp r5, #0 @ 037f83c4
    mov r1, r2 @ 037f83c8
    mov sl, r2 @ 037f83cc
    mov r0, r2 @ 037f83d0
    mov lr, r2 @ 037f83d4
    mov ip, r2 @ 037f83d8
    beq .L_037f8410 @ 037f83dc
    ldrh r3, [r6, #2] @ 037f83e0
    cmp r3, #0 @ 037f83e4
    lsl r5, r5, #0x10 @ 037f83e8
    lsl r8, r3, #0x10 @ 037f83ec
    beq .L_037f8410 @ 037f83f0
    ldrh sl, [r6, #0xa] @ 037f83f4
    ldrh lr, [r6, #4] @ 037f83f8
    ldrh r1, [r6, #6] @ 037f83fc
    ldrh ip, [r6, #8] @ 037f8400
    lsr r0, r5, #0x10 @ 037f8404
    lsr r2, r8, #0x10 @ 037f8408
    b .L_037f8378 @ 037f840c
.L_037f8410:
    orr r4, r4, #0x40 @ 037f8410
    str r4, [r7] @ 037f8414
    b .L_037f8378 @ 037f8418
    .byte 0x48, 0x6d, 0x80, 0x03, 0x20, 0xbb, 0x80, 0x03, 0x80, 0x00, 0x10, 0xe3, 0x00, 0x10, 0xa0, 0xe1 @ 037f841c
    .byte 0x1c, 0x00, 0x00, 0x0a, 0xc8, 0xc0, 0x9f, 0xe5, 0x40, 0x22, 0xa0, 0xe1, 0x07, 0x20, 0x02, 0xe2 @ 037f842c
    .byte 0x02, 0x01, 0x8c, 0xe0, 0x1c, 0x30, 0x90, 0xe5, 0x0f, 0x10, 0x01, 0xe2, 0x3f, 0x3e, 0x03, 0xe2 @ 037f843c
    .byte 0x01, 0x30, 0x83, 0xe1, 0x1c, 0x30, 0x80, 0xe5, 0x10, 0x20, 0x8c, 0xe5, 0x10, 0x30, 0x9c, 0xe5 @ 037f844c
    .byte 0x06, 0x00, 0x53, 0xe3, 0x03, 0xf1, 0x9f, 0x97, 0x0d, 0x00, 0x00, 0xea, 0xc4, 0x84, 0x7f, 0x03 @ 037f845c
    .byte 0xa0, 0x84, 0x7f, 0x03, 0xc4, 0x84, 0x7f, 0x03, 0xa0, 0x84, 0x7f, 0x03, 0xc4, 0x84, 0x7f, 0x03 @ 037f846c
    .byte 0xa0, 0x84, 0x7f, 0x03, 0x84, 0x84, 0x7f, 0x03 @ 037f847c
    ldr r3, [ip, #0x34] @ 037f8484
    mov r2, #0x10 @ 037f8488
    and r3, r3, #3 @ 037f848c
    lsl r2, r2, r3 @ 037f8490
    mov r3, #0x8000 @ 037f8494
    str r2, [ip, #0x18] @ 037f8498
    str r3, [ip, #0x14] @ 037f849c
    bx lr @ 037f84a0
    .byte 0x54, 0xc0, 0x9f, 0xe5, 0x10, 0x30, 0x9c, 0xe5, 0x01, 0x00, 0x13, 0xe3, 0x09, 0x00, 0x00, 0x0a @ 037f84a4
    .byte 0x03, 0x21, 0x8c, 0xe0, 0x0f, 0x30, 0x01, 0xe2, 0x1c, 0x30, 0x82, 0xe5, 0xe4, 0xff, 0xff, 0xea @ 037f84b4
    add r2, ip, r3, lsl #2 @ 037f84c4
    ldr r3, [r2, #0x1c] @ 037f84c8
    cmp r3, #0 @ 037f84cc
    addeq r3, r3, #1 @ 037f84d0
    streq r3, [r2, #0x1c] @ 037f84d4
    bx lr @ 037f84d8
    .byte 0x04, 0x00, 0x53, 0xe3, 0xf3, 0xff, 0xff, 0xca, 0x03, 0x31, 0x8c, 0xe0, 0x1c, 0x20, 0x93, 0xe5 @ 037f84dc
    .byte 0x3f, 0x10, 0x00, 0xe2, 0x0f, 0x20, 0x02, 0xe2, 0x01, 0x22, 0x82, 0xe1, 0x1c, 0x20, 0x83, 0xe5 @ 037f84ec
    .byte 0xd5, 0xff, 0xff, 0xea, 0xbc, 0x6d, 0x80, 0x03 @ 037f84fc
.L_037f8504:
@ FUN_037f8504 at 0x037f8504
    push {r4, r5, lr} @ 037f8504
    subs r5, r1, #0 @ 037f8508
    mov r4, r0 @ 037f850c
    beq .L_037f85a4 @ 037f8510
    ldr ip, [pc, #0xf4] @ 037f8514
    mov lr, #0 @ 037f8518
.L_037f851c:
    ldrb r1, [lr, r4] @ 037f851c
    tst r1, #0x80 @ 037f8520
    bne .L_037f85e8 @ 037f8524
    ldr r2, [ip, #0x10] @ 037f8528
    tst r2, #1 @ 037f852c
    bne .L_037f85d8 @ 037f8530
    cmp r2, #4 @ 037f8534
    bgt .L_037f85d8 @ 037f8538
    ldr r3, [pc, #0xcc] @ 037f853c
    add r3, r3, r2, lsl #2 @ 037f8540
    ldr r2, [r3, #0x1c] @ 037f8544
    and r1, r1, #0x3f @ 037f8548
    and r2, r2, #0xf @ 037f854c
    orr r2, r2, r1, lsl #4 @ 037f8550
    str r2, [r3, #0x1c] @ 037f8554
.L_037f8558:
    ldr r3, [ip, #0x10] @ 037f8558
    cmp r3, #6 @ 037f855c
    ldrls pc, [pc, r3, lsl #2] @ 037f8560
    b .L_037f8598 @ 037f8564
    .byte 0x84, 0x85, 0x7f, 0x03, 0x98, 0x85, 0x7f, 0x03, 0x84, 0x85, 0x7f, 0x03, 0x98, 0x85, 0x7f, 0x03 @ 037f8568
    .byte 0x84, 0x85, 0x7f, 0x03, 0x98, 0x85, 0x7f, 0x03, 0xac, 0x85, 0x7f, 0x03 @ 037f8578
    add r2, ip, r3, lsl #2 @ 037f8584
    ldr r3, [r2, #0x1c] @ 037f8588
    cmp r3, #0 @ 037f858c
    addeq r3, r3, #1 @ 037f8590
    streq r3, [r2, #0x1c] @ 037f8594
.L_037f8598:
    add lr, lr, #1 @ 037f8598
    cmp r5, lr @ 037f859c
    bne .L_037f851c @ 037f85a0
.L_037f85a4:
    pop {r4, r5, lr} @ 037f85a4
    bx lr @ 037f85a8
    ldr r3, [ip, #0x34] @ 037f85ac
    mov r2, #0x10 @ 037f85b0
    and r3, r3, #3 @ 037f85b4
    lsl r2, r2, r3 @ 037f85b8
    add lr, lr, #1 @ 037f85bc
    mov r1, #0x8000 @ 037f85c0
    cmp r5, lr @ 037f85c4
    str r1, [ip, #0x14] @ 037f85c8
    str r2, [ip, #0x18] @ 037f85cc
    bne .L_037f851c @ 037f85d0
    b .L_037f85a4 @ 037f85d4
.L_037f85d8:
    add r2, ip, r2, lsl #2 @ 037f85d8
    and r3, r1, #0xf @ 037f85dc
    str r3, [r2, #0x1c] @ 037f85e0
    b .L_037f8558 @ 037f85e4
.L_037f85e8:
    lsr r2, r1, #4 @ 037f85e8
    and r2, r2, #7 @ 037f85ec
    add r0, ip, r2, lsl #2 @ 037f85f0
    ldr r3, [r0, #0x1c] @ 037f85f4
    and r1, r1, #0xf @ 037f85f8
    and r3, r3, #0x3f0 @ 037f85fc
    orr r3, r3, r1 @ 037f8600
    str r3, [r0, #0x1c] @ 037f8604
    str r2, [ip, #0x10] @ 037f8608
    b .L_037f8558 @ 037f860c
    .byte 0xbc, 0x6d, 0x80, 0x03, 0x80, 0x00, 0x10, 0xe3, 0x00, 0x10, 0xa0, 0xe1, 0x1c, 0x00, 0x00, 0x0a @ 037f8610
    .byte 0xc8, 0xc0, 0x9f, 0xe5, 0x40, 0x22, 0xa0, 0xe1, 0x07, 0x20, 0x02, 0xe2, 0x02, 0x01, 0x8c, 0xe0 @ 037f8620
    .byte 0x1c, 0x30, 0x90, 0xe5, 0x0f, 0x10, 0x01, 0xe2, 0x3f, 0x3e, 0x03, 0xe2, 0x01, 0x30, 0x83, 0xe1 @ 037f8630
    .byte 0x1c, 0x30, 0x80, 0xe5, 0x10, 0x20, 0x8c, 0xe5, 0x10, 0x30, 0x9c, 0xe5, 0x06, 0x00, 0x53, 0xe3 @ 037f8640
    .byte 0x03, 0xf1, 0x9f, 0x97, 0x0d, 0x00, 0x00, 0xea, 0xb4, 0x86, 0x7f, 0x03, 0x90, 0x86, 0x7f, 0x03 @ 037f8650
    .byte 0xb4, 0x86, 0x7f, 0x03, 0x90, 0x86, 0x7f, 0x03, 0xb4, 0x86, 0x7f, 0x03, 0x90, 0x86, 0x7f, 0x03 @ 037f8660
    .byte 0x74, 0x86, 0x7f, 0x03 @ 037f8670
    ldr r3, [ip, #0x34] @ 037f8674
    mov r2, #0x10 @ 037f8678
    and r3, r3, #3 @ 037f867c
    lsl r2, r2, r3 @ 037f8680
    mov r3, #0x8000 @ 037f8684
    str r2, [ip, #0x18] @ 037f8688
    str r3, [ip, #0x14] @ 037f868c
    bx lr @ 037f8690
    .byte 0x54, 0xc0, 0x9f, 0xe5, 0x10, 0x30, 0x9c, 0xe5, 0x01, 0x00, 0x13, 0xe3, 0x09, 0x00, 0x00, 0x0a @ 037f8694
    .byte 0x03, 0x21, 0x8c, 0xe0, 0x0f, 0x30, 0x01, 0xe2, 0x1c, 0x30, 0x82, 0xe5, 0xe4, 0xff, 0xff, 0xea @ 037f86a4
    add r2, ip, r3, lsl #2 @ 037f86b4
    ldr r3, [r2, #0x1c] @ 037f86b8
    cmp r3, #0 @ 037f86bc
    addeq r3, r3, #1 @ 037f86c0
    streq r3, [r2, #0x1c] @ 037f86c4
    bx lr @ 037f86c8
    .byte 0x04, 0x00, 0x53, 0xe3, 0xf3, 0xff, 0xff, 0xca, 0x03, 0x31, 0x8c, 0xe0, 0x1c, 0x20, 0x93, 0xe5 @ 037f86cc
    .byte 0x3f, 0x10, 0x00, 0xe2, 0x0f, 0x20, 0x02, 0xe2, 0x01, 0x22, 0x82, 0xe1, 0x1c, 0x20, 0x83, 0xe5 @ 037f86dc
    .byte 0xd5, 0xff, 0xff, 0xea, 0xbc, 0x6d, 0x80, 0x03 @ 037f86ec
.L_037f86f4:
@ FUN_037f86f4 at 0x037f86f4
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037f86f4
    cmp r1, #0 @ 037f86f8
    sub sp, sp, #0xc @ 037f86fc
    str r1, [sp, #4] @ 037f8700
    mov fp, r0 @ 037f8704
    ble .L_037f88e4 @ 037f8708
    ldr r4, [pc, #0x2a0] @ 037f870c
    ldr r8, [pc, #0x2a0] @ 037f8710
    ldr sl, [r4, #0x18] @ 037f8714
    ldr r5, [r4, #4] @ 037f8718
    ldr sb, [r4] @ 037f871c
    mov r6, #0 @ 037f8720
    mov r7, r4 @ 037f8724
    b .L_037f87fc @ 037f8728
.L_037f872c:
    ldr r3, [r7, #0x3c] @ 037f872c
    rsb r0, r2, r3 @ 037f8730
    cmp r0, #0 @ 037f8734
    str r0, [r7, #0x3c] @ 037f8738
    ble .L_037f8978 @ 037f873c
.L_037f8740:
    ldr lr, [r4, #0x24] @ 037f8740
    cmp lr, #6 @ 037f8744
    ldr r0, [pc, #0x264] @ 037f8748
    ble .L_037f8838 @ 037f874c
.L_037f8750:
    ldr r2, [r0, #0x40] @ 037f8750
    ldr r3, [r0, #8] @ 037f8754
    rsb ip, r3, r2 @ 037f8758
    cmp ip, #0 @ 037f875c
    str ip, [r0, #0x40] @ 037f8760
    ble .L_037f893c @ 037f8764
.L_037f8768:
    ldr r3, [r4, #0x2c] @ 037f8768
    cmp r3, #6 @ 037f876c
    ldr ip, [pc, #0x23c] @ 037f8770
    ble .L_037f8854 @ 037f8774
.L_037f8778:
    ldr r2, [ip, #0x44] @ 037f8778
    ldr r3, [ip, #8] @ 037f877c
    rsb lr, r3, r2 @ 037f8780
    cmp lr, #0 @ 037f8784
    str lr, [ip, #0x44] @ 037f8788
    ble .L_037f88f0 @ 037f878c
.L_037f8790:
    cmp sl, #0x80 @ 037f8790
    ldr r1, [pc, #0x218] @ 037f8794
    beq .L_037f87b4 @ 037f8798
    ldr r2, [r1, #0x48] @ 037f879c
    ldr r3, [r1, #8] @ 037f87a0
    rsb r2, r3, r2 @ 037f87a4
    cmp r2, #0 @ 037f87a8
    str r2, [r1, #0x48] @ 037f87ac
    ble .L_037f8864 @ 037f87b0
.L_037f87b4:
    ldr r3, [r4, #0x58] @ 037f87b4
    cmp r3, #2 @ 037f87b8
    beq .L_037f8888 @ 037f87bc
.L_037f87c0:
    add r1, r4, #0x64 @ 037f87c0
    ldm r1, {r1, r2} @ 037f87c4
    add r2, r1, r2 @ 037f87c8
    add r1, r4, #0x5c @ 037f87cc
    ldm r1, {r1, r3} @ 037f87d0
    add r3, r1, r3 @ 037f87d4
    ldr r1, [sp, #4] @ 037f87d8
    add r3, r3, r2 @ 037f87dc
    lsl r3, r3, #0x10 @ 037f87e0
    lsl r2, r6, #1 @ 037f87e4
    add r6, r6, #1 @ 037f87e8
    asr r3, r3, #0x11 @ 037f87ec
    cmp r1, r6 @ 037f87f0
    strh r3, [r2, fp] @ 037f87f4
    beq .L_037f88e0 @ 037f87f8
.L_037f87fc:
    ldr ip, [r4, #0x1c] @ 037f87fc
    add r5, r5, sb @ 037f8800
    asr r2, r5, #0xc @ 037f8804
    cmp ip, #6 @ 037f8808
    lsl r5, r5, #0x14 @ 037f880c
    str r2, [r4, #8] @ 037f8810
    lsr r5, r5, #0x14 @ 037f8814
    bgt .L_037f872c @ 037f8818
    ldr r3, [r7, #0x20] @ 037f881c
    ldr lr, [r4, #0x24] @ 037f8820
    ldr r2, [r8, r3, lsl #2] @ 037f8824
    cmp lr, #6 @ 037f8828
    str r2, [r7, #0x5c] @ 037f882c
    ldr r0, [pc, #0x17c] @ 037f8830
    bgt .L_037f8750 @ 037f8834
.L_037f8838:
    ldr r3, [r0, #0x28] @ 037f8838
    ldr r2, [r8, r3, lsl #2] @ 037f883c
    ldr r3, [r4, #0x2c] @ 037f8840
    cmp r3, #6 @ 037f8844
    str r2, [r0, #0x60] @ 037f8848
    ldr ip, [pc, #0x160] @ 037f884c
    bgt .L_037f8778 @ 037f8850
.L_037f8854:
    ldr r3, [ip, #0x30] @ 037f8854
    ldr r2, [r8, r3, lsl #2] @ 037f8858
    str r2, [ip, #0x64] @ 037f885c
    b .L_037f8790 @ 037f8860
.L_037f8864:
    ldr r3, [r1, #0x58] @ 037f8864
    rsb r3, r3, #0 @ 037f8868
    cmp r3, #1 @ 037f886c
    str r3, [r1, #0x58] @ 037f8870
    add r2, r2, sl @ 037f8874
    addeq r3, r3, #1 @ 037f8878
    str r2, [r1, #0x48] @ 037f887c
    streq r3, [r1, #0x58] @ 037f8880
    bne .L_037f87b4 @ 037f8884
.L_037f8888:
    ldr r3, [r4, #0x34] @ 037f8888
    tst r3, #4 @ 037f888c
    ldr r3, [pc, #0x11c] @ 037f8890
    ldrne r3, [r3, #0x14] @ 037f8894
    ldreq r3, [r3, #0x14] @ 037f8898
    mov r2, #1 @ 037f889c
    eorne r3, r3, r3, asr #3 @ 037f88a0
    andne r3, r3, r2 @ 037f88a4
    andeq r3, r3, #1 @ 037f88a8
    str r2, [r4, #0x58] @ 037f88ac
    ldr r2, [r4, #0x14] @ 037f88b0
    lsl r3, r3, #0xf @ 037f88b4
    orr r3, r3, r2, asr #1 @ 037f88b8
    ldr r1, [pc, #0xf0] @ 037f88bc
    ands r2, r3, #1 @ 037f88c0
    ldrne r2, [r1, #0x38] @ 037f88c4
    str r3, [r4, #0x14] @ 037f88c8
    ldrne r3, [r8, r2, lsl #2] @ 037f88cc
    lslne r3, r3, #1 @ 037f88d0
    strne r3, [r1, #0x68] @ 037f88d4
    streq r2, [r1, #0x68] @ 037f88d8
    b .L_037f87c0 @ 037f88dc
.L_037f88e0:
    str r5, [r4, #4] @ 037f88e0
.L_037f88e4:
    add sp, sp, #0xc @ 037f88e4
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037f88e8
    bx lr @ 037f88ec
.L_037f88f0:
    ldr r3, [ip, #0x30] @ 037f88f0
    ldr r1, [ip, #0x54] @ 037f88f4
    ldr r2, [r8, r3, lsl #2] @ 037f88f8
    mul r0, r1, r2 @ 037f88fc
    ldr r3, [ip, #0x18] @ 037f8900
    rsb r1, r1, #0 @ 037f8904
    cmp r3, #0x80 @ 037f8908
    lsleq r3, r1, #1 @ 037f890c
    str r1, [ip, #0x54] @ 037f8910
    str r0, [ip, #0x64] @ 037f8914
    streq r3, [ip, #0x58] @ 037f8918
    ldr r1, [r4, #0x2c] @ 037f891c
    mov r2, lr @ 037f8920
.L_037f8924:
    add r3, r2, r1 @ 037f8924
    cmp r3, #0 @ 037f8928
    mov r2, r3 @ 037f892c
    ble .L_037f8924 @ 037f8930
    str r3, [r4, #0x44] @ 037f8934
    b .L_037f8790 @ 037f8938
.L_037f893c:
    ldr r2, [r0, #0x28] @ 037f893c
    ldr r3, [r0, #0x50] @ 037f8940
    ldr r1, [r8, r2, lsl #2] @ 037f8944
    mul r2, r3, r1 @ 037f8948
    rsb r3, r3, #0 @ 037f894c
    str r3, [r0, #0x50] @ 037f8950
    str r2, [r0, #0x60] @ 037f8954
    mov r1, lr @ 037f8958
    mov r2, ip @ 037f895c
.L_037f8960:
    add r3, r2, r1 @ 037f8960
    cmp r3, #0 @ 037f8964
    mov r2, r3 @ 037f8968
    ble .L_037f8960 @ 037f896c
    str r3, [r4, #0x40] @ 037f8970
    b .L_037f8768 @ 037f8974
.L_037f8978:
    ldr r2, [r7, #0x20] @ 037f8978
    ldr r3, [r7, #0x4c] @ 037f897c
    ldr r1, [r8, r2, lsl #2] @ 037f8980
    mul r2, r3, r1 @ 037f8984
    rsb r3, r3, #0 @ 037f8988
    str r2, [r7, #0x5c] @ 037f898c
    str r3, [r7, #0x4c] @ 037f8990
    mov r1, ip @ 037f8994
    mov r3, r0 @ 037f8998
.L_037f899c:
    add r2, r3, r1 @ 037f899c
    cmp r2, #0 @ 037f89a0
    mov r3, r2 @ 037f89a4
    ble .L_037f899c @ 037f89a8
    str r2, [r4, #0x3c] @ 037f89ac
    b .L_037f8740 @ 037f89b0
    .byte 0xbc, 0x6d, 0x80, 0x03, 0x4c, 0x6d, 0x80, 0x03 @ 037f89b4
.L_037f89bc:
@ FUN_037f89bc at 0x037f89bc
    ldr r0, [pc, #0x68] @ 037f89bc
    push {r4, r5, r6, lr} @ 037f89c0
    mov ip, #1 @ 037f89c4
    mov r2, r0 @ 037f89c8
    mov r3, r0 @ 037f89cc
    add r6, r0, #0x20 @ 037f89d0
    mov r5, #0xf @ 037f89d4
    mov r4, r0 @ 037f89d8
    mov r1, #0 @ 037f89dc
    mov lr, #0x20 @ 037f89e0
.L_037f89e4:
    str ip, [r2, #0x1c] @ 037f89e4
    str r5, [r2, #0x20] @ 037f89e8
    add r2, r2, #8 @ 037f89ec
    cmp r2, r6 @ 037f89f0
    str r1, [r3, #0x3c] @ 037f89f4
    str ip, [r3, #0x4c] @ 037f89f8
    str lr, [r3, #0x6c] @ 037f89fc
    str r1, [r3, #0x5c] @ 037f8a00
    add r3, r3, #4 @ 037f8a04
    bne .L_037f89e4 @ 037f8a08
    mov r3, #0x10 @ 037f8a0c
    str r3, [r0, #0x18] @ 037f8a10
    mov r3, #0x8000 @ 037f8a14
    str r1, [r4, #4] @ 037f8a18
    str r3, [r4, #0x14] @ 037f8a1c
    str r1, [r4, #0x10] @ 037f8a20
    pop {r4, r5, r6, lr} @ 037f8a24
    bx lr @ 037f8a28
    .byte 0xbc, 0x6d, 0x80, 0x03 @ 037f8a2c
.L_037f8a30:
@ FUN_037f8a30 at 0x037f8a30
    push {r4, r5, r6, r7, lr} @ 037f8a30
    mov r4, r0 @ 037f8a34
    sub sp, sp, #4 @ 037f8a38
    mov r5, r1 @ 037f8a3c
    lsl r0, r0, #8 @ 037f8a40
    mov r1, r2 @ 037f8a44
    mov r7, r3 @ 037f8a48
    mov r6, r2 @ 037f8a4c
    bl .L_038019ec @ 037f8a50
    ldr r3, [pc, #0x24] @ 037f8a54
    mov r1, r5 @ 037f8a58
    str r0, [r3] @ 037f8a5c
    mov r2, r6 @ 037f8a60
    mov r0, r4 @ 037f8a64
    bl .L_037f89bc @ 037f8a68
    ldr r3, [pc, #0x10] @ 037f8a6c
    str r7, [r3] @ 037f8a70
    add sp, sp, #4 @ 037f8a74
    pop {r4, r5, r6, r7, lr} @ 037f8a78
    bx lr @ 037f8a7c
    .byte 0xbc, 0x6d, 0x80, 0x03, 0xb8, 0x6d, 0x80, 0x03 @ 037f8a80
