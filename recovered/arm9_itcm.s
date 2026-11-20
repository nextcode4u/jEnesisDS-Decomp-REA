/* Recovered ARM and Thumb code with data at its mapped address. */
.syntax unified
.arm
.section .itcm, "ax", %progbits
    ldr r3, [pc, #0xc] @ 01000000
    ldr r2, [pc, #0xc] @ 01000004
    and r3, r0, r3 @ 01000008
    strh r1, [r3, r2] @ 0100000c
    bx lr @ 01000010
    .byte 0xfe, 0xff, 0x00, 0x00, 0x34, 0xb6, 0x3c, 0x02, 0xff, 0xff, 0xff, 0xff @ 01000014
@ z80_dispatch_01000020 at 0x01000020
    ldrb r0, [fp], #1 @ 01000020
    subs r5, r5, #0x40000 @ 01000024
    ldrgt pc, [r2, r0, lsl #2] @ 01000028
    .word 0xea4037ff @ 0100002c b #0x200e030
@ z80_dispatch_01000030 at 0x01000030
    ldrb r0, [fp], #1 @ 01000030
    ldrb lr, [fp], #1 @ 01000034
    orr r0, r0, lr, lsl #8 @ 01000038
    lsl r6, r0, #0x10 @ 0100003c
    lsl r7, r0, #0x18 @ 01000040
    and r6, r6, #0xff000000 @ 01000044
    ldrb r0, [fp], #1 @ 01000048
    subs r5, r5, #0xa0000 @ 0100004c
    ldrgt pc, [r2, r0, lsl #2] @ 01000050
    .word 0xea4037f5 @ 01000054 b #0x200e030
    .zero 8
@ z80_dispatch_01000060 at 0x01000060
    orr r0, r6, r7, lsr #8 @ 01000060
    lsr r0, r0, #0x10 @ 01000064
    lsr r1, r4, #0x18 @ 01000068
    cmp r0, #0x2000 @ 0100006c
    blge .L_01002d10 @ 01000070
    strb r1, [r3, r0] @ 01000074
    ldrb r0, [fp], #1 @ 01000078
    subs r5, r5, #0x70000 @ 0100007c
    ldrgt pc, [r2, r0, lsl #2] @ 01000080
    .word 0xea4037e9 @ 01000084 b #0x200e030
    .zero 8
@ z80_dispatch_01000090 at 0x01000090
    adds r7, r7, #0x1000000 @ 01000090
    addhs r6, r6, #0x1000000 @ 01000094
    ldrb r0, [fp], #1 @ 01000098
    subs r5, r5, #0x60000 @ 0100009c
    ldrgt pc, [r2, r0, lsl #2] @ 010000a0
    .word 0xea4037e1 @ 010000a4 b #0x200e030
    .zero 8
@ z80_dispatch_010000b0 at 0x010000b0
    bic r5, r5, #0xd6 @ 010000b0
    adds r6, r6, #0x1000000 @ 010000b4
    orrmi r5, r5, #0x80 @ 010000b8
    orrvs r5, r5, #4 @ 010000bc
    orreq r5, r5, #0x40 @ 010000c0
    ldrb r0, [fp], #1 @ 010000c4
    subs r5, r5, #0x40000 @ 010000c8
    ldrgt pc, [r2, r0, lsl #2] @ 010000cc
    .word 0xea4037d6 @ 010000d0 b #0x200e030
    .zero 12
@ z80_dispatch_010000e0 at 0x010000e0
    bic r5, r5, #0xd6 @ 010000e0
    subs r6, r6, #0x1000000 @ 010000e4
    orr r5, r5, #2 @ 010000e8
    orrmi r5, r5, #0x80 @ 010000ec
    orreq r5, r5, #0x40 @ 010000f0
    orrvs r5, r5, #4 @ 010000f4
    ldrb r0, [fp], #1 @ 010000f8
    subs r5, r5, #0x40000 @ 010000fc
    ldrgt pc, [r2, r0, lsl #2] @ 01000100
    .word 0xea4037c9 @ 01000104 b #0x200e030
    .zero 8
@ z80_dispatch_01000110 at 0x01000110
    ldrb r0, [fp], #1 @ 01000110
    lsl r6, r0, #0x18 @ 01000114
    ldrb r0, [fp], #1 @ 01000118
    subs r5, r5, #0x70000 @ 0100011c
    ldrgt pc, [r2, r0, lsl #2] @ 01000120
    .word 0xea4037c1 @ 01000124 b #0x200e030
    .zero 8
@ z80_dispatch_01000130 at 0x01000130
    lsls r4, r4, #1 @ 01000130
    orrhs r4, r4, #0x1000000 @ 01000134
    bic r5, r5, #0x13 @ 01000138
    orrhs r5, r5, #1 @ 0100013c
    ldrb r0, [fp], #1 @ 01000140
    subs r5, r5, #0x40000 @ 01000144
    ldrgt pc, [r2, r0, lsl #2] @ 01000148
    .word 0xea4037b7 @ 0100014c b #0x200e030
@ z80_dispatch_01000150 at 0x01000150
    ldr r0, [sp, #0x48] @ 01000150
    ldr r1, [sp, #0x4c] @ 01000154
    str r4, [sp, #0x48] @ 01000158
    str r5, [sp, #0x4c] @ 0100015c
    mov r4, r0 @ 01000160
    bic r5, r5, #0xd7 @ 01000164
    and r1, r1, #0xff @ 01000168
    orr r5, r5, r1 @ 0100016c
    ldrb r0, [fp], #1 @ 01000170
    subs r5, r5, #0x40000 @ 01000174
    ldrgt pc, [r2, r0, lsl #2] @ 01000178
    .word 0xea4037ab @ 0100017c b #0x200e030
@ z80_dispatch_01000180 at 0x01000180
    orr r0, r6, r7, lsr #8 @ 01000180
    bic r5, r5, #0x13 @ 01000184
    adds sl, sl, r0 @ 01000188
    orrhs r5, r5, #1 @ 0100018c
    ldrb r0, [fp], #1 @ 01000190
    subs r5, r5, #0xb0000 @ 01000194
    ldrgt pc, [r2, r0, lsl #2] @ 01000198
    .word 0xea4037a3 @ 0100019c b #0x200e030
@ z80_dispatch_010001a0 at 0x010001a0
    orr r0, r6, r7, lsr #8 @ 010001a0
    lsr r0, r0, #0x10 @ 010001a4
    cmp r0, #0x2000 @ 010001a8
    blge .L_01002cd0 @ 010001ac
    ldrb r0, [r3, r0] @ 010001b0
    lsl r4, r0, #0x18 @ 010001b4
    ldrb r0, [fp], #1 @ 010001b8
    subs r5, r5, #0x70000 @ 010001bc
    ldrgt pc, [r2, r0, lsl #2] @ 010001c0
    .word 0xea403799 @ 010001c4 b #0x200e030
    .zero 8
@ z80_dispatch_010001d0 at 0x010001d0
    subs r7, r7, #0x1000000 @ 010001d0
    sublo r6, r6, #0x1000000 @ 010001d4
    ldrb r0, [fp], #1 @ 010001d8
    subs r5, r5, #0x60000 @ 010001dc
    ldrgt pc, [r2, r0, lsl #2] @ 010001e0
    .word 0xea403791 @ 010001e4 b #0x200e030
    .zero 8
@ z80_dispatch_010001f0 at 0x010001f0
    bic r5, r5, #0xd6 @ 010001f0
    adds r7, r7, #0x1000000 @ 010001f4
    orrmi r5, r5, #0x80 @ 010001f8
    orrvs r5, r5, #4 @ 010001fc
    orreq r5, r5, #0x40 @ 01000200
    ldrb r0, [fp], #1 @ 01000204
    subs r5, r5, #0x40000 @ 01000208
    ldrgt pc, [r2, r0, lsl #2] @ 0100020c
    .word 0xea403786 @ 01000210 b #0x200e030
    .zero 12
@ z80_dispatch_01000220 at 0x01000220
    bic r5, r5, #0xd6 @ 01000220
    subs r7, r7, #0x1000000 @ 01000224
    orr r5, r5, #2 @ 01000228
    orrmi r5, r5, #0x80 @ 0100022c
    orreq r5, r5, #0x40 @ 01000230
    orrvs r5, r5, #4 @ 01000234
    ldrb r0, [fp], #1 @ 01000238
    subs r5, r5, #0x40000 @ 0100023c
    ldrgt pc, [r2, r0, lsl #2] @ 01000240
    .word 0xea403779 @ 01000244 b #0x200e030
    .zero 8
@ z80_dispatch_01000250 at 0x01000250
    ldrb r0, [fp], #1 @ 01000250
    lsl r7, r0, #0x18 @ 01000254
    ldrb r0, [fp], #1 @ 01000258
    subs r5, r5, #0x70000 @ 0100025c
    ldrgt pc, [r2, r0, lsl #2] @ 01000260
    .word 0xea403771 @ 01000264 b #0x200e030
    .zero 8
@ z80_dispatch_01000270 at 0x01000270
    lsrs r4, r4, #0x19 @ 01000270
    orrhs r4, r4, #0x80 @ 01000274
    bic r5, r5, #0x13 @ 01000278
    orrhs r5, r5, #1 @ 0100027c
    lsl r4, r4, #0x18 @ 01000280
    ldrb r0, [fp], #1 @ 01000284
    subs r5, r5, #0x40000 @ 01000288
    ldrgt pc, [r2, r0, lsl #2] @ 0100028c
    .word 0xea403766 @ 01000290 b #0x200e030
    .zero 12
@ z80_dispatch_010002a0 at 0x010002a0
    subs r6, r6, #0x1000000 @ 010002a0
    mov r1, fp @ 010002a4
    ldrsbne r0, [fp], #1 @ 010002a8
    moveq r0, #0 @ 010002ac
    subne r5, r5, #0x50000 @ 010002b0
    addeq fp, fp, #1 @ 010002b4
    addne fp, fp, r0 @ 010002b8
    cmn r0, #2 @ 010002bc
    moveq r0, #0x27 @ 010002c0
    movne r0, #0xd3 @ 010002c4
    strb r0, [r1, #-1] @ 010002c8
    ldrb r0, [fp], #1 @ 010002cc
    subs r5, r5, #0x80000 @ 010002d0
    ldrgt pc, [r2, r0, lsl #2] @ 010002d4
    .word 0xea403754 @ 010002d8 b #0x200e030
    .zero 4
@ z80_dispatch_010002e0 at 0x010002e0
    ldrb r0, [fp], #1 @ 010002e0
    ldrb lr, [fp], #1 @ 010002e4
    orr r0, r0, lr, lsl #8 @ 010002e8
    lsl r8, r0, #0x10 @ 010002ec
    lsl sb, r0, #0x18 @ 010002f0
    and r8, r8, #0xff000000 @ 010002f4
    ldrb r0, [fp], #1 @ 010002f8
    subs r5, r5, #0xa0000 @ 010002fc
    ldrgt pc, [r2, r0, lsl #2] @ 01000300
    .word 0xea403749 @ 01000304 b #0x200e030
    .zero 8
@ z80_dispatch_01000310 at 0x01000310
    lsr r1, r4, #0x18 @ 01000310
    orr r0, r8, sb, lsr #8 @ 01000314
    lsr r0, r0, #0x10 @ 01000318
    cmp r0, #0x2000 @ 0100031c
    blge .L_01002d10 @ 01000320
    strb r1, [r3, r0] @ 01000324
    ldrb r0, [fp], #1 @ 01000328
    subs r5, r5, #0x70000 @ 0100032c
    ldrgt pc, [r2, r0, lsl #2] @ 01000330
    .word 0xea40373d @ 01000334 b #0x200e030
    .zero 8
@ z80_dispatch_01000340 at 0x01000340
    adds sb, sb, #0x1000000 @ 01000340
    addhs r8, r8, #0x1000000 @ 01000344
    ldrb r0, [fp], #1 @ 01000348
    subs r5, r5, #0x60000 @ 0100034c
    ldrgt pc, [r2, r0, lsl #2] @ 01000350
    .word 0xea403735 @ 01000354 b #0x200e030
    .zero 8
@ z80_dispatch_01000360 at 0x01000360
    bic r5, r5, #0xd6 @ 01000360
    adds r8, r8, #0x1000000 @ 01000364
    orrmi r5, r5, #0x80 @ 01000368
    orrvs r5, r5, #4 @ 0100036c
    orreq r5, r5, #0x40 @ 01000370
    ldrb r0, [fp], #1 @ 01000374
    subs r5, r5, #0x40000 @ 01000378
    ldrgt pc, [r2, r0, lsl #2] @ 0100037c
    .word 0xea40372a @ 01000380 b #0x200e030
    .zero 12
@ z80_dispatch_01000390 at 0x01000390
    bic r5, r5, #0xd6 @ 01000390
    subs r8, r8, #0x1000000 @ 01000394
    orr r5, r5, #2 @ 01000398
    orrmi r5, r5, #0x80 @ 0100039c
    orreq r5, r5, #0x40 @ 010003a0
    orrvs r5, r5, #4 @ 010003a4
    ldrb r0, [fp], #1 @ 010003a8
    subs r5, r5, #0x40000 @ 010003ac
    ldrgt pc, [r2, r0, lsl #2] @ 010003b0
    .word 0xea40371d @ 010003b4 b #0x200e030
    .zero 8
@ z80_dispatch_010003c0 at 0x010003c0
    ldrb r0, [fp], #1 @ 010003c0
    lsl r8, r0, #0x18 @ 010003c4
    ldrb r0, [fp], #1 @ 010003c8
    subs r5, r5, #0x70000 @ 010003cc
    ldrgt pc, [r2, r0, lsl #2] @ 010003d0
    .word 0xea403715 @ 010003d4 b #0x200e030
    .zero 8
@ z80_dispatch_010003e0 at 0x010003e0
    and r0, r5, #1 @ 010003e0
    lsl r0, r0, #0x18 @ 010003e4
    bic r5, r5, #0x13 @ 010003e8
    lsls r4, r4, #1 @ 010003ec
    orrhs r5, r5, #1 @ 010003f0
    orr r4, r4, r0 @ 010003f4
    ldrb r0, [fp], #1 @ 010003f8
    subs r5, r5, #0x40000 @ 010003fc
    ldrgt pc, [r2, r0, lsl #2] @ 01000400
    .word 0xea403709 @ 01000404 b #0x200e030
    .zero 8
@ z80_dispatch_01000410 at 0x01000410
    ldrsb r0, [fp], #1 @ 01000410
    add fp, fp, r0 @ 01000414
    ldrb r0, [fp], #1 @ 01000418
    subs r5, r5, #0xc0000 @ 0100041c
    ldrgt pc, [r2, r0, lsl #2] @ 01000420
    .word 0xea403701 @ 01000424 b #0x200e030
    .zero 8
@ z80_dispatch_01000430 at 0x01000430
    orr r0, r8, sb, lsr #8 @ 01000430
    bic r5, r5, #0x13 @ 01000434
    adds sl, sl, r0 @ 01000438
    orrhs r5, r5, #1 @ 0100043c
    ldrb r0, [fp], #1 @ 01000440
    subs r5, r5, #0xb0000 @ 01000444
    ldrgt pc, [r2, r0, lsl #2] @ 01000448
    .word 0xea4036f7 @ 0100044c b #0x200e030
@ z80_dispatch_01000450 at 0x01000450
    orr r0, r8, sb, lsr #8 @ 01000450
    lsr r0, r0, #0x10 @ 01000454
    cmp r0, #0x2000 @ 01000458
    blge .L_01002cd0 @ 0100045c
    ldrb r0, [r3, r0] @ 01000460
    lsl r4, r0, #0x18 @ 01000464
    ldrb r0, [fp], #1 @ 01000468
    subs r5, r5, #0x70000 @ 0100046c
    ldrgt pc, [r2, r0, lsl #2] @ 01000470
    .word 0xea4036ed @ 01000474 b #0x200e030
    .zero 8
@ z80_dispatch_01000480 at 0x01000480
    subs sb, sb, #0x1000000 @ 01000480
    sublo r8, r8, #0x1000000 @ 01000484
    ldrb r0, [fp], #1 @ 01000488
    subs r5, r5, #0x60000 @ 0100048c
    ldrgt pc, [r2, r0, lsl #2] @ 01000490
    .word 0xea4036e5 @ 01000494 b #0x200e030
    .zero 8
@ z80_dispatch_010004a0 at 0x010004a0
    bic r5, r5, #0xd6 @ 010004a0
    adds sb, sb, #0x1000000 @ 010004a4
    orrmi r5, r5, #0x80 @ 010004a8
    orrvs r5, r5, #4 @ 010004ac
    orreq r5, r5, #0x40 @ 010004b0
    ldrb r0, [fp], #1 @ 010004b4
    subs r5, r5, #0x40000 @ 010004b8
    ldrgt pc, [r2, r0, lsl #2] @ 010004bc
    .word 0xea4036da @ 010004c0 b #0x200e030
    .zero 12
@ z80_dispatch_010004d0 at 0x010004d0
    bic r5, r5, #0xd6 @ 010004d0
    subs sb, sb, #0x1000000 @ 010004d4
    orr r5, r5, #2 @ 010004d8
    orrmi r5, r5, #0x80 @ 010004dc
    orreq r5, r5, #0x40 @ 010004e0
    orrvs r5, r5, #4 @ 010004e4
    ldrb r0, [fp], #1 @ 010004e8
    subs r5, r5, #0x40000 @ 010004ec
    ldrgt pc, [r2, r0, lsl #2] @ 010004f0
    .word 0xea4036cd @ 010004f4 b #0x200e030
    .zero 8
@ z80_dispatch_01000500 at 0x01000500
    ldrb r0, [fp], #1 @ 01000500
    lsl sb, r0, #0x18 @ 01000504
    ldrb r0, [fp], #1 @ 01000508
    subs r5, r5, #0x70000 @ 0100050c
    ldrgt pc, [r2, r0, lsl #2] @ 01000510
    .word 0xea4036c5 @ 01000514 b #0x200e030
    .zero 8
@ z80_dispatch_01000520 at 0x01000520
    lsl r0, r5, #0x1f @ 01000520
    bic r5, r5, #0x13 @ 01000524
    lsrs r4, r4, #0x19 @ 01000528
    orrhs r5, r5, #1 @ 0100052c
    orr r4, r0, r4, lsl #24 @ 01000530
    ldrb r0, [fp], #1 @ 01000534
    subs r5, r5, #0x40000 @ 01000538
    ldrgt pc, [r2, r0, lsl #2] @ 0100053c
    .word 0xea4036ba @ 01000540 b #0x200e030
    .zero 12
@ z80_dispatch_01000550 at 0x01000550
    tst r5, #0x40 @ 01000550
    ldrsbeq r0, [fp], #1 @ 01000554
    subeq r5, r5, #0x50000 @ 01000558
    addne fp, fp, #1 @ 0100055c
    addeq fp, fp, r0 @ 01000560
    ldrb r0, [fp], #1 @ 01000564
    subs r5, r5, #0x70000 @ 01000568
    ldrgt pc, [r2, r0, lsl #2] @ 0100056c
    .word 0xea4036ae @ 01000570 b #0x200e030
    .zero 12
@ z80_dispatch_01000580 at 0x01000580
    ldrb r0, [fp], #1 @ 01000580
    ldrb lr, [fp], #1 @ 01000584
    orr r0, r0, lr, lsl #8 @ 01000588
    lsl sl, r0, #0x10 @ 0100058c
    ldrb r0, [fp], #1 @ 01000590
    subs r5, r5, #0xa0000 @ 01000594
    ldrgt pc, [r2, r0, lsl #2] @ 01000598
    .word 0xea4036a3 @ 0100059c b #0x200e030
@ z80_dispatch_010005a0 at 0x010005a0
    ldrb r0, [fp], #1 @ 010005a0
    ldrb lr, [fp], #1 @ 010005a4
    orr r0, r0, lr, lsl #8 @ 010005a8
    lsr r1, sl, #0x10 @ 010005ac
    strb r1, [r3, r0] @ 010005b0
    lsr r1, r1, #8 @ 010005b4
    add r0, r0, #1 @ 010005b8
    strb r1, [r3, r0] @ 010005bc
    ldrb r0, [fp], #1 @ 010005c0
    subs r5, r5, #0x100000 @ 010005c4
    ldrgt pc, [r2, r0, lsl #2] @ 010005c8
    .word 0xea403697 @ 010005cc b #0x200e030
@ z80_dispatch_010005d0 at 0x010005d0
    add sl, sl, #0x10000 @ 010005d0
    ldrb r0, [fp], #1 @ 010005d4
    subs r5, r5, #0x60000 @ 010005d8
    ldrgt pc, [r2, r0, lsl #2] @ 010005dc
    .word 0xea403692 @ 010005e0 b #0x200e030
    .zero 12
@ z80_dispatch_010005f0 at 0x010005f0
    and r0, sl, #0xff000000 @ 010005f0
    bic r5, r5, #0xd6 @ 010005f4
    adds r0, r0, #0x1000000 @ 010005f8
    orrmi r5, r5, #0x80 @ 010005fc
    orrvs r5, r5, #4 @ 01000600
    orreq r5, r5, #0x40 @ 01000604
    add sl, sl, #0x1000000 @ 01000608
    ldrb r0, [fp], #1 @ 0100060c
    subs r5, r5, #0x40000 @ 01000610
    ldrgt pc, [r2, r0, lsl #2] @ 01000614
    .word 0xea403684 @ 01000618 b #0x200e030
    .zero 4
@ z80_dispatch_01000620 at 0x01000620
    and r0, sl, #0xff000000 @ 01000620
    bic r5, r5, #0xd6 @ 01000624
    subs r0, r0, #0x1000000 @ 01000628
    orr r5, r5, #2 @ 0100062c
    orrmi r5, r5, #0x80 @ 01000630
    orreq r5, r5, #0x40 @ 01000634
    orrvs r5, r5, #4 @ 01000638
    sub sl, sl, #0x1000000 @ 0100063c
    ldrb r0, [fp], #1 @ 01000640
    subs r5, r5, #0x40000 @ 01000644
    ldrgt pc, [r2, r0, lsl #2] @ 01000648
    .word 0xea403677 @ 0100064c b #0x200e030
@ z80_dispatch_01000650 at 0x01000650
    ldrb r0, [fp], #1 @ 01000650
    and sl, sl, #0xff0000 @ 01000654
    orr sl, sl, r0, lsl #24 @ 01000658
    ldrb r0, [fp], #1 @ 0100065c
    subs r5, r5, #0x70000 @ 01000660
    ldrgt pc, [r2, r0, lsl #2] @ 01000664
    .word 0xea403670 @ 01000668 b #0x200e030
    .zero 4
@ z80_dispatch_01000670 at 0x01000670
    sub r6, r6, #0x1000000 @ 01000670
    sub r5, r5, r6, lsr #8 @ 01000674
    sub r5, r5, r6, lsr #6 @ 01000678
    sub r5, r5, r6, lsr #5 @ 0100067c
    add fp, fp, #1 @ 01000680
    ldrb r0, [fp], #1 @ 01000684
    mov r6, #0 @ 01000688
    subs r5, r5, #0x80000 @ 0100068c
    ldrgt pc, [r2, r0, lsl #2] @ 01000690
    .word 0xea403665 @ 01000694 b #0x200e030
    .zero 8
@ z80_dispatch_010006a0 at 0x010006a0
    tst r5, #0x40 @ 010006a0
    ldrsbne r0, [fp], #1 @ 010006a4
    subne r5, r5, #0x50000 @ 010006a8
    addeq fp, fp, #1 @ 010006ac
    addne fp, fp, r0 @ 010006b0
    ldrb r0, [fp], #1 @ 010006b4
    subs r5, r5, #0x70000 @ 010006b8
    ldrgt pc, [r2, r0, lsl #2] @ 010006bc
    .word 0xea40365a @ 010006c0 b #0x200e030
    .zero 12
@ z80_dispatch_010006d0 at 0x010006d0
    mov r0, sl @ 010006d0
    bic r5, r5, #0x13 @ 010006d4
    adds sl, sl, r0 @ 010006d8
    orrhs r5, r5, #1 @ 010006dc
    ldrb r0, [fp], #1 @ 010006e0
    subs r5, r5, #0xb0000 @ 010006e4
    ldrgt pc, [r2, r0, lsl #2] @ 010006e8
    .word 0xea40364f @ 010006ec b #0x200e030
@ z80_dispatch_010006f0 at 0x010006f0
    ldrb r0, [fp], #1 @ 010006f0
    ldrb lr, [fp], #1 @ 010006f4
    orr r0, r0, lr, lsl #8 @ 010006f8
    cmp r0, #0x2000 @ 010006fc
    blge .L_01002cfc @ 01000700
    ldrb lr, [r3, r0] @ 01000704
    add r0, r0, #1 @ 01000708
    ldrb r0, [r3, r0] @ 0100070c
    orr r0, lr, r0, lsl #8 @ 01000710
    lsl sl, r0, #0x10 @ 01000714
    ldrb r0, [fp], #1 @ 01000718
    subs r5, r5, #0x100000 @ 0100071c
    ldrgt pc, [r2, r0, lsl #2] @ 01000720
    .word 0xea403641 @ 01000724 b #0x200e030
    .zero 8
@ z80_dispatch_01000730 at 0x01000730
    sub sl, sl, #0x10000 @ 01000730
    ldrb r0, [fp], #1 @ 01000734
    subs r5, r5, #0x60000 @ 01000738
    ldrgt pc, [r2, r0, lsl #2] @ 0100073c
    .word 0xea40363a @ 01000740 b #0x200e030
    .zero 12
@ z80_dispatch_01000750 at 0x01000750
    lsl r0, sl, #8 @ 01000750
    bic r5, r5, #0xd6 @ 01000754
    adds r0, r0, #0x1000000 @ 01000758
    orrmi r5, r5, #0x80 @ 0100075c
    orrvs r5, r5, #4 @ 01000760
    orreq r5, r5, #0x40 @ 01000764
    and sl, sl, #0xff000000 @ 01000768
    orr sl, sl, r0, lsr #8 @ 0100076c
    ldrb r0, [fp], #1 @ 01000770
    subs r5, r5, #0x40000 @ 01000774
    ldrgt pc, [r2, r0, lsl #2] @ 01000778
    .word 0xea40362b @ 0100077c b #0x200e030
@ z80_dispatch_01000780 at 0x01000780
    lsl r0, sl, #8 @ 01000780
    bic r5, r5, #0xd6 @ 01000784
    subs r0, r0, #0x1000000 @ 01000788
    orr r5, r5, #2 @ 0100078c
    orrmi r5, r5, #0x80 @ 01000790
    orreq r5, r5, #0x40 @ 01000794
    orrvs r5, r5, #4 @ 01000798
    and sl, sl, #0xff000000 @ 0100079c
    orr sl, sl, r0, lsr #8 @ 010007a0
    ldrb r0, [fp], #1 @ 010007a4
    subs r5, r5, #0x40000 @ 010007a8
    ldrgt pc, [r2, r0, lsl #2] @ 010007ac
    .word 0xea40361e @ 010007b0 b #0x200e030
    .zero 12
@ z80_dispatch_010007c0 at 0x010007c0
    ldrb r0, [fp], #1 @ 010007c0
    and sl, sl, #0xff000000 @ 010007c4
    orr sl, sl, r0, lsl #16 @ 010007c8
    ldrb r0, [fp], #1 @ 010007cc
    subs r5, r5, #0x70000 @ 010007d0
    ldrgt pc, [r2, r0, lsl #2] @ 010007d4
    .word 0xea403614 @ 010007d8 b #0x200e030
    .zero 4
@ z80_dispatch_010007e0 at 0x010007e0
    eor r4, r4, #0xff000000 @ 010007e0
    orr r5, r5, #0x12 @ 010007e4
    ldrb r0, [fp], #1 @ 010007e8
    subs r5, r5, #0x40000 @ 010007ec
    ldrgt pc, [r2, r0, lsl #2] @ 010007f0
    .word 0xea40360d @ 010007f4 b #0x200e030
    .zero 8
@ z80_dispatch_01000800 at 0x01000800
    tst r5, #1 @ 01000800
    ldrsbeq r0, [fp], #1 @ 01000804
    subeq r5, r5, #0x50000 @ 01000808
    addne fp, fp, #1 @ 0100080c
    addeq fp, fp, r0 @ 01000810
    ldrb r0, [fp], #1 @ 01000814
    subs r5, r5, #0x70000 @ 01000818
    ldrgt pc, [r2, r0, lsl #2] @ 0100081c
    .word 0xea403602 @ 01000820 b #0x200e030
    .zero 12
@ z80_dispatch_01000830 at 0x01000830
    ldrb r0, [fp], #1 @ 01000830
    ldrb lr, [fp], #1 @ 01000834
    orr r0, r0, lr, lsl #8 @ 01000838
    add ip, r3, r0 @ 0100083c
    ldrb r0, [fp], #1 @ 01000840
    subs r5, r5, #0xa0000 @ 01000844
    ldrgt pc, [r2, r0, lsl #2] @ 01000848
    .word 0xea4035f7 @ 0100084c b #0x200e030
@ z80_dispatch_01000850 at 0x01000850
    ldrb r0, [fp], #1 @ 01000850
    ldrb lr, [fp], #1 @ 01000854
    orr r0, r0, lr, lsl #8 @ 01000858
    lsr r1, r4, #0x18 @ 0100085c
    cmp r0, #0x2000 @ 01000860
    blge .L_01002d10 @ 01000864
    strb r1, [r3, r0] @ 01000868
    ldrb r0, [fp], #1 @ 0100086c
    subs r5, r5, #0xd0000 @ 01000870
    ldrgt pc, [r2, r0, lsl #2] @ 01000874
    .word 0xea4035ec @ 01000878 b #0x200e030
    .zero 4
@ z80_dispatch_01000880 at 0x01000880
    add ip, ip, #1 @ 01000880
    ldrb r0, [fp], #1 @ 01000884
    subs r5, r5, #0x60000 @ 01000888
    ldrgt pc, [r2, r0, lsl #2] @ 0100088c
    .word 0xea4035e6 @ 01000890 b #0x200e030
    .zero 12
@ z80_dispatch_010008a0 at 0x010008a0
    cmp sl, #0x20000000 @ 010008a0
    blhs .L_01002cec @ 010008a4
    ldrb r0, [r3, sl, lsr #16] @ 010008a8
    mov r1, r0 @ 010008ac
    bic r5, r5, #0xd6 @ 010008b0
    lsl r1, r1, #0x18 @ 010008b4
    adds r1, r1, #0x1000000 @ 010008b8
    orrmi r5, r5, #0x80 @ 010008bc
    orrvs r5, r5, #4 @ 010008c0
    orreq r5, r5, #0x40 @ 010008c4
    lsr r1, r1, #0x18 @ 010008c8
    cmp sl, #0x20000000 @ 010008cc
    blhs .L_01002d2c @ 010008d0
    strb r1, [r3, sl, lsr #16] @ 010008d4
    ldrb r0, [fp], #1 @ 010008d8
    subs r5, r5, #0xb0000 @ 010008dc
    ldrgt pc, [r2, r0, lsl #2] @ 010008e0
    .word 0xea4035d1 @ 010008e4 b #0x200e030
    .zero 8
@ z80_dispatch_010008f0 at 0x010008f0
    cmp sl, #0x20000000 @ 010008f0
    blhs .L_01002cec @ 010008f4
    ldrb r0, [r3, sl, lsr #16] @ 010008f8
    mov r1, r0 @ 010008fc
    bic r5, r5, #0xd6 @ 01000900
    lsl r1, r1, #0x18 @ 01000904
    subs r1, r1, #0x1000000 @ 01000908
    orr r5, r5, #2 @ 0100090c
    orreq r5, r5, #0x40 @ 01000910
    orrmi r5, r5, #0x80 @ 01000914
    orrvs r5, r5, #4 @ 01000918
    lsr r1, r1, #0x18 @ 0100091c
    cmp sl, #0x20000000 @ 01000920
    blhs .L_01002d2c @ 01000924
    strb r1, [r3, sl, lsr #16] @ 01000928
    ldrb r0, [fp], #1 @ 0100092c
    subs r5, r5, #0xb0000 @ 01000930
    ldrgt pc, [r2, r0, lsl #2] @ 01000934
    .word 0xea4035bc @ 01000938 b #0x200e030
    .zero 4
@ z80_dispatch_01000940 at 0x01000940
    ldrb r1, [fp], #1 @ 01000940
    cmp sl, #0x20000000 @ 01000944
    blhs .L_01002d2c @ 01000948
    strb r1, [r3, sl, lsr #16] @ 0100094c
    ldrb r0, [fp], #1 @ 01000950
    subs r5, r5, #0xa0000 @ 01000954
    ldrgt pc, [r2, r0, lsl #2] @ 01000958
    .word 0xea4035b3 @ 0100095c b #0x200e030
@ z80_dispatch_01000960 at 0x01000960
    bic r5, r5, #0x12 @ 01000960
    orr r5, r5, #1 @ 01000964
    ldrb r0, [fp], #1 @ 01000968
    subs r5, r5, #0x40000 @ 0100096c
    ldrgt pc, [r2, r0, lsl #2] @ 01000970
    .word 0xea4035ad @ 01000974 b #0x200e030
    .zero 8
@ z80_dispatch_01000980 at 0x01000980
    tst r5, #1 @ 01000980
    ldrsbne r0, [fp], #1 @ 01000984
    subne r5, r5, #0x50000 @ 01000988
    addeq fp, fp, #1 @ 0100098c
    addne fp, fp, r0 @ 01000990
    ldrb r0, [fp], #1 @ 01000994
    subs r5, r5, #0x70000 @ 01000998
    ldrgt pc, [r2, r0, lsl #2] @ 0100099c
    .word 0xea4035a2 @ 010009a0 b #0x200e030
    .zero 12
@ z80_dispatch_010009b0 at 0x010009b0
    sub r0, ip, r3 @ 010009b0
    bic r5, r5, #0x13 @ 010009b4
    adds sl, sl, r0, lsl #16 @ 010009b8
    orrhs r5, r5, #1 @ 010009bc
    ldrb r0, [fp], #1 @ 010009c0
    subs r5, r5, #0xb0000 @ 010009c4
    ldrgt pc, [r2, r0, lsl #2] @ 010009c8
    .word 0xea403597 @ 010009cc b #0x200e030
@ z80_dispatch_010009d0 at 0x010009d0
    ldrb r0, [fp], #1 @ 010009d0
    ldrb lr, [fp], #1 @ 010009d4
    orr r0, r0, lr, lsl #8 @ 010009d8
    cmp r0, #0x2000 @ 010009dc
    blge .L_01002cd0 @ 010009e0
    ldrb r0, [r3, r0] @ 010009e4
    lsl r4, r0, #0x18 @ 010009e8
    ldrb r0, [fp], #1 @ 010009ec
    subs r5, r5, #0xd0000 @ 010009f0
    ldrgt pc, [r2, r0, lsl #2] @ 010009f4
    .word 0xea40358c @ 010009f8 b #0x200e030
    .zero 4
@ z80_dispatch_01000a00 at 0x01000a00
    sub ip, ip, #1 @ 01000a00
    ldrb r0, [fp], #1 @ 01000a04
    subs r5, r5, #0x60000 @ 01000a08
    ldrgt pc, [r2, r0, lsl #2] @ 01000a0c
    .word 0xea403586 @ 01000a10 b #0x200e030
    .zero 12
@ z80_dispatch_01000a20 at 0x01000a20
    bic r5, r5, #0xd6 @ 01000a20
    adds r4, r4, #0x1000000 @ 01000a24
    orrmi r5, r5, #0x80 @ 01000a28
    orrvs r5, r5, #4 @ 01000a2c
    orreq r5, r5, #0x40 @ 01000a30
    ldrb r0, [fp], #1 @ 01000a34
    subs r5, r5, #0x40000 @ 01000a38
    ldrgt pc, [r2, r0, lsl #2] @ 01000a3c
    .word 0xea40357a @ 01000a40 b #0x200e030
    .zero 12
@ z80_dispatch_01000a50 at 0x01000a50
    bic r5, r5, #0xd6 @ 01000a50
    subs r4, r4, #0x1000000 @ 01000a54
    orr r5, r5, #2 @ 01000a58
    orrmi r5, r5, #0x80 @ 01000a5c
    orreq r5, r5, #0x40 @ 01000a60
    orrvs r5, r5, #4 @ 01000a64
    ldrb r0, [fp], #1 @ 01000a68
    subs r5, r5, #0x40000 @ 01000a6c
    ldrgt pc, [r2, r0, lsl #2] @ 01000a70
    .word 0xea40356d @ 01000a74 b #0x200e030
    .zero 8
@ z80_dispatch_01000a80 at 0x01000a80
    ldrb r0, [fp], #1 @ 01000a80
    lsl r4, r0, #0x18 @ 01000a84
    ldrb r0, [fp], #1 @ 01000a88
    subs r5, r5, #0x70000 @ 01000a8c
    ldrgt pc, [r2, r0, lsl #2] @ 01000a90
    .word 0xea403565 @ 01000a94 b #0x200e030
    .zero 8
@ z80_dispatch_01000aa0 at 0x01000aa0
    tst r5, #1 @ 01000aa0
    bicne r5, r5, #3 @ 01000aa4
    biceq r5, r5, #0x12 @ 01000aa8
    orrne r5, r5, #0x10 @ 01000aac
    orreq r5, r5, #1 @ 01000ab0
    ldrb r0, [fp], #1 @ 01000ab4
    subs r5, r5, #0x40000 @ 01000ab8
    ldrgt pc, [r2, r0, lsl #2] @ 01000abc
    .word 0xea40355a @ 01000ac0 b #0x200e030
    .zero 12
@ z80_dispatch_01000ad0 at 0x01000ad0
    ldrb r0, [fp], #1 @ 01000ad0
    subs r5, r5, #0x40000 @ 01000ad4
    ldrgt pc, [r2, r0, lsl #2] @ 01000ad8
    .word 0xea403553 @ 01000adc b #0x200e030
@ z80_dispatch_01000ae0 at 0x01000ae0
    mov r6, r7 @ 01000ae0
    ldrb r0, [fp], #1 @ 01000ae4
    subs r5, r5, #0x40000 @ 01000ae8
    ldrgt pc, [r2, r0, lsl #2] @ 01000aec
    .word 0xea40354e @ 01000af0 b #0x200e030
    .zero 12
@ z80_dispatch_01000b00 at 0x01000b00
    mov r6, r8 @ 01000b00
    ldrb r0, [fp], #1 @ 01000b04
    subs r5, r5, #0x40000 @ 01000b08
    ldrgt pc, [r2, r0, lsl #2] @ 01000b0c
    .word 0xea403546 @ 01000b10 b #0x200e030
    .zero 12
@ z80_dispatch_01000b20 at 0x01000b20
    mov r6, sb @ 01000b20
    ldrb r0, [fp], #1 @ 01000b24
    subs r5, r5, #0x40000 @ 01000b28
    ldrgt pc, [r2, r0, lsl #2] @ 01000b2c
    .word 0xea40353e @ 01000b30 b #0x200e030
    .zero 12
@ z80_dispatch_01000b40 at 0x01000b40
    and r6, sl, #0xff000000 @ 01000b40
    ldrb r0, [fp], #1 @ 01000b44
    subs r5, r5, #0x40000 @ 01000b48
    ldrgt pc, [r2, r0, lsl #2] @ 01000b4c
    .word 0xea403536 @ 01000b50 b #0x200e030
    .zero 12
@ z80_dispatch_01000b60 at 0x01000b60
    lsl r6, sl, #8 @ 01000b60
    ldrb r0, [fp], #1 @ 01000b64
    subs r5, r5, #0x40000 @ 01000b68
    ldrgt pc, [r2, r0, lsl #2] @ 01000b6c
    .word 0xea40352e @ 01000b70 b #0x200e030
    .zero 12
@ z80_dispatch_01000b80 at 0x01000b80
    cmp sl, #0x20000000 @ 01000b80
    blhs .L_01002cec @ 01000b84
    ldrb r0, [r3, sl, lsr #16] @ 01000b88
    lsl r6, r0, #0x18 @ 01000b8c
    ldrb r0, [fp], #1 @ 01000b90
    subs r5, r5, #0x70000 @ 01000b94
    ldrgt pc, [r2, r0, lsl #2] @ 01000b98
    .word 0xea403523 @ 01000b9c b #0x200e030
@ z80_dispatch_01000ba0 at 0x01000ba0
    mov r6, r4 @ 01000ba0
    ldrb r0, [fp], #1 @ 01000ba4
    subs r5, r5, #0x40000 @ 01000ba8
    ldrgt pc, [r2, r0, lsl #2] @ 01000bac
    .word 0xea40351e @ 01000bb0 b #0x200e030
    .zero 12
@ z80_dispatch_01000bc0 at 0x01000bc0
    mov r7, r6 @ 01000bc0
    ldrb r0, [fp], #1 @ 01000bc4
    subs r5, r5, #0x40000 @ 01000bc8
    ldrgt pc, [r2, r0, lsl #2] @ 01000bcc
    .word 0xea403516 @ 01000bd0 b #0x200e030
    .zero 12
@ z80_dispatch_01000be0 at 0x01000be0
    ldrb r0, [fp], #1 @ 01000be0
    subs r5, r5, #0x40000 @ 01000be4
    ldrgt pc, [r2, r0, lsl #2] @ 01000be8
    .word 0xea40350f @ 01000bec b #0x200e030
@ z80_dispatch_01000bf0 at 0x01000bf0
    mov r7, r8 @ 01000bf0
    ldrb r0, [fp], #1 @ 01000bf4
    subs r5, r5, #0x40000 @ 01000bf8
    ldrgt pc, [r2, r0, lsl #2] @ 01000bfc
    .word 0xea40350a @ 01000c00 b #0x200e030
    .zero 12
@ z80_dispatch_01000c10 at 0x01000c10
    mov r7, sb @ 01000c10
    ldrb r0, [fp], #1 @ 01000c14
    subs r5, r5, #0x40000 @ 01000c18
    ldrgt pc, [r2, r0, lsl #2] @ 01000c1c
    .word 0xea403502 @ 01000c20 b #0x200e030
    .zero 12
@ z80_dispatch_01000c30 at 0x01000c30
    and r7, sl, #0xff000000 @ 01000c30
    ldrb r0, [fp], #1 @ 01000c34
    subs r5, r5, #0x40000 @ 01000c38
    ldrgt pc, [r2, r0, lsl #2] @ 01000c3c
    .word 0xea4034fa @ 01000c40 b #0x200e030
    .zero 12
@ z80_dispatch_01000c50 at 0x01000c50
    lsl r7, sl, #8 @ 01000c50
    ldrb r0, [fp], #1 @ 01000c54
    subs r5, r5, #0x40000 @ 01000c58
    ldrgt pc, [r2, r0, lsl #2] @ 01000c5c
    .word 0xea4034f2 @ 01000c60 b #0x200e030
    .zero 12
@ z80_dispatch_01000c70 at 0x01000c70
    cmp sl, #0x20000000 @ 01000c70
    blhs .L_01002cec @ 01000c74
    ldrb r0, [r3, sl, lsr #16] @ 01000c78
    lsl r7, r0, #0x18 @ 01000c7c
    ldrb r0, [fp], #1 @ 01000c80
    subs r5, r5, #0x70000 @ 01000c84
    ldrgt pc, [r2, r0, lsl #2] @ 01000c88
    .word 0xea4034e7 @ 01000c8c b #0x200e030
@ z80_dispatch_01000c90 at 0x01000c90
    mov r7, r4 @ 01000c90
    ldrb r0, [fp], #1 @ 01000c94
    subs r5, r5, #0x40000 @ 01000c98
    ldrgt pc, [r2, r0, lsl #2] @ 01000c9c
    .word 0xea4034e2 @ 01000ca0 b #0x200e030
    .zero 12
@ z80_dispatch_01000cb0 at 0x01000cb0
    mov r8, r6 @ 01000cb0
    ldrb r0, [fp], #1 @ 01000cb4
    subs r5, r5, #0x40000 @ 01000cb8
    ldrgt pc, [r2, r0, lsl #2] @ 01000cbc
    .word 0xea4034da @ 01000cc0 b #0x200e030
    .zero 12
@ z80_dispatch_01000cd0 at 0x01000cd0
    mov r8, r7 @ 01000cd0
    ldrb r0, [fp], #1 @ 01000cd4
    subs r5, r5, #0x40000 @ 01000cd8
    ldrgt pc, [r2, r0, lsl #2] @ 01000cdc
    .word 0xea4034d2 @ 01000ce0 b #0x200e030
    .zero 12
@ z80_dispatch_01000cf0 at 0x01000cf0
    ldrb r0, [fp], #1 @ 01000cf0
    subs r5, r5, #0x40000 @ 01000cf4
    ldrgt pc, [r2, r0, lsl #2] @ 01000cf8
    .word 0xea4034cb @ 01000cfc b #0x200e030
@ z80_dispatch_01000d00 at 0x01000d00
    mov r8, sb @ 01000d00
    ldrb r0, [fp], #1 @ 01000d04
    subs r5, r5, #0x40000 @ 01000d08
    ldrgt pc, [r2, r0, lsl #2] @ 01000d0c
    .word 0xea4034c6 @ 01000d10 b #0x200e030
    .zero 12
@ z80_dispatch_01000d20 at 0x01000d20
    and r8, sl, #0xff000000 @ 01000d20
    ldrb r0, [fp], #1 @ 01000d24
    subs r5, r5, #0x40000 @ 01000d28
    ldrgt pc, [r2, r0, lsl #2] @ 01000d2c
    .word 0xea4034be @ 01000d30 b #0x200e030
    .zero 12
@ z80_dispatch_01000d40 at 0x01000d40
    lsl r8, sl, #8 @ 01000d40
    ldrb r0, [fp], #1 @ 01000d44
    subs r5, r5, #0x40000 @ 01000d48
    ldrgt pc, [r2, r0, lsl #2] @ 01000d4c
    .word 0xea4034b6 @ 01000d50 b #0x200e030
    .zero 12
@ z80_dispatch_01000d60 at 0x01000d60
    cmp sl, #0x20000000 @ 01000d60
    blhs .L_01002cec @ 01000d64
    ldrb r0, [r3, sl, lsr #16] @ 01000d68
    lsl r8, r0, #0x18 @ 01000d6c
    ldrb r0, [fp], #1 @ 01000d70
    subs r5, r5, #0x70000 @ 01000d74
    ldrgt pc, [r2, r0, lsl #2] @ 01000d78
    .word 0xea4034ab @ 01000d7c b #0x200e030
@ z80_dispatch_01000d80 at 0x01000d80
    mov r8, r4 @ 01000d80
    ldrb r0, [fp], #1 @ 01000d84
    subs r5, r5, #0x40000 @ 01000d88
    ldrgt pc, [r2, r0, lsl #2] @ 01000d8c
    .word 0xea4034a6 @ 01000d90 b #0x200e030
    .zero 12
@ z80_dispatch_01000da0 at 0x01000da0
    mov sb, r6 @ 01000da0
    ldrb r0, [fp], #1 @ 01000da4
    subs r5, r5, #0x40000 @ 01000da8
    ldrgt pc, [r2, r0, lsl #2] @ 01000dac
    .word 0xea40349e @ 01000db0 b #0x200e030
    .zero 12
@ z80_dispatch_01000dc0 at 0x01000dc0
    mov sb, r7 @ 01000dc0
    ldrb r0, [fp], #1 @ 01000dc4
    subs r5, r5, #0x40000 @ 01000dc8
    ldrgt pc, [r2, r0, lsl #2] @ 01000dcc
    .word 0xea403496 @ 01000dd0 b #0x200e030
    .zero 12
@ z80_dispatch_01000de0 at 0x01000de0
    mov sb, r8 @ 01000de0
    ldrb r0, [fp], #1 @ 01000de4
    subs r5, r5, #0x40000 @ 01000de8
    ldrgt pc, [r2, r0, lsl #2] @ 01000dec
    .word 0xea40348e @ 01000df0 b #0x200e030
    .zero 12
@ z80_dispatch_01000e00 at 0x01000e00
    ldrb r0, [fp], #1 @ 01000e00
    subs r5, r5, #0x40000 @ 01000e04
    ldrgt pc, [r2, r0, lsl #2] @ 01000e08
    .word 0xea403487 @ 01000e0c b #0x200e030
@ z80_dispatch_01000e10 at 0x01000e10
    and sb, sl, #0xff000000 @ 01000e10
    ldrb r0, [fp], #1 @ 01000e14
    subs r5, r5, #0x40000 @ 01000e18
    ldrgt pc, [r2, r0, lsl #2] @ 01000e1c
    .word 0xea403482 @ 01000e20 b #0x200e030
    .zero 12
@ z80_dispatch_01000e30 at 0x01000e30
    lsl sb, sl, #8 @ 01000e30
    ldrb r0, [fp], #1 @ 01000e34
    subs r5, r5, #0x40000 @ 01000e38
    ldrgt pc, [r2, r0, lsl #2] @ 01000e3c
    .word 0xea40347a @ 01000e40 b #0x200e030
    .zero 12
@ z80_dispatch_01000e50 at 0x01000e50
    cmp sl, #0x20000000 @ 01000e50
    blhs .L_01002cec @ 01000e54
    ldrb r0, [r3, sl, lsr #16] @ 01000e58
    lsl sb, r0, #0x18 @ 01000e5c
    ldrb r0, [fp], #1 @ 01000e60
    subs r5, r5, #0x70000 @ 01000e64
    ldrgt pc, [r2, r0, lsl #2] @ 01000e68
    .word 0xea40346f @ 01000e6c b #0x200e030
@ z80_dispatch_01000e70 at 0x01000e70
    mov sb, r4 @ 01000e70
    ldrb r0, [fp], #1 @ 01000e74
    subs r5, r5, #0x40000 @ 01000e78
    ldrgt pc, [r2, r0, lsl #2] @ 01000e7c
    .word 0xea40346a @ 01000e80 b #0x200e030
    .zero 12
@ z80_dispatch_01000e90 at 0x01000e90
    and sl, sl, #0xff0000 @ 01000e90
    orr sl, sl, r6 @ 01000e94
    ldrb r0, [fp], #1 @ 01000e98
    subs r5, r5, #0x40000 @ 01000e9c
    ldrgt pc, [r2, r0, lsl #2] @ 01000ea0
    .word 0xea403461 @ 01000ea4 b #0x200e030
    .zero 8
@ z80_dispatch_01000eb0 at 0x01000eb0
    and sl, sl, #0xff0000 @ 01000eb0
    orr sl, sl, r7 @ 01000eb4
    ldrb r0, [fp], #1 @ 01000eb8
    subs r5, r5, #0x40000 @ 01000ebc
    ldrgt pc, [r2, r0, lsl #2] @ 01000ec0
    .word 0xea403459 @ 01000ec4 b #0x200e030
    .zero 8
@ z80_dispatch_01000ed0 at 0x01000ed0
    and sl, sl, #0xff0000 @ 01000ed0
    orr sl, sl, r8 @ 01000ed4
    ldrb r0, [fp], #1 @ 01000ed8
    subs r5, r5, #0x40000 @ 01000edc
    ldrgt pc, [r2, r0, lsl #2] @ 01000ee0
    .word 0xea403451 @ 01000ee4 b #0x200e030
    .zero 8
@ z80_dispatch_01000ef0 at 0x01000ef0
    and sl, sl, #0xff0000 @ 01000ef0
    orr sl, sl, sb @ 01000ef4
    ldrb r0, [fp], #1 @ 01000ef8
    subs r5, r5, #0x40000 @ 01000efc
    ldrgt pc, [r2, r0, lsl #2] @ 01000f00
    .word 0xea403449 @ 01000f04 b #0x200e030
    .zero 8
@ z80_dispatch_01000f10 at 0x01000f10
    ldrb r0, [fp], #1 @ 01000f10
    subs r5, r5, #0x40000 @ 01000f14
    ldrgt pc, [r2, r0, lsl #2] @ 01000f18
    .word 0xea403443 @ 01000f1c b #0x200e030
@ z80_dispatch_01000f20 at 0x01000f20
    and sl, sl, #0xff0000 @ 01000f20
    orr sl, sl, sl, lsl #8 @ 01000f24
    ldrb r0, [fp], #1 @ 01000f28
    subs r5, r5, #0x40000 @ 01000f2c
    ldrgt pc, [r2, r0, lsl #2] @ 01000f30
    .word 0xea40343d @ 01000f34 b #0x200e030
    .zero 8
@ z80_dispatch_01000f40 at 0x01000f40
    cmp sl, #0x20000000 @ 01000f40
    blhs .L_01002cec @ 01000f44
    ldrb r0, [r3, sl, lsr #16] @ 01000f48
    and sl, sl, #0xff0000 @ 01000f4c
    orr sl, sl, r0, lsl #24 @ 01000f50
    ldrb r0, [fp], #1 @ 01000f54
    subs r5, r5, #0x70000 @ 01000f58
    ldrgt pc, [r2, r0, lsl #2] @ 01000f5c
    .word 0xea403432 @ 01000f60 b #0x200e030
    .zero 12
@ z80_dispatch_01000f70 at 0x01000f70
    and sl, sl, #0xff0000 @ 01000f70
    orr sl, sl, r4 @ 01000f74
    ldrb r0, [fp], #1 @ 01000f78
    subs r5, r5, #0x40000 @ 01000f7c
    ldrgt pc, [r2, r0, lsl #2] @ 01000f80
    .word 0xea403429 @ 01000f84 b #0x200e030
    .zero 8
@ z80_dispatch_01000f90 at 0x01000f90
    and sl, sl, #0xff000000 @ 01000f90
    orr sl, sl, r6, lsr #8 @ 01000f94
    ldrb r0, [fp], #1 @ 01000f98
    subs r5, r5, #0x40000 @ 01000f9c
    ldrgt pc, [r2, r0, lsl #2] @ 01000fa0
    .word 0xea403421 @ 01000fa4 b #0x200e030
    .zero 8
@ z80_dispatch_01000fb0 at 0x01000fb0
    and sl, sl, #0xff000000 @ 01000fb0
    orr sl, sl, r7, lsr #8 @ 01000fb4
    ldrb r0, [fp], #1 @ 01000fb8
    subs r5, r5, #0x40000 @ 01000fbc
    ldrgt pc, [r2, r0, lsl #2] @ 01000fc0
    .word 0xea403419 @ 01000fc4 b #0x200e030
    .zero 8
@ z80_dispatch_01000fd0 at 0x01000fd0
    and sl, sl, #0xff000000 @ 01000fd0
    orr sl, sl, r8, lsr #8 @ 01000fd4
    ldrb r0, [fp], #1 @ 01000fd8
    subs r5, r5, #0x40000 @ 01000fdc
    ldrgt pc, [r2, r0, lsl #2] @ 01000fe0
    .word 0xea403411 @ 01000fe4 b #0x200e030
    .zero 8
@ z80_dispatch_01000ff0 at 0x01000ff0
    and sl, sl, #0xff000000 @ 01000ff0
    orr sl, sl, sb, lsr #8 @ 01000ff4
    ldrb r0, [fp], #1 @ 01000ff8
    subs r5, r5, #0x40000 @ 01000ffc
    ldrgt pc, [r2, r0, lsl #2] @ 01001000
    .word 0xea403409 @ 01001004 b #0x200e030
    .zero 8
@ z80_dispatch_01001010 at 0x01001010
    and sl, sl, #0xff000000 @ 01001010
    orr sl, sl, sl, lsr #8 @ 01001014
    ldrb r0, [fp], #1 @ 01001018
    subs r5, r5, #0x40000 @ 0100101c
    ldrgt pc, [r2, r0, lsl #2] @ 01001020
    .word 0xea403401 @ 01001024 b #0x200e030
    .zero 8
@ z80_dispatch_01001030 at 0x01001030
    ldrb r0, [fp], #1 @ 01001030
    subs r5, r5, #0x40000 @ 01001034
    ldrgt pc, [r2, r0, lsl #2] @ 01001038
    .word 0xea4033fb @ 0100103c b #0x200e030
@ z80_dispatch_01001040 at 0x01001040
    cmp sl, #0x20000000 @ 01001040
    blhs .L_01002cec @ 01001044
    ldrb r0, [r3, sl, lsr #16] @ 01001048
    and sl, sl, #0xff000000 @ 0100104c
    orr sl, sl, r0, lsl #16 @ 01001050
    ldrb r0, [fp], #1 @ 01001054
    subs r5, r5, #0x70000 @ 01001058
    ldrgt pc, [r2, r0, lsl #2] @ 0100105c
    .word 0xea4033f2 @ 01001060 b #0x200e030
    .zero 12
@ z80_dispatch_01001070 at 0x01001070
    and sl, sl, #0xff000000 @ 01001070
    orr sl, sl, r4, lsr #8 @ 01001074
    ldrb r0, [fp], #1 @ 01001078
    subs r5, r5, #0x40000 @ 0100107c
    ldrgt pc, [r2, r0, lsl #2] @ 01001080
    .word 0xea4033e9 @ 01001084 b #0x200e030
    .zero 8
@ z80_dispatch_01001090 at 0x01001090
    lsr r1, r6, #0x18 @ 01001090
    cmp sl, #0x20000000 @ 01001094
    blhs .L_01002d2c @ 01001098
    strb r1, [r3, sl, lsr #16] @ 0100109c
    ldrb r0, [fp], #1 @ 010010a0
    subs r5, r5, #0x70000 @ 010010a4
    ldrgt pc, [r2, r0, lsl #2] @ 010010a8
    .word 0xea4033df @ 010010ac b #0x200e030
@ z80_dispatch_010010b0 at 0x010010b0
    lsr r1, r7, #0x18 @ 010010b0
    cmp sl, #0x20000000 @ 010010b4
    blhs .L_01002d2c @ 010010b8
    strb r1, [r3, sl, lsr #16] @ 010010bc
    ldrb r0, [fp], #1 @ 010010c0
    subs r5, r5, #0x70000 @ 010010c4
    ldrgt pc, [r2, r0, lsl #2] @ 010010c8
    .word 0xea4033d7 @ 010010cc b #0x200e030
@ z80_dispatch_010010d0 at 0x010010d0
    lsr r1, r8, #0x18 @ 010010d0
    cmp sl, #0x20000000 @ 010010d4
    blhs .L_01002d2c @ 010010d8
    strb r1, [r3, sl, lsr #16] @ 010010dc
    ldrb r0, [fp], #1 @ 010010e0
    subs r5, r5, #0x70000 @ 010010e4
    ldrgt pc, [r2, r0, lsl #2] @ 010010e8
    .word 0xea4033cf @ 010010ec b #0x200e030
@ z80_dispatch_010010f0 at 0x010010f0
    lsr r1, sb, #0x18 @ 010010f0
    cmp sl, #0x20000000 @ 010010f4
    blhs .L_01002d2c @ 010010f8
    strb r1, [r3, sl, lsr #16] @ 010010fc
    ldrb r0, [fp], #1 @ 01001100
    subs r5, r5, #0x70000 @ 01001104
    ldrgt pc, [r2, r0, lsl #2] @ 01001108
    .word 0xea4033c7 @ 0100110c b #0x200e030
@ z80_dispatch_01001110 at 0x01001110
    lsr r1, sl, #0x18 @ 01001110
    cmp sl, #0x20000000 @ 01001114
    blhs .L_01002d2c @ 01001118
    strb r1, [r3, sl, lsr #16] @ 0100111c
    ldrb r0, [fp], #1 @ 01001120
    subs r5, r5, #0x70000 @ 01001124
    ldrgt pc, [r2, r0, lsl #2] @ 01001128
    .word 0xea4033bf @ 0100112c b #0x200e030
@ z80_dispatch_01001130 at 0x01001130
    and r1, sl, #0xff0000 @ 01001130
    lsr r1, r1, #0x10 @ 01001134
    cmp sl, #0x20000000 @ 01001138
    blhs .L_01002d2c @ 0100113c
    strb r1, [r3, sl, lsr #16] @ 01001140
    ldrb r0, [fp], #1 @ 01001144
    subs r5, r5, #0x70000 @ 01001148
    ldrgt pc, [r2, r0, lsl #2] @ 0100114c
    .word 0xea4033b6 @ 01001150 b #0x200e030
    .zero 12
@ z80_dispatch_01001160 at 0x01001160
    sub fp, fp, #1 @ 01001160
    and r5, r5, #0xff @ 01001164
    ldrb r0, [fp], #1 @ 01001168
    subs r5, r5, #0x40000 @ 0100116c
    ldrgt pc, [r2, r0, lsl #2] @ 01001170
    .word 0xea4033ad @ 01001174 b #0x200e030
    .zero 8
@ z80_dispatch_01001180 at 0x01001180
    lsr r1, r4, #0x18 @ 01001180
    cmp sl, #0x20000000 @ 01001184
    blhs .L_01002d2c @ 01001188
    strb r1, [r3, sl, lsr #16] @ 0100118c
    ldrb r0, [fp], #1 @ 01001190
    subs r5, r5, #0x70000 @ 01001194
    ldrgt pc, [r2, r0, lsl #2] @ 01001198
    .word 0xea4033a3 @ 0100119c b #0x200e030
@ z80_dispatch_010011a0 at 0x010011a0
    mov r4, r6 @ 010011a0
    ldrb r0, [fp], #1 @ 010011a4
    subs r5, r5, #0x40000 @ 010011a8
    ldrgt pc, [r2, r0, lsl #2] @ 010011ac
    .word 0xea40339e @ 010011b0 b #0x200e030
    .zero 12
@ z80_dispatch_010011c0 at 0x010011c0
    mov r4, r7 @ 010011c0
    ldrb r0, [fp], #1 @ 010011c4
    subs r5, r5, #0x40000 @ 010011c8
    ldrgt pc, [r2, r0, lsl #2] @ 010011cc
    .word 0xea403396 @ 010011d0 b #0x200e030
    .zero 12
@ z80_dispatch_010011e0 at 0x010011e0
    mov r4, r8 @ 010011e0
    ldrb r0, [fp], #1 @ 010011e4
    subs r5, r5, #0x40000 @ 010011e8
    ldrgt pc, [r2, r0, lsl #2] @ 010011ec
    .word 0xea40338e @ 010011f0 b #0x200e030
    .zero 12
@ z80_dispatch_01001200 at 0x01001200
    mov r4, sb @ 01001200
    ldrb r0, [fp], #1 @ 01001204
    subs r5, r5, #0x40000 @ 01001208
    ldrgt pc, [r2, r0, lsl #2] @ 0100120c
    .word 0xea403386 @ 01001210 b #0x200e030
    .zero 12
@ z80_dispatch_01001220 at 0x01001220
    and r4, sl, #0xff000000 @ 01001220
    ldrb r0, [fp], #1 @ 01001224
    subs r5, r5, #0x40000 @ 01001228
    ldrgt pc, [r2, r0, lsl #2] @ 0100122c
    .word 0xea40337e @ 01001230 b #0x200e030
    .zero 12
@ z80_dispatch_01001240 at 0x01001240
    lsl r4, sl, #8 @ 01001240
    ldrb r0, [fp], #1 @ 01001244
    subs r5, r5, #0x40000 @ 01001248
    ldrgt pc, [r2, r0, lsl #2] @ 0100124c
    .word 0xea403376 @ 01001250 b #0x200e030
    .zero 12
@ z80_dispatch_01001260 at 0x01001260
    cmp sl, #0x20000000 @ 01001260
    blhs .L_01002cec @ 01001264
    ldrb r0, [r3, sl, lsr #16] @ 01001268
    lsl r4, r0, #0x18 @ 0100126c
    ldrb r0, [fp], #1 @ 01001270
    subs r5, r5, #0x70000 @ 01001274
    ldrgt pc, [r2, r0, lsl #2] @ 01001278
    .word 0xea40336b @ 0100127c b #0x200e030
@ z80_dispatch_01001280 at 0x01001280
    ldrb r0, [fp], #1 @ 01001280
    subs r5, r5, #0x40000 @ 01001284
    ldrgt pc, [r2, r0, lsl #2] @ 01001288
    .word 0xea403367 @ 0100128c b #0x200e030
@ z80_dispatch_01001290 at 0x01001290
    bic r5, r5, #0xd7 @ 01001290
    adds r4, r4, r6 @ 01001294
    orrmi r5, r5, #0x80 @ 01001298
    orreq r5, r5, #0x40 @ 0100129c
    orrhs r5, r5, #1 @ 010012a0
    orrvs r5, r5, #4 @ 010012a4
    ldrb r0, [fp], #1 @ 010012a8
    subs r5, r5, #0x40000 @ 010012ac
    ldrgt pc, [r2, r0, lsl #2] @ 010012b0
    .word 0xea40335d @ 010012b4 b #0x200e030
    .zero 8
@ z80_dispatch_010012c0 at 0x010012c0
    bic r5, r5, #0xd7 @ 010012c0
    adds r4, r4, r7 @ 010012c4
    orrmi r5, r5, #0x80 @ 010012c8
    orreq r5, r5, #0x40 @ 010012cc
    orrhs r5, r5, #1 @ 010012d0
    orrvs r5, r5, #4 @ 010012d4
    ldrb r0, [fp], #1 @ 010012d8
    subs r5, r5, #0x40000 @ 010012dc
    ldrgt pc, [r2, r0, lsl #2] @ 010012e0
    .word 0xea403351 @ 010012e4 b #0x200e030
    .zero 8
@ z80_dispatch_010012f0 at 0x010012f0
    bic r5, r5, #0xd7 @ 010012f0
    adds r4, r4, r8 @ 010012f4
    orrmi r5, r5, #0x80 @ 010012f8
    orreq r5, r5, #0x40 @ 010012fc
    orrhs r5, r5, #1 @ 01001300
    orrvs r5, r5, #4 @ 01001304
    ldrb r0, [fp], #1 @ 01001308
    subs r5, r5, #0x40000 @ 0100130c
    ldrgt pc, [r2, r0, lsl #2] @ 01001310
    .word 0xea403345 @ 01001314 b #0x200e030
    .zero 8
@ z80_dispatch_01001320 at 0x01001320
    bic r5, r5, #0xd7 @ 01001320
    adds r4, r4, sb @ 01001324
    orrmi r5, r5, #0x80 @ 01001328
    orreq r5, r5, #0x40 @ 0100132c
    orrhs r5, r5, #1 @ 01001330
    orrvs r5, r5, #4 @ 01001334
    ldrb r0, [fp], #1 @ 01001338
    subs r5, r5, #0x40000 @ 0100133c
    ldrgt pc, [r2, r0, lsl #2] @ 01001340
    .word 0xea403339 @ 01001344 b #0x200e030
    .zero 8
@ z80_dispatch_01001350 at 0x01001350
    and r0, sl, #0xff000000 @ 01001350
    bic r5, r5, #0xd7 @ 01001354
    adds r4, r4, r0 @ 01001358
    orrmi r5, r5, #0x80 @ 0100135c
    orreq r5, r5, #0x40 @ 01001360
    orrhs r5, r5, #1 @ 01001364
    orrvs r5, r5, #4 @ 01001368
    ldrb r0, [fp], #1 @ 0100136c
    subs r5, r5, #0x40000 @ 01001370
    ldrgt pc, [r2, r0, lsl #2] @ 01001374
    .word 0xea40332c @ 01001378 b #0x200e030
    .zero 4
@ z80_dispatch_01001380 at 0x01001380
    lsl r0, sl, #8 @ 01001380
    bic r5, r5, #0xd7 @ 01001384
    adds r4, r4, r0 @ 01001388
    orrmi r5, r5, #0x80 @ 0100138c
    orreq r5, r5, #0x40 @ 01001390
    orrhs r5, r5, #1 @ 01001394
    orrvs r5, r5, #4 @ 01001398
    ldrb r0, [fp], #1 @ 0100139c
    subs r5, r5, #0x40000 @ 010013a0
    ldrgt pc, [r2, r0, lsl #2] @ 010013a4
    .word 0xea403320 @ 010013a8 b #0x200e030
    .zero 4
@ z80_dispatch_010013b0 at 0x010013b0
    cmp sl, #0x20000000 @ 010013b0
    blhs .L_01002cec @ 010013b4
    ldrb r0, [r3, sl, lsr #16] @ 010013b8
    bic r5, r5, #0xd7 @ 010013bc
    adds r4, r4, r0, lsl #24 @ 010013c0
    orrmi r5, r5, #0x80 @ 010013c4
    orreq r5, r5, #0x40 @ 010013c8
    orrhs r5, r5, #1 @ 010013cc
    orrvs r5, r5, #4 @ 010013d0
    ldrb r0, [fp], #1 @ 010013d4
    subs r5, r5, #0x70000 @ 010013d8
    ldrgt pc, [r2, r0, lsl #2] @ 010013dc
    .word 0xea403312 @ 010013e0 b #0x200e030
    .zero 12
@ z80_dispatch_010013f0 at 0x010013f0
    bic r5, r5, #0xd7 @ 010013f0
    adds r4, r4, r4 @ 010013f4
    orrmi r5, r5, #0x80 @ 010013f8
    orreq r5, r5, #0x40 @ 010013fc
    orrhs r5, r5, #1 @ 01001400
    orrvs r5, r5, #4 @ 01001404
    ldrb r0, [fp], #1 @ 01001408
    subs r5, r5, #0x40000 @ 0100140c
    ldrgt pc, [r2, r0, lsl #2] @ 01001410
    .word 0xea403305 @ 01001414 b #0x200e030
    .zero 8
@ z80_dispatch_01001420 at 0x01001420
    lsrs r1, r5, #1 @ 01001420
    bic r5, r5, #0xd7 @ 01001424
    addshs r4, r4, #0x1000000 @ 01001428
    orrhs r5, r5, #1 @ 0100142c
    orrvs r5, r5, #4 @ 01001430
    adds r4, r4, r6 @ 01001434
    orrmi r5, r5, #0x80 @ 01001438
    orreq r5, r5, #0x40 @ 0100143c
    orrhs r5, r5, #1 @ 01001440
    eorvs r5, r5, #4 @ 01001444
    ldrb r0, [fp], #1 @ 01001448
    subs r5, r5, #0x40000 @ 0100144c
    ldrgt pc, [r2, r0, lsl #2] @ 01001450
    .word 0xea4032f5 @ 01001454 b #0x200e030
    .zero 8
@ z80_dispatch_01001460 at 0x01001460
    lsrs r1, r5, #1 @ 01001460
    bic r5, r5, #0xd7 @ 01001464
    addshs r4, r4, #0x1000000 @ 01001468
    orrhs r5, r5, #1 @ 0100146c
    orrvs r5, r5, #4 @ 01001470
    adds r4, r4, r7 @ 01001474
    orrmi r5, r5, #0x80 @ 01001478
    orreq r5, r5, #0x40 @ 0100147c
    orrhs r5, r5, #1 @ 01001480
    eorvs r5, r5, #4 @ 01001484
    ldrb r0, [fp], #1 @ 01001488
    subs r5, r5, #0x40000 @ 0100148c
    ldrgt pc, [r2, r0, lsl #2] @ 01001490
    .word 0xea4032e5 @ 01001494 b #0x200e030
    .zero 8
@ z80_dispatch_010014a0 at 0x010014a0
    lsrs r1, r5, #1 @ 010014a0
    bic r5, r5, #0xd7 @ 010014a4
    addshs r4, r4, #0x1000000 @ 010014a8
    orrhs r5, r5, #1 @ 010014ac
    orrvs r5, r5, #4 @ 010014b0
    adds r4, r4, r8 @ 010014b4
    orrmi r5, r5, #0x80 @ 010014b8
    orreq r5, r5, #0x40 @ 010014bc
    orrhs r5, r5, #1 @ 010014c0
    eorvs r5, r5, #4 @ 010014c4
    ldrb r0, [fp], #1 @ 010014c8
    subs r5, r5, #0x40000 @ 010014cc
    ldrgt pc, [r2, r0, lsl #2] @ 010014d0
    .word 0xea4032d5 @ 010014d4 b #0x200e030
    .zero 8
@ z80_dispatch_010014e0 at 0x010014e0
    lsrs r1, r5, #1 @ 010014e0
    bic r5, r5, #0xd7 @ 010014e4
    addshs r4, r4, #0x1000000 @ 010014e8
    orrhs r5, r5, #1 @ 010014ec
    orrvs r5, r5, #4 @ 010014f0
    adds r4, r4, sb @ 010014f4
    orrmi r5, r5, #0x80 @ 010014f8
    orreq r5, r5, #0x40 @ 010014fc
    orrhs r5, r5, #1 @ 01001500
    eorvs r5, r5, #4 @ 01001504
    ldrb r0, [fp], #1 @ 01001508
    subs r5, r5, #0x40000 @ 0100150c
    ldrgt pc, [r2, r0, lsl #2] @ 01001510
    .word 0xea4032c5 @ 01001514 b #0x200e030
    .zero 8
@ z80_dispatch_01001520 at 0x01001520
    and r0, sl, #0xff000000 @ 01001520
    lsrs r1, r5, #1 @ 01001524
    bic r5, r5, #0xd7 @ 01001528
    addshs r4, r4, #0x1000000 @ 0100152c
    orrhs r5, r5, #1 @ 01001530
    orrvs r5, r5, #4 @ 01001534
    adds r4, r4, r0 @ 01001538
    orrmi r5, r5, #0x80 @ 0100153c
    orreq r5, r5, #0x40 @ 01001540
    orrhs r5, r5, #1 @ 01001544
    eorvs r5, r5, #4 @ 01001548
    ldrb r0, [fp], #1 @ 0100154c
    subs r5, r5, #0x40000 @ 01001550
    ldrgt pc, [r2, r0, lsl #2] @ 01001554
    .word 0xea4032b4 @ 01001558 b #0x200e030
    .zero 4
@ z80_dispatch_01001560 at 0x01001560
    lsl r0, sl, #8 @ 01001560
    lsrs r1, r5, #1 @ 01001564
    bic r5, r5, #0xd7 @ 01001568
    addshs r4, r4, #0x1000000 @ 0100156c
    orrhs r5, r5, #1 @ 01001570
    orrvs r5, r5, #4 @ 01001574
    adds r4, r4, r0 @ 01001578
    orrmi r5, r5, #0x80 @ 0100157c
    orreq r5, r5, #0x40 @ 01001580
    orrhs r5, r5, #1 @ 01001584
    eorvs r5, r5, #4 @ 01001588
    ldrb r0, [fp], #1 @ 0100158c
    subs r5, r5, #0x40000 @ 01001590
    ldrgt pc, [r2, r0, lsl #2] @ 01001594
    .word 0xea4032a4 @ 01001598 b #0x200e030
    .zero 4
@ z80_dispatch_010015a0 at 0x010015a0
    cmp sl, #0x20000000 @ 010015a0
    blhs .L_01002cec @ 010015a4
    ldrb r0, [r3, sl, lsr #16] @ 010015a8
    lsrs r1, r5, #1 @ 010015ac
    bic r5, r5, #0xd7 @ 010015b0
    addshs r4, r4, #0x1000000 @ 010015b4
    orrhs r5, r5, #1 @ 010015b8
    orrvs r5, r5, #4 @ 010015bc
    adds r4, r4, r0, lsl #24 @ 010015c0
    orrmi r5, r5, #0x80 @ 010015c4
    orreq r5, r5, #0x40 @ 010015c8
    orrhs r5, r5, #1 @ 010015cc
    eorvs r5, r5, #4 @ 010015d0
    ldrb r0, [fp], #1 @ 010015d4
    subs r5, r5, #0x70000 @ 010015d8
    ldrgt pc, [r2, r0, lsl #2] @ 010015dc
    .word 0xea403292 @ 010015e0 b #0x200e030
    .zero 12
@ z80_dispatch_010015f0 at 0x010015f0
    mov r0, r4 @ 010015f0
    lsrs r1, r5, #1 @ 010015f4
    bic r5, r5, #0xd7 @ 010015f8
    addshs r4, r4, #0x1000000 @ 010015fc
    orrhs r5, r5, #1 @ 01001600
    orrvs r5, r5, #4 @ 01001604
    adds r4, r4, r0 @ 01001608
    orrmi r5, r5, #0x80 @ 0100160c
    orreq r5, r5, #0x40 @ 01001610
    orrhs r5, r5, #1 @ 01001614
    eorvs r5, r5, #4 @ 01001618
    ldrb r0, [fp], #1 @ 0100161c
    subs r5, r5, #0x40000 @ 01001620
    ldrgt pc, [r2, r0, lsl #2] @ 01001624
    .word 0xea403280 @ 01001628 b #0x200e030
    .zero 4
@ z80_dispatch_01001630 at 0x01001630
    bic r5, r5, #0xd7 @ 01001630
    orr r5, r5, #2 @ 01001634
    subs r4, r4, r6 @ 01001638
    orrmi r5, r5, #0x80 @ 0100163c
    orreq r5, r5, #0x40 @ 01001640
    orrlo r5, r5, #1 @ 01001644
    orrvs r5, r5, #4 @ 01001648
    ldrb r0, [fp], #1 @ 0100164c
    subs r5, r5, #0x40000 @ 01001650
    ldrgt pc, [r2, r0, lsl #2] @ 01001654
    .word 0xea403274 @ 01001658 b #0x200e030
    .zero 4
@ z80_dispatch_01001660 at 0x01001660
    bic r5, r5, #0xd7 @ 01001660
    orr r5, r5, #2 @ 01001664
    subs r4, r4, r7 @ 01001668
    orrmi r5, r5, #0x80 @ 0100166c
    orreq r5, r5, #0x40 @ 01001670
    orrlo r5, r5, #1 @ 01001674
    orrvs r5, r5, #4 @ 01001678
    ldrb r0, [fp], #1 @ 0100167c
    subs r5, r5, #0x40000 @ 01001680
    ldrgt pc, [r2, r0, lsl #2] @ 01001684
    .word 0xea403268 @ 01001688 b #0x200e030
    .zero 4
@ z80_dispatch_01001690 at 0x01001690
    bic r5, r5, #0xd7 @ 01001690
    orr r5, r5, #2 @ 01001694
    subs r4, r4, r8 @ 01001698
    orrmi r5, r5, #0x80 @ 0100169c
    orreq r5, r5, #0x40 @ 010016a0
    orrlo r5, r5, #1 @ 010016a4
    orrvs r5, r5, #4 @ 010016a8
    ldrb r0, [fp], #1 @ 010016ac
    subs r5, r5, #0x40000 @ 010016b0
    ldrgt pc, [r2, r0, lsl #2] @ 010016b4
    .word 0xea40325c @ 010016b8 b #0x200e030
    .zero 4
@ z80_dispatch_010016c0 at 0x010016c0
    bic r5, r5, #0xd7 @ 010016c0
    orr r5, r5, #2 @ 010016c4
    subs r4, r4, sb @ 010016c8
    orrmi r5, r5, #0x80 @ 010016cc
    orreq r5, r5, #0x40 @ 010016d0
    orrlo r5, r5, #1 @ 010016d4
    orrvs r5, r5, #4 @ 010016d8
    ldrb r0, [fp], #1 @ 010016dc
    subs r5, r5, #0x40000 @ 010016e0
    ldrgt pc, [r2, r0, lsl #2] @ 010016e4
    .word 0xea403250 @ 010016e8 b #0x200e030
    .zero 4
@ z80_dispatch_010016f0 at 0x010016f0
    and r0, sl, #0xff000000 @ 010016f0
    bic r5, r5, #0xd7 @ 010016f4
    orr r5, r5, #2 @ 010016f8
    subs r4, r4, r0 @ 010016fc
    orrmi r5, r5, #0x80 @ 01001700
    orreq r5, r5, #0x40 @ 01001704
    orrlo r5, r5, #1 @ 01001708
    orrvs r5, r5, #4 @ 0100170c
    ldrb r0, [fp], #1 @ 01001710
    subs r5, r5, #0x40000 @ 01001714
    ldrgt pc, [r2, r0, lsl #2] @ 01001718
    .word 0xea403243 @ 0100171c b #0x200e030
@ z80_dispatch_01001720 at 0x01001720
    lsl r0, sl, #8 @ 01001720
    bic r5, r5, #0xd7 @ 01001724
    orr r5, r5, #2 @ 01001728
    subs r4, r4, r0 @ 0100172c
    orrmi r5, r5, #0x80 @ 01001730
    orreq r5, r5, #0x40 @ 01001734
    orrlo r5, r5, #1 @ 01001738
    orrvs r5, r5, #4 @ 0100173c
    ldrb r0, [fp], #1 @ 01001740
    subs r5, r5, #0x40000 @ 01001744
    ldrgt pc, [r2, r0, lsl #2] @ 01001748
    .word 0xea403237 @ 0100174c b #0x200e030
@ z80_dispatch_01001750 at 0x01001750
    cmp sl, #0x20000000 @ 01001750
    blhs .L_01002cec @ 01001754
    ldrb r0, [r3, sl, lsr #16] @ 01001758
    bic r5, r5, #0xd7 @ 0100175c
    orr r5, r5, #2 @ 01001760
    subs r4, r4, r0, lsl #24 @ 01001764
    orrmi r5, r5, #0x80 @ 01001768
    orreq r5, r5, #0x40 @ 0100176c
    orrlo r5, r5, #1 @ 01001770
    orrvs r5, r5, #4 @ 01001774
    ldrb r0, [fp], #1 @ 01001778
    subs r5, r5, #0x70000 @ 0100177c
    ldrgt pc, [r2, r0, lsl #2] @ 01001780
    .word 0xea403229 @ 01001784 b #0x200e030
    .zero 8
@ z80_dispatch_01001790 at 0x01001790
    bic r5, r5, #0xd7 @ 01001790
    orr r5, r5, #2 @ 01001794
    subs r4, r4, r4 @ 01001798
    orrmi r5, r5, #0x80 @ 0100179c
    orreq r5, r5, #0x40 @ 010017a0
    orrlo r5, r5, #1 @ 010017a4
    orrvs r5, r5, #4 @ 010017a8
    ldrb r0, [fp], #1 @ 010017ac
    subs r5, r5, #0x40000 @ 010017b0
    ldrgt pc, [r2, r0, lsl #2] @ 010017b4
    .word 0xea40321c @ 010017b8 b #0x200e030
    .zero 4
@ z80_dispatch_010017c0 at 0x010017c0
    and lr, r5, #1 @ 010017c0
    bic r5, r5, #0xd7 @ 010017c4
    orr r5, r5, #2 @ 010017c8
    subs r4, r4, lr, lsl #24 @ 010017cc
    orrlo r5, r5, #1 @ 010017d0
    orrvs r5, r5, #4 @ 010017d4
    subs r4, r4, r6 @ 010017d8
    orrmi r5, r5, #0x80 @ 010017dc
    orreq r5, r5, #0x40 @ 010017e0
    orrlo r5, r5, #1 @ 010017e4
    eorvs r5, r5, #4 @ 010017e8
    ldrb r0, [fp], #1 @ 010017ec
    subs r5, r5, #0x40000 @ 010017f0
    ldrgt pc, [r2, r0, lsl #2] @ 010017f4
    .word 0xea40320c @ 010017f8 b #0x200e030
    .zero 4
@ z80_dispatch_01001800 at 0x01001800
    and lr, r5, #1 @ 01001800
    bic r5, r5, #0xd7 @ 01001804
    orr r5, r5, #2 @ 01001808
    subs r4, r4, lr, lsl #24 @ 0100180c
    orrlo r5, r5, #1 @ 01001810
    orrvs r5, r5, #4 @ 01001814
    subs r4, r4, r7 @ 01001818
    orrmi r5, r5, #0x80 @ 0100181c
    orreq r5, r5, #0x40 @ 01001820
    orrlo r5, r5, #1 @ 01001824
    eorvs r5, r5, #4 @ 01001828
    ldrb r0, [fp], #1 @ 0100182c
    subs r5, r5, #0x40000 @ 01001830
    ldrgt pc, [r2, r0, lsl #2] @ 01001834
    .word 0xea4031fc @ 01001838 b #0x200e030
    .zero 4
@ z80_dispatch_01001840 at 0x01001840
    and lr, r5, #1 @ 01001840
    bic r5, r5, #0xd7 @ 01001844
    orr r5, r5, #2 @ 01001848
    subs r4, r4, lr, lsl #24 @ 0100184c
    orrlo r5, r5, #1 @ 01001850
    orrvs r5, r5, #4 @ 01001854
    subs r4, r4, r8 @ 01001858
    orrmi r5, r5, #0x80 @ 0100185c
    orreq r5, r5, #0x40 @ 01001860
    orrlo r5, r5, #1 @ 01001864
    eorvs r5, r5, #4 @ 01001868
    ldrb r0, [fp], #1 @ 0100186c
    subs r5, r5, #0x40000 @ 01001870
    ldrgt pc, [r2, r0, lsl #2] @ 01001874
    .word 0xea4031ec @ 01001878 b #0x200e030
    .zero 4
@ z80_dispatch_01001880 at 0x01001880
    and lr, r5, #1 @ 01001880
    bic r5, r5, #0xd7 @ 01001884
    orr r5, r5, #2 @ 01001888
    subs r4, r4, lr, lsl #24 @ 0100188c
    orrlo r5, r5, #1 @ 01001890
    orrvs r5, r5, #4 @ 01001894
    subs r4, r4, sb @ 01001898
    orrmi r5, r5, #0x80 @ 0100189c
    orreq r5, r5, #0x40 @ 010018a0
    orrlo r5, r5, #1 @ 010018a4
    eorvs r5, r5, #4 @ 010018a8
    ldrb r0, [fp], #1 @ 010018ac
    subs r5, r5, #0x40000 @ 010018b0
    ldrgt pc, [r2, r0, lsl #2] @ 010018b4
    .word 0xea4031dc @ 010018b8 b #0x200e030
    .zero 4
@ z80_dispatch_010018c0 at 0x010018c0
    and r0, sl, #0xff000000 @ 010018c0
    and lr, r5, #1 @ 010018c4
    bic r5, r5, #0xd7 @ 010018c8
    orr r5, r5, #2 @ 010018cc
    subs r4, r4, lr, lsl #24 @ 010018d0
    orrlo r5, r5, #1 @ 010018d4
    orrvs r5, r5, #4 @ 010018d8
    subs r4, r4, r0 @ 010018dc
    orrmi r5, r5, #0x80 @ 010018e0
    orreq r5, r5, #0x40 @ 010018e4
    orrlo r5, r5, #1 @ 010018e8
    eorvs r5, r5, #4 @ 010018ec
    ldrb r0, [fp], #1 @ 010018f0
    subs r5, r5, #0x40000 @ 010018f4
    ldrgt pc, [r2, r0, lsl #2] @ 010018f8
    .word 0xea4031cb @ 010018fc b #0x200e030
@ z80_dispatch_01001900 at 0x01001900
    lsl r0, sl, #8 @ 01001900
    and lr, r5, #1 @ 01001904
    bic r5, r5, #0xd7 @ 01001908
    orr r5, r5, #2 @ 0100190c
    subs r4, r4, lr, lsl #24 @ 01001910
    orrlo r5, r5, #1 @ 01001914
    orrvs r5, r5, #4 @ 01001918
    subs r4, r4, r0 @ 0100191c
    orrmi r5, r5, #0x80 @ 01001920
    orreq r5, r5, #0x40 @ 01001924
    orrlo r5, r5, #1 @ 01001928
    eorvs r5, r5, #4 @ 0100192c
    ldrb r0, [fp], #1 @ 01001930
    subs r5, r5, #0x40000 @ 01001934
    ldrgt pc, [r2, r0, lsl #2] @ 01001938
    .word 0xea4031bb @ 0100193c b #0x200e030
@ z80_dispatch_01001940 at 0x01001940
    cmp sl, #0x20000000 @ 01001940
    blhs .L_01002cec @ 01001944
    ldrb r0, [r3, sl, lsr #16] @ 01001948
    and lr, r5, #1 @ 0100194c
    bic r5, r5, #0xd7 @ 01001950
    orr r5, r5, #2 @ 01001954
    subs r4, r4, lr, lsl #24 @ 01001958
    orrlo r5, r5, #1 @ 0100195c
    orrvs r5, r5, #4 @ 01001960
    subs r4, r4, r0, lsl #24 @ 01001964
    orrmi r5, r5, #0x80 @ 01001968
    orreq r5, r5, #0x40 @ 0100196c
    orrlo r5, r5, #1 @ 01001970
    eorvs r5, r5, #4 @ 01001974
    ldrb r0, [fp], #1 @ 01001978
    subs r5, r5, #0x70000 @ 0100197c
    ldrgt pc, [r2, r0, lsl #2] @ 01001980
    .word 0xea4031a9 @ 01001984 b #0x200e030
    .zero 8
@ z80_dispatch_01001990 at 0x01001990
    mov r0, r4 @ 01001990
    and lr, r5, #1 @ 01001994
    bic r5, r5, #0xd7 @ 01001998
    orr r5, r5, #2 @ 0100199c
    subs r4, r4, lr, lsl #24 @ 010019a0
    orrlo r5, r5, #1 @ 010019a4
    orrvs r5, r5, #4 @ 010019a8
    subs r4, r4, r0 @ 010019ac
    orrmi r5, r5, #0x80 @ 010019b0
    orreq r5, r5, #0x40 @ 010019b4
    orrlo r5, r5, #1 @ 010019b8
    eorvs r5, r5, #4 @ 010019bc
    ldrb r0, [fp], #1 @ 010019c0
    subs r5, r5, #0x40000 @ 010019c4
    ldrgt pc, [r2, r0, lsl #2] @ 010019c8
    .word 0xea403197 @ 010019cc b #0x200e030
@ z80_dispatch_010019d0 at 0x010019d0
    ldr r1, [pc, #0x46c] @ 010019d0
    and r4, r4, r6 @ 010019d4
    ldrb r1, [r1, r4, lsr #24] @ 010019d8
    bic r5, r5, #0xd7 @ 010019dc
    orr r5, r5, r1 @ 010019e0
    ldrb r0, [fp], #1 @ 010019e4
    subs r5, r5, #0x40000 @ 010019e8
    ldrgt pc, [r2, r0, lsl #2] @ 010019ec
    .word 0xea40318e @ 010019f0 b #0x200e030
    .zero 12
@ z80_dispatch_01001a00 at 0x01001a00
    ldr r1, [pc, #0x43c] @ 01001a00
    and r4, r4, r7 @ 01001a04
    ldrb r1, [r1, r4, lsr #24] @ 01001a08
    bic r5, r5, #0xd7 @ 01001a0c
    orr r5, r5, r1 @ 01001a10
    ldrb r0, [fp], #1 @ 01001a14
    subs r5, r5, #0x40000 @ 01001a18
    ldrgt pc, [r2, r0, lsl #2] @ 01001a1c
    .word 0xea403182 @ 01001a20 b #0x200e030
    .zero 12
@ z80_dispatch_01001a30 at 0x01001a30
    ldr r1, [pc, #0x40c] @ 01001a30
    and r4, r4, r8 @ 01001a34
    ldrb r1, [r1, r4, lsr #24] @ 01001a38
    bic r5, r5, #0xd7 @ 01001a3c
    orr r5, r5, r1 @ 01001a40
    ldrb r0, [fp], #1 @ 01001a44
    subs r5, r5, #0x40000 @ 01001a48
    ldrgt pc, [r2, r0, lsl #2] @ 01001a4c
    .word 0xea403176 @ 01001a50 b #0x200e030
    .zero 12
@ z80_dispatch_01001a60 at 0x01001a60
    ldr r1, [pc, #0x3dc] @ 01001a60
    and r4, r4, sb @ 01001a64
    ldrb r1, [r1, r4, lsr #24] @ 01001a68
    bic r5, r5, #0xd7 @ 01001a6c
    orr r5, r5, r1 @ 01001a70
    ldrb r0, [fp], #1 @ 01001a74
    subs r5, r5, #0x40000 @ 01001a78
    ldrgt pc, [r2, r0, lsl #2] @ 01001a7c
    .word 0xea40316a @ 01001a80 b #0x200e030
    .zero 12
@ z80_dispatch_01001a90 at 0x01001a90
    and r0, sl, #0xff000000 @ 01001a90
    ldr r1, [pc, #0x3a8] @ 01001a94
    and r4, r4, r0 @ 01001a98
    ldrb r1, [r1, r4, lsr #24] @ 01001a9c
    bic r5, r5, #0xd7 @ 01001aa0
    orr r5, r5, r1 @ 01001aa4
    ldrb r0, [fp], #1 @ 01001aa8
    subs r5, r5, #0x40000 @ 01001aac
    ldrgt pc, [r2, r0, lsl #2] @ 01001ab0
    .word 0xea40315d @ 01001ab4 b #0x200e030
    .zero 8
@ z80_dispatch_01001ac0 at 0x01001ac0
    lsl r0, sl, #8 @ 01001ac0
    ldr r1, [pc, #0x378] @ 01001ac4
    and r4, r4, r0 @ 01001ac8
    ldrb r1, [r1, r4, lsr #24] @ 01001acc
    bic r5, r5, #0xd7 @ 01001ad0
    orr r5, r5, r1 @ 01001ad4
    ldrb r0, [fp], #1 @ 01001ad8
    subs r5, r5, #0x40000 @ 01001adc
    ldrgt pc, [r2, r0, lsl #2] @ 01001ae0
    .word 0xea403151 @ 01001ae4 b #0x200e030
    .zero 8
@ z80_dispatch_01001af0 at 0x01001af0
    cmp sl, #0x20000000 @ 01001af0
    blhs .L_01002cec @ 01001af4
    ldrb r0, [r3, sl, lsr #16] @ 01001af8
    ldr r1, [pc, #0x340] @ 01001afc
    and r4, r4, r0, lsl #24 @ 01001b00
    ldrb r1, [r1, r4, lsr #24] @ 01001b04
    bic r5, r5, #0xd7 @ 01001b08
    orr r5, r5, r1 @ 01001b0c
    ldrb r0, [fp], #1 @ 01001b10
    subs r5, r5, #0x70000 @ 01001b14
    ldrgt pc, [r2, r0, lsl #2] @ 01001b18
    .word 0xea403143 @ 01001b1c b #0x200e030
@ z80_dispatch_01001b20 at 0x01001b20
    ldr r1, [pc, #0x31c] @ 01001b20
    and r4, r4, r4 @ 01001b24
    ldrb r1, [r1, r4, lsr #24] @ 01001b28
    bic r5, r5, #0xd7 @ 01001b2c
    orr r5, r5, r1 @ 01001b30
    ldrb r0, [fp], #1 @ 01001b34
    subs r5, r5, #0x40000 @ 01001b38
    ldrgt pc, [r2, r0, lsl #2] @ 01001b3c
    .word 0xea40313a @ 01001b40 b #0x200e030
    .zero 12
@ z80_dispatch_01001b50 at 0x01001b50
    ldr r1, [pc, #0x2ec] @ 01001b50
    eor r4, r4, r6 @ 01001b54
    ldrb r1, [r1, r4, lsr #24] @ 01001b58
    bic r5, r5, #0xd7 @ 01001b5c
    orr r5, r5, r1 @ 01001b60
    ldrb r0, [fp], #1 @ 01001b64
    subs r5, r5, #0x40000 @ 01001b68
    ldrgt pc, [r2, r0, lsl #2] @ 01001b6c
    .word 0xea40312e @ 01001b70 b #0x200e030
    .zero 12
@ z80_dispatch_01001b80 at 0x01001b80
    ldr r1, [pc, #0x2bc] @ 01001b80
    eor r4, r4, r7 @ 01001b84
    ldrb r1, [r1, r4, lsr #24] @ 01001b88
    bic r5, r5, #0xd7 @ 01001b8c
    orr r5, r5, r1 @ 01001b90
    ldrb r0, [fp], #1 @ 01001b94
    subs r5, r5, #0x40000 @ 01001b98
    ldrgt pc, [r2, r0, lsl #2] @ 01001b9c
    .word 0xea403122 @ 01001ba0 b #0x200e030
    .zero 12
@ z80_dispatch_01001bb0 at 0x01001bb0
    ldr r1, [pc, #0x28c] @ 01001bb0
    eor r4, r4, r8 @ 01001bb4
    ldrb r1, [r1, r4, lsr #24] @ 01001bb8
    bic r5, r5, #0xd7 @ 01001bbc
    orr r5, r5, r1 @ 01001bc0
    ldrb r0, [fp], #1 @ 01001bc4
    subs r5, r5, #0x40000 @ 01001bc8
    ldrgt pc, [r2, r0, lsl #2] @ 01001bcc
    .word 0xea403116 @ 01001bd0 b #0x200e030
    .zero 12
@ z80_dispatch_01001be0 at 0x01001be0
    ldr r1, [pc, #0x25c] @ 01001be0
    eor r4, r4, sb @ 01001be4
    ldrb r1, [r1, r4, lsr #24] @ 01001be8
    bic r5, r5, #0xd7 @ 01001bec
    orr r5, r5, r1 @ 01001bf0
    ldrb r0, [fp], #1 @ 01001bf4
    subs r5, r5, #0x40000 @ 01001bf8
    ldrgt pc, [r2, r0, lsl #2] @ 01001bfc
    .word 0xea40310a @ 01001c00 b #0x200e030
    .zero 12
@ z80_dispatch_01001c10 at 0x01001c10
    and r0, sl, #0xff000000 @ 01001c10
    ldr r1, [pc, #0x228] @ 01001c14
    eor r4, r4, r0 @ 01001c18
    ldrb r1, [r1, r4, lsr #24] @ 01001c1c
    bic r5, r5, #0xd7 @ 01001c20
    orr r5, r5, r1 @ 01001c24
    ldrb r0, [fp], #1 @ 01001c28
    subs r5, r5, #0x40000 @ 01001c2c
    ldrgt pc, [r2, r0, lsl #2] @ 01001c30
    .word 0xea4030fd @ 01001c34 b #0x200e030
    .zero 8
@ z80_dispatch_01001c40 at 0x01001c40
    lsl r0, sl, #8 @ 01001c40
    ldr r1, [pc, #0x1f8] @ 01001c44
    eor r4, r4, r0 @ 01001c48
    ldrb r1, [r1, r4, lsr #24] @ 01001c4c
    bic r5, r5, #0xd7 @ 01001c50
    orr r5, r5, r1 @ 01001c54
    ldrb r0, [fp], #1 @ 01001c58
    subs r5, r5, #0x40000 @ 01001c5c
    ldrgt pc, [r2, r0, lsl #2] @ 01001c60
    .word 0xea4030f1 @ 01001c64 b #0x200e030
    .zero 8
@ z80_dispatch_01001c70 at 0x01001c70
    cmp sl, #0x20000000 @ 01001c70
    blhs .L_01002cec @ 01001c74
    ldrb r0, [r3, sl, lsr #16] @ 01001c78
    ldr r1, [pc, #0x1c0] @ 01001c7c
    eor r4, r4, r0, lsl #24 @ 01001c80
    ldrb r1, [r1, r4, lsr #24] @ 01001c84
    bic r5, r5, #0xd7 @ 01001c88
    orr r5, r5, r1 @ 01001c8c
    ldrb r0, [fp], #1 @ 01001c90
    subs r5, r5, #0x70000 @ 01001c94
    ldrgt pc, [r2, r0, lsl #2] @ 01001c98
    .word 0xea4030e3 @ 01001c9c b #0x200e030
@ z80_dispatch_01001ca0 at 0x01001ca0
    ldr r1, [pc, #0x19c] @ 01001ca0
    eor r4, r4, r4 @ 01001ca4
    ldrb r1, [r1, r4, lsr #24] @ 01001ca8
    bic r5, r5, #0xd7 @ 01001cac
    orr r5, r5, r1 @ 01001cb0
    ldrb r0, [fp], #1 @ 01001cb4
    subs r5, r5, #0x40000 @ 01001cb8
    ldrgt pc, [r2, r0, lsl #2] @ 01001cbc
    .word 0xea4030da @ 01001cc0 b #0x200e030
    .zero 12
@ z80_dispatch_01001cd0 at 0x01001cd0
    ldr r1, [pc, #0x16c] @ 01001cd0
    orr r4, r4, r6 @ 01001cd4
    ldrb r1, [r1, r4, lsr #24] @ 01001cd8
    bic r5, r5, #0xd7 @ 01001cdc
    orr r5, r5, r1 @ 01001ce0
    ldrb r0, [fp], #1 @ 01001ce4
    subs r5, r5, #0x40000 @ 01001ce8
    ldrgt pc, [r2, r0, lsl #2] @ 01001cec
    .word 0xea4030ce @ 01001cf0 b #0x200e030
    .zero 12
@ z80_dispatch_01001d00 at 0x01001d00
    ldr r1, [pc, #0x13c] @ 01001d00
    orr r4, r4, r7 @ 01001d04
    ldrb r1, [r1, r4, lsr #24] @ 01001d08
    bic r5, r5, #0xd7 @ 01001d0c
    orr r5, r5, r1 @ 01001d10
    ldrb r0, [fp], #1 @ 01001d14
    subs r5, r5, #0x40000 @ 01001d18
    ldrgt pc, [r2, r0, lsl #2] @ 01001d1c
    .word 0xea4030c2 @ 01001d20 b #0x200e030
    .zero 12
@ z80_dispatch_01001d30 at 0x01001d30
    ldr r1, [pc, #0x10c] @ 01001d30
    orr r4, r4, r8 @ 01001d34
    ldrb r1, [r1, r4, lsr #24] @ 01001d38
    bic r5, r5, #0xd7 @ 01001d3c
    orr r5, r5, r1 @ 01001d40
    ldrb r0, [fp], #1 @ 01001d44
    subs r5, r5, #0x40000 @ 01001d48
    ldrgt pc, [r2, r0, lsl #2] @ 01001d4c
    .word 0xea4030b6 @ 01001d50 b #0x200e030
    .zero 12
@ z80_dispatch_01001d60 at 0x01001d60
    ldr r1, [pc, #0xdc] @ 01001d60
    orr r4, r4, sb @ 01001d64
    ldrb r1, [r1, r4, lsr #24] @ 01001d68
    bic r5, r5, #0xd7 @ 01001d6c
    orr r5, r5, r1 @ 01001d70
    ldrb r0, [fp], #1 @ 01001d74
    subs r5, r5, #0x40000 @ 01001d78
    ldrgt pc, [r2, r0, lsl #2] @ 01001d7c
    .word 0xea4030aa @ 01001d80 b #0x200e030
    .zero 12
@ z80_dispatch_01001d90 at 0x01001d90
    and r0, sl, #0xff000000 @ 01001d90
    ldr r1, [pc, #0xa8] @ 01001d94
    orr r4, r4, r0 @ 01001d98
    ldrb r1, [r1, r4, lsr #24] @ 01001d9c
    bic r5, r5, #0xd7 @ 01001da0
    orr r5, r5, r1 @ 01001da4
    ldrb r0, [fp], #1 @ 01001da8
    subs r5, r5, #0x40000 @ 01001dac
    ldrgt pc, [r2, r0, lsl #2] @ 01001db0
    .word 0xea40309d @ 01001db4 b #0x200e030
    .zero 8
@ z80_dispatch_01001dc0 at 0x01001dc0
    lsl r0, sl, #8 @ 01001dc0
    ldr r1, [pc, #0x78] @ 01001dc4
    orr r4, r4, r0 @ 01001dc8
    ldrb r1, [r1, r4, lsr #24] @ 01001dcc
    bic r5, r5, #0xd7 @ 01001dd0
    orr r5, r5, r1 @ 01001dd4
    ldrb r0, [fp], #1 @ 01001dd8
    subs r5, r5, #0x40000 @ 01001ddc
    ldrgt pc, [r2, r0, lsl #2] @ 01001de0
    .word 0xea403091 @ 01001de4 b #0x200e030
    .zero 8
@ z80_dispatch_01001df0 at 0x01001df0
    cmp sl, #0x20000000 @ 01001df0
    blhs .L_01002cec @ 01001df4
    ldrb r0, [r3, sl, lsr #16] @ 01001df8
    ldr r1, [pc, #0x40] @ 01001dfc
    orr r4, r4, r0, lsl #24 @ 01001e00
    ldrb r1, [r1, r4, lsr #24] @ 01001e04
    bic r5, r5, #0xd7 @ 01001e08
    orr r5, r5, r1 @ 01001e0c
    ldrb r0, [fp], #1 @ 01001e10
    subs r5, r5, #0x70000 @ 01001e14
    ldrgt pc, [r2, r0, lsl #2] @ 01001e18
    .word 0xea403083 @ 01001e1c b #0x200e030
@ z80_dispatch_01001e20 at 0x01001e20
    ldr r1, [pc, #0x1c] @ 01001e20
    orr r4, r4, r4 @ 01001e24
    ldrb r1, [r1, r4, lsr #24] @ 01001e28
    bic r5, r5, #0xd7 @ 01001e2c
    orr r5, r5, r1 @ 01001e30
    ldrb r0, [fp], #1 @ 01001e34
    subs r5, r5, #0x40000 @ 01001e38
    ldrgt pc, [r2, r0, lsl #2] @ 01001e3c
    .word 0xea40307a @ 01001e40 b #0x200e030
    .byte 0x20, 0xde, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 01001e44
@ z80_dispatch_01001e50 at 0x01001e50
    cmp r4, r6 @ 01001e50
    bic r5, r5, #0xd7 @ 01001e54
    orr r5, r5, #2 @ 01001e58
    orrmi r5, r5, #0x80 @ 01001e5c
    orreq r5, r5, #0x40 @ 01001e60
    orrlo r5, r5, #1 @ 01001e64
    orrvs r5, r5, #4 @ 01001e68
    ldrb r0, [fp], #1 @ 01001e6c
    subs r5, r5, #0x40000 @ 01001e70
    ldrgt pc, [r2, r0, lsl #2] @ 01001e74
    .word 0xea40306c @ 01001e78 b #0x200e030
    .zero 4
@ z80_dispatch_01001e80 at 0x01001e80
    cmp r4, r7 @ 01001e80
    bic r5, r5, #0xd7 @ 01001e84
    orr r5, r5, #2 @ 01001e88
    orrmi r5, r5, #0x80 @ 01001e8c
    orreq r5, r5, #0x40 @ 01001e90
    orrlo r5, r5, #1 @ 01001e94
    orrvs r5, r5, #4 @ 01001e98
    ldrb r0, [fp], #1 @ 01001e9c
    subs r5, r5, #0x40000 @ 01001ea0
    ldrgt pc, [r2, r0, lsl #2] @ 01001ea4
    .word 0xea403060 @ 01001ea8 b #0x200e030
    .zero 4
@ z80_dispatch_01001eb0 at 0x01001eb0
    cmp r4, r8 @ 01001eb0
    bic r5, r5, #0xd7 @ 01001eb4
    orr r5, r5, #2 @ 01001eb8
    orrmi r5, r5, #0x80 @ 01001ebc
    orreq r5, r5, #0x40 @ 01001ec0
    orrlo r5, r5, #1 @ 01001ec4
    orrvs r5, r5, #4 @ 01001ec8
    ldrb r0, [fp], #1 @ 01001ecc
    subs r5, r5, #0x40000 @ 01001ed0
    ldrgt pc, [r2, r0, lsl #2] @ 01001ed4
    .word 0xea403054 @ 01001ed8 b #0x200e030
    .zero 4
@ z80_dispatch_01001ee0 at 0x01001ee0
    cmp r4, sb @ 01001ee0
    bic r5, r5, #0xd7 @ 01001ee4
    orr r5, r5, #2 @ 01001ee8
    orrmi r5, r5, #0x80 @ 01001eec
    orreq r5, r5, #0x40 @ 01001ef0
    orrlo r5, r5, #1 @ 01001ef4
    orrvs r5, r5, #4 @ 01001ef8
    ldrb r0, [fp], #1 @ 01001efc
    subs r5, r5, #0x40000 @ 01001f00
    ldrgt pc, [r2, r0, lsl #2] @ 01001f04
    .word 0xea403048 @ 01001f08 b #0x200e030
    .zero 4
@ z80_dispatch_01001f10 at 0x01001f10
    and r0, sl, #0xff000000 @ 01001f10
    cmp r4, r0 @ 01001f14
    bic r5, r5, #0xd7 @ 01001f18
    orr r5, r5, #2 @ 01001f1c
    orrmi r5, r5, #0x80 @ 01001f20
    orreq r5, r5, #0x40 @ 01001f24
    orrlo r5, r5, #1 @ 01001f28
    orrvs r5, r5, #4 @ 01001f2c
    ldrb r0, [fp], #1 @ 01001f30
    subs r5, r5, #0x40000 @ 01001f34
    ldrgt pc, [r2, r0, lsl #2] @ 01001f38
    .word 0xea40303b @ 01001f3c b #0x200e030
@ z80_dispatch_01001f40 at 0x01001f40
    lsl r0, sl, #8 @ 01001f40
    cmp r4, r0 @ 01001f44
    bic r5, r5, #0xd7 @ 01001f48
    orr r5, r5, #2 @ 01001f4c
    orrmi r5, r5, #0x80 @ 01001f50
    orreq r5, r5, #0x40 @ 01001f54
    orrlo r5, r5, #1 @ 01001f58
    orrvs r5, r5, #4 @ 01001f5c
    ldrb r0, [fp], #1 @ 01001f60
    subs r5, r5, #0x40000 @ 01001f64
    ldrgt pc, [r2, r0, lsl #2] @ 01001f68
    .word 0xea40302f @ 01001f6c b #0x200e030
@ z80_dispatch_01001f70 at 0x01001f70
    cmp sl, #0x20000000 @ 01001f70
    blhs .L_01002cec @ 01001f74
    ldrb r0, [r3, sl, lsr #16] @ 01001f78
    cmp r4, r0, lsl #24 @ 01001f7c
    bic r5, r5, #0xd7 @ 01001f80
    orr r5, r5, #2 @ 01001f84
    orrmi r5, r5, #0x80 @ 01001f88
    orreq r5, r5, #0x40 @ 01001f8c
    orrlo r5, r5, #1 @ 01001f90
    orrvs r5, r5, #4 @ 01001f94
    ldrb r0, [fp], #1 @ 01001f98
    subs r5, r5, #0x70000 @ 01001f9c
    ldrgt pc, [r2, r0, lsl #2] @ 01001fa0
    .word 0xea403021 @ 01001fa4 b #0x200e030
    .zero 8
@ z80_dispatch_01001fb0 at 0x01001fb0
    cmp r4, r4 @ 01001fb0
    bic r5, r5, #0xd7 @ 01001fb4
    orr r5, r5, #2 @ 01001fb8
    orrmi r5, r5, #0x80 @ 01001fbc
    orreq r5, r5, #0x40 @ 01001fc0
    orrlo r5, r5, #1 @ 01001fc4
    orrvs r5, r5, #4 @ 01001fc8
    ldrb r0, [fp], #1 @ 01001fcc
    subs r5, r5, #0x40000 @ 01001fd0
    ldrgt pc, [r2, r0, lsl #2] @ 01001fd4
    .word 0xea403014 @ 01001fd8 b #0x200e030
    .zero 4
@ z80_dispatch_01001fe0 at 0x01001fe0
    tst r5, #0x40 @ 01001fe0
    bne .L_01002c20 @ 01001fe4
    ldrb fp, [ip], #1 @ 01001fe8
    ldrb lr, [ip], #1 @ 01001fec
    add fp, r3, fp @ 01001ff0
    add fp, fp, lr, lsl #8 @ 01001ff4
    ldrb r0, [fp], #1 @ 01001ff8
    subs r5, r5, #0xb0000 @ 01001ffc
    ldrgt pc, [r2, r0, lsl #2] @ 01002000
    .word 0xea403009 @ 01002004 b #0x200e030
    .zero 8
@ z80_dispatch_01002010 at 0x01002010
    ldrb r1, [ip], #1 @ 01002010
    ldrb r0, [ip], #1 @ 01002014
    orr r0, r1, r0, lsl #8 @ 01002018
    lsl r6, r0, #0x10 @ 0100201c
    lsl r7, r0, #0x18 @ 01002020
    and r6, r6, #0xff000000 @ 01002024
    ldrb r0, [fp], #1 @ 01002028
    subs r5, r5, #0xa0000 @ 0100202c
    ldrgt pc, [r2, r0, lsl #2] @ 01002030
    .word 0xea402ffd @ 01002034 b #0x200e030
    .zero 8
@ z80_dispatch_01002040 at 0x01002040
    tst r5, #0x40 @ 01002040
    bne .L_01002c00 @ 01002044
    ldrb r0, [fp], #1 @ 01002048
    ldrb lr, [fp], #1 @ 0100204c
    orr r0, r0, lr, lsl #8 @ 01002050
    add fp, r3, r0 @ 01002054
    ldrb r0, [fp], #1 @ 01002058
    subs r5, r5, #0xa0000 @ 0100205c
    ldrgt pc, [r2, r0, lsl #2] @ 01002060
    .word 0xea402ff1 @ 01002064 b #0x200e030
    .zero 8
@ z80_dispatch_01002070 at 0x01002070
    ldrb r0, [fp], #1 @ 01002070
    ldrb lr, [fp], #1 @ 01002074
    orr r0, r0, lr, lsl #8 @ 01002078
    add fp, r3, r0 @ 0100207c
    ldrb r0, [fp], #1 @ 01002080
    subs r5, r5, #0xa0000 @ 01002084
    ldrgt pc, [r2, r0, lsl #2] @ 01002088
    .word 0xea402fe7 @ 0100208c b #0x200e030
@ z80_dispatch_01002090 at 0x01002090
    tst r5, #0x40 @ 01002090
    bne .L_01002c00 @ 01002094
    sub lr, fp, r3 @ 01002098
    add lr, lr, #2 @ 0100209c
    lsr r1, lr, #8 @ 010020a0
    strb r1, [ip, #-1]! @ 010020a4
    strb lr, [ip, #-1]! @ 010020a8
    ldrb r0, [fp], #1 @ 010020ac
    ldrb lr, [fp], #1 @ 010020b0
    orr r0, r0, lr, lsl #8 @ 010020b4
    add fp, r3, r0 @ 010020b8
    ldrb r0, [fp], #1 @ 010020bc
    subs r5, r5, #0x110000 @ 010020c0
    ldrgt pc, [r2, r0, lsl #2] @ 010020c4
    .word 0xea402fd8 @ 010020c8 b #0x200e030
    .zero 4
@ z80_dispatch_010020d0 at 0x010020d0
    orr r0, r6, r7, lsr #8 @ 010020d0
    lsr r0, r0, #0x10 @ 010020d4
    lsr r1, r0, #8 @ 010020d8
    strb r1, [ip, #-1]! @ 010020dc
    strb r0, [ip, #-1]! @ 010020e0
    ldrb r0, [fp], #1 @ 010020e4
    subs r5, r5, #0xb0000 @ 010020e8
    ldrgt pc, [r2, r0, lsl #2] @ 010020ec
    .word 0xea402fce @ 010020f0 b #0x200e030
    .zero 12
@ z80_dispatch_01002100 at 0x01002100
    ldrb r0, [fp], #1 @ 01002100
    lsl r0, r0, #0x18 @ 01002104
    bic r5, r5, #0xd7 @ 01002108
    adds r4, r4, r0 @ 0100210c
    orrmi r5, r5, #0x80 @ 01002110
    orreq r5, r5, #0x40 @ 01002114
    orrhs r5, r5, #1 @ 01002118
    orrvs r5, r5, #4 @ 0100211c
    ldrb r0, [fp], #1 @ 01002120
    subs r5, r5, #0x70000 @ 01002124
    ldrgt pc, [r2, r0, lsl #2] @ 01002128
    .word 0xea402fbf @ 0100212c b #0x200e030
@ z80_dispatch_01002130 at 0x01002130
    sub lr, fp, r3 @ 01002130
    lsr r1, lr, #8 @ 01002134
    strb r1, [ip, #-1]! @ 01002138
    strb lr, [ip, #-1]! @ 0100213c
    add fp, r3, #0 @ 01002140
    ldrb r0, [fp], #1 @ 01002144
    subs r5, r5, #0xb0000 @ 01002148
    ldrgt pc, [r2, r0, lsl #2] @ 0100214c
    .word 0xea402fb6 @ 01002150 b #0x200e030
    .zero 12
@ z80_dispatch_01002160 at 0x01002160
    tst r5, #0x40 @ 01002160
    beq .L_01002c20 @ 01002164
    ldrb fp, [ip], #1 @ 01002168
    ldrb lr, [ip], #1 @ 0100216c
    add fp, r3, fp @ 01002170
    add fp, fp, lr, lsl #8 @ 01002174
    ldrb r0, [fp], #1 @ 01002178
    subs r5, r5, #0xb0000 @ 0100217c
    ldrgt pc, [r2, r0, lsl #2] @ 01002180
    .word 0xea402fa9 @ 01002184 b #0x200e030
    .zero 8
@ z80_dispatch_01002190 at 0x01002190
    ldrb fp, [ip], #1 @ 01002190
    ldrb lr, [ip], #1 @ 01002194
    add fp, r3, fp @ 01002198
    add fp, fp, lr, lsl #8 @ 0100219c
    ldrb r0, [fp], #1 @ 010021a0
    subs r5, r5, #0xa0000 @ 010021a4
    ldrgt pc, [r2, r0, lsl #2] @ 010021a8
    .word 0xea402f9f @ 010021ac b #0x200e030
@ z80_dispatch_010021b0 at 0x010021b0
    tst r5, #0x40 @ 010021b0
    beq .L_01002c00 @ 010021b4
    ldrb r0, [fp], #1 @ 010021b8
    ldrb lr, [fp], #1 @ 010021bc
    orr r0, r0, lr, lsl #8 @ 010021c0
    add fp, r3, r0 @ 010021c4
    ldrb r0, [fp], #1 @ 010021c8
    subs r5, r5, #0xa0000 @ 010021cc
    ldrgt pc, [r2, r0, lsl #2] @ 010021d0
    .word 0xea402f95 @ 010021d4 b #0x200e030
    .zero 8
@ z80_dispatch_010021e0 at 0x010021e0
    ldrb r0, [fp], #1 @ 010021e0
    add r1, r2, #0x400 @ 010021e4
    ldr pc, [r1, r0, lsl #2] @ 010021e8
    .zero 4
@ z80_dispatch_010021f0 at 0x010021f0
    tst r5, #0x40 @ 010021f0
    beq .L_01002c00 @ 010021f4
    sub lr, fp, r3 @ 010021f8
    add lr, lr, #2 @ 010021fc
    lsr r1, lr, #8 @ 01002200
    strb r1, [ip, #-1]! @ 01002204
    strb lr, [ip, #-1]! @ 01002208
    ldrb r0, [fp], #1 @ 0100220c
    ldrb lr, [fp], #1 @ 01002210
    orr r0, r0, lr, lsl #8 @ 01002214
    add fp, r3, r0 @ 01002218
    ldrb r0, [fp], #1 @ 0100221c
    subs r5, r5, #0x110000 @ 01002220
    ldrgt pc, [r2, r0, lsl #2] @ 01002224
    .word 0xea402f80 @ 01002228 b #0x200e030
    .zero 4
@ z80_dispatch_01002230 at 0x01002230
    sub lr, fp, r3 @ 01002230
    add lr, lr, #2 @ 01002234
    lsr r1, lr, #8 @ 01002238
    strb r1, [ip, #-1]! @ 0100223c
    strb lr, [ip, #-1]! @ 01002240
    ldrb r0, [fp], #1 @ 01002244
    ldrb lr, [fp], #1 @ 01002248
    orr r0, r0, lr, lsl #8 @ 0100224c
    add fp, r3, r0 @ 01002250
    ldrb r0, [fp], #1 @ 01002254
    subs r5, r5, #0x110000 @ 01002258
    ldrgt pc, [r2, r0, lsl #2] @ 0100225c
    .word 0xea402f72 @ 01002260 b #0x200e030
    .zero 12
@ z80_dispatch_01002270 at 0x01002270
    ldrb r0, [fp], #1 @ 01002270
    lsl r0, r0, #0x18 @ 01002274
    lsrs r1, r5, #1 @ 01002278
    bic r5, r5, #0xd7 @ 0100227c
    addshs r4, r4, #0x1000000 @ 01002280
    orrhs r5, r5, #1 @ 01002284
    orrvs r5, r5, #4 @ 01002288
    adds r4, r4, r0 @ 0100228c
    orrmi r5, r5, #0x80 @ 01002290
    orreq r5, r5, #0x40 @ 01002294
    orrhs r5, r5, #1 @ 01002298
    eorvs r5, r5, #4 @ 0100229c
    ldrb r0, [fp], #1 @ 010022a0
    subs r5, r5, #0x70000 @ 010022a4
    ldrgt pc, [r2, r0, lsl #2] @ 010022a8
    .word 0xea402f5f @ 010022ac b #0x200e030
@ z80_dispatch_010022b0 at 0x010022b0
    sub lr, fp, r3 @ 010022b0
    lsr r1, lr, #8 @ 010022b4
    strb r1, [ip, #-1]! @ 010022b8
    strb lr, [ip, #-1]! @ 010022bc
    add fp, r3, #8 @ 010022c0
    add fp, r3, #8 @ 010022c4
    ldrb r0, [fp], #1 @ 010022c8
    subs r5, r5, #0xb0000 @ 010022cc
    ldrgt pc, [r2, r0, lsl #2] @ 010022d0
    .word 0xea402f55 @ 010022d4 b #0x200e030
    .zero 8
@ z80_dispatch_010022e0 at 0x010022e0
    tst r5, #1 @ 010022e0
    bne .L_01002c20 @ 010022e4
    ldrb fp, [ip], #1 @ 010022e8
    ldrb lr, [ip], #1 @ 010022ec
    add fp, r3, fp @ 010022f0
    add fp, fp, lr, lsl #8 @ 010022f4
    ldrb r0, [fp], #1 @ 010022f8
    subs r5, r5, #0xb0000 @ 010022fc
    ldrgt pc, [r2, r0, lsl #2] @ 01002300
    .word 0xea402f49 @ 01002304 b #0x200e030
    .zero 8
@ z80_dispatch_01002310 at 0x01002310
    ldrb r1, [ip], #1 @ 01002310
    ldrb r0, [ip], #1 @ 01002314
    orr r0, r1, r0, lsl #8 @ 01002318
    lsl r8, r0, #0x10 @ 0100231c
    lsl sb, r0, #0x18 @ 01002320
    and r8, r8, #0xff000000 @ 01002324
    ldrb r0, [fp], #1 @ 01002328
    subs r5, r5, #0xa0000 @ 0100232c
    ldrgt pc, [r2, r0, lsl #2] @ 01002330
    .word 0xea402f3d @ 01002334 b #0x200e030
    .zero 8
@ z80_dispatch_01002340 at 0x01002340
    tst r5, #1 @ 01002340
    bne .L_01002c00 @ 01002344
    ldrb r0, [fp], #1 @ 01002348
    ldrb lr, [fp], #1 @ 0100234c
    orr r0, r0, lr, lsl #8 @ 01002350
    add fp, r3, r0 @ 01002354
    ldrb r0, [fp], #1 @ 01002358
    subs r5, r5, #0xa0000 @ 0100235c
    ldrgt pc, [r2, r0, lsl #2] @ 01002360
    .word 0xea402f31 @ 01002364 b #0x200e030
    .zero 8
@ z80_dispatch_01002370 at 0x01002370
    subs r6, r6, #0x1000000 @ 01002370
    ldrsbne r0, [fp], #1 @ 01002374
    subne r5, r5, #0x50000 @ 01002378
    addeq fp, fp, #1 @ 0100237c
    addne fp, fp, r0 @ 01002380
    ldrb r0, [fp], #1 @ 01002384
    subs r5, r5, #0x80000 @ 01002388
    ldrgt pc, [r2, r0, lsl #2] @ 0100238c
    .word 0xea402f26 @ 01002390 b #0x200e030
    .zero 12
@ z80_dispatch_010023a0 at 0x010023a0
    tst r5, #1 @ 010023a0
    bne .L_01002c00 @ 010023a4
    sub lr, fp, r3 @ 010023a8
    add lr, lr, #2 @ 010023ac
    lsr r1, lr, #8 @ 010023b0
    strb r1, [ip, #-1]! @ 010023b4
    strb lr, [ip, #-1]! @ 010023b8
    ldrb r0, [fp], #1 @ 010023bc
    ldrb lr, [fp], #1 @ 010023c0
    orr r0, r0, lr, lsl #8 @ 010023c4
    add fp, r3, r0 @ 010023c8
    ldrb r0, [fp], #1 @ 010023cc
    subs r5, r5, #0x110000 @ 010023d0
    ldrgt pc, [r2, r0, lsl #2] @ 010023d4
    .word 0xea402f14 @ 010023d8 b #0x200e030
    .zero 4
@ z80_dispatch_010023e0 at 0x010023e0
    orr r0, r8, sb, lsr #8 @ 010023e0
    lsr r0, r0, #0x10 @ 010023e4
    lsr r1, r0, #8 @ 010023e8
    strb r1, [ip, #-1]! @ 010023ec
    strb r0, [ip, #-1]! @ 010023f0
    ldrb r0, [fp], #1 @ 010023f4
    subs r5, r5, #0xb0000 @ 010023f8
    ldrgt pc, [r2, r0, lsl #2] @ 010023fc
    .word 0xea402f0a @ 01002400 b #0x200e030
    .zero 12
@ z80_dispatch_01002410 at 0x01002410
    ldrb r0, [fp], #1 @ 01002410
    lsl r0, r0, #0x18 @ 01002414
    bic r5, r5, #0xd7 @ 01002418
    orr r5, r5, #2 @ 0100241c
    subs r4, r4, r0 @ 01002420
    orrmi r5, r5, #0x80 @ 01002424
    orreq r5, r5, #0x40 @ 01002428
    orrlo r5, r5, #1 @ 0100242c
    orrvs r5, r5, #4 @ 01002430
    ldrb r0, [fp], #1 @ 01002434
    subs r5, r5, #0x70000 @ 01002438
    ldrgt pc, [r2, r0, lsl #2] @ 0100243c
    .word 0xea402efa @ 01002440 b #0x200e030
    .zero 12
@ z80_dispatch_01002450 at 0x01002450
    sub lr, fp, r3 @ 01002450
    lsr r1, lr, #8 @ 01002454
    strb r1, [ip, #-1]! @ 01002458
    strb lr, [ip, #-1]! @ 0100245c
    add fp, r3, #0x10 @ 01002460
    ldrb r0, [fp], #1 @ 01002464
    subs r5, r5, #0xb0000 @ 01002468
    ldrgt pc, [r2, r0, lsl #2] @ 0100246c
    .word 0xea402eee @ 01002470 b #0x200e030
    .zero 12
@ z80_dispatch_01002480 at 0x01002480
    tst r5, #1 @ 01002480
    beq .L_01002c20 @ 01002484
    ldrb fp, [ip], #1 @ 01002488
    ldrb lr, [ip], #1 @ 0100248c
    add fp, r3, fp @ 01002490
    add fp, fp, lr, lsl #8 @ 01002494
    ldrb r0, [fp], #1 @ 01002498
    subs r5, r5, #0xb0000 @ 0100249c
    ldrgt pc, [r2, r0, lsl #2] @ 010024a0
    .word 0xea402ee1 @ 010024a4 b #0x200e030
    .zero 8
@ z80_dispatch_010024b0 at 0x010024b0
    ldr r1, [sp, #0x50] @ 010024b0
    orr r0, r6, r7, lsr #8 @ 010024b4
    str r0, [sp, #0x50] @ 010024b8
    and r6, r1, #0xff000000 @ 010024bc
    lsl r7, r1, #8 @ 010024c0
    ldr r1, [sp, #0x54] @ 010024c4
    orr r0, r8, sb, lsr #8 @ 010024c8
    str r0, [sp, #0x54] @ 010024cc
    and r8, r1, #0xff000000 @ 010024d0
    lsl sb, r1, #8 @ 010024d4
    ldr r1, [sp, #0x58] @ 010024d8
    str sl, [sp, #0x58] @ 010024dc
    mov sl, r1 @ 010024e0
    ldrb r0, [fp], #1 @ 010024e4
    subs r5, r5, #0x40000 @ 010024e8
    ldrgt pc, [r2, r0, lsl #2] @ 010024ec
    .word 0xea402ece @ 010024f0 b #0x200e030
    .zero 12
@ z80_dispatch_01002500 at 0x01002500
    tst r5, #1 @ 01002500
    beq .L_01002c00 @ 01002504
    ldrb r0, [fp], #1 @ 01002508
    ldrb lr, [fp], #1 @ 0100250c
    orr r0, r0, lr, lsl #8 @ 01002510
    add fp, r3, r0 @ 01002514
    ldrb r0, [fp], #1 @ 01002518
    subs r5, r5, #0xa0000 @ 0100251c
    ldrgt pc, [r2, r0, lsl #2] @ 01002520
    .word 0xea402ec1 @ 01002524 b #0x200e030
    .zero 8
@ z80_dispatch_01002530 at 0x01002530
    ldrb r0, [fp], #1 @ 01002530
    orr r0, r0, r4, lsr #16 @ 01002534
    mov r0, #0xff @ 01002538
    lsl r4, r0, #0x18 @ 0100253c
    ldrb r0, [fp], #1 @ 01002540
    subs r5, r5, #0xb0000 @ 01002544
    ldrgt pc, [r2, r0, lsl #2] @ 01002548
    .word 0xea402eb7 @ 0100254c b #0x200e030
@ z80_dispatch_01002550 at 0x01002550
    tst r5, #1 @ 01002550
    beq .L_01002c00 @ 01002554
    sub lr, fp, r3 @ 01002558
    add lr, lr, #2 @ 0100255c
    lsr r1, lr, #8 @ 01002560
    strb r1, [ip, #-1]! @ 01002564
    strb lr, [ip, #-1]! @ 01002568
    ldrb r0, [fp], #1 @ 0100256c
    ldrb lr, [fp], #1 @ 01002570
    orr r0, r0, lr, lsl #8 @ 01002574
    add fp, r3, r0 @ 01002578
    ldrb r0, [fp], #1 @ 0100257c
    subs r5, r5, #0x110000 @ 01002580
    ldrgt pc, [r2, r0, lsl #2] @ 01002584
    .word 0xea402ea8 @ 01002588 b #0x200e030
    .zero 4
@ z80_dispatch_01002590 at 0x01002590
    ldrb r1, [fp], #1 @ 01002590
    add r0, r2, #0xc00 @ 01002594
    ldr r1, [r0, r1, lsl #2] @ 01002598
    add lr, sp, #0x2c @ 0100259c
    ldr r0, [lr] @ 010025a0
    bx r1 @ 010025a4
    .zero 8
@ z80_dispatch_010025b0 at 0x010025b0
    ldrb r0, [fp], #1 @ 010025b0
    lsl r0, r0, #0x18 @ 010025b4
    and lr, r5, #1 @ 010025b8
    bic r5, r5, #0xd7 @ 010025bc
    orr r5, r5, #2 @ 010025c0
    subs r4, r4, lr, lsl #24 @ 010025c4
    orrlo r5, r5, #1 @ 010025c8
    orrvs r5, r5, #4 @ 010025cc
    subs r4, r4, r0 @ 010025d0
    orrmi r5, r5, #0x80 @ 010025d4
    orreq r5, r5, #0x40 @ 010025d8
    orrlo r5, r5, #1 @ 010025dc
    eorvs r5, r5, #4 @ 010025e0
    ldrb r0, [fp], #1 @ 010025e4
    subs r5, r5, #0x70000 @ 010025e8
    ldrgt pc, [r2, r0, lsl #2] @ 010025ec
    .word 0xea402e8e @ 010025f0 b #0x200e030
    .zero 12
@ z80_dispatch_01002600 at 0x01002600
    sub lr, fp, r3 @ 01002600
    lsr r1, lr, #8 @ 01002604
    strb r1, [ip, #-1]! @ 01002608
    strb lr, [ip, #-1]! @ 0100260c
    add fp, r3, #0x18 @ 01002610
    ldrb r0, [fp], #1 @ 01002614
    subs r5, r5, #0xb0000 @ 01002618
    ldrgt pc, [r2, r0, lsl #2] @ 0100261c
    .word 0xea402e82 @ 01002620 b #0x200e030
    .zero 12
@ z80_dispatch_01002630 at 0x01002630
    tst r5, #4 @ 01002630
    bne .L_01002c20 @ 01002634
    ldrb fp, [ip], #1 @ 01002638
    ldrb lr, [ip], #1 @ 0100263c
    add fp, r3, fp @ 01002640
    add fp, fp, lr, lsl #8 @ 01002644
    ldrb r0, [fp], #1 @ 01002648
    subs r5, r5, #0xb0000 @ 0100264c
    ldrgt pc, [r2, r0, lsl #2] @ 01002650
    .word 0xea402e75 @ 01002654 b #0x200e030
    .zero 8
@ z80_dispatch_01002660 at 0x01002660
    ldrb r1, [ip], #1 @ 01002660
    ldrb r0, [ip], #1 @ 01002664
    orr r0, r1, r0, lsl #8 @ 01002668
    lsl sl, r0, #0x10 @ 0100266c
    ldrb r0, [fp], #1 @ 01002670
    subs r5, r5, #0xa0000 @ 01002674
    ldrgt pc, [r2, r0, lsl #2] @ 01002678
    .word 0xea402e6b @ 0100267c b #0x200e030
@ z80_dispatch_01002680 at 0x01002680
    tst r5, #4 @ 01002680
    bne .L_01002c00 @ 01002684
    ldrb r0, [fp], #1 @ 01002688
    ldrb lr, [fp], #1 @ 0100268c
    orr r0, r0, lr, lsl #8 @ 01002690
    add fp, r3, r0 @ 01002694
    ldrb r0, [fp], #1 @ 01002698
    subs r5, r5, #0xa0000 @ 0100269c
    ldrgt pc, [r2, r0, lsl #2] @ 010026a0
    .word 0xea402e61 @ 010026a4 b #0x200e030
    .zero 8
@ z80_dispatch_010026b0 at 0x010026b0
    lsr r0, sl, #0x10 @ 010026b0
    ldrb lr, [ip] @ 010026b4
    strb r0, [ip] @ 010026b8
    ldrb sl, [ip, #1] @ 010026bc
    lsr r0, r0, #8 @ 010026c0
    strb r0, [ip, #1] @ 010026c4
    orr sl, lr, sl, lsl #8 @ 010026c8
    lsl sl, sl, #0x10 @ 010026cc
    ldrb r0, [fp], #1 @ 010026d0
    subs r5, r5, #0x130000 @ 010026d4
    ldrgt pc, [r2, r0, lsl #2] @ 010026d8
    .word 0xea402e53 @ 010026dc b #0x200e030
@ z80_dispatch_010026e0 at 0x010026e0
    tst r5, #4 @ 010026e0
    bne .L_01002c00 @ 010026e4
    sub lr, fp, r3 @ 010026e8
    add lr, lr, #2 @ 010026ec
    lsr r1, lr, #8 @ 010026f0
    strb r1, [ip, #-1]! @ 010026f4
    strb lr, [ip, #-1]! @ 010026f8
    ldrb r0, [fp], #1 @ 010026fc
    ldrb lr, [fp], #1 @ 01002700
    orr r0, r0, lr, lsl #8 @ 01002704
    add fp, r3, r0 @ 01002708
    ldrb r0, [fp], #1 @ 0100270c
    subs r5, r5, #0x110000 @ 01002710
    ldrgt pc, [r2, r0, lsl #2] @ 01002714
    .word 0xea402e44 @ 01002718 b #0x200e030
    .zero 4
@ z80_dispatch_01002720 at 0x01002720
    lsr r0, sl, #0x10 @ 01002720
    lsr r1, r0, #8 @ 01002724
    strb r1, [ip, #-1]! @ 01002728
    strb r0, [ip, #-1]! @ 0100272c
    ldrb r0, [fp], #1 @ 01002730
    subs r5, r5, #0xb0000 @ 01002734
    ldrgt pc, [r2, r0, lsl #2] @ 01002738
    .word 0xea402e3b @ 0100273c b #0x200e030
@ z80_dispatch_01002740 at 0x01002740
    ldrb r0, [fp], #1 @ 01002740
    lsl r0, r0, #0x18 @ 01002744
    ldr r1, [pc, #0x4a4] @ 01002748
    and r4, r4, r0 @ 0100274c
    ldrb r1, [r1, r4, lsr #24] @ 01002750
    bic r5, r5, #0xd7 @ 01002754
    orr r5, r5, r1 @ 01002758
    ldrb r0, [fp], #1 @ 0100275c
    subs r5, r5, #0x70000 @ 01002760
    ldrgt pc, [r2, r0, lsl #2] @ 01002764
    .word 0xea402e30 @ 01002768 b #0x200e030
    .zero 4
@ z80_dispatch_01002770 at 0x01002770
    sub lr, fp, r3 @ 01002770
    lsr r1, lr, #8 @ 01002774
    strb r1, [ip, #-1]! @ 01002778
    strb lr, [ip, #-1]! @ 0100277c
    add fp, r3, #0x20 @ 01002780
    ldrb r0, [fp], #1 @ 01002784
    subs r5, r5, #0xb0000 @ 01002788
    ldrgt pc, [r2, r0, lsl #2] @ 0100278c
    .word 0xea402e26 @ 01002790 b #0x200e030
    .zero 12
@ z80_dispatch_010027a0 at 0x010027a0
    tst r5, #4 @ 010027a0
    beq .L_01002c20 @ 010027a4
    ldrb fp, [ip], #1 @ 010027a8
    ldrb lr, [ip], #1 @ 010027ac
    add fp, r3, fp @ 010027b0
    add fp, fp, lr, lsl #8 @ 010027b4
    ldrb r0, [fp], #1 @ 010027b8
    subs r5, r5, #0xb0000 @ 010027bc
    ldrgt pc, [r2, r0, lsl #2] @ 010027c0
    .word 0xea402e19 @ 010027c4 b #0x200e030
    .zero 8
@ z80_dispatch_010027d0 at 0x010027d0
    add fp, r3, sl, lsr #16 @ 010027d0
    ldrb r0, [fp], #1 @ 010027d4
    subs r5, r5, #0x40000 @ 010027d8
    ldrgt pc, [r2, r0, lsl #2] @ 010027dc
    .word 0xea402e12 @ 010027e0 b #0x200e030
    .zero 12
@ z80_dispatch_010027f0 at 0x010027f0
    tst r5, #4 @ 010027f0
    beq .L_01002c00 @ 010027f4
    ldrb r0, [fp], #1 @ 010027f8
    ldrb lr, [fp], #1 @ 010027fc
    orr r0, r0, lr, lsl #8 @ 01002800
    add fp, r3, r0 @ 01002804
    ldrb r0, [fp], #1 @ 01002808
    subs r5, r5, #0xa0000 @ 0100280c
    ldrgt pc, [r2, r0, lsl #2] @ 01002810
    .word 0xea402e05 @ 01002814 b #0x200e030
    .zero 8
@ z80_dispatch_01002820 at 0x01002820
    mov r0, sl @ 01002820
    mov sl, r8 @ 01002824
    orr sl, sl, sb, lsr #8 @ 01002828
    and r8, r0, #0xff000000 @ 0100282c
    lsl sb, r0, #8 @ 01002830
    ldrb r0, [fp], #1 @ 01002834
    subs r5, r5, #0x40000 @ 01002838
    ldrgt pc, [r2, r0, lsl #2] @ 0100283c
    .word 0xea402dfa @ 01002840 b #0x200e030
    .zero 12
@ z80_dispatch_01002850 at 0x01002850
    tst r5, #4 @ 01002850
    beq .L_01002c00 @ 01002854
    sub lr, fp, r3 @ 01002858
    add lr, lr, #2 @ 0100285c
    lsr r1, lr, #8 @ 01002860
    strb r1, [ip, #-1]! @ 01002864
    strb lr, [ip, #-1]! @ 01002868
    ldrb r0, [fp], #1 @ 0100286c
    ldrb lr, [fp], #1 @ 01002870
    orr r0, r0, lr, lsl #8 @ 01002874
    add fp, r3, r0 @ 01002878
    ldrb r0, [fp], #1 @ 0100287c
    subs r5, r5, #0x110000 @ 01002880
    ldrgt pc, [r2, r0, lsl #2] @ 01002884
    .word 0xea402de8 @ 01002888 b #0x200e030
    .zero 4
@ z80_dispatch_01002890 at 0x01002890
    ldrb r0, [fp], #1 @ 01002890
    add r1, r2, #0x800 @ 01002894
    ldr pc, [r1, r0, lsl #2] @ 01002898
    .zero 4
@ z80_dispatch_010028a0 at 0x010028a0
    ldrb r0, [fp], #1 @ 010028a0
    lsl r0, r0, #0x18 @ 010028a4
    ldr r1, [pc, #0x344] @ 010028a8
    eor r4, r4, r0 @ 010028ac
    ldrb r1, [r1, r4, lsr #24] @ 010028b0
    bic r5, r5, #0xd7 @ 010028b4
    orr r5, r5, r1 @ 010028b8
    ldrb r0, [fp], #1 @ 010028bc
    subs r5, r5, #0x70000 @ 010028c0
    ldrgt pc, [r2, r0, lsl #2] @ 010028c4
    .word 0xea402dd8 @ 010028c8 b #0x200e030
    .zero 4
@ z80_dispatch_010028d0 at 0x010028d0
    sub lr, fp, r3 @ 010028d0
    lsr r1, lr, #8 @ 010028d4
    strb r1, [ip, #-1]! @ 010028d8
    strb lr, [ip, #-1]! @ 010028dc
    add fp, r3, #0x28 @ 010028e0
    ldrb r0, [fp], #1 @ 010028e4
    subs r5, r5, #0xb0000 @ 010028e8
    ldrgt pc, [r2, r0, lsl #2] @ 010028ec
    .word 0xea402dce @ 010028f0 b #0x200e030
    .zero 12
@ z80_dispatch_01002900 at 0x01002900
    tst r5, #0x80 @ 01002900
    bne .L_01002c20 @ 01002904
    ldrb fp, [ip], #1 @ 01002908
    ldrb lr, [ip], #1 @ 0100290c
    add fp, r3, fp @ 01002910
    add fp, fp, lr, lsl #8 @ 01002914
    ldrb r0, [fp], #1 @ 01002918
    subs r5, r5, #0xb0000 @ 0100291c
    ldrgt pc, [r2, r0, lsl #2] @ 01002920
    .word 0xea402dc1 @ 01002924 b #0x200e030
    .zero 8
@ z80_dispatch_01002930 at 0x01002930
    ldrb r1, [ip], #1 @ 01002930
    ldrb r0, [ip], #1 @ 01002934
    orr r0, r1, r0, lsl #8 @ 01002938
    ror r4, r0, #8 @ 0100293c
    bic r5, r5, #0xd7 @ 01002940
    orr r5, r5, r4, lsr #24 @ 01002944
    lsl r4, r4, #0x18 @ 01002948
    ldrb r0, [fp], #1 @ 0100294c
    subs r5, r5, #0xa0000 @ 01002950
    ldrgt pc, [r2, r0, lsl #2] @ 01002954
    .word 0xea402db4 @ 01002958 b #0x200e030
    .zero 4
@ z80_dispatch_01002960 at 0x01002960
    tst r5, #0x80 @ 01002960
    bne .L_01002c00 @ 01002964
    ldrb r0, [fp], #1 @ 01002968
    ldrb lr, [fp], #1 @ 0100296c
    orr r0, r0, lr, lsl #8 @ 01002970
    add fp, r3, r0 @ 01002974
    ldrb r0, [fp], #1 @ 01002978
    subs r5, r5, #0xa0000 @ 0100297c
    ldrgt pc, [r2, r0, lsl #2] @ 01002980
    .word 0xea402da9 @ 01002984 b #0x200e030
    .zero 8
@ z80_dispatch_01002990 at 0x01002990
    ldr r0, [sp, #0x44] @ 01002990
    bic r0, r0, #0xc @ 01002994
    str r0, [sp, #0x44] @ 01002998
    ldrb r0, [fp], #1 @ 0100299c
    subs r5, r5, #0x40000 @ 010029a0
    ldrgt pc, [r2, r0, lsl #2] @ 010029a4
    .word 0xea402da0 @ 010029a8 b #0x200e030
    .zero 4
@ z80_dispatch_010029b0 at 0x010029b0
    tst r5, #0x80 @ 010029b0
    bne .L_01002c00 @ 010029b4
    sub lr, fp, r3 @ 010029b8
    add lr, lr, #2 @ 010029bc
    lsr r1, lr, #8 @ 010029c0
    strb r1, [ip, #-1]! @ 010029c4
    strb lr, [ip, #-1]! @ 010029c8
    ldrb r0, [fp], #1 @ 010029cc
    ldrb lr, [fp], #1 @ 010029d0
    orr r0, r0, lr, lsl #8 @ 010029d4
    add fp, r3, r0 @ 010029d8
    ldrb r0, [fp], #1 @ 010029dc
    subs r5, r5, #0x110000 @ 010029e0
    ldrgt pc, [r2, r0, lsl #2] @ 010029e4
    .word 0xea402d90 @ 010029e8 b #0x200e030
    .zero 4
@ z80_dispatch_010029f0 at 0x010029f0
    and r0, r5, #0xff @ 010029f0
    orr r0, r0, r4, lsr #16 @ 010029f4
    lsr r1, r0, #8 @ 010029f8
    strb r1, [ip, #-1]! @ 010029fc
    strb r0, [ip, #-1]! @ 01002a00
    ldrb r0, [fp], #1 @ 01002a04
    subs r5, r5, #0xb0000 @ 01002a08
    ldrgt pc, [r2, r0, lsl #2] @ 01002a0c
    .word 0xea402d86 @ 01002a10 b #0x200e030
    .zero 12
@ z80_dispatch_01002a20 at 0x01002a20
    ldrb r0, [fp], #1 @ 01002a20
    lsl r0, r0, #0x18 @ 01002a24
    ldr r1, [pc, #0x1c4] @ 01002a28
    orr r4, r4, r0 @ 01002a2c
    ldrb r1, [r1, r4, lsr #24] @ 01002a30
    bic r5, r5, #0xd7 @ 01002a34
    orr r5, r5, r1 @ 01002a38
    ldrb r0, [fp], #1 @ 01002a3c
    subs r5, r5, #0x70000 @ 01002a40
    ldrgt pc, [r2, r0, lsl #2] @ 01002a44
    .word 0xea402d78 @ 01002a48 b #0x200e030
    .zero 4
@ z80_dispatch_01002a50 at 0x01002a50
    sub lr, fp, r3 @ 01002a50
    lsr r1, lr, #8 @ 01002a54
    strb r1, [ip, #-1]! @ 01002a58
    strb lr, [ip, #-1]! @ 01002a5c
    add fp, r3, #0x30 @ 01002a60
    ldrb r0, [fp], #1 @ 01002a64
    subs r5, r5, #0xb0000 @ 01002a68
    ldrgt pc, [r2, r0, lsl #2] @ 01002a6c
    .word 0xea402d6e @ 01002a70 b #0x200e030
    .zero 12
@ z80_dispatch_01002a80 at 0x01002a80
    tst r5, #0x80 @ 01002a80
    beq .L_01002c20 @ 01002a84
    ldrb fp, [ip], #1 @ 01002a88
    ldrb lr, [ip], #1 @ 01002a8c
    add fp, r3, fp @ 01002a90
    add fp, fp, lr, lsl #8 @ 01002a94
    ldrb r0, [fp], #1 @ 01002a98
    subs r5, r5, #0xb0000 @ 01002a9c
    ldrgt pc, [r2, r0, lsl #2] @ 01002aa0
    .word 0xea402d61 @ 01002aa4 b #0x200e030
    .zero 8
@ z80_dispatch_01002ab0 at 0x01002ab0
    add ip, r3, sl, lsr #16 @ 01002ab0
    ldrb r0, [fp], #1 @ 01002ab4
    subs r5, r5, #0x60000 @ 01002ab8
    ldrgt pc, [r2, r0, lsl #2] @ 01002abc
    .word 0xea402d5a @ 01002ac0 b #0x200e030
    .zero 12
@ z80_dispatch_01002ad0 at 0x01002ad0
    tst r5, #0x80 @ 01002ad0
    beq .L_01002c00 @ 01002ad4
    ldrb r0, [fp], #1 @ 01002ad8
    ldrb lr, [fp], #1 @ 01002adc
    orr r0, r0, lr, lsl #8 @ 01002ae0
    add fp, r3, r0 @ 01002ae4
    ldrb r0, [fp], #1 @ 01002ae8
    subs r5, r5, #0xa0000 @ 01002aec
    ldrgt pc, [r2, r0, lsl #2] @ 01002af0
    .word 0xea402d4d @ 01002af4 b #0x200e030
    .zero 8
@ z80_dispatch_01002b00 at 0x01002b00
    ldr r0, [sp, #0x44] @ 01002b00
    orr r0, r0, #0xc @ 01002b04
    str r0, [sp, #0x44] @ 01002b08
    asr r0, r5, #0x10 @ 01002b0c
    str r0, [sp, #0x28] @ 01002b10
    and r5, r5, #0xff @ 01002b14
    ldrb r0, [fp], #1 @ 01002b18
    sub r5, r5, #0x40000 @ 01002b1c
    ldr pc, [r2, r0, lsl #2] @ 01002b20
    .zero 12
@ z80_dispatch_01002b30 at 0x01002b30
    tst r5, #0x80 @ 01002b30
    beq .L_01002c00 @ 01002b34
    sub lr, fp, r3 @ 01002b38
    add lr, lr, #2 @ 01002b3c
    lsr r1, lr, #8 @ 01002b40
    strb r1, [ip, #-1]! @ 01002b44
    strb lr, [ip, #-1]! @ 01002b48
    ldrb r0, [fp], #1 @ 01002b4c
    ldrb lr, [fp], #1 @ 01002b50
    orr r0, r0, lr, lsl #8 @ 01002b54
    add fp, r3, r0 @ 01002b58
    ldrb r0, [fp], #1 @ 01002b5c
    subs r5, r5, #0x110000 @ 01002b60
    ldrgt pc, [r2, r0, lsl #2] @ 01002b64
    .word 0xea402d30 @ 01002b68 b #0x200e030
    .zero 4
@ z80_dispatch_01002b70 at 0x01002b70
    ldrb r1, [fp], #1 @ 01002b70
    add r0, r2, #0xc00 @ 01002b74
    ldr r1, [r0, r1, lsl #2] @ 01002b78
    add lr, sp, #0x30 @ 01002b7c
    ldr r0, [lr] @ 01002b80
    bx r1 @ 01002b84
    .zero 8
@ z80_dispatch_01002b90 at 0x01002b90
    ldrb r0, [fp], #1 @ 01002b90
    lsl r0, r0, #0x18 @ 01002b94
    cmp r4, r0 @ 01002b98
    bic r5, r5, #0xd7 @ 01002b9c
    orr r5, r5, #2 @ 01002ba0
    orrmi r5, r5, #0x80 @ 01002ba4
    orreq r5, r5, #0x40 @ 01002ba8
    orrlo r5, r5, #1 @ 01002bac
    orrvs r5, r5, #4 @ 01002bb0
    ldrb r0, [fp], #1 @ 01002bb4
    subs r5, r5, #0x70000 @ 01002bb8
    ldrgt pc, [r2, r0, lsl #2] @ 01002bbc
    .word 0xea402d1a @ 01002bc0 b #0x200e030
    .zero 12
@ z80_dispatch_01002bd0 at 0x01002bd0
    sub lr, fp, r3 @ 01002bd0
    lsr r1, lr, #8 @ 01002bd4
    strb r1, [ip, #-1]! @ 01002bd8
    strb lr, [ip, #-1]! @ 01002bdc
    add fp, r3, #0x38 @ 01002be0
    ldrb r0, [fp], #1 @ 01002be4
    subs r5, r5, #0xb0000 @ 01002be8
    ldrgt pc, [r2, r0, lsl #2] @ 01002bec
    .word 0xea402d0e @ 01002bf0 b #0x200e030
    .byte 0x20, 0xde, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 01002bf4
.L_01002c00:
    add fp, fp, #2 @ 01002c00
    ldrb r0, [fp], #1 @ 01002c04
    subs r5, r5, #0xa0000 @ 01002c08
    ldrgt pc, [r2, r0, lsl #2] @ 01002c0c
    .word 0xea402d06 @ 01002c10 b #0x200e030
    .zero 12
.L_01002c20:
    ldrb r0, [fp], #1 @ 01002c20
    subs r5, r5, #0x50000 @ 01002c24
    ldrgt pc, [r2, r0, lsl #2] @ 01002c28
    .word 0xea402cff @ 01002c2c b #0x200e030
@ z80_dispatch_01002c30 at 0x01002c30
    cmp sl, #0x20000000 @ 01002c30
    blhs .L_01002cec @ 01002c34
    ldrb r0, [r3, sl, lsr #16] @ 01002c38
    bic r5, r5, #0xd6 @ 01002c3c
    lsl r1, r0, #0x18 @ 01002c40
    ands r1, r1, #0x1000000 @ 01002c44
    orreq r5, r5, #0x44 @ 01002c48
    orrmi r5, r5, #0x80 @ 01002c4c
    ldrb r0, [fp], #1 @ 01002c50
    subs r5, r5, #0xc0000 @ 01002c54
    ldrgt pc, [r2, r0, lsl #2] @ 01002c58
    .word 0xea402cf3 @ 01002c5c b #0x200e030
@ z80_dispatch_01002c60 at 0x01002c60
    bic r5, r5, #0xd6 @ 01002c60
    ands r1, r4, #0x1000000 @ 01002c64
    orreq r5, r5, #0x44 @ 01002c68
    orrmi r5, r5, #0x80 @ 01002c6c
    ldrb r0, [fp], #1 @ 01002c70
    subs r5, r5, #0x80000 @ 01002c74
    ldrgt pc, [r2, r0, lsl #2] @ 01002c78
    .word 0xea402ceb @ 01002c7c b #0x200e030
@ z80_dispatch_01002c80 at 0x01002c80
    cmp sl, #0x20000000 @ 01002c80
    blhs .L_01002cec @ 01002c84
    ldrb r0, [r3, sl, lsr #16] @ 01002c88
    bic r5, r5, #0xd6 @ 01002c8c
    lsl r1, r0, #0x18 @ 01002c90
    ands r1, r1, #0x2000000 @ 01002c94
    orreq r5, r5, #0x44 @ 01002c98
    orrmi r5, r5, #0x80 @ 01002c9c
    ldrb r0, [fp], #1 @ 01002ca0
    subs r5, r5, #0xc0000 @ 01002ca4
    ldrgt pc, [r2, r0, lsl #2] @ 01002ca8
    .word 0xea402cdf @ 01002cac b #0x200e030
@ z80_dispatch_01002cb0 at 0x01002cb0
    bic r5, r5, #0xd6 @ 01002cb0
    ands r1, r4, #0x2000000 @ 01002cb4
    orreq r5, r5, #0x44 @ 01002cb8
    orrmi r5, r5, #0x80 @ 01002cbc
    ldrb r0, [fp], #1 @ 01002cc0
    subs r5, r5, #0x80000 @ 01002cc4
    ldrgt pc, [r2, r0, lsl #2] @ 01002cc8
    .word 0xea402cd7 @ 01002ccc b #0x200e030
.L_01002cd0:
@ FUN_01002cd0 at 0x01002cd0
    ldr r1, [sp, #0x98] @ 01002cd0
    and r2, r0, #0xf000 @ 01002cd4
    ldr pc, [r1, r2, lsr #10] @ 01002cd8
@ FUN_01002cdc at 0x01002cdc
    str r1, [sp, #0x68] @ 01002cdc
    ldr r1, [sp, #0x9c] @ 01002ce0
    and r2, r0, #0xf000 @ 01002ce4
    ldr pc, [r1, r2, lsr #10] @ 01002ce8
.L_01002cec:
@ FUN_01002cec at 0x01002cec
    ldr r1, [sp, #0x98] @ 01002cec
    lsr r0, sl, #0x10 @ 01002cf0
    and r2, r0, #0xf000 @ 01002cf4
    ldr pc, [r1, r2, lsr #10] @ 01002cf8
.L_01002cfc:
@ FUN_01002cfc at 0x01002cfc
    add lr, lr, #0x10 @ 01002cfc
    push {r3, ip, lr} @ 01002d00
    .word 0xeb400817 @ 01002d04 bl #0x2004d68
    ldr r2, [pc, #0x24c] @ 01002d08
    pop {r3, ip, pc} @ 01002d0c
.L_01002d10:
@ FUN_01002d10 at 0x01002d10
    add lr, lr, #4 @ 01002d10
    push {r3, ip, lr} @ 01002d14
    cmp r0, #0x3000 @ 01002d18
    bge .L_01002d4c @ 01002d1c
    .word 0xeb400b9e @ 01002d20 bl #0x2005ba0
    ldr r2, [pc, #0x230] @ 01002d24
    pop {r3, ip, pc} @ 01002d28
.L_01002d2c:
@ FUN_01002d2c at 0x01002d2c
    lsr r0, sl, #0x10 @ 01002d2c
    add lr, lr, #4 @ 01002d30
    push {r3, ip, lr} @ 01002d34
    cmp r0, #0x3000 @ 01002d38
    bge .L_01002d4c @ 01002d3c
    .word 0xeb400b96 @ 01002d40 bl #0x2005ba0
    ldr r2, [pc, #0x210] @ 01002d44
    pop {r3, ip, pc} @ 01002d48
.L_01002d4c:
    .word 0xeb4007bf @ 01002d4c bl #0x2004c50
    ldr r2, [pc, #0x204] @ 01002d50
    pop {r3, ip, pc} @ 01002d54
    .byte 0x10, 0xe0, 0x8e, 0xe2, 0x08, 0x50, 0x2d, 0xe9, 0xdf, 0x07, 0x40, 0xeb, 0xf0, 0x21, 0x9f, 0xe5 @ 01002d58
    .byte 0x08, 0x90, 0xbd, 0xe8 @ 01002d68
@ z80_dispatch_01002d6c at 0x01002d6c
    bic r0, r0, #0x4000 @ 01002d6c
    ldrb r0, [r3, r0] @ 01002d70
    ldr r2, [sp, #0x94] @ 01002d74
    add pc, lr, #4 @ 01002d78
@ z80_dispatch_01002d7c at 0x01002d7c
    ldr r0, [sp, #0x80] @ 01002d7c
    ldr r2, [sp, #0x94] @ 01002d80
    and r0, r0, #3 @ 01002d84
    add pc, lr, #4 @ 01002d88
@ z80_dispatch_01002d8c at 0x01002d8c
    mov r0, #0xff @ 01002d8c
    ldr r2, [sp, #0x94] @ 01002d90
    add pc, lr, #4 @ 01002d94
@ z80_dispatch_01002d98 at 0x01002d98
    add lr, lr, #4 @ 01002d98
    cmp r0, #0x7f00 @ 01002d9c
    movlt r0, #0 @ 01002da0
    bxlt lr @ 01002da4
    tst r0, #0xe0 @ 01002da8
    movne r0, #0 @ 01002dac
    bxne lr @ 01002db0
    and r0, r0, #0x1f @ 01002db4
    ldr r2, [sp, #0x94] @ 01002db8
    bx lr @ 01002dbc
@ z80_dispatch_01002dc0 at 0x01002dc0
    ldr r1, [sp, #0xac] @ 01002dc0
    bic r0, r0, #0x8000 @ 01002dc4
    ldr r1, [r1] @ 01002dc8
    orr r0, r0, r1 @ 01002dcc
    cmp r0, #0x400000 @ 01002dd0
    bge .L_01002dec @ 01002dd4
    ldr r1, [sp, #0xb0] @ 01002dd8
    eor r0, r0, #1 @ 01002ddc
    ldrb r0, [r1, r0] @ 01002de0
    ldr r2, [sp, #0x94] @ 01002de4
    add pc, lr, #4 @ 01002de8
.L_01002dec:
    add lr, lr, #4 @ 01002dec
    push {r3, ip, lr} @ 01002df0
    .word 0xeb400597 @ 01002df4 bl #0x2004458
    ldr r2, [pc, #0x15c] @ 01002df8
    pop {r3, ip, pc} @ 01002dfc
@ z80_dispatch_01002e00 at 0x01002e00
    bic r0, r0, #0x4000 @ 01002e00
    ldrb r0, [r3, r0] @ 01002e04
    ldr r2, [sp, #0x94] @ 01002e08
    ldr r1, [sp, #0x68] @ 01002e0c
    add pc, lr, #4 @ 01002e10
@ z80_dispatch_01002e14 at 0x01002e14
    ldr r0, [sp, #0x80] @ 01002e14
    ldr r2, [sp, #0x94] @ 01002e18
    and r0, r0, #3 @ 01002e1c
    ldr r1, [sp, #0x68] @ 01002e20
    add pc, lr, #4 @ 01002e24
@ z80_dispatch_01002e28 at 0x01002e28
    mov r0, #0xff @ 01002e28
    ldr r2, [sp, #0x94] @ 01002e2c
    ldr r1, [sp, #0x68] @ 01002e30
    add pc, lr, #4 @ 01002e34
@ z80_dispatch_01002e38 at 0x01002e38
    cmp r0, #0x7f00 @ 01002e38
    movlt r0, #0xff @ 01002e3c
    bxlt lr @ 01002e40
    tst r0, #0xe0 @ 01002e44
    movne r0, #0xff @ 01002e48
    bxne lr @ 01002e4c
    and r0, r0, #0x1f @ 01002e50
    ldr r2, [sp, #0x94] @ 01002e54
    ldr r1, [sp, #0x68] @ 01002e58
    add pc, lr, #4 @ 01002e5c
@ z80_dispatch_01002e60 at 0x01002e60
    ldr r1, [sp, #0xac] @ 01002e60
    bic r0, r0, #0x8000 @ 01002e64
    ldr r1, [r1] @ 01002e68
    orr r0, r0, r1 @ 01002e6c
    cmp r0, #0x400000 @ 01002e70
    bge .L_01002dec @ 01002e74
    ldr r1, [sp, #0xb0] @ 01002e78
    eor r0, r0, #1 @ 01002e7c
    ldrb r0, [r1, r0] @ 01002e80
    ldr r2, [sp, #0x94] @ 01002e84
    ldr r1, [sp, #0x68] @ 01002e88
    add pc, lr, #4 @ 01002e8c
    .byte 0x68, 0x10, 0x9d, 0xe5, 0x04, 0xe0, 0x8e, 0xe2, 0x0a, 0x50, 0x2d, 0xe9, 0x6d, 0x05, 0x40, 0xeb @ 01002e90
    .byte 0xb4, 0x20, 0x9f, 0xe5, 0x0a, 0x90, 0xbd, 0xe8 @ 01002ea0
@ z80_dispatch_01002ea8 at 0x01002ea8
    bic r0, r0, #0x4000 @ 01002ea8
    add r0, r3, r0 @ 01002eac
    ldrb r2, [r0], #1 @ 01002eb0
    ldrb r0, [r0] @ 01002eb4
    orr r0, r2, r0, lsl #8 @ 01002eb8
    ldr r2, [sp, #0x94] @ 01002ebc
    add pc, lr, #0x10 @ 01002ec0
@ z80_dispatch_01002ec4 at 0x01002ec4
    ldr r0, [sp, #0xa8] @ 01002ec4
    ldr r2, [sp, #0x94] @ 01002ec8
    ldrb r0, [r0, #0x1c] @ 01002ecc
    orr r0, r0, r0, lsl #8 @ 01002ed0
    add pc, lr, #0x10 @ 01002ed4
@ z80_dispatch_01002ed8 at 0x01002ed8
    mov r0, #0xff @ 01002ed8
    orr r0, r0, r0, lsl #8 @ 01002edc
    ldr r2, [sp, #0x94] @ 01002ee0
    add pc, lr, #0x10 @ 01002ee4
@ z80_dispatch_01002ee8 at 0x01002ee8
    add lr, lr, #0x10 @ 01002ee8
    mov r1, #0xff @ 01002eec
    cmp r0, #0x7f00 @ 01002ef0
    orrlt r0, r1, r1, lsl #8 @ 01002ef4
    bxlt lr @ 01002ef8
    tst r0, #0xe0 @ 01002efc
    orrne r0, r1, r1, lsl #8 @ 01002f00
    bxne lr @ 01002f04
    and r0, r0, #0x1f @ 01002f08
    ldr r2, [sp, #0x94] @ 01002f0c
    bx lr @ 01002f10
@ z80_dispatch_01002f14 at 0x01002f14
    ldr r1, [sp, #0xac] @ 01002f14
    bic r0, r0, #0x8000 @ 01002f18
    ldr r1, [r1] @ 01002f1c
    cmp r1, #0x400000 @ 01002f20
    bge .L_01002f48 @ 01002f24
    orr r0, r0, r1 @ 01002f28
    ldr r1, [sp, #0xb0] @ 01002f2c
    add r1, r1, r0 @ 01002f30
    ldrb r0, [r1], #1 @ 01002f34
    ldrb r2, [r1] @ 01002f38
    ldr r2, [sp, #0x94] @ 01002f3c
    orr r0, r2, r0, lsl #8 @ 01002f40
    add pc, lr, #0x10 @ 01002f44
.L_01002f48:
    add lr, lr, #0x10 @ 01002f48
    push {r3, ip, lr} @ 01002f4c
    .word 0xeb400784 @ 01002f50 bl #0x2004d68
    ldr r2, [pc] @ 01002f54
    pop {r3, ip, pc} @ 01002f58
    .byte 0xb0, 0x54, 0x01, 0x02 @ 01002f5c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 01002f60
    ldr sb, [pc, #0x140] @ 01002f64
    mov r6, r0 @ 01002f68
    ldr r2, [r6, #0x94] @ 01002f6c
    ldrb r3, [r6, #0xa1] @ 01002f70
    add r2, r2, r1 @ 01002f74
    ldr r7, [r6, #0x4c] @ 01002f78
    ldr sl, [r6, #0x44] @ 01002f7c
    add r7, r7, r1, lsl #16 @ 01002f80
    str r2, [r6, #0x94] @ 01002f84
    ldr r8, [r6, #0x64] @ 01002f88
    cmp r3, #0 @ 01002f8c
    beq .L_01003070 @ 01002f90
    ldr r2, [r6, #0x50] @ 01002f94
    ldrb r0, [r6, #0xa0] @ 01002f98
    lsr r1, r2, #8 @ 01002f9c
    and r1, r1, #7 @ 01002fa0
    cmp r0, #6 @ 01002fa4
    cmple r0, r1 @ 01002fa8
    ble .L_01003070 @ 01002fac
    ldr lr, [r6, #0x54] @ 01002fb0
    orr r2, r2, r7 @ 01002fb4
    tst r2, #0x2000 @ 01002fb8
    ldrne r3, [r6, #0x3c] @ 01002fbc
    bne .L_01002fd0 @ 01002fc0
    ldr r4, [r6, #0x3c] @ 01002fc4
    ldr r3, [r6, #0x48] @ 01002fc8
    str r4, [r6, #0x48] @ 01002fcc
.L_01002fd0:
    sub r3, r3, #6 @ 01002fd0
    str r3, [r6, #0x3c] @ 01002fd4
    mov r1, #0x2000 @ 01002fd8
    orr r1, r1, r0, lsl #8 @ 01002fdc
    str r1, [r6, #0x50] @ 01002fe0
    lsl r3, r3, #0x10 @ 01002fe4
    add r4, r8, r3, lsr #16 @ 01002fe8
    strh r2, [r4], #2 @ 01002fec
    ldr r1, [r6, #0x9c] @ 01002ff0
    sub r5, sl, lr @ 01002ff4
    orr r5, r5, r1 @ 01002ff8
    lsr r1, r5, #0x10 @ 01002ffc
    strh r1, [r4], #2 @ 01003000
    lsl r3, r5, #0x10 @ 01003004
    lsr r3, r3, #0x10 @ 01003008
    strh r3, [r4] @ 0100300c
    ldr r5, [r6, #0x60] @ 01003010
    add r2, r0, #0x18 @ 01003014
    ldr r3, [r5, r2, lsl #2] @ 01003018
    mov r1, #0x80000000 @ 0100301c
    ror r3, r3, #0x10 @ 01003020
    tst r3, #0xc00000 @ 01003024
    moveq lr, r5 @ 01003028
    asreq r1, r1, #9 @ 0100302c
    movne lr, r8 @ 01003030
    asrne r1, r1, #0xf @ 01003034
    and r2, r3, r1 @ 01003038
    str r2, [r6, #0x9c] @ 0100303c
    str lr, [r6, #0x54] @ 01003040
    mvn r1, r1 @ 01003044
    and r3, r3, r1 @ 01003048
    add sl, lr, r3 @ 0100304c
    mov r1, #0 @ 01003050
    strb r1, [r6, #0xa1] @ 01003054
    mov r2, #0 @ 01003058
    strb r2, [r6, #0xa2] @ 0100305c
    strb r1, [r6, #0xa3] @ 01003060
    ldr lr, [pc, #0x44] @ 01003064
    sub r7, r7, #0x2c0000 @ 01003068
    ldr pc, [r6, #0x84] @ 0100306c
.L_01003070:
    ldrb r3, [r6, #0xa2] @ 01003070
    tst r3, r3 @ 01003074
    bne .L_01003094 @ 01003078
    ldrh fp, [sl], #2 @ 0100307c
    ldr pc, [sb, fp, lsl #2] @ 01003080
.L_01003084:
    asr r0, r7, #0x10 @ 01003084
    str r7, [r6, #0x4c] @ 01003088
    str sl, [r6, #0x44] @ 0100308c
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 01003090
.L_01003094:
    mvn r0, #5 @ 01003094
    and r7, r7, #0x1f @ 01003098
    orr r7, r7, r0, lsl #16 @ 0100309c
    str r7, [r6, #0x4c] @ 010030a0
    str sl, [r6, #0x44] @ 010030a4
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 010030a8
    .byte 0x28, 0x2c, 0x03, 0x02, 0x7c, 0x30, 0x00, 0x01 @ 010030ac
@ m68k_dispatch_010030b4 at 0x010030b4
    ldrsh r3, [sl], #2 @ 010030b4
    and r1, fp, #7 @ 010030b8
    add r2, r6, #0x20 @ 010030bc
    ldr r0, [r2, r1, lsl #2] @ 010030c0
    bic r7, r7, #0xf @ 010030c4
    add r0, r0, r3 @ 010030c8
    bl .L_010040c4 @ 010030cc
    lsls r1, r0, #0x10 @ 010030d0
    orreq r7, r7, #4 @ 010030d4
    orrmi r7, r7, #8 @ 010030d8
    and r2, fp, #0xe00 @ 010030dc
    lsr r2, r2, #7 @ 010030e0
    strh r0, [r6, r2] @ 010030e4
    ldrh fp, [sl], #2 @ 010030e8
    sub r7, r7, #0xc0000 @ 010030ec
    ldr pc, [sb, fp, lsl #2] @ 010030f0
@ m68k_dispatch_010030f4 at 0x010030f4
    tst r7, #5 @ 010030f4
    andeq r1, fp, #0xff @ 010030f8
    addeq sl, sl, r1 @ 010030fc
    subeq r7, r7, #0x20000 @ 01003100
    subs r7, r7, #0x80000 @ 01003104
    ldrhgt fp, [sl], #2 @ 01003108
    ble .L_01003084 @ 0100310c
    ldr pc, [sb, fp, lsl #2] @ 01003110
@ m68k_dispatch_01003114 at 0x01003114
    tst r7, #5 @ 01003114
    beq .L_010037d4 @ 01003118
    subs r7, r7, #0x80000 @ 0100311c
    ldrhgt fp, [sl], #2 @ 01003120
    ble .L_01003084 @ 01003124
    ldr pc, [sb, fp, lsl #2] @ 01003128
@ m68k_dispatch_0100312c at 0x0100312c
    tst r7, #5 @ 0100312c
    ldrsheq r1, [sl] @ 01003130
    addne sl, sl, #2 @ 01003134
    subne r7, r7, #0x20000 @ 01003138
    addeq sl, sl, r1 @ 0100313c
    subs r7, r7, #0xa0000 @ 01003140
    ldrhgt fp, [sl], #2 @ 01003144
    ble .L_01003084 @ 01003148
    ldr pc, [sb, fp, lsl #2] @ 0100314c
@ m68k_dispatch_01003150 at 0x01003150
    tst r7, #5 @ 01003150
    andne r1, fp, #0xff @ 01003154
    addne sl, sl, r1 @ 01003158
    subne r7, r7, #0x20000 @ 0100315c
    subs r7, r7, #0x80000 @ 01003160
    ldrhgt fp, [sl], #2 @ 01003164
    ble .L_01003084 @ 01003168
    ldr pc, [sb, fp, lsl #2] @ 0100316c
@ m68k_dispatch_01003170 at 0x01003170
    mov r0, sl @ 01003170
    .word 0xeb40085c @ 01003174 bl #0x20052ec
    tst r7, #5 @ 01003178
    bne .L_010037d4 @ 0100317c
    subs r7, r7, #0x80000 @ 01003180
    ldrhgt fp, [sl], #2 @ 01003184
    ble .L_01003084 @ 01003188
    ldr pc, [sb, fp, lsl #2] @ 0100318c
    .byte 0x05, 0x00, 0x17, 0xe3, 0x8e, 0x01, 0x00, 0x1a, 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0 @ 01003190
    .byte 0xb7, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7, 0x05, 0x00, 0x17, 0xe3, 0x8e, 0x01, 0x00, 0x1a @ 010031a0
    .byte 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0, 0xb1, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7 @ 010031b0
@ m68k_dispatch_010031c0 at 0x010031c0
    tst r7, #5 @ 010031c0
    ldrshne r1, [sl] @ 010031c4
    addeq sl, sl, #2 @ 010031c8
    subeq r7, r7, #0x20000 @ 010031cc
    addne sl, sl, r1 @ 010031d0
    subs r7, r7, #0xa0000 @ 010031d4
    ldrhgt fp, [sl], #2 @ 010031d8
    ble .L_01003084 @ 010031dc
    ldr pc, [sb, fp, lsl #2] @ 010031e0
@ m68k_dispatch_010031e4 at 0x010031e4
    tst r7, #1 @ 010031e4
    andeq r1, fp, #0xff @ 010031e8
    addeq sl, sl, r1 @ 010031ec
    subeq r7, r7, #0x20000 @ 010031f0
    subs r7, r7, #0x80000 @ 010031f4
    ldrhgt fp, [sl], #2 @ 010031f8
    ble .L_01003084 @ 010031fc
    ldr pc, [sb, fp, lsl #2] @ 01003200
@ m68k_dispatch_01003204 at 0x01003204
    mov r0, sl @ 01003204
    .word 0xeb400837 @ 01003208 bl #0x20052ec
    tst r7, #1 @ 0100320c
    beq .L_010037d4 @ 01003210
    subs r7, r7, #0x80000 @ 01003214
    ldrhgt fp, [sl], #2 @ 01003218
    ble .L_01003084 @ 0100321c
    ldr pc, [sb, fp, lsl #2] @ 01003220
    .byte 0x01, 0x00, 0x17, 0xe3, 0x69, 0x01, 0x00, 0x0a, 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0 @ 01003224
    .byte 0x92, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7, 0x01, 0x00, 0x17, 0xe3, 0x69, 0x01, 0x00, 0x0a @ 01003234
    .byte 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0, 0x8c, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7 @ 01003244
@ m68k_dispatch_01003254 at 0x01003254
    tst r7, #1 @ 01003254
    ldrsheq r1, [sl] @ 01003258
    addne sl, sl, #2 @ 0100325c
    subne r7, r7, #0x20000 @ 01003260
    addeq sl, sl, r1 @ 01003264
    subs r7, r7, #0xa0000 @ 01003268
    ldrhgt fp, [sl], #2 @ 0100326c
    ble .L_01003084 @ 01003270
    ldr pc, [sb, fp, lsl #2] @ 01003274
@ m68k_dispatch_01003278 at 0x01003278
    tst r7, #1 @ 01003278
    andne r1, fp, #0xff @ 0100327c
    addne sl, sl, r1 @ 01003280
    subne r7, r7, #0x20000 @ 01003284
    subs r7, r7, #0x80000 @ 01003288
    ldrhgt fp, [sl], #2 @ 0100328c
    ble .L_01003084 @ 01003290
    ldr pc, [sb, fp, lsl #2] @ 01003294
@ m68k_dispatch_01003298 at 0x01003298
    mov r0, sl @ 01003298
    .word 0xeb400812 @ 0100329c bl #0x20052ec
    tst r7, #1 @ 010032a0
    bne .L_010037d4 @ 010032a4
    subs r7, r7, #0x80000 @ 010032a8
    ldrhgt fp, [sl], #2 @ 010032ac
    ble .L_01003084 @ 010032b0
    ldr pc, [sb, fp, lsl #2] @ 010032b4
    .byte 0x01, 0x00, 0x17, 0xe3, 0x44, 0x01, 0x00, 0x1a, 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0 @ 010032b8
    .byte 0x6d, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7, 0x01, 0x00, 0x17, 0xe3, 0x44, 0x01, 0x00, 0x1a @ 010032c8
    .byte 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0, 0x67, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7 @ 010032d8
@ m68k_dispatch_010032e8 at 0x010032e8
    tst r7, #1 @ 010032e8
    ldrshne r1, [sl] @ 010032ec
    addeq sl, sl, #2 @ 010032f0
    subeq r7, r7, #0x20000 @ 010032f4
    addne sl, sl, r1 @ 010032f8
    subs r7, r7, #0xa0000 @ 010032fc
    ldrhgt fp, [sl], #2 @ 01003300
    ble .L_01003084 @ 01003304
    ldr pc, [sb, fp, lsl #2] @ 01003308
@ m68k_dispatch_0100330c at 0x0100330c
    tst r7, #4 @ 0100330c
    andeq r1, fp, #0xff @ 01003310
    addeq sl, sl, r1 @ 01003314
    subeq r7, r7, #0x20000 @ 01003318
    subs r7, r7, #0x80000 @ 0100331c
    ldrhgt fp, [sl], #2 @ 01003320
    ble .L_01003084 @ 01003324
    ldr pc, [sb, fp, lsl #2] @ 01003328
@ m68k_dispatch_0100332c at 0x0100332c
    mov r0, sl @ 0100332c
    .word 0xeb4007ed @ 01003330 bl #0x20052ec
    tst r7, #4 @ 01003334
    beq .L_010037d4 @ 01003338
    subs r7, r7, #0x80000 @ 0100333c
    ldrhgt fp, [sl], #2 @ 01003340
    ble .L_01003084 @ 01003344
    ldr pc, [sb, fp, lsl #2] @ 01003348
    .byte 0x04, 0x00, 0x17, 0xe3, 0x1f, 0x01, 0x00, 0x0a, 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0 @ 0100334c
    .byte 0x48, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7, 0x04, 0x00, 0x17, 0xe3, 0x1f, 0x01, 0x00, 0x0a @ 0100335c
    .byte 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0, 0x42, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7 @ 0100336c
@ m68k_dispatch_0100337c at 0x0100337c
    tst r7, #4 @ 0100337c
    ldrsheq r1, [sl] @ 01003380
    addne sl, sl, #2 @ 01003384
    subne r7, r7, #0x20000 @ 01003388
    addeq sl, sl, r1 @ 0100338c
    subs r7, r7, #0xa0000 @ 01003390
    ldrhgt fp, [sl], #2 @ 01003394
    ble .L_01003084 @ 01003398
    ldr pc, [sb, fp, lsl #2] @ 0100339c
@ m68k_dispatch_010033a0 at 0x010033a0
    tst r7, #4 @ 010033a0
    andne r1, fp, #0xff @ 010033a4
    addne sl, sl, r1 @ 010033a8
    subne r7, r7, #0x20000 @ 010033ac
    subs r7, r7, #0x80000 @ 010033b0
    ldrhgt fp, [sl], #2 @ 010033b4
    ble .L_01003084 @ 010033b8
    ldr pc, [sb, fp, lsl #2] @ 010033bc
@ m68k_dispatch_010033c0 at 0x010033c0
    mov r0, sl @ 010033c0
    .word 0xeb4007c8 @ 010033c4 bl #0x20052ec
    tst r7, #4 @ 010033c8
    bne .L_010037d4 @ 010033cc
    subs r7, r7, #0x80000 @ 010033d0
    ldrhgt fp, [sl], #2 @ 010033d4
    ble .L_01003084 @ 010033d8
    ldr pc, [sb, fp, lsl #2] @ 010033dc
    .byte 0x04, 0x00, 0x17, 0xe3, 0xfa, 0x00, 0x00, 0x1a, 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0 @ 010033e0
    .byte 0x23, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7, 0x04, 0x00, 0x17, 0xe3, 0xfa, 0x00, 0x00, 0x1a @ 010033f0
    .byte 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0, 0x1d, 0xff, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7 @ 01003400
@ m68k_dispatch_01003410 at 0x01003410
    tst r7, #4 @ 01003410
    ldrshne r1, [sl] @ 01003414
    addeq sl, sl, #2 @ 01003418
    subeq r7, r7, #0x20000 @ 0100341c
    addne sl, sl, r1 @ 01003420
    subs r7, r7, #0xa0000 @ 01003424
    ldrhgt fp, [sl], #2 @ 01003428
    ble .L_01003084 @ 0100342c
    ldr pc, [sb, fp, lsl #2] @ 01003430
@ m68k_dispatch_01003434 at 0x01003434
    tst r7, #2 @ 01003434
    andeq r1, fp, #0xff @ 01003438
    addeq sl, sl, r1 @ 0100343c
    subeq r7, r7, #0x20000 @ 01003440
    subs r7, r7, #0x80000 @ 01003444
    ldrhgt fp, [sl], #2 @ 01003448
    ble .L_01003084 @ 0100344c
    ldr pc, [sb, fp, lsl #2] @ 01003450
@ m68k_dispatch_01003454 at 0x01003454
    tst r7, #2 @ 01003454
    beq .L_010037d4 @ 01003458
    subs r7, r7, #0x80000 @ 0100345c
    ldrhgt fp, [sl], #2 @ 01003460
    ble .L_01003084 @ 01003464
    ldr pc, [sb, fp, lsl #2] @ 01003468
@ m68k_dispatch_0100346c at 0x0100346c
    tst r7, #2 @ 0100346c
    ldrsheq r1, [sl] @ 01003470
    addne sl, sl, #2 @ 01003474
    subne r7, r7, #0x20000 @ 01003478
    addeq sl, sl, r1 @ 0100347c
    subs r7, r7, #0xa0000 @ 01003480
    ldrhgt fp, [sl], #2 @ 01003484
    ble .L_01003084 @ 01003488
    ldr pc, [sb, fp, lsl #2] @ 0100348c
@ m68k_dispatch_01003490 at 0x01003490
    tst r7, #2 @ 01003490
    andne r1, fp, #0xff @ 01003494
    addne sl, sl, r1 @ 01003498
    subne r7, r7, #0x20000 @ 0100349c
    subs r7, r7, #0x80000 @ 010034a0
    ldrhgt fp, [sl], #2 @ 010034a4
    ble .L_01003084 @ 010034a8
    ldr pc, [sb, fp, lsl #2] @ 010034ac
@ m68k_dispatch_010034b0 at 0x010034b0
    tst r7, #2 @ 010034b0
    bne .L_010037d4 @ 010034b4
    subs r7, r7, #0x80000 @ 010034b8
    ldrhgt fp, [sl], #2 @ 010034bc
    ble .L_01003084 @ 010034c0
    ldr pc, [sb, fp, lsl #2] @ 010034c4
@ m68k_dispatch_010034c8 at 0x010034c8
    tst r7, #2 @ 010034c8
    ldrshne r1, [sl] @ 010034cc
    addeq sl, sl, #2 @ 010034d0
    subeq r7, r7, #0x20000 @ 010034d4
    addne sl, sl, r1 @ 010034d8
    subs r7, r7, #0xa0000 @ 010034dc
    ldrhgt fp, [sl], #2 @ 010034e0
    ble .L_01003084 @ 010034e4
    ldr pc, [sb, fp, lsl #2] @ 010034e8
@ m68k_dispatch_010034ec at 0x010034ec
    tst r7, #8 @ 010034ec
    andeq r1, fp, #0xff @ 010034f0
    addeq sl, sl, r1 @ 010034f4
    subeq r7, r7, #0x20000 @ 010034f8
    subs r7, r7, #0x80000 @ 010034fc
    ldrhgt fp, [sl], #2 @ 01003500
    ble .L_01003084 @ 01003504
    ldr pc, [sb, fp, lsl #2] @ 01003508
@ m68k_dispatch_0100350c at 0x0100350c
    mov r0, sl @ 0100350c
    .word 0xeb400775 @ 01003510 bl #0x20052ec
    tst r7, #8 @ 01003514
    beq .L_010037d4 @ 01003518
    subs r7, r7, #0x80000 @ 0100351c
    ldrhgt fp, [sl], #2 @ 01003520
    ble .L_01003084 @ 01003524
    ldr pc, [sb, fp, lsl #2] @ 01003528
    .byte 0x08, 0x00, 0x17, 0xe3, 0xa7, 0x00, 0x00, 0x0a, 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0 @ 0100352c
    .byte 0xd0, 0xfe, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7, 0x08, 0x00, 0x17, 0xe3, 0xa7, 0x00, 0x00, 0x0a @ 0100353c
    .byte 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0, 0xca, 0xfe, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7 @ 0100354c
@ m68k_dispatch_0100355c at 0x0100355c
    tst r7, #8 @ 0100355c
    ldrsheq r1, [sl] @ 01003560
    addne sl, sl, #2 @ 01003564
    subne r7, r7, #0x20000 @ 01003568
    addeq sl, sl, r1 @ 0100356c
    subs r7, r7, #0xa0000 @ 01003570
    ldrhgt fp, [sl], #2 @ 01003574
    ble .L_01003084 @ 01003578
    ldr pc, [sb, fp, lsl #2] @ 0100357c
@ m68k_dispatch_01003580 at 0x01003580
    tst r7, #8 @ 01003580
    andne r1, fp, #0xff @ 01003584
    addne sl, sl, r1 @ 01003588
    subne r7, r7, #0x20000 @ 0100358c
    subs r7, r7, #0x80000 @ 01003590
    ldrhgt fp, [sl], #2 @ 01003594
    ble .L_01003084 @ 01003598
    ldr pc, [sb, fp, lsl #2] @ 0100359c
@ m68k_dispatch_010035a0 at 0x010035a0
    tst r7, #8 @ 010035a0
    bne .L_010037d4 @ 010035a4
    subs r7, r7, #0x80000 @ 010035a8
    ldrhgt fp, [sl], #2 @ 010035ac
    ble .L_01003084 @ 010035b0
    ldr pc, [sb, fp, lsl #2] @ 010035b4
@ m68k_dispatch_010035b8 at 0x010035b8
    tst r7, #8 @ 010035b8
    ldrshne r1, [sl] @ 010035bc
    addeq sl, sl, #2 @ 010035c0
    subeq r7, r7, #0x20000 @ 010035c4
    addne sl, sl, r1 @ 010035c8
    subs r7, r7, #0xa0000 @ 010035cc
    ldrhgt fp, [sl], #2 @ 010035d0
    ble .L_01003084 @ 010035d4
    ldr pc, [sb, fp, lsl #2] @ 010035d8
@ m68k_dispatch_010035dc at 0x010035dc
    eor r5, r7, r7, lsr #2 @ 010035dc
    tst r5, #2 @ 010035e0
    andeq r1, fp, #0xff @ 010035e4
    addeq sl, sl, r1 @ 010035e8
    subeq r7, r7, #0x20000 @ 010035ec
    subs r7, r7, #0x80000 @ 010035f0
    ldrhgt fp, [sl], #2 @ 010035f4
    ble .L_01003084 @ 010035f8
    ldr pc, [sb, fp, lsl #2] @ 010035fc
@ m68k_dispatch_01003600 at 0x01003600
    mov r0, sl @ 01003600
    .word 0xeb400738 @ 01003604 bl #0x20052ec
    eor r5, r7, r7, lsr #2 @ 01003608
    tst r5, #2 @ 0100360c
    beq .L_010037d4 @ 01003610
    subs r7, r7, #0x80000 @ 01003614
    ldrhgt fp, [sl], #2 @ 01003618
    ble .L_01003084 @ 0100361c
    ldr pc, [sb, fp, lsl #2] @ 01003620
    .byte 0x27, 0x51, 0x27, 0xe0, 0x02, 0x00, 0x15, 0xe3, 0x68, 0x00, 0x00, 0x0a, 0x02, 0x77, 0x57, 0xe2 @ 01003624
    .byte 0xb2, 0xb0, 0xda, 0xc0, 0x91, 0xfe, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7, 0x27, 0x51, 0x27, 0xe0 @ 01003634
    .byte 0x02, 0x00, 0x15, 0xe3, 0x67, 0x00, 0x00, 0x0a, 0x02, 0x77, 0x57, 0xe2, 0xb2, 0xb0, 0xda, 0xc0 @ 01003644
    .byte 0x8a, 0xfe, 0xff, 0xda, 0x0b, 0xf1, 0x99, 0xe7 @ 01003654
@ m68k_dispatch_0100365c at 0x0100365c
    eor r5, r7, r7, lsr #2 @ 0100365c
    tst r5, #2 @ 01003660
    ldrsheq r1, [sl] @ 01003664
    addne sl, sl, #2 @ 01003668
    subne r7, r7, #0x20000 @ 0100366c
    addeq sl, sl, r1 @ 01003670
    subs r7, r7, #0xa0000 @ 01003674
    ldrhgt fp, [sl], #2 @ 01003678
    ble .L_01003084 @ 0100367c
    ldr pc, [sb, fp, lsl #2] @ 01003680
@ m68k_dispatch_01003684 at 0x01003684
    eor r5, r7, r7, lsr #2 @ 01003684
    tst r5, #2 @ 01003688
    andne r1, fp, #0xff @ 0100368c
    addne sl, sl, r1 @ 01003690
    subne r7, r7, #0x20000 @ 01003694
    subs r7, r7, #0x80000 @ 01003698
    ldrhgt fp, [sl], #2 @ 0100369c
    ble .L_01003084 @ 010036a0
    ldr pc, [sb, fp, lsl #2] @ 010036a4
@ m68k_dispatch_010036a8 at 0x010036a8
    eor r5, r7, r7, lsr #2 @ 010036a8
    tst r5, #2 @ 010036ac
    bne .L_010037d4 @ 010036b0
    subs r7, r7, #0x80000 @ 010036b4
    ldrhgt fp, [sl], #2 @ 010036b8
    ble .L_01003084 @ 010036bc
    ldr pc, [sb, fp, lsl #2] @ 010036c0
@ m68k_dispatch_010036c4 at 0x010036c4
    eor r5, r7, r7, lsr #2 @ 010036c4
    tst r5, #2 @ 010036c8
    ldrshne r1, [sl] @ 010036cc
    addeq sl, sl, #2 @ 010036d0
    subeq r7, r7, #0x20000 @ 010036d4
    addne sl, sl, r1 @ 010036d8
    subs r7, r7, #0xa0000 @ 010036dc
    ldrhgt fp, [sl], #2 @ 010036e0
    ble .L_01003084 @ 010036e4
    ldr pc, [sb, fp, lsl #2] @ 010036e8
@ m68k_dispatch_010036ec at 0x010036ec
    tst r7, #4 @ 010036ec
    eoreq r5, r7, r7, lsr #2 @ 010036f0
    tsteq r5, #2 @ 010036f4
    andeq r1, fp, #0xff @ 010036f8
    addeq sl, sl, r1 @ 010036fc
    subeq r7, r7, #0x20000 @ 01003700
    subs r7, r7, #0x80000 @ 01003704
    ldrhgt fp, [sl], #2 @ 01003708
    ble .L_01003084 @ 0100370c
    ldr pc, [sb, fp, lsl #2] @ 01003710
@ m68k_dispatch_01003714 at 0x01003714
    tst r7, #4 @ 01003714
    eoreq r5, r7, r7, lsr #2 @ 01003718
    tsteq r5, #2 @ 0100371c
    beq .L_010037d4 @ 01003720
    subs r7, r7, #0x80000 @ 01003724
    ldrhgt fp, [sl], #2 @ 01003728
    ble .L_01003084 @ 0100372c
    ldr pc, [sb, fp, lsl #2] @ 01003730
@ m68k_dispatch_01003734 at 0x01003734
    tst r7, #4 @ 01003734
    eoreq r5, r7, r7, lsr #2 @ 01003738
    tsteq r5, #2 @ 0100373c
    ldrsheq r1, [sl] @ 01003740
    addne sl, sl, #2 @ 01003744
    subne r7, r7, #0x20000 @ 01003748
    addeq sl, sl, r1 @ 0100374c
    subs r7, r7, #0xa0000 @ 01003750
    ldrhgt fp, [sl], #2 @ 01003754
    ble .L_01003084 @ 01003758
    ldr pc, [sb, fp, lsl #2] @ 0100375c
@ m68k_dispatch_01003760 at 0x01003760
    tst r7, #4 @ 01003760
    eoreq r5, r7, r7, lsr #2 @ 01003764
    tsteq r5, #2 @ 01003768
    andne r1, fp, #0xff @ 0100376c
    addne sl, sl, r1 @ 01003770
    subne r7, r7, #0x20000 @ 01003774
    subs r7, r7, #0x80000 @ 01003778
    ldrhgt fp, [sl], #2 @ 0100377c
    ble .L_01003084 @ 01003780
    ldr pc, [sb, fp, lsl #2] @ 01003784
@ m68k_dispatch_01003788 at 0x01003788
    tst r7, #4 @ 01003788
    eoreq r5, r7, r7, lsr #2 @ 0100378c
    tsteq r5, #2 @ 01003790
    bne .L_010037d4 @ 01003794
    subs r7, r7, #0x80000 @ 01003798
    ldrhgt fp, [sl], #2 @ 0100379c
    ble .L_01003084 @ 010037a0
    ldr pc, [sb, fp, lsl #2] @ 010037a4
@ m68k_dispatch_010037a8 at 0x010037a8
    tst r7, #4 @ 010037a8
    eoreq r5, r7, r7, lsr #2 @ 010037ac
    tsteq r5, #2 @ 010037b0
    ldrshne r1, [sl] @ 010037b4
    addeq sl, sl, #2 @ 010037b8
    subeq r7, r7, #0x20000 @ 010037bc
    addne sl, sl, r1 @ 010037c0
    subs r7, r7, #0xa0000 @ 010037c4
    ldrhgt fp, [sl], #2 @ 010037c8
    ble .L_01003084 @ 010037cc
    ldr pc, [sb, fp, lsl #2] @ 010037d0
.L_010037d4:
    lsl r1, fp, #0x18 @ 010037d4
    add sl, sl, r1, asr #24 @ 010037d8
    subs r7, r7, #0xa0000 @ 010037dc
    ldrhgt fp, [sl], #2 @ 010037e0
    ble .L_01003084 @ 010037e4
    ldr pc, [sb, fp, lsl #2] @ 010037e8
    .byte 0x0b, 0x1c, 0xa0, 0xe1, 0x41, 0xac, 0x8a, 0xe0, 0x26, 0xfe, 0xff, 0xea @ 010037ec
@ m68k_dispatch_010037f8 at 0x010037f8
    ldrh r2, [r6] @ 010037f8
    subs r3, r2, #1 @ 010037fc
    bmi .L_01003820 @ 01003800
    ldrsh r0, [sl] @ 01003804
    strh r3, [r6] @ 01003808
    add sl, sl, r0 @ 0100380c
    subs r7, r7, #0xa0000 @ 01003810
    ldrhgt fp, [sl], #2 @ 01003814
    ble .L_01003084 @ 01003818
    ldr pc, [sb, fp, lsl #2] @ 0100381c
.L_01003820:
    strh r3, [r6] @ 01003820
    add sl, sl, #2 @ 01003824
    subs r7, r7, #0xe0000 @ 01003828
    ldrhgt fp, [sl], #2 @ 0100382c
    ble .L_01003084 @ 01003830
    ldr pc, [sb, fp, lsl #2] @ 01003834
@ m68k_dispatch_01003838 at 0x01003838
    ldrh r2, [r6, #4] @ 01003838
    subs r3, r2, #1 @ 0100383c
    bmi .L_01003860 @ 01003840
    ldrsh r0, [sl] @ 01003844
    strh r3, [r6, #4] @ 01003848
    add sl, sl, r0 @ 0100384c
    subs r7, r7, #0xa0000 @ 01003850
    ldrhgt fp, [sl], #2 @ 01003854
    ble .L_01003084 @ 01003858
    ldr pc, [sb, fp, lsl #2] @ 0100385c
.L_01003860:
    strh r3, [r6, #4] @ 01003860
    add sl, sl, #2 @ 01003864
    subs r7, r7, #0xe0000 @ 01003868
    ldrhgt fp, [sl], #2 @ 0100386c
    ble .L_01003084 @ 01003870
    ldr pc, [sb, fp, lsl #2] @ 01003874
@ m68k_dispatch_01003878 at 0x01003878
    ldrh r2, [r6, #8] @ 01003878
    subs r3, r2, #1 @ 0100387c
    bmi .L_010038a0 @ 01003880
    ldrsh r0, [sl] @ 01003884
    strh r3, [r6, #8] @ 01003888
    add sl, sl, r0 @ 0100388c
    subs r7, r7, #0xa0000 @ 01003890
    ldrhgt fp, [sl], #2 @ 01003894
    ble .L_01003084 @ 01003898
    ldr pc, [sb, fp, lsl #2] @ 0100389c
.L_010038a0:
    strh r3, [r6, #8] @ 010038a0
    add sl, sl, #2 @ 010038a4
    subs r7, r7, #0xe0000 @ 010038a8
    ldrhgt fp, [sl], #2 @ 010038ac
    ble .L_01003084 @ 010038b0
    ldr pc, [sb, fp, lsl #2] @ 010038b4
@ m68k_dispatch_010038b8 at 0x010038b8
    ldrh r2, [r6, #0xc] @ 010038b8
    subs r3, r2, #1 @ 010038bc
    bmi .L_010038e0 @ 010038c0
    ldrsh r0, [sl] @ 010038c4
    strh r3, [r6, #0xc] @ 010038c8
    add sl, sl, r0 @ 010038cc
    subs r7, r7, #0xa0000 @ 010038d0
    ldrhgt fp, [sl], #2 @ 010038d4
    ble .L_01003084 @ 010038d8
    ldr pc, [sb, fp, lsl #2] @ 010038dc
.L_010038e0:
    strh r3, [r6, #0xc] @ 010038e0
    add sl, sl, #2 @ 010038e4
    subs r7, r7, #0xe0000 @ 010038e8
    ldrhgt fp, [sl], #2 @ 010038ec
    ble .L_01003084 @ 010038f0
    ldr pc, [sb, fp, lsl #2] @ 010038f4
@ m68k_dispatch_010038f8 at 0x010038f8
    ldrh r2, [r6, #0x10] @ 010038f8
    subs r3, r2, #1 @ 010038fc
    bmi .L_01003920 @ 01003900
    ldrsh r0, [sl] @ 01003904
    strh r3, [r6, #0x10] @ 01003908
    add sl, sl, r0 @ 0100390c
    subs r7, r7, #0xa0000 @ 01003910
    ldrhgt fp, [sl], #2 @ 01003914
    ble .L_01003084 @ 01003918
    ldr pc, [sb, fp, lsl #2] @ 0100391c
.L_01003920:
    strh r3, [r6, #0x10] @ 01003920
    add sl, sl, #2 @ 01003924
    subs r7, r7, #0xe0000 @ 01003928
    ldrhgt fp, [sl], #2 @ 0100392c
    ble .L_01003084 @ 01003930
    ldr pc, [sb, fp, lsl #2] @ 01003934
@ m68k_dispatch_01003938 at 0x01003938
    ldrh r2, [r6, #0x14] @ 01003938
    subs r3, r2, #1 @ 0100393c
    bmi .L_01003960 @ 01003940
    ldrsh r0, [sl] @ 01003944
    strh r3, [r6, #0x14] @ 01003948
    add sl, sl, r0 @ 0100394c
    subs r7, r7, #0xa0000 @ 01003950
    ldrhgt fp, [sl], #2 @ 01003954
    ble .L_01003084 @ 01003958
    ldr pc, [sb, fp, lsl #2] @ 0100395c
.L_01003960:
    strh r3, [r6, #0x14] @ 01003960
    add sl, sl, #2 @ 01003964
    subs r7, r7, #0xe0000 @ 01003968
    ldrhgt fp, [sl], #2 @ 0100396c
    ble .L_01003084 @ 01003970
    ldr pc, [sb, fp, lsl #2] @ 01003974
@ m68k_dispatch_01003978 at 0x01003978
    ldrh r2, [r6, #0x18] @ 01003978
    subs r3, r2, #1 @ 0100397c
    bmi .L_010039a0 @ 01003980
    ldrsh r0, [sl] @ 01003984
    strh r3, [r6, #0x18] @ 01003988
    add sl, sl, r0 @ 0100398c
    subs r7, r7, #0xa0000 @ 01003990
    ldrhgt fp, [sl], #2 @ 01003994
    ble .L_01003084 @ 01003998
    ldr pc, [sb, fp, lsl #2] @ 0100399c
.L_010039a0:
    strh r3, [r6, #0x18] @ 010039a0
    add sl, sl, #2 @ 010039a4
    subs r7, r7, #0xe0000 @ 010039a8
    ldrhgt fp, [sl], #2 @ 010039ac
    ble .L_01003084 @ 010039b0
    ldr pc, [sb, fp, lsl #2] @ 010039b4
@ m68k_dispatch_010039b8 at 0x010039b8
    ldrh r2, [r6, #0x1c] @ 010039b8
    subs r3, r2, #1 @ 010039bc
    bmi .L_010039e0 @ 010039c0
    ldrsh r0, [sl] @ 010039c4
    strh r3, [r6, #0x1c] @ 010039c8
    add sl, sl, r0 @ 010039cc
    subs r7, r7, #0xa0000 @ 010039d0
    ldrhgt fp, [sl], #2 @ 010039d4
    ble .L_01003084 @ 010039d8
    ldr pc, [sb, fp, lsl #2] @ 010039dc
.L_010039e0:
    strh r3, [r6, #0x1c] @ 010039e0
    add sl, sl, #2 @ 010039e4
    subs r7, r7, #0xe0000 @ 010039e8
    ldrhgt fp, [sl], #2 @ 010039ec
    ble .L_01003084 @ 010039f0
    ldr pc, [sb, fp, lsl #2] @ 010039f4
@ m68k_dispatch_010039f8 at 0x010039f8
    ldrsh r0, [sl], #2 @ 010039f8
    bl .L_0100408c @ 010039fc
    bic r7, r7, #0xf @ 01003a00
    lsls r5, r0, #0x18 @ 01003a04
    orreq r7, r7, #4 @ 01003a08
    orrmi r7, r7, #8 @ 01003a0c
    ldrh fp, [sl], #2 @ 01003a10
    sub r7, r7, #0xc0000 @ 01003a14
    ldr pc, [sb, fp, lsl #2] @ 01003a18
@ m68k_dispatch_01003a1c at 0x01003a1c
    ldrsh r0, [sl], #2 @ 01003a1c
    bl .L_010040c4 @ 01003a20
    bic r7, r7, #0xf @ 01003a24
    lsls r5, r0, #0x10 @ 01003a28
    orreq r7, r7, #4 @ 01003a2c
    orrmi r7, r7, #8 @ 01003a30
    ldrh fp, [sl], #2 @ 01003a34
    sub r7, r7, #0xc0000 @ 01003a38
    ldr pc, [sb, fp, lsl #2] @ 01003a3c
@ m68k_dispatch_01003a40 at 0x01003a40
    ldrsh r0, [sl], #2 @ 01003a40
    bl .L_010040fc @ 01003a44
    bic r7, r7, #0xf @ 01003a48
    tst r0, r0 @ 01003a4c
    orreq r7, r7, #4 @ 01003a50
    orrmi r7, r7, #8 @ 01003a54
    ldrh fp, [sl], #2 @ 01003a58
    sub r7, r7, #0x100000 @ 01003a5c
    ldr pc, [sb, fp, lsl #2] @ 01003a60
@ m68k_dispatch_01003a64 at 0x01003a64
    ldrh r0, [sl], #2 @ 01003a64
    ldrh r1, [sl], #2 @ 01003a68
    orr r0, r1, r0, lsl #16 @ 01003a6c
    bl .L_0100408c @ 01003a70
    bic r7, r7, #0xf @ 01003a74
    lsls r5, r0, #0x18 @ 01003a78
    orreq r7, r7, #4 @ 01003a7c
    orrmi r7, r7, #8 @ 01003a80
    ldrh fp, [sl], #2 @ 01003a84
    sub r7, r7, #0x100000 @ 01003a88
    ldr pc, [sb, fp, lsl #2] @ 01003a8c
@ m68k_dispatch_01003a90 at 0x01003a90
    ldrh r0, [sl], #2 @ 01003a90
    ldrh r1, [sl], #2 @ 01003a94
    orr r0, r1, r0, lsl #16 @ 01003a98
    bl .L_010040c4 @ 01003a9c
    bic r7, r7, #0xf @ 01003aa0
    lsls r5, r0, #0x10 @ 01003aa4
    orreq r7, r7, #4 @ 01003aa8
    orrmi r7, r7, #8 @ 01003aac
    ldrh fp, [sl], #2 @ 01003ab0
    sub r7, r7, #0x100000 @ 01003ab4
    ldr pc, [sb, fp, lsl #2] @ 01003ab8
@ m68k_dispatch_01003abc at 0x01003abc
    ldrh r0, [sl], #2 @ 01003abc
    ldrh r1, [sl], #2 @ 01003ac0
    orr r0, r1, r0, lsl #16 @ 01003ac4
    bl .L_010040fc @ 01003ac8
    bic r7, r7, #0xf @ 01003acc
    tst r0, r0 @ 01003ad0
    orreq r7, r7, #4 @ 01003ad4
    orrmi r7, r7, #8 @ 01003ad8
    ldrh fp, [sl], #2 @ 01003adc
    sub r7, r7, #0x140000 @ 01003ae0
    ldr pc, [sb, fp, lsl #2] @ 01003ae4
@ m68k_dispatch_01003ae8 at 0x01003ae8
    ldrh r0, [sl], #2 @ 01003ae8
    ldrh r1, [sl], #2 @ 01003aec
    bic r7, r7, #0xf @ 01003af0
    and fp, fp, #0xe00 @ 01003af4
    orr r0, r1, r0, lsl #16 @ 01003af8
    bl .L_010040c4 @ 01003afc
    lsls r1, r0, #0x10 @ 01003b00
    orreq r7, r7, #4 @ 01003b04
    orrmi r7, r7, #8 @ 01003b08
    lsr fp, fp, #7 @ 01003b0c
    strh r0, [r6, fp] @ 01003b10
    ldrh fp, [sl], #2 @ 01003b14
    sub r7, r7, #0x100000 @ 01003b18
    ldr pc, [sb, fp, lsl #2] @ 01003b1c
@ m68k_dispatch_01003b20 at 0x01003b20
    ldr r3, [r6, #0x3c] @ 01003b20
    mov r5, #0x80000000 @ 01003b24
    lsl r1, r3, #0x10 @ 01003b28
    add r3, r3, #4 @ 01003b2c
    str r3, [r6, #0x3c] @ 01003b30
    add r1, r8, r1, lsr #16 @ 01003b34
    ldrh r2, [r1], #2 @ 01003b38
    ldrh r3, [r1] @ 01003b3c
    tst r2, #0xc0 @ 01003b40
    ldreq lr, [r6, #0x60] @ 01003b44
    asreq r5, r5, #9 @ 01003b48
    movne lr, r8 @ 01003b4c
    asrne r5, r5, #0xf @ 01003b50
    orr r2, r3, r2, lsl #16 @ 01003b54
    and r1, r2, r5 @ 01003b58
    str r1, [r6, #0x9c] @ 01003b5c
    mvn r5, r5 @ 01003b60
    and r2, r2, r5 @ 01003b64
    add sl, lr, r2 @ 01003b68
    subs r7, r7, #0x100000 @ 01003b6c
    ldrhgt fp, [sl], #2 @ 01003b70
    str lr, [r6, #0x54] @ 01003b74
    ldrgt pc, [sb, fp, lsl #2] @ 01003b78
    b .L_01003084 @ 01003b7c
@ m68k_dispatch_01003b80 at 0x01003b80
    ldr r1, [r6, #0x50] @ 01003b80
    sub r7, r7, #0x140000 @ 01003b84
    tst r1, #0x2000 @ 01003b88
    moveq r0, #8 @ 01003b8c
    .word 0x0a404c22 @ 01003b90 beq #0x2016c20
    ldr r2, [r6, #0x3c] @ 01003b94
    lsl r1, r2, #0x10 @ 01003b98
    add r2, r2, #6 @ 01003b9c
    add r1, r8, r1, lsr #16 @ 01003ba0
    ldrh r0, [r1], #2 @ 01003ba4
    ldrh r5, [r1], #2 @ 01003ba8
    bic r7, r7, #0x1f @ 01003bac
    and r3, r0, #0x1f @ 01003bb0
    orr r7, r7, r3 @ 01003bb4
    and r0, r0, #0xa700 @ 01003bb8
    ldrh r3, [r1] @ 01003bbc
    tst r0, #0x2000 @ 01003bc0
    str r0, [r6, #0x50] @ 01003bc4
    ldreq r1, [r6, #0x48] @ 01003bc8
    strne r2, [r6, #0x3c] @ 01003bcc
    streq r2, [r6, #0x48] @ 01003bd0
    streq r1, [r6, #0x3c] @ 01003bd4
    mov r0, #0x80000000 @ 01003bd8
    tst r5, #0xc0 @ 01003bdc
    ldreq lr, [r6, #0x60] @ 01003be0
    asreq r0, r0, #9 @ 01003be4
    movne lr, r8 @ 01003be8
    asrne r0, r0, #0xf @ 01003bec
    orr r5, r3, r5, lsl #16 @ 01003bf0
    and r1, r5, r0 @ 01003bf4
    str r1, [r6, #0x9c] @ 01003bf8
    str lr, [r6, #0x54] @ 01003bfc
    mvn r0, r0 @ 01003c00
    and r5, r5, r0 @ 01003c04
    add sl, lr, r5 @ 01003c08
    asrs r0, r7, #0x10 @ 01003c0c
    ldrhgt fp, [sl], #2 @ 01003c10
    ble .L_01003084 @ 01003c14
    ldr pc, [sb, fp, lsl #2] @ 01003c18
@ m68k_dispatch_01003c1c at 0x01003c1c
    and r1, fp, #0xff @ 01003c1c
    add sl, sl, r1 @ 01003c20
    subs r7, r7, #0xa0000 @ 01003c24
    ldrhgt fp, [sl], #2 @ 01003c28
    ble .L_01003084 @ 01003c2c
    ldr pc, [sb, fp, lsl #2] @ 01003c30
@ m68k_dispatch_01003c34 at 0x01003c34
    lsl r1, fp, #0x18 @ 01003c34
    add sl, sl, r1, asr #24 @ 01003c38
    subs r7, r7, #0xa0000 @ 01003c3c
    ldrhgt fp, [sl], #2 @ 01003c40
    ble .L_01003084 @ 01003c44
    ldr pc, [sb, fp, lsl #2] @ 01003c48
    .byte 0x02, 0xa0, 0x4a, 0xe2, 0x0f, 0xfd, 0xff, 0xea @ 01003c4c
@ m68k_dispatch_01003c54 at 0x01003c54
    ldrsh r1, [sl] @ 01003c54
    subs r7, r7, #0xa0000 @ 01003c58
    add sl, sl, r1 @ 01003c5c
    ldrhgt fp, [sl], #2 @ 01003c60
    ble .L_01003084 @ 01003c64
    ldr pc, [sb, fp, lsl #2] @ 01003c68
@ m68k_dispatch_01003c6c at 0x01003c6c
    ldr lr, [r6, #0x54] @ 01003c6c
    ldr r1, [r6, #0x9c] @ 01003c70
    sub r3, sl, lr @ 01003c74
    ldr r4, [r6, #0x3c] @ 01003c78
    orr r3, r3, r1 @ 01003c7c
    sub r4, r4, #4 @ 01003c80
    str r4, [r6, #0x3c] @ 01003c84
    lsr r2, r3, #0x10 @ 01003c88
    lsl r4, r4, #0x10 @ 01003c8c
    add r4, r8, r4, lsr #16 @ 01003c90
    lsl r1, fp, #0x18 @ 01003c94
    add sl, sl, r1, asr #24 @ 01003c98
    subs r7, r7, #0x120000 @ 01003c9c
    ldrhgt fp, [sl], #2 @ 01003ca0
    strh r2, [r4], #2 @ 01003ca4
    strh r3, [r4] @ 01003ca8
    ldrgt pc, [sb, fp, lsl #2] @ 01003cac
    b .L_01003084 @ 01003cb0
@ m68k_dispatch_01003cb4 at 0x01003cb4
    ldr lr, [r6, #0x54] @ 01003cb4
    ldr r1, [r6, #0x9c] @ 01003cb8
    sub r3, sl, lr @ 01003cbc
    ldr r4, [r6, #0x3c] @ 01003cc0
    add r3, r3, #2 @ 01003cc4
    orr r3, r3, r1 @ 01003cc8
    sub r4, r4, #4 @ 01003ccc
    str r4, [r6, #0x3c] @ 01003cd0
    ldrsh r1, [sl] @ 01003cd4
    lsr r2, r3, #0x10 @ 01003cd8
    lsl r4, r4, #0x10 @ 01003cdc
    add sl, sl, r1 @ 01003ce0
    subs r7, r7, #0x120000 @ 01003ce4
    ldrhgt fp, [sl], #2 @ 01003ce8
    add r4, r8, r4, lsr #16 @ 01003cec
    strh r2, [r4], #2 @ 01003cf0
    strh r3, [r4] @ 01003cf4
    ldrgt pc, [sb, fp, lsl #2] @ 01003cf8
    b .L_01003084 @ 01003cfc
@ m68k_dispatch_01003d00 at 0x01003d00
    ldrh fp, [sl], #2 @ 01003d00
    sub r7, r7, #0x40000 @ 01003d04
    ldr pc, [sb, fp, lsl #2] @ 01003d08
@ m68k_dispatch_01003d0c at 0x01003d0c
    and r2, fp, #0xe00 @ 01003d0c
    bic r7, r7, #0xf @ 01003d10
    lsls r1, fp, #0x18 @ 01003d14
    asr r1, r1, #0x18 @ 01003d18
    str r1, [r6, r2, lsr #7] @ 01003d1c
    orrmi r7, r7, #8 @ 01003d20
    orreq r7, r7, #4 @ 01003d24
    ldrh fp, [sl], #2 @ 01003d28
    sub r7, r7, #0x40000 @ 01003d2c
    ldr pc, [sb, fp, lsl #2] @ 01003d30
@ m68k_dispatch_01003d34 at 0x01003d34
    and r1, fp, #7 @ 01003d34
    add r2, r6, #0x20 @ 01003d38
    ldr r0, [r2, r1, lsl #2] @ 01003d3c
    bic r7, r7, #0xf @ 01003d40
    movs r1, r0 @ 01003d44
    and r3, fp, #0xe00 @ 01003d48
    ldr r0, [r2, r3, lsr #7] @ 01003d4c
    orreq r7, r7, #4 @ 01003d50
    orrmi r7, r7, #8 @ 01003d54
    sub r0, r0, #4 @ 01003d58
    str r0, [r2, r3, lsr #7] @ 01003d5c
    sub r7, r7, #0xc0000 @ 01003d60
    ldrh fp, [sl], #2 @ 01003d64
    b .L_0100428c @ 01003d68
@ m68k_dispatch_01003d6c at 0x01003d6c
    ldrsh r0, [sl], #2 @ 01003d6c
    bl .L_010040fc @ 01003d70
    bic r7, r7, #0xf @ 01003d74
    movs r1, r0 @ 01003d78
    add r2, r6, #0x20 @ 01003d7c
    and r3, fp, #0xe00 @ 01003d80
    ldr r0, [r2, r3, lsr #7] @ 01003d84
    orreq r7, r7, #4 @ 01003d88
    orrmi r7, r7, #8 @ 01003d8c
    sub r0, r0, #4 @ 01003d90
    str r0, [r2, r3, lsr #7] @ 01003d94
    sub r7, r7, #0x180000 @ 01003d98
    ldrh fp, [sl], #2 @ 01003d9c
    b .L_0100428c @ 01003da0
@ m68k_dispatch_01003da4 at 0x01003da4
    and r1, fp, #7 @ 01003da4
    add r2, r6, #0x20 @ 01003da8
    ldr r0, [r2, r1, lsl #2] @ 01003dac
    bic r7, r7, #0xf @ 01003db0
    add r3, r0, #4 @ 01003db4
    str r3, [r2, r1, lsl #2] @ 01003db8
    bl .L_010040fc @ 01003dbc
    movs r1, r0 @ 01003dc0
    ldrsh r0, [sl], #2 @ 01003dc4
    orreq r7, r7, #4 @ 01003dc8
    orrmi r7, r7, #8 @ 01003dcc
    sub r7, r7, #0x180000 @ 01003dd0
    ldrh fp, [sl], #2 @ 01003dd4
    b .L_0100424c @ 01003dd8
@ m68k_dispatch_01003ddc at 0x01003ddc
    and r1, fp, #7 @ 01003ddc
    add r2, r6, #0x20 @ 01003de0
    ldr r0, [r2, r1, lsl #2] @ 01003de4
    bl .L_010040fc @ 01003de8
    and r2, fp, #0xe00 @ 01003dec
    add r3, r6, #0x20 @ 01003df0
    str r0, [r3, r2, lsr #7] @ 01003df4
    ldrh fp, [sl], #2 @ 01003df8
    sub r7, r7, #0xc0000 @ 01003dfc
    ldr pc, [sb, fp, lsl #2] @ 01003e00
@ m68k_dispatch_01003e04 at 0x01003e04
    and r1, fp, #7 @ 01003e04
    add r2, r6, #0x20 @ 01003e08
    ldr r0, [r2, r1, lsl #2] @ 01003e0c
    add r3, r0, #4 @ 01003e10
    str r3, [r2, r1, lsl #2] @ 01003e14
    bl .L_010040fc @ 01003e18
    and r2, fp, #0xe00 @ 01003e1c
    add r3, r6, #0x20 @ 01003e20
    str r0, [r3, r2, lsr #7] @ 01003e24
    ldrh fp, [sl], #2 @ 01003e28
    sub r7, r7, #0xc0000 @ 01003e2c
    ldr pc, [sb, fp, lsl #2] @ 01003e30
@ m68k_dispatch_01003e34 at 0x01003e34
    ldrsh r0, [sl], #2 @ 01003e34
    and r2, fp, #0xe00 @ 01003e38
    add r3, r6, #0x20 @ 01003e3c
    str r0, [r3, r2, lsr #7] @ 01003e40
    ldrh fp, [sl], #2 @ 01003e44
    sub r7, r7, #0x80000 @ 01003e48
    ldr pc, [sb, fp, lsl #2] @ 01003e4c
@ m68k_dispatch_01003e50 at 0x01003e50
    ldrh r0, [sl], #2 @ 01003e50
    ldrh r1, [sl], #2 @ 01003e54
    and r2, fp, #0xe00 @ 01003e58
    add r3, r6, #0x20 @ 01003e5c
    orr r0, r1, r0, lsl #16 @ 01003e60
    str r0, [r3, r2, lsr #7] @ 01003e64
    ldrh fp, [sl], #2 @ 01003e68
    sub r7, r7, #0xc0000 @ 01003e6c
    ldr pc, [sb, fp, lsl #2] @ 01003e70
@ m68k_dispatch_01003e74 at 0x01003e74
    ldrsh r0, [sl], #2 @ 01003e74
    ldr r4, [r6, #0x3c] @ 01003e78
    ldr lr, [r6, #0x54] @ 01003e7c
    sub r4, r4, #4 @ 01003e80
    ldr r1, [r6, #0x9c] @ 01003e84
    sub r3, sl, lr @ 01003e88
    str r4, [r6, #0x3c] @ 01003e8c
    orr r3, r3, r1 @ 01003e90
    lsr r2, r3, #0x10 @ 01003e94
    lsl r4, r4, #0x10 @ 01003e98
    add r4, r8, r4, lsr #16 @ 01003e9c
    strh r2, [r4], #2 @ 01003ea0
    tst r0, #0xc00000 @ 01003ea4
    strh r3, [r4] @ 01003ea8
    mov r1, #0x80000000 @ 01003eac
    ldreq lr, [r6, #0x60] @ 01003eb0
    movne lr, r8 @ 01003eb4
    asreq r1, r1, #9 @ 01003eb8
    asrne r1, r1, #0xf @ 01003ebc
    and r2, r0, r1 @ 01003ec0
    str r2, [r6, #0x9c] @ 01003ec4
    mvn r1, r1 @ 01003ec8
    and r0, r0, r1 @ 01003ecc
    add sl, lr, r0 @ 01003ed0
    str lr, [r6, #0x54] @ 01003ed4
    subs r7, r7, #0x120000 @ 01003ed8
    ldrhgt fp, [sl], #2 @ 01003edc
    ble .L_01003084 @ 01003ee0
    ldr pc, [sb, fp, lsl #2] @ 01003ee4
@ m68k_dispatch_01003ee8 at 0x01003ee8
    ldrh r0, [sl], #2 @ 01003ee8
    ldrh r1, [sl], #2 @ 01003eec
    orr r0, r1, r0, lsl #16 @ 01003ef0
    ldr r4, [r6, #0x3c] @ 01003ef4
    ldr lr, [r6, #0x54] @ 01003ef8
    sub r4, r4, #4 @ 01003efc
    ldr r1, [r6, #0x9c] @ 01003f00
    sub r3, sl, lr @ 01003f04
    str r4, [r6, #0x3c] @ 01003f08
    orr r3, r3, r1 @ 01003f0c
    lsr r2, r3, #0x10 @ 01003f10
    lsl r4, r4, #0x10 @ 01003f14
    add r4, r8, r4, lsr #16 @ 01003f18
    strh r2, [r4], #2 @ 01003f1c
    tst r0, #0xc00000 @ 01003f20
    strh r3, [r4] @ 01003f24
    mov r1, #0x80000000 @ 01003f28
    ldreq lr, [r6, #0x60] @ 01003f2c
    movne lr, r8 @ 01003f30
    asreq r1, r1, #9 @ 01003f34
    asrne r1, r1, #0xf @ 01003f38
    and r2, r0, r1 @ 01003f3c
    str r2, [r6, #0x9c] @ 01003f40
    mvn r1, r1 @ 01003f44
    and r0, r0, r1 @ 01003f48
    add sl, lr, r0 @ 01003f4c
    str lr, [r6, #0x54] @ 01003f50
    subs r7, r7, #0x140000 @ 01003f54
    ldrhgt fp, [sl], #2 @ 01003f58
    ble .L_01003084 @ 01003f5c
    ldr pc, [sb, fp, lsl #2] @ 01003f60
@ m68k_dispatch_01003f64 at 0x01003f64
    ldrh r0, [sl], #2 @ 01003f64
    bic r7, r7, #0x1f @ 01003f68
    lsr r4, fp, #9 @ 01003f6c
    add r2, r0, r8 @ 01003f70
    ldrh r0, [r2] @ 01003f74
    ands r4, r4, #7 @ 01003f78
    addeq r4, r4, #8 @ 01003f7c
    lsl r0, r0, #0x10 @ 01003f80
    adds r5, r0, r4, lsl #16 @ 01003f84
    lsr r5, r5, #0x10 @ 01003f88
    strh r5, [r2] @ 01003f8c
    orrmi r7, r7, #8 @ 01003f90
    orrhs r7, r7, #0x11 @ 01003f94
    orrvs r7, r7, #2 @ 01003f98
    orreq r7, r7, #4 @ 01003f9c
    ldrh fp, [sl], #2 @ 01003fa0
    sub r7, r7, #0x100000 @ 01003fa4
    ldr pc, [sb, fp, lsl #2] @ 01003fa8
@ m68k_dispatch_01003fac at 0x01003fac
    and r1, fp, #7 @ 01003fac
    add r2, r6, #0x20 @ 01003fb0
    ldr r0, [r2, r1, lsl #2] @ 01003fb4
    bl .L_0100408c @ 01003fb8
    bic r7, r7, #0xf @ 01003fbc
    lsls r5, r0, #0x18 @ 01003fc0
    orreq r7, r7, #4 @ 01003fc4
    orrmi r7, r7, #8 @ 01003fc8
    ldrh fp, [sl], #2 @ 01003fcc
    sub r7, r7, #0x80000 @ 01003fd0
    ldr pc, [sb, fp, lsl #2] @ 01003fd4
@ m68k_dispatch_01003fd8 at 0x01003fd8
    and r1, fp, #7 @ 01003fd8
    add r2, r6, #0x20 @ 01003fdc
    ldr r0, [r2, r1, lsl #2] @ 01003fe0
    bl .L_010040c4 @ 01003fe4
    bic r7, r7, #0xf @ 01003fe8
    lsls r5, r0, #0x10 @ 01003fec
    orreq r7, r7, #4 @ 01003ff0
    orrmi r7, r7, #8 @ 01003ff4
    ldrh fp, [sl], #2 @ 01003ff8
    sub r7, r7, #0x80000 @ 01003ffc
    ldr pc, [sb, fp, lsl #2] @ 01004000
@ m68k_dispatch_01004004 at 0x01004004
    and r1, fp, #7 @ 01004004
    add r2, r6, #0x20 @ 01004008
    ldr r0, [r2, r1, lsl #2] @ 0100400c
    bl .L_010040fc @ 01004010
    bic r7, r7, #0xf @ 01004014
    tst r0, r0 @ 01004018
    orreq r7, r7, #4 @ 0100401c
    orrmi r7, r7, #8 @ 01004020
    ldrh fp, [sl], #2 @ 01004024
    sub r7, r7, #0xc0000 @ 01004028
    ldr pc, [sb, fp, lsl #2] @ 0100402c
@ m68k_dispatch_01004030 at 0x01004030
    ldr r2, [r6, #0x50] @ 01004030
    and r1, fp, #7 @ 01004034
    tst r2, #0x2000 @ 01004038
    beq .L_01004080 @ 0100403c
    ldrh fp, [sl], #2 @ 01004040
    add r2, r6, #0x20 @ 01004044
    ldr r3, [r2, r1, lsl #2] @ 01004048
    sub r7, r7, #0x40000 @ 0100404c
    str r3, [r6, #0x48] @ 01004050
    ldr pc, [sb, fp, lsl #2] @ 01004054
@ m68k_dispatch_01004058 at 0x01004058
    ldr r2, [r6, #0x50] @ 01004058
    and r1, fp, #7 @ 0100405c
    tst r2, #0x2000 @ 01004060
    beq .L_01004080 @ 01004064
    ldr r3, [r6, #0x48] @ 01004068
    add r2, r6, #0x20 @ 0100406c
    ldrh fp, [sl], #2 @ 01004070
    sub r7, r7, #0x40000 @ 01004074
    str r3, [r2, r1, lsl #2] @ 01004078
    ldr pc, [sb, fp, lsl #2] @ 0100407c
.L_01004080:
    mov r0, #8 @ 01004080
    sub r7, r7, #0x22 @ 01004084
    .word 0xea404ae4 @ 01004088 b #0x2016c20
.L_0100408c:
@ FUN_0100408c at 0x0100408c
    and r1, r0, #0xf00000 @ 0100408c
    cmp r1, #0xe00000 @ 01004090
    blt .L_010040a8 @ 01004094
    eor r0, r0, #1 @ 01004098
    lsl r1, r0, #0x10 @ 0100409c
    ldrb r0, [r8, r1, lsr #16] @ 010040a0
    bx lr @ 010040a4
.L_010040a8:
    tst r1, #0xc00000 @ 010040a8
    .word 0x1a3ffea0 @ 010040ac bne #0x2003b34
    ldr r2, [r6, #0x60] @ 010040b0
    eor r0, r0, #1 @ 010040b4
    lsl r1, r0, #0xa @ 010040b8
    ldrb r0, [r2, r1, lsr #10] @ 010040bc
    bx lr @ 010040c0
.L_010040c4:
@ FUN_010040c4 at 0x010040c4
    and r1, r0, #0xf00000 @ 010040c4
    cmp r1, #0xe00000 @ 010040c8
    blt .L_010040e0 @ 010040cc
    lsl r1, r0, #0x10 @ 010040d0
    lsr r1, r1, #0x10 @ 010040d4
    ldrh r0, [r8, r1] @ 010040d8
    bx lr @ 010040dc
.L_010040e0:
    tst r1, #0xc00000 @ 010040e0
    .word 0x1a3ffe9d @ 010040e4 bne #0x2003b60
    ldr r2, [r6, #0x60] @ 010040e8
    lsl r1, r0, #0xa @ 010040ec
    lsr r1, r1, #0xa @ 010040f0
    ldrh r0, [r2, r1] @ 010040f4
    bx lr @ 010040f8
.L_010040fc:
@ FUN_010040fc at 0x010040fc
    and r1, r0, #0xf00000 @ 010040fc
    cmp r1, #0xe00000 @ 01004100
    blt .L_01004120 @ 01004104
    lsl r1, r0, #0x10 @ 01004108
    add r1, r8, r1, lsr #16 @ 0100410c
    ldrh r0, [r1], #2 @ 01004110
    ldrh r2, [r1] @ 01004114
    orr r0, r2, r0, lsl #16 @ 01004118
    bx lr @ 0100411c
.L_01004120:
    tst r1, #0xc00000 @ 01004120
    .word 0x1a3ffe98 @ 01004124 bne #0x2003b8c
    ldr r2, [r6, #0x60] @ 01004128
    lsl r1, r0, #0xa @ 0100412c
    add r1, r2, r1, lsr #10 @ 01004130
    ldrh r0, [r1], #2 @ 01004134
    ldrh r2, [r1] @ 01004138
    orr r0, r2, r0, lsl #16 @ 0100413c
    bx lr @ 01004140
@ FUN_01004144 at 0x01004144
    and r2, r0, #0xf00000 @ 01004144
    cmp r2, #0xe00000 @ 01004148
    .word 0xba3ffee9 @ 0100414c blt #0x2003cf8
    eor r0, r0, #1 @ 01004150
    lsl r0, r0, #0x10 @ 01004154
    strb r1, [r8, r0, lsr #16] @ 01004158
    bx lr @ 0100415c
@ FUN_01004160 at 0x01004160
    and r2, r0, #0xf00000 @ 01004160
    cmp r2, #0xe00000 @ 01004164
    blt .L_0100417c @ 01004168
    lsl r0, r0, #0x10 @ 0100416c
    lsr r0, r0, #0x10 @ 01004170
    strh r1, [r8, r0] @ 01004174
    bx lr @ 01004178
.L_0100417c:
    cmp r2, #0xc00000 @ 0100417c
    .word 0xba3ffee7 @ 01004180 blt #0x2003d24
    tst r0, #0x1c @ 01004184
    mov r0, r1 @ 01004188
    .word 0x1a401a59 @ 0100418c bne #0x200aaf8
    .word 0xea401ab9 @ 01004190 b #0x200ac7c
@ FUN_01004194 at 0x01004194
    and r2, r0, #0xf00000 @ 01004194
    cmp r2, #0xe00000 @ 01004198
    blt .L_010041b8 @ 0100419c
    lsl r0, r0, #0x10 @ 010041a0
    add r0, r8, r0, lsr #16 @ 010041a4
    lsr r2, r1, #0x10 @ 010041a8
    strh r2, [r0], #2 @ 010041ac
    strh r1, [r0] @ 010041b0
    bx lr @ 010041b4
.L_010041b8:
    cmp r2, #0xc00000 @ 010041b8
    .word 0xba3ffee3 @ 010041bc blt #0x2003d50
    tst r0, #0x1c @ 010041c0
    mov r0, r1 @ 010041c4
    .word 0x1a401a85 @ 010041c8 bne #0x200abe4
    .word 0xea401c1e @ 010041cc b #0x200b24c
@ FUN_010041d0 at 0x010041d0
    and r2, r0, #0xf00000 @ 010041d0
    cmp r2, #0xe00000 @ 010041d4
    .word 0xba3ffeee @ 010041d8 blt #0x2003d98
    lsl r0, r0, #0x10 @ 010041dc
    add r0, r8, r0, lsr #16 @ 010041e0
    lsr r2, r1, #0x10 @ 010041e4
    strh r2, [r0], #2 @ 010041e8
    strh r1, [r0] @ 010041ec
    bx lr @ 010041f0
    ldr lr, [sb, fp, lsl #2] @ 010041f4
    and r2, r0, #0xf00000 @ 010041f8
    cmp r2, #0xe00000 @ 010041fc
    .word 0xba3ffebc @ 01004200 blt #0x2003cf8
    eor r0, r0, #1 @ 01004204
    lsl r0, r0, #0x10 @ 01004208
    strb r1, [r8, r0, lsr #16] @ 0100420c
    bx lr @ 01004210
    ldr lr, [sb, fp, lsl #2] @ 01004214
    and r2, r0, #0xf00000 @ 01004218
    cmp r2, #0xe00000 @ 0100421c
    blt .L_01004234 @ 01004220
    lsl r0, r0, #0x10 @ 01004224
    lsr r0, r0, #0x10 @ 01004228
    strh r1, [r8, r0] @ 0100422c
    bx lr @ 01004230
.L_01004234:
    cmp r2, #0xc00000 @ 01004234
    .word 0xba3ffeb9 @ 01004238 blt #0x2003d24
    tst r0, #0x1c @ 0100423c
    mov r0, r1 @ 01004240
    .word 0x1a401a2b @ 01004244 bne #0x200aaf8
    .word 0xea401a8b @ 01004248 b #0x200ac7c
.L_0100424c:
    ldr lr, [sb, fp, lsl #2] @ 0100424c
    and r2, r0, #0xf00000 @ 01004250
    cmp r2, #0xe00000 @ 01004254
    blt .L_01004274 @ 01004258
    lsl r0, r0, #0x10 @ 0100425c
    add r0, r8, r0, lsr #16 @ 01004260
    lsr r2, r1, #0x10 @ 01004264
    strh r2, [r0], #2 @ 01004268
    strh r1, [r0] @ 0100426c
    bx lr @ 01004270
.L_01004274:
    cmp r2, #0xc00000 @ 01004274
    .word 0xba3ffeb4 @ 01004278 blt #0x2003d50
    tst r0, #0x1c @ 0100427c
    mov r0, r1 @ 01004280
    .word 0x1a401a56 @ 01004284 bne #0x200abe4
    .word 0xea401bef @ 01004288 b #0x200b24c
.L_0100428c:
    ldr lr, [sb, fp, lsl #2] @ 0100428c
    and r2, r0, #0xf00000 @ 01004290
    cmp r2, #0xe00000 @ 01004294
    .word 0xba3ffebe @ 01004298 blt #0x2003d98
    lsl r0, r0, #0x10 @ 0100429c
    add r0, r8, r0, lsr #16 @ 010042a0
    lsr r2, r1, #0x10 @ 010042a4
    strh r2, [r0], #2 @ 010042a8
    strh r1, [r0] @ 010042ac
    bx lr @ 010042b0
    .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff @ 010042b4
@ FUN_010042c0 at 0x010042c0
    push {r4, r5, r6, r7, r8, sb, lr} @ 010042c0
    add lr, r0, #0 @ 010042c4
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010042c8
    ror r2, r2, #0x10 @ 010042cc
    ror r3, r3, #0x10 @ 010042d0
    ror r4, r4, #0x10 @ 010042d4
    ror r5, r5, #0x10 @ 010042d8
    ror r6, r6, #0x10 @ 010042dc
    ror r7, r7, #0x10 @ 010042e0
    ror r8, r8, #0x10 @ 010042e4
    ror sb, sb, #0x10 @ 010042e8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010042ec
    pop {r4, r5, r6, r7, r8, sb, pc} @ 010042f0
    .zero 12
@ FUN_01004300 at 0x01004300
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004300
    add lr, r0, #0x20 @ 01004304
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004308
    ror r2, r2, #0x10 @ 0100430c
    ror r3, r3, #0x10 @ 01004310
    ror r4, r4, #0x10 @ 01004314
    ror r5, r5, #0x10 @ 01004318
    ror r6, r6, #0x10 @ 0100431c
    ror r7, r7, #0x10 @ 01004320
    ror r8, r8, #0x10 @ 01004324
    ror sb, sb, #0x10 @ 01004328
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100432c
    add lr, r0, #0 @ 01004330
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004334
    ror r2, r2, #0x10 @ 01004338
    ror r3, r3, #0x10 @ 0100433c
    ror r4, r4, #0x10 @ 01004340
    ror r5, r5, #0x10 @ 01004344
    ror r6, r6, #0x10 @ 01004348
    ror r7, r7, #0x10 @ 0100434c
    ror r8, r8, #0x10 @ 01004350
    ror sb, sb, #0x10 @ 01004354
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004358
    pop {r4, r5, r6, r7, r8, sb, pc} @ 0100435c
@ FUN_01004360 at 0x01004360
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004360
    mov r2, #0 @ 01004364
    mov r3, #0 @ 01004368
    mov r4, #0 @ 0100436c
    mov r5, #0 @ 01004370
    mov r6, #0 @ 01004374
    mov r7, #0 @ 01004378
    mov r8, #0 @ 0100437c
    mov sb, #0 @ 01004380
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004384
    add lr, r0, #0x40 @ 01004388
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100438c
    ror r2, r2, #0x10 @ 01004390
    ror r3, r3, #0x10 @ 01004394
    ror r4, r4, #0x10 @ 01004398
    ror r5, r5, #0x10 @ 0100439c
    ror r6, r6, #0x10 @ 010043a0
    ror r7, r7, #0x10 @ 010043a4
    ror r8, r8, #0x10 @ 010043a8
    ror sb, sb, #0x10 @ 010043ac
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010043b0
    add lr, r0, #0x20 @ 010043b4
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010043b8
    ror r2, r2, #0x10 @ 010043bc
    ror r3, r3, #0x10 @ 010043c0
    ror r4, r4, #0x10 @ 010043c4
    ror r5, r5, #0x10 @ 010043c8
    ror r6, r6, #0x10 @ 010043cc
    ror r7, r7, #0x10 @ 010043d0
    ror r8, r8, #0x10 @ 010043d4
    ror sb, sb, #0x10 @ 010043d8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010043dc
    add lr, r0, #0 @ 010043e0
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010043e4
    ror r2, r2, #0x10 @ 010043e8
    ror r3, r3, #0x10 @ 010043ec
    ror r4, r4, #0x10 @ 010043f0
    ror r5, r5, #0x10 @ 010043f4
    ror r6, r6, #0x10 @ 010043f8
    ror r7, r7, #0x10 @ 010043fc
    ror r8, r8, #0x10 @ 01004400
    ror sb, sb, #0x10 @ 01004404
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004408
    pop {r4, r5, r6, r7, r8, sb, pc} @ 0100440c
@ FUN_01004410 at 0x01004410
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004410
    add lr, r0, #0x60 @ 01004414
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004418
    ror r2, r2, #0x10 @ 0100441c
    ror r3, r3, #0x10 @ 01004420
    ror r4, r4, #0x10 @ 01004424
    ror r5, r5, #0x10 @ 01004428
    ror r6, r6, #0x10 @ 0100442c
    ror r7, r7, #0x10 @ 01004430
    ror r8, r8, #0x10 @ 01004434
    ror sb, sb, #0x10 @ 01004438
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100443c
    add lr, r0, #0x40 @ 01004440
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004444
    ror r2, r2, #0x10 @ 01004448
    ror r3, r3, #0x10 @ 0100444c
    ror r4, r4, #0x10 @ 01004450
    ror r5, r5, #0x10 @ 01004454
    ror r6, r6, #0x10 @ 01004458
    ror r7, r7, #0x10 @ 0100445c
    ror r8, r8, #0x10 @ 01004460
    ror sb, sb, #0x10 @ 01004464
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004468
    add lr, r0, #0x20 @ 0100446c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004470
    ror r2, r2, #0x10 @ 01004474
    ror r3, r3, #0x10 @ 01004478
    ror r4, r4, #0x10 @ 0100447c
    ror r5, r5, #0x10 @ 01004480
    ror r6, r6, #0x10 @ 01004484
    ror r7, r7, #0x10 @ 01004488
    ror r8, r8, #0x10 @ 0100448c
    ror sb, sb, #0x10 @ 01004490
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004494
    add lr, r0, #0 @ 01004498
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100449c
    ror r2, r2, #0x10 @ 010044a0
    ror r3, r3, #0x10 @ 010044a4
    ror r4, r4, #0x10 @ 010044a8
    ror r5, r5, #0x10 @ 010044ac
    ror r6, r6, #0x10 @ 010044b0
    ror r7, r7, #0x10 @ 010044b4
    ror r8, r8, #0x10 @ 010044b8
    ror sb, sb, #0x10 @ 010044bc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010044c0
    pop {r4, r5, r6, r7, r8, sb, pc} @ 010044c4
    .zero 8
@ FUN_010044d0 at 0x010044d0
    push {r4, r5, r6, r7, r8, sb, lr} @ 010044d0
    add lr, r0, #0 @ 010044d4
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010044d8
    ror r2, r2, #0x10 @ 010044dc
    ror r3, r3, #0x10 @ 010044e0
    ror r4, r4, #0x10 @ 010044e4
    ror r5, r5, #0x10 @ 010044e8
    ror r6, r6, #0x10 @ 010044ec
    ror r7, r7, #0x10 @ 010044f0
    ror r8, r8, #0x10 @ 010044f4
    ror sb, sb, #0x10 @ 010044f8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010044fc
    add lr, r0, #0x20 @ 01004500
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004504
    ror r2, r2, #0x10 @ 01004508
    ror r3, r3, #0x10 @ 0100450c
    ror r4, r4, #0x10 @ 01004510
    ror r5, r5, #0x10 @ 01004514
    ror r6, r6, #0x10 @ 01004518
    ror r7, r7, #0x10 @ 0100451c
    ror r8, r8, #0x10 @ 01004520
    ror sb, sb, #0x10 @ 01004524
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004528
    pop {r4, r5, r6, r7, r8, sb, pc} @ 0100452c
@ FUN_01004530 at 0x01004530
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004530
    add lr, r0, #0x40 @ 01004534
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004538
    ror r2, r2, #0x10 @ 0100453c
    ror r3, r3, #0x10 @ 01004540
    ror r4, r4, #0x10 @ 01004544
    ror r5, r5, #0x10 @ 01004548
    ror r6, r6, #0x10 @ 0100454c
    ror r7, r7, #0x10 @ 01004550
    ror r8, r8, #0x10 @ 01004554
    ror sb, sb, #0x10 @ 01004558
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100455c
    add lr, r0, #0 @ 01004560
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004564
    ror r2, r2, #0x10 @ 01004568
    ror r3, r3, #0x10 @ 0100456c
    ror r4, r4, #0x10 @ 01004570
    ror r5, r5, #0x10 @ 01004574
    ror r6, r6, #0x10 @ 01004578
    ror r7, r7, #0x10 @ 0100457c
    ror r8, r8, #0x10 @ 01004580
    ror sb, sb, #0x10 @ 01004584
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004588
    add lr, r0, #0x60 @ 0100458c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004590
    ror r2, r2, #0x10 @ 01004594
    ror r3, r3, #0x10 @ 01004598
    ror r4, r4, #0x10 @ 0100459c
    ror r5, r5, #0x10 @ 010045a0
    ror r6, r6, #0x10 @ 010045a4
    ror r7, r7, #0x10 @ 010045a8
    ror r8, r8, #0x10 @ 010045ac
    ror sb, sb, #0x10 @ 010045b0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010045b4
    add lr, r0, #0x20 @ 010045b8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010045bc
    ror r2, r2, #0x10 @ 010045c0
    ror r3, r3, #0x10 @ 010045c4
    ror r4, r4, #0x10 @ 010045c8
    ror r5, r5, #0x10 @ 010045cc
    ror r6, r6, #0x10 @ 010045d0
    ror r7, r7, #0x10 @ 010045d4
    ror r8, r8, #0x10 @ 010045d8
    ror sb, sb, #0x10 @ 010045dc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010045e0
    pop {r4, r5, r6, r7, r8, sb, pc} @ 010045e4
    .zero 8
@ FUN_010045f0 at 0x010045f0
    push {r4, r5, r6, r7, r8, sb, lr} @ 010045f0
    mov r2, #0 @ 010045f4
    mov r3, #0 @ 010045f8
    mov r4, #0 @ 010045fc
    mov r5, #0 @ 01004600
    mov r6, #0 @ 01004604
    mov r7, #0 @ 01004608
    mov r8, #0 @ 0100460c
    mov sb, #0 @ 01004610
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004614
    add lr, r0, #0x80 @ 01004618
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100461c
    ror r2, r2, #0x10 @ 01004620
    ror r3, r3, #0x10 @ 01004624
    ror r4, r4, #0x10 @ 01004628
    ror r5, r5, #0x10 @ 0100462c
    ror r6, r6, #0x10 @ 01004630
    ror r7, r7, #0x10 @ 01004634
    ror r8, r8, #0x10 @ 01004638
    ror sb, sb, #0x10 @ 0100463c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004640
    add lr, r0, #0x40 @ 01004644
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004648
    ror r2, r2, #0x10 @ 0100464c
    ror r3, r3, #0x10 @ 01004650
    ror r4, r4, #0x10 @ 01004654
    ror r5, r5, #0x10 @ 01004658
    ror r6, r6, #0x10 @ 0100465c
    ror r7, r7, #0x10 @ 01004660
    ror r8, r8, #0x10 @ 01004664
    ror sb, sb, #0x10 @ 01004668
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100466c
    add lr, r0, #0 @ 01004670
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004674
    ror r2, r2, #0x10 @ 01004678
    ror r3, r3, #0x10 @ 0100467c
    ror r4, r4, #0x10 @ 01004680
    ror r5, r5, #0x10 @ 01004684
    ror r6, r6, #0x10 @ 01004688
    ror r7, r7, #0x10 @ 0100468c
    ror r8, r8, #0x10 @ 01004690
    ror sb, sb, #0x10 @ 01004694
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004698
    mov r2, #0 @ 0100469c
    mov r3, #0 @ 010046a0
    mov r4, #0 @ 010046a4
    mov r5, #0 @ 010046a8
    mov r6, #0 @ 010046ac
    mov r7, #0 @ 010046b0
    mov r8, #0 @ 010046b4
    mov sb, #0 @ 010046b8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010046bc
    add lr, r0, #0xa0 @ 010046c0
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010046c4
    ror r2, r2, #0x10 @ 010046c8
    ror r3, r3, #0x10 @ 010046cc
    ror r4, r4, #0x10 @ 010046d0
    ror r5, r5, #0x10 @ 010046d4
    ror r6, r6, #0x10 @ 010046d8
    ror r7, r7, #0x10 @ 010046dc
    ror r8, r8, #0x10 @ 010046e0
    ror sb, sb, #0x10 @ 010046e4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010046e8
    add lr, r0, #0x60 @ 010046ec
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010046f0
    ror r2, r2, #0x10 @ 010046f4
    ror r3, r3, #0x10 @ 010046f8
    ror r4, r4, #0x10 @ 010046fc
    ror r5, r5, #0x10 @ 01004700
    ror r6, r6, #0x10 @ 01004704
    ror r7, r7, #0x10 @ 01004708
    ror r8, r8, #0x10 @ 0100470c
    ror sb, sb, #0x10 @ 01004710
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004714
    add lr, r0, #0x20 @ 01004718
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100471c
    ror r2, r2, #0x10 @ 01004720
    ror r3, r3, #0x10 @ 01004724
    ror r4, r4, #0x10 @ 01004728
    ror r5, r5, #0x10 @ 0100472c
    ror r6, r6, #0x10 @ 01004730
    ror r7, r7, #0x10 @ 01004734
    ror r8, r8, #0x10 @ 01004738
    ror sb, sb, #0x10 @ 0100473c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004740
    pop {r4, r5, r6, r7, r8, sb, pc} @ 01004744
    .zero 8
@ FUN_01004750 at 0x01004750
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004750
    add lr, r0, #0xc0 @ 01004754
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004758
    ror r2, r2, #0x10 @ 0100475c
    ror r3, r3, #0x10 @ 01004760
    ror r4, r4, #0x10 @ 01004764
    ror r5, r5, #0x10 @ 01004768
    ror r6, r6, #0x10 @ 0100476c
    ror r7, r7, #0x10 @ 01004770
    ror r8, r8, #0x10 @ 01004774
    ror sb, sb, #0x10 @ 01004778
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100477c
    add lr, r0, #0x80 @ 01004780
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004784
    ror r2, r2, #0x10 @ 01004788
    ror r3, r3, #0x10 @ 0100478c
    ror r4, r4, #0x10 @ 01004790
    ror r5, r5, #0x10 @ 01004794
    ror r6, r6, #0x10 @ 01004798
    ror r7, r7, #0x10 @ 0100479c
    ror r8, r8, #0x10 @ 010047a0
    ror sb, sb, #0x10 @ 010047a4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010047a8
    add lr, r0, #0x40 @ 010047ac
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010047b0
    ror r2, r2, #0x10 @ 010047b4
    ror r3, r3, #0x10 @ 010047b8
    ror r4, r4, #0x10 @ 010047bc
    ror r5, r5, #0x10 @ 010047c0
    ror r6, r6, #0x10 @ 010047c4
    ror r7, r7, #0x10 @ 010047c8
    ror r8, r8, #0x10 @ 010047cc
    ror sb, sb, #0x10 @ 010047d0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010047d4
    add lr, r0, #0 @ 010047d8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010047dc
    ror r2, r2, #0x10 @ 010047e0
    ror r3, r3, #0x10 @ 010047e4
    ror r4, r4, #0x10 @ 010047e8
    ror r5, r5, #0x10 @ 010047ec
    ror r6, r6, #0x10 @ 010047f0
    ror r7, r7, #0x10 @ 010047f4
    ror r8, r8, #0x10 @ 010047f8
    ror sb, sb, #0x10 @ 010047fc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004800
    add lr, r0, #0xe0 @ 01004804
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004808
    ror r2, r2, #0x10 @ 0100480c
    ror r3, r3, #0x10 @ 01004810
    ror r4, r4, #0x10 @ 01004814
    ror r5, r5, #0x10 @ 01004818
    ror r6, r6, #0x10 @ 0100481c
    ror r7, r7, #0x10 @ 01004820
    ror r8, r8, #0x10 @ 01004824
    ror sb, sb, #0x10 @ 01004828
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100482c
    add lr, r0, #0xa0 @ 01004830
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004834
    ror r2, r2, #0x10 @ 01004838
    ror r3, r3, #0x10 @ 0100483c
    ror r4, r4, #0x10 @ 01004840
    ror r5, r5, #0x10 @ 01004844
    ror r6, r6, #0x10 @ 01004848
    ror r7, r7, #0x10 @ 0100484c
    ror r8, r8, #0x10 @ 01004850
    ror sb, sb, #0x10 @ 01004854
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004858
    add lr, r0, #0x60 @ 0100485c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004860
    ror r2, r2, #0x10 @ 01004864
    ror r3, r3, #0x10 @ 01004868
    ror r4, r4, #0x10 @ 0100486c
    ror r5, r5, #0x10 @ 01004870
    ror r6, r6, #0x10 @ 01004874
    ror r7, r7, #0x10 @ 01004878
    ror r8, r8, #0x10 @ 0100487c
    ror sb, sb, #0x10 @ 01004880
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004884
    add lr, r0, #0x20 @ 01004888
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100488c
    ror r2, r2, #0x10 @ 01004890
    ror r3, r3, #0x10 @ 01004894
    ror r4, r4, #0x10 @ 01004898
    ror r5, r5, #0x10 @ 0100489c
    ror r6, r6, #0x10 @ 010048a0
    ror r7, r7, #0x10 @ 010048a4
    ror r8, r8, #0x10 @ 010048a8
    ror sb, sb, #0x10 @ 010048ac
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010048b0
    pop {r4, r5, r6, r7, r8, sb, pc} @ 010048b4
    .zero 8
@ FUN_010048c0 at 0x010048c0
    push {r4, r5, r6, r7, r8, sb, lr} @ 010048c0
    add lr, r0, #0 @ 010048c4
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010048c8
    ror r2, r2, #0x10 @ 010048cc
    ror r3, r3, #0x10 @ 010048d0
    ror r4, r4, #0x10 @ 010048d4
    ror r5, r5, #0x10 @ 010048d8
    ror r6, r6, #0x10 @ 010048dc
    ror r7, r7, #0x10 @ 010048e0
    ror r8, r8, #0x10 @ 010048e4
    ror sb, sb, #0x10 @ 010048e8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010048ec
    add lr, r0, #0x20 @ 010048f0
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010048f4
    ror r2, r2, #0x10 @ 010048f8
    ror r3, r3, #0x10 @ 010048fc
    ror r4, r4, #0x10 @ 01004900
    ror r5, r5, #0x10 @ 01004904
    ror r6, r6, #0x10 @ 01004908
    ror r7, r7, #0x10 @ 0100490c
    ror r8, r8, #0x10 @ 01004910
    ror sb, sb, #0x10 @ 01004914
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004918
    add lr, r0, #0x40 @ 0100491c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004920
    ror r2, r2, #0x10 @ 01004924
    ror r3, r3, #0x10 @ 01004928
    ror r4, r4, #0x10 @ 0100492c
    ror r5, r5, #0x10 @ 01004930
    ror r6, r6, #0x10 @ 01004934
    ror r7, r7, #0x10 @ 01004938
    ror r8, r8, #0x10 @ 0100493c
    ror sb, sb, #0x10 @ 01004940
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004944
    mov r2, #0 @ 01004948
    mov r3, #0 @ 0100494c
    mov r4, #0 @ 01004950
    mov r5, #0 @ 01004954
    mov r6, #0 @ 01004958
    mov r7, #0 @ 0100495c
    mov r8, #0 @ 01004960
    mov sb, #0 @ 01004964
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004968
    pop {r4, r5, r6, r7, r8, sb, pc} @ 0100496c
@ FUN_01004970 at 0x01004970
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004970
    add lr, r0, #0x60 @ 01004974
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004978
    ror r2, r2, #0x10 @ 0100497c
    ror r3, r3, #0x10 @ 01004980
    ror r4, r4, #0x10 @ 01004984
    ror r5, r5, #0x10 @ 01004988
    ror r6, r6, #0x10 @ 0100498c
    ror r7, r7, #0x10 @ 01004990
    ror r8, r8, #0x10 @ 01004994
    ror sb, sb, #0x10 @ 01004998
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100499c
    add lr, r0, #0 @ 010049a0
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010049a4
    ror r2, r2, #0x10 @ 010049a8
    ror r3, r3, #0x10 @ 010049ac
    ror r4, r4, #0x10 @ 010049b0
    ror r5, r5, #0x10 @ 010049b4
    ror r6, r6, #0x10 @ 010049b8
    ror r7, r7, #0x10 @ 010049bc
    ror r8, r8, #0x10 @ 010049c0
    ror sb, sb, #0x10 @ 010049c4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010049c8
    add lr, r0, #0x80 @ 010049cc
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010049d0
    ror r2, r2, #0x10 @ 010049d4
    ror r3, r3, #0x10 @ 010049d8
    ror r4, r4, #0x10 @ 010049dc
    ror r5, r5, #0x10 @ 010049e0
    ror r6, r6, #0x10 @ 010049e4
    ror r7, r7, #0x10 @ 010049e8
    ror r8, r8, #0x10 @ 010049ec
    ror sb, sb, #0x10 @ 010049f0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010049f4
    add lr, r0, #0x20 @ 010049f8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010049fc
    ror r2, r2, #0x10 @ 01004a00
    ror r3, r3, #0x10 @ 01004a04
    ror r4, r4, #0x10 @ 01004a08
    ror r5, r5, #0x10 @ 01004a0c
    ror r6, r6, #0x10 @ 01004a10
    ror r7, r7, #0x10 @ 01004a14
    ror r8, r8, #0x10 @ 01004a18
    ror sb, sb, #0x10 @ 01004a1c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004a20
    add lr, r0, #0xa0 @ 01004a24
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004a28
    ror r2, r2, #0x10 @ 01004a2c
    ror r3, r3, #0x10 @ 01004a30
    ror r4, r4, #0x10 @ 01004a34
    ror r5, r5, #0x10 @ 01004a38
    ror r6, r6, #0x10 @ 01004a3c
    ror r7, r7, #0x10 @ 01004a40
    ror r8, r8, #0x10 @ 01004a44
    ror sb, sb, #0x10 @ 01004a48
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004a4c
    add lr, r0, #0x40 @ 01004a50
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004a54
    ror r2, r2, #0x10 @ 01004a58
    ror r3, r3, #0x10 @ 01004a5c
    ror r4, r4, #0x10 @ 01004a60
    ror r5, r5, #0x10 @ 01004a64
    ror r6, r6, #0x10 @ 01004a68
    ror r7, r7, #0x10 @ 01004a6c
    ror r8, r8, #0x10 @ 01004a70
    ror sb, sb, #0x10 @ 01004a74
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004a78
    mov r2, #0 @ 01004a7c
    mov r3, #0 @ 01004a80
    mov r4, #0 @ 01004a84
    mov r5, #0 @ 01004a88
    mov r6, #0 @ 01004a8c
    mov r7, #0 @ 01004a90
    mov r8, #0 @ 01004a94
    mov sb, #0 @ 01004a98
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004a9c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004aa0
    pop {r4, r5, r6, r7, r8, sb, pc} @ 01004aa4
    .zero 8
@ FUN_01004ab0 at 0x01004ab0
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004ab0
    mov r2, #0 @ 01004ab4
    mov r3, #0 @ 01004ab8
    mov r4, #0 @ 01004abc
    mov r5, #0 @ 01004ac0
    mov r6, #0 @ 01004ac4
    mov r7, #0 @ 01004ac8
    mov r8, #0 @ 01004acc
    mov sb, #0 @ 01004ad0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ad4
    add lr, r0, #0xc0 @ 01004ad8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004adc
    ror r2, r2, #0x10 @ 01004ae0
    ror r3, r3, #0x10 @ 01004ae4
    ror r4, r4, #0x10 @ 01004ae8
    ror r5, r5, #0x10 @ 01004aec
    ror r6, r6, #0x10 @ 01004af0
    ror r7, r7, #0x10 @ 01004af4
    ror r8, r8, #0x10 @ 01004af8
    ror sb, sb, #0x10 @ 01004afc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004b00
    add lr, r0, #0x60 @ 01004b04
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004b08
    ror r2, r2, #0x10 @ 01004b0c
    ror r3, r3, #0x10 @ 01004b10
    ror r4, r4, #0x10 @ 01004b14
    ror r5, r5, #0x10 @ 01004b18
    ror r6, r6, #0x10 @ 01004b1c
    ror r7, r7, #0x10 @ 01004b20
    ror r8, r8, #0x10 @ 01004b24
    ror sb, sb, #0x10 @ 01004b28
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004b2c
    add lr, r0, #0 @ 01004b30
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004b34
    ror r2, r2, #0x10 @ 01004b38
    ror r3, r3, #0x10 @ 01004b3c
    ror r4, r4, #0x10 @ 01004b40
    ror r5, r5, #0x10 @ 01004b44
    ror r6, r6, #0x10 @ 01004b48
    ror r7, r7, #0x10 @ 01004b4c
    ror r8, r8, #0x10 @ 01004b50
    ror sb, sb, #0x10 @ 01004b54
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004b58
    mov r2, #0 @ 01004b5c
    mov r3, #0 @ 01004b60
    mov r4, #0 @ 01004b64
    mov r5, #0 @ 01004b68
    mov r6, #0 @ 01004b6c
    mov r7, #0 @ 01004b70
    mov r8, #0 @ 01004b74
    mov sb, #0 @ 01004b78
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004b7c
    add lr, r0, #0xe0 @ 01004b80
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004b84
    ror r2, r2, #0x10 @ 01004b88
    ror r3, r3, #0x10 @ 01004b8c
    ror r4, r4, #0x10 @ 01004b90
    ror r5, r5, #0x10 @ 01004b94
    ror r6, r6, #0x10 @ 01004b98
    ror r7, r7, #0x10 @ 01004b9c
    ror r8, r8, #0x10 @ 01004ba0
    ror sb, sb, #0x10 @ 01004ba4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ba8
    add lr, r0, #0x80 @ 01004bac
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004bb0
    ror r2, r2, #0x10 @ 01004bb4
    ror r3, r3, #0x10 @ 01004bb8
    ror r4, r4, #0x10 @ 01004bbc
    ror r5, r5, #0x10 @ 01004bc0
    ror r6, r6, #0x10 @ 01004bc4
    ror r7, r7, #0x10 @ 01004bc8
    ror r8, r8, #0x10 @ 01004bcc
    ror sb, sb, #0x10 @ 01004bd0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004bd4
    add lr, r0, #0x20 @ 01004bd8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004bdc
    ror r2, r2, #0x10 @ 01004be0
    ror r3, r3, #0x10 @ 01004be4
    ror r4, r4, #0x10 @ 01004be8
    ror r5, r5, #0x10 @ 01004bec
    ror r6, r6, #0x10 @ 01004bf0
    ror r7, r7, #0x10 @ 01004bf4
    ror r8, r8, #0x10 @ 01004bf8
    ror sb, sb, #0x10 @ 01004bfc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004c00
    mov r2, #0 @ 01004c04
    mov r3, #0 @ 01004c08
    mov r4, #0 @ 01004c0c
    mov r5, #0 @ 01004c10
    mov r6, #0 @ 01004c14
    mov r7, #0 @ 01004c18
    mov r8, #0 @ 01004c1c
    mov sb, #0 @ 01004c20
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004c24
    add lr, r0, #0x100 @ 01004c28
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004c2c
    ror r2, r2, #0x10 @ 01004c30
    ror r3, r3, #0x10 @ 01004c34
    ror r4, r4, #0x10 @ 01004c38
    ror r5, r5, #0x10 @ 01004c3c
    ror r6, r6, #0x10 @ 01004c40
    ror r7, r7, #0x10 @ 01004c44
    ror r8, r8, #0x10 @ 01004c48
    ror sb, sb, #0x10 @ 01004c4c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004c50
    add lr, r0, #0xa0 @ 01004c54
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004c58
    ror r2, r2, #0x10 @ 01004c5c
    ror r3, r3, #0x10 @ 01004c60
    ror r4, r4, #0x10 @ 01004c64
    ror r5, r5, #0x10 @ 01004c68
    ror r6, r6, #0x10 @ 01004c6c
    ror r7, r7, #0x10 @ 01004c70
    ror r8, r8, #0x10 @ 01004c74
    ror sb, sb, #0x10 @ 01004c78
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004c7c
    add lr, r0, #0x40 @ 01004c80
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004c84
    ror r2, r2, #0x10 @ 01004c88
    ror r3, r3, #0x10 @ 01004c8c
    ror r4, r4, #0x10 @ 01004c90
    ror r5, r5, #0x10 @ 01004c94
    ror r6, r6, #0x10 @ 01004c98
    ror r7, r7, #0x10 @ 01004c9c
    ror r8, r8, #0x10 @ 01004ca0
    ror sb, sb, #0x10 @ 01004ca4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ca8
    mov r2, #0 @ 01004cac
    mov r3, #0 @ 01004cb0
    mov r4, #0 @ 01004cb4
    mov r5, #0 @ 01004cb8
    mov r6, #0 @ 01004cbc
    mov r7, #0 @ 01004cc0
    mov r8, #0 @ 01004cc4
    mov sb, #0 @ 01004cc8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ccc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004cd0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004cd4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004cd8
    pop {r4, r5, r6, r7, r8, sb, pc} @ 01004cdc
@ FUN_01004ce0 at 0x01004ce0
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004ce0
    add lr, r0, #0x120 @ 01004ce4
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ce8
    ror r2, r2, #0x10 @ 01004cec
    ror r3, r3, #0x10 @ 01004cf0
    ror r4, r4, #0x10 @ 01004cf4
    ror r5, r5, #0x10 @ 01004cf8
    ror r6, r6, #0x10 @ 01004cfc
    ror r7, r7, #0x10 @ 01004d00
    ror r8, r8, #0x10 @ 01004d04
    ror sb, sb, #0x10 @ 01004d08
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004d0c
    add lr, r0, #0xc0 @ 01004d10
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004d14
    ror r2, r2, #0x10 @ 01004d18
    ror r3, r3, #0x10 @ 01004d1c
    ror r4, r4, #0x10 @ 01004d20
    ror r5, r5, #0x10 @ 01004d24
    ror r6, r6, #0x10 @ 01004d28
    ror r7, r7, #0x10 @ 01004d2c
    ror r8, r8, #0x10 @ 01004d30
    ror sb, sb, #0x10 @ 01004d34
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004d38
    add lr, r0, #0x60 @ 01004d3c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004d40
    ror r2, r2, #0x10 @ 01004d44
    ror r3, r3, #0x10 @ 01004d48
    ror r4, r4, #0x10 @ 01004d4c
    ror r5, r5, #0x10 @ 01004d50
    ror r6, r6, #0x10 @ 01004d54
    ror r7, r7, #0x10 @ 01004d58
    ror r8, r8, #0x10 @ 01004d5c
    ror sb, sb, #0x10 @ 01004d60
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004d64
    add lr, r0, #0 @ 01004d68
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004d6c
    ror r2, r2, #0x10 @ 01004d70
    ror r3, r3, #0x10 @ 01004d74
    ror r4, r4, #0x10 @ 01004d78
    ror r5, r5, #0x10 @ 01004d7c
    ror r6, r6, #0x10 @ 01004d80
    ror r7, r7, #0x10 @ 01004d84
    ror r8, r8, #0x10 @ 01004d88
    ror sb, sb, #0x10 @ 01004d8c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004d90
    add lr, r0, #0x140 @ 01004d94
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004d98
    ror r2, r2, #0x10 @ 01004d9c
    ror r3, r3, #0x10 @ 01004da0
    ror r4, r4, #0x10 @ 01004da4
    ror r5, r5, #0x10 @ 01004da8
    ror r6, r6, #0x10 @ 01004dac
    ror r7, r7, #0x10 @ 01004db0
    ror r8, r8, #0x10 @ 01004db4
    ror sb, sb, #0x10 @ 01004db8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004dbc
    add lr, r0, #0xe0 @ 01004dc0
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004dc4
    ror r2, r2, #0x10 @ 01004dc8
    ror r3, r3, #0x10 @ 01004dcc
    ror r4, r4, #0x10 @ 01004dd0
    ror r5, r5, #0x10 @ 01004dd4
    ror r6, r6, #0x10 @ 01004dd8
    ror r7, r7, #0x10 @ 01004ddc
    ror r8, r8, #0x10 @ 01004de0
    ror sb, sb, #0x10 @ 01004de4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004de8
    add lr, r0, #0x80 @ 01004dec
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004df0
    ror r2, r2, #0x10 @ 01004df4
    ror r3, r3, #0x10 @ 01004df8
    ror r4, r4, #0x10 @ 01004dfc
    ror r5, r5, #0x10 @ 01004e00
    ror r6, r6, #0x10 @ 01004e04
    ror r7, r7, #0x10 @ 01004e08
    ror r8, r8, #0x10 @ 01004e0c
    ror sb, sb, #0x10 @ 01004e10
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004e14
    add lr, r0, #0x20 @ 01004e18
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004e1c
    ror r2, r2, #0x10 @ 01004e20
    ror r3, r3, #0x10 @ 01004e24
    ror r4, r4, #0x10 @ 01004e28
    ror r5, r5, #0x10 @ 01004e2c
    ror r6, r6, #0x10 @ 01004e30
    ror r7, r7, #0x10 @ 01004e34
    ror r8, r8, #0x10 @ 01004e38
    ror sb, sb, #0x10 @ 01004e3c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004e40
    add lr, r0, #0x160 @ 01004e44
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004e48
    ror r2, r2, #0x10 @ 01004e4c
    ror r3, r3, #0x10 @ 01004e50
    ror r4, r4, #0x10 @ 01004e54
    ror r5, r5, #0x10 @ 01004e58
    ror r6, r6, #0x10 @ 01004e5c
    ror r7, r7, #0x10 @ 01004e60
    ror r8, r8, #0x10 @ 01004e64
    ror sb, sb, #0x10 @ 01004e68
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004e6c
    add lr, r0, #0x100 @ 01004e70
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004e74
    ror r2, r2, #0x10 @ 01004e78
    ror r3, r3, #0x10 @ 01004e7c
    ror r4, r4, #0x10 @ 01004e80
    ror r5, r5, #0x10 @ 01004e84
    ror r6, r6, #0x10 @ 01004e88
    ror r7, r7, #0x10 @ 01004e8c
    ror r8, r8, #0x10 @ 01004e90
    ror sb, sb, #0x10 @ 01004e94
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004e98
    add lr, r0, #0xa0 @ 01004e9c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ea0
    ror r2, r2, #0x10 @ 01004ea4
    ror r3, r3, #0x10 @ 01004ea8
    ror r4, r4, #0x10 @ 01004eac
    ror r5, r5, #0x10 @ 01004eb0
    ror r6, r6, #0x10 @ 01004eb4
    ror r7, r7, #0x10 @ 01004eb8
    ror r8, r8, #0x10 @ 01004ebc
    ror sb, sb, #0x10 @ 01004ec0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ec4
    add lr, r0, #0x40 @ 01004ec8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ecc
    ror r2, r2, #0x10 @ 01004ed0
    ror r3, r3, #0x10 @ 01004ed4
    ror r4, r4, #0x10 @ 01004ed8
    ror r5, r5, #0x10 @ 01004edc
    ror r6, r6, #0x10 @ 01004ee0
    ror r7, r7, #0x10 @ 01004ee4
    ror r8, r8, #0x10 @ 01004ee8
    ror sb, sb, #0x10 @ 01004eec
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ef0
    mov r2, #0 @ 01004ef4
    mov r3, #0 @ 01004ef8
    mov r4, #0 @ 01004efc
    mov r5, #0 @ 01004f00
    mov r6, #0 @ 01004f04
    mov r7, #0 @ 01004f08
    mov r8, #0 @ 01004f0c
    mov sb, #0 @ 01004f10
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004f14
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004f18
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004f1c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004f20
    pop {r4, r5, r6, r7, r8, sb, pc} @ 01004f24
    .zero 8
@ FUN_01004f30 at 0x01004f30
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004f30
    add lr, r0, #0 @ 01004f34
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004f38
    ror r2, r2, #0x10 @ 01004f3c
    ror r3, r3, #0x10 @ 01004f40
    ror r4, r4, #0x10 @ 01004f44
    ror r5, r5, #0x10 @ 01004f48
    ror r6, r6, #0x10 @ 01004f4c
    ror r7, r7, #0x10 @ 01004f50
    ror r8, r8, #0x10 @ 01004f54
    ror sb, sb, #0x10 @ 01004f58
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004f5c
    add lr, r0, #0x20 @ 01004f60
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004f64
    ror r2, r2, #0x10 @ 01004f68
    ror r3, r3, #0x10 @ 01004f6c
    ror r4, r4, #0x10 @ 01004f70
    ror r5, r5, #0x10 @ 01004f74
    ror r6, r6, #0x10 @ 01004f78
    ror r7, r7, #0x10 @ 01004f7c
    ror r8, r8, #0x10 @ 01004f80
    ror sb, sb, #0x10 @ 01004f84
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004f88
    add lr, r0, #0x40 @ 01004f8c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004f90
    ror r2, r2, #0x10 @ 01004f94
    ror r3, r3, #0x10 @ 01004f98
    ror r4, r4, #0x10 @ 01004f9c
    ror r5, r5, #0x10 @ 01004fa0
    ror r6, r6, #0x10 @ 01004fa4
    ror r7, r7, #0x10 @ 01004fa8
    ror r8, r8, #0x10 @ 01004fac
    ror sb, sb, #0x10 @ 01004fb0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004fb4
    add lr, r0, #0x60 @ 01004fb8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004fbc
    ror r2, r2, #0x10 @ 01004fc0
    ror r3, r3, #0x10 @ 01004fc4
    ror r4, r4, #0x10 @ 01004fc8
    ror r5, r5, #0x10 @ 01004fcc
    ror r6, r6, #0x10 @ 01004fd0
    ror r7, r7, #0x10 @ 01004fd4
    ror r8, r8, #0x10 @ 01004fd8
    ror sb, sb, #0x10 @ 01004fdc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004fe0
    pop {r4, r5, r6, r7, r8, sb, pc} @ 01004fe4
    .zero 8
@ FUN_01004ff0 at 0x01004ff0
    push {r4, r5, r6, r7, r8, sb, lr} @ 01004ff0
    add lr, r0, #0x80 @ 01004ff4
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01004ff8
    ror r2, r2, #0x10 @ 01004ffc
    ror r3, r3, #0x10 @ 01005000
    ror r4, r4, #0x10 @ 01005004
    ror r5, r5, #0x10 @ 01005008
    ror r6, r6, #0x10 @ 0100500c
    ror r7, r7, #0x10 @ 01005010
    ror r8, r8, #0x10 @ 01005014
    ror sb, sb, #0x10 @ 01005018
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100501c
    add lr, r0, #0 @ 01005020
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005024
    ror r2, r2, #0x10 @ 01005028
    ror r3, r3, #0x10 @ 0100502c
    ror r4, r4, #0x10 @ 01005030
    ror r5, r5, #0x10 @ 01005034
    ror r6, r6, #0x10 @ 01005038
    ror r7, r7, #0x10 @ 0100503c
    ror r8, r8, #0x10 @ 01005040
    ror sb, sb, #0x10 @ 01005044
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005048
    add lr, r0, #0xa0 @ 0100504c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005050
    ror r2, r2, #0x10 @ 01005054
    ror r3, r3, #0x10 @ 01005058
    ror r4, r4, #0x10 @ 0100505c
    ror r5, r5, #0x10 @ 01005060
    ror r6, r6, #0x10 @ 01005064
    ror r7, r7, #0x10 @ 01005068
    ror r8, r8, #0x10 @ 0100506c
    ror sb, sb, #0x10 @ 01005070
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005074
    add lr, r0, #0x20 @ 01005078
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100507c
    ror r2, r2, #0x10 @ 01005080
    ror r3, r3, #0x10 @ 01005084
    ror r4, r4, #0x10 @ 01005088
    ror r5, r5, #0x10 @ 0100508c
    ror r6, r6, #0x10 @ 01005090
    ror r7, r7, #0x10 @ 01005094
    ror r8, r8, #0x10 @ 01005098
    ror sb, sb, #0x10 @ 0100509c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010050a0
    add lr, r0, #0xc0 @ 010050a4
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010050a8
    ror r2, r2, #0x10 @ 010050ac
    ror r3, r3, #0x10 @ 010050b0
    ror r4, r4, #0x10 @ 010050b4
    ror r5, r5, #0x10 @ 010050b8
    ror r6, r6, #0x10 @ 010050bc
    ror r7, r7, #0x10 @ 010050c0
    ror r8, r8, #0x10 @ 010050c4
    ror sb, sb, #0x10 @ 010050c8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010050cc
    add lr, r0, #0x40 @ 010050d0
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010050d4
    ror r2, r2, #0x10 @ 010050d8
    ror r3, r3, #0x10 @ 010050dc
    ror r4, r4, #0x10 @ 010050e0
    ror r5, r5, #0x10 @ 010050e4
    ror r6, r6, #0x10 @ 010050e8
    ror r7, r7, #0x10 @ 010050ec
    ror r8, r8, #0x10 @ 010050f0
    ror sb, sb, #0x10 @ 010050f4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010050f8
    add lr, r0, #0xe0 @ 010050fc
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005100
    ror r2, r2, #0x10 @ 01005104
    ror r3, r3, #0x10 @ 01005108
    ror r4, r4, #0x10 @ 0100510c
    ror r5, r5, #0x10 @ 01005110
    ror r6, r6, #0x10 @ 01005114
    ror r7, r7, #0x10 @ 01005118
    ror r8, r8, #0x10 @ 0100511c
    ror sb, sb, #0x10 @ 01005120
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005124
    add lr, r0, #0x60 @ 01005128
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100512c
    ror r2, r2, #0x10 @ 01005130
    ror r3, r3, #0x10 @ 01005134
    ror r4, r4, #0x10 @ 01005138
    ror r5, r5, #0x10 @ 0100513c
    ror r6, r6, #0x10 @ 01005140
    ror r7, r7, #0x10 @ 01005144
    ror r8, r8, #0x10 @ 01005148
    ror sb, sb, #0x10 @ 0100514c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005150
    pop {r4, r5, r6, r7, r8, sb, pc} @ 01005154
    .zero 8
@ FUN_01005160 at 0x01005160
    push {r4, r5, r6, r7, r8, sb, lr} @ 01005160
    mov r2, #0 @ 01005164
    mov r3, #0 @ 01005168
    mov r4, #0 @ 0100516c
    mov r5, #0 @ 01005170
    mov r6, #0 @ 01005174
    mov r7, #0 @ 01005178
    mov r8, #0 @ 0100517c
    mov sb, #0 @ 01005180
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005184
    add lr, r0, #0x100 @ 01005188
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100518c
    ror r2, r2, #0x10 @ 01005190
    ror r3, r3, #0x10 @ 01005194
    ror r4, r4, #0x10 @ 01005198
    ror r5, r5, #0x10 @ 0100519c
    ror r6, r6, #0x10 @ 010051a0
    ror r7, r7, #0x10 @ 010051a4
    ror r8, r8, #0x10 @ 010051a8
    ror sb, sb, #0x10 @ 010051ac
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010051b0
    add lr, r0, #0x80 @ 010051b4
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010051b8
    ror r2, r2, #0x10 @ 010051bc
    ror r3, r3, #0x10 @ 010051c0
    ror r4, r4, #0x10 @ 010051c4
    ror r5, r5, #0x10 @ 010051c8
    ror r6, r6, #0x10 @ 010051cc
    ror r7, r7, #0x10 @ 010051d0
    ror r8, r8, #0x10 @ 010051d4
    ror sb, sb, #0x10 @ 010051d8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010051dc
    add lr, r0, #0 @ 010051e0
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010051e4
    ror r2, r2, #0x10 @ 010051e8
    ror r3, r3, #0x10 @ 010051ec
    ror r4, r4, #0x10 @ 010051f0
    ror r5, r5, #0x10 @ 010051f4
    ror r6, r6, #0x10 @ 010051f8
    ror r7, r7, #0x10 @ 010051fc
    ror r8, r8, #0x10 @ 01005200
    ror sb, sb, #0x10 @ 01005204
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005208
    mov r2, #0 @ 0100520c
    mov r3, #0 @ 01005210
    mov r4, #0 @ 01005214
    mov r5, #0 @ 01005218
    mov r6, #0 @ 0100521c
    mov r7, #0 @ 01005220
    mov r8, #0 @ 01005224
    mov sb, #0 @ 01005228
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100522c
    add lr, r0, #0x120 @ 01005230
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005234
    ror r2, r2, #0x10 @ 01005238
    ror r3, r3, #0x10 @ 0100523c
    ror r4, r4, #0x10 @ 01005240
    ror r5, r5, #0x10 @ 01005244
    ror r6, r6, #0x10 @ 01005248
    ror r7, r7, #0x10 @ 0100524c
    ror r8, r8, #0x10 @ 01005250
    ror sb, sb, #0x10 @ 01005254
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005258
    add lr, r0, #0xa0 @ 0100525c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005260
    ror r2, r2, #0x10 @ 01005264
    ror r3, r3, #0x10 @ 01005268
    ror r4, r4, #0x10 @ 0100526c
    ror r5, r5, #0x10 @ 01005270
    ror r6, r6, #0x10 @ 01005274
    ror r7, r7, #0x10 @ 01005278
    ror r8, r8, #0x10 @ 0100527c
    ror sb, sb, #0x10 @ 01005280
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005284
    add lr, r0, #0x20 @ 01005288
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100528c
    ror r2, r2, #0x10 @ 01005290
    ror r3, r3, #0x10 @ 01005294
    ror r4, r4, #0x10 @ 01005298
    ror r5, r5, #0x10 @ 0100529c
    ror r6, r6, #0x10 @ 010052a0
    ror r7, r7, #0x10 @ 010052a4
    ror r8, r8, #0x10 @ 010052a8
    ror sb, sb, #0x10 @ 010052ac
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010052b0
    mov r2, #0 @ 010052b4
    mov r3, #0 @ 010052b8
    mov r4, #0 @ 010052bc
    mov r5, #0 @ 010052c0
    mov r6, #0 @ 010052c4
    mov r7, #0 @ 010052c8
    mov r8, #0 @ 010052cc
    mov sb, #0 @ 010052d0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010052d4
    add lr, r0, #0x140 @ 010052d8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010052dc
    ror r2, r2, #0x10 @ 010052e0
    ror r3, r3, #0x10 @ 010052e4
    ror r4, r4, #0x10 @ 010052e8
    ror r5, r5, #0x10 @ 010052ec
    ror r6, r6, #0x10 @ 010052f0
    ror r7, r7, #0x10 @ 010052f4
    ror r8, r8, #0x10 @ 010052f8
    ror sb, sb, #0x10 @ 010052fc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005300
    add lr, r0, #0xc0 @ 01005304
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005308
    ror r2, r2, #0x10 @ 0100530c
    ror r3, r3, #0x10 @ 01005310
    ror r4, r4, #0x10 @ 01005314
    ror r5, r5, #0x10 @ 01005318
    ror r6, r6, #0x10 @ 0100531c
    ror r7, r7, #0x10 @ 01005320
    ror r8, r8, #0x10 @ 01005324
    ror sb, sb, #0x10 @ 01005328
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100532c
    add lr, r0, #0x40 @ 01005330
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005334
    ror r2, r2, #0x10 @ 01005338
    ror r3, r3, #0x10 @ 0100533c
    ror r4, r4, #0x10 @ 01005340
    ror r5, r5, #0x10 @ 01005344
    ror r6, r6, #0x10 @ 01005348
    ror r7, r7, #0x10 @ 0100534c
    ror r8, r8, #0x10 @ 01005350
    ror sb, sb, #0x10 @ 01005354
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005358
    mov r2, #0 @ 0100535c
    mov r3, #0 @ 01005360
    mov r4, #0 @ 01005364
    mov r5, #0 @ 01005368
    mov r6, #0 @ 0100536c
    mov r7, #0 @ 01005370
    mov r8, #0 @ 01005374
    mov sb, #0 @ 01005378
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100537c
    add lr, r0, #0x160 @ 01005380
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005384
    ror r2, r2, #0x10 @ 01005388
    ror r3, r3, #0x10 @ 0100538c
    ror r4, r4, #0x10 @ 01005390
    ror r5, r5, #0x10 @ 01005394
    ror r6, r6, #0x10 @ 01005398
    ror r7, r7, #0x10 @ 0100539c
    ror r8, r8, #0x10 @ 010053a0
    ror sb, sb, #0x10 @ 010053a4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010053a8
    add lr, r0, #0xe0 @ 010053ac
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010053b0
    ror r2, r2, #0x10 @ 010053b4
    ror r3, r3, #0x10 @ 010053b8
    ror r4, r4, #0x10 @ 010053bc
    ror r5, r5, #0x10 @ 010053c0
    ror r6, r6, #0x10 @ 010053c4
    ror r7, r7, #0x10 @ 010053c8
    ror r8, r8, #0x10 @ 010053cc
    ror sb, sb, #0x10 @ 010053d0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010053d4
    add lr, r0, #0x60 @ 010053d8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010053dc
    ror r2, r2, #0x10 @ 010053e0
    ror r3, r3, #0x10 @ 010053e4
    ror r4, r4, #0x10 @ 010053e8
    ror r5, r5, #0x10 @ 010053ec
    ror r6, r6, #0x10 @ 010053f0
    ror r7, r7, #0x10 @ 010053f4
    ror r8, r8, #0x10 @ 010053f8
    ror sb, sb, #0x10 @ 010053fc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005400
    pop {r4, r5, r6, r7, r8, sb, pc} @ 01005404
    .zero 8
@ FUN_01005410 at 0x01005410
    push {r4, r5, r6, r7, r8, sb, lr} @ 01005410
    add lr, r0, #0x180 @ 01005414
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005418
    ror r2, r2, #0x10 @ 0100541c
    ror r3, r3, #0x10 @ 01005420
    ror r4, r4, #0x10 @ 01005424
    ror r5, r5, #0x10 @ 01005428
    ror r6, r6, #0x10 @ 0100542c
    ror r7, r7, #0x10 @ 01005430
    ror r8, r8, #0x10 @ 01005434
    ror sb, sb, #0x10 @ 01005438
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100543c
    add lr, r0, #0x100 @ 01005440
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005444
    ror r2, r2, #0x10 @ 01005448
    ror r3, r3, #0x10 @ 0100544c
    ror r4, r4, #0x10 @ 01005450
    ror r5, r5, #0x10 @ 01005454
    ror r6, r6, #0x10 @ 01005458
    ror r7, r7, #0x10 @ 0100545c
    ror r8, r8, #0x10 @ 01005460
    ror sb, sb, #0x10 @ 01005464
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005468
    add lr, r0, #0x80 @ 0100546c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005470
    ror r2, r2, #0x10 @ 01005474
    ror r3, r3, #0x10 @ 01005478
    ror r4, r4, #0x10 @ 0100547c
    ror r5, r5, #0x10 @ 01005480
    ror r6, r6, #0x10 @ 01005484
    ror r7, r7, #0x10 @ 01005488
    ror r8, r8, #0x10 @ 0100548c
    ror sb, sb, #0x10 @ 01005490
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005494
    add lr, r0, #0 @ 01005498
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100549c
    ror r2, r2, #0x10 @ 010054a0
    ror r3, r3, #0x10 @ 010054a4
    ror r4, r4, #0x10 @ 010054a8
    ror r5, r5, #0x10 @ 010054ac
    ror r6, r6, #0x10 @ 010054b0
    ror r7, r7, #0x10 @ 010054b4
    ror r8, r8, #0x10 @ 010054b8
    ror sb, sb, #0x10 @ 010054bc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010054c0
    add lr, r0, #0x1a0 @ 010054c4
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010054c8
    ror r2, r2, #0x10 @ 010054cc
    ror r3, r3, #0x10 @ 010054d0
    ror r4, r4, #0x10 @ 010054d4
    ror r5, r5, #0x10 @ 010054d8
    ror r6, r6, #0x10 @ 010054dc
    ror r7, r7, #0x10 @ 010054e0
    ror r8, r8, #0x10 @ 010054e4
    ror sb, sb, #0x10 @ 010054e8
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010054ec
    add lr, r0, #0x120 @ 010054f0
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010054f4
    ror r2, r2, #0x10 @ 010054f8
    ror r3, r3, #0x10 @ 010054fc
    ror r4, r4, #0x10 @ 01005500
    ror r5, r5, #0x10 @ 01005504
    ror r6, r6, #0x10 @ 01005508
    ror r7, r7, #0x10 @ 0100550c
    ror r8, r8, #0x10 @ 01005510
    ror sb, sb, #0x10 @ 01005514
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005518
    add lr, r0, #0xa0 @ 0100551c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005520
    ror r2, r2, #0x10 @ 01005524
    ror r3, r3, #0x10 @ 01005528
    ror r4, r4, #0x10 @ 0100552c
    ror r5, r5, #0x10 @ 01005530
    ror r6, r6, #0x10 @ 01005534
    ror r7, r7, #0x10 @ 01005538
    ror r8, r8, #0x10 @ 0100553c
    ror sb, sb, #0x10 @ 01005540
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005544
    add lr, r0, #0x20 @ 01005548
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100554c
    ror r2, r2, #0x10 @ 01005550
    ror r3, r3, #0x10 @ 01005554
    ror r4, r4, #0x10 @ 01005558
    ror r5, r5, #0x10 @ 0100555c
    ror r6, r6, #0x10 @ 01005560
    ror r7, r7, #0x10 @ 01005564
    ror r8, r8, #0x10 @ 01005568
    ror sb, sb, #0x10 @ 0100556c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005570
    add lr, r0, #0x1c0 @ 01005574
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005578
    ror r2, r2, #0x10 @ 0100557c
    ror r3, r3, #0x10 @ 01005580
    ror r4, r4, #0x10 @ 01005584
    ror r5, r5, #0x10 @ 01005588
    ror r6, r6, #0x10 @ 0100558c
    ror r7, r7, #0x10 @ 01005590
    ror r8, r8, #0x10 @ 01005594
    ror sb, sb, #0x10 @ 01005598
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100559c
    add lr, r0, #0x140 @ 010055a0
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010055a4
    ror r2, r2, #0x10 @ 010055a8
    ror r3, r3, #0x10 @ 010055ac
    ror r4, r4, #0x10 @ 010055b0
    ror r5, r5, #0x10 @ 010055b4
    ror r6, r6, #0x10 @ 010055b8
    ror r7, r7, #0x10 @ 010055bc
    ror r8, r8, #0x10 @ 010055c0
    ror sb, sb, #0x10 @ 010055c4
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010055c8
    add lr, r0, #0xc0 @ 010055cc
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010055d0
    ror r2, r2, #0x10 @ 010055d4
    ror r3, r3, #0x10 @ 010055d8
    ror r4, r4, #0x10 @ 010055dc
    ror r5, r5, #0x10 @ 010055e0
    ror r6, r6, #0x10 @ 010055e4
    ror r7, r7, #0x10 @ 010055e8
    ror r8, r8, #0x10 @ 010055ec
    ror sb, sb, #0x10 @ 010055f0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010055f4
    add lr, r0, #0x40 @ 010055f8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010055fc
    ror r2, r2, #0x10 @ 01005600
    ror r3, r3, #0x10 @ 01005604
    ror r4, r4, #0x10 @ 01005608
    ror r5, r5, #0x10 @ 0100560c
    ror r6, r6, #0x10 @ 01005610
    ror r7, r7, #0x10 @ 01005614
    ror r8, r8, #0x10 @ 01005618
    ror sb, sb, #0x10 @ 0100561c
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005620
    add lr, r0, #0x1e0 @ 01005624
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005628
    ror r2, r2, #0x10 @ 0100562c
    ror r3, r3, #0x10 @ 01005630
    ror r4, r4, #0x10 @ 01005634
    ror r5, r5, #0x10 @ 01005638
    ror r6, r6, #0x10 @ 0100563c
    ror r7, r7, #0x10 @ 01005640
    ror r8, r8, #0x10 @ 01005644
    ror sb, sb, #0x10 @ 01005648
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 0100564c
    add lr, r0, #0x160 @ 01005650
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005654
    ror r2, r2, #0x10 @ 01005658
    ror r3, r3, #0x10 @ 0100565c
    ror r4, r4, #0x10 @ 01005660
    ror r5, r5, #0x10 @ 01005664
    ror r6, r6, #0x10 @ 01005668
    ror r7, r7, #0x10 @ 0100566c
    ror r8, r8, #0x10 @ 01005670
    ror sb, sb, #0x10 @ 01005674
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005678
    add lr, r0, #0xe0 @ 0100567c
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 01005680
    ror r2, r2, #0x10 @ 01005684
    ror r3, r3, #0x10 @ 01005688
    ror r4, r4, #0x10 @ 0100568c
    ror r5, r5, #0x10 @ 01005690
    ror r6, r6, #0x10 @ 01005694
    ror r7, r7, #0x10 @ 01005698
    ror r8, r8, #0x10 @ 0100569c
    ror sb, sb, #0x10 @ 010056a0
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010056a4
    add lr, r0, #0x60 @ 010056a8
    ldm lr!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010056ac
    ror r2, r2, #0x10 @ 010056b0
    ror r3, r3, #0x10 @ 010056b4
    ror r4, r4, #0x10 @ 010056b8
    ror r5, r5, #0x10 @ 010056bc
    ror r6, r6, #0x10 @ 010056c0
    ror r7, r7, #0x10 @ 010056c4
    ror r8, r8, #0x10 @ 010056c8
    ror sb, sb, #0x10 @ 010056cc
    stm r1!, {r2, r3, r4, r5, r6, r7, r8, sb} @ 010056d0
    pop {r4, r5, r6, r7, r8, sb, pc} @ 010056d4
    .zero 208
    .byte 0x01, 0x33, 0xa0, 0xe3, 0x08, 0x12, 0x93, 0xe5, 0x08, 0x32, 0x83, 0xe5, 0x00, 0x00, 0x4f, 0xe1 @ 010057a8
    .byte 0x0b, 0x40, 0x2d, 0xe9, 0x10, 0x12, 0x93, 0xe5, 0x14, 0x22, 0x93, 0xe5, 0x02, 0x10, 0x01, 0xe0 @ 010057b8
    .byte 0xa8, 0x00, 0x9f, 0xe5, 0x00, 0x20, 0x90, 0xe5, 0x01, 0x20, 0x82, 0xe1, 0x00, 0x20, 0x80, 0xe5 @ 010057c8
    .byte 0x9c, 0x20, 0x9f, 0xe5, 0x04, 0x00, 0x92, 0xe5, 0x00, 0x00, 0x50, 0xe3, 0x03, 0x00, 0x00, 0x0a @ 010057d8
    .byte 0x01, 0x00, 0x10, 0xe0, 0x05, 0x00, 0x00, 0x1a, 0x08, 0x20, 0x82, 0xe2, 0xf8, 0xff, 0xff, 0xea @ 010057e8
    .byte 0x14, 0x12, 0x83, 0xe5, 0x0b, 0x40, 0xbd, 0xe8, 0x08, 0x12, 0x83, 0xe5, 0x0e, 0xf0, 0xa0, 0xe1 @ 010057f8
    .byte 0x00, 0x10, 0x92, 0xe5, 0x00, 0x00, 0x51, 0xe3, 0x01, 0x00, 0x00, 0x1a, 0x00, 0x10, 0xa0, 0xe1 @ 01005808
    .byte 0xf6, 0xff, 0xff, 0xea, 0x00, 0x20, 0x0f, 0xe1, 0xdf, 0x20, 0xc2, 0xe3, 0x1f, 0x20, 0x82, 0xe3 @ 01005818
    .byte 0x02, 0xf0, 0x29, 0xe1 @ 01005828
    ldr r2, [r3, #0x210] @ 0100582c
    push {r0, r2, r3, lr} @ 01005830
    bic r2, r2, r0 @ 01005834
    str r2, [r3, #0x210] @ 01005838
    add lr, pc, #0 @ 0100583c
    bx r1 @ 01005840
    mov r3, #0x4000000 @ 01005844
    str r3, [r3, #0x208] @ 01005848
    pop {r0, r2, r3, lr} @ 0100584c
    str r0, [r3, #0x214] @ 01005850
    str r2, [r3, #0x210] @ 01005854
    mrs r3, cpsr @ 01005858
    bic r3, r3, #0xdf @ 0100585c
    orr r3, r3, #0x92 @ 01005860
    msr cpsr_fc, r3 @ 01005864
    pop {r0, r1, r3, lr} @ 01005868
    str r1, [r3, #0x208] @ 0100586c
    msr spsr_fc, r0 @ 01005870
    mov pc, lr @ 01005874
    .byte 0xf8, 0x3f, 0x00, 0x0b, 0xe0, 0x56, 0x00, 0x01 @ 01005878
