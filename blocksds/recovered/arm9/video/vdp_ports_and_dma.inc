.L_020090e8:
@ FUN_020090e8 at 0x020090e8
    ldr ip, [pc, #0x40] @ 020090e8
    ldr r3, [pc, #0x40] @ 020090ec
    ldr r2, [ip] @ 020090f0
    str r0, [r3] @ 020090f4
    sub r2, r2, #1 @ 020090f8
    ldr r3, [pc, #0x34] @ 020090fc
    mov r1, #0 @ 02009100
    cmp r2, #0 @ 02009104
    str r1, [r3] @ 02009108
    str r2, [ip] @ 0200910c
    bxge lr @ 02009110
    ldr r3, [pc, #0x20] @ 02009114
    mov r2, #1 @ 02009118
    ldrsh r1, [r3] @ 0200911c
    ldr r3, [pc, #0x18] @ 02009120
    str r1, [ip] @ 02009124
    strb r2, [r3] @ 02009128
    bx lr @ 0200912c
    .byte 0x20, 0x36, 0x00, 0x0b, 0xec, 0x4b, 0x0b, 0x02, 0x28, 0x36, 0x00, 0x0b, 0xf8, 0x4b, 0x0b, 0x02 @ 02009130
    .byte 0x2d, 0x36, 0x00, 0x0b @ 02009140
.L_02009144:
@ FUN_02009144 at 0x02009144
    push {r4, lr} @ 02009144
    ldr lr, [pc, #0x80] @ 02009148
    ldr r3, [pc, #0x80] @ 0200914c
    ldr r1, [lr] @ 02009150
    ldr r2, [pc, #0x7c] @ 02009154
    sub r1, r1, #1 @ 02009158
    mov ip, r0 @ 0200915c
    cmp r1, #0 @ 02009160
    mov r0, #0 @ 02009164
    ldr r4, [pc, #0x6c] @ 02009168
    str r0, [r3] @ 0200916c
    str ip, [r2] @ 02009170
    str r1, [lr] @ 02009174
    blt .L_020091a8 @ 02009178
    ldr r3, [r4, #4] @ 0200917c
    cmp ip, r3 @ 02009180
    popne {r4, pc} @ 02009184
.L_02009188:
    mov r3, #0x80 @ 02009188
    str r3, [r4, #0x8c] @ 0200918c
    ldr r3, [pc, #0x48] @ 02009190
    mov r1, #1 @ 02009194
    mov r2, #8 @ 02009198
    strb r1, [r3] @ 0200919c
    str r2, [r4, #0x7c] @ 020091a0
    pop {r4, pc} @ 020091a4
.L_020091a8:
    ldr r3, [pc, #0x34] @ 020091a8
    mov r2, #1 @ 020091ac
    ldrsh r1, [r3] @ 020091b0
    ldr r3, [pc, #0x2c] @ 020091b4
    str r1, [lr] @ 020091b8
    strb r2, [r3] @ 020091bc
    ldr r3, [r4, #4] @ 020091c0
    cmp ip, r3 @ 020091c4
    popne {r4, pc} @ 020091c8
    b .L_02009188 @ 020091cc
    .byte 0x20, 0x36, 0x00, 0x0b, 0x28, 0x36, 0x00, 0x0b, 0xec, 0x4b, 0x0b, 0x02, 0x00, 0x00, 0x00, 0x0b @ 020091d0
    .byte 0x2e, 0x36, 0x00, 0x0b, 0xf8, 0x4b, 0x0b, 0x02, 0x2d, 0x36, 0x00, 0x0b @ 020091e0
.L_020091ec:
@ FUN_020091ec at 0x020091ec
    ldr r3, [pc, #0x14] @ 020091ec
    ldr r2, [pc, #0x14] @ 020091f0
    ldrsh r1, [r3] @ 020091f4
    ldr r3, [pc, #0x10] @ 020091f8
    str r0, [r2] @ 020091fc
    str r1, [r3] @ 02009200
    bx lr @ 02009204
    .byte 0xf8, 0x4b, 0x0b, 0x02, 0xec, 0x4b, 0x0b, 0x02, 0x20, 0x36, 0x00, 0x0b @ 02009208
    cmp r0, #4 @ 02009214
    mov r1, #0 @ 02009218
    ldreq r3, [pc, #0x18] @ 0200921c
    ldrne r3, [pc, #0x18] @ 02009220
    ldrne r2, [pc, #0x18] @ 02009224
    moveq r2, r1 @ 02009228
    strbeq r2, [r3] @ 0200922c
    strne r1, [r3, #0x8c] @ 02009230
    strbne r1, [r2] @ 02009234
    bx lr @ 02009238
    .byte 0x2d, 0x36, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x2e, 0x36, 0x00, 0x0b, 0x1c, 0x10, 0x9f, 0xe5 @ 0200923c
    .byte 0x1c, 0x20, 0x9f, 0xe5, 0xb0, 0xc0, 0xd1, 0xe1, 0x00, 0x00, 0x92, 0xe5, 0x00, 0x30, 0xa0, 0xe3 @ 0200924c
    .byte 0x00, 0x08, 0x8c, 0xe1, 0x00, 0x30, 0x82, 0xe5, 0x00, 0x30, 0x81, 0xe5, 0x1e, 0xff, 0x2f, 0xe1 @ 0200925c
    .byte 0xe4, 0xcb, 0x09, 0x02, 0xe8, 0xcb, 0x09, 0x02 @ 0200926c
.L_02009274:
@ FUN_02009274 at 0x02009274
    ldr r3, [pc, #0x48] @ 02009274
    ldr r2, [pc, #0x48] @ 02009278
    str lr, [sp, #-4]! @ 0200927c
    ldr lr, [r3, #0x14] @ 02009280
    ldr r3, [pc, #0x40] @ 02009284
    ldr ip, [r2] @ 02009288
    ldr r2, [pc, #0x3c] @ 0200928c
    ldrb r1, [r3] @ 02009290
    ldr r0, [r2] @ 02009294
    ldr r3, [pc, #0x34] @ 02009298
    cmp lr, ip @ 0200929c
    movhs lr, ip @ 020092a0
    cmp r1, #0 @ 020092a4
    ldrb r2, [r3, r0] @ 020092a8
    ldrne r3, [pc, #0x24] @ 020092ac
    ldreq r3, [pc, #0x24] @ 020092b0
    ldrbne lr, [r3, lr] @ 020092b4
    ldrbeq lr, [r3, lr] @ 020092b8
    orr r0, lr, r2, lsl #8 @ 020092bc
    .word 0xe49df004 @ 020092c0 pop {pc}
    .byte 0x00, 0x00, 0x00, 0x0b, 0x24, 0x36, 0x00, 0x0b, 0x05, 0xdb, 0x3d, 0x02, 0xec, 0x4b, 0x0b, 0x02 @ 020092c4
    .byte 0xe0, 0xe5, 0x08, 0x02, 0x08, 0xe9, 0x08, 0x02, 0x20, 0xe7, 0x08, 0x02 @ 020092d4
.L_020092e0:
@ FUN_020092e0 at 0x020092e0
    push {r4, r5, r6, lr} @ 020092e0
    ldr r6, [pc, #0x88] @ 020092e4
    ldr r0, [r6, #0x90] @ 020092e8
    ldr r1, [r6, #0x8c] @ 020092ec
    ldr r3, [r6, #0x88] @ 020092f0
    ldr r2, [r6, #0x84] @ 020092f4
    ldr r4, [r6, #0x94] @ 020092f8
    ldr r5, [r6, #0x98] @ 020092fc
    orr r2, r2, r3 @ 02009300
    orr r1, r1, r0 @ 02009304
    ldr r0, [r6, #0x7c] @ 02009308
    ldr r3, [r6, #0x9c] @ 0200930c
    ldr ip, [r6, #0x20] @ 02009310
    ldr lr, [r6, #0x80] @ 02009314
    orr r2, r2, r4 @ 02009318
    orr r1, r1, r5 @ 0200931c
    orr r2, r2, r0 @ 02009320
    rsbs ip, ip, #1 @ 02009324
    movlo ip, #0 @ 02009328
    orr r1, r1, lr @ 0200932c
    orr r2, r2, r3 @ 02009330
    ldr r3, [pc, #0x3c] @ 02009334
    orr r1, r1, ip @ 02009338
    ldrb r0, [r3] @ 0200933c
    orr r2, r2, r1 @ 02009340
    lsl r2, r2, #0x10 @ 02009344
    cmp r0, #0 @ 02009348
    ldr r3, [pc, #0x28] @ 0200934c
    lsr r0, r2, #0x10 @ 02009350
    mov r1, #0 @ 02009354
    orreq r0, r0, #8 @ 02009358
    strb r1, [r3] @ 0200935c
    str ip, [r6, #0xa0] @ 02009360
    str r1, [r6, #0x90] @ 02009364
    str r1, [r6, #0x8c] @ 02009368
    str r1, [r6, #0x94] @ 0200936c
    pop {r4, r5, r6, pc} @ 02009370
    .byte 0x00, 0x00, 0x00, 0x0b, 0x2f, 0x36, 0x00, 0x0b, 0xf5, 0x4b, 0x0b, 0x02 @ 02009374
.L_02009380:
@ FUN_02009380 at 0x02009380
    ldr r3, [pc, #0xa4] @ 02009380
    mov r0, #0 @ 02009384
    ldr r2, [r3] @ 02009388
    ldr r3, [pc, #0x9c] @ 0200938c
    and r2, r2, #0xf @ 02009390
    cmp r2, #4 @ 02009394
    ldr ip, [pc, #0x94] @ 02009398
    strb r0, [r3] @ 0200939c
    beq .L_020093dc @ 020093a0
    cmp r2, #8 @ 020093a4
    beq .L_02009404 @ 020093a8
    cmp r2, r0 @ 020093ac
    ldr r1, [pc, #0x80] @ 020093b0
    ldreq r2, [ip] @ 020093b4
    ldreq r3, [pc, #0x7c] @ 020093b8
    andeq r1, r2, r1 @ 020093bc
    ldrheq r0, [r1, r3] @ 020093c0
    ldr r2, [pc, #0x74] @ 020093c4
    ldr r3, [ip] @ 020093c8
    ldr r1, [r2] @ 020093cc
    add r3, r3, r1 @ 020093d0
    str r3, [ip] @ 020093d4
    bx lr @ 020093d8
.L_020093dc:
    ldr r2, [ip] @ 020093dc
    ldr r3, [pc, #0x5c] @ 020093e0
    and r2, r2, #0x7e @ 020093e4
    ldrh r0, [r2, r3] @ 020093e8
    ldr r2, [pc, #0x4c] @ 020093ec
    ldr r3, [ip] @ 020093f0
    ldr r1, [r2] @ 020093f4
    add r3, r3, r1 @ 020093f8
    str r3, [ip] @ 020093fc
    bx lr @ 02009400
.L_02009404:
    ldr r2, [ip] @ 02009404
    ldr r3, [pc, #0x38] @ 02009408
    and r2, r2, #0x7e @ 0200940c
    ldrh r0, [r2, r3] @ 02009410
    ldr r2, [pc, #0x24] @ 02009414
    ldr r3, [ip] @ 02009418
    ldr r1, [r2] @ 0200941c
    add r3, r3, r1 @ 02009420
    str r3, [ip] @ 02009424
    bx lr @ 02009428
    .byte 0x3c, 0x36, 0x00, 0x0b, 0xf5, 0x4b, 0x0b, 0x02, 0x38, 0x36, 0x00, 0x0b, 0xfe, 0xff, 0x00, 0x00 @ 0200942c
    .byte 0xec, 0xcb, 0x09, 0x02, 0x30, 0x36, 0x00, 0x0b, 0x4c, 0x36, 0x00, 0x0b, 0xb0, 0xc6, 0x3d, 0x02 @ 0200943c
.L_0200944c:
@ FUN_0200944c at 0x0200944c
    str lr, [sp, #-4]! @ 0200944c
    and r0, r0, #0x1e @ 02009450
    cmp r0, #0xe @ 02009454
    sub sp, sp, #4 @ 02009458
    ldr r2, [pc, #0x4c] @ 0200945c
    bhi .L_0200947c @ 02009460
    mov r3, #1 @ 02009464
    lsl r0, r3, r0 @ 02009468
    tst r0, #0x5500 @ 0200946c
    beq .L_02009488 @ 02009470
    bl .L_02009274 @ 02009474
    mov r2, r0 @ 02009478
.L_0200947c:
    mov r0, r2 @ 0200947c
    add sp, sp, #4 @ 02009480
    ldm sp!, {pc} @ 02009484
.L_02009488:
    tst r0, #0x50 @ 02009488
    bne .L_020094a4 @ 0200948c
    tst r0, #5 @ 02009490
    beq .L_0200947c @ 02009494
    bl .L_02009380 @ 02009498
    mov r2, r0 @ 0200949c
    b .L_0200947c @ 020094a0
.L_020094a4:
    bl .L_020092e0 @ 020094a4
    mov r2, r0 @ 020094a8
    b .L_0200947c @ 020094ac
    .byte 0x71, 0x4e, 0x00, 0x00 @ 020094b0
.L_020094b4:
@ FUN_020094b4 at 0x020094b4
    str lr, [sp, #-4]! @ 020094b4
    sub sp, sp, #4 @ 020094b8
    cmp r0, #0xf @ 020094bc
    ldrls pc, [pc, r0, lsl #2] @ 020094c0
    b .L_02009508 @ 020094c4
    .byte 0x60, 0x95, 0x00, 0x02, 0x54, 0x95, 0x00, 0x02, 0x60, 0x95, 0x00, 0x02, 0x54, 0x95, 0x00, 0x02 @ 020094c8
    .byte 0x44, 0x95, 0x00, 0x02, 0x38, 0x95, 0x00, 0x02, 0x44, 0x95, 0x00, 0x02, 0x38, 0x95, 0x00, 0x02 @ 020094d8
    .byte 0x28, 0x95, 0x00, 0x02, 0x1c, 0x95, 0x00, 0x02, 0x28, 0x95, 0x00, 0x02, 0x1c, 0x95, 0x00, 0x02 @ 020094e8
    .byte 0x28, 0x95, 0x00, 0x02, 0x1c, 0x95, 0x00, 0x02, 0x28, 0x95, 0x00, 0x02, 0x1c, 0x95, 0x00, 0x02 @ 020094f8
.L_02009508:
    tst r0, #1 @ 02009508
    moveq r0, #0x4e @ 0200950c
    movne r0, #0x71 @ 02009510
.L_02009514:
    add sp, sp, #4 @ 02009514
    ldm sp!, {pc} @ 02009518
    bl .L_02009274 @ 0200951c
    and r0, r0, #0xff @ 02009520
    b .L_02009514 @ 02009524
    bl .L_02009274 @ 02009528
    lsr r0, r0, #8 @ 0200952c
    and r0, r0, #0xff @ 02009530
    b .L_02009514 @ 02009534
    bl .L_020092e0 @ 02009538
    and r0, r0, #0xff @ 0200953c
    b .L_02009514 @ 02009540
    bl .L_020092e0 @ 02009544
    lsr r0, r0, #8 @ 02009548
    and r0, r0, #0xff @ 0200954c
    b .L_02009514 @ 02009550
    bl .L_02009380 @ 02009554
    and r0, r0, #0xff @ 02009558
    b .L_02009514 @ 0200955c
    bl .L_02009380 @ 02009560
    lsr r0, r0, #8 @ 02009564
    and r0, r0, #0xff @ 02009568
    b .L_02009514 @ 0200956c
.L_02009570:
@ FUN_02009570 at 0x02009570
    ldr r3, [pc, #0x7c] @ 02009570
    ldr r2, [r3] @ 02009574
    tst r2, #4 @ 02009578
    beq .L_020095a4 @ 0200957c
    ldr r3, [pc, #0x70] @ 02009580
    ldrb r2, [r3] @ 02009584
    cmp r2, #3 @ 02009588
    ldrls pc, [pc, r2, lsl #2] @ 0200958c
    b .L_020095b0 @ 02009590
    .byte 0xb4, 0x95, 0x00, 0x02, 0xe4, 0x95, 0x00, 0x02, 0xd4, 0x95, 0x00, 0x02, 0xc4, 0x95, 0x00, 0x02 @ 02009594
.L_020095a4:
    ldr r2, [pc, #0x50] @ 020095a4
    ldr r3, [pc, #0x50] @ 020095a8
    str r2, [r3] @ 020095ac
.L_020095b0:
    bx lr @ 020095b0
    ldr r2, [pc, #0x48] @ 020095b4
    ldr r3, [pc, #0x40] @ 020095b8
    str r2, [r3] @ 020095bc
    bx lr @ 020095c0
    ldr r2, [pc, #0x3c] @ 020095c4
    ldr r3, [pc, #0x30] @ 020095c8
    str r2, [r3] @ 020095cc
    bx lr @ 020095d0
    ldr r2, [pc, #0x30] @ 020095d4
    ldr r3, [pc, #0x20] @ 020095d8
    str r2, [r3] @ 020095dc
    bx lr @ 020095e0
    ldr r2, [pc, #0x24] @ 020095e4
    ldr r3, [pc, #0x10] @ 020095e8
    str r2, [r3] @ 020095ec
    bx lr @ 020095f0
    .byte 0x10, 0xb6, 0x3c, 0x02, 0xb0, 0xcd, 0x3d, 0x02, 0x80, 0xc2, 0x00, 0x02, 0xa8, 0xce, 0x3d, 0x02 @ 020095f4
    .byte 0xd0, 0xbb, 0x00, 0x02, 0x6c, 0xbd, 0x00, 0x02, 0x18, 0xbf, 0x00, 0x02, 0xcc, 0xc0, 0x00, 0x02 @ 02009604
.L_02009614:
@ FUN_02009614 at 0x02009614
    push {r4, r5, lr} @ 02009614
    ldr r5, [pc, #0x5ac] @ 02009618
    mov r4, r1 @ 0200961c
    ldrb r3, [r5] @ 02009620
    rsbs r2, r3, #1 @ 02009624
    movlo r2, #0 @ 02009628
    cmp r0, #0xb @ 0200962c
    movls r2, #0 @ 02009630
    ldr r3, [pc, #0x594] @ 02009634
    cmp r2, #0 @ 02009638
    strb r1, [r3, r0] @ 0200963c
    popne {r4, r5, pc} @ 02009640
    cmp r0, #0x17 @ 02009644
    ldrls pc, [pc, r0, lsl #2] @ 02009648
    b .L_020096d8 @ 0200964c
    .byte 0xdc, 0x96, 0x00, 0x02, 0x04, 0x97, 0x00, 0x02, 0x7c, 0x97, 0x00, 0x02, 0xe4, 0x97, 0x00, 0x02 @ 02009650
    .byte 0x18, 0x98, 0x00, 0x02, 0x80, 0x98, 0x00, 0x02, 0xd8, 0x96, 0x00, 0x02, 0xb0, 0x98, 0x00, 0x02 @ 02009660
    .byte 0xd8, 0x96, 0x00, 0x02, 0xd8, 0x96, 0x00, 0x02, 0xc8, 0x98, 0x00, 0x02, 0xd4, 0x98, 0x00, 0x02 @ 02009670
    .byte 0x08, 0x99, 0x00, 0x02, 0xc4, 0x99, 0x00, 0x02, 0xd8, 0x96, 0x00, 0x02, 0xe4, 0x99, 0x00, 0x02 @ 02009680
    .byte 0xf0, 0x99, 0x00, 0x02, 0x70, 0x9a, 0x00, 0x02, 0xa8, 0x9a, 0x00, 0x02, 0x1c, 0x9b, 0x00, 0x02 @ 02009690
    .byte 0xd0, 0x9a, 0x00, 0x02, 0xe4, 0x9a, 0x00, 0x02, 0x00, 0x9b, 0x00, 0x02, 0xb0, 0x96, 0x00, 0x02 @ 020096a0
    ldr r0, [pc, #0x51c] @ 020096b0
    and r2, r1, #0x7f @ 020096b4
    ldr r3, [r0] @ 020096b8
    lsr r1, r1, #6 @ 020096bc
    bic r3, r3, #0xff000000 @ 020096c0
    bic r3, r3, #0xfe0000 @ 020096c4
    orr r3, r3, r2, lsl #17 @ 020096c8
    ldr r2, [pc, #0x504] @ 020096cc
    str r3, [r0] @ 020096d0
    strb r1, [r2] @ 020096d4
.L_020096d8:
    pop {r4, r5, pc} @ 020096d8
    lsr r0, r1, #1 @ 020096dc
    lsr r3, r1, #4 @ 020096e0
    eor r0, r0, #1 @ 020096e4
    ldr r2, [pc, #0x4ec] @ 020096e8
    ldr r1, [pc, #0x4ec] @ 020096ec
    and r3, r3, #1 @ 020096f0
    and r0, r0, #1 @ 020096f4
    strb r3, [r2] @ 020096f8
    strb r0, [r1] @ 020096fc
    pop {r4, r5, pc} @ 02009700
    lsr lr, r1, #3 @ 02009704
    and r3, r4, #4 @ 02009708
    ldr r2, [pc, #0x4d0] @ 0200970c
    lsr r1, r1, #6 @ 02009710
    and r1, r1, #1 @ 02009714
    lsr r0, r4, #5 @ 02009718
    strb r3, [r5] @ 0200971c
    ldr r3, [pc, #0x4c0] @ 02009720
    strb r1, [r2] @ 02009724
    and lr, lr, #1 @ 02009728
    ldr r2, [pc, #0x4b8] @ 0200972c
    lsr ip, r4, #4 @ 02009730
    and r0, r0, #1 @ 02009734
    cmp lr, #0 @ 02009738
    and ip, ip, #1 @ 0200973c
    strb r0, [r3] @ 02009740
    ldr r3, [pc, #0x4a4] @ 02009744
    strb ip, [r2] @ 02009748
    ldrne r1, [pc, #0x4a0] @ 0200974c
    ldrne r2, [pc, #0x4a0] @ 02009750
    ldreq r2, [pc, #0x49c] @ 02009754
    ldreq r1, [pc, #0x494] @ 02009758
    strb lr, [r3] @ 0200975c
    movne r3, #0xf0 @ 02009760
    moveq r3, #0xe0 @ 02009764
    strhne r3, [r2] @ 02009768
    strne r3, [r1, #4] @ 0200976c
    strheq r3, [r2] @ 02009770
    streq r3, [r1, #4] @ 02009774
    pop {r4, r5, pc} @ 02009778
    ldr r3, [pc, #0x478] @ 0200977c
    and r1, r1, #0x38 @ 02009780
    ldr r2, [r3] @ 02009784
    ldr r3, [pc, #0x470] @ 02009788
    lsl r0, r1, #0xa @ 0200978c
    tst r2, #8 @ 02009790
    ldr r1, [pc, #0x468] @ 02009794
    ldr r2, [pc, #0x468] @ 02009798
    add r3, r3, r0, lsr #1 @ 0200979c
    str r0, [r1] @ 020097a0
    str r3, [r2] @ 020097a4
    ldreq r1, [pc, #0x45c] @ 020097a8
    beq .L_020097c8 @ 020097ac
    ldr r1, [pc, #0x454] @ 020097b0
    ldr r3, [r1] @ 020097b4
    cmp r0, r3 @ 020097b8
    ldrne r3, [pc, #0x44c] @ 020097bc
    movne r2, #1 @ 020097c0
    strne r2, [r3] @ 020097c4
.L_020097c8:
    ldr r3, [pc, #0x444] @ 020097c8
    str r0, [r1] @ 020097cc
    ldr r2, [r3] @ 020097d0
    ldr r3, [pc, #0x43c] @ 020097d4
    add r2, r0, r2 @ 020097d8
    str r2, [r3] @ 020097dc
    pop {r4, r5, pc} @ 020097e0
    ldr r2, [pc, #0x430] @ 020097e4
    and r0, r1, #0x3e @ 020097e8
    ldrb r3, [r2] @ 020097ec
    lsl r0, r0, #0xa @ 020097f0
    cmp r3, #0 @ 020097f4
    moveq r3, #0x800 @ 020097f8
    movne r3, #0x1000 @ 020097fc
    ldr r2, [pc, #0x410] @ 02009800
    ldr r1, [pc, #0x3f8] @ 02009804
    add r3, r3, r0 @ 02009808
    str r3, [r2, #8] @ 0200980c
    str r0, [r1, #8] @ 02009810
    pop {r4, r5, pc} @ 02009814
    ldr r3, [pc, #0x3dc] @ 02009818
    and r1, r1, #7 @ 0200981c
    ldr r2, [r3] @ 02009820
    ldr r3, [pc, #0x3d4] @ 02009824
    lsl r0, r1, #0xd @ 02009828
    tst r2, #8 @ 0200982c
    ldr r1, [pc, #0x3cc] @ 02009830
    ldr r2, [pc, #0x3cc] @ 02009834
    add r3, r3, r0, lsr #1 @ 02009838
    str r0, [r1, #4] @ 0200983c
    str r3, [r2, #4] @ 02009840
    ldreq r1, [pc, #0x3c0] @ 02009844
    beq .L_02009864 @ 02009848
    ldr r1, [pc, #0x3b8] @ 0200984c
    ldr r3, [r1, #4] @ 02009850
    cmp r0, r3 @ 02009854
    ldrne r3, [pc, #0x3b0] @ 02009858
    movne r2, #1 @ 0200985c
    strne r2, [r3, #4] @ 02009860
.L_02009864:
    ldr r3, [pc, #0x3a8] @ 02009864
    str r0, [r1, #4] @ 02009868
    ldr r2, [r3] @ 0200986c
    ldr r3, [pc, #0x3a0] @ 02009870
    add r2, r0, r2 @ 02009874
    str r2, [r3, #4] @ 02009878
    pop {r4, r5, pc} @ 0200987c
    ldr lr, [pc, #0x37c] @ 02009880
    and r0, r1, #0x7f @ 02009884
    ldr r1, [pc, #0x390] @ 02009888
    lsl r0, r0, #9 @ 0200988c
    ldr ip, [lr, #0xc] @ 02009890
    ldr r3, [pc, #0x388] @ 02009894
    ldr r2, [pc, #0x388] @ 02009898
    add r1, r0, r1 @ 0200989c
    str ip, [r3] @ 020098a0
    str r1, [r2] @ 020098a4
    str r0, [lr, #0xc] @ 020098a8
    pop {r4, r5, pc} @ 020098ac
    and r3, r1, #0x3f @ 020098b0
    ldr r2, [pc, #0x370] @ 020098b4
    ldr r1, [pc, #0x370] @ 020098b8
    str r3, [r2] @ 020098bc
    strb r3, [r1] @ 020098c0
    pop {r4, r5, pc} @ 020098c4
    ldr r3, [pc, #0x364] @ 020098c8
    strh r1, [r3] @ 020098cc
    pop {r4, r5, pc} @ 020098d0
    ldr r3, [pc, #0x35c] @ 020098d4
    lsr r1, r1, #3 @ 020098d8
    and r1, r1, #1 @ 020098dc
    lsr r0, r4, #2 @ 020098e0
    strb r1, [r3] @ 020098e4
    ldr r2, [pc, #0x34c] @ 020098e8
    ldr r3, [pc, #0x34c] @ 020098ec
    and r0, r0, #1 @ 020098f0
    and ip, r4, #3 @ 020098f4
    strb r0, [r2] @ 020098f8
    strb ip, [r3] @ 020098fc
    pop {r4, r5, lr} @ 02009900
    b .L_02009570 @ 02009904
    ldr ip, [pc, #0x334] @ 02009908
    lsr r2, r1, #3 @ 0200990c
    ldrb r0, [ip] @ 02009910
    tst r1, #0x81 @ 02009914
    and r2, r2, #1 @ 02009918
    ldr r3, [pc, #0x2f8] @ 0200991c
    moveq r1, #0 @ 02009920
    movne r1, #1 @ 02009924
    cmp r0, r2 @ 02009928
    strb r1, [r3] @ 0200992c
    beq .L_02009940 @ 02009930
    rsbs r3, r0, #1 @ 02009934
    movlo r3, #0 @ 02009938
    strb r3, [ip] @ 0200993c
.L_02009940:
    cmp r1, #0 @ 02009940
    beq .L_02009b6c @ 02009944
    ldr r3, [pc, #0x2b4] @ 02009948
    ldr r2, [pc, #0x2c4] @ 0200994c
    ldr r1, [r3, #8] @ 02009950
    ldr r3, [pc, #0x2ec] @ 02009954
    mov r0, #0xf000 @ 02009958
    add r1, r1, #0x1000 @ 0200995c
    str r0, [r3] @ 02009960
    ldr r3, [pc, #0x2e0] @ 02009964
    str r1, [r2, #8] @ 02009968
    mov r2, #0x50 @ 0200996c
    strh r2, [r3] @ 02009970
    ldr r2, [pc, #0x2d4] @ 02009974
    mov r3, #0x28 @ 02009978
    strh r3, [r2] @ 0200997c
    ldr r3, [pc, #0x2cc] @ 02009980
    mov r2, #0x140 @ 02009984
    strh r2, [r3] @ 02009988
    ldr r2, [pc, #0x2c4] @ 0200998c
    mov r3, #0x40 @ 02009990
    strh r3, [r2] @ 02009994
.L_02009998:
    ldr r3, [pc, #0x2bc] @ 02009998
    ldrb r2, [r3] @ 0200999c
    cmp r2, #0 @ 020099a0
    beq .L_02009b4c @ 020099a4
    ldr r3, [pc, #0x2b0] @ 020099a8
    ldrb r2, [r3] @ 020099ac
    rsbs r1, r2, #1 @ 020099b0
    movlo r1, #0 @ 020099b4
.L_020099b8:
    ldr r3, [pc, #0x2a4] @ 020099b8
    str r1, [r3] @ 020099bc
    pop {r4, r5, pc} @ 020099c0
    lsl r1, r1, #0x1a @ 020099c4
    lsr r1, r1, #0x10 @ 020099c8
    ldr r3, [pc, #0x294] @ 020099cc
    ldr r2, [pc, #0x294] @ 020099d0
    add r0, r1, #0x380 @ 020099d4
    strh r0, [r3] @ 020099d8
    strh r1, [r2] @ 020099dc
    pop {r4, r5, pc} @ 020099e0
    ldr r3, [pc, #0x284] @ 020099e4
    str r1, [r3] @ 020099e8
    pop {r4, r5, pc} @ 020099ec
    ldr r0, [pc, #0x27c] @ 020099f0
    lsr r3, r1, #4 @ 020099f4
    and r5, r3, #3 @ 020099f8
    and lr, r1, #3 @ 020099fc
    ldrb r2, [r0] @ 02009a00
    orr r1, r5, lr, lsl #4 @ 02009a04
    ldr r3, [pc, #0x268] @ 02009a08
    cmp r1, r2 @ 02009a0c
    ldr r2, [pc, #0x264] @ 02009a10
    strb r5, [r3] @ 02009a14
    ldrne r3, [pc, #0x260] @ 02009a18
    strb lr, [r2] @ 02009a1c
    movne r2, #1 @ 02009a20
    ldr ip, [pc, #0x1d8] @ 02009a24
    strne r2, [r3] @ 02009a28
    ldr r3, [pc, #0x250] @ 02009a2c
    str r1, [r0] @ 02009a30
    add r1, r5, lr, lsl #2 @ 02009a34
    ldr r0, [r3, r1, lsl #2] @ 02009a38
    ldm ip, {r1, r2} @ 02009a3c
    ldr r3, [pc, #0x240] @ 02009a40
    ldr ip, [pc, #0x1cc] @ 02009a44
    add r2, r0, r2 @ 02009a48
    ldrb lr, [r3, lr] @ 02009a4c
    str r2, [ip, #4] @ 02009a50
    ldr r3, [pc, #0x230] @ 02009a54
    ldr r2, [pc, #0x1b4] @ 02009a58
    add r1, r0, r1 @ 02009a5c
    strh lr, [r3] @ 02009a60
    str r0, [r2] @ 02009a64
    str r1, [ip] @ 02009a68
    pop {r4, r5, pc} @ 02009a6c
    lsl r2, r1, #1 @ 02009a70
    and r4, r2, #0x3f @ 02009a74
    lsr r1, r1, #7 @ 02009a78
    ldr r3, [pc, #0x1d8] @ 02009a7c
    ldr r2, [pc, #0x1d8] @ 02009a80
    cmp r1, #0 @ 02009a84
    strb r1, [r3] @ 02009a88
    strb r4, [r2] @ 02009a8c
    beq .L_02009b34 @ 02009a90
    rsbs r2, r4, #1 @ 02009a94
    movlo r2, #0 @ 02009a98
.L_02009a9c:
    ldr r3, [pc, #0x1c0] @ 02009a9c
    str r2, [r3] @ 02009aa0
    pop {r4, r5, pc} @ 02009aa4
    ldr r3, [pc, #0x1e0] @ 02009aa8
    and ip, r1, #0x1f @ 02009aac
    lsr r1, r1, #7 @ 02009ab0
    strb r1, [r3] @ 02009ab4
    ldr r2, [pc, #0x1d4] @ 02009ab8
    ldr r3, [pc, #0x1d4] @ 02009abc
    lsl r0, ip, #3 @ 02009ac0
    str r0, [r2] @ 02009ac4
    strb ip, [r3] @ 02009ac8
    pop {r4, r5, pc} @ 02009acc
    ldr r2, [pc, #0x1c4] @ 02009ad0
    ldrb r3, [r2] @ 02009ad4
    orr r3, r3, r1, lsl #8 @ 02009ad8
    str r3, [r2] @ 02009adc
    pop {r4, r5, pc} @ 02009ae0
    ldr r3, [pc, #0xe8] @ 02009ae4
    ldr r2, [pc, #0x1b0] @ 02009ae8
    ldr r1, [r3] @ 02009aec
    and r2, r1, r2 @ 02009af0
    orr r2, r2, r4, lsl #1 @ 02009af4
    str r2, [r3] @ 02009af8
    pop {r4, r5, pc} @ 02009afc
    ldr r3, [pc, #0xcc] @ 02009b00
    ldr r2, [pc, #0x198] @ 02009b04
    ldr r1, [r3] @ 02009b08
    and r2, r1, r2 @ 02009b0c
    orr r2, r2, r4, lsl #9 @ 02009b10
    str r2, [r3] @ 02009b14
    pop {r4, r5, pc} @ 02009b18
    ldr r2, [pc, #0x178] @ 02009b1c
    ldr r3, [r2] @ 02009b20
    and r3, r3, #0xff00 @ 02009b24
    orr r3, r3, r1 @ 02009b28
    str r3, [r2] @ 02009b2c
    pop {r4, r5, pc} @ 02009b30
.L_02009b34:
    ldr r3, [pc, #0x16c] @ 02009b34
    ldrh r2, [r3] @ 02009b38
    cmp r4, r2 @ 02009b3c
    movlo r2, #0 @ 02009b40
    movhs r2, #1 @ 02009b44
    b .L_02009a9c @ 02009b48
.L_02009b4c:
    ldr r3, [pc, #0x10c] @ 02009b4c
    ldr r2, [pc, #0x150] @ 02009b50
    ldrb r1, [r3] @ 02009b54
    ldrh r3, [r2] @ 02009b58
    cmp r1, r3 @ 02009b5c
    movlo r1, #0 @ 02009b60
    movhs r1, #1 @ 02009b64
    b .L_020099b8 @ 02009b68
.L_02009b6c:
    ldr r3, [pc, #0x90] @ 02009b6c
    mov r2, #0xf800 @ 02009b70
    ldr r0, [r3, #8] @ 02009b74
    ldr r3, [pc, #0xc8] @ 02009b78
    mov r1, #1 @ 02009b7c
    str r2, [r3] @ 02009b80
    ldr r3, [pc, #0x120] @ 02009b84
    ldr r2, [pc, #0x88] @ 02009b88
    add r0, r0, #0x800 @ 02009b8c
    strb r1, [r3] @ 02009b90
    ldr r3, [pc, #0xb0] @ 02009b94
    str r0, [r2, #8] @ 02009b98
    mov r2, #0x40 @ 02009b9c
    strh r2, [r3] @ 02009ba0
    ldr r2, [pc, #0xa4] @ 02009ba4
    mov r3, #0x20 @ 02009ba8
    strh r3, [r2] @ 02009bac
    ldr r3, [pc, #0x9c] @ 02009bb0
    mov r2, #0x100 @ 02009bb4
    strh r2, [r3] @ 02009bb8
    ldr r2, [pc, #0x94] @ 02009bbc
    mov r3, #0x20 @ 02009bc0
    strh r3, [r2] @ 02009bc4
    b .L_02009998 @ 02009bc8
    .byte 0x06, 0x4c, 0x0b, 0x02, 0x18, 0x4c, 0x0b, 0x02, 0x34, 0x36, 0x00, 0x0b, 0x05, 0x4c, 0x0b, 0x02 @ 02009bcc
    .byte 0x44, 0x36, 0x00, 0x0b, 0xf1, 0x4b, 0x0b, 0x02, 0x2f, 0x36, 0x00, 0x0b, 0x2c, 0x36, 0x00, 0x0b @ 02009bdc
    .byte 0xf2, 0x4b, 0x0b, 0x02, 0x06, 0xdb, 0x3d, 0x02, 0x00, 0x00, 0x00, 0x0b, 0x70, 0xd3, 0x3d, 0x02 @ 02009bec
    .byte 0x10, 0xb6, 0x3c, 0x02, 0xec, 0xcb, 0x0a, 0x02, 0xa0, 0xde, 0x3d, 0x02, 0x8c, 0xde, 0x3d, 0x02 @ 02009bfc
    .byte 0x74, 0xd3, 0x3d, 0x02, 0xa4, 0xc8, 0x3d, 0x02, 0xa0, 0xc8, 0x3d, 0x02, 0xb4, 0xc8, 0x3d, 0x02 @ 02009c0c
    .byte 0x05, 0xdb, 0x3d, 0x02, 0xec, 0xcb, 0x09, 0x02, 0xe0, 0xcb, 0x09, 0x02, 0xac, 0xcd, 0x3d, 0x02 @ 02009c1c
    .byte 0x40, 0x36, 0x00, 0x0b, 0xf7, 0x4b, 0x0b, 0x02, 0xf8, 0x4b, 0x0b, 0x02, 0xf0, 0x4b, 0x0b, 0x02 @ 02009c2c
    .byte 0xac, 0xcf, 0x3d, 0x02, 0xb0, 0xcd, 0x3d, 0x02, 0xf4, 0x4b, 0x0b, 0x02, 0x0c, 0x4c, 0x0b, 0x02 @ 02009c3c
    .byte 0x0a, 0x4c, 0x0b, 0x02, 0xb2, 0xde, 0x3d, 0x02, 0xae, 0xc8, 0x3d, 0x02, 0xc8, 0xc8, 0x3d, 0x02 @ 02009c4c
    .byte 0xb4, 0xde, 0x3d, 0x02, 0x04, 0xdb, 0x3d, 0x02, 0xa8, 0xcf, 0x3d, 0x02, 0xaa, 0xcd, 0x3d, 0x02 @ 02009c5c
    .byte 0xa4, 0xce, 0x3d, 0x02, 0x30, 0x36, 0x00, 0x0b, 0xa4, 0xcf, 0x3d, 0x02, 0x72, 0xd3, 0x3d, 0x02 @ 02009c6c
    .byte 0xa6, 0xce, 0x3d, 0x02, 0x58, 0xf3, 0x08, 0x02, 0x9c, 0xe5, 0x08, 0x02, 0xdc, 0xe5, 0x08, 0x02 @ 02009c7c
    .byte 0x08, 0xdb, 0x3d, 0x02, 0x94, 0xde, 0x3d, 0x02, 0x10, 0x4c, 0x0b, 0x02, 0xb0, 0xde, 0x3d, 0x02 @ 02009c8c
    .byte 0xfc, 0x4b, 0x0b, 0x02, 0x00, 0xfe, 0xff, 0x00, 0xff, 0x01, 0xfe, 0x00, 0xac, 0xce, 0x3d, 0x02 @ 02009c9c
    .byte 0x14, 0x4c, 0x0b, 0x02 @ 02009cac
.L_02009cb0:
@ FUN_02009cb0 at 0x02009cb0
    ldr r3, [pc, #0x24] @ 02009cb0
    ldr r2, [pc, #0x24] @ 02009cb4
    ldr r1, [r3] @ 02009cb8
    ldr r3, [pc, #0x20] @ 02009cbc
    str r2, [r1, #0xc] @ 02009cc0
    str r3, [r1, #0x14] @ 02009cc4
    ldr r2, [pc, #0x18] @ 02009cc8
    ldr r3, [pc, #0x18] @ 02009ccc
    str r2, [r1, #0x18] @ 02009cd0
    str r3, [r1, #0x10] @ 02009cd4
    bx lr @ 02009cd8
    .byte 0x48, 0xb3, 0x3e, 0x02, 0x18, 0x4c, 0x0b, 0x02, 0x4c, 0x36, 0x00, 0x0b, 0xec, 0xcb, 0x09, 0x02 @ 02009cdc
    .byte 0xb0, 0xc6, 0x3d, 0x02 @ 02009cec
.L_02009cf0:
@ FUN_02009cf0 at 0x02009cf0
    push {r4, r5, r6, lr} @ 02009cf0
    ldr r5, [pc, #0x118] @ 02009cf4
    mov r4, #0 @ 02009cf8
.L_02009cfc:
    and r0, r4, #0xff @ 02009cfc
    ldrb r1, [r4, r5] @ 02009d00
    add r4, r4, #1 @ 02009d04
    bl .L_02009614 @ 02009d08
    cmp r4, #0x18 @ 02009d0c
    bne .L_02009cfc @ 02009d10
    ldr r3, [pc, #0xfc] @ 02009d14
    mov ip, #0 @ 02009d18
    ldrb r4, [r3] @ 02009d1c
    ldr r6, [pc, #0xf4] @ 02009d20
    ldr r5, [pc, #0xf4] @ 02009d24
    mov r0, ip @ 02009d28
.L_02009d2c:
    ldrh r3, [r0, r6] @ 02009d2c
    cmp ip, #0 @ 02009d30
    and r2, r3, #0xe0 @ 02009d34
    and r1, r3, #0xe00 @ 02009d38
    lsl r2, r2, #2 @ 02009d3c
    orr r2, r2, r1, lsl #3 @ 02009d40
    orr r2, r2, #0x8000 @ 02009d44
    and r3, r3, #0xe @ 02009d48
    orr r3, r2, r3, lsl #1 @ 02009d4c
    ldr lr, [pc, #0xcc] @ 02009d50
    add r2, r0, #0x5000000 @ 02009d54
    strh r3, [r0, r5] @ 02009d58
    strhne r3, [r2] @ 02009d5c
    cmp r4, ip @ 02009d60
    add ip, ip, #1 @ 02009d64
    strh r3, [r0, lr] @ 02009d68
    strheq r3, [lr] @ 02009d6c
    cmp ip, #0x40 @ 02009d70
    add r0, r0, #2 @ 02009d74
    bne .L_02009d2c @ 02009d78
    ldr r3, [pc, #0xa4] @ 02009d7c
    ldrb r0, [r3] @ 02009d80
    cmp r0, #0 @ 02009d84
    beq .L_02009df0 @ 02009d88
    ldr r6, [pc, #0x98] @ 02009d8c
    mov r0, #1 @ 02009d90
    bl .L_020072a8 @ 02009d94
    ldr r5, [pc, #0x90] @ 02009d98
    ldr r0, [r6, #8] @ 02009d9c
    mov r1, #0x1000 @ 02009da0
    add r0, r0, r5 @ 02009da4
    mov r2, #2 @ 02009da8
    bl .L_02007630 @ 02009dac
.L_02009db0:
    ldr r3, [pc, #0x7c] @ 02009db0
    ldr r4, [pc, #0x7c] @ 02009db4
    ldr r0, [r3] @ 02009db8
    bl .L_02006f2c @ 02009dbc
    ldr r0, [r6] @ 02009dc0
    ldr r1, [r4] @ 02009dc4
    add r0, r0, r5 @ 02009dc8
    mov r2, #0 @ 02009dcc
    bl .L_02007630 @ 02009dd0
    ldr r0, [r6, #4] @ 02009dd4
    ldr r1, [r4] @ 02009dd8
    add r0, r0, r5 @ 02009ddc
    mov r2, #1 @ 02009de0
    bl .L_02007630 @ 02009de4
    pop {r4, r5, r6, lr} @ 02009de8
    b .L_02008e5c @ 02009dec
.L_02009df0:
    ldr r6, [pc, #0x34] @ 02009df0
    bl .L_020072a8 @ 02009df4
    ldr r5, [pc, #0x30] @ 02009df8
    ldr r0, [r6, #8] @ 02009dfc
    mov r1, #0x800 @ 02009e00
    add r0, r0, r5 @ 02009e04
    mov r2, #2 @ 02009e08
    bl .L_02007630 @ 02009e0c
    b .L_02009db0 @ 02009e10
    .byte 0x18, 0x4c, 0x0b, 0x02, 0xf7, 0x4b, 0x0b, 0x02, 0xb0, 0xc6, 0x3d, 0x02, 0x30, 0xc7, 0x3d, 0x02 @ 02009e14
    .byte 0x00, 0x02, 0x00, 0x05, 0x05, 0xdb, 0x3d, 0x02, 0xa0, 0xde, 0x3d, 0x02, 0xec, 0xcb, 0x09, 0x02 @ 02009e24
    .byte 0xa4, 0xcf, 0x3d, 0x02, 0xa0, 0xc8, 0x3d, 0x02 @ 02009e34
.L_02009e3c:
@ FUN_02009e3c at 0x02009e3c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02009e3c
    ldr r0, [pc, #0xc20] @ 02009e40
    ldr r3, [pc, #0xc20] @ 02009e44
    ldrh r2, [r0] @ 02009e48
    ldrb r1, [r3] @ 02009e4c
    ldr r3, [pc, #0xc18] @ 02009e50
    cmp r2, #0 @ 02009e54
    moveq r2, r3 @ 02009e58
    ldr r3, [pc, #0xc10] @ 02009e5c
    and r1, r1, #0xf @ 02009e60
    sub sp, sp, #0x2c @ 02009e64
    str r2, [r3] @ 02009e68
    cmp r1, #3 @ 02009e6c
    ldrls pc, [pc, r1, lsl #2] @ 02009e70
    b .L_02009efc @ 02009e74
    .byte 0x04, 0x9f, 0x00, 0x02, 0x04, 0x9f, 0x00, 0x02, 0xfc, 0xa2, 0x00, 0x02, 0x0c, 0xa3, 0x00, 0x02 @ 02009e78
.L_02009e88:
    ldr r1, [pc, #0xbe8] @ 02009e88
    ldr r0, [pc, #0xbe8] @ 02009e8c
    ldr r2, [r1] @ 02009e90
    lsl ip, fp, #0xf @ 02009e94
.L_02009e98:
    and r2, r2, #0x7f @ 02009e98
    sub r3, r8, #1 @ 02009e9c
    cmp r2, #0x4f @ 02009ea0
    lsl r3, r3, #0x10 @ 02009ea4
    and r1, r2, #0x7e @ 02009ea8
    bhi .L_02009ed0 @ 02009eac
    lsrs r8, r3, #0x10 @ 02009eb0
    ldrh r3, [sl] @ 02009eb4
    add ip, ip, #0x8000 @ 02009eb8
    strh r3, [r1, r0] @ 02009ebc
    ldr r1, [sp, #0x10] @ 02009ec0
    add sl, sl, #2 @ 02009ec4
    add r2, r1, r2 @ 02009ec8
    bne .L_02009e98 @ 02009ecc
.L_02009ed0:
    ldr r3, [pc, #0xba0] @ 02009ed0
    str r2, [r3] @ 02009ed4
    and r3, fp, #0xfe0000 @ 02009ed8
    orr fp, r3, ip, lsr #15 @ 02009edc
.L_02009ee0:
    mov r1, r8 @ 02009ee0
.L_02009ee4:
    ldr r0, [pc, #0xb7c] @ 02009ee4
    ldr r2, [pc, #0xb90] @ 02009ee8
    ldr r3, [pc, #0xb80] @ 02009eec
    str r1, [r0] @ 02009ef0
    str fp, [r2] @ 02009ef4
    str r1, [r3] @ 02009ef8
.L_02009efc:
    add sp, sp, #0x2c @ 02009efc
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02009f00
    ldr r0, [pc, #0xb74] @ 02009f04
    ldr r3, [pc, #0xb74] @ 02009f08
    ldr r4, [r0] @ 02009f0c
    ldr r3, [r3] @ 02009f10
    bic fp, r4, #0xff000000 @ 02009f14
    bic fp, fp, #1 @ 02009f18
    mov r0, fp @ 02009f1c
    str r3, [sp, #0x10] @ 02009f20
    bl .L_02003cc8 @ 02009f24
    ldr r3, [pc, #0xb58] @ 02009f28
    ldr r1, [pc, #0xb40] @ 02009f2c
    ldr r2, [r3] @ 02009f30
    ldr r6, [r1] @ 02009f34
    and r2, r2, #0xf @ 02009f38
    lsl r1, r6, #0x10 @ 02009f3c
    cmp r2, #3 @ 02009f40
    mov sl, r0 @ 02009f44
    lsr r8, r1, #0x10 @ 02009f48
    beq .L_0200a4e0 @ 02009f4c
    cmp r2, #5 @ 02009f50
    beq .L_02009e88 @ 02009f54
    cmp r2, #1 @ 02009f58
    bne .L_02009ee0 @ 02009f5c
    ldr r3, [pc, #0xb10] @ 02009f60
    ldr r0, [pc, #0xb20] @ 02009f64
    ldr r7, [r3] @ 02009f68
    and r0, r7, r0 @ 02009f6c
    ands r2, r7, #1 @ 02009f70
    str r0, [sp, #0x24] @ 02009f74
    beq .L_0200a65c @ 02009f78
    ldr r1, [sp, #0x10] @ 02009f7c
    ldr sb, [pc, #0xb08] @ 02009f80
    lsl r3, r1, #0x10 @ 02009f84
    lsr r3, r3, #0x10 @ 02009f88
    and r6, r4, #0xfe0000 @ 02009f8c
    str r3, [sp, #0x1c] @ 02009f90
    mov r4, sl @ 02009f94
    mov lr, r0 @ 02009f98
    mov r5, r8 @ 02009f9c
.L_02009fa0:
    ldr r0, [sp, #0x1c] @ 02009fa0
    ldrh ip, [r4], #2 @ 02009fa4
    add r2, fp, #2 @ 02009fa8
    sub r3, r5, #1 @ 02009fac
    add r1, lr, r0 @ 02009fb0
    lsl r3, r3, #0x10 @ 02009fb4
    bic r2, r2, #0xff000000 @ 02009fb8
    add r0, lr, sb @ 02009fbc
    bic r2, r2, #0xfe0000 @ 02009fc0
    lsl r1, r1, #0x10 @ 02009fc4
    lsrs r5, r3, #0x10 @ 02009fc8
    lsr r3, ip, #8 @ 02009fcc
    strb r3, [sb, lr] @ 02009fd0
    orr fp, r2, r6 @ 02009fd4
    strb ip, [r0, #1] @ 02009fd8
    lsr lr, r1, #0x10 @ 02009fdc
    bne .L_02009fa0 @ 02009fe0
    ldr r2, [pc, #0xaa8] @ 02009fe4
    mov sb, lr @ 02009fe8
    ldr r1, [r2, #0xc] @ 02009fec
    cmp r7, r1 @ 02009ff0
    blo .L_0200aa20 @ 02009ff4
    ldr r2, [pc, #0xa98] @ 02009ff8
    ldrb r2, [r2] @ 02009ffc
    cmp r2, #0 @ 0200a000
    movne r3, #0x280 @ 0200a004
    moveq r3, #0x200 @ 0200a008
    add r3, r3, r1 @ 0200a00c
    cmp r7, r3 @ 0200a010
    bhs .L_0200aa20 @ 0200a014
    cmp r2, #0 @ 0200a018
    moveq r3, #0x200 @ 0200a01c
    movne r3, #0x280 @ 0200a020
    add r3, r3, r1 @ 0200a024
    cmp lr, r3 @ 0200a028
    movls r1, #0 @ 0200a02c
    movhi r1, #1 @ 0200a030
    ldr r3, [pc, #0xa60] @ 0200a034
    mov r2, #1 @ 0200a038
    strb r2, [r3] @ 0200a03c
.L_0200a040:
    ldr r3, [pc, #0xa58] @ 0200a040
    ldrh r2, [r3] @ 0200a044
    cmp r7, r2 @ 0200a048
    beq .L_0200aa40 @ 0200a04c
.L_0200a050:
    cmp r1, #0 @ 0200a050
    beq .L_0200a2e4 @ 0200a054
    ldr r3, [pc, #0xa34] @ 0200a058
    ldr r1, [sp, #0x24] @ 0200a05c
    ldr r0, [r3] @ 0200a060
    cmp r1, r0 @ 0200a064
    blo .L_0200aa38 @ 0200a068
    ldr r3, [pc, #0xa30] @ 0200a06c
    ldr r2, [r3] @ 0200a070
    cmp r1, r2 @ 0200a074
    bhs .L_0200aa38 @ 0200a078
    ldr r3, [pc, #0xa24] @ 0200a07c
    ldr r2, [r3] @ 0200a080
    cmp r8, r2, lsr #1 @ 0200a084
    blo .L_0200a09c @ 0200a088
    mov r0, #0 @ 0200a08c
    bl .L_020075d0 @ 0200a090
    ldr r3, [pc, #0x9f8] @ 0200a094
    ldr r0, [r3] @ 0200a098
.L_0200a09c:
    ldr r2, [sp, #0x24] @ 0200a09c
    ldr r6, [pc, #0xa04] @ 0200a0a0
    rsb r3, r0, r2 @ 0200a0a4
    lsl r3, r3, #0x10 @ 0200a0a8
    lsr r4, r3, #0x10 @ 0200a0ac
    mov r5, sl @ 0200a0b0
.L_0200a0b4:
    ldrh r3, [r5], #2 @ 0200a0b4
    mov r1, r4 @ 0200a0b8
    lsl r2, r3, #8 @ 0200a0bc
    orr r2, r2, r3, lsr #8 @ 0200a0c0
    mov r0, #0 @ 0200a0c4
    mov lr, pc @ 0200a0c8
    ldr pc, [r6] @ 0200a0cc
    ldr r0, [sp, #0x1c] @ 0200a0d0
    sub r3, r8, #1 @ 0200a0d4
    add r2, r4, r0 @ 0200a0d8
    lsl r3, r3, #0x10 @ 0200a0dc
    lsl r2, r2, #0x10 @ 0200a0e0
    lsrs r8, r3, #0x10 @ 0200a0e4
    lsr r4, r2, #0x10 @ 0200a0e8
    bne .L_0200a0b4 @ 0200a0ec
    ldr r1, [pc, #0x980] @ 0200a0f0
    ldr r2, [pc, #0x990] @ 0200a0f4
    ldr r3, [r1] @ 0200a0f8
    mov r7, #1 @ 0200a0fc
    and r2, r3, r2 @ 0200a100
    str r2, [sp, #0x24] @ 0200a104
.L_0200a108:
    ldr r3, [pc, #0x984] @ 0200a108
    ldr r1, [sp, #0x24] @ 0200a10c
    ldr r0, [r3, #4] @ 0200a110
    cmp r0, r1 @ 0200a114
    bhi .L_0200a1c8 @ 0200a118
    ldr r3, [pc, #0x980] @ 0200a11c
    ldr r2, [r3, #4] @ 0200a120
    cmp r2, r1 @ 0200a124
    bls .L_0200a1c8 @ 0200a128
    ldr r2, [pc, #0x940] @ 0200a12c
    ldr r3, [r2] @ 0200a130
    ldr r2, [pc, #0x96c] @ 0200a134
    lsl r3, r3, #0x10 @ 0200a138
    ldr r1, [r2] @ 0200a13c
    lsr r8, r3, #0x10 @ 0200a140
    cmp r8, r1, lsr #1 @ 0200a144
    blo .L_0200a15c @ 0200a148
    mov r0, #1 @ 0200a14c
    bl .L_020075d0 @ 0200a150
    ldr r3, [pc, #0x938] @ 0200a154
    ldr r0, [r3, #4] @ 0200a158
.L_0200a15c:
    ldr r1, [sp, #0x24] @ 0200a15c
    ldr r6, [pc, #0x944] @ 0200a160
    rsb r3, r0, r1 @ 0200a164
    lsl r3, r3, #0x10 @ 0200a168
    lsr r4, r3, #0x10 @ 0200a16c
    mov r5, sl @ 0200a170
.L_0200a174:
    ldrh r3, [r5], #2 @ 0200a174
    mov r1, r4 @ 0200a178
    lsl r2, r3, #8 @ 0200a17c
    orr r2, r2, r3, lsr #8 @ 0200a180
    mov r0, #1 @ 0200a184
    mov lr, pc @ 0200a188
    ldr pc, [r6] @ 0200a18c
    ldr r0, [sp, #0x1c] @ 0200a190
    sub r3, r8, #1 @ 0200a194
    add r2, r4, r0 @ 0200a198
    lsl r3, r3, #0x10 @ 0200a19c
    lsl r2, r2, #0x10 @ 0200a1a0
    lsrs r8, r3, #0x10 @ 0200a1a4
    lsr r4, r2, #0x10 @ 0200a1a8
    bne .L_0200a174 @ 0200a1ac
    ldr r1, [pc, #0x8c0] @ 0200a1b0
    ldr r2, [pc, #0x8d0] @ 0200a1b4
    ldr r3, [r1] @ 0200a1b8
    mov r7, #1 @ 0200a1bc
    and r2, r3, r2 @ 0200a1c0
    str r2, [sp, #0x24] @ 0200a1c4
.L_0200a1c8:
    ldr r0, [pc, #0x8c4] @ 0200a1c8
    ldr r1, [sp, #0x24] @ 0200a1cc
    ldr r3, [r0, #8] @ 0200a1d0
    cmp r3, r1 @ 0200a1d4
    bhi .L_0200a28c @ 0200a1d8
    ldr r3, [pc, #0x8c0] @ 0200a1dc
    ldr r2, [r3, #8] @ 0200a1e0
    cmp r2, r1 @ 0200a1e4
    bls .L_0200a28c @ 0200a1e8
    ldr r2, [pc, #0x880] @ 0200a1ec
    ldr r3, [r2] @ 0200a1f0
    ldr r2, [pc, #0x89c] @ 0200a1f4
    lsl r3, r3, #0x10 @ 0200a1f8
    ldrb r1, [r2] @ 0200a1fc
    lsr r8, r3, #0x10 @ 0200a200
    cmp r1, #0 @ 0200a204
    moveq r1, #0x400 @ 0200a208
    movne r1, #0x800 @ 0200a20c
    cmp r1, r8 @ 0200a210
    bgt .L_0200a220 @ 0200a214
    mov r0, #2 @ 0200a218
    bl .L_020075d0 @ 0200a21c
.L_0200a220:
    ldr r0, [pc, #0x86c] @ 0200a220
    ldr r1, [sp, #0x24] @ 0200a224
    ldr r3, [r0, #8] @ 0200a228
    ldr r6, [pc, #0x87c] @ 0200a22c
    rsb r3, r3, r1 @ 0200a230
    lsl r3, r3, #0x10 @ 0200a234
    lsr r4, r3, #0x10 @ 0200a238
    mov r5, sl @ 0200a23c
.L_0200a240:
    ldrh r3, [r5], #2 @ 0200a240
    mov r0, r4 @ 0200a244
    lsl r1, r3, #8 @ 0200a248
    orr r1, r1, r3, lsr #8 @ 0200a24c
    mov lr, pc @ 0200a250
    ldr pc, [r6] @ 0200a254
    ldr r0, [sp, #0x1c] @ 0200a258
    sub r3, r8, #1 @ 0200a25c
    add r2, r4, r0 @ 0200a260
    lsl r3, r3, #0x10 @ 0200a264
    lsl r2, r2, #0x10 @ 0200a268
    lsrs r8, r3, #0x10 @ 0200a26c
    lsr r4, r2, #0x10 @ 0200a270
    bne .L_0200a240 @ 0200a274
    ldr r1, [pc, #0x7f8] @ 0200a278
    ldr r2, [pc, #0x808] @ 0200a27c
    ldr r3, [r1] @ 0200a280
    and r2, r3, r2 @ 0200a284
    str r2, [sp, #0x24] @ 0200a288
.L_0200a28c:
    cmp r7, #0 @ 0200a28c
    movne r5, r8 @ 0200a290
    bne .L_0200a2e4 @ 0200a294
    ldr r0, [pc, #0x7d4] @ 0200a298
    ldr r3, [r0] @ 0200a29c
    lsl r3, r3, #0x10 @ 0200a2a0
    lsr r5, r3, #0x10 @ 0200a2a4
.L_0200a2a8:
    ldrh r3, [sl], #2 @ 0200a2a8
    ldr r0, [sp, #0x24] @ 0200a2ac
    lsl r1, r3, #8 @ 0200a2b0
    orr r1, r1, r3, lsr #8 @ 0200a2b4
    bl .L_020076d0 @ 0200a2b8
    ldr r1, [sp, #0x24] @ 0200a2bc
    ldr r0, [sp, #0x1c] @ 0200a2c0
    sub r3, r5, #1 @ 0200a2c4
    add r2, r1, r0 @ 0200a2c8
    lsl r3, r3, #0x10 @ 0200a2cc
    lsl r2, r2, #0x10 @ 0200a2d0
    lsr r2, r2, #0x10 @ 0200a2d4
    lsrs r5, r3, #0x10 @ 0200a2d8
    str r2, [sp, #0x24] @ 0200a2dc
    bne .L_0200a2a8 @ 0200a2e0
.L_0200a2e4:
    lsl r3, sb, #0x10 @ 0200a2e4
    ldr r0, [pc, #0x788] @ 0200a2e8
    lsr r3, r3, #0x10 @ 0200a2ec
    mov r1, r5 @ 0200a2f0
    str r3, [r0] @ 0200a2f4
    b .L_02009ee4 @ 0200a2f8
    ldr r3, [pc, #0x7b0] @ 0200a2fc
    mov r2, #1 @ 0200a300
    strb r2, [r3] @ 0200a304
    b .L_02009efc @ 0200a308
    ldr r3, [pc, #0x76c] @ 0200a30c
    ldr r1, [pc, #0x75c] @ 0200a310
    ldr r0, [r3] @ 0200a314
    ldr r3, [pc, #0x758] @ 0200a318
    ldr r2, [r1] @ 0200a31c
    ldr r1, [r3] @ 0200a320
    ldr r3, [pc, #0x758] @ 0200a324
    lsl r2, r2, #0x10 @ 0200a328
    lsl r0, r0, #0xf @ 0200a32c
    lsr r6, r2, #0x10 @ 0200a330
    ldr r5, [r3] @ 0200a334
    lsr lr, r0, #0x10 @ 0200a338
    lsl r1, r1, #0x10 @ 0200a33c
    add r3, lr, r6 @ 0200a340
    lsr sl, r1, #0x10 @ 0200a344
    lsl r3, r3, #0x10 @ 0200a348
    lsl r2, r5, #0x10 @ 0200a34c
    ldr sb, [pc, #0x738] @ 0200a350
    lsr r7, r2, #0x10 @ 0200a354
    lsr r4, r3, #0x10 @ 0200a358
    mov ip, sl @ 0200a35c
.L_0200a360:
    add r3, lr, #1 @ 0200a360
    lsl r3, r3, #0x10 @ 0200a364
    eor r1, lr, #1 @ 0200a368
    add r2, ip, r7 @ 0200a36c
    lsr lr, r3, #0x10 @ 0200a370
    ldrb r0, [sb, r1] @ 0200a374
    eor r3, ip, #1 @ 0200a378
    lsl r2, r2, #0x10 @ 0200a37c
    cmp lr, r4 @ 0200a380
    strb r0, [sb, r3] @ 0200a384
    lsr ip, r2, #0x10 @ 0200a388
    bne .L_0200a360 @ 0200a38c
    ldr r0, [pc, #0x6e0] @ 0200a390
    ldr r4, [pc, #0x6f0] @ 0200a394
    cmp r5, #1 @ 0200a398
    ldr r8, [pc, #0x700] @ 0200a39c
    ldr fp, [pc, #0x704] @ 0200a3a0
    str ip, [r0] @ 0200a3a4
    lsreq r6, r6, #1 @ 0200a3a8
    moveq r7, #2 @ 0200a3ac
    and r4, sl, r4 @ 0200a3b0
.L_0200a3b4:
    ldr r2, [pc, #0x6d8] @ 0200a3b4
    ldr r1, [r2, #0xc] @ 0200a3b8
    cmp r4, r1 @ 0200a3bc
    blo .L_0200a3f0 @ 0200a3c0
    ldr r2, [pc, #0x6cc] @ 0200a3c4
    ldrb r3, [r2] @ 0200a3c8
    cmp r3, #0 @ 0200a3cc
    moveq r3, #0x200 @ 0200a3d0
    movne r3, #0x280 @ 0200a3d4
    add r3, r3, r1 @ 0200a3d8
    cmp r4, r3 @ 0200a3dc
    ldrlo r3, [pc, #0x6b4] @ 0200a3e0
    movlo r2, #1 @ 0200a3e4
    strblo r2, [r3] @ 0200a3e8
    blo .L_0200a470 @ 0200a3ec
.L_0200a3f0:
    ldr r3, [pc, #0x6a8] @ 0200a3f0
    ldrh r2, [r3] @ 0200a3f4
    cmp r2, r4 @ 0200a3f8
    bhi .L_0200a410 @ 0200a3fc
    ldr r3, [pc, #0x6b0] @ 0200a400
    ldrh r2, [r3] @ 0200a404
    cmp r2, r4 @ 0200a408
    bhi .L_0200a470 @ 0200a40c
.L_0200a410:
    ldr r3, [pc, #0x67c] @ 0200a410
    ldr r2, [r3] @ 0200a414
    cmp r4, r2 @ 0200a418
    blo .L_0200a42c @ 0200a41c
    ldr r3, [r8] @ 0200a420
    cmp r4, r3 @ 0200a424
    blo .L_0200a4c4 @ 0200a428
.L_0200a42c:
    mov r5, #0 @ 0200a42c
.L_0200a430:
    ldr r0, [pc, #0x65c] @ 0200a430
    ldr r2, [r0, #4] @ 0200a434
    cmp r4, r2 @ 0200a438
    blo .L_0200a44c @ 0200a43c
    ldr r3, [r8, #4] @ 0200a440
    cmp r4, r3 @ 0200a444
    blo .L_0200a640 @ 0200a448
.L_0200a44c:
    ldr r1, [pc, #0x640] @ 0200a44c
    ldr r2, [r1, #8] @ 0200a450
    cmp r4, r2 @ 0200a454
    blo .L_0200a468 @ 0200a458
    ldr r3, [r8, #8] @ 0200a45c
    cmp r4, r3 @ 0200a460
    blo .L_0200a628 @ 0200a464
.L_0200a468:
    cmp r5, #0 @ 0200a468
    beq .L_0200a490 @ 0200a46c
.L_0200a470:
    sub r3, r6, #1 @ 0200a470
    lsl r3, r3, #0x10 @ 0200a474
    lsrs r6, r3, #0x10 @ 0200a478
    beq .L_0200a4ac @ 0200a47c
.L_0200a480:
    add r3, r4, r7 @ 0200a480
    ldr r4, [pc, #0x600] @ 0200a484
    and r4, r3, r4 @ 0200a488
    b .L_0200a3b4 @ 0200a48c
.L_0200a490:
    mov r0, r4 @ 0200a490
    ldrh r1, [r4, sb] @ 0200a494
    bl .L_020076d0 @ 0200a498
    sub r3, r6, #1 @ 0200a49c
    lsl r3, r3, #0x10 @ 0200a4a0
    lsrs r6, r3, #0x10 @ 0200a4a4
    bne .L_0200a480 @ 0200a4a8
.L_0200a4ac:
    ldr r2, [pc, #0x5b4] @ 0200a4ac
    ldr r0, [pc, #0x5bc] @ 0200a4b0
    mov r3, #0 @ 0200a4b4
    str r3, [r2] @ 0200a4b8
    str r3, [r0] @ 0200a4bc
    b .L_02009efc @ 0200a4c0
.L_0200a4c4:
    rsb r1, r2, r4 @ 0200a4c4
    mov r0, #0 @ 0200a4c8
    ldrh r2, [r4, sb] @ 0200a4cc
    mov lr, pc @ 0200a4d0
    ldr pc, [fp] @ 0200a4d4
    mov r5, #1 @ 0200a4d8
    b .L_0200a430 @ 0200a4dc
.L_0200a4e0:
    ldr r3, [pc, #0x5d4] @ 0200a4e0
    ldr r2, [pc, #0x5d4] @ 0200a4e4
    ldr sb, [r3] @ 0200a4e8
    ldr r0, [pc, #0x5d0] @ 0200a4ec
    ldrb r3, [r2, sb] @ 0200a4f0
    lsl r6, fp, #0xf @ 0200a4f4
    cmp r3, #0xc8 @ 0200a4f8
    addeq r3, sb, r2 @ 0200a4fc
    ldrbeq r3, [r3, #-1] @ 0200a500
    ldr r2, [pc, #0x5bc] @ 0200a504
    and r3, r3, #0xff @ 0200a508
    str r3, [sp, #8] @ 0200a50c
    ldr r3, [pc, #0x5b4] @ 0200a510
    ldr r1, [sp, #8] @ 0200a514
    ldrb r3, [r3] @ 0200a518
    lsr r1, r1, #5 @ 0200a51c
    str r3, [sp, #0x14] @ 0200a520
    ldr r3, [pc, #0x54c] @ 0200a524
    add r0, r0, r1, lsl #7 @ 0200a528
    ldr r7, [r2] @ 0200a52c
    ldr r5, [r3] @ 0200a530
    str r1, [sp, #4] @ 0200a534
    str r0, [sp, #0x18] @ 0200a538
.L_0200a53c:
    ldrh r1, [sl], #2 @ 0200a53c
    and r3, r5, #0x7e @ 0200a540
    lsr lr, r3, #1 @ 0200a544
    ldr r2, [pc, #0x580] @ 0200a548
    and r3, r1, #0xe0 @ 0200a54c
    lsl r4, lr, #1 @ 0200a550
    ldrh r0, [r4, r2] @ 0200a554
    ldr ip, [pc, #0x574] @ 0200a558
    and r2, r1, #0xe00 @ 0200a55c
    lsl r3, r3, #2 @ 0200a560
    orr r3, r3, r2, lsl #3 @ 0200a564
    and ip, r1, ip @ 0200a568
    orr r3, r3, #0x8000 @ 0200a56c
    and r1, r1, #0xe @ 0200a570
    orr r2, r3, r1, lsl #1 @ 0200a574
    ldr r3, [sp, #0x10] @ 0200a578
    cmp ip, r0 @ 0200a57c
    add r6, r6, #0x8000 @ 0200a580
    add r5, r5, r3 @ 0200a584
    beq .L_0200a5f8 @ 0200a588
    ldr r0, [pc, #0x53c] @ 0200a58c
    lsl r3, r2, #0x10 @ 0200a590
    cmp lr, #0 @ 0200a594
    lsr r1, r3, #0x10 @ 0200a598
    strh ip, [r4, r0] @ 0200a59c
    beq .L_0200a5d8 @ 0200a5a0
    ldr r1, [sp, #4] @ 0200a5a4
    lsl r3, r2, #0x10 @ 0200a5a8
    cmp sb, #0xde @ 0200a5ac
    add r2, lr, r1, lsl #6 @ 0200a5b0
    lsl r2, r2, #1 @ 0200a5b4
    lsr r1, r3, #0x10 @ 0200a5b8
    bhi .L_0200a5d8 @ 0200a5bc
    ldr r3, [pc, #0x4fc] @ 0200a5c0
    ldr r0, [sp, #8] @ 0200a5c4
    strh r1, [r2, r3] @ 0200a5c8
    ldr r3, [pc, #0x504] @ 0200a5cc
    ldr r2, [sp, #0x18] @ 0200a5d0
    str r2, [r3, r0, lsl #2] @ 0200a5d4
.L_0200a5d8:
    ldr r3, [sp, #0x14] @ 0200a5d8
    mov r7, #1 @ 0200a5dc
    cmp lr, r3 @ 0200a5e0
    ldr r3, [pc, #0x4f0] @ 0200a5e4
    moveq r7, #1 @ 0200a5e8
    strh r1, [r4, r3] @ 0200a5ec
    ldreq r3, [pc, #0x4e8] @ 0200a5f0
    strheq r1, [r3] @ 0200a5f4
.L_0200a5f8:
    sub r3, r8, #1 @ 0200a5f8
    lsl r3, r3, #0x10 @ 0200a5fc
    lsrs r8, r3, #0x10 @ 0200a600
    bne .L_0200a53c @ 0200a604
    and r3, fp, #0xfe0000 @ 0200a608
    ldr r0, [pc, #0x4b4] @ 0200a60c
    ldr r2, [pc, #0x460] @ 0200a610
    orr fp, r3, r6, lsr #15 @ 0200a614
    mov r1, r8 @ 0200a618
    str r7, [r0] @ 0200a61c
    str r5, [r2] @ 0200a620
    b .L_02009ee4 @ 0200a624
.L_0200a628:
    rsb r0, r2, r4 @ 0200a628
    ldrh r1, [r4, sb] @ 0200a62c
    ldr r3, [pc, #0x478] @ 0200a630
    mov lr, pc @ 0200a634
    ldr pc, [r3] @ 0200a638
    b .L_0200a468 @ 0200a63c
.L_0200a640:
    rsb r1, r2, r4 @ 0200a640
    mov r0, #1 @ 0200a644
    ldrh r2, [r4, sb] @ 0200a648
    mov lr, pc @ 0200a64c
    ldr pc, [fp] @ 0200a650
    mov r5, #1 @ 0200a654
    b .L_0200a44c @ 0200a658
.L_0200a65c:
    ldr r1, [sp, #0x10] @ 0200a65c
    ldr sb, [pc, #0x428] @ 0200a660
    lsl r3, r1, #0x10 @ 0200a664
    lsr r3, r3, #0x10 @ 0200a668
    ldr ip, [sp, #0x24] @ 0200a66c
    mov r5, r8 @ 0200a670
    str r3, [sp, #0x20] @ 0200a674
    str r2, [sp, #0xc] @ 0200a678
    lsl lr, fp, #0xf @ 0200a67c
    mov r4, sl @ 0200a680
    mov r8, sb @ 0200a684
.L_0200a688:
    ldrh r3, [ip, sb] @ 0200a688
    ldrh r2, [r4], #2 @ 0200a68c
    mov r0, #0 @ 0200a690
    cmp r2, r3 @ 0200a694
    ldrne r3, [sp, #0xc] @ 0200a698
    strhne r2, [ip, r8] @ 0200a69c
    addne r3, r3, #1 @ 0200a6a0
    strne r3, [sp, #0xc] @ 0200a6a4
    ldr r2, [sp, #0x20] @ 0200a6a8
    sub r3, r5, #1 @ 0200a6ac
    lsl r3, r3, #0x10 @ 0200a6b0
    add r1, ip, r2 @ 0200a6b4
    movne r0, #1 @ 0200a6b8
    lsrs r5, r3, #0x10 @ 0200a6bc
    ldr r3, [pc, #0x41c] @ 0200a6c0
    lsl r2, ip, #0xf @ 0200a6c4
    lsl r1, r1, #0x10 @ 0200a6c8
    add lr, lr, #0x8000 @ 0200a6cc
    strb r0, [r3, r2, lsr #16] @ 0200a6d0
    lsr ip, r1, #0x10 @ 0200a6d4
    bne .L_0200a688 @ 0200a6d8
    ldr r0, [sp, #0xc] @ 0200a6dc
    cmp r7, ip @ 0200a6e0
    and r3, fp, #0xfe0000 @ 0200a6e4
    movlo sb, ip @ 0200a6e8
    addhs sb, ip, #0x10000 @ 0200a6ec
    cmp r0, #0 @ 0200a6f0
    orr fp, r3, lr, lsr #15 @ 0200a6f4
    beq .L_0200aa28 @ 0200a6f8
    ldr r2, [pc, #0x390] @ 0200a6fc
    ldr r1, [r2, #0xc] @ 0200a700
    cmp r7, r1 @ 0200a704
    blo .L_0200aa30 @ 0200a708
    ldr r2, [pc, #0x384] @ 0200a70c
    ldrb r2, [r2] @ 0200a710
    cmp r2, #0 @ 0200a714
    movne r3, #0x280 @ 0200a718
    moveq r3, #0x200 @ 0200a71c
    add r3, r3, r1 @ 0200a720
    cmp r7, r3 @ 0200a724
    bhs .L_0200aa30 @ 0200a728
    cmp r2, #0 @ 0200a72c
    moveq r3, #0x200 @ 0200a730
    movne r3, #0x280 @ 0200a734
    add r3, r3, r1 @ 0200a738
    cmp ip, r3 @ 0200a73c
    movls r1, #0 @ 0200a740
    movhi r1, #1 @ 0200a744
    ldr r3, [pc, #0x34c] @ 0200a748
    mov r2, #1 @ 0200a74c
    strb r2, [r3] @ 0200a750
.L_0200a754:
    ldr r3, [pc, #0x344] @ 0200a754
    ldrh r2, [r3] @ 0200a758
    cmp r7, r2 @ 0200a75c
    beq .L_0200aa54 @ 0200a760
.L_0200a764:
    cmp r1, #0 @ 0200a764
    beq .L_0200a2e4 @ 0200a768
    ldr r3, [pc, #0x320] @ 0200a76c
    ldr r0, [sp, #0x24] @ 0200a770
    ldr ip, [r3] @ 0200a774
    cmp r0, ip @ 0200a778
    blo .L_0200a794 @ 0200a77c
    ldr r3, [pc, #0x31c] @ 0200a780
    ldr r2, [r3] @ 0200a784
    cmp r0, r2 @ 0200a788
    movlo r0, #1 @ 0200a78c
    blo .L_0200a7b4 @ 0200a790
.L_0200a794:
    cmp sb, ip @ 0200a794
    movls r0, #0 @ 0200a798
    bls .L_0200a7b4 @ 0200a79c
    ldr r3, [pc, #0x2fc] @ 0200a7a0
    ldr r2, [r3] @ 0200a7a4
    cmp sb, r2 @ 0200a7a8
    movhi r0, #0 @ 0200a7ac
    movls r0, #1 @ 0200a7b0
.L_0200a7b4:
    ldr r2, [pc, #0x2d8] @ 0200a7b4
    ldr r3, [sp, #0x24] @ 0200a7b8
    ldr r1, [r2, #4] @ 0200a7bc
    cmp r3, r1 @ 0200a7c0
    blo .L_0200a7e0 @ 0200a7c4
    ldr r3, [pc, #0x2d4] @ 0200a7c8
    ldr r2, [r3, #4] @ 0200a7cc
    ldr r3, [sp, #0x24] @ 0200a7d0
    cmp r3, r2 @ 0200a7d4
    movlo r7, #1 @ 0200a7d8
    blo .L_0200a800 @ 0200a7dc
.L_0200a7e0:
    cmp sb, r1 @ 0200a7e0
    movls r7, #0 @ 0200a7e4
    bls .L_0200a800 @ 0200a7e8
    ldr r3, [pc, #0x2b0] @ 0200a7ec
    ldr r2, [r3, #4] @ 0200a7f0
    cmp sb, r2 @ 0200a7f4
    movhi r7, #0 @ 0200a7f8
    movls r7, #1 @ 0200a7fc
.L_0200a800:
    cmp r0, #0 @ 0200a800
    moveq r4, r0 @ 0200a804
    beq .L_0200a884 @ 0200a808
    ldr r3, [pc, #0x294] @ 0200a80c
    ldr lr, [r3] @ 0200a810
    cmp r6, lr, lsr #1 @ 0200a814
    blo .L_0200a830 @ 0200a818
    ldr r3, [pc, #0x2c4] @ 0200a81c
    mov r2, #1 @ 0200a820
    cmp r7, #0 @ 0200a824
    str r2, [r3] @ 0200a828
    beq .L_0200aa28 @ 0200a82c
.L_0200a830:
    ldr r0, [sp, #0x24] @ 0200a830
    ldr r2, [sp, #0x10] @ 0200a834
    subs r1, r0, ip @ 0200a838
    ldrmi r1, [sp, #0x24] @ 0200a83c
    movpl r0, sl @ 0200a840
    rsbmi r3, r1, ip @ 0200a844
    bicmi r3, r3, #1 @ 0200a848
    addmi r0, sl, r3 @ 0200a84c
    rsb r3, ip, sb @ 0200a850
    movmi r1, #0 @ 0200a854
    ldr ip, [pc, #0x28c] @ 0200a858
    cmp lr, r3 @ 0200a85c
    movlo r3, lr @ 0200a860
    mov lr, pc @ 0200a864
    ldr pc, [ip] @ 0200a868
    ldr r0, [pc, #0x204] @ 0200a86c
    ldr r2, [pc, #0x214] @ 0200a870
    ldr r3, [r0] @ 0200a874
    mov r4, #1 @ 0200a878
    and r2, r3, r2 @ 0200a87c
    str r2, [sp, #0x24] @ 0200a880
.L_0200a884:
    cmp r7, #0 @ 0200a884
    beq .L_0200a910 @ 0200a888
    ldr r3, [pc, #0x214] @ 0200a88c
    ldr r1, [pc, #0x1dc] @ 0200a890
    ldr lr, [r3] @ 0200a894
    ldr r2, [r1] @ 0200a898
    cmp r2, lr, lsr #1 @ 0200a89c
    ldrhs r3, [pc, #0x240] @ 0200a8a0
    movhs r2, #1 @ 0200a8a4
    movhs r1, #0 @ 0200a8a8
    strhs r2, [r3, #4] @ 0200a8ac
    bhs .L_02009ee4 @ 0200a8b0
    ldr r2, [pc, #0x1d8] @ 0200a8b4
    ldr r3, [sp, #0x24] @ 0200a8b8
    ldr ip, [r2, #4] @ 0200a8bc
    ldr r2, [sp, #0x10] @ 0200a8c0
    subs r1, r3, ip @ 0200a8c4
    ldrmi r0, [sp, #0x24] @ 0200a8c8
    movmi r1, #0 @ 0200a8cc
    rsbmi r3, r0, ip @ 0200a8d0
    bicmi r3, r3, #1 @ 0200a8d4
    addmi r0, sl, r3 @ 0200a8d8
    rsb r3, ip, sb @ 0200a8dc
    movpl r0, sl @ 0200a8e0
    ldr ip, [pc, #0x204] @ 0200a8e4
    cmp lr, r3 @ 0200a8e8
    movlo r3, lr @ 0200a8ec
    mov lr, pc @ 0200a8f0
    ldr pc, [ip] @ 0200a8f4
    ldr r2, [pc, #0x178] @ 0200a8f8
    ldr r1, [pc, #0x188] @ 0200a8fc
    ldr r3, [r2] @ 0200a900
    mov r4, #1 @ 0200a904
    and r1, r3, r1 @ 0200a908
    str r1, [sp, #0x24] @ 0200a90c
.L_0200a910:
    ldr r3, [pc, #0x17c] @ 0200a910
    ldr r1, [sp, #0x24] @ 0200a914
    ldr r0, [r3, #8] @ 0200a918
    cmp r1, r0 @ 0200a91c
    blo .L_0200a978 @ 0200a920
    ldr r3, [pc, #0x178] @ 0200a924
    ldr r2, [r3, #8] @ 0200a928
    cmp r1, r2 @ 0200a92c
    bhs .L_0200a978 @ 0200a930
    ldr r2, [pc, #0x138] @ 0200a934
    rsb r1, r0, r1 @ 0200a938
    ldr r3, [r2] @ 0200a93c
    lsl r1, r1, #0x10 @ 0200a940
    lsl r3, r3, #0x10 @ 0200a944
    lsr r1, r1, #0x10 @ 0200a948
    lsr r3, r3, #0x10 @ 0200a94c
    mov r0, sl @ 0200a950
    ldr r2, [sp, #0x10] @ 0200a954
    ldr ip, [pc, #0x194] @ 0200a958
    mov lr, pc @ 0200a95c
    ldr pc, [ip] @ 0200a960
    ldr r0, [pc, #0x10c] @ 0200a964
    ldr r1, [pc, #0x11c] @ 0200a968
    ldr r3, [r0] @ 0200a96c
    and r1, r3, r1 @ 0200a970
    str r1, [sp, #0x24] @ 0200a974
.L_0200a978:
    cmp r4, #0 @ 0200a978
    bne .L_0200a2e4 @ 0200a97c
    ldr r2, [pc, #0xec] @ 0200a980
    ldr r3, [r2] @ 0200a984
    lsl r3, r3, #0x10 @ 0200a988
    lsr r5, r3, #0x10 @ 0200a98c
    ldr r3, [sp, #0xc] @ 0200a990
    cmp r3, r5 @ 0200a994
    bne .L_0200a9c8 @ 0200a998
    b .L_0200a9e8 @ 0200a99c
.L_0200a9a0:
    ldr r1, [sp, #0x24] @ 0200a9a0
    ldr r3, [sp, #0x20] @ 0200a9a4
    add r2, r1, r3 @ 0200a9a8
    sub r3, r5, #1 @ 0200a9ac
    lsl r2, r2, #0x10 @ 0200a9b0
    lsl r3, r3, #0x10 @ 0200a9b4
    lsr r2, r2, #0x10 @ 0200a9b8
    lsrs r5, r3, #0x10 @ 0200a9bc
    str r2, [sp, #0x24] @ 0200a9c0
    beq .L_0200a2e4 @ 0200a9c4
.L_0200a9c8:
    ldr r2, [pc, #0x114] @ 0200a9c8
    ldr r0, [sp, #0x24] @ 0200a9cc
    ldrh r1, [sl], #2 @ 0200a9d0
    ldrb r3, [r2, r0, lsr #1] @ 0200a9d4
    cmp r3, #0 @ 0200a9d8
    beq .L_0200a9a0 @ 0200a9dc
    bl .L_020076d0 @ 0200a9e0
    b .L_0200a9a0 @ 0200a9e4
.L_0200a9e8:
    ldr r0, [sp, #0x24] @ 0200a9e8
    ldrh r1, [sl], #2 @ 0200a9ec
    bl .L_020076d0 @ 0200a9f0
    ldr r0, [sp, #0x24] @ 0200a9f4
    ldr r1, [sp, #0x20] @ 0200a9f8
    sub r3, r5, #1 @ 0200a9fc
    add r2, r0, r1 @ 0200aa00
    lsl r3, r3, #0x10 @ 0200aa04
    lsl r2, r2, #0x10 @ 0200aa08
    lsr r2, r2, #0x10 @ 0200aa0c
    lsrs r5, r3, #0x10 @ 0200aa10
    str r2, [sp, #0x24] @ 0200aa14
    bne .L_0200a9e8 @ 0200aa18
    b .L_0200a2e4 @ 0200aa1c
.L_0200aa20:
    mov r1, #1 @ 0200aa20
    b .L_0200a040 @ 0200aa24
.L_0200aa28:
    mov r1, #0 @ 0200aa28
    b .L_02009ee4 @ 0200aa2c
.L_0200aa30:
    mov r1, #1 @ 0200aa30
    b .L_0200a754 @ 0200aa34
.L_0200aa38:
    mov r7, #0 @ 0200aa38
    b .L_0200a108 @ 0200aa3c
.L_0200aa40:
    ldr r3, [pc, #0x70] @ 0200aa40
    ldrh r2, [r3] @ 0200aa44
    cmp r2, lr @ 0200aa48
    bhi .L_0200a2e4 @ 0200aa4c
    b .L_0200a050 @ 0200aa50
.L_0200aa54:
    ldr r3, [pc, #0x5c] @ 0200aa54
    ldrh r2, [r3] @ 0200aa58
    cmp r2, ip @ 0200aa5c
    bhs .L_0200a2e4 @ 0200aa60
    b .L_0200a764 @ 0200aa64
    .byte 0xfc, 0x4b, 0x0b, 0x02, 0x05, 0x4c, 0x0b, 0x02, 0xff, 0xff, 0x00, 0x00, 0x00, 0x4c, 0x0b, 0x02 @ 0200aa68
    .byte 0x38, 0x36, 0x00, 0x0b, 0x4c, 0x36, 0x00, 0x0b, 0x34, 0x36, 0x00, 0x0b, 0x30, 0x36, 0x00, 0x0b @ 0200aa78
    .byte 0x3c, 0x36, 0x00, 0x0b, 0xfe, 0xff, 0x00, 0x00, 0xec, 0xcb, 0x09, 0x02, 0xa0, 0xde, 0x3d, 0x02 @ 0200aa88
    .byte 0x05, 0xdb, 0x3d, 0x02, 0x15, 0x4c, 0x0b, 0x02, 0xa4, 0xce, 0x3d, 0x02, 0xb4, 0xc8, 0x3d, 0x02 @ 0200aa98
    .byte 0xa0, 0xc8, 0x3d, 0x02, 0x9c, 0xc6, 0x3d, 0x02, 0xa8, 0xc5, 0x3d, 0x02, 0xf3, 0x4b, 0x0b, 0x02 @ 0200aaa8
    .byte 0xaa, 0xcd, 0x3d, 0x02, 0xec, 0x4b, 0x0b, 0x02, 0xb0, 0xeb, 0x08, 0x02, 0xca, 0xc8, 0x3d, 0x02 @ 0200aab8
    .byte 0x54, 0xf3, 0x08, 0x02, 0xf7, 0x4b, 0x0b, 0x02, 0xb0, 0xc6, 0x3d, 0x02, 0xee, 0x0e, 0x00, 0x00 @ 0200aac8
    .byte 0x0c, 0xdb, 0x3d, 0x02, 0x30, 0xc7, 0x3d, 0x02, 0x00, 0x02, 0x00, 0x05, 0xec, 0xcb, 0x0a, 0x02 @ 0200aad8
    .byte 0xa4, 0xc8, 0x3d, 0x02, 0xac, 0xc6, 0x3d, 0x02, 0xa0, 0xc6, 0x3d, 0x02, 0xb8, 0xc5, 0x3d, 0x02 @ 0200aae8
.L_0200aaf8:
@ FUN_0200aaf8 at 0x0200aaf8
    push {r4, r5, r6, r7, r8, lr} @ 0200aaf8
    ldr r6, [pc, #0xd0] @ 0200aafc
    lsr r3, r0, #2 @ 0200ab00
    ldrb r5, [r6] @ 0200ab04
    lsl r2, r0, #0xe @ 0200ab08
    cmp r5, #0 @ 0200ab0c
    and lr, r3, #0x3c @ 0200ab10
    ldr r8, [pc, #0xbc] @ 0200ab14
    ldr r7, [pc, #0xbc] @ 0200ab18
    mov ip, r0 @ 0200ab1c
    and r4, r2, #0xc000 @ 0200ab20
    and r3, r0, #0xc000 @ 0200ab24
    beq .L_0200ab78 @ 0200ab28
    ldr r2, [r8] @ 0200ab2c
    ldr r3, [pc, #0xa8] @ 0200ab30
    ldr r1, [r7] @ 0200ab34
    ldrb r0, [r3] @ 0200ab38
    lsl r2, r2, #0x12 @ 0200ab3c
    and r1, r1, #3 @ 0200ab40
    lsr r2, r2, #0x12 @ 0200ab44
    orr r1, r1, lr @ 0200ab48
    orr r2, r2, r4 @ 0200ab4c
    mov r3, #0 @ 0200ab50
    cmp r0, #0 @ 0200ab54
    strb r3, [r6] @ 0200ab58
    str r2, [r8] @ 0200ab5c
    str r1, [r7] @ 0200ab60
    popeq {r4, r5, r6, r7, r8, pc} @ 0200ab64
    tst r1, #0x20 @ 0200ab68
    popeq {r4, r5, r6, r7, r8, pc} @ 0200ab6c
    pop {r4, r5, r6, r7, r8, lr} @ 0200ab70
    b .L_02009e3c @ 0200ab74
.L_0200ab78:
    and r1, r0, #0xff @ 0200ab78
    lsl lr, ip, #0x12 @ 0200ab7c
    lsr r0, r0, #8 @ 0200ab80
    cmp r3, #0x8000 @ 0200ab84
    and r0, r0, #0x1f @ 0200ab88
    ldr r4, [pc, #0x48] @ 0200ab8c
    ldr r7, [pc, #0x40] @ 0200ab90
    lsr lr, lr, #0x12 @ 0200ab94
    beq .L_0200abc8 @ 0200ab98
    ldr r3, [r4] @ 0200ab9c
    ldr r1, [r7] @ 0200aba0
    and r3, r3, #0x3c @ 0200aba4
    and r1, r1, #0xc000 @ 0200aba8
    orr r1, r1, lr @ 0200abac
    orr r3, r3, ip, lsr #14 @ 0200abb0
    mov r2, #1 @ 0200abb4
    strb r2, [r6] @ 0200abb8
    str r3, [r4] @ 0200abbc
    str r1, [r7] @ 0200abc0
    pop {r4, r5, r6, r7, r8, pc} @ 0200abc4
.L_0200abc8:
    str r5, [r4] @ 0200abc8
    pop {r4, r5, r6, r7, r8, lr} @ 0200abcc
    b .L_02009614 @ 0200abd0
    .byte 0xf5, 0x4b, 0x0b, 0x02, 0x38, 0x36, 0x00, 0x0b, 0x3c, 0x36, 0x00, 0x0b, 0xf2, 0x4b, 0x0b, 0x02 @ 0200abd4
    ldr r3, [pc, #0x80] @ 0200abe4
    push {r4, lr} @ 0200abe8
    ldrb r2, [r3] @ 0200abec
    mov r4, r0 @ 0200abf0
    cmp r2, #0 @ 0200abf4
    lsr r0, r0, #0x10 @ 0200abf8
    and ip, r4, #0xc0000000 @ 0200abfc
    bne .L_0200ac58 @ 0200ac00
    lsl r3, r4, #0xe @ 0200ac04
    lsr r2, r4, #2 @ 0200ac08
    and r2, r2, #0x3c @ 0200ac0c
    and r3, r3, #0xc000 @ 0200ac10
    lsl r1, r4, #2 @ 0200ac14
    cmp ip, #0x80000000 @ 0200ac18
    orr lr, r2, r4, lsr #30 @ 0200ac1c
    orr ip, r3, r1, lsr #18 @ 0200ac20
    beq .L_0200ac58 @ 0200ac24
    ldr r3, [pc, #0x40] @ 0200ac28
    ldr r2, [pc, #0x40] @ 0200ac2c
    ldrb r1, [r3] @ 0200ac30
    ldr r3, [pc, #0x3c] @ 0200ac34
    cmp r1, #0 @ 0200ac38
    str ip, [r2] @ 0200ac3c
    str lr, [r3] @ 0200ac40
    popeq {r4, pc} @ 0200ac44
    tst lr, #0x20 @ 0200ac48
    popeq {r4, pc} @ 0200ac4c
    pop {r4, lr} @ 0200ac50
    b .L_02009e3c @ 0200ac54
.L_0200ac58:
    bl .L_0200aaf8 @ 0200ac58
    lsl r0, r4, #0x10 @ 0200ac5c
    lsr r0, r0, #0x10 @ 0200ac60
    pop {r4, lr} @ 0200ac64
    b .L_0200aaf8 @ 0200ac68
    .byte 0xf5, 0x4b, 0x0b, 0x02, 0xf2, 0x4b, 0x0b, 0x02, 0x38, 0x36, 0x00, 0x0b, 0x3c, 0x36, 0x00, 0x0b @ 0200ac6c
.L_0200ac7c:
@ FUN_0200ac7c at 0x0200ac7c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 0200ac7c
    ldr ip, [pc, #0x54c] @ 0200ac80
    sub sp, sp, #4 @ 0200ac84
    ldrb r3, [ip] @ 0200ac88
    mov r4, r0 @ 0200ac8c
    cmp r3, #0 @ 0200ac90
    beq .L_0200acb0 @ 0200ac94
    ldr r3, [pc, #0x538] @ 0200ac98
    mov r2, #0 @ 0200ac9c
    ldrb r1, [r3] @ 0200aca0
    strb r2, [ip] @ 0200aca4
    cmp r1, r2 @ 0200aca8
    bne .L_0200aecc @ 0200acac
.L_0200acb0:
    ldr sb, [pc, #0x524] @ 0200acb0
    ldrb r3, [sb] @ 0200acb4
    cmp r3, #0 @ 0200acb8
    beq .L_0200ae64 @ 0200acbc
    ldr r2, [pc, #0x518] @ 0200acc0
    ldr fp, [pc, #0x518] @ 0200acc4
    ldr r3, [r2] @ 0200acc8
    ldr r2, [pc, #0x514] @ 0200accc
    tst r3, #1 @ 0200acd0
    ldr r6, [r2] @ 0200acd4
    lsl r3, r3, #0x10 @ 0200acd8
    lsr lr, r3, #0x10 @ 0200acdc
    ldreq r8, [pc, #0x504] @ 0200ace0
    ldrne r3, [pc, #0x504] @ 0200ace4
    ldr r1, [fp] @ 0200ace8
    ldrne r8, [pc, #0x4f8] @ 0200acec
    lsl r2, r6, #0x10 @ 0200acf0
    addeq r3, lr, r8 @ 0200acf4
    andne r3, lr, r3 @ 0200acf8
    lsl r1, r1, #0x10 @ 0200acfc
    and ip, r4, #0xff @ 0200ad00
    lsr r0, r4, #8 @ 0200ad04
    lsr r7, r2, #0x10 @ 0200ad08
    strbne ip, [r8, r3] @ 0200ad0c
    lsr r5, r1, #0x10 @ 0200ad10
    strbeq r0, [r8, lr] @ 0200ad14
    strbeq ip, [r3, #1] @ 0200ad18
    add r3, lr, r7 @ 0200ad1c
    strbne r0, [r8, lr] @ 0200ad20
    lsl r3, r3, #0x10 @ 0200ad24
    cmp r5, #0 @ 0200ad28
    lsr r1, r3, #0x10 @ 0200ad2c
    beq .L_0200b0c0 @ 0200ad30
    mov r3, r5 @ 0200ad34
.L_0200ad38:
    sub r3, r3, #1 @ 0200ad38
    add r2, r1, r7 @ 0200ad3c
    lsl r3, r3, #0x10 @ 0200ad40
    lsl r2, r2, #0x10 @ 0200ad44
    lsrs r3, r3, #0x10 @ 0200ad48
    strb ip, [r8, r1] @ 0200ad4c
    lsr r1, r2, #0x10 @ 0200ad50
    bne .L_0200ad38 @ 0200ad54
    ldr r3, [pc, #0x480] @ 0200ad58
    str r1, [r3] @ 0200ad5c
    ldr r3, [pc, #0x48c] @ 0200ad60
    cmp r5, r3 @ 0200ad64
    cmpeq ip, #0 @ 0200ad68
    ldrne r4, [pc, #0x47c] @ 0200ad6c
    andne r4, lr, r4 @ 0200ad70
    beq .L_0200b0d4 @ 0200ad74
.L_0200ad78:
    cmp r6, #1 @ 0200ad78
    ldreq sl, [pc, #0x474] @ 0200ad7c
    ldrne sl, [pc, #0x470] @ 0200ad80
    lsreq r5, r5, #1 @ 0200ad84
    moveq r7, #2 @ 0200ad88
.L_0200ad8c:
    ldr r1, [sl, #0xc] @ 0200ad8c
    cmp r4, r1 @ 0200ad90
    blo .L_0200adc4 @ 0200ad94
    ldr r2, [pc, #0x45c] @ 0200ad98
    ldrb r3, [r2] @ 0200ad9c
    cmp r3, #0 @ 0200ada0
    moveq r3, #0x200 @ 0200ada4
    movne r3, #0x280 @ 0200ada8
    add r3, r3, r1 @ 0200adac
    cmp r4, r3 @ 0200adb0
    ldrlo r3, [pc, #0x444] @ 0200adb4
    movlo r2, #1 @ 0200adb8
    strblo r2, [r3] @ 0200adbc
    blo .L_0200ae44 @ 0200adc0
.L_0200adc4:
    ldr r3, [pc, #0x438] @ 0200adc4
    ldrh r2, [r3] @ 0200adc8
    cmp r2, r4 @ 0200adcc
    bhi .L_0200ade4 @ 0200add0
    ldr r3, [pc, #0x42c] @ 0200add4
    ldrh r2, [r3] @ 0200add8
    cmp r2, r4 @ 0200addc
    bhi .L_0200ae44 @ 0200ade0
.L_0200ade4:
    ldr r1, [sl] @ 0200ade4
    cmp r4, r1 @ 0200ade8
    blo .L_0200ae00 @ 0200adec
    ldr r3, [pc, #0x414] @ 0200adf0
    ldr r2, [r3] @ 0200adf4
    cmp r4, r2 @ 0200adf8
    blo .L_0200aeac @ 0200adfc
.L_0200ae00:
    mov r6, #0 @ 0200ae00
.L_0200ae04:
    ldr r1, [sl, #4] @ 0200ae04
    cmp r4, r1 @ 0200ae08
    blo .L_0200ae20 @ 0200ae0c
    ldr r3, [pc, #0x3f4] @ 0200ae10
    ldr r2, [r3, #4] @ 0200ae14
    cmp r4, r2 @ 0200ae18
    blo .L_0200af18 @ 0200ae1c
.L_0200ae20:
    ldr r1, [sl, #8] @ 0200ae20
    cmp r4, r1 @ 0200ae24
    blo .L_0200ae3c @ 0200ae28
    ldr r3, [pc, #0x3d8] @ 0200ae2c
    ldr r2, [r3, #8] @ 0200ae30
    cmp r4, r2 @ 0200ae34
    blo .L_0200af38 @ 0200ae38
.L_0200ae3c:
    cmp r6, #0 @ 0200ae3c
    beq .L_0200aee4 @ 0200ae40
.L_0200ae44:
    sub r3, r5, #1 @ 0200ae44
    lsl r3, r3, #0x10 @ 0200ae48
    lsrs r5, r3, #0x10 @ 0200ae4c
    beq .L_0200af00 @ 0200ae50
.L_0200ae54:
    add r3, r4, r7 @ 0200ae54
    ldr r4, [pc, #0x390] @ 0200ae58
    and r4, r3, r4 @ 0200ae5c
    b .L_0200ad8c @ 0200ae60
.L_0200ae64:
    ldr r3, [pc, #0x3a4] @ 0200ae64
    ldr r2, [r3] @ 0200ae68
    and r2, r2, #0xf @ 0200ae6c
    cmp r2, #3 @ 0200ae70
    beq .L_0200af50 @ 0200ae74
    cmp r2, #5 @ 0200ae78
    beq .L_0200b0f0 @ 0200ae7c
    cmp r2, #1 @ 0200ae80
    beq .L_0200afdc @ 0200ae84
.L_0200ae88:
    ldr r2, [pc, #0x350] @ 0200ae88
    ldr r3, [r2] @ 0200ae8c
    ldr r2, [pc, #0x350] @ 0200ae90
    ldr r1, [r2] @ 0200ae94
    ldr r2, [pc, #0x340] @ 0200ae98
    add r3, r3, r1 @ 0200ae9c
    str r3, [r2] @ 0200aea0
.L_0200aea4:
    add sp, sp, #4 @ 0200aea4
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 0200aea8
.L_0200aeac:
    rsb r1, r1, r4 @ 0200aeac
    mov r0, #0 @ 0200aeb0
    ldrh r2, [r4, r8] @ 0200aeb4
    ldr r3, [pc, #0x354] @ 0200aeb8
    mov lr, pc @ 0200aebc
    ldr pc, [r3] @ 0200aec0
    mov r6, #1 @ 0200aec4
    b .L_0200ae04 @ 0200aec8
.L_0200aecc:
    ldr r3, [pc, #0x33c] @ 0200aecc
    ldr r2, [r3] @ 0200aed0
    tst r2, #0x20 @ 0200aed4
    beq .L_0200acb0 @ 0200aed8
    bl .L_02009e3c @ 0200aedc
    b .L_0200acb0 @ 0200aee0
.L_0200aee4:
    mov r0, r4 @ 0200aee4
    ldrh r1, [r4, r8] @ 0200aee8
    bl .L_020076d0 @ 0200aeec
    sub r3, r5, #1 @ 0200aef0
    lsl r3, r3, #0x10 @ 0200aef4
    lsrs r5, r3, #0x10 @ 0200aef8
    bne .L_0200ae54 @ 0200aefc
.L_0200af00:
    ldr r2, [pc, #0x310] @ 0200af00
    mov r3, #0 @ 0200af04
    str r3, [fp] @ 0200af08
    strb r3, [sb] @ 0200af0c
    str r3, [r2] @ 0200af10
    b .L_0200aea4 @ 0200af14
.L_0200af18:
    rsb r1, r1, r4 @ 0200af18
    mov r0, #1 @ 0200af1c
    ldrh r2, [r4, r8] @ 0200af20
    ldr r3, [pc, #0x2e8] @ 0200af24
    mov lr, pc @ 0200af28
    ldr pc, [r3] @ 0200af2c
    mov r6, #1 @ 0200af30
    b .L_0200ae20 @ 0200af34
.L_0200af38:
    rsb r0, r1, r4 @ 0200af38
    ldr r3, [pc, #0x2d8] @ 0200af3c
    ldrh r1, [r4, r8] @ 0200af40
    mov lr, pc @ 0200af44
    ldr pc, [r3] @ 0200af48
    b .L_0200ae3c @ 0200af4c
.L_0200af50:
    ldr r3, [pc, #0x288] @ 0200af50
    and r2, r4, #0xe0 @ 0200af54
    ldr r1, [r3] @ 0200af58
    lsl r2, r2, #2 @ 0200af5c
    and r1, r1, #0x7e @ 0200af60
    and r3, r4, #0xe00 @ 0200af64
    ldr r0, [pc, #0x2b0] @ 0200af68
    lsr r5, r1, #1 @ 0200af6c
    orr r2, r2, r3, lsl #3 @ 0200af70
    ldr r3, [pc, #0x2a8] @ 0200af74
    and r0, r4, r0 @ 0200af78
    orr r2, r2, #0x8000 @ 0200af7c
    lsl r6, r5, #1 @ 0200af80
    and r1, r4, #0xe @ 0200af84
    cmp r5, #0 @ 0200af88
    strh r0, [r6, r3] @ 0200af8c
    orr r2, r2, r1, lsl #1 @ 0200af90
    beq .L_0200afa8 @ 0200af94
    ldr r3, [pc, #0x288] @ 0200af98
    ldr r3, [r3] @ 0200af9c
    cmp r3, #0xde @ 0200afa0
    bls .L_0200b134 @ 0200afa4
.L_0200afa8:
    lsl r3, r2, #0x10 @ 0200afa8
    lsr lr, r3, #0x10 @ 0200afac
.L_0200afb0:
    ldr r3, [pc, #0x274] @ 0200afb0
    ldrb r2, [r3] @ 0200afb4
    ldr r3, [pc, #0x270] @ 0200afb8
    cmp r5, r2 @ 0200afbc
    strh lr, [r6, r3] @ 0200afc0
    ldr r3, [pc, #0x268] @ 0200afc4
    mov r2, #1 @ 0200afc8
    str r2, [r3] @ 0200afcc
    ldreq r3, [pc, #0x260] @ 0200afd0
    strheq lr, [r3] @ 0200afd4
    b .L_0200ae88 @ 0200afd8
.L_0200afdc:
    ldr r2, [pc, #0x1fc] @ 0200afdc
    ldr r5, [pc, #0x208] @ 0200afe0
    ldr r3, [r2] @ 0200afe4
    tst r3, #1 @ 0200afe8
    and r5, r3, r5 @ 0200afec
    beq .L_0200b11c @ 0200aff0
    lsr r0, r4, #8 @ 0200aff4
    ldr r2, [pc, #0x1ec] @ 0200aff8
    orr r3, r0, r4, lsl #8 @ 0200affc
    add r1, r5, r2 @ 0200b000
    lsl r3, r3, #0x10 @ 0200b004
    strb r0, [r2, r5] @ 0200b008
    strb r4, [r1, #1] @ 0200b00c
    lsr r4, r3, #0x10 @ 0200b010
.L_0200b014:
    ldr sl, [pc, #0x1dc] @ 0200b014
    ldr r1, [sl, #0xc] @ 0200b018
    cmp r5, r1 @ 0200b01c
    blo .L_0200b050 @ 0200b020
    ldr r2, [pc, #0x1d0] @ 0200b024
    ldrb r3, [r2] @ 0200b028
    cmp r3, #0 @ 0200b02c
    moveq r3, #0x200 @ 0200b030
    movne r3, #0x280 @ 0200b034
    add r3, r3, r1 @ 0200b038
    cmp r5, r3 @ 0200b03c
    ldrlo r3, [pc, #0x1b8] @ 0200b040
    movlo r2, #1 @ 0200b044
    strblo r2, [r3] @ 0200b048
    blo .L_0200ae88 @ 0200b04c
.L_0200b050:
    ldr r1, [sl] @ 0200b050
    cmp r5, r1 @ 0200b054
    blo .L_0200b06c @ 0200b058
    ldr r3, [pc, #0x1a8] @ 0200b05c
    ldr r2, [r3] @ 0200b060
    cmp r5, r2 @ 0200b064
    blo .L_0200b17c @ 0200b068
.L_0200b06c:
    mov r6, #0 @ 0200b06c
.L_0200b070:
    ldr r1, [sl, #4] @ 0200b070
    cmp r5, r1 @ 0200b074
    blo .L_0200b08c @ 0200b078
    ldr r3, [pc, #0x188] @ 0200b07c
    ldr r2, [r3, #4] @ 0200b080
    cmp r5, r2 @ 0200b084
    blo .L_0200b1b4 @ 0200b088
.L_0200b08c:
    ldr r1, [sl, #8] @ 0200b08c
    cmp r5, r1 @ 0200b090
    blo .L_0200b0a8 @ 0200b094
    ldr r3, [pc, #0x16c] @ 0200b098
    ldr r2, [r3, #8] @ 0200b09c
    cmp r5, r2 @ 0200b0a0
    blo .L_0200b19c @ 0200b0a4
.L_0200b0a8:
    cmp r6, #0 @ 0200b0a8
    bne .L_0200ae88 @ 0200b0ac
    mov r0, r5 @ 0200b0b0
    mov r1, r4 @ 0200b0b4
    bl .L_020076d0 @ 0200b0b8
    b .L_0200ae88 @ 0200b0bc
.L_0200b0c0:
    ldr r4, [pc, #0x128] @ 0200b0c0
    ldr r3, [pc, #0x114] @ 0200b0c4
    and r4, lr, r4 @ 0200b0c8
    str r1, [r3] @ 0200b0cc
    b .L_0200ad78 @ 0200b0d0
.L_0200b0d4:
    bl .L_02007420 @ 0200b0d4
    ldr r2, [pc, #0x138] @ 0200b0d8
    mov r3, #0 @ 0200b0dc
    str r3, [fp] @ 0200b0e0
    strb r3, [sb] @ 0200b0e4
    str r3, [r2] @ 0200b0e8
    b .L_0200aea4 @ 0200b0ec
.L_0200b0f0:
    ldr r2, [pc, #0xe8] @ 0200b0f0
    ldr r3, [r2] @ 0200b0f4
    and r2, r3, #0x7f @ 0200b0f8
    ldr r3, [pc, #0xdc] @ 0200b0fc
    cmp r2, #0x4f @ 0200b100
    str r2, [r3] @ 0200b104
    bhi .L_0200aea4 @ 0200b108
    ldr r3, [pc, #0x128] @ 0200b10c
    and r2, r2, #0x7e @ 0200b110
    strh r4, [r2, r3] @ 0200b114
    b .L_0200ae88 @ 0200b118
.L_0200b11c:
    ldr r2, [pc, #0xc8] @ 0200b11c
    ldrh r3, [r5, r2] @ 0200b120
    cmp r3, r4 @ 0200b124
    beq .L_0200ae88 @ 0200b128
    strh r4, [r5, r2] @ 0200b12c
    b .L_0200b014 @ 0200b130
.L_0200b134:
    ldr r1, [pc, #0x104] @ 0200b134
    ldr r0, [pc, #0x104] @ 0200b138
    ldrb ip, [r1, r3] @ 0200b13c
    cmp ip, #0xc8 @ 0200b140
    addeq r3, r3, r1 @ 0200b144
    ldrbeq r3, [r3, #-1] @ 0200b148
    movne r3, ip @ 0200b14c
    and ip, r3, #0xff @ 0200b150
    lsr r1, ip, #5 @ 0200b154
    lsl r3, r2, #0x10 @ 0200b158
    lsr lr, r3, #0x10 @ 0200b15c
    add r2, r5, r1, lsl #6 @ 0200b160
    ldr r3, [pc, #0xdc] @ 0200b164
    add r1, r0, r1, lsl #7 @ 0200b168
    lsl r2, r2, #1 @ 0200b16c
    str r1, [r3, ip, lsl #2] @ 0200b170
    strh lr, [r2, r0] @ 0200b174
    b .L_0200afb0 @ 0200b178
.L_0200b17c:
    rsb r1, r1, r5 @ 0200b17c
    mov r0, #0 @ 0200b180
    mov r2, r4 @ 0200b184
    ldr r3, [pc, #0x84] @ 0200b188
    mov lr, pc @ 0200b18c
    ldr pc, [r3] @ 0200b190
    mov r6, #1 @ 0200b194
    b .L_0200b070 @ 0200b198
.L_0200b19c:
    rsb r0, r1, r5 @ 0200b19c
    ldr r3, [pc, #0x74] @ 0200b1a0
    mov r1, r4 @ 0200b1a4
    mov lr, pc @ 0200b1a8
    ldr pc, [r3] @ 0200b1ac
    b .L_0200b0a8 @ 0200b1b0
.L_0200b1b4:
    rsb r1, r1, r5 @ 0200b1b4
    mov r0, #1 @ 0200b1b8
    mov r2, r4 @ 0200b1bc
    ldr r3, [pc, #0x4c] @ 0200b1c0
    mov lr, pc @ 0200b1c4
    ldr pc, [r3] @ 0200b1c8
    mov r6, #1 @ 0200b1cc
    b .L_0200b08c @ 0200b1d0
    .byte 0xf5, 0x4b, 0x0b, 0x02, 0xf2, 0x4b, 0x0b, 0x02, 0xf3, 0x4b, 0x0b, 0x02, 0x38, 0x36, 0x00, 0x0b @ 0200b1d4
    .byte 0x00, 0x4c, 0x0b, 0x02, 0x30, 0x36, 0x00, 0x0b, 0xec, 0xcb, 0x09, 0x02, 0xfe, 0xff, 0x00, 0x00 @ 0200b1e4
    .byte 0xff, 0xff, 0x00, 0x00, 0xa0, 0xde, 0x3d, 0x02, 0x05, 0xdb, 0x3d, 0x02, 0x15, 0x4c, 0x0b, 0x02 @ 0200b1f4
    .byte 0xa4, 0xce, 0x3d, 0x02, 0xaa, 0xcd, 0x3d, 0x02, 0xb4, 0xc8, 0x3d, 0x02, 0x3c, 0x36, 0x00, 0x0b @ 0200b204
    .byte 0x9c, 0xc6, 0x3d, 0x02, 0xfc, 0x4b, 0x0b, 0x02, 0xa8, 0xc5, 0x3d, 0x02, 0xee, 0x0e, 0x00, 0x00 @ 0200b214
    .byte 0xb0, 0xc6, 0x3d, 0x02, 0xec, 0x4b, 0x0b, 0x02, 0xf7, 0x4b, 0x0b, 0x02, 0x30, 0xc7, 0x3d, 0x02 @ 0200b224
    .byte 0x54, 0xf3, 0x08, 0x02, 0x00, 0x02, 0x00, 0x05, 0x4c, 0x36, 0x00, 0x0b, 0xb0, 0xeb, 0x08, 0x02 @ 0200b234
    .byte 0xca, 0xc8, 0x3d, 0x02, 0x0c, 0xdb, 0x3d, 0x02 @ 0200b244
    push {r4, lr} @ 0200b24c
    mov r4, r0 @ 0200b250
    lsr r0, r0, #0x10 @ 0200b254
    bl .L_0200ac7c @ 0200b258
    lsl r4, r4, #0x10 @ 0200b25c
    lsr r0, r4, #0x10 @ 0200b260
    pop {r4, lr} @ 0200b264
    b .L_0200ac7c @ 0200b268
.L_0200b26c:
    tst r0, #0x1c @ 0200b26c
    mov r0, r1 @ 0200b270
    beq .L_0200b27c @ 0200b274
    b .L_0200aaf8 @ 0200b278
.L_0200b27c:
    mov r0, r1 @ 0200b27c
    b .L_0200ac7c @ 0200b280
.L_0200b284:
@ FUN_0200b284 at 0x0200b284
    push {r4, r5, lr} @ 0200b284
    ldr r3, [pc, #0xac] @ 0200b288
    ldr r4, [pc, #0xac] @ 0200b28c
    ldrb r2, [r3] @ 0200b290
    sub sp, sp, #4 @ 0200b294
    cmp r2, #0 @ 0200b298
    str r0, [r4] @ 0200b29c
    beq .L_0200b2b4 @ 0200b2a0
    ldr r3, [pc, #0x98] @ 0200b2a4
    ldrb r2, [r3] @ 0200b2a8
    cmp r2, #0 @ 0200b2ac
    bne .L_0200b310 @ 0200b2b0
.L_0200b2b4:
    ldr r3, [pc, #0x8c] @ 0200b2b4
    ldrb r2, [r3] @ 0200b2b8
    cmp r2, #0 @ 0200b2bc
    beq .L_0200b308 @ 0200b2c0
    ldr r3, [pc, #0x80] @ 0200b2c4
    ldrb r2, [r3] @ 0200b2c8
    cmp r2, #0 @ 0200b2cc
    beq .L_0200b308 @ 0200b2d0
    ldr r1, [r4] @ 0200b2d4
    cmp r1, #0x8e @ 0200b2d8
    bhi .L_0200b2f8 @ 0200b2dc
    ldr r3, [pc, #0x5c] @ 0200b2e0
    ldrb r2, [r3] @ 0200b2e4
    cmp r2, #0 @ 0200b2e8
    bne .L_0200b308 @ 0200b2ec
    cmp r1, #0xc @ 0200b2f0
    bls .L_0200b308 @ 0200b2f4
.L_0200b2f8:
    mov r0, #6 @ 0200b2f8
    add sp, sp, #4 @ 0200b2fc
    pop {r4, r5, lr} @ 0200b300
    b .L_020004e0 @ 0200b304
.L_0200b308:
    add sp, sp, #4 @ 0200b308
    pop {r4, r5, pc} @ 0200b30c
.L_0200b310:
    ldr r5, [pc, #0x38] @ 0200b310
    ldr r3, [r5] @ 0200b314
    cmp r3, #0 @ 0200b318
    bne .L_0200b2b4 @ 0200b31c
    cmp r0, #0x22 @ 0200b320
    bls .L_0200b2b4 @ 0200b324
    mov r0, #4 @ 0200b328
    bl .L_020004e0 @ 0200b32c
    mov r3, #1 @ 0200b330
    str r3, [r5] @ 0200b334
    b .L_0200b2b4 @ 0200b338
    .byte 0x44, 0x36, 0x00, 0x0b, 0x24, 0x36, 0x00, 0x0b, 0x2d, 0x36, 0x00, 0x0b, 0x2c, 0x36, 0x00, 0x0b @ 0200b33c
    .byte 0x2e, 0x36, 0x00, 0x0b, 0x28, 0x36, 0x00, 0x0b, 0x74, 0x30, 0x9f, 0xe5, 0x10, 0x40, 0x2d, 0xe9 @ 0200b34c
    .byte 0x00, 0x20, 0xd3, 0xe5, 0x6c, 0x30, 0x9f, 0xe5, 0x00, 0x00, 0x52, 0xe3, 0x00, 0x00, 0x83, 0xe5 @ 0200b35c
    .byte 0x04, 0x00, 0x00, 0x0a, 0x60, 0x30, 0x9f, 0xe5, 0x60, 0x40, 0x9f, 0xe5, 0x00, 0x20, 0xd3, 0xe5 @ 0200b36c
    .byte 0x00, 0x00, 0x52, 0xe3, 0x0a, 0x00, 0x00, 0x1a, 0x54, 0x30, 0x9f, 0xe5, 0x00, 0x20, 0xd3, 0xe5 @ 0200b37c
    .byte 0x00, 0x00, 0x52, 0xe3, 0x10, 0x80, 0xbd, 0x08, 0x48, 0x30, 0x9f, 0xe5, 0x06, 0x00, 0xa0, 0xe3 @ 0200b38c
    .byte 0x00, 0x20, 0xd3, 0xe5, 0x00, 0x00, 0x52, 0xe3, 0x10, 0x80, 0xbd, 0x08, 0x10, 0x40, 0xbd, 0xe8 @ 0200b39c
    .byte 0x4b, 0xd4, 0xff, 0xea, 0x00, 0x30, 0x94, 0xe5, 0x04, 0x00, 0xa0, 0xe3, 0x00, 0x00, 0x53, 0xe3 @ 0200b3ac
    .byte 0xf0, 0xff, 0xff, 0x1a, 0x46, 0xd4, 0xff, 0xeb, 0x01, 0x30, 0xa0, 0xe3, 0x00, 0x30, 0x84, 0xe5 @ 0200b3bc
    .byte 0xec, 0xff, 0xff, 0xea, 0x44, 0x36, 0x00, 0x0b, 0x24, 0x36, 0x00, 0x0b, 0x2d, 0x36, 0x00, 0x0b @ 0200b3cc
    .byte 0x28, 0x36, 0x00, 0x0b, 0x2c, 0x36, 0x00, 0x0b, 0x2e, 0x36, 0x00, 0x0b, 0x38, 0x30, 0x9f, 0xe5 @ 0200b3dc
    .byte 0x00, 0x20, 0xd3, 0xe5, 0x34, 0x30, 0x9f, 0xe5, 0x00, 0x00, 0x52, 0xe3, 0x00, 0x00, 0x83, 0xe5 @ 0200b3ec
    .byte 0x1e, 0xff, 0x2f, 0x01, 0x28, 0x30, 0x9f, 0xe5, 0x00, 0x20, 0xd3, 0xe5, 0x00, 0x00, 0x52, 0xe3 @ 0200b3fc
    .byte 0x1e, 0xff, 0x2f, 0x01, 0x1c, 0x30, 0x9f, 0xe5, 0x06, 0x00, 0xa0, 0xe3, 0x00, 0x20, 0xd3, 0xe5 @ 0200b40c
    .byte 0x00, 0x00, 0x52, 0xe3, 0x1e, 0xff, 0x2f, 0x11, 0x2d, 0xd4, 0xff, 0xea, 0x2c, 0x36, 0x00, 0x0b @ 0200b41c
    .byte 0x24, 0x36, 0x00, 0x0b, 0x2e, 0x36, 0x00, 0x0b, 0x2d, 0x36, 0x00, 0x0b @ 0200b42c
.L_0200b438:
@ FUN_0200b438 at 0x0200b438
    ldr r0, [pc, #0x210] @ 0200b438
    ldr r3, [pc, #0x210] @ 0200b43c
    push {r4, r5, r6, r7, lr} @ 0200b440
    ldr r2, [r0, #0x98] @ 0200b444
    ldr r6, [pc, #0x208] @ 0200b448
    ldr r5, [pc, #0x208] @ 0200b44c
    ldrsh lr, [r3] @ 0200b450
    ldr r3, [pc, #0x204] @ 0200b454
    ldrh r1, [r5] @ 0200b458
    eor r2, r2, #0x10 @ 0200b45c
    ldrh ip, [r6] @ 0200b460
    str r2, [r0, #0x98] @ 0200b464
    str lr, [r3] @ 0200b468
    ldr r2, [pc, #0x1f0] @ 0200b46c
    ldr r3, [pc, #0x1f0] @ 0200b470
    cmp ip, r1 @ 0200b474
    mov r1, #0 @ 0200b478
    sub sp, sp, #4 @ 0200b47c
    str r1, [r2] @ 0200b480
    str r1, [r3] @ 0200b484
    str r1, [r0, #0x7c] @ 0200b488
    str r1, [r0, #0x8c] @ 0200b48c
    str r1, [r0, #0x90] @ 0200b490
    str r1, [r0, #0x94] @ 0200b494
    beq .L_0200b638 @ 0200b498
.L_0200b49c:
    ldr r3, [pc, #0x1c8] @ 0200b49c
    ldrb r0, [r3] @ 0200b4a0
    cmp r0, #0 @ 0200b4a4
    beq .L_0200b588 @ 0200b4a8
    mov r0, #1 @ 0200b4ac
    bl .L_020072a8 @ 0200b4b0
    ldr r3, [pc, #0x1b4] @ 0200b4b4
    ldr r7, [pc, #0x1b4] @ 0200b4b8
    ldr r0, [r3, #8] @ 0200b4bc
    mov r1, #0x1000 @ 0200b4c0
    add r0, r0, r7 @ 0200b4c4
    mov r2, #2 @ 0200b4c8
    bl .L_02007630 @ 0200b4cc
.L_0200b4d0:
    ldr r2, [pc, #0x1a0] @ 0200b4d0
    ldr r3, [pc, #0x1a0] @ 0200b4d4
    ldrh r2, [r2] @ 0200b4d8
    ldr r1, [pc, #0x19c] @ 0200b4dc
    ldr ip, [pc, #0x19c] @ 0200b4e0
    strh r2, [r3] @ 0200b4e4
    ldrh r1, [r1] @ 0200b4e8
    ldr r3, [pc, #0x194] @ 0200b4ec
    ldr r2, [pc, #0x194] @ 0200b4f0
    ldr r4, [ip] @ 0200b4f4
    strh r1, [r3] @ 0200b4f8
    ldrh r2, [r2] @ 0200b4fc
    ldr r3, [pc, #0x188] @ 0200b500
    ldrh r5, [r5] @ 0200b504
    cmp r4, #0 @ 0200b508
    strh r2, [r3] @ 0200b50c
    strh r5, [r6] @ 0200b510
    beq .L_0200b5ac @ 0200b514
    ldr r3, [pc, #0x174] @ 0200b518
    ldr r6, [pc, #0x14c] @ 0200b51c
    mov r4, #0 @ 0200b520
    ldr r0, [r3] @ 0200b524
    str r4, [ip] @ 0200b528
    bl .L_02006f2c @ 0200b52c
    ldr r5, [pc, #0x160] @ 0200b530
    ldr r0, [r6] @ 0200b534
    mov r2, r4 @ 0200b538
    add r0, r0, r7 @ 0200b53c
    ldr r1, [r5] @ 0200b540
    bl .L_02007630 @ 0200b544
    ldr r0, [r6, #4] @ 0200b548
    ldr r1, [r5] @ 0200b54c
    add r0, r0, r7 @ 0200b550
    mov r2, #1 @ 0200b554
    bl .L_02007630 @ 0200b558
.L_0200b55c:
    ldr r3, [pc, #0x138] @ 0200b55c
    ldr r4, [pc, #0x138] @ 0200b560
    ldrsh r1, [r3] @ 0200b564
    mov r3, #1 @ 0200b568
    strb r3, [r4] @ 0200b56c
    ldr r0, [pc, #0xfc] @ 0200b570
    bl .L_02008984 @ 0200b574
    mov r3, #0 @ 0200b578
    strb r3, [r4] @ 0200b57c
    add sp, sp, #4 @ 0200b580
    pop {r4, r5, r6, r7, pc} @ 0200b584
.L_0200b588:
    bl .L_020072a8 @ 0200b588
    ldr r3, [pc, #0xdc] @ 0200b58c
    ldr r7, [pc, #0xdc] @ 0200b590
    ldr r0, [r3, #8] @ 0200b594
    mov r1, #0x800 @ 0200b598
    add r0, r0, r7 @ 0200b59c
    mov r2, #2 @ 0200b5a0
    bl .L_02007630 @ 0200b5a4
    b .L_0200b4d0 @ 0200b5a8
.L_0200b5ac:
    mov r0, r4 @ 0200b5ac
    bl .L_020075ac @ 0200b5b0
    cmp r0, #0 @ 0200b5b4
    bne .L_0200b610 @ 0200b5b8
    ldr r5, [pc, #0xe0] @ 0200b5bc
    ldr r3, [r5] @ 0200b5c0
    cmp r3, #0 @ 0200b5c4
    bne .L_0200b614 @ 0200b5c8
.L_0200b5cc:
    mov r0, #1 @ 0200b5cc
    bl .L_020075ac @ 0200b5d0
    cmp r0, #0 @ 0200b5d4
    bne .L_0200b5e8 @ 0200b5d8
    ldr r3, [r5, #4] @ 0200b5dc
    cmp r3, #0 @ 0200b5e0
    beq .L_0200b55c @ 0200b5e4
.L_0200b5e8:
    ldr r3, [pc, #0x80] @ 0200b5e8
    ldr r2, [pc, #0xa4] @ 0200b5ec
    ldr r0, [r3, #4] @ 0200b5f0
    ldr r1, [r2] @ 0200b5f4
    add r0, r0, r7 @ 0200b5f8
    mov r2, #1 @ 0200b5fc
    bl .L_02007630 @ 0200b600
    mov r3, #0 @ 0200b604
    str r3, [r5, #4] @ 0200b608
    b .L_0200b55c @ 0200b60c
.L_0200b610:
    ldr r5, [pc, #0x8c] @ 0200b610
.L_0200b614:
    ldr r3, [pc, #0x54] @ 0200b614
    ldr r2, [pc, #0x78] @ 0200b618
    ldr r0, [r3] @ 0200b61c
    ldr r1, [r2] @ 0200b620
    add r0, r0, r7 @ 0200b624
    mov r2, #0 @ 0200b628
    bl .L_02007630 @ 0200b62c
    str r4, [r5] @ 0200b630
    b .L_0200b5cc @ 0200b634
.L_0200b638:
    mov r0, #2 @ 0200b638
    bl .L_020075ac @ 0200b63c
    cmp r0, #0 @ 0200b640
    ldreq r7, [pc, #0x28] @ 0200b644
    beq .L_0200b4d0 @ 0200b648
    b .L_0200b49c @ 0200b64c
    .byte 0x00, 0x00, 0x00, 0x0b, 0xf8, 0x4b, 0x0b, 0x02, 0xb0, 0xc8, 0x3d, 0x02, 0xc8, 0xc8, 0x3d, 0x02 @ 0200b650
    .byte 0x20, 0x36, 0x00, 0x0b, 0x24, 0x36, 0x00, 0x0b, 0x1c, 0x36, 0x00, 0x0b, 0x05, 0xdb, 0x3d, 0x02 @ 0200b660
    .byte 0xa0, 0xde, 0x3d, 0x02, 0xec, 0xcb, 0x09, 0x02, 0xb2, 0xde, 0x3d, 0x02, 0xac, 0xce, 0x3d, 0x02 @ 0200b670
    .byte 0xae, 0xc8, 0x3d, 0x02, 0x58, 0xf3, 0x08, 0x02, 0xb2, 0xc8, 0x3d, 0x02, 0x70, 0xd3, 0x3d, 0x02 @ 0200b680
    .byte 0xac, 0xc8, 0x3d, 0x02, 0xa4, 0xcf, 0x3d, 0x02, 0xa0, 0xc8, 0x3d, 0x02, 0x0a, 0x4c, 0x0b, 0x02 @ 0200b690
    .byte 0x15, 0x4c, 0x0b, 0x02, 0xa4, 0xc8, 0x3d, 0x02 @ 0200b6a0
.L_0200b6a8:
@ FUN_0200b6a8 at 0x0200b6a8
    push {r4, r5, r6, lr} @ 0200b6a8
    ldr r4, [pc, #0x3fc] @ 0200b6ac
    mov r1, #0 @ 0200b6b0
    mov r3, r4 @ 0200b6b4
    add r2, r4, #0x10000 @ 0200b6b8
.L_0200b6bc:
    strb r1, [r3], #1 @ 0200b6bc
    cmp r3, r2 @ 0200b6c0
    bne .L_0200b6bc @ 0200b6c4
    ldr r5, [pc, #0x3e4] @ 0200b6c8
    mov r1, #0 @ 0200b6cc
    mov r3, r5 @ 0200b6d0
    add r2, r5, #0x8000 @ 0200b6d4
.L_0200b6d8:
    strb r1, [r3], #1 @ 0200b6d8
    cmp r3, r2 @ 0200b6dc
    bne .L_0200b6d8 @ 0200b6e0
    ldr r3, [pc, #0x3cc] @ 0200b6e4
    add r2, r3, #0x100 @ 0200b6e8
.L_0200b6ec:
    mov r0, #0 @ 0200b6ec
    strh r0, [r3], #2 @ 0200b6f0
    cmp r3, r2 @ 0200b6f4
    bne .L_0200b6ec @ 0200b6f8
    ldr r3, [pc, #0x3b8] @ 0200b6fc
    mov r1, #0 @ 0200b700
    add r2, r3, #0xa0 @ 0200b704
.L_0200b708:
    mov r6, #0 @ 0200b708
    strh r6, [r3], #2 @ 0200b70c
    cmp r3, r2 @ 0200b710
    bne .L_0200b708 @ 0200b714
    ldr r3, [pc, #0x3a0] @ 0200b718
    ldr r2, [pc, #0x3a0] @ 0200b71c
    str r1, [r3, #0xc] @ 0200b720
    str r1, [r3] @ 0200b724
    str r1, [r3, #4] @ 0200b728
    str r1, [r3, #8] @ 0200b72c
    add r3, r2, #0x20 @ 0200b730
.L_0200b734:
    strb r1, [r2], #1 @ 0200b734
    cmp r2, r3 @ 0200b738
    bne .L_0200b734 @ 0200b73c
    ldr r0, [pc, #0x380] @ 0200b740
    ldr ip, [pc, #0x380] @ 0200b744
    add lr, r0, #0x80 @ 0200b748
    mov r3, #0x8000 @ 0200b74c
    add r1, r0, #0x200 @ 0200b750
    mov r2, lr @ 0200b754
.L_0200b758:
    add r0, r0, #2 @ 0200b758
    cmp r0, lr @ 0200b75c
    strh r3, [r2, #-0x80] @ 0200b760
    strh r3, [r2] @ 0200b764
    strh r3, [r2, #0x80] @ 0200b768
    strh r3, [ip], #2 @ 0200b76c
    strh r3, [r1, #-0x80] @ 0200b770
    strh r3, [r1] @ 0200b774
    strh r3, [r1, #0x80] @ 0200b778
    add r2, r2, #2 @ 0200b77c
    add r1, r1, #2 @ 0200b780
    bne .L_0200b758 @ 0200b784
    ldr r3, [pc, #0x340] @ 0200b788
    mov r0, #0 @ 0200b78c
    add r2, r3, #0x380 @ 0200b790
.L_0200b794:
    str r0, [r3], #4 @ 0200b794
    cmp r3, r2 @ 0200b798
    bne .L_0200b794 @ 0200b79c
    ldr r3, [pc, #0x32c] @ 0200b7a0
    ldr r2, [pc, #0x32c] @ 0200b7a4
    str r0, [r3, #4] @ 0200b7a8
    str r0, [r3] @ 0200b7ac
    mov r6, r0 @ 0200b7b0
    add r3, r2, #8 @ 0200b7b4
.L_0200b7b8:
    strb r6, [r2], #1 @ 0200b7b8
    cmp r2, r3 @ 0200b7bc
    bne .L_0200b7b8 @ 0200b7c0
    ldr r3, [pc, #0x310] @ 0200b7c4
    mov r2, #0x200 @ 0200b7c8
    str r2, [r3, #0x84] @ 0200b7cc
    ldr r2, [pc, #0x308] @ 0200b7d0
    mov r1, #0x10 @ 0200b7d4
    strb r6, [r2] @ 0200b7d8
    ldr r2, [pc, #0x300] @ 0200b7dc
    str r1, [r3, #0x98] @ 0200b7e0
    strb r6, [r2] @ 0200b7e4
    ldr r1, [pc, #0x2f8] @ 0200b7e8
    ldr r2, [pc, #0x2f8] @ 0200b7ec
    strb r6, [r1] @ 0200b7f0
    strb r6, [r2] @ 0200b7f4
    ldr r1, [pc, #0x2f0] @ 0200b7f8
    ldr r2, [pc, #0x2f0] @ 0200b7fc
    strb r6, [r1] @ 0200b800
    strb r6, [r2] @ 0200b804
    ldr r1, [pc, #0x2e8] @ 0200b808
    ldr r2, [pc, #0x2e8] @ 0200b80c
    strb r6, [r1] @ 0200b810
    strb r6, [r2] @ 0200b814
    ldr r1, [pc, #0x2e0] @ 0200b818
    ldr r2, [pc, #0x2e0] @ 0200b81c
    str r4, [r3, #0x74] @ 0200b820
    str r6, [r3, #0xa0] @ 0200b824
    str r6, [r3, #0x44] @ 0200b828
    str r6, [r3, #0x54] @ 0200b82c
    str r6, [r3, #0x64] @ 0200b830
    str r6, [r3, #0x48] @ 0200b834
    str r6, [r3, #0x58] @ 0200b838
    str r6, [r3, #0x68] @ 0200b83c
    str r6, [r3, #0x4c] @ 0200b840
    str r6, [r3, #0x5c] @ 0200b844
    str r6, [r3, #0x6c] @ 0200b848
    str r6, [r3, #0x50] @ 0200b84c
    str r6, [r3, #0x60] @ 0200b850
    str r6, [r3, #0x70] @ 0200b854
    str r6, [r3, #0x78] @ 0200b858
    str r6, [r3, #0x7c] @ 0200b85c
    str r6, [r3, #0x80] @ 0200b860
    str r6, [r3, #0x88] @ 0200b864
    str r6, [r3, #0x8c] @ 0200b868
    str r6, [r3, #0x90] @ 0200b86c
    str r6, [r3, #0x94] @ 0200b870
    str r6, [r3, #0x9c] @ 0200b874
    ldr r3, [pc, #0x288] @ 0200b878
    strb r6, [r1] @ 0200b87c
    strb r6, [r2] @ 0200b880
    mov r1, #2 @ 0200b884
    ldr r2, [pc, #0x27c] @ 0200b888
    str r1, [r3] @ 0200b88c
    ldr r3, [pc, #0x278] @ 0200b890
    strb r6, [r2] @ 0200b894
    ldr r2, [pc, #0x274] @ 0200b898
    strb r6, [r3] @ 0200b89c
    ldr r3, [pc, #0x270] @ 0200b8a0
    strb r6, [r2] @ 0200b8a4
    ldr r2, [pc, #0x26c] @ 0200b8a8
    strb r6, [r3] @ 0200b8ac
    ldr r3, [pc, #0x268] @ 0200b8b0
    strb r6, [r2] @ 0200b8b4
    ldr r2, [pc, #0x264] @ 0200b8b8
    strb r6, [r3] @ 0200b8bc
    ldr r3, [pc, #0x260] @ 0200b8c0
    strb r6, [r2] @ 0200b8c4
    ldr r2, [pc, #0x25c] @ 0200b8c8
    strb r6, [r3] @ 0200b8cc
    ldr r3, [pc, #0x258] @ 0200b8d0
    strb r6, [r2] @ 0200b8d4
    ldr r2, [pc, #0x254] @ 0200b8d8
    str r6, [r3] @ 0200b8dc
    ldr r3, [pc, #0x250] @ 0200b8e0
    str r6, [r2] @ 0200b8e4
    ldr r2, [pc, #0x24c] @ 0200b8e8
    str r6, [r3] @ 0200b8ec
    ldr r3, [pc, #0x248] @ 0200b8f0
    strb r6, [r2] @ 0200b8f4
    ldr r2, [pc, #0x244] @ 0200b8f8
    strb r6, [r3] @ 0200b8fc
    ldr r3, [pc, #0x240] @ 0200b900
    strh r6, [r2] @ 0200b904
    ldr r2, [pc, #0x23c] @ 0200b908
    strh r6, [r3] @ 0200b90c
    ldr r3, [pc, #0x238] @ 0200b910
    strh r6, [r2] @ 0200b914
    ldr r2, [pc, #0x234] @ 0200b918
    strb r6, [r3] @ 0200b91c
    ldr r3, [pc, #0x230] @ 0200b920
    strb r6, [r2] @ 0200b924
    ldr r2, [pc, #0x22c] @ 0200b928
    strh r6, [r3] @ 0200b92c
    ldr r3, [pc, #0x228] @ 0200b930
    str r6, [r2] @ 0200b934
    ldr r2, [pc, #0x224] @ 0200b938
    mov r1, #0x140 @ 0200b93c
    strh r6, [r3] @ 0200b940
    ldr r3, [pc, #0x21c] @ 0200b944
    strh r1, [r2] @ 0200b948
    ldr r2, [pc, #0x218] @ 0200b94c
    strh r1, [r3] @ 0200b950
    mov r3, #0xf0 @ 0200b954
    strh r3, [r2] @ 0200b958
    ldr r3, [pc, #0x20c] @ 0200b95c
    mov r1, #0xf0 @ 0200b960
    strh r1, [r3] @ 0200b964
    ldr r2, [pc, #0x204] @ 0200b968
    ldr r3, [pc, #0x204] @ 0200b96c
    strh r6, [r2] @ 0200b970
    strh r6, [r3] @ 0200b974
    ldr r2, [pc, #0x1fc] @ 0200b978
    ldr r3, [pc, #0x1fc] @ 0200b97c
    str r6, [r2] @ 0200b980
    strh r6, [r3] @ 0200b984
    ldr r2, [pc, #0x1f4] @ 0200b988
    ldr r3, [pc, #0x1f4] @ 0200b98c
    strh r6, [r2] @ 0200b990
    strb r6, [r3] @ 0200b994
    ldr r2, [pc, #0x1ec] @ 0200b998
    ldr r3, [pc, #0x1ec] @ 0200b99c
    str r6, [r2] @ 0200b9a0
    strb r6, [r3] @ 0200b9a4
    ldr r2, [pc, #0x1e4] @ 0200b9a8
    ldr r3, [pc, #0x1e4] @ 0200b9ac
    str r5, [r2] @ 0200b9b0
    str r4, [r3] @ 0200b9b4
    ldr r2, [pc, #0x1dc] @ 0200b9b8
    ldr r3, [pc, #0x1dc] @ 0200b9bc
    str r4, [r2] @ 0200b9c0
    str r6, [r3] @ 0200b9c4
    bl .L_02008f7c @ 0200b9c8
    ldr r0, [pc, #0x1d0] @ 0200b9cc
    ldr ip, [pc, #0x1d0] @ 0200b9d0
    ldr r3, [pc, #0x1d0] @ 0200b9d4
    ldr r2, [pc, #0x1d0] @ 0200b9d8
    mov r1, #0x800 @ 0200b9dc
    ldr lr, [pc, #0x1cc] @ 0200b9e0
    ldr r5, [pc, #0x1cc] @ 0200b9e4
    ldr r4, [pc, #0x1cc] @ 0200b9e8
    str r1, [r3] @ 0200b9ec
    str r6, [r0, #4] @ 0200b9f0
    str r6, [r0] @ 0200b9f4
    str r6, [r2] @ 0200b9f8
    mov r0, r6 @ 0200b9fc
    add r1, ip, #0x1e0 @ 0200ba00
.L_0200ba04:
    mov r2, #0 @ 0200ba04
    strh r2, [ip] @ 0200ba08
    add r2, ip, #0x1e0 @ 0200ba0c
    add ip, ip, #2 @ 0200ba10
    mov r6, #0 @ 0200ba14
    add r3, lr, #0x1e0 @ 0200ba18
    cmp ip, r1 @ 0200ba1c
    strh r6, [lr] @ 0200ba20
    strh r6, [r2] @ 0200ba24
    strh r6, [r3] @ 0200ba28
    strb r0, [r5], #1 @ 0200ba2c
    strh r6, [r4], #2 @ 0200ba30
    add lr, lr, #2 @ 0200ba34
    bne .L_0200ba04 @ 0200ba38
    mov r3, #0 @ 0200ba3c
    ldr r0, [pc, #0x178] @ 0200ba40
    ldr r1, [pc, #0x178] @ 0200ba44
    mov r2, r3 @ 0200ba48
.L_0200ba4c:
    str r2, [r3, r0] @ 0200ba4c
    str r2, [r3, r1] @ 0200ba50
    add r3, r3, #4 @ 0200ba54
    cmp r3, #0x10 @ 0200ba58
    bne .L_0200ba4c @ 0200ba5c
    ldr r4, [pc, #0x160] @ 0200ba60
    mov r0, r2 @ 0200ba64
    mov lr, r2 @ 0200ba68
    strb r2, [r4] @ 0200ba6c
    b .L_0200ba98 @ 0200ba70
.L_0200ba74:
    ldr r3, [pc, #0x150] @ 0200ba74
    strb lr, [ip, #1]! @ 0200ba78
    umull r1, r2, r3, r0 @ 0200ba7c
    rsb r1, r2, r0 @ 0200ba80
    add r2, r2, r1, lsr #1 @ 0200ba84
    lsr r2, r2, #2 @ 0200ba88
    rsb r2, r2, r2, lsl #3 @ 0200ba8c
    cmp r0, r2 @ 0200ba90
    bne .L_0200baa0 @ 0200ba94
.L_0200ba98:
    add lr, lr, #1 @ 0200ba98
    add ip, r0, r4 @ 0200ba9c
.L_0200baa0:
    add r0, r0, #1 @ 0200baa0
    cmp r0, #0xef @ 0200baa4
    bls .L_0200ba74 @ 0200baa8
    pop {r4, r5, r6, pc} @ 0200baac
    .byte 0xec, 0xcb, 0x09, 0x02, 0xec, 0xcb, 0x0a, 0x02, 0xb0, 0xc6, 0x3d, 0x02, 0x4c, 0x36, 0x00, 0x0b @ 0200bab0
    .byte 0xa0, 0xde, 0x3d, 0x02, 0x18, 0x4c, 0x0b, 0x02, 0xca, 0xc8, 0x3d, 0x02, 0x30, 0xc7, 0x3d, 0x02 @ 0200bac0
    .byte 0x0c, 0xdb, 0x3d, 0x02, 0x8c, 0xde, 0x3d, 0x02, 0x95, 0xde, 0x3d, 0x02, 0x00, 0x00, 0x00, 0x0b @ 0200bad0
    .byte 0x14, 0x4c, 0x0b, 0x02, 0xf5, 0x4b, 0x0b, 0x02, 0xf4, 0x4b, 0x0b, 0x02, 0xf0, 0x4b, 0x0b, 0x02 @ 0200bae0
    .byte 0xf1, 0x4b, 0x0b, 0x02, 0x44, 0x36, 0x00, 0x0b, 0x2c, 0x36, 0x00, 0x0b, 0xb4, 0xde, 0x3d, 0x02 @ 0200baf0
    .byte 0x94, 0xde, 0x3d, 0x02, 0x05, 0xdb, 0x3d, 0x02, 0x30, 0x36, 0x00, 0x0b, 0x06, 0xdb, 0x3d, 0x02 @ 0200bb00
    .byte 0xf2, 0x4b, 0x0b, 0x02, 0x2f, 0x36, 0x00, 0x0b, 0x05, 0x4c, 0x0b, 0x02, 0x04, 0x4c, 0x0b, 0x02 @ 0200bb10
    .byte 0xb0, 0xcd, 0x3d, 0x02, 0xac, 0xcf, 0x3d, 0x02, 0xb0, 0xde, 0x3d, 0x02, 0x04, 0xdb, 0x3d, 0x02 @ 0200bb20
    .byte 0xfc, 0x4b, 0x0b, 0x02, 0x38, 0x36, 0x00, 0x0b, 0x34, 0x36, 0x00, 0x0b, 0xa6, 0xce, 0x3d, 0x02 @ 0200bb30
    .byte 0x72, 0xd3, 0x3d, 0x02, 0xaa, 0xcd, 0x3d, 0x02, 0xa4, 0xce, 0x3d, 0x02, 0xf8, 0x4b, 0x0b, 0x02 @ 0200bb40
    .byte 0xf7, 0x4b, 0x0b, 0x02, 0xf6, 0x4b, 0x0b, 0x02, 0x08, 0x4c, 0x0b, 0x02, 0x3c, 0x36, 0x00, 0x0b @ 0200bb50
    .byte 0x0a, 0x4c, 0x0b, 0x02, 0xae, 0xc8, 0x3d, 0x02, 0xb2, 0xc8, 0x3d, 0x02, 0x70, 0xd3, 0x3d, 0x02 @ 0200bb60
    .byte 0xac, 0xc8, 0x3d, 0x02, 0xc8, 0xc8, 0x3d, 0x02, 0xb0, 0xc8, 0x3d, 0x02, 0xa8, 0xcf, 0x3d, 0x02 @ 0200bb70
    .byte 0xac, 0xce, 0x3d, 0x02, 0x08, 0xdb, 0x3d, 0x02, 0x07, 0x4c, 0x0b, 0x02, 0x00, 0x4c, 0x0b, 0x02 @ 0200bb80
    .byte 0x06, 0x4c, 0x0b, 0x02, 0xb0, 0xce, 0x3d, 0x02, 0xac, 0xcd, 0x3d, 0x02, 0x48, 0x36, 0x00, 0x0b @ 0200bb90
    .byte 0xc4, 0xc8, 0x3d, 0x02, 0xa4, 0xc8, 0x3d, 0x02, 0x44, 0xd7, 0x3d, 0x02, 0xa0, 0xc8, 0x3d, 0x02 @ 0200bba0
    .byte 0xa4, 0xcf, 0x3d, 0x02, 0x84, 0xd3, 0x3d, 0x02, 0xb4, 0xce, 0x3d, 0x02, 0xca, 0xcb, 0x3d, 0x02 @ 0200bbb0
    .byte 0x74, 0xd3, 0x3d, 0x02, 0xb4, 0xc8, 0x3d, 0x02, 0xb4, 0xcd, 0x3d, 0x02, 0x25, 0x49, 0x92, 0x24 @ 0200bbc0
    ldr r3, [pc, #0x154] @ 0200bbd0
    push {r4, r5, r6, r7, r8, sl, lr} @ 0200bbd4
    ldrb ip, [r3, r0] @ 0200bbd8
    cmp ip, #0xc8 @ 0200bbdc
    popeq {r4, r5, r6, r7, r8, sl, pc} @ 0200bbe0
    ldr r3, [pc, #0x144] @ 0200bbe4
    ldr r2, [pc, #0x144] @ 0200bbe8
    ldrb r1, [r3] @ 0200bbec
    ldrb r3, [r2] @ 0200bbf0
    ldr r2, [pc, #0x13c] @ 0200bbf4
    lsl r1, r1, #1 @ 0200bbf8
    cmp r3, #0 @ 0200bbfc
    ldrh r1, [r1, r2] @ 0200bc00
    ldr r3, [pc, #0x130] @ 0200bc04
    lsl lr, ip, #1 @ 0200bc08
    strh r1, [lr, r3] @ 0200bc0c
    ldreq r3, [pc, #0x128] @ 0200bc10
    moveq r2, #1 @ 0200bc14
    strbeq r2, [r3, ip] @ 0200bc18
    popeq {r4, r5, r6, r7, r8, sl, pc} @ 0200bc1c
    ldr r3, [pc, #0x11c] @ 0200bc20
    mov r1, #0 @ 0200bc24
    ldrb r2, [r3] @ 0200bc28
    ldr r3, [pc, #0x10c] @ 0200bc2c
    cmp r2, #0 @ 0200bc30
    strb r1, [r3, ip] @ 0200bc34
    beq .L_0200bcbc @ 0200bc38
    ldr r3, [pc, #0x104] @ 0200bc3c
    ldr r2, [r3] @ 0200bc40
    cmp r0, r2 @ 0200bc44
    blo .L_0200bccc @ 0200bc48
.L_0200bc4c:
    ldr r3, [pc, #0xf8] @ 0200bc4c
    ldrb r4, [r3, ip] @ 0200bc50
.L_0200bc54:
    ldr r3, [pc, #0xf4] @ 0200bc54
    ldr r6, [pc, #0xf4] @ 0200bc58
    ldr r5, [pc, #0xf4] @ 0200bc5c
    mov r2, #1 @ 0200bc60
    strb r2, [r3, ip] @ 0200bc64
    ldr r8, [pc, #0xec] @ 0200bc68
    mov r3, #0 @ 0200bc6c
    ldr sl, [pc, #0xe8] @ 0200bc70
    ldr r7, [pc, #0xe8] @ 0200bc74
    strh r3, [lr, r6] @ 0200bc78
    strh r4, [lr, r5] @ 0200bc7c
.L_0200bc80:
    ldrh r3, [r8] @ 0200bc80
    ldrh r0, [r7, #2] @ 0200bc84
    add r3, r3, #2 @ 0200bc88
    bic r3, r3, #1 @ 0200bc8c
    ldrh r2, [r3, sl] @ 0200bc90
    add r1, lr, r5 @ 0200bc94
    add r3, lr, r6 @ 0200bc98
    bic r2, r2, #0xc000 @ 0200bc9c
    add r0, r4, r0 @ 0200bca0
    add r3, r3, #0x1e0 @ 0200bca4
    rsb r2, r2, #0 @ 0200bca8
    add r1, r1, #0x1e0 @ 0200bcac
    strh r2, [r3] @ 0200bcb0
    strh r0, [r1] @ 0200bcb4
    pop {r4, r5, r6, r7, r8, sl, pc} @ 0200bcb8
.L_0200bcbc:
    ldr r3, [pc, #0x84] @ 0200bcbc
    ldr r2, [r3] @ 0200bcc0
    cmp r0, r2 @ 0200bcc4
    blo .L_0200bc4c @ 0200bcc8
.L_0200bccc:
    ldr r3, [pc, #0x94] @ 0200bccc
    ldr r2, [pc, #0x74] @ 0200bcd0
    ldr r1, [r3] @ 0200bcd4
    ldrb r4, [r2, ip] @ 0200bcd8
    cmp r1, #0 @ 0200bcdc
    bne .L_0200bc54 @ 0200bce0
    ldr r8, [pc, #0x70] @ 0200bce4
    ldr sl, [pc, #0x70] @ 0200bce8
    ldrh r3, [r8] @ 0200bcec
    ldr r7, [pc, #0x6c] @ 0200bcf0
    bic r3, r3, #1 @ 0200bcf4
    ldrh r2, [r3, sl] @ 0200bcf8
    ldrh r0, [r7] @ 0200bcfc
    bic r2, r2, #0xc000 @ 0200bd00
    ldr r6, [pc, #0x48] @ 0200bd04
    ldr r5, [pc, #0x48] @ 0200bd08
    ldr r3, [pc, #0x3c] @ 0200bd0c
    rsb r2, r2, #0 @ 0200bd10
    add r0, r4, r0 @ 0200bd14
    mov r1, #0 @ 0200bd18
    strb r1, [r3, ip] @ 0200bd1c
    strh r2, [lr, r6] @ 0200bd20
    strh r0, [lr, r5] @ 0200bd24
    b .L_0200bc80 @ 0200bd28
    .byte 0xb0, 0xeb, 0x08, 0x02, 0xf7, 0x4b, 0x0b, 0x02, 0x2f, 0x36, 0x00, 0x0b, 0x30, 0xc7, 0x3d, 0x02 @ 0200bd2c
    .byte 0xca, 0xcb, 0x3d, 0x02, 0xb4, 0xce, 0x3d, 0x02, 0x94, 0xde, 0x3d, 0x02, 0x10, 0x4c, 0x0b, 0x02 @ 0200bd3c
    .byte 0xf0, 0xea, 0x08, 0x02, 0xb0, 0xc7, 0x3d, 0x02, 0x44, 0xd7, 0x3d, 0x02, 0x84, 0xd3, 0x3d, 0x02 @ 0200bd4c
    .byte 0xa4, 0xce, 0x3d, 0x02, 0xec, 0xcb, 0x09, 0x02, 0x4c, 0x36, 0x00, 0x0b, 0xa8, 0xcf, 0x3d, 0x02 @ 0200bd5c
    ldr r3, [pc, #0x164] @ 0200bd6c
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 0200bd70
    ldrb ip, [r3, r0] @ 0200bd74
    cmp ip, #0xc8 @ 0200bd78
    popeq {r4, r5, r6, r7, r8, sb, sl, pc} @ 0200bd7c
    ldr r3, [pc, #0x154] @ 0200bd80
    ldr r2, [pc, #0x154] @ 0200bd84
    ldrb r1, [r3] @ 0200bd88
    ldrb r3, [r2] @ 0200bd8c
    ldr r2, [pc, #0x14c] @ 0200bd90
    lsl r1, r1, #1 @ 0200bd94
    cmp r3, #0 @ 0200bd98
    ldrh r1, [r1, r2] @ 0200bd9c
    ldr r3, [pc, #0x140] @ 0200bda0
    lsl lr, ip, #1 @ 0200bda4
    strh r1, [lr, r3] @ 0200bda8
    ldreq r3, [pc, #0x138] @ 0200bdac
    moveq r2, #1 @ 0200bdb0
    strbeq r2, [r3, ip] @ 0200bdb4
    popeq {r4, r5, r6, r7, r8, sb, sl, pc} @ 0200bdb8
    ldr r3, [pc, #0x12c] @ 0200bdbc
    mov r1, #0 @ 0200bdc0
    ldrb r2, [r3] @ 0200bdc4
    ldr r3, [pc, #0x11c] @ 0200bdc8
    cmp r2, #0 @ 0200bdcc
    strb r1, [r3, ip] @ 0200bdd0
    beq .L_0200be60 @ 0200bdd4
    ldr r3, [pc, #0x114] @ 0200bdd8
    ldr r2, [r3] @ 0200bddc
    cmp r0, r2 @ 0200bde0
    blo .L_0200be70 @ 0200bde4
.L_0200bde8:
    ldr r3, [pc, #0x108] @ 0200bde8
    lsl r5, r0, #2 @ 0200bdec
    ldrb r4, [r3, ip] @ 0200bdf0
.L_0200bdf4:
    ldr r3, [pc, #0x100] @ 0200bdf4
    ldr r7, [pc, #0x100] @ 0200bdf8
    ldr r6, [pc, #0x100] @ 0200bdfc
    mov r2, #1 @ 0200be00
    strb r2, [r3, ip] @ 0200be04
    ldr sl, [pc, #0xf8] @ 0200be08
    mov r3, #0 @ 0200be0c
    ldr sb, [pc, #0xf4] @ 0200be10
    ldr r8, [pc, #0xf4] @ 0200be14
    strh r3, [lr, r7] @ 0200be18
    strh r4, [lr, r6] @ 0200be1c
.L_0200be20:
    ldrh r3, [sl] @ 0200be20
    ldrh r0, [r8, #2] @ 0200be24
    add r3, r3, #2 @ 0200be28
    add r3, r3, r5 @ 0200be2c
    bic r3, r3, #1 @ 0200be30
    ldrh r2, [r3, sb] @ 0200be34
    add r1, lr, r6 @ 0200be38
    add r3, lr, r7 @ 0200be3c
    bic r2, r2, #0xc000 @ 0200be40
    add r0, r4, r0 @ 0200be44
    add r3, r3, #0x1e0 @ 0200be48
    rsb r2, r2, #0 @ 0200be4c
    add r1, r1, #0x1e0 @ 0200be50
    strh r2, [r3] @ 0200be54
    strh r0, [r1] @ 0200be58
    pop {r4, r5, r6, r7, r8, sb, sl, pc} @ 0200be5c
.L_0200be60:
    ldr r3, [pc, #0x8c] @ 0200be60
    ldr r2, [r3] @ 0200be64
    cmp r0, r2 @ 0200be68
    blo .L_0200bde8 @ 0200be6c
.L_0200be70:
    ldr r3, [pc, #0x9c] @ 0200be70
    ldr r2, [pc, #0x7c] @ 0200be74
    ldr r1, [r3] @ 0200be78
    ldrb r4, [r2, ip] @ 0200be7c
    cmp r1, #0 @ 0200be80
    lsl r5, r0, #2 @ 0200be84
    bne .L_0200bdf4 @ 0200be88
    ldr sl, [pc, #0x74] @ 0200be8c
    ldr sb, [pc, #0x74] @ 0200be90
    ldrh r3, [sl] @ 0200be94
    ldr r8, [pc, #0x70] @ 0200be98
    add r3, r5, r3 @ 0200be9c
    bic r3, r3, #1 @ 0200bea0
    ldrh r2, [r3, sb] @ 0200bea4
    ldrh r0, [r8] @ 0200bea8
    bic r2, r2, #0xc000 @ 0200beac
    ldr r7, [pc, #0x48] @ 0200beb0
    ldr r6, [pc, #0x48] @ 0200beb4
    ldr r3, [pc, #0x3c] @ 0200beb8
    rsb r2, r2, #0 @ 0200bebc
    add r0, r4, r0 @ 0200bec0
    mov r1, #0 @ 0200bec4
    strb r1, [r3, ip] @ 0200bec8
    strh r2, [lr, r7] @ 0200becc
    strh r0, [lr, r6] @ 0200bed0
    b .L_0200be20 @ 0200bed4
    .byte 0xb0, 0xeb, 0x08, 0x02, 0xf7, 0x4b, 0x0b, 0x02, 0x2f, 0x36, 0x00, 0x0b, 0x30, 0xc7, 0x3d, 0x02 @ 0200bed8
    .byte 0xca, 0xcb, 0x3d, 0x02, 0xb4, 0xce, 0x3d, 0x02, 0x94, 0xde, 0x3d, 0x02, 0x10, 0x4c, 0x0b, 0x02 @ 0200bee8
    .byte 0xf0, 0xea, 0x08, 0x02, 0xb0, 0xc7, 0x3d, 0x02, 0x44, 0xd7, 0x3d, 0x02, 0x84, 0xd3, 0x3d, 0x02 @ 0200bef8
    .byte 0xa4, 0xce, 0x3d, 0x02, 0xec, 0xcb, 0x09, 0x02, 0x4c, 0x36, 0x00, 0x0b, 0xa8, 0xcf, 0x3d, 0x02 @ 0200bf08
    ldr r3, [pc, #0x16c] @ 0200bf18
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 0200bf1c
    ldrb ip, [r3, r0] @ 0200bf20
    cmp ip, #0xc8 @ 0200bf24
    popeq {r4, r5, r6, r7, r8, sb, sl, pc} @ 0200bf28
    ldr r3, [pc, #0x15c] @ 0200bf2c
    ldr r2, [pc, #0x15c] @ 0200bf30
    ldrb r1, [r3] @ 0200bf34
    ldrb r3, [r2] @ 0200bf38
    ldr r2, [pc, #0x154] @ 0200bf3c
    lsl r1, r1, #1 @ 0200bf40
    cmp r3, #0 @ 0200bf44
    ldrh r1, [r1, r2] @ 0200bf48
    ldr r3, [pc, #0x148] @ 0200bf4c
    lsl lr, ip, #1 @ 0200bf50
    strh r1, [lr, r3] @ 0200bf54
    ldreq r3, [pc, #0x140] @ 0200bf58
    moveq r2, #1 @ 0200bf5c
    strbeq r2, [r3, ip] @ 0200bf60
    popeq {r4, r5, r6, r7, r8, sb, sl, pc} @ 0200bf64
    ldr r3, [pc, #0x134] @ 0200bf68
    mov r1, #0 @ 0200bf6c
    ldrb r2, [r3] @ 0200bf70
    ldr r3, [pc, #0x124] @ 0200bf74
    cmp r2, #0 @ 0200bf78
    strb r1, [r3, ip] @ 0200bf7c
    beq .L_0200c010 @ 0200bf80
    ldr r3, [pc, #0x11c] @ 0200bf84
    ldr r2, [r3] @ 0200bf88
    cmp r0, r2 @ 0200bf8c
    blo .L_0200c020 @ 0200bf90
.L_0200bf94:
    ldr r3, [pc, #0x110] @ 0200bf94
    bic r2, r0, #7 @ 0200bf98
    ldrb r4, [r3, ip] @ 0200bf9c
    lsl r5, r2, #2 @ 0200bfa0
.L_0200bfa4:
    ldr r3, [pc, #0x104] @ 0200bfa4
    ldr r7, [pc, #0x104] @ 0200bfa8
    ldr r6, [pc, #0x104] @ 0200bfac
    mov r2, #1 @ 0200bfb0
    strb r2, [r3, ip] @ 0200bfb4
    ldr sl, [pc, #0xfc] @ 0200bfb8
    mov r3, #0 @ 0200bfbc
    ldr sb, [pc, #0xf8] @ 0200bfc0
    ldr r8, [pc, #0xf8] @ 0200bfc4
    strh r3, [lr, r7] @ 0200bfc8
    strh r4, [lr, r6] @ 0200bfcc
.L_0200bfd0:
    ldrh r3, [sl] @ 0200bfd0
    ldrh r0, [r8, #2] @ 0200bfd4
    add r3, r3, #2 @ 0200bfd8
    add r3, r3, r5 @ 0200bfdc
    bic r3, r3, #1 @ 0200bfe0
    ldrh r2, [r3, sb] @ 0200bfe4
    add r1, lr, r6 @ 0200bfe8
    add r3, lr, r7 @ 0200bfec
    bic r2, r2, #0xc000 @ 0200bff0
    add r0, r4, r0 @ 0200bff4
    add r3, r3, #0x1e0 @ 0200bff8
    rsb r2, r2, #0 @ 0200bffc
    add r1, r1, #0x1e0 @ 0200c000
    strh r2, [r3] @ 0200c004
    strh r0, [r1] @ 0200c008
    pop {r4, r5, r6, r7, r8, sb, sl, pc} @ 0200c00c
.L_0200c010:
    ldr r3, [pc, #0x90] @ 0200c010
    ldr r2, [r3] @ 0200c014
    cmp r0, r2 @ 0200c018
    blo .L_0200bf94 @ 0200c01c
.L_0200c020:
    ldr r3, [pc, #0xa0] @ 0200c020
    bic r1, r0, #7 @ 0200c024
    ldr r2, [r3] @ 0200c028
    ldr r3, [pc, #0x78] @ 0200c02c
    cmp r2, #0 @ 0200c030
    ldrb r4, [r3, ip] @ 0200c034
    lsl r5, r1, #2 @ 0200c038
    bne .L_0200bfa4 @ 0200c03c
    ldr sl, [pc, #0x74] @ 0200c040
    ldr sb, [pc, #0x74] @ 0200c044
    ldrh r3, [sl] @ 0200c048
    ldr r8, [pc, #0x70] @ 0200c04c
    add r3, r5, r3 @ 0200c050
    bic r3, r3, #1 @ 0200c054
    ldrh r2, [r3, sb] @ 0200c058
    ldrh r0, [r8] @ 0200c05c
    bic r2, r2, #0xc000 @ 0200c060
    ldr r7, [pc, #0x48] @ 0200c064
    ldr r6, [pc, #0x48] @ 0200c068
    ldr r3, [pc, #0x3c] @ 0200c06c
    rsb r2, r2, #0 @ 0200c070
    add r0, r4, r0 @ 0200c074
    mov r1, #0 @ 0200c078
    strb r1, [r3, ip] @ 0200c07c
    strh r2, [lr, r7] @ 0200c080
    strh r0, [lr, r6] @ 0200c084
    b .L_0200bfd0 @ 0200c088
    .byte 0xb0, 0xeb, 0x08, 0x02, 0xf7, 0x4b, 0x0b, 0x02, 0x2f, 0x36, 0x00, 0x0b, 0x30, 0xc7, 0x3d, 0x02 @ 0200c08c
    .byte 0xca, 0xcb, 0x3d, 0x02, 0xb4, 0xce, 0x3d, 0x02, 0x94, 0xde, 0x3d, 0x02, 0x10, 0x4c, 0x0b, 0x02 @ 0200c09c
    .byte 0xf0, 0xea, 0x08, 0x02, 0xb0, 0xc7, 0x3d, 0x02, 0x44, 0xd7, 0x3d, 0x02, 0x84, 0xd3, 0x3d, 0x02 @ 0200c0ac
    .byte 0xa4, 0xce, 0x3d, 0x02, 0xec, 0xcb, 0x09, 0x02, 0x4c, 0x36, 0x00, 0x0b, 0xa8, 0xcf, 0x3d, 0x02 @ 0200c0bc
    ldr r3, [pc, #0x16c] @ 0200c0cc
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 0200c0d0
    ldrb ip, [r3, r0] @ 0200c0d4
    cmp ip, #0xc8 @ 0200c0d8
    popeq {r4, r5, r6, r7, r8, sb, sl, pc} @ 0200c0dc
    ldr r3, [pc, #0x15c] @ 0200c0e0
    ldr r2, [pc, #0x15c] @ 0200c0e4
    ldrb r1, [r3] @ 0200c0e8
    ldrb r3, [r2] @ 0200c0ec
    ldr r2, [pc, #0x154] @ 0200c0f0
    lsl r1, r1, #1 @ 0200c0f4
    cmp r3, #0 @ 0200c0f8
    ldrh r1, [r1, r2] @ 0200c0fc
    ldr r3, [pc, #0x148] @ 0200c100
    lsl lr, ip, #1 @ 0200c104
    strh r1, [lr, r3] @ 0200c108
    ldreq r3, [pc, #0x140] @ 0200c10c
    moveq r2, #1 @ 0200c110
    strbeq r2, [r3, ip] @ 0200c114
    popeq {r4, r5, r6, r7, r8, sb, sl, pc} @ 0200c118
    ldr r3, [pc, #0x134] @ 0200c11c
    mov r1, #0 @ 0200c120
    ldrb r2, [r3] @ 0200c124
    ldr r3, [pc, #0x124] @ 0200c128
    cmp r2, #0 @ 0200c12c
    strb r1, [r3, ip] @ 0200c130
    beq .L_0200c1c4 @ 0200c134
    ldr r3, [pc, #0x11c] @ 0200c138
    ldr r2, [r3] @ 0200c13c
    cmp r0, r2 @ 0200c140
    blo .L_0200c1d4 @ 0200c144
.L_0200c148:
    ldr r3, [pc, #0x110] @ 0200c148
    and r2, r0, #7 @ 0200c14c
    ldrb r4, [r3, ip] @ 0200c150
    lsl r5, r2, #2 @ 0200c154
.L_0200c158:
    ldr r3, [pc, #0x104] @ 0200c158
    ldr r7, [pc, #0x104] @ 0200c15c
    ldr r6, [pc, #0x104] @ 0200c160
    mov r2, #1 @ 0200c164
    strb r2, [r3, ip] @ 0200c168
    ldr sl, [pc, #0xfc] @ 0200c16c
    mov r3, #0 @ 0200c170
    ldr sb, [pc, #0xf8] @ 0200c174
    ldr r8, [pc, #0xf8] @ 0200c178
    strh r3, [lr, r7] @ 0200c17c
    strh r4, [lr, r6] @ 0200c180
.L_0200c184:
    ldrh r3, [sl] @ 0200c184
    ldrh r0, [r8, #2] @ 0200c188
    add r3, r3, #2 @ 0200c18c
    add r3, r3, r5 @ 0200c190
    bic r3, r3, #1 @ 0200c194
    ldrh r2, [r3, sb] @ 0200c198
    add r1, lr, r6 @ 0200c19c
    add r3, lr, r7 @ 0200c1a0
    bic r2, r2, #0xc000 @ 0200c1a4
    add r0, r4, r0 @ 0200c1a8
    add r3, r3, #0x1e0 @ 0200c1ac
    rsb r2, r2, #0 @ 0200c1b0
    add r1, r1, #0x1e0 @ 0200c1b4
    strh r2, [r3] @ 0200c1b8
    strh r0, [r1] @ 0200c1bc
    pop {r4, r5, r6, r7, r8, sb, sl, pc} @ 0200c1c0
.L_0200c1c4:
    ldr r3, [pc, #0x90] @ 0200c1c4
    ldr r2, [r3] @ 0200c1c8
    cmp r0, r2 @ 0200c1cc
    blo .L_0200c148 @ 0200c1d0
.L_0200c1d4:
    ldr r3, [pc, #0xa0] @ 0200c1d4
    and r1, r0, #7 @ 0200c1d8
    ldr r2, [r3] @ 0200c1dc
    ldr r3, [pc, #0x78] @ 0200c1e0
    cmp r2, #0 @ 0200c1e4
    ldrb r4, [r3, ip] @ 0200c1e8
    lsl r5, r1, #2 @ 0200c1ec
    bne .L_0200c158 @ 0200c1f0
    ldr sl, [pc, #0x74] @ 0200c1f4
    ldr sb, [pc, #0x74] @ 0200c1f8
    ldrh r3, [sl] @ 0200c1fc
    ldr r8, [pc, #0x70] @ 0200c200
    add r3, r5, r3 @ 0200c204
    bic r3, r3, #1 @ 0200c208
    ldrh r2, [r3, sb] @ 0200c20c
    ldrh r0, [r8] @ 0200c210
    bic r2, r2, #0xc000 @ 0200c214
    ldr r7, [pc, #0x48] @ 0200c218
    ldr r6, [pc, #0x48] @ 0200c21c
    ldr r3, [pc, #0x3c] @ 0200c220
    rsb r2, r2, #0 @ 0200c224
    add r0, r4, r0 @ 0200c228
    mov r1, #0 @ 0200c22c
    strb r1, [r3, ip] @ 0200c230
    strh r2, [lr, r7] @ 0200c234
    strh r0, [lr, r6] @ 0200c238
    b .L_0200c184 @ 0200c23c
    .byte 0xb0, 0xeb, 0x08, 0x02, 0xf7, 0x4b, 0x0b, 0x02, 0x2f, 0x36, 0x00, 0x0b, 0x30, 0xc7, 0x3d, 0x02 @ 0200c240
    .byte 0xca, 0xcb, 0x3d, 0x02, 0xb4, 0xce, 0x3d, 0x02, 0x94, 0xde, 0x3d, 0x02, 0x10, 0x4c, 0x0b, 0x02 @ 0200c250
    .byte 0xf0, 0xea, 0x08, 0x02, 0xb0, 0xc7, 0x3d, 0x02, 0x44, 0xd7, 0x3d, 0x02, 0x84, 0xd3, 0x3d, 0x02 @ 0200c260
    .byte 0xa4, 0xce, 0x3d, 0x02, 0xec, 0xcb, 0x09, 0x02, 0x4c, 0x36, 0x00, 0x0b, 0xa8, 0xcf, 0x3d, 0x02 @ 0200c270
@ FUN_0200c280 at 0x0200c280
    push {r4, r5, r6, r7, r8, lr} @ 0200c280
    ldr r3, [pc, #0x1dc] @ 0200c284
    ldr r2, [pc, #0x1dc] @ 0200c288
    ldrb r1, [r3] @ 0200c28c
    ldrb r3, [r2] @ 0200c290
    ldr r2, [pc, #0x1d4] @ 0200c294
    lsl r1, r1, #1 @ 0200c298
    cmp r3, #0 @ 0200c29c
    ldrh r1, [r1, r2] @ 0200c2a0
    ldr r3, [pc, #0x1c8] @ 0200c2a4
    lsl ip, r0, #1 @ 0200c2a8
    strh r1, [ip, r3] @ 0200c2ac
    ldreq r3, [pc, #0x1c0] @ 0200c2b0
    moveq r2, #1 @ 0200c2b4
    strbeq r2, [r3, r0] @ 0200c2b8
    popeq {r4, r5, r6, r7, r8, pc} @ 0200c2bc
    ldr r3, [pc, #0x1b4] @ 0200c2c0
    mov r1, #0 @ 0200c2c4
    ldrb r2, [r3] @ 0200c2c8
    ldr r3, [pc, #0x1a4] @ 0200c2cc
    cmp r2, #0 @ 0200c2d0
    strb r1, [r3, r0] @ 0200c2d4
    bne .L_0200c398 @ 0200c2d8
    ldr r3, [pc, #0x19c] @ 0200c2dc
    ldr r2, [r3] @ 0200c2e0
    cmp r0, r2 @ 0200c2e4
    bhs .L_0200c3a8 @ 0200c2e8
.L_0200c2ec:
    ldr r3, [pc, #0x190] @ 0200c2ec
    ldr lr, [pc, #0x190] @ 0200c2f0
    ldr r4, [pc, #0x190] @ 0200c2f4
    mov r2, #1 @ 0200c2f8
    strb r2, [r3, r0] @ 0200c2fc
    ldr r8, [pc, #0x188] @ 0200c300
    mov r3, #0 @ 0200c304
    ldr r7, [pc, #0x184] @ 0200c308
    ldr r6, [pc, #0x184] @ 0200c30c
    ldr r5, [pc, #0x184] @ 0200c310
    strh r3, [ip, lr] @ 0200c314
    strh r3, [ip, r4] @ 0200c318
.L_0200c31c:
    ldrb r2, [r7] @ 0200c31c
    ldrh r3, [r8] @ 0200c320
    cmp r2, #2 @ 0200c324
    add r1, r3, #2 @ 0200c328
    biceq r3, r0, #7 @ 0200c32c
    addeq r1, r1, r3, lsl #2 @ 0200c330
    beq .L_0200c350 @ 0200c334
    cmp r2, #3 @ 0200c338
    addeq r1, r1, r0, lsl #2 @ 0200c33c
    beq .L_0200c350 @ 0200c340
    cmp r2, #1 @ 0200c344
    andeq r3, r0, #7 @ 0200c348
    addeq r1, r1, r3, lsl #2 @ 0200c34c
.L_0200c350:
    bic r3, r1, #1 @ 0200c350
    ldrh r2, [r3, r6] @ 0200c354
    ldrb r1, [r5] @ 0200c358
    lsl r2, r2, #0x12 @ 0200c35c
    add r3, ip, lr @ 0200c360
    lsr r2, r2, #0x12 @ 0200c364
    add r3, r3, #0x1e0 @ 0200c368
    rsb r2, r2, #0 @ 0200c36c
    cmp r1, #0 @ 0200c370
    strh r2, [r3] @ 0200c374
    beq .L_0200c444 @ 0200c378
    cmp r1, #1 @ 0200c37c
    movne r2, #0 @ 0200c380
    beq .L_0200c444 @ 0200c384
    add r3, ip, r4 @ 0200c388
    add r3, r3, #0x1e0 @ 0200c38c
    strh r2, [r3] @ 0200c390
    pop {r4, r5, r6, r7, r8, pc} @ 0200c394
.L_0200c398:
    ldr r3, [pc, #0xe0] @ 0200c398
    ldr r2, [r3] @ 0200c39c
    cmp r0, r2 @ 0200c3a0
    bhs .L_0200c2ec @ 0200c3a4
.L_0200c3a8:
    ldr r3, [pc, #0xf0] @ 0200c3a8
    ldr r2, [r3] @ 0200c3ac
    cmp r2, #0 @ 0200c3b0
    bne .L_0200c2ec @ 0200c3b4
    ldr r7, [pc, #0xd4] @ 0200c3b8
    ldr r8, [pc, #0xcc] @ 0200c3bc
    ldrb r3, [r7] @ 0200c3c0
    ldrh r2, [r8] @ 0200c3c4
    cmp r3, #2 @ 0200c3c8
    biceq r3, r0, #7 @ 0200c3cc
    addeq r2, r2, r3, lsl #2 @ 0200c3d0
    beq .L_0200c3f0 @ 0200c3d4
    cmp r3, #3 @ 0200c3d8
    addeq r2, r2, r0, lsl #2 @ 0200c3dc
    beq .L_0200c3f0 @ 0200c3e0
    cmp r3, #1 @ 0200c3e4
    andeq r3, r0, #7 @ 0200c3e8
    addeq r2, r2, r3, lsl #2 @ 0200c3ec
.L_0200c3f0:
    ldr r6, [pc, #0xa0] @ 0200c3f0
    bic r2, r2, #1 @ 0200c3f4
    ldrh r3, [r2, r6] @ 0200c3f8
    ldr r5, [pc, #0x98] @ 0200c3fc
    lsl r3, r3, #0x12 @ 0200c400
    ldrb r2, [r5] @ 0200c404
    lsr r3, r3, #0x12 @ 0200c408
    ldr lr, [pc, #0x74] @ 0200c40c
    rsb r3, r3, #0 @ 0200c410
    cmp r2, #0 @ 0200c414
    strh r3, [ip, lr] @ 0200c418
    beq .L_0200c45c @ 0200c41c
    cmp r2, #1 @ 0200c420
    movne r1, #0 @ 0200c424
    beq .L_0200c45c @ 0200c428
.L_0200c42c:
    ldr r4, [pc, #0x58] @ 0200c42c
    ldr r3, [pc, #0x4c] @ 0200c430
    mov r2, #0 @ 0200c434
    strb r2, [r3, r0] @ 0200c438
    strh r1, [ip, r4] @ 0200c43c
    b .L_0200c31c @ 0200c440
.L_0200c444:
    ldr r3, [pc, #0x58] @ 0200c444
    ldrh r2, [r3, #2] @ 0200c448
    add r3, ip, r4 @ 0200c44c
    add r3, r3, #0x1e0 @ 0200c450
    strh r2, [r3] @ 0200c454
    pop {r4, r5, r6, r7, r8, pc} @ 0200c458
.L_0200c45c:
    ldr r3, [pc, #0x40] @ 0200c45c
    ldrh r1, [r3] @ 0200c460
    b .L_0200c42c @ 0200c464
    .byte 0xf7, 0x4b, 0x0b, 0x02, 0x2f, 0x36, 0x00, 0x0b, 0x30, 0xc7, 0x3d, 0x02, 0xca, 0xcb, 0x3d, 0x02 @ 0200c468
    .byte 0xb4, 0xce, 0x3d, 0x02, 0x94, 0xde, 0x3d, 0x02, 0x10, 0x4c, 0x0b, 0x02, 0xb0, 0xc7, 0x3d, 0x02 @ 0200c478
    .byte 0x44, 0xd7, 0x3d, 0x02, 0x84, 0xd3, 0x3d, 0x02, 0xa4, 0xce, 0x3d, 0x02, 0xb0, 0xcd, 0x3d, 0x02 @ 0200c488
    .byte 0xec, 0xcb, 0x09, 0x02, 0xac, 0xcf, 0x3d, 0x02, 0xa8, 0xcf, 0x3d, 0x02, 0x4c, 0x36, 0x00, 0x0b @ 0200c498
