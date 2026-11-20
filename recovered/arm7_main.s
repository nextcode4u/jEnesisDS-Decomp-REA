/* Recovered ARM and Thumb code with data at its mapped address. */
.syntax unified
.arm
.section .text.payload, "ax", %progbits
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
.L_037f8a88:
@ FUN_037f8a88 at 0x037f8a88
    cmp r1, r2 @ 037f8a88
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 037f8a8c
    mov ip, r2 @ 037f8a90
    mov r5, r0 @ 037f8a94
    ldrsh lr, [r0, #0x1a] @ 037f8a98
    bhs .L_037f8b94 @ 037f8a9c
    mov sb, #0x3fc @ 037f8aa0
    add sb, sb, #2 @ 037f8aa4
    mov sl, #1 @ 037f8aa8
.L_037f8aac:
    ldrb r3, [r5, #0x17] @ 037f8aac
    sub r3, r3, #1 @ 037f8ab0
    add r1, r1, #1 @ 037f8ab4
    cmp r3, #3 @ 037f8ab8
    ldrls pc, [pc, r3, lsl #2] @ 037f8abc
    b .L_037f8b8c @ 037f8ac0
    .byte 0xb4, 0x8b, 0x7f, 0x03, 0x84, 0x8c, 0x7f, 0x03, 0xd4, 0x8a, 0x7f, 0x03, 0x4c, 0x8d, 0x7f, 0x03 @ 037f8ac4
    ldr r7, [r5, #0x24] @ 037f8ad4
    lsr r6, r7, #0x18 @ 037f8ad8
    lsl r3, sl, r6 @ 037f8adc
    sub r0, r3, #1 @ 037f8ae0
    b .L_037f8aec @ 037f8ae4
.L_037f8ae8:
    add r1, r1, #1 @ 037f8ae8
.L_037f8aec:
    ands r2, r1, r0 @ 037f8aec
    moveq r3, #0 @ 037f8af0
    movne r3, #1 @ 037f8af4
    cmp ip, r1 @ 037f8af8
    movls r3, #0 @ 037f8afc
    andhi r3, r3, #1 @ 037f8b00
    cmp r3, #0 @ 037f8b04
    bne .L_037f8ae8 @ 037f8b08
    cmp r2, #0 @ 037f8b0c
    bne .L_037f8b8c @ 037f8b10
    ldr r4, [r5, #0x1c] @ 037f8b14
    cmp r4, lr @ 037f8b18
    movle r3, #0 @ 037f8b1c
    movgt r3, #1 @ 037f8b20
    cmp ip, r1 @ 037f8b24
    movls r3, #0 @ 037f8b28
    cmp r3, #0 @ 037f8b2c
    beq .L_037f8b80 @ 037f8b30
    mov r8, #1 @ 037f8b34
.L_037f8b38:
    cmp r2, #0 @ 037f8b38
    bne .L_037f8b5c @ 037f8b3c
    lsr r3, r1, r6 @ 037f8b40
    and r3, r3, #7 @ 037f8b44
    add r3, r3, r3, lsl #1 @ 037f8b48
    lsr r3, r7, r3 @ 037f8b4c
    and r3, r3, #7 @ 037f8b50
    lsl r3, r8, r3 @ 037f8b54
    add lr, lr, r3, asr #1 @ 037f8b58
.L_037f8b5c:
    add r1, r1, #1 @ 037f8b5c
    cmp lr, r4 @ 037f8b60
    movge r3, #0 @ 037f8b64
    movlt r3, #1 @ 037f8b68
    cmp ip, r1 @ 037f8b6c
    movls r3, #0 @ 037f8b70
    cmp r3, #0 @ 037f8b74
    and r2, r1, r0 @ 037f8b78
    bne .L_037f8b38 @ 037f8b7c
.L_037f8b80:
    cmp r4, lr @ 037f8b80
    movle r3, #2 @ 037f8b84
    strble r3, [r5, #0x17] @ 037f8b88
.L_037f8b8c:
    cmp ip, r1 @ 037f8b8c
    bhi .L_037f8aac @ 037f8b90
.L_037f8b94:
    lsl r3, lr, #0x10 @ 037f8b94
    lsr r1, r3, #0x10 @ 037f8b98
    mov r2, lr @ 037f8b9c
.L_037f8ba0:
    ldrh r0, [r5, #0x18] @ 037f8ba0
    add r0, r0, r2 @ 037f8ba4
    strh r1, [r5, #0x1a] @ 037f8ba8
    pop {r4, r5, r6, r7, r8, sb, sl, lr} @ 037f8bac
    bx lr @ 037f8bb0
    ldr r7, [r5, #0x2c] @ 037f8bb4
    lsr r6, r7, #0x18 @ 037f8bb8
    lsl r3, sl, r6 @ 037f8bbc
    sub r0, r3, #1 @ 037f8bc0
    b .L_037f8bcc @ 037f8bc4
.L_037f8bc8:
    add r1, r1, #1 @ 037f8bc8
.L_037f8bcc:
    ands r2, r1, r0 @ 037f8bcc
    moveq r3, #0 @ 037f8bd0
    movne r3, #1 @ 037f8bd4
    cmp ip, r1 @ 037f8bd8
    movls r3, #0 @ 037f8bdc
    andhi r3, r3, #1 @ 037f8be0
    cmp r3, #0 @ 037f8be4
    bne .L_037f8bc8 @ 037f8be8
    cmp r2, #0 @ 037f8bec
    bne .L_037f8b8c @ 037f8bf0
    cmp lr, sb @ 037f8bf4
    movgt r3, #0 @ 037f8bf8
    movle r3, #1 @ 037f8bfc
    cmp ip, r1 @ 037f8c00
    movls r3, #0 @ 037f8c04
    cmp r3, #0 @ 037f8c08
    beq .L_037f8c64 @ 037f8c0c
    mov r4, #0x3fc @ 037f8c10
    add r4, r4, #2 @ 037f8c14
    mov r8, #1 @ 037f8c18
.L_037f8c1c:
    cmp r2, #0 @ 037f8c1c
    bne .L_037f8c40 @ 037f8c20
    lsr r3, r1, r6 @ 037f8c24
    and r3, r3, #7 @ 037f8c28
    add r3, r3, r3, lsl #1 @ 037f8c2c
    lsr r3, r7, r3 @ 037f8c30
    and r3, r3, #7 @ 037f8c34
    lsl r3, r8, r3 @ 037f8c38
    add lr, lr, r3, asr #1 @ 037f8c3c
.L_037f8c40:
    add r1, r1, #1 @ 037f8c40
    cmp lr, r4 @ 037f8c44
    movgt r3, #0 @ 037f8c48
    movle r3, #1 @ 037f8c4c
    cmp ip, r1 @ 037f8c50
    movls r3, #0 @ 037f8c54
    cmp r3, #0 @ 037f8c58
    and r2, r1, r0 @ 037f8c5c
    bne .L_037f8c1c @ 037f8c60
.L_037f8c64:
    cmp lr, sb @ 037f8c64
    movgt r2, #0x3fc @ 037f8c68
    addgt r2, r2, #3 @ 037f8c6c
    movgt r3, #0 @ 037f8c70
    movgt r1, r2 @ 037f8c74
    strbgt r3, [r5, #0x17] @ 037f8c78
    bgt .L_037f8ba0 @ 037f8c7c
    b .L_037f8b94 @ 037f8c80
    ldr r7, [r5, #0x28] @ 037f8c84
    lsr r6, r7, #0x18 @ 037f8c88
    lsl r3, sl, r6 @ 037f8c8c
    sub r0, r3, #1 @ 037f8c90
    b .L_037f8c9c @ 037f8c94
.L_037f8c98:
    add r1, r1, #1 @ 037f8c98
.L_037f8c9c:
    ands r2, r1, r0 @ 037f8c9c
    moveq r3, #0 @ 037f8ca0
    movne r3, #1 @ 037f8ca4
    cmp ip, r1 @ 037f8ca8
    movls r3, #0 @ 037f8cac
    andhi r3, r3, #1 @ 037f8cb0
    cmp r3, #0 @ 037f8cb4
    bne .L_037f8c98 @ 037f8cb8
    cmp r2, #0 @ 037f8cbc
    bne .L_037f8b8c @ 037f8cc0
    cmp ip, r1 @ 037f8cc4
    movls r3, #0 @ 037f8cc8
    movhi r3, #1 @ 037f8ccc
    cmp lr, sb @ 037f8cd0
    movgt r3, #0 @ 037f8cd4
    cmp r3, #0 @ 037f8cd8
    beq .L_037f8d34 @ 037f8cdc
    mov r4, #0x3fc @ 037f8ce0
    add r4, r4, #2 @ 037f8ce4
    mov r8, #1 @ 037f8ce8
.L_037f8cec:
    cmp r2, #0 @ 037f8cec
    bne .L_037f8d10 @ 037f8cf0
    lsr r3, r1, r6 @ 037f8cf4
    and r3, r3, #7 @ 037f8cf8
    add r3, r3, r3, lsl #1 @ 037f8cfc
    lsr r3, r7, r3 @ 037f8d00
    and r3, r3, #7 @ 037f8d04
    lsl r3, r8, r3 @ 037f8d08
    add lr, lr, r3, asr #1 @ 037f8d0c
.L_037f8d10:
    add r1, r1, #1 @ 037f8d10
    cmp ip, r1 @ 037f8d14
    movls r3, #0 @ 037f8d18
    movhi r3, #1 @ 037f8d1c
    cmp lr, r4 @ 037f8d20
    movgt r3, #0 @ 037f8d24
    cmp r3, #0 @ 037f8d28
    and r2, r1, r0 @ 037f8d2c
    bne .L_037f8cec @ 037f8d30
.L_037f8d34:
    cmp lr, sb @ 037f8d34
    ble .L_037f8b8c @ 037f8d38
    mov r2, #0x3fc @ 037f8d3c
    add r2, r2, #3 @ 037f8d40
    mov r1, r2 @ 037f8d44
    b .L_037f8ba0 @ 037f8d48
    ldr r7, [r5, #0x20] @ 037f8d4c
    lsr r6, r7, #0x18 @ 037f8d50
    lsl r3, sl, r6 @ 037f8d54
    sub r0, r3, #1 @ 037f8d58
    b .L_037f8d64 @ 037f8d5c
.L_037f8d60:
    add r1, r1, #1 @ 037f8d60
.L_037f8d64:
    ands r2, r1, r0 @ 037f8d64
    moveq r3, #0 @ 037f8d68
    movne r3, #1 @ 037f8d6c
    cmp ip, r1 @ 037f8d70
    movls r3, #0 @ 037f8d74
    andhi r3, r3, #1 @ 037f8d78
    cmp r3, #0 @ 037f8d7c
    bne .L_037f8d60 @ 037f8d80
    cmp r2, #0 @ 037f8d84
    bne .L_037f8b8c @ 037f8d88
    cmp lr, #0 @ 037f8d8c
    movle r3, #0 @ 037f8d90
    movgt r3, #1 @ 037f8d94
    cmp ip, r1 @ 037f8d98
    movls r3, #0 @ 037f8d9c
    cmp r3, #0 @ 037f8da0
    beq .L_037f8e00 @ 037f8da4
    mov r8, #1 @ 037f8da8
.L_037f8dac:
    cmp r2, #0 @ 037f8dac
    mvn r4, lr @ 037f8db0
    bne .L_037f8ddc @ 037f8db4
    lsr r3, r1, r6 @ 037f8db8
    and r3, r3, #7 @ 037f8dbc
    add r3, r3, r3, lsl #1 @ 037f8dc0
    lsr r3, r7, r3 @ 037f8dc4
    and r3, r3, #7 @ 037f8dc8
    lsl r3, r8, r3 @ 037f8dcc
    asr r3, r3, #1 @ 037f8dd0
    mul r2, r3, r4 @ 037f8dd4
    add lr, lr, r2, asr #4 @ 037f8dd8
.L_037f8ddc:
    add r1, r1, #1 @ 037f8ddc
    cmp lr, #0 @ 037f8de0
    movle r3, #0 @ 037f8de4
    movgt r3, #1 @ 037f8de8
    cmp ip, r1 @ 037f8dec
    movls r3, #0 @ 037f8df0
    cmp r3, #0 @ 037f8df4
    and r2, r1, r0 @ 037f8df8
    bne .L_037f8dac @ 037f8dfc
.L_037f8e00:
    cmp lr, #0 @ 037f8e00
    movle r3, #3 @ 037f8e04
    movle lr, #0 @ 037f8e08
    strble r3, [r5, #0x17] @ 037f8e0c
    cmp ip, r1 @ 037f8e10
    bhi .L_037f8aac @ 037f8e14
    b .L_037f8b94 @ 037f8e18
.L_037f8e1c:
@ FUN_037f8e1c at 0x037f8e1c
    push {r4, r5, r6, r7, r8, lr} @ 037f8e1c
    and r5, r0, #3 @ 037f8e20
    cmp r5, #3 @ 037f8e24
    mov r4, r1 @ 037f8e28
    beq .L_037f8e88 @ 037f8e2c
    cmp r0, #0xff @ 037f8e30
    addgt r5, r5, #3 @ 037f8e34
    asr r3, r0, #2 @ 037f8e38
    lsl lr, r5, #1 @ 037f8e3c
    and ip, r3, #3 @ 037f8e40
    add r2, lr, r5 @ 037f8e44
    ldr r3, [pc, #0x3a0] @ 037f8e48
    add r2, r2, r2, lsl #3 @ 037f8e4c
    and r1, r0, #0xf0 @ 037f8e50
    add r7, r3, r2, lsl #3 @ 037f8e54
    cmp r1, #0x60 @ 037f8e58
    add r3, ip, ip, lsl #1 @ 037f8e5c
    add r6, r7, r3, lsl #4 @ 037f8e60
    beq .L_037f8ef4 @ 037f8e64
    ble .L_037f8e98 @ 037f8e68
    cmp r1, #0x80 @ 037f8e6c
    beq .L_037f9014 @ 037f8e70
    ble .L_037f8f40 @ 037f8e74
    cmp r1, #0xa0 @ 037f8e78
    beq .L_037f90e0 @ 037f8e7c
    cmp r1, #0xb0 @ 037f8e80
    beq .L_037f9064 @ 037f8e84
.L_037f8e88:
    mov r8, #0 @ 037f8e88
.L_037f8e8c:
    mov r0, r8 @ 037f8e8c
    pop {r4, r5, r6, r7, r8, lr} @ 037f8e90
    bx lr @ 037f8e94
.L_037f8e98:
    cmp r1, #0x40 @ 037f8e98
    andeq r3, r4, #0x7f @ 037f8e9c
    lsleq r3, r3, #3 @ 037f8ea0
    moveq r8, #1 @ 037f8ea4
    strheq r3, [r6, #0x18] @ 037f8ea8
    beq .L_037f8e8c @ 037f8eac
    cmp r1, #0x50 @ 037f8eb0
    beq .L_037f8f94 @ 037f8eb4
    cmp r1, #0x30 @ 037f8eb8
    bne .L_037f8e88 @ 037f8ebc
    ands r3, r4, #0xf @ 037f8ec0
    lslne r1, r3, #1 @ 037f8ec4
    ldr r2, [pc, #0x324] @ 037f8ec8
    lsl r3, r4, #3 @ 037f8ecc
    and r3, r3, #0x380 @ 037f8ed0
    add r3, r3, r2 @ 037f8ed4
    moveq r1, #1 @ 037f8ed8
    mvn r2, #0 @ 037f8edc
    mov r8, #1 @ 037f8ee0
    str r3, [r6] @ 037f8ee4
    str r2, [r7, #0x10] @ 037f8ee8
    str r1, [r6, #8] @ 037f8eec
    b .L_037f8e8c @ 037f8ef0
.L_037f8ef4:
    ands r0, r4, #0x1f @ 037f8ef4
    lslne r3, r0, #1 @ 037f8ef8
    moveq r3, r0 @ 037f8efc
    ldrb r0, [r6, #0x15] @ 037f8f00
    addne r3, r3, #0x20 @ 037f8f04
    add r0, r3, r0 @ 037f8f08
    moveq lr, r3 @ 037f8f0c
    movne lr, r3 @ 037f8f10
    ldr r3, [pc, #0x2dc] @ 037f8f14
    ldr r2, [pc, #0x2dc] @ 037f8f18
    ldrb ip, [r3, r0] @ 037f8f1c
    ldr r3, [pc, #0x2d8] @ 037f8f20
    ldr r1, [r2, ip, lsl #2] @ 037f8f24
    ldrb r2, [r3, r0] @ 037f8f28
    mov r8, #1 @ 037f8f2c
    orr r1, r1, r2, lsl #24 @ 037f8f30
    str r1, [r6, #0x24] @ 037f8f34
    strb lr, [r6, #5] @ 037f8f38
    b .L_037f8e8c @ 037f8f3c
.L_037f8f40:
    cmp r1, #0x70 @ 037f8f40
    bne .L_037f8e88 @ 037f8f44
    ands r0, r4, #0x1f @ 037f8f48
    lslne r3, r0, #1 @ 037f8f4c
    moveq r3, r0 @ 037f8f50
    ldrb r0, [r6, #0x15] @ 037f8f54
    addne r3, r3, #0x20 @ 037f8f58
    add r0, r3, r0 @ 037f8f5c
    moveq lr, r3 @ 037f8f60
    movne lr, r3 @ 037f8f64
    ldr r3, [pc, #0x288] @ 037f8f68
    ldr r2, [pc, #0x288] @ 037f8f6c
    ldrb ip, [r3, r0] @ 037f8f70
    ldr r3, [pc, #0x284] @ 037f8f74
    ldr r1, [r2, ip, lsl #2] @ 037f8f78
    ldrb r2, [r3, r0] @ 037f8f7c
    mov r8, #1 @ 037f8f80
    orr r1, r1, r2, lsl #24 @ 037f8f84
    str r1, [r6, #0x28] @ 037f8f88
    strb lr, [r6, #6] @ 037f8f8c
    b .L_037f8e8c @ 037f8f90
.L_037f8f94:
    ands r3, r4, #0x1f @ 037f8f94
    lslne r3, r3, #1 @ 037f8f98
    moveq r1, r3 @ 037f8f9c
    addne r1, r3, #0x20 @ 037f8fa0
    asr r3, r4, #6 @ 037f8fa4
    ldrb r2, [r6, #0x14] @ 037f8fa8
    rsb r3, r3, #3 @ 037f8fac
    and r3, r3, #0xff @ 037f8fb0
    cmp r2, r3 @ 037f8fb4
    strb r3, [r6, #0x14] @ 037f8fb8
    mvnne r3, #0 @ 037f8fbc
    strb r1, [r6, #4] @ 037f8fc0
    movne r8, #1 @ 037f8fc4
    strne r3, [r7, #0x10] @ 037f8fc8
    bne .L_037f8e8c @ 037f8fcc
    ldrb r3, [r6, #0x15] @ 037f8fd0
    ldrb r2, [r6, #4] @ 037f8fd4
    add r0, r2, r3 @ 037f8fd8
    cmp r0, #0x5d @ 037f8fdc
    ldrle r3, [pc, #0x218] @ 037f8fe0
    ldrle r2, [pc, #0x20c] @ 037f8fe4
    ldrble r1, [r3, r0] @ 037f8fe8
    ldrble r3, [r2, r0] @ 037f8fec
    ldr r2, [pc, #0x204] @ 037f8ff0
    movgt r3, #0x11 @ 037f8ff4
    ldr r3, [r2, r3, lsl #2] @ 037f8ff8
    movgt r1, #0 @ 037f8ffc
    lslle r1, r1, #0x18 @ 037f9000
    orr r3, r1, r3 @ 037f9004
    mov r8, #1 @ 037f9008
    str r3, [r6, #0x20] @ 037f900c
    b .L_037f8e8c @ 037f9010
.L_037f9014:
    and r0, r4, #0xf @ 037f9014
    lsl r0, r0, #2 @ 037f9018
    ldrb r1, [r6, #0x15] @ 037f901c
    add r0, r0, #0x22 @ 037f9020
    ldr r3, [pc, #0x1cc] @ 037f9024
    add r1, r0, r1 @ 037f9028
    ldrb ip, [r3, r1] @ 037f902c
    ldr r2, [pc, #0x1c8] @ 037f9030
    ldr r3, [pc, #0x1c0] @ 037f9034
    ldrb lr, [r2, r1] @ 037f9038
    ldr r2, [r3, ip, lsl #2] @ 037f903c
    ldr r3, [pc, #0x1bc] @ 037f9040
    asr r1, r4, #4 @ 037f9044
    ldr ip, [r3, r1, lsl #2] @ 037f9048
    orr r2, r2, lr, lsl #24 @ 037f904c
    mov r8, #1 @ 037f9050
    str r2, [r6, #0x2c] @ 037f9054
    str ip, [r6, #0x1c] @ 037f9058
    strb r0, [r6, #7] @ 037f905c
    b .L_037f8e8c @ 037f9060
.L_037f9064:
    cmp ip, #0 @ 037f9064
    beq .L_037f91d0 @ 037f9068
    cmp ip, #1 @ 037f906c
    bne .L_037f8e88 @ 037f9070
    mov r3, #3 @ 037f9074
    lsl r3, r3, lr @ 037f9078
    ldr r0, [pc, #0x184] @ 037f907c
    ldr r2, [r0, #0x44c] @ 037f9080
    mvn r3, r3 @ 037f9084
    and r1, r4, #0xc0 @ 037f9088
    asr r1, r1, #6 @ 037f908c
    and r2, r2, r3 @ 037f9090
    orr r2, r2, r1, lsl lr @ 037f9094
    mov lr, #0x4000000 @ 037f9098
    str r2, [r0, #0x44c] @ 037f909c
    add lr, lr, #0x400 @ 037f90a0
    ldr r3, [lr, r5, lsl #4] @ 037f90a4
    ldr r2, [pc, #0x15c] @ 037f90a8
    cmp r3, #0 @ 037f90ac
    ldr r3, [pc, #0x158] @ 037f90b0
    ldr ip, [r2, r1, lsl #2] @ 037f90b4
    ldr r0, [r3, r1, lsl #2] @ 037f90b8
    orrlt r3, ip, #0xa8000000 @ 037f90bc
    orrlt r3, r3, r0, lsl #16 @ 037f90c0
    addlt r2, r5, #6 @ 037f90c4
    strlt r3, [lr, r5, lsl #4] @ 037f90c8
    movlt r8, #1 @ 037f90cc
    strlt r3, [lr, r2, lsl #4] @ 037f90d0
    blt .L_037f8e8c @ 037f90d4
.L_037f90d8:
    mov r8, #1 @ 037f90d8
    b .L_037f8e8c @ 037f90dc
.L_037f90e0:
    cmp ip, #3 @ 037f90e0
    ldrls pc, [pc, ip, lsl #2] @ 037f90e4
    b .L_037f8e88 @ 037f90e8
    .byte 0xfc, 0x90, 0x7f, 0x03, 0x44, 0x91, 0x7f, 0x03, 0x58, 0x91, 0x7f, 0x03, 0xb4, 0x91, 0x7f, 0x03 @ 037f90ec
    ldr r3, [pc, #0x104] @ 037f90fc
    ldrb ip, [r3, #0x13] @ 037f9100
    ldr r3, [pc, #0x108] @ 037f9104
    and r0, ip, #7 @ 037f9108
    add r0, r4, r0, lsl #8 @ 037f910c
    ldr lr, [r3, r0, lsl #3] @ 037f9110
    lsr ip, ip, #3 @ 037f9114
    rsb r3, ip, #7 @ 037f9118
    lsr lr, lr, r3 @ 037f911c
    ldr r2, [pc, #0xf0] @ 037f9120
    ldrb r1, [r2, r0, lsr #7] @ 037f9124
    mvn r3, #0 @ 037f9128
    orr r1, r1, ip, lsl #2 @ 037f912c
    mov r8, #1 @ 037f9130
    str r3, [r7, #0x10] @ 037f9134
    strb r1, [r7, #0xcc] @ 037f9138
    str lr, [r7, #0xd0] @ 037f913c
    b .L_037f8e8c @ 037f9140
    ldr r3, [pc, #0xbc] @ 037f9144
    and r2, r4, #0x3f @ 037f9148
    mov r8, #0 @ 037f914c
    strb r2, [r3, #0x13] @ 037f9150
    b .L_037f8e8c @ 037f9154
    cmp r0, #0xff @ 037f9158
    bgt .L_037f90d8 @ 037f915c
    ldr lr, [pc, #0xa0] @ 037f9160
    ldrb r1, [lr, #0x43c] @ 037f9164
    ldr r3, [pc, #0xa4] @ 037f9168
    and r0, r1, #7 @ 037f916c
    add r0, r4, r0, lsl #8 @ 037f9170
    ldr ip, [r3, r0, lsl #3] @ 037f9174
    lsr r1, r1, #3 @ 037f9178
    rsb r2, r1, #7 @ 037f917c
    lsr ip, ip, r2 @ 037f9180
    ldr r3, [pc, #0x8c] @ 037f9184
    ldrb r2, [r3, r0, lsr #7] @ 037f9188
    add r3, r5, lr @ 037f918c
    orr r2, r2, r1, lsl #2 @ 037f9190
    add r4, lr, r5, lsl #2 @ 037f9194
    strb r2, [r3, #0x43d] @ 037f9198
    mov r8, #1 @ 037f919c
    mvn r3, #0 @ 037f91a0
    str r0, [r4, #0x440] @ 037f91a4
    str ip, [r4, #0x430] @ 037f91a8
    str r3, [lr, #0x620] @ 037f91ac
    b .L_037f8e8c @ 037f91b0
    cmp r0, #0xff @ 037f91b4
    ldrle r3, [pc, #0x48] @ 037f91b8
    andle r2, r4, #0x3f @ 037f91bc
    movle r8, #0 @ 037f91c0
    strble r2, [r3, #0x43c] @ 037f91c4
    ble .L_037f8e8c @ 037f91c8
    b .L_037f8e88 @ 037f91cc
.L_037f91d0:
    asr r3, r4, #3 @ 037f91d0
    ands r3, r3, #7 @ 037f91d4
    and r2, r4, #7 @ 037f91d8
    addne r3, r3, #6 @ 037f91dc
    mov r8, #1 @ 037f91e0
    strb r2, [r7, #0xc0] @ 037f91e4
    strb r3, [r7, #0xc1] @ 037f91e8
    b .L_037f8e8c @ 037f91ec
    .byte 0x08, 0x73, 0x80, 0x03, 0xd4, 0x6e, 0x80, 0x03, 0xa8, 0x6b, 0x80, 0x03, 0x28, 0x6c, 0x80, 0x03 @ 037f91f0
    .byte 0x28, 0x6b, 0x80, 0x03, 0x74, 0x6c, 0x80, 0x03, 0xa8, 0x6e, 0x80, 0x03, 0x18, 0x6b, 0x80, 0x03 @ 037f9200
    .byte 0x08, 0x6b, 0x80, 0x03, 0x20, 0x78, 0x80, 0x03, 0xf8, 0x6a, 0x80, 0x03, 0x00, 0x00, 0x51, 0xe3 @ 037f9210
    .byte 0x1e, 0xff, 0x2f, 0xd1, 0x00, 0x30, 0xa0, 0xe3, 0x01, 0x10, 0x51, 0xe2, 0xb2, 0x30, 0xc0, 0xe0 @ 037f9220
    .byte 0xfb, 0xff, 0xff, 0x1a, 0x1e, 0xff, 0x2f, 0xe1 @ 037f9230
.L_037f9238:
@ FUN_037f9238 at 0x037f9238
    push {r4, r5, lr} @ 037f9238
    ldr r5, [pc, #0x14c] @ 037f923c
    mov r3, #0 @ 037f9240
    add ip, r5, #0x460 @ 037f9244
    str r3, [r5, #0x454] @ 037f9248
    str r3, [r5, #0x450] @ 037f924c
    str r3, [r5, #0x45c] @ 037f9250
    strb r3, [r5, #0x11] @ 037f9254
    strb r3, [r5, #0x12] @ 037f9258
    str r3, [r5, #0x14] @ 037f925c
    str r3, [r5, #0x18] @ 037f9260
    strb r3, [r5, #0x20] @ 037f9264
    str r3, [r5, #0x24] @ 037f9268
    sub sp, sp, #4 @ 037f926c
    add r4, r5, #0x970 @ 037f9270
    mvn lr, #0xfc00 @ 037f9274
    rsb r0, r5, ip, lsl #1 @ 037f9278
.L_037f927c:
    str r3, [r0, #-0x390] @ 037f927c
    mov r2, ip @ 037f9280
    mov r1, r3 @ 037f9284
.L_037f9288:
    add r1, r1, #1 @ 037f9288
    cmp r1, #4 @ 037f928c
    strb r3, [r2, #0x17] @ 037f9290
    strh lr, [r2, #0x1a] @ 037f9294
    add r2, r2, #0x30 @ 037f9298
    bne .L_037f9288 @ 037f929c
    add ip, ip, #0xd8 @ 037f92a0
    cmp ip, r4 @ 037f92a4
    add r0, r0, #0xd8 @ 037f92a8
    bne .L_037f927c @ 037f92ac
    add r1, r1, #0xbc @ 037f92b0
    mov r0, #0xb6 @ 037f92b4
    bl .L_037f8e1c @ 037f92b8
    mov r0, #0x1b4 @ 037f92bc
    mov r1, #0xc0 @ 037f92c0
    add r0, r0, #2 @ 037f92c4
    bl .L_037f8e1c @ 037f92c8
    mov r1, #0xc0 @ 037f92cc
    mov r0, #0xb5 @ 037f92d0
    bl .L_037f8e1c @ 037f92d4
    mov r0, #0x1b4 @ 037f92d8
    mov r1, #0xc0 @ 037f92dc
    add r0, r0, #1 @ 037f92e0
    bl .L_037f8e1c @ 037f92e4
    mov r1, #0xc0 @ 037f92e8
    mov r0, #0xb4 @ 037f92ec
    bl .L_037f8e1c @ 037f92f0
    mov r0, #0x1b4 @ 037f92f4
    mov r1, #0xc0 @ 037f92f8
    bl .L_037f8e1c @ 037f92fc
    mov r4, #0xb2 @ 037f9300
.L_037f9304:
    mov r0, r4 @ 037f9304
    mov r1, #0 @ 037f9308
    bl .L_037f8e1c @ 037f930c
    orr r0, r4, #0x100 @ 037f9310
    mov r1, #0 @ 037f9314
    sub r4, r4, #1 @ 037f9318
    bl .L_037f8e1c @ 037f931c
    cmp r4, #0x2f @ 037f9320
    bne .L_037f9304 @ 037f9324
    mov r1, #0 @ 037f9328
    mov r0, #0x26 @ 037f932c
    bl .L_037f8e1c @ 037f9330
    mov r1, #0 @ 037f9334
    mov r0, #0x25 @ 037f9338
    bl .L_037f8e1c @ 037f933c
    mov r1, #0 @ 037f9340
    mov r0, #0x24 @ 037f9344
    bl .L_037f8e1c @ 037f9348
    mov r1, #0 @ 037f934c
    mov r0, #0x23 @ 037f9350
    bl .L_037f8e1c @ 037f9354
    mov r1, #0 @ 037f9358
    mov r0, #0x22 @ 037f935c
    bl .L_037f8e1c @ 037f9360
    mov r1, #0 @ 037f9364
    mov r0, #0x21 @ 037f9368
    bl .L_037f8e1c @ 037f936c
    mov r0, #0x20 @ 037f9370
    mov r1, #0 @ 037f9374
    bl .L_037f8e1c @ 037f9378
    mov r3, #0 @ 037f937c
    str r3, [r5, #0x970] @ 037f9380
    add sp, sp, #4 @ 037f9384
    pop {r4, r5, lr} @ 037f9388
    bx lr @ 037f938c
    .byte 0xa8, 0x6e, 0x80, 0x03 @ 037f9390
.L_037f9394:
@ FUN_037f9394 at 0x037f9394
    push {r4, r5, r6, lr} @ 037f9394
    subs r6, r1, #0 @ 037f9398
    mov r5, r0 @ 037f939c
    beq .L_037f93c8 @ 037f93a0
    mov r4, r0 @ 037f93a4
.L_037f93a8:
    ldrb r0, [r4] @ 037f93a8
    ldrb r1, [r4, #1] @ 037f93ac
    orr r0, r0, #0x100 @ 037f93b0
    add r4, r4, #2 @ 037f93b4
    bl .L_037f8e1c @ 037f93b8
    rsb r3, r5, r4 @ 037f93bc
    cmp r6, r3 @ 037f93c0
    bhi .L_037f93a8 @ 037f93c4
.L_037f93c8:
    pop {r4, r5, r6, lr} @ 037f93c8
    bx lr @ 037f93cc
    .byte 0x00, 0x00, 0xa0, 0xe3, 0x1e, 0xff, 0x2f, 0xe1 @ 037f93d0
.L_037f93d8:
@ FUN_037f93d8 at 0x037f93d8
    ldr r3, [pc, #4] @ 037f93d8
    ldr r0, [r3, #0x970] @ 037f93dc
    bx lr @ 037f93e0
    .byte 0xa8, 0x6e, 0x80, 0x03 @ 037f93e4
.L_037f93e8:
@ FUN_037f93e8 at 0x037f93e8
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037f93e8
    ldr r3, [pc, #0x1f0] @ 037f93ec
    ldr ip, [pc, #0x1f0] @ 037f93f0
    str r2, [r3] @ 037f93f4
    mov r6, r1 @ 037f93f8
    sub sp, sp, #0xc @ 037f93fc
    mov r5, r0 @ 037f9400
    mov r3, #0 @ 037f9404
    add r1, ip, #0x18 @ 037f9408
.L_037f940c:
    str r3, [ip], #4 @ 037f940c
    cmp ip, r1 @ 037f9410
    add r3, r3, r2 @ 037f9414
    bne .L_037f940c @ 037f9418
    ldr r4, [pc, #0x1c8] @ 037f941c
    mov r2, #0x970 @ 037f9420
    mov r0, r4 @ 037f9424
    add r2, r2, #8 @ 037f9428
    mov r1, #0 @ 037f942c
    bl .L_03802648 @ 037f9430
    cmp r6, #0 @ 037f9434
    str r5, [r4, #-0x460] @ 037f9438
    str r6, [r4, #-0x45c] @ 037f943c
    moveq r0, r6 @ 037f9440
    moveq r4, #0 @ 037f9444
    moveq r5, #0 @ 037f9448
    beq .L_037f94a8 @ 037f944c
    mov r0, r5 @ 037f9450
    bl .L_03801eb0 @ 037f9454
    mov r4, r0 @ 037f9458
    mov r0, r6 @ 037f945c
    mov r5, r1 @ 037f9460
    bl .L_03801eb0 @ 037f9464
    mov r3, #0x40000000 @ 037f9468
    mov r2, #0 @ 037f946c
    add r3, r3, #0x620000 @ 037f9470
    bl .L_03801f8c @ 037f9474
    mov r2, r0 @ 037f9478
    mov r3, r1 @ 037f947c
    mov r0, r4 @ 037f9480
    mov r1, r5 @ 037f9484
    bl .L_0380221c @ 037f9488
    mov r3, #0x40000000 @ 037f948c
    mov r2, #0 @ 037f9490
    add r3, r3, #0xf00000 @ 037f9494
    mov r4, r0 @ 037f9498
    mov r5, r1 @ 037f949c
    bl .L_03801f8c @ 037f94a0
    bl .L_03802484 @ 037f94a4
.L_037f94a8:
    ldr fp, [pc, #0x140] @ 037f94a8
    mov r2, #0 @ 037f94ac
    str r4, [fp, #8] @ 037f94b0
    str r5, [fp, #0xc] @ 037f94b4
    str r2, [sp, #4] @ 037f94b8
    str r0, [fp, #0x458] @ 037f94bc
.L_037f94c0:
    ldr r2, [sp, #4] @ 037f94c0
    lsl r3, r2, #7 @ 037f94c4
    add r2, r3, fp @ 037f94c8
    add r3, r3, fp @ 037f94cc
    add sl, r3, #0x2c @ 037f94d0
    ldr r3, [sp, #4] @ 037f94d4
    add r8, r2, #0x22c @ 037f94d8
    mov r7, #0 @ 037f94dc
    lsl sb, r3, #5 @ 037f94e0
    b .L_037f952c @ 037f94e4
.L_037f94e8:
    mov r1, #0x40000000 @ 037f94e8
    add r2, fp, #8 @ 037f94ec
    ldm r2, {r2, r3} @ 037f94f0
    mov r0, #0 @ 037f94f4
    add r1, r1, #0x500000 @ 037f94f8
    bl .L_03801f8c @ 037f94fc
    mov r3, r1 @ 037f9500
    mov r2, r0 @ 037f9504
    mov r1, r6 @ 037f9508
    mov r0, r5 @ 037f950c
    bl .L_03801f8c @ 037f9510
    bl .L_03802428 @ 037f9514
    cmp r7, #0x20 @ 037f9518
    rsb r3, r0, #0 @ 037f951c
    str r0, [sl], #4 @ 037f9520
    str r3, [r8], #4 @ 037f9524
    beq .L_037f9570 @ 037f9528
.L_037f952c:
    ldr r2, [pc, #0xc0] @ 037f952c
    add r3, sb, r2 @ 037f9530
    ldrsb r4, [r7, r3] @ 037f9534
    mov r0, r4 @ 037f9538
    bl .L_03801eb0 @ 037f953c
    mov r3, #0x40000000 @ 037f9540
    cmp r4, #0 @ 037f9544
    add r7, r7, #1 @ 037f9548
    mov r5, r0 @ 037f954c
    mov r6, r1 @ 037f9550
    mov r2, #0 @ 037f9554
    add r3, r3, #0x700000 @ 037f9558
    bge .L_037f94e8 @ 037f955c
    bl .L_03801b7c @ 037f9560
    mov r5, r0 @ 037f9564
    mov r6, r1 @ 037f9568
    b .L_037f94e8 @ 037f956c
.L_037f9570:
    ldr r3, [sp, #4] @ 037f9570
    add r3, r3, #1 @ 037f9574
    cmp r3, #4 @ 037f9578
    str r3, [sp, #4] @ 037f957c
    bne .L_037f94c0 @ 037f9580
    ldr r1, [pc, #0x64] @ 037f9584
    add r2, r1, #8 @ 037f9588
    ldm r2, {r2, r3} @ 037f958c
    mov r1, #0x40000000 @ 037f9590
    mov r0, #0 @ 037f9594
    add r1, r1, #0xa00000 @ 037f9598
    bl .L_03801f8c @ 037f959c
    ldr r7, [pc, #0x50] @ 037f95a0
    mov r5, r0 @ 037f95a4
    mov r6, r1 @ 037f95a8
    mov r4, #0 @ 037f95ac
.L_037f95b0:
    mov r0, r4 @ 037f95b0
    bl .L_03801eb0 @ 037f95b4
    mov r2, r5 @ 037f95b8
    mov r3, r6 @ 037f95bc
    bl .L_03801f8c @ 037f95c0
    bl .L_03802484 @ 037f95c4
    add r4, r4, #1 @ 037f95c8
    cmp r4, #0x1000 @ 037f95cc
    str r0, [r7], #4 @ 037f95d0
    bne .L_037f95b0 @ 037f95d4
    add sp, sp, #0xc @ 037f95d8
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037f95dc
    b .L_037f9238 @ 037f95e0
    .byte 0xa0, 0x6e, 0x80, 0x03, 0x88, 0x6e, 0x80, 0x03, 0x08, 0x73, 0x80, 0x03, 0xa8, 0x6e, 0x80, 0x03 @ 037f95e4
    .byte 0xb4, 0x6c, 0x80, 0x03, 0x20, 0x78, 0x80, 0x03 @ 037f95f4
.L_037f95fc:
@ FUN_037f95fc at 0x037f95fc
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037f95fc
    ldr r3, [r2, #0xc8] @ 037f9600
    mov sl, r2 @ 037f9604
    ldr fp, [pc, #0x4d8] @ 037f9608
    ldrh ip, [sl, #0x1a] @ 037f960c
    ldrh r2, [r2, #0x18] @ 037f9610
    str r3, [fp, #0x30] @ 037f9614
    str sl, [fp, #0x3c] @ 037f9618
    add r2, r2, ip @ 037f961c
    ldrb lr, [sl, #0xc1] @ 037f9620
    strh r2, [fp] @ 037f9624
    ldr ip, [pc, #0x4bc] @ 037f9628
    ldrh r2, [sl, #0x7a] @ 037f962c
    ldrh r3, [sl, #0x78] @ 037f9630
    add r3, r3, r2 @ 037f9634
    ldr r2, [ip, #0x450] @ 037f9638
    sub sp, sp, #0xc @ 037f963c
    str r2, [sp, #4] @ 037f9640
    ldr r2, [ip, #0x454] @ 037f9644
    strh r3, [fp, #2] @ 037f9648
    ldr r3, [ip, #0x45c] @ 037f964c
    str r2, [fp, #0x40] @ 037f9650
    ldr r2, [sp, #4] @ 037f9654
    str r3, [sp] @ 037f9658
    str r2, [fp, #0x34] @ 037f965c
    ldr r4, [ip, #0x458] @ 037f9660
    ldr r2, [sp] @ 037f9664
    and lr, lr, #0xf @ 037f9668
    ldrh ip, [sl, #0x4a] @ 037f966c
    ldrh r3, [sl, #0x48] @ 037f9670
    lsl lr, lr, #0xc @ 037f9674
    str lr, [fp, #0x48] @ 037f9678
    str r4, [fp, #0x44] @ 037f967c
    str r2, [fp, #0x38] @ 037f9680
    add r3, r3, ip @ 037f9684
    ldr sb, [pc, #0x460] @ 037f9688
    strh r3, [fp, #4] @ 037f968c
    ldrb r2, [sl, #0xc] @ 037f9690
    ldrh lr, [sl, #0xaa] @ 037f9694
    ldrh ip, [sl, #0xa8] @ 037f9698
    strb r2, [sb] @ 037f969c
    ldrb r3, [sl, #0xd] @ 037f96a0
    strb r3, [sb, #1] @ 037f96a4
    ldrb r2, [sl, #0xe] @ 037f96a8
    strb r2, [sb, #2] @ 037f96ac
    ldrb r3, [sl, #0xf] @ 037f96b0
    strb r3, [sb, #3] @ 037f96b4
    ldrb r2, [sl, #0x6c] @ 037f96b8
    add ip, ip, lr @ 037f96bc
    strh ip, [fp, #6] @ 037f96c0
    strb r2, [sb, #4] @ 037f96c4
    ldrb r3, [sl, #0x6d] @ 037f96c8
    strb r3, [sb, #5] @ 037f96cc
    ldrb r2, [sl, #0x6e] @ 037f96d0
    strb r2, [sb, #6] @ 037f96d4
    ldrb r3, [sl, #0x6f] @ 037f96d8
    strb r3, [sb, #7] @ 037f96dc
    ldrb r2, [sl, #0x3c] @ 037f96e0
    strb r2, [sb, #8] @ 037f96e4
    ldrb r3, [sl, #0x3d] @ 037f96e8
    strb r3, [sb, #9] @ 037f96ec
    ldrb r2, [sl, #0x3e] @ 037f96f0
    strb r2, [sb, #0xa] @ 037f96f4
    ldrb r3, [sl, #0x3f] @ 037f96f8
    strb r3, [sb, #0xb] @ 037f96fc
    ldrb r2, [sl, #0x9c] @ 037f9700
    strb r2, [sb, #0xc] @ 037f9704
    ldrb r3, [sl, #0x9d] @ 037f9708
    strb r3, [sb, #0xd] @ 037f970c
    ldrb r2, [sl, #0x9e] @ 037f9710
    strb r2, [sb, #0xe] @ 037f9714
    ldr r3, [pc, #0x3d4] @ 037f9718
    ldr r2, [pc, #0x3d4] @ 037f971c
    ldrb r6, [sl, #0x9f] @ 037f9720
    lsr ip, r3, #8 @ 037f9724
    lsr lr, r3, #0x10 @ 037f9728
    lsr r4, r2, #8 @ 037f972c
    lsr r5, r2, #0x10 @ 037f9730
    lsr r7, r3, #0x18 @ 037f9734
    lsr r8, r2, #0x18 @ 037f9738
    strb ip, [sb, #0x11] @ 037f973c
    strb lr, [sb, #0x12] @ 037f9740
    strb r4, [sb, #0x15] @ 037f9744
    strb r5, [sb, #0x16] @ 037f9748
    strb r6, [sb, #0xf] @ 037f974c
    strb r7, [sb, #0x13] @ 037f9750
    strb r8, [sb, #0x17] @ 037f9754
    strb r3, [sb, #0x10] @ 037f9758
    strb r2, [sb, #0x14] @ 037f975c
    ldrb r3, [sl, #0xc4] @ 037f9760
    strb r3, [sb, #0x18] @ 037f9764
    ldrb r2, [sl, #0xc5] @ 037f9768
    strb r2, [sb, #0x19] @ 037f976c
    ldrb r3, [sl, #0xc6] @ 037f9770
    strb r3, [sb, #0x1a] @ 037f9774
    ldrb r2, [sl, #0xc7] @ 037f9778
    strb r2, [sb, #0x1b] @ 037f977c
    ldrsh r2, [sl, #0x1a] @ 037f9780
    ldrh r3, [sl, #0x18] @ 037f9784
    add r3, r3, r2 @ 037f9788
    lsl r3, r3, #4 @ 037f978c
    lsr lr, r3, #0x18 @ 037f9790
    lsr r2, r3, #8 @ 037f9794
    lsr ip, r3, #0x10 @ 037f9798
    strb ip, [sb, #0x22] @ 037f979c
    strb lr, [sb, #0x23] @ 037f97a0
    strb r2, [sb, #0x21] @ 037f97a4
    strb r3, [sb, #0x20] @ 037f97a8
    ldrsh r3, [sl, #0x7a] @ 037f97ac
    ldrh r2, [sl, #0x78] @ 037f97b0
    add r2, r2, r3 @ 037f97b4
    lsl r2, r2, #4 @ 037f97b8
    lsr lr, r2, #0x18 @ 037f97bc
    lsr r3, r2, #8 @ 037f97c0
    lsr ip, r2, #0x10 @ 037f97c4
    strb ip, [sb, #0x26] @ 037f97c8
    strb lr, [sb, #0x27] @ 037f97cc
    strb r3, [sb, #0x25] @ 037f97d0
    strb r2, [sb, #0x24] @ 037f97d4
    ldrsh r2, [sl, #0x4a] @ 037f97d8
    ldrh r3, [sl, #0x48] @ 037f97dc
    add r3, r3, r2 @ 037f97e0
    lsl r3, r3, #4 @ 037f97e4
    lsr lr, r3, #0x18 @ 037f97e8
    lsr r2, r3, #8 @ 037f97ec
    lsr ip, r3, #0x10 @ 037f97f0
    strb ip, [sb, #0x2a] @ 037f97f4
    strb lr, [sb, #0x2b] @ 037f97f8
    strb r2, [sb, #0x29] @ 037f97fc
    strb r3, [sb, #0x28] @ 037f9800
    ldrsh r3, [sl, #0xaa] @ 037f9804
    ldrh r2, [sl, #0xa8] @ 037f9808
    add r2, r2, r3 @ 037f980c
    lsl r2, r2, #4 @ 037f9810
    lsr lr, r2, #0x18 @ 037f9814
    lsr r3, r2, #8 @ 037f9818
    lsr ip, r2, #0x10 @ 037f981c
    strb ip, [sb, #0x2e] @ 037f9820
    strb lr, [sb, #0x2f] @ 037f9824
    strb r2, [sb, #0x2c] @ 037f9828
    strb r3, [sb, #0x2d] @ 037f982c
    ldrb r3, [sl, #0x10] @ 037f9830
    strb r3, [sb, #0x30] @ 037f9834
    ldrb r2, [sl, #0x11] @ 037f9838
    strb r2, [sb, #0x31] @ 037f983c
    ldrb r3, [sl, #0x12] @ 037f9840
    strb r3, [sb, #0x32] @ 037f9844
    ldrb r2, [sl, #0x13] @ 037f9848
    strb r2, [sb, #0x33] @ 037f984c
    ldrb r3, [sl, #0x70] @ 037f9850
    strb r3, [sb, #0x34] @ 037f9854
    ldrb r2, [sl, #0x71] @ 037f9858
    strb r2, [sb, #0x35] @ 037f985c
    ldrb r3, [sl, #0x72] @ 037f9860
    strb r3, [sb, #0x36] @ 037f9864
    ldrb r2, [sl, #0x73] @ 037f9868
    strb r2, [sb, #0x37] @ 037f986c
    ldrb r3, [sl, #0x40] @ 037f9870
    strb r3, [sb, #0x38] @ 037f9874
    ldrb r2, [sl, #0x41] @ 037f9878
    strb r2, [sb, #0x39] @ 037f987c
    ldrb r3, [sl, #0x42] @ 037f9880
    strb r3, [sb, #0x3a] @ 037f9884
    ldrb r2, [sl, #0x43] @ 037f9888
    strb r2, [sb, #0x3b] @ 037f988c
    ldrb r3, [sl, #0xa0] @ 037f9890
    strb r3, [sb, #0x3c] @ 037f9894
    ldrb r2, [sl, #0xa1] @ 037f9898
    strb r2, [sb, #0x3d] @ 037f989c
    ldrb r3, [sl, #0xa2] @ 037f98a0
    strb r3, [sb, #0x3e] @ 037f98a4
    ldrb r2, [sl, #0xa3] @ 037f98a8
    strb r2, [sb, #0x3f] @ 037f98ac
    ldrb ip, [sl, #0xc0] @ 037f98b0
    and ip, ip, #7 @ 037f98b4
    mov r3, #0 @ 037f98b8
    lsr lr, ip, #0x18 @ 037f98bc
    strb r3, [sb, #0x41] @ 037f98c0
    strb r3, [sb, #0x42] @ 037f98c4
    strb lr, [sb, #0x43] @ 037f98c8
    strb ip, [sb, #0x40] @ 037f98cc
    mov r2, r3 @ 037f98d0
    ldrb r3, [sl, #0xc1] @ 037f98d4
    and r3, r3, #0xf @ 037f98d8
    lsr ip, r3, #0x18 @ 037f98dc
    strb r3, [sb, #0x44] @ 037f98e0
    strb r2, [sb, #0x45] @ 037f98e4
    strb r2, [sb, #0x46] @ 037f98e8
    strb ip, [sb, #0x47] @ 037f98ec
    ldrb r3, [sl, #0xc8] @ 037f98f0
    strb r3, [sb, #0x1c] @ 037f98f4
    ldrb r2, [sl, #0xc9] @ 037f98f8
    strb r2, [sb, #0x1d] @ 037f98fc
    ldrb r3, [sl, #0xca] @ 037f9900
    strb r3, [sb, #0x1e] @ 037f9904
    ldrb r2, [sl, #0xcb] @ 037f9908
    strb r2, [sb, #0x1f] @ 037f990c
    ldrb r3, [sl, #0x17] @ 037f9910
    cmp r3, #0 @ 037f9914
    mov r5, r0 @ 037f9918
    mov r4, r1 @ 037f991c
    bne .L_037f9a48 @ 037f9920
    ldr r0, [fp, #0x3c] @ 037f9924
    ldrb r3, [r0, #0x77] @ 037f9928
    cmp r3, #0 @ 037f992c
    bne .L_037f9a6c @ 037f9930
.L_037f9934:
    ldrb r3, [r0, #0x47] @ 037f9934
    cmp r3, #0 @ 037f9938
    bne .L_037f9a90 @ 037f993c
.L_037f9940:
    ldrb r3, [r0, #0xa7] @ 037f9940
    cmp r3, #0 @ 037f9944
    bne .L_037f9ab4 @ 037f9948
.L_037f994c:
    ldr r3, [fp, #0x48] @ 037f994c
    tst r3, #4 @ 037f9950
    beq .L_037f9ad4 @ 037f9954
.L_037f9958:
    cmp r4, #0 @ 037f9958
    movgt r2, #0 @ 037f995c
    ble .L_037f997c @ 037f9960
.L_037f9964:
    lsl r3, r2, #1 @ 037f9964
    add r2, r2, #1 @ 037f9968
    mov r1, #0 @ 037f996c
    cmp r4, r2 @ 037f9970
    strh r1, [r3, r5] @ 037f9974
    bne .L_037f9964 @ 037f9978
.L_037f997c:
    ldrb r2, [sb, #0x19] @ 037f997c
    ldrb r3, [sb, #0x18] @ 037f9980
    ldrb r0, [sb, #0x1a] @ 037f9984
    ldrb r1, [sb, #0x1b] @ 037f9988
    orr r3, r3, r2, lsl #8 @ 037f998c
    orr r3, r3, r0, lsl #16 @ 037f9990
    orr r3, r3, r1, lsl #24 @ 037f9994
    str r3, [sl, #0xc4] @ 037f9998
    ldrb r3, [sb, #1] @ 037f999c
    ldrb r2, [sb] @ 037f99a0
    ldrb r0, [sb, #2] @ 037f99a4
    ldrb r1, [sb, #3] @ 037f99a8
    orr r2, r2, r3, lsl #8 @ 037f99ac
    orr r2, r2, r0, lsl #16 @ 037f99b0
    orr r2, r2, r1, lsl #24 @ 037f99b4
    str r2, [sl, #0xc] @ 037f99b8
    ldrb r2, [sb, #5] @ 037f99bc
    ldrb r3, [sb, #4] @ 037f99c0
    ldrb r0, [sb, #6] @ 037f99c4
    ldrb r1, [sb, #7] @ 037f99c8
    orr r3, r3, r2, lsl #8 @ 037f99cc
    orr r3, r3, r0, lsl #16 @ 037f99d0
    orr r3, r3, r1, lsl #24 @ 037f99d4
    str r3, [sl, #0x6c] @ 037f99d8
    ldrb r3, [sb, #9] @ 037f99dc
    ldrb r2, [sb, #8] @ 037f99e0
    ldrb r0, [sb, #0xa] @ 037f99e4
    ldrb r1, [sb, #0xb] @ 037f99e8
    orr r2, r2, r3, lsl #8 @ 037f99ec
    orr r2, r2, r0, lsl #16 @ 037f99f0
    orr r2, r2, r1, lsl #24 @ 037f99f4
    str r2, [sl, #0x3c] @ 037f99f8
    ldrb r2, [sb, #0xd] @ 037f99fc
    ldrb r3, [sb, #0xc] @ 037f9a00
    ldrb r0, [sb, #0xe] @ 037f9a04
    ldrb r1, [sb, #0xf] @ 037f9a08
    orr r3, r3, r2, lsl #8 @ 037f9a0c
    orr r3, r3, r0, lsl #16 @ 037f9a10
    orr r3, r3, r1, lsl #24 @ 037f9a14
    str r3, [sl, #0x9c] @ 037f9a18
    ldrb r2, [sb, #0x1c] @ 037f9a1c
    ldrb r3, [sb, #0x1d] @ 037f9a20
    ldrb r0, [sb, #0x1e] @ 037f9a24
    ldrb r1, [sb, #0x1f] @ 037f9a28
    orr r2, r2, r3, lsl #8 @ 037f9a2c
    orr r2, r2, r0, lsl #16 @ 037f9a30
    orr r2, r2, r1, lsl #24 @ 037f9a34
    str r2, [sl, #0xc8] @ 037f9a38
    add sp, sp, #0xc @ 037f9a3c
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037f9a40
    bx lr @ 037f9a44
.L_037f9a48:
    ldr r1, [sp, #4] @ 037f9a48
    ldr r2, [sp] @ 037f9a4c
    mov r0, sl @ 037f9a50
    bl .L_037f8a88 @ 037f9a54
    strh r0, [fp] @ 037f9a58
    ldr r0, [fp, #0x3c] @ 037f9a5c
    ldrb r3, [r0, #0x77] @ 037f9a60
    cmp r3, #0 @ 037f9a64
    beq .L_037f9934 @ 037f9a68
.L_037f9a6c:
    add r0, r0, #0x60 @ 037f9a6c
    add r1, fp, #0x34 @ 037f9a70
    ldm r1, {r1, r2} @ 037f9a74
    bl .L_037f8a88 @ 037f9a78
    strh r0, [fp, #2] @ 037f9a7c
    ldr r0, [fp, #0x3c] @ 037f9a80
    ldrb r3, [r0, #0x47] @ 037f9a84
    cmp r3, #0 @ 037f9a88
    beq .L_037f9940 @ 037f9a8c
.L_037f9a90:
    add r0, r0, #0x30 @ 037f9a90
    add r1, fp, #0x34 @ 037f9a94
    ldm r1, {r1, r2} @ 037f9a98
    bl .L_037f8a88 @ 037f9a9c
    strh r0, [fp, #4] @ 037f9aa0
    ldr r0, [fp, #0x3c] @ 037f9aa4
    ldrb r3, [r0, #0xa7] @ 037f9aa8
    cmp r3, #0 @ 037f9aac
    beq .L_037f994c @ 037f9ab0
.L_037f9ab4:
    add r0, r0, #0x90 @ 037f9ab4
    add r1, fp, #0x34 @ 037f9ab8
    ldm r1, {r1, r2} @ 037f9abc
    bl .L_037f8a88 @ 037f9ac0
    ldr r3, [fp, #0x48] @ 037f9ac4
    tst r3, #4 @ 037f9ac8
    strh r0, [fp, #6] @ 037f9acc
    bne .L_037f9958 @ 037f9ad0
.L_037f9ad4:
    mov r1, r5 @ 037f9ad4
    mov r2, r4 @ 037f9ad8
    mov r0, sb @ 037f9adc
    bl .L_03800dd0 @ 037f9ae0
    b .L_037f997c @ 037f9ae4
    .byte 0x38, 0x6e, 0x80, 0x03, 0xa8, 0x6e, 0x80, 0x03, 0x20, 0xb8, 0x80, 0x03, 0xf8, 0x36, 0x80, 0x03 @ 037f9ae8
    .byte 0xf8, 0x26, 0x80, 0x03 @ 037f9af8
.L_037f9afc:
@ FUN_037f9afc at 0x037f9afc
    push {r4, r5, r6, r7, r8, lr} @ 037f9afc
    subs r6, r1, #0 @ 037f9b00
    mov r5, r0 @ 037f9b04
    beq .L_037f9b78 @ 037f9b08
    mov r4, r0 @ 037f9b0c
    mov r7, #1 @ 037f9b10
    mov r8, #4 @ 037f9b14
    b .L_037f9b34 @ 037f9b18
.L_037f9b1c:
    mov r1, ip @ 037f9b1c
    bl .L_037f8e1c @ 037f9b20
.L_037f9b24:
    add r4, r4, #2 @ 037f9b24
    rsb r3, r5, r4 @ 037f9b28
    cmp r6, r3 @ 037f9b2c
    bls .L_037f9b78 @ 037f9b30
.L_037f9b34:
    ldrb r0, [r4] @ 037f9b34
    and r3, r0, #0xf0 @ 037f9b38
    cmp r3, #0x20 @ 037f9b3c
    ldrb ip, [r4, #1] @ 037f9b40
    bne .L_037f9b1c @ 037f9b44
    sub r3, r0, #0x24 @ 037f9b48
    cmp r3, #7 @ 037f9b4c
    ldrls pc, [pc, r3, lsl #2] @ 037f9b50
    b .L_037f9b24 @ 037f9b54
    .byte 0x80, 0x9b, 0x7f, 0x03, 0xb8, 0x9b, 0x7f, 0x03, 0xf4, 0x9b, 0x7f, 0x03, 0x28, 0x9c, 0x7f, 0x03 @ 037f9b58
    .byte 0x54, 0x9c, 0x7f, 0x03, 0x24, 0x9b, 0x7f, 0x03, 0x24, 0x9b, 0x7f, 0x03, 0xf8, 0x9c, 0x7f, 0x03 @ 037f9b68
.L_037f9b78:
    pop {r4, r5, r6, r7, r8, lr} @ 037f9b78
    bx lr @ 037f9b7c
    ldr r0, [pc, #0x20c] @ 037f9b80
    ldr r2, [r0, #0x14] @ 037f9b84
    and r3, r2, #3 @ 037f9b88
    orr r1, r3, ip, lsl #2 @ 037f9b8c
    cmp r2, r1 @ 037f9b90
    beq .L_037f9b24 @ 037f9b94
    rsb r3, r1, #0x400 @ 037f9b98
    add r3, r3, r3, lsl #3 @ 037f9b9c
    lsl r3, r3, #1 @ 037f9ba0
    mov r2, #0 @ 037f9ba4
    str r2, [r0, #0x1c] @ 037f9ba8
    str r3, [r0, #0x18] @ 037f9bac
    str r1, [r0, #0x14] @ 037f9bb0
    b .L_037f9b24 @ 037f9bb4
    ldr lr, [pc, #0x1d4] @ 037f9bb8
    ldr r1, [lr, #0x14] @ 037f9bbc
    and r2, ip, #3 @ 037f9bc0
    and r3, r1, #0x3fc @ 037f9bc4
    orr r0, r3, r2 @ 037f9bc8
    cmp r1, r0 @ 037f9bcc
    beq .L_037f9b24 @ 037f9bd0
    rsb r3, r0, #0x400 @ 037f9bd4
    add r3, r3, r3, lsl #3 @ 037f9bd8
    lsl r3, r3, #1 @ 037f9bdc
    mov r2, #0 @ 037f9be0
    str r2, [lr, #0x1c] @ 037f9be4
    str r3, [lr, #0x18] @ 037f9be8
    str r0, [lr, #0x14] @ 037f9bec
    b .L_037f9b24 @ 037f9bf0
    ldr r1, [pc, #0x198] @ 037f9bf4
    ldrb r3, [r1, #0x20] @ 037f9bf8
    cmp ip, r3 @ 037f9bfc
    beq .L_037f9b24 @ 037f9c00
    rsb r3, ip, #0x100 @ 037f9c04
    lsl r2, r3, #7 @ 037f9c08
    add r2, r2, r3, lsl #4 @ 037f9c0c
    lsl r2, r2, #1 @ 037f9c10
    mov r3, #0 @ 037f9c14
    str r3, [r1, #0x28] @ 037f9c18
    str r2, [r1, #0x24] @ 037f9c1c
    strb ip, [r1, #0x20] @ 037f9c20
    b .L_037f9b24 @ 037f9c24
    ldr r2, [pc, #0x164] @ 037f9c28
    tst ip, #0x20 @ 037f9c2c
    ldrbne r3, [r2, #0x11] @ 037f9c30
    bicne r3, r3, #2 @ 037f9c34
    strbne r3, [r2, #0x11] @ 037f9c38
    tst ip, #0x10 @ 037f9c3c
    strb ip, [r2, #0x12] @ 037f9c40
    ldrbne r3, [r2, #0x11] @ 037f9c44
    bicne r3, r3, #1 @ 037f9c48
    strbne r3, [r2, #0x11] @ 037f9c4c
    b .L_037f9b24 @ 037f9c50
    and r3, ip, #3 @ 037f9c54
    cmp r3, #3 @ 037f9c58
    beq .L_037f9b24 @ 037f9c5c
    tst ip, #4 @ 037f9c60
    addne r3, r3, #3 @ 037f9c64
    add r3, r3, r3, lsl #1 @ 037f9c68
    ldr r2, [pc, #0x124] @ 037f9c6c
    add r3, r3, r3, lsl #3 @ 037f9c70
    ands r0, ip, #0x10 @ 037f9c74
    add r1, r2, r3, lsl #3 @ 037f9c78
    beq .L_037f9d08 @ 037f9c7c
    ldrb r3, [r1, #0x16] @ 037f9c80
    cmp r3, #0 @ 037f9c84
    streq r3, [r1, #0xc] @ 037f9c88
    strbeq r7, [r1, #0x16] @ 037f9c8c
    strbeq r8, [r1, #0x17] @ 037f9c90
.L_037f9c94:
    ands r0, ip, #0x20 @ 037f9c94
    beq .L_037f9d70 @ 037f9c98
    add r3, r1, #0x60 @ 037f9c9c
    ldrb r2, [r3, #0x16] @ 037f9ca0
    cmp r2, #0 @ 037f9ca4
    streq r2, [r3, #0xc] @ 037f9ca8
    strbeq r8, [r3, #0x17] @ 037f9cac
    strbeq r7, [r3, #0x16] @ 037f9cb0
.L_037f9cb4:
    ands r0, ip, #0x40 @ 037f9cb4
    beq .L_037f9d4c @ 037f9cb8
    add r3, r1, #0x30 @ 037f9cbc
    ldrb r2, [r3, #0x16] @ 037f9cc0
    cmp r2, #0 @ 037f9cc4
    streq r2, [r3, #0xc] @ 037f9cc8
    strbeq r8, [r3, #0x17] @ 037f9ccc
    strbeq r7, [r3, #0x16] @ 037f9cd0
.L_037f9cd4:
    ands r0, ip, #0x80 @ 037f9cd4
    beq .L_037f9d28 @ 037f9cd8
    add r3, r1, #0x90 @ 037f9cdc
    ldrb r2, [r3, #0x16] @ 037f9ce0
    cmp r2, #0 @ 037f9ce4
    streq r2, [r3, #0xc] @ 037f9ce8
    strbeq r8, [r3, #0x17] @ 037f9cec
    strbeq r7, [r3, #0x16] @ 037f9cf0
    b .L_037f9b24 @ 037f9cf4
    ldr r3, [pc, #0x94] @ 037f9cf8
    and r2, ip, #0x80 @ 037f9cfc
    str r2, [r3, #0x970] @ 037f9d00
    b .L_037f9b24 @ 037f9d04
.L_037f9d08:
    ldrb r3, [r1, #0x16] @ 037f9d08
    cmp r3, #0 @ 037f9d0c
    beq .L_037f9c94 @ 037f9d10
    ldrb r3, [r1, #0x17] @ 037f9d14
    cmp r3, #1 @ 037f9d18
    strb r0, [r1, #0x16] @ 037f9d1c
    strbhi r7, [r1, #0x17] @ 037f9d20
    b .L_037f9c94 @ 037f9d24
.L_037f9d28:
    add r2, r1, #0x90 @ 037f9d28
    ldrb r3, [r2, #0x16] @ 037f9d2c
    cmp r3, #0 @ 037f9d30
    beq .L_037f9b24 @ 037f9d34
    ldrb r3, [r2, #0x17] @ 037f9d38
    cmp r3, #1 @ 037f9d3c
    strb r0, [r2, #0x16] @ 037f9d40
    strbhi r7, [r2, #0x17] @ 037f9d44
    b .L_037f9b24 @ 037f9d48
.L_037f9d4c:
    add r2, r1, #0x30 @ 037f9d4c
    ldrb r3, [r2, #0x16] @ 037f9d50
    cmp r3, #0 @ 037f9d54
    beq .L_037f9cd4 @ 037f9d58
    ldrb r3, [r2, #0x17] @ 037f9d5c
    cmp r3, #1 @ 037f9d60
    strb r0, [r2, #0x16] @ 037f9d64
    strbhi r7, [r2, #0x17] @ 037f9d68
    b .L_037f9cd4 @ 037f9d6c
.L_037f9d70:
    add r2, r1, #0x60 @ 037f9d70
    ldrb r3, [r2, #0x16] @ 037f9d74
    cmp r3, #0 @ 037f9d78
    beq .L_037f9cb4 @ 037f9d7c
    ldrb r3, [r2, #0x17] @ 037f9d80
    cmp r3, #1 @ 037f9d84
    strb r0, [r2, #0x16] @ 037f9d88
    strbhi r7, [r2, #0x17] @ 037f9d8c
    b .L_037f9cb4 @ 037f9d90
    .byte 0xa8, 0x6e, 0x80, 0x03, 0x08, 0x73, 0x80, 0x03 @ 037f9d94
.L_037f9d9c:
@ FUN_037f9d9c at 0x037f9d9c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037f9d9c
    ldr sl, [pc, #0x198] @ 037f9da0
    ldr r3, [sl, #0x470] @ 037f9da4
    sub sp, sp, #0x84 @ 037f9da8
    cmn r3, #1 @ 037f9dac
    str r0, [sp, #4] @ 037f9db0
    mov sb, r1 @ 037f9db4
    beq .L_037fb290 @ 037f9db8
.L_037f9dbc:
    ldr r3, [sl, #0x548] @ 037f9dbc
    cmn r3, #1 @ 037f9dc0
    ldr ip, [pc, #0x174] @ 037f9dc4
    beq .L_037faebc @ 037f9dc8
.L_037f9dcc:
    ldrb r3, [sl, #0x12] @ 037f9dcc
    ands ip, r3, #0xc0 @ 037f9dd0
    ldr lr, [pc, #0x164] @ 037f9dd4
    beq .L_037f9f50 @ 037f9dd8
    ldr r3, [lr, #0x620] @ 037f9ddc
    cmn r3, #1 @ 037f9de0
    beq .L_037fb67c @ 037f9de4
.L_037f9de8:
    ldr r3, [sl, #0x6f8] @ 037f9de8
    cmn r3, #1 @ 037f9dec
    ldr ip, [pc, #0x148] @ 037f9df0
    beq .L_037fa328 @ 037f9df4
.L_037f9df8:
    ldr r3, [sl, #0x7d0] @ 037f9df8
    cmn r3, #1 @ 037f9dfc
    ldr ip, [pc, #0x138] @ 037f9e00
    beq .L_037fa708 @ 037f9e04
.L_037f9e08:
    ldr r3, [sl, #0x8a8] @ 037f9e08
    cmn r3, #1 @ 037f9e0c
    ldr ip, [pc, #0x128] @ 037f9e10
    beq .L_037faae8 @ 037f9e14
.L_037f9e18:
    cmp sb, #0 @ 037f9e18
    movle r0, #0 @ 037f9e1c
    ble .L_037f9f1c @ 037f9e20
    mov r0, #0x30000 @ 037f9e24
    ldr ip, [sl, #0x450] @ 037f9e28
    ldr r3, [sl, #0x454] @ 037f9e2c
    ldr lr, [sl, #0x458] @ 037f9e30
    sub r0, r0, #1 @ 037f9e34
    mov r1, sb @ 037f9e38
.L_037f9e3c:
    add r3, r3, lr @ 037f9e3c
    cmp r3, r0 @ 037f9e40
    bls .L_037f9e60 @ 037f9e44
    mov r2, #0x30000 @ 037f9e48
    sub r2, r2, #1 @ 037f9e4c
.L_037f9e50:
    sub r3, r3, #0x30000 @ 037f9e50
    cmp r3, r2 @ 037f9e54
    add ip, ip, #1 @ 037f9e58
    bhi .L_037f9e50 @ 037f9e5c
.L_037f9e60:
    subs r1, r1, #1 @ 037f9e60
    bne .L_037f9e3c @ 037f9e64
    ldr r4, [pc, #0xb8] @ 037f9e68
    ldr r0, [sp, #4] @ 037f9e6c
    mov r1, sb @ 037f9e70
    ldr r2, [pc, #0xb0] @ 037f9e74
    str ip, [sl, #0x45c] @ 037f9e78
    str lr, [sl, #0x458] @ 037f9e7c
    str r3, [sl, #0x454] @ 037f9e80
    bl .L_037f95fc @ 037f9e84
    ldr r3, [sp, #4] @ 037f9e88
    ldr r0, [r4, #4] @ 037f9e8c
    mov r1, sb @ 037f9e90
    add r0, r3, r0, lsl #1 @ 037f9e94
    ldr r2, [pc, #0x90] @ 037f9e98
    bl .L_037f95fc @ 037f9e9c
    ldr lr, [sp, #4] @ 037f9ea0
    ldr r0, [r4, #8] @ 037f9ea4
    mov r1, sb @ 037f9ea8
    add r0, lr, r0, lsl #1 @ 037f9eac
    ldr r2, [pc, #0x7c] @ 037f9eb0
    bl .L_037f95fc @ 037f9eb4
    ldr r1, [sp, #4] @ 037f9eb8
    ldr r0, [r4, #0xc] @ 037f9ebc
    ldr r2, [pc, #0x70] @ 037f9ec0
    add r0, r1, r0, lsl #1 @ 037f9ec4
    mov r1, sb @ 037f9ec8
    bl .L_037f95fc @ 037f9ecc
    ldr r2, [sp, #4] @ 037f9ed0
    ldr r0, [r4, #0x10] @ 037f9ed4
    mov r1, sb @ 037f9ed8
    add r0, r2, r0, lsl #1 @ 037f9edc
    ldr r2, [pc, #0x54] @ 037f9ee0
    bl .L_037f95fc @ 037f9ee4
    ldr r3, [sl, #0x970] @ 037f9ee8
    cmp r3, #0 @ 037f9eec
    beq .L_037fb660 @ 037f9ef0
    ldr r3, [r4, #0x14] @ 037f9ef4
    ldr r4, [sp, #4] @ 037f9ef8
    add r0, r4, r3, lsl #1 @ 037f9efc
.L_037f9f00:
    mov lr, #0 @ 037f9f00
    subs sb, sb, #1 @ 037f9f04
    strh lr, [r0], #2 @ 037f9f08
    bne .L_037f9f00 @ 037f9f0c
.L_037f9f10:
    ldr r3, [sl, #0x45c] @ 037f9f10
    str r3, [sl, #0x450] @ 037f9f14
    mov r0, #1 @ 037f9f18
.L_037f9f1c:
    add sp, sp, #0x84 @ 037f9f1c
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037f9f20
    bx lr @ 037f9f24
    .byte 0x88, 0x6e, 0x80, 0x03, 0x08, 0x73, 0x80, 0x03, 0xe0, 0x73, 0x80, 0x03, 0xb8, 0x74, 0x80, 0x03 @ 037f9f28
    .byte 0x90, 0x75, 0x80, 0x03, 0x68, 0x76, 0x80, 0x03, 0xa8, 0x6e, 0x80, 0x03, 0x28, 0x6c, 0x80, 0x03 @ 037f9f38
    .byte 0x28, 0x6b, 0x80, 0x03, 0xa8, 0x6b, 0x80, 0x03 @ 037f9f48
.L_037f9f50:
    ldr r3, [lr, #0x620] @ 037f9f50
    cmn r3, #1 @ 037f9f54
    bne .L_037f9de8 @ 037f9f58
    ldrb r2, [lr, #0x6dc] @ 037f9f5c
    str r2, [sp, #0x1c] @ 037f9f60
    ldrb r3, [lr, #0x624] @ 037f9f64
    asr r4, r2, r3 @ 037f9f68
    ldr r3, [sp, #0x1c] @ 037f9f6c
    ldr r2, [lr, #0x610] @ 037f9f70
    lsl r3, r3, #2 @ 037f9f74
    str r3, [sp, #0x18] @ 037f9f78
    ldr fp, [lr, #0x6e0] @ 037f9f7c
    ldr r3, [r2, r3] @ 037f9f80
    ldr r0, [lr, #0x618] @ 037f9f84
    add r3, fp, r3 @ 037f9f88
    mul r2, r0, r3 @ 037f9f8c
    ldrb r1, [lr, #0x625] @ 037f9f90
    lsr r2, r2, #1 @ 037f9f94
    cmp r4, r1 @ 037f9f98
    str r2, [lr, #0x620] @ 037f9f9c
    beq .L_037fa058 @ 037f9fa0
    ldrb r3, [lr, #0x614] @ 037f9fa4
    and r2, r4, #0xff @ 037f9fa8
    add r1, r3, r2 @ 037f9fac
    cmp r1, #0x5d @ 037f9fb0
    ldrle r4, [pc, #-0x74] @ 037f9fb4
    ldrble r3, [r4, r1] @ 037f9fb8
    strb r2, [lr, #0x625] @ 037f9fbc
    ldrle lr, [pc, #-0x7c] @ 037f9fc0
    lslle r3, r3, #0x18 @ 037f9fc4
    ldrble r0, [lr, r1] @ 037f9fc8
    strgt ip, [sp, #0x64] @ 037f9fcc
    strle r3, [sp, #0x64] @ 037f9fd0
    ldrb r1, [sl, #0x615] @ 037f9fd4
    ldrb r3, [sl, #0x625] @ 037f9fd8
    ldrb ip, [sl, #0x616] @ 037f9fdc
    ldr lr, [pc, #-0x9c] @ 037f9fe0
    ldrb r2, [sl, #0x617] @ 037f9fe4
    add r1, r1, r3 @ 037f9fe8
    add ip, ip, r3 @ 037f9fec
    add r2, r2, r3 @ 037f9ff0
    ldrb r6, [lr, r1] @ 037f9ff4
    ldr r3, [pc, #-0xb4] @ 037f9ff8
    ldrb r7, [lr, ip] @ 037f9ffc
    ldr lr, [pc, #-0xc0] @ 037fa000
    ldrb r4, [r3, r2] @ 037fa004
    ldrb r8, [lr, r2] @ 037fa008
    ldr r3, [pc, #-0xd0] @ 037fa00c
    ldr r2, [pc, #-0xd0] @ 037fa010
    ldr lr, [r3, r4, lsl #2] @ 037fa014
    ldrb r4, [r2, r1] @ 037fa018
    ldr r1, [pc, #-0xdc] @ 037fa01c
    movgt r0, #0x11 @ 037fa020
    ldr r0, [r3, r0, lsl #2] @ 037fa024
    ldr r2, [r3, r6, lsl #2] @ 037fa028
    ldrb r5, [r1, ip] @ 037fa02c
    ldr r1, [r3, r7, lsl #2] @ 037fa030
    ldr r3, [sp, #0x64] @ 037fa034
    orr r2, r2, r4, lsl #24 @ 037fa038
    orr r0, r3, r0 @ 037fa03c
    orr r1, r1, r5, lsl #24 @ 037fa040
    orr lr, lr, r8, lsl #24 @ 037fa044
    str r0, [sl, #0x630] @ 037fa048
    str r2, [sl, #0x634] @ 037fa04c
    str r1, [sl, #0x638] @ 037fa050
    str lr, [sl, #0x63c] @ 037fa054
.L_037fa058:
    ldrb r3, [sl, #0x684] @ 037fa058
    ldr r4, [sp, #0x1c] @ 037fa05c
    asr ip, r4, r3 @ 037fa060
    ldr r2, [sl, #0x670] @ 037fa064
    ldr lr, [sp, #0x18] @ 037fa068
    ldr r3, [lr, r2] @ 037fa06c
    ldr r0, [sl, #0x678] @ 037fa070
    add r3, fp, r3 @ 037fa074
    mul r2, r0, r3 @ 037fa078
    ldrb r1, [sl, #0x685] @ 037fa07c
    lsr r2, r2, #1 @ 037fa080
    cmp ip, r1 @ 037fa084
    str r2, [sl, #0x680] @ 037fa088
    ldr r0, [pc, #-0x154] @ 037fa08c
    beq .L_037fa148 @ 037fa090
    ldrb r3, [r0, #0x674] @ 037fa094
    and r2, ip, #0xff @ 037fa098
    add r1, r3, r2 @ 037fa09c
    cmp r1, #0x5d @ 037fa0a0
    strb r2, [r0, #0x685] @ 037fa0a4
    ldrle r2, [pc, #-0x168] @ 037fa0a8
    ldrble r3, [r2, r1] @ 037fa0ac
    ldrle r4, [pc, #-0x16c] @ 037fa0b0
    movgt r1, #0 @ 037fa0b4
    lslle r3, r3, #0x18 @ 037fa0b8
    ldrble r0, [r4, r1] @ 037fa0bc
    strgt r1, [sp, #0x60] @ 037fa0c0
    strle r3, [sp, #0x60] @ 037fa0c4
    ldrb r1, [sl, #0x675] @ 037fa0c8
    ldrb r3, [sl, #0x685] @ 037fa0cc
    ldrb ip, [sl, #0x676] @ 037fa0d0
    ldrb r2, [sl, #0x677] @ 037fa0d4
    ldr lr, [pc, #-0x194] @ 037fa0d8
    add r2, r2, r3 @ 037fa0dc
    add r1, r1, r3 @ 037fa0e0
    add ip, ip, r3 @ 037fa0e4
    ldrb r4, [lr, r2] @ 037fa0e8
    ldrb r6, [lr, r1] @ 037fa0ec
    ldrb r7, [lr, ip] @ 037fa0f0
    ldr lr, [pc, #-0x1b4] @ 037fa0f4
    ldr r3, [pc, #-0x1bc] @ 037fa0f8
    ldrb r8, [lr, r2] @ 037fa0fc
    ldr r2, [pc, #-0x1c0] @ 037fa100
    ldr lr, [r3, r4, lsl #2] @ 037fa104
    ldrb r4, [r2, r1] @ 037fa108
    ldr r1, [pc, #-0x1cc] @ 037fa10c
    movgt r0, #0x11 @ 037fa110
    ldr r0, [r3, r0, lsl #2] @ 037fa114
    ldr r2, [r3, r6, lsl #2] @ 037fa118
    ldrb r5, [r1, ip] @ 037fa11c
    ldr r1, [r3, r7, lsl #2] @ 037fa120
    ldr r3, [sp, #0x60] @ 037fa124
    orr r2, r2, r4, lsl #24 @ 037fa128
    orr r0, r3, r0 @ 037fa12c
    orr r1, r1, r5, lsl #24 @ 037fa130
    orr lr, lr, r8, lsl #24 @ 037fa134
    str r0, [sl, #0x690] @ 037fa138
    str r2, [sl, #0x694] @ 037fa13c
    str r1, [sl, #0x698] @ 037fa140
    str lr, [sl, #0x69c] @ 037fa144
.L_037fa148:
    ldrb r3, [sl, #0x654] @ 037fa148
    ldr r4, [sp, #0x1c] @ 037fa14c
    asr ip, r4, r3 @ 037fa150
    ldr r2, [sl, #0x640] @ 037fa154
    ldr lr, [sp, #0x18] @ 037fa158
    ldr r3, [lr, r2] @ 037fa15c
    ldr r0, [sl, #0x648] @ 037fa160
    add r3, fp, r3 @ 037fa164
    mul r2, r0, r3 @ 037fa168
    ldrb r1, [sl, #0x655] @ 037fa16c
    lsr r2, r2, #1 @ 037fa170
    cmp ip, r1 @ 037fa174
    str r2, [sl, #0x650] @ 037fa178
    ldr r0, [pc, #-0x244] @ 037fa17c
    beq .L_037fa238 @ 037fa180
    ldrb r3, [r0, #0x644] @ 037fa184
    and r2, ip, #0xff @ 037fa188
    add r1, r3, r2 @ 037fa18c
    cmp r1, #0x5d @ 037fa190
    strb r2, [r0, #0x655] @ 037fa194
    ldrle r2, [pc, #-0x258] @ 037fa198
    ldrble r3, [r2, r1] @ 037fa19c
    ldrle r4, [pc, #-0x25c] @ 037fa1a0
    movgt r1, #0 @ 037fa1a4
    lslle r3, r3, #0x18 @ 037fa1a8
    ldrble r0, [r4, r1] @ 037fa1ac
    strgt r1, [sp, #0x5c] @ 037fa1b0
    strle r3, [sp, #0x5c] @ 037fa1b4
    ldrb r1, [sl, #0x645] @ 037fa1b8
    ldrb r3, [sl, #0x655] @ 037fa1bc
    ldrb ip, [sl, #0x646] @ 037fa1c0
    ldrb r2, [sl, #0x647] @ 037fa1c4
    ldr lr, [pc, #-0x284] @ 037fa1c8
    add r2, r2, r3 @ 037fa1cc
    add r1, r1, r3 @ 037fa1d0
    add ip, ip, r3 @ 037fa1d4
    ldrb r4, [lr, r2] @ 037fa1d8
    ldrb r6, [lr, r1] @ 037fa1dc
    ldrb r7, [lr, ip] @ 037fa1e0
    ldr lr, [pc, #-0x2a4] @ 037fa1e4
    ldr r3, [pc, #-0x2ac] @ 037fa1e8
    ldrb r8, [lr, r2] @ 037fa1ec
    ldr r2, [pc, #-0x2b0] @ 037fa1f0
    ldr lr, [r3, r4, lsl #2] @ 037fa1f4
    ldrb r4, [r2, r1] @ 037fa1f8
    ldr r1, [pc, #-0x2bc] @ 037fa1fc
    movgt r0, #0x11 @ 037fa200
    ldr r0, [r3, r0, lsl #2] @ 037fa204
    ldr r2, [r3, r6, lsl #2] @ 037fa208
    ldrb r5, [r1, ip] @ 037fa20c
    ldr r1, [r3, r7, lsl #2] @ 037fa210
    ldr r3, [sp, #0x5c] @ 037fa214
    orr r2, r2, r4, lsl #24 @ 037fa218
    orr r0, r3, r0 @ 037fa21c
    orr r1, r1, r5, lsl #24 @ 037fa220
    orr lr, lr, r8, lsl #24 @ 037fa224
    str r0, [sl, #0x660] @ 037fa228
    str r2, [sl, #0x664] @ 037fa22c
    str r1, [sl, #0x668] @ 037fa230
    str lr, [sl, #0x66c] @ 037fa234
.L_037fa238:
    ldrb r3, [sl, #0x6b4] @ 037fa238
    ldr r4, [sp, #0x1c] @ 037fa23c
    asr ip, r4, r3 @ 037fa240
    ldr r2, [sl, #0x6a0] @ 037fa244
    ldr lr, [sp, #0x18] @ 037fa248
    ldr r3, [lr, r2] @ 037fa24c
    ldr r0, [sl, #0x6a8] @ 037fa250
    add r3, fp, r3 @ 037fa254
    mul r2, r0, r3 @ 037fa258
    ldrb r1, [sl, #0x6b5] @ 037fa25c
    lsr r2, r2, #1 @ 037fa260
    cmp ip, r1 @ 037fa264
    str r2, [sl, #0x6b0] @ 037fa268
    ldr r0, [pc, #-0x334] @ 037fa26c
    beq .L_037f9de8 @ 037fa270
    ldrb r3, [r0, #0x6a4] @ 037fa274
    and r2, ip, #0xff @ 037fa278
    add r1, r3, r2 @ 037fa27c
    cmp r1, #0x5d @ 037fa280
    strb r2, [r0, #0x6b5] @ 037fa284
    bgt .L_037fb994 @ 037fa288
    ldr r2, [pc, #-0x34c] @ 037fa28c
    ldr r4, [pc, #-0x34c] @ 037fa290
    ldrb r3, [r2, r1] @ 037fa294
    ldrb r0, [r4, r1] @ 037fa298
    lsl fp, r3, #0x18 @ 037fa29c
.L_037fa2a0:
    ldrb r3, [sl, #0x6b5] @ 037fa2a0
    ldrb r1, [sl, #0x6a5] @ 037fa2a4
    ldrb ip, [sl, #0x6a6] @ 037fa2a8
    ldrb r2, [sl, #0x6a7] @ 037fa2ac
    ldr lr, [pc, #-0x36c] @ 037fa2b0
    add r2, r2, r3 @ 037fa2b4
    add r1, r1, r3 @ 037fa2b8
    add ip, ip, r3 @ 037fa2bc
    ldrb r4, [lr, r2] @ 037fa2c0
    ldrb r6, [lr, r1] @ 037fa2c4
    ldrb r7, [lr, ip] @ 037fa2c8
    ldr lr, [pc, #-0x38c] @ 037fa2cc
    ldr r3, [pc, #-0x394] @ 037fa2d0
    ldrb r8, [lr, r2] @ 037fa2d4
    ldr r2, [pc, #-0x398] @ 037fa2d8
    ldr lr, [r3, r4, lsl #2] @ 037fa2dc
    ldrb r4, [r2, r1] @ 037fa2e0
    ldr r1, [pc, #-0x3a4] @ 037fa2e4
    ldr r0, [r3, r0, lsl #2] @ 037fa2e8
    ldrb r5, [r1, ip] @ 037fa2ec
    ldr r2, [r3, r6, lsl #2] @ 037fa2f0
    ldr r1, [r3, r7, lsl #2] @ 037fa2f4
    ldr r3, [sl, #0x6f8] @ 037fa2f8
    orr r0, r0, fp @ 037fa2fc
    orr r2, r2, r4, lsl #24 @ 037fa300
    orr r1, r1, r5, lsl #24 @ 037fa304
    orr lr, lr, r8, lsl #24 @ 037fa308
    cmn r3, #1 @ 037fa30c
    str r0, [sl, #0x6c0] @ 037fa310
    str r2, [sl, #0x6c4] @ 037fa314
    str r1, [sl, #0x6c8] @ 037fa318
    str lr, [sl, #0x6cc] @ 037fa31c
    ldr ip, [pc, #-0x3e8] @ 037fa320
    bne .L_037f9df8 @ 037fa324
.L_037fa328:
    ldrb r2, [ip, #0x7b4] @ 037fa328
    str r2, [sp, #0x24] @ 037fa32c
    ldrb r3, [ip, #0x6fc] @ 037fa330
    asr lr, r2, r3 @ 037fa334
    ldr r3, [sp, #0x24] @ 037fa338
    ldr r2, [ip, #0x6e8] @ 037fa33c
    lsl r3, r3, #2 @ 037fa340
    str r3, [sp, #0x20] @ 037fa344
    ldr fp, [ip, #0x7b8] @ 037fa348
    ldr r3, [r2, r3] @ 037fa34c
    ldr r0, [ip, #0x6f0] @ 037fa350
    add r3, fp, r3 @ 037fa354
    mul r2, r0, r3 @ 037fa358
    ldrb r1, [ip, #0x6fd] @ 037fa35c
    lsr r2, r2, #1 @ 037fa360
    cmp lr, r1 @ 037fa364
    str r2, [ip, #0x6f8] @ 037fa368
    beq .L_037fa428 @ 037fa36c
    ldrb r3, [ip, #0x6ec] @ 037fa370
    and r2, lr, #0xff @ 037fa374
    add r1, r3, r2 @ 037fa378
    cmp r1, #0x5d @ 037fa37c
    ldrle lr, [pc, #-0x440] @ 037fa380
    ldrble r3, [lr, r1] @ 037fa384
    strb r2, [ip, #0x6fd] @ 037fa388
    ldrle r2, [pc, #-0x448] @ 037fa38c
    lslle r3, r3, #0x18 @ 037fa390
    ldrble r0, [r2, r1] @ 037fa394
    strle r3, [sp, #0x58] @ 037fa398
    ldrb ip, [sl, #0x6ed] @ 037fa39c
    ldrb r3, [sl, #0x6fd] @ 037fa3a0
    ldrb lr, [sl, #0x6ee] @ 037fa3a4
    ldrb r2, [sl, #0x6ef] @ 037fa3a8
    movgt r4, #0 @ 037fa3ac
    add r2, r2, r3 @ 037fa3b0
    add ip, ip, r3 @ 037fa3b4
    add lr, lr, r3 @ 037fa3b8
    strgt r4, [sp, #0x58] @ 037fa3bc
    ldr r3, [pc, #-0x47c] @ 037fa3c0
    ldr r4, [pc, #-0x480] @ 037fa3c4
    ldrb r1, [r3, r2] @ 037fa3c8
    ldrb r6, [r4, ip] @ 037fa3cc
    ldr r3, [pc, #-0x494] @ 037fa3d0
    ldrb r7, [r4, lr] @ 037fa3d4
    ldr r4, [pc, #-0x498] @ 037fa3d8
    ldrb r8, [r4, r2] @ 037fa3dc
    ldr r4, [r3, r1, lsl #2] @ 037fa3e0
    ldr r2, [pc, #-0x4a4] @ 037fa3e4
    ldr r1, [pc, #-0x4a8] @ 037fa3e8
    movgt r0, #0x11 @ 037fa3ec
    ldrb r5, [r1, ip] @ 037fa3f0
    ldr r0, [r3, r0, lsl #2] @ 037fa3f4
    ldr r1, [r3, r6, lsl #2] @ 037fa3f8
    ldrb ip, [r2, lr] @ 037fa3fc
    ldr r2, [r3, r7, lsl #2] @ 037fa400
    ldr r3, [sp, #0x58] @ 037fa404
    orr r1, r1, r5, lsl #24 @ 037fa408
    orr r0, r0, r3 @ 037fa40c
    orr r2, r2, ip, lsl #24 @ 037fa410
    orr r4, r4, r8, lsl #24 @ 037fa414
    str r0, [sl, #0x708] @ 037fa418
    str r1, [sl, #0x70c] @ 037fa41c
    str r2, [sl, #0x710] @ 037fa420
    str r4, [sl, #0x714] @ 037fa424
.L_037fa428:
    ldrb r3, [sl, #0x75c] @ 037fa428
    ldr r4, [sp, #0x24] @ 037fa42c
    asr ip, r4, r3 @ 037fa430
    ldr r2, [sl, #0x748] @ 037fa434
    ldr lr, [sp, #0x20] @ 037fa438
    ldr r3, [lr, r2] @ 037fa43c
    ldr r0, [sl, #0x750] @ 037fa440
    add r3, fp, r3 @ 037fa444
    mul r2, r0, r3 @ 037fa448
    ldrb r1, [sl, #0x75d] @ 037fa44c
    lsr r2, r2, #1 @ 037fa450
    cmp ip, r1 @ 037fa454
    str r2, [sl, #0x758] @ 037fa458
    ldr r0, [pc, #-0x524] @ 037fa45c
    beq .L_037fa51c @ 037fa460
    ldrb r3, [r0, #0x74c] @ 037fa464
    and r2, ip, #0xff @ 037fa468
    add r1, r3, r2 @ 037fa46c
    cmp r1, #0x5d @ 037fa470
    strb r2, [r0, #0x75d] @ 037fa474
    ldrle r2, [pc, #-0x538] @ 037fa478
    ldrble r3, [r2, r1] @ 037fa47c
    lslle r3, r3, #0x18 @ 037fa480
    ldrle r4, [pc, #-0x540] @ 037fa484
    strle r3, [sp, #0x54] @ 037fa488
    ldrb ip, [sl, #0x74d] @ 037fa48c
    ldrb r3, [sl, #0x75d] @ 037fa490
    ldrb lr, [sl, #0x74e] @ 037fa494
    ldrb r2, [sl, #0x74f] @ 037fa498
    add ip, ip, r3 @ 037fa49c
    add r2, r2, r3 @ 037fa4a0
    ldrble r0, [r4, r1] @ 037fa4a4
    add lr, lr, r3 @ 037fa4a8
    ldr r4, [pc, #-0x568] @ 037fa4ac
    ldr r3, [pc, #-0x56c] @ 037fa4b0
    movgt r1, #0 @ 037fa4b4
    ldrb r6, [r4, ip] @ 037fa4b8
    strgt r1, [sp, #0x54] @ 037fa4bc
    ldrb r7, [r4, lr] @ 037fa4c0
    ldrb r1, [r3, r2] @ 037fa4c4
    ldr r4, [pc, #-0x588] @ 037fa4c8
    ldr r3, [pc, #-0x590] @ 037fa4cc
    ldrb r8, [r4, r2] @ 037fa4d0
    ldr r4, [r3, r1, lsl #2] @ 037fa4d4
    ldr r2, [pc, #-0x598] @ 037fa4d8
    ldr r1, [pc, #-0x59c] @ 037fa4dc
    movgt r0, #0x11 @ 037fa4e0
    ldrb r5, [r1, ip] @ 037fa4e4
    ldr r0, [r3, r0, lsl #2] @ 037fa4e8
    ldr r1, [r3, r6, lsl #2] @ 037fa4ec
    ldrb ip, [r2, lr] @ 037fa4f0
    ldr r2, [r3, r7, lsl #2] @ 037fa4f4
    ldr r3, [sp, #0x54] @ 037fa4f8
    orr r1, r1, r5, lsl #24 @ 037fa4fc
    orr r0, r0, r3 @ 037fa500
    orr r2, r2, ip, lsl #24 @ 037fa504
    orr r4, r4, r8, lsl #24 @ 037fa508
    str r0, [sl, #0x768] @ 037fa50c
    str r1, [sl, #0x76c] @ 037fa510
    str r2, [sl, #0x770] @ 037fa514
    str r4, [sl, #0x774] @ 037fa518
.L_037fa51c:
    ldrb r3, [sl, #0x72c] @ 037fa51c
    ldr r4, [sp, #0x24] @ 037fa520
    asr ip, r4, r3 @ 037fa524
    ldr r2, [sl, #0x718] @ 037fa528
    ldr lr, [sp, #0x20] @ 037fa52c
    ldr r3, [lr, r2] @ 037fa530
    ldr r0, [sl, #0x720] @ 037fa534
    add r3, fp, r3 @ 037fa538
    mul r2, r0, r3 @ 037fa53c
    ldrb r1, [sl, #0x72d] @ 037fa540
    lsr r2, r2, #1 @ 037fa544
    cmp ip, r1 @ 037fa548
    str r2, [sl, #0x728] @ 037fa54c
    ldr r0, [pc, #-0x618] @ 037fa550
    beq .L_037fa610 @ 037fa554
    ldrb r3, [r0, #0x71c] @ 037fa558
    and r2, ip, #0xff @ 037fa55c
    add r1, r3, r2 @ 037fa560
    cmp r1, #0x5d @ 037fa564
    strb r2, [r0, #0x72d] @ 037fa568
    ldrle r2, [pc, #-0x62c] @ 037fa56c
    ldrble r3, [r2, r1] @ 037fa570
    lslle r3, r3, #0x18 @ 037fa574
    ldrle r4, [pc, #-0x634] @ 037fa578
    strle r3, [sp, #0x50] @ 037fa57c
    ldrb ip, [sl, #0x71d] @ 037fa580
    ldrb r3, [sl, #0x72d] @ 037fa584
    ldrb lr, [sl, #0x71e] @ 037fa588
    ldrb r2, [sl, #0x71f] @ 037fa58c
    add ip, ip, r3 @ 037fa590
    add r2, r2, r3 @ 037fa594
    ldrble r0, [r4, r1] @ 037fa598
    add lr, lr, r3 @ 037fa59c
    ldr r4, [pc, #-0x65c] @ 037fa5a0
    ldr r3, [pc, #-0x660] @ 037fa5a4
    movgt r1, #0 @ 037fa5a8
    ldrb r6, [r4, ip] @ 037fa5ac
    strgt r1, [sp, #0x50] @ 037fa5b0
    ldrb r7, [r4, lr] @ 037fa5b4
    ldrb r1, [r3, r2] @ 037fa5b8
    ldr r4, [pc, #-0x67c] @ 037fa5bc
    ldr r3, [pc, #-0x684] @ 037fa5c0
    ldrb r8, [r4, r2] @ 037fa5c4
    ldr r4, [r3, r1, lsl #2] @ 037fa5c8
    ldr r2, [pc, #-0x68c] @ 037fa5cc
    ldr r1, [pc, #-0x690] @ 037fa5d0
    movgt r0, #0x11 @ 037fa5d4
    ldrb r5, [r1, ip] @ 037fa5d8
    ldr r0, [r3, r0, lsl #2] @ 037fa5dc
    ldr r1, [r3, r6, lsl #2] @ 037fa5e0
    ldrb ip, [r2, lr] @ 037fa5e4
    ldr r2, [r3, r7, lsl #2] @ 037fa5e8
    ldr r3, [sp, #0x50] @ 037fa5ec
    orr r1, r1, r5, lsl #24 @ 037fa5f0
    orr r0, r0, r3 @ 037fa5f4
    orr r2, r2, ip, lsl #24 @ 037fa5f8
    orr r4, r4, r8, lsl #24 @ 037fa5fc
    str r0, [sl, #0x738] @ 037fa600
    str r1, [sl, #0x73c] @ 037fa604
    str r2, [sl, #0x740] @ 037fa608
    str r4, [sl, #0x744] @ 037fa60c
.L_037fa610:
    ldrb r3, [sl, #0x78c] @ 037fa610
    ldr r4, [sp, #0x24] @ 037fa614
    asr ip, r4, r3 @ 037fa618
    ldr r2, [sl, #0x778] @ 037fa61c
    ldr lr, [sp, #0x20] @ 037fa620
    ldr r3, [lr, r2] @ 037fa624
    ldr r0, [sl, #0x780] @ 037fa628
    add r3, fp, r3 @ 037fa62c
    mul r2, r0, r3 @ 037fa630
    ldrb r1, [sl, #0x78d] @ 037fa634
    lsr r2, r2, #1 @ 037fa638
    cmp ip, r1 @ 037fa63c
    str r2, [sl, #0x788] @ 037fa640
    ldr r0, [pc, #-0x70c] @ 037fa644
    beq .L_037f9df8 @ 037fa648
    ldrb r3, [r0, #0x77c] @ 037fa64c
    and r2, ip, #0xff @ 037fa650
    add r1, r3, r2 @ 037fa654
    cmp r1, #0x5d @ 037fa658
    strb r2, [r0, #0x78d] @ 037fa65c
    ldrle r2, [pc, #-0x720] @ 037fa660
    ldrble r3, [r2, r1] @ 037fa664
    ldrle r4, [pc, #-0x724] @ 037fa668
    lslle fp, r3, #0x18 @ 037fa66c
    ldrb ip, [sl, #0x77d] @ 037fa670
    ldrb r3, [sl, #0x78d] @ 037fa674
    ldrb lr, [sl, #0x77e] @ 037fa678
    ldrb r2, [sl, #0x77f] @ 037fa67c
    ldrble r0, [r4, r1] @ 037fa680
    add r2, r2, r3 @ 037fa684
    add ip, ip, r3 @ 037fa688
    add lr, lr, r3 @ 037fa68c
    ldr r4, [pc, #-0x74c] @ 037fa690
    ldr r3, [pc, #-0x750] @ 037fa694
    ldrb r6, [r4, ip] @ 037fa698
    ldrb r1, [r3, r2] @ 037fa69c
    ldrb r7, [r4, lr] @ 037fa6a0
    ldr r3, [pc, #-0x768] @ 037fa6a4
    ldr r4, [pc, #-0x768] @ 037fa6a8
    ldrb r8, [r4, r2] @ 037fa6ac
    ldr r4, [r3, r1, lsl #2] @ 037fa6b0
    ldr r2, [pc, #-0x774] @ 037fa6b4
    ldr r1, [pc, #-0x778] @ 037fa6b8
    movgt r0, #0x11 @ 037fa6bc
    ldrb r5, [r1, ip] @ 037fa6c0
    ldr r0, [r3, r0, lsl #2] @ 037fa6c4
    ldrb ip, [r2, lr] @ 037fa6c8
    ldr r1, [r3, r6, lsl #2] @ 037fa6cc
    ldr r2, [r3, r7, lsl #2] @ 037fa6d0
    ldr r3, [sl, #0x7d0] @ 037fa6d4
    movgt fp, #0 @ 037fa6d8
    orr r2, r2, ip, lsl #24 @ 037fa6dc
    orr r0, r0, fp @ 037fa6e0
    orr r1, r1, r5, lsl #24 @ 037fa6e4
    orr r4, r4, r8, lsl #24 @ 037fa6e8
    cmn r3, #1 @ 037fa6ec
    str r0, [sl, #0x798] @ 037fa6f0
    str r1, [sl, #0x79c] @ 037fa6f4
    str r2, [sl, #0x7a0] @ 037fa6f8
    str r4, [sl, #0x7a4] @ 037fa6fc
    ldr ip, [pc, #-0x7c8] @ 037fa700
    bne .L_037f9e08 @ 037fa704
.L_037fa708:
    ldrb r3, [ip, #0x88c] @ 037fa708
    str r3, [sp, #0x2c] @ 037fa70c
    ldr r4, [sp, #0x2c] @ 037fa710
    ldrb r3, [ip, #0x7d4] @ 037fa714
    asr lr, r4, r3 @ 037fa718
    ldr r2, [ip, #0x7c0] @ 037fa71c
    lsl r1, r4, #2 @ 037fa720
    ldr r3, [r2, r1] @ 037fa724
    ldr fp, [ip, #0x890] @ 037fa728
    ldr r0, [ip, #0x7c8] @ 037fa72c
    add r3, fp, r3 @ 037fa730
    mul r2, r0, r3 @ 037fa734
    str r1, [sp, #0x28] @ 037fa738
    ldrb r1, [ip, #0x7d5] @ 037fa73c
    lsr r2, r2, #1 @ 037fa740
    cmp lr, r1 @ 037fa744
    str r2, [ip, #0x7d0] @ 037fa748
    beq .L_037fa808 @ 037fa74c
    ldrb r3, [ip, #0x7c4] @ 037fa750
    and r2, lr, #0xff @ 037fa754
    add r1, r3, r2 @ 037fa758
    cmp r1, #0x5d @ 037fa75c
    ldrle r4, [pc, #-0x820] @ 037fa760
    ldrble r3, [r4, r1] @ 037fa764
    strb r2, [ip, #0x7d5] @ 037fa768
    ldrle lr, [pc, #-0x828] @ 037fa76c
    movgt r2, #0 @ 037fa770
    lslle r3, r3, #0x18 @ 037fa774
    ldrble r0, [lr, r1] @ 037fa778
    strgt r2, [sp, #0x4c] @ 037fa77c
    strle r3, [sp, #0x4c] @ 037fa780
    ldrb ip, [sl, #0x7c5] @ 037fa784
    ldrb r3, [sl, #0x7d5] @ 037fa788
    ldrb lr, [sl, #0x7c6] @ 037fa78c
    ldrb r2, [sl, #0x7c7] @ 037fa790
    add ip, ip, r3 @ 037fa794
    add r2, r2, r3 @ 037fa798
    add lr, lr, r3 @ 037fa79c
    ldr r4, [pc, #-0x85c] @ 037fa7a0
    ldr r3, [pc, #-0x860] @ 037fa7a4
    ldrb r6, [r4, ip] @ 037fa7a8
    ldrb r1, [r3, r2] @ 037fa7ac
    ldrb r7, [r4, lr] @ 037fa7b0
    ldr r3, [pc, #-0x878] @ 037fa7b4
    ldr r4, [pc, #-0x878] @ 037fa7b8
    ldrb r8, [r4, r2] @ 037fa7bc
    ldr r4, [r3, r1, lsl #2] @ 037fa7c0
    ldr r2, [pc, #-0x884] @ 037fa7c4
    ldr r1, [pc, #-0x888] @ 037fa7c8
    movgt r0, #0x11 @ 037fa7cc
    ldrb r5, [r1, ip] @ 037fa7d0
    ldr r0, [r3, r0, lsl #2] @ 037fa7d4
    ldr r1, [r3, r6, lsl #2] @ 037fa7d8
    ldrb ip, [r2, lr] @ 037fa7dc
    ldr r2, [r3, r7, lsl #2] @ 037fa7e0
    ldr r3, [sp, #0x4c] @ 037fa7e4
    orr r1, r1, r5, lsl #24 @ 037fa7e8
    orr r0, r0, r3 @ 037fa7ec
    orr r2, r2, ip, lsl #24 @ 037fa7f0
    orr r4, r4, r8, lsl #24 @ 037fa7f4
    str r0, [sl, #0x7e0] @ 037fa7f8
    str r1, [sl, #0x7e4] @ 037fa7fc
    str r2, [sl, #0x7e8] @ 037fa800
    str r4, [sl, #0x7ec] @ 037fa804
.L_037fa808:
    ldrb r3, [sl, #0x834] @ 037fa808
    ldr r4, [sp, #0x2c] @ 037fa80c
    asr ip, r4, r3 @ 037fa810
    ldr r2, [sl, #0x820] @ 037fa814
    ldr lr, [sp, #0x28] @ 037fa818
    ldr r3, [lr, r2] @ 037fa81c
    ldr r0, [sl, #0x828] @ 037fa820
    add r3, fp, r3 @ 037fa824
    mul r2, r0, r3 @ 037fa828
    ldrb r1, [sl, #0x835] @ 037fa82c
    lsr r2, r2, #1 @ 037fa830
    cmp ip, r1 @ 037fa834
    str r2, [sl, #0x830] @ 037fa838
    ldr r0, [pc, #-0x904] @ 037fa83c
    beq .L_037fa8fc @ 037fa840
    ldrb r3, [r0, #0x824] @ 037fa844
    and r2, ip, #0xff @ 037fa848
    add r1, r3, r2 @ 037fa84c
    cmp r1, #0x5d @ 037fa850
    strb r2, [r0, #0x835] @ 037fa854
    ldrle r2, [pc, #-0x918] @ 037fa858
    ldrble r3, [r2, r1] @ 037fa85c
    lslle r3, r3, #0x18 @ 037fa860
    ldrle r4, [pc, #-0x920] @ 037fa864
    strle r3, [sp, #0x48] @ 037fa868
    ldrb ip, [sl, #0x825] @ 037fa86c
    ldrb r3, [sl, #0x835] @ 037fa870
    ldrb lr, [sl, #0x826] @ 037fa874
    ldrb r2, [sl, #0x827] @ 037fa878
    add ip, ip, r3 @ 037fa87c
    add r2, r2, r3 @ 037fa880
    ldrble r0, [r4, r1] @ 037fa884
    add lr, lr, r3 @ 037fa888
    ldr r4, [pc, #-0x948] @ 037fa88c
    ldr r3, [pc, #-0x94c] @ 037fa890
    movgt r1, #0 @ 037fa894
    ldrb r6, [r4, ip] @ 037fa898
    strgt r1, [sp, #0x48] @ 037fa89c
    ldrb r7, [r4, lr] @ 037fa8a0
    ldrb r1, [r3, r2] @ 037fa8a4
    ldr r4, [pc, #-0x968] @ 037fa8a8
    ldr r3, [pc, #-0x970] @ 037fa8ac
    ldrb r8, [r4, r2] @ 037fa8b0
    ldr r4, [r3, r1, lsl #2] @ 037fa8b4
    ldr r2, [pc, #-0x978] @ 037fa8b8
    ldr r1, [pc, #-0x97c] @ 037fa8bc
    movgt r0, #0x11 @ 037fa8c0
    ldrb r5, [r1, ip] @ 037fa8c4
    ldr r0, [r3, r0, lsl #2] @ 037fa8c8
    ldr r1, [r3, r6, lsl #2] @ 037fa8cc
    ldrb ip, [r2, lr] @ 037fa8d0
    ldr r2, [r3, r7, lsl #2] @ 037fa8d4
    ldr r3, [sp, #0x48] @ 037fa8d8
    orr r1, r1, r5, lsl #24 @ 037fa8dc
    orr r0, r0, r3 @ 037fa8e0
    orr r2, r2, ip, lsl #24 @ 037fa8e4
    orr r4, r4, r8, lsl #24 @ 037fa8e8
    str r0, [sl, #0x840] @ 037fa8ec
    str r1, [sl, #0x844] @ 037fa8f0
    str r2, [sl, #0x848] @ 037fa8f4
    str r4, [sl, #0x84c] @ 037fa8f8
.L_037fa8fc:
    ldrb r3, [sl, #0x804] @ 037fa8fc
    ldr r4, [sp, #0x2c] @ 037fa900
    asr ip, r4, r3 @ 037fa904
    ldr r2, [sl, #0x7f0] @ 037fa908
    ldr lr, [sp, #0x28] @ 037fa90c
    ldr r3, [lr, r2] @ 037fa910
    ldr r0, [sl, #0x7f8] @ 037fa914
    add r3, fp, r3 @ 037fa918
    mul r2, r0, r3 @ 037fa91c
    ldrb r1, [sl, #0x805] @ 037fa920
    lsr r2, r2, #1 @ 037fa924
    cmp ip, r1 @ 037fa928
    str r2, [sl, #0x800] @ 037fa92c
    ldr r0, [pc, #-0x9f8] @ 037fa930
    beq .L_037fa9f0 @ 037fa934
    ldrb r3, [r0, #0x7f4] @ 037fa938
    and r2, ip, #0xff @ 037fa93c
    add r1, r3, r2 @ 037fa940
    cmp r1, #0x5d @ 037fa944
    strb r2, [r0, #0x805] @ 037fa948
    ldrle r2, [pc, #-0xa0c] @ 037fa94c
    ldrble r3, [r2, r1] @ 037fa950
    lslle r3, r3, #0x18 @ 037fa954
    ldrle r4, [pc, #-0xa14] @ 037fa958
    strle r3, [sp, #0x44] @ 037fa95c
    ldrb ip, [sl, #0x7f5] @ 037fa960
    ldrb r3, [sl, #0x805] @ 037fa964
    ldrb lr, [sl, #0x7f6] @ 037fa968
    ldrb r2, [sl, #0x7f7] @ 037fa96c
    add ip, ip, r3 @ 037fa970
    add r2, r2, r3 @ 037fa974
    ldrble r0, [r4, r1] @ 037fa978
    add lr, lr, r3 @ 037fa97c
    ldr r4, [pc, #-0xa3c] @ 037fa980
    ldr r3, [pc, #-0xa40] @ 037fa984
    movgt r1, #0 @ 037fa988
    ldrb r6, [r4, ip] @ 037fa98c
    strgt r1, [sp, #0x44] @ 037fa990
    ldrb r7, [r4, lr] @ 037fa994
    ldrb r1, [r3, r2] @ 037fa998
    ldr r4, [pc, #-0xa5c] @ 037fa99c
    ldr r3, [pc, #-0xa64] @ 037fa9a0
    ldrb r8, [r4, r2] @ 037fa9a4
    ldr r4, [r3, r1, lsl #2] @ 037fa9a8
    ldr r2, [pc, #-0xa6c] @ 037fa9ac
    ldr r1, [pc, #-0xa70] @ 037fa9b0
    movgt r0, #0x11 @ 037fa9b4
    ldrb r5, [r1, ip] @ 037fa9b8
    ldr r0, [r3, r0, lsl #2] @ 037fa9bc
    ldr r1, [r3, r6, lsl #2] @ 037fa9c0
    ldrb ip, [r2, lr] @ 037fa9c4
    ldr r2, [r3, r7, lsl #2] @ 037fa9c8
    ldr r3, [sp, #0x44] @ 037fa9cc
    orr r1, r1, r5, lsl #24 @ 037fa9d0
    orr r0, r0, r3 @ 037fa9d4
    orr r2, r2, ip, lsl #24 @ 037fa9d8
    orr r4, r4, r8, lsl #24 @ 037fa9dc
    str r0, [sl, #0x810] @ 037fa9e0
    str r1, [sl, #0x814] @ 037fa9e4
    str r2, [sl, #0x818] @ 037fa9e8
    str r4, [sl, #0x81c] @ 037fa9ec
.L_037fa9f0:
    ldrb r3, [sl, #0x864] @ 037fa9f0
    ldr r4, [sp, #0x2c] @ 037fa9f4
    asr ip, r4, r3 @ 037fa9f8
    ldr r2, [sl, #0x850] @ 037fa9fc
    ldr lr, [sp, #0x28] @ 037faa00
    ldr r3, [lr, r2] @ 037faa04
    ldr r0, [sl, #0x858] @ 037faa08
    add r3, fp, r3 @ 037faa0c
    mul r2, r0, r3 @ 037faa10
    ldrb r1, [sl, #0x865] @ 037faa14
    lsr r2, r2, #1 @ 037faa18
    cmp ip, r1 @ 037faa1c
    str r2, [sl, #0x860] @ 037faa20
    ldr r0, [pc, #-0xaec] @ 037faa24
    beq .L_037f9e08 @ 037faa28
    ldrb r3, [r0, #0x854] @ 037faa2c
    and r2, ip, #0xff @ 037faa30
    add r1, r3, r2 @ 037faa34
    cmp r1, #0x5d @ 037faa38
    strb r2, [r0, #0x865] @ 037faa3c
    ldrle r2, [pc, #-0xb00] @ 037faa40
    ldrble r3, [r2, r1] @ 037faa44
    ldrle r4, [pc, #-0xb04] @ 037faa48
    lslle fp, r3, #0x18 @ 037faa4c
    ldrb ip, [sl, #0x855] @ 037faa50
    ldrb r3, [sl, #0x865] @ 037faa54
    ldrb lr, [sl, #0x856] @ 037faa58
    ldrb r2, [sl, #0x857] @ 037faa5c
    ldrble r0, [r4, r1] @ 037faa60
    add r2, r2, r3 @ 037faa64
    add ip, ip, r3 @ 037faa68
    add lr, lr, r3 @ 037faa6c
    ldr r4, [pc, #-0xb2c] @ 037faa70
    ldr r3, [pc, #-0xb30] @ 037faa74
    ldrb r6, [r4, ip] @ 037faa78
    ldrb r1, [r3, r2] @ 037faa7c
    ldrb r7, [r4, lr] @ 037faa80
    ldr r3, [pc, #-0xb48] @ 037faa84
    ldr r4, [pc, #-0xb48] @ 037faa88
    ldrb r8, [r4, r2] @ 037faa8c
    ldr r4, [r3, r1, lsl #2] @ 037faa90
    ldr r2, [pc, #-0xb54] @ 037faa94
    ldr r1, [pc, #-0xb58] @ 037faa98
    movgt r0, #0x11 @ 037faa9c
    ldrb r5, [r1, ip] @ 037faaa0
    ldr r0, [r3, r0, lsl #2] @ 037faaa4
    ldrb ip, [r2, lr] @ 037faaa8
    ldr r1, [r3, r6, lsl #2] @ 037faaac
    ldr r2, [r3, r7, lsl #2] @ 037faab0
    ldr r3, [sl, #0x8a8] @ 037faab4
    movgt fp, #0 @ 037faab8
    orr r2, r2, ip, lsl #24 @ 037faabc
    orr r0, r0, fp @ 037faac0
    orr r1, r1, r5, lsl #24 @ 037faac4
    orr r4, r4, r8, lsl #24 @ 037faac8
    cmn r3, #1 @ 037faacc
    str r0, [sl, #0x870] @ 037faad0
    str r1, [sl, #0x874] @ 037faad4
    str r2, [sl, #0x878] @ 037faad8
    str r4, [sl, #0x87c] @ 037faadc
    ldr ip, [pc, #-0xba8] @ 037faae0
    bne .L_037f9e18 @ 037faae4
.L_037faae8:
    ldrb r3, [ip, #0x964] @ 037faae8
    str r3, [sp, #0x34] @ 037faaec
    ldr r4, [sp, #0x34] @ 037faaf0
    ldrb r3, [ip, #0x8ac] @ 037faaf4
    asr lr, r4, r3 @ 037faaf8
    ldr r2, [ip, #0x898] @ 037faafc
    lsl r1, r4, #2 @ 037fab00
    ldr r3, [r2, r1] @ 037fab04
    ldr fp, [ip, #0x968] @ 037fab08
    ldr r0, [ip, #0x8a0] @ 037fab0c
    add r3, fp, r3 @ 037fab10
    mul r2, r0, r3 @ 037fab14
    str r1, [sp, #0x30] @ 037fab18
    ldrb r1, [ip, #0x8ad] @ 037fab1c
    lsr r2, r2, #1 @ 037fab20
    cmp lr, r1 @ 037fab24
    str r2, [ip, #0x8a8] @ 037fab28
    beq .L_037fabe8 @ 037fab2c
    ldrb r3, [ip, #0x89c] @ 037fab30
    and r2, lr, #0xff @ 037fab34
    add r1, r3, r2 @ 037fab38
    cmp r1, #0x5d @ 037fab3c
    ldrle r4, [pc, #-0xc00] @ 037fab40
    ldrble r3, [r4, r1] @ 037fab44
    strb r2, [ip, #0x8ad] @ 037fab48
    ldrle lr, [pc, #-0xc08] @ 037fab4c
    movgt r2, #0 @ 037fab50
    lslle r3, r3, #0x18 @ 037fab54
    ldrble r0, [lr, r1] @ 037fab58
    strgt r2, [sp, #0x40] @ 037fab5c
    strle r3, [sp, #0x40] @ 037fab60
    ldrb ip, [sl, #0x89d] @ 037fab64
    ldrb r3, [sl, #0x8ad] @ 037fab68
    ldrb lr, [sl, #0x89e] @ 037fab6c
    ldrb r2, [sl, #0x89f] @ 037fab70
    add ip, ip, r3 @ 037fab74
    add r2, r2, r3 @ 037fab78
    add lr, lr, r3 @ 037fab7c
    ldr r4, [pc, #-0xc3c] @ 037fab80
    ldr r3, [pc, #-0xc40] @ 037fab84
    ldrb r6, [r4, ip] @ 037fab88
    ldrb r1, [r3, r2] @ 037fab8c
    ldrb r7, [r4, lr] @ 037fab90
    ldr r3, [pc, #-0xc58] @ 037fab94
    ldr r4, [pc, #-0xc58] @ 037fab98
    ldrb r8, [r4, r2] @ 037fab9c
    ldr r4, [r3, r1, lsl #2] @ 037faba0
    ldr r2, [pc, #-0xc64] @ 037faba4
    ldr r1, [pc, #-0xc68] @ 037faba8
    movgt r0, #0x11 @ 037fabac
    ldrb r5, [r1, ip] @ 037fabb0
    ldr r0, [r3, r0, lsl #2] @ 037fabb4
    ldr r1, [r3, r6, lsl #2] @ 037fabb8
    ldrb ip, [r2, lr] @ 037fabbc
    ldr r2, [r3, r7, lsl #2] @ 037fabc0
    ldr r3, [sp, #0x40] @ 037fabc4
    orr r1, r1, r5, lsl #24 @ 037fabc8
    orr r0, r0, r3 @ 037fabcc
    orr r2, r2, ip, lsl #24 @ 037fabd0
    orr r4, r4, r8, lsl #24 @ 037fabd4
    str r0, [sl, #0x8b8] @ 037fabd8
    str r1, [sl, #0x8bc] @ 037fabdc
    str r2, [sl, #0x8c0] @ 037fabe0
    str r4, [sl, #0x8c4] @ 037fabe4
.L_037fabe8:
    ldrb r3, [sl, #0x90c] @ 037fabe8
    ldr r4, [sp, #0x34] @ 037fabec
    asr ip, r4, r3 @ 037fabf0
    ldr r2, [sl, #0x8f8] @ 037fabf4
    ldr lr, [sp, #0x30] @ 037fabf8
    ldr r3, [lr, r2] @ 037fabfc
    ldr r0, [sl, #0x900] @ 037fac00
    add r3, fp, r3 @ 037fac04
    mul r2, r0, r3 @ 037fac08
    ldrb r1, [sl, #0x90d] @ 037fac0c
    lsr r2, r2, #1 @ 037fac10
    cmp ip, r1 @ 037fac14
    str r2, [sl, #0x908] @ 037fac18
    ldr r0, [pc, #-0xce4] @ 037fac1c
    beq .L_037facdc @ 037fac20
    ldrb r3, [r0, #0x8fc] @ 037fac24
    and r2, ip, #0xff @ 037fac28
    add r1, r3, r2 @ 037fac2c
    cmp r1, #0x5d @ 037fac30
    strb r2, [r0, #0x90d] @ 037fac34
    ldrle r2, [pc, #-0xcf8] @ 037fac38
    ldrble r3, [r2, r1] @ 037fac3c
    lslle r3, r3, #0x18 @ 037fac40
    ldrle r4, [pc, #-0xd00] @ 037fac44
    strle r3, [sp, #0x3c] @ 037fac48
    ldrb ip, [sl, #0x8fd] @ 037fac4c
    ldrb r3, [sl, #0x90d] @ 037fac50
    ldrb lr, [sl, #0x8fe] @ 037fac54
    ldrb r2, [sl, #0x8ff] @ 037fac58
    add ip, ip, r3 @ 037fac5c
    add r2, r2, r3 @ 037fac60
    ldrble r0, [r4, r1] @ 037fac64
    add lr, lr, r3 @ 037fac68
    ldr r4, [pc, #-0xd28] @ 037fac6c
    ldr r3, [pc, #-0xd2c] @ 037fac70
    movgt r1, #0 @ 037fac74
    ldrb r6, [r4, ip] @ 037fac78
    strgt r1, [sp, #0x3c] @ 037fac7c
    ldrb r7, [r4, lr] @ 037fac80
    ldrb r1, [r3, r2] @ 037fac84
    ldr r4, [pc, #-0xd48] @ 037fac88
    ldr r3, [pc, #-0xd50] @ 037fac8c
    ldrb r8, [r4, r2] @ 037fac90
    ldr r4, [r3, r1, lsl #2] @ 037fac94
    ldr r2, [pc, #-0xd58] @ 037fac98
    ldr r1, [pc, #-0xd5c] @ 037fac9c
    movgt r0, #0x11 @ 037faca0
    ldrb r5, [r1, ip] @ 037faca4
    ldr r0, [r3, r0, lsl #2] @ 037faca8
    ldr r1, [r3, r6, lsl #2] @ 037facac
    ldrb ip, [r2, lr] @ 037facb0
    ldr r2, [r3, r7, lsl #2] @ 037facb4
    ldr r3, [sp, #0x3c] @ 037facb8
    orr r1, r1, r5, lsl #24 @ 037facbc
    orr r0, r0, r3 @ 037facc0
    orr r2, r2, ip, lsl #24 @ 037facc4
    orr r4, r4, r8, lsl #24 @ 037facc8
    str r0, [sl, #0x918] @ 037faccc
    str r1, [sl, #0x91c] @ 037facd0
    str r2, [sl, #0x920] @ 037facd4
    str r4, [sl, #0x924] @ 037facd8
.L_037facdc:
    ldrb r3, [sl, #0x8dc] @ 037facdc
    ldr r4, [sp, #0x34] @ 037face0
    asr ip, r4, r3 @ 037face4
    ldr r2, [sl, #0x8c8] @ 037face8
    ldr lr, [sp, #0x30] @ 037facec
    ldr r3, [lr, r2] @ 037facf0
    ldr r0, [sl, #0x8d0] @ 037facf4
    add r3, fp, r3 @ 037facf8
    mul r2, r0, r3 @ 037facfc
    ldrb r1, [sl, #0x8dd] @ 037fad00
    lsr r2, r2, #1 @ 037fad04
    cmp ip, r1 @ 037fad08
    str r2, [sl, #0x8d8] @ 037fad0c
    ldr r0, [pc, #-0xdd8] @ 037fad10
    beq .L_037fadd0 @ 037fad14
    ldrb r3, [r0, #0x8cc] @ 037fad18
    and r2, ip, #0xff @ 037fad1c
    add r1, r3, r2 @ 037fad20
    cmp r1, #0x5d @ 037fad24
    strb r2, [r0, #0x8dd] @ 037fad28
    ldrle r2, [pc, #-0xdec] @ 037fad2c
    ldrble r3, [r2, r1] @ 037fad30
    lslle r3, r3, #0x18 @ 037fad34
    ldrle r4, [pc, #-0xdf4] @ 037fad38
    strle r3, [sp, #0x38] @ 037fad3c
    ldrb ip, [sl, #0x8cd] @ 037fad40
    ldrb r3, [sl, #0x8dd] @ 037fad44
    ldrb lr, [sl, #0x8ce] @ 037fad48
    ldrb r2, [sl, #0x8cf] @ 037fad4c
    add ip, ip, r3 @ 037fad50
    add r2, r2, r3 @ 037fad54
    ldrble r0, [r4, r1] @ 037fad58
    add lr, lr, r3 @ 037fad5c
    ldr r4, [pc, #-0xe1c] @ 037fad60
    ldr r3, [pc, #-0xe20] @ 037fad64
    movgt r1, #0 @ 037fad68
    ldrb r6, [r4, ip] @ 037fad6c
    strgt r1, [sp, #0x38] @ 037fad70
    ldrb r7, [r4, lr] @ 037fad74
    ldrb r1, [r3, r2] @ 037fad78
    ldr r4, [pc, #-0xe3c] @ 037fad7c
    ldr r3, [pc, #-0xe44] @ 037fad80
    ldrb r8, [r4, r2] @ 037fad84
    ldr r4, [r3, r1, lsl #2] @ 037fad88
    ldr r2, [pc, #-0xe4c] @ 037fad8c
    ldr r1, [pc, #-0xe50] @ 037fad90
    movgt r0, #0x11 @ 037fad94
    ldrb r5, [r1, ip] @ 037fad98
    ldr r0, [r3, r0, lsl #2] @ 037fad9c
    ldr r1, [r3, r6, lsl #2] @ 037fada0
    ldrb ip, [r2, lr] @ 037fada4
    ldr r2, [r3, r7, lsl #2] @ 037fada8
    ldr r3, [sp, #0x38] @ 037fadac
    orr r1, r1, r5, lsl #24 @ 037fadb0
    orr r0, r3, r0 @ 037fadb4
    orr r2, r2, ip, lsl #24 @ 037fadb8
    orr r4, r4, r8, lsl #24 @ 037fadbc
    str r0, [sl, #0x8e8] @ 037fadc0
    str r1, [sl, #0x8ec] @ 037fadc4
    str r2, [sl, #0x8f0] @ 037fadc8
    str r4, [sl, #0x8f4] @ 037fadcc
.L_037fadd0:
    ldrb r3, [sl, #0x93c] @ 037fadd0
    ldr r4, [sp, #0x34] @ 037fadd4
    asr ip, r4, r3 @ 037fadd8
    ldr r2, [sl, #0x928] @ 037faddc
    ldr lr, [sp, #0x30] @ 037fade0
    ldr r3, [lr, r2] @ 037fade4
    ldr r0, [sl, #0x930] @ 037fade8
    add r3, fp, r3 @ 037fadec
    mul r2, r0, r3 @ 037fadf0
    ldrb r1, [sl, #0x93d] @ 037fadf4
    lsr r2, r2, #1 @ 037fadf8
    cmp ip, r1 @ 037fadfc
    str r2, [sl, #0x938] @ 037fae00
    ldr r0, [pc, #-0xecc] @ 037fae04
    beq .L_037f9e18 @ 037fae08
    ldrb r3, [r0, #0x92c] @ 037fae0c
    and r2, ip, #0xff @ 037fae10
    add r1, r3, r2 @ 037fae14
    cmp r1, #0x5d @ 037fae18
    strb r2, [r0, #0x93d] @ 037fae1c
    ldrle r2, [pc, #-0xee0] @ 037fae20
    ldrble r3, [r2, r1] @ 037fae24
    ldrle r4, [pc, #-0xee4] @ 037fae28
    lslle fp, r3, #0x18 @ 037fae2c
    ldrb ip, [sl, #0x92d] @ 037fae30
    ldrb r3, [sl, #0x93d] @ 037fae34
    ldrb lr, [sl, #0x92e] @ 037fae38
    ldrb r2, [sl, #0x92f] @ 037fae3c
    add ip, ip, r3 @ 037fae40
    add r2, r2, r3 @ 037fae44
    ldrble r0, [r4, r1] @ 037fae48
    add lr, lr, r3 @ 037fae4c
    ldr r4, [pc, #-0xf0c] @ 037fae50
    ldr r3, [pc, #-0xf10] @ 037fae54
    ldrb r6, [r4, ip] @ 037fae58
    ldrb r1, [r3, r2] @ 037fae5c
    ldrb r7, [r4, lr] @ 037fae60
    ldr r3, [pc, #-0xf28] @ 037fae64
    ldr r4, [pc, #-0xf28] @ 037fae68
    ldrb r8, [r4, r2] @ 037fae6c
    ldr r4, [r3, r1, lsl #2] @ 037fae70
    ldr r2, [pc, #-0xf34] @ 037fae74
    ldr r1, [pc, #-0xf38] @ 037fae78
    movgt r0, #0x11 @ 037fae7c
    ldrb r5, [r1, ip] @ 037fae80
    ldr r0, [r3, r0, lsl #2] @ 037fae84
    ldrb ip, [r2, lr] @ 037fae88
    ldr r1, [r3, r6, lsl #2] @ 037fae8c
    ldr r2, [r3, r7, lsl #2] @ 037fae90
    movgt fp, #0 @ 037fae94
    orr r0, fp, r0 @ 037fae98
    orr r1, r1, r5, lsl #24 @ 037fae9c
    orr r2, r2, ip, lsl #24 @ 037faea0
    orr r4, r4, r8, lsl #24 @ 037faea4
    str r0, [sl, #0x948] @ 037faea8
    str r1, [sl, #0x94c] @ 037faeac
    str r2, [sl, #0x950] @ 037faeb0
    str r4, [sl, #0x954] @ 037faeb4
    b .L_037f9e18 @ 037faeb8
.L_037faebc:
    ldrb r3, [ip, #0x604] @ 037faebc
    str r3, [sp, #0x14] @ 037faec0
    ldr r4, [sp, #0x14] @ 037faec4
    ldrb r3, [ip, #0x54c] @ 037faec8
    asr lr, r4, r3 @ 037faecc
    ldr r2, [ip, #0x538] @ 037faed0
    lsl r1, r4, #2 @ 037faed4
    ldr r3, [r2, r1] @ 037faed8
    ldr fp, [ip, #0x608] @ 037faedc
    ldr r0, [ip, #0x540] @ 037faee0
    add r3, fp, r3 @ 037faee4
    mul r2, r0, r3 @ 037faee8
    str r1, [sp, #0x10] @ 037faeec
    ldrb r1, [ip, #0x54d] @ 037faef0
    lsr r2, r2, #1 @ 037faef4
    cmp lr, r1 @ 037faef8
    str r2, [ip, #0x548] @ 037faefc
    beq .L_037fafbc @ 037faf00
    ldrb r3, [ip, #0x53c] @ 037faf04
    and r2, lr, #0xff @ 037faf08
    add r1, r3, r2 @ 037faf0c
    cmp r1, #0x5d @ 037faf10
    ldrle r4, [pc, #-0xfd4] @ 037faf14
    ldrble r3, [r4, r1] @ 037faf18
    strb r2, [ip, #0x54d] @ 037faf1c
    ldrle lr, [pc, #-0xfdc] @ 037faf20
    movgt r2, #0 @ 037faf24
    lslle r3, r3, #0x18 @ 037faf28
    ldrble r0, [lr, r1] @ 037faf2c
    strgt r2, [sp, #0x70] @ 037faf30
    strle r3, [sp, #0x70] @ 037faf34
    ldrb ip, [sl, #0x53d] @ 037faf38
    ldrb r3, [sl, #0x54d] @ 037faf3c
    ldrb lr, [sl, #0x53e] @ 037faf40
    ldrb r2, [sl, #0x53f] @ 037faf44
    add ip, ip, r3 @ 037faf48
    add r2, r2, r3 @ 037faf4c
    add lr, lr, r3 @ 037faf50
    ldr r4, [pc, #0xa44] @ 037faf54
    ldr r3, [pc, #0xa40] @ 037faf58
    ldrb r6, [r4, ip] @ 037faf5c
    ldrb r1, [r3, r2] @ 037faf60
    ldrb r7, [r4, lr] @ 037faf64
    ldr r3, [pc, #0xa34] @ 037faf68
    ldr r4, [pc, #0xa34] @ 037faf6c
    ldrb r8, [r4, r2] @ 037faf70
    ldr r4, [r3, r1, lsl #2] @ 037faf74
    ldr r2, [pc, #0xa28] @ 037faf78
    ldr r1, [pc, #0xa24] @ 037faf7c
    movgt r0, #0x11 @ 037faf80
    ldrb r5, [r1, ip] @ 037faf84
    ldr r0, [r3, r0, lsl #2] @ 037faf88
    ldr r1, [r3, r6, lsl #2] @ 037faf8c
    ldrb ip, [r2, lr] @ 037faf90
    ldr r2, [r3, r7, lsl #2] @ 037faf94
    ldr r3, [sp, #0x70] @ 037faf98
    orr r1, r1, r5, lsl #24 @ 037faf9c
    orr r0, r3, r0 @ 037fafa0
    orr r2, r2, ip, lsl #24 @ 037fafa4
    orr r4, r4, r8, lsl #24 @ 037fafa8
    str r0, [sl, #0x558] @ 037fafac
    str r1, [sl, #0x55c] @ 037fafb0
    str r2, [sl, #0x560] @ 037fafb4
    str r4, [sl, #0x564] @ 037fafb8
.L_037fafbc:
    ldrb r3, [sl, #0x5ac] @ 037fafbc
    ldr r4, [sp, #0x14] @ 037fafc0
    asr ip, r4, r3 @ 037fafc4
    ldr r2, [sl, #0x598] @ 037fafc8
    ldr lr, [sp, #0x10] @ 037fafcc
    ldr r3, [lr, r2] @ 037fafd0
    ldr r0, [sl, #0x5a0] @ 037fafd4
    add r3, fp, r3 @ 037fafd8
    mul r2, r0, r3 @ 037fafdc
    ldrb r1, [sl, #0x5ad] @ 037fafe0
    lsr r2, r2, #1 @ 037fafe4
    cmp ip, r1 @ 037fafe8
    str r2, [sl, #0x5a8] @ 037fafec
    ldr r0, [pc, #0x9b4] @ 037faff0
    beq .L_037fb0b0 @ 037faff4
    ldrb r3, [r0, #0x59c] @ 037faff8
    and r2, ip, #0xff @ 037faffc
    add r1, r3, r2 @ 037fb000
    cmp r1, #0x5d @ 037fb004
    strb r2, [r0, #0x5ad] @ 037fb008
    ldrle r2, [pc, #0x994] @ 037fb00c
    ldrble r3, [r2, r1] @ 037fb010
    lslle r3, r3, #0x18 @ 037fb014
    ldrle r4, [pc, #0x980] @ 037fb018
    strle r3, [sp, #0x6c] @ 037fb01c
    ldrb ip, [sl, #0x59d] @ 037fb020
    ldrb r3, [sl, #0x5ad] @ 037fb024
    ldrb lr, [sl, #0x59e] @ 037fb028
    ldrb r2, [sl, #0x59f] @ 037fb02c
    add ip, ip, r3 @ 037fb030
    add r2, r2, r3 @ 037fb034
    ldrble r0, [r4, r1] @ 037fb038
    add lr, lr, r3 @ 037fb03c
    ldr r4, [pc, #0x958] @ 037fb040
    ldr r3, [pc, #0x954] @ 037fb044
    movgt r1, #0 @ 037fb048
    ldrb r6, [r4, ip] @ 037fb04c
    strgt r1, [sp, #0x6c] @ 037fb050
    ldrb r7, [r4, lr] @ 037fb054
    ldrb r1, [r3, r2] @ 037fb058
    ldr r4, [pc, #0x944] @ 037fb05c
    ldr r3, [pc, #0x93c] @ 037fb060
    ldrb r8, [r4, r2] @ 037fb064
    ldr r4, [r3, r1, lsl #2] @ 037fb068
    ldr r2, [pc, #0x934] @ 037fb06c
    ldr r1, [pc, #0x930] @ 037fb070
    movgt r0, #0x11 @ 037fb074
    ldrb r5, [r1, ip] @ 037fb078
    ldr r0, [r3, r0, lsl #2] @ 037fb07c
    ldr r1, [r3, r6, lsl #2] @ 037fb080
    ldrb ip, [r2, lr] @ 037fb084
    ldr r2, [r3, r7, lsl #2] @ 037fb088
    ldr r3, [sp, #0x6c] @ 037fb08c
    orr r1, r1, r5, lsl #24 @ 037fb090
    orr r0, r3, r0 @ 037fb094
    orr r2, r2, ip, lsl #24 @ 037fb098
    orr r4, r4, r8, lsl #24 @ 037fb09c
    str r0, [sl, #0x5b8] @ 037fb0a0
    str r1, [sl, #0x5bc] @ 037fb0a4
    str r2, [sl, #0x5c0] @ 037fb0a8
    str r4, [sl, #0x5c4] @ 037fb0ac
.L_037fb0b0:
    ldrb r3, [sl, #0x57c] @ 037fb0b0
    ldr r4, [sp, #0x14] @ 037fb0b4
    asr ip, r4, r3 @ 037fb0b8
    ldr r2, [sl, #0x568] @ 037fb0bc
    ldr lr, [sp, #0x10] @ 037fb0c0
    ldr r3, [lr, r2] @ 037fb0c4
    ldr r0, [sl, #0x570] @ 037fb0c8
    add r3, fp, r3 @ 037fb0cc
    mul r2, r0, r3 @ 037fb0d0
    ldrb r1, [sl, #0x57d] @ 037fb0d4
    lsr r2, r2, #1 @ 037fb0d8
    cmp ip, r1 @ 037fb0dc
    str r2, [sl, #0x578] @ 037fb0e0
    ldr r0, [pc, #0x8c0] @ 037fb0e4
    beq .L_037fb1a4 @ 037fb0e8
    ldrb r3, [r0, #0x56c] @ 037fb0ec
    and r2, ip, #0xff @ 037fb0f0
    add r1, r3, r2 @ 037fb0f4
    cmp r1, #0x5d @ 037fb0f8
    strb r2, [r0, #0x57d] @ 037fb0fc
    ldrle r2, [pc, #0x8a0] @ 037fb100
    ldrble r3, [r2, r1] @ 037fb104
    lslle r3, r3, #0x18 @ 037fb108
    ldrle r4, [pc, #0x88c] @ 037fb10c
    strle r3, [sp, #0x68] @ 037fb110
    ldrb ip, [sl, #0x56d] @ 037fb114
    ldrb r3, [sl, #0x57d] @ 037fb118
    ldrb lr, [sl, #0x56e] @ 037fb11c
    ldrb r2, [sl, #0x56f] @ 037fb120
    add ip, ip, r3 @ 037fb124
    add r2, r2, r3 @ 037fb128
    ldrble r0, [r4, r1] @ 037fb12c
    add lr, lr, r3 @ 037fb130
    ldr r4, [pc, #0x864] @ 037fb134
    ldr r3, [pc, #0x860] @ 037fb138
    movgt r1, #0 @ 037fb13c
    ldrb r6, [r4, ip] @ 037fb140
    strgt r1, [sp, #0x68] @ 037fb144
    ldrb r7, [r4, lr] @ 037fb148
    ldrb r1, [r3, r2] @ 037fb14c
    ldr r4, [pc, #0x850] @ 037fb150
    ldr r3, [pc, #0x848] @ 037fb154
    ldrb r8, [r4, r2] @ 037fb158
    ldr r4, [r3, r1, lsl #2] @ 037fb15c
    ldr r2, [pc, #0x840] @ 037fb160
    ldr r1, [pc, #0x83c] @ 037fb164
    movgt r0, #0x11 @ 037fb168
    ldrb r5, [r1, ip] @ 037fb16c
    ldr r0, [r3, r0, lsl #2] @ 037fb170
    ldr r1, [r3, r6, lsl #2] @ 037fb174
    ldrb ip, [r2, lr] @ 037fb178
    ldr r2, [r3, r7, lsl #2] @ 037fb17c
    ldr r3, [sp, #0x68] @ 037fb180
    orr r1, r1, r5, lsl #24 @ 037fb184
    orr r0, r3, r0 @ 037fb188
    orr r2, r2, ip, lsl #24 @ 037fb18c
    orr r4, r4, r8, lsl #24 @ 037fb190
    str r0, [sl, #0x588] @ 037fb194
    str r1, [sl, #0x58c] @ 037fb198
    str r2, [sl, #0x590] @ 037fb19c
    str r4, [sl, #0x594] @ 037fb1a0
.L_037fb1a4:
    ldrb r3, [sl, #0x5dc] @ 037fb1a4
    ldr r4, [sp, #0x14] @ 037fb1a8
    asr ip, r4, r3 @ 037fb1ac
    ldr r2, [sl, #0x5c8] @ 037fb1b0
    ldr lr, [sp, #0x10] @ 037fb1b4
    ldr r3, [lr, r2] @ 037fb1b8
    ldr r0, [sl, #0x5d0] @ 037fb1bc
    add r3, fp, r3 @ 037fb1c0
    mul r2, r0, r3 @ 037fb1c4
    ldrb r1, [sl, #0x5dd] @ 037fb1c8
    lsr r2, r2, #1 @ 037fb1cc
    cmp ip, r1 @ 037fb1d0
    str r2, [sl, #0x5d8] @ 037fb1d4
    ldr r0, [pc, #0x7cc] @ 037fb1d8
    beq .L_037f9dcc @ 037fb1dc
    ldrb r3, [r0, #0x5cc] @ 037fb1e0
    and r2, ip, #0xff @ 037fb1e4
    add r1, r3, r2 @ 037fb1e8
    cmp r1, #0x5d @ 037fb1ec
    strb r2, [r0, #0x5dd] @ 037fb1f0
    ldrle r2, [pc, #0x7ac] @ 037fb1f4
    ldrble r3, [r2, r1] @ 037fb1f8
    ldrle r4, [pc, #0x79c] @ 037fb1fc
    lslle fp, r3, #0x18 @ 037fb200
    ldrb ip, [sl, #0x5cd] @ 037fb204
    ldrb r3, [sl, #0x5dd] @ 037fb208
    ldrb lr, [sl, #0x5ce] @ 037fb20c
    ldrb r2, [sl, #0x5cf] @ 037fb210
    add ip, ip, r3 @ 037fb214
    add r2, r2, r3 @ 037fb218
    ldrble r0, [r4, r1] @ 037fb21c
    add lr, lr, r3 @ 037fb220
    ldr r4, [pc, #0x774] @ 037fb224
    ldr r3, [pc, #0x770] @ 037fb228
    ldrb r6, [r4, ip] @ 037fb22c
    ldrb r1, [r3, r2] @ 037fb230
    ldrb r7, [r4, lr] @ 037fb234
    ldr r3, [pc, #0x764] @ 037fb238
    ldr r4, [pc, #0x764] @ 037fb23c
    ldrb r8, [r4, r2] @ 037fb240
    ldr r4, [r3, r1, lsl #2] @ 037fb244
    ldr r2, [pc, #0x758] @ 037fb248
    ldr r1, [pc, #0x754] @ 037fb24c
    movgt r0, #0x11 @ 037fb250
    ldrb r5, [r1, ip] @ 037fb254
    ldr r0, [r3, r0, lsl #2] @ 037fb258
    ldrb ip, [r2, lr] @ 037fb25c
    ldr r1, [r3, r6, lsl #2] @ 037fb260
    ldr r2, [r3, r7, lsl #2] @ 037fb264
    movgt fp, #0 @ 037fb268
    orr r0, fp, r0 @ 037fb26c
    orr r1, r1, r5, lsl #24 @ 037fb270
    orr r2, r2, ip, lsl #24 @ 037fb274
    orr r4, r4, r8, lsl #24 @ 037fb278
    str r0, [sl, #0x5e8] @ 037fb27c
    str r1, [sl, #0x5ec] @ 037fb280
    str r2, [sl, #0x5f0] @ 037fb284
    str r4, [sl, #0x5f4] @ 037fb288
    b .L_037f9dcc @ 037fb28c
.L_037fb290:
    ldrb r1, [sl, #0x52c] @ 037fb290
    ldrb r3, [sl, #0x474] @ 037fb294
    asr ip, r1, r3 @ 037fb298
    ldr r2, [sl, #0x460] @ 037fb29c
    lsl r3, r1, #2 @ 037fb2a0
    str r3, [sp, #8] @ 037fb2a4
    ldr fp, [sl, #0x530] @ 037fb2a8
    ldr r3, [r2, r3] @ 037fb2ac
    ldr r0, [sl, #0x468] @ 037fb2b0
    add r3, fp, r3 @ 037fb2b4
    mul r2, r0, r3 @ 037fb2b8
    str r1, [sp, #0xc] @ 037fb2bc
    ldrb r1, [sl, #0x475] @ 037fb2c0
    lsr r2, r2, #1 @ 037fb2c4
    cmp ip, r1 @ 037fb2c8
    str r2, [sl, #0x470] @ 037fb2cc
    beq .L_037fb38c @ 037fb2d0
    ldrb r3, [sl, #0x464] @ 037fb2d4
    and r2, ip, #0xff @ 037fb2d8
    add r1, r3, r2 @ 037fb2dc
    cmp r1, #0x5d @ 037fb2e0
    ldrle lr, [pc, #0x6bc] @ 037fb2e4
    ldrble r3, [lr, r1] @ 037fb2e8
    strb r2, [sl, #0x475] @ 037fb2ec
    ldrle r2, [pc, #0x6a8] @ 037fb2f0
    lslle r3, r3, #0x18 @ 037fb2f4
    ldrble r0, [r2, r1] @ 037fb2f8
    strle r3, [sp, #0x7c] @ 037fb2fc
    ldrb ip, [sl, #0x465] @ 037fb300
    ldrb r3, [sl, #0x475] @ 037fb304
    ldrb lr, [sl, #0x466] @ 037fb308
    ldrb r2, [sl, #0x467] @ 037fb30c
    movgt r4, #0 @ 037fb310
    add r2, r2, r3 @ 037fb314
    add ip, ip, r3 @ 037fb318
    add lr, lr, r3 @ 037fb31c
    strgt r4, [sp, #0x7c] @ 037fb320
    ldr r3, [pc, #0x674] @ 037fb324
    ldr r4, [pc, #0x670] @ 037fb328
    ldrb r1, [r3, r2] @ 037fb32c
    ldrb r6, [r4, ip] @ 037fb330
    ldr r3, [pc, #0x668] @ 037fb334
    ldrb r7, [r4, lr] @ 037fb338
    ldr r4, [pc, #0x664] @ 037fb33c
    ldrb r8, [r4, r2] @ 037fb340
    ldr r4, [r3, r1, lsl #2] @ 037fb344
    ldr r2, [pc, #0x658] @ 037fb348
    ldr r1, [pc, #0x654] @ 037fb34c
    movgt r0, #0x11 @ 037fb350
    ldrb r5, [r1, ip] @ 037fb354
    ldr r0, [r3, r0, lsl #2] @ 037fb358
    ldr r1, [r3, r6, lsl #2] @ 037fb35c
    ldrb ip, [r2, lr] @ 037fb360
    ldr r2, [r3, r7, lsl #2] @ 037fb364
    ldr r3, [sp, #0x7c] @ 037fb368
    orr r1, r1, r5, lsl #24 @ 037fb36c
    orr r0, r3, r0 @ 037fb370
    orr r2, r2, ip, lsl #24 @ 037fb374
    orr r4, r4, r8, lsl #24 @ 037fb378
    str r0, [sl, #0x480] @ 037fb37c
    str r1, [sl, #0x484] @ 037fb380
    str r2, [sl, #0x488] @ 037fb384
    str r4, [sl, #0x48c] @ 037fb388
.L_037fb38c:
    ldrb r3, [sl, #0x4d4] @ 037fb38c
    ldr r4, [sp, #0xc] @ 037fb390
    asr ip, r4, r3 @ 037fb394
    ldr r2, [sl, #0x4c0] @ 037fb398
    ldr lr, [sp, #8] @ 037fb39c
    ldr r3, [lr, r2] @ 037fb3a0
    ldr r0, [sl, #0x4c8] @ 037fb3a4
    add r3, fp, r3 @ 037fb3a8
    mul r2, r0, r3 @ 037fb3ac
    ldrb r1, [sl, #0x4d5] @ 037fb3b0
    lsr r2, r2, #1 @ 037fb3b4
    cmp ip, r1 @ 037fb3b8
    str r2, [sl, #0x4d0] @ 037fb3bc
    ldr r0, [pc, #0x5e4] @ 037fb3c0
    beq .L_037fb480 @ 037fb3c4
    ldrb r3, [r0, #0x4c4] @ 037fb3c8
    and r2, ip, #0xff @ 037fb3cc
    add r1, r3, r2 @ 037fb3d0
    cmp r1, #0x5d @ 037fb3d4
    strb r2, [r0, #0x4d5] @ 037fb3d8
    ldrle r2, [pc, #0x5c4] @ 037fb3dc
    ldrble r3, [r2, r1] @ 037fb3e0
    lslle r3, r3, #0x18 @ 037fb3e4
    ldrle r4, [pc, #0x5b0] @ 037fb3e8
    strle r3, [sp, #0x78] @ 037fb3ec
    ldrb ip, [sl, #0x4c5] @ 037fb3f0
    ldrb r3, [sl, #0x4d5] @ 037fb3f4
    ldrb lr, [sl, #0x4c6] @ 037fb3f8
    ldrb r2, [sl, #0x4c7] @ 037fb3fc
    add ip, ip, r3 @ 037fb400
    add r2, r2, r3 @ 037fb404
    ldrble r0, [r4, r1] @ 037fb408
    add lr, lr, r3 @ 037fb40c
    ldr r4, [pc, #0x588] @ 037fb410
    ldr r3, [pc, #0x584] @ 037fb414
    movgt r1, #0 @ 037fb418
    ldrb r6, [r4, ip] @ 037fb41c
    strgt r1, [sp, #0x78] @ 037fb420
    ldrb r7, [r4, lr] @ 037fb424
    ldrb r1, [r3, r2] @ 037fb428
    ldr r4, [pc, #0x574] @ 037fb42c
    ldr r3, [pc, #0x56c] @ 037fb430
    ldrb r8, [r4, r2] @ 037fb434
    ldr r4, [r3, r1, lsl #2] @ 037fb438
    ldr r2, [pc, #0x564] @ 037fb43c
    ldr r1, [pc, #0x560] @ 037fb440
    movgt r0, #0x11 @ 037fb444
    ldrb r5, [r1, ip] @ 037fb448
    ldr r0, [r3, r0, lsl #2] @ 037fb44c
    ldr r1, [r3, r6, lsl #2] @ 037fb450
    ldrb ip, [r2, lr] @ 037fb454
    ldr r2, [r3, r7, lsl #2] @ 037fb458
    ldr r3, [sp, #0x78] @ 037fb45c
    orr r1, r1, r5, lsl #24 @ 037fb460
    orr r0, r3, r0 @ 037fb464
    orr r2, r2, ip, lsl #24 @ 037fb468
    orr r4, r4, r8, lsl #24 @ 037fb46c
    str r0, [sl, #0x4e0] @ 037fb470
    str r1, [sl, #0x4e4] @ 037fb474
    str r2, [sl, #0x4e8] @ 037fb478
    str r4, [sl, #0x4ec] @ 037fb47c
.L_037fb480:
    ldrb r3, [sl, #0x4a4] @ 037fb480
    ldr r4, [sp, #0xc] @ 037fb484
    asr ip, r4, r3 @ 037fb488
    ldr r2, [sl, #0x490] @ 037fb48c
    ldr lr, [sp, #8] @ 037fb490
    ldr r3, [lr, r2] @ 037fb494
    ldr r0, [sl, #0x498] @ 037fb498
    add r3, fp, r3 @ 037fb49c
    mul r2, r0, r3 @ 037fb4a0
    ldrb r1, [sl, #0x4a5] @ 037fb4a4
    lsr r2, r2, #1 @ 037fb4a8
    cmp ip, r1 @ 037fb4ac
    str r2, [sl, #0x4a0] @ 037fb4b0
    ldr r0, [pc, #0x4f0] @ 037fb4b4
    beq .L_037fb574 @ 037fb4b8
    ldrb r3, [r0, #0x494] @ 037fb4bc
    and r2, ip, #0xff @ 037fb4c0
    add r1, r3, r2 @ 037fb4c4
    cmp r1, #0x5d @ 037fb4c8
    strb r2, [r0, #0x4a5] @ 037fb4cc
    ldrle r2, [pc, #0x4d0] @ 037fb4d0
    ldrble r3, [r2, r1] @ 037fb4d4
    lslle r3, r3, #0x18 @ 037fb4d8
    ldrle r4, [pc, #0x4bc] @ 037fb4dc
    strle r3, [sp, #0x74] @ 037fb4e0
    ldrb ip, [sl, #0x495] @ 037fb4e4
    ldrb r3, [sl, #0x4a5] @ 037fb4e8
    ldrb lr, [sl, #0x496] @ 037fb4ec
    ldrb r2, [sl, #0x497] @ 037fb4f0
    add ip, ip, r3 @ 037fb4f4
    add r2, r2, r3 @ 037fb4f8
    ldrble r0, [r4, r1] @ 037fb4fc
    add lr, lr, r3 @ 037fb500
    ldr r4, [pc, #0x494] @ 037fb504
    ldr r3, [pc, #0x490] @ 037fb508
    movgt r1, #0 @ 037fb50c
    ldrb r6, [r4, ip] @ 037fb510
    strgt r1, [sp, #0x74] @ 037fb514
    ldrb r7, [r4, lr] @ 037fb518
    ldrb r1, [r3, r2] @ 037fb51c
    ldr r4, [pc, #0x480] @ 037fb520
    ldr r3, [pc, #0x478] @ 037fb524
    ldrb r8, [r4, r2] @ 037fb528
    ldr r4, [r3, r1, lsl #2] @ 037fb52c
    ldr r2, [pc, #0x470] @ 037fb530
    ldr r1, [pc, #0x46c] @ 037fb534
    movgt r0, #0x11 @ 037fb538
    ldrb r5, [r1, ip] @ 037fb53c
    ldr r0, [r3, r0, lsl #2] @ 037fb540
    ldr r1, [r3, r6, lsl #2] @ 037fb544
    ldrb ip, [r2, lr] @ 037fb548
    ldr r2, [r3, r7, lsl #2] @ 037fb54c
    ldr r3, [sp, #0x74] @ 037fb550
    orr r1, r1, r5, lsl #24 @ 037fb554
    orr r0, r3, r0 @ 037fb558
    orr r2, r2, ip, lsl #24 @ 037fb55c
    orr r4, r4, r8, lsl #24 @ 037fb560
    str r0, [sl, #0x4b0] @ 037fb564
    str r1, [sl, #0x4b4] @ 037fb568
    str r2, [sl, #0x4b8] @ 037fb56c
    str r4, [sl, #0x4bc] @ 037fb570
.L_037fb574:
    ldrb r3, [sl, #0x504] @ 037fb574
    ldr r4, [sp, #0xc] @ 037fb578
    asr ip, r4, r3 @ 037fb57c
    ldr r2, [sl, #0x4f0] @ 037fb580
    ldr lr, [sp, #8] @ 037fb584
    ldr r3, [lr, r2] @ 037fb588
    ldr r0, [sl, #0x4f8] @ 037fb58c
    add r3, fp, r3 @ 037fb590
    mul r2, r0, r3 @ 037fb594
    ldrb r1, [sl, #0x505] @ 037fb598
    lsr r2, r2, #1 @ 037fb59c
    cmp ip, r1 @ 037fb5a0
    str r2, [sl, #0x500] @ 037fb5a4
    ldr r0, [pc, #0x3fc] @ 037fb5a8
    beq .L_037f9dbc @ 037fb5ac
    ldrb r3, [r0, #0x4f4] @ 037fb5b0
    and r2, ip, #0xff @ 037fb5b4
    add r1, r3, r2 @ 037fb5b8
    cmp r1, #0x5d @ 037fb5bc
    strb r2, [r0, #0x505] @ 037fb5c0
    ldrle r2, [pc, #0x3dc] @ 037fb5c4
    ldrble r3, [r2, r1] @ 037fb5c8
    ldrle r4, [pc, #0x3cc] @ 037fb5cc
    lslle fp, r3, #0x18 @ 037fb5d0
    ldrb ip, [sl, #0x4f5] @ 037fb5d4
    ldrb r3, [sl, #0x505] @ 037fb5d8
    ldrb lr, [sl, #0x4f6] @ 037fb5dc
    ldrb r2, [sl, #0x4f7] @ 037fb5e0
    add ip, ip, r3 @ 037fb5e4
    add r2, r2, r3 @ 037fb5e8
    ldrble r0, [r4, r1] @ 037fb5ec
    add lr, lr, r3 @ 037fb5f0
    ldr r4, [pc, #0x3a4] @ 037fb5f4
    ldr r3, [pc, #0x3a0] @ 037fb5f8
    ldrb r6, [r4, ip] @ 037fb5fc
    ldrb r1, [r3, r2] @ 037fb600
    ldrb r7, [r4, lr] @ 037fb604
    ldr r3, [pc, #0x394] @ 037fb608
    ldr r4, [pc, #0x394] @ 037fb60c
    ldrb r8, [r4, r2] @ 037fb610
    ldr r4, [r3, r1, lsl #2] @ 037fb614
    ldr r2, [pc, #0x388] @ 037fb618
    ldr r1, [pc, #0x384] @ 037fb61c
    movgt r0, #0x11 @ 037fb620
    ldrb r5, [r1, ip] @ 037fb624
    ldr r0, [r3, r0, lsl #2] @ 037fb628
    ldrb ip, [r2, lr] @ 037fb62c
    ldr r1, [r3, r6, lsl #2] @ 037fb630
    ldr r2, [r3, r7, lsl #2] @ 037fb634
    movgt fp, #0 @ 037fb638
    orr r0, fp, r0 @ 037fb63c
    orr r1, r1, r5, lsl #24 @ 037fb640
    orr r2, r2, ip, lsl #24 @ 037fb644
    orr r4, r4, r8, lsl #24 @ 037fb648
    str r0, [sl, #0x510] @ 037fb64c
    str r1, [sl, #0x514] @ 037fb650
    str r2, [sl, #0x518] @ 037fb654
    str r4, [sl, #0x51c] @ 037fb658
    b .L_037f9dbc @ 037fb65c
.L_037fb660:
    ldr r0, [r4, #0x14] @ 037fb660
    ldr r3, [sp, #4] @ 037fb664
    mov r1, sb @ 037fb668
    add r0, r3, r0, lsl #1 @ 037fb66c
    ldr r2, [pc, #0x338] @ 037fb670
    bl .L_037f95fc @ 037fb674
    b .L_037f9f10 @ 037fb678
.L_037fb67c:
    ldrb r1, [lr, #0x43e] @ 037fb67c
    ldrb r3, [lr, #0x624] @ 037fb680
    asr r4, r1, r3 @ 037fb684
    ldr r2, [lr, #0x610] @ 037fb688
    ldr r3, [lr, #0x434] @ 037fb68c
    ldr ip, [r2, r1, lsl #2] @ 037fb690
    ldr r0, [lr, #0x618] @ 037fb694
    add r3, r3, ip @ 037fb698
    mul r2, r0, r3 @ 037fb69c
    ldrb r1, [lr, #0x625] @ 037fb6a0
    lsr r2, r2, #1 @ 037fb6a4
    cmp r4, r1 @ 037fb6a8
    str r2, [lr, #0x620] @ 037fb6ac
    beq .L_037fb760 @ 037fb6b0
    ldrb r3, [lr, #0x614] @ 037fb6b4
    and r2, r4, #0xff @ 037fb6b8
    add ip, r3, r2 @ 037fb6bc
    cmp ip, #0x5d @ 037fb6c0
    ldrle r4, [pc, #0x2dc] @ 037fb6c4
    strb r2, [lr, #0x625] @ 037fb6c8
    ldrble r3, [r4, ip] @ 037fb6cc
    ldrle lr, [pc, #0x2c8] @ 037fb6d0
    lslle fp, r3, #0x18 @ 037fb6d4
    ldrble r0, [lr, ip] @ 037fb6d8
    ldrb r3, [sl, #0x625] @ 037fb6dc
    ldrb r1, [sl, #0x615] @ 037fb6e0
    ldrb ip, [sl, #0x616] @ 037fb6e4
    ldr lr, [pc, #0x2b0] @ 037fb6e8
    ldrb r2, [sl, #0x617] @ 037fb6ec
    add r1, r1, r3 @ 037fb6f0
    add ip, ip, r3 @ 037fb6f4
    add r2, r2, r3 @ 037fb6f8
    ldrb r6, [lr, r1] @ 037fb6fc
    ldr r3, [pc, #0x298] @ 037fb700
    ldrb r7, [lr, ip] @ 037fb704
    ldr lr, [pc, #0x298] @ 037fb708
    ldrb r4, [r3, r2] @ 037fb70c
    ldrb r8, [lr, r2] @ 037fb710
    ldr r3, [pc, #0x288] @ 037fb714
    ldr r2, [pc, #0x288] @ 037fb718
    ldr lr, [r3, r4, lsl #2] @ 037fb71c
    ldrb r4, [r2, r1] @ 037fb720
    ldr r1, [pc, #0x27c] @ 037fb724
    movgt r0, #0x11 @ 037fb728
    ldrb r5, [r1, ip] @ 037fb72c
    ldr r0, [r3, r0, lsl #2] @ 037fb730
    ldr r2, [r3, r6, lsl #2] @ 037fb734
    ldr r1, [r3, r7, lsl #2] @ 037fb738
    movgt fp, #0 @ 037fb73c
    orr r0, fp, r0 @ 037fb740
    orr r2, r2, r4, lsl #24 @ 037fb744
    orr r1, r1, r5, lsl #24 @ 037fb748
    orr lr, lr, r8, lsl #24 @ 037fb74c
    str r0, [sl, #0x630] @ 037fb750
    str r2, [sl, #0x634] @ 037fb754
    str r1, [sl, #0x638] @ 037fb758
    str lr, [sl, #0x63c] @ 037fb75c
.L_037fb760:
    ldrb r1, [sl, #0x43f] @ 037fb760
    ldrb r3, [sl, #0x684] @ 037fb764
    asr lr, r1, r3 @ 037fb768
    ldr r2, [sl, #0x670] @ 037fb76c
    ldr r3, [sl, #0x438] @ 037fb770
    ldr ip, [r2, r1, lsl #2] @ 037fb774
    ldr r0, [sl, #0x678] @ 037fb778
    add r3, r3, ip @ 037fb77c
    mul r2, r0, r3 @ 037fb780
    ldrb r1, [sl, #0x685] @ 037fb784
    lsr r2, r2, #1 @ 037fb788
    cmp lr, r1 @ 037fb78c
    str r2, [sl, #0x680] @ 037fb790
    ldr r1, [pc, #0x210] @ 037fb794
    beq .L_037fb844 @ 037fb798
    ldrb r3, [r1, #0x674] @ 037fb79c
    and r2, lr, #0xff @ 037fb7a0
    add ip, r3, r2 @ 037fb7a4
    cmp ip, #0x5d @ 037fb7a8
    strb r2, [r1, #0x685] @ 037fb7ac
    ldrle r2, [pc, #0x1f0] @ 037fb7b0
    ldrle r4, [pc, #0x1e4] @ 037fb7b4
    ldrble r3, [r2, ip] @ 037fb7b8
    ldrble r0, [r4, ip] @ 037fb7bc
    lslle fp, r3, #0x18 @ 037fb7c0
    ldrb r1, [sl, #0x675] @ 037fb7c4
    ldrb r3, [sl, #0x685] @ 037fb7c8
    ldrb ip, [sl, #0x676] @ 037fb7cc
    ldrb r2, [sl, #0x677] @ 037fb7d0
    ldr lr, [pc, #0x1c4] @ 037fb7d4
    add r2, r2, r3 @ 037fb7d8
    add r1, r1, r3 @ 037fb7dc
    add ip, ip, r3 @ 037fb7e0
    ldrb r4, [lr, r2] @ 037fb7e4
    ldrb r6, [lr, r1] @ 037fb7e8
    ldrb r7, [lr, ip] @ 037fb7ec
    ldr lr, [pc, #0x1b0] @ 037fb7f0
    ldr r3, [pc, #0x1a8] @ 037fb7f4
    ldrb r8, [lr, r2] @ 037fb7f8
    ldr r2, [pc, #0x1a4] @ 037fb7fc
    ldr lr, [r3, r4, lsl #2] @ 037fb800
    ldrb r4, [r2, r1] @ 037fb804
    ldr r1, [pc, #0x198] @ 037fb808
    movgt r0, #0x11 @ 037fb80c
    ldrb r5, [r1, ip] @ 037fb810
    ldr r0, [r3, r0, lsl #2] @ 037fb814
    ldr r2, [r3, r6, lsl #2] @ 037fb818
    ldr r1, [r3, r7, lsl #2] @ 037fb81c
    movgt fp, #0 @ 037fb820
    orr r0, fp, r0 @ 037fb824
    orr r2, r2, r4, lsl #24 @ 037fb828
    orr r1, r1, r5, lsl #24 @ 037fb82c
    orr lr, lr, r8, lsl #24 @ 037fb830
    str r0, [sl, #0x690] @ 037fb834
    str r2, [sl, #0x694] @ 037fb838
    str r1, [sl, #0x698] @ 037fb83c
    str lr, [sl, #0x69c] @ 037fb840
.L_037fb844:
    ldrb r1, [sl, #0x43d] @ 037fb844
    ldrb r3, [sl, #0x654] @ 037fb848
    asr lr, r1, r3 @ 037fb84c
    ldr r2, [sl, #0x640] @ 037fb850
    ldr r3, [sl, #0x430] @ 037fb854
    ldr ip, [r2, r1, lsl #2] @ 037fb858
    ldr r0, [sl, #0x648] @ 037fb85c
    add r3, r3, ip @ 037fb860
    mul r2, r0, r3 @ 037fb864
    ldrb r1, [sl, #0x655] @ 037fb868
    lsr r2, r2, #1 @ 037fb86c
    cmp lr, r1 @ 037fb870
    str r2, [sl, #0x650] @ 037fb874
    ldr r1, [pc, #0x12c] @ 037fb878
    beq .L_037fb928 @ 037fb87c
    ldrb r3, [r1, #0x644] @ 037fb880
    and r2, lr, #0xff @ 037fb884
    add ip, r3, r2 @ 037fb888
    cmp ip, #0x5d @ 037fb88c
    strb r2, [r1, #0x655] @ 037fb890
    ldrle r2, [pc, #0x10c] @ 037fb894
    ldrle r4, [pc, #0x100] @ 037fb898
    ldrble r3, [r2, ip] @ 037fb89c
    ldrble r0, [r4, ip] @ 037fb8a0
    lslle fp, r3, #0x18 @ 037fb8a4
    ldrb r1, [sl, #0x645] @ 037fb8a8
    ldrb r3, [sl, #0x655] @ 037fb8ac
    ldrb ip, [sl, #0x646] @ 037fb8b0
    ldrb r2, [sl, #0x647] @ 037fb8b4
    ldr lr, [pc, #0xe0] @ 037fb8b8
    add r2, r2, r3 @ 037fb8bc
    add r1, r1, r3 @ 037fb8c0
    add ip, ip, r3 @ 037fb8c4
    ldrb r4, [lr, r2] @ 037fb8c8
    ldrb r6, [lr, r1] @ 037fb8cc
    ldrb r7, [lr, ip] @ 037fb8d0
    ldr lr, [pc, #0xcc] @ 037fb8d4
    ldr r3, [pc, #0xc4] @ 037fb8d8
    ldrb r8, [lr, r2] @ 037fb8dc
    ldr r2, [pc, #0xc0] @ 037fb8e0
    ldr lr, [r3, r4, lsl #2] @ 037fb8e4
    ldrb r4, [r2, r1] @ 037fb8e8
    ldr r1, [pc, #0xb4] @ 037fb8ec
    movgt r0, #0x11 @ 037fb8f0
    ldrb r5, [r1, ip] @ 037fb8f4
    ldr r0, [r3, r0, lsl #2] @ 037fb8f8
    ldr r2, [r3, r6, lsl #2] @ 037fb8fc
    ldr r1, [r3, r7, lsl #2] @ 037fb900
    movgt fp, #0 @ 037fb904
    orr r0, fp, r0 @ 037fb908
    orr r2, r2, r4, lsl #24 @ 037fb90c
    orr r1, r1, r5, lsl #24 @ 037fb910
    orr lr, lr, r8, lsl #24 @ 037fb914
    str r0, [sl, #0x660] @ 037fb918
    str r2, [sl, #0x664] @ 037fb91c
    str r1, [sl, #0x668] @ 037fb920
    str lr, [sl, #0x66c] @ 037fb924
.L_037fb928:
    ldrb r1, [sl, #0x6dc] @ 037fb928
    ldrb r3, [sl, #0x6b4] @ 037fb92c
    asr lr, r1, r3 @ 037fb930
    ldr r2, [sl, #0x6a0] @ 037fb934
    ldr r3, [sl, #0x6e0] @ 037fb938
    ldr ip, [r2, r1, lsl #2] @ 037fb93c
    ldr r0, [sl, #0x6a8] @ 037fb940
    add r3, r3, ip @ 037fb944
    mul r2, r0, r3 @ 037fb948
    ldrb r1, [sl, #0x6b5] @ 037fb94c
    lsr r2, r2, #1 @ 037fb950
    cmp lr, r1 @ 037fb954
    str r2, [sl, #0x6b0] @ 037fb958
    ldr r1, [pc, #0x48] @ 037fb95c
    beq .L_037f9de8 @ 037fb960
    ldrb r3, [r1, #0x6a4] @ 037fb964
    and r2, lr, #0xff @ 037fb968
    add ip, r3, r2 @ 037fb96c
    cmp ip, #0x5d @ 037fb970
    strb r2, [r1, #0x6b5] @ 037fb974
    bgt .L_037fb994 @ 037fb978
    ldr r2, [pc, #0x24] @ 037fb97c
    ldr r4, [pc, #0x18] @ 037fb980
    ldrb r3, [r2, ip] @ 037fb984
    ldrb r0, [r4, ip] @ 037fb988
    lsl fp, r3, #0x18 @ 037fb98c
    b .L_037fa2a0 @ 037fb990
.L_037fb994:
    mov r0, #0x11 @ 037fb994
    mov fp, #0 @ 037fb998
    b .L_037fa2a0 @ 037fb99c
    .byte 0xa8, 0x6b, 0x80, 0x03, 0x28, 0x6c, 0x80, 0x03, 0x28, 0x6b, 0x80, 0x03, 0xa8, 0x6e, 0x80, 0x03 @ 037fb9a0
    .byte 0x40, 0x77, 0x80, 0x03, 0x00, 0x00, 0x51, 0xe3, 0x1e, 0xff, 0x2f, 0xd1, 0x00, 0x30, 0xa0, 0xe3 @ 037fb9b0
    .byte 0x01, 0x10, 0x51, 0xe2, 0xb2, 0x30, 0xc0, 0xe0, 0xfb, 0xff, 0xff, 0x1a, 0x1e, 0xff, 0x2f, 0xe1 @ 037fb9c0
    .byte 0x00, 0x00, 0x52, 0xe3, 0x1e, 0xff, 0x2f, 0xd1, 0x01, 0x30, 0x82, 0xe2, 0xc3, 0x20, 0xa0, 0xe1 @ 037fb9d0
    .byte 0x00, 0x30, 0xa0, 0xe3, 0xb1, 0xc0, 0x93, 0xe1, 0x01, 0x20, 0x52, 0xe2, 0xb0, 0xc0, 0x83, 0xe1 @ 037fb9e0
    .byte 0x02, 0x30, 0x83, 0xe2, 0xfa, 0xff, 0xff, 0x1a, 0x1e, 0xff, 0x2f, 0xe1 @ 037fb9f0
.L_037fb9fc:
@ FUN_037fb9fc at 0x037fb9fc
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037fb9fc
    ldr r0, [pc, #0x19c] @ 037fba00
    mov fp, #0x4000000 @ 037fba04
    mov sb, fp @ 037fba08
    sub sp, sp, #0xc @ 037fba0c
    mov r6, #0x400 @ 037fba10
    mov r8, #0xa8000000 @ 037fba14
    add r6, r6, #8 @ 037fba18
    add fp, fp, #0x400 @ 037fba1c
    add sb, sb, #0x400 @ 037fba20
    add r8, r8, #0x3f0000 @ 037fba24
    mov sl, #0x4000000 @ 037fba28
    ldr r7, [pc, #0x174] @ 037fba2c
    str r0, [sp, #4] @ 037fba30
    orr r6, r6, r6, lsl #23 @ 037fba34
    add sl, sl, #0x400 @ 037fba38
    add fp, fp, #4 @ 037fba3c
    add sb, sb, #0xc @ 037fba40
    add r8, r8, #0x7f @ 037fba44
    mov r5, #0 @ 037fba48
.L_037fba4c:
    ldr r1, [r7, #0x30] @ 037fba4c
    mov r0, #0xff000000 @ 037fba50
    bl .L_038019ec @ 037fba54
    ldr r2, [sp, #4] @ 037fba58
    lsl r0, r0, #0x10 @ 037fba5c
    ldr r4, [r2], #4 @ 037fba60
    lsl r3, r5, #4 @ 037fba64
    lsr r0, r0, #0x10 @ 037fba68
    strh r0, [r3, r6] @ 037fba6c
    str r4, [fp, r5, lsl #4] @ 037fba70
    ldr r3, [r7, #0x20] @ 037fba74
    asr r3, r3, #1 @ 037fba78
    str r3, [sb, r5, lsl #4] @ 037fba7c
    str r8, [sl, r5, lsl #4] @ 037fba80
    mov r0, #0xff000000 @ 037fba84
    ldr r1, [r7, #0x30] @ 037fba88
    str r2, [sp, #4] @ 037fba8c
    bl .L_038019ec @ 037fba90
    add r2, r5, #6 @ 037fba94
    lsl r0, r0, #0x10 @ 037fba98
    lsl r3, r2, #4 @ 037fba9c
    lsr r0, r0, #0x10 @ 037fbaa0
    strh r0, [r3, r6] @ 037fbaa4
    str r4, [fp, r2, lsl #4] @ 037fbaa8
    ldr r3, [r7, #0x20] @ 037fbaac
    add r5, r5, #1 @ 037fbab0
    asr r3, r3, #1 @ 037fbab4
    cmp r5, #6 @ 037fbab8
    str r3, [sb, r2, lsl #4] @ 037fbabc
    str r8, [sl, r2, lsl #4] @ 037fbac0
    bne .L_037fba4c @ 037fbac4
    ldr r3, [pc, #0xd8] @ 037fbac8
    mov r0, #0xff000000 @ 037fbacc
    ldr r1, [r3, #0x30] @ 037fbad0
    bl .L_038019ec @ 037fbad4
    ldr sb, [pc, #0xc8] @ 037fbad8
    ldr r2, [pc, #0xc0] @ 037fbadc
    ldr ip, [sb, #0x20] @ 037fbae0
    ldr r6, [r2, #0x18] @ 037fbae4
    ldr r7, [sb, #0x14] @ 037fbae8
    lsl r4, r0, #0x11 @ 037fbaec
    ldr r8, [pc, #0xb4] @ 037fbaf0
    lsl r0, r0, #0x10 @ 037fbaf4
    mov r2, #0xa8000000 @ 037fbaf8
    mov r1, #0 @ 037fbafc
    mov sb, #0x4000000 @ 037fbb00
    lsr r0, r0, #0x10 @ 037fbb04
    add r2, r2, #0x7f @ 037fbb08
    asr ip, ip, #1 @ 037fbb0c
    sub r1, r1, #0x20c @ 037fbb10
    mov r5, #0x800 @ 037fbb14
    mov r3, #0x4000000 @ 037fbb18
    mvn lr, #0x410 @ 037fbb1c
    strh r0, [sl, #0xc8] @ 037fbb20
    add r3, r3, #0x100 @ 037fbb24
    str r6, [sb, #0x4c4] @ 037fbb28
    lsr r4, r4, #0x10 @ 037fbb2c
    str ip, [sb, #0x4cc] @ 037fbb30
    sub lr, lr, #7 @ 037fbb34
    str r2, [sb, #0x4c0] @ 037fbb38
    strh r0, [sl, #0xd8] @ 037fbb3c
    str r6, [sb, #0x4d4] @ 037fbb40
    mov r0, #0x80 @ 037fbb44
    str ip, [sb, #0x4dc] @ 037fbb48
    str r8, [sb, #0x4d0] @ 037fbb4c
    strh r1, [sl, #0xe8] @ 037fbb50
    str r7, [sb, #0x4e4] @ 037fbb54
    str r5, [sb, #0x4ec] @ 037fbb58
    str r2, [sb, #0x4e0] @ 037fbb5c
    strh r1, [sl, #0xf8] @ 037fbb60
    mov r2, #0 @ 037fbb64
    str r7, [sb, #0x4f4] @ 037fbb68
    str r5, [sb, #0x4fc] @ 037fbb6c
    str r8, [sb, #0x4f0] @ 037fbb70
    mov sb, #0x84 @ 037fbb74
    strh r4, [r3] @ 037fbb78
    strh r0, [r3, #2] @ 037fbb7c
    strh r2, [r3, #4] @ 037fbb80
    strh sb, [r3, #6] @ 037fbb84
    strh lr, [r3, #8] @ 037fbb88
    strh r0, [r3, #0xa] @ 037fbb8c
    strh r2, [r3, #0xc] @ 037fbb90
    strh sb, [r3, #0xe] @ 037fbb94
    add sp, sp, #0xc @ 037fbb98
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 037fbb9c
    bx lr @ 037fbba0
    .byte 0x84, 0xb8, 0x80, 0x03, 0xb8, 0xbd, 0x80, 0x03, 0x7f, 0x00, 0x7f, 0xa8 @ 037fbba4
.L_037fbbb0:
    mov r3, #0x4000000 @ 037fbbb0
    mov r2, #0 @ 037fbbb4
    add r1, r3, #0x100 @ 037fbbb8
    str r2, [r3, #0x400] @ 037fbbbc
    str r2, [r3, #0x410] @ 037fbbc0
    str r2, [r3, #0x420] @ 037fbbc4
    str r2, [r3, #0x430] @ 037fbbc8
    str r2, [r3, #0x440] @ 037fbbcc
    str r2, [r3, #0x450] @ 037fbbd0
    str r2, [r3, #0x460] @ 037fbbd4
    str r2, [r3, #0x470] @ 037fbbd8
    str r2, [r3, #0x480] @ 037fbbdc
    str r2, [r3, #0x490] @ 037fbbe0
    str r2, [r3, #0x4a0] @ 037fbbe4
    str r2, [r3, #0x4b0] @ 037fbbe8
    str r2, [r3, #0x4c0] @ 037fbbec
    str r2, [r3, #0x4d0] @ 037fbbf0
    str r2, [r3, #0x4e0] @ 037fbbf4
    str r2, [r3, #0x4f0] @ 037fbbf8
    strh r2, [r1, #2] @ 037fbbfc
    strh r2, [r1, #6] @ 037fbc00
    strh r2, [r1, #0xa] @ 037fbc04
    strh r2, [r1, #0xe] @ 037fbc08
    bx lr @ 037fbc0c
.L_037fbc10:
@ FUN_037fbc10 at 0x037fbc10
    push {r4, r5, lr} @ 037fbc10
    ldr r5, [pc, #0x3c] @ 037fbc14
    ldr r3, [r5] @ 037fbc18
    mov r1, r0 @ 037fbc1c
    ldr r2, [pc, #0x34] @ 037fbc20
    lsl r0, r3, #0x10 @ 037fbc24
    ldr r3, [pc, #0x30] @ 037fbc28
    mov r4, #0 @ 037fbc2c
    str r4, [r3] @ 037fbc30
    sub sp, sp, #4 @ 037fbc34
    str r4, [r2] @ 037fbc38
    bl .L_038018d8 @ 037fbc3c
    ldr r3, [pc, #0x1c] @ 037fbc40
    str r4, [r5] @ 037fbc44
    str r0, [r3] @ 037fbc48
    add sp, sp, #4 @ 037fbc4c
    pop {r4, r5, lr} @ 037fbc50
    bx lr @ 037fbc54
    .byte 0xa0, 0xb8, 0x80, 0x03, 0x7c, 0xb8, 0x80, 0x03, 0x78, 0xb8, 0x80, 0x03, 0x80, 0xb8, 0x80, 0x03 @ 037fbc58
.L_037fbc68:
@ FUN_037fbc68 at 0x037fbc68
    push {r4, r5, r6, r7, r8, sl, lr} @ 037fbc68
    ldr sl, [pc, #0x84] @ 037fbc6c
    ldr r7, [pc, #0x84] @ 037fbc70
    ldr r4, [sl] @ 037fbc74
    subs r6, r1, #0 @ 037fbc78
    mov r5, r0 @ 037fbc7c
    ldrb r2, [r7, r4] @ 037fbc80
    beq .L_037fbcf0 @ 037fbc84
    ldr r8, [pc, #0x70] @ 037fbc88
    ldr r3, [pc, #0x70] @ 037fbc8c
    sub r2, r2, #0x80 @ 037fbc90
    lsl r2, r2, #0x16 @ 037fbc94
    mov r1, #0x10000 @ 037fbc98
    ldr r0, [r3] @ 037fbc9c
    ldr ip, [r8] @ 037fbca0
    lsr r2, r2, #0x10 @ 037fbca4
    sub r1, r1, #1 @ 037fbca8
    mov lr, #0 @ 037fbcac
.L_037fbcb0:
    add ip, ip, r0 @ 037fbcb0
    lsl r3, lr, #1 @ 037fbcb4
    cmp ip, r1 @ 037fbcb8
    add lr, lr, #1 @ 037fbcbc
    strh r2, [r3, r5] @ 037fbcc0
    bls .L_037fbce0 @ 037fbcc4
    add r4, r4, #1 @ 037fbcc8
    ldrb r3, [r7, r4] @ 037fbccc
    sub r3, r3, #0x80 @ 037fbcd0
    lsl r3, r3, #0x16 @ 037fbcd4
    lsr r2, r3, #0x10 @ 037fbcd8
    sub ip, ip, #0x10000 @ 037fbcdc
.L_037fbce0:
    cmp r6, lr @ 037fbce0
    bne .L_037fbcb0 @ 037fbce4
    str r4, [sl] @ 037fbce8
    str ip, [r8] @ 037fbcec
.L_037fbcf0:
    pop {r4, r5, r6, r7, r8, sl, lr} @ 037fbcf0
    bx lr @ 037fbcf4
    .byte 0x78, 0xb8, 0x80, 0x03, 0xa4, 0xb8, 0x80, 0x03, 0x7c, 0xb8, 0x80, 0x03, 0x80, 0xb8, 0x80, 0x03 @ 037fbcf8
.L_037fbd08:
    push {r4, r5, r6, r7, lr} @ 037fbd08
    ldr r6, [pc, #0x90] @ 037fbd0c
    ldr ip, [r6, #0x20] @ 037fbd10
    ldmib r6, {r2, lr} @ 037fbd14
    cmp ip, r0 @ 037fbd18
    movlt r5, ip @ 037fbd1c
    movge r5, r0 @ 037fbd20
    add r3, ip, ip, lsl #1 @ 037fbd24
    add r0, lr, r3, lsl #2 @ 037fbd28
    lsl r7, r5, #1 @ 037fbd2c
    rsb r3, lr, r2 @ 037fbd30
    asr r4, r3, #1 @ 037fbd34
    add r3, lr, r7 @ 037fbd38
    cmp r3, r2 @ 037fbd3c
    sub sp, sp, #4 @ 037fbd40
    mov r1, r4 @ 037fbd44
    bls .L_037fbd70 @ 037fbd48
    bl .L_037f86f4 @ 037fbd4c
    mov r1, r4 @ 037fbd50
    ldr r0, [r6, #8] @ 037fbd54
    bl .L_037f9d9c @ 037fbd58
    ldr lr, [r6] @ 037fbd5c
    rsb r5, r4, r5 @ 037fbd60
    str lr, [r6, #8] @ 037fbd64
    ldr ip, [r6, #0x20] @ 037fbd68
    lsl r7, r5, #1 @ 037fbd6c
.L_037fbd70:
    add r0, ip, ip, lsl #1 @ 037fbd70
    add r0, lr, r0, lsl #2 @ 037fbd74
    mov r1, r5 @ 037fbd78
    bl .L_037f86f4 @ 037fbd7c
    mov r1, r5 @ 037fbd80
    ldr r0, [r6, #8] @ 037fbd84
    bl .L_037f9d9c @ 037fbd88
    ldr r3, [r6, #8] @ 037fbd8c
    add r3, r3, r7 @ 037fbd90
    str r3, [r6, #8] @ 037fbd94
    add sp, sp, #4 @ 037fbd98
    pop {r4, r5, r6, r7, lr} @ 037fbd9c
    bx lr @ 037fbda0
    .byte 0xb8, 0xbd, 0x80, 0x03 @ 037fbda4
.L_037fbda8:
@ FUN_037fbda8 at 0x037fbda8
    push {r4, r5, r6, r7, lr} @ 037fbda8
    ldr r3, [pc, #0xfc] @ 037fbdac
    ldr r2, [r3] @ 037fbdb0
    cmp r2, #0 @ 037fbdb4
    sub sp, sp, #4 @ 037fbdb8
    mov r4, r0 @ 037fbdbc
    bne .L_037fbe70 @ 037fbdc0
.L_037fbdc4:
    mov r7, #0 @ 037fbdc4
.L_037fbdc8:
    cmp r4, #0x1000 @ 037fbdc8
    movge r4, #0x1000 @ 037fbdcc
    ldr r6, [pc, #0xdc] @ 037fbdd0
    mov r0, r4 @ 037fbdd4
    bl .L_037fbc10 @ 037fbdd8
    add r0, r6, #0x18 @ 037fbddc
    ldm r0, {r0, r2} @ 037fbde0
    lsl r5, r4, #1 @ 037fbde4
    add r3, r0, r5 @ 037fbde8
    cmp r3, r2 @ 037fbdec
    bls .L_037fbe30 @ 037fbdf0
    rsb r3, r0, r2 @ 037fbdf4
    cmp r7, #0 @ 037fbdf8
    asr r5, r3, #1 @ 037fbdfc
    bne .L_037fbe94 @ 037fbe00
    cmp r5, #0 @ 037fbe04
    ble .L_037fbe20 @ 037fbe08
    mov r3, r5 @ 037fbe0c
.L_037fbe10:
    mov r2, #0 @ 037fbe10
    subs r3, r3, #1 @ 037fbe14
    strh r2, [r0], #2 @ 037fbe18
    bne .L_037fbe10 @ 037fbe1c
.L_037fbe20:
    ldr r3, [r6, #0x14] @ 037fbe20
    rsb r4, r5, r4 @ 037fbe24
    str r3, [r6, #0x18] @ 037fbe28
    lsl r5, r4, #1 @ 037fbe2c
.L_037fbe30:
    cmp r7, #0 @ 037fbe30
    bne .L_037fbe84 @ 037fbe34
    cmp r4, #0 @ 037fbe38
    ldr r3, [r6, #0x18] @ 037fbe3c
    ble .L_037fbe58 @ 037fbe40
    mov r0, r4 @ 037fbe44
.L_037fbe48:
    mov r2, #0 @ 037fbe48
    subs r0, r0, #1 @ 037fbe4c
    strh r2, [r3], #2 @ 037fbe50
    bne .L_037fbe48 @ 037fbe54
.L_037fbe58:
    ldr r3, [r6, #0x18] @ 037fbe58
    add r3, r3, r5 @ 037fbe5c
    str r3, [r6, #0x18] @ 037fbe60
    add sp, sp, #4 @ 037fbe64
    pop {r4, r5, r6, r7, lr} @ 037fbe68
    bx lr @ 037fbe6c
.L_037fbe70:
    bl .L_037f93d8 @ 037fbe70
    cmp r0, #0 @ 037fbe74
    movne r7, #1 @ 037fbe78
    bne .L_037fbdc8 @ 037fbe7c
    b .L_037fbdc4 @ 037fbe80
.L_037fbe84:
    mov r1, r4 @ 037fbe84
    ldr r0, [r6, #0x18] @ 037fbe88
    bl .L_037fbc68 @ 037fbe8c
    b .L_037fbe58 @ 037fbe90
.L_037fbe94:
    mov r1, r5 @ 037fbe94
    bl .L_037fbc68 @ 037fbe98
    rsb r4, r5, r4 @ 037fbe9c
    ldr r3, [r6, #0x14] @ 037fbea0
    lsl r5, r4, #1 @ 037fbea4
    str r3, [r6, #0x18] @ 037fbea8
    b .L_037fbe30 @ 037fbeac
    .byte 0xa0, 0xb8, 0x80, 0x03, 0xb8, 0xbd, 0x80, 0x03 @ 037fbeb0
.L_037fbeb8:
@ FUN_037fbeb8 at 0x037fbeb8
    ldr r3, [pc, #0x78] @ 037fbeb8
    mov r0, #0x4000000 @ 037fbebc
    add r0, r0, #0x100 @ 037fbec0
    ldr ip, [pc, #0x70] @ 037fbec4
    push {r4, r5, lr} @ 037fbec8
    ldrh r1, [r0, #4] @ 037fbecc
    ldr r5, [r3] @ 037fbed0
    ldr r3, [pc, #0x64] @ 037fbed4
    ldr r2, [ip, #0x34] @ 037fbed8
    ldr lr, [r3] @ 037fbedc
    lsl r1, r1, #0x10 @ 037fbee0
    ldrh r3, [r0, #0xc] @ 037fbee4
    lsr r1, r1, #0x10 @ 037fbee8
    subs r4, r1, r2 @ 037fbeec
    lsl r3, r3, #0x10 @ 037fbef0
    ldr r2, [ip, #0x38] @ 037fbef4
    lsr r3, r3, #0x10 @ 037fbef8
    addmi r4, r4, #0x10000 @ 037fbefc
    cmp r4, lr @ 037fbf00
    movhs r4, lr @ 037fbf04
    subs r0, r3, r2 @ 037fbf08
    addmi r0, r0, #0x10000 @ 037fbf0c
    cmp r0, r5 @ 037fbf10
    movhs r0, r5 @ 037fbf14
    sub sp, sp, #4 @ 037fbf18
    str r1, [ip, #0x34] @ 037fbf1c
    str r3, [ip, #0x38] @ 037fbf20
    bl .L_037fbda8 @ 037fbf24
    mov r0, r4 @ 037fbf28
    add sp, sp, #4 @ 037fbf2c
    pop {r4, r5, lr} @ 037fbf30
    b .L_037fbd08 @ 037fbf34
    .byte 0x74, 0xb8, 0x80, 0x03, 0xb8, 0xbd, 0x80, 0x03, 0x70, 0xb8, 0x80, 0x03 @ 037fbf38
@ FUN_037fbf44 at 0x037fbf44
    str lr, [sp, #-4]! @ 037fbf44
    sub sp, sp, #4 @ 037fbf48
    bl .L_037f9238 @ 037fbf4c
    add sp, sp, #4 @ 037fbf50
    .word 0xe49de004 @ 037fbf54 pop {lr}
    bx lr @ 037fbf58
.L_037fbf5c:
@ FUN_037fbf5c at 0x037fbf5c
    ldr r3, [pc, #0x144] @ 037fbf5c
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 037fbf60
    mov r2, #0x1c8 @ 037fbf64
    ldr r8, [pc, #0x13c] @ 037fbf68
    mov r0, #0x6b00 @ 037fbf6c
    mov r1, #0 @ 037fbf70
    add r2, r2, #3 @ 037fbf74
    ldr sb, [r3] @ 037fbf78
    add r0, r0, #0xab @ 037fbf7c
    mov r3, #0x800 @ 037fbf80
    str r2, [r8, #0x28] @ 037fbf84
    str r3, [r8, #0x20] @ 037fbf88
    add r2, r2, #0x35 @ 037fbf8c
    mov r3, #1 @ 037fbf90
    str r0, [r8, #0x30] @ 037fbf94
    str r1, [r8, #0x40] @ 037fbf98
    str r1, [r8, #0x34] @ 037fbf9c
    str r1, [r8, #0x38] @ 037fbfa0
    str r1, [r8, #0x3c] @ 037fbfa4
    str r2, [r8, #0x24] @ 037fbfa8
    str r3, [r8, #0x2c] @ 037fbfac
    mov r2, sb @ 037fbfb0
    mov r3, #0x7000 @ 037fbfb4
.L_037fbfb8:
    mov r1, #0 @ 037fbfb8
    subs r3, r3, #1 @ 037fbfbc
    strh r1, [r2], #2 @ 037fbfc0
    bne .L_037fbfb8 @ 037fbfc4
    ldr r2, [pc, #0xe0] @ 037fbfc8
    mov r3, sb @ 037fbfcc
    add r1, r2, #0x1c @ 037fbfd0
.L_037fbfd4:
    str r3, [r2], #4 @ 037fbfd4
    cmp r2, r1 @ 037fbfd8
    add r3, r3, #0x1000 @ 037fbfdc
    bne .L_037fbfd4 @ 037fbfe0
    ldr r3, [pc, #0xc8] @ 037fbfe4
    ldr sl, [r3] @ 037fbfe8
    mov r7, #0x1000 @ 037fbfec
    mov r3, sl @ 037fbff0
.L_037fbff4:
    mov r2, #0 @ 037fbff4
    subs r7, r7, #1 @ 037fbff8
    strh r2, [r3], #2 @ 037fbffc
    bne .L_037fbff4 @ 037fc000
    add ip, sl, #0x2000 @ 037fc004
    mov lr, #0x368000 @ 037fc008
    ldr r5, [r8, #0x20] @ 037fc00c
    str ip, [r8, #0x1c] @ 037fc010
    add lr, lr, #0x1e80 @ 037fc014
    ldr ip, [pc, #0x98] @ 037fc018
    mov r4, #0x750000 @ 037fc01c
    add lr, lr, #0x19 @ 037fc020
    ldr r6, [pc, #0x90] @ 037fc024
    add r4, r4, #0xab0 @ 037fc028
    mov r3, r5 @ 037fc02c
    mov r0, lr @ 037fc030
    add r5, sb, r5, lsl #1 @ 037fc034
    mov r1, #0x64 @ 037fc038
    ldr r2, [r8, #0x30] @ 037fc03c
    str lr, [ip] @ 037fc040
    add r4, r4, #5 @ 037fc044
    str sl, [r8, #0x18] @ 037fc048
    str sb, [r8, #0xc] @ 037fc04c
    str r5, [r8, #0x10] @ 037fc050
    str r4, [r6] @ 037fc054
    str sb, [r8] @ 037fc058
    stmib r8, {r5, sb} @ 037fc05c
    str sl, [r8, #0x14] @ 037fc060
    bl .L_037f8a30 @ 037fc064
    ldr r0, [r6] @ 037fc068
    ldr r1, [r8, #0x30] @ 037fc06c
    ldr r2, [r8, #0x20] @ 037fc070
    bl .L_037f93e8 @ 037fc074
    ldr r3, [pc, #0x40] @ 037fc078
    ldr r1, [r8, #0x28] @ 037fc07c
    mov r0, #0x420 @ 037fc080
    str r7, [r3] @ 037fc084
    ldr r2, [pc, #0x34] @ 037fc088
    ldr r3, [pc, #0x34] @ 037fc08c
    lsl r1, r1, #1 @ 037fc090
    add r0, r0, #0xa @ 037fc094
    str r1, [r2] @ 037fc098
    str r0, [r3] @ 037fc09c
    pop {r4, r5, r6, r7, r8, sb, sl, lr} @ 037fc0a0
    bx lr @ 037fc0a4
    .byte 0x8c, 0x6d, 0x80, 0x03, 0xb8, 0xbd, 0x80, 0x03, 0x84, 0xb8, 0x80, 0x03, 0x90, 0x6d, 0x80, 0x03 @ 037fc0a8
    .byte 0xfc, 0xba, 0x80, 0x03, 0x00, 0xbb, 0x80, 0x03, 0xa0, 0xb8, 0x80, 0x03, 0x70, 0xb8, 0x80, 0x03 @ 037fc0b8
    .byte 0x74, 0xb8, 0x80, 0x03 @ 037fc0c8
.L_037fc0cc:
@ FUN_037fc0cc at 0x037fc0cc
    str lr, [sp, #-4]! @ 037fc0cc
    sub sp, sp, #4 @ 037fc0d0
    bl .L_037fc544 @ 037fc0d4
    ldr r0, [pc, #0xc] @ 037fc0d8
    bl .L_037fc504 @ 037fc0dc
    add sp, sp, #4 @ 037fc0e0
    .word 0xe49de004 @ 037fc0e4 pop {lr}
    bx lr @ 037fc0e8
    .byte 0x18, 0xc2, 0x7f, 0x03, 0x48, 0x30, 0x9f, 0xe5, 0x20, 0x20, 0x93, 0xe5, 0x82, 0x21, 0x62, 0xe0 @ 037fc0ec
    .byte 0x82, 0x20, 0xa0, 0xe1, 0x3c, 0x30, 0x9f, 0xe5, 0x00, 0x00, 0x52, 0xe3, 0x00, 0x30, 0x93, 0xe5 @ 037fc0fc
    .byte 0x03, 0x00, 0x00, 0xda, 0x00, 0x10, 0xa0, 0xe3, 0x01, 0x20, 0x52, 0xe2, 0xb2, 0x10, 0xc3, 0xe0 @ 037fc10c
    .byte 0xfb, 0xff, 0xff, 0x1a, 0x20, 0x30, 0x9f, 0xe5, 0x00, 0x30, 0x93, 0xe5, 0x01, 0x2a, 0xa0, 0xe3 @ 037fc11c
    .byte 0x00, 0x10, 0xa0, 0xe3, 0x01, 0x20, 0x52, 0xe2, 0xb2, 0x10, 0xc3, 0xe0, 0xfb, 0xff, 0xff, 0x1a @ 037fc12c
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0xb8, 0xbd, 0x80, 0x03, 0x8c, 0x6d, 0x80, 0x03, 0x90, 0x6d, 0x80, 0x03 @ 037fc13c
.L_037fc14c:
@ FUN_037fc14c at 0x037fc14c
    push {r4, r5, r6, r7, lr} @ 037fc14c
    ldr r5, [pc, #0xac] @ 037fc150
    ldr r3, [r5, #0x20] @ 037fc154
    rsb r3, r3, r3, lsl #3 @ 037fc158
    lsl r3, r3, #1 @ 037fc15c
    ldr r7, [pc, #0xa0] @ 037fc160
    cmp r3, #0 @ 037fc164
    sub sp, sp, #4 @ 037fc168
    ldr r2, [r7] @ 037fc16c
    ble .L_037fc184 @ 037fc170
.L_037fc174:
    mov r1, #0 @ 037fc174
    subs r3, r3, #1 @ 037fc178
    strh r1, [r2], #2 @ 037fc17c
    bne .L_037fc174 @ 037fc180
.L_037fc184:
    ldr r6, [pc, #0x80] @ 037fc184
    ldr r3, [r6] @ 037fc188
    mov r4, #0x1000 @ 037fc18c
.L_037fc190:
    mov r2, #0 @ 037fc190
    subs r4, r4, #1 @ 037fc194
    strh r2, [r3], #2 @ 037fc198
    bne .L_037fc190 @ 037fc19c
    ldr r3, [pc, #0x68] @ 037fc1a0
    ldr r2, [r5, #0x30] @ 037fc1a4
    ldr r0, [r3] @ 037fc1a8
    mov r1, #0x64 @ 037fc1ac
    bl .L_037f89bc @ 037fc1b0
    bl .L_037f9238 @ 037fc1b4
    ldr r2, [r5, #0x20] @ 037fc1b8
    ldr r3, [r7] @ 037fc1bc
    bic r2, r2, #1 @ 037fc1c0
    add r2, r2, r3 @ 037fc1c4
    ldr ip, [r6] @ 037fc1c8
    ldr r3, [pc, #0x40] @ 037fc1cc
    add ip, ip, #0x1000 @ 037fc1d0
    mov r1, r4 @ 037fc1d4
    str r4, [r3] @ 037fc1d8
    mov r0, #0x11 @ 037fc1dc
    str r2, [r5, #8] @ 037fc1e0
    str ip, [r5, #0x18] @ 037fc1e4
    str r4, [r5, #0x40] @ 037fc1e8
    str r4, [r5, #0x34] @ 037fc1ec
    str r4, [r5, #0x38] @ 037fc1f0
    bl .L_037fc514 @ 037fc1f4
    add sp, sp, #4 @ 037fc1f8
    pop {r4, r5, r6, r7, lr} @ 037fc1fc
    bx lr @ 037fc200
    .byte 0xb8, 0xbd, 0x80, 0x03, 0x8c, 0x6d, 0x80, 0x03, 0x90, 0x6d, 0x80, 0x03, 0xfc, 0xba, 0x80, 0x03 @ 037fc204
    .byte 0xa0, 0xb8, 0x80, 0x03 @ 037fc214
@ FUN_037fc218 at 0x037fc218
    str lr, [sp, #-4]! @ 037fc218
    ldr r1, [r1] @ 037fc21c
    sub sp, sp, #4 @ 037fc220
    cmp r0, #0x10 @ 037fc224
    ldrls pc, [pc, r0, lsl #2] @ 037fc228
    b .L_037fc288 @ 037fc22c
    .byte 0x94, 0xc2, 0x7f, 0x03, 0x50, 0xc3, 0x7f, 0x03, 0x48, 0xc3, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03 @ 037fc230
    .byte 0x88, 0xc2, 0x7f, 0x03, 0x20, 0xc3, 0x7f, 0x03, 0xf8, 0xc2, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03 @ 037fc240
    .byte 0x88, 0xc2, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03, 0x68, 0xc3, 0x7f, 0x03 @ 037fc250
    .byte 0x60, 0xc3, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03, 0x44, 0xc4, 0x7f, 0x03, 0x74, 0xc2, 0x7f, 0x03 @ 037fc260
    .byte 0xa8, 0xc2, 0x7f, 0x03 @ 037fc270
    mov r2, #0x4000000 @ 037fc274
    mvn r3, #0x7f00 @ 037fc278
    add r2, r2, #0x500 @ 037fc27c
    sub r3, r3, #0x80 @ 037fc280
    strh r3, [r2] @ 037fc284
.L_037fc288:
    add sp, sp, #4 @ 037fc288
    .word 0xe49de004 @ 037fc28c pop {lr}
    bx lr @ 037fc290
    mov r0, r1 @ 037fc294
    mov r1, #2 @ 037fc298
    add sp, sp, #4 @ 037fc29c
    .word 0xe49de004 @ 037fc2a0 pop {lr}
    b .L_037fbf5c @ 037fc2a4
    mov r3, #0x27c0000 @ 037fc2a8
    add r3, r3, #0x3f000 @ 037fc2ac
    ldr r0, [r3, #0x28] @ 037fc2b0
    ldr ip, [r0, #4] @ 037fc2b4
    cmp ip, #0 @ 037fc2b8
    ldr r2, [r0] @ 037fc2bc
    beq .L_037fc2e4 @ 037fc2c0
    ble .L_037fc2e4 @ 037fc2c4
    add r3, ip, #1 @ 037fc2c8
    ldr r1, [pc, #0x184] @ 037fc2cc
    asr r3, r3, #1 @ 037fc2d0
.L_037fc2d4:
    ldrh lr, [r2], #2 @ 037fc2d4
    subs r3, r3, #1 @ 037fc2d8
    strh lr, [r1], #2 @ 037fc2dc
    bne .L_037fc2d4 @ 037fc2e0
.L_037fc2e4:
    ldr r3, [pc, #0x170] @ 037fc2e4
    mov r2, #0 @ 037fc2e8
    str ip, [r3] @ 037fc2ec
    str r2, [r0, #4] @ 037fc2f0
    b .L_037fc288 @ 037fc2f4
    mov r3, #0x4000000 @ 037fc2f8
    add r3, r3, #0x500 @ 037fc2fc
    mov r2, #0x8000 @ 037fc300
    strh r2, [r3] @ 037fc304
    ldr r3, [pc, #0x150] @ 037fc308
    mov r1, #0 @ 037fc30c
    str r1, [r3, #0x3c] @ 037fc310
    add sp, sp, #4 @ 037fc314
    .word 0xe49de004 @ 037fc318 pop {lr}
    b .L_037fbbb0 @ 037fc31c
    mov r2, #0x4000000 @ 037fc320
    mvn r3, #0x7f00 @ 037fc324
    add r2, r2, #0x500 @ 037fc328
    sub r3, r3, #0x80 @ 037fc32c
    strh r3, [r2] @ 037fc330
    bl .L_037fb9fc @ 037fc334
    ldr r3, [pc, #0x120] @ 037fc338
    mov r2, #1 @ 037fc33c
    str r2, [r3, #0x3c] @ 037fc340
    b .L_037fc288 @ 037fc344
    bl .L_037f9238 @ 037fc348
    b .L_037fc288 @ 037fc34c
    ldr r3, [pc, #0x108] @ 037fc350
    mov r2, #1 @ 037fc354
    str r2, [r3, #0x40] @ 037fc358
    b .L_037fc288 @ 037fc35c
    bl .L_037f812c @ 037fc360
    b .L_037fc288 @ 037fc364
    mov r3, #0x27c0000 @ 037fc368
    add r3, r3, #0x3f000 @ 037fc36c
    ldr r3, [r3, #0x28] @ 037fc370
    ldr r1, [r3, #0x14] @ 037fc374
    cmp r1, #0 @ 037fc378
    beq .L_037fc3ac @ 037fc37c
    ldr r2, [r3, #0x10] @ 037fc380
    ble .L_037fc3a4 @ 037fc384
    add r3, r1, #1 @ 037fc388
    ldr r0, [pc, #0xd0] @ 037fc38c
    asr r3, r3, #1 @ 037fc390
.L_037fc394:
    ldrh ip, [r2], #2 @ 037fc394
    subs r3, r3, #1 @ 037fc398
    strh ip, [r0], #2 @ 037fc39c
    bne .L_037fc394 @ 037fc3a0
.L_037fc3a4:
    ldr r0, [pc, #0xb8] @ 037fc3a4
    bl .L_037f9afc @ 037fc3a8
.L_037fc3ac:
    mov r3, #0x27c0000 @ 037fc3ac
    add r3, r3, #0x3f000 @ 037fc3b0
    ldr r3, [r3, #0x28] @ 037fc3b4
    ldr r1, [r3, #0x24] @ 037fc3b8
    cmp r1, #0 @ 037fc3bc
    beq .L_037fc3f0 @ 037fc3c0
    ldr r2, [r3, #0x20] @ 037fc3c4
    ble .L_037fc3e8 @ 037fc3c8
    add r3, r1, #1 @ 037fc3cc
    ldr r0, [pc, #0x8c] @ 037fc3d0
    asr r3, r3, #1 @ 037fc3d4
.L_037fc3d8:
    ldrh lr, [r2], #2 @ 037fc3d8
    subs r3, r3, #1 @ 037fc3dc
    strh lr, [r0], #2 @ 037fc3e0
    bne .L_037fc3d8 @ 037fc3e4
.L_037fc3e8:
    ldr r0, [pc, #0x74] @ 037fc3e8
    bl .L_037f9394 @ 037fc3ec
.L_037fc3f0:
    mov r3, #0x27c0000 @ 037fc3f0
    add r3, r3, #0x3f000 @ 037fc3f4
    ldr r3, [r3, #0x28] @ 037fc3f8
    ldr r1, [r3, #0x34] @ 037fc3fc
    cmp r1, #0 @ 037fc400
    beq .L_037fc434 @ 037fc404
    ldr r2, [r3, #0x30] @ 037fc408
    ble .L_037fc42c @ 037fc40c
    add r3, r1, #1 @ 037fc410
    ldr r0, [pc, #0x48] @ 037fc414
    asr r3, r3, #1 @ 037fc418
.L_037fc41c:
    ldrh ip, [r2], #2 @ 037fc41c
    subs r3, r3, #1 @ 037fc420
    strh ip, [r0], #2 @ 037fc424
    bne .L_037fc41c @ 037fc428
.L_037fc42c:
    ldr r0, [pc, #0x30] @ 037fc42c
    bl .L_037f8504 @ 037fc430
.L_037fc434:
    ldr r3, [pc, #0x24] @ 037fc434
    mov r2, #1 @ 037fc438
    str r2, [r3, #0x3c] @ 037fc43c
    b .L_037fc288 @ 037fc440
    mov r3, #0x4000000 @ 037fc444
    add r3, r3, #0x500 @ 037fc448
    mov r2, #0x8000 @ 037fc44c
    strh r2, [r3] @ 037fc450
    b .L_037fc288 @ 037fc454
    .byte 0xa4, 0xb8, 0x80, 0x03, 0xa0, 0xb8, 0x80, 0x03, 0xb8, 0xbd, 0x80, 0x03, 0x38, 0xbb, 0x80, 0x03 @ 037fc458
@ FUN_037fc468 at 0x037fc468
    push {r4, r5, lr} @ 037fc468
    mov r3, #0x4000000 @ 037fc46c
    add r3, r3, #0x100 @ 037fc470
    mov r2, #0 @ 037fc474
    strh r2, [r3, #0x80] @ 037fc478
    sub sp, sp, #4 @ 037fc47c
    mov r5, r3 @ 037fc480
.L_037fc484:
    ldrh r3, [r5, #0x84] @ 037fc484
    ldr r4, [pc, #0x68] @ 037fc488
    tst r3, #0x100 @ 037fc48c
    mov r1, r4 @ 037fc490
    bne .L_037fc4e4 @ 037fc494
.L_037fc498:
    ldr r2, [pc, #0x5c] @ 037fc498
    mov r3, #0x4100000 @ 037fc49c
    ldr ip, [r3] @ 037fc4a0
    ldr r2, [r2] @ 037fc4a4
    ldr r3, [pc, #0x50] @ 037fc4a8
    bic lr, ip, #0xff000000 @ 037fc4ac
    cmp r2, #0 @ 037fc4b0
    lsr ip, ip, #0x18 @ 037fc4b4
    mov r0, ip @ 037fc4b8
    str ip, [r3] @ 037fc4bc
    str lr, [r4] @ 037fc4c0
    beq .L_037fc484 @ 037fc4c4
    mov lr, pc @ 037fc4c8
    bx r2 @ 037fc4cc
    ldrh r3, [r5, #0x84] @ 037fc4d0
    ldr r4, [pc, #0x1c] @ 037fc4d4
    tst r3, #0x100 @ 037fc4d8
    mov r1, r4 @ 037fc4dc
    beq .L_037fc498 @ 037fc4e0
.L_037fc4e4:
    mov r3, #0x100 @ 037fc4e4
    strh r3, [r5, #0x80] @ 037fc4e8
    add sp, sp, #4 @ 037fc4ec
    pop {r4, r5, lr} @ 037fc4f0
    bx lr @ 037fc4f4
    .byte 0x08, 0xbb, 0x80, 0x03, 0x00, 0xbe, 0x80, 0x03, 0x04, 0xbb, 0x80, 0x03 @ 037fc4f8
.L_037fc504:
@ FUN_037fc504 at 0x037fc504
    ldr r3, [pc, #4] @ 037fc504
    str r0, [r3] @ 037fc508
    bx lr @ 037fc50c
    .byte 0x00, 0xbe, 0x80, 0x03 @ 037fc510
.L_037fc514:
@ FUN_037fc514 at 0x037fc514
    mov r2, #0x4000000 @ 037fc514
    mov ip, r0 @ 037fc518
    add r2, r2, #0x100 @ 037fc51c
.L_037fc520:
    ldrh r3, [r2, #0x84] @ 037fc520
    ands r0, r3, #2 @ 037fc524
    bne .L_037fc520 @ 037fc528
    bic r3, r1, #0xff000000 @ 037fc52c
    orr r3, r3, ip, lsl #24 @ 037fc530
    mov r2, #0x4000000 @ 037fc534
    str r3, [r2, #0x188] @ 037fc538
    bx lr @ 037fc53c
    .byte 0xf3, 0xff, 0xff, 0xea @ 037fc540
.L_037fc544:
@ FUN_037fc544 at 0x037fc544
    push {r4, lr} @ 037fc544
    mvn r3, #0x7f00 @ 037fc548
    mov r4, #0x4000000 @ 037fc54c
    sub r3, r3, #0xf7 @ 037fc550
    add r4, r4, #0x100 @ 037fc554
    strh r3, [r4, #0x84] @ 037fc558
    mov r0, #0x40000 @ 037fc55c
    ldr r1, [pc, #0x24] @ 037fc560
    bl .L_037f8114 @ 037fc564
    mov r0, #0x40000 @ 037fc568
    bl .L_037f8120 @ 037fc56c
    mvn r3, #0x7b00 @ 037fc570
    sub r3, r3, #0xf7 @ 037fc574
    strh r3, [r4, #0x84] @ 037fc578
    mov r3, #0 @ 037fc57c
    strh r3, [r4, #0x80] @ 037fc580
    pop {r4, lr} @ 037fc584
    bx lr @ 037fc588
    .byte 0x68, 0xc4, 0x7f, 0x03 @ 037fc58c
@ arm7_dispatch_037fc590 at 0x037fc590
    cmp lr, #0x200 @ 037fc590
    ldr r8, [sp, #0x30] @ 037fc594
    lsl sl, sl, #0x10 @ 037fc598
    ldr sb, [sp, #0x34] @ 037fc59c
    lslge sl, sl, #0x10 @ 037fc5a0
    ldr r3, [sp, #0x38] @ 037fc5a4
    ldr fp, [sp, #0x3c] @ 037fc5a8
    mov r0, #0 @ 037fc5ac
.L_037fc5b0:
    add r4, r4, r8 @ 037fc5b0
    add r5, r5, sb @ 037fc5b4
    add r6, r6, r3 @ 037fc5b8
    add r7, r7, fp @ 037fc5bc
    strh r0, [ip], #2 @ 037fc5c0
    subs lr, lr, #0x100 @ 037fc5c4
    bgt .L_037fc5b0 @ 037fc5c8
    mov fp, #0 @ 037fc5cc
    b .L_03800e34 @ 037fc5d0
@ arm7_dispatch_037fc5d4 at 0x037fc5d4
    cmp lr, #0x200 @ 037fc5d4
    lsl sl, sl, #0x10 @ 037fc5d8
    lslge sl, sl, #0x10 @ 037fc5dc
.L_037fc5e0:
    mov r0, #0 @ 037fc5e0
    ldr r3, [sp, #0x2c] @ 037fc5e4
    lsr r0, r7, #0x10 @ 037fc5e8
    bic r0, r0, #0xfc00 @ 037fc5ec
    ldr r2, [sb, r0, lsl #2] @ 037fc5f0
    mov r0, #0 @ 037fc5f4
    add r2, r3, r2, lsl #1 @ 037fc5f8
    cmp r2, #0x3400 @ 037fc5fc
    ldrshlt r0, [r8, r2] @ 037fc600
    ldr r1, [sp, #0x30] @ 037fc604
    ldr r2, [sp, #0x34] @ 037fc608
    add r4, r4, r1 @ 037fc60c
    add r5, r5, r2 @ 037fc610
    ldr r1, [sp, #0x38] @ 037fc614
    ldr r2, [sp, #0x3c] @ 037fc618
    add r6, r6, r1 @ 037fc61c
    add r7, r7, r2 @ 037fc620
    strh r0, [ip], #2 @ 037fc624
    subs lr, lr, #0x100 @ 037fc628
    bgt .L_037fc5e0 @ 037fc62c
    mov fp, #0 @ 037fc630
    b .L_03800e34 @ 037fc634
@ arm7_dispatch_037fc638 at 0x037fc638
    ldr r0, [sp, #0x30] @ 037fc638
    ldr fp, [sp, #0x38] @ 037fc63c
.L_037fc640:
    ands r2, lr, #0xf @ 037fc640
    addne r1, sl, sl, asr #16 @ 037fc644
    rsbne r2, r2, #0x10 @ 037fc648
    lslne r1, r1, #0x10 @ 037fc64c
    asrne r2, r1, r2 @ 037fc650
    ldr r3, [sp, #0x20] @ 037fc654
    bic r1, r4, #0x8000 @ 037fc658
    add r1, r1, r2 @ 037fc65c
    lsr r1, r1, #0x10 @ 037fc660
    bic r1, r1, #0xfc00 @ 037fc664
    ldr r2, [sb, r1, lsl #2] @ 037fc668
    mov r1, #0 @ 037fc66c
    add r2, r3, r2, lsl #1 @ 037fc670
    cmp r2, #0x3400 @ 037fc674
    ldrhlt r1, [r8, r2] @ 037fc678
    orr sl, r1, sl, lsl #16 @ 037fc67c
    ldr r3, [sp, #0x34] @ 037fc680
    add r4, r4, r0 @ 037fc684
    add r5, r5, r3 @ 037fc688
    ldr r3, [sp, #0x3c] @ 037fc68c
    add r6, r6, fp @ 037fc690
    add r7, r7, r3 @ 037fc694
    mov r1, #0 @ 037fc698
    strh r1, [ip], #2 @ 037fc69c
    subs lr, lr, #0x100 @ 037fc6a0
    bgt .L_037fc640 @ 037fc6a4
    mov fp, #0 @ 037fc6a8
    b .L_03800e34 @ 037fc6ac
.L_037fc6b0:
@ arm7_dispatch_037fc6b0 at 0x037fc6b0
    ands r1, lr, #0xf @ 037fc6b0
    addne r2, sl, sl, asr #16 @ 037fc6b4
    rsbne r1, r1, #0x10 @ 037fc6b8
    lslne r2, r2, #0x10 @ 037fc6bc
    asrne r1, r2, r1 @ 037fc6c0
    ldr r3, [sp, #0x20] @ 037fc6c4
    bic r0, r4, #0x8000 @ 037fc6c8
    add r0, r0, r1 @ 037fc6cc
    lsr r0, r0, #0x10 @ 037fc6d0
    bic r0, r0, #0xfc00 @ 037fc6d4
    ldr r2, [sb, r0, lsl #2] @ 037fc6d8
    mov r0, #0 @ 037fc6dc
    add r2, r3, r2, lsl #1 @ 037fc6e0
    cmp r2, #0x3400 @ 037fc6e4
    ldrhlt r0, [r8, r2] @ 037fc6e8
    orr sl, r0, sl, lsl #16 @ 037fc6ec
    mov r0, #0 @ 037fc6f0
    ldr r3, [sp, #0x2c] @ 037fc6f4
    lsr r0, r7, #0x10 @ 037fc6f8
    bic r0, r0, #0xfc00 @ 037fc6fc
    ldr r2, [sb, r0, lsl #2] @ 037fc700
    mov r0, #0 @ 037fc704
    add r2, r3, r2, lsl #1 @ 037fc708
    cmp r2, #0x3400 @ 037fc70c
    ldrshlt r0, [r8, r2] @ 037fc710
    ldr r1, [sp, #0x30] @ 037fc714
    ldr r2, [sp, #0x34] @ 037fc718
    add r4, r4, r1 @ 037fc71c
    add r5, r5, r2 @ 037fc720
    ldr r1, [sp, #0x38] @ 037fc724
    ldr r2, [sp, #0x3c] @ 037fc728
    add r6, r6, r1 @ 037fc72c
    add r7, r7, r2 @ 037fc730
    strh r0, [ip], #2 @ 037fc734
    subs lr, lr, #0x100 @ 037fc738
    bgt .L_037fc6b0 @ 037fc73c
    mov fp, #0 @ 037fc740
    b .L_03800e34 @ 037fc744
@ arm7_dispatch_037fc748 at 0x037fc748
    cmp lr, #0x200 @ 037fc748
    ldr r8, [sp, #0x30] @ 037fc74c
    lsl sl, sl, #0x10 @ 037fc750
    ldr sb, [sp, #0x34] @ 037fc754
    lslge sl, sl, #0x10 @ 037fc758
    ldr r3, [sp, #0x38] @ 037fc75c
    ldr fp, [sp, #0x3c] @ 037fc760
    mov r0, #0 @ 037fc764
.L_037fc768:
    add r4, r4, r8 @ 037fc768
    add r5, r5, sb @ 037fc76c
    add r6, r6, r3 @ 037fc770
    add r7, r7, fp @ 037fc774
    strh r0, [ip], #2 @ 037fc778
    subs lr, lr, #0x100 @ 037fc77c
    bgt .L_037fc768 @ 037fc780
    mov fp, #0 @ 037fc784
    asr r1, sl, #0x10 @ 037fc788
    ldr r3, [sp, #0x24] @ 037fc78c
    bic fp, r5, #0x8000 @ 037fc790
    add fp, fp, r1, lsl #15 @ 037fc794
    lsr fp, fp, #0x10 @ 037fc798
    bic fp, fp, #0xfc00 @ 037fc79c
    ldr r2, [sb, fp, lsl #2] @ 037fc7a0
    mov fp, #0 @ 037fc7a4
    add r2, r3, r2, lsl #1 @ 037fc7a8
    cmp r2, #0x3400 @ 037fc7ac
    ldrshlt fp, [r8, r2] @ 037fc7b0
    b .L_03800e34 @ 037fc7b4
@ arm7_dispatch_037fc7b8 at 0x037fc7b8
    cmp lr, #0x200 @ 037fc7b8
    lsl sl, sl, #0x10 @ 037fc7bc
    lslge sl, sl, #0x10 @ 037fc7c0
.L_037fc7c4:
    mov r0, #0 @ 037fc7c4
    ldr r3, [sp, #0x2c] @ 037fc7c8
    lsr r0, r7, #0x10 @ 037fc7cc
    bic r0, r0, #0xfc00 @ 037fc7d0
    ldr r2, [sb, r0, lsl #2] @ 037fc7d4
    mov r0, #0 @ 037fc7d8
    add r2, r3, r2, lsl #1 @ 037fc7dc
    cmp r2, #0x3400 @ 037fc7e0
    ldrshlt r0, [r8, r2] @ 037fc7e4
    ldr r1, [sp, #0x30] @ 037fc7e8
    ldr r2, [sp, #0x34] @ 037fc7ec
    add r4, r4, r1 @ 037fc7f0
    add r5, r5, r2 @ 037fc7f4
    ldr r1, [sp, #0x38] @ 037fc7f8
    ldr r2, [sp, #0x3c] @ 037fc7fc
    add r6, r6, r1 @ 037fc800
    add r7, r7, r2 @ 037fc804
    strh r0, [ip], #2 @ 037fc808
    subs lr, lr, #0x100 @ 037fc80c
    bgt .L_037fc7c4 @ 037fc810
    asr r1, sl, #0x10 @ 037fc814
    ldr r3, [sp, #0x24] @ 037fc818
    bic fp, r5, #0x8000 @ 037fc81c
    add fp, fp, r1, lsl #15 @ 037fc820
    lsr fp, fp, #0x10 @ 037fc824
    bic fp, fp, #0xfc00 @ 037fc828
    ldr r2, [sb, fp, lsl #2] @ 037fc82c
    mov fp, #0 @ 037fc830
    add r2, r3, r2, lsl #1 @ 037fc834
    cmp r2, #0x3400 @ 037fc838
    ldrshlt fp, [r8, r2] @ 037fc83c
    b .L_03800e34 @ 037fc840
@ arm7_dispatch_037fc844 at 0x037fc844
    ldr r0, [sp, #0x30] @ 037fc844
    ldr fp, [sp, #0x38] @ 037fc848
.L_037fc84c:
    ands r2, lr, #0xf @ 037fc84c
    addne r1, sl, sl, asr #16 @ 037fc850
    rsbne r2, r2, #0x10 @ 037fc854
    lslne r1, r1, #0x10 @ 037fc858
    asrne r2, r1, r2 @ 037fc85c
    ldr r3, [sp, #0x20] @ 037fc860
    bic r1, r4, #0x8000 @ 037fc864
    add r1, r1, r2 @ 037fc868
    lsr r1, r1, #0x10 @ 037fc86c
    bic r1, r1, #0xfc00 @ 037fc870
    ldr r2, [sb, r1, lsl #2] @ 037fc874
    mov r1, #0 @ 037fc878
    add r2, r3, r2, lsl #1 @ 037fc87c
    cmp r2, #0x3400 @ 037fc880
    ldrhlt r1, [r8, r2] @ 037fc884
    orr sl, r1, sl, lsl #16 @ 037fc888
    ldr r3, [sp, #0x34] @ 037fc88c
    add r4, r4, r0 @ 037fc890
    add r5, r5, r3 @ 037fc894
    ldr r3, [sp, #0x3c] @ 037fc898
    add r6, r6, fp @ 037fc89c
    add r7, r7, r3 @ 037fc8a0
    mov r1, #0 @ 037fc8a4
    strh r1, [ip], #2 @ 037fc8a8
    subs lr, lr, #0x100 @ 037fc8ac
    bgt .L_037fc84c @ 037fc8b0
    mov fp, #0 @ 037fc8b4
    asr r1, sl, #0x10 @ 037fc8b8
    ldr r3, [sp, #0x24] @ 037fc8bc
    bic fp, r5, #0x8000 @ 037fc8c0
    add fp, fp, r1, lsl #15 @ 037fc8c4
    lsr fp, fp, #0x10 @ 037fc8c8
    bic fp, fp, #0xfc00 @ 037fc8cc
    ldr r2, [sb, fp, lsl #2] @ 037fc8d0
    mov fp, #0 @ 037fc8d4
    add r2, r3, r2, lsl #1 @ 037fc8d8
    cmp r2, #0x3400 @ 037fc8dc
    ldrshlt fp, [r8, r2] @ 037fc8e0
    b .L_03800e34 @ 037fc8e4
.L_037fc8e8:
@ arm7_dispatch_037fc8e8 at 0x037fc8e8
    ands r1, lr, #0xf @ 037fc8e8
    addne r2, sl, sl, asr #16 @ 037fc8ec
    rsbne r1, r1, #0x10 @ 037fc8f0
    lslne r2, r2, #0x10 @ 037fc8f4
    asrne r1, r2, r1 @ 037fc8f8
    ldr r3, [sp, #0x20] @ 037fc8fc
    bic r0, r4, #0x8000 @ 037fc900
    add r0, r0, r1 @ 037fc904
    lsr r0, r0, #0x10 @ 037fc908
    bic r0, r0, #0xfc00 @ 037fc90c
    ldr r2, [sb, r0, lsl #2] @ 037fc910
    mov r0, #0 @ 037fc914
    add r2, r3, r2, lsl #1 @ 037fc918
    cmp r2, #0x3400 @ 037fc91c
    ldrhlt r0, [r8, r2] @ 037fc920
    orr sl, r0, sl, lsl #16 @ 037fc924
    mov r0, #0 @ 037fc928
    ldr r3, [sp, #0x2c] @ 037fc92c
    lsr r0, r7, #0x10 @ 037fc930
    bic r0, r0, #0xfc00 @ 037fc934
    ldr r2, [sb, r0, lsl #2] @ 037fc938
    mov r0, #0 @ 037fc93c
    add r2, r3, r2, lsl #1 @ 037fc940
    cmp r2, #0x3400 @ 037fc944
    ldrshlt r0, [r8, r2] @ 037fc948
    ldr r1, [sp, #0x30] @ 037fc94c
    ldr r2, [sp, #0x34] @ 037fc950
    add r4, r4, r1 @ 037fc954
    add r5, r5, r2 @ 037fc958
    ldr r1, [sp, #0x38] @ 037fc95c
    ldr r2, [sp, #0x3c] @ 037fc960
    add r6, r6, r1 @ 037fc964
    add r7, r7, r2 @ 037fc968
    strh r0, [ip], #2 @ 037fc96c
    subs lr, lr, #0x100 @ 037fc970
    bgt .L_037fc8e8 @ 037fc974
    asr r1, sl, #0x10 @ 037fc978
    ldr r3, [sp, #0x24] @ 037fc97c
    bic fp, r5, #0x8000 @ 037fc980
    add fp, fp, r1, lsl #15 @ 037fc984
    lsr fp, fp, #0x10 @ 037fc988
    bic fp, fp, #0xfc00 @ 037fc98c
    ldr r2, [sb, fp, lsl #2] @ 037fc990
    mov fp, #0 @ 037fc994
    add r2, r3, r2, lsl #1 @ 037fc998
    cmp r2, #0x3400 @ 037fc99c
    ldrshlt fp, [r8, r2] @ 037fc9a0
    b .L_03800e34 @ 037fc9a4
@ arm7_dispatch_037fc9a8 at 0x037fc9a8
    cmp lr, #0x200 @ 037fc9a8
    ldr r8, [sp, #0x30] @ 037fc9ac
    lsl sl, sl, #0x10 @ 037fc9b0
    ldr sb, [sp, #0x34] @ 037fc9b4
    lslge sl, sl, #0x10 @ 037fc9b8
    ldr r3, [sp, #0x38] @ 037fc9bc
    ldr fp, [sp, #0x3c] @ 037fc9c0
    mov r0, #0 @ 037fc9c4
.L_037fc9c8:
    add r4, r4, r8 @ 037fc9c8
    add r5, r5, sb @ 037fc9cc
    add r6, r6, r3 @ 037fc9d0
    add r7, r7, fp @ 037fc9d4
    strh r0, [ip], #2 @ 037fc9d8
    subs lr, lr, #0x100 @ 037fc9dc
    bgt .L_037fc9c8 @ 037fc9e0
    mov fp, #0 @ 037fc9e4
    mov fp, #0 @ 037fc9e8
    b .L_03800e34 @ 037fc9ec
@ arm7_dispatch_037fc9f0 at 0x037fc9f0
    cmp lr, #0x200 @ 037fc9f0
    lsl sl, sl, #0x10 @ 037fc9f4
    lslge sl, sl, #0x10 @ 037fc9f8
.L_037fc9fc:
    mov r0, #0 @ 037fc9fc
    ldr r3, [sp, #0x28] @ 037fca00
    bic r1, r6, #0x8000 @ 037fca04
    add r1, r1, fp, lsl #15 @ 037fca08
    lsr r1, r1, #0x10 @ 037fca0c
    bic r1, r1, #0xfc00 @ 037fca10
    ldr r2, [sb, r1, lsl #2] @ 037fca14
    mov r1, #0 @ 037fca18
    add r2, r3, r2, lsl #1 @ 037fca1c
    cmp r2, #0x3400 @ 037fca20
    ldrshlt r1, [r8, r2] @ 037fca24
    mov fp, #0 @ 037fca28
    ldr r3, [sp, #0x2c] @ 037fca2c
    bic r0, r7, #0x8000 @ 037fca30
    add r0, r0, r1, lsl #15 @ 037fca34
    lsr r0, r0, #0x10 @ 037fca38
    bic r0, r0, #0xfc00 @ 037fca3c
    ldr r2, [sb, r0, lsl #2] @ 037fca40
    mov r0, #0 @ 037fca44
    add r2, r3, r2, lsl #1 @ 037fca48
    cmp r2, #0x3400 @ 037fca4c
    ldrshlt r0, [r8, r2] @ 037fca50
    ldr r1, [sp, #0x30] @ 037fca54
    ldr r2, [sp, #0x34] @ 037fca58
    add r4, r4, r1 @ 037fca5c
    add r5, r5, r2 @ 037fca60
    ldr r1, [sp, #0x38] @ 037fca64
    ldr r2, [sp, #0x3c] @ 037fca68
    add r6, r6, r1 @ 037fca6c
    add r7, r7, r2 @ 037fca70
    strh r0, [ip], #2 @ 037fca74
    subs lr, lr, #0x100 @ 037fca78
    bgt .L_037fc9fc @ 037fca7c
    b .L_03800e34 @ 037fca80
@ arm7_dispatch_037fca84 at 0x037fca84
    ldr r0, [sp, #0x30] @ 037fca84
    ldr fp, [sp, #0x38] @ 037fca88
.L_037fca8c:
    ands r2, lr, #0xf @ 037fca8c
    addne r1, sl, sl, asr #16 @ 037fca90
    rsbne r2, r2, #0x10 @ 037fca94
    lslne r1, r1, #0x10 @ 037fca98
    asrne r2, r1, r2 @ 037fca9c
    ldr r3, [sp, #0x20] @ 037fcaa0
    bic r1, r4, #0x8000 @ 037fcaa4
    add r1, r1, r2 @ 037fcaa8
    lsr r1, r1, #0x10 @ 037fcaac
    bic r1, r1, #0xfc00 @ 037fcab0
    ldr r2, [sb, r1, lsl #2] @ 037fcab4
    mov r1, #0 @ 037fcab8
    add r2, r3, r2, lsl #1 @ 037fcabc
    cmp r2, #0x3400 @ 037fcac0
    ldrhlt r1, [r8, r2] @ 037fcac4
    orr sl, r1, sl, lsl #16 @ 037fcac8
    ldr r3, [sp, #0x34] @ 037fcacc
    add r4, r4, r0 @ 037fcad0
    add r5, r5, r3 @ 037fcad4
    ldr r3, [sp, #0x3c] @ 037fcad8
    add r6, r6, fp @ 037fcadc
    add r7, r7, r3 @ 037fcae0
    mov r1, #0 @ 037fcae4
    strh r1, [ip], #2 @ 037fcae8
    subs lr, lr, #0x100 @ 037fcaec
    bgt .L_037fca8c @ 037fcaf0
    mov fp, #0 @ 037fcaf4
    mov fp, #0 @ 037fcaf8
    b .L_03800e34 @ 037fcafc
.L_037fcb00:
@ arm7_dispatch_037fcb00 at 0x037fcb00
    ands r1, lr, #0xf @ 037fcb00
    addne r2, sl, sl, asr #16 @ 037fcb04
    rsbne r1, r1, #0x10 @ 037fcb08
    lslne r2, r2, #0x10 @ 037fcb0c
    asrne r1, r2, r1 @ 037fcb10
    ldr r3, [sp, #0x20] @ 037fcb14
    bic r0, r4, #0x8000 @ 037fcb18
    add r0, r0, r1 @ 037fcb1c
    lsr r0, r0, #0x10 @ 037fcb20
    bic r0, r0, #0xfc00 @ 037fcb24
    ldr r2, [sb, r0, lsl #2] @ 037fcb28
    mov r0, #0 @ 037fcb2c
    add r2, r3, r2, lsl #1 @ 037fcb30
    cmp r2, #0x3400 @ 037fcb34
    ldrhlt r0, [r8, r2] @ 037fcb38
    orr sl, r0, sl, lsl #16 @ 037fcb3c
    mov r0, #0 @ 037fcb40
    ldr r3, [sp, #0x28] @ 037fcb44
    bic r1, r6, #0x8000 @ 037fcb48
    add r1, r1, fp, lsl #15 @ 037fcb4c
    lsr r1, r1, #0x10 @ 037fcb50
    bic r1, r1, #0xfc00 @ 037fcb54
    ldr r2, [sb, r1, lsl #2] @ 037fcb58
    mov r1, #0 @ 037fcb5c
    add r2, r3, r2, lsl #1 @ 037fcb60
    cmp r2, #0x3400 @ 037fcb64
    ldrshlt r1, [r8, r2] @ 037fcb68
    mov fp, #0 @ 037fcb6c
    ldr r3, [sp, #0x2c] @ 037fcb70
    bic r0, r7, #0x8000 @ 037fcb74
    add r0, r0, r1, lsl #15 @ 037fcb78
    lsr r0, r0, #0x10 @ 037fcb7c
    bic r0, r0, #0xfc00 @ 037fcb80
    ldr r2, [sb, r0, lsl #2] @ 037fcb84
    mov r0, #0 @ 037fcb88
    add r2, r3, r2, lsl #1 @ 037fcb8c
    cmp r2, #0x3400 @ 037fcb90
    ldrshlt r0, [r8, r2] @ 037fcb94
    ldr r1, [sp, #0x30] @ 037fcb98
    ldr r2, [sp, #0x34] @ 037fcb9c
    add r4, r4, r1 @ 037fcba0
    add r5, r5, r2 @ 037fcba4
    ldr r1, [sp, #0x38] @ 037fcba8
    ldr r2, [sp, #0x3c] @ 037fcbac
    add r6, r6, r1 @ 037fcbb0
    add r7, r7, r2 @ 037fcbb4
    strh r0, [ip], #2 @ 037fcbb8
    subs lr, lr, #0x100 @ 037fcbbc
    bgt .L_037fcb00 @ 037fcbc0
    b .L_03800e34 @ 037fcbc4
@ arm7_dispatch_037fcbc8 at 0x037fcbc8
    cmp lr, #0x200 @ 037fcbc8
    ldr r8, [sp, #0x30] @ 037fcbcc
    lsl sl, sl, #0x10 @ 037fcbd0
    ldr sb, [sp, #0x34] @ 037fcbd4
    lslge sl, sl, #0x10 @ 037fcbd8
    ldr r3, [sp, #0x38] @ 037fcbdc
    ldr fp, [sp, #0x3c] @ 037fcbe0
    mov r0, #0 @ 037fcbe4
.L_037fcbe8:
    add r4, r4, r8 @ 037fcbe8
    add r5, r5, sb @ 037fcbec
    add r6, r6, r3 @ 037fcbf0
    add r7, r7, fp @ 037fcbf4
    strh r0, [ip], #2 @ 037fcbf8
    subs lr, lr, #0x100 @ 037fcbfc
    bgt .L_037fcbe8 @ 037fcc00
    mov fp, #0 @ 037fcc04
    asr r1, sl, #0x10 @ 037fcc08
    ldr r3, [sp, #0x24] @ 037fcc0c
    bic fp, r5, #0x8000 @ 037fcc10
    add fp, fp, r1, lsl #15 @ 037fcc14
    lsr fp, fp, #0x10 @ 037fcc18
    bic fp, fp, #0xfc00 @ 037fcc1c
    ldr r2, [sb, fp, lsl #2] @ 037fcc20
    mov fp, #0 @ 037fcc24
    add r2, r3, r2, lsl #1 @ 037fcc28
    cmp r2, #0x3400 @ 037fcc2c
    ldrshlt fp, [r8, r2] @ 037fcc30
    b .L_03800e34 @ 037fcc34
@ arm7_dispatch_037fcc38 at 0x037fcc38
    cmp lr, #0x200 @ 037fcc38
    lsl sl, sl, #0x10 @ 037fcc3c
    lslge sl, sl, #0x10 @ 037fcc40
.L_037fcc44:
    mov r0, #0 @ 037fcc44
    ldr r3, [sp, #0x28] @ 037fcc48
    bic r1, r6, #0x8000 @ 037fcc4c
    add r1, r1, fp, lsl #15 @ 037fcc50
    lsr r1, r1, #0x10 @ 037fcc54
    bic r1, r1, #0xfc00 @ 037fcc58
    ldr r2, [sb, r1, lsl #2] @ 037fcc5c
    mov r1, #0 @ 037fcc60
    add r2, r3, r2, lsl #1 @ 037fcc64
    cmp r2, #0x3400 @ 037fcc68
    ldrshlt r1, [r8, r2] @ 037fcc6c
    asr r2, sl, #0x10 @ 037fcc70
    ldr r3, [sp, #0x24] @ 037fcc74
    bic fp, r5, #0x8000 @ 037fcc78
    add fp, fp, r2, lsl #15 @ 037fcc7c
    lsr fp, fp, #0x10 @ 037fcc80
    bic fp, fp, #0xfc00 @ 037fcc84
    ldr r2, [sb, fp, lsl #2] @ 037fcc88
    mov fp, #0 @ 037fcc8c
    add r2, r3, r2, lsl #1 @ 037fcc90
    cmp r2, #0x3400 @ 037fcc94
    ldrshlt fp, [r8, r2] @ 037fcc98
    ldr r3, [sp, #0x2c] @ 037fcc9c
    bic r0, r7, #0x8000 @ 037fcca0
    add r0, r0, r1, lsl #15 @ 037fcca4
    lsr r0, r0, #0x10 @ 037fcca8
    bic r0, r0, #0xfc00 @ 037fccac
    ldr r2, [sb, r0, lsl #2] @ 037fccb0
    mov r0, #0 @ 037fccb4
    add r2, r3, r2, lsl #1 @ 037fccb8
    cmp r2, #0x3400 @ 037fccbc
    ldrshlt r0, [r8, r2] @ 037fccc0
    ldr r1, [sp, #0x30] @ 037fccc4
    ldr r2, [sp, #0x34] @ 037fccc8
    add r4, r4, r1 @ 037fcccc
    add r5, r5, r2 @ 037fccd0
    ldr r1, [sp, #0x38] @ 037fccd4
    ldr r2, [sp, #0x3c] @ 037fccd8
    add r6, r6, r1 @ 037fccdc
    add r7, r7, r2 @ 037fcce0
    strh r0, [ip], #2 @ 037fcce4
    subs lr, lr, #0x100 @ 037fcce8
    bgt .L_037fcc44 @ 037fccec
    b .L_03800e34 @ 037fccf0
@ arm7_dispatch_037fccf4 at 0x037fccf4
    ldr r0, [sp, #0x30] @ 037fccf4
    ldr fp, [sp, #0x38] @ 037fccf8
.L_037fccfc:
    ands r2, lr, #0xf @ 037fccfc
    addne r1, sl, sl, asr #16 @ 037fcd00
    rsbne r2, r2, #0x10 @ 037fcd04
    lslne r1, r1, #0x10 @ 037fcd08
    asrne r2, r1, r2 @ 037fcd0c
    ldr r3, [sp, #0x20] @ 037fcd10
    bic r1, r4, #0x8000 @ 037fcd14
    add r1, r1, r2 @ 037fcd18
    lsr r1, r1, #0x10 @ 037fcd1c
    bic r1, r1, #0xfc00 @ 037fcd20
    ldr r2, [sb, r1, lsl #2] @ 037fcd24
    mov r1, #0 @ 037fcd28
    add r2, r3, r2, lsl #1 @ 037fcd2c
    cmp r2, #0x3400 @ 037fcd30
    ldrhlt r1, [r8, r2] @ 037fcd34
    orr sl, r1, sl, lsl #16 @ 037fcd38
    ldr r3, [sp, #0x34] @ 037fcd3c
    add r4, r4, r0 @ 037fcd40
    add r5, r5, r3 @ 037fcd44
    ldr r3, [sp, #0x3c] @ 037fcd48
    add r6, r6, fp @ 037fcd4c
    add r7, r7, r3 @ 037fcd50
    mov r1, #0 @ 037fcd54
    strh r1, [ip], #2 @ 037fcd58
    subs lr, lr, #0x100 @ 037fcd5c
    bgt .L_037fccfc @ 037fcd60
    mov fp, #0 @ 037fcd64
    asr r1, sl, #0x10 @ 037fcd68
    ldr r3, [sp, #0x24] @ 037fcd6c
    bic fp, r5, #0x8000 @ 037fcd70
    add fp, fp, r1, lsl #15 @ 037fcd74
    lsr fp, fp, #0x10 @ 037fcd78
    bic fp, fp, #0xfc00 @ 037fcd7c
    ldr r2, [sb, fp, lsl #2] @ 037fcd80
    mov fp, #0 @ 037fcd84
    add r2, r3, r2, lsl #1 @ 037fcd88
    cmp r2, #0x3400 @ 037fcd8c
    ldrshlt fp, [r8, r2] @ 037fcd90
    b .L_03800e34 @ 037fcd94
.L_037fcd98:
@ arm7_dispatch_037fcd98 at 0x037fcd98
    ands r1, lr, #0xf @ 037fcd98
    addne r2, sl, sl, asr #16 @ 037fcd9c
    rsbne r1, r1, #0x10 @ 037fcda0
    lslne r2, r2, #0x10 @ 037fcda4
    asrne r1, r2, r1 @ 037fcda8
    ldr r3, [sp, #0x20] @ 037fcdac
    bic r0, r4, #0x8000 @ 037fcdb0
    add r0, r0, r1 @ 037fcdb4
    lsr r0, r0, #0x10 @ 037fcdb8
    bic r0, r0, #0xfc00 @ 037fcdbc
    ldr r2, [sb, r0, lsl #2] @ 037fcdc0
    mov r0, #0 @ 037fcdc4
    add r2, r3, r2, lsl #1 @ 037fcdc8
    cmp r2, #0x3400 @ 037fcdcc
    ldrhlt r0, [r8, r2] @ 037fcdd0
    orr sl, r0, sl, lsl #16 @ 037fcdd4
    mov r0, #0 @ 037fcdd8
    ldr r3, [sp, #0x28] @ 037fcddc
    bic r1, r6, #0x8000 @ 037fcde0
    add r1, r1, fp, lsl #15 @ 037fcde4
    lsr r1, r1, #0x10 @ 037fcde8
    bic r1, r1, #0xfc00 @ 037fcdec
    ldr r2, [sb, r1, lsl #2] @ 037fcdf0
    mov r1, #0 @ 037fcdf4
    add r2, r3, r2, lsl #1 @ 037fcdf8
    cmp r2, #0x3400 @ 037fcdfc
    ldrshlt r1, [r8, r2] @ 037fce00
    asr r2, sl, #0x10 @ 037fce04
    ldr r3, [sp, #0x24] @ 037fce08
    bic fp, r5, #0x8000 @ 037fce0c
    add fp, fp, r2, lsl #15 @ 037fce10
    lsr fp, fp, #0x10 @ 037fce14
    bic fp, fp, #0xfc00 @ 037fce18
    ldr r2, [sb, fp, lsl #2] @ 037fce1c
    mov fp, #0 @ 037fce20
    add r2, r3, r2, lsl #1 @ 037fce24
    cmp r2, #0x3400 @ 037fce28
    ldrshlt fp, [r8, r2] @ 037fce2c
    ldr r3, [sp, #0x2c] @ 037fce30
    bic r0, r7, #0x8000 @ 037fce34
    add r0, r0, r1, lsl #15 @ 037fce38
    lsr r0, r0, #0x10 @ 037fce3c
    bic r0, r0, #0xfc00 @ 037fce40
    ldr r2, [sb, r0, lsl #2] @ 037fce44
    mov r0, #0 @ 037fce48
    add r2, r3, r2, lsl #1 @ 037fce4c
    cmp r2, #0x3400 @ 037fce50
    ldrshlt r0, [r8, r2] @ 037fce54
    ldr r1, [sp, #0x30] @ 037fce58
    ldr r2, [sp, #0x34] @ 037fce5c
    add r4, r4, r1 @ 037fce60
    add r5, r5, r2 @ 037fce64
    ldr r1, [sp, #0x38] @ 037fce68
    ldr r2, [sp, #0x3c] @ 037fce6c
    add r6, r6, r1 @ 037fce70
    add r7, r7, r2 @ 037fce74
    strh r0, [ip], #2 @ 037fce78
    subs lr, lr, #0x100 @ 037fce7c
    bgt .L_037fcd98 @ 037fce80
    b .L_03800e34 @ 037fce84
@ arm7_dispatch_037fce88 at 0x037fce88
    cmp lr, #0x200 @ 037fce88
    ldr r8, [sp, #0x30] @ 037fce8c
    lsl sl, sl, #0x10 @ 037fce90
    ldr sb, [sp, #0x34] @ 037fce94
    lslge sl, sl, #0x10 @ 037fce98
    ldr r3, [sp, #0x38] @ 037fce9c
    ldr fp, [sp, #0x3c] @ 037fcea0
    mov r0, #0 @ 037fcea4
.L_037fcea8:
    add r4, r4, r8 @ 037fcea8
    add r5, r5, sb @ 037fceac
    add r6, r6, r3 @ 037fceb0
    add r7, r7, fp @ 037fceb4
    strh r0, [ip], #2 @ 037fceb8
    subs lr, lr, #0x100 @ 037fcebc
    bgt .L_037fcea8 @ 037fcec0
    mov fp, #0 @ 037fcec4
    asr fp, sl, #0x10 @ 037fcec8
    b .L_03800e34 @ 037fcecc
@ arm7_dispatch_037fced0 at 0x037fced0
    cmp lr, #0x200 @ 037fced0
    lsl sl, sl, #0x10 @ 037fced4
    lslge sl, sl, #0x10 @ 037fced8
.L_037fcedc:
    mov r0, #0 @ 037fcedc
    ldr r3, [sp, #0x2c] @ 037fcee0
    lsr r0, r7, #0x10 @ 037fcee4
    bic r0, r0, #0xfc00 @ 037fcee8
    ldr r2, [sb, r0, lsl #2] @ 037fceec
    mov r0, #0 @ 037fcef0
    add r2, r3, r2, lsl #1 @ 037fcef4
    cmp r2, #0x3400 @ 037fcef8
    ldrshlt r0, [r8, r2] @ 037fcefc
    ldr r1, [sp, #0x30] @ 037fcf00
    ldr r2, [sp, #0x34] @ 037fcf04
    add r4, r4, r1 @ 037fcf08
    add r5, r5, r2 @ 037fcf0c
    ldr r1, [sp, #0x38] @ 037fcf10
    ldr r2, [sp, #0x3c] @ 037fcf14
    add r6, r6, r1 @ 037fcf18
    add r7, r7, r2 @ 037fcf1c
    strh r0, [ip], #2 @ 037fcf20
    subs lr, lr, #0x100 @ 037fcf24
    bgt .L_037fcedc @ 037fcf28
    asr fp, sl, #0x10 @ 037fcf2c
    b .L_03800e34 @ 037fcf30
@ arm7_dispatch_037fcf34 at 0x037fcf34
    ldr r0, [sp, #0x30] @ 037fcf34
    ldr fp, [sp, #0x38] @ 037fcf38
.L_037fcf3c:
    ands r2, lr, #0xf @ 037fcf3c
    addne r1, sl, sl, asr #16 @ 037fcf40
    rsbne r2, r2, #0x10 @ 037fcf44
    lslne r1, r1, #0x10 @ 037fcf48
    asrne r2, r1, r2 @ 037fcf4c
    ldr r3, [sp, #0x20] @ 037fcf50
    bic r1, r4, #0x8000 @ 037fcf54
    add r1, r1, r2 @ 037fcf58
    lsr r1, r1, #0x10 @ 037fcf5c
    bic r1, r1, #0xfc00 @ 037fcf60
    ldr r2, [sb, r1, lsl #2] @ 037fcf64
    mov r1, #0 @ 037fcf68
    add r2, r3, r2, lsl #1 @ 037fcf6c
    cmp r2, #0x3400 @ 037fcf70
    ldrhlt r1, [r8, r2] @ 037fcf74
    orr sl, r1, sl, lsl #16 @ 037fcf78
    ldr r3, [sp, #0x34] @ 037fcf7c
    add r4, r4, r0 @ 037fcf80
    add r5, r5, r3 @ 037fcf84
    ldr r3, [sp, #0x3c] @ 037fcf88
    add r6, r6, fp @ 037fcf8c
    add r7, r7, r3 @ 037fcf90
    mov r1, #0 @ 037fcf94
    strh r1, [ip], #2 @ 037fcf98
    subs lr, lr, #0x100 @ 037fcf9c
    bgt .L_037fcf3c @ 037fcfa0
    mov fp, #0 @ 037fcfa4
    asr fp, sl, #0x10 @ 037fcfa8
    b .L_03800e34 @ 037fcfac
.L_037fcfb0:
@ arm7_dispatch_037fcfb0 at 0x037fcfb0
    ands r1, lr, #0xf @ 037fcfb0
    addne r2, sl, sl, asr #16 @ 037fcfb4
    rsbne r1, r1, #0x10 @ 037fcfb8
    lslne r2, r2, #0x10 @ 037fcfbc
    asrne r1, r2, r1 @ 037fcfc0
    ldr r3, [sp, #0x20] @ 037fcfc4
    bic r0, r4, #0x8000 @ 037fcfc8
    add r0, r0, r1 @ 037fcfcc
    lsr r0, r0, #0x10 @ 037fcfd0
    bic r0, r0, #0xfc00 @ 037fcfd4
    ldr r2, [sb, r0, lsl #2] @ 037fcfd8
    mov r0, #0 @ 037fcfdc
    add r2, r3, r2, lsl #1 @ 037fcfe0
    cmp r2, #0x3400 @ 037fcfe4
    ldrhlt r0, [r8, r2] @ 037fcfe8
    orr sl, r0, sl, lsl #16 @ 037fcfec
    mov r0, #0 @ 037fcff0
    ldr r3, [sp, #0x2c] @ 037fcff4
    lsr r0, r7, #0x10 @ 037fcff8
    bic r0, r0, #0xfc00 @ 037fcffc
    ldr r2, [sb, r0, lsl #2] @ 037fd000
    mov r0, #0 @ 037fd004
    add r2, r3, r2, lsl #1 @ 037fd008
    cmp r2, #0x3400 @ 037fd00c
    ldrshlt r0, [r8, r2] @ 037fd010
    ldr r1, [sp, #0x30] @ 037fd014
    ldr r2, [sp, #0x34] @ 037fd018
    add r4, r4, r1 @ 037fd01c
    add r5, r5, r2 @ 037fd020
    ldr r1, [sp, #0x38] @ 037fd024
    ldr r2, [sp, #0x3c] @ 037fd028
    add r6, r6, r1 @ 037fd02c
    add r7, r7, r2 @ 037fd030
    strh r0, [ip], #2 @ 037fd034
    subs lr, lr, #0x100 @ 037fd038
    bgt .L_037fcfb0 @ 037fd03c
    asr fp, sl, #0x10 @ 037fd040
    b .L_03800e34 @ 037fd044
@ arm7_dispatch_037fd048 at 0x037fd048
    cmp lr, #0x200 @ 037fd048
    ldr r8, [sp, #0x30] @ 037fd04c
    lsl sl, sl, #0x10 @ 037fd050
    ldr sb, [sp, #0x34] @ 037fd054
    lslge sl, sl, #0x10 @ 037fd058
    ldr r3, [sp, #0x38] @ 037fd05c
    ldr fp, [sp, #0x3c] @ 037fd060
    mov r0, #0 @ 037fd064
.L_037fd068:
    add r4, r4, r8 @ 037fd068
    add r5, r5, sb @ 037fd06c
    add r6, r6, r3 @ 037fd070
    add r7, r7, fp @ 037fd074
    strh r0, [ip], #2 @ 037fd078
    subs lr, lr, #0x100 @ 037fd07c
    bgt .L_037fd068 @ 037fd080
    mov fp, #0 @ 037fd084
    ldr r3, [sp, #0x24] @ 037fd088
    lsr fp, r5, #0x10 @ 037fd08c
    bic fp, fp, #0xfc00 @ 037fd090
    ldr r2, [sb, fp, lsl #2] @ 037fd094
    mov fp, #0 @ 037fd098
    add r2, r3, r2, lsl #1 @ 037fd09c
    cmp r2, #0x3400 @ 037fd0a0
    ldrshlt fp, [r8, r2] @ 037fd0a4
    add fp, fp, sl, asr #16 @ 037fd0a8
    b .L_03800e34 @ 037fd0ac
@ arm7_dispatch_037fd0b0 at 0x037fd0b0
    cmp lr, #0x200 @ 037fd0b0
    lsl sl, sl, #0x10 @ 037fd0b4
    lslge sl, sl, #0x10 @ 037fd0b8
.L_037fd0bc:
    mov r0, #0 @ 037fd0bc
    ldr r3, [sp, #0x2c] @ 037fd0c0
    lsr r0, r7, #0x10 @ 037fd0c4
    bic r0, r0, #0xfc00 @ 037fd0c8
    ldr r2, [sb, r0, lsl #2] @ 037fd0cc
    mov r0, #0 @ 037fd0d0
    add r2, r3, r2, lsl #1 @ 037fd0d4
    cmp r2, #0x3400 @ 037fd0d8
    ldrshlt r0, [r8, r2] @ 037fd0dc
    ldr r1, [sp, #0x30] @ 037fd0e0
    ldr r2, [sp, #0x34] @ 037fd0e4
    add r4, r4, r1 @ 037fd0e8
    add r5, r5, r2 @ 037fd0ec
    ldr r1, [sp, #0x38] @ 037fd0f0
    ldr r2, [sp, #0x3c] @ 037fd0f4
    add r6, r6, r1 @ 037fd0f8
    add r7, r7, r2 @ 037fd0fc
    strh r0, [ip], #2 @ 037fd100
    subs lr, lr, #0x100 @ 037fd104
    bgt .L_037fd0bc @ 037fd108
    ldr r3, [sp, #0x24] @ 037fd10c
    lsr fp, r5, #0x10 @ 037fd110
    bic fp, fp, #0xfc00 @ 037fd114
    ldr r2, [sb, fp, lsl #2] @ 037fd118
    mov fp, #0 @ 037fd11c
    add r2, r3, r2, lsl #1 @ 037fd120
    cmp r2, #0x3400 @ 037fd124
    ldrshlt fp, [r8, r2] @ 037fd128
    add fp, fp, sl, asr #16 @ 037fd12c
    b .L_03800e34 @ 037fd130
@ arm7_dispatch_037fd134 at 0x037fd134
    ldr r0, [sp, #0x30] @ 037fd134
    ldr fp, [sp, #0x38] @ 037fd138
.L_037fd13c:
    ands r2, lr, #0xf @ 037fd13c
    addne r1, sl, sl, asr #16 @ 037fd140
    rsbne r2, r2, #0x10 @ 037fd144
    lslne r1, r1, #0x10 @ 037fd148
    asrne r2, r1, r2 @ 037fd14c
    ldr r3, [sp, #0x20] @ 037fd150
    bic r1, r4, #0x8000 @ 037fd154
    add r1, r1, r2 @ 037fd158
    lsr r1, r1, #0x10 @ 037fd15c
    bic r1, r1, #0xfc00 @ 037fd160
    ldr r2, [sb, r1, lsl #2] @ 037fd164
    mov r1, #0 @ 037fd168
    add r2, r3, r2, lsl #1 @ 037fd16c
    cmp r2, #0x3400 @ 037fd170
    ldrhlt r1, [r8, r2] @ 037fd174
    orr sl, r1, sl, lsl #16 @ 037fd178
    ldr r3, [sp, #0x34] @ 037fd17c
    add r4, r4, r0 @ 037fd180
    add r5, r5, r3 @ 037fd184
    ldr r3, [sp, #0x3c] @ 037fd188
    add r6, r6, fp @ 037fd18c
    add r7, r7, r3 @ 037fd190
    mov r1, #0 @ 037fd194
    strh r1, [ip], #2 @ 037fd198
    subs lr, lr, #0x100 @ 037fd19c
    bgt .L_037fd13c @ 037fd1a0
    mov fp, #0 @ 037fd1a4
    ldr r3, [sp, #0x24] @ 037fd1a8
    lsr fp, r5, #0x10 @ 037fd1ac
    bic fp, fp, #0xfc00 @ 037fd1b0
    ldr r2, [sb, fp, lsl #2] @ 037fd1b4
    mov fp, #0 @ 037fd1b8
    add r2, r3, r2, lsl #1 @ 037fd1bc
    cmp r2, #0x3400 @ 037fd1c0
    ldrshlt fp, [r8, r2] @ 037fd1c4
    add fp, fp, sl, asr #16 @ 037fd1c8
    b .L_03800e34 @ 037fd1cc
.L_037fd1d0:
@ arm7_dispatch_037fd1d0 at 0x037fd1d0
    ands r1, lr, #0xf @ 037fd1d0
    addne r2, sl, sl, asr #16 @ 037fd1d4
    rsbne r1, r1, #0x10 @ 037fd1d8
    lslne r2, r2, #0x10 @ 037fd1dc
    asrne r1, r2, r1 @ 037fd1e0
    ldr r3, [sp, #0x20] @ 037fd1e4
    bic r0, r4, #0x8000 @ 037fd1e8
    add r0, r0, r1 @ 037fd1ec
    lsr r0, r0, #0x10 @ 037fd1f0
    bic r0, r0, #0xfc00 @ 037fd1f4
    ldr r2, [sb, r0, lsl #2] @ 037fd1f8
    mov r0, #0 @ 037fd1fc
    add r2, r3, r2, lsl #1 @ 037fd200
    cmp r2, #0x3400 @ 037fd204
    ldrhlt r0, [r8, r2] @ 037fd208
    orr sl, r0, sl, lsl #16 @ 037fd20c
    mov r0, #0 @ 037fd210
    ldr r3, [sp, #0x2c] @ 037fd214
    lsr r0, r7, #0x10 @ 037fd218
    bic r0, r0, #0xfc00 @ 037fd21c
    ldr r2, [sb, r0, lsl #2] @ 037fd220
    mov r0, #0 @ 037fd224
    add r2, r3, r2, lsl #1 @ 037fd228
    cmp r2, #0x3400 @ 037fd22c
    ldrshlt r0, [r8, r2] @ 037fd230
    ldr r1, [sp, #0x30] @ 037fd234
    ldr r2, [sp, #0x34] @ 037fd238
    add r4, r4, r1 @ 037fd23c
    add r5, r5, r2 @ 037fd240
    ldr r1, [sp, #0x38] @ 037fd244
    ldr r2, [sp, #0x3c] @ 037fd248
    add r6, r6, r1 @ 037fd24c
    add r7, r7, r2 @ 037fd250
    strh r0, [ip], #2 @ 037fd254
    subs lr, lr, #0x100 @ 037fd258
    bgt .L_037fd1d0 @ 037fd25c
    ldr r3, [sp, #0x24] @ 037fd260
    lsr fp, r5, #0x10 @ 037fd264
    bic fp, fp, #0xfc00 @ 037fd268
    ldr r2, [sb, fp, lsl #2] @ 037fd26c
    mov fp, #0 @ 037fd270
    add r2, r3, r2, lsl #1 @ 037fd274
    cmp r2, #0x3400 @ 037fd278
    ldrshlt fp, [r8, r2] @ 037fd27c
    add fp, fp, sl, asr #16 @ 037fd280
    b .L_03800e34 @ 037fd284
@ arm7_dispatch_037fd288 at 0x037fd288
    cmp lr, #0x200 @ 037fd288
    ldr r8, [sp, #0x30] @ 037fd28c
    lsl sl, sl, #0x10 @ 037fd290
    ldr sb, [sp, #0x34] @ 037fd294
    lslge sl, sl, #0x10 @ 037fd298
    ldr r3, [sp, #0x38] @ 037fd29c
    ldr fp, [sp, #0x3c] @ 037fd2a0
    mov r0, #0 @ 037fd2a4
.L_037fd2a8:
    add r4, r4, r8 @ 037fd2a8
    add r5, r5, sb @ 037fd2ac
    add r6, r6, r3 @ 037fd2b0
    add r7, r7, fp @ 037fd2b4
    strh r0, [ip], #2 @ 037fd2b8
    subs lr, lr, #0x100 @ 037fd2bc
    bgt .L_037fd2a8 @ 037fd2c0
    mov fp, #0 @ 037fd2c4
    asr fp, sl, #0x10 @ 037fd2c8
    b .L_03800e34 @ 037fd2cc
@ arm7_dispatch_037fd2d0 at 0x037fd2d0
    cmp lr, #0x200 @ 037fd2d0
    lsl sl, sl, #0x10 @ 037fd2d4
    lslge sl, sl, #0x10 @ 037fd2d8
.L_037fd2dc:
    mov r0, #0 @ 037fd2dc
    ldr r3, [sp, #0x28] @ 037fd2e0
    bic r1, r6, #0x8000 @ 037fd2e4
    add r1, r1, fp, lsl #15 @ 037fd2e8
    lsr r1, r1, #0x10 @ 037fd2ec
    bic r1, r1, #0xfc00 @ 037fd2f0
    ldr r2, [sb, r1, lsl #2] @ 037fd2f4
    mov r1, #0 @ 037fd2f8
    add r2, r3, r2, lsl #1 @ 037fd2fc
    cmp r2, #0x3400 @ 037fd300
    ldrshlt r1, [r8, r2] @ 037fd304
    ldr r3, [sp, #0x2c] @ 037fd308
    bic r0, r7, #0x8000 @ 037fd30c
    add r0, r0, r1, lsl #15 @ 037fd310
    lsr r0, r0, #0x10 @ 037fd314
    bic r0, r0, #0xfc00 @ 037fd318
    ldr r2, [sb, r0, lsl #2] @ 037fd31c
    mov r0, #0 @ 037fd320
    add r2, r3, r2, lsl #1 @ 037fd324
    cmp r2, #0x3400 @ 037fd328
    ldrshlt r0, [r8, r2] @ 037fd32c
    asr fp, sl, #0x10 @ 037fd330
    ldr r1, [sp, #0x30] @ 037fd334
    ldr r2, [sp, #0x34] @ 037fd338
    add r4, r4, r1 @ 037fd33c
    add r5, r5, r2 @ 037fd340
    ldr r1, [sp, #0x38] @ 037fd344
    ldr r2, [sp, #0x3c] @ 037fd348
    add r6, r6, r1 @ 037fd34c
    add r7, r7, r2 @ 037fd350
    strh r0, [ip], #2 @ 037fd354
    subs lr, lr, #0x100 @ 037fd358
    bgt .L_037fd2dc @ 037fd35c
    b .L_03800e34 @ 037fd360
@ arm7_dispatch_037fd364 at 0x037fd364
    ldr r0, [sp, #0x30] @ 037fd364
    ldr fp, [sp, #0x38] @ 037fd368
.L_037fd36c:
    ands r2, lr, #0xf @ 037fd36c
    addne r1, sl, sl, asr #16 @ 037fd370
    rsbne r2, r2, #0x10 @ 037fd374
    lslne r1, r1, #0x10 @ 037fd378
    asrne r2, r1, r2 @ 037fd37c
    ldr r3, [sp, #0x20] @ 037fd380
    bic r1, r4, #0x8000 @ 037fd384
    add r1, r1, r2 @ 037fd388
    lsr r1, r1, #0x10 @ 037fd38c
    bic r1, r1, #0xfc00 @ 037fd390
    ldr r2, [sb, r1, lsl #2] @ 037fd394
    mov r1, #0 @ 037fd398
    add r2, r3, r2, lsl #1 @ 037fd39c
    cmp r2, #0x3400 @ 037fd3a0
    ldrhlt r1, [r8, r2] @ 037fd3a4
    orr sl, r1, sl, lsl #16 @ 037fd3a8
    ldr r3, [sp, #0x34] @ 037fd3ac
    add r4, r4, r0 @ 037fd3b0
    add r5, r5, r3 @ 037fd3b4
    ldr r3, [sp, #0x3c] @ 037fd3b8
    add r6, r6, fp @ 037fd3bc
    add r7, r7, r3 @ 037fd3c0
    mov r1, #0 @ 037fd3c4
    strh r1, [ip], #2 @ 037fd3c8
    subs lr, lr, #0x100 @ 037fd3cc
    bgt .L_037fd36c @ 037fd3d0
    mov fp, #0 @ 037fd3d4
    asr fp, sl, #0x10 @ 037fd3d8
    b .L_03800e34 @ 037fd3dc
.L_037fd3e0:
@ arm7_dispatch_037fd3e0 at 0x037fd3e0
    ands r1, lr, #0xf @ 037fd3e0
    addne r2, sl, sl, asr #16 @ 037fd3e4
    rsbne r1, r1, #0x10 @ 037fd3e8
    lslne r2, r2, #0x10 @ 037fd3ec
    asrne r1, r2, r1 @ 037fd3f0
    ldr r3, [sp, #0x20] @ 037fd3f4
    bic r0, r4, #0x8000 @ 037fd3f8
    add r0, r0, r1 @ 037fd3fc
    lsr r0, r0, #0x10 @ 037fd400
    bic r0, r0, #0xfc00 @ 037fd404
    ldr r2, [sb, r0, lsl #2] @ 037fd408
    mov r0, #0 @ 037fd40c
    add r2, r3, r2, lsl #1 @ 037fd410
    cmp r2, #0x3400 @ 037fd414
    ldrhlt r0, [r8, r2] @ 037fd418
    orr sl, r0, sl, lsl #16 @ 037fd41c
    mov r0, #0 @ 037fd420
    ldr r3, [sp, #0x28] @ 037fd424
    bic r1, r6, #0x8000 @ 037fd428
    add r1, r1, fp, lsl #15 @ 037fd42c
    lsr r1, r1, #0x10 @ 037fd430
    bic r1, r1, #0xfc00 @ 037fd434
    ldr r2, [sb, r1, lsl #2] @ 037fd438
    mov r1, #0 @ 037fd43c
    add r2, r3, r2, lsl #1 @ 037fd440
    cmp r2, #0x3400 @ 037fd444
    ldrshlt r1, [r8, r2] @ 037fd448
    ldr r3, [sp, #0x2c] @ 037fd44c
    bic r0, r7, #0x8000 @ 037fd450
    add r0, r0, r1, lsl #15 @ 037fd454
    lsr r0, r0, #0x10 @ 037fd458
    bic r0, r0, #0xfc00 @ 037fd45c
    ldr r2, [sb, r0, lsl #2] @ 037fd460
    mov r0, #0 @ 037fd464
    add r2, r3, r2, lsl #1 @ 037fd468
    cmp r2, #0x3400 @ 037fd46c
    ldrshlt r0, [r8, r2] @ 037fd470
    asr fp, sl, #0x10 @ 037fd474
    ldr r1, [sp, #0x30] @ 037fd478
    ldr r2, [sp, #0x34] @ 037fd47c
    add r4, r4, r1 @ 037fd480
    add r5, r5, r2 @ 037fd484
    ldr r1, [sp, #0x38] @ 037fd488
    ldr r2, [sp, #0x3c] @ 037fd48c
    add r6, r6, r1 @ 037fd490
    add r7, r7, r2 @ 037fd494
    strh r0, [ip], #2 @ 037fd498
    subs lr, lr, #0x100 @ 037fd49c
    bgt .L_037fd3e0 @ 037fd4a0
    b .L_03800e34 @ 037fd4a4
@ arm7_dispatch_037fd4a8 at 0x037fd4a8
    cmp lr, #0x200 @ 037fd4a8
    ldr r8, [sp, #0x30] @ 037fd4ac
    lsl sl, sl, #0x10 @ 037fd4b0
    ldr sb, [sp, #0x34] @ 037fd4b4
    lslge sl, sl, #0x10 @ 037fd4b8
    ldr r3, [sp, #0x38] @ 037fd4bc
    ldr fp, [sp, #0x3c] @ 037fd4c0
    mov r0, #0 @ 037fd4c4
.L_037fd4c8:
    add r4, r4, r8 @ 037fd4c8
    add r5, r5, sb @ 037fd4cc
    add r6, r6, r3 @ 037fd4d0
    add r7, r7, fp @ 037fd4d4
    strh r0, [ip], #2 @ 037fd4d8
    subs lr, lr, #0x100 @ 037fd4dc
    bgt .L_037fd4c8 @ 037fd4e0
    mov fp, #0 @ 037fd4e4
    ldr r3, [sp, #0x24] @ 037fd4e8
    lsr fp, r5, #0x10 @ 037fd4ec
    bic fp, fp, #0xfc00 @ 037fd4f0
    ldr r2, [sb, fp, lsl #2] @ 037fd4f4
    mov fp, #0 @ 037fd4f8
    add r2, r3, r2, lsl #1 @ 037fd4fc
    cmp r2, #0x3400 @ 037fd500
    ldrshlt fp, [r8, r2] @ 037fd504
    add fp, fp, sl, asr #16 @ 037fd508
    b .L_03800e34 @ 037fd50c
@ arm7_dispatch_037fd510 at 0x037fd510
    cmp lr, #0x200 @ 037fd510
    lsl sl, sl, #0x10 @ 037fd514
    lslge sl, sl, #0x10 @ 037fd518
.L_037fd51c:
    mov r0, #0 @ 037fd51c
    ldr r3, [sp, #0x28] @ 037fd520
    bic r1, r6, #0x8000 @ 037fd524
    add r1, r1, fp, lsl #15 @ 037fd528
    lsr r1, r1, #0x10 @ 037fd52c
    bic r1, r1, #0xfc00 @ 037fd530
    ldr r2, [sb, r1, lsl #2] @ 037fd534
    mov r1, #0 @ 037fd538
    add r2, r3, r2, lsl #1 @ 037fd53c
    cmp r2, #0x3400 @ 037fd540
    ldrshlt r1, [r8, r2] @ 037fd544
    ldr r3, [sp, #0x2c] @ 037fd548
    bic r0, r7, #0x8000 @ 037fd54c
    add r0, r0, r1, lsl #15 @ 037fd550
    lsr r0, r0, #0x10 @ 037fd554
    bic r0, r0, #0xfc00 @ 037fd558
    ldr r2, [sb, r0, lsl #2] @ 037fd55c
    mov r0, #0 @ 037fd560
    add r2, r3, r2, lsl #1 @ 037fd564
    cmp r2, #0x3400 @ 037fd568
    ldrshlt r0, [r8, r2] @ 037fd56c
    ldr r3, [sp, #0x24] @ 037fd570
    lsr fp, r5, #0x10 @ 037fd574
    bic fp, fp, #0xfc00 @ 037fd578
    ldr r2, [sb, fp, lsl #2] @ 037fd57c
    mov fp, #0 @ 037fd580
    add r2, r3, r2, lsl #1 @ 037fd584
    cmp r2, #0x3400 @ 037fd588
    ldrshlt fp, [r8, r2] @ 037fd58c
    add fp, fp, sl, asr #16 @ 037fd590
    ldr r1, [sp, #0x30] @ 037fd594
    ldr r2, [sp, #0x34] @ 037fd598
    add r4, r4, r1 @ 037fd59c
    add r5, r5, r2 @ 037fd5a0
    ldr r1, [sp, #0x38] @ 037fd5a4
    ldr r2, [sp, #0x3c] @ 037fd5a8
    add r6, r6, r1 @ 037fd5ac
    add r7, r7, r2 @ 037fd5b0
    strh r0, [ip], #2 @ 037fd5b4
    subs lr, lr, #0x100 @ 037fd5b8
    bgt .L_037fd51c @ 037fd5bc
    b .L_03800e34 @ 037fd5c0
@ arm7_dispatch_037fd5c4 at 0x037fd5c4
    ldr r0, [sp, #0x30] @ 037fd5c4
    ldr fp, [sp, #0x38] @ 037fd5c8
.L_037fd5cc:
    ands r2, lr, #0xf @ 037fd5cc
    addne r1, sl, sl, asr #16 @ 037fd5d0
    rsbne r2, r2, #0x10 @ 037fd5d4
    lslne r1, r1, #0x10 @ 037fd5d8
    asrne r2, r1, r2 @ 037fd5dc
    ldr r3, [sp, #0x20] @ 037fd5e0
    bic r1, r4, #0x8000 @ 037fd5e4
    add r1, r1, r2 @ 037fd5e8
    lsr r1, r1, #0x10 @ 037fd5ec
    bic r1, r1, #0xfc00 @ 037fd5f0
    ldr r2, [sb, r1, lsl #2] @ 037fd5f4
    mov r1, #0 @ 037fd5f8
    add r2, r3, r2, lsl #1 @ 037fd5fc
    cmp r2, #0x3400 @ 037fd600
    ldrhlt r1, [r8, r2] @ 037fd604
    orr sl, r1, sl, lsl #16 @ 037fd608
    ldr r3, [sp, #0x34] @ 037fd60c
    add r4, r4, r0 @ 037fd610
    add r5, r5, r3 @ 037fd614
    ldr r3, [sp, #0x3c] @ 037fd618
    add r6, r6, fp @ 037fd61c
    add r7, r7, r3 @ 037fd620
    mov r1, #0 @ 037fd624
    strh r1, [ip], #2 @ 037fd628
    subs lr, lr, #0x100 @ 037fd62c
    bgt .L_037fd5cc @ 037fd630
    mov fp, #0 @ 037fd634
    ldr r3, [sp, #0x24] @ 037fd638
    lsr fp, r5, #0x10 @ 037fd63c
    bic fp, fp, #0xfc00 @ 037fd640
    ldr r2, [sb, fp, lsl #2] @ 037fd644
    mov fp, #0 @ 037fd648
    add r2, r3, r2, lsl #1 @ 037fd64c
    cmp r2, #0x3400 @ 037fd650
    ldrshlt fp, [r8, r2] @ 037fd654
    add fp, fp, sl, asr #16 @ 037fd658
    b .L_03800e34 @ 037fd65c
.L_037fd660:
@ arm7_dispatch_037fd660 at 0x037fd660
    ands r1, lr, #0xf @ 037fd660
    addne r2, sl, sl, asr #16 @ 037fd664
    rsbne r1, r1, #0x10 @ 037fd668
    lslne r2, r2, #0x10 @ 037fd66c
    asrne r1, r2, r1 @ 037fd670
    ldr r3, [sp, #0x20] @ 037fd674
    bic r0, r4, #0x8000 @ 037fd678
    add r0, r0, r1 @ 037fd67c
    lsr r0, r0, #0x10 @ 037fd680
    bic r0, r0, #0xfc00 @ 037fd684
    ldr r2, [sb, r0, lsl #2] @ 037fd688
    mov r0, #0 @ 037fd68c
    add r2, r3, r2, lsl #1 @ 037fd690
    cmp r2, #0x3400 @ 037fd694
    ldrhlt r0, [r8, r2] @ 037fd698
    orr sl, r0, sl, lsl #16 @ 037fd69c
    mov r0, #0 @ 037fd6a0
    ldr r3, [sp, #0x28] @ 037fd6a4
    bic r1, r6, #0x8000 @ 037fd6a8
    add r1, r1, fp, lsl #15 @ 037fd6ac
    lsr r1, r1, #0x10 @ 037fd6b0
    bic r1, r1, #0xfc00 @ 037fd6b4
    ldr r2, [sb, r1, lsl #2] @ 037fd6b8
    mov r1, #0 @ 037fd6bc
    add r2, r3, r2, lsl #1 @ 037fd6c0
    cmp r2, #0x3400 @ 037fd6c4
    ldrshlt r1, [r8, r2] @ 037fd6c8
    ldr r3, [sp, #0x2c] @ 037fd6cc
    bic r0, r7, #0x8000 @ 037fd6d0
    add r0, r0, r1, lsl #15 @ 037fd6d4
    lsr r0, r0, #0x10 @ 037fd6d8
    bic r0, r0, #0xfc00 @ 037fd6dc
    ldr r2, [sb, r0, lsl #2] @ 037fd6e0
    mov r0, #0 @ 037fd6e4
    add r2, r3, r2, lsl #1 @ 037fd6e8
    cmp r2, #0x3400 @ 037fd6ec
    ldrshlt r0, [r8, r2] @ 037fd6f0
    ldr r3, [sp, #0x24] @ 037fd6f4
    lsr fp, r5, #0x10 @ 037fd6f8
    bic fp, fp, #0xfc00 @ 037fd6fc
    ldr r2, [sb, fp, lsl #2] @ 037fd700
    mov fp, #0 @ 037fd704
    add r2, r3, r2, lsl #1 @ 037fd708
    cmp r2, #0x3400 @ 037fd70c
    ldrshlt fp, [r8, r2] @ 037fd710
    add fp, fp, sl, asr #16 @ 037fd714
    ldr r1, [sp, #0x30] @ 037fd718
    ldr r2, [sp, #0x34] @ 037fd71c
    add r4, r4, r1 @ 037fd720
    add r5, r5, r2 @ 037fd724
    ldr r1, [sp, #0x38] @ 037fd728
    ldr r2, [sp, #0x3c] @ 037fd72c
    add r6, r6, r1 @ 037fd730
    add r7, r7, r2 @ 037fd734
    strh r0, [ip], #2 @ 037fd738
    subs lr, lr, #0x100 @ 037fd73c
    bgt .L_037fd660 @ 037fd740
    b .L_03800e34 @ 037fd744
@ arm7_dispatch_037fd748 at 0x037fd748
    cmp lr, #0x200 @ 037fd748
    ldr r8, [sp, #0x30] @ 037fd74c
    lsl sl, sl, #0x10 @ 037fd750
    ldr sb, [sp, #0x34] @ 037fd754
    lslge sl, sl, #0x10 @ 037fd758
    ldr r3, [sp, #0x38] @ 037fd75c
    ldr fp, [sp, #0x3c] @ 037fd760
    mov r0, #0 @ 037fd764
.L_037fd768:
    add r4, r4, r8 @ 037fd768
    add r5, r5, sb @ 037fd76c
    add r6, r6, r3 @ 037fd770
    add r7, r7, fp @ 037fd774
    strh r0, [ip], #2 @ 037fd778
    subs lr, lr, #0x100 @ 037fd77c
    bgt .L_037fd768 @ 037fd780
    mov fp, #0 @ 037fd784
    b .L_03800e34 @ 037fd788
@ arm7_dispatch_037fd78c at 0x037fd78c
    cmp lr, #0x200 @ 037fd78c
    lsl sl, sl, #0x10 @ 037fd790
    lslge sl, sl, #0x10 @ 037fd794
.L_037fd798:
    mov r0, #0 @ 037fd798
    asr r1, sl, #0x10 @ 037fd79c
    ldr r3, [sp, #0x2c] @ 037fd7a0
    bic r0, r7, #0x8000 @ 037fd7a4
    add r0, r0, r1, lsl #15 @ 037fd7a8
    lsr r0, r0, #0x10 @ 037fd7ac
    bic r0, r0, #0xfc00 @ 037fd7b0
    ldr r2, [sb, r0, lsl #2] @ 037fd7b4
    mov r0, #0 @ 037fd7b8
    add r2, r3, r2, lsl #1 @ 037fd7bc
    cmp r2, #0x3400 @ 037fd7c0
    ldrshlt r0, [r8, r2] @ 037fd7c4
    ldr r1, [sp, #0x30] @ 037fd7c8
    ldr r2, [sp, #0x34] @ 037fd7cc
    add r4, r4, r1 @ 037fd7d0
    add r5, r5, r2 @ 037fd7d4
    ldr r1, [sp, #0x38] @ 037fd7d8
    ldr r2, [sp, #0x3c] @ 037fd7dc
    add r6, r6, r1 @ 037fd7e0
    add r7, r7, r2 @ 037fd7e4
    strh r0, [ip], #2 @ 037fd7e8
    subs lr, lr, #0x100 @ 037fd7ec
    bgt .L_037fd798 @ 037fd7f0
    mov fp, #0 @ 037fd7f4
    b .L_03800e34 @ 037fd7f8
@ arm7_dispatch_037fd7fc at 0x037fd7fc
    ldr r0, [sp, #0x30] @ 037fd7fc
    ldr fp, [sp, #0x38] @ 037fd800
.L_037fd804:
    ands r2, lr, #0xf @ 037fd804
    addne r1, sl, sl, asr #16 @ 037fd808
    rsbne r2, r2, #0x10 @ 037fd80c
    lslne r1, r1, #0x10 @ 037fd810
    asrne r2, r1, r2 @ 037fd814
    ldr r3, [sp, #0x20] @ 037fd818
    bic r1, r4, #0x8000 @ 037fd81c
    add r1, r1, r2 @ 037fd820
    lsr r1, r1, #0x10 @ 037fd824
    bic r1, r1, #0xfc00 @ 037fd828
    ldr r2, [sb, r1, lsl #2] @ 037fd82c
    mov r1, #0 @ 037fd830
    add r2, r3, r2, lsl #1 @ 037fd834
    cmp r2, #0x3400 @ 037fd838
    ldrhlt r1, [r8, r2] @ 037fd83c
    orr sl, r1, sl, lsl #16 @ 037fd840
    ldr r3, [sp, #0x34] @ 037fd844
    add r4, r4, r0 @ 037fd848
    add r5, r5, r3 @ 037fd84c
    ldr r3, [sp, #0x3c] @ 037fd850
    add r6, r6, fp @ 037fd854
    add r7, r7, r3 @ 037fd858
    mov r1, #0 @ 037fd85c
    strh r1, [ip], #2 @ 037fd860
    subs lr, lr, #0x100 @ 037fd864
    bgt .L_037fd804 @ 037fd868
    mov fp, #0 @ 037fd86c
    b .L_03800e34 @ 037fd870
.L_037fd874:
@ arm7_dispatch_037fd874 at 0x037fd874
    ands r1, lr, #0xf @ 037fd874
    addne r2, sl, sl, asr #16 @ 037fd878
    rsbne r1, r1, #0x10 @ 037fd87c
    lslne r2, r2, #0x10 @ 037fd880
    asrne r1, r2, r1 @ 037fd884
    ldr r3, [sp, #0x20] @ 037fd888
    bic r0, r4, #0x8000 @ 037fd88c
    add r0, r0, r1 @ 037fd890
    lsr r0, r0, #0x10 @ 037fd894
    bic r0, r0, #0xfc00 @ 037fd898
    ldr r2, [sb, r0, lsl #2] @ 037fd89c
    mov r0, #0 @ 037fd8a0
    add r2, r3, r2, lsl #1 @ 037fd8a4
    cmp r2, #0x3400 @ 037fd8a8
    ldrhlt r0, [r8, r2] @ 037fd8ac
    orr sl, r0, sl, lsl #16 @ 037fd8b0
    mov r0, #0 @ 037fd8b4
    asr r1, sl, #0x10 @ 037fd8b8
    ldr r3, [sp, #0x2c] @ 037fd8bc
    bic r0, r7, #0x8000 @ 037fd8c0
    add r0, r0, r1, lsl #15 @ 037fd8c4
    lsr r0, r0, #0x10 @ 037fd8c8
    bic r0, r0, #0xfc00 @ 037fd8cc
    ldr r2, [sb, r0, lsl #2] @ 037fd8d0
    mov r0, #0 @ 037fd8d4
    add r2, r3, r2, lsl #1 @ 037fd8d8
    cmp r2, #0x3400 @ 037fd8dc
    ldrshlt r0, [r8, r2] @ 037fd8e0
    ldr r1, [sp, #0x30] @ 037fd8e4
    ldr r2, [sp, #0x34] @ 037fd8e8
    add r4, r4, r1 @ 037fd8ec
    add r5, r5, r2 @ 037fd8f0
    ldr r1, [sp, #0x38] @ 037fd8f4
    ldr r2, [sp, #0x3c] @ 037fd8f8
    add r6, r6, r1 @ 037fd8fc
    add r7, r7, r2 @ 037fd900
    strh r0, [ip], #2 @ 037fd904
    subs lr, lr, #0x100 @ 037fd908
    bgt .L_037fd874 @ 037fd90c
    mov fp, #0 @ 037fd910
    b .L_03800e34 @ 037fd914
@ arm7_dispatch_037fd918 at 0x037fd918
    cmp lr, #0x200 @ 037fd918
    ldr r8, [sp, #0x30] @ 037fd91c
    lsl sl, sl, #0x10 @ 037fd920
    ldr sb, [sp, #0x34] @ 037fd924
    lslge sl, sl, #0x10 @ 037fd928
    ldr r3, [sp, #0x38] @ 037fd92c
    ldr fp, [sp, #0x3c] @ 037fd930
    mov r0, #0 @ 037fd934
.L_037fd938:
    add r4, r4, r8 @ 037fd938
    add r5, r5, sb @ 037fd93c
    add r6, r6, r3 @ 037fd940
    add r7, r7, fp @ 037fd944
    strh r0, [ip], #2 @ 037fd948
    subs lr, lr, #0x100 @ 037fd94c
    bgt .L_037fd938 @ 037fd950
    mov fp, #0 @ 037fd954
    ldr r3, [sp, #0x24] @ 037fd958
    lsr fp, r5, #0x10 @ 037fd95c
    bic fp, fp, #0xfc00 @ 037fd960
    ldr r2, [sb, fp, lsl #2] @ 037fd964
    mov fp, #0 @ 037fd968
    add r2, r3, r2, lsl #1 @ 037fd96c
    cmp r2, #0x3400 @ 037fd970
    ldrshlt fp, [r8, r2] @ 037fd974
    b .L_03800e34 @ 037fd978
@ arm7_dispatch_037fd97c at 0x037fd97c
    cmp lr, #0x200 @ 037fd97c
    lsl sl, sl, #0x10 @ 037fd980
    lslge sl, sl, #0x10 @ 037fd984
.L_037fd988:
    mov r0, #0 @ 037fd988
    asr r1, sl, #0x10 @ 037fd98c
    ldr r3, [sp, #0x2c] @ 037fd990
    bic r0, r7, #0x8000 @ 037fd994
    add r0, r0, r1, lsl #15 @ 037fd998
    lsr r0, r0, #0x10 @ 037fd99c
    bic r0, r0, #0xfc00 @ 037fd9a0
    ldr r2, [sb, r0, lsl #2] @ 037fd9a4
    mov r0, #0 @ 037fd9a8
    add r2, r3, r2, lsl #1 @ 037fd9ac
    cmp r2, #0x3400 @ 037fd9b0
    ldrshlt r0, [r8, r2] @ 037fd9b4
    ldr r1, [sp, #0x30] @ 037fd9b8
    ldr r2, [sp, #0x34] @ 037fd9bc
    add r4, r4, r1 @ 037fd9c0
    add r5, r5, r2 @ 037fd9c4
    ldr r1, [sp, #0x38] @ 037fd9c8
    ldr r2, [sp, #0x3c] @ 037fd9cc
    add r6, r6, r1 @ 037fd9d0
    add r7, r7, r2 @ 037fd9d4
    strh r0, [ip], #2 @ 037fd9d8
    subs lr, lr, #0x100 @ 037fd9dc
    bgt .L_037fd988 @ 037fd9e0
    ldr r3, [sp, #0x24] @ 037fd9e4
    lsr fp, r5, #0x10 @ 037fd9e8
    bic fp, fp, #0xfc00 @ 037fd9ec
    ldr r2, [sb, fp, lsl #2] @ 037fd9f0
    mov fp, #0 @ 037fd9f4
    add r2, r3, r2, lsl #1 @ 037fd9f8
    cmp r2, #0x3400 @ 037fd9fc
    ldrshlt fp, [r8, r2] @ 037fda00
    b .L_03800e34 @ 037fda04
@ arm7_dispatch_037fda08 at 0x037fda08
    ldr r0, [sp, #0x30] @ 037fda08
    ldr fp, [sp, #0x38] @ 037fda0c
.L_037fda10:
    ands r2, lr, #0xf @ 037fda10
    addne r1, sl, sl, asr #16 @ 037fda14
    rsbne r2, r2, #0x10 @ 037fda18
    lslne r1, r1, #0x10 @ 037fda1c
    asrne r2, r1, r2 @ 037fda20
    ldr r3, [sp, #0x20] @ 037fda24
    bic r1, r4, #0x8000 @ 037fda28
    add r1, r1, r2 @ 037fda2c
    lsr r1, r1, #0x10 @ 037fda30
    bic r1, r1, #0xfc00 @ 037fda34
    ldr r2, [sb, r1, lsl #2] @ 037fda38
    mov r1, #0 @ 037fda3c
    add r2, r3, r2, lsl #1 @ 037fda40
    cmp r2, #0x3400 @ 037fda44
    ldrhlt r1, [r8, r2] @ 037fda48
    orr sl, r1, sl, lsl #16 @ 037fda4c
    ldr r3, [sp, #0x34] @ 037fda50
    add r4, r4, r0 @ 037fda54
    add r5, r5, r3 @ 037fda58
    ldr r3, [sp, #0x3c] @ 037fda5c
    add r6, r6, fp @ 037fda60
    add r7, r7, r3 @ 037fda64
    mov r1, #0 @ 037fda68
    strh r1, [ip], #2 @ 037fda6c
    subs lr, lr, #0x100 @ 037fda70
    bgt .L_037fda10 @ 037fda74
    mov fp, #0 @ 037fda78
    ldr r3, [sp, #0x24] @ 037fda7c
    lsr fp, r5, #0x10 @ 037fda80
    bic fp, fp, #0xfc00 @ 037fda84
    ldr r2, [sb, fp, lsl #2] @ 037fda88
    mov fp, #0 @ 037fda8c
    add r2, r3, r2, lsl #1 @ 037fda90
    cmp r2, #0x3400 @ 037fda94
    ldrshlt fp, [r8, r2] @ 037fda98
    b .L_03800e34 @ 037fda9c
.L_037fdaa0:
@ arm7_dispatch_037fdaa0 at 0x037fdaa0
    ands r1, lr, #0xf @ 037fdaa0
    addne r2, sl, sl, asr #16 @ 037fdaa4
    rsbne r1, r1, #0x10 @ 037fdaa8
    lslne r2, r2, #0x10 @ 037fdaac
    asrne r1, r2, r1 @ 037fdab0
    ldr r3, [sp, #0x20] @ 037fdab4
    bic r0, r4, #0x8000 @ 037fdab8
    add r0, r0, r1 @ 037fdabc
    lsr r0, r0, #0x10 @ 037fdac0
    bic r0, r0, #0xfc00 @ 037fdac4
    ldr r2, [sb, r0, lsl #2] @ 037fdac8
    mov r0, #0 @ 037fdacc
    add r2, r3, r2, lsl #1 @ 037fdad0
    cmp r2, #0x3400 @ 037fdad4
    ldrhlt r0, [r8, r2] @ 037fdad8
    orr sl, r0, sl, lsl #16 @ 037fdadc
    mov r0, #0 @ 037fdae0
    asr r1, sl, #0x10 @ 037fdae4
    ldr r3, [sp, #0x2c] @ 037fdae8
    bic r0, r7, #0x8000 @ 037fdaec
    add r0, r0, r1, lsl #15 @ 037fdaf0
    lsr r0, r0, #0x10 @ 037fdaf4
    bic r0, r0, #0xfc00 @ 037fdaf8
    ldr r2, [sb, r0, lsl #2] @ 037fdafc
    mov r0, #0 @ 037fdb00
    add r2, r3, r2, lsl #1 @ 037fdb04
    cmp r2, #0x3400 @ 037fdb08
    ldrshlt r0, [r8, r2] @ 037fdb0c
    ldr r1, [sp, #0x30] @ 037fdb10
    ldr r2, [sp, #0x34] @ 037fdb14
    add r4, r4, r1 @ 037fdb18
    add r5, r5, r2 @ 037fdb1c
    ldr r1, [sp, #0x38] @ 037fdb20
    ldr r2, [sp, #0x3c] @ 037fdb24
    add r6, r6, r1 @ 037fdb28
    add r7, r7, r2 @ 037fdb2c
    strh r0, [ip], #2 @ 037fdb30
    subs lr, lr, #0x100 @ 037fdb34
    bgt .L_037fdaa0 @ 037fdb38
    ldr r3, [sp, #0x24] @ 037fdb3c
    lsr fp, r5, #0x10 @ 037fdb40
    bic fp, fp, #0xfc00 @ 037fdb44
    ldr r2, [sb, fp, lsl #2] @ 037fdb48
    mov fp, #0 @ 037fdb4c
    add r2, r3, r2, lsl #1 @ 037fdb50
    cmp r2, #0x3400 @ 037fdb54
    ldrshlt fp, [r8, r2] @ 037fdb58
    b .L_03800e34 @ 037fdb5c
@ arm7_dispatch_037fdb60 at 0x037fdb60
    cmp lr, #0x200 @ 037fdb60
    ldr r8, [sp, #0x30] @ 037fdb64
    lsl sl, sl, #0x10 @ 037fdb68
    ldr sb, [sp, #0x34] @ 037fdb6c
    lslge sl, sl, #0x10 @ 037fdb70
    ldr r3, [sp, #0x38] @ 037fdb74
    ldr fp, [sp, #0x3c] @ 037fdb78
    mov r0, #0 @ 037fdb7c
.L_037fdb80:
    add r4, r4, r8 @ 037fdb80
    add r5, r5, sb @ 037fdb84
    add r6, r6, r3 @ 037fdb88
    add r7, r7, fp @ 037fdb8c
    strh r0, [ip], #2 @ 037fdb90
    subs lr, lr, #0x100 @ 037fdb94
    bgt .L_037fdb80 @ 037fdb98
    mov fp, #0 @ 037fdb9c
    b .L_03800e34 @ 037fdba0
@ arm7_dispatch_037fdba4 at 0x037fdba4
    cmp lr, #0x200 @ 037fdba4
    lsl sl, sl, #0x10 @ 037fdba8
    lslge sl, sl, #0x10 @ 037fdbac
.L_037fdbb0:
    mov r0, #0 @ 037fdbb0
    ldr r3, [sp, #0x28] @ 037fdbb4
    bic r1, r6, #0x8000 @ 037fdbb8
    add r1, r1, fp, lsl #15 @ 037fdbbc
    lsr r1, r1, #0x10 @ 037fdbc0
    bic r1, r1, #0xfc00 @ 037fdbc4
    ldr r2, [sb, r1, lsl #2] @ 037fdbc8
    mov r1, #0 @ 037fdbcc
    add r2, r3, r2, lsl #1 @ 037fdbd0
    cmp r2, #0x3400 @ 037fdbd4
    ldrshlt r1, [r8, r2] @ 037fdbd8
    add r1, r1, sl, asr #16 @ 037fdbdc
    mov fp, #0 @ 037fdbe0
    ldr r3, [sp, #0x2c] @ 037fdbe4
    bic r0, r7, #0x8000 @ 037fdbe8
    add r0, r0, r1, lsl #15 @ 037fdbec
    lsr r0, r0, #0x10 @ 037fdbf0
    bic r0, r0, #0xfc00 @ 037fdbf4
    ldr r2, [sb, r0, lsl #2] @ 037fdbf8
    mov r0, #0 @ 037fdbfc
    add r2, r3, r2, lsl #1 @ 037fdc00
    cmp r2, #0x3400 @ 037fdc04
    ldrshlt r0, [r8, r2] @ 037fdc08
    ldr r1, [sp, #0x30] @ 037fdc0c
    ldr r2, [sp, #0x34] @ 037fdc10
    add r4, r4, r1 @ 037fdc14
    add r5, r5, r2 @ 037fdc18
    ldr r1, [sp, #0x38] @ 037fdc1c
    ldr r2, [sp, #0x3c] @ 037fdc20
    add r6, r6, r1 @ 037fdc24
    add r7, r7, r2 @ 037fdc28
    strh r0, [ip], #2 @ 037fdc2c
    subs lr, lr, #0x100 @ 037fdc30
    bgt .L_037fdbb0 @ 037fdc34
    b .L_03800e34 @ 037fdc38
@ arm7_dispatch_037fdc3c at 0x037fdc3c
    ldr r0, [sp, #0x30] @ 037fdc3c
    ldr fp, [sp, #0x38] @ 037fdc40
.L_037fdc44:
    ands r2, lr, #0xf @ 037fdc44
    addne r1, sl, sl, asr #16 @ 037fdc48
    rsbne r2, r2, #0x10 @ 037fdc4c
    lslne r1, r1, #0x10 @ 037fdc50
    asrne r2, r1, r2 @ 037fdc54
    ldr r3, [sp, #0x20] @ 037fdc58
    bic r1, r4, #0x8000 @ 037fdc5c
    add r1, r1, r2 @ 037fdc60
    lsr r1, r1, #0x10 @ 037fdc64
    bic r1, r1, #0xfc00 @ 037fdc68
    ldr r2, [sb, r1, lsl #2] @ 037fdc6c
    mov r1, #0 @ 037fdc70
    add r2, r3, r2, lsl #1 @ 037fdc74
    cmp r2, #0x3400 @ 037fdc78
    ldrhlt r1, [r8, r2] @ 037fdc7c
    orr sl, r1, sl, lsl #16 @ 037fdc80
    ldr r3, [sp, #0x34] @ 037fdc84
    add r4, r4, r0 @ 037fdc88
    add r5, r5, r3 @ 037fdc8c
    ldr r3, [sp, #0x3c] @ 037fdc90
    add r6, r6, fp @ 037fdc94
    add r7, r7, r3 @ 037fdc98
    mov r1, #0 @ 037fdc9c
    strh r1, [ip], #2 @ 037fdca0
    subs lr, lr, #0x100 @ 037fdca4
    bgt .L_037fdc44 @ 037fdca8
    mov fp, #0 @ 037fdcac
    b .L_03800e34 @ 037fdcb0
.L_037fdcb4:
@ arm7_dispatch_037fdcb4 at 0x037fdcb4
    ands r1, lr, #0xf @ 037fdcb4
    addne r2, sl, sl, asr #16 @ 037fdcb8
    rsbne r1, r1, #0x10 @ 037fdcbc
    lslne r2, r2, #0x10 @ 037fdcc0
    asrne r1, r2, r1 @ 037fdcc4
    ldr r3, [sp, #0x20] @ 037fdcc8
    bic r0, r4, #0x8000 @ 037fdccc
    add r0, r0, r1 @ 037fdcd0
    lsr r0, r0, #0x10 @ 037fdcd4
    bic r0, r0, #0xfc00 @ 037fdcd8
    ldr r2, [sb, r0, lsl #2] @ 037fdcdc
    mov r0, #0 @ 037fdce0
    add r2, r3, r2, lsl #1 @ 037fdce4
    cmp r2, #0x3400 @ 037fdce8
    ldrhlt r0, [r8, r2] @ 037fdcec
    orr sl, r0, sl, lsl #16 @ 037fdcf0
    mov r0, #0 @ 037fdcf4
    ldr r3, [sp, #0x28] @ 037fdcf8
    bic r1, r6, #0x8000 @ 037fdcfc
    add r1, r1, fp, lsl #15 @ 037fdd00
    lsr r1, r1, #0x10 @ 037fdd04
    bic r1, r1, #0xfc00 @ 037fdd08
    ldr r2, [sb, r1, lsl #2] @ 037fdd0c
    mov r1, #0 @ 037fdd10
    add r2, r3, r2, lsl #1 @ 037fdd14
    cmp r2, #0x3400 @ 037fdd18
    ldrshlt r1, [r8, r2] @ 037fdd1c
    add r1, r1, sl, asr #16 @ 037fdd20
    mov fp, #0 @ 037fdd24
    ldr r3, [sp, #0x2c] @ 037fdd28
    bic r0, r7, #0x8000 @ 037fdd2c
    add r0, r0, r1, lsl #15 @ 037fdd30
    lsr r0, r0, #0x10 @ 037fdd34
    bic r0, r0, #0xfc00 @ 037fdd38
    ldr r2, [sb, r0, lsl #2] @ 037fdd3c
    mov r0, #0 @ 037fdd40
    add r2, r3, r2, lsl #1 @ 037fdd44
    cmp r2, #0x3400 @ 037fdd48
    ldrshlt r0, [r8, r2] @ 037fdd4c
    ldr r1, [sp, #0x30] @ 037fdd50
    ldr r2, [sp, #0x34] @ 037fdd54
    add r4, r4, r1 @ 037fdd58
    add r5, r5, r2 @ 037fdd5c
    ldr r1, [sp, #0x38] @ 037fdd60
    ldr r2, [sp, #0x3c] @ 037fdd64
    add r6, r6, r1 @ 037fdd68
    add r7, r7, r2 @ 037fdd6c
    strh r0, [ip], #2 @ 037fdd70
    subs lr, lr, #0x100 @ 037fdd74
    bgt .L_037fdcb4 @ 037fdd78
    b .L_03800e34 @ 037fdd7c
@ arm7_dispatch_037fdd80 at 0x037fdd80
    cmp lr, #0x200 @ 037fdd80
    ldr r8, [sp, #0x30] @ 037fdd84
    lsl sl, sl, #0x10 @ 037fdd88
    ldr sb, [sp, #0x34] @ 037fdd8c
    lslge sl, sl, #0x10 @ 037fdd90
    ldr r3, [sp, #0x38] @ 037fdd94
    ldr fp, [sp, #0x3c] @ 037fdd98
    mov r0, #0 @ 037fdd9c
.L_037fdda0:
    add r4, r4, r8 @ 037fdda0
    add r5, r5, sb @ 037fdda4
    add r6, r6, r3 @ 037fdda8
    add r7, r7, fp @ 037fddac
    strh r0, [ip], #2 @ 037fddb0
    subs lr, lr, #0x100 @ 037fddb4
    bgt .L_037fdda0 @ 037fddb8
    mov fp, #0 @ 037fddbc
    ldr r3, [sp, #0x24] @ 037fddc0
    lsr fp, r5, #0x10 @ 037fddc4
    bic fp, fp, #0xfc00 @ 037fddc8
    ldr r2, [sb, fp, lsl #2] @ 037fddcc
    mov fp, #0 @ 037fddd0
    add r2, r3, r2, lsl #1 @ 037fddd4
    cmp r2, #0x3400 @ 037fddd8
    ldrshlt fp, [r8, r2] @ 037fdddc
    b .L_03800e34 @ 037fdde0
@ arm7_dispatch_037fdde4 at 0x037fdde4
    cmp lr, #0x200 @ 037fdde4
    lsl sl, sl, #0x10 @ 037fdde8
    lslge sl, sl, #0x10 @ 037fddec
.L_037fddf0:
    mov r0, #0 @ 037fddf0
    ldr r3, [sp, #0x28] @ 037fddf4
    bic r1, r6, #0x8000 @ 037fddf8
    add r1, r1, fp, lsl #15 @ 037fddfc
    lsr r1, r1, #0x10 @ 037fde00
    bic r1, r1, #0xfc00 @ 037fde04
    ldr r2, [sb, r1, lsl #2] @ 037fde08
    mov r1, #0 @ 037fde0c
    add r2, r3, r2, lsl #1 @ 037fde10
    cmp r2, #0x3400 @ 037fde14
    ldrshlt r1, [r8, r2] @ 037fde18
    add r1, r1, sl, asr #16 @ 037fde1c
    ldr r3, [sp, #0x24] @ 037fde20
    lsr fp, r5, #0x10 @ 037fde24
    bic fp, fp, #0xfc00 @ 037fde28
    ldr r2, [sb, fp, lsl #2] @ 037fde2c
    mov fp, #0 @ 037fde30
    add r2, r3, r2, lsl #1 @ 037fde34
    cmp r2, #0x3400 @ 037fde38
    ldrshlt fp, [r8, r2] @ 037fde3c
    ldr r3, [sp, #0x2c] @ 037fde40
    bic r0, r7, #0x8000 @ 037fde44
    add r0, r0, r1, lsl #15 @ 037fde48
    lsr r0, r0, #0x10 @ 037fde4c
    bic r0, r0, #0xfc00 @ 037fde50
    ldr r2, [sb, r0, lsl #2] @ 037fde54
    mov r0, #0 @ 037fde58
    add r2, r3, r2, lsl #1 @ 037fde5c
    cmp r2, #0x3400 @ 037fde60
    ldrshlt r0, [r8, r2] @ 037fde64
    ldr r1, [sp, #0x30] @ 037fde68
    ldr r2, [sp, #0x34] @ 037fde6c
    add r4, r4, r1 @ 037fde70
    add r5, r5, r2 @ 037fde74
    ldr r1, [sp, #0x38] @ 037fde78
    ldr r2, [sp, #0x3c] @ 037fde7c
    add r6, r6, r1 @ 037fde80
    add r7, r7, r2 @ 037fde84
    strh r0, [ip], #2 @ 037fde88
    subs lr, lr, #0x100 @ 037fde8c
    bgt .L_037fddf0 @ 037fde90
    b .L_03800e34 @ 037fde94
@ arm7_dispatch_037fde98 at 0x037fde98
    ldr r0, [sp, #0x30] @ 037fde98
    ldr fp, [sp, #0x38] @ 037fde9c
.L_037fdea0:
    ands r2, lr, #0xf @ 037fdea0
    addne r1, sl, sl, asr #16 @ 037fdea4
    rsbne r2, r2, #0x10 @ 037fdea8
    lslne r1, r1, #0x10 @ 037fdeac
    asrne r2, r1, r2 @ 037fdeb0
    ldr r3, [sp, #0x20] @ 037fdeb4
    bic r1, r4, #0x8000 @ 037fdeb8
    add r1, r1, r2 @ 037fdebc
    lsr r1, r1, #0x10 @ 037fdec0
    bic r1, r1, #0xfc00 @ 037fdec4
    ldr r2, [sb, r1, lsl #2] @ 037fdec8
    mov r1, #0 @ 037fdecc
    add r2, r3, r2, lsl #1 @ 037fded0
    cmp r2, #0x3400 @ 037fded4
    ldrhlt r1, [r8, r2] @ 037fded8
    orr sl, r1, sl, lsl #16 @ 037fdedc
    ldr r3, [sp, #0x34] @ 037fdee0
    add r4, r4, r0 @ 037fdee4
    add r5, r5, r3 @ 037fdee8
    ldr r3, [sp, #0x3c] @ 037fdeec
    add r6, r6, fp @ 037fdef0
    add r7, r7, r3 @ 037fdef4
    mov r1, #0 @ 037fdef8
    strh r1, [ip], #2 @ 037fdefc
    subs lr, lr, #0x100 @ 037fdf00
    bgt .L_037fdea0 @ 037fdf04
    mov fp, #0 @ 037fdf08
    ldr r3, [sp, #0x24] @ 037fdf0c
    lsr fp, r5, #0x10 @ 037fdf10
    bic fp, fp, #0xfc00 @ 037fdf14
    ldr r2, [sb, fp, lsl #2] @ 037fdf18
    mov fp, #0 @ 037fdf1c
    add r2, r3, r2, lsl #1 @ 037fdf20
    cmp r2, #0x3400 @ 037fdf24
    ldrshlt fp, [r8, r2] @ 037fdf28
    b .L_03800e34 @ 037fdf2c
.L_037fdf30:
@ arm7_dispatch_037fdf30 at 0x037fdf30
    ands r1, lr, #0xf @ 037fdf30
    addne r2, sl, sl, asr #16 @ 037fdf34
    rsbne r1, r1, #0x10 @ 037fdf38
    lslne r2, r2, #0x10 @ 037fdf3c
    asrne r1, r2, r1 @ 037fdf40
    ldr r3, [sp, #0x20] @ 037fdf44
    bic r0, r4, #0x8000 @ 037fdf48
    add r0, r0, r1 @ 037fdf4c
    lsr r0, r0, #0x10 @ 037fdf50
    bic r0, r0, #0xfc00 @ 037fdf54
    ldr r2, [sb, r0, lsl #2] @ 037fdf58
    mov r0, #0 @ 037fdf5c
    add r2, r3, r2, lsl #1 @ 037fdf60
    cmp r2, #0x3400 @ 037fdf64
    ldrhlt r0, [r8, r2] @ 037fdf68
    orr sl, r0, sl, lsl #16 @ 037fdf6c
    mov r0, #0 @ 037fdf70
    ldr r3, [sp, #0x28] @ 037fdf74
    bic r1, r6, #0x8000 @ 037fdf78
    add r1, r1, fp, lsl #15 @ 037fdf7c
    lsr r1, r1, #0x10 @ 037fdf80
    bic r1, r1, #0xfc00 @ 037fdf84
    ldr r2, [sb, r1, lsl #2] @ 037fdf88
    mov r1, #0 @ 037fdf8c
    add r2, r3, r2, lsl #1 @ 037fdf90
    cmp r2, #0x3400 @ 037fdf94
    ldrshlt r1, [r8, r2] @ 037fdf98
    add r1, r1, sl, asr #16 @ 037fdf9c
    ldr r3, [sp, #0x24] @ 037fdfa0
    lsr fp, r5, #0x10 @ 037fdfa4
    bic fp, fp, #0xfc00 @ 037fdfa8
    ldr r2, [sb, fp, lsl #2] @ 037fdfac
    mov fp, #0 @ 037fdfb0
    add r2, r3, r2, lsl #1 @ 037fdfb4
    cmp r2, #0x3400 @ 037fdfb8
    ldrshlt fp, [r8, r2] @ 037fdfbc
    ldr r3, [sp, #0x2c] @ 037fdfc0
    bic r0, r7, #0x8000 @ 037fdfc4
    add r0, r0, r1, lsl #15 @ 037fdfc8
    lsr r0, r0, #0x10 @ 037fdfcc
    bic r0, r0, #0xfc00 @ 037fdfd0
    ldr r2, [sb, r0, lsl #2] @ 037fdfd4
    mov r0, #0 @ 037fdfd8
    add r2, r3, r2, lsl #1 @ 037fdfdc
    cmp r2, #0x3400 @ 037fdfe0
    ldrshlt r0, [r8, r2] @ 037fdfe4
    ldr r1, [sp, #0x30] @ 037fdfe8
    ldr r2, [sp, #0x34] @ 037fdfec
    add r4, r4, r1 @ 037fdff0
    add r5, r5, r2 @ 037fdff4
    ldr r1, [sp, #0x38] @ 037fdff8
    ldr r2, [sp, #0x3c] @ 037fdffc
    add r6, r6, r1 @ 037fe000
    add r7, r7, r2 @ 037fe004
    strh r0, [ip], #2 @ 037fe008
    subs lr, lr, #0x100 @ 037fe00c
    bgt .L_037fdf30 @ 037fe010
    b .L_03800e34 @ 037fe014
@ arm7_dispatch_037fe018 at 0x037fe018
    cmp lr, #0x200 @ 037fe018
    ldr r8, [sp, #0x30] @ 037fe01c
    lsl sl, sl, #0x10 @ 037fe020
    ldr sb, [sp, #0x34] @ 037fe024
    lslge sl, sl, #0x10 @ 037fe028
    ldr r3, [sp, #0x38] @ 037fe02c
    ldr fp, [sp, #0x3c] @ 037fe030
    mov r0, #0 @ 037fe034
.L_037fe038:
    add r4, r4, r8 @ 037fe038
    add r5, r5, sb @ 037fe03c
    add r6, r6, r3 @ 037fe040
    add r7, r7, fp @ 037fe044
    strh r0, [ip], #2 @ 037fe048
    subs lr, lr, #0x100 @ 037fe04c
    bgt .L_037fe038 @ 037fe050
    mov fp, #0 @ 037fe054
    b .L_03800e34 @ 037fe058
@ arm7_dispatch_037fe05c at 0x037fe05c
    cmp lr, #0x200 @ 037fe05c
    lsl sl, sl, #0x10 @ 037fe060
    lslge sl, sl, #0x10 @ 037fe064
.L_037fe068:
    mov r0, #0 @ 037fe068
    ldr r3, [sp, #0x2c] @ 037fe06c
    bic r0, r7, #0x8000 @ 037fe070
    add r0, r0, fp, lsl #15 @ 037fe074
    lsr r0, r0, #0x10 @ 037fe078
    bic r0, r0, #0xfc00 @ 037fe07c
    ldr r2, [sb, r0, lsl #2] @ 037fe080
    mov r0, #0 @ 037fe084
    add r2, r3, r2, lsl #1 @ 037fe088
    cmp r2, #0x3400 @ 037fe08c
    ldrshlt r0, [r8, r2] @ 037fe090
    mov fp, #0 @ 037fe094
    ldr r1, [sp, #0x30] @ 037fe098
    ldr r2, [sp, #0x34] @ 037fe09c
    add r4, r4, r1 @ 037fe0a0
    add r5, r5, r2 @ 037fe0a4
    ldr r1, [sp, #0x38] @ 037fe0a8
    ldr r2, [sp, #0x3c] @ 037fe0ac
    add r6, r6, r1 @ 037fe0b0
    add r7, r7, r2 @ 037fe0b4
    strh r0, [ip], #2 @ 037fe0b8
    subs lr, lr, #0x100 @ 037fe0bc
    bgt .L_037fe068 @ 037fe0c0
    b .L_03800e34 @ 037fe0c4
@ arm7_dispatch_037fe0c8 at 0x037fe0c8
    ldr r0, [sp, #0x30] @ 037fe0c8
    ldr fp, [sp, #0x38] @ 037fe0cc
.L_037fe0d0:
    ands r2, lr, #0xf @ 037fe0d0
    addne r1, sl, sl, asr #16 @ 037fe0d4
    rsbne r2, r2, #0x10 @ 037fe0d8
    lslne r1, r1, #0x10 @ 037fe0dc
    asrne r2, r1, r2 @ 037fe0e0
    ldr r3, [sp, #0x20] @ 037fe0e4
    bic r1, r4, #0x8000 @ 037fe0e8
    add r1, r1, r2 @ 037fe0ec
    lsr r1, r1, #0x10 @ 037fe0f0
    bic r1, r1, #0xfc00 @ 037fe0f4
    ldr r2, [sb, r1, lsl #2] @ 037fe0f8
    mov r1, #0 @ 037fe0fc
    add r2, r3, r2, lsl #1 @ 037fe100
    cmp r2, #0x3400 @ 037fe104
    ldrhlt r1, [r8, r2] @ 037fe108
    orr sl, r1, sl, lsl #16 @ 037fe10c
    ldr r3, [sp, #0x34] @ 037fe110
    add r4, r4, r0 @ 037fe114
    add r5, r5, r3 @ 037fe118
    ldr r3, [sp, #0x3c] @ 037fe11c
    add r6, r6, fp @ 037fe120
    add r7, r7, r3 @ 037fe124
    mov r1, #0 @ 037fe128
    strh r1, [ip], #2 @ 037fe12c
    subs lr, lr, #0x100 @ 037fe130
    bgt .L_037fe0d0 @ 037fe134
    mov fp, #0 @ 037fe138
    b .L_03800e34 @ 037fe13c
.L_037fe140:
@ arm7_dispatch_037fe140 at 0x037fe140
    ands r1, lr, #0xf @ 037fe140
    addne r2, sl, sl, asr #16 @ 037fe144
    rsbne r1, r1, #0x10 @ 037fe148
    lslne r2, r2, #0x10 @ 037fe14c
    asrne r1, r2, r1 @ 037fe150
    ldr r3, [sp, #0x20] @ 037fe154
    bic r0, r4, #0x8000 @ 037fe158
    add r0, r0, r1 @ 037fe15c
    lsr r0, r0, #0x10 @ 037fe160
    bic r0, r0, #0xfc00 @ 037fe164
    ldr r2, [sb, r0, lsl #2] @ 037fe168
    mov r0, #0 @ 037fe16c
    add r2, r3, r2, lsl #1 @ 037fe170
    cmp r2, #0x3400 @ 037fe174
    ldrhlt r0, [r8, r2] @ 037fe178
    orr sl, r0, sl, lsl #16 @ 037fe17c
    mov r0, #0 @ 037fe180
    ldr r3, [sp, #0x2c] @ 037fe184
    bic r0, r7, #0x8000 @ 037fe188
    add r0, r0, fp, lsl #15 @ 037fe18c
    lsr r0, r0, #0x10 @ 037fe190
    bic r0, r0, #0xfc00 @ 037fe194
    ldr r2, [sb, r0, lsl #2] @ 037fe198
    mov r0, #0 @ 037fe19c
    add r2, r3, r2, lsl #1 @ 037fe1a0
    cmp r2, #0x3400 @ 037fe1a4
    ldrshlt r0, [r8, r2] @ 037fe1a8
    mov fp, #0 @ 037fe1ac
    ldr r1, [sp, #0x30] @ 037fe1b0
    ldr r2, [sp, #0x34] @ 037fe1b4
    add r4, r4, r1 @ 037fe1b8
    add r5, r5, r2 @ 037fe1bc
    ldr r1, [sp, #0x38] @ 037fe1c0
    ldr r2, [sp, #0x3c] @ 037fe1c4
    add r6, r6, r1 @ 037fe1c8
    add r7, r7, r2 @ 037fe1cc
    strh r0, [ip], #2 @ 037fe1d0
    subs lr, lr, #0x100 @ 037fe1d4
    bgt .L_037fe140 @ 037fe1d8
    b .L_03800e34 @ 037fe1dc
@ arm7_dispatch_037fe1e0 at 0x037fe1e0
    cmp lr, #0x200 @ 037fe1e0
    ldr r8, [sp, #0x30] @ 037fe1e4
    lsl sl, sl, #0x10 @ 037fe1e8
    ldr sb, [sp, #0x34] @ 037fe1ec
    lslge sl, sl, #0x10 @ 037fe1f0
    ldr r3, [sp, #0x38] @ 037fe1f4
    ldr fp, [sp, #0x3c] @ 037fe1f8
    mov r0, #0 @ 037fe1fc
.L_037fe200:
    add r4, r4, r8 @ 037fe200
    add r5, r5, sb @ 037fe204
    add r6, r6, r3 @ 037fe208
    add r7, r7, fp @ 037fe20c
    strh r0, [ip], #2 @ 037fe210
    subs lr, lr, #0x100 @ 037fe214
    bgt .L_037fe200 @ 037fe218
    mov fp, #0 @ 037fe21c
    asr r1, sl, #0x10 @ 037fe220
    ldr r3, [sp, #0x24] @ 037fe224
    bic fp, r5, #0x8000 @ 037fe228
    add fp, fp, r1, lsl #15 @ 037fe22c
    lsr fp, fp, #0x10 @ 037fe230
    bic fp, fp, #0xfc00 @ 037fe234
    ldr r2, [sb, fp, lsl #2] @ 037fe238
    mov fp, #0 @ 037fe23c
    add r2, r3, r2, lsl #1 @ 037fe240
    cmp r2, #0x3400 @ 037fe244
    ldrshlt fp, [r8, r2] @ 037fe248
    b .L_03800e34 @ 037fe24c
@ arm7_dispatch_037fe250 at 0x037fe250
    cmp lr, #0x200 @ 037fe250
    lsl sl, sl, #0x10 @ 037fe254
    lslge sl, sl, #0x10 @ 037fe258
.L_037fe25c:
    mov r0, #0 @ 037fe25c
    ldr r3, [sp, #0x2c] @ 037fe260
    bic r0, r7, #0x8000 @ 037fe264
    add r0, r0, fp, lsl #15 @ 037fe268
    lsr r0, r0, #0x10 @ 037fe26c
    bic r0, r0, #0xfc00 @ 037fe270
    ldr r2, [sb, r0, lsl #2] @ 037fe274
    mov r0, #0 @ 037fe278
    add r2, r3, r2, lsl #1 @ 037fe27c
    cmp r2, #0x3400 @ 037fe280
    ldrshlt r0, [r8, r2] @ 037fe284
    asr r1, sl, #0x10 @ 037fe288
    ldr r3, [sp, #0x24] @ 037fe28c
    bic fp, r5, #0x8000 @ 037fe290
    add fp, fp, r1, lsl #15 @ 037fe294
    lsr fp, fp, #0x10 @ 037fe298
    bic fp, fp, #0xfc00 @ 037fe29c
    ldr r2, [sb, fp, lsl #2] @ 037fe2a0
    mov fp, #0 @ 037fe2a4
    add r2, r3, r2, lsl #1 @ 037fe2a8
    cmp r2, #0x3400 @ 037fe2ac
    ldrshlt fp, [r8, r2] @ 037fe2b0
    ldr r1, [sp, #0x30] @ 037fe2b4
    ldr r2, [sp, #0x34] @ 037fe2b8
    add r4, r4, r1 @ 037fe2bc
    add r5, r5, r2 @ 037fe2c0
    ldr r1, [sp, #0x38] @ 037fe2c4
    ldr r2, [sp, #0x3c] @ 037fe2c8
    add r6, r6, r1 @ 037fe2cc
    add r7, r7, r2 @ 037fe2d0
    strh r0, [ip], #2 @ 037fe2d4
    subs lr, lr, #0x100 @ 037fe2d8
    bgt .L_037fe25c @ 037fe2dc
    b .L_03800e34 @ 037fe2e0
@ arm7_dispatch_037fe2e4 at 0x037fe2e4
    ldr r0, [sp, #0x30] @ 037fe2e4
    ldr fp, [sp, #0x38] @ 037fe2e8
.L_037fe2ec:
    ands r2, lr, #0xf @ 037fe2ec
    addne r1, sl, sl, asr #16 @ 037fe2f0
    rsbne r2, r2, #0x10 @ 037fe2f4
    lslne r1, r1, #0x10 @ 037fe2f8
    asrne r2, r1, r2 @ 037fe2fc
    ldr r3, [sp, #0x20] @ 037fe300
    bic r1, r4, #0x8000 @ 037fe304
    add r1, r1, r2 @ 037fe308
    lsr r1, r1, #0x10 @ 037fe30c
    bic r1, r1, #0xfc00 @ 037fe310
    ldr r2, [sb, r1, lsl #2] @ 037fe314
    mov r1, #0 @ 037fe318
    add r2, r3, r2, lsl #1 @ 037fe31c
    cmp r2, #0x3400 @ 037fe320
    ldrhlt r1, [r8, r2] @ 037fe324
    orr sl, r1, sl, lsl #16 @ 037fe328
    ldr r3, [sp, #0x34] @ 037fe32c
    add r4, r4, r0 @ 037fe330
    add r5, r5, r3 @ 037fe334
    ldr r3, [sp, #0x3c] @ 037fe338
    add r6, r6, fp @ 037fe33c
    add r7, r7, r3 @ 037fe340
    mov r1, #0 @ 037fe344
    strh r1, [ip], #2 @ 037fe348
    subs lr, lr, #0x100 @ 037fe34c
    bgt .L_037fe2ec @ 037fe350
    mov fp, #0 @ 037fe354
    asr r1, sl, #0x10 @ 037fe358
    ldr r3, [sp, #0x24] @ 037fe35c
    bic fp, r5, #0x8000 @ 037fe360
    add fp, fp, r1, lsl #15 @ 037fe364
    lsr fp, fp, #0x10 @ 037fe368
    bic fp, fp, #0xfc00 @ 037fe36c
    ldr r2, [sb, fp, lsl #2] @ 037fe370
    mov fp, #0 @ 037fe374
    add r2, r3, r2, lsl #1 @ 037fe378
    cmp r2, #0x3400 @ 037fe37c
    ldrshlt fp, [r8, r2] @ 037fe380
    b .L_03800e34 @ 037fe384
.L_037fe388:
@ arm7_dispatch_037fe388 at 0x037fe388
    ands r1, lr, #0xf @ 037fe388
    addne r2, sl, sl, asr #16 @ 037fe38c
    rsbne r1, r1, #0x10 @ 037fe390
    lslne r2, r2, #0x10 @ 037fe394
    asrne r1, r2, r1 @ 037fe398
    ldr r3, [sp, #0x20] @ 037fe39c
    bic r0, r4, #0x8000 @ 037fe3a0
    add r0, r0, r1 @ 037fe3a4
    lsr r0, r0, #0x10 @ 037fe3a8
    bic r0, r0, #0xfc00 @ 037fe3ac
    ldr r2, [sb, r0, lsl #2] @ 037fe3b0
    mov r0, #0 @ 037fe3b4
    add r2, r3, r2, lsl #1 @ 037fe3b8
    cmp r2, #0x3400 @ 037fe3bc
    ldrhlt r0, [r8, r2] @ 037fe3c0
    orr sl, r0, sl, lsl #16 @ 037fe3c4
    mov r0, #0 @ 037fe3c8
    ldr r3, [sp, #0x2c] @ 037fe3cc
    bic r0, r7, #0x8000 @ 037fe3d0
    add r0, r0, fp, lsl #15 @ 037fe3d4
    lsr r0, r0, #0x10 @ 037fe3d8
    bic r0, r0, #0xfc00 @ 037fe3dc
    ldr r2, [sb, r0, lsl #2] @ 037fe3e0
    mov r0, #0 @ 037fe3e4
    add r2, r3, r2, lsl #1 @ 037fe3e8
    cmp r2, #0x3400 @ 037fe3ec
    ldrshlt r0, [r8, r2] @ 037fe3f0
    asr r1, sl, #0x10 @ 037fe3f4
    ldr r3, [sp, #0x24] @ 037fe3f8
    bic fp, r5, #0x8000 @ 037fe3fc
    add fp, fp, r1, lsl #15 @ 037fe400
    lsr fp, fp, #0x10 @ 037fe404
    bic fp, fp, #0xfc00 @ 037fe408
    ldr r2, [sb, fp, lsl #2] @ 037fe40c
    mov fp, #0 @ 037fe410
    add r2, r3, r2, lsl #1 @ 037fe414
    cmp r2, #0x3400 @ 037fe418
    ldrshlt fp, [r8, r2] @ 037fe41c
    ldr r1, [sp, #0x30] @ 037fe420
    ldr r2, [sp, #0x34] @ 037fe424
    add r4, r4, r1 @ 037fe428
    add r5, r5, r2 @ 037fe42c
    ldr r1, [sp, #0x38] @ 037fe430
    ldr r2, [sp, #0x3c] @ 037fe434
    add r6, r6, r1 @ 037fe438
    add r7, r7, r2 @ 037fe43c
    strh r0, [ip], #2 @ 037fe440
    subs lr, lr, #0x100 @ 037fe444
    bgt .L_037fe388 @ 037fe448
    b .L_03800e34 @ 037fe44c
@ arm7_dispatch_037fe450 at 0x037fe450
    cmp lr, #0x200 @ 037fe450
    ldr r8, [sp, #0x30] @ 037fe454
    lsl sl, sl, #0x10 @ 037fe458
    ldr sb, [sp, #0x34] @ 037fe45c
    lslge sl, sl, #0x10 @ 037fe460
    ldr r3, [sp, #0x38] @ 037fe464
    ldr fp, [sp, #0x3c] @ 037fe468
    mov r0, #0 @ 037fe46c
.L_037fe470:
    add r4, r4, r8 @ 037fe470
    add r5, r5, sb @ 037fe474
    add r6, r6, r3 @ 037fe478
    add r7, r7, fp @ 037fe47c
    strh r0, [ip], #2 @ 037fe480
    subs lr, lr, #0x100 @ 037fe484
    bgt .L_037fe470 @ 037fe488
    mov fp, #0 @ 037fe48c
    b .L_03800e34 @ 037fe490
@ arm7_dispatch_037fe494 at 0x037fe494
    cmp lr, #0x200 @ 037fe494
    lsl sl, sl, #0x10 @ 037fe498
    lslge sl, sl, #0x10 @ 037fe49c
.L_037fe4a0:
    mov r0, #0 @ 037fe4a0
    ldr r3, [sp, #0x28] @ 037fe4a4
    lsr r1, r6, #0x10 @ 037fe4a8
    bic r1, r1, #0xfc00 @ 037fe4ac
    ldr r2, [sb, r1, lsl #2] @ 037fe4b0
    mov r1, #0 @ 037fe4b4
    add r2, r3, r2, lsl #1 @ 037fe4b8
    cmp r2, #0x3400 @ 037fe4bc
    ldrshlt r1, [r8, r2] @ 037fe4c0
    add r1, r1, fp @ 037fe4c4
    ldr r3, [sp, #0x2c] @ 037fe4c8
    bic r0, r7, #0x8000 @ 037fe4cc
    add r0, r0, r1, lsl #15 @ 037fe4d0
    lsr r0, r0, #0x10 @ 037fe4d4
    bic r0, r0, #0xfc00 @ 037fe4d8
    ldr r2, [sb, r0, lsl #2] @ 037fe4dc
    mov r0, #0 @ 037fe4e0
    add r2, r3, r2, lsl #1 @ 037fe4e4
    cmp r2, #0x3400 @ 037fe4e8
    ldrshlt r0, [r8, r2] @ 037fe4ec
    mov fp, #0 @ 037fe4f0
    ldr r1, [sp, #0x30] @ 037fe4f4
    ldr r2, [sp, #0x34] @ 037fe4f8
    add r4, r4, r1 @ 037fe4fc
    add r5, r5, r2 @ 037fe500
    ldr r1, [sp, #0x38] @ 037fe504
    ldr r2, [sp, #0x3c] @ 037fe508
    add r6, r6, r1 @ 037fe50c
    add r7, r7, r2 @ 037fe510
    strh r0, [ip], #2 @ 037fe514
    subs lr, lr, #0x100 @ 037fe518
    bgt .L_037fe4a0 @ 037fe51c
    b .L_03800e34 @ 037fe520
@ arm7_dispatch_037fe524 at 0x037fe524
    ldr r0, [sp, #0x30] @ 037fe524
    ldr fp, [sp, #0x38] @ 037fe528
.L_037fe52c:
    ands r2, lr, #0xf @ 037fe52c
    addne r1, sl, sl, asr #16 @ 037fe530
    rsbne r2, r2, #0x10 @ 037fe534
    lslne r1, r1, #0x10 @ 037fe538
    asrne r2, r1, r2 @ 037fe53c
    ldr r3, [sp, #0x20] @ 037fe540
    bic r1, r4, #0x8000 @ 037fe544
    add r1, r1, r2 @ 037fe548
    lsr r1, r1, #0x10 @ 037fe54c
    bic r1, r1, #0xfc00 @ 037fe550
    ldr r2, [sb, r1, lsl #2] @ 037fe554
    mov r1, #0 @ 037fe558
    add r2, r3, r2, lsl #1 @ 037fe55c
    cmp r2, #0x3400 @ 037fe560
    ldrhlt r1, [r8, r2] @ 037fe564
    orr sl, r1, sl, lsl #16 @ 037fe568
    ldr r3, [sp, #0x34] @ 037fe56c
    add r4, r4, r0 @ 037fe570
    add r5, r5, r3 @ 037fe574
    ldr r3, [sp, #0x3c] @ 037fe578
    add r6, r6, fp @ 037fe57c
    add r7, r7, r3 @ 037fe580
    mov r1, #0 @ 037fe584
    strh r1, [ip], #2 @ 037fe588
    subs lr, lr, #0x100 @ 037fe58c
    bgt .L_037fe52c @ 037fe590
    mov fp, #0 @ 037fe594
    b .L_03800e34 @ 037fe598
.L_037fe59c:
@ arm7_dispatch_037fe59c at 0x037fe59c
    ands r1, lr, #0xf @ 037fe59c
    addne r2, sl, sl, asr #16 @ 037fe5a0
    rsbne r1, r1, #0x10 @ 037fe5a4
    lslne r2, r2, #0x10 @ 037fe5a8
    asrne r1, r2, r1 @ 037fe5ac
    ldr r3, [sp, #0x20] @ 037fe5b0
    bic r0, r4, #0x8000 @ 037fe5b4
    add r0, r0, r1 @ 037fe5b8
    lsr r0, r0, #0x10 @ 037fe5bc
    bic r0, r0, #0xfc00 @ 037fe5c0
    ldr r2, [sb, r0, lsl #2] @ 037fe5c4
    mov r0, #0 @ 037fe5c8
    add r2, r3, r2, lsl #1 @ 037fe5cc
    cmp r2, #0x3400 @ 037fe5d0
    ldrhlt r0, [r8, r2] @ 037fe5d4
    orr sl, r0, sl, lsl #16 @ 037fe5d8
    mov r0, #0 @ 037fe5dc
    ldr r3, [sp, #0x28] @ 037fe5e0
    lsr r1, r6, #0x10 @ 037fe5e4
    bic r1, r1, #0xfc00 @ 037fe5e8
    ldr r2, [sb, r1, lsl #2] @ 037fe5ec
    mov r1, #0 @ 037fe5f0
    add r2, r3, r2, lsl #1 @ 037fe5f4
    cmp r2, #0x3400 @ 037fe5f8
    ldrshlt r1, [r8, r2] @ 037fe5fc
    add r1, r1, fp @ 037fe600
    ldr r3, [sp, #0x2c] @ 037fe604
    bic r0, r7, #0x8000 @ 037fe608
    add r0, r0, r1, lsl #15 @ 037fe60c
    lsr r0, r0, #0x10 @ 037fe610
    bic r0, r0, #0xfc00 @ 037fe614
    ldr r2, [sb, r0, lsl #2] @ 037fe618
    mov r0, #0 @ 037fe61c
    add r2, r3, r2, lsl #1 @ 037fe620
    cmp r2, #0x3400 @ 037fe624
    ldrshlt r0, [r8, r2] @ 037fe628
    mov fp, #0 @ 037fe62c
    ldr r1, [sp, #0x30] @ 037fe630
    ldr r2, [sp, #0x34] @ 037fe634
    add r4, r4, r1 @ 037fe638
    add r5, r5, r2 @ 037fe63c
    ldr r1, [sp, #0x38] @ 037fe640
    ldr r2, [sp, #0x3c] @ 037fe644
    add r6, r6, r1 @ 037fe648
    add r7, r7, r2 @ 037fe64c
    strh r0, [ip], #2 @ 037fe650
    subs lr, lr, #0x100 @ 037fe654
    bgt .L_037fe59c @ 037fe658
    b .L_03800e34 @ 037fe65c
@ arm7_dispatch_037fe660 at 0x037fe660
    cmp lr, #0x200 @ 037fe660
    ldr r8, [sp, #0x30] @ 037fe664
    lsl sl, sl, #0x10 @ 037fe668
    ldr sb, [sp, #0x34] @ 037fe66c
    lslge sl, sl, #0x10 @ 037fe670
    ldr r3, [sp, #0x38] @ 037fe674
    ldr fp, [sp, #0x3c] @ 037fe678
    mov r0, #0 @ 037fe67c
.L_037fe680:
    add r4, r4, r8 @ 037fe680
    add r5, r5, sb @ 037fe684
    add r6, r6, r3 @ 037fe688
    add r7, r7, fp @ 037fe68c
    strh r0, [ip], #2 @ 037fe690
    subs lr, lr, #0x100 @ 037fe694
    bgt .L_037fe680 @ 037fe698
    mov fp, #0 @ 037fe69c
    asr r1, sl, #0x10 @ 037fe6a0
    ldr r3, [sp, #0x24] @ 037fe6a4
    bic fp, r5, #0x8000 @ 037fe6a8
    add fp, fp, r1, lsl #15 @ 037fe6ac
    lsr fp, fp, #0x10 @ 037fe6b0
    bic fp, fp, #0xfc00 @ 037fe6b4
    ldr r2, [sb, fp, lsl #2] @ 037fe6b8
    mov fp, #0 @ 037fe6bc
    add r2, r3, r2, lsl #1 @ 037fe6c0
    cmp r2, #0x3400 @ 037fe6c4
    ldrshlt fp, [r8, r2] @ 037fe6c8
    b .L_03800e34 @ 037fe6cc
@ arm7_dispatch_037fe6d0 at 0x037fe6d0
    cmp lr, #0x200 @ 037fe6d0
    lsl sl, sl, #0x10 @ 037fe6d4
    lslge sl, sl, #0x10 @ 037fe6d8
.L_037fe6dc:
    mov r0, #0 @ 037fe6dc
    ldr r3, [sp, #0x28] @ 037fe6e0
    lsr r1, r6, #0x10 @ 037fe6e4
    bic r1, r1, #0xfc00 @ 037fe6e8
    ldr r2, [sb, r1, lsl #2] @ 037fe6ec
    mov r1, #0 @ 037fe6f0
    add r2, r3, r2, lsl #1 @ 037fe6f4
    cmp r2, #0x3400 @ 037fe6f8
    ldrshlt r1, [r8, r2] @ 037fe6fc
    add r1, r1, fp @ 037fe700
    ldr r3, [sp, #0x2c] @ 037fe704
    bic r0, r7, #0x8000 @ 037fe708
    add r0, r0, r1, lsl #15 @ 037fe70c
    lsr r0, r0, #0x10 @ 037fe710
    bic r0, r0, #0xfc00 @ 037fe714
    ldr r2, [sb, r0, lsl #2] @ 037fe718
    mov r0, #0 @ 037fe71c
    add r2, r3, r2, lsl #1 @ 037fe720
    cmp r2, #0x3400 @ 037fe724
    ldrshlt r0, [r8, r2] @ 037fe728
    asr r1, sl, #0x10 @ 037fe72c
    ldr r3, [sp, #0x24] @ 037fe730
    bic fp, r5, #0x8000 @ 037fe734
    add fp, fp, r1, lsl #15 @ 037fe738
    lsr fp, fp, #0x10 @ 037fe73c
    bic fp, fp, #0xfc00 @ 037fe740
    ldr r2, [sb, fp, lsl #2] @ 037fe744
    mov fp, #0 @ 037fe748
    add r2, r3, r2, lsl #1 @ 037fe74c
    cmp r2, #0x3400 @ 037fe750
    ldrshlt fp, [r8, r2] @ 037fe754
    ldr r1, [sp, #0x30] @ 037fe758
    ldr r2, [sp, #0x34] @ 037fe75c
    add r4, r4, r1 @ 037fe760
    add r5, r5, r2 @ 037fe764
    ldr r1, [sp, #0x38] @ 037fe768
    ldr r2, [sp, #0x3c] @ 037fe76c
    add r6, r6, r1 @ 037fe770
    add r7, r7, r2 @ 037fe774
    strh r0, [ip], #2 @ 037fe778
    subs lr, lr, #0x100 @ 037fe77c
    bgt .L_037fe6dc @ 037fe780
    b .L_03800e34 @ 037fe784
@ arm7_dispatch_037fe788 at 0x037fe788
    ldr r0, [sp, #0x30] @ 037fe788
    ldr fp, [sp, #0x38] @ 037fe78c
.L_037fe790:
    ands r2, lr, #0xf @ 037fe790
    addne r1, sl, sl, asr #16 @ 037fe794
    rsbne r2, r2, #0x10 @ 037fe798
    lslne r1, r1, #0x10 @ 037fe79c
    asrne r2, r1, r2 @ 037fe7a0
    ldr r3, [sp, #0x20] @ 037fe7a4
    bic r1, r4, #0x8000 @ 037fe7a8
    add r1, r1, r2 @ 037fe7ac
    lsr r1, r1, #0x10 @ 037fe7b0
    bic r1, r1, #0xfc00 @ 037fe7b4
    ldr r2, [sb, r1, lsl #2] @ 037fe7b8
    mov r1, #0 @ 037fe7bc
    add r2, r3, r2, lsl #1 @ 037fe7c0
    cmp r2, #0x3400 @ 037fe7c4
    ldrhlt r1, [r8, r2] @ 037fe7c8
    orr sl, r1, sl, lsl #16 @ 037fe7cc
    ldr r3, [sp, #0x34] @ 037fe7d0
    add r4, r4, r0 @ 037fe7d4
    add r5, r5, r3 @ 037fe7d8
    ldr r3, [sp, #0x3c] @ 037fe7dc
    add r6, r6, fp @ 037fe7e0
    add r7, r7, r3 @ 037fe7e4
    mov r1, #0 @ 037fe7e8
    strh r1, [ip], #2 @ 037fe7ec
    subs lr, lr, #0x100 @ 037fe7f0
    bgt .L_037fe790 @ 037fe7f4
    mov fp, #0 @ 037fe7f8
    asr r1, sl, #0x10 @ 037fe7fc
    ldr r3, [sp, #0x24] @ 037fe800
    bic fp, r5, #0x8000 @ 037fe804
    add fp, fp, r1, lsl #15 @ 037fe808
    lsr fp, fp, #0x10 @ 037fe80c
    bic fp, fp, #0xfc00 @ 037fe810
    ldr r2, [sb, fp, lsl #2] @ 037fe814
    mov fp, #0 @ 037fe818
    add r2, r3, r2, lsl #1 @ 037fe81c
    cmp r2, #0x3400 @ 037fe820
    ldrshlt fp, [r8, r2] @ 037fe824
    b .L_03800e34 @ 037fe828
.L_037fe82c:
@ arm7_dispatch_037fe82c at 0x037fe82c
    ands r1, lr, #0xf @ 037fe82c
    addne r2, sl, sl, asr #16 @ 037fe830
    rsbne r1, r1, #0x10 @ 037fe834
    lslne r2, r2, #0x10 @ 037fe838
    asrne r1, r2, r1 @ 037fe83c
    ldr r3, [sp, #0x20] @ 037fe840
    bic r0, r4, #0x8000 @ 037fe844
    add r0, r0, r1 @ 037fe848
    lsr r0, r0, #0x10 @ 037fe84c
    bic r0, r0, #0xfc00 @ 037fe850
    ldr r2, [sb, r0, lsl #2] @ 037fe854
    mov r0, #0 @ 037fe858
    add r2, r3, r2, lsl #1 @ 037fe85c
    cmp r2, #0x3400 @ 037fe860
    ldrhlt r0, [r8, r2] @ 037fe864
    orr sl, r0, sl, lsl #16 @ 037fe868
    mov r0, #0 @ 037fe86c
    ldr r3, [sp, #0x28] @ 037fe870
    lsr r1, r6, #0x10 @ 037fe874
    bic r1, r1, #0xfc00 @ 037fe878
    ldr r2, [sb, r1, lsl #2] @ 037fe87c
    mov r1, #0 @ 037fe880
    add r2, r3, r2, lsl #1 @ 037fe884
    cmp r2, #0x3400 @ 037fe888
    ldrshlt r1, [r8, r2] @ 037fe88c
    add r1, r1, fp @ 037fe890
    ldr r3, [sp, #0x2c] @ 037fe894
    bic r0, r7, #0x8000 @ 037fe898
    add r0, r0, r1, lsl #15 @ 037fe89c
    lsr r0, r0, #0x10 @ 037fe8a0
    bic r0, r0, #0xfc00 @ 037fe8a4
    ldr r2, [sb, r0, lsl #2] @ 037fe8a8
    mov r0, #0 @ 037fe8ac
    add r2, r3, r2, lsl #1 @ 037fe8b0
    cmp r2, #0x3400 @ 037fe8b4
    ldrshlt r0, [r8, r2] @ 037fe8b8
    asr r1, sl, #0x10 @ 037fe8bc
    ldr r3, [sp, #0x24] @ 037fe8c0
    bic fp, r5, #0x8000 @ 037fe8c4
    add fp, fp, r1, lsl #15 @ 037fe8c8
    lsr fp, fp, #0x10 @ 037fe8cc
    bic fp, fp, #0xfc00 @ 037fe8d0
    ldr r2, [sb, fp, lsl #2] @ 037fe8d4
    mov fp, #0 @ 037fe8d8
    add r2, r3, r2, lsl #1 @ 037fe8dc
    cmp r2, #0x3400 @ 037fe8e0
    ldrshlt fp, [r8, r2] @ 037fe8e4
    ldr r1, [sp, #0x30] @ 037fe8e8
    ldr r2, [sp, #0x34] @ 037fe8ec
    add r4, r4, r1 @ 037fe8f0
    add r5, r5, r2 @ 037fe8f4
    ldr r1, [sp, #0x38] @ 037fe8f8
    ldr r2, [sp, #0x3c] @ 037fe8fc
    add r6, r6, r1 @ 037fe900
    add r7, r7, r2 @ 037fe904
    strh r0, [ip], #2 @ 037fe908
    subs lr, lr, #0x100 @ 037fe90c
    bgt .L_037fe82c @ 037fe910
    b .L_03800e34 @ 037fe914
@ arm7_dispatch_037fe918 at 0x037fe918
    cmp lr, #0x200 @ 037fe918
    lsl sl, sl, #0x10 @ 037fe91c
    lslge sl, sl, #0x10 @ 037fe920
.L_037fe924:
    mov r0, #0 @ 037fe924
    ldr r1, [sp, #0x30] @ 037fe928
    ldr r2, [sp, #0x34] @ 037fe92c
    add r4, r4, r1 @ 037fe930
    add r5, r5, r2 @ 037fe934
    ldr r1, [sp, #0x38] @ 037fe938
    ldr r2, [sp, #0x3c] @ 037fe93c
    add r6, r6, r1 @ 037fe940
    add r7, r7, r2 @ 037fe944
    strh r0, [ip], #2 @ 037fe948
    subs lr, lr, #0x100 @ 037fe94c
    bgt .L_037fe924 @ 037fe950
    b .L_03800e34 @ 037fe954
.L_037fe958:
@ arm7_dispatch_037fe958 at 0x037fe958
    ands r1, lr, #0xf @ 037fe958
    addne r2, sl, sl, asr #16 @ 037fe95c
    rsbne r1, r1, #0x10 @ 037fe960
    lslne r2, r2, #0x10 @ 037fe964
    asrne r1, r2, r1 @ 037fe968
    ldr r3, [sp, #0x20] @ 037fe96c
    bic r0, r4, #0x8000 @ 037fe970
    add r0, r0, r1 @ 037fe974
    lsr r0, r0, #0x10 @ 037fe978
    bic r0, r0, #0xfc00 @ 037fe97c
    ldr r2, [sb, r0, lsl #2] @ 037fe980
    mov r0, #0 @ 037fe984
    add r2, r3, r2, lsl #1 @ 037fe988
    cmp r2, #0x3400 @ 037fe98c
    ldrhlt r0, [r8, r2] @ 037fe990
    orr sl, r0, sl, lsl #16 @ 037fe994
    mov r0, #0 @ 037fe998
    ldr r1, [sp, #0x30] @ 037fe99c
    ldr r2, [sp, #0x34] @ 037fe9a0
    add r4, r4, r1 @ 037fe9a4
    add r5, r5, r2 @ 037fe9a8
    ldr r1, [sp, #0x38] @ 037fe9ac
    ldr r2, [sp, #0x3c] @ 037fe9b0
    add r6, r6, r1 @ 037fe9b4
    add r7, r7, r2 @ 037fe9b8
    strh r0, [ip], #2 @ 037fe9bc
    subs lr, lr, #0x100 @ 037fe9c0
    bgt .L_037fe958 @ 037fe9c4
    b .L_03800e34 @ 037fe9c8
@ arm7_dispatch_037fe9cc at 0x037fe9cc
    cmp lr, #0x200 @ 037fe9cc
    lsl sl, sl, #0x10 @ 037fe9d0
    lslge sl, sl, #0x10 @ 037fe9d4
.L_037fe9d8:
    mov r0, #0 @ 037fe9d8
    ldr r3, [sp, #0x2c] @ 037fe9dc
    lsr r0, r7, #0x10 @ 037fe9e0
    bic r0, r0, #0xfc00 @ 037fe9e4
    ldr r2, [sb, r0, lsl #2] @ 037fe9e8
    mov r0, #0 @ 037fe9ec
    add r2, r3, r2, lsl #1 @ 037fe9f0
    cmp r2, #0x3400 @ 037fe9f4
    ldrshlt r0, [r8, r2] @ 037fe9f8
    ldr r1, [sp, #0x30] @ 037fe9fc
    ldr r2, [sp, #0x34] @ 037fea00
    add r4, r4, r1 @ 037fea04
    add r5, r5, r2 @ 037fea08
    ldr r1, [sp, #0x38] @ 037fea0c
    ldr r2, [sp, #0x3c] @ 037fea10
    add r6, r6, r1 @ 037fea14
    add r7, r7, r2 @ 037fea18
    strh r0, [ip], #2 @ 037fea1c
    subs lr, lr, #0x100 @ 037fea20
    bgt .L_037fe9d8 @ 037fea24
    b .L_03800e34 @ 037fea28
.L_037fea2c:
@ arm7_dispatch_037fea2c at 0x037fea2c
    ands r1, lr, #0xf @ 037fea2c
    addne r2, sl, sl, asr #16 @ 037fea30
    rsbne r1, r1, #0x10 @ 037fea34
    lslne r2, r2, #0x10 @ 037fea38
    asrne r1, r2, r1 @ 037fea3c
    ldr r3, [sp, #0x20] @ 037fea40
    bic r0, r4, #0x8000 @ 037fea44
    add r0, r0, r1 @ 037fea48
    lsr r0, r0, #0x10 @ 037fea4c
    bic r0, r0, #0xfc00 @ 037fea50
    ldr r2, [sb, r0, lsl #2] @ 037fea54
    mov r0, #0 @ 037fea58
    add r2, r3, r2, lsl #1 @ 037fea5c
    cmp r2, #0x3400 @ 037fea60
    ldrhlt r0, [r8, r2] @ 037fea64
    orr sl, r0, sl, lsl #16 @ 037fea68
    mov r0, #0 @ 037fea6c
    ldr r3, [sp, #0x2c] @ 037fea70
    lsr r0, r7, #0x10 @ 037fea74
    bic r0, r0, #0xfc00 @ 037fea78
    ldr r2, [sb, r0, lsl #2] @ 037fea7c
    mov r0, #0 @ 037fea80
    add r2, r3, r2, lsl #1 @ 037fea84
    cmp r2, #0x3400 @ 037fea88
    ldrshlt r0, [r8, r2] @ 037fea8c
    ldr r1, [sp, #0x30] @ 037fea90
    ldr r2, [sp, #0x34] @ 037fea94
    add r4, r4, r1 @ 037fea98
    add r5, r5, r2 @ 037fea9c
    ldr r1, [sp, #0x38] @ 037feaa0
    ldr r2, [sp, #0x3c] @ 037feaa4
    add r6, r6, r1 @ 037feaa8
    add r7, r7, r2 @ 037feaac
    strh r0, [ip], #2 @ 037feab0
    subs lr, lr, #0x100 @ 037feab4
    bgt .L_037fea2c @ 037feab8
    b .L_03800e34 @ 037feabc
@ arm7_dispatch_037feac0 at 0x037feac0
    cmp lr, #0x200 @ 037feac0
    lsl sl, sl, #0x10 @ 037feac4
    lslge sl, sl, #0x10 @ 037feac8
.L_037feacc:
    mov r0, #0 @ 037feacc
    asr r1, sl, #0x10 @ 037fead0
    ldr r3, [sp, #0x24] @ 037fead4
    bic r0, r5, #0x8000 @ 037fead8
    add r0, r0, r1, lsl #15 @ 037feadc
    lsr r0, r0, #0x10 @ 037feae0
    bic r0, r0, #0xfc00 @ 037feae4
    ldr r2, [sb, r0, lsl #2] @ 037feae8
    mov r0, #0 @ 037feaec
    add r2, r3, r2, lsl #1 @ 037feaf0
    cmp r2, #0x3400 @ 037feaf4
    ldrshlt r0, [r8, r2] @ 037feaf8
    ldr r1, [sp, #0x30] @ 037feafc
    ldr r2, [sp, #0x34] @ 037feb00
    add r4, r4, r1 @ 037feb04
    add r5, r5, r2 @ 037feb08
    ldr r1, [sp, #0x38] @ 037feb0c
    ldr r2, [sp, #0x3c] @ 037feb10
    add r6, r6, r1 @ 037feb14
    add r7, r7, r2 @ 037feb18
    strh r0, [ip], #2 @ 037feb1c
    subs lr, lr, #0x100 @ 037feb20
    bgt .L_037feacc @ 037feb24
    b .L_03800e34 @ 037feb28
.L_037feb2c:
@ arm7_dispatch_037feb2c at 0x037feb2c
    ands r1, lr, #0xf @ 037feb2c
    addne r2, sl, sl, asr #16 @ 037feb30
    rsbne r1, r1, #0x10 @ 037feb34
    lslne r2, r2, #0x10 @ 037feb38
    asrne r1, r2, r1 @ 037feb3c
    ldr r3, [sp, #0x20] @ 037feb40
    bic r0, r4, #0x8000 @ 037feb44
    add r0, r0, r1 @ 037feb48
    lsr r0, r0, #0x10 @ 037feb4c
    bic r0, r0, #0xfc00 @ 037feb50
    ldr r2, [sb, r0, lsl #2] @ 037feb54
    mov r0, #0 @ 037feb58
    add r2, r3, r2, lsl #1 @ 037feb5c
    cmp r2, #0x3400 @ 037feb60
    ldrhlt r0, [r8, r2] @ 037feb64
    orr sl, r0, sl, lsl #16 @ 037feb68
    mov r0, #0 @ 037feb6c
    asr r1, sl, #0x10 @ 037feb70
    ldr r3, [sp, #0x24] @ 037feb74
    bic r0, r5, #0x8000 @ 037feb78
    add r0, r0, r1, lsl #15 @ 037feb7c
    lsr r0, r0, #0x10 @ 037feb80
    bic r0, r0, #0xfc00 @ 037feb84
    ldr r2, [sb, r0, lsl #2] @ 037feb88
    mov r0, #0 @ 037feb8c
    add r2, r3, r2, lsl #1 @ 037feb90
    cmp r2, #0x3400 @ 037feb94
    ldrshlt r0, [r8, r2] @ 037feb98
    ldr r1, [sp, #0x30] @ 037feb9c
    ldr r2, [sp, #0x34] @ 037feba0
    add r4, r4, r1 @ 037feba4
    add r5, r5, r2 @ 037feba8
    ldr r1, [sp, #0x38] @ 037febac
    ldr r2, [sp, #0x3c] @ 037febb0
    add r6, r6, r1 @ 037febb4
    add r7, r7, r2 @ 037febb8
    strh r0, [ip], #2 @ 037febbc
    subs lr, lr, #0x100 @ 037febc0
    bgt .L_037feb2c @ 037febc4
    b .L_03800e34 @ 037febc8
@ arm7_dispatch_037febcc at 0x037febcc
    cmp lr, #0x200 @ 037febcc
    lsl sl, sl, #0x10 @ 037febd0
    lslge sl, sl, #0x10 @ 037febd4
.L_037febd8:
    mov r0, #0 @ 037febd8
    asr r1, sl, #0x10 @ 037febdc
    ldr r3, [sp, #0x24] @ 037febe0
    bic r0, r5, #0x8000 @ 037febe4
    add r0, r0, r1, lsl #15 @ 037febe8
    lsr r0, r0, #0x10 @ 037febec
    bic r0, r0, #0xfc00 @ 037febf0
    ldr r2, [sb, r0, lsl #2] @ 037febf4
    mov r0, #0 @ 037febf8
    add r2, r3, r2, lsl #1 @ 037febfc
    cmp r2, #0x3400 @ 037fec00
    ldrshlt r0, [r8, r2] @ 037fec04
    ldr r3, [sp, #0x2c] @ 037fec08
    lsr r1, r7, #0x10 @ 037fec0c
    bic r1, r1, #0xfc00 @ 037fec10
    ldr r2, [sb, r1, lsl #2] @ 037fec14
    mov r1, #0 @ 037fec18
    add r2, r3, r2, lsl #1 @ 037fec1c
    cmp r2, #0x3400 @ 037fec20
    ldrshlt r1, [r8, r2] @ 037fec24
    add r0, r0, r1 @ 037fec28
    ldr r1, [sp, #0x30] @ 037fec2c
    ldr r2, [sp, #0x34] @ 037fec30
    add r4, r4, r1 @ 037fec34
    add r5, r5, r2 @ 037fec38
    ldr r1, [sp, #0x38] @ 037fec3c
    ldr r2, [sp, #0x3c] @ 037fec40
    add r6, r6, r1 @ 037fec44
    add r7, r7, r2 @ 037fec48
    strh r0, [ip], #2 @ 037fec4c
    subs lr, lr, #0x100 @ 037fec50
    bgt .L_037febd8 @ 037fec54
    b .L_03800e34 @ 037fec58
.L_037fec5c:
@ arm7_dispatch_037fec5c at 0x037fec5c
    ands r1, lr, #0xf @ 037fec5c
    addne r2, sl, sl, asr #16 @ 037fec60
    rsbne r1, r1, #0x10 @ 037fec64
    lslne r2, r2, #0x10 @ 037fec68
    asrne r1, r2, r1 @ 037fec6c
    ldr r3, [sp, #0x20] @ 037fec70
    bic r0, r4, #0x8000 @ 037fec74
    add r0, r0, r1 @ 037fec78
    lsr r0, r0, #0x10 @ 037fec7c
    bic r0, r0, #0xfc00 @ 037fec80
    ldr r2, [sb, r0, lsl #2] @ 037fec84
    mov r0, #0 @ 037fec88
    add r2, r3, r2, lsl #1 @ 037fec8c
    cmp r2, #0x3400 @ 037fec90
    ldrhlt r0, [r8, r2] @ 037fec94
    orr sl, r0, sl, lsl #16 @ 037fec98
    mov r0, #0 @ 037fec9c
    asr r1, sl, #0x10 @ 037feca0
    ldr r3, [sp, #0x24] @ 037feca4
    bic r0, r5, #0x8000 @ 037feca8
    add r0, r0, r1, lsl #15 @ 037fecac
    lsr r0, r0, #0x10 @ 037fecb0
    bic r0, r0, #0xfc00 @ 037fecb4
    ldr r2, [sb, r0, lsl #2] @ 037fecb8
    mov r0, #0 @ 037fecbc
    add r2, r3, r2, lsl #1 @ 037fecc0
    cmp r2, #0x3400 @ 037fecc4
    ldrshlt r0, [r8, r2] @ 037fecc8
    ldr r3, [sp, #0x2c] @ 037feccc
    lsr r1, r7, #0x10 @ 037fecd0
    bic r1, r1, #0xfc00 @ 037fecd4
    ldr r2, [sb, r1, lsl #2] @ 037fecd8
    mov r1, #0 @ 037fecdc
    add r2, r3, r2, lsl #1 @ 037fece0
    cmp r2, #0x3400 @ 037fece4
    ldrshlt r1, [r8, r2] @ 037fece8
    add r0, r0, r1 @ 037fecec
    ldr r1, [sp, #0x30] @ 037fecf0
    ldr r2, [sp, #0x34] @ 037fecf4
    add r4, r4, r1 @ 037fecf8
    add r5, r5, r2 @ 037fecfc
    ldr r1, [sp, #0x38] @ 037fed00
    ldr r2, [sp, #0x3c] @ 037fed04
    add r6, r6, r1 @ 037fed08
    add r7, r7, r2 @ 037fed0c
    strh r0, [ip], #2 @ 037fed10
    subs lr, lr, #0x100 @ 037fed14
    bgt .L_037fec5c @ 037fed18
    b .L_03800e34 @ 037fed1c
@ arm7_dispatch_037fed20 at 0x037fed20
    cmp lr, #0x200 @ 037fed20
    lsl sl, sl, #0x10 @ 037fed24
    lslge sl, sl, #0x10 @ 037fed28
.L_037fed2c:
    mov r0, #0 @ 037fed2c
    ldr r1, [sp, #0x30] @ 037fed30
    ldr r2, [sp, #0x34] @ 037fed34
    add r4, r4, r1 @ 037fed38
    add r5, r5, r2 @ 037fed3c
    ldr r1, [sp, #0x38] @ 037fed40
    ldr r2, [sp, #0x3c] @ 037fed44
    add r6, r6, r1 @ 037fed48
    add r7, r7, r2 @ 037fed4c
    strh r0, [ip], #2 @ 037fed50
    subs lr, lr, #0x100 @ 037fed54
    bgt .L_037fed2c @ 037fed58
    b .L_03800e34 @ 037fed5c
.L_037fed60:
@ arm7_dispatch_037fed60 at 0x037fed60
    ands r1, lr, #0xf @ 037fed60
    addne r2, sl, sl, asr #16 @ 037fed64
    rsbne r1, r1, #0x10 @ 037fed68
    lslne r2, r2, #0x10 @ 037fed6c
    asrne r1, r2, r1 @ 037fed70
    ldr r3, [sp, #0x20] @ 037fed74
    bic r0, r4, #0x8000 @ 037fed78
    add r0, r0, r1 @ 037fed7c
    lsr r0, r0, #0x10 @ 037fed80
    bic r0, r0, #0xfc00 @ 037fed84
    ldr r2, [sb, r0, lsl #2] @ 037fed88
    mov r0, #0 @ 037fed8c
    add r2, r3, r2, lsl #1 @ 037fed90
    cmp r2, #0x3400 @ 037fed94
    ldrhlt r0, [r8, r2] @ 037fed98
    orr sl, r0, sl, lsl #16 @ 037fed9c
    mov r0, #0 @ 037feda0
    ldr r1, [sp, #0x30] @ 037feda4
    ldr r2, [sp, #0x34] @ 037feda8
    add r4, r4, r1 @ 037fedac
    add r5, r5, r2 @ 037fedb0
    ldr r1, [sp, #0x38] @ 037fedb4
    ldr r2, [sp, #0x3c] @ 037fedb8
    add r6, r6, r1 @ 037fedbc
    add r7, r7, r2 @ 037fedc0
    strh r0, [ip], #2 @ 037fedc4
    subs lr, lr, #0x100 @ 037fedc8
    bgt .L_037fed60 @ 037fedcc
    b .L_03800e34 @ 037fedd0
@ arm7_dispatch_037fedd4 at 0x037fedd4
    cmp lr, #0x200 @ 037fedd4
    lsl sl, sl, #0x10 @ 037fedd8
    lslge sl, sl, #0x10 @ 037feddc
.L_037fede0:
    mov r0, #0 @ 037fede0
    ldr r3, [sp, #0x28] @ 037fede4
    lsr r1, r6, #0x10 @ 037fede8
    bic r1, r1, #0xfc00 @ 037fedec
    ldr r2, [sb, r1, lsl #2] @ 037fedf0
    mov r1, #0 @ 037fedf4
    add r2, r3, r2, lsl #1 @ 037fedf8
    cmp r2, #0x3400 @ 037fedfc
    ldrshlt r1, [r8, r2] @ 037fee00
    ldr r3, [sp, #0x2c] @ 037fee04
    bic r0, r7, #0x8000 @ 037fee08
    add r0, r0, r1, lsl #15 @ 037fee0c
    lsr r0, r0, #0x10 @ 037fee10
    bic r0, r0, #0xfc00 @ 037fee14
    ldr r2, [sb, r0, lsl #2] @ 037fee18
    mov r0, #0 @ 037fee1c
    add r2, r3, r2, lsl #1 @ 037fee20
    cmp r2, #0x3400 @ 037fee24
    ldrshlt r0, [r8, r2] @ 037fee28
    ldr r1, [sp, #0x30] @ 037fee2c
    ldr r2, [sp, #0x34] @ 037fee30
    add r4, r4, r1 @ 037fee34
    add r5, r5, r2 @ 037fee38
    ldr r1, [sp, #0x38] @ 037fee3c
    ldr r2, [sp, #0x3c] @ 037fee40
    add r6, r6, r1 @ 037fee44
    add r7, r7, r2 @ 037fee48
    strh r0, [ip], #2 @ 037fee4c
    subs lr, lr, #0x100 @ 037fee50
    bgt .L_037fede0 @ 037fee54
    b .L_03800e34 @ 037fee58
.L_037fee5c:
@ arm7_dispatch_037fee5c at 0x037fee5c
    ands r1, lr, #0xf @ 037fee5c
    addne r2, sl, sl, asr #16 @ 037fee60
    rsbne r1, r1, #0x10 @ 037fee64
    lslne r2, r2, #0x10 @ 037fee68
    asrne r1, r2, r1 @ 037fee6c
    ldr r3, [sp, #0x20] @ 037fee70
    bic r0, r4, #0x8000 @ 037fee74
    add r0, r0, r1 @ 037fee78
    lsr r0, r0, #0x10 @ 037fee7c
    bic r0, r0, #0xfc00 @ 037fee80
    ldr r2, [sb, r0, lsl #2] @ 037fee84
    mov r0, #0 @ 037fee88
    add r2, r3, r2, lsl #1 @ 037fee8c
    cmp r2, #0x3400 @ 037fee90
    ldrhlt r0, [r8, r2] @ 037fee94
    orr sl, r0, sl, lsl #16 @ 037fee98
    mov r0, #0 @ 037fee9c
    ldr r3, [sp, #0x28] @ 037feea0
    lsr r1, r6, #0x10 @ 037feea4
    bic r1, r1, #0xfc00 @ 037feea8
    ldr r2, [sb, r1, lsl #2] @ 037feeac
    mov r1, #0 @ 037feeb0
    add r2, r3, r2, lsl #1 @ 037feeb4
    cmp r2, #0x3400 @ 037feeb8
    ldrshlt r1, [r8, r2] @ 037feebc
    ldr r3, [sp, #0x2c] @ 037feec0
    bic r0, r7, #0x8000 @ 037feec4
    add r0, r0, r1, lsl #15 @ 037feec8
    lsr r0, r0, #0x10 @ 037feecc
    bic r0, r0, #0xfc00 @ 037feed0
    ldr r2, [sb, r0, lsl #2] @ 037feed4
    mov r0, #0 @ 037feed8
    add r2, r3, r2, lsl #1 @ 037feedc
    cmp r2, #0x3400 @ 037feee0
    ldrshlt r0, [r8, r2] @ 037feee4
    ldr r1, [sp, #0x30] @ 037feee8
    ldr r2, [sp, #0x34] @ 037feeec
    add r4, r4, r1 @ 037feef0
    add r5, r5, r2 @ 037feef4
    ldr r1, [sp, #0x38] @ 037feef8
    ldr r2, [sp, #0x3c] @ 037feefc
    add r6, r6, r1 @ 037fef00
    add r7, r7, r2 @ 037fef04
    strh r0, [ip], #2 @ 037fef08
    subs lr, lr, #0x100 @ 037fef0c
    bgt .L_037fee5c @ 037fef10
    b .L_03800e34 @ 037fef14
@ arm7_dispatch_037fef18 at 0x037fef18
    cmp lr, #0x200 @ 037fef18
    lsl sl, sl, #0x10 @ 037fef1c
    lslge sl, sl, #0x10 @ 037fef20
.L_037fef24:
    mov r0, #0 @ 037fef24
    asr r1, sl, #0x10 @ 037fef28
    ldr r3, [sp, #0x24] @ 037fef2c
    bic r0, r5, #0x8000 @ 037fef30
    add r0, r0, r1, lsl #15 @ 037fef34
    lsr r0, r0, #0x10 @ 037fef38
    bic r0, r0, #0xfc00 @ 037fef3c
    ldr r2, [sb, r0, lsl #2] @ 037fef40
    mov r0, #0 @ 037fef44
    add r2, r3, r2, lsl #1 @ 037fef48
    cmp r2, #0x3400 @ 037fef4c
    ldrshlt r0, [r8, r2] @ 037fef50
    ldr r1, [sp, #0x30] @ 037fef54
    ldr r2, [sp, #0x34] @ 037fef58
    add r4, r4, r1 @ 037fef5c
    add r5, r5, r2 @ 037fef60
    ldr r1, [sp, #0x38] @ 037fef64
    ldr r2, [sp, #0x3c] @ 037fef68
    add r6, r6, r1 @ 037fef6c
    add r7, r7, r2 @ 037fef70
    strh r0, [ip], #2 @ 037fef74
    subs lr, lr, #0x100 @ 037fef78
    bgt .L_037fef24 @ 037fef7c
    b .L_03800e34 @ 037fef80
.L_037fef84:
@ arm7_dispatch_037fef84 at 0x037fef84
    ands r1, lr, #0xf @ 037fef84
    addne r2, sl, sl, asr #16 @ 037fef88
    rsbne r1, r1, #0x10 @ 037fef8c
    lslne r2, r2, #0x10 @ 037fef90
    asrne r1, r2, r1 @ 037fef94
    ldr r3, [sp, #0x20] @ 037fef98
    bic r0, r4, #0x8000 @ 037fef9c
    add r0, r0, r1 @ 037fefa0
    lsr r0, r0, #0x10 @ 037fefa4
    bic r0, r0, #0xfc00 @ 037fefa8
    ldr r2, [sb, r0, lsl #2] @ 037fefac
    mov r0, #0 @ 037fefb0
    add r2, r3, r2, lsl #1 @ 037fefb4
    cmp r2, #0x3400 @ 037fefb8
    ldrhlt r0, [r8, r2] @ 037fefbc
    orr sl, r0, sl, lsl #16 @ 037fefc0
    mov r0, #0 @ 037fefc4
    asr r1, sl, #0x10 @ 037fefc8
    ldr r3, [sp, #0x24] @ 037fefcc
    bic r0, r5, #0x8000 @ 037fefd0
    add r0, r0, r1, lsl #15 @ 037fefd4
    lsr r0, r0, #0x10 @ 037fefd8
    bic r0, r0, #0xfc00 @ 037fefdc
    ldr r2, [sb, r0, lsl #2] @ 037fefe0
    mov r0, #0 @ 037fefe4
    add r2, r3, r2, lsl #1 @ 037fefe8
    cmp r2, #0x3400 @ 037fefec
    ldrshlt r0, [r8, r2] @ 037feff0
    ldr r1, [sp, #0x30] @ 037feff4
    ldr r2, [sp, #0x34] @ 037feff8
    add r4, r4, r1 @ 037feffc
    add r5, r5, r2 @ 037ff000
    ldr r1, [sp, #0x38] @ 037ff004
    ldr r2, [sp, #0x3c] @ 037ff008
    add r6, r6, r1 @ 037ff00c
    add r7, r7, r2 @ 037ff010
    strh r0, [ip], #2 @ 037ff014
    subs lr, lr, #0x100 @ 037ff018
    bgt .L_037fef84 @ 037ff01c
    b .L_03800e34 @ 037ff020
@ arm7_dispatch_037ff024 at 0x037ff024
    cmp lr, #0x200 @ 037ff024
    lsl sl, sl, #0x10 @ 037ff028
    lslge sl, sl, #0x10 @ 037ff02c
.L_037ff030:
    mov r0, #0 @ 037ff030
    asr r1, sl, #0x10 @ 037ff034
    ldr r3, [sp, #0x24] @ 037ff038
    bic r0, r5, #0x8000 @ 037ff03c
    add r0, r0, r1, lsl #15 @ 037ff040
    lsr r0, r0, #0x10 @ 037ff044
    bic r0, r0, #0xfc00 @ 037ff048
    ldr r2, [sb, r0, lsl #2] @ 037ff04c
    mov r0, #0 @ 037ff050
    add r2, r3, r2, lsl #1 @ 037ff054
    cmp r2, #0x3400 @ 037ff058
    ldrshlt r0, [r8, r2] @ 037ff05c
    ldr r3, [sp, #0x28] @ 037ff060
    lsr r1, r6, #0x10 @ 037ff064
    bic r1, r1, #0xfc00 @ 037ff068
    ldr r2, [sb, r1, lsl #2] @ 037ff06c
    mov r1, #0 @ 037ff070
    add r2, r3, r2, lsl #1 @ 037ff074
    cmp r2, #0x3400 @ 037ff078
    ldrshlt r1, [r8, r2] @ 037ff07c
    mov r2, r1 @ 037ff080
    ldr r3, [sp, #0x2c] @ 037ff084
    bic r1, r7, #0x8000 @ 037ff088
    add r1, r1, r2, lsl #15 @ 037ff08c
    lsr r1, r1, #0x10 @ 037ff090
    bic r1, r1, #0xfc00 @ 037ff094
    ldr r2, [sb, r1, lsl #2] @ 037ff098
    mov r1, #0 @ 037ff09c
    add r2, r3, r2, lsl #1 @ 037ff0a0
    cmp r2, #0x3400 @ 037ff0a4
    ldrshlt r1, [r8, r2] @ 037ff0a8
    add r0, r0, r1 @ 037ff0ac
    ldr r1, [sp, #0x30] @ 037ff0b0
    ldr r2, [sp, #0x34] @ 037ff0b4
    add r4, r4, r1 @ 037ff0b8
    add r5, r5, r2 @ 037ff0bc
    ldr r1, [sp, #0x38] @ 037ff0c0
    ldr r2, [sp, #0x3c] @ 037ff0c4
    add r6, r6, r1 @ 037ff0c8
    add r7, r7, r2 @ 037ff0cc
    strh r0, [ip], #2 @ 037ff0d0
    subs lr, lr, #0x100 @ 037ff0d4
    bgt .L_037ff030 @ 037ff0d8
    b .L_03800e34 @ 037ff0dc
.L_037ff0e0:
@ arm7_dispatch_037ff0e0 at 0x037ff0e0
    ands r1, lr, #0xf @ 037ff0e0
    addne r2, sl, sl, asr #16 @ 037ff0e4
    rsbne r1, r1, #0x10 @ 037ff0e8
    lslne r2, r2, #0x10 @ 037ff0ec
    asrne r1, r2, r1 @ 037ff0f0
    ldr r3, [sp, #0x20] @ 037ff0f4
    bic r0, r4, #0x8000 @ 037ff0f8
    add r0, r0, r1 @ 037ff0fc
    lsr r0, r0, #0x10 @ 037ff100
    bic r0, r0, #0xfc00 @ 037ff104
    ldr r2, [sb, r0, lsl #2] @ 037ff108
    mov r0, #0 @ 037ff10c
    add r2, r3, r2, lsl #1 @ 037ff110
    cmp r2, #0x3400 @ 037ff114
    ldrhlt r0, [r8, r2] @ 037ff118
    orr sl, r0, sl, lsl #16 @ 037ff11c
    mov r0, #0 @ 037ff120
    asr r1, sl, #0x10 @ 037ff124
    ldr r3, [sp, #0x24] @ 037ff128
    bic r0, r5, #0x8000 @ 037ff12c
    add r0, r0, r1, lsl #15 @ 037ff130
    lsr r0, r0, #0x10 @ 037ff134
    bic r0, r0, #0xfc00 @ 037ff138
    ldr r2, [sb, r0, lsl #2] @ 037ff13c
    mov r0, #0 @ 037ff140
    add r2, r3, r2, lsl #1 @ 037ff144
    cmp r2, #0x3400 @ 037ff148
    ldrshlt r0, [r8, r2] @ 037ff14c
    ldr r3, [sp, #0x28] @ 037ff150
    lsr r1, r6, #0x10 @ 037ff154
    bic r1, r1, #0xfc00 @ 037ff158
    ldr r2, [sb, r1, lsl #2] @ 037ff15c
    mov r1, #0 @ 037ff160
    add r2, r3, r2, lsl #1 @ 037ff164
    cmp r2, #0x3400 @ 037ff168
    ldrshlt r1, [r8, r2] @ 037ff16c
    mov r2, r1 @ 037ff170
    ldr r3, [sp, #0x2c] @ 037ff174
    bic r1, r7, #0x8000 @ 037ff178
    add r1, r1, r2, lsl #15 @ 037ff17c
    lsr r1, r1, #0x10 @ 037ff180
    bic r1, r1, #0xfc00 @ 037ff184
    ldr r2, [sb, r1, lsl #2] @ 037ff188
    mov r1, #0 @ 037ff18c
    add r2, r3, r2, lsl #1 @ 037ff190
    cmp r2, #0x3400 @ 037ff194
    ldrshlt r1, [r8, r2] @ 037ff198
    add r0, r0, r1 @ 037ff19c
    ldr r1, [sp, #0x30] @ 037ff1a0
    ldr r2, [sp, #0x34] @ 037ff1a4
    add r4, r4, r1 @ 037ff1a8
    add r5, r5, r2 @ 037ff1ac
    ldr r1, [sp, #0x38] @ 037ff1b0
    ldr r2, [sp, #0x3c] @ 037ff1b4
    add r6, r6, r1 @ 037ff1b8
    add r7, r7, r2 @ 037ff1bc
    strh r0, [ip], #2 @ 037ff1c0
    subs lr, lr, #0x100 @ 037ff1c4
    bgt .L_037ff0e0 @ 037ff1c8
    b .L_03800e34 @ 037ff1cc
@ arm7_dispatch_037ff1d0 at 0x037ff1d0
    cmp lr, #0x200 @ 037ff1d0
    lsl sl, sl, #0x10 @ 037ff1d4
    lslge sl, sl, #0x10 @ 037ff1d8
.L_037ff1dc:
    mov r0, #0 @ 037ff1dc
    ldr r1, [sp, #0x30] @ 037ff1e0
    ldr r2, [sp, #0x34] @ 037ff1e4
    add r4, r4, r1 @ 037ff1e8
    add r5, r5, r2 @ 037ff1ec
    ldr r1, [sp, #0x38] @ 037ff1f0
    ldr r2, [sp, #0x3c] @ 037ff1f4
    add r6, r6, r1 @ 037ff1f8
    add r7, r7, r2 @ 037ff1fc
    strh r0, [ip], #2 @ 037ff200
    subs lr, lr, #0x100 @ 037ff204
    bgt .L_037ff1dc @ 037ff208
    asr fp, sl, #0x10 @ 037ff20c
    b .L_03800e34 @ 037ff210
.L_037ff214:
@ arm7_dispatch_037ff214 at 0x037ff214
    ands r1, lr, #0xf @ 037ff214
    addne r2, sl, sl, asr #16 @ 037ff218
    rsbne r1, r1, #0x10 @ 037ff21c
    lslne r2, r2, #0x10 @ 037ff220
    asrne r1, r2, r1 @ 037ff224
    ldr r3, [sp, #0x20] @ 037ff228
    bic r0, r4, #0x8000 @ 037ff22c
    add r0, r0, r1 @ 037ff230
    lsr r0, r0, #0x10 @ 037ff234
    bic r0, r0, #0xfc00 @ 037ff238
    ldr r2, [sb, r0, lsl #2] @ 037ff23c
    mov r0, #0 @ 037ff240
    add r2, r3, r2, lsl #1 @ 037ff244
    cmp r2, #0x3400 @ 037ff248
    ldrhlt r0, [r8, r2] @ 037ff24c
    orr sl, r0, sl, lsl #16 @ 037ff250
    mov r0, #0 @ 037ff254
    ldr r1, [sp, #0x30] @ 037ff258
    ldr r2, [sp, #0x34] @ 037ff25c
    add r4, r4, r1 @ 037ff260
    add r5, r5, r2 @ 037ff264
    ldr r1, [sp, #0x38] @ 037ff268
    ldr r2, [sp, #0x3c] @ 037ff26c
    add r6, r6, r1 @ 037ff270
    add r7, r7, r2 @ 037ff274
    strh r0, [ip], #2 @ 037ff278
    subs lr, lr, #0x100 @ 037ff27c
    bgt .L_037ff214 @ 037ff280
    asr fp, sl, #0x10 @ 037ff284
    b .L_03800e34 @ 037ff288
@ arm7_dispatch_037ff28c at 0x037ff28c
    cmp lr, #0x200 @ 037ff28c
    lsl sl, sl, #0x10 @ 037ff290
    lslge sl, sl, #0x10 @ 037ff294
.L_037ff298:
    mov r0, #0 @ 037ff298
    asr fp, sl, #0x10 @ 037ff29c
    ldr r3, [sp, #0x2c] @ 037ff2a0
    bic r0, r7, #0x8000 @ 037ff2a4
    add r0, r0, fp, lsl #15 @ 037ff2a8
    lsr r0, r0, #0x10 @ 037ff2ac
    bic r0, r0, #0xfc00 @ 037ff2b0
    ldr r2, [sb, r0, lsl #2] @ 037ff2b4
    mov r0, #0 @ 037ff2b8
    add r2, r3, r2, lsl #1 @ 037ff2bc
    cmp r2, #0x3400 @ 037ff2c0
    ldrshlt r0, [r8, r2] @ 037ff2c4
    ldr r1, [sp, #0x30] @ 037ff2c8
    ldr r2, [sp, #0x34] @ 037ff2cc
    add r4, r4, r1 @ 037ff2d0
    add r5, r5, r2 @ 037ff2d4
    ldr r1, [sp, #0x38] @ 037ff2d8
    ldr r2, [sp, #0x3c] @ 037ff2dc
    add r6, r6, r1 @ 037ff2e0
    add r7, r7, r2 @ 037ff2e4
    strh r0, [ip], #2 @ 037ff2e8
    subs lr, lr, #0x100 @ 037ff2ec
    bgt .L_037ff298 @ 037ff2f0
    b .L_03800e34 @ 037ff2f4
.L_037ff2f8:
@ arm7_dispatch_037ff2f8 at 0x037ff2f8
    ands r1, lr, #0xf @ 037ff2f8
    addne r2, sl, sl, asr #16 @ 037ff2fc
    rsbne r1, r1, #0x10 @ 037ff300
    lslne r2, r2, #0x10 @ 037ff304
    asrne r1, r2, r1 @ 037ff308
    ldr r3, [sp, #0x20] @ 037ff30c
    bic r0, r4, #0x8000 @ 037ff310
    add r0, r0, r1 @ 037ff314
    lsr r0, r0, #0x10 @ 037ff318
    bic r0, r0, #0xfc00 @ 037ff31c
    ldr r2, [sb, r0, lsl #2] @ 037ff320
    mov r0, #0 @ 037ff324
    add r2, r3, r2, lsl #1 @ 037ff328
    cmp r2, #0x3400 @ 037ff32c
    ldrhlt r0, [r8, r2] @ 037ff330
    orr sl, r0, sl, lsl #16 @ 037ff334
    mov r0, #0 @ 037ff338
    asr fp, sl, #0x10 @ 037ff33c
    ldr r3, [sp, #0x2c] @ 037ff340
    bic r0, r7, #0x8000 @ 037ff344
    add r0, r0, fp, lsl #15 @ 037ff348
    lsr r0, r0, #0x10 @ 037ff34c
    bic r0, r0, #0xfc00 @ 037ff350
    ldr r2, [sb, r0, lsl #2] @ 037ff354
    mov r0, #0 @ 037ff358
    add r2, r3, r2, lsl #1 @ 037ff35c
    cmp r2, #0x3400 @ 037ff360
    ldrshlt r0, [r8, r2] @ 037ff364
    ldr r1, [sp, #0x30] @ 037ff368
    ldr r2, [sp, #0x34] @ 037ff36c
    add r4, r4, r1 @ 037ff370
    add r5, r5, r2 @ 037ff374
    ldr r1, [sp, #0x38] @ 037ff378
    ldr r2, [sp, #0x3c] @ 037ff37c
    add r6, r6, r1 @ 037ff380
    add r7, r7, r2 @ 037ff384
    strh r0, [ip], #2 @ 037ff388
    subs lr, lr, #0x100 @ 037ff38c
    bgt .L_037ff2f8 @ 037ff390
    b .L_03800e34 @ 037ff394
@ arm7_dispatch_037ff398 at 0x037ff398
    cmp lr, #0x200 @ 037ff398
    lsl sl, sl, #0x10 @ 037ff39c
    lslge sl, sl, #0x10 @ 037ff3a0
.L_037ff3a4:
    mov r0, #0 @ 037ff3a4
    asr fp, sl, #0x10 @ 037ff3a8
    ldr r3, [sp, #0x24] @ 037ff3ac
    bic r0, r5, #0x8000 @ 037ff3b0
    add r0, r0, fp, lsl #15 @ 037ff3b4
    lsr r0, r0, #0x10 @ 037ff3b8
    bic r0, r0, #0xfc00 @ 037ff3bc
    ldr r2, [sb, r0, lsl #2] @ 037ff3c0
    mov r0, #0 @ 037ff3c4
    add r2, r3, r2, lsl #1 @ 037ff3c8
    cmp r2, #0x3400 @ 037ff3cc
    ldrshlt r0, [r8, r2] @ 037ff3d0
    ldr r1, [sp, #0x30] @ 037ff3d4
    ldr r2, [sp, #0x34] @ 037ff3d8
    add r4, r4, r1 @ 037ff3dc
    add r5, r5, r2 @ 037ff3e0
    ldr r1, [sp, #0x38] @ 037ff3e4
    ldr r2, [sp, #0x3c] @ 037ff3e8
    add r6, r6, r1 @ 037ff3ec
    add r7, r7, r2 @ 037ff3f0
    strh r0, [ip], #2 @ 037ff3f4
    subs lr, lr, #0x100 @ 037ff3f8
    bgt .L_037ff3a4 @ 037ff3fc
    b .L_03800e34 @ 037ff400
.L_037ff404:
@ arm7_dispatch_037ff404 at 0x037ff404
    ands r1, lr, #0xf @ 037ff404
    addne r2, sl, sl, asr #16 @ 037ff408
    rsbne r1, r1, #0x10 @ 037ff40c
    lslne r2, r2, #0x10 @ 037ff410
    asrne r1, r2, r1 @ 037ff414
    ldr r3, [sp, #0x20] @ 037ff418
    bic r0, r4, #0x8000 @ 037ff41c
    add r0, r0, r1 @ 037ff420
    lsr r0, r0, #0x10 @ 037ff424
    bic r0, r0, #0xfc00 @ 037ff428
    ldr r2, [sb, r0, lsl #2] @ 037ff42c
    mov r0, #0 @ 037ff430
    add r2, r3, r2, lsl #1 @ 037ff434
    cmp r2, #0x3400 @ 037ff438
    ldrhlt r0, [r8, r2] @ 037ff43c
    orr sl, r0, sl, lsl #16 @ 037ff440
    mov r0, #0 @ 037ff444
    asr fp, sl, #0x10 @ 037ff448
    ldr r3, [sp, #0x24] @ 037ff44c
    bic r0, r5, #0x8000 @ 037ff450
    add r0, r0, fp, lsl #15 @ 037ff454
    lsr r0, r0, #0x10 @ 037ff458
    bic r0, r0, #0xfc00 @ 037ff45c
    ldr r2, [sb, r0, lsl #2] @ 037ff460
    mov r0, #0 @ 037ff464
    add r2, r3, r2, lsl #1 @ 037ff468
    cmp r2, #0x3400 @ 037ff46c
    ldrshlt r0, [r8, r2] @ 037ff470
    ldr r1, [sp, #0x30] @ 037ff474
    ldr r2, [sp, #0x34] @ 037ff478
    add r4, r4, r1 @ 037ff47c
    add r5, r5, r2 @ 037ff480
    ldr r1, [sp, #0x38] @ 037ff484
    ldr r2, [sp, #0x3c] @ 037ff488
    add r6, r6, r1 @ 037ff48c
    add r7, r7, r2 @ 037ff490
    strh r0, [ip], #2 @ 037ff494
    subs lr, lr, #0x100 @ 037ff498
    bgt .L_037ff404 @ 037ff49c
    b .L_03800e34 @ 037ff4a0
@ arm7_dispatch_037ff4a4 at 0x037ff4a4
    cmp lr, #0x200 @ 037ff4a4
    lsl sl, sl, #0x10 @ 037ff4a8
    lslge sl, sl, #0x10 @ 037ff4ac
.L_037ff4b0:
    mov r0, #0 @ 037ff4b0
    asr fp, sl, #0x10 @ 037ff4b4
    ldr r3, [sp, #0x24] @ 037ff4b8
    bic r1, r5, #0x8000 @ 037ff4bc
    add r1, r1, fp, lsl #15 @ 037ff4c0
    lsr r1, r1, #0x10 @ 037ff4c4
    bic r1, r1, #0xfc00 @ 037ff4c8
    ldr r2, [sb, r1, lsl #2] @ 037ff4cc
    mov r1, #0 @ 037ff4d0
    add r2, r3, r2, lsl #1 @ 037ff4d4
    cmp r2, #0x3400 @ 037ff4d8
    ldrshlt r1, [r8, r2] @ 037ff4dc
    ldr r3, [sp, #0x2c] @ 037ff4e0
    bic r0, r7, #0x8000 @ 037ff4e4
    add r0, r0, fp, lsl #15 @ 037ff4e8
    lsr r0, r0, #0x10 @ 037ff4ec
    bic r0, r0, #0xfc00 @ 037ff4f0
    ldr r2, [sb, r0, lsl #2] @ 037ff4f4
    mov r0, #0 @ 037ff4f8
    add r2, r3, r2, lsl #1 @ 037ff4fc
    cmp r2, #0x3400 @ 037ff500
    ldrshlt r0, [r8, r2] @ 037ff504
    add r0, r0, r1 @ 037ff508
    ldr r1, [sp, #0x30] @ 037ff50c
    ldr r2, [sp, #0x34] @ 037ff510
    add r4, r4, r1 @ 037ff514
    add r5, r5, r2 @ 037ff518
    ldr r1, [sp, #0x38] @ 037ff51c
    ldr r2, [sp, #0x3c] @ 037ff520
    add r6, r6, r1 @ 037ff524
    add r7, r7, r2 @ 037ff528
    strh r0, [ip], #2 @ 037ff52c
    subs lr, lr, #0x100 @ 037ff530
    bgt .L_037ff4b0 @ 037ff534
    b .L_03800e34 @ 037ff538
.L_037ff53c:
@ arm7_dispatch_037ff53c at 0x037ff53c
    ands r1, lr, #0xf @ 037ff53c
    addne r2, sl, sl, asr #16 @ 037ff540
    rsbne r1, r1, #0x10 @ 037ff544
    lslne r2, r2, #0x10 @ 037ff548
    asrne r1, r2, r1 @ 037ff54c
    ldr r3, [sp, #0x20] @ 037ff550
    bic r0, r4, #0x8000 @ 037ff554
    add r0, r0, r1 @ 037ff558
    lsr r0, r0, #0x10 @ 037ff55c
    bic r0, r0, #0xfc00 @ 037ff560
    ldr r2, [sb, r0, lsl #2] @ 037ff564
    mov r0, #0 @ 037ff568
    add r2, r3, r2, lsl #1 @ 037ff56c
    cmp r2, #0x3400 @ 037ff570
    ldrhlt r0, [r8, r2] @ 037ff574
    orr sl, r0, sl, lsl #16 @ 037ff578
    mov r0, #0 @ 037ff57c
    asr fp, sl, #0x10 @ 037ff580
    ldr r3, [sp, #0x24] @ 037ff584
    bic r1, r5, #0x8000 @ 037ff588
    add r1, r1, fp, lsl #15 @ 037ff58c
    lsr r1, r1, #0x10 @ 037ff590
    bic r1, r1, #0xfc00 @ 037ff594
    ldr r2, [sb, r1, lsl #2] @ 037ff598
    mov r1, #0 @ 037ff59c
    add r2, r3, r2, lsl #1 @ 037ff5a0
    cmp r2, #0x3400 @ 037ff5a4
    ldrshlt r1, [r8, r2] @ 037ff5a8
    ldr r3, [sp, #0x2c] @ 037ff5ac
    bic r0, r7, #0x8000 @ 037ff5b0
    add r0, r0, fp, lsl #15 @ 037ff5b4
    lsr r0, r0, #0x10 @ 037ff5b8
    bic r0, r0, #0xfc00 @ 037ff5bc
    ldr r2, [sb, r0, lsl #2] @ 037ff5c0
    mov r0, #0 @ 037ff5c4
    add r2, r3, r2, lsl #1 @ 037ff5c8
    cmp r2, #0x3400 @ 037ff5cc
    ldrshlt r0, [r8, r2] @ 037ff5d0
    add r0, r0, r1 @ 037ff5d4
    ldr r1, [sp, #0x30] @ 037ff5d8
    ldr r2, [sp, #0x34] @ 037ff5dc
    add r4, r4, r1 @ 037ff5e0
    add r5, r5, r2 @ 037ff5e4
    ldr r1, [sp, #0x38] @ 037ff5e8
    ldr r2, [sp, #0x3c] @ 037ff5ec
    add r6, r6, r1 @ 037ff5f0
    add r7, r7, r2 @ 037ff5f4
    strh r0, [ip], #2 @ 037ff5f8
    subs lr, lr, #0x100 @ 037ff5fc
    bgt .L_037ff53c @ 037ff600
    b .L_03800e34 @ 037ff604
@ arm7_dispatch_037ff608 at 0x037ff608
    cmp lr, #0x200 @ 037ff608
    lsl sl, sl, #0x10 @ 037ff60c
    lslge sl, sl, #0x10 @ 037ff610
.L_037ff614:
    mov r0, #0 @ 037ff614
    ldr r3, [sp, #0x28] @ 037ff618
    bic r0, r6, #0x8000 @ 037ff61c
    add r0, r0, fp, lsl #15 @ 037ff620
    lsr r0, r0, #0x10 @ 037ff624
    bic r0, r0, #0xfc00 @ 037ff628
    ldr r2, [sb, r0, lsl #2] @ 037ff62c
    mov r0, #0 @ 037ff630
    add r2, r3, r2, lsl #1 @ 037ff634
    cmp r2, #0x3400 @ 037ff638
    ldrshlt r0, [r8, r2] @ 037ff63c
    asr fp, sl, #0x10 @ 037ff640
    ldr r1, [sp, #0x30] @ 037ff644
    ldr r2, [sp, #0x34] @ 037ff648
    add r4, r4, r1 @ 037ff64c
    add r5, r5, r2 @ 037ff650
    ldr r1, [sp, #0x38] @ 037ff654
    ldr r2, [sp, #0x3c] @ 037ff658
    add r6, r6, r1 @ 037ff65c
    add r7, r7, r2 @ 037ff660
    strh r0, [ip], #2 @ 037ff664
    subs lr, lr, #0x100 @ 037ff668
    bgt .L_037ff614 @ 037ff66c
    b .L_03800e34 @ 037ff670
.L_037ff674:
@ arm7_dispatch_037ff674 at 0x037ff674
    ands r1, lr, #0xf @ 037ff674
    addne r2, sl, sl, asr #16 @ 037ff678
    rsbne r1, r1, #0x10 @ 037ff67c
    lslne r2, r2, #0x10 @ 037ff680
    asrne r1, r2, r1 @ 037ff684
    ldr r3, [sp, #0x20] @ 037ff688
    bic r0, r4, #0x8000 @ 037ff68c
    add r0, r0, r1 @ 037ff690
    lsr r0, r0, #0x10 @ 037ff694
    bic r0, r0, #0xfc00 @ 037ff698
    ldr r2, [sb, r0, lsl #2] @ 037ff69c
    mov r0, #0 @ 037ff6a0
    add r2, r3, r2, lsl #1 @ 037ff6a4
    cmp r2, #0x3400 @ 037ff6a8
    ldrhlt r0, [r8, r2] @ 037ff6ac
    orr sl, r0, sl, lsl #16 @ 037ff6b0
    mov r0, #0 @ 037ff6b4
    ldr r3, [sp, #0x28] @ 037ff6b8
    bic r0, r6, #0x8000 @ 037ff6bc
    add r0, r0, fp, lsl #15 @ 037ff6c0
    lsr r0, r0, #0x10 @ 037ff6c4
    bic r0, r0, #0xfc00 @ 037ff6c8
    ldr r2, [sb, r0, lsl #2] @ 037ff6cc
    mov r0, #0 @ 037ff6d0
    add r2, r3, r2, lsl #1 @ 037ff6d4
    cmp r2, #0x3400 @ 037ff6d8
    ldrshlt r0, [r8, r2] @ 037ff6dc
    asr fp, sl, #0x10 @ 037ff6e0
    ldr r1, [sp, #0x30] @ 037ff6e4
    ldr r2, [sp, #0x34] @ 037ff6e8
    add r4, r4, r1 @ 037ff6ec
    add r5, r5, r2 @ 037ff6f0
    ldr r1, [sp, #0x38] @ 037ff6f4
    ldr r2, [sp, #0x3c] @ 037ff6f8
    add r6, r6, r1 @ 037ff6fc
    add r7, r7, r2 @ 037ff700
    strh r0, [ip], #2 @ 037ff704
    subs lr, lr, #0x100 @ 037ff708
    bgt .L_037ff674 @ 037ff70c
    b .L_03800e34 @ 037ff710
@ arm7_dispatch_037ff714 at 0x037ff714
    cmp lr, #0x200 @ 037ff714
    lsl sl, sl, #0x10 @ 037ff718
    lslge sl, sl, #0x10 @ 037ff71c
.L_037ff720:
    mov r0, #0 @ 037ff720
    ldr r3, [sp, #0x28] @ 037ff724
    bic r0, r6, #0x8000 @ 037ff728
    add r0, r0, fp, lsl #15 @ 037ff72c
    lsr r0, r0, #0x10 @ 037ff730
    bic r0, r0, #0xfc00 @ 037ff734
    ldr r2, [sb, r0, lsl #2] @ 037ff738
    mov r0, #0 @ 037ff73c
    add r2, r3, r2, lsl #1 @ 037ff740
    cmp r2, #0x3400 @ 037ff744
    ldrshlt r0, [r8, r2] @ 037ff748
    asr fp, sl, #0x10 @ 037ff74c
    ldr r3, [sp, #0x2c] @ 037ff750
    bic r1, r7, #0x8000 @ 037ff754
    add r1, r1, fp, lsl #15 @ 037ff758
    lsr r1, r1, #0x10 @ 037ff75c
    bic r1, r1, #0xfc00 @ 037ff760
    ldr r2, [sb, r1, lsl #2] @ 037ff764
    mov r1, #0 @ 037ff768
    add r2, r3, r2, lsl #1 @ 037ff76c
    cmp r2, #0x3400 @ 037ff770
    ldrshlt r1, [r8, r2] @ 037ff774
    add r0, r0, r1 @ 037ff778
    ldr r1, [sp, #0x30] @ 037ff77c
    ldr r2, [sp, #0x34] @ 037ff780
    add r4, r4, r1 @ 037ff784
    add r5, r5, r2 @ 037ff788
    ldr r1, [sp, #0x38] @ 037ff78c
    ldr r2, [sp, #0x3c] @ 037ff790
    add r6, r6, r1 @ 037ff794
    add r7, r7, r2 @ 037ff798
    strh r0, [ip], #2 @ 037ff79c
    subs lr, lr, #0x100 @ 037ff7a0
    bgt .L_037ff720 @ 037ff7a4
    b .L_03800e34 @ 037ff7a8
.L_037ff7ac:
@ arm7_dispatch_037ff7ac at 0x037ff7ac
    ands r1, lr, #0xf @ 037ff7ac
    addne r2, sl, sl, asr #16 @ 037ff7b0
    rsbne r1, r1, #0x10 @ 037ff7b4
    lslne r2, r2, #0x10 @ 037ff7b8
    asrne r1, r2, r1 @ 037ff7bc
    ldr r3, [sp, #0x20] @ 037ff7c0
    bic r0, r4, #0x8000 @ 037ff7c4
    add r0, r0, r1 @ 037ff7c8
    lsr r0, r0, #0x10 @ 037ff7cc
    bic r0, r0, #0xfc00 @ 037ff7d0
    ldr r2, [sb, r0, lsl #2] @ 037ff7d4
    mov r0, #0 @ 037ff7d8
    add r2, r3, r2, lsl #1 @ 037ff7dc
    cmp r2, #0x3400 @ 037ff7e0
    ldrhlt r0, [r8, r2] @ 037ff7e4
    orr sl, r0, sl, lsl #16 @ 037ff7e8
    mov r0, #0 @ 037ff7ec
    ldr r3, [sp, #0x28] @ 037ff7f0
    bic r0, r6, #0x8000 @ 037ff7f4
    add r0, r0, fp, lsl #15 @ 037ff7f8
    lsr r0, r0, #0x10 @ 037ff7fc
    bic r0, r0, #0xfc00 @ 037ff800
    ldr r2, [sb, r0, lsl #2] @ 037ff804
    mov r0, #0 @ 037ff808
    add r2, r3, r2, lsl #1 @ 037ff80c
    cmp r2, #0x3400 @ 037ff810
    ldrshlt r0, [r8, r2] @ 037ff814
    asr fp, sl, #0x10 @ 037ff818
    ldr r3, [sp, #0x2c] @ 037ff81c
    bic r1, r7, #0x8000 @ 037ff820
    add r1, r1, fp, lsl #15 @ 037ff824
    lsr r1, r1, #0x10 @ 037ff828
    bic r1, r1, #0xfc00 @ 037ff82c
    ldr r2, [sb, r1, lsl #2] @ 037ff830
    mov r1, #0 @ 037ff834
    add r2, r3, r2, lsl #1 @ 037ff838
    cmp r2, #0x3400 @ 037ff83c
    ldrshlt r1, [r8, r2] @ 037ff840
    add r0, r0, r1 @ 037ff844
    ldr r1, [sp, #0x30] @ 037ff848
    ldr r2, [sp, #0x34] @ 037ff84c
    add r4, r4, r1 @ 037ff850
    add r5, r5, r2 @ 037ff854
    ldr r1, [sp, #0x38] @ 037ff858
    ldr r2, [sp, #0x3c] @ 037ff85c
    add r6, r6, r1 @ 037ff860
    add r7, r7, r2 @ 037ff864
    strh r0, [ip], #2 @ 037ff868
    subs lr, lr, #0x100 @ 037ff86c
    bgt .L_037ff7ac @ 037ff870
    b .L_03800e34 @ 037ff874
@ arm7_dispatch_037ff878 at 0x037ff878
    cmp lr, #0x200 @ 037ff878
    lsl sl, sl, #0x10 @ 037ff87c
    lslge sl, sl, #0x10 @ 037ff880
.L_037ff884:
    mov r0, #0 @ 037ff884
    ldr r3, [sp, #0x28] @ 037ff888
    bic r0, r6, #0x8000 @ 037ff88c
    add r0, r0, fp, lsl #15 @ 037ff890
    lsr r0, r0, #0x10 @ 037ff894
    bic r0, r0, #0xfc00 @ 037ff898
    ldr r2, [sb, r0, lsl #2] @ 037ff89c
    mov r0, #0 @ 037ff8a0
    add r2, r3, r2, lsl #1 @ 037ff8a4
    cmp r2, #0x3400 @ 037ff8a8
    ldrshlt r0, [r8, r2] @ 037ff8ac
    asr fp, sl, #0x10 @ 037ff8b0
    ldr r3, [sp, #0x24] @ 037ff8b4
    bic r1, r5, #0x8000 @ 037ff8b8
    add r1, r1, fp, lsl #15 @ 037ff8bc
    lsr r1, r1, #0x10 @ 037ff8c0
    bic r1, r1, #0xfc00 @ 037ff8c4
    ldr r2, [sb, r1, lsl #2] @ 037ff8c8
    mov r1, #0 @ 037ff8cc
    add r2, r3, r2, lsl #1 @ 037ff8d0
    cmp r2, #0x3400 @ 037ff8d4
    ldrshlt r1, [r8, r2] @ 037ff8d8
    add r0, r0, r1 @ 037ff8dc
    ldr r1, [sp, #0x30] @ 037ff8e0
    ldr r2, [sp, #0x34] @ 037ff8e4
    add r4, r4, r1 @ 037ff8e8
    add r5, r5, r2 @ 037ff8ec
    ldr r1, [sp, #0x38] @ 037ff8f0
    ldr r2, [sp, #0x3c] @ 037ff8f4
    add r6, r6, r1 @ 037ff8f8
    add r7, r7, r2 @ 037ff8fc
    strh r0, [ip], #2 @ 037ff900
    subs lr, lr, #0x100 @ 037ff904
    bgt .L_037ff884 @ 037ff908
    b .L_03800e34 @ 037ff90c
.L_037ff910:
@ arm7_dispatch_037ff910 at 0x037ff910
    ands r1, lr, #0xf @ 037ff910
    addne r2, sl, sl, asr #16 @ 037ff914
    rsbne r1, r1, #0x10 @ 037ff918
    lslne r2, r2, #0x10 @ 037ff91c
    asrne r1, r2, r1 @ 037ff920
    ldr r3, [sp, #0x20] @ 037ff924
    bic r0, r4, #0x8000 @ 037ff928
    add r0, r0, r1 @ 037ff92c
    lsr r0, r0, #0x10 @ 037ff930
    bic r0, r0, #0xfc00 @ 037ff934
    ldr r2, [sb, r0, lsl #2] @ 037ff938
    mov r0, #0 @ 037ff93c
    add r2, r3, r2, lsl #1 @ 037ff940
    cmp r2, #0x3400 @ 037ff944
    ldrhlt r0, [r8, r2] @ 037ff948
    orr sl, r0, sl, lsl #16 @ 037ff94c
    mov r0, #0 @ 037ff950
    ldr r3, [sp, #0x28] @ 037ff954
    bic r0, r6, #0x8000 @ 037ff958
    add r0, r0, fp, lsl #15 @ 037ff95c
    lsr r0, r0, #0x10 @ 037ff960
    bic r0, r0, #0xfc00 @ 037ff964
    ldr r2, [sb, r0, lsl #2] @ 037ff968
    mov r0, #0 @ 037ff96c
    add r2, r3, r2, lsl #1 @ 037ff970
    cmp r2, #0x3400 @ 037ff974
    ldrshlt r0, [r8, r2] @ 037ff978
    asr fp, sl, #0x10 @ 037ff97c
    ldr r3, [sp, #0x24] @ 037ff980
    bic r1, r5, #0x8000 @ 037ff984
    add r1, r1, fp, lsl #15 @ 037ff988
    lsr r1, r1, #0x10 @ 037ff98c
    bic r1, r1, #0xfc00 @ 037ff990
    ldr r2, [sb, r1, lsl #2] @ 037ff994
    mov r1, #0 @ 037ff998
    add r2, r3, r2, lsl #1 @ 037ff99c
    cmp r2, #0x3400 @ 037ff9a0
    ldrshlt r1, [r8, r2] @ 037ff9a4
    add r0, r0, r1 @ 037ff9a8
    ldr r1, [sp, #0x30] @ 037ff9ac
    ldr r2, [sp, #0x34] @ 037ff9b0
    add r4, r4, r1 @ 037ff9b4
    add r5, r5, r2 @ 037ff9b8
    ldr r1, [sp, #0x38] @ 037ff9bc
    ldr r2, [sp, #0x3c] @ 037ff9c0
    add r6, r6, r1 @ 037ff9c4
    add r7, r7, r2 @ 037ff9c8
    strh r0, [ip], #2 @ 037ff9cc
    subs lr, lr, #0x100 @ 037ff9d0
    bgt .L_037ff910 @ 037ff9d4
    b .L_03800e34 @ 037ff9d8
@ arm7_dispatch_037ff9dc at 0x037ff9dc
    cmp lr, #0x200 @ 037ff9dc
    lsl sl, sl, #0x10 @ 037ff9e0
    lslge sl, sl, #0x10 @ 037ff9e4
.L_037ff9e8:
    mov r0, #0 @ 037ff9e8
    ldr r3, [sp, #0x28] @ 037ff9ec
    bic r0, r6, #0x8000 @ 037ff9f0
    add r0, r0, fp, lsl #15 @ 037ff9f4
    lsr r0, r0, #0x10 @ 037ff9f8
    bic r0, r0, #0xfc00 @ 037ff9fc
    ldr r2, [sb, r0, lsl #2] @ 037ffa00
    mov r0, #0 @ 037ffa04
    add r2, r3, r2, lsl #1 @ 037ffa08
    cmp r2, #0x3400 @ 037ffa0c
    ldrshlt r0, [r8, r2] @ 037ffa10
    asr fp, sl, #0x10 @ 037ffa14
    ldr r3, [sp, #0x24] @ 037ffa18
    bic r1, r5, #0x8000 @ 037ffa1c
    add r1, r1, fp, lsl #15 @ 037ffa20
    lsr r1, r1, #0x10 @ 037ffa24
    bic r1, r1, #0xfc00 @ 037ffa28
    ldr r2, [sb, r1, lsl #2] @ 037ffa2c
    mov r1, #0 @ 037ffa30
    add r2, r3, r2, lsl #1 @ 037ffa34
    cmp r2, #0x3400 @ 037ffa38
    ldrshlt r1, [r8, r2] @ 037ffa3c
    add r0, r0, r1 @ 037ffa40
    ldr r3, [sp, #0x2c] @ 037ffa44
    bic r1, r7, #0x8000 @ 037ffa48
    add r1, r1, fp, lsl #15 @ 037ffa4c
    lsr r1, r1, #0x10 @ 037ffa50
    bic r1, r1, #0xfc00 @ 037ffa54
    ldr r2, [sb, r1, lsl #2] @ 037ffa58
    mov r1, #0 @ 037ffa5c
    add r2, r3, r2, lsl #1 @ 037ffa60
    cmp r2, #0x3400 @ 037ffa64
    ldrshlt r1, [r8, r2] @ 037ffa68
    add r0, r0, r1 @ 037ffa6c
    ldr r1, [sp, #0x30] @ 037ffa70
    ldr r2, [sp, #0x34] @ 037ffa74
    add r4, r4, r1 @ 037ffa78
    add r5, r5, r2 @ 037ffa7c
    ldr r1, [sp, #0x38] @ 037ffa80
    ldr r2, [sp, #0x3c] @ 037ffa84
    add r6, r6, r1 @ 037ffa88
    add r7, r7, r2 @ 037ffa8c
    strh r0, [ip], #2 @ 037ffa90
    subs lr, lr, #0x100 @ 037ffa94
    bgt .L_037ff9e8 @ 037ffa98
    b .L_03800e34 @ 037ffa9c
.L_037ffaa0:
@ arm7_dispatch_037ffaa0 at 0x037ffaa0
    ands r1, lr, #0xf @ 037ffaa0
    addne r2, sl, sl, asr #16 @ 037ffaa4
    rsbne r1, r1, #0x10 @ 037ffaa8
    lslne r2, r2, #0x10 @ 037ffaac
    asrne r1, r2, r1 @ 037ffab0
    ldr r3, [sp, #0x20] @ 037ffab4
    bic r0, r4, #0x8000 @ 037ffab8
    add r0, r0, r1 @ 037ffabc
    lsr r0, r0, #0x10 @ 037ffac0
    bic r0, r0, #0xfc00 @ 037ffac4
    ldr r2, [sb, r0, lsl #2] @ 037ffac8
    mov r0, #0 @ 037ffacc
    add r2, r3, r2, lsl #1 @ 037ffad0
    cmp r2, #0x3400 @ 037ffad4
    ldrhlt r0, [r8, r2] @ 037ffad8
    orr sl, r0, sl, lsl #16 @ 037ffadc
    mov r0, #0 @ 037ffae0
    ldr r3, [sp, #0x28] @ 037ffae4
    bic r0, r6, #0x8000 @ 037ffae8
    add r0, r0, fp, lsl #15 @ 037ffaec
    lsr r0, r0, #0x10 @ 037ffaf0
    bic r0, r0, #0xfc00 @ 037ffaf4
    ldr r2, [sb, r0, lsl #2] @ 037ffaf8
    mov r0, #0 @ 037ffafc
    add r2, r3, r2, lsl #1 @ 037ffb00
    cmp r2, #0x3400 @ 037ffb04
    ldrshlt r0, [r8, r2] @ 037ffb08
    asr fp, sl, #0x10 @ 037ffb0c
    ldr r3, [sp, #0x24] @ 037ffb10
    bic r1, r5, #0x8000 @ 037ffb14
    add r1, r1, fp, lsl #15 @ 037ffb18
    lsr r1, r1, #0x10 @ 037ffb1c
    bic r1, r1, #0xfc00 @ 037ffb20
    ldr r2, [sb, r1, lsl #2] @ 037ffb24
    mov r1, #0 @ 037ffb28
    add r2, r3, r2, lsl #1 @ 037ffb2c
    cmp r2, #0x3400 @ 037ffb30
    ldrshlt r1, [r8, r2] @ 037ffb34
    add r0, r0, r1 @ 037ffb38
    ldr r3, [sp, #0x2c] @ 037ffb3c
    bic r1, r7, #0x8000 @ 037ffb40
    add r1, r1, fp, lsl #15 @ 037ffb44
    lsr r1, r1, #0x10 @ 037ffb48
    bic r1, r1, #0xfc00 @ 037ffb4c
    ldr r2, [sb, r1, lsl #2] @ 037ffb50
    mov r1, #0 @ 037ffb54
    add r2, r3, r2, lsl #1 @ 037ffb58
    cmp r2, #0x3400 @ 037ffb5c
    ldrshlt r1, [r8, r2] @ 037ffb60
    add r0, r0, r1 @ 037ffb64
    ldr r1, [sp, #0x30] @ 037ffb68
    ldr r2, [sp, #0x34] @ 037ffb6c
    add r4, r4, r1 @ 037ffb70
    add r5, r5, r2 @ 037ffb74
    ldr r1, [sp, #0x38] @ 037ffb78
    ldr r2, [sp, #0x3c] @ 037ffb7c
    add r6, r6, r1 @ 037ffb80
    add r7, r7, r2 @ 037ffb84
    strh r0, [ip], #2 @ 037ffb88
    subs lr, lr, #0x100 @ 037ffb8c
    bgt .L_037ffaa0 @ 037ffb90
    b .L_03800e34 @ 037ffb94
@ arm7_dispatch_037ffb98 at 0x037ffb98
    cmp lr, #0x200 @ 037ffb98
    lsl sl, sl, #0x10 @ 037ffb9c
    lslge sl, sl, #0x10 @ 037ffba0
.L_037ffba4:
    mov r0, #0 @ 037ffba4
    ldr r1, [sp, #0x30] @ 037ffba8
    ldr r2, [sp, #0x34] @ 037ffbac
    add r4, r4, r1 @ 037ffbb0
    add r5, r5, r2 @ 037ffbb4
    ldr r1, [sp, #0x38] @ 037ffbb8
    ldr r2, [sp, #0x3c] @ 037ffbbc
    add r6, r6, r1 @ 037ffbc0
    add r7, r7, r2 @ 037ffbc4
    strh r0, [ip], #2 @ 037ffbc8
    subs lr, lr, #0x100 @ 037ffbcc
    bgt .L_037ffba4 @ 037ffbd0
    b .L_03800e34 @ 037ffbd4
.L_037ffbd8:
@ arm7_dispatch_037ffbd8 at 0x037ffbd8
    ands r1, lr, #0xf @ 037ffbd8
    addne r2, sl, sl, asr #16 @ 037ffbdc
    rsbne r1, r1, #0x10 @ 037ffbe0
    lslne r2, r2, #0x10 @ 037ffbe4
    asrne r1, r2, r1 @ 037ffbe8
    ldr r3, [sp, #0x20] @ 037ffbec
    bic r0, r4, #0x8000 @ 037ffbf0
    add r0, r0, r1 @ 037ffbf4
    lsr r0, r0, #0x10 @ 037ffbf8
    bic r0, r0, #0xfc00 @ 037ffbfc
    ldr r2, [sb, r0, lsl #2] @ 037ffc00
    mov r0, #0 @ 037ffc04
    add r2, r3, r2, lsl #1 @ 037ffc08
    cmp r2, #0x3400 @ 037ffc0c
    ldrhlt r0, [r8, r2] @ 037ffc10
    orr sl, r0, sl, lsl #16 @ 037ffc14
    mov r0, #0 @ 037ffc18
    ldr r1, [sp, #0x30] @ 037ffc1c
    ldr r2, [sp, #0x34] @ 037ffc20
    add r4, r4, r1 @ 037ffc24
    add r5, r5, r2 @ 037ffc28
    ldr r1, [sp, #0x38] @ 037ffc2c
    ldr r2, [sp, #0x3c] @ 037ffc30
    add r6, r6, r1 @ 037ffc34
    add r7, r7, r2 @ 037ffc38
    strh r0, [ip], #2 @ 037ffc3c
    subs lr, lr, #0x100 @ 037ffc40
    bgt .L_037ffbd8 @ 037ffc44
    b .L_03800e34 @ 037ffc48
@ arm7_dispatch_037ffc4c at 0x037ffc4c
    cmp lr, #0x200 @ 037ffc4c
    lsl sl, sl, #0x10 @ 037ffc50
    lslge sl, sl, #0x10 @ 037ffc54
.L_037ffc58:
    mov r0, #0 @ 037ffc58
    ldr r3, [sp, #0x2c] @ 037ffc5c
    lsr r0, r7, #0x10 @ 037ffc60
    bic r0, r0, #0xfc00 @ 037ffc64
    ldr r2, [sb, r0, lsl #2] @ 037ffc68
    mov r0, #0 @ 037ffc6c
    add r2, r3, r2, lsl #1 @ 037ffc70
    cmp r2, #0x3400 @ 037ffc74
    ldrshlt r0, [r8, r2] @ 037ffc78
    ldr r1, [sp, #0x30] @ 037ffc7c
    ldr r2, [sp, #0x34] @ 037ffc80
    add r4, r4, r1 @ 037ffc84
    add r5, r5, r2 @ 037ffc88
    ldr r1, [sp, #0x38] @ 037ffc8c
    ldr r2, [sp, #0x3c] @ 037ffc90
    add r6, r6, r1 @ 037ffc94
    add r7, r7, r2 @ 037ffc98
    strh r0, [ip], #2 @ 037ffc9c
    subs lr, lr, #0x100 @ 037ffca0
    bgt .L_037ffc58 @ 037ffca4
    b .L_03800e34 @ 037ffca8
.L_037ffcac:
@ arm7_dispatch_037ffcac at 0x037ffcac
    ands r1, lr, #0xf @ 037ffcac
    addne r2, sl, sl, asr #16 @ 037ffcb0
    rsbne r1, r1, #0x10 @ 037ffcb4
    lslne r2, r2, #0x10 @ 037ffcb8
    asrne r1, r2, r1 @ 037ffcbc
    ldr r3, [sp, #0x20] @ 037ffcc0
    bic r0, r4, #0x8000 @ 037ffcc4
    add r0, r0, r1 @ 037ffcc8
    lsr r0, r0, #0x10 @ 037ffccc
    bic r0, r0, #0xfc00 @ 037ffcd0
    ldr r2, [sb, r0, lsl #2] @ 037ffcd4
    mov r0, #0 @ 037ffcd8
    add r2, r3, r2, lsl #1 @ 037ffcdc
    cmp r2, #0x3400 @ 037ffce0
    ldrhlt r0, [r8, r2] @ 037ffce4
    orr sl, r0, sl, lsl #16 @ 037ffce8
    mov r0, #0 @ 037ffcec
    ldr r3, [sp, #0x2c] @ 037ffcf0
    lsr r0, r7, #0x10 @ 037ffcf4
    bic r0, r0, #0xfc00 @ 037ffcf8
    ldr r2, [sb, r0, lsl #2] @ 037ffcfc
    mov r0, #0 @ 037ffd00
    add r2, r3, r2, lsl #1 @ 037ffd04
    cmp r2, #0x3400 @ 037ffd08
    ldrshlt r0, [r8, r2] @ 037ffd0c
    ldr r1, [sp, #0x30] @ 037ffd10
    ldr r2, [sp, #0x34] @ 037ffd14
    add r4, r4, r1 @ 037ffd18
    add r5, r5, r2 @ 037ffd1c
    ldr r1, [sp, #0x38] @ 037ffd20
    ldr r2, [sp, #0x3c] @ 037ffd24
    add r6, r6, r1 @ 037ffd28
    add r7, r7, r2 @ 037ffd2c
    strh r0, [ip], #2 @ 037ffd30
    subs lr, lr, #0x100 @ 037ffd34
    bgt .L_037ffcac @ 037ffd38
    b .L_03800e34 @ 037ffd3c
@ arm7_dispatch_037ffd40 at 0x037ffd40
    cmp lr, #0x200 @ 037ffd40
    lsl sl, sl, #0x10 @ 037ffd44
    lslge sl, sl, #0x10 @ 037ffd48
.L_037ffd4c:
    mov r0, #0 @ 037ffd4c
    asr r1, sl, #0x10 @ 037ffd50
    ldr r3, [sp, #0x24] @ 037ffd54
    bic r0, r5, #0x8000 @ 037ffd58
    add r0, r0, r1, lsl #15 @ 037ffd5c
    lsr r0, r0, #0x10 @ 037ffd60
    bic r0, r0, #0xfc00 @ 037ffd64
    ldr r2, [sb, r0, lsl #2] @ 037ffd68
    mov r0, #0 @ 037ffd6c
    add r2, r3, r2, lsl #1 @ 037ffd70
    cmp r2, #0x3400 @ 037ffd74
    ldrshlt r0, [r8, r2] @ 037ffd78
    ldr r1, [sp, #0x30] @ 037ffd7c
    ldr r2, [sp, #0x34] @ 037ffd80
    add r4, r4, r1 @ 037ffd84
    add r5, r5, r2 @ 037ffd88
    ldr r1, [sp, #0x38] @ 037ffd8c
    ldr r2, [sp, #0x3c] @ 037ffd90
    add r6, r6, r1 @ 037ffd94
    add r7, r7, r2 @ 037ffd98
    strh r0, [ip], #2 @ 037ffd9c
    subs lr, lr, #0x100 @ 037ffda0
    bgt .L_037ffd4c @ 037ffda4
    b .L_03800e34 @ 037ffda8
.L_037ffdac:
@ arm7_dispatch_037ffdac at 0x037ffdac
    ands r1, lr, #0xf @ 037ffdac
    addne r2, sl, sl, asr #16 @ 037ffdb0
    rsbne r1, r1, #0x10 @ 037ffdb4
    lslne r2, r2, #0x10 @ 037ffdb8
    asrne r1, r2, r1 @ 037ffdbc
    ldr r3, [sp, #0x20] @ 037ffdc0
    bic r0, r4, #0x8000 @ 037ffdc4
    add r0, r0, r1 @ 037ffdc8
    lsr r0, r0, #0x10 @ 037ffdcc
    bic r0, r0, #0xfc00 @ 037ffdd0
    ldr r2, [sb, r0, lsl #2] @ 037ffdd4
    mov r0, #0 @ 037ffdd8
    add r2, r3, r2, lsl #1 @ 037ffddc
    cmp r2, #0x3400 @ 037ffde0
    ldrhlt r0, [r8, r2] @ 037ffde4
    orr sl, r0, sl, lsl #16 @ 037ffde8
    mov r0, #0 @ 037ffdec
    asr r1, sl, #0x10 @ 037ffdf0
    ldr r3, [sp, #0x24] @ 037ffdf4
    bic r0, r5, #0x8000 @ 037ffdf8
    add r0, r0, r1, lsl #15 @ 037ffdfc
    lsr r0, r0, #0x10 @ 037ffe00
    bic r0, r0, #0xfc00 @ 037ffe04
    ldr r2, [sb, r0, lsl #2] @ 037ffe08
    mov r0, #0 @ 037ffe0c
    add r2, r3, r2, lsl #1 @ 037ffe10
    cmp r2, #0x3400 @ 037ffe14
    ldrshlt r0, [r8, r2] @ 037ffe18
    ldr r1, [sp, #0x30] @ 037ffe1c
    ldr r2, [sp, #0x34] @ 037ffe20
    add r4, r4, r1 @ 037ffe24
    add r5, r5, r2 @ 037ffe28
    ldr r1, [sp, #0x38] @ 037ffe2c
    ldr r2, [sp, #0x3c] @ 037ffe30
    add r6, r6, r1 @ 037ffe34
    add r7, r7, r2 @ 037ffe38
    strh r0, [ip], #2 @ 037ffe3c
    subs lr, lr, #0x100 @ 037ffe40
    bgt .L_037ffdac @ 037ffe44
    b .L_03800e34 @ 037ffe48
@ arm7_dispatch_037ffe4c at 0x037ffe4c
    cmp lr, #0x200 @ 037ffe4c
    lsl sl, sl, #0x10 @ 037ffe50
    lslge sl, sl, #0x10 @ 037ffe54
.L_037ffe58:
    mov r0, #0 @ 037ffe58
    ldr r3, [sp, #0x2c] @ 037ffe5c
    lsr r0, r7, #0x10 @ 037ffe60
    bic r0, r0, #0xfc00 @ 037ffe64
    ldr r2, [sb, r0, lsl #2] @ 037ffe68
    mov r0, #0 @ 037ffe6c
    add r2, r3, r2, lsl #1 @ 037ffe70
    cmp r2, #0x3400 @ 037ffe74
    ldrshlt r0, [r8, r2] @ 037ffe78
    asr r2, sl, #0x10 @ 037ffe7c
    ldr r3, [sp, #0x24] @ 037ffe80
    bic r1, r5, #0x8000 @ 037ffe84
    add r1, r1, r2, lsl #15 @ 037ffe88
    lsr r1, r1, #0x10 @ 037ffe8c
    bic r1, r1, #0xfc00 @ 037ffe90
    ldr r2, [sb, r1, lsl #2] @ 037ffe94
    mov r1, #0 @ 037ffe98
    add r2, r3, r2, lsl #1 @ 037ffe9c
    cmp r2, #0x3400 @ 037ffea0
    ldrshlt r1, [r8, r2] @ 037ffea4
    add r0, r0, r1 @ 037ffea8
    ldr r1, [sp, #0x30] @ 037ffeac
    ldr r2, [sp, #0x34] @ 037ffeb0
    add r4, r4, r1 @ 037ffeb4
    add r5, r5, r2 @ 037ffeb8
    ldr r1, [sp, #0x38] @ 037ffebc
    ldr r2, [sp, #0x3c] @ 037ffec0
    add r6, r6, r1 @ 037ffec4
    add r7, r7, r2 @ 037ffec8
    strh r0, [ip], #2 @ 037ffecc
    subs lr, lr, #0x100 @ 037ffed0
    bgt .L_037ffe58 @ 037ffed4
    b .L_03800e34 @ 037ffed8
.L_037ffedc:
@ arm7_dispatch_037ffedc at 0x037ffedc
    ands r1, lr, #0xf @ 037ffedc
    addne r2, sl, sl, asr #16 @ 037ffee0
    rsbne r1, r1, #0x10 @ 037ffee4
    lslne r2, r2, #0x10 @ 037ffee8
    asrne r1, r2, r1 @ 037ffeec
    ldr r3, [sp, #0x20] @ 037ffef0
    bic r0, r4, #0x8000 @ 037ffef4
    add r0, r0, r1 @ 037ffef8
    lsr r0, r0, #0x10 @ 037ffefc
    bic r0, r0, #0xfc00 @ 037fff00
    ldr r2, [sb, r0, lsl #2] @ 037fff04
    mov r0, #0 @ 037fff08
    add r2, r3, r2, lsl #1 @ 037fff0c
    cmp r2, #0x3400 @ 037fff10
    ldrhlt r0, [r8, r2] @ 037fff14
    orr sl, r0, sl, lsl #16 @ 037fff18
    mov r0, #0 @ 037fff1c
    ldr r3, [sp, #0x2c] @ 037fff20
    lsr r0, r7, #0x10 @ 037fff24
    bic r0, r0, #0xfc00 @ 037fff28
    ldr r2, [sb, r0, lsl #2] @ 037fff2c
    mov r0, #0 @ 037fff30
    add r2, r3, r2, lsl #1 @ 037fff34
    cmp r2, #0x3400 @ 037fff38
    ldrshlt r0, [r8, r2] @ 037fff3c
    asr r2, sl, #0x10 @ 037fff40
    ldr r3, [sp, #0x24] @ 037fff44
    bic r1, r5, #0x8000 @ 037fff48
    add r1, r1, r2, lsl #15 @ 037fff4c
    lsr r1, r1, #0x10 @ 037fff50
    bic r1, r1, #0xfc00 @ 037fff54
    ldr r2, [sb, r1, lsl #2] @ 037fff58
    mov r1, #0 @ 037fff5c
    add r2, r3, r2, lsl #1 @ 037fff60
    cmp r2, #0x3400 @ 037fff64
    ldrshlt r1, [r8, r2] @ 037fff68
    add r0, r0, r1 @ 037fff6c
    ldr r1, [sp, #0x30] @ 037fff70
    ldr r2, [sp, #0x34] @ 037fff74
    add r4, r4, r1 @ 037fff78
    add r5, r5, r2 @ 037fff7c
    ldr r1, [sp, #0x38] @ 037fff80
    ldr r2, [sp, #0x3c] @ 037fff84
    add r6, r6, r1 @ 037fff88
    add r7, r7, r2 @ 037fff8c
    strh r0, [ip], #2 @ 037fff90
    subs lr, lr, #0x100 @ 037fff94
    bgt .L_037ffedc @ 037fff98
    b .L_03800e34 @ 037fff9c
@ arm7_dispatch_037fffa0 at 0x037fffa0
    cmp lr, #0x200 @ 037fffa0
    lsl sl, sl, #0x10 @ 037fffa4
    lslge sl, sl, #0x10 @ 037fffa8
.L_037fffac:
    mov r0, #0 @ 037fffac
    ldr r3, [sp, #0x28] @ 037fffb0
    lsr r0, r6, #0x10 @ 037fffb4
    bic r0, r0, #0xfc00 @ 037fffb8
    ldr r2, [sb, r0, lsl #2] @ 037fffbc
    mov r0, #0 @ 037fffc0
    add r2, r3, r2, lsl #1 @ 037fffc4
    cmp r2, #0x3400 @ 037fffc8
    ldrshlt r0, [r8, r2] @ 037fffcc
    ldr r1, [sp, #0x30] @ 037fffd0
    ldr r2, [sp, #0x34] @ 037fffd4
    add r4, r4, r1 @ 037fffd8
    add r5, r5, r2 @ 037fffdc
    ldr r1, [sp, #0x38] @ 037fffe0
    ldr r2, [sp, #0x3c] @ 037fffe4
    add r6, r6, r1 @ 037fffe8
    add r7, r7, r2 @ 037fffec
    strh r0, [ip], #2 @ 037ffff0
    subs lr, lr, #0x100 @ 037ffff4
    bgt .L_037fffac @ 037ffff8
    b .L_03800e34 @ 037ffffc
.L_03800000:
@ arm7_dispatch_03800000 at 0x03800000
    ands r1, lr, #0xf @ 03800000
    addne r2, sl, sl, asr #16 @ 03800004
    rsbne r1, r1, #0x10 @ 03800008
    lslne r2, r2, #0x10 @ 0380000c
    asrne r1, r2, r1 @ 03800010
    ldr r3, [sp, #0x20] @ 03800014
    bic r0, r4, #0x8000 @ 03800018
    add r0, r0, r1 @ 0380001c
    lsr r0, r0, #0x10 @ 03800020
    bic r0, r0, #0xfc00 @ 03800024
    ldr r2, [sb, r0, lsl #2] @ 03800028
    mov r0, #0 @ 0380002c
    add r2, r3, r2, lsl #1 @ 03800030
    cmp r2, #0x3400 @ 03800034
    ldrhlt r0, [r8, r2] @ 03800038
    orr sl, r0, sl, lsl #16 @ 0380003c
    mov r0, #0 @ 03800040
    ldr r3, [sp, #0x28] @ 03800044
    lsr r0, r6, #0x10 @ 03800048
    bic r0, r0, #0xfc00 @ 0380004c
    ldr r2, [sb, r0, lsl #2] @ 03800050
    mov r0, #0 @ 03800054
    add r2, r3, r2, lsl #1 @ 03800058
    cmp r2, #0x3400 @ 0380005c
    ldrshlt r0, [r8, r2] @ 03800060
    ldr r1, [sp, #0x30] @ 03800064
    ldr r2, [sp, #0x34] @ 03800068
    add r4, r4, r1 @ 0380006c
    add r5, r5, r2 @ 03800070
    ldr r1, [sp, #0x38] @ 03800074
    ldr r2, [sp, #0x3c] @ 03800078
    add r6, r6, r1 @ 0380007c
    add r7, r7, r2 @ 03800080
    strh r0, [ip], #2 @ 03800084
    subs lr, lr, #0x100 @ 03800088
    bgt .L_03800000 @ 0380008c
    b .L_03800e34 @ 03800090
@ arm7_dispatch_03800094 at 0x03800094
    cmp lr, #0x200 @ 03800094
    lsl sl, sl, #0x10 @ 03800098
    lslge sl, sl, #0x10 @ 0380009c
.L_038000a0:
    mov r0, #0 @ 038000a0
    ldr r3, [sp, #0x28] @ 038000a4
    lsr r0, r6, #0x10 @ 038000a8
    bic r0, r0, #0xfc00 @ 038000ac
    ldr r2, [sb, r0, lsl #2] @ 038000b0
    mov r0, #0 @ 038000b4
    add r2, r3, r2, lsl #1 @ 038000b8
    cmp r2, #0x3400 @ 038000bc
    ldrshlt r0, [r8, r2] @ 038000c0
    ldr r3, [sp, #0x2c] @ 038000c4
    lsr r1, r7, #0x10 @ 038000c8
    bic r1, r1, #0xfc00 @ 038000cc
    ldr r2, [sb, r1, lsl #2] @ 038000d0
    mov r1, #0 @ 038000d4
    add r2, r3, r2, lsl #1 @ 038000d8
    cmp r2, #0x3400 @ 038000dc
    ldrshlt r1, [r8, r2] @ 038000e0
    add r0, r0, r1 @ 038000e4
    ldr r1, [sp, #0x30] @ 038000e8
    ldr r2, [sp, #0x34] @ 038000ec
    add r4, r4, r1 @ 038000f0
    add r5, r5, r2 @ 038000f4
    ldr r1, [sp, #0x38] @ 038000f8
    ldr r2, [sp, #0x3c] @ 038000fc
    add r6, r6, r1 @ 03800100
    add r7, r7, r2 @ 03800104
    strh r0, [ip], #2 @ 03800108
    subs lr, lr, #0x100 @ 0380010c
    bgt .L_038000a0 @ 03800110
    b .L_03800e34 @ 03800114
.L_03800118:
@ arm7_dispatch_03800118 at 0x03800118
    ands r1, lr, #0xf @ 03800118
    addne r2, sl, sl, asr #16 @ 0380011c
    rsbne r1, r1, #0x10 @ 03800120
    lslne r2, r2, #0x10 @ 03800124
    asrne r1, r2, r1 @ 03800128
    ldr r3, [sp, #0x20] @ 0380012c
    bic r0, r4, #0x8000 @ 03800130
    add r0, r0, r1 @ 03800134
    lsr r0, r0, #0x10 @ 03800138
    bic r0, r0, #0xfc00 @ 0380013c
    ldr r2, [sb, r0, lsl #2] @ 03800140
    mov r0, #0 @ 03800144
    add r2, r3, r2, lsl #1 @ 03800148
    cmp r2, #0x3400 @ 0380014c
    ldrhlt r0, [r8, r2] @ 03800150
    orr sl, r0, sl, lsl #16 @ 03800154
    mov r0, #0 @ 03800158
    ldr r3, [sp, #0x28] @ 0380015c
    lsr r0, r6, #0x10 @ 03800160
    bic r0, r0, #0xfc00 @ 03800164
    ldr r2, [sb, r0, lsl #2] @ 03800168
    mov r0, #0 @ 0380016c
    add r2, r3, r2, lsl #1 @ 03800170
    cmp r2, #0x3400 @ 03800174
    ldrshlt r0, [r8, r2] @ 03800178
    ldr r3, [sp, #0x2c] @ 0380017c
    lsr r1, r7, #0x10 @ 03800180
    bic r1, r1, #0xfc00 @ 03800184
    ldr r2, [sb, r1, lsl #2] @ 03800188
    mov r1, #0 @ 0380018c
    add r2, r3, r2, lsl #1 @ 03800190
    cmp r2, #0x3400 @ 03800194
    ldrshlt r1, [r8, r2] @ 03800198
    add r0, r0, r1 @ 0380019c
    ldr r1, [sp, #0x30] @ 038001a0
    ldr r2, [sp, #0x34] @ 038001a4
    add r4, r4, r1 @ 038001a8
    add r5, r5, r2 @ 038001ac
    ldr r1, [sp, #0x38] @ 038001b0
    ldr r2, [sp, #0x3c] @ 038001b4
    add r6, r6, r1 @ 038001b8
    add r7, r7, r2 @ 038001bc
    strh r0, [ip], #2 @ 038001c0
    subs lr, lr, #0x100 @ 038001c4
    bgt .L_03800118 @ 038001c8
    b .L_03800e34 @ 038001cc
@ arm7_dispatch_038001d0 at 0x038001d0
    cmp lr, #0x200 @ 038001d0
    lsl sl, sl, #0x10 @ 038001d4
    lslge sl, sl, #0x10 @ 038001d8
.L_038001dc:
    mov r0, #0 @ 038001dc
    ldr r3, [sp, #0x28] @ 038001e0
    lsr r0, r6, #0x10 @ 038001e4
    bic r0, r0, #0xfc00 @ 038001e8
    ldr r2, [sb, r0, lsl #2] @ 038001ec
    mov r0, #0 @ 038001f0
    add r2, r3, r2, lsl #1 @ 038001f4
    cmp r2, #0x3400 @ 038001f8
    ldrshlt r0, [r8, r2] @ 038001fc
    asr r2, sl, #0x10 @ 03800200
    ldr r3, [sp, #0x24] @ 03800204
    bic r1, r5, #0x8000 @ 03800208
    add r1, r1, r2, lsl #15 @ 0380020c
    lsr r1, r1, #0x10 @ 03800210
    bic r1, r1, #0xfc00 @ 03800214
    ldr r2, [sb, r1, lsl #2] @ 03800218
    mov r1, #0 @ 0380021c
    add r2, r3, r2, lsl #1 @ 03800220
    cmp r2, #0x3400 @ 03800224
    ldrshlt r1, [r8, r2] @ 03800228
    add r0, r0, r1 @ 0380022c
    ldr r1, [sp, #0x30] @ 03800230
    ldr r2, [sp, #0x34] @ 03800234
    add r4, r4, r1 @ 03800238
    add r5, r5, r2 @ 0380023c
    ldr r1, [sp, #0x38] @ 03800240
    ldr r2, [sp, #0x3c] @ 03800244
    add r6, r6, r1 @ 03800248
    add r7, r7, r2 @ 0380024c
    strh r0, [ip], #2 @ 03800250
    subs lr, lr, #0x100 @ 03800254
    bgt .L_038001dc @ 03800258
    b .L_03800e34 @ 0380025c
.L_03800260:
@ arm7_dispatch_03800260 at 0x03800260
    ands r1, lr, #0xf @ 03800260
    addne r2, sl, sl, asr #16 @ 03800264
    rsbne r1, r1, #0x10 @ 03800268
    lslne r2, r2, #0x10 @ 0380026c
    asrne r1, r2, r1 @ 03800270
    ldr r3, [sp, #0x20] @ 03800274
    bic r0, r4, #0x8000 @ 03800278
    add r0, r0, r1 @ 0380027c
    lsr r0, r0, #0x10 @ 03800280
    bic r0, r0, #0xfc00 @ 03800284
    ldr r2, [sb, r0, lsl #2] @ 03800288
    mov r0, #0 @ 0380028c
    add r2, r3, r2, lsl #1 @ 03800290
    cmp r2, #0x3400 @ 03800294
    ldrhlt r0, [r8, r2] @ 03800298
    orr sl, r0, sl, lsl #16 @ 0380029c
    mov r0, #0 @ 038002a0
    ldr r3, [sp, #0x28] @ 038002a4
    lsr r0, r6, #0x10 @ 038002a8
    bic r0, r0, #0xfc00 @ 038002ac
    ldr r2, [sb, r0, lsl #2] @ 038002b0
    mov r0, #0 @ 038002b4
    add r2, r3, r2, lsl #1 @ 038002b8
    cmp r2, #0x3400 @ 038002bc
    ldrshlt r0, [r8, r2] @ 038002c0
    asr r2, sl, #0x10 @ 038002c4
    ldr r3, [sp, #0x24] @ 038002c8
    bic r1, r5, #0x8000 @ 038002cc
    add r1, r1, r2, lsl #15 @ 038002d0
    lsr r1, r1, #0x10 @ 038002d4
    bic r1, r1, #0xfc00 @ 038002d8
    ldr r2, [sb, r1, lsl #2] @ 038002dc
    mov r1, #0 @ 038002e0
    add r2, r3, r2, lsl #1 @ 038002e4
    cmp r2, #0x3400 @ 038002e8
    ldrshlt r1, [r8, r2] @ 038002ec
    add r0, r0, r1 @ 038002f0
    ldr r1, [sp, #0x30] @ 038002f4
    ldr r2, [sp, #0x34] @ 038002f8
    add r4, r4, r1 @ 038002fc
    add r5, r5, r2 @ 03800300
    ldr r1, [sp, #0x38] @ 03800304
    ldr r2, [sp, #0x3c] @ 03800308
    add r6, r6, r1 @ 0380030c
    add r7, r7, r2 @ 03800310
    strh r0, [ip], #2 @ 03800314
    subs lr, lr, #0x100 @ 03800318
    bgt .L_03800260 @ 0380031c
    b .L_03800e34 @ 03800320
@ arm7_dispatch_03800324 at 0x03800324
    cmp lr, #0x200 @ 03800324
    lsl sl, sl, #0x10 @ 03800328
    lslge sl, sl, #0x10 @ 0380032c
.L_03800330:
    mov r0, #0 @ 03800330
    ldr r3, [sp, #0x28] @ 03800334
    lsr r0, r6, #0x10 @ 03800338
    bic r0, r0, #0xfc00 @ 0380033c
    ldr r2, [sb, r0, lsl #2] @ 03800340
    mov r0, #0 @ 03800344
    add r2, r3, r2, lsl #1 @ 03800348
    cmp r2, #0x3400 @ 0380034c
    ldrshlt r0, [r8, r2] @ 03800350
    ldr r3, [sp, #0x2c] @ 03800354
    lsr r1, r7, #0x10 @ 03800358
    bic r1, r1, #0xfc00 @ 0380035c
    ldr r2, [sb, r1, lsl #2] @ 03800360
    mov r1, #0 @ 03800364
    add r2, r3, r2, lsl #1 @ 03800368
    cmp r2, #0x3400 @ 0380036c
    ldrshlt r1, [r8, r2] @ 03800370
    add r0, r0, r1 @ 03800374
    asr r2, sl, #0x10 @ 03800378
    ldr r3, [sp, #0x24] @ 0380037c
    bic r1, r5, #0x8000 @ 03800380
    add r1, r1, r2, lsl #15 @ 03800384
    lsr r1, r1, #0x10 @ 03800388
    bic r1, r1, #0xfc00 @ 0380038c
    ldr r2, [sb, r1, lsl #2] @ 03800390
    mov r1, #0 @ 03800394
    add r2, r3, r2, lsl #1 @ 03800398
    cmp r2, #0x3400 @ 0380039c
    ldrshlt r1, [r8, r2] @ 038003a0
    add r0, r0, r1 @ 038003a4
    ldr r1, [sp, #0x30] @ 038003a8
    ldr r2, [sp, #0x34] @ 038003ac
    add r4, r4, r1 @ 038003b0
    add r5, r5, r2 @ 038003b4
    ldr r1, [sp, #0x38] @ 038003b8
    ldr r2, [sp, #0x3c] @ 038003bc
    add r6, r6, r1 @ 038003c0
    add r7, r7, r2 @ 038003c4
    strh r0, [ip], #2 @ 038003c8
    subs lr, lr, #0x100 @ 038003cc
    bgt .L_03800330 @ 038003d0
    b .L_03800e34 @ 038003d4
.L_038003d8:
@ arm7_dispatch_038003d8 at 0x038003d8
    ands r1, lr, #0xf @ 038003d8
    addne r2, sl, sl, asr #16 @ 038003dc
    rsbne r1, r1, #0x10 @ 038003e0
    lslne r2, r2, #0x10 @ 038003e4
    asrne r1, r2, r1 @ 038003e8
    ldr r3, [sp, #0x20] @ 038003ec
    bic r0, r4, #0x8000 @ 038003f0
    add r0, r0, r1 @ 038003f4
    lsr r0, r0, #0x10 @ 038003f8
    bic r0, r0, #0xfc00 @ 038003fc
    ldr r2, [sb, r0, lsl #2] @ 03800400
    mov r0, #0 @ 03800404
    add r2, r3, r2, lsl #1 @ 03800408
    cmp r2, #0x3400 @ 0380040c
    ldrhlt r0, [r8, r2] @ 03800410
    orr sl, r0, sl, lsl #16 @ 03800414
    mov r0, #0 @ 03800418
    ldr r3, [sp, #0x28] @ 0380041c
    lsr r0, r6, #0x10 @ 03800420
    bic r0, r0, #0xfc00 @ 03800424
    ldr r2, [sb, r0, lsl #2] @ 03800428
    mov r0, #0 @ 0380042c
    add r2, r3, r2, lsl #1 @ 03800430
    cmp r2, #0x3400 @ 03800434
    ldrshlt r0, [r8, r2] @ 03800438
    ldr r3, [sp, #0x2c] @ 0380043c
    lsr r1, r7, #0x10 @ 03800440
    bic r1, r1, #0xfc00 @ 03800444
    ldr r2, [sb, r1, lsl #2] @ 03800448
    mov r1, #0 @ 0380044c
    add r2, r3, r2, lsl #1 @ 03800450
    cmp r2, #0x3400 @ 03800454
    ldrshlt r1, [r8, r2] @ 03800458
    add r0, r0, r1 @ 0380045c
    asr r2, sl, #0x10 @ 03800460
    ldr r3, [sp, #0x24] @ 03800464
    bic r1, r5, #0x8000 @ 03800468
    add r1, r1, r2, lsl #15 @ 0380046c
    lsr r1, r1, #0x10 @ 03800470
    bic r1, r1, #0xfc00 @ 03800474
    ldr r2, [sb, r1, lsl #2] @ 03800478
    mov r1, #0 @ 0380047c
    add r2, r3, r2, lsl #1 @ 03800480
    cmp r2, #0x3400 @ 03800484
    ldrshlt r1, [r8, r2] @ 03800488
    add r0, r0, r1 @ 0380048c
    ldr r1, [sp, #0x30] @ 03800490
    ldr r2, [sp, #0x34] @ 03800494
    add r4, r4, r1 @ 03800498
    add r5, r5, r2 @ 0380049c
    ldr r1, [sp, #0x38] @ 038004a0
    ldr r2, [sp, #0x3c] @ 038004a4
    add r6, r6, r1 @ 038004a8
    add r7, r7, r2 @ 038004ac
    strh r0, [ip], #2 @ 038004b0
    subs lr, lr, #0x100 @ 038004b4
    bgt .L_038003d8 @ 038004b8
    b .L_03800e34 @ 038004bc
@ arm7_dispatch_038004c0 at 0x038004c0
    cmp lr, #0x200 @ 038004c0
    lsl sl, sl, #0x10 @ 038004c4
    lslge sl, sl, #0x10 @ 038004c8
.L_038004cc:
    mov r0, #0 @ 038004cc
    asr r0, sl, #0x10 @ 038004d0
    ldr r1, [sp, #0x30] @ 038004d4
    ldr r2, [sp, #0x34] @ 038004d8
    add r4, r4, r1 @ 038004dc
    add r5, r5, r2 @ 038004e0
    ldr r1, [sp, #0x38] @ 038004e4
    ldr r2, [sp, #0x3c] @ 038004e8
    add r6, r6, r1 @ 038004ec
    add r7, r7, r2 @ 038004f0
    strh r0, [ip], #2 @ 038004f4
    subs lr, lr, #0x100 @ 038004f8
    bgt .L_038004cc @ 038004fc
    b .L_03800e34 @ 03800500
.L_03800504:
@ arm7_dispatch_03800504 at 0x03800504
    ands r1, lr, #0xf @ 03800504
    addne r2, sl, sl, asr #16 @ 03800508
    rsbne r1, r1, #0x10 @ 0380050c
    lslne r2, r2, #0x10 @ 03800510
    asrne r1, r2, r1 @ 03800514
    ldr r3, [sp, #0x20] @ 03800518
    bic r0, r4, #0x8000 @ 0380051c
    add r0, r0, r1 @ 03800520
    lsr r0, r0, #0x10 @ 03800524
    bic r0, r0, #0xfc00 @ 03800528
    ldr r2, [sb, r0, lsl #2] @ 0380052c
    mov r0, #0 @ 03800530
    add r2, r3, r2, lsl #1 @ 03800534
    cmp r2, #0x3400 @ 03800538
    ldrhlt r0, [r8, r2] @ 0380053c
    orr sl, r0, sl, lsl #16 @ 03800540
    mov r0, #0 @ 03800544
    asr r0, sl, #0x10 @ 03800548
    ldr r1, [sp, #0x30] @ 0380054c
    ldr r2, [sp, #0x34] @ 03800550
    add r4, r4, r1 @ 03800554
    add r5, r5, r2 @ 03800558
    ldr r1, [sp, #0x38] @ 0380055c
    ldr r2, [sp, #0x3c] @ 03800560
    add r6, r6, r1 @ 03800564
    add r7, r7, r2 @ 03800568
    strh r0, [ip], #2 @ 0380056c
    subs lr, lr, #0x100 @ 03800570
    bgt .L_03800504 @ 03800574
    b .L_03800e34 @ 03800578
@ arm7_dispatch_0380057c at 0x0380057c
    cmp lr, #0x200 @ 0380057c
    lsl sl, sl, #0x10 @ 03800580
    lslge sl, sl, #0x10 @ 03800584
.L_03800588:
    mov r0, #0 @ 03800588
    ldr r3, [sp, #0x2c] @ 0380058c
    lsr r0, r7, #0x10 @ 03800590
    bic r0, r0, #0xfc00 @ 03800594
    ldr r2, [sb, r0, lsl #2] @ 03800598
    mov r0, #0 @ 0380059c
    add r2, r3, r2, lsl #1 @ 038005a0
    cmp r2, #0x3400 @ 038005a4
    ldrshlt r0, [r8, r2] @ 038005a8
    add r0, r0, sl, asr #16 @ 038005ac
    ldr r1, [sp, #0x30] @ 038005b0
    ldr r2, [sp, #0x34] @ 038005b4
    add r4, r4, r1 @ 038005b8
    add r5, r5, r2 @ 038005bc
    ldr r1, [sp, #0x38] @ 038005c0
    ldr r2, [sp, #0x3c] @ 038005c4
    add r6, r6, r1 @ 038005c8
    add r7, r7, r2 @ 038005cc
    strh r0, [ip], #2 @ 038005d0
    subs lr, lr, #0x100 @ 038005d4
    bgt .L_03800588 @ 038005d8
    b .L_03800e34 @ 038005dc
.L_038005e0:
@ arm7_dispatch_038005e0 at 0x038005e0
    ands r1, lr, #0xf @ 038005e0
    addne r2, sl, sl, asr #16 @ 038005e4
    rsbne r1, r1, #0x10 @ 038005e8
    lslne r2, r2, #0x10 @ 038005ec
    asrne r1, r2, r1 @ 038005f0
    ldr r3, [sp, #0x20] @ 038005f4
    bic r0, r4, #0x8000 @ 038005f8
    add r0, r0, r1 @ 038005fc
    lsr r0, r0, #0x10 @ 03800600
    bic r0, r0, #0xfc00 @ 03800604
    ldr r2, [sb, r0, lsl #2] @ 03800608
    mov r0, #0 @ 0380060c
    add r2, r3, r2, lsl #1 @ 03800610
    cmp r2, #0x3400 @ 03800614
    ldrhlt r0, [r8, r2] @ 03800618
    orr sl, r0, sl, lsl #16 @ 0380061c
    mov r0, #0 @ 03800620
    ldr r3, [sp, #0x2c] @ 03800624
    lsr r0, r7, #0x10 @ 03800628
    bic r0, r0, #0xfc00 @ 0380062c
    ldr r2, [sb, r0, lsl #2] @ 03800630
    mov r0, #0 @ 03800634
    add r2, r3, r2, lsl #1 @ 03800638
    cmp r2, #0x3400 @ 0380063c
    ldrshlt r0, [r8, r2] @ 03800640
    add r0, r0, sl, asr #16 @ 03800644
    ldr r1, [sp, #0x30] @ 03800648
    ldr r2, [sp, #0x34] @ 0380064c
    add r4, r4, r1 @ 03800650
    add r5, r5, r2 @ 03800654
    ldr r1, [sp, #0x38] @ 03800658
    ldr r2, [sp, #0x3c] @ 0380065c
    add r6, r6, r1 @ 03800660
    add r7, r7, r2 @ 03800664
    strh r0, [ip], #2 @ 03800668
    subs lr, lr, #0x100 @ 0380066c
    bgt .L_038005e0 @ 03800670
    b .L_03800e34 @ 03800674
@ arm7_dispatch_03800678 at 0x03800678
    cmp lr, #0x200 @ 03800678
    lsl sl, sl, #0x10 @ 0380067c
    lslge sl, sl, #0x10 @ 03800680
.L_03800684:
    mov r0, #0 @ 03800684
    ldr r3, [sp, #0x24] @ 03800688
    lsr r0, r5, #0x10 @ 0380068c
    bic r0, r0, #0xfc00 @ 03800690
    ldr r2, [sb, r0, lsl #2] @ 03800694
    mov r0, #0 @ 03800698
    add r2, r3, r2, lsl #1 @ 0380069c
    cmp r2, #0x3400 @ 038006a0
    ldrshlt r0, [r8, r2] @ 038006a4
    add r0, r0, sl, asr #16 @ 038006a8
    ldr r1, [sp, #0x30] @ 038006ac
    ldr r2, [sp, #0x34] @ 038006b0
    add r4, r4, r1 @ 038006b4
    add r5, r5, r2 @ 038006b8
    ldr r1, [sp, #0x38] @ 038006bc
    ldr r2, [sp, #0x3c] @ 038006c0
    add r6, r6, r1 @ 038006c4
    add r7, r7, r2 @ 038006c8
    strh r0, [ip], #2 @ 038006cc
    subs lr, lr, #0x100 @ 038006d0
    bgt .L_03800684 @ 038006d4
    b .L_03800e34 @ 038006d8
.L_038006dc:
@ arm7_dispatch_038006dc at 0x038006dc
    ands r1, lr, #0xf @ 038006dc
    addne r2, sl, sl, asr #16 @ 038006e0
    rsbne r1, r1, #0x10 @ 038006e4
    lslne r2, r2, #0x10 @ 038006e8
    asrne r1, r2, r1 @ 038006ec
    ldr r3, [sp, #0x20] @ 038006f0
    bic r0, r4, #0x8000 @ 038006f4
    add r0, r0, r1 @ 038006f8
    lsr r0, r0, #0x10 @ 038006fc
    bic r0, r0, #0xfc00 @ 03800700
    ldr r2, [sb, r0, lsl #2] @ 03800704
    mov r0, #0 @ 03800708
    add r2, r3, r2, lsl #1 @ 0380070c
    cmp r2, #0x3400 @ 03800710
    ldrhlt r0, [r8, r2] @ 03800714
    orr sl, r0, sl, lsl #16 @ 03800718
    mov r0, #0 @ 0380071c
    ldr r3, [sp, #0x24] @ 03800720
    lsr r0, r5, #0x10 @ 03800724
    bic r0, r0, #0xfc00 @ 03800728
    ldr r2, [sb, r0, lsl #2] @ 0380072c
    mov r0, #0 @ 03800730
    add r2, r3, r2, lsl #1 @ 03800734
    cmp r2, #0x3400 @ 03800738
    ldrshlt r0, [r8, r2] @ 0380073c
    add r0, r0, sl, asr #16 @ 03800740
    ldr r1, [sp, #0x30] @ 03800744
    ldr r2, [sp, #0x34] @ 03800748
    add r4, r4, r1 @ 0380074c
    add r5, r5, r2 @ 03800750
    ldr r1, [sp, #0x38] @ 03800754
    ldr r2, [sp, #0x3c] @ 03800758
    add r6, r6, r1 @ 0380075c
    add r7, r7, r2 @ 03800760
    strh r0, [ip], #2 @ 03800764
    subs lr, lr, #0x100 @ 03800768
    bgt .L_038006dc @ 0380076c
    b .L_03800e34 @ 03800770
@ arm7_dispatch_03800774 at 0x03800774
    cmp lr, #0x200 @ 03800774
    lsl sl, sl, #0x10 @ 03800778
    lslge sl, sl, #0x10 @ 0380077c
.L_03800780:
    mov r0, #0 @ 03800780
    ldr r3, [sp, #0x24] @ 03800784
    lsr r0, r5, #0x10 @ 03800788
    bic r0, r0, #0xfc00 @ 0380078c
    ldr r2, [sb, r0, lsl #2] @ 03800790
    mov r0, #0 @ 03800794
    add r2, r3, r2, lsl #1 @ 03800798
    cmp r2, #0x3400 @ 0380079c
    ldrshlt r0, [r8, r2] @ 038007a0
    add r0, r0, sl, asr #16 @ 038007a4
    ldr r3, [sp, #0x2c] @ 038007a8
    lsr r1, r7, #0x10 @ 038007ac
    bic r1, r1, #0xfc00 @ 038007b0
    ldr r2, [sb, r1, lsl #2] @ 038007b4
    mov r1, #0 @ 038007b8
    add r2, r3, r2, lsl #1 @ 038007bc
    cmp r2, #0x3400 @ 038007c0
    ldrshlt r1, [r8, r2] @ 038007c4
    add r0, r0, r1 @ 038007c8
    ldr r1, [sp, #0x30] @ 038007cc
    ldr r2, [sp, #0x34] @ 038007d0
    add r4, r4, r1 @ 038007d4
    add r5, r5, r2 @ 038007d8
    ldr r1, [sp, #0x38] @ 038007dc
    ldr r2, [sp, #0x3c] @ 038007e0
    add r6, r6, r1 @ 038007e4
    add r7, r7, r2 @ 038007e8
    strh r0, [ip], #2 @ 038007ec
    subs lr, lr, #0x100 @ 038007f0
    bgt .L_03800780 @ 038007f4
    b .L_03800e34 @ 038007f8
.L_038007fc:
@ arm7_dispatch_038007fc at 0x038007fc
    ands r1, lr, #0xf @ 038007fc
    addne r2, sl, sl, asr #16 @ 03800800
    rsbne r1, r1, #0x10 @ 03800804
    lslne r2, r2, #0x10 @ 03800808
    asrne r1, r2, r1 @ 0380080c
    ldr r3, [sp, #0x20] @ 03800810
    bic r0, r4, #0x8000 @ 03800814
    add r0, r0, r1 @ 03800818
    lsr r0, r0, #0x10 @ 0380081c
    bic r0, r0, #0xfc00 @ 03800820
    ldr r2, [sb, r0, lsl #2] @ 03800824
    mov r0, #0 @ 03800828
    add r2, r3, r2, lsl #1 @ 0380082c
    cmp r2, #0x3400 @ 03800830
    ldrhlt r0, [r8, r2] @ 03800834
    orr sl, r0, sl, lsl #16 @ 03800838
    mov r0, #0 @ 0380083c
    ldr r3, [sp, #0x24] @ 03800840
    lsr r0, r5, #0x10 @ 03800844
    bic r0, r0, #0xfc00 @ 03800848
    ldr r2, [sb, r0, lsl #2] @ 0380084c
    mov r0, #0 @ 03800850
    add r2, r3, r2, lsl #1 @ 03800854
    cmp r2, #0x3400 @ 03800858
    ldrshlt r0, [r8, r2] @ 0380085c
    add r0, r0, sl, asr #16 @ 03800860
    ldr r3, [sp, #0x2c] @ 03800864
    lsr r1, r7, #0x10 @ 03800868
    bic r1, r1, #0xfc00 @ 0380086c
    ldr r2, [sb, r1, lsl #2] @ 03800870
    mov r1, #0 @ 03800874
    add r2, r3, r2, lsl #1 @ 03800878
    cmp r2, #0x3400 @ 0380087c
    ldrshlt r1, [r8, r2] @ 03800880
    add r0, r0, r1 @ 03800884
    ldr r1, [sp, #0x30] @ 03800888
    ldr r2, [sp, #0x34] @ 0380088c
    add r4, r4, r1 @ 03800890
    add r5, r5, r2 @ 03800894
    ldr r1, [sp, #0x38] @ 03800898
    ldr r2, [sp, #0x3c] @ 0380089c
    add r6, r6, r1 @ 038008a0
    add r7, r7, r2 @ 038008a4
    strh r0, [ip], #2 @ 038008a8
    subs lr, lr, #0x100 @ 038008ac
    bgt .L_038007fc @ 038008b0
    b .L_03800e34 @ 038008b4
@ arm7_dispatch_038008b8 at 0x038008b8
    cmp lr, #0x200 @ 038008b8
    lsl sl, sl, #0x10 @ 038008bc
    lslge sl, sl, #0x10 @ 038008c0
.L_038008c4:
    mov r0, #0 @ 038008c4
    ldr r3, [sp, #0x28] @ 038008c8
    lsr r0, r6, #0x10 @ 038008cc
    bic r0, r0, #0xfc00 @ 038008d0
    ldr r2, [sb, r0, lsl #2] @ 038008d4
    mov r0, #0 @ 038008d8
    add r2, r3, r2, lsl #1 @ 038008dc
    cmp r2, #0x3400 @ 038008e0
    ldrshlt r0, [r8, r2] @ 038008e4
    add r0, r0, sl, asr #16 @ 038008e8
    ldr r1, [sp, #0x30] @ 038008ec
    ldr r2, [sp, #0x34] @ 038008f0
    add r4, r4, r1 @ 038008f4
    add r5, r5, r2 @ 038008f8
    ldr r1, [sp, #0x38] @ 038008fc
    ldr r2, [sp, #0x3c] @ 03800900
    add r6, r6, r1 @ 03800904
    add r7, r7, r2 @ 03800908
    strh r0, [ip], #2 @ 0380090c
    subs lr, lr, #0x100 @ 03800910
    bgt .L_038008c4 @ 03800914
    b .L_03800e34 @ 03800918
.L_0380091c:
@ arm7_dispatch_0380091c at 0x0380091c
    ands r1, lr, #0xf @ 0380091c
    addne r2, sl, sl, asr #16 @ 03800920
    rsbne r1, r1, #0x10 @ 03800924
    lslne r2, r2, #0x10 @ 03800928
    asrne r1, r2, r1 @ 0380092c
    ldr r3, [sp, #0x20] @ 03800930
    bic r0, r4, #0x8000 @ 03800934
    add r0, r0, r1 @ 03800938
    lsr r0, r0, #0x10 @ 0380093c
    bic r0, r0, #0xfc00 @ 03800940
    ldr r2, [sb, r0, lsl #2] @ 03800944
    mov r0, #0 @ 03800948
    add r2, r3, r2, lsl #1 @ 0380094c
    cmp r2, #0x3400 @ 03800950
    ldrhlt r0, [r8, r2] @ 03800954
    orr sl, r0, sl, lsl #16 @ 03800958
    mov r0, #0 @ 0380095c
    ldr r3, [sp, #0x28] @ 03800960
    lsr r0, r6, #0x10 @ 03800964
    bic r0, r0, #0xfc00 @ 03800968
    ldr r2, [sb, r0, lsl #2] @ 0380096c
    mov r0, #0 @ 03800970
    add r2, r3, r2, lsl #1 @ 03800974
    cmp r2, #0x3400 @ 03800978
    ldrshlt r0, [r8, r2] @ 0380097c
    add r0, r0, sl, asr #16 @ 03800980
    ldr r1, [sp, #0x30] @ 03800984
    ldr r2, [sp, #0x34] @ 03800988
    add r4, r4, r1 @ 0380098c
    add r5, r5, r2 @ 03800990
    ldr r1, [sp, #0x38] @ 03800994
    ldr r2, [sp, #0x3c] @ 03800998
    add r6, r6, r1 @ 0380099c
    add r7, r7, r2 @ 038009a0
    strh r0, [ip], #2 @ 038009a4
    subs lr, lr, #0x100 @ 038009a8
    bgt .L_0380091c @ 038009ac
    b .L_03800e34 @ 038009b0
@ arm7_dispatch_038009b4 at 0x038009b4
    cmp lr, #0x200 @ 038009b4
    lsl sl, sl, #0x10 @ 038009b8
    lslge sl, sl, #0x10 @ 038009bc
.L_038009c0:
    mov r0, #0 @ 038009c0
    ldr r3, [sp, #0x28] @ 038009c4
    lsr r0, r6, #0x10 @ 038009c8
    bic r0, r0, #0xfc00 @ 038009cc
    ldr r2, [sb, r0, lsl #2] @ 038009d0
    mov r0, #0 @ 038009d4
    add r2, r3, r2, lsl #1 @ 038009d8
    cmp r2, #0x3400 @ 038009dc
    ldrshlt r0, [r8, r2] @ 038009e0
    add r0, r0, sl, asr #16 @ 038009e4
    ldr r3, [sp, #0x2c] @ 038009e8
    lsr r1, r7, #0x10 @ 038009ec
    bic r1, r1, #0xfc00 @ 038009f0
    ldr r2, [sb, r1, lsl #2] @ 038009f4
    mov r1, #0 @ 038009f8
    add r2, r3, r2, lsl #1 @ 038009fc
    cmp r2, #0x3400 @ 03800a00
    ldrshlt r1, [r8, r2] @ 03800a04
    add r0, r0, r1 @ 03800a08
    ldr r1, [sp, #0x30] @ 03800a0c
    ldr r2, [sp, #0x34] @ 03800a10
    add r4, r4, r1 @ 03800a14
    add r5, r5, r2 @ 03800a18
    ldr r1, [sp, #0x38] @ 03800a1c
    ldr r2, [sp, #0x3c] @ 03800a20
    add r6, r6, r1 @ 03800a24
    add r7, r7, r2 @ 03800a28
    strh r0, [ip], #2 @ 03800a2c
    subs lr, lr, #0x100 @ 03800a30
    bgt .L_038009c0 @ 03800a34
    b .L_03800e34 @ 03800a38
.L_03800a3c:
@ arm7_dispatch_03800a3c at 0x03800a3c
    ands r1, lr, #0xf @ 03800a3c
    addne r2, sl, sl, asr #16 @ 03800a40
    rsbne r1, r1, #0x10 @ 03800a44
    lslne r2, r2, #0x10 @ 03800a48
    asrne r1, r2, r1 @ 03800a4c
    ldr r3, [sp, #0x20] @ 03800a50
    bic r0, r4, #0x8000 @ 03800a54
    add r0, r0, r1 @ 03800a58
    lsr r0, r0, #0x10 @ 03800a5c
    bic r0, r0, #0xfc00 @ 03800a60
    ldr r2, [sb, r0, lsl #2] @ 03800a64
    mov r0, #0 @ 03800a68
    add r2, r3, r2, lsl #1 @ 03800a6c
    cmp r2, #0x3400 @ 03800a70
    ldrhlt r0, [r8, r2] @ 03800a74
    orr sl, r0, sl, lsl #16 @ 03800a78
    mov r0, #0 @ 03800a7c
    ldr r3, [sp, #0x28] @ 03800a80
    lsr r0, r6, #0x10 @ 03800a84
    bic r0, r0, #0xfc00 @ 03800a88
    ldr r2, [sb, r0, lsl #2] @ 03800a8c
    mov r0, #0 @ 03800a90
    add r2, r3, r2, lsl #1 @ 03800a94
    cmp r2, #0x3400 @ 03800a98
    ldrshlt r0, [r8, r2] @ 03800a9c
    add r0, r0, sl, asr #16 @ 03800aa0
    ldr r3, [sp, #0x2c] @ 03800aa4
    lsr r1, r7, #0x10 @ 03800aa8
    bic r1, r1, #0xfc00 @ 03800aac
    ldr r2, [sb, r1, lsl #2] @ 03800ab0
    mov r1, #0 @ 03800ab4
    add r2, r3, r2, lsl #1 @ 03800ab8
    cmp r2, #0x3400 @ 03800abc
    ldrshlt r1, [r8, r2] @ 03800ac0
    add r0, r0, r1 @ 03800ac4
    ldr r1, [sp, #0x30] @ 03800ac8
    ldr r2, [sp, #0x34] @ 03800acc
    add r4, r4, r1 @ 03800ad0
    add r5, r5, r2 @ 03800ad4
    ldr r1, [sp, #0x38] @ 03800ad8
    ldr r2, [sp, #0x3c] @ 03800adc
    add r6, r6, r1 @ 03800ae0
    add r7, r7, r2 @ 03800ae4
    strh r0, [ip], #2 @ 03800ae8
    subs lr, lr, #0x100 @ 03800aec
    bgt .L_03800a3c @ 03800af0
    b .L_03800e34 @ 03800af4
@ arm7_dispatch_03800af8 at 0x03800af8
    cmp lr, #0x200 @ 03800af8
    lsl sl, sl, #0x10 @ 03800afc
    lslge sl, sl, #0x10 @ 03800b00
.L_03800b04:
    mov r0, #0 @ 03800b04
    ldr r3, [sp, #0x28] @ 03800b08
    lsr r0, r6, #0x10 @ 03800b0c
    bic r0, r0, #0xfc00 @ 03800b10
    ldr r2, [sb, r0, lsl #2] @ 03800b14
    mov r0, #0 @ 03800b18
    add r2, r3, r2, lsl #1 @ 03800b1c
    cmp r2, #0x3400 @ 03800b20
    ldrshlt r0, [r8, r2] @ 03800b24
    add r0, r0, sl, asr #16 @ 03800b28
    ldr r3, [sp, #0x24] @ 03800b2c
    lsr r1, r5, #0x10 @ 03800b30
    bic r1, r1, #0xfc00 @ 03800b34
    ldr r2, [sb, r1, lsl #2] @ 03800b38
    mov r1, #0 @ 03800b3c
    add r2, r3, r2, lsl #1 @ 03800b40
    cmp r2, #0x3400 @ 03800b44
    ldrshlt r1, [r8, r2] @ 03800b48
    add r0, r0, r1 @ 03800b4c
    ldr r1, [sp, #0x30] @ 03800b50
    ldr r2, [sp, #0x34] @ 03800b54
    add r4, r4, r1 @ 03800b58
    add r5, r5, r2 @ 03800b5c
    ldr r1, [sp, #0x38] @ 03800b60
    ldr r2, [sp, #0x3c] @ 03800b64
    add r6, r6, r1 @ 03800b68
    add r7, r7, r2 @ 03800b6c
    strh r0, [ip], #2 @ 03800b70
    subs lr, lr, #0x100 @ 03800b74
    bgt .L_03800b04 @ 03800b78
    b .L_03800e34 @ 03800b7c
.L_03800b80:
@ arm7_dispatch_03800b80 at 0x03800b80
    ands r1, lr, #0xf @ 03800b80
    addne r2, sl, sl, asr #16 @ 03800b84
    rsbne r1, r1, #0x10 @ 03800b88
    lslne r2, r2, #0x10 @ 03800b8c
    asrne r1, r2, r1 @ 03800b90
    ldr r3, [sp, #0x20] @ 03800b94
    bic r0, r4, #0x8000 @ 03800b98
    add r0, r0, r1 @ 03800b9c
    lsr r0, r0, #0x10 @ 03800ba0
    bic r0, r0, #0xfc00 @ 03800ba4
    ldr r2, [sb, r0, lsl #2] @ 03800ba8
    mov r0, #0 @ 03800bac
    add r2, r3, r2, lsl #1 @ 03800bb0
    cmp r2, #0x3400 @ 03800bb4
    ldrhlt r0, [r8, r2] @ 03800bb8
    orr sl, r0, sl, lsl #16 @ 03800bbc
    mov r0, #0 @ 03800bc0
    ldr r3, [sp, #0x28] @ 03800bc4
    lsr r0, r6, #0x10 @ 03800bc8
    bic r0, r0, #0xfc00 @ 03800bcc
    ldr r2, [sb, r0, lsl #2] @ 03800bd0
    mov r0, #0 @ 03800bd4
    add r2, r3, r2, lsl #1 @ 03800bd8
    cmp r2, #0x3400 @ 03800bdc
    ldrshlt r0, [r8, r2] @ 03800be0
    add r0, r0, sl, asr #16 @ 03800be4
    ldr r3, [sp, #0x24] @ 03800be8
    lsr r1, r5, #0x10 @ 03800bec
    bic r1, r1, #0xfc00 @ 03800bf0
    ldr r2, [sb, r1, lsl #2] @ 03800bf4
    mov r1, #0 @ 03800bf8
    add r2, r3, r2, lsl #1 @ 03800bfc
    cmp r2, #0x3400 @ 03800c00
    ldrshlt r1, [r8, r2] @ 03800c04
    add r0, r0, r1 @ 03800c08
    ldr r1, [sp, #0x30] @ 03800c0c
    ldr r2, [sp, #0x34] @ 03800c10
    add r4, r4, r1 @ 03800c14
    add r5, r5, r2 @ 03800c18
    ldr r1, [sp, #0x38] @ 03800c1c
    ldr r2, [sp, #0x3c] @ 03800c20
    add r6, r6, r1 @ 03800c24
    add r7, r7, r2 @ 03800c28
    strh r0, [ip], #2 @ 03800c2c
    subs lr, lr, #0x100 @ 03800c30
    bgt .L_03800b80 @ 03800c34
    b .L_03800e34 @ 03800c38
@ arm7_dispatch_03800c3c at 0x03800c3c
    cmp lr, #0x200 @ 03800c3c
    lsl sl, sl, #0x10 @ 03800c40
    lslge sl, sl, #0x10 @ 03800c44
.L_03800c48:
    mov r0, #0 @ 03800c48
    ldr r3, [sp, #0x28] @ 03800c4c
    lsr r0, r6, #0x10 @ 03800c50
    bic r0, r0, #0xfc00 @ 03800c54
    ldr r2, [sb, r0, lsl #2] @ 03800c58
    mov r0, #0 @ 03800c5c
    add r2, r3, r2, lsl #1 @ 03800c60
    cmp r2, #0x3400 @ 03800c64
    ldrshlt r0, [r8, r2] @ 03800c68
    add r0, r0, sl, asr #16 @ 03800c6c
    ldr r3, [sp, #0x24] @ 03800c70
    lsr r1, r5, #0x10 @ 03800c74
    bic r1, r1, #0xfc00 @ 03800c78
    ldr r2, [sb, r1, lsl #2] @ 03800c7c
    mov r1, #0 @ 03800c80
    add r2, r3, r2, lsl #1 @ 03800c84
    cmp r2, #0x3400 @ 03800c88
    ldrshlt r1, [r8, r2] @ 03800c8c
    add r0, r0, r1 @ 03800c90
    ldr r3, [sp, #0x2c] @ 03800c94
    lsr r1, r7, #0x10 @ 03800c98
    bic r1, r1, #0xfc00 @ 03800c9c
    ldr r2, [sb, r1, lsl #2] @ 03800ca0
    mov r1, #0 @ 03800ca4
    add r2, r3, r2, lsl #1 @ 03800ca8
    cmp r2, #0x3400 @ 03800cac
    ldrshlt r1, [r8, r2] @ 03800cb0
    add r0, r0, r1 @ 03800cb4
    ldr r1, [sp, #0x30] @ 03800cb8
    ldr r2, [sp, #0x34] @ 03800cbc
    add r4, r4, r1 @ 03800cc0
    add r5, r5, r2 @ 03800cc4
    ldr r1, [sp, #0x38] @ 03800cc8
    ldr r2, [sp, #0x3c] @ 03800ccc
    add r6, r6, r1 @ 03800cd0
    add r7, r7, r2 @ 03800cd4
    strh r0, [ip], #2 @ 03800cd8
    subs lr, lr, #0x100 @ 03800cdc
    bgt .L_03800c48 @ 03800ce0
    b .L_03800e34 @ 03800ce4
.L_03800ce8:
@ arm7_dispatch_03800ce8 at 0x03800ce8
    ands r1, lr, #0xf @ 03800ce8
    addne r2, sl, sl, asr #16 @ 03800cec
    rsbne r1, r1, #0x10 @ 03800cf0
    lslne r2, r2, #0x10 @ 03800cf4
    asrne r1, r2, r1 @ 03800cf8
    ldr r3, [sp, #0x20] @ 03800cfc
    bic r0, r4, #0x8000 @ 03800d00
    add r0, r0, r1 @ 03800d04
    lsr r0, r0, #0x10 @ 03800d08
    bic r0, r0, #0xfc00 @ 03800d0c
    ldr r2, [sb, r0, lsl #2] @ 03800d10
    mov r0, #0 @ 03800d14
    add r2, r3, r2, lsl #1 @ 03800d18
    cmp r2, #0x3400 @ 03800d1c
    ldrhlt r0, [r8, r2] @ 03800d20
    orr sl, r0, sl, lsl #16 @ 03800d24
    mov r0, #0 @ 03800d28
    ldr r3, [sp, #0x28] @ 03800d2c
    lsr r0, r6, #0x10 @ 03800d30
    bic r0, r0, #0xfc00 @ 03800d34
    ldr r2, [sb, r0, lsl #2] @ 03800d38
    mov r0, #0 @ 03800d3c
    add r2, r3, r2, lsl #1 @ 03800d40
    cmp r2, #0x3400 @ 03800d44
    ldrshlt r0, [r8, r2] @ 03800d48
    add r0, r0, sl, asr #16 @ 03800d4c
    ldr r3, [sp, #0x24] @ 03800d50
    lsr r1, r5, #0x10 @ 03800d54
    bic r1, r1, #0xfc00 @ 03800d58
    ldr r2, [sb, r1, lsl #2] @ 03800d5c
    mov r1, #0 @ 03800d60
    add r2, r3, r2, lsl #1 @ 03800d64
    cmp r2, #0x3400 @ 03800d68
    ldrshlt r1, [r8, r2] @ 03800d6c
    add r0, r0, r1 @ 03800d70
    ldr r3, [sp, #0x2c] @ 03800d74
    lsr r1, r7, #0x10 @ 03800d78
    bic r1, r1, #0xfc00 @ 03800d7c
    ldr r2, [sb, r1, lsl #2] @ 03800d80
    mov r1, #0 @ 03800d84
    add r2, r3, r2, lsl #1 @ 03800d88
    cmp r2, #0x3400 @ 03800d8c
    ldrshlt r1, [r8, r2] @ 03800d90
    add r0, r0, r1 @ 03800d94
    ldr r1, [sp, #0x30] @ 03800d98
    ldr r2, [sp, #0x34] @ 03800d9c
    add r4, r4, r1 @ 03800da0
    add r5, r5, r2 @ 03800da4
    ldr r1, [sp, #0x38] @ 03800da8
    ldr r2, [sp, #0x3c] @ 03800dac
    add r6, r6, r1 @ 03800db0
    add r7, r7, r2 @ 03800db4
    strh r0, [ip], #2 @ 03800db8
    subs lr, lr, #0x100 @ 03800dbc
    bgt .L_03800ce8 @ 03800dc0
    b .L_03800e34 @ 03800dc4
    .zero 8
.L_03800dd0:
@ FUN_03800dd0 at 0x03800dd0
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 03800dd0
    str sp, [r0, #0x48] @ 03800dd4
    mov sp, r0 @ 03800dd8
    ldr r4, [sp, #0x44] @ 03800ddc
    mov ip, r1 @ 03800de0
    and r4, r4, #0xf @ 03800de4
    orr lr, r4, r2, lsl #8 @ 03800de8
    ldm r0!, {r4, r5, r6, r7, r8, sb, sl, fp} @ 03800dec
    ldr r1, [sp, #0x40] @ 03800df0
    and r1, r1, #7 @ 03800df4
    lsl r1, r1, #4 @ 03800df8
    ldr r2, [sp, #0x20] @ 03800dfc
    ldr r3, [sp, #0x28] @ 03800e00
    cmp r2, #0x3400 @ 03800e04
    orrlt r1, r1, #8 @ 03800e08
    cmp r3, #0x3400 @ 03800e0c
    orrlt r1, r1, #4 @ 03800e10
    ldr r2, [sp, #0x24] @ 03800e14
    ldr r3, [sp, #0x2c] @ 03800e18
    cmp r2, #0x3400 @ 03800e1c
    ldr r2, [pc, #0x228] @ 03800e20
    orrlt r1, r1, #2 @ 03800e24
    cmp r3, #0x3400 @ 03800e28
    orrlt r1, r1, #1 @ 03800e2c
    ldr pc, [r2, r1, lsl #2] @ 03800e30
.L_03800e34:
    mov r0, sp @ 03800e34
    stm r0!, {r4, r5, r6, r7, r8, sb, sl, fp} @ 03800e38
    ldr sp, [sp, #0x48] @ 03800e3c
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 03800e40
    .zero 12
arm7_dispatch_table:
    .word 0x037fc590, 0x037fc5d4, 0x037fc748, 0x037fc7b8, 0x037fc9a8, 0x037fc9f0, 0x037fcbc8, 0x037fcc38
    .word 0x037fc638, 0x037fc6b0, 0x037fc844, 0x037fc8e8, 0x037fca84, 0x037fcb00, 0x037fccf4, 0x037fcd98
    .word 0x037fce88, 0x037fced0, 0x037fd048, 0x037fd0b0, 0x037fd288, 0x037fd2d0, 0x037fd4a8, 0x037fd510
    .word 0x037fcf34, 0x037fcfb0, 0x037fd134, 0x037fd1d0, 0x037fd364, 0x037fd3e0, 0x037fd5c4, 0x037fd660
    .word 0x037fd748, 0x037fd78c, 0x037fd918, 0x037fd97c, 0x037fdb60, 0x037fdba4, 0x037fdd80, 0x037fdde4
    .word 0x037fd7fc, 0x037fd874, 0x037fda08, 0x037fdaa0, 0x037fdc3c, 0x037fdcb4, 0x037fde98, 0x037fdf30
    .word 0x037fe018, 0x037fe05c, 0x037fe1e0, 0x037fe250, 0x037fe450, 0x037fe494, 0x037fe660, 0x037fe6d0
    .word 0x037fe0c8, 0x037fe140, 0x037fe2e4, 0x037fe388, 0x037fe524, 0x037fe59c, 0x037fe788, 0x037fe82c
    .word 0x037fe918, 0x037fe9cc, 0x037feac0, 0x037febcc, 0x037fed20, 0x037fedd4, 0x037fef18, 0x037ff024
    .word 0x037fe958, 0x037fea2c, 0x037feb2c, 0x037fec5c, 0x037fed60, 0x037fee5c, 0x037fef84, 0x037ff0e0
    .word 0x037ff1d0, 0x037ff28c, 0x037ff398, 0x037ff4a4, 0x037ff608, 0x037ff714, 0x037ff878, 0x037ff9dc
    .word 0x037ff214, 0x037ff2f8, 0x037ff404, 0x037ff53c, 0x037ff674, 0x037ff7ac, 0x037ff910, 0x037ffaa0
    .word 0x037ffb98, 0x037ffc4c, 0x037ffd40, 0x037ffe4c, 0x037fffa0, 0x03800094, 0x038001d0, 0x03800324
    .word 0x037ffbd8, 0x037ffcac, 0x037ffdac, 0x037ffedc, 0x03800000, 0x03800118, 0x03800260, 0x038003d8
    .word 0x038004c0, 0x0380057c, 0x03800678, 0x03800774, 0x038008b8, 0x038009b4, 0x03800af8, 0x03800c3c
    .word 0x03800504, 0x038005e0, 0x038006dc, 0x038007fc, 0x0380091c, 0x03800a3c, 0x03800b80, 0x03800ce8
    .byte 0x50, 0x0e, 0x80, 0x03, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46 @ 03801050
@ FUN_03801060 at 0x03801060
.thumb
    push {r4, r5, r6, r7, lr} @ 03801060
    adds r4, r0, #0 @ 03801062
    adds r5, r1, #0 @ 03801064
    cmp r1, #0 @ 03801066
    beq .L_03801086 @ 03801068
    movs r0, #0 @ 0380106a
    movs r6, #0xf @ 0380106c
.L_0380106e:
    ldrb r3, [r0, r4] @ 0380106e
    adds r1, r3, #0 @ 03801070
    lsrs r3, r3, #4 @ 03801072
    lsls r2, r3, #2 @ 03801074
    adds r2, r2, r3 @ 03801076
    ands r1, r6 @ 03801078
    lsls r2, r2, #1 @ 0380107a
    adds r1, r1, r2 @ 0380107c
    strb r1, [r0, r4] @ 0380107e
    adds r0, #1 @ 03801080
    cmp r5, r0 @ 03801082
    bne .L_0380106e @ 03801084
.L_03801086:
    pop {r4, r5, r6, r7} @ 03801086
    pop {r0} @ 03801088
    bx r0 @ 0380108a
@ FUN_0380108c at 0x0380108c
    push {r4, r5, r6, r7, lr} @ 0380108c
    mov r7, r8 @ 0380108e
    push {r7} @ 03801090
    sub sp, #8 @ 03801092
    adds r5, r0, #0 @ 03801094
    adds r6, r1, #0 @ 03801096
    cmp r1, #0 @ 03801098
    beq .L_038010bc @ 0380109a
    movs r4, #0 @ 0380109c
    add r7, sp, #4 @ 0380109e
.L_038010a0:
    ldrb r0, [r4, r5] @ 038010a0
    mov r2, sp @ 038010a2
    adds r3, r7, #0 @ 038010a4
    movs r1, #0xa @ 038010a6
    bl .L_038017a2 @ 038010a8
    ldr r3, [sp] @ 038010ac
    ldr r2, [sp, #4] @ 038010ae
    lsls r3, r3, #4 @ 038010b0
    orrs r3, r2 @ 038010b2
    strb r3, [r4, r5] @ 038010b4
    adds r4, #1 @ 038010b6
    cmp r6, r4 @ 038010b8
    bne .L_038010a0 @ 038010ba
.L_038010bc:
    add sp, #8 @ 038010bc
    pop {r2} @ 038010be
    mov r8, r2 @ 038010c0
    pop {r4, r5, r6, r7} @ 038010c2
    pop {r0} @ 038010c4
    bx r0 @ 038010c6
.L_038010c8:
@ FUN_038010c8 at 0x038010c8
    push {r4, r5, r6, r7, lr} @ 038010c8
    mov r7, fp @ 038010ca
    mov r6, sl @ 038010cc
    mov r5, sb @ 038010ce
    mov r4, r8 @ 038010d0
    push {r4, r5, r6, r7} @ 038010d2
    ldr r4, [pc, #0xd4] @ 038010d4
    mov sb, r3 @ 038010d6
    movs r3, #0x73 @ 038010d8
    sub sp, #4 @ 038010da
    strb r3, [r4] @ 038010dc
    mov sl, r0 @ 038010de
    movs r0, #0x30 @ 038010e0
    mov r8, r1 @ 038010e2
    mov fp, r2 @ 038010e4
    bl .L_03801784 @ 038010e6
    movs r3, #0x77 @ 038010ea
    strb r3, [r4] @ 038010ec
    movs r0, #0x30 @ 038010ee
    bl .L_03801784 @ 038010f0
    mov r3, r8 @ 038010f4
    cmp r3, #0 @ 038010f6
    beq .L_0380113e @ 038010f8
    adds r7, r4, #0 @ 038010fa
.L_038010fc:
    mov r3, sl @ 038010fc
    ldrb r5, [r3] @ 038010fe
    movs r3, #1 @ 03801100
    add sl, r3 @ 03801102
    movs r6, #0 @ 03801104
.L_03801106:
    lsrs r4, r5, #7 @ 03801106
    movs r3, #0x74 @ 03801108
    orrs r3, r4 @ 0380110a
    lsls r3, r3, #0x18 @ 0380110c
    lsrs r3, r3, #0x18 @ 0380110e
    strb r3, [r7] @ 03801110
    movs r0, #0x30 @ 03801112
    bl .L_03801784 @ 03801114
    movs r3, #0x76 @ 03801118
    orrs r4, r3 @ 0380111a
    lsls r4, r4, #0x18 @ 0380111c
    lsrs r4, r4, #0x18 @ 0380111e
    strb r4, [r7] @ 03801120
    movs r0, #0x30 @ 03801122
    bl .L_03801784 @ 03801124
    adds r6, #1 @ 03801128
    lsls r3, r5, #0x19 @ 0380112a
    lsrs r5, r3, #0x18 @ 0380112c
    cmp r6, #8 @ 0380112e
    bne .L_03801106 @ 03801130
    movs r3, #1 @ 03801132
    negs r3, r3 @ 03801134
    add r8, r3 @ 03801136
    mov r3, r8 @ 03801138
    cmp r3, #0 @ 0380113a
    bne .L_038010fc @ 0380113c
.L_0380113e:
    mov r3, sb @ 0380113e
    cmp r3, #0 @ 03801140
    beq .L_0380118c @ 03801142
.L_03801144:
    movs r5, #0 @ 03801144
    movs r6, #0 @ 03801146
.L_03801148:
    ldr r4, [pc, #0x60] @ 03801148
    movs r3, #0x64 @ 0380114a
    strb r3, [r4] @ 0380114c
    movs r0, #0x30 @ 0380114e
    bl .L_03801784 @ 03801150
    movs r3, #0x66 @ 03801154
    strb r3, [r4] @ 03801156
    movs r0, #0x30 @ 03801158
    bl .L_03801784 @ 0380115a
    ldrb r3, [r4] @ 0380115e
    movs r2, #1 @ 03801160
    tst r3, r2 @ 03801162
    beq .L_03801170 @ 03801164
    adds r3, r2, #0 @ 03801166
    lsls r3, r5 @ 03801168
    orrs r3, r6 @ 0380116a
    lsls r3, r3, #0x18 @ 0380116c
    lsrs r6, r3, #0x18 @ 0380116e
.L_03801170:
    adds r5, #1 @ 03801170
    cmp r5, #8 @ 03801172
    bne .L_03801148 @ 03801174
    mov r3, fp @ 03801176
    strb r6, [r3] @ 03801178
    movs r3, #1 @ 0380117a
    negs r3, r3 @ 0380117c
    add sb, r3 @ 0380117e
    mov r3, sb @ 03801180
    cmp r3, #0 @ 03801182
    beq .L_0380118c @ 03801184
    movs r3, #1 @ 03801186
    add fp, r3 @ 03801188
    b .L_03801144 @ 0380118a
.L_0380118c:
    ldr r3, [pc, #0x1c] @ 0380118c
    movs r2, #0x62 @ 0380118e
    strb r2, [r3] @ 03801190
    movs r0, #0x30 @ 03801192
    bl .L_03801784 @ 03801194
    add sp, #4 @ 03801198
    pop {r2, r3, r4, r5} @ 0380119a
    mov r8, r2 @ 0380119c
    mov sb, r3 @ 0380119e
    mov sl, r4 @ 038011a0
    mov fp, r5 @ 038011a2
    pop {r4, r5, r6, r7} @ 038011a4
    pop {r0} @ 038011a6
    bx r0 @ 038011a8
    .byte 0x00, 0x00, 0x38, 0x01, 0x00, 0x04, 0x00, 0xb5, 0x64, 0x23, 0x81, 0xb0, 0x03, 0x70, 0x08, 0x21 @ 038011aa
    .byte 0x00, 0x22, 0x00, 0x23, 0xff, 0xf7, 0x83, 0xff, 0x01, 0xb0, 0x01, 0xbc, 0x00, 0x47, 0x30, 0xb5 @ 038011ba
    .byte 0x65, 0x23, 0x83, 0xb0, 0x03, 0x70, 0x42, 0x1c, 0x01, 0x21, 0x07, 0x23, 0x04, 0x1c, 0x6d, 0x46 @ 038011ca
    .byte 0xff, 0xf7, 0x75, 0xff, 0x68, 0x46, 0x07, 0x35, 0x06, 0x30, 0x61, 0x23, 0x03, 0x70, 0x2a, 0x1c @ 038011da
    .byte 0x01, 0x21, 0x01, 0x23, 0xff, 0xf7, 0x6b, 0xff, 0x2b, 0x78, 0x03, 0xb0, 0x23, 0x70, 0x30, 0xbc @ 038011ea
    .byte 0x01, 0xbc, 0x00, 0x47, 0x00, 0x00 @ 038011fa
@ FUN_03801200 at 0x03801200
    push {r4, r5, lr} @ 03801200
    sub sp, #0xc @ 03801202
    mov r5, sp @ 03801204
    mov r4, sp @ 03801206
    adds r5, #5 @ 03801208
    movs r3, #0x61 @ 0380120a
    adds r4, #7 @ 0380120c
    strb r3, [r5] @ 0380120e
    adds r2, r4, #0 @ 03801210
    movs r3, #1 @ 03801212
    adds r0, r5, #0 @ 03801214
    movs r1, #1 @ 03801216
    bl .L_038010c8 @ 03801218
    ldrb r2, [r4] @ 0380121c
    movs r3, #0xc0 @ 0380121e
    tst r2, r3 @ 03801220
    beq .L_0380123a @ 03801222
    movs r3, #0x60 @ 03801224
    strb r3, [r5] @ 03801226
    movs r3, #1 @ 03801228
    orrs r3, r2 @ 0380122a
    strb r3, [r5, #1] @ 0380122c
    adds r0, r5, #0 @ 0380122e
    movs r1, #2 @ 03801230
    movs r2, #0 @ 03801232
    movs r3, #0 @ 03801234
    bl .L_038010c8 @ 03801236
.L_0380123a:
    add sp, #0xc @ 0380123a
    pop {r4, r5} @ 0380123c
    pop {r0} @ 0380123e
    bx r0 @ 03801240
    .byte 0xc0, 0x46 @ 03801242
.L_03801244:
@ FUN_03801244 at 0x03801244
    push {r4, r5, r6, lr} @ 03801244
    mov r6, r8 @ 03801246
    push {r6} @ 03801248
    ldr r2, [pc, #0xb0] @ 0380124a
    ldrh r3, [r2] @ 0380124c
    mov r8, r3 @ 0380124e
    movs r3, #0 @ 03801250
    strh r3, [r2] @ 03801252
    subs r2, #0x48 @ 03801254
    ldrh r3, [r2] @ 03801256
    sub sp, #4 @ 03801258
    adds r6, r0, #0 @ 0380125a
    lsls r1, r3, #0x18 @ 0380125c
    bpl .L_03801270 @ 0380125e
    adds r5, r2, #0 @ 03801260
    movs r4, #0x80 @ 03801262
.L_03801264:
    movs r0, #1 @ 03801264
    bl .L_03801784 @ 03801266
    ldrh r3, [r5] @ 0380126a
    tst r3, r4 @ 0380126c
    bne .L_03801264 @ 0380126e
.L_03801270:
    ldr r1, [pc, #0x8c] @ 03801270
    ldr r3, [pc, #0x90] @ 03801272
    ldr r2, [pc, #0x90] @ 03801274
    strh r3, [r1] @ 03801276
    lsls r3, r6, #0x10 @ 03801278
    lsrs r3, r3, #0x10 @ 0380127a
    strh r3, [r2] @ 0380127c
    ldrh r3, [r1] @ 0380127e
    lsls r2, r3, #0x18 @ 03801280
    bpl .L_03801294 @ 03801282
    adds r5, r1, #0 @ 03801284
    movs r4, #0x80 @ 03801286
.L_03801288:
    movs r0, #1 @ 03801288
    bl .L_03801784 @ 0380128a
    ldrh r3, [r5] @ 0380128e
    tst r3, r4 @ 03801290
    bne .L_03801288 @ 03801292
.L_03801294:
    ldr r2, [pc, #0x70] @ 03801294
    movs r3, #0 @ 03801296
    strh r3, [r2] @ 03801298
    subs r2, #2 @ 0380129a
    ldrh r3, [r2] @ 0380129c
    lsls r1, r3, #0x18 @ 0380129e
    bpl .L_038012b2 @ 038012a0
    adds r5, r2, #0 @ 038012a2
    movs r4, #0x80 @ 038012a4
.L_038012a6:
    movs r0, #1 @ 038012a6
    bl .L_03801784 @ 038012a8
    ldrh r3, [r5] @ 038012ac
    tst r3, r4 @ 038012ae
    bne .L_038012a6 @ 038012b0
.L_038012b2:
    ldr r2, [pc, #0x54] @ 038012b2
    ldrh r3, [r2] @ 038012b4
    ldr r1, [pc, #0x48] @ 038012b6
    adds r6, r3, #0 @ 038012b8
    ldr r3, [pc, #0x50] @ 038012ba
    strh r3, [r1] @ 038012bc
    movs r3, #0 @ 038012be
    strh r3, [r2] @ 038012c0
    ldrh r3, [r1] @ 038012c2
    lsls r2, r3, #0x18 @ 038012c4
    bpl .L_038012d8 @ 038012c6
    adds r5, r1, #0 @ 038012c8
    movs r4, #0x80 @ 038012ca
.L_038012cc:
    movs r0, #1 @ 038012cc
    bl .L_03801784 @ 038012ce
    ldrh r3, [r5] @ 038012d2
    tst r3, r4 @ 038012d4
    bne .L_038012cc @ 038012d6
.L_038012d8:
    ldr r3, [pc, #0x2c] @ 038012d8
    mov r1, r8 @ 038012da
    ldrh r2, [r3] @ 038012dc
    adds r3, #0x46 @ 038012de
    adds r0, r6, #0 @ 038012e0
    strh r1, [r3] @ 038012e2
    movs r3, #0x7f @ 038012e4
    ands r0, r3 @ 038012e6
    lsrs r2, r2, #3 @ 038012e8
    lsls r0, r0, #5 @ 038012ea
    orrs r0, r2 @ 038012ec
    add sp, #4 @ 038012ee
    pop {r2} @ 038012f0
    mov r8, r2 @ 038012f2
    pop {r4, r5, r6} @ 038012f4
    pop {r1} @ 038012f6
    bx r1 @ 038012f8
    .byte 0x00, 0x00, 0x08, 0x02, 0x00, 0x04, 0xc0, 0x01, 0x00, 0x04, 0x01, 0x8a, 0xff, 0xff, 0xc2, 0x01 @ 038012fa
    .byte 0x00, 0x04, 0x01, 0x82, 0xff, 0xff @ 0380130a
.L_03801310:
@ FUN_03801310 at 0x03801310
    push {r4, r5, r6, r7, lr} @ 03801310
    mov r7, r8 @ 03801312
    push {r7} @ 03801314
    movs r3, #1 @ 03801316
    adds r5, r0, #0 @ 03801318
    orrs r5, r3 @ 0380131a
    adds r0, r5, #0 @ 0380131c
    mov r8, r1 @ 0380131e
    adds r6, r2, #0 @ 03801320
    bl .L_03801244 @ 03801322
    mov r3, r8 @ 03801326
    adds r4, r0, #0 @ 03801328
    cmp r3, #0 @ 0380132a
    ble .L_03801358 @ 0380132c
    movs r7, #0 @ 0380132e
.L_03801330:
    adds r0, r5, #0 @ 03801330
    bl .L_03801244 @ 03801332
    subs r3, r4, r0 @ 03801336
    bmi .L_03801354 @ 03801338
.L_0380133a:
    cmp r6, r3 @ 0380133a
    bge .L_03801344 @ 0380133c
    adds r7, #1 @ 0380133e
    cmp r8, r7 @ 03801340
    bne .L_03801330 @ 03801342
.L_03801344:
    cmp r7, r6 @ 03801344
    bne .L_0380134a @ 03801346
    movs r0, #0 @ 03801348
.L_0380134a:
    pop {r2} @ 0380134a
    mov r8, r2 @ 0380134c
    pop {r4, r5, r6, r7} @ 0380134e
    pop {r1} @ 03801350
    bx r1 @ 03801352
.L_03801354:
    negs r3, r3 @ 03801354
    b .L_0380133a @ 03801356
.L_03801358:
    movs r0, #0 @ 03801358
    movs r7, #0 @ 0380135a
    b .L_03801344 @ 0380135c
    .zero 2
@ FUN_03801360 at 0x03801360
    push {r4, r5, r6, r7, lr} @ 03801360
    mov r7, fp @ 03801362
    mov r6, sl @ 03801364
    mov r5, sb @ 03801366
    mov r4, r8 @ 03801368
    push {r4, r5, r6, r7} @ 0380136a
    ldr r1, [pc, #0x1a4] @ 0380136c
    ldrb r3, [r1] @ 0380136e
    sub sp, #0x1c @ 03801370
    adds r7, r0, #0 @ 03801372
    str r1, [sp, #0xc] @ 03801374
    cmp r3, #0 @ 03801376
    beq .L_0380137c @ 03801378
    b .L_038014fa @ 0380137a
.L_0380137c:
    ldr r4, [pc, #0x198] @ 0380137c
    movs r3, #0x62 @ 0380137e
    ldrb r3, [r4, r3] @ 03801380
    str r3, [sp, #0x10] @ 03801382
    movs r3, #0x5c @ 03801384
    ldrb r3, [r4, r3] @ 03801386
    mov sb, r3 @ 03801388
    movs r3, #0x5e @ 0380138a
    ldrb r2, [r4, r3] @ 0380138c
    movs r3, #0x5f @ 0380138e
    ldrb r3, [r4, r3] @ 03801390
    lsls r3, r3, #8 @ 03801392
    orrs r3, r2 @ 03801394
    mov sl, r3 @ 03801396
    movs r3, #0x58 @ 03801398
    ldrb r2, [r4, r3] @ 0380139a
    movs r3, #0x59 @ 0380139c
    ldrb r5, [r4, r3] @ 0380139e
    ldr r1, [sp, #0x10] @ 038013a0
    lsls r5, r5, #8 @ 038013a2
    orrs r5, r2 @ 038013a4
    mov r2, sb @ 038013a6
    subs r0, r1, r2 @ 038013a8
    mov r3, sl @ 038013aa
    subs r1, r3, r5 @ 038013ac
    lsls r0, r0, #0x13 @ 038013ae
    bl .L_037f8144 @ 038013b0
    ldr r1, [pc, #0x164] @ 038013b4
    str r0, [r1] @ 038013b6
    str r1, [sp, #8] @ 038013b8
    movs r3, #0x63 @ 038013ba
    ldrb r3, [r4, r3] @ 038013bc
    str r3, [sp, #0x14] @ 038013be
    movs r3, #0x5d @ 038013c0
    ldrb r3, [r4, r3] @ 038013c2
    mov r8, r3 @ 038013c4
    movs r3, #0x60 @ 038013c6
    ldrb r2, [r4, r3] @ 038013c8
    movs r3, #0x61 @ 038013ca
    ldrb r6, [r4, r3] @ 038013cc
    movs r3, #0x5a @ 038013ce
    lsls r6, r6, #8 @ 038013d0
    orrs r6, r2 @ 038013d2
    ldrb r2, [r4, r3] @ 038013d4
    movs r3, #0x5b @ 038013d6
    ldrb r4, [r4, r3] @ 038013d8
    lsls r4, r4, #8 @ 038013da
    orrs r4, r2 @ 038013dc
    ldr r2, [sp, #0x14] @ 038013de
    mov r3, r8 @ 038013e0
    mov fp, r0 @ 038013e2
    subs r0, r2, r3 @ 038013e4
    subs r1, r6, r4 @ 038013e6
    lsls r0, r0, #0x13 @ 038013e8
    bl .L_037f8144 @ 038013ea
    ldr r2, [pc, #0x130] @ 038013ee
    add r5, sl @ 038013f0
    str r2, [sp] @ 038013f2
    mov r2, fp @ 038013f4
    muls r2, r5, r2 @ 038013f6
    ldr r3, [sp, #0x10] @ 038013f8
    ldr r1, [pc, #0x128] @ 038013fa
    add sb, r3 @ 038013fc
    str r1, [sp, #4] @ 038013fe
    str r0, [r1] @ 03801400
    mov r1, sb @ 03801402
    lsls r1, r1, #0x13 @ 03801404
    subs r2, r2, r1 @ 03801406
    lsrs r3, r2, #0x1f @ 03801408
    adds r3, r3, r2 @ 0380140a
    ldr r2, [sp] @ 0380140c
    asrs r3, r3, #1 @ 0380140e
    adds r4, r4, r6 @ 03801410
    str r3, [r2] @ 03801412
    adds r2, r4, #0 @ 03801414
    muls r2, r0, r2 @ 03801416
    ldr r3, [sp, #0x14] @ 03801418
    add r8, r3 @ 0380141a
    mov r1, r8 @ 0380141c
    lsls r1, r1, #0x13 @ 0380141e
    subs r2, r2, r1 @ 03801420
    lsrs r3, r2, #0x1f @ 03801422
    adds r3, r3, r2 @ 03801424
    ldr r5, [pc, #0x100] @ 03801426
    asrs r3, r3, #1 @ 03801428
    ldr r2, [sp, #0xc] @ 0380142a
    str r3, [r5] @ 0380142c
    movs r3, #1 @ 0380142e
    strb r3, [r2] @ 03801430
.L_03801432:
    movs r1, #5 @ 03801432
    movs r2, #0x1e @ 03801434
    movs r0, #0xd0 @ 03801436
    bl .L_03801310 @ 03801438
    lsls r0, r0, #0x10 @ 0380143c
    lsrs r0, r0, #0x10 @ 0380143e
    mov r8, r0 @ 03801440
    movs r1, #5 @ 03801442
    movs r2, #0x1e @ 03801444
    movs r0, #0x90 @ 03801446
    bl .L_03801310 @ 03801448
    ldr r3, [sp, #8] @ 0380144c
    mov r1, r8 @ 0380144e
    ldr r2, [r3] @ 03801450
    lsls r3, r1, #0x10 @ 03801452
    asrs r3, r3, #0x10 @ 03801454
    adds r4, r2, #0 @ 03801456
    muls r4, r3, r4 @ 03801458
    ldr r1, [sp] @ 0380145a
    ldr r3, [r1] @ 0380145c
    subs r4, r4, r3 @ 0380145e
    lsrs r3, r2, #0x1f @ 03801460
    adds r3, r3, r2 @ 03801462
    ldr r2, [sp, #4] @ 03801464
    lsls r0, r0, #0x10 @ 03801466
    ldr r1, [r2] @ 03801468
    asrs r3, r3, #1 @ 0380146a
    adds r4, r4, r3 @ 0380146c
    lsrs r3, r0, #0x10 @ 0380146e
    asrs r0, r0, #0x10 @ 03801470
    adds r2, r1, #0 @ 03801472
    muls r2, r0, r2 @ 03801474
    mov sl, r3 @ 03801476
    ldr r3, [r5] @ 03801478
    subs r2, r2, r3 @ 0380147a
    lsrs r3, r1, #0x1f @ 0380147c
    adds r3, r3, r1 @ 0380147e
    asrs r3, r3, #1 @ 03801480
    adds r2, r2, r3 @ 03801482
    asrs r2, r2, #0x13 @ 03801484
    lsls r2, r2, #0x10 @ 03801486
    movs r1, #5 @ 03801488
    lsrs r5, r2, #0x10 @ 0380148a
    movs r0, #0xb4 @ 0380148c
    movs r2, #0x1e @ 0380148e
    bl .L_03801310 @ 03801490
    asrs r4, r4, #0x13 @ 03801494
    lsls r4, r4, #0x10 @ 03801496
    lsrs r4, r4, #0x10 @ 03801498
    adds r6, r0, #0 @ 0380149a
    movs r1, #5 @ 0380149c
    movs r0, #0xc4 @ 0380149e
    movs r2, #0x1e @ 038014a0
    bl .L_03801310 @ 038014a2
    adds r3, r4, #0 @ 038014a6
    lsls r4, r4, #0x10 @ 038014a8
    cmp r4, #0 @ 038014aa
    blt .L_0380150e @ 038014ac
.L_038014ae:
    lsls r3, r3, #0x10 @ 038014ae
    lsrs r4, r3, #0x10 @ 038014b0
    lsls r3, r5, #0x10 @ 038014b2
    adds r2, r5, #0 @ 038014b4
    cmp r3, #0 @ 038014b6
    blt .L_0380150a @ 038014b8
.L_038014ba:
    lsls r3, r2, #0x10 @ 038014ba
    lsrs r3, r3, #0x10 @ 038014bc
    adds r2, r3, #0 @ 038014be
    lsls r3, r3, #0x10 @ 038014c0
    asrs r3, r3, #0x10 @ 038014c2
    cmp r3, #0xbf @ 038014c4
    ble .L_038014ca @ 038014c6
    movs r2, #0xbf @ 038014c8
.L_038014ca:
    lsls r3, r4, #0x10 @ 038014ca
    asrs r3, r3, #0x10 @ 038014cc
    strh r2, [r7, #6] @ 038014ce
    adds r2, r4, #0 @ 038014d0
    cmp r3, #0xff @ 038014d2
    ble .L_038014d8 @ 038014d4
    movs r2, #0xff @ 038014d6
.L_038014d8:
    strh r2, [r7, #4] @ 038014d8
    strh r0, [r7, #0xa] @ 038014da
    mov r1, sl @ 038014dc
    mov r2, r8 @ 038014de
    adds r0, r7, #0 @ 038014e0
    add sp, #0x1c @ 038014e2
    strh r6, [r7, #8] @ 038014e4
    strh r1, [r7, #2] @ 038014e6
    strh r2, [r7] @ 038014e8
    pop {r2, r3, r4, r5} @ 038014ea
    mov r8, r2 @ 038014ec
    mov sb, r3 @ 038014ee
    mov sl, r4 @ 038014f0
    mov fp, r5 @ 038014f2
    pop {r4, r5, r6, r7} @ 038014f4
    pop {r1} @ 038014f6
    bx r1 @ 038014f8
.L_038014fa:
    ldr r3, [pc, #0x20] @ 038014fa
    ldr r1, [pc, #0x24] @ 038014fc
    ldr r2, [pc, #0x20] @ 038014fe
    ldr r5, [pc, #0x24] @ 03801500
    str r3, [sp, #8] @ 03801502
    str r1, [sp, #4] @ 03801504
    str r2, [sp] @ 03801506
    b .L_03801432 @ 03801508
.L_0380150a:
    movs r2, #0 @ 0380150a
    b .L_038014ba @ 0380150c
.L_0380150e:
    movs r3, #0 @ 0380150e
    b .L_038014ae @ 03801510
    .byte 0x00, 0x00, 0x0c, 0xbb, 0x80, 0x03, 0x80, 0xfc, 0x7f, 0x02, 0x10, 0xbb, 0x80, 0x03, 0x18, 0xbb @ 03801512
    .byte 0x80, 0x03, 0x14, 0xbb, 0x80, 0x03, 0x1c, 0xbb, 0x80, 0x03 @ 03801522
@ FUN_0380152c at 0x0380152c
    push {r4, r5, lr} @ 0380152c
    adds r4, r0, #0 @ 0380152e
    sub sp, #4 @ 03801530
    movs r0, #0x84 @ 03801532
    adds r5, r1, #0 @ 03801534
    bl .L_03801244 @ 03801536
    str r0, [r4] @ 0380153a
    movs r0, #0xf4 @ 0380153c
    bl .L_03801244 @ 0380153e
    str r0, [r5] @ 03801542
    ldr r3, [r4] @ 03801544
    subs r0, r0, r3 @ 03801546
    ldr r3, [pc, #0xc] @ 03801548
    muls r0, r3, r0 @ 0380154a
    ldr r3, [pc, #0xc] @ 0380154c
    add sp, #4 @ 0380154e
    adds r0, r0, r3 @ 03801550
    pop {r4, r5} @ 03801552
    pop {r1} @ 03801554
    bx r1 @ 03801556
    .byte 0x2a, 0x21, 0x00, 0x00, 0x00, 0xf0, 0xee, 0xff, 0x70, 0x47, 0x00, 0x00 @ 03801558
@ FUN_03801564 at 0x03801564
    push {r4, lr} @ 03801564
    adds r4, r1, #0 @ 03801566
    cmp r0, #0 @ 03801568
    beq .L_03801582 @ 0380156a
    ldr r3, [pc, #0x50] @ 0380156c
    movs r1, #0 @ 0380156e
.L_03801570:
    ldr r2, [r3] @ 03801570
    cmp r2, #0 @ 03801572
    beq .L_03801588 @ 03801574
    cmp r0, r2 @ 03801576
    beq .L_03801588 @ 03801578
    adds r1, #1 @ 0380157a
    adds r3, #8 @ 0380157c
    cmp r1, #0x19 @ 0380157e
    bne .L_03801570 @ 03801580
.L_03801582:
    pop {r4} @ 03801582
    pop {r0} @ 03801584
    bx r0 @ 03801586
.L_03801588:
    ldr r2, [pc, #0x38] @ 03801588
    lsls r3, r1, #3 @ 0380158a
    str r4, [r3, r2] @ 0380158c
    adds r3, r3, r2 @ 0380158e
    str r0, [r3, #4] @ 03801590
    lsls r3, r0, #0x1f @ 03801592
    bpl .L_038015a4 @ 03801594
    ldr r3, [pc, #0x30] @ 03801596
    ldrh r2, [r3] @ 03801598
    movs r1, #8 @ 0380159a
    orrs r2, r1 @ 0380159c
    lsls r2, r2, #0x10 @ 0380159e
    lsrs r2, r2, #0x10 @ 038015a0
    strh r2, [r3] @ 038015a2
.L_038015a4:
    lsls r3, r0, #0x1e @ 038015a4
    bpl .L_038015b6 @ 038015a6
    ldr r3, [pc, #0x1c] @ 038015a8
    ldrh r2, [r3] @ 038015aa
    movs r1, #0x10 @ 038015ac
    orrs r2, r1 @ 038015ae
    lsls r2, r2, #0x10 @ 038015b0
    lsrs r2, r2, #0x10 @ 038015b2
    strh r2, [r3] @ 038015b4
.L_038015b6:
    ldr r2, [pc, #0x14] @ 038015b6
    ldr r3, [r2] @ 038015b8
    orrs r3, r0 @ 038015ba
    str r3, [r2] @ 038015bc
    b .L_03801582 @ 038015be
    .byte 0x08, 0xbe, 0x80, 0x03, 0x04, 0xbe, 0x80, 0x03, 0x04, 0x00, 0x00, 0x04, 0x10, 0x02, 0x00, 0x04 @ 038015c0
@ FUN_038015d0 at 0x038015d0
    push {lr} @ 038015d0
    ldr r3, [pc, #0x30] @ 038015d2
    ldr r2, [pc, #0x30] @ 038015d4
    adds r1, r3, #0 @ 038015d6
    adds r1, #0xc8 @ 038015d8
    movs r0, #0 @ 038015da
.L_038015dc:
    str r2, [r3] @ 038015dc
    str r0, [r3, #4] @ 038015de
    adds r3, #8 @ 038015e0
    cmp r3, r1 @ 038015e2
    bne .L_038015dc @ 038015e4
    ldr r2, [pc, #0x24] @ 038015e6
    ldr r3, [pc, #0x24] @ 038015e8
    str r3, [r2] @ 038015ea
    ldr r3, [pc, #0x24] @ 038015ec
    ldr r2, [pc, #0x28] @ 038015ee
    str r0, [r3] @ 038015f0
    movs r3, #1 @ 038015f2
    negs r3, r3 @ 038015f4
    str r3, [r2] @ 038015f6
    ldr r3, [pc, #0x20] @ 038015f8
    movs r2, #1 @ 038015fa
    strh r2, [r3] @ 038015fc
    pop {r0} @ 038015fe
    bx r0 @ 03801600
    .byte 0x00, 0x00, 0x04, 0xbe, 0x80, 0x03, 0x61, 0x15, 0x80, 0x03, 0xfc, 0xff, 0x80, 0x03, 0x00, 0x18 @ 03801602
    .byte 0x80, 0x03, 0x10, 0x02, 0x00, 0x04, 0x14, 0x02, 0x00, 0x04, 0x08, 0x02, 0x00, 0x04 @ 03801612
@ FUN_03801620 at 0x03801620
    push {lr} @ 03801620
    ldr r1, [pc, #0x60] @ 03801622
    movs r2, #0 @ 03801624
    b .L_03801630 @ 03801626
.L_03801628:
    adds r2, #1 @ 03801628
    adds r1, #8 @ 0380162a
    cmp r2, #0x19 @ 0380162c
    beq .L_03801652 @ 0380162e
.L_03801630:
    ldr r3, [r1] @ 03801630
    cmp r0, r3 @ 03801632
    bne .L_03801628 @ 03801634
    ldr r1, [pc, #0x50] @ 03801636
    ldr r3, [pc, #0x50] @ 03801638
    lsls r2, r2, #3 @ 0380163a
    str r3, [r2, r1] @ 0380163c
    lsls r3, r0, #0x1f @ 0380163e
    bmi .L_03801672 @ 03801640
    lsls r3, r0, #0x1e @ 03801642
    bmi .L_03801662 @ 03801644
.L_03801646:
    lsls r3, r0, #0x1d @ 03801646
    bmi .L_03801656 @ 03801648
.L_0380164a:
    ldr r2, [pc, #0x44] @ 0380164a
    ldr r3, [r2] @ 0380164c
    bics r3, r0 @ 0380164e
    str r3, [r2] @ 03801650
.L_03801652:
    pop {r0} @ 03801652
    bx r0 @ 03801654
.L_03801656:
    ldr r3, [pc, #0x3c] @ 03801656
    ldr r1, [pc, #0x3c] @ 03801658
    ldrh r2, [r3] @ 0380165a
    ands r2, r1 @ 0380165c
    strh r2, [r3] @ 0380165e
    b .L_0380164a @ 03801660
.L_03801662:
    ldr r3, [pc, #0x30] @ 03801662
    ldr r1, [pc, #0x34] @ 03801664
    ldrh r2, [r3] @ 03801666
    ands r2, r1 @ 03801668
    strh r2, [r3] @ 0380166a
    lsls r3, r0, #0x1d @ 0380166c
    bpl .L_0380164a @ 0380166e
    b .L_03801656 @ 03801670
.L_03801672:
    ldr r3, [pc, #0x20] @ 03801672
    ldr r1, [pc, #0x28] @ 03801674
    ldrh r2, [r3] @ 03801676
    ands r2, r1 @ 03801678
    strh r2, [r3] @ 0380167a
    lsls r3, r0, #0x1e @ 0380167c
    bpl .L_03801646 @ 0380167e
    b .L_03801662 @ 03801680
    .byte 0x00, 0x00, 0x08, 0xbe, 0x80, 0x03, 0x04, 0xbe, 0x80, 0x03, 0x61, 0x15, 0x80, 0x03, 0x10, 0x02 @ 03801682
    .byte 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0xdf, 0xff, 0x00, 0x00, 0xef, 0xff, 0x00, 0x00, 0xf7, 0xff @ 03801692
    .zero 2
@ FUN_038016a4 at 0x038016a4
    push {r4, lr} @ 038016a4
    ldr r4, [pc, #0x20] @ 038016a6
    ldr r2, [pc, #0x20] @ 038016a8
    movs r3, #1 @ 038016aa
    movs r1, #0 @ 038016ac
    negs r3, r3 @ 038016ae
    strh r1, [r4] @ 038016b0
    str r3, [r2] @ 038016b2
    ldr r3, [pc, #0x18] @ 038016b4
    str r1, [r3] @ 038016b6
    ldr r3, [pc, #0x18] @ 038016b8
    str r0, [r3] @ 038016ba
    movs r3, #1 @ 038016bc
    strh r3, [r4] @ 038016be
    pop {r4} @ 038016c0
    pop {r0} @ 038016c2
    bx r0 @ 038016c4
    .byte 0x00, 0x00, 0x08, 0x02, 0x00, 0x04, 0x14, 0x02, 0x00, 0x04, 0x10, 0x02, 0x00, 0x04, 0xfc, 0xff @ 038016c6
    .byte 0x80, 0x03 @ 038016d6
@ FUN_038016d8 at 0x038016d8
    push {r4, lr} @ 038016d8
    movs r4, #1 @ 038016da
    tst r0, r4 @ 038016dc
    beq .L_038016ee @ 038016de
    ldr r3, [pc, #0x40] @ 038016e0
    ldrh r2, [r3] @ 038016e2
    movs r1, #8 @ 038016e4
    orrs r2, r1 @ 038016e6
    lsls r2, r2, #0x10 @ 038016e8
    lsrs r2, r2, #0x10 @ 038016ea
    strh r2, [r3] @ 038016ec
.L_038016ee:
    lsls r3, r0, #0x1e @ 038016ee
    bpl .L_03801700 @ 038016f0
    ldr r3, [pc, #0x30] @ 038016f2
    ldrh r2, [r3] @ 038016f4
    movs r1, #0x10 @ 038016f6
    orrs r2, r1 @ 038016f8
    lsls r2, r2, #0x10 @ 038016fa
    lsrs r2, r2, #0x10 @ 038016fc
    strh r2, [r3] @ 038016fe
.L_03801700:
    lsls r3, r0, #0x1d @ 03801700
    bpl .L_03801712 @ 03801702
    ldr r3, [pc, #0x1c] @ 03801704
    ldrh r2, [r3] @ 03801706
    movs r1, #0x20 @ 03801708
    orrs r2, r1 @ 0380170a
    lsls r2, r2, #0x10 @ 0380170c
    lsrs r2, r2, #0x10 @ 0380170e
    strh r2, [r3] @ 03801710
.L_03801712:
    ldr r3, [pc, #0x14] @ 03801712
    ldr r2, [r3] @ 03801714
    orrs r2, r0 @ 03801716
    str r2, [r3] @ 03801718
    subs r3, #8 @ 0380171a
    strh r4, [r3] @ 0380171c
    pop {r4} @ 0380171e
    pop {r0} @ 03801720
    bx r0 @ 03801722
    .byte 0x04, 0x00, 0x00, 0x04, 0x10, 0x02, 0x00, 0x04, 0x00, 0xb5, 0xc3, 0x07, 0x04, 0xd5, 0x0c, 0x4b @ 03801724
    .byte 0x0c, 0x49, 0x1a, 0x88, 0x0a, 0x40, 0x1a, 0x80, 0x83, 0x07, 0x04, 0xd5, 0x08, 0x4b, 0x0a, 0x49 @ 03801734
    .byte 0x1a, 0x88, 0x0a, 0x40, 0x1a, 0x80, 0x43, 0x07, 0x04, 0xd5, 0x05, 0x4b, 0x07, 0x49, 0x1a, 0x88 @ 03801744
    .byte 0x0a, 0x40, 0x1a, 0x80, 0x06, 0x4a, 0x13, 0x68, 0x83, 0x43, 0x13, 0x60, 0x01, 0xbc, 0x00, 0x47 @ 03801754
    .byte 0x04, 0x00, 0x00, 0x04, 0xf7, 0xff, 0x00, 0x00, 0xef, 0xff, 0x00, 0x00, 0xdf, 0xff, 0x00, 0x00 @ 03801764
    .byte 0x10, 0x02, 0x00, 0x04, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xdf, 0x70, 0x47 @ 03801774
.L_03801784:
@ FUN_03801784 at 0x03801784
    swi #3 @ 03801784
    bx lr @ 03801786
    .byte 0x04, 0xdf, 0x70, 0x47 @ 03801788
@ FUN_0380178c at 0x0380178c
    swi #5 @ 0380178c
    bx lr @ 0380178e
    .byte 0x07, 0xdf, 0x70, 0x47, 0x08, 0xdf, 0x70, 0x47, 0x09, 0xdf, 0x70, 0x47, 0x09, 0xdf, 0x08, 0x1c @ 03801790
    .byte 0x70, 0x47 @ 038017a0
.L_038017a2:
@ FUN_038017a2 at 0x038017a2
    push {r2, r3} @ 038017a2
    swi #9 @ 038017a4
    pop {r2, r3} @ 038017a6
    str r0, [r2] @ 038017a8
    str r1, [r3] @ 038017aa
    bx lr @ 038017ac
    .byte 0x0b, 0xdf, 0x70, 0x47, 0x0c, 0xdf, 0x70, 0x47, 0x0d, 0xdf, 0x70, 0x47, 0x0e, 0xdf, 0x70, 0x47 @ 038017ae
    .byte 0x0f, 0xdf, 0x70, 0x47, 0x10, 0xdf, 0x70, 0x47, 0x11, 0xdf, 0x70, 0x47, 0x12, 0xdf, 0x70, 0x47 @ 038017be
    .byte 0x13, 0xdf, 0x70, 0x47, 0x14, 0xdf, 0x70, 0x47, 0x15, 0xdf, 0x70, 0x47, 0x06, 0xdf, 0x70, 0x47 @ 038017ce
    .byte 0x1a, 0xdf, 0x70, 0x47, 0x1b, 0xdf, 0x70, 0x47, 0x1c, 0xdf, 0x70, 0x47, 0x40, 0x20, 0x1f, 0xdf @ 038017de
    .byte 0x02, 0x1c, 0x1f, 0xdf, 0x70, 0x47, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46 @ 038017ee
    .byte 0xc0, 0x46, 0x01, 0x33, 0xa0, 0xe3, 0x08, 0x12, 0x93, 0xe5, 0x08, 0x32, 0x83, 0xe5, 0x00, 0x00 @ 038017fe
    .byte 0x4f, 0xe1, 0x0b, 0x40, 0x2d, 0xe9, 0x10, 0x12, 0x93, 0xe5, 0x14, 0x22, 0x93, 0xe5, 0x02, 0x10 @ 0380180e
    .byte 0x01, 0xe0, 0xa8, 0x00, 0x9f, 0xe5, 0x00, 0x20, 0x90, 0xe5, 0x01, 0x20, 0x82, 0xe1, 0x00, 0x20 @ 0380181e
    .byte 0x80, 0xe5, 0x9c, 0x20, 0x9f, 0xe5, 0x04, 0x00, 0x92, 0xe5, 0x00, 0x00, 0x50, 0xe3, 0x03, 0x00 @ 0380182e
    .byte 0x00, 0x0a, 0x01, 0x00, 0x10, 0xe0, 0x05, 0x00, 0x00, 0x1a, 0x08, 0x20, 0x82, 0xe2, 0xf8, 0xff @ 0380183e
    .byte 0xff, 0xea, 0x14, 0x12, 0x83, 0xe5, 0x0b, 0x40, 0xbd, 0xe8, 0x08, 0x12, 0x83, 0xe5, 0x0e, 0xf0 @ 0380184e
    .byte 0xa0, 0xe1, 0x00, 0x10, 0x92, 0xe5, 0x00, 0x00, 0x51, 0xe3, 0x01, 0x00, 0x00, 0x1a, 0x00, 0x10 @ 0380185e
    .byte 0xa0, 0xe1, 0xf6, 0xff, 0xff, 0xea, 0x00, 0x20, 0x0f, 0xe1, 0xdf, 0x20, 0xc2, 0xe3, 0x1f, 0x20 @ 0380186e
    .byte 0x82, 0xe3, 0x02, 0xf0, 0x29, 0xe1 @ 0380187e
.arm
    ldr r2, [r3, #0x210] @ 03801884
    push {r0, r2, r3, lr} @ 03801888
    bic r2, r2, r0 @ 0380188c
    str r2, [r3, #0x210] @ 03801890
    add lr, pc, #0 @ 03801894
    bx r1 @ 03801898
    mov r3, #0x4000000 @ 0380189c
    str r3, [r3, #0x208] @ 038018a0
    pop {r0, r2, r3, lr} @ 038018a4
    str r0, [r3, #0x214] @ 038018a8
    str r2, [r3, #0x210] @ 038018ac
    mrs r3, cpsr @ 038018b0
    bic r3, r3, #0xdf @ 038018b4
    orr r3, r3, #0x92 @ 038018b8
    msr cpsr_fc, r3 @ 038018bc
    pop {r0, r1, r3, lr} @ 038018c0
    str r1, [r3, #0x208] @ 038018c4
    msr spsr_fc, r0 @ 038018c8
    mov pc, lr @ 038018cc
    .byte 0xf8, 0xff, 0x80, 0x03, 0x04, 0xbe, 0x80, 0x03 @ 038018d0
.L_038018d8:
@ FUN_038018d8 at 0x038018d8
    subs r2, r1, #1 @ 038018d8
    bxeq lr @ 038018dc
    blo .L_038019c0 @ 038018e0
    cmp r0, r1 @ 038018e4
    bls .L_03801978 @ 038018e8
    tst r1, r2 @ 038018ec
    beq .L_03801984 @ 038018f0
    tst r1, #0xe0000000 @ 038018f4
    lsleq r1, r1, #3 @ 038018f8
    moveq r3, #8 @ 038018fc
    movne r3, #1 @ 03801900
.L_03801904:
    cmp r1, #0x10000000 @ 03801904
    cmplo r1, r0 @ 03801908
    lsllo r1, r1, #4 @ 0380190c
    lsllo r3, r3, #4 @ 03801910
    blo .L_03801904 @ 03801914
.L_03801918:
    cmp r1, #0x80000000 @ 03801918
    cmplo r1, r0 @ 0380191c
    lsllo r1, r1, #1 @ 03801920
    lsllo r3, r3, #1 @ 03801924
    blo .L_03801918 @ 03801928
    mov r2, #0 @ 0380192c
.L_03801930:
    cmp r0, r1 @ 03801930
    subhs r0, r0, r1 @ 03801934
    orrhs r2, r2, r3 @ 03801938
    cmp r0, r1, lsr #1 @ 0380193c
    subhs r0, r0, r1, lsr #1 @ 03801940
    orrhs r2, r2, r3, lsr #1 @ 03801944
    cmp r0, r1, lsr #2 @ 03801948
    subhs r0, r0, r1, lsr #2 @ 0380194c
    orrhs r2, r2, r3, lsr #2 @ 03801950
    cmp r0, r1, lsr #3 @ 03801954
    subhs r0, r0, r1, lsr #3 @ 03801958
    orrhs r2, r2, r3, lsr #3 @ 0380195c
    cmp r0, #0 @ 03801960
    lsrsne r3, r3, #4 @ 03801964
    lsrne r1, r1, #4 @ 03801968
    bne .L_03801930 @ 0380196c
    mov r0, r2 @ 03801970
    bx lr @ 03801974
.L_03801978:
    moveq r0, #1 @ 03801978
    movne r0, #0 @ 0380197c
    bx lr @ 03801980
.L_03801984:
    cmp r1, #0x10000 @ 03801984
    lsrhs r1, r1, #0x10 @ 03801988
    movhs r2, #0x10 @ 0380198c
    movlo r2, #0 @ 03801990
    cmp r1, #0x100 @ 03801994
    lsrhs r1, r1, #8 @ 03801998
    addhs r2, r2, #8 @ 0380199c
    cmp r1, #0x10 @ 038019a0
    lsrhs r1, r1, #4 @ 038019a4
    addhs r2, r2, #4 @ 038019a8
    cmp r1, #4 @ 038019ac
    addhi r2, r2, #3 @ 038019b0
    addls r2, r2, r1, lsr #1 @ 038019b4
    lsr r0, r0, r2 @ 038019b8
    bx lr @ 038019bc
.L_038019c0:
    str lr, [sp, #-8]! @ 038019c0
    bl .L_03801b30 @ 038019c4
    mov r0, #0 @ 038019c8
    ldr lr, [sp], #8 @ 038019cc
    bx lr @ 038019d0
@ FUN_038019d4 at 0x038019d4
    push {r0, r1, lr} @ 038019d4
    bl .L_038018d8 @ 038019d8
    pop {r1, r2, lr} @ 038019dc
    mul r3, r2, r0 @ 038019e0
    sub r1, r1, r3 @ 038019e4
    bx lr @ 038019e8
.L_038019ec:
@ FUN_038019ec at 0x038019ec
    cmp r1, #0 @ 038019ec
    eor ip, r0, r1 @ 038019f0
    beq .L_03801b04 @ 038019f4
    rsbmi r1, r1, #0 @ 038019f8
    subs r2, r1, #1 @ 038019fc
    beq .L_03801aa4 @ 03801a00
    movs r3, r0 @ 03801a04
    rsbmi r3, r0, #0 @ 03801a08
    cmp r3, r1 @ 03801a0c
    bls .L_03801ab0 @ 03801a10
    tst r1, r2 @ 03801a14
    beq .L_03801ac0 @ 03801a18
    tst r1, #0xe0000000 @ 03801a1c
    lsleq r1, r1, #3 @ 03801a20
    moveq r2, #8 @ 03801a24
    movne r2, #1 @ 03801a28
.L_03801a2c:
    cmp r1, #0x10000000 @ 03801a2c
    cmplo r1, r3 @ 03801a30
    lsllo r1, r1, #4 @ 03801a34
    lsllo r2, r2, #4 @ 03801a38
    blo .L_03801a2c @ 03801a3c
.L_03801a40:
    cmp r1, #0x80000000 @ 03801a40
    cmplo r1, r3 @ 03801a44
    lsllo r1, r1, #1 @ 03801a48
    lsllo r2, r2, #1 @ 03801a4c
    blo .L_03801a40 @ 03801a50
    mov r0, #0 @ 03801a54
.L_03801a58:
    cmp r3, r1 @ 03801a58
    subhs r3, r3, r1 @ 03801a5c
    orrhs r0, r0, r2 @ 03801a60
    cmp r3, r1, lsr #1 @ 03801a64
    subhs r3, r3, r1, lsr #1 @ 03801a68
    orrhs r0, r0, r2, lsr #1 @ 03801a6c
    cmp r3, r1, lsr #2 @ 03801a70
    subhs r3, r3, r1, lsr #2 @ 03801a74
    orrhs r0, r0, r2, lsr #2 @ 03801a78
    cmp r3, r1, lsr #3 @ 03801a7c
    subhs r3, r3, r1, lsr #3 @ 03801a80
    orrhs r0, r0, r2, lsr #3 @ 03801a84
    cmp r3, #0 @ 03801a88
    lsrsne r2, r2, #4 @ 03801a8c
    lsrne r1, r1, #4 @ 03801a90
    bne .L_03801a58 @ 03801a94
    cmp ip, #0 @ 03801a98
    rsbmi r0, r0, #0 @ 03801a9c
    bx lr @ 03801aa0
.L_03801aa4:
    teq ip, r0 @ 03801aa4
    rsbmi r0, r0, #0 @ 03801aa8
    bx lr @ 03801aac
.L_03801ab0:
    movlo r0, #0 @ 03801ab0
    asreq r0, ip, #0x1f @ 03801ab4
    orreq r0, r0, #1 @ 03801ab8
    bx lr @ 03801abc
.L_03801ac0:
    cmp r1, #0x10000 @ 03801ac0
    lsrhs r1, r1, #0x10 @ 03801ac4
    movhs r2, #0x10 @ 03801ac8
    movlo r2, #0 @ 03801acc
    cmp r1, #0x100 @ 03801ad0
    lsrhs r1, r1, #8 @ 03801ad4
    addhs r2, r2, #8 @ 03801ad8
    cmp r1, #0x10 @ 03801adc
    lsrhs r1, r1, #4 @ 03801ae0
    addhs r2, r2, #4 @ 03801ae4
    cmp r1, #4 @ 03801ae8
    addhi r2, r2, #3 @ 03801aec
    addls r2, r2, r1, lsr #1 @ 03801af0
    cmp ip, #0 @ 03801af4
    lsr r0, r3, r2 @ 03801af8
    rsbmi r0, r0, #0 @ 03801afc
    bx lr @ 03801b00
.L_03801b04:
    str lr, [sp, #-8]! @ 03801b04
    bl .L_03801b30 @ 03801b08
    mov r0, #0 @ 03801b0c
    ldr lr, [sp], #8 @ 03801b10
    bx lr @ 03801b14
@ FUN_03801b18 at 0x03801b18
    push {r0, r1, lr} @ 03801b18
    bl .L_038019ec @ 03801b1c
    pop {r1, r2, lr} @ 03801b20
    mul r3, r2, r0 @ 03801b24
    sub r1, r1, r3 @ 03801b28
    bx lr @ 03801b2c
.L_03801b30:
@ FUN_03801b30 at 0x03801b30
    bx lr @ 03801b30
    .byte 0x00, 0x47, 0xc0, 0x46, 0x08, 0x47, 0xc0, 0x46, 0x10, 0x47, 0xc0, 0x46 @ 03801b34
@ FUN_03801b40 at 0x03801b40
.thumb
    bx r3 @ 03801b40
    .byte 0xc0, 0x46, 0x20, 0x47, 0xc0, 0x46, 0x28, 0x47, 0xc0, 0x46, 0x30, 0x47, 0xc0, 0x46, 0x38, 0x47 @ 03801b42
    .byte 0xc0, 0x46, 0x40, 0x47, 0xc0, 0x46, 0x48, 0x47, 0xc0, 0x46, 0x50, 0x47, 0xc0, 0x46, 0x58, 0x47 @ 03801b52
    .byte 0xc0, 0x46, 0x60, 0x47, 0xc0, 0x46, 0x68, 0x47, 0xc0, 0x46, 0x70, 0x47, 0xc0, 0x46, 0x02, 0x11 @ 03801b62
    .byte 0x21, 0xe2, 0x00, 0x00, 0x00, 0xea, 0x02, 0x31, 0x23, 0xe2 @ 03801b72
.L_03801b7c:
@ FUN_03801b7c at 0x03801b7c
.arm
    push {r4, r5, lr} @ 03801b7c
    lsl r4, r1, #1 @ 03801b80
    lsl r5, r3, #1 @ 03801b84
    teq r4, r5 @ 03801b88
    teqeq r0, r2 @ 03801b8c
    orrsne ip, r4, r0 @ 03801b90
    orrsne ip, r5, r2 @ 03801b94
    mvnsne ip, r4, asr #21 @ 03801b98
    mvnsne ip, r5, asr #21 @ 03801b9c
    beq .L_03801dd8 @ 03801ba0
    lsr r4, r4, #0x15 @ 03801ba4
    rsbs r5, r4, r5, lsr #21 @ 03801ba8
    rsblt r5, r5, #0 @ 03801bac
    ble .L_03801bd0 @ 03801bb0
    add r4, r4, r5 @ 03801bb4
    eor r2, r0, r2 @ 03801bb8
    eor r3, r1, r3 @ 03801bbc
    eor r0, r2, r0 @ 03801bc0
    eor r1, r3, r1 @ 03801bc4
    eor r2, r0, r2 @ 03801bc8
    eor r3, r1, r3 @ 03801bcc
.L_03801bd0:
    cmp r5, #0x36 @ 03801bd0
    pophi {r4, r5, lr} @ 03801bd4
    bxhi lr @ 03801bd8
    tst r1, #0x80000000 @ 03801bdc
    lsl r1, r1, #0xc @ 03801be0
    mov ip, #0x100000 @ 03801be4
    orr r1, ip, r1, lsr #12 @ 03801be8
    beq .L_03801bf8 @ 03801bec
    rsbs r0, r0, #0 @ 03801bf0
    rsc r1, r1, #0 @ 03801bf4
.L_03801bf8:
    tst r3, #0x80000000 @ 03801bf8
    lsl r3, r3, #0xc @ 03801bfc
    orr r3, ip, r3, lsr #12 @ 03801c00
    beq .L_03801c10 @ 03801c04
    rsbs r2, r2, #0 @ 03801c08
    rsc r3, r3, #0 @ 03801c0c
.L_03801c10:
    teq r4, r5 @ 03801c10
    beq .L_03801dc0 @ 03801c14
.L_03801c18:
    sub r4, r4, #1 @ 03801c18
    rsbs lr, r5, #0x20 @ 03801c1c
    blt .L_03801c3c @ 03801c20
    lsl ip, r2, lr @ 03801c24
    adds r0, r0, r2, lsr r5 @ 03801c28
    adc r1, r1, #0 @ 03801c2c
    adds r0, r0, r3, lsl lr @ 03801c30
    adcs r1, r1, r3, asr r5 @ 03801c34
    b .L_03801c58 @ 03801c38
.L_03801c3c:
    sub r5, r5, #0x20 @ 03801c3c
    add lr, lr, #0x20 @ 03801c40
    cmp r2, #1 @ 03801c44
    lsl ip, r3, lr @ 03801c48
    orrhs ip, ip, #2 @ 03801c4c
    adds r0, r0, r3, asr r5 @ 03801c50
    adcs r1, r1, r3, asr #31 @ 03801c54
.L_03801c58:
    and r5, r1, #0x80000000 @ 03801c58
    bpl .L_03801c6c @ 03801c5c
    rsbs ip, ip, #0 @ 03801c60
    rscs r0, r0, #0 @ 03801c64
    rsc r1, r1, #0 @ 03801c68
.L_03801c6c:
    cmp r1, #0x100000 @ 03801c6c
    blo .L_03801cb4 @ 03801c70
    cmp r1, #0x200000 @ 03801c74
    blo .L_03801c98 @ 03801c78
    lsrs r1, r1, #1 @ 03801c7c
    movs r0, r0, rrx @ 03801c80
    mov ip, ip, rrx @ 03801c84
    add r4, r4, #1 @ 03801c88
    lsl r2, r4, #0x15 @ 03801c8c
    cmn r2, #0x400000 @ 03801c90
    bhs .L_03801e48 @ 03801c94
.L_03801c98:
    cmp ip, #0x80000000 @ 03801c98
    lsrseq ip, r0, #1 @ 03801c9c
    adcs r0, r0, #0 @ 03801ca0
    adc r1, r1, r4, lsl #20 @ 03801ca4
    orr r1, r1, r5 @ 03801ca8
    pop {r4, r5, lr} @ 03801cac
    bx lr @ 03801cb0
.L_03801cb4:
    lsls ip, ip, #1 @ 03801cb4
    adcs r0, r0, r0 @ 03801cb8
    adc r1, r1, r1 @ 03801cbc
    tst r1, #0x100000 @ 03801cc0
    sub r4, r4, #1 @ 03801cc4
    bne .L_03801c98 @ 03801cc8
.L_03801ccc:
    teq r1, #0 @ 03801ccc
    movne r3, #0x14 @ 03801cd0
    moveq r3, #0x34 @ 03801cd4
    moveq r1, r0 @ 03801cd8
    moveq r0, #0 @ 03801cdc
    mov r2, r1 @ 03801ce0
    cmp r2, #0x10000 @ 03801ce4
    lsrhs r2, r2, #0x10 @ 03801ce8
    subhs r3, r3, #0x10 @ 03801cec
    cmp r2, #0x100 @ 03801cf0
    lsrhs r2, r2, #8 @ 03801cf4
    subhs r3, r3, #8 @ 03801cf8
    cmp r2, #0x10 @ 03801cfc
    lsrhs r2, r2, #4 @ 03801d00
    subhs r3, r3, #4 @ 03801d04
    cmp r2, #4 @ 03801d08
    subhs r3, r3, #2 @ 03801d0c
    sublo r3, r3, r2, lsr #1 @ 03801d10
    sub r3, r3, r2, lsr #3 @ 03801d14
    subs r2, r3, #0x20 @ 03801d18
    bge .L_03801d40 @ 03801d1c
    adds r2, r2, #0xc @ 03801d20
    ble .L_03801d3c @ 03801d24
    add ip, r2, #0x14 @ 03801d28
    rsb r2, r2, #0xc @ 03801d2c
    lsl r0, r1, ip @ 03801d30
    lsr r1, r1, r2 @ 03801d34
    b .L_03801d50 @ 03801d38
.L_03801d3c:
    add r2, r2, #0x14 @ 03801d3c
.L_03801d40:
    rsble ip, r2, #0x20 @ 03801d40
    lsl r1, r1, r2 @ 03801d44
    orrle r1, r1, r0, lsr ip @ 03801d48
    lslle r0, r0, r2 @ 03801d4c
.L_03801d50:
    subs r4, r4, r3 @ 03801d50
    addge r1, r1, r4, lsl #20 @ 03801d54
    orrge r1, r1, r5 @ 03801d58
    popge {r4, r5, lr} @ 03801d5c
    bxge lr @ 03801d60
    mvn r4, r4 @ 03801d64
    subs r4, r4, #0x1f @ 03801d68
    bge .L_03801db0 @ 03801d6c
    adds r4, r4, #0xc @ 03801d70
    bgt .L_03801d94 @ 03801d74
    add r4, r4, #0x14 @ 03801d78
    rsb r2, r4, #0x20 @ 03801d7c
    lsr r0, r0, r4 @ 03801d80
    orr r0, r0, r1, lsl r2 @ 03801d84
    orr r1, r5, r1, lsr r4 @ 03801d88
    pop {r4, r5, lr} @ 03801d8c
    bx lr @ 03801d90
.L_03801d94:
    rsb r4, r4, #0xc @ 03801d94
    rsb r2, r4, #0x20 @ 03801d98
    lsr r0, r0, r2 @ 03801d9c
    orr r0, r0, r1, lsl r4 @ 03801da0
    mov r1, r5 @ 03801da4
    pop {r4, r5, lr} @ 03801da8
    bx lr @ 03801dac
.L_03801db0:
    lsr r0, r1, r4 @ 03801db0
    mov r1, r5 @ 03801db4
    pop {r4, r5, lr} @ 03801db8
    bx lr @ 03801dbc
.L_03801dc0:
    teq r4, #0 @ 03801dc0
    eor r3, r3, #0x100000 @ 03801dc4
    eoreq r1, r1, #0x100000 @ 03801dc8
    addeq r4, r4, #1 @ 03801dcc
    subne r5, r5, #1 @ 03801dd0
    b .L_03801c18 @ 03801dd4
.L_03801dd8:
    mvns ip, r4, asr #21 @ 03801dd8
    mvnsne ip, r5, asr #21 @ 03801ddc
    beq .L_03801e5c @ 03801de0
    teq r4, r5 @ 03801de4
    teqeq r0, r2 @ 03801de8
    beq .L_03801e04 @ 03801dec
    teq r4, #0 @ 03801df0
    moveq r1, r3 @ 03801df4
    moveq r0, r2 @ 03801df8
    pop {r4, r5, lr} @ 03801dfc
    bx lr @ 03801e00
.L_03801e04:
    teq r1, r3 @ 03801e04
    movne r1, #0 @ 03801e08
    movne r0, #0 @ 03801e0c
    popne {r4, r5, lr} @ 03801e10
    bxne lr @ 03801e14
    lsrs ip, r4, #0x15 @ 03801e18
    bne .L_03801e34 @ 03801e1c
    lsls r0, r0, #1 @ 03801e20
    adcs r1, r1, r1 @ 03801e24
    orrhs r1, r1, #0x80000000 @ 03801e28
    pop {r4, r5, lr} @ 03801e2c
    bx lr @ 03801e30
.L_03801e34:
    adds r4, r4, #0x400000 @ 03801e34
    addlo r1, r1, #0x100000 @ 03801e38
    poplo {r4, r5, lr} @ 03801e3c
    bxlo lr @ 03801e40
    and r5, r1, #0x80000000 @ 03801e44
.L_03801e48:
    orr r1, r5, #0x7f000000 @ 03801e48
    orr r1, r1, #0xf00000 @ 03801e4c
    mov r0, #0 @ 03801e50
    pop {r4, r5, lr} @ 03801e54
    bx lr @ 03801e58
.L_03801e5c:
    mvns ip, r4, asr #21 @ 03801e5c
    movne r1, r3 @ 03801e60
    movne r0, r2 @ 03801e64
    mvnseq ip, r5, asr #21 @ 03801e68
    movne r3, r1 @ 03801e6c
    movne r2, r0 @ 03801e70
    orrs r4, r0, r1, lsl #12 @ 03801e74
    orrseq r5, r2, r3, lsl #12 @ 03801e78
    teqeq r1, r3 @ 03801e7c
    orrne r1, r1, #0x80000 @ 03801e80
    pop {r4, r5, lr} @ 03801e84
    bx lr @ 03801e88
    .byte 0x00, 0x00, 0x30, 0xe3, 0x00, 0x10, 0xa0, 0x03, 0x1e, 0xff, 0x2f, 0x01, 0x30, 0x40, 0x2d, 0xe9 @ 03801e8c
    .byte 0x01, 0x4b, 0xa0, 0xe3, 0x32, 0x40, 0x84, 0xe2, 0x00, 0x50, 0xa0, 0xe3, 0x00, 0x10, 0xa0, 0xe3 @ 03801e9c
    .byte 0x86, 0xff, 0xff, 0xea @ 03801eac
.L_03801eb0:
@ FUN_03801eb0 at 0x03801eb0
    teq r0, #0 @ 03801eb0
    moveq r1, #0 @ 03801eb4
    bxeq lr @ 03801eb8
    push {r4, r5, lr} @ 03801ebc
    mov r4, #0x400 @ 03801ec0
    add r4, r4, #0x32 @ 03801ec4
    ands r5, r0, #0x80000000 @ 03801ec8
    rsbmi r0, r0, #0 @ 03801ecc
    mov r1, #0 @ 03801ed0
    b .L_03801ccc @ 03801ed4
    .byte 0x80, 0x20, 0xb0, 0xe1, 0xc2, 0x11, 0xa0, 0xe1, 0x61, 0x10, 0xa0, 0xe1, 0x02, 0x0e, 0xa0, 0xe1 @ 03801ed8
    .byte 0xff, 0x34, 0x12, 0x12, 0xff, 0x04, 0x33, 0x13, 0x0e, 0x13, 0x21, 0x12, 0x1e, 0xff, 0x2f, 0x11 @ 03801ee8
    .byte 0x00, 0x00, 0x32, 0xe3, 0xff, 0x04, 0x33, 0x13, 0x1e, 0xff, 0x2f, 0x01, 0x30, 0x40, 0x2d, 0xe9 @ 03801ef8
    .byte 0x0e, 0x4d, 0xa0, 0xe3, 0x02, 0x51, 0x01, 0xe2, 0x02, 0x11, 0xc1, 0xe3, 0x6c, 0xff, 0xff, 0xea @ 03801f08
    .byte 0x01, 0x20, 0x90, 0xe1, 0x1e, 0xff, 0x2f, 0x01, 0x30, 0x40, 0x2d, 0xe9, 0x00, 0x50, 0xa0, 0xe3 @ 03801f18
    .byte 0x06, 0x00, 0x00, 0xea, 0x01, 0x20, 0x90, 0xe1, 0x1e, 0xff, 0x2f, 0x01, 0x30, 0x40, 0x2d, 0xe9 @ 03801f28
    .byte 0x02, 0x51, 0x11, 0xe2, 0x01, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x70, 0xe2, 0x00, 0x10, 0xe1, 0xe2 @ 03801f38
    .byte 0x01, 0x4b, 0xa0, 0xe3, 0x32, 0x40, 0x84, 0xe2, 0x21, 0xcb, 0xb0, 0xe1, 0x44, 0xff, 0xff, 0x0a @ 03801f48
    .byte 0x03, 0x20, 0xa0, 0xe3, 0xac, 0xc1, 0xb0, 0xe1, 0x03, 0x20, 0x82, 0x12, 0xac, 0xc1, 0xb0, 0xe1 @ 03801f58
    .byte 0x03, 0x20, 0x82, 0x12, 0xac, 0x21, 0x82, 0xe0, 0x20, 0x30, 0x62, 0xe2, 0x10, 0xc3, 0xa0, 0xe1 @ 03801f68
    .byte 0x30, 0x02, 0xa0, 0xe1, 0x11, 0x03, 0x80, 0xe1, 0x31, 0x12, 0xa0, 0xe1, 0x02, 0x40, 0x84, 0xe0 @ 03801f78
    .byte 0x37, 0xff, 0xff, 0xea @ 03801f88
.L_03801f8c:
@ FUN_03801f8c at 0x03801f8c
    push {r4, r5, r6, lr} @ 03801f8c
    mov ip, #0xff @ 03801f90
    orr ip, ip, #0x700 @ 03801f94
    ands r4, ip, r1, lsr #20 @ 03801f98
    andsne r5, ip, r3, lsr #20 @ 03801f9c
    teqne r4, ip @ 03801fa0
    teqne r5, ip @ 03801fa4
    bleq .L_03802184 @ 03801fa8
    add r4, r4, r5 @ 03801fac
    eor r6, r1, r3 @ 03801fb0
    bic r1, r1, ip, lsl #21 @ 03801fb4
    bic r3, r3, ip, lsl #21 @ 03801fb8
    orrs r5, r0, r1, lsl #12 @ 03801fbc
    orrsne r5, r2, r3, lsl #12 @ 03801fc0
    orr r1, r1, #0x100000 @ 03801fc4
    orr r3, r3, #0x100000 @ 03801fc8
    beq .L_03802048 @ 03801fcc
    umull ip, lr, r0, r2 @ 03801fd0
    mov r5, #0 @ 03801fd4
    umlal lr, r5, r1, r2 @ 03801fd8
    and r2, r6, #0x80000000 @ 03801fdc
    umlal lr, r5, r0, r3 @ 03801fe0
    mov r6, #0 @ 03801fe4
    umlal r5, r6, r1, r3 @ 03801fe8
    teq ip, #0 @ 03801fec
    orrne lr, lr, #1 @ 03801ff0
    sub r4, r4, #0xff @ 03801ff4
    cmp r6, #0x200 @ 03801ff8
    sbc r4, r4, #0x300 @ 03801ffc
    bhs .L_03802010 @ 03802000
    lsls lr, lr, #1 @ 03802004
    adcs r5, r5, r5 @ 03802008
    adc r6, r6, r6 @ 0380200c
.L_03802010:
    orr r1, r2, r6, lsl #11 @ 03802010
    orr r1, r1, r5, lsr #21 @ 03802014
    lsl r0, r5, #0xb @ 03802018
    orr r0, r0, lr, lsr #21 @ 0380201c
    lsl lr, lr, #0xb @ 03802020
    subs ip, r4, #0xfd @ 03802024
    cmphi ip, #0x700 @ 03802028
    bhi .L_03802078 @ 0380202c
    cmp lr, #0x80000000 @ 03802030
    lsrseq lr, r0, #1 @ 03802034
    adcs r0, r0, #0 @ 03802038
    adc r1, r1, r4, lsl #20 @ 0380203c
    pop {r4, r5, r6, lr} @ 03802040
    bx lr @ 03802044
.L_03802048:
    and r6, r6, #0x80000000 @ 03802048
    orr r1, r6, r1 @ 0380204c
    orr r0, r0, r2 @ 03802050
    eor r1, r1, r3 @ 03802054
    subs r4, r4, ip, lsr #1 @ 03802058
    rsbsgt r5, r4, ip @ 0380205c
    orrgt r1, r1, r4, lsl #20 @ 03802060
    popgt {r4, r5, r6, lr} @ 03802064
    bxgt lr @ 03802068
    orr r1, r1, #0x100000 @ 0380206c
    mov lr, #0 @ 03802070
    subs r4, r4, #1 @ 03802074
.L_03802078:
    bgt .L_038021f4 @ 03802078
    cmn r4, #0x36 @ 0380207c
    movle r0, #0 @ 03802080
    andle r1, r1, #0x80000000 @ 03802084
    pople {r4, r5, r6, lr} @ 03802088
    bxle lr @ 0380208c
    rsb r4, r4, #0 @ 03802090
    subs r4, r4, #0x20 @ 03802094
    bge .L_03802108 @ 03802098
    adds r4, r4, #0xc @ 0380209c
    bgt .L_038020d8 @ 038020a0
    add r4, r4, #0x14 @ 038020a4
    rsb r5, r4, #0x20 @ 038020a8
    lsl r3, r0, r5 @ 038020ac
    lsr r0, r0, r4 @ 038020b0
    orr r0, r0, r1, lsl r5 @ 038020b4
    and r2, r1, #0x80000000 @ 038020b8
    bic r1, r1, #0x80000000 @ 038020bc
    adds r0, r0, r3, lsr #31 @ 038020c0
    adc r1, r2, r1, lsr r4 @ 038020c4
    orrs lr, lr, r3, lsl #1 @ 038020c8
    biceq r0, r0, r3, lsr #31 @ 038020cc
    pop {r4, r5, r6, lr} @ 038020d0
    bx lr @ 038020d4
.L_038020d8:
    rsb r4, r4, #0xc @ 038020d8
    rsb r5, r4, #0x20 @ 038020dc
    lsl r3, r0, r4 @ 038020e0
    lsr r0, r0, r5 @ 038020e4
    orr r0, r0, r1, lsl r4 @ 038020e8
    and r1, r1, #0x80000000 @ 038020ec
    adds r0, r0, r3, lsr #31 @ 038020f0
    adc r1, r1, #0 @ 038020f4
    orrs lr, lr, r3, lsl #1 @ 038020f8
    biceq r0, r0, r3, lsr #31 @ 038020fc
    pop {r4, r5, r6, lr} @ 03802100
    bx lr @ 03802104
.L_03802108:
    rsb r5, r4, #0x20 @ 03802108
    orr lr, lr, r0, lsl r5 @ 0380210c
    lsr r3, r0, r4 @ 03802110
    orr r3, r3, r1, lsl r5 @ 03802114
    lsr r0, r1, r4 @ 03802118
    and r1, r1, #0x80000000 @ 0380211c
    bic r0, r0, r1, lsr r4 @ 03802120
    add r0, r0, r3, lsr #31 @ 03802124
    orrs lr, lr, r3, lsl #1 @ 03802128
    biceq r0, r0, r3, lsr #31 @ 0380212c
    pop {r4, r5, r6, lr} @ 03802130
    bx lr @ 03802134
.L_03802138:
    teq r4, #0 @ 03802138
    bne .L_03802164 @ 0380213c
    and r6, r1, #0x80000000 @ 03802140
.L_03802144:
    lsls r0, r0, #1 @ 03802144
    adc r1, r1, r1 @ 03802148
    tst r1, #0x100000 @ 0380214c
    subeq r4, r4, #1 @ 03802150
    beq .L_03802144 @ 03802154
    orr r1, r1, r6 @ 03802158
    teq r5, #0 @ 0380215c
    movne pc, lr @ 03802160
.L_03802164:
    and r6, r3, #0x80000000 @ 03802164
.L_03802168:
    lsls r2, r2, #1 @ 03802168
    adc r3, r3, r3 @ 0380216c
    tst r3, #0x100000 @ 03802170
    subeq r5, r5, #1 @ 03802174
    beq .L_03802168 @ 03802178
    orr r3, r3, r6 @ 0380217c
    mov pc, lr @ 03802180
.L_03802184:
@ FUN_03802184 at 0x03802184
    teq r4, ip @ 03802184
    and r5, ip, r3, lsr #20 @ 03802188
    teqne r5, ip @ 0380218c
    beq .L_038021b4 @ 03802190
    orrs r6, r0, r1, lsl #1 @ 03802194
    orrsne r6, r2, r3, lsl #1 @ 03802198
    bne .L_03802138 @ 0380219c
.L_038021a0:
    eor r1, r1, r3 @ 038021a0
    and r1, r1, #0x80000000 @ 038021a4
    mov r0, #0 @ 038021a8
    pop {r4, r5, r6, lr} @ 038021ac
    bx lr @ 038021b0
.L_038021b4:
    orrs r6, r0, r1, lsl #1 @ 038021b4
    moveq r0, r2 @ 038021b8
    moveq r1, r3 @ 038021bc
    orrsne r6, r2, r3, lsl #1 @ 038021c0
    beq .L_0380220c @ 038021c4
    teq r4, ip @ 038021c8
    bne .L_038021d8 @ 038021cc
    orrs r6, r0, r1, lsl #12 @ 038021d0
    bne .L_0380220c @ 038021d4
.L_038021d8:
    teq r5, ip @ 038021d8
    bne .L_038021f0 @ 038021dc
    orrs r6, r2, r3, lsl #12 @ 038021e0
    movne r0, r2 @ 038021e4
    movne r1, r3 @ 038021e8
    bne .L_0380220c @ 038021ec
.L_038021f0:
    eor r1, r1, r3 @ 038021f0
.L_038021f4:
    and r1, r1, #0x80000000 @ 038021f4
    orr r1, r1, #0x7f000000 @ 038021f8
    orr r1, r1, #0xf00000 @ 038021fc
    mov r0, #0 @ 03802200
    pop {r4, r5, r6, lr} @ 03802204
    bx lr @ 03802208
.L_0380220c:
    orr r1, r1, #0x7f000000 @ 0380220c
    orr r1, r1, #0xf80000 @ 03802210
    pop {r4, r5, r6, lr} @ 03802214
    bx lr @ 03802218
.L_0380221c:
@ FUN_0380221c at 0x0380221c
    push {r4, r5, r6, lr} @ 0380221c
    mov ip, #0xff @ 03802220
    orr ip, ip, #0x700 @ 03802224
    ands r4, ip, r1, lsr #20 @ 03802228
    andsne r5, ip, r3, lsr #20 @ 0380222c
    teqne r4, ip @ 03802230
    teqne r5, ip @ 03802234
    bleq .L_038023b8 @ 03802238
    sub r4, r4, r5 @ 0380223c
    eor lr, r1, r3 @ 03802240
    orrs r5, r2, r3, lsl #12 @ 03802244
    lsl r1, r1, #0xc @ 03802248
    beq .L_03802384 @ 0380224c
    lsl r3, r3, #0xc @ 03802250
    mov r5, #0x10000000 @ 03802254
    orr r3, r5, r3, lsr #4 @ 03802258
    orr r3, r3, r2, lsr #24 @ 0380225c
    lsl r2, r2, #8 @ 03802260
    orr r5, r5, r1, lsr #4 @ 03802264
    orr r5, r5, r0, lsr #24 @ 03802268
    lsl r6, r0, #8 @ 0380226c
    and r1, lr, #0x80000000 @ 03802270
    cmp r5, r3 @ 03802274
    cmpeq r6, r2 @ 03802278
    adc r4, r4, #0xfd @ 0380227c
    add r4, r4, #0x300 @ 03802280
    bhs .L_03802290 @ 03802284
    lsrs r3, r3, #1 @ 03802288
    mov r2, r2, rrx @ 0380228c
.L_03802290:
    subs r6, r6, r2 @ 03802290
    sbc r5, r5, r3 @ 03802294
    lsrs r3, r3, #1 @ 03802298
    mov r2, r2, rrx @ 0380229c
    mov r0, #0x100000 @ 038022a0
    mov ip, #0x80000 @ 038022a4
.L_038022a8:
    subs lr, r6, r2 @ 038022a8
    sbcs lr, r5, r3 @ 038022ac
    subhs r6, r6, r2 @ 038022b0
    movhs r5, lr @ 038022b4
    orrhs r0, r0, ip @ 038022b8
    lsrs r3, r3, #1 @ 038022bc
    mov r2, r2, rrx @ 038022c0
    subs lr, r6, r2 @ 038022c4
    sbcs lr, r5, r3 @ 038022c8
    subhs r6, r6, r2 @ 038022cc
    movhs r5, lr @ 038022d0
    orrhs r0, r0, ip, lsr #1 @ 038022d4
    lsrs r3, r3, #1 @ 038022d8
    mov r2, r2, rrx @ 038022dc
    subs lr, r6, r2 @ 038022e0
    sbcs lr, r5, r3 @ 038022e4
    subhs r6, r6, r2 @ 038022e8
    movhs r5, lr @ 038022ec
    orrhs r0, r0, ip, lsr #2 @ 038022f0
    lsrs r3, r3, #1 @ 038022f4
    mov r2, r2, rrx @ 038022f8
    subs lr, r6, r2 @ 038022fc
    sbcs lr, r5, r3 @ 03802300
    subhs r6, r6, r2 @ 03802304
    movhs r5, lr @ 03802308
    orrhs r0, r0, ip, lsr #3 @ 0380230c
    orrs lr, r5, r6 @ 03802310
    beq .L_03802350 @ 03802314
    lsl r5, r5, #4 @ 03802318
    orr r5, r5, r6, lsr #28 @ 0380231c
    lsl r6, r6, #4 @ 03802320
    lsl r3, r3, #3 @ 03802324
    orr r3, r3, r2, lsr #29 @ 03802328
    lsl r2, r2, #3 @ 0380232c
    lsrs ip, ip, #4 @ 03802330
    bne .L_038022a8 @ 03802334
    tst r1, #0x100000 @ 03802338
    bne .L_0380235c @ 0380233c
    orr r1, r1, r0 @ 03802340
    mov r0, #0 @ 03802344
    mov ip, #0x80000000 @ 03802348
    b .L_038022a8 @ 0380234c
.L_03802350:
    tst r1, #0x100000 @ 03802350
    orreq r1, r1, r0 @ 03802354
    moveq r0, #0 @ 03802358
.L_0380235c:
    subs ip, r4, #0xfd @ 0380235c
    cmphi ip, #0x700 @ 03802360
    bhi .L_03802078 @ 03802364
    subs ip, r5, r3 @ 03802368
    subseq ip, r6, r2 @ 0380236c
    lsrseq ip, r0, #1 @ 03802370
    adcs r0, r0, #0 @ 03802374
    adc r1, r1, r4, lsl #20 @ 03802378
    pop {r4, r5, r6, lr} @ 0380237c
    bx lr @ 03802380
.L_03802384:
    and lr, lr, #0x80000000 @ 03802384
    orr r1, lr, r1, lsr #12 @ 03802388
    adds r4, r4, ip, lsr #1 @ 0380238c
    rsbsgt r5, r4, ip @ 03802390
    orrgt r1, r1, r4, lsl #20 @ 03802394
    popgt {r4, r5, r6, lr} @ 03802398
    bxgt lr @ 0380239c
    orr r1, r1, #0x100000 @ 038023a0
    mov lr, #0 @ 038023a4
    subs r4, r4, #1 @ 038023a8
    b .L_03802078 @ 038023ac
    .byte 0x06, 0xe0, 0x85, 0xe1, 0x2f, 0xff, 0xff, 0xea @ 038023b0
.L_038023b8:
@ FUN_038023b8 at 0x038023b8
    and r5, ip, r3, lsr #20 @ 038023b8
    teq r4, ip @ 038023bc
    teqeq r5, ip @ 038023c0
    beq .L_0380220c @ 038023c4
    teq r4, ip @ 038023c8
    bne .L_038023ec @ 038023cc
    orrs r4, r0, r1, lsl #12 @ 038023d0
    bne .L_0380220c @ 038023d4
    teq r5, ip @ 038023d8
    bne .L_038021f0 @ 038023dc
    mov r0, r2 @ 038023e0
    mov r1, r3 @ 038023e4
    b .L_0380220c @ 038023e8
.L_038023ec:
    teq r5, ip @ 038023ec
    bne .L_03802408 @ 038023f0
    orrs r5, r2, r3, lsl #12 @ 038023f4
    beq .L_038021a0 @ 038023f8
    mov r0, r2 @ 038023fc
    mov r1, r3 @ 03802400
    b .L_0380220c @ 03802404
.L_03802408:
    orrs r6, r0, r1, lsl #1 @ 03802408
    orrsne r6, r2, r3, lsl #1 @ 0380240c
    bne .L_03802138 @ 03802410
    orrs r4, r0, r1, lsl #1 @ 03802414
    bne .L_038021f0 @ 03802418
    orrs r5, r2, r3, lsl #1 @ 0380241c
    bne .L_038021a0 @ 03802420
    b .L_0380220c @ 03802424
.L_03802428:
@ FUN_03802428 at 0x03802428
    lsl r2, r1, #1 @ 03802428
    adds r2, r2, #0x200000 @ 0380242c
    bhs .L_03802468 @ 03802430
    bpl .L_03802460 @ 03802434
    mvn r3, #0x3e0 @ 03802438
    subs r2, r3, r2, asr #21 @ 0380243c
    bls .L_03802470 @ 03802440
    lsl r3, r1, #0xb @ 03802444
    orr r3, r3, #0x80000000 @ 03802448
    orr r3, r3, r0, lsr #21 @ 0380244c
    tst r1, #0x80000000 @ 03802450
    lsr r0, r3, r2 @ 03802454
    rsbne r0, r0, #0 @ 03802458
    bx lr @ 0380245c
.L_03802460:
    mov r0, #0 @ 03802460
    bx lr @ 03802464
.L_03802468:
    orrs r0, r0, r1, lsl #12 @ 03802468
    bne .L_0380247c @ 0380246c
.L_03802470:
    ands r0, r1, #0x80000000 @ 03802470
    mvneq r0, #0x80000000 @ 03802474
    bx lr @ 03802478
.L_0380247c:
    mov r0, #0 @ 0380247c
    bx lr @ 03802480
.L_03802484:
@ FUN_03802484 at 0x03802484
    lsls r2, r1, #1 @ 03802484
    bhs .L_038024b8 @ 03802488
    adds r2, r2, #0x200000 @ 0380248c
    bhs .L_038024c0 @ 03802490
    bpl .L_038024b8 @ 03802494
    mvn r3, #0x3e0 @ 03802498
    subs r2, r3, r2, asr #21 @ 0380249c
    bmi .L_038024c8 @ 038024a0
    lsl r3, r1, #0xb @ 038024a4
    orr r3, r3, #0x80000000 @ 038024a8
    orr r3, r3, r0, lsr #21 @ 038024ac
    lsr r0, r3, r2 @ 038024b0
    bx lr @ 038024b4
.L_038024b8:
    mov r0, #0 @ 038024b8
    bx lr @ 038024bc
.L_038024c0:
    orrs r0, r0, r1, lsl #12 @ 038024c0
    bne .L_038024d0 @ 038024c4
.L_038024c8:
    mvn r0, #0 @ 038024c8
    bx lr @ 038024cc
.L_038024d0:
    mov r0, #0 @ 038024d0
    bx lr @ 038024d4
    .byte 0x3c, 0x20, 0x9f, 0xe5, 0x3c, 0x30, 0x9f, 0xe5, 0x03, 0x30, 0x62, 0xe0, 0x70, 0x40, 0x2d, 0xe9 @ 038024d8
    .byte 0x43, 0x61, 0xb0, 0xe1, 0x07, 0x00, 0x00, 0x0a, 0x02, 0x50, 0xa0, 0xe1, 0x00, 0x40, 0xa0, 0xe3 @ 038024e8
    .byte 0x01, 0x40, 0x84, 0xe2, 0x04, 0xc0, 0x95, 0xe4, 0x0f, 0xe0, 0xa0, 0xe1, 0x1c, 0xff, 0x2f, 0xe1 @ 038024f8
    .byte 0x04, 0x00, 0x56, 0xe1, 0xf9, 0xff, 0xff, 0x1a, 0x72, 0x00, 0x00, 0xeb, 0x70, 0x40, 0xbd, 0xe8 @ 03802508
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0x38, 0x6d, 0x80, 0x03, 0x3c, 0x6d, 0x80, 0x03 @ 03802518
@ arm7_startup_call_1 at 0x03802524
    ldr r2, [pc, #0x70] @ 03802524
    ldr r3, [pc, #0x70] @ 03802528
    rsb r3, r2, r3 @ 0380252c
    push {r4, r5, r6, lr} @ 03802530
    asrs r6, r3, #2 @ 03802534
    beq .L_0380255c @ 03802538
    mov r5, r2 @ 0380253c
    mov r4, #0 @ 03802540
.L_03802544:
    add r4, r4, #1 @ 03802544
    ldr ip, [r5], #4 @ 03802548
    mov lr, pc @ 0380254c
    bx ip @ 03802550
    cmp r6, r4 @ 03802554
    bne .L_03802544 @ 03802558
.L_0380255c:
    bl .L_037f80d0 @ 0380255c
    ldr r2, [pc, #0x3c] @ 03802560
    ldr r3, [pc, #0x3c] @ 03802564
    rsb r3, r2, r3 @ 03802568
    asrs r6, r3, #2 @ 0380256c
    beq .L_03802594 @ 03802570
    mov r5, r2 @ 03802574
    mov r4, #0 @ 03802578
.L_0380257c:
    add r4, r4, #1 @ 0380257c
    ldr ip, [r5], #4 @ 03802580
    mov lr, pc @ 03802584
    bx ip @ 03802588
    cmp r6, r4 @ 0380258c
    bne .L_0380257c @ 03802590
.L_03802594:
    pop {r4, r5, r6, lr} @ 03802594
    bx lr @ 03802598
    .byte 0x34, 0x6d, 0x80, 0x03, 0x34, 0x6d, 0x80, 0x03, 0x34, 0x6d, 0x80, 0x03, 0x38, 0x6d, 0x80, 0x03 @ 0380259c
.L_038025ac:
@ FUN_038025ac at 0x038025ac
    cmp r2, #0xf @ 038025ac
    str lr, [sp, #-4]! @ 038025b0
    mov ip, r0 @ 038025b4
    mov lr, r2 @ 038025b8
    bls .L_038025cc @ 038025bc
    orr r3, r1, r0 @ 038025c0
    tst r3, #3 @ 038025c4
    beq .L_038025f4 @ 038025c8
.L_038025cc:
    cmp lr, #0 @ 038025cc
    beq .L_038025ec @ 038025d0
    mov r2, #0 @ 038025d4
.L_038025d8:
    ldrb r3, [r1], #1 @ 038025d8
    strb r3, [r2, ip] @ 038025dc
    add r2, r2, #1 @ 038025e0
    cmp r2, lr @ 038025e4
    bne .L_038025d8 @ 038025e8
.L_038025ec:
    .word 0xe49de004 @ 038025ec pop {lr}
    bx lr @ 038025f0
.L_038025f4:
    ldr r3, [r1] @ 038025f4
    str r3, [ip] @ 038025f8
    ldr r2, [r1, #4] @ 038025fc
    str r2, [ip, #4] @ 03802600
    ldr r3, [r1, #8] @ 03802604
    str r3, [ip, #8] @ 03802608
    sub lr, lr, #0x10 @ 0380260c
    ldr r3, [r1, #0xc] @ 03802610
    cmp lr, #0xf @ 03802614
    str r3, [ip, #0xc] @ 03802618
    add r1, r1, #0x10 @ 0380261c
    add ip, ip, #0x10 @ 03802620
    bhi .L_038025f4 @ 03802624
    cmp lr, #3 @ 03802628
    bls .L_038025cc @ 0380262c
.L_03802630:
    sub lr, lr, #4 @ 03802630
    ldr r3, [r1], #4 @ 03802634
    cmp lr, #3 @ 03802638
    str r3, [ip], #4 @ 0380263c
    bhi .L_03802630 @ 03802640
    b .L_038025cc @ 03802644
.L_03802648:
@ FUN_03802648 at 0x03802648
    cmp r2, #3 @ 03802648
    and r1, r1, #0xff @ 0380264c
    mov ip, r0 @ 03802650
    bls .L_03802660 @ 03802654
    tst r0, #3 @ 03802658
    beq .L_03802684 @ 0380265c
.L_03802660:
    cmp r2, #0 @ 03802660
    bxeq lr @ 03802664
.L_03802668:
    and r1, r1, #0xff @ 03802668
    mov r3, #0 @ 0380266c
.L_03802670:
    strb r1, [r3, ip] @ 03802670
    add r3, r3, #1 @ 03802674
    cmp r3, r2 @ 03802678
    bne .L_03802670 @ 0380267c
    bx lr @ 03802680
.L_03802684:
    orr r3, r1, r1, lsl #8 @ 03802684
    cmp r2, #0xf @ 03802688
    orr ip, r3, r3, lsl #16 @ 0380268c
    mov r3, r0 @ 03802690
    bls .L_038026c0 @ 03802694
.L_03802698:
    sub r2, r2, #0x10 @ 03802698
    cmp r2, #0xf @ 0380269c
    str ip, [r3] @ 038026a0
    str ip, [r3, #4] @ 038026a4
    str ip, [r3, #8] @ 038026a8
    str ip, [r3, #0xc] @ 038026ac
    add r3, r3, #0x10 @ 038026b0
    bhi .L_03802698 @ 038026b4
    cmp r2, #3 @ 038026b8
    bls .L_038026d0 @ 038026bc
.L_038026c0:
    sub r2, r2, #4 @ 038026c0
    cmp r2, #3 @ 038026c4
    str ip, [r3], #4 @ 038026c8
    bhi .L_038026c0 @ 038026cc
.L_038026d0:
    cmp r2, #0 @ 038026d0
    mov ip, r3 @ 038026d4
    bne .L_03802668 @ 038026d8
    bx lr @ 038026dc
    .byte 0x0d, 0xc0, 0xa0, 0xe1, 0xf8, 0xdf, 0x2d, 0xe9, 0x04, 0xb0, 0x4c, 0xe2, 0x28, 0xd0, 0x4b, 0xe2 @ 038026e0
    .byte 0xf0, 0x6f, 0x9d, 0xe8, 0x1e, 0xff, 0x2f, 0xe1, 0xb2, 0x10, 0x00, 0x00, 0x86, 0x0d, 0x00, 0x00 @ 038026f0
    .byte 0x0e, 0x0c, 0x00, 0x00, 0x16, 0x0b, 0x00, 0x00, 0x5c, 0x0a, 0x00, 0x00, 0xc8, 0x09, 0x00, 0x00 @ 03802700
    .byte 0x4c, 0x09, 0x00, 0x00, 0xe2, 0x08, 0x00, 0x00, 0x86, 0x08, 0x00, 0x00, 0x34, 0x08, 0x00, 0x00 @ 03802710
    .byte 0xea, 0x07, 0x00, 0x00, 0xa6, 0x07, 0x00, 0x00, 0x6a, 0x07, 0x00, 0x00, 0x30, 0x07, 0x00, 0x00 @ 03802720
    .byte 0xfc, 0x06, 0x00, 0x00, 0xca, 0x06, 0x00, 0x00, 0x9c, 0x06, 0x00, 0x00, 0x72, 0x06, 0x00, 0x00 @ 03802730
    .byte 0x48, 0x06, 0x00, 0x00, 0x22, 0x06, 0x00, 0x00, 0xfe, 0x05, 0x00, 0x00, 0xda, 0x05, 0x00, 0x00 @ 03802740
    .byte 0xb8, 0x05, 0x00, 0x00, 0x9a, 0x05, 0x00, 0x00, 0x7a, 0x05, 0x00, 0x00, 0x5e, 0x05, 0x00, 0x00 @ 03802750
    .byte 0x40, 0x05, 0x00, 0x00, 0x26, 0x05, 0x00, 0x00, 0x0c, 0x05, 0x00, 0x00, 0xf2, 0x04, 0x00, 0x00 @ 03802760
    .byte 0xda, 0x04, 0x00, 0x00, 0xc2, 0x04, 0x00, 0x00, 0xac, 0x04, 0x00, 0x00, 0x96, 0x04, 0x00, 0x00 @ 03802770
    .byte 0x80, 0x04, 0x00, 0x00, 0x6c, 0x04, 0x00, 0x00, 0x58, 0x04, 0x00, 0x00, 0x44, 0x04, 0x00, 0x00 @ 03802780
    .byte 0x30, 0x04, 0x00, 0x00, 0x1e, 0x04, 0x00, 0x00, 0x0c, 0x04, 0x00, 0x00, 0xfa, 0x03, 0x00, 0x00 @ 03802790
    .byte 0xea, 0x03, 0x00, 0x00, 0xd8, 0x03, 0x00, 0x00, 0xc8, 0x03, 0x00, 0x00, 0xb8, 0x03, 0x00, 0x00 @ 038027a0
    .byte 0xa8, 0x03, 0x00, 0x00, 0x9a, 0x03, 0x00, 0x00, 0x8a, 0x03, 0x00, 0x00, 0x7c, 0x03, 0x00, 0x00 @ 038027b0
    .byte 0x6e, 0x03, 0x00, 0x00, 0x60, 0x03, 0x00, 0x00, 0x52, 0x03, 0x00, 0x00, 0x44, 0x03, 0x00, 0x00 @ 038027c0
    .byte 0x36, 0x03, 0x00, 0x00, 0x2a, 0x03, 0x00, 0x00, 0x1e, 0x03, 0x00, 0x00, 0x10, 0x03, 0x00, 0x00 @ 038027d0
    .byte 0x04, 0x03, 0x00, 0x00, 0xf8, 0x02, 0x00, 0x00, 0xee, 0x02, 0x00, 0x00, 0xe2, 0x02, 0x00, 0x00 @ 038027e0
    .byte 0xd6, 0x02, 0x00, 0x00, 0xcc, 0x02, 0x00, 0x00, 0xc0, 0x02, 0x00, 0x00, 0xb6, 0x02, 0x00, 0x00 @ 038027f0
    .byte 0xaa, 0x02, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x00, 0x96, 0x02, 0x00, 0x00, 0x8c, 0x02, 0x00, 0x00 @ 03802800
    .byte 0x82, 0x02, 0x00, 0x00, 0x78, 0x02, 0x00, 0x00, 0x6e, 0x02, 0x00, 0x00, 0x66, 0x02, 0x00, 0x00 @ 03802810
    .byte 0x5c, 0x02, 0x00, 0x00, 0x52, 0x02, 0x00, 0x00, 0x4a, 0x02, 0x00, 0x00, 0x42, 0x02, 0x00, 0x00 @ 03802820
    .byte 0x38, 0x02, 0x00, 0x00, 0x30, 0x02, 0x00, 0x00, 0x28, 0x02, 0x00, 0x00, 0x1e, 0x02, 0x00, 0x00 @ 03802830
    .byte 0x16, 0x02, 0x00, 0x00, 0x0e, 0x02, 0x00, 0x00, 0x06, 0x02, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00 @ 03802840
    .byte 0xf6, 0x01, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0xe8, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00 @ 03802850
    .byte 0xd8, 0x01, 0x00, 0x00, 0xd2, 0x01, 0x00, 0x00, 0xca, 0x01, 0x00, 0x00, 0xc4, 0x01, 0x00, 0x00 @ 03802860
    .byte 0xbc, 0x01, 0x00, 0x00, 0xb6, 0x01, 0x00, 0x00, 0xae, 0x01, 0x00, 0x00, 0xa8, 0x01, 0x00, 0x00 @ 03802870
    .byte 0xa2, 0x01, 0x00, 0x00, 0x9a, 0x01, 0x00, 0x00, 0x94, 0x01, 0x00, 0x00, 0x8e, 0x01, 0x00, 0x00 @ 03802880
    .byte 0x88, 0x01, 0x00, 0x00, 0x82, 0x01, 0x00, 0x00, 0x7c, 0x01, 0x00, 0x00, 0x76, 0x01, 0x00, 0x00 @ 03802890
    .byte 0x70, 0x01, 0x00, 0x00, 0x6a, 0x01, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00, 0x5e, 0x01, 0x00, 0x00 @ 038028a0
    .byte 0x58, 0x01, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00, 0x4e, 0x01, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00 @ 038028b0
    .byte 0x42, 0x01, 0x00, 0x00, 0x3e, 0x01, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00, 0x32, 0x01, 0x00, 0x00 @ 038028c0
    .byte 0x2e, 0x01, 0x00, 0x00, 0x28, 0x01, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00, 0x1e, 0x01, 0x00, 0x00 @ 038028d0
    .byte 0x1a, 0x01, 0x00, 0x00, 0x14, 0x01, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00 @ 038028e0
    .byte 0x06, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00 @ 038028f0
    .byte 0xf4, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xec, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00 @ 03802900
    .byte 0xe4, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00 @ 03802910
    .byte 0xd4, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00 @ 03802920
    .byte 0xc4, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00 @ 03802930
    .byte 0xb6, 0x00, 0x00, 0x00, 0xb2, 0x00, 0x00, 0x00, 0xae, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00 @ 03802940
    .byte 0xa6, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00 @ 03802950
    .byte 0x9a, 0x00, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00 @ 03802960
    .byte 0x8c, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00 @ 03802970
    .byte 0x80, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00 @ 03802980
    .byte 0x76, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x00 @ 03802990
    .byte 0x6a, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00 @ 038029a0
    .byte 0x60, 0x00, 0x00, 0x00, 0x5e, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00 @ 038029b0
    .byte 0x56, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00 @ 038029c0
    .byte 0x4e, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00 @ 038029d0
    .byte 0x46, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00 @ 038029e0
    .byte 0x3e, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00 @ 038029f0
    .byte 0x36, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00 @ 03802a00
    .byte 0x2e, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00 @ 03802a10
    .byte 0x28, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00 @ 03802a20
    .byte 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00 @ 03802a30
    .byte 0x1e, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00 @ 03802a40
    .byte 0x18, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00 @ 03802a50
    .byte 0x14, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00 @ 03802a60
    .byte 0x10, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00 @ 03802a70
    .byte 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00 @ 03802a80
    .byte 0x0a, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00 @ 03802a90
    .byte 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00 @ 03802aa0
    .byte 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00 @ 03802ab0
    .byte 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00 @ 03802ac0
    .byte 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 03802ad0
    .zero 56
    .byte 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00 @ 03802b18
    .byte 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00 @ 03802b28
    .byte 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00 @ 03802b38
    .byte 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00 @ 03802b48
    .byte 0x08, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00 @ 03802b58
    .byte 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00 @ 03802b68
    .byte 0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00 @ 03802b78
    .byte 0x12, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00 @ 03802b88
    .byte 0x18, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00 @ 03802b98
    .byte 0x1c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00 @ 03802ba8
    .byte 0x22, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00 @ 03802bb8
    .byte 0x28, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00 @ 03802bc8
    .byte 0x2e, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00 @ 03802bd8
    .byte 0x34, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x00, 0x00 @ 03802be8
    .byte 0x3c, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00 @ 03802bf8
    .byte 0x44, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00 @ 03802c08
    .byte 0x4c, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00 @ 03802c18
    .byte 0x54, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00 @ 03802c28
    .byte 0x5e, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00 @ 03802c38
    .byte 0x68, 0x00, 0x00, 0x00, 0x6a, 0x00, 0x00, 0x00, 0x6e, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00 @ 03802c48
    .byte 0x72, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00 @ 03802c58
    .byte 0x7e, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00 @ 03802c68
    .byte 0x8a, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00 @ 03802c78
    .byte 0x96, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00 @ 03802c88
    .byte 0xa4, 0x00, 0x00, 0x00, 0xa6, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0xae, 0x00, 0x00, 0x00 @ 03802c98
    .byte 0xb2, 0x00, 0x00, 0x00, 0xb6, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00 @ 03802ca8
    .byte 0xc0, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00 @ 03802cb8
    .byte 0xd0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00 @ 03802cc8
    .byte 0xe0, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0xec, 0x00, 0x00, 0x00 @ 03802cd8
    .byte 0xf0, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00 @ 03802ce8
    .byte 0x02, 0x01, 0x00, 0x00, 0x06, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00 @ 03802cf8
    .byte 0x14, 0x01, 0x00, 0x00, 0x1a, 0x01, 0x00, 0x00, 0x1e, 0x01, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00 @ 03802d08
    .byte 0x28, 0x01, 0x00, 0x00, 0x2e, 0x01, 0x00, 0x00, 0x32, 0x01, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00 @ 03802d18
    .byte 0x3e, 0x01, 0x00, 0x00, 0x42, 0x01, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x4e, 0x01, 0x00, 0x00 @ 03802d28
    .byte 0x52, 0x01, 0x00, 0x00, 0x58, 0x01, 0x00, 0x00, 0x5e, 0x01, 0x00, 0x00, 0x64, 0x01, 0x00, 0x00 @ 03802d38
    .byte 0x6a, 0x01, 0x00, 0x00, 0x70, 0x01, 0x00, 0x00, 0x76, 0x01, 0x00, 0x00, 0x7c, 0x01, 0x00, 0x00 @ 03802d48
    .byte 0x82, 0x01, 0x00, 0x00, 0x88, 0x01, 0x00, 0x00, 0x8e, 0x01, 0x00, 0x00, 0x94, 0x01, 0x00, 0x00 @ 03802d58
    .byte 0x9a, 0x01, 0x00, 0x00, 0xa2, 0x01, 0x00, 0x00, 0xa8, 0x01, 0x00, 0x00, 0xae, 0x01, 0x00, 0x00 @ 03802d68
    .byte 0xb6, 0x01, 0x00, 0x00, 0xbc, 0x01, 0x00, 0x00, 0xc4, 0x01, 0x00, 0x00, 0xca, 0x01, 0x00, 0x00 @ 03802d78
    .byte 0xd2, 0x01, 0x00, 0x00, 0xd8, 0x01, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0xe8, 0x01, 0x00, 0x00 @ 03802d88
    .byte 0xf0, 0x01, 0x00, 0x00, 0xf6, 0x01, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x06, 0x02, 0x00, 0x00 @ 03802d98
    .byte 0x0e, 0x02, 0x00, 0x00, 0x16, 0x02, 0x00, 0x00, 0x1e, 0x02, 0x00, 0x00, 0x28, 0x02, 0x00, 0x00 @ 03802da8
    .byte 0x30, 0x02, 0x00, 0x00, 0x38, 0x02, 0x00, 0x00, 0x42, 0x02, 0x00, 0x00, 0x4a, 0x02, 0x00, 0x00 @ 03802db8
    .byte 0x52, 0x02, 0x00, 0x00, 0x5c, 0x02, 0x00, 0x00, 0x66, 0x02, 0x00, 0x00, 0x6e, 0x02, 0x00, 0x00 @ 03802dc8
    .byte 0x78, 0x02, 0x00, 0x00, 0x82, 0x02, 0x00, 0x00, 0x8c, 0x02, 0x00, 0x00, 0x96, 0x02, 0x00, 0x00 @ 03802dd8
    .byte 0xa0, 0x02, 0x00, 0x00, 0xaa, 0x02, 0x00, 0x00, 0xb6, 0x02, 0x00, 0x00, 0xc0, 0x02, 0x00, 0x00 @ 03802de8
    .byte 0xcc, 0x02, 0x00, 0x00, 0xd6, 0x02, 0x00, 0x00, 0xe2, 0x02, 0x00, 0x00, 0xee, 0x02, 0x00, 0x00 @ 03802df8
    .byte 0xf8, 0x02, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x10, 0x03, 0x00, 0x00, 0x1e, 0x03, 0x00, 0x00 @ 03802e08
    .byte 0x2a, 0x03, 0x00, 0x00, 0x36, 0x03, 0x00, 0x00, 0x44, 0x03, 0x00, 0x00, 0x52, 0x03, 0x00, 0x00 @ 03802e18
    .byte 0x60, 0x03, 0x00, 0x00, 0x6e, 0x03, 0x00, 0x00, 0x7c, 0x03, 0x00, 0x00, 0x8a, 0x03, 0x00, 0x00 @ 03802e28
    .byte 0x9a, 0x03, 0x00, 0x00, 0xa8, 0x03, 0x00, 0x00, 0xb8, 0x03, 0x00, 0x00, 0xc8, 0x03, 0x00, 0x00 @ 03802e38
    .byte 0xd8, 0x03, 0x00, 0x00, 0xea, 0x03, 0x00, 0x00, 0xfa, 0x03, 0x00, 0x00, 0x0c, 0x04, 0x00, 0x00 @ 03802e48
    .byte 0x1e, 0x04, 0x00, 0x00, 0x30, 0x04, 0x00, 0x00, 0x44, 0x04, 0x00, 0x00, 0x58, 0x04, 0x00, 0x00 @ 03802e58
    .byte 0x6c, 0x04, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x96, 0x04, 0x00, 0x00, 0xac, 0x04, 0x00, 0x00 @ 03802e68
    .byte 0xc2, 0x04, 0x00, 0x00, 0xda, 0x04, 0x00, 0x00, 0xf2, 0x04, 0x00, 0x00, 0x0c, 0x05, 0x00, 0x00 @ 03802e78
    .byte 0x26, 0x05, 0x00, 0x00, 0x40, 0x05, 0x00, 0x00, 0x5e, 0x05, 0x00, 0x00, 0x7a, 0x05, 0x00, 0x00 @ 03802e88
    .byte 0x9a, 0x05, 0x00, 0x00, 0xb8, 0x05, 0x00, 0x00, 0xda, 0x05, 0x00, 0x00, 0xfe, 0x05, 0x00, 0x00 @ 03802e98
    .byte 0x22, 0x06, 0x00, 0x00, 0x48, 0x06, 0x00, 0x00, 0x72, 0x06, 0x00, 0x00, 0x9c, 0x06, 0x00, 0x00 @ 03802ea8
    .byte 0xca, 0x06, 0x00, 0x00, 0xfc, 0x06, 0x00, 0x00, 0x30, 0x07, 0x00, 0x00, 0x6a, 0x07, 0x00, 0x00 @ 03802eb8
    .byte 0xa6, 0x07, 0x00, 0x00, 0xea, 0x07, 0x00, 0x00, 0x34, 0x08, 0x00, 0x00, 0x86, 0x08, 0x00, 0x00 @ 03802ec8
    .byte 0xe2, 0x08, 0x00, 0x00, 0x4c, 0x09, 0x00, 0x00, 0xc8, 0x09, 0x00, 0x00, 0x5c, 0x0a, 0x00, 0x00 @ 03802ed8
    .byte 0x16, 0x0b, 0x00, 0x00, 0x0e, 0x0c, 0x00, 0x00, 0x86, 0x0d, 0x00, 0x00, 0xb2, 0x10, 0x00, 0x00 @ 03802ee8
    .byte 0xb3, 0x10, 0x00, 0x00, 0x87, 0x0d, 0x00, 0x00, 0x0f, 0x0c, 0x00, 0x00, 0x17, 0x0b, 0x00, 0x00 @ 03802ef8
    .byte 0x5d, 0x0a, 0x00, 0x00, 0xc9, 0x09, 0x00, 0x00, 0x4d, 0x09, 0x00, 0x00, 0xe3, 0x08, 0x00, 0x00 @ 03802f08
    .byte 0x87, 0x08, 0x00, 0x00, 0x35, 0x08, 0x00, 0x00, 0xeb, 0x07, 0x00, 0x00, 0xa7, 0x07, 0x00, 0x00 @ 03802f18
    .byte 0x6b, 0x07, 0x00, 0x00, 0x31, 0x07, 0x00, 0x00, 0xfd, 0x06, 0x00, 0x00, 0xcb, 0x06, 0x00, 0x00 @ 03802f28
    .byte 0x9d, 0x06, 0x00, 0x00, 0x73, 0x06, 0x00, 0x00, 0x49, 0x06, 0x00, 0x00, 0x23, 0x06, 0x00, 0x00 @ 03802f38
    .byte 0xff, 0x05, 0x00, 0x00, 0xdb, 0x05, 0x00, 0x00, 0xb9, 0x05, 0x00, 0x00, 0x9b, 0x05, 0x00, 0x00 @ 03802f48
    .byte 0x7b, 0x05, 0x00, 0x00, 0x5f, 0x05, 0x00, 0x00, 0x41, 0x05, 0x00, 0x00, 0x27, 0x05, 0x00, 0x00 @ 03802f58
    .byte 0x0d, 0x05, 0x00, 0x00, 0xf3, 0x04, 0x00, 0x00, 0xdb, 0x04, 0x00, 0x00, 0xc3, 0x04, 0x00, 0x00 @ 03802f68
    .byte 0xad, 0x04, 0x00, 0x00, 0x97, 0x04, 0x00, 0x00, 0x81, 0x04, 0x00, 0x00, 0x6d, 0x04, 0x00, 0x00 @ 03802f78
    .byte 0x59, 0x04, 0x00, 0x00, 0x45, 0x04, 0x00, 0x00, 0x31, 0x04, 0x00, 0x00, 0x1f, 0x04, 0x00, 0x00 @ 03802f88
    .byte 0x0d, 0x04, 0x00, 0x00, 0xfb, 0x03, 0x00, 0x00, 0xeb, 0x03, 0x00, 0x00, 0xd9, 0x03, 0x00, 0x00 @ 03802f98
    .byte 0xc9, 0x03, 0x00, 0x00, 0xb9, 0x03, 0x00, 0x00, 0xa9, 0x03, 0x00, 0x00, 0x9b, 0x03, 0x00, 0x00 @ 03802fa8
    .byte 0x8b, 0x03, 0x00, 0x00, 0x7d, 0x03, 0x00, 0x00, 0x6f, 0x03, 0x00, 0x00, 0x61, 0x03, 0x00, 0x00 @ 03802fb8
    .byte 0x53, 0x03, 0x00, 0x00, 0x45, 0x03, 0x00, 0x00, 0x37, 0x03, 0x00, 0x00, 0x2b, 0x03, 0x00, 0x00 @ 03802fc8
    .byte 0x1f, 0x03, 0x00, 0x00, 0x11, 0x03, 0x00, 0x00, 0x05, 0x03, 0x00, 0x00, 0xf9, 0x02, 0x00, 0x00 @ 03802fd8
    .byte 0xef, 0x02, 0x00, 0x00, 0xe3, 0x02, 0x00, 0x00, 0xd7, 0x02, 0x00, 0x00, 0xcd, 0x02, 0x00, 0x00 @ 03802fe8
    .byte 0xc1, 0x02, 0x00, 0x00, 0xb7, 0x02, 0x00, 0x00, 0xab, 0x02, 0x00, 0x00, 0xa1, 0x02, 0x00, 0x00 @ 03802ff8
    .byte 0x97, 0x02, 0x00, 0x00, 0x8d, 0x02, 0x00, 0x00, 0x83, 0x02, 0x00, 0x00, 0x79, 0x02, 0x00, 0x00 @ 03803008
    .byte 0x6f, 0x02, 0x00, 0x00, 0x67, 0x02, 0x00, 0x00, 0x5d, 0x02, 0x00, 0x00, 0x53, 0x02, 0x00, 0x00 @ 03803018
    .byte 0x4b, 0x02, 0x00, 0x00, 0x43, 0x02, 0x00, 0x00, 0x39, 0x02, 0x00, 0x00, 0x31, 0x02, 0x00, 0x00 @ 03803028
    .byte 0x29, 0x02, 0x00, 0x00, 0x1f, 0x02, 0x00, 0x00, 0x17, 0x02, 0x00, 0x00, 0x0f, 0x02, 0x00, 0x00 @ 03803038
    .byte 0x07, 0x02, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0xf7, 0x01, 0x00, 0x00, 0xf1, 0x01, 0x00, 0x00 @ 03803048
    .byte 0xe9, 0x01, 0x00, 0x00, 0xe1, 0x01, 0x00, 0x00, 0xd9, 0x01, 0x00, 0x00, 0xd3, 0x01, 0x00, 0x00 @ 03803058
    .byte 0xcb, 0x01, 0x00, 0x00, 0xc5, 0x01, 0x00, 0x00, 0xbd, 0x01, 0x00, 0x00, 0xb7, 0x01, 0x00, 0x00 @ 03803068
    .byte 0xaf, 0x01, 0x00, 0x00, 0xa9, 0x01, 0x00, 0x00, 0xa3, 0x01, 0x00, 0x00, 0x9b, 0x01, 0x00, 0x00 @ 03803078
    .byte 0x95, 0x01, 0x00, 0x00, 0x8f, 0x01, 0x00, 0x00, 0x89, 0x01, 0x00, 0x00, 0x83, 0x01, 0x00, 0x00 @ 03803088
    .byte 0x7d, 0x01, 0x00, 0x00, 0x77, 0x01, 0x00, 0x00, 0x71, 0x01, 0x00, 0x00, 0x6b, 0x01, 0x00, 0x00 @ 03803098
    .byte 0x65, 0x01, 0x00, 0x00, 0x5f, 0x01, 0x00, 0x00, 0x59, 0x01, 0x00, 0x00, 0x53, 0x01, 0x00, 0x00 @ 038030a8
    .byte 0x4f, 0x01, 0x00, 0x00, 0x49, 0x01, 0x00, 0x00, 0x43, 0x01, 0x00, 0x00, 0x3f, 0x01, 0x00, 0x00 @ 038030b8
    .byte 0x39, 0x01, 0x00, 0x00, 0x33, 0x01, 0x00, 0x00, 0x2f, 0x01, 0x00, 0x00, 0x29, 0x01, 0x00, 0x00 @ 038030c8
    .byte 0x25, 0x01, 0x00, 0x00, 0x1f, 0x01, 0x00, 0x00, 0x1b, 0x01, 0x00, 0x00, 0x15, 0x01, 0x00, 0x00 @ 038030d8
    .byte 0x11, 0x01, 0x00, 0x00, 0x0d, 0x01, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00 @ 038030e8
    .byte 0xff, 0x00, 0x00, 0x00, 0xfb, 0x00, 0x00, 0x00, 0xf5, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0x00 @ 038030f8
    .byte 0xed, 0x00, 0x00, 0x00, 0xe9, 0x00, 0x00, 0x00, 0xe5, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00 @ 03803108
    .byte 0xdd, 0x00, 0x00, 0x00, 0xd9, 0x00, 0x00, 0x00, 0xd5, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0x00 @ 03803118
    .byte 0xcd, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00, 0x00 @ 03803128
    .byte 0xbd, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00 @ 03803138
    .byte 0xaf, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00, 0xa5, 0x00, 0x00, 0x00 @ 03803148
    .byte 0xa1, 0x00, 0x00, 0x00, 0x9d, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00 @ 03803158
    .byte 0x95, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00 @ 03803168
    .byte 0x87, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00 @ 03803178
    .byte 0x7d, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00 @ 03803188
    .byte 0x71, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x00 @ 03803198
    .byte 0x67, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00 @ 038031a8
    .byte 0x5d, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x00 @ 038031b8
    .byte 0x53, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00 @ 038031c8
    .byte 0x4b, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00 @ 038031d8
    .byte 0x43, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x00, 0x00 @ 038031e8
    .byte 0x3b, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00 @ 038031f8
    .byte 0x33, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00 @ 03803208
    .byte 0x2d, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00 @ 03803218
    .byte 0x27, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00 @ 03803228
    .byte 0x21, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00 @ 03803238
    .byte 0x1b, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00 @ 03803248
    .byte 0x17, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00 @ 03803258
    .byte 0x13, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00 @ 03803268
    .byte 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00 @ 03803278
    .byte 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00 @ 03803288
    .byte 0x09, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00 @ 03803298
    .byte 0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00 @ 038032a8
    .byte 0x05, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00 @ 038032b8
    .byte 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00 @ 038032c8
    .byte 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 @ 038032d8
    .byte 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 @ 038032e8
    .byte 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 @ 038032f8
    .byte 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 @ 03803308
    .byte 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00 @ 03803318
    .byte 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00 @ 03803328
    .byte 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00 @ 03803338
    .byte 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00 @ 03803348
    .byte 0x09, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00 @ 03803358
    .byte 0x0d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00 @ 03803368
    .byte 0x0f, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00 @ 03803378
    .byte 0x13, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00 @ 03803388
    .byte 0x19, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00 @ 03803398
    .byte 0x1d, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00 @ 038033a8
    .byte 0x23, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00 @ 038033b8
    .byte 0x29, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x2d, 0x00, 0x00, 0x00 @ 038033c8
    .byte 0x2f, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00 @ 038033d8
    .byte 0x35, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x00, 0x00 @ 038033e8
    .byte 0x3d, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00 @ 038033f8
    .byte 0x45, 0x00, 0x00, 0x00, 0x47, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00 @ 03803408
    .byte 0x4d, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00 @ 03803418
    .byte 0x55, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00 @ 03803428
    .byte 0x5f, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00 @ 03803438
    .byte 0x69, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x71, 0x00, 0x00, 0x00 @ 03803448
    .byte 0x73, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00 @ 03803458
    .byte 0x7f, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00 @ 03803468
    .byte 0x8b, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0x95, 0x00, 0x00, 0x00 @ 03803478
    .byte 0x97, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x9d, 0x00, 0x00, 0x00, 0xa1, 0x00, 0x00, 0x00 @ 03803488
    .byte 0xa5, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00 @ 03803498
    .byte 0xb3, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0xb9, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00 @ 038034a8
    .byte 0xc1, 0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0xcd, 0x00, 0x00, 0x00 @ 038034b8
    .byte 0xd1, 0x00, 0x00, 0x00, 0xd5, 0x00, 0x00, 0x00, 0xd9, 0x00, 0x00, 0x00, 0xdd, 0x00, 0x00, 0x00 @ 038034c8
    .byte 0xe1, 0x00, 0x00, 0x00, 0xe5, 0x00, 0x00, 0x00, 0xe9, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00 @ 038034d8
    .byte 0xf1, 0x00, 0x00, 0x00, 0xf5, 0x00, 0x00, 0x00, 0xfb, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00 @ 038034e8
    .byte 0x03, 0x01, 0x00, 0x00, 0x07, 0x01, 0x00, 0x00, 0x0d, 0x01, 0x00, 0x00, 0x11, 0x01, 0x00, 0x00 @ 038034f8
    .byte 0x15, 0x01, 0x00, 0x00, 0x1b, 0x01, 0x00, 0x00, 0x1f, 0x01, 0x00, 0x00, 0x25, 0x01, 0x00, 0x00 @ 03803508
    .byte 0x29, 0x01, 0x00, 0x00, 0x2f, 0x01, 0x00, 0x00, 0x33, 0x01, 0x00, 0x00, 0x39, 0x01, 0x00, 0x00 @ 03803518
    .byte 0x3f, 0x01, 0x00, 0x00, 0x43, 0x01, 0x00, 0x00, 0x49, 0x01, 0x00, 0x00, 0x4f, 0x01, 0x00, 0x00 @ 03803528
    .byte 0x53, 0x01, 0x00, 0x00, 0x59, 0x01, 0x00, 0x00, 0x5f, 0x01, 0x00, 0x00, 0x65, 0x01, 0x00, 0x00 @ 03803538
    .byte 0x6b, 0x01, 0x00, 0x00, 0x71, 0x01, 0x00, 0x00, 0x77, 0x01, 0x00, 0x00, 0x7d, 0x01, 0x00, 0x00 @ 03803548
    .byte 0x83, 0x01, 0x00, 0x00, 0x89, 0x01, 0x00, 0x00, 0x8f, 0x01, 0x00, 0x00, 0x95, 0x01, 0x00, 0x00 @ 03803558
    .byte 0x9b, 0x01, 0x00, 0x00, 0xa3, 0x01, 0x00, 0x00, 0xa9, 0x01, 0x00, 0x00, 0xaf, 0x01, 0x00, 0x00 @ 03803568
    .byte 0xb7, 0x01, 0x00, 0x00, 0xbd, 0x01, 0x00, 0x00, 0xc5, 0x01, 0x00, 0x00, 0xcb, 0x01, 0x00, 0x00 @ 03803578
    .byte 0xd3, 0x01, 0x00, 0x00, 0xd9, 0x01, 0x00, 0x00, 0xe1, 0x01, 0x00, 0x00, 0xe9, 0x01, 0x00, 0x00 @ 03803588
    .byte 0xf1, 0x01, 0x00, 0x00, 0xf7, 0x01, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0x07, 0x02, 0x00, 0x00 @ 03803598
    .byte 0x0f, 0x02, 0x00, 0x00, 0x17, 0x02, 0x00, 0x00, 0x1f, 0x02, 0x00, 0x00, 0x29, 0x02, 0x00, 0x00 @ 038035a8
    .byte 0x31, 0x02, 0x00, 0x00, 0x39, 0x02, 0x00, 0x00, 0x43, 0x02, 0x00, 0x00, 0x4b, 0x02, 0x00, 0x00 @ 038035b8
    .byte 0x53, 0x02, 0x00, 0x00, 0x5d, 0x02, 0x00, 0x00, 0x67, 0x02, 0x00, 0x00, 0x6f, 0x02, 0x00, 0x00 @ 038035c8
    .byte 0x79, 0x02, 0x00, 0x00, 0x83, 0x02, 0x00, 0x00, 0x8d, 0x02, 0x00, 0x00, 0x97, 0x02, 0x00, 0x00 @ 038035d8
    .byte 0xa1, 0x02, 0x00, 0x00, 0xab, 0x02, 0x00, 0x00, 0xb7, 0x02, 0x00, 0x00, 0xc1, 0x02, 0x00, 0x00 @ 038035e8
    .byte 0xcd, 0x02, 0x00, 0x00, 0xd7, 0x02, 0x00, 0x00, 0xe3, 0x02, 0x00, 0x00, 0xef, 0x02, 0x00, 0x00 @ 038035f8
    .byte 0xf9, 0x02, 0x00, 0x00, 0x05, 0x03, 0x00, 0x00, 0x11, 0x03, 0x00, 0x00, 0x1f, 0x03, 0x00, 0x00 @ 03803608
    .byte 0x2b, 0x03, 0x00, 0x00, 0x37, 0x03, 0x00, 0x00, 0x45, 0x03, 0x00, 0x00, 0x53, 0x03, 0x00, 0x00 @ 03803618
    .byte 0x61, 0x03, 0x00, 0x00, 0x6f, 0x03, 0x00, 0x00, 0x7d, 0x03, 0x00, 0x00, 0x8b, 0x03, 0x00, 0x00 @ 03803628
    .byte 0x9b, 0x03, 0x00, 0x00, 0xa9, 0x03, 0x00, 0x00, 0xb9, 0x03, 0x00, 0x00, 0xc9, 0x03, 0x00, 0x00 @ 03803638
    .byte 0xd9, 0x03, 0x00, 0x00, 0xeb, 0x03, 0x00, 0x00, 0xfb, 0x03, 0x00, 0x00, 0x0d, 0x04, 0x00, 0x00 @ 03803648
    .byte 0x1f, 0x04, 0x00, 0x00, 0x31, 0x04, 0x00, 0x00, 0x45, 0x04, 0x00, 0x00, 0x59, 0x04, 0x00, 0x00 @ 03803658
    .byte 0x6d, 0x04, 0x00, 0x00, 0x81, 0x04, 0x00, 0x00, 0x97, 0x04, 0x00, 0x00, 0xad, 0x04, 0x00, 0x00 @ 03803668
    .byte 0xc3, 0x04, 0x00, 0x00, 0xdb, 0x04, 0x00, 0x00, 0xf3, 0x04, 0x00, 0x00, 0x0d, 0x05, 0x00, 0x00 @ 03803678
    .byte 0x27, 0x05, 0x00, 0x00, 0x41, 0x05, 0x00, 0x00, 0x5f, 0x05, 0x00, 0x00, 0x7b, 0x05, 0x00, 0x00 @ 03803688
    .byte 0x9b, 0x05, 0x00, 0x00, 0xb9, 0x05, 0x00, 0x00, 0xdb, 0x05, 0x00, 0x00, 0xff, 0x05, 0x00, 0x00 @ 03803698
    .byte 0x23, 0x06, 0x00, 0x00, 0x49, 0x06, 0x00, 0x00, 0x73, 0x06, 0x00, 0x00, 0x9d, 0x06, 0x00, 0x00 @ 038036a8
    .byte 0xcb, 0x06, 0x00, 0x00, 0xfd, 0x06, 0x00, 0x00, 0x31, 0x07, 0x00, 0x00, 0x6b, 0x07, 0x00, 0x00 @ 038036b8
    .byte 0xa7, 0x07, 0x00, 0x00, 0xeb, 0x07, 0x00, 0x00, 0x35, 0x08, 0x00, 0x00, 0x87, 0x08, 0x00, 0x00 @ 038036c8
    .byte 0xe3, 0x08, 0x00, 0x00, 0x4d, 0x09, 0x00, 0x00, 0xc9, 0x09, 0x00, 0x00, 0x5d, 0x0a, 0x00, 0x00 @ 038036d8
    .byte 0x17, 0x0b, 0x00, 0x00, 0x0f, 0x0c, 0x00, 0x00, 0x87, 0x0d, 0x00, 0x00, 0xb3, 0x10, 0x00, 0x00 @ 038036e8
    .byte 0xe8, 0x1f, 0x18, 0xe0, 0xd4, 0x1f, 0x2c, 0xe0, 0xbc, 0x1f, 0x44, 0xe0, 0xa8, 0x1f, 0x58, 0xe0 @ 038036f8
    .byte 0x90, 0x1f, 0x70, 0xe0, 0x7c, 0x1f, 0x84, 0xe0, 0x68, 0x1f, 0x98, 0xe0, 0x50, 0x1f, 0xb0, 0xe0 @ 03803708
    .byte 0x3c, 0x1f, 0xc4, 0xe0, 0x24, 0x1f, 0xdc, 0xe0, 0x10, 0x1f, 0xf0, 0xe0, 0xfc, 0x1e, 0x04, 0xe1 @ 03803718
    .byte 0xe4, 0x1e, 0x1c, 0xe1, 0xd0, 0x1e, 0x30, 0xe1, 0xb8, 0x1e, 0x48, 0xe1, 0xa4, 0x1e, 0x5c, 0xe1 @ 03803728
    .byte 0x90, 0x1e, 0x70, 0xe1, 0x7c, 0x1e, 0x84, 0xe1, 0x64, 0x1e, 0x9c, 0xe1, 0x50, 0x1e, 0xb0, 0xe1 @ 03803738
    .byte 0x3c, 0x1e, 0xc4, 0xe1, 0x28, 0x1e, 0xd8, 0xe1, 0x10, 0x1e, 0xf0, 0xe1, 0xfc, 0x1d, 0x04, 0xe2 @ 03803748
    .byte 0xe8, 0x1d, 0x18, 0xe2, 0xd4, 0x1d, 0x2c, 0xe2, 0xc0, 0x1d, 0x40, 0xe2, 0xa8, 0x1d, 0x58, 0xe2 @ 03803758
    .byte 0x94, 0x1d, 0x6c, 0xe2, 0x80, 0x1d, 0x80, 0xe2, 0x6c, 0x1d, 0x94, 0xe2, 0x58, 0x1d, 0xa8, 0xe2 @ 03803768
    .byte 0x44, 0x1d, 0xbc, 0xe2, 0x30, 0x1d, 0xd0, 0xe2, 0x1c, 0x1d, 0xe4, 0xe2, 0x08, 0x1d, 0xf8, 0xe2 @ 03803778
    .byte 0xf4, 0x1c, 0x0c, 0xe3, 0xe0, 0x1c, 0x20, 0xe3, 0xcc, 0x1c, 0x34, 0xe3, 0xb8, 0x1c, 0x48, 0xe3 @ 03803788
    .byte 0xa4, 0x1c, 0x5c, 0xe3, 0x90, 0x1c, 0x70, 0xe3, 0x7c, 0x1c, 0x84, 0xe3, 0x68, 0x1c, 0x98, 0xe3 @ 03803798
    .byte 0x54, 0x1c, 0xac, 0xe3, 0x40, 0x1c, 0xc0, 0xe3, 0x2c, 0x1c, 0xd4, 0xe3, 0x18, 0x1c, 0xe8, 0xe3 @ 038037a8
    .byte 0x08, 0x1c, 0xf8, 0xe3, 0xf4, 0x1b, 0x0c, 0xe4, 0xe0, 0x1b, 0x20, 0xe4, 0xcc, 0x1b, 0x34, 0xe4 @ 038037b8
    .byte 0xb8, 0x1b, 0x48, 0xe4, 0xa4, 0x1b, 0x5c, 0xe4, 0x94, 0x1b, 0x6c, 0xe4, 0x80, 0x1b, 0x80, 0xe4 @ 038037c8
    .byte 0x6c, 0x1b, 0x94, 0xe4, 0x58, 0x1b, 0xa8, 0xe4, 0x48, 0x1b, 0xb8, 0xe4, 0x34, 0x1b, 0xcc, 0xe4 @ 038037d8
    .byte 0x20, 0x1b, 0xe0, 0xe4, 0x10, 0x1b, 0xf0, 0xe4, 0xfc, 0x1a, 0x04, 0xe5, 0xe8, 0x1a, 0x18, 0xe5 @ 038037e8
    .byte 0xd4, 0x1a, 0x2c, 0xe5, 0xc4, 0x1a, 0x3c, 0xe5, 0xb0, 0x1a, 0x50, 0xe5, 0xa0, 0x1a, 0x60, 0xe5 @ 038037f8
    .byte 0x8c, 0x1a, 0x74, 0xe5, 0x78, 0x1a, 0x88, 0xe5, 0x68, 0x1a, 0x98, 0xe5, 0x54, 0x1a, 0xac, 0xe5 @ 03803808
    .byte 0x44, 0x1a, 0xbc, 0xe5, 0x30, 0x1a, 0xd0, 0xe5, 0x20, 0x1a, 0xe0, 0xe5, 0x0c, 0x1a, 0xf4, 0xe5 @ 03803818
    .byte 0xfc, 0x19, 0x04, 0xe6, 0xe8, 0x19, 0x18, 0xe6, 0xd8, 0x19, 0x28, 0xe6, 0xc4, 0x19, 0x3c, 0xe6 @ 03803828
    .byte 0xb4, 0x19, 0x4c, 0xe6, 0xa0, 0x19, 0x60, 0xe6, 0x90, 0x19, 0x70, 0xe6, 0x7c, 0x19, 0x84, 0xe6 @ 03803838
    .byte 0x6c, 0x19, 0x94, 0xe6, 0x5c, 0x19, 0xa4, 0xe6, 0x48, 0x19, 0xb8, 0xe6, 0x38, 0x19, 0xc8, 0xe6 @ 03803848
    .byte 0x24, 0x19, 0xdc, 0xe6, 0x14, 0x19, 0xec, 0xe6, 0x04, 0x19, 0xfc, 0xe6, 0xf0, 0x18, 0x10, 0xe7 @ 03803858
    .byte 0xe0, 0x18, 0x20, 0xe7, 0xd0, 0x18, 0x30, 0xe7, 0xc0, 0x18, 0x40, 0xe7, 0xac, 0x18, 0x54, 0xe7 @ 03803868
    .byte 0x9c, 0x18, 0x64, 0xe7, 0x8c, 0x18, 0x74, 0xe7, 0x78, 0x18, 0x88, 0xe7, 0x68, 0x18, 0x98, 0xe7 @ 03803878
    .byte 0x58, 0x18, 0xa8, 0xe7, 0x48, 0x18, 0xb8, 0xe7, 0x38, 0x18, 0xc8, 0xe7, 0x24, 0x18, 0xdc, 0xe7 @ 03803888
    .byte 0x14, 0x18, 0xec, 0xe7, 0x04, 0x18, 0xfc, 0xe7, 0xf4, 0x17, 0x0c, 0xe8, 0xe4, 0x17, 0x1c, 0xe8 @ 03803898
    .byte 0xd4, 0x17, 0x2c, 0xe8, 0xc0, 0x17, 0x40, 0xe8, 0xb0, 0x17, 0x50, 0xe8, 0xa0, 0x17, 0x60, 0xe8 @ 038038a8
    .byte 0x90, 0x17, 0x70, 0xe8, 0x80, 0x17, 0x80, 0xe8, 0x70, 0x17, 0x90, 0xe8, 0x60, 0x17, 0xa0, 0xe8 @ 038038b8
    .byte 0x50, 0x17, 0xb0, 0xe8, 0x40, 0x17, 0xc0, 0xe8, 0x30, 0x17, 0xd0, 0xe8, 0x20, 0x17, 0xe0, 0xe8 @ 038038c8
    .byte 0x10, 0x17, 0xf0, 0xe8, 0x00, 0x17, 0x00, 0xe9, 0xf0, 0x16, 0x10, 0xe9, 0xe0, 0x16, 0x20, 0xe9 @ 038038d8
    .byte 0xd0, 0x16, 0x30, 0xe9, 0xc0, 0x16, 0x40, 0xe9, 0xb0, 0x16, 0x50, 0xe9, 0xa0, 0x16, 0x60, 0xe9 @ 038038e8
    .byte 0x90, 0x16, 0x70, 0xe9, 0x80, 0x16, 0x80, 0xe9, 0x70, 0x16, 0x90, 0xe9, 0x64, 0x16, 0x9c, 0xe9 @ 038038f8
    .byte 0x54, 0x16, 0xac, 0xe9, 0x44, 0x16, 0xbc, 0xe9, 0x34, 0x16, 0xcc, 0xe9, 0x24, 0x16, 0xdc, 0xe9 @ 03803908
    .byte 0x14, 0x16, 0xec, 0xe9, 0x04, 0x16, 0xfc, 0xe9, 0xf8, 0x15, 0x08, 0xea, 0xe8, 0x15, 0x18, 0xea @ 03803918
    .byte 0xd8, 0x15, 0x28, 0xea, 0xc8, 0x15, 0x38, 0xea, 0xbc, 0x15, 0x44, 0xea, 0xac, 0x15, 0x54, 0xea @ 03803928
    .byte 0x9c, 0x15, 0x64, 0xea, 0x8c, 0x15, 0x74, 0xea, 0x80, 0x15, 0x80, 0xea, 0x70, 0x15, 0x90, 0xea @ 03803938
    .byte 0x60, 0x15, 0xa0, 0xea, 0x50, 0x15, 0xb0, 0xea, 0x44, 0x15, 0xbc, 0xea, 0x34, 0x15, 0xcc, 0xea @ 03803948
    .byte 0x24, 0x15, 0xdc, 0xea, 0x18, 0x15, 0xe8, 0xea, 0x08, 0x15, 0xf8, 0xea, 0xf8, 0x14, 0x08, 0xeb @ 03803958
    .byte 0xec, 0x14, 0x14, 0xeb, 0xdc, 0x14, 0x24, 0xeb, 0xd0, 0x14, 0x30, 0xeb, 0xc0, 0x14, 0x40, 0xeb @ 03803968
    .byte 0xb0, 0x14, 0x50, 0xeb, 0xa4, 0x14, 0x5c, 0xeb, 0x94, 0x14, 0x6c, 0xeb, 0x88, 0x14, 0x78, 0xeb @ 03803978
    .byte 0x78, 0x14, 0x88, 0xeb, 0x6c, 0x14, 0x94, 0xeb, 0x5c, 0x14, 0xa4, 0xeb, 0x50, 0x14, 0xb0, 0xeb @ 03803988
    .byte 0x40, 0x14, 0xc0, 0xeb, 0x30, 0x14, 0xd0, 0xeb, 0x24, 0x14, 0xdc, 0xeb, 0x18, 0x14, 0xe8, 0xeb @ 03803998
    .byte 0x08, 0x14, 0xf8, 0xeb, 0xfc, 0x13, 0x04, 0xec, 0xec, 0x13, 0x14, 0xec, 0xe0, 0x13, 0x20, 0xec @ 038039a8
    .byte 0xd0, 0x13, 0x30, 0xec, 0xc4, 0x13, 0x3c, 0xec, 0xb4, 0x13, 0x4c, 0xec, 0xa8, 0x13, 0x58, 0xec @ 038039b8
    .byte 0x9c, 0x13, 0x64, 0xec, 0x8c, 0x13, 0x74, 0xec, 0x80, 0x13, 0x80, 0xec, 0x70, 0x13, 0x90, 0xec @ 038039c8
    .byte 0x64, 0x13, 0x9c, 0xec, 0x58, 0x13, 0xa8, 0xec, 0x48, 0x13, 0xb8, 0xec, 0x3c, 0x13, 0xc4, 0xec @ 038039d8
    .byte 0x30, 0x13, 0xd0, 0xec, 0x20, 0x13, 0xe0, 0xec, 0x14, 0x13, 0xec, 0xec, 0x08, 0x13, 0xf8, 0xec @ 038039e8
    .byte 0xf8, 0x12, 0x08, 0xed, 0xec, 0x12, 0x14, 0xed, 0xe0, 0x12, 0x20, 0xed, 0xd4, 0x12, 0x2c, 0xed @ 038039f8
    .byte 0xc4, 0x12, 0x3c, 0xed, 0xb8, 0x12, 0x48, 0xed, 0xac, 0x12, 0x54, 0xed, 0xa0, 0x12, 0x60, 0xed @ 03803a08
    .byte 0x90, 0x12, 0x70, 0xed, 0x84, 0x12, 0x7c, 0xed, 0x78, 0x12, 0x88, 0xed, 0x6c, 0x12, 0x94, 0xed @ 03803a18
    .byte 0x60, 0x12, 0xa0, 0xed, 0x50, 0x12, 0xb0, 0xed, 0x44, 0x12, 0xbc, 0xed, 0x38, 0x12, 0xc8, 0xed @ 03803a28
    .byte 0x2c, 0x12, 0xd4, 0xed, 0x20, 0x12, 0xe0, 0xed, 0x14, 0x12, 0xec, 0xed, 0x08, 0x12, 0xf8, 0xed @ 03803a38
    .byte 0xf8, 0x11, 0x08, 0xee, 0xec, 0x11, 0x14, 0xee, 0xe0, 0x11, 0x20, 0xee, 0xd4, 0x11, 0x2c, 0xee @ 03803a48
    .byte 0xc8, 0x11, 0x38, 0xee, 0xbc, 0x11, 0x44, 0xee, 0xb0, 0x11, 0x50, 0xee, 0xa4, 0x11, 0x5c, 0xee @ 03803a58
    .byte 0x98, 0x11, 0x68, 0xee, 0x8c, 0x11, 0x74, 0xee, 0x80, 0x11, 0x80, 0xee, 0x74, 0x11, 0x8c, 0xee @ 03803a68
    .byte 0x68, 0x11, 0x98, 0xee, 0x5c, 0x11, 0xa4, 0xee, 0x50, 0x11, 0xb0, 0xee, 0x44, 0x11, 0xbc, 0xee @ 03803a78
    .byte 0x38, 0x11, 0xc8, 0xee, 0x2c, 0x11, 0xd4, 0xee, 0x20, 0x11, 0xe0, 0xee, 0x14, 0x11, 0xec, 0xee @ 03803a88
    .byte 0x08, 0x11, 0xf8, 0xee, 0xfc, 0x10, 0x04, 0xef, 0xf0, 0x10, 0x10, 0xef, 0xe4, 0x10, 0x1c, 0xef @ 03803a98
    .byte 0xd8, 0x10, 0x28, 0xef, 0xcc, 0x10, 0x34, 0xef, 0xc0, 0x10, 0x40, 0xef, 0xb4, 0x10, 0x4c, 0xef @ 03803aa8
    .byte 0xa8, 0x10, 0x58, 0xef, 0xa0, 0x10, 0x60, 0xef, 0x94, 0x10, 0x6c, 0xef, 0x88, 0x10, 0x78, 0xef @ 03803ab8
    .byte 0x7c, 0x10, 0x84, 0xef, 0x70, 0x10, 0x90, 0xef, 0x64, 0x10, 0x9c, 0xef, 0x58, 0x10, 0xa8, 0xef @ 03803ac8
    .byte 0x50, 0x10, 0xb0, 0xef, 0x44, 0x10, 0xbc, 0xef, 0x38, 0x10, 0xc8, 0xef, 0x2c, 0x10, 0xd4, 0xef @ 03803ad8
    .byte 0x20, 0x10, 0xe0, 0xef, 0x18, 0x10, 0xe8, 0xef, 0x0c, 0x10, 0xf4, 0xef, 0x00, 0x10, 0x00, 0xf0 @ 03803ae8
    .byte 0xf4, 0x0f, 0x0c, 0xf0, 0xea, 0x0f, 0x16, 0xf0, 0xde, 0x0f, 0x22, 0xf0, 0xd4, 0x0f, 0x2c, 0xf0 @ 03803af8
    .byte 0xc8, 0x0f, 0x38, 0xf0, 0xbe, 0x0f, 0x42, 0xf0, 0xb4, 0x0f, 0x4c, 0xf0, 0xa8, 0x0f, 0x58, 0xf0 @ 03803b08
    .byte 0x9e, 0x0f, 0x62, 0xf0, 0x92, 0x0f, 0x6e, 0xf0, 0x88, 0x0f, 0x78, 0xf0, 0x7e, 0x0f, 0x82, 0xf0 @ 03803b18
    .byte 0x72, 0x0f, 0x8e, 0xf0, 0x68, 0x0f, 0x98, 0xf0, 0x5c, 0x0f, 0xa4, 0xf0, 0x52, 0x0f, 0xae, 0xf0 @ 03803b28
    .byte 0x48, 0x0f, 0xb8, 0xf0, 0x3e, 0x0f, 0xc2, 0xf0, 0x32, 0x0f, 0xce, 0xf0, 0x28, 0x0f, 0xd8, 0xf0 @ 03803b38
    .byte 0x1e, 0x0f, 0xe2, 0xf0, 0x14, 0x0f, 0xec, 0xf0, 0x08, 0x0f, 0xf8, 0xf0, 0xfe, 0x0e, 0x02, 0xf1 @ 03803b48
    .byte 0xf4, 0x0e, 0x0c, 0xf1, 0xea, 0x0e, 0x16, 0xf1, 0xe0, 0x0e, 0x20, 0xf1, 0xd4, 0x0e, 0x2c, 0xf1 @ 03803b58
    .byte 0xca, 0x0e, 0x36, 0xf1, 0xc0, 0x0e, 0x40, 0xf1, 0xb6, 0x0e, 0x4a, 0xf1, 0xac, 0x0e, 0x54, 0xf1 @ 03803b68
    .byte 0xa2, 0x0e, 0x5e, 0xf1, 0x98, 0x0e, 0x68, 0xf1, 0x8e, 0x0e, 0x72, 0xf1, 0x84, 0x0e, 0x7c, 0xf1 @ 03803b78
    .byte 0x7a, 0x0e, 0x86, 0xf1, 0x70, 0x0e, 0x90, 0xf1, 0x66, 0x0e, 0x9a, 0xf1, 0x5c, 0x0e, 0xa4, 0xf1 @ 03803b88
    .byte 0x52, 0x0e, 0xae, 0xf1, 0x48, 0x0e, 0xb8, 0xf1, 0x3e, 0x0e, 0xc2, 0xf1, 0x34, 0x0e, 0xcc, 0xf1 @ 03803b98
    .byte 0x2a, 0x0e, 0xd6, 0xf1, 0x20, 0x0e, 0xe0, 0xf1, 0x16, 0x0e, 0xea, 0xf1, 0x0c, 0x0e, 0xf4, 0xf1 @ 03803ba8
    .byte 0x04, 0x0e, 0xfc, 0xf1, 0xfa, 0x0d, 0x06, 0xf2, 0xf0, 0x0d, 0x10, 0xf2, 0xe6, 0x0d, 0x1a, 0xf2 @ 03803bb8
    .byte 0xdc, 0x0d, 0x24, 0xf2, 0xd2, 0x0d, 0x2e, 0xf2, 0xca, 0x0d, 0x36, 0xf2, 0xc0, 0x0d, 0x40, 0xf2 @ 03803bc8
    .byte 0xb6, 0x0d, 0x4a, 0xf2, 0xac, 0x0d, 0x54, 0xf2, 0xa4, 0x0d, 0x5c, 0xf2, 0x9a, 0x0d, 0x66, 0xf2 @ 03803bd8
    .byte 0x90, 0x0d, 0x70, 0xf2, 0x88, 0x0d, 0x78, 0xf2, 0x7e, 0x0d, 0x82, 0xf2, 0x74, 0x0d, 0x8c, 0xf2 @ 03803be8
    .byte 0x6a, 0x0d, 0x96, 0xf2, 0x62, 0x0d, 0x9e, 0xf2, 0x58, 0x0d, 0xa8, 0xf2, 0x50, 0x0d, 0xb0, 0xf2 @ 03803bf8
    .byte 0x46, 0x0d, 0xba, 0xf2, 0x3c, 0x0d, 0xc4, 0xf2, 0x34, 0x0d, 0xcc, 0xf2, 0x2a, 0x0d, 0xd6, 0xf2 @ 03803c08
    .byte 0x22, 0x0d, 0xde, 0xf2, 0x18, 0x0d, 0xe8, 0xf2, 0x10, 0x0d, 0xf0, 0xf2, 0x06, 0x0d, 0xfa, 0xf2 @ 03803c18
    .byte 0xfe, 0x0c, 0x02, 0xf3, 0xf4, 0x0c, 0x0c, 0xf3, 0xec, 0x0c, 0x14, 0xf3, 0xe2, 0x0c, 0x1e, 0xf3 @ 03803c28
    .byte 0xda, 0x0c, 0x26, 0xf3, 0xd0, 0x0c, 0x30, 0xf3, 0xc8, 0x0c, 0x38, 0xf3, 0xbe, 0x0c, 0x42, 0xf3 @ 03803c38
    .byte 0xb6, 0x0c, 0x4a, 0xf3, 0xae, 0x0c, 0x52, 0xf3, 0xa4, 0x0c, 0x5c, 0xf3, 0x9c, 0x0c, 0x64, 0xf3 @ 03803c48
    .byte 0x92, 0x0c, 0x6e, 0xf3, 0x8a, 0x0c, 0x76, 0xf3, 0x82, 0x0c, 0x7e, 0xf3, 0x78, 0x0c, 0x88, 0xf3 @ 03803c58
    .byte 0x70, 0x0c, 0x90, 0xf3, 0x68, 0x0c, 0x98, 0xf3, 0x60, 0x0c, 0xa0, 0xf3, 0x56, 0x0c, 0xaa, 0xf3 @ 03803c68
    .byte 0x4e, 0x0c, 0xb2, 0xf3, 0x46, 0x0c, 0xba, 0xf3, 0x3c, 0x0c, 0xc4, 0xf3, 0x34, 0x0c, 0xcc, 0xf3 @ 03803c78
    .byte 0x2c, 0x0c, 0xd4, 0xf3, 0x24, 0x0c, 0xdc, 0xf3, 0x1c, 0x0c, 0xe4, 0xf3, 0x12, 0x0c, 0xee, 0xf3 @ 03803c88
    .byte 0x0a, 0x0c, 0xf6, 0xf3, 0x02, 0x0c, 0xfe, 0xf3, 0xfa, 0x0b, 0x06, 0xf4, 0xf2, 0x0b, 0x0e, 0xf4 @ 03803c98
    .byte 0xea, 0x0b, 0x16, 0xf4, 0xe0, 0x0b, 0x20, 0xf4, 0xd8, 0x0b, 0x28, 0xf4, 0xd0, 0x0b, 0x30, 0xf4 @ 03803ca8
    .byte 0xc8, 0x0b, 0x38, 0xf4, 0xc0, 0x0b, 0x40, 0xf4, 0xb8, 0x0b, 0x48, 0xf4, 0xb0, 0x0b, 0x50, 0xf4 @ 03803cb8
    .byte 0xa8, 0x0b, 0x58, 0xf4, 0xa0, 0x0b, 0x60, 0xf4, 0x98, 0x0b, 0x68, 0xf4, 0x90, 0x0b, 0x70, 0xf4 @ 03803cc8
    .byte 0x88, 0x0b, 0x78, 0xf4, 0x80, 0x0b, 0x80, 0xf4, 0x78, 0x0b, 0x88, 0xf4, 0x70, 0x0b, 0x90, 0xf4 @ 03803cd8
    .byte 0x68, 0x0b, 0x98, 0xf4, 0x60, 0x0b, 0xa0, 0xf4, 0x58, 0x0b, 0xa8, 0xf4, 0x50, 0x0b, 0xb0, 0xf4 @ 03803ce8
    .byte 0x48, 0x0b, 0xb8, 0xf4, 0x40, 0x0b, 0xc0, 0xf4, 0x38, 0x0b, 0xc8, 0xf4, 0x32, 0x0b, 0xce, 0xf4 @ 03803cf8
    .byte 0x2a, 0x0b, 0xd6, 0xf4, 0x22, 0x0b, 0xde, 0xf4, 0x1a, 0x0b, 0xe6, 0xf4, 0x12, 0x0b, 0xee, 0xf4 @ 03803d08
    .byte 0x0a, 0x0b, 0xf6, 0xf4, 0x02, 0x0b, 0xfe, 0xf4, 0xfc, 0x0a, 0x04, 0xf5, 0xf4, 0x0a, 0x0c, 0xf5 @ 03803d18
    .byte 0xec, 0x0a, 0x14, 0xf5, 0xe4, 0x0a, 0x1c, 0xf5, 0xde, 0x0a, 0x22, 0xf5, 0xd6, 0x0a, 0x2a, 0xf5 @ 03803d28
    .byte 0xce, 0x0a, 0x32, 0xf5, 0xc6, 0x0a, 0x3a, 0xf5, 0xc0, 0x0a, 0x40, 0xf5, 0xb8, 0x0a, 0x48, 0xf5 @ 03803d38
    .byte 0xb0, 0x0a, 0x50, 0xf5, 0xa8, 0x0a, 0x58, 0xf5, 0xa2, 0x0a, 0x5e, 0xf5, 0x9a, 0x0a, 0x66, 0xf5 @ 03803d48
    .byte 0x92, 0x0a, 0x6e, 0xf5, 0x8c, 0x0a, 0x74, 0xf5, 0x84, 0x0a, 0x7c, 0xf5, 0x7c, 0x0a, 0x84, 0xf5 @ 03803d58
    .byte 0x76, 0x0a, 0x8a, 0xf5, 0x6e, 0x0a, 0x92, 0xf5, 0x68, 0x0a, 0x98, 0xf5, 0x60, 0x0a, 0xa0, 0xf5 @ 03803d68
    .byte 0x58, 0x0a, 0xa8, 0xf5, 0x52, 0x0a, 0xae, 0xf5, 0x4a, 0x0a, 0xb6, 0xf5, 0x44, 0x0a, 0xbc, 0xf5 @ 03803d78
    .byte 0x3c, 0x0a, 0xc4, 0xf5, 0x36, 0x0a, 0xca, 0xf5, 0x2e, 0x0a, 0xd2, 0xf5, 0x28, 0x0a, 0xd8, 0xf5 @ 03803d88
    .byte 0x20, 0x0a, 0xe0, 0xf5, 0x18, 0x0a, 0xe8, 0xf5, 0x12, 0x0a, 0xee, 0xf5, 0x0c, 0x0a, 0xf4, 0xf5 @ 03803d98
    .byte 0x04, 0x0a, 0xfc, 0xf5, 0xfe, 0x09, 0x02, 0xf6, 0xf6, 0x09, 0x0a, 0xf6, 0xf0, 0x09, 0x10, 0xf6 @ 03803da8
    .byte 0xe8, 0x09, 0x18, 0xf6, 0xe2, 0x09, 0x1e, 0xf6, 0xda, 0x09, 0x26, 0xf6, 0xd4, 0x09, 0x2c, 0xf6 @ 03803db8
    .byte 0xce, 0x09, 0x32, 0xf6, 0xc6, 0x09, 0x3a, 0xf6, 0xc0, 0x09, 0x40, 0xf6, 0xb8, 0x09, 0x48, 0xf6 @ 03803dc8
    .byte 0xb2, 0x09, 0x4e, 0xf6, 0xac, 0x09, 0x54, 0xf6, 0xa4, 0x09, 0x5c, 0xf6, 0x9e, 0x09, 0x62, 0xf6 @ 03803dd8
    .byte 0x98, 0x09, 0x68, 0xf6, 0x90, 0x09, 0x70, 0xf6, 0x8a, 0x09, 0x76, 0xf6, 0x84, 0x09, 0x7c, 0xf6 @ 03803de8
    .byte 0x7c, 0x09, 0x84, 0xf6, 0x76, 0x09, 0x8a, 0xf6, 0x70, 0x09, 0x90, 0xf6, 0x6a, 0x09, 0x96, 0xf6 @ 03803df8
    .byte 0x62, 0x09, 0x9e, 0xf6, 0x5c, 0x09, 0xa4, 0xf6, 0x56, 0x09, 0xaa, 0xf6, 0x50, 0x09, 0xb0, 0xf6 @ 03803e08
    .byte 0x48, 0x09, 0xb8, 0xf6, 0x42, 0x09, 0xbe, 0xf6, 0x3c, 0x09, 0xc4, 0xf6, 0x36, 0x09, 0xca, 0xf6 @ 03803e18
    .byte 0x30, 0x09, 0xd0, 0xf6, 0x28, 0x09, 0xd8, 0xf6, 0x22, 0x09, 0xde, 0xf6, 0x1c, 0x09, 0xe4, 0xf6 @ 03803e28
    .byte 0x16, 0x09, 0xea, 0xf6, 0x10, 0x09, 0xf0, 0xf6, 0x0a, 0x09, 0xf6, 0xf6, 0x04, 0x09, 0xfc, 0xf6 @ 03803e38
    .byte 0xfc, 0x08, 0x04, 0xf7, 0xf6, 0x08, 0x0a, 0xf7, 0xf0, 0x08, 0x10, 0xf7, 0xea, 0x08, 0x16, 0xf7 @ 03803e48
    .byte 0xe4, 0x08, 0x1c, 0xf7, 0xde, 0x08, 0x22, 0xf7, 0xd8, 0x08, 0x28, 0xf7, 0xd2, 0x08, 0x2e, 0xf7 @ 03803e58
    .byte 0xcc, 0x08, 0x34, 0xf7, 0xc6, 0x08, 0x3a, 0xf7, 0xc0, 0x08, 0x40, 0xf7, 0xba, 0x08, 0x46, 0xf7 @ 03803e68
    .byte 0xb4, 0x08, 0x4c, 0xf7, 0xae, 0x08, 0x52, 0xf7, 0xa8, 0x08, 0x58, 0xf7, 0xa2, 0x08, 0x5e, 0xf7 @ 03803e78
    .byte 0x9c, 0x08, 0x64, 0xf7, 0x96, 0x08, 0x6a, 0xf7, 0x90, 0x08, 0x70, 0xf7, 0x8a, 0x08, 0x76, 0xf7 @ 03803e88
    .byte 0x84, 0x08, 0x7c, 0xf7, 0x7e, 0x08, 0x82, 0xf7, 0x78, 0x08, 0x88, 0xf7, 0x72, 0x08, 0x8e, 0xf7 @ 03803e98
    .byte 0x6c, 0x08, 0x94, 0xf7, 0x66, 0x08, 0x9a, 0xf7, 0x60, 0x08, 0xa0, 0xf7, 0x5a, 0x08, 0xa6, 0xf7 @ 03803ea8
    .byte 0x54, 0x08, 0xac, 0xf7, 0x50, 0x08, 0xb0, 0xf7, 0x4a, 0x08, 0xb6, 0xf7, 0x44, 0x08, 0xbc, 0xf7 @ 03803eb8
    .byte 0x3e, 0x08, 0xc2, 0xf7, 0x38, 0x08, 0xc8, 0xf7, 0x32, 0x08, 0xce, 0xf7, 0x2c, 0x08, 0xd4, 0xf7 @ 03803ec8
    .byte 0x28, 0x08, 0xd8, 0xf7, 0x22, 0x08, 0xde, 0xf7, 0x1c, 0x08, 0xe4, 0xf7, 0x16, 0x08, 0xea, 0xf7 @ 03803ed8
    .byte 0x10, 0x08, 0xf0, 0xf7, 0x0c, 0x08, 0xf4, 0xf7, 0x06, 0x08, 0xfa, 0xf7, 0x00, 0x08, 0x00, 0xf8 @ 03803ee8
    .byte 0xfa, 0x07, 0x06, 0xf8, 0xf5, 0x07, 0x0b, 0xf8, 0xef, 0x07, 0x11, 0xf8, 0xea, 0x07, 0x16, 0xf8 @ 03803ef8
    .byte 0xe4, 0x07, 0x1c, 0xf8, 0xdf, 0x07, 0x21, 0xf8, 0xda, 0x07, 0x26, 0xf8, 0xd4, 0x07, 0x2c, 0xf8 @ 03803f08
    .byte 0xcf, 0x07, 0x31, 0xf8, 0xc9, 0x07, 0x37, 0xf8, 0xc4, 0x07, 0x3c, 0xf8, 0xbf, 0x07, 0x41, 0xf8 @ 03803f18
    .byte 0xb9, 0x07, 0x47, 0xf8, 0xb4, 0x07, 0x4c, 0xf8, 0xae, 0x07, 0x52, 0xf8, 0xa9, 0x07, 0x57, 0xf8 @ 03803f28
    .byte 0xa4, 0x07, 0x5c, 0xf8, 0x9f, 0x07, 0x61, 0xf8, 0x99, 0x07, 0x67, 0xf8, 0x94, 0x07, 0x6c, 0xf8 @ 03803f38
    .byte 0x8f, 0x07, 0x71, 0xf8, 0x8a, 0x07, 0x76, 0xf8, 0x84, 0x07, 0x7c, 0xf8, 0x7f, 0x07, 0x81, 0xf8 @ 03803f48
    .byte 0x7a, 0x07, 0x86, 0xf8, 0x75, 0x07, 0x8b, 0xf8, 0x70, 0x07, 0x90, 0xf8, 0x6a, 0x07, 0x96, 0xf8 @ 03803f58
    .byte 0x65, 0x07, 0x9b, 0xf8, 0x60, 0x07, 0xa0, 0xf8, 0x5b, 0x07, 0xa5, 0xf8, 0x56, 0x07, 0xaa, 0xf8 @ 03803f68
    .byte 0x51, 0x07, 0xaf, 0xf8, 0x4c, 0x07, 0xb4, 0xf8, 0x47, 0x07, 0xb9, 0xf8, 0x42, 0x07, 0xbe, 0xf8 @ 03803f78
    .byte 0x3d, 0x07, 0xc3, 0xf8, 0x38, 0x07, 0xc8, 0xf8, 0x33, 0x07, 0xcd, 0xf8, 0x2e, 0x07, 0xd2, 0xf8 @ 03803f88
    .byte 0x29, 0x07, 0xd7, 0xf8, 0x24, 0x07, 0xdc, 0xf8, 0x1f, 0x07, 0xe1, 0xf8, 0x1a, 0x07, 0xe6, 0xf8 @ 03803f98
    .byte 0x15, 0x07, 0xeb, 0xf8, 0x10, 0x07, 0xf0, 0xf8, 0x0b, 0x07, 0xf5, 0xf8, 0x06, 0x07, 0xfa, 0xf8 @ 03803fa8
    .byte 0x02, 0x07, 0xfe, 0xf8, 0xfd, 0x06, 0x03, 0xf9, 0xf8, 0x06, 0x08, 0xf9, 0xf3, 0x06, 0x0d, 0xf9 @ 03803fb8
    .byte 0xee, 0x06, 0x12, 0xf9, 0xe9, 0x06, 0x17, 0xf9, 0xe5, 0x06, 0x1b, 0xf9, 0xe0, 0x06, 0x20, 0xf9 @ 03803fc8
    .byte 0xdb, 0x06, 0x25, 0xf9, 0xd6, 0x06, 0x2a, 0xf9, 0xd2, 0x06, 0x2e, 0xf9, 0xcd, 0x06, 0x33, 0xf9 @ 03803fd8
    .byte 0xc8, 0x06, 0x38, 0xf9, 0xc4, 0x06, 0x3c, 0xf9, 0xbf, 0x06, 0x41, 0xf9, 0xba, 0x06, 0x46, 0xf9 @ 03803fe8
    .byte 0xb5, 0x06, 0x4b, 0xf9, 0xb1, 0x06, 0x4f, 0xf9, 0xac, 0x06, 0x54, 0xf9, 0xa8, 0x06, 0x58, 0xf9 @ 03803ff8
    .byte 0xa3, 0x06, 0x5d, 0xf9, 0x9e, 0x06, 0x62, 0xf9, 0x9a, 0x06, 0x66, 0xf9, 0x95, 0x06, 0x6b, 0xf9 @ 03804008
    .byte 0x91, 0x06, 0x6f, 0xf9, 0x8c, 0x06, 0x74, 0xf9, 0x88, 0x06, 0x78, 0xf9, 0x83, 0x06, 0x7d, 0xf9 @ 03804018
    .byte 0x7f, 0x06, 0x81, 0xf9, 0x7a, 0x06, 0x86, 0xf9, 0x76, 0x06, 0x8a, 0xf9, 0x71, 0x06, 0x8f, 0xf9 @ 03804028
    .byte 0x6d, 0x06, 0x93, 0xf9, 0x68, 0x06, 0x98, 0xf9, 0x64, 0x06, 0x9c, 0xf9, 0x5f, 0x06, 0xa1, 0xf9 @ 03804038
    .byte 0x5b, 0x06, 0xa5, 0xf9, 0x57, 0x06, 0xa9, 0xf9, 0x52, 0x06, 0xae, 0xf9, 0x4e, 0x06, 0xb2, 0xf9 @ 03804048
    .byte 0x49, 0x06, 0xb7, 0xf9, 0x45, 0x06, 0xbb, 0xf9, 0x41, 0x06, 0xbf, 0xf9, 0x3c, 0x06, 0xc4, 0xf9 @ 03804058
    .byte 0x38, 0x06, 0xc8, 0xf9, 0x34, 0x06, 0xcc, 0xf9, 0x30, 0x06, 0xd0, 0xf9, 0x2b, 0x06, 0xd5, 0xf9 @ 03804068
    .byte 0x27, 0x06, 0xd9, 0xf9, 0x23, 0x06, 0xdd, 0xf9, 0x1e, 0x06, 0xe2, 0xf9, 0x1a, 0x06, 0xe6, 0xf9 @ 03804078
    .byte 0x16, 0x06, 0xea, 0xf9, 0x12, 0x06, 0xee, 0xf9, 0x0e, 0x06, 0xf2, 0xf9, 0x09, 0x06, 0xf7, 0xf9 @ 03804088
    .byte 0x05, 0x06, 0xfb, 0xf9, 0x01, 0x06, 0xff, 0xf9, 0xfd, 0x05, 0x03, 0xfa, 0xf9, 0x05, 0x07, 0xfa @ 03804098
    .byte 0xf5, 0x05, 0x0b, 0xfa, 0xf0, 0x05, 0x10, 0xfa, 0xec, 0x05, 0x14, 0xfa, 0xe8, 0x05, 0x18, 0xfa @ 038040a8
    .byte 0xe4, 0x05, 0x1c, 0xfa, 0xe0, 0x05, 0x20, 0xfa, 0xdc, 0x05, 0x24, 0xfa, 0xd8, 0x05, 0x28, 0xfa @ 038040b8
    .byte 0xd4, 0x05, 0x2c, 0xfa, 0xd0, 0x05, 0x30, 0xfa, 0xcc, 0x05, 0x34, 0xfa, 0xc8, 0x05, 0x38, 0xfa @ 038040c8
    .byte 0xc4, 0x05, 0x3c, 0xfa, 0xc0, 0x05, 0x40, 0xfa, 0xbc, 0x05, 0x44, 0xfa, 0xb8, 0x05, 0x48, 0xfa @ 038040d8
    .byte 0xb4, 0x05, 0x4c, 0xfa, 0xb0, 0x05, 0x50, 0xfa, 0xac, 0x05, 0x54, 0xfa, 0xa8, 0x05, 0x58, 0xfa @ 038040e8
    .byte 0xa4, 0x05, 0x5c, 0xfa, 0xa0, 0x05, 0x60, 0xfa, 0x9c, 0x05, 0x64, 0xfa, 0x99, 0x05, 0x67, 0xfa @ 038040f8
    .byte 0x95, 0x05, 0x6b, 0xfa, 0x91, 0x05, 0x6f, 0xfa, 0x8d, 0x05, 0x73, 0xfa, 0x89, 0x05, 0x77, 0xfa @ 03804108
    .byte 0x85, 0x05, 0x7b, 0xfa, 0x81, 0x05, 0x7f, 0xfa, 0x7e, 0x05, 0x82, 0xfa, 0x7a, 0x05, 0x86, 0xfa @ 03804118
    .byte 0x76, 0x05, 0x8a, 0xfa, 0x72, 0x05, 0x8e, 0xfa, 0x6f, 0x05, 0x91, 0xfa, 0x6b, 0x05, 0x95, 0xfa @ 03804128
    .byte 0x67, 0x05, 0x99, 0xfa, 0x63, 0x05, 0x9d, 0xfa, 0x60, 0x05, 0xa0, 0xfa, 0x5c, 0x05, 0xa4, 0xfa @ 03804138
    .byte 0x58, 0x05, 0xa8, 0xfa, 0x54, 0x05, 0xac, 0xfa, 0x51, 0x05, 0xaf, 0xfa, 0x4d, 0x05, 0xb3, 0xfa @ 03804148
    .byte 0x49, 0x05, 0xb7, 0xfa, 0x46, 0x05, 0xba, 0xfa, 0x42, 0x05, 0xbe, 0xfa, 0x3e, 0x05, 0xc2, 0xfa @ 03804158
    .byte 0x3b, 0x05, 0xc5, 0xfa, 0x37, 0x05, 0xc9, 0xfa, 0x34, 0x05, 0xcc, 0xfa, 0x30, 0x05, 0xd0, 0xfa @ 03804168
    .byte 0x2c, 0x05, 0xd4, 0xfa, 0x29, 0x05, 0xd7, 0xfa, 0x25, 0x05, 0xdb, 0xfa, 0x22, 0x05, 0xde, 0xfa @ 03804178
    .byte 0x1e, 0x05, 0xe2, 0xfa, 0x1b, 0x05, 0xe5, 0xfa, 0x17, 0x05, 0xe9, 0xfa, 0x14, 0x05, 0xec, 0xfa @ 03804188
    .byte 0x10, 0x05, 0xf0, 0xfa, 0x0c, 0x05, 0xf4, 0xfa, 0x09, 0x05, 0xf7, 0xfa, 0x06, 0x05, 0xfa, 0xfa @ 03804198
    .byte 0x02, 0x05, 0xfe, 0xfa, 0xff, 0x04, 0x01, 0xfb, 0xfb, 0x04, 0x05, 0xfb, 0xf8, 0x04, 0x08, 0xfb @ 038041a8
    .byte 0xf4, 0x04, 0x0c, 0xfb, 0xf1, 0x04, 0x0f, 0xfb, 0xed, 0x04, 0x13, 0xfb, 0xea, 0x04, 0x16, 0xfb @ 038041b8
    .byte 0xe7, 0x04, 0x19, 0xfb, 0xe3, 0x04, 0x1d, 0xfb, 0xe0, 0x04, 0x20, 0xfb, 0xdc, 0x04, 0x24, 0xfb @ 038041c8
    .byte 0xd9, 0x04, 0x27, 0xfb, 0xd6, 0x04, 0x2a, 0xfb, 0xd2, 0x04, 0x2e, 0xfb, 0xcf, 0x04, 0x31, 0xfb @ 038041d8
    .byte 0xcc, 0x04, 0x34, 0xfb, 0xc8, 0x04, 0x38, 0xfb, 0xc5, 0x04, 0x3b, 0xfb, 0xc2, 0x04, 0x3e, 0xfb @ 038041e8
    .byte 0xbe, 0x04, 0x42, 0xfb, 0xbb, 0x04, 0x45, 0xfb, 0xb8, 0x04, 0x48, 0xfb, 0xb5, 0x04, 0x4b, 0xfb @ 038041f8
    .byte 0xb1, 0x04, 0x4f, 0xfb, 0xae, 0x04, 0x52, 0xfb, 0xab, 0x04, 0x55, 0xfb, 0xa8, 0x04, 0x58, 0xfb @ 03804208
    .byte 0xa4, 0x04, 0x5c, 0xfb, 0xa1, 0x04, 0x5f, 0xfb, 0x9e, 0x04, 0x62, 0xfb, 0x9b, 0x04, 0x65, 0xfb @ 03804218
    .byte 0x98, 0x04, 0x68, 0xfb, 0x94, 0x04, 0x6c, 0xfb, 0x91, 0x04, 0x6f, 0xfb, 0x8e, 0x04, 0x72, 0xfb @ 03804228
    .byte 0x8b, 0x04, 0x75, 0xfb, 0x88, 0x04, 0x78, 0xfb, 0x85, 0x04, 0x7b, 0xfb, 0x82, 0x04, 0x7e, 0xfb @ 03804238
    .byte 0x7e, 0x04, 0x82, 0xfb, 0x7b, 0x04, 0x85, 0xfb, 0x78, 0x04, 0x88, 0xfb, 0x75, 0x04, 0x8b, 0xfb @ 03804248
    .byte 0x72, 0x04, 0x8e, 0xfb, 0x6f, 0x04, 0x91, 0xfb, 0x6c, 0x04, 0x94, 0xfb, 0x69, 0x04, 0x97, 0xfb @ 03804258
    .byte 0x66, 0x04, 0x9a, 0xfb, 0x63, 0x04, 0x9d, 0xfb, 0x60, 0x04, 0xa0, 0xfb, 0x5d, 0x04, 0xa3, 0xfb @ 03804268
    .byte 0x5a, 0x04, 0xa6, 0xfb, 0x57, 0x04, 0xa9, 0xfb, 0x54, 0x04, 0xac, 0xfb, 0x51, 0x04, 0xaf, 0xfb @ 03804278
    .byte 0x4e, 0x04, 0xb2, 0xfb, 0x4b, 0x04, 0xb5, 0xfb, 0x48, 0x04, 0xb8, 0xfb, 0x45, 0x04, 0xbb, 0xfb @ 03804288
    .byte 0x42, 0x04, 0xbe, 0xfb, 0x3f, 0x04, 0xc1, 0xfb, 0x3c, 0x04, 0xc4, 0xfb, 0x39, 0x04, 0xc7, 0xfb @ 03804298
    .byte 0x36, 0x04, 0xca, 0xfb, 0x33, 0x04, 0xcd, 0xfb, 0x30, 0x04, 0xd0, 0xfb, 0x2d, 0x04, 0xd3, 0xfb @ 038042a8
    .byte 0x2a, 0x04, 0xd6, 0xfb, 0x28, 0x04, 0xd8, 0xfb, 0x25, 0x04, 0xdb, 0xfb, 0x22, 0x04, 0xde, 0xfb @ 038042b8
    .byte 0x1f, 0x04, 0xe1, 0xfb, 0x1c, 0x04, 0xe4, 0xfb, 0x19, 0x04, 0xe7, 0xfb, 0x16, 0x04, 0xea, 0xfb @ 038042c8
    .byte 0x14, 0x04, 0xec, 0xfb, 0x11, 0x04, 0xef, 0xfb, 0x0e, 0x04, 0xf2, 0xfb, 0x0b, 0x04, 0xf5, 0xfb @ 038042d8
    .byte 0x08, 0x04, 0xf8, 0xfb, 0x06, 0x04, 0xfa, 0xfb, 0x03, 0x04, 0xfd, 0xfb, 0x00, 0x04, 0x00, 0xfc @ 038042e8
    .byte 0xfd, 0x03, 0x03, 0xfc, 0xfa, 0x03, 0x06, 0xfc, 0xf7, 0x03, 0x09, 0xfc, 0xf5, 0x03, 0x0b, 0xfc @ 038042f8
    .byte 0xf2, 0x03, 0x0e, 0xfc, 0xef, 0x03, 0x11, 0xfc, 0xed, 0x03, 0x13, 0xfc, 0xea, 0x03, 0x16, 0xfc @ 03804308
    .byte 0xe7, 0x03, 0x19, 0xfc, 0xe4, 0x03, 0x1c, 0xfc, 0xe2, 0x03, 0x1e, 0xfc, 0xdf, 0x03, 0x21, 0xfc @ 03804318
    .byte 0xdc, 0x03, 0x24, 0xfc, 0xda, 0x03, 0x26, 0xfc, 0xd7, 0x03, 0x29, 0xfc, 0xd4, 0x03, 0x2c, 0xfc @ 03804328
    .byte 0xd2, 0x03, 0x2e, 0xfc, 0xcf, 0x03, 0x31, 0xfc, 0xcc, 0x03, 0x34, 0xfc, 0xca, 0x03, 0x36, 0xfc @ 03804338
    .byte 0xc7, 0x03, 0x39, 0xfc, 0xc5, 0x03, 0x3b, 0xfc, 0xc2, 0x03, 0x3e, 0xfc, 0xbf, 0x03, 0x41, 0xfc @ 03804348
    .byte 0xbd, 0x03, 0x43, 0xfc, 0xba, 0x03, 0x46, 0xfc, 0xb8, 0x03, 0x48, 0xfc, 0xb5, 0x03, 0x4b, 0xfc @ 03804358
    .byte 0xb2, 0x03, 0x4e, 0xfc, 0xb0, 0x03, 0x50, 0xfc, 0xad, 0x03, 0x53, 0xfc, 0xab, 0x03, 0x55, 0xfc @ 03804368
    .byte 0xa8, 0x03, 0x58, 0xfc, 0xa6, 0x03, 0x5a, 0xfc, 0xa3, 0x03, 0x5d, 0xfc, 0xa1, 0x03, 0x5f, 0xfc @ 03804378
    .byte 0x9e, 0x03, 0x62, 0xfc, 0x9c, 0x03, 0x64, 0xfc, 0x99, 0x03, 0x67, 0xfc, 0x97, 0x03, 0x69, 0xfc @ 03804388
    .byte 0x94, 0x03, 0x6c, 0xfc, 0x92, 0x03, 0x6e, 0xfc, 0x8f, 0x03, 0x71, 0xfc, 0x8d, 0x03, 0x73, 0xfc @ 03804398
    .byte 0x8a, 0x03, 0x76, 0xfc, 0x88, 0x03, 0x78, 0xfc, 0x85, 0x03, 0x7b, 0xfc, 0x83, 0x03, 0x7d, 0xfc @ 038043a8
    .byte 0x81, 0x03, 0x7f, 0xfc, 0x7e, 0x03, 0x82, 0xfc, 0x7c, 0x03, 0x84, 0xfc, 0x79, 0x03, 0x87, 0xfc @ 038043b8
    .byte 0x77, 0x03, 0x89, 0xfc, 0x74, 0x03, 0x8c, 0xfc, 0x72, 0x03, 0x8e, 0xfc, 0x70, 0x03, 0x90, 0xfc @ 038043c8
    .byte 0x6d, 0x03, 0x93, 0xfc, 0x6b, 0x03, 0x95, 0xfc, 0x69, 0x03, 0x97, 0xfc, 0x66, 0x03, 0x9a, 0xfc @ 038043d8
    .byte 0x64, 0x03, 0x9c, 0xfc, 0x62, 0x03, 0x9e, 0xfc, 0x5f, 0x03, 0xa1, 0xfc, 0x5d, 0x03, 0xa3, 0xfc @ 038043e8
    .byte 0x5a, 0x03, 0xa6, 0xfc, 0x58, 0x03, 0xa8, 0xfc, 0x56, 0x03, 0xaa, 0xfc, 0x54, 0x03, 0xac, 0xfc @ 038043f8
    .byte 0x51, 0x03, 0xaf, 0xfc, 0x4f, 0x03, 0xb1, 0xfc, 0x4d, 0x03, 0xb3, 0xfc, 0x4a, 0x03, 0xb6, 0xfc @ 03804408
    .byte 0x48, 0x03, 0xb8, 0xfc, 0x46, 0x03, 0xba, 0xfc, 0x44, 0x03, 0xbc, 0xfc, 0x41, 0x03, 0xbf, 0xfc @ 03804418
    .byte 0x3f, 0x03, 0xc1, 0xfc, 0x3d, 0x03, 0xc3, 0xfc, 0x3b, 0x03, 0xc5, 0xfc, 0x38, 0x03, 0xc8, 0xfc @ 03804428
    .byte 0x36, 0x03, 0xca, 0xfc, 0x34, 0x03, 0xcc, 0xfc, 0x32, 0x03, 0xce, 0xfc, 0x2f, 0x03, 0xd1, 0xfc @ 03804438
    .byte 0x2d, 0x03, 0xd3, 0xfc, 0x2b, 0x03, 0xd5, 0xfc, 0x29, 0x03, 0xd7, 0xfc, 0x27, 0x03, 0xd9, 0xfc @ 03804448
    .byte 0x24, 0x03, 0xdc, 0xfc, 0x22, 0x03, 0xde, 0xfc, 0x20, 0x03, 0xe0, 0xfc, 0x1e, 0x03, 0xe2, 0xfc @ 03804458
    .byte 0x1c, 0x03, 0xe4, 0xfc, 0x1a, 0x03, 0xe6, 0xfc, 0x18, 0x03, 0xe8, 0xfc, 0x15, 0x03, 0xeb, 0xfc @ 03804468
    .byte 0x13, 0x03, 0xed, 0xfc, 0x11, 0x03, 0xef, 0xfc, 0x0f, 0x03, 0xf1, 0xfc, 0x0d, 0x03, 0xf3, 0xfc @ 03804478
    .byte 0x0b, 0x03, 0xf5, 0xfc, 0x09, 0x03, 0xf7, 0xfc, 0x07, 0x03, 0xf9, 0xfc, 0x04, 0x03, 0xfc, 0xfc @ 03804488
    .byte 0x02, 0x03, 0xfe, 0xfc, 0x00, 0x03, 0x00, 0xfd, 0xfe, 0x02, 0x02, 0xfd, 0xfc, 0x02, 0x04, 0xfd @ 03804498
    .byte 0xfa, 0x02, 0x06, 0xfd, 0xf8, 0x02, 0x08, 0xfd, 0xf6, 0x02, 0x0a, 0xfd, 0xf4, 0x02, 0x0c, 0xfd @ 038044a8
    .byte 0xf2, 0x02, 0x0e, 0xfd, 0xf0, 0x02, 0x10, 0xfd, 0xee, 0x02, 0x12, 0xfd, 0xec, 0x02, 0x14, 0xfd @ 038044b8
    .byte 0xea, 0x02, 0x16, 0xfd, 0xe8, 0x02, 0x18, 0xfd, 0xe6, 0x02, 0x1a, 0xfd, 0xe4, 0x02, 0x1c, 0xfd @ 038044c8
    .byte 0xe2, 0x02, 0x1e, 0xfd, 0xe0, 0x02, 0x20, 0xfd, 0xde, 0x02, 0x22, 0xfd, 0xdc, 0x02, 0x24, 0xfd @ 038044d8
    .byte 0xda, 0x02, 0x26, 0xfd, 0xd8, 0x02, 0x28, 0xfd, 0xd6, 0x02, 0x2a, 0xfd, 0xd4, 0x02, 0x2c, 0xfd @ 038044e8
    .byte 0xd2, 0x02, 0x2e, 0xfd, 0xd0, 0x02, 0x30, 0xfd, 0xce, 0x02, 0x32, 0xfd, 0xcc, 0x02, 0x34, 0xfd @ 038044f8
    .byte 0xca, 0x02, 0x36, 0xfd, 0xc8, 0x02, 0x38, 0xfd, 0xc6, 0x02, 0x3a, 0xfd, 0xc4, 0x02, 0x3c, 0xfd @ 03804508
    .byte 0xc2, 0x02, 0x3e, 0xfd, 0xc0, 0x02, 0x40, 0xfd, 0xbf, 0x02, 0x41, 0xfd, 0xbd, 0x02, 0x43, 0xfd @ 03804518
    .byte 0xbb, 0x02, 0x45, 0xfd, 0xb9, 0x02, 0x47, 0xfd, 0xb7, 0x02, 0x49, 0xfd, 0xb5, 0x02, 0x4b, 0xfd @ 03804528
    .byte 0xb3, 0x02, 0x4d, 0xfd, 0xb1, 0x02, 0x4f, 0xfd, 0xb0, 0x02, 0x50, 0xfd, 0xae, 0x02, 0x52, 0xfd @ 03804538
    .byte 0xac, 0x02, 0x54, 0xfd, 0xaa, 0x02, 0x56, 0xfd, 0xa8, 0x02, 0x58, 0xfd, 0xa6, 0x02, 0x5a, 0xfd @ 03804548
    .byte 0xa4, 0x02, 0x5c, 0xfd, 0xa3, 0x02, 0x5d, 0xfd, 0xa1, 0x02, 0x5f, 0xfd, 0x9f, 0x02, 0x61, 0xfd @ 03804558
    .byte 0x9d, 0x02, 0x63, 0xfd, 0x9b, 0x02, 0x65, 0xfd, 0x9a, 0x02, 0x66, 0xfd, 0x98, 0x02, 0x68, 0xfd @ 03804568
    .byte 0x96, 0x02, 0x6a, 0xfd, 0x94, 0x02, 0x6c, 0xfd, 0x92, 0x02, 0x6e, 0xfd, 0x91, 0x02, 0x6f, 0xfd @ 03804578
    .byte 0x8f, 0x02, 0x71, 0xfd, 0x8d, 0x02, 0x73, 0xfd, 0x8b, 0x02, 0x75, 0xfd, 0x8a, 0x02, 0x76, 0xfd @ 03804588
    .byte 0x88, 0x02, 0x78, 0xfd, 0x86, 0x02, 0x7a, 0xfd, 0x84, 0x02, 0x7c, 0xfd, 0x83, 0x02, 0x7d, 0xfd @ 03804598
    .byte 0x81, 0x02, 0x7f, 0xfd, 0x7f, 0x02, 0x81, 0xfd, 0x7d, 0x02, 0x83, 0xfd, 0x7c, 0x02, 0x84, 0xfd @ 038045a8
    .byte 0x7a, 0x02, 0x86, 0xfd, 0x78, 0x02, 0x88, 0xfd, 0x76, 0x02, 0x8a, 0xfd, 0x75, 0x02, 0x8b, 0xfd @ 038045b8
    .byte 0x73, 0x02, 0x8d, 0xfd, 0x71, 0x02, 0x8f, 0xfd, 0x70, 0x02, 0x90, 0xfd, 0x6e, 0x02, 0x92, 0xfd @ 038045c8
    .byte 0x6c, 0x02, 0x94, 0xfd, 0x6b, 0x02, 0x95, 0xfd, 0x69, 0x02, 0x97, 0xfd, 0x67, 0x02, 0x99, 0xfd @ 038045d8
    .byte 0x66, 0x02, 0x9a, 0xfd, 0x64, 0x02, 0x9c, 0xfd, 0x62, 0x02, 0x9e, 0xfd, 0x61, 0x02, 0x9f, 0xfd @ 038045e8
    .byte 0x5f, 0x02, 0xa1, 0xfd, 0x5d, 0x02, 0xa3, 0xfd, 0x5c, 0x02, 0xa4, 0xfd, 0x5a, 0x02, 0xa6, 0xfd @ 038045f8
    .byte 0x58, 0x02, 0xa8, 0xfd, 0x57, 0x02, 0xa9, 0xfd, 0x55, 0x02, 0xab, 0xfd, 0x54, 0x02, 0xac, 0xfd @ 03804608
    .byte 0x52, 0x02, 0xae, 0xfd, 0x50, 0x02, 0xb0, 0xfd, 0x4f, 0x02, 0xb1, 0xfd, 0x4d, 0x02, 0xb3, 0xfd @ 03804618
    .byte 0x4c, 0x02, 0xb4, 0xfd, 0x4a, 0x02, 0xb6, 0xfd, 0x48, 0x02, 0xb8, 0xfd, 0x47, 0x02, 0xb9, 0xfd @ 03804628
    .byte 0x45, 0x02, 0xbb, 0xfd, 0x44, 0x02, 0xbc, 0xfd, 0x42, 0x02, 0xbe, 0xfd, 0x41, 0x02, 0xbf, 0xfd @ 03804638
    .byte 0x3f, 0x02, 0xc1, 0xfd, 0x3d, 0x02, 0xc3, 0xfd, 0x3c, 0x02, 0xc4, 0xfd, 0x3a, 0x02, 0xc6, 0xfd @ 03804648
    .byte 0x39, 0x02, 0xc7, 0xfd, 0x37, 0x02, 0xc9, 0xfd, 0x36, 0x02, 0xca, 0xfd, 0x34, 0x02, 0xcc, 0xfd @ 03804658
    .byte 0x33, 0x02, 0xcd, 0xfd, 0x31, 0x02, 0xcf, 0xfd, 0x30, 0x02, 0xd0, 0xfd, 0x2e, 0x02, 0xd2, 0xfd @ 03804668
    .byte 0x2d, 0x02, 0xd3, 0xfd, 0x2b, 0x02, 0xd5, 0xfd, 0x2a, 0x02, 0xd6, 0xfd, 0x28, 0x02, 0xd8, 0xfd @ 03804678
    .byte 0x27, 0x02, 0xd9, 0xfd, 0x25, 0x02, 0xdb, 0xfd, 0x24, 0x02, 0xdc, 0xfd, 0x22, 0x02, 0xde, 0xfd @ 03804688
    .byte 0x21, 0x02, 0xdf, 0xfd, 0x1f, 0x02, 0xe1, 0xfd, 0x1e, 0x02, 0xe2, 0xfd, 0x1c, 0x02, 0xe4, 0xfd @ 03804698
    .byte 0x1b, 0x02, 0xe5, 0xfd, 0x19, 0x02, 0xe7, 0xfd, 0x18, 0x02, 0xe8, 0xfd, 0x16, 0x02, 0xea, 0xfd @ 038046a8
    .byte 0x15, 0x02, 0xeb, 0xfd, 0x14, 0x02, 0xec, 0xfd, 0x12, 0x02, 0xee, 0xfd, 0x11, 0x02, 0xef, 0xfd @ 038046b8
    .byte 0x0f, 0x02, 0xf1, 0xfd, 0x0e, 0x02, 0xf2, 0xfd, 0x0c, 0x02, 0xf4, 0xfd, 0x0b, 0x02, 0xf5, 0xfd @ 038046c8
    .byte 0x0a, 0x02, 0xf6, 0xfd, 0x08, 0x02, 0xf8, 0xfd, 0x07, 0x02, 0xf9, 0xfd, 0x05, 0x02, 0xfb, 0xfd @ 038046d8
    .byte 0x04, 0x02, 0xfc, 0xfd, 0x03, 0x02, 0xfd, 0xfd, 0x01, 0x02, 0xff, 0xfd, 0x00, 0x02, 0x00, 0xfe @ 038046e8
    .byte 0xfe, 0x01, 0x02, 0xfe, 0xfd, 0x01, 0x03, 0xfe, 0xfb, 0x01, 0x05, 0xfe, 0xfa, 0x01, 0x06, 0xfe @ 038046f8
    .byte 0xf9, 0x01, 0x07, 0xfe, 0xf7, 0x01, 0x09, 0xfe, 0xf6, 0x01, 0x0a, 0xfe, 0xf5, 0x01, 0x0b, 0xfe @ 03804708
    .byte 0xf3, 0x01, 0x0d, 0xfe, 0xf2, 0x01, 0x0e, 0xfe, 0xf1, 0x01, 0x0f, 0xfe, 0xef, 0x01, 0x11, 0xfe @ 03804718
    .byte 0xee, 0x01, 0x12, 0xfe, 0xed, 0x01, 0x13, 0xfe, 0xeb, 0x01, 0x15, 0xfe, 0xea, 0x01, 0x16, 0xfe @ 03804728
    .byte 0xe9, 0x01, 0x17, 0xfe, 0xe7, 0x01, 0x19, 0xfe, 0xe6, 0x01, 0x1a, 0xfe, 0xe5, 0x01, 0x1b, 0xfe @ 03804738
    .byte 0xe3, 0x01, 0x1d, 0xfe, 0xe2, 0x01, 0x1e, 0xfe, 0xe1, 0x01, 0x1f, 0xfe, 0xdf, 0x01, 0x21, 0xfe @ 03804748
    .byte 0xde, 0x01, 0x22, 0xfe, 0xdd, 0x01, 0x23, 0xfe, 0xdc, 0x01, 0x24, 0xfe, 0xda, 0x01, 0x26, 0xfe @ 03804758
    .byte 0xd9, 0x01, 0x27, 0xfe, 0xd8, 0x01, 0x28, 0xfe, 0xd6, 0x01, 0x2a, 0xfe, 0xd5, 0x01, 0x2b, 0xfe @ 03804768
    .byte 0xd4, 0x01, 0x2c, 0xfe, 0xd3, 0x01, 0x2d, 0xfe, 0xd1, 0x01, 0x2f, 0xfe, 0xd0, 0x01, 0x30, 0xfe @ 03804778
    .byte 0xcf, 0x01, 0x31, 0xfe, 0xce, 0x01, 0x32, 0xfe, 0xcc, 0x01, 0x34, 0xfe, 0xcb, 0x01, 0x35, 0xfe @ 03804788
    .byte 0xca, 0x01, 0x36, 0xfe, 0xc9, 0x01, 0x37, 0xfe, 0xc7, 0x01, 0x39, 0xfe, 0xc6, 0x01, 0x3a, 0xfe @ 03804798
    .byte 0xc5, 0x01, 0x3b, 0xfe, 0xc4, 0x01, 0x3c, 0xfe, 0xc2, 0x01, 0x3e, 0xfe, 0xc1, 0x01, 0x3f, 0xfe @ 038047a8
    .byte 0xc0, 0x01, 0x40, 0xfe, 0xbf, 0x01, 0x41, 0xfe, 0xbe, 0x01, 0x42, 0xfe, 0xbc, 0x01, 0x44, 0xfe @ 038047b8
    .byte 0xbb, 0x01, 0x45, 0xfe, 0xba, 0x01, 0x46, 0xfe, 0xb9, 0x01, 0x47, 0xfe, 0xb8, 0x01, 0x48, 0xfe @ 038047c8
    .byte 0xb6, 0x01, 0x4a, 0xfe, 0xb5, 0x01, 0x4b, 0xfe, 0xb4, 0x01, 0x4c, 0xfe, 0xb3, 0x01, 0x4d, 0xfe @ 038047d8
    .byte 0xb2, 0x01, 0x4e, 0xfe, 0xb1, 0x01, 0x4f, 0xfe, 0xaf, 0x01, 0x51, 0xfe, 0xae, 0x01, 0x52, 0xfe @ 038047e8
    .byte 0xad, 0x01, 0x53, 0xfe, 0xac, 0x01, 0x54, 0xfe, 0xab, 0x01, 0x55, 0xfe, 0xaa, 0x01, 0x56, 0xfe @ 038047f8
    .byte 0xa8, 0x01, 0x58, 0xfe, 0xa7, 0x01, 0x59, 0xfe, 0xa6, 0x01, 0x5a, 0xfe, 0xa5, 0x01, 0x5b, 0xfe @ 03804808
    .byte 0xa4, 0x01, 0x5c, 0xfe, 0xa3, 0x01, 0x5d, 0xfe, 0xa2, 0x01, 0x5e, 0xfe, 0xa0, 0x01, 0x60, 0xfe @ 03804818
    .byte 0x9f, 0x01, 0x61, 0xfe, 0x9e, 0x01, 0x62, 0xfe, 0x9d, 0x01, 0x63, 0xfe, 0x9c, 0x01, 0x64, 0xfe @ 03804828
    .byte 0x9b, 0x01, 0x65, 0xfe, 0x9a, 0x01, 0x66, 0xfe, 0x99, 0x01, 0x67, 0xfe, 0x97, 0x01, 0x69, 0xfe @ 03804838
    .byte 0x96, 0x01, 0x6a, 0xfe, 0x95, 0x01, 0x6b, 0xfe, 0x94, 0x01, 0x6c, 0xfe, 0x93, 0x01, 0x6d, 0xfe @ 03804848
    .byte 0x92, 0x01, 0x6e, 0xfe, 0x91, 0x01, 0x6f, 0xfe, 0x90, 0x01, 0x70, 0xfe, 0x8f, 0x01, 0x71, 0xfe @ 03804858
    .byte 0x8e, 0x01, 0x72, 0xfe, 0x8d, 0x01, 0x73, 0xfe, 0x8c, 0x01, 0x74, 0xfe, 0x8a, 0x01, 0x76, 0xfe @ 03804868
    .byte 0x89, 0x01, 0x77, 0xfe, 0x88, 0x01, 0x78, 0xfe, 0x87, 0x01, 0x79, 0xfe, 0x86, 0x01, 0x7a, 0xfe @ 03804878
    .byte 0x85, 0x01, 0x7b, 0xfe, 0x84, 0x01, 0x7c, 0xfe, 0x83, 0x01, 0x7d, 0xfe, 0x82, 0x01, 0x7e, 0xfe @ 03804888
    .byte 0x81, 0x01, 0x7f, 0xfe, 0x80, 0x01, 0x80, 0xfe, 0x7f, 0x01, 0x81, 0xfe, 0x7e, 0x01, 0x82, 0xfe @ 03804898
    .byte 0x7d, 0x01, 0x83, 0xfe, 0x7c, 0x01, 0x84, 0xfe, 0x7b, 0x01, 0x85, 0xfe, 0x7a, 0x01, 0x86, 0xfe @ 038048a8
    .byte 0x79, 0x01, 0x87, 0xfe, 0x78, 0x01, 0x88, 0xfe, 0x77, 0x01, 0x89, 0xfe, 0x76, 0x01, 0x8a, 0xfe @ 038048b8
    .byte 0x75, 0x01, 0x8b, 0xfe, 0x74, 0x01, 0x8c, 0xfe, 0x73, 0x01, 0x8d, 0xfe, 0x72, 0x01, 0x8e, 0xfe @ 038048c8
    .byte 0x71, 0x01, 0x8f, 0xfe, 0x70, 0x01, 0x90, 0xfe, 0x6f, 0x01, 0x91, 0xfe, 0x6e, 0x01, 0x92, 0xfe @ 038048d8
    .byte 0x6d, 0x01, 0x93, 0xfe, 0x6c, 0x01, 0x94, 0xfe, 0x6b, 0x01, 0x95, 0xfe, 0x6a, 0x01, 0x96, 0xfe @ 038048e8
    .byte 0x69, 0x01, 0x97, 0xfe, 0x68, 0x01, 0x98, 0xfe, 0x67, 0x01, 0x99, 0xfe, 0x66, 0x01, 0x9a, 0xfe @ 038048f8
    .byte 0x65, 0x01, 0x9b, 0xfe, 0x64, 0x01, 0x9c, 0xfe, 0x63, 0x01, 0x9d, 0xfe, 0x62, 0x01, 0x9e, 0xfe @ 03804908
    .byte 0x61, 0x01, 0x9f, 0xfe, 0x60, 0x01, 0xa0, 0xfe, 0x5f, 0x01, 0xa1, 0xfe, 0x5e, 0x01, 0xa2, 0xfe @ 03804918
    .byte 0x5d, 0x01, 0xa3, 0xfe, 0x5c, 0x01, 0xa4, 0xfe, 0x5b, 0x01, 0xa5, 0xfe, 0x5a, 0x01, 0xa6, 0xfe @ 03804928
    .byte 0x59, 0x01, 0xa7, 0xfe, 0x58, 0x01, 0xa8, 0xfe, 0x58, 0x01, 0xa8, 0xfe, 0x57, 0x01, 0xa9, 0xfe @ 03804938
    .byte 0x56, 0x01, 0xaa, 0xfe, 0x55, 0x01, 0xab, 0xfe, 0x54, 0x01, 0xac, 0xfe, 0x53, 0x01, 0xad, 0xfe @ 03804948
    .byte 0x52, 0x01, 0xae, 0xfe, 0x51, 0x01, 0xaf, 0xfe, 0x50, 0x01, 0xb0, 0xfe, 0x4f, 0x01, 0xb1, 0xfe @ 03804958
    .byte 0x4e, 0x01, 0xb2, 0xfe, 0x4d, 0x01, 0xb3, 0xfe, 0x4d, 0x01, 0xb3, 0xfe, 0x4c, 0x01, 0xb4, 0xfe @ 03804968
    .byte 0x4b, 0x01, 0xb5, 0xfe, 0x4a, 0x01, 0xb6, 0xfe, 0x49, 0x01, 0xb7, 0xfe, 0x48, 0x01, 0xb8, 0xfe @ 03804978
    .byte 0x47, 0x01, 0xb9, 0xfe, 0x46, 0x01, 0xba, 0xfe, 0x45, 0x01, 0xbb, 0xfe, 0x45, 0x01, 0xbb, 0xfe @ 03804988
    .byte 0x44, 0x01, 0xbc, 0xfe, 0x43, 0x01, 0xbd, 0xfe, 0x42, 0x01, 0xbe, 0xfe, 0x41, 0x01, 0xbf, 0xfe @ 03804998
    .byte 0x40, 0x01, 0xc0, 0xfe, 0x3f, 0x01, 0xc1, 0xfe, 0x3e, 0x01, 0xc2, 0xfe, 0x3e, 0x01, 0xc2, 0xfe @ 038049a8
    .byte 0x3d, 0x01, 0xc3, 0xfe, 0x3c, 0x01, 0xc4, 0xfe, 0x3b, 0x01, 0xc5, 0xfe, 0x3a, 0x01, 0xc6, 0xfe @ 038049b8
    .byte 0x39, 0x01, 0xc7, 0xfe, 0x38, 0x01, 0xc8, 0xfe, 0x38, 0x01, 0xc8, 0xfe, 0x37, 0x01, 0xc9, 0xfe @ 038049c8
    .byte 0x36, 0x01, 0xca, 0xfe, 0x35, 0x01, 0xcb, 0xfe, 0x34, 0x01, 0xcc, 0xfe, 0x33, 0x01, 0xcd, 0xfe @ 038049d8
    .byte 0x33, 0x01, 0xcd, 0xfe, 0x32, 0x01, 0xce, 0xfe, 0x31, 0x01, 0xcf, 0xfe, 0x30, 0x01, 0xd0, 0xfe @ 038049e8
    .byte 0x2f, 0x01, 0xd1, 0xfe, 0x2e, 0x01, 0xd2, 0xfe, 0x2e, 0x01, 0xd2, 0xfe, 0x2d, 0x01, 0xd3, 0xfe @ 038049f8
    .byte 0x2c, 0x01, 0xd4, 0xfe, 0x2b, 0x01, 0xd5, 0xfe, 0x2a, 0x01, 0xd6, 0xfe, 0x2a, 0x01, 0xd6, 0xfe @ 03804a08
    .byte 0x29, 0x01, 0xd7, 0xfe, 0x28, 0x01, 0xd8, 0xfe, 0x27, 0x01, 0xd9, 0xfe, 0x26, 0x01, 0xda, 0xfe @ 03804a18
    .byte 0x26, 0x01, 0xda, 0xfe, 0x25, 0x01, 0xdb, 0xfe, 0x24, 0x01, 0xdc, 0xfe, 0x23, 0x01, 0xdd, 0xfe @ 03804a28
    .byte 0x22, 0x01, 0xde, 0xfe, 0x22, 0x01, 0xde, 0xfe, 0x21, 0x01, 0xdf, 0xfe, 0x20, 0x01, 0xe0, 0xfe @ 03804a38
    .byte 0x1f, 0x01, 0xe1, 0xfe, 0x1e, 0x01, 0xe2, 0xfe, 0x1e, 0x01, 0xe2, 0xfe, 0x1d, 0x01, 0xe3, 0xfe @ 03804a48
    .byte 0x1c, 0x01, 0xe4, 0xfe, 0x1b, 0x01, 0xe5, 0xfe, 0x1b, 0x01, 0xe5, 0xfe, 0x1a, 0x01, 0xe6, 0xfe @ 03804a58
    .byte 0x19, 0x01, 0xe7, 0xfe, 0x18, 0x01, 0xe8, 0xfe, 0x18, 0x01, 0xe8, 0xfe, 0x17, 0x01, 0xe9, 0xfe @ 03804a68
    .byte 0x16, 0x01, 0xea, 0xfe, 0x15, 0x01, 0xeb, 0xfe, 0x15, 0x01, 0xeb, 0xfe, 0x14, 0x01, 0xec, 0xfe @ 03804a78
    .byte 0x13, 0x01, 0xed, 0xfe, 0x12, 0x01, 0xee, 0xfe, 0x12, 0x01, 0xee, 0xfe, 0x11, 0x01, 0xef, 0xfe @ 03804a88
    .byte 0x10, 0x01, 0xf0, 0xfe, 0x0f, 0x01, 0xf1, 0xfe, 0x0f, 0x01, 0xf1, 0xfe, 0x0e, 0x01, 0xf2, 0xfe @ 03804a98
    .byte 0x0d, 0x01, 0xf3, 0xfe, 0x0c, 0x01, 0xf4, 0xfe, 0x0c, 0x01, 0xf4, 0xfe, 0x0b, 0x01, 0xf5, 0xfe @ 03804aa8
    .byte 0x0a, 0x01, 0xf6, 0xfe, 0x0a, 0x01, 0xf6, 0xfe, 0x09, 0x01, 0xf7, 0xfe, 0x08, 0x01, 0xf8, 0xfe @ 03804ab8
    .byte 0x07, 0x01, 0xf9, 0xfe, 0x07, 0x01, 0xf9, 0xfe, 0x06, 0x01, 0xfa, 0xfe, 0x05, 0x01, 0xfb, 0xfe @ 03804ac8
    .byte 0x05, 0x01, 0xfb, 0xfe, 0x04, 0x01, 0xfc, 0xfe, 0x03, 0x01, 0xfd, 0xfe, 0x02, 0x01, 0xfe, 0xfe @ 03804ad8
    .byte 0x02, 0x01, 0xfe, 0xfe, 0x01, 0x01, 0xff, 0xfe, 0x00, 0x01, 0x00, 0xff, 0x00, 0x01, 0x00, 0xff @ 03804ae8
    .byte 0xff, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x02, 0xff, 0xfd, 0x00, 0x03, 0xff, 0xfd, 0x00, 0x03, 0xff @ 03804af8
    .byte 0xfc, 0x00, 0x04, 0xff, 0xfb, 0x00, 0x05, 0xff, 0xfb, 0x00, 0x05, 0xff, 0xfa, 0x00, 0x06, 0xff @ 03804b08
    .byte 0xf9, 0x00, 0x07, 0xff, 0xf9, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x08, 0xff, 0xf7, 0x00, 0x09, 0xff @ 03804b18
    .byte 0xf7, 0x00, 0x09, 0xff, 0xf6, 0x00, 0x0a, 0xff, 0xf5, 0x00, 0x0b, 0xff, 0xf5, 0x00, 0x0b, 0xff @ 03804b28
    .byte 0xf4, 0x00, 0x0c, 0xff, 0xf3, 0x00, 0x0d, 0xff, 0xf3, 0x00, 0x0d, 0xff, 0xf2, 0x00, 0x0e, 0xff @ 03804b38
    .byte 0xf1, 0x00, 0x0f, 0xff, 0xf1, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x10, 0xff, 0xef, 0x00, 0x11, 0xff @ 03804b48
    .byte 0xef, 0x00, 0x11, 0xff, 0xee, 0x00, 0x12, 0xff, 0xee, 0x00, 0x12, 0xff, 0xed, 0x00, 0x13, 0xff @ 03804b58
    .byte 0xec, 0x00, 0x14, 0xff, 0xec, 0x00, 0x14, 0xff, 0xeb, 0x00, 0x15, 0xff, 0xea, 0x00, 0x16, 0xff @ 03804b68
    .byte 0xea, 0x00, 0x16, 0xff, 0xe9, 0x00, 0x17, 0xff, 0xe8, 0x00, 0x18, 0xff, 0xe8, 0x00, 0x18, 0xff @ 03804b78
    .byte 0xe7, 0x00, 0x19, 0xff, 0xe7, 0x00, 0x19, 0xff, 0xe6, 0x00, 0x1a, 0xff, 0xe5, 0x00, 0x1b, 0xff @ 03804b88
    .byte 0xe5, 0x00, 0x1b, 0xff, 0xe4, 0x00, 0x1c, 0xff, 0xe3, 0x00, 0x1d, 0xff, 0xe3, 0x00, 0x1d, 0xff @ 03804b98
    .byte 0xe2, 0x00, 0x1e, 0xff, 0xe2, 0x00, 0x1e, 0xff, 0xe1, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x20, 0xff @ 03804ba8
    .byte 0xe0, 0x00, 0x20, 0xff, 0xdf, 0x00, 0x21, 0xff, 0xdf, 0x00, 0x21, 0xff, 0xde, 0x00, 0x22, 0xff @ 03804bb8
    .byte 0xdd, 0x00, 0x23, 0xff, 0xdd, 0x00, 0x23, 0xff, 0xdc, 0x00, 0x24, 0xff, 0xdc, 0x00, 0x24, 0xff @ 03804bc8
    .byte 0xdb, 0x00, 0x25, 0xff, 0xda, 0x00, 0x26, 0xff, 0xda, 0x00, 0x26, 0xff, 0xd9, 0x00, 0x27, 0xff @ 03804bd8
    .byte 0xd9, 0x00, 0x27, 0xff, 0xd8, 0x00, 0x28, 0xff, 0xd7, 0x00, 0x29, 0xff, 0xd7, 0x00, 0x29, 0xff @ 03804be8
    .byte 0xd6, 0x00, 0x2a, 0xff, 0xd6, 0x00, 0x2a, 0xff, 0xd5, 0x00, 0x2b, 0xff, 0xd5, 0x00, 0x2b, 0xff @ 03804bf8
    .byte 0xd4, 0x00, 0x2c, 0xff, 0xd3, 0x00, 0x2d, 0xff, 0xd3, 0x00, 0x2d, 0xff, 0xd2, 0x00, 0x2e, 0xff @ 03804c08
    .byte 0xd2, 0x00, 0x2e, 0xff, 0xd1, 0x00, 0x2f, 0xff, 0xd1, 0x00, 0x2f, 0xff, 0xd0, 0x00, 0x30, 0xff @ 03804c18
    .byte 0xcf, 0x00, 0x31, 0xff, 0xcf, 0x00, 0x31, 0xff, 0xce, 0x00, 0x32, 0xff, 0xce, 0x00, 0x32, 0xff @ 03804c28
    .byte 0xcd, 0x00, 0x33, 0xff, 0xcd, 0x00, 0x33, 0xff, 0xcc, 0x00, 0x34, 0xff, 0xcb, 0x00, 0x35, 0xff @ 03804c38
    .byte 0xcb, 0x00, 0x35, 0xff, 0xca, 0x00, 0x36, 0xff, 0xca, 0x00, 0x36, 0xff, 0xc9, 0x00, 0x37, 0xff @ 03804c48
    .byte 0xc9, 0x00, 0x37, 0xff, 0xc8, 0x00, 0x38, 0xff, 0xc8, 0x00, 0x38, 0xff, 0xc7, 0x00, 0x39, 0xff @ 03804c58
    .byte 0xc7, 0x00, 0x39, 0xff, 0xc6, 0x00, 0x3a, 0xff, 0xc6, 0x00, 0x3a, 0xff, 0xc5, 0x00, 0x3b, 0xff @ 03804c68
    .byte 0xc4, 0x00, 0x3c, 0xff, 0xc4, 0x00, 0x3c, 0xff, 0xc3, 0x00, 0x3d, 0xff, 0xc3, 0x00, 0x3d, 0xff @ 03804c78
    .byte 0xc2, 0x00, 0x3e, 0xff, 0xc2, 0x00, 0x3e, 0xff, 0xc1, 0x00, 0x3f, 0xff, 0xc1, 0x00, 0x3f, 0xff @ 03804c88
    .byte 0xc0, 0x00, 0x40, 0xff, 0xc0, 0x00, 0x40, 0xff, 0xbf, 0x00, 0x41, 0xff, 0xbf, 0x00, 0x41, 0xff @ 03804c98
    .byte 0xbe, 0x00, 0x42, 0xff, 0xbe, 0x00, 0x42, 0xff, 0xbd, 0x00, 0x43, 0xff, 0xbd, 0x00, 0x43, 0xff @ 03804ca8
    .byte 0xbc, 0x00, 0x44, 0xff, 0xbc, 0x00, 0x44, 0xff, 0xbb, 0x00, 0x45, 0xff, 0xbb, 0x00, 0x45, 0xff @ 03804cb8
    .byte 0xba, 0x00, 0x46, 0xff, 0xba, 0x00, 0x46, 0xff, 0xb9, 0x00, 0x47, 0xff, 0xb9, 0x00, 0x47, 0xff @ 03804cc8
    .byte 0xb8, 0x00, 0x48, 0xff, 0xb8, 0x00, 0x48, 0xff, 0xb7, 0x00, 0x49, 0xff, 0xb7, 0x00, 0x49, 0xff @ 03804cd8
    .byte 0xb6, 0x00, 0x4a, 0xff, 0xb6, 0x00, 0x4a, 0xff, 0xb5, 0x00, 0x4b, 0xff, 0xb5, 0x00, 0x4b, 0xff @ 03804ce8
    .byte 0xb4, 0x00, 0x4c, 0xff, 0xb4, 0x00, 0x4c, 0xff, 0xb3, 0x00, 0x4d, 0xff, 0xb3, 0x00, 0x4d, 0xff @ 03804cf8
    .byte 0xb2, 0x00, 0x4e, 0xff, 0xb2, 0x00, 0x4e, 0xff, 0xb1, 0x00, 0x4f, 0xff, 0xb1, 0x00, 0x4f, 0xff @ 03804d08
    .byte 0xb0, 0x00, 0x50, 0xff, 0xb0, 0x00, 0x50, 0xff, 0xaf, 0x00, 0x51, 0xff, 0xaf, 0x00, 0x51, 0xff @ 03804d18
    .byte 0xae, 0x00, 0x52, 0xff, 0xae, 0x00, 0x52, 0xff, 0xad, 0x00, 0x53, 0xff, 0xad, 0x00, 0x53, 0xff @ 03804d28
    .byte 0xac, 0x00, 0x54, 0xff, 0xac, 0x00, 0x54, 0xff, 0xac, 0x00, 0x54, 0xff, 0xab, 0x00, 0x55, 0xff @ 03804d38
    .byte 0xab, 0x00, 0x55, 0xff, 0xaa, 0x00, 0x56, 0xff, 0xaa, 0x00, 0x56, 0xff, 0xa9, 0x00, 0x57, 0xff @ 03804d48
    .byte 0xa9, 0x00, 0x57, 0xff, 0xa8, 0x00, 0x58, 0xff, 0xa8, 0x00, 0x58, 0xff, 0xa7, 0x00, 0x59, 0xff @ 03804d58
    .byte 0xa7, 0x00, 0x59, 0xff, 0xa6, 0x00, 0x5a, 0xff, 0xa6, 0x00, 0x5a, 0xff, 0xa6, 0x00, 0x5a, 0xff @ 03804d68
    .byte 0xa5, 0x00, 0x5b, 0xff, 0xa5, 0x00, 0x5b, 0xff, 0xa4, 0x00, 0x5c, 0xff, 0xa4, 0x00, 0x5c, 0xff @ 03804d78
    .byte 0xa3, 0x00, 0x5d, 0xff, 0xa3, 0x00, 0x5d, 0xff, 0xa2, 0x00, 0x5e, 0xff, 0xa2, 0x00, 0x5e, 0xff @ 03804d88
    .byte 0xa2, 0x00, 0x5e, 0xff, 0xa1, 0x00, 0x5f, 0xff, 0xa1, 0x00, 0x5f, 0xff, 0xa0, 0x00, 0x60, 0xff @ 03804d98
    .byte 0xa0, 0x00, 0x60, 0xff, 0x9f, 0x00, 0x61, 0xff, 0x9f, 0x00, 0x61, 0xff, 0x9f, 0x00, 0x61, 0xff @ 03804da8
    .byte 0x9e, 0x00, 0x62, 0xff, 0x9e, 0x00, 0x62, 0xff, 0x9d, 0x00, 0x63, 0xff, 0x9d, 0x00, 0x63, 0xff @ 03804db8
    .byte 0x9c, 0x00, 0x64, 0xff, 0x9c, 0x00, 0x64, 0xff, 0x9c, 0x00, 0x64, 0xff, 0x9b, 0x00, 0x65, 0xff @ 03804dc8
    .byte 0x9b, 0x00, 0x65, 0xff, 0x9a, 0x00, 0x66, 0xff, 0x9a, 0x00, 0x66, 0xff, 0x99, 0x00, 0x67, 0xff @ 03804dd8
    .byte 0x99, 0x00, 0x67, 0xff, 0x99, 0x00, 0x67, 0xff, 0x98, 0x00, 0x68, 0xff, 0x98, 0x00, 0x68, 0xff @ 03804de8
    .byte 0x97, 0x00, 0x69, 0xff, 0x97, 0x00, 0x69, 0xff, 0x97, 0x00, 0x69, 0xff, 0x96, 0x00, 0x6a, 0xff @ 03804df8
    .byte 0x96, 0x00, 0x6a, 0xff, 0x95, 0x00, 0x6b, 0xff, 0x95, 0x00, 0x6b, 0xff, 0x95, 0x00, 0x6b, 0xff @ 03804e08
    .byte 0x94, 0x00, 0x6c, 0xff, 0x94, 0x00, 0x6c, 0xff, 0x93, 0x00, 0x6d, 0xff, 0x93, 0x00, 0x6d, 0xff @ 03804e18
    .byte 0x93, 0x00, 0x6d, 0xff, 0x92, 0x00, 0x6e, 0xff, 0x92, 0x00, 0x6e, 0xff, 0x91, 0x00, 0x6f, 0xff @ 03804e28
    .byte 0x91, 0x00, 0x6f, 0xff, 0x91, 0x00, 0x6f, 0xff, 0x90, 0x00, 0x70, 0xff, 0x90, 0x00, 0x70, 0xff @ 03804e38
    .byte 0x8f, 0x00, 0x71, 0xff, 0x8f, 0x00, 0x71, 0xff, 0x8f, 0x00, 0x71, 0xff, 0x8e, 0x00, 0x72, 0xff @ 03804e48
    .byte 0x8e, 0x00, 0x72, 0xff, 0x8d, 0x00, 0x73, 0xff, 0x8d, 0x00, 0x73, 0xff, 0x8d, 0x00, 0x73, 0xff @ 03804e58
    .byte 0x8c, 0x00, 0x74, 0xff, 0x8c, 0x00, 0x74, 0xff, 0x8c, 0x00, 0x74, 0xff, 0x8b, 0x00, 0x75, 0xff @ 03804e68
    .byte 0x8b, 0x00, 0x75, 0xff, 0x8a, 0x00, 0x76, 0xff, 0x8a, 0x00, 0x76, 0xff, 0x8a, 0x00, 0x76, 0xff @ 03804e78
    .byte 0x89, 0x00, 0x77, 0xff, 0x89, 0x00, 0x77, 0xff, 0x89, 0x00, 0x77, 0xff, 0x88, 0x00, 0x78, 0xff @ 03804e88
    .byte 0x88, 0x00, 0x78, 0xff, 0x87, 0x00, 0x79, 0xff, 0x87, 0x00, 0x79, 0xff, 0x87, 0x00, 0x79, 0xff @ 03804e98
    .byte 0x86, 0x00, 0x7a, 0xff, 0x86, 0x00, 0x7a, 0xff, 0x86, 0x00, 0x7a, 0xff, 0x85, 0x00, 0x7b, 0xff @ 03804ea8
    .byte 0x85, 0x00, 0x7b, 0xff, 0x85, 0x00, 0x7b, 0xff, 0x84, 0x00, 0x7c, 0xff, 0x84, 0x00, 0x7c, 0xff @ 03804eb8
    .byte 0x83, 0x00, 0x7d, 0xff, 0x83, 0x00, 0x7d, 0xff, 0x83, 0x00, 0x7d, 0xff, 0x82, 0x00, 0x7e, 0xff @ 03804ec8
    .byte 0x82, 0x00, 0x7e, 0xff, 0x82, 0x00, 0x7e, 0xff, 0x81, 0x00, 0x7f, 0xff, 0x81, 0x00, 0x7f, 0xff @ 03804ed8
    .byte 0x81, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x80, 0xff, 0x80, 0x00, 0x80, 0xff, 0x80, 0x00, 0x80, 0xff @ 03804ee8
    .byte 0x7f, 0x00, 0x81, 0xff, 0x7f, 0x00, 0x81, 0xff, 0x7e, 0x00, 0x82, 0xff, 0x7e, 0x00, 0x82, 0xff @ 03804ef8
    .byte 0x7e, 0x00, 0x82, 0xff, 0x7d, 0x00, 0x83, 0xff, 0x7d, 0x00, 0x83, 0xff, 0x7d, 0x00, 0x83, 0xff @ 03804f08
    .byte 0x7c, 0x00, 0x84, 0xff, 0x7c, 0x00, 0x84, 0xff, 0x7c, 0x00, 0x84, 0xff, 0x7b, 0x00, 0x85, 0xff @ 03804f18
    .byte 0x7b, 0x00, 0x85, 0xff, 0x7b, 0x00, 0x85, 0xff, 0x7a, 0x00, 0x86, 0xff, 0x7a, 0x00, 0x86, 0xff @ 03804f28
    .byte 0x7a, 0x00, 0x86, 0xff, 0x79, 0x00, 0x87, 0xff, 0x79, 0x00, 0x87, 0xff, 0x79, 0x00, 0x87, 0xff @ 03804f38
    .byte 0x78, 0x00, 0x88, 0xff, 0x78, 0x00, 0x88, 0xff, 0x78, 0x00, 0x88, 0xff, 0x77, 0x00, 0x89, 0xff @ 03804f48
    .byte 0x77, 0x00, 0x89, 0xff, 0x77, 0x00, 0x89, 0xff, 0x77, 0x00, 0x89, 0xff, 0x76, 0x00, 0x8a, 0xff @ 03804f58
    .byte 0x76, 0x00, 0x8a, 0xff, 0x76, 0x00, 0x8a, 0xff, 0x75, 0x00, 0x8b, 0xff, 0x75, 0x00, 0x8b, 0xff @ 03804f68
    .byte 0x75, 0x00, 0x8b, 0xff, 0x74, 0x00, 0x8c, 0xff, 0x74, 0x00, 0x8c, 0xff, 0x74, 0x00, 0x8c, 0xff @ 03804f78
    .byte 0x73, 0x00, 0x8d, 0xff, 0x73, 0x00, 0x8d, 0xff, 0x73, 0x00, 0x8d, 0xff, 0x72, 0x00, 0x8e, 0xff @ 03804f88
    .byte 0x72, 0x00, 0x8e, 0xff, 0x72, 0x00, 0x8e, 0xff, 0x71, 0x00, 0x8f, 0xff, 0x71, 0x00, 0x8f, 0xff @ 03804f98
    .byte 0x71, 0x00, 0x8f, 0xff, 0x71, 0x00, 0x8f, 0xff, 0x70, 0x00, 0x90, 0xff, 0x70, 0x00, 0x90, 0xff @ 03804fa8
    .byte 0x70, 0x00, 0x90, 0xff, 0x6f, 0x00, 0x91, 0xff, 0x6f, 0x00, 0x91, 0xff, 0x6f, 0x00, 0x91, 0xff @ 03804fb8
    .byte 0x6e, 0x00, 0x92, 0xff, 0x6e, 0x00, 0x92, 0xff, 0x6e, 0x00, 0x92, 0xff, 0x6e, 0x00, 0x92, 0xff @ 03804fc8
    .byte 0x6d, 0x00, 0x93, 0xff, 0x6d, 0x00, 0x93, 0xff, 0x6d, 0x00, 0x93, 0xff, 0x6c, 0x00, 0x94, 0xff @ 03804fd8
    .byte 0x6c, 0x00, 0x94, 0xff, 0x6c, 0x00, 0x94, 0xff, 0x6b, 0x00, 0x95, 0xff, 0x6b, 0x00, 0x95, 0xff @ 03804fe8
    .byte 0x6b, 0x00, 0x95, 0xff, 0x6b, 0x00, 0x95, 0xff, 0x6a, 0x00, 0x96, 0xff, 0x6a, 0x00, 0x96, 0xff @ 03804ff8
    .byte 0x6a, 0x00, 0x96, 0xff, 0x69, 0x00, 0x97, 0xff, 0x69, 0x00, 0x97, 0xff, 0x69, 0x00, 0x97, 0xff @ 03805008
    .byte 0x69, 0x00, 0x97, 0xff, 0x68, 0x00, 0x98, 0xff, 0x68, 0x00, 0x98, 0xff, 0x68, 0x00, 0x98, 0xff @ 03805018
    .byte 0x67, 0x00, 0x99, 0xff, 0x67, 0x00, 0x99, 0xff, 0x67, 0x00, 0x99, 0xff, 0x67, 0x00, 0x99, 0xff @ 03805028
    .byte 0x66, 0x00, 0x9a, 0xff, 0x66, 0x00, 0x9a, 0xff, 0x66, 0x00, 0x9a, 0xff, 0x65, 0x00, 0x9b, 0xff @ 03805038
    .byte 0x65, 0x00, 0x9b, 0xff, 0x65, 0x00, 0x9b, 0xff, 0x65, 0x00, 0x9b, 0xff, 0x64, 0x00, 0x9c, 0xff @ 03805048
    .byte 0x64, 0x00, 0x9c, 0xff, 0x64, 0x00, 0x9c, 0xff, 0x64, 0x00, 0x9c, 0xff, 0x63, 0x00, 0x9d, 0xff @ 03805058
    .byte 0x63, 0x00, 0x9d, 0xff, 0x63, 0x00, 0x9d, 0xff, 0x63, 0x00, 0x9d, 0xff, 0x62, 0x00, 0x9e, 0xff @ 03805068
    .byte 0x62, 0x00, 0x9e, 0xff, 0x62, 0x00, 0x9e, 0xff, 0x61, 0x00, 0x9f, 0xff, 0x61, 0x00, 0x9f, 0xff @ 03805078
    .byte 0x61, 0x00, 0x9f, 0xff, 0x61, 0x00, 0x9f, 0xff, 0x60, 0x00, 0xa0, 0xff, 0x60, 0x00, 0xa0, 0xff @ 03805088
    .byte 0x60, 0x00, 0xa0, 0xff, 0x60, 0x00, 0xa0, 0xff, 0x5f, 0x00, 0xa1, 0xff, 0x5f, 0x00, 0xa1, 0xff @ 03805098
    .byte 0x5f, 0x00, 0xa1, 0xff, 0x5f, 0x00, 0xa1, 0xff, 0x5e, 0x00, 0xa2, 0xff, 0x5e, 0x00, 0xa2, 0xff @ 038050a8
    .byte 0x5e, 0x00, 0xa2, 0xff, 0x5e, 0x00, 0xa2, 0xff, 0x5d, 0x00, 0xa3, 0xff, 0x5d, 0x00, 0xa3, 0xff @ 038050b8
    .byte 0x5d, 0x00, 0xa3, 0xff, 0x5d, 0x00, 0xa3, 0xff, 0x5c, 0x00, 0xa4, 0xff, 0x5c, 0x00, 0xa4, 0xff @ 038050c8
    .byte 0x5c, 0x00, 0xa4, 0xff, 0x5c, 0x00, 0xa4, 0xff, 0x5b, 0x00, 0xa5, 0xff, 0x5b, 0x00, 0xa5, 0xff @ 038050d8
    .byte 0x5b, 0x00, 0xa5, 0xff, 0x5b, 0x00, 0xa5, 0xff, 0x5a, 0x00, 0xa6, 0xff, 0x5a, 0x00, 0xa6, 0xff @ 038050e8
    .byte 0x5a, 0x00, 0xa6, 0xff, 0x5a, 0x00, 0xa6, 0xff, 0x59, 0x00, 0xa7, 0xff, 0x59, 0x00, 0xa7, 0xff @ 038050f8
    .byte 0x59, 0x00, 0xa7, 0xff, 0x59, 0x00, 0xa7, 0xff, 0x58, 0x00, 0xa8, 0xff, 0x58, 0x00, 0xa8, 0xff @ 03805108
    .byte 0x58, 0x00, 0xa8, 0xff, 0x58, 0x00, 0xa8, 0xff, 0x57, 0x00, 0xa9, 0xff, 0x57, 0x00, 0xa9, 0xff @ 03805118
    .byte 0x57, 0x00, 0xa9, 0xff, 0x57, 0x00, 0xa9, 0xff, 0x56, 0x00, 0xaa, 0xff, 0x56, 0x00, 0xaa, 0xff @ 03805128
    .byte 0x56, 0x00, 0xaa, 0xff, 0x56, 0x00, 0xaa, 0xff, 0x56, 0x00, 0xaa, 0xff, 0x55, 0x00, 0xab, 0xff @ 03805138
    .byte 0x55, 0x00, 0xab, 0xff, 0x55, 0x00, 0xab, 0xff, 0x55, 0x00, 0xab, 0xff, 0x54, 0x00, 0xac, 0xff @ 03805148
    .byte 0x54, 0x00, 0xac, 0xff, 0x54, 0x00, 0xac, 0xff, 0x54, 0x00, 0xac, 0xff, 0x53, 0x00, 0xad, 0xff @ 03805158
    .byte 0x53, 0x00, 0xad, 0xff, 0x53, 0x00, 0xad, 0xff, 0x53, 0x00, 0xad, 0xff, 0x53, 0x00, 0xad, 0xff @ 03805168
    .byte 0x52, 0x00, 0xae, 0xff, 0x52, 0x00, 0xae, 0xff, 0x52, 0x00, 0xae, 0xff, 0x52, 0x00, 0xae, 0xff @ 03805178
    .byte 0x51, 0x00, 0xaf, 0xff, 0x51, 0x00, 0xaf, 0xff, 0x51, 0x00, 0xaf, 0xff, 0x51, 0x00, 0xaf, 0xff @ 03805188
    .byte 0x51, 0x00, 0xaf, 0xff, 0x50, 0x00, 0xb0, 0xff, 0x50, 0x00, 0xb0, 0xff, 0x50, 0x00, 0xb0, 0xff @ 03805198
    .byte 0x50, 0x00, 0xb0, 0xff, 0x4f, 0x00, 0xb1, 0xff, 0x4f, 0x00, 0xb1, 0xff, 0x4f, 0x00, 0xb1, 0xff @ 038051a8
    .byte 0x4f, 0x00, 0xb1, 0xff, 0x4f, 0x00, 0xb1, 0xff, 0x4e, 0x00, 0xb2, 0xff, 0x4e, 0x00, 0xb2, 0xff @ 038051b8
    .byte 0x4e, 0x00, 0xb2, 0xff, 0x4e, 0x00, 0xb2, 0xff, 0x4e, 0x00, 0xb2, 0xff, 0x4d, 0x00, 0xb3, 0xff @ 038051c8
    .byte 0x4d, 0x00, 0xb3, 0xff, 0x4d, 0x00, 0xb3, 0xff, 0x4d, 0x00, 0xb3, 0xff, 0x4c, 0x00, 0xb4, 0xff @ 038051d8
    .byte 0x4c, 0x00, 0xb4, 0xff, 0x4c, 0x00, 0xb4, 0xff, 0x4c, 0x00, 0xb4, 0xff, 0x4c, 0x00, 0xb4, 0xff @ 038051e8
    .byte 0x4b, 0x00, 0xb5, 0xff, 0x4b, 0x00, 0xb5, 0xff, 0x4b, 0x00, 0xb5, 0xff, 0x4b, 0x00, 0xb5, 0xff @ 038051f8
    .byte 0x4b, 0x00, 0xb5, 0xff, 0x4a, 0x00, 0xb6, 0xff, 0x4a, 0x00, 0xb6, 0xff, 0x4a, 0x00, 0xb6, 0xff @ 03805208
    .byte 0x4a, 0x00, 0xb6, 0xff, 0x4a, 0x00, 0xb6, 0xff, 0x49, 0x00, 0xb7, 0xff, 0x49, 0x00, 0xb7, 0xff @ 03805218
    .byte 0x49, 0x00, 0xb7, 0xff, 0x49, 0x00, 0xb7, 0xff, 0x49, 0x00, 0xb7, 0xff, 0x48, 0x00, 0xb8, 0xff @ 03805228
    .byte 0x48, 0x00, 0xb8, 0xff, 0x48, 0x00, 0xb8, 0xff, 0x48, 0x00, 0xb8, 0xff, 0x48, 0x00, 0xb8, 0xff @ 03805238
    .byte 0x47, 0x00, 0xb9, 0xff, 0x47, 0x00, 0xb9, 0xff, 0x47, 0x00, 0xb9, 0xff, 0x47, 0x00, 0xb9, 0xff @ 03805248
    .byte 0x47, 0x00, 0xb9, 0xff, 0x46, 0x00, 0xba, 0xff, 0x46, 0x00, 0xba, 0xff, 0x46, 0x00, 0xba, 0xff @ 03805258
    .byte 0x46, 0x00, 0xba, 0xff, 0x46, 0x00, 0xba, 0xff, 0x46, 0x00, 0xba, 0xff, 0x45, 0x00, 0xbb, 0xff @ 03805268
    .byte 0x45, 0x00, 0xbb, 0xff, 0x45, 0x00, 0xbb, 0xff, 0x45, 0x00, 0xbb, 0xff, 0x45, 0x00, 0xbb, 0xff @ 03805278
    .byte 0x44, 0x00, 0xbc, 0xff, 0x44, 0x00, 0xbc, 0xff, 0x44, 0x00, 0xbc, 0xff, 0x44, 0x00, 0xbc, 0xff @ 03805288
    .byte 0x44, 0x00, 0xbc, 0xff, 0x43, 0x00, 0xbd, 0xff, 0x43, 0x00, 0xbd, 0xff, 0x43, 0x00, 0xbd, 0xff @ 03805298
    .byte 0x43, 0x00, 0xbd, 0xff, 0x43, 0x00, 0xbd, 0xff, 0x43, 0x00, 0xbd, 0xff, 0x42, 0x00, 0xbe, 0xff @ 038052a8
    .byte 0x42, 0x00, 0xbe, 0xff, 0x42, 0x00, 0xbe, 0xff, 0x42, 0x00, 0xbe, 0xff, 0x42, 0x00, 0xbe, 0xff @ 038052b8
    .byte 0x41, 0x00, 0xbf, 0xff, 0x41, 0x00, 0xbf, 0xff, 0x41, 0x00, 0xbf, 0xff, 0x41, 0x00, 0xbf, 0xff @ 038052c8
    .byte 0x41, 0x00, 0xbf, 0xff, 0x41, 0x00, 0xbf, 0xff, 0x40, 0x00, 0xc0, 0xff, 0x40, 0x00, 0xc0, 0xff @ 038052d8
    .byte 0x40, 0x00, 0xc0, 0xff, 0x40, 0x00, 0xc0, 0xff, 0x40, 0x00, 0xc0, 0xff, 0x40, 0x00, 0xc0, 0xff @ 038052e8
    .byte 0x3f, 0x00, 0xc1, 0xff, 0x3f, 0x00, 0xc1, 0xff, 0x3f, 0x00, 0xc1, 0xff, 0x3f, 0x00, 0xc1, 0xff @ 038052f8
    .byte 0x3f, 0x00, 0xc1, 0xff, 0x3e, 0x00, 0xc2, 0xff, 0x3e, 0x00, 0xc2, 0xff, 0x3e, 0x00, 0xc2, 0xff @ 03805308
    .byte 0x3e, 0x00, 0xc2, 0xff, 0x3e, 0x00, 0xc2, 0xff, 0x3e, 0x00, 0xc2, 0xff, 0x3d, 0x00, 0xc3, 0xff @ 03805318
    .byte 0x3d, 0x00, 0xc3, 0xff, 0x3d, 0x00, 0xc3, 0xff, 0x3d, 0x00, 0xc3, 0xff, 0x3d, 0x00, 0xc3, 0xff @ 03805328
    .byte 0x3d, 0x00, 0xc3, 0xff, 0x3c, 0x00, 0xc4, 0xff, 0x3c, 0x00, 0xc4, 0xff, 0x3c, 0x00, 0xc4, 0xff @ 03805338
    .byte 0x3c, 0x00, 0xc4, 0xff, 0x3c, 0x00, 0xc4, 0xff, 0x3c, 0x00, 0xc4, 0xff, 0x3b, 0x00, 0xc5, 0xff @ 03805348
    .byte 0x3b, 0x00, 0xc5, 0xff, 0x3b, 0x00, 0xc5, 0xff, 0x3b, 0x00, 0xc5, 0xff, 0x3b, 0x00, 0xc5, 0xff @ 03805358
    .byte 0x3b, 0x00, 0xc5, 0xff, 0x3b, 0x00, 0xc5, 0xff, 0x3a, 0x00, 0xc6, 0xff, 0x3a, 0x00, 0xc6, 0xff @ 03805368
    .byte 0x3a, 0x00, 0xc6, 0xff, 0x3a, 0x00, 0xc6, 0xff, 0x3a, 0x00, 0xc6, 0xff, 0x3a, 0x00, 0xc6, 0xff @ 03805378
    .byte 0x39, 0x00, 0xc7, 0xff, 0x39, 0x00, 0xc7, 0xff, 0x39, 0x00, 0xc7, 0xff, 0x39, 0x00, 0xc7, 0xff @ 03805388
    .byte 0x39, 0x00, 0xc7, 0xff, 0x39, 0x00, 0xc7, 0xff, 0x38, 0x00, 0xc8, 0xff, 0x38, 0x00, 0xc8, 0xff @ 03805398
    .byte 0x38, 0x00, 0xc8, 0xff, 0x38, 0x00, 0xc8, 0xff, 0x38, 0x00, 0xc8, 0xff, 0x38, 0x00, 0xc8, 0xff @ 038053a8
    .byte 0x38, 0x00, 0xc8, 0xff, 0x37, 0x00, 0xc9, 0xff, 0x37, 0x00, 0xc9, 0xff, 0x37, 0x00, 0xc9, 0xff @ 038053b8
    .byte 0x37, 0x00, 0xc9, 0xff, 0x37, 0x00, 0xc9, 0xff, 0x37, 0x00, 0xc9, 0xff, 0x37, 0x00, 0xc9, 0xff @ 038053c8
    .byte 0x36, 0x00, 0xca, 0xff, 0x36, 0x00, 0xca, 0xff, 0x36, 0x00, 0xca, 0xff, 0x36, 0x00, 0xca, 0xff @ 038053d8
    .byte 0x36, 0x00, 0xca, 0xff, 0x36, 0x00, 0xca, 0xff, 0x35, 0x00, 0xcb, 0xff, 0x35, 0x00, 0xcb, 0xff @ 038053e8
    .byte 0x35, 0x00, 0xcb, 0xff, 0x35, 0x00, 0xcb, 0xff, 0x35, 0x00, 0xcb, 0xff, 0x35, 0x00, 0xcb, 0xff @ 038053f8
    .byte 0x35, 0x00, 0xcb, 0xff, 0x34, 0x00, 0xcc, 0xff, 0x34, 0x00, 0xcc, 0xff, 0x34, 0x00, 0xcc, 0xff @ 03805408
    .byte 0x34, 0x00, 0xcc, 0xff, 0x34, 0x00, 0xcc, 0xff, 0x34, 0x00, 0xcc, 0xff, 0x34, 0x00, 0xcc, 0xff @ 03805418
    .byte 0x33, 0x00, 0xcd, 0xff, 0x33, 0x00, 0xcd, 0xff, 0x33, 0x00, 0xcd, 0xff, 0x33, 0x00, 0xcd, 0xff @ 03805428
    .byte 0x33, 0x00, 0xcd, 0xff, 0x33, 0x00, 0xcd, 0xff, 0x33, 0x00, 0xcd, 0xff, 0x32, 0x00, 0xce, 0xff @ 03805438
    .byte 0x32, 0x00, 0xce, 0xff, 0x32, 0x00, 0xce, 0xff, 0x32, 0x00, 0xce, 0xff, 0x32, 0x00, 0xce, 0xff @ 03805448
    .byte 0x32, 0x00, 0xce, 0xff, 0x32, 0x00, 0xce, 0xff, 0x32, 0x00, 0xce, 0xff, 0x31, 0x00, 0xcf, 0xff @ 03805458
    .byte 0x31, 0x00, 0xcf, 0xff, 0x31, 0x00, 0xcf, 0xff, 0x31, 0x00, 0xcf, 0xff, 0x31, 0x00, 0xcf, 0xff @ 03805468
    .byte 0x31, 0x00, 0xcf, 0xff, 0x31, 0x00, 0xcf, 0xff, 0x30, 0x00, 0xd0, 0xff, 0x30, 0x00, 0xd0, 0xff @ 03805478
    .byte 0x30, 0x00, 0xd0, 0xff, 0x30, 0x00, 0xd0, 0xff, 0x30, 0x00, 0xd0, 0xff, 0x30, 0x00, 0xd0, 0xff @ 03805488
    .byte 0x30, 0x00, 0xd0, 0xff, 0x30, 0x00, 0xd0, 0xff, 0x2f, 0x00, 0xd1, 0xff, 0x2f, 0x00, 0xd1, 0xff @ 03805498
    .byte 0x2f, 0x00, 0xd1, 0xff, 0x2f, 0x00, 0xd1, 0xff, 0x2f, 0x00, 0xd1, 0xff, 0x2f, 0x00, 0xd1, 0xff @ 038054a8
    .byte 0x2f, 0x00, 0xd1, 0xff, 0x2f, 0x00, 0xd1, 0xff, 0x2e, 0x00, 0xd2, 0xff, 0x2e, 0x00, 0xd2, 0xff @ 038054b8
    .byte 0x2e, 0x00, 0xd2, 0xff, 0x2e, 0x00, 0xd2, 0xff, 0x2e, 0x00, 0xd2, 0xff, 0x2e, 0x00, 0xd2, 0xff @ 038054c8
    .byte 0x2e, 0x00, 0xd2, 0xff, 0x2e, 0x00, 0xd2, 0xff, 0x2d, 0x00, 0xd3, 0xff, 0x2d, 0x00, 0xd3, 0xff @ 038054d8
    .byte 0x2d, 0x00, 0xd3, 0xff, 0x2d, 0x00, 0xd3, 0xff, 0x2d, 0x00, 0xd3, 0xff, 0x2d, 0x00, 0xd3, 0xff @ 038054e8
    .byte 0x2d, 0x00, 0xd3, 0xff, 0x2d, 0x00, 0xd3, 0xff, 0x2c, 0x00, 0xd4, 0xff, 0x2c, 0x00, 0xd4, 0xff @ 038054f8
    .byte 0x2c, 0x00, 0xd4, 0xff, 0x2c, 0x00, 0xd4, 0xff, 0x2c, 0x00, 0xd4, 0xff, 0x2c, 0x00, 0xd4, 0xff @ 03805508
    .byte 0x2c, 0x00, 0xd4, 0xff, 0x2c, 0x00, 0xd4, 0xff, 0x2b, 0x00, 0xd5, 0xff, 0x2b, 0x00, 0xd5, 0xff @ 03805518
    .byte 0x2b, 0x00, 0xd5, 0xff, 0x2b, 0x00, 0xd5, 0xff, 0x2b, 0x00, 0xd5, 0xff, 0x2b, 0x00, 0xd5, 0xff @ 03805528
    .byte 0x2b, 0x00, 0xd5, 0xff, 0x2b, 0x00, 0xd5, 0xff, 0x2b, 0x00, 0xd5, 0xff, 0x2a, 0x00, 0xd6, 0xff @ 03805538
    .byte 0x2a, 0x00, 0xd6, 0xff, 0x2a, 0x00, 0xd6, 0xff, 0x2a, 0x00, 0xd6, 0xff, 0x2a, 0x00, 0xd6, 0xff @ 03805548
    .byte 0x2a, 0x00, 0xd6, 0xff, 0x2a, 0x00, 0xd6, 0xff, 0x2a, 0x00, 0xd6, 0xff, 0x29, 0x00, 0xd7, 0xff @ 03805558
    .byte 0x29, 0x00, 0xd7, 0xff, 0x29, 0x00, 0xd7, 0xff, 0x29, 0x00, 0xd7, 0xff, 0x29, 0x00, 0xd7, 0xff @ 03805568
    .byte 0x29, 0x00, 0xd7, 0xff, 0x29, 0x00, 0xd7, 0xff, 0x29, 0x00, 0xd7, 0xff, 0x29, 0x00, 0xd7, 0xff @ 03805578
    .byte 0x28, 0x00, 0xd8, 0xff, 0x28, 0x00, 0xd8, 0xff, 0x28, 0x00, 0xd8, 0xff, 0x28, 0x00, 0xd8, 0xff @ 03805588
    .byte 0x28, 0x00, 0xd8, 0xff, 0x28, 0x00, 0xd8, 0xff, 0x28, 0x00, 0xd8, 0xff, 0x28, 0x00, 0xd8, 0xff @ 03805598
    .byte 0x28, 0x00, 0xd8, 0xff, 0x27, 0x00, 0xd9, 0xff, 0x27, 0x00, 0xd9, 0xff, 0x27, 0x00, 0xd9, 0xff @ 038055a8
    .byte 0x27, 0x00, 0xd9, 0xff, 0x27, 0x00, 0xd9, 0xff, 0x27, 0x00, 0xd9, 0xff, 0x27, 0x00, 0xd9, 0xff @ 038055b8
    .byte 0x27, 0x00, 0xd9, 0xff, 0x27, 0x00, 0xd9, 0xff, 0x27, 0x00, 0xd9, 0xff, 0x26, 0x00, 0xda, 0xff @ 038055c8
    .byte 0x26, 0x00, 0xda, 0xff, 0x26, 0x00, 0xda, 0xff, 0x26, 0x00, 0xda, 0xff, 0x26, 0x00, 0xda, 0xff @ 038055d8
    .byte 0x26, 0x00, 0xda, 0xff, 0x26, 0x00, 0xda, 0xff, 0x26, 0x00, 0xda, 0xff, 0x26, 0x00, 0xda, 0xff @ 038055e8
    .byte 0x25, 0x00, 0xdb, 0xff, 0x25, 0x00, 0xdb, 0xff, 0x25, 0x00, 0xdb, 0xff, 0x25, 0x00, 0xdb, 0xff @ 038055f8
    .byte 0x25, 0x00, 0xdb, 0xff, 0x25, 0x00, 0xdb, 0xff, 0x25, 0x00, 0xdb, 0xff, 0x25, 0x00, 0xdb, 0xff @ 03805608
    .byte 0x25, 0x00, 0xdb, 0xff, 0x25, 0x00, 0xdb, 0xff, 0x24, 0x00, 0xdc, 0xff, 0x24, 0x00, 0xdc, 0xff @ 03805618
    .byte 0x24, 0x00, 0xdc, 0xff, 0x24, 0x00, 0xdc, 0xff, 0x24, 0x00, 0xdc, 0xff, 0x24, 0x00, 0xdc, 0xff @ 03805628
    .byte 0x24, 0x00, 0xdc, 0xff, 0x24, 0x00, 0xdc, 0xff, 0x24, 0x00, 0xdc, 0xff, 0x24, 0x00, 0xdc, 0xff @ 03805638
    .byte 0x23, 0x00, 0xdd, 0xff, 0x23, 0x00, 0xdd, 0xff, 0x23, 0x00, 0xdd, 0xff, 0x23, 0x00, 0xdd, 0xff @ 03805648
    .byte 0x23, 0x00, 0xdd, 0xff, 0x23, 0x00, 0xdd, 0xff, 0x23, 0x00, 0xdd, 0xff, 0x23, 0x00, 0xdd, 0xff @ 03805658
    .byte 0x23, 0x00, 0xdd, 0xff, 0x23, 0x00, 0xdd, 0xff, 0x23, 0x00, 0xdd, 0xff, 0x22, 0x00, 0xde, 0xff @ 03805668
    .byte 0x22, 0x00, 0xde, 0xff, 0x22, 0x00, 0xde, 0xff, 0x22, 0x00, 0xde, 0xff, 0x22, 0x00, 0xde, 0xff @ 03805678
    .byte 0x22, 0x00, 0xde, 0xff, 0x22, 0x00, 0xde, 0xff, 0x22, 0x00, 0xde, 0xff, 0x22, 0x00, 0xde, 0xff @ 03805688
    .byte 0x22, 0x00, 0xde, 0xff, 0x21, 0x00, 0xdf, 0xff, 0x21, 0x00, 0xdf, 0xff, 0x21, 0x00, 0xdf, 0xff @ 03805698
    .byte 0x21, 0x00, 0xdf, 0xff, 0x21, 0x00, 0xdf, 0xff, 0x21, 0x00, 0xdf, 0xff, 0x21, 0x00, 0xdf, 0xff @ 038056a8
    .byte 0x21, 0x00, 0xdf, 0xff, 0x21, 0x00, 0xdf, 0xff, 0x21, 0x00, 0xdf, 0xff, 0x21, 0x00, 0xdf, 0xff @ 038056b8
    .byte 0x20, 0x00, 0xe0, 0xff, 0x20, 0x00, 0xe0, 0xff, 0x20, 0x00, 0xe0, 0xff, 0x20, 0x00, 0xe0, 0xff @ 038056c8
    .byte 0x20, 0x00, 0xe0, 0xff, 0x20, 0x00, 0xe0, 0xff, 0x20, 0x00, 0xe0, 0xff, 0x20, 0x00, 0xe0, 0xff @ 038056d8
    .byte 0x20, 0x00, 0xe0, 0xff, 0x20, 0x00, 0xe0, 0xff, 0x20, 0x00, 0xe0, 0xff, 0x20, 0x00, 0xe0, 0xff @ 038056e8
    .byte 0x1f, 0x00, 0xe1, 0xff, 0x1f, 0x00, 0xe1, 0xff, 0x1f, 0x00, 0xe1, 0xff, 0x1f, 0x00, 0xe1, 0xff @ 038056f8
    .byte 0x1f, 0x00, 0xe1, 0xff, 0x1f, 0x00, 0xe1, 0xff, 0x1f, 0x00, 0xe1, 0xff, 0x1f, 0x00, 0xe1, 0xff @ 03805708
    .byte 0x1f, 0x00, 0xe1, 0xff, 0x1f, 0x00, 0xe1, 0xff, 0x1f, 0x00, 0xe1, 0xff, 0x1e, 0x00, 0xe2, 0xff @ 03805718
    .byte 0x1e, 0x00, 0xe2, 0xff, 0x1e, 0x00, 0xe2, 0xff, 0x1e, 0x00, 0xe2, 0xff, 0x1e, 0x00, 0xe2, 0xff @ 03805728
    .byte 0x1e, 0x00, 0xe2, 0xff, 0x1e, 0x00, 0xe2, 0xff, 0x1e, 0x00, 0xe2, 0xff, 0x1e, 0x00, 0xe2, 0xff @ 03805738
    .byte 0x1e, 0x00, 0xe2, 0xff, 0x1e, 0x00, 0xe2, 0xff, 0x1e, 0x00, 0xe2, 0xff, 0x1d, 0x00, 0xe3, 0xff @ 03805748
    .byte 0x1d, 0x00, 0xe3, 0xff, 0x1d, 0x00, 0xe3, 0xff, 0x1d, 0x00, 0xe3, 0xff, 0x1d, 0x00, 0xe3, 0xff @ 03805758
    .byte 0x1d, 0x00, 0xe3, 0xff, 0x1d, 0x00, 0xe3, 0xff, 0x1d, 0x00, 0xe3, 0xff, 0x1d, 0x00, 0xe3, 0xff @ 03805768
    .byte 0x1d, 0x00, 0xe3, 0xff, 0x1d, 0x00, 0xe3, 0xff, 0x1d, 0x00, 0xe3, 0xff, 0x1d, 0x00, 0xe3, 0xff @ 03805778
    .byte 0x1c, 0x00, 0xe4, 0xff, 0x1c, 0x00, 0xe4, 0xff, 0x1c, 0x00, 0xe4, 0xff, 0x1c, 0x00, 0xe4, 0xff @ 03805788
    .byte 0x1c, 0x00, 0xe4, 0xff, 0x1c, 0x00, 0xe4, 0xff, 0x1c, 0x00, 0xe4, 0xff, 0x1c, 0x00, 0xe4, 0xff @ 03805798
    .byte 0x1c, 0x00, 0xe4, 0xff, 0x1c, 0x00, 0xe4, 0xff, 0x1c, 0x00, 0xe4, 0xff, 0x1c, 0x00, 0xe4, 0xff @ 038057a8
    .byte 0x1c, 0x00, 0xe4, 0xff, 0x1b, 0x00, 0xe5, 0xff, 0x1b, 0x00, 0xe5, 0xff, 0x1b, 0x00, 0xe5, 0xff @ 038057b8
    .byte 0x1b, 0x00, 0xe5, 0xff, 0x1b, 0x00, 0xe5, 0xff, 0x1b, 0x00, 0xe5, 0xff, 0x1b, 0x00, 0xe5, 0xff @ 038057c8
    .byte 0x1b, 0x00, 0xe5, 0xff, 0x1b, 0x00, 0xe5, 0xff, 0x1b, 0x00, 0xe5, 0xff, 0x1b, 0x00, 0xe5, 0xff @ 038057d8
    .byte 0x1b, 0x00, 0xe5, 0xff, 0x1b, 0x00, 0xe5, 0xff, 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff @ 038057e8
    .byte 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff @ 038057f8
    .byte 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff @ 03805808
    .byte 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff, 0x1a, 0x00, 0xe6, 0xff @ 03805818
    .byte 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff @ 03805828
    .byte 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff @ 03805838
    .byte 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff @ 03805848
    .byte 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff, 0x19, 0x00, 0xe7, 0xff, 0x18, 0x00, 0xe8, 0xff @ 03805858
    .byte 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff @ 03805868
    .byte 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff @ 03805878
    .byte 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff @ 03805888
    .byte 0x18, 0x00, 0xe8, 0xff, 0x18, 0x00, 0xe8, 0xff, 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff @ 03805898
    .byte 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff @ 038058a8
    .byte 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff @ 038058b8
    .byte 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff @ 038058c8
    .byte 0x17, 0x00, 0xe9, 0xff, 0x17, 0x00, 0xe9, 0xff, 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff @ 038058d8
    .byte 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff @ 038058e8
    .byte 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff @ 038058f8
    .byte 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff @ 03805908
    .byte 0x16, 0x00, 0xea, 0xff, 0x16, 0x00, 0xea, 0xff, 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff @ 03805918
    .byte 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff @ 03805928
    .byte 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff @ 03805938
    .byte 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff @ 03805948
    .byte 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff, 0x15, 0x00, 0xeb, 0xff, 0x14, 0x00, 0xec, 0xff @ 03805958
    .byte 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff @ 03805968
    .byte 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff @ 03805978
    .byte 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff @ 03805988
    .byte 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff, 0x14, 0x00, 0xec, 0xff @ 03805998
    .byte 0x14, 0x00, 0xec, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff @ 038059a8
    .byte 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff @ 038059b8
    .byte 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff @ 038059c8
    .byte 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff @ 038059d8
    .byte 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff, 0x13, 0x00, 0xed, 0xff @ 038059e8
    .byte 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff @ 038059f8
    .byte 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff @ 03805a08
    .byte 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff @ 03805a18
    .byte 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff @ 03805a28
    .byte 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff, 0x12, 0x00, 0xee, 0xff @ 03805a38
    .byte 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff @ 03805a48
    .byte 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff @ 03805a58
    .byte 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff @ 03805a68
    .byte 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff @ 03805a78
    .byte 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff, 0x11, 0x00, 0xef, 0xff @ 03805a88
    .byte 0x11, 0x00, 0xef, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff @ 03805a98
    .byte 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff @ 03805aa8
    .byte 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff @ 03805ab8
    .byte 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff @ 03805ac8
    .byte 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff @ 03805ad8
    .byte 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff, 0x10, 0x00, 0xf0, 0xff @ 03805ae8
    .byte 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff @ 03805af8
    .byte 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff @ 03805b08
    .byte 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff @ 03805b18
    .byte 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff @ 03805b28
    .byte 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff @ 03805b38
    .byte 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0f, 0x00, 0xf1, 0xff, 0x0e, 0x00, 0xf2, 0xff @ 03805b48
    .byte 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff @ 03805b58
    .byte 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff @ 03805b68
    .byte 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff @ 03805b78
    .byte 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff @ 03805b88
    .byte 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff @ 03805b98
    .byte 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff, 0x0e, 0x00, 0xf2, 0xff @ 03805ba8
    .byte 0x0e, 0x00, 0xf2, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff @ 03805bb8
    .byte 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff @ 03805bc8
    .byte 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff @ 03805bd8
    .byte 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff @ 03805be8
    .byte 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff @ 03805bf8
    .byte 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff @ 03805c08
    .byte 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff, 0x0d, 0x00, 0xf3, 0xff @ 03805c18
    .byte 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff @ 03805c28
    .byte 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff @ 03805c38
    .byte 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff @ 03805c48
    .byte 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff @ 03805c58
    .byte 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff @ 03805c68
    .byte 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff @ 03805c78
    .byte 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff @ 03805c88
    .byte 0x0c, 0x00, 0xf4, 0xff, 0x0c, 0x00, 0xf4, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff @ 03805c98
    .byte 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff @ 03805ca8
    .byte 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff @ 03805cb8
    .byte 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff @ 03805cc8
    .byte 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff @ 03805cd8
    .byte 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff @ 03805ce8
    .byte 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff @ 03805cf8
    .byte 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff @ 03805d08
    .byte 0x0b, 0x00, 0xf5, 0xff, 0x0b, 0x00, 0xf5, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff @ 03805d18
    .byte 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff @ 03805d28
    .byte 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff @ 03805d38
    .byte 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff @ 03805d48
    .byte 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff @ 03805d58
    .byte 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff @ 03805d68
    .byte 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff @ 03805d78
    .byte 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff @ 03805d88
    .byte 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff, 0x0a, 0x00, 0xf6, 0xff @ 03805d98
    .byte 0x0a, 0x00, 0xf6, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805da8
    .byte 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805db8
    .byte 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805dc8
    .byte 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805dd8
    .byte 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805de8
    .byte 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805df8
    .byte 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805e08
    .byte 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805e18
    .byte 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805e28
    .byte 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff, 0x09, 0x00, 0xf7, 0xff @ 03805e38
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805e48
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805e58
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805e68
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805e78
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805e88
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805e98
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805ea8
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805eb8
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805ec8
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805ed8
    .byte 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff, 0x08, 0x00, 0xf8, 0xff @ 03805ee8
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805ef8
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f08
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f18
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f28
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f38
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f48
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f58
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f68
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f78
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f88
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805f98
    .byte 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff, 0x07, 0x00, 0xf9, 0xff @ 03805fa8
    .byte 0x07, 0x00, 0xf9, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03805fb8
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03805fc8
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03805fd8
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03805fe8
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03805ff8
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03806008
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03806018
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03806028
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03806038
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03806048
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03806058
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03806068
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03806078
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff @ 03806088
    .byte 0x06, 0x00, 0xfa, 0xff, 0x06, 0x00, 0xfa, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806098
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 038060a8
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 038060b8
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 038060c8
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 038060d8
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 038060e8
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 038060f8
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806108
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806118
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806128
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806138
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806148
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806158
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806168
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806178
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806188
    .byte 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff, 0x05, 0x00, 0xfb, 0xff @ 03806198
    .byte 0x05, 0x00, 0xfb, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038061a8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038061b8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038061c8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038061d8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038061e8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038061f8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806208
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806218
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806228
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806238
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806248
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806258
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806268
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806278
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806288
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 03806298
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038062a8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038062b8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038062c8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038062d8
    .byte 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff, 0x04, 0x00, 0xfc, 0xff @ 038062e8
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 038062f8
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806308
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806318
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806328
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806338
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806348
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806358
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806368
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806378
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806388
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806398
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 038063a8
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 038063b8
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 038063c8
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 038063d8
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 038063e8
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 038063f8
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806408
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806418
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806428
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806438
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806448
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806458
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806468
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806478
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff @ 03806488
    .byte 0x03, 0x00, 0xfd, 0xff, 0x03, 0x00, 0xfd, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806498
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038064a8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038064b8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038064c8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038064d8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038064e8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038064f8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806508
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806518
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806528
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806538
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806548
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806558
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806568
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806578
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806588
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806598
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038065a8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038065b8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038065c8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038065d8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038065e8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038065f8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806608
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806618
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806628
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806638
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806648
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806658
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806668
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806678
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806688
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 03806698
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038066a8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038066b8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038066c8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038066d8
    .byte 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff, 0x02, 0x00, 0xfe, 0xff @ 038066e8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038066f8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806708
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806718
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806728
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806738
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806748
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806758
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806768
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806778
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806788
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806798
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038067a8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038067b8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038067c8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038067d8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038067e8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038067f8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806808
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806818
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806828
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806838
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806848
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806858
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806868
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806878
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806888
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806898
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038068a8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038068b8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038068c8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038068d8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038068e8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038068f8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806908
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806918
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806928
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806938
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806948
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806958
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806968
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806978
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806988
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806998
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038069a8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038069b8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038069c8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038069d8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038069e8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 038069f8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a08
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a18
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a28
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a38
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a48
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a58
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a68
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a78
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a88
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806a98
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806aa8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806ab8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806ac8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806ad8
    .byte 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff, 0x01, 0x00, 0xff, 0xff @ 03806ae8
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03 @ 03806af8
    .byte 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00 @ 03806b08
    .byte 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00 @ 03806b18
    .zero 32
    .byte 0x0b, 0x0b, 0x0b, 0x0b, 0x0a, 0x0a, 0x0a, 0x0a, 0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x08, 0x08 @ 03806b48
    .byte 0x07, 0x07, 0x07, 0x07, 0x06, 0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04 @ 03806b58
    .byte 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00 @ 03806b68
    .zero 48
    .byte 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12 @ 03806ba8
    .byte 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12 @ 03806bb8
    .byte 0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x02, 0x03 @ 03806bc8
    .byte 0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x02, 0x03 @ 03806bd8
    .byte 0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x02, 0x03, 0x00, 0x01, 0x02, 0x03 @ 03806be8
    .byte 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x10, 0x10, 0x10 @ 03806bf8
    .byte 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 @ 03806c08
    .byte 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 @ 03806c18
    .byte 0x08, 0x82, 0x20, 0x00, 0x08, 0x92, 0x20, 0x00, 0x48, 0x82, 0x24, 0x00, 0x48, 0x92, 0x24, 0x00 @ 03806c28
    .byte 0x49, 0x92, 0x24, 0x00, 0x49, 0x94, 0x44, 0x00, 0x51, 0x14, 0x45, 0x00, 0x91, 0x14, 0x49, 0x00 @ 03806c38
    .byte 0x92, 0x24, 0x49, 0x00, 0x92, 0x26, 0x69, 0x00, 0x9a, 0xa6, 0x69, 0x00, 0xda, 0xa6, 0x6d, 0x00 @ 03806c48
    .byte 0xdb, 0xb6, 0x6d, 0x00, 0xdb, 0xb8, 0x8d, 0x00, 0xe3, 0x38, 0x8e, 0x00, 0x23, 0x39, 0x92, 0x00 @ 03806c58
    .byte 0x24, 0x49, 0x92, 0x00, 0x6d, 0xdb, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 03806c68
    .byte 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00 @ 03806c78
    .byte 0xa0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00 @ 03806c88
    .byte 0x20, 0x01, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00 @ 03806c98
    .byte 0xa0, 0x01, 0x00, 0x00, 0xc0, 0x01, 0x00, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 03806ca8
    .zero 32
    .byte 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03 @ 03806cd8
    .byte 0x04, 0x04, 0x04, 0x05, 0x05, 0x06, 0x06, 0x07, 0x08, 0x08, 0x08, 0x08, 0x01, 0x01, 0x01, 0x01 @ 03806ce8
    .byte 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x05, 0x05, 0x06, 0x06, 0x07 @ 03806cf8
    .byte 0x08, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x10, 0x10, 0x10, 0x10, 0x02, 0x02, 0x02, 0x02 @ 03806d08
    .byte 0x02, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x05, 0x05, 0x06, 0x06, 0x07, 0x08, 0x08, 0x09, 0x0a @ 03806d18
    .byte 0x0b, 0x0c, 0x0d, 0x0e, 0x10, 0x11, 0x13, 0x14, 0x16, 0x16, 0x16, 0x16, 0x90, 0x81, 0x7f, 0x03 @ 03806d28
    .byte 0x4c, 0x81, 0x7f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 03806d38
    .byte 0xff, 0xff, 0xff, 0xff, 0x99, 0x19, 0x00, 0x00, 0x55, 0x14, 0x00, 0x00, 0x27, 0x10, 0x00, 0x00 @ 03806d48
    .byte 0xd4, 0x0c, 0x00, 0x00, 0x31, 0x0a, 0x00, 0x00, 0x18, 0x08, 0x00, 0x00, 0x6e, 0x06, 0x00, 0x00 @ 03806d58
    .byte 0x1b, 0x05, 0x00, 0x00, 0x0f, 0x04, 0x00, 0x00, 0x39, 0x03, 0x00, 0x00, 0x8f, 0x02, 0x00, 0x00 @ 03806d68
    .byte 0x09, 0x02, 0x00, 0x00, 0x9d, 0x01, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 0x05, 0x01, 0x00, 0x00 @ 03806d78
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x70, 0x00, 0x06 @ 03806d88
