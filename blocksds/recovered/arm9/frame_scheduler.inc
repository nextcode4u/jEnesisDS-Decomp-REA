.L_02000220:
@ FUN_02000220 at 0x02000220
    mov ip, sp @ 02000220
    push {r3, r4, r5, r6, r7, r8, sb, sl, fp, ip, lr, pc} @ 02000224
    sub fp, ip, #4 @ 02000228
    sub sp, fp, #0x28 @ 0200022c
    ldm sp, {r4, r5, r6, r7, r8, sb, sl, fp, sp, lr} @ 02000230
    bx lr @ 02000234
    .zero 8
@ FUN_02000240 at 0x02000240
    push {r4, lr} @ 02000240
    ldr r4, [pc, #0x2c] @ 02000244
    ldrb r3, [r4] @ 02000248
    cmp r3, #0 @ 0200024c
    ldr r2, [pc, #0x24] @ 02000250
    bne .L_02000270 @ 02000254
    cmp r2, #0 @ 02000258
    ldr r0, [pc, #0x1c] @ 0200025c
    movne lr, pc @ 02000260
    bxne r2 @ 02000264
    mov r3, #1 @ 02000268
    strb r3, [r4] @ 0200026c
.L_02000270:
    pop {r4, lr} @ 02000270
    bx lr @ 02000274
    .byte 0x70, 0x8f, 0x09, 0x02, 0x00, 0x00, 0x00, 0x00, 0x38, 0xf3, 0x08, 0x02 @ 02000278
@ FUN_02000284 at 0x02000284
    str lr, [sp, #-4]! @ 02000284
    ldr r3, [pc, #0x40] @ 02000288
    cmp r3, #0 @ 0200028c
    sub sp, sp, #4 @ 02000290
    ldr r0, [pc, #0x38] @ 02000294
    ldr r1, [pc, #0x38] @ 02000298
    movne lr, pc @ 0200029c
    bxne r3 @ 020002a0
    ldr r0, [pc, #0x30] @ 020002a4
    ldr r3, [r0] @ 020002a8
    cmp r3, #0 @ 020002ac
    ldr r3, [pc, #0x28] @ 020002b0
    beq .L_020002c4 @ 020002b4
    cmp r3, #0 @ 020002b8
    movne lr, pc @ 020002bc
    bxne r3 @ 020002c0
.L_020002c4:
    add sp, sp, #4 @ 020002c4
    .word 0xe49de004 @ 020002c8 pop {lr}
    bx lr @ 020002cc
    .byte 0x00, 0x00, 0x00, 0x00, 0x38, 0xf3, 0x08, 0x02, 0x74, 0x8f, 0x09, 0x02, 0x3c, 0xf3, 0x08, 0x02 @ 020002d0
    .zero 4
.L_020002e4:
@ FUN_020002e4 at 0x020002e4
    ldr r2, [pc, #0x1c] @ 020002e4
    cmp r0, #0 @ 020002e8
    cmpne r0, #0x80 @ 020002ec
    movne r3, #0 @ 020002f0
    moveq r3, #1 @ 020002f4
    orr r0, r0, #0x21 @ 020002f8
    str r3, [r2, #0x20] @ 020002fc
    str r0, [r2, #0x1c] @ 02000300
    bx lr @ 02000304
    .byte 0x00, 0x00, 0x00, 0x0b, 0x1e, 0xff, 0x2f, 0xe1 @ 02000308
@ FUN_02000310 at 0x02000310
    push {r4, r5, r6, r7, r8, lr} @ 02000310
    ldr r3, [pc, #0x5c] @ 02000314
    ldrb lr, [r3, #0x45] @ 02000318
    ldrb ip, [r3, #0x55] @ 0200031c
    ldrb r2, [r3, #0x44] @ 02000320
    ldrb r1, [r3, #0x54] @ 02000324
    ldrb r7, [r3, #0x46] @ 02000328
    ldrb r8, [r3, #0x56] @ 0200032c
    ldrb r0, [r3, #0x9c] @ 02000330
    ldrb r6, [r3, #0x9d] @ 02000334
    orr r2, r2, lr, lsl #8 @ 02000338
    orr r1, r1, ip, lsl #8 @ 0200033c
    ldrb lr, [r3, #0x47] @ 02000340
    ldrb r4, [r3, #0x57] @ 02000344
    ldrb r5, [r3, #0x9e] @ 02000348
    orr r2, r2, r7, lsl #16 @ 0200034c
    orr r1, r1, r8, lsl #16 @ 02000350
    orr r0, r0, r6, lsl #8 @ 02000354
    ldrb ip, [r3, #0x9f] @ 02000358
    orr r2, r2, lr, lsl #24 @ 0200035c
    orr r1, r1, r4, lsl #24 @ 02000360
    orr r0, r0, r5, lsl #16 @ 02000364
    rsb r2, r1, r2 @ 02000368
    orr r0, r0, ip, lsl #24 @ 0200036c
    orr r0, r2, r0 @ 02000370
    pop {r4, r5, r6, r7, r8, pc} @ 02000374
    .byte 0xac, 0x00, 0x00, 0x0b @ 02000378
.L_0200037c:
    and r0, r0, #0xfe @ 0200037c
    sub r0, r0, #2 @ 02000380
    cmp r0, #8 @ 02000384
    ldrls pc, [pc, r0, lsl #2] @ 02000388
    b .L_020003d8 @ 0200038c
    .byte 0xb4, 0x03, 0x00, 0x02, 0xd8, 0x03, 0x00, 0x02, 0xc0, 0x03, 0x00, 0x02, 0xd8, 0x03, 0x00, 0x02 @ 02000390
    .byte 0xd8, 0x03, 0x00, 0x02, 0xd8, 0x03, 0x00, 0x02, 0xcc, 0x03, 0x00, 0x02, 0xd8, 0x03, 0x00, 0x02 @ 020003a0
    .byte 0xdc, 0x03, 0x00, 0x02 @ 020003b0
    ldr r3, [pc, #0x2c] @ 020003b4
    ldr r0, [r3, #0x30] @ 020003b8
    b .L_02003a68 @ 020003bc
    ldr r3, [pc, #0x20] @ 020003c0
    ldr r0, [r3, #0x34] @ 020003c4
    b .L_02003a68 @ 020003c8
    ldr r3, [pc, #0x14] @ 020003cc
    ldr r0, [r3, #0x30] @ 020003d0
    b .L_02003820 @ 020003d4
.L_020003d8:
    bx lr @ 020003d8
    ldr r3, [pc, #4] @ 020003dc
    ldr r0, [r3, #0x34] @ 020003e0
    b .L_02003820 @ 020003e4
    .byte 0x00, 0x00, 0x00, 0x0b, 0xff, 0x10, 0x01, 0xe2, 0xe1, 0xff, 0xff, 0xea @ 020003e8
.L_020003f4:
@ FUN_020003f4 at 0x020003f4
    and r0, r0, #0xfe @ 020003f4
    cmp r0, #0x1a @ 020003f8
    ldrls pc, [pc, r0, lsl #2] @ 020003fc
    b .L_02000484 @ 02000400
    .byte 0x70, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02, 0xb8, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02 @ 02000404
    .byte 0xac, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02, 0xa4, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02 @ 02000414
    .byte 0x98, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02, 0x8c, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02 @ 02000424
    .byte 0x84, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02, 0x7c, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02 @ 02000434
    .byte 0x84, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02 @ 02000444
    .byte 0x7c, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02 @ 02000454
    .byte 0x84, 0x04, 0x00, 0x02, 0x84, 0x04, 0x00, 0x02, 0x7c, 0x04, 0x00, 0x02 @ 02000464
    ldr r3, [pc, #0x4c] @ 02000470
    ldr r0, [r3, #0x1c] @ 02000474
    bx lr @ 02000478
    mov r0, #0xff @ 0200047c
    bx lr @ 02000480
.L_02000484:
    mov r0, #0 @ 02000484
    bx lr @ 02000488
    ldr r3, [pc, #0x30] @ 0200048c
    ldr r0, [r3, #0x34] @ 02000490
    b .L_02003a48 @ 02000494
    ldr r3, [pc, #0x24] @ 02000498
    ldr r0, [r3, #0x30] @ 0200049c
    b .L_02003a48 @ 020004a0
    mov r0, #0x7f @ 020004a4
    bx lr @ 020004a8
    ldr r3, [pc, #0x10] @ 020004ac
    ldr r0, [r3, #0x34] @ 020004b0
    b .L_02003828 @ 020004b4
    ldr r3, [pc, #4] @ 020004b8
    ldr r0, [r3, #0x30] @ 020004bc
    b .L_02003828 @ 020004c0
    .byte 0x00, 0x00, 0x00, 0x0b @ 020004c4
@ FUN_020004c8 at 0x020004c8
    str lr, [sp, #-4]! @ 020004c8
    sub sp, sp, #4 @ 020004cc
    bl .L_020003f4 @ 020004d0
    and r0, r0, #0xff @ 020004d4
    add sp, sp, #4 @ 020004d8
    ldm sp!, {pc} @ 020004dc
.L_020004e0:
@ FUN_020004e0 at 0x020004e0
    mov r1, r0 @ 020004e0
    ldr r0, [pc] @ 020004e4
    b .L_020050cc @ 020004e8
    .byte 0xac, 0x00, 0x00, 0x0b @ 020004ec
@ FUN_020004f0 at 0x020004f0
    push {r4, lr} @ 020004f0
    ldr r4, [pc, #0x28] @ 020004f4
    ldr r0, [pc, #0x28] @ 020004f8
    ldr r3, [r4, #8] @ 020004fc
    cmp r3, #0 @ 02000500
    ldreq r0, [r4, #0x14] @ 02000504
    popeq {r4, pc} @ 02000508
    bl .L_02005144 @ 0200050c
    ldr r2, [r4, #8] @ 02000510
    ldr r3, [r4] @ 02000514
    mul r1, r2, r3 @ 02000518
    bl .L_02080380 @ 0200051c
    pop {r4, pc} @ 02000520
    .byte 0x00, 0x00, 0x00, 0x0b, 0xac, 0x00, 0x00, 0x0b @ 02000524
.L_0200052c:
@ FUN_0200052c at 0x0200052c
    ldr r0, [pc] @ 0200052c
    b .L_02005144 @ 02000530
    .byte 0xac, 0x00, 0x00, 0x0b @ 02000534
.L_02000538:
@ FUN_02000538 at 0x02000538
    push {r4, lr} @ 02000538
    mov r4, r0 @ 0200053c
    bl .L_0200b284 @ 02000540
    ldr r0, [pc, #8] @ 02000544
    mov r1, r4 @ 02000548
    pop {r4, lr} @ 0200054c
    .word 0xeac00a82 @ 02000550 b #0x1002f60
    .byte 0xac, 0x00, 0x00, 0x0b, 0x00, 0x10, 0xa0, 0xe1, 0x00, 0x00, 0x9f, 0xe5, 0x7e, 0x0a, 0xc0, 0xea @ 02000554
    .byte 0xac, 0x00, 0x00, 0x0b @ 02000564
.L_02000568:
@ FUN_02000568 at 0x02000568
    push {r4, lr} @ 02000568
    mov r4, r0 @ 0200056c
    bl .L_0200b284 @ 02000570
    ldr r0, [pc, #8] @ 02000574
    mov r1, r4 @ 02000578
    pop {r4, lr} @ 0200057c
    .word 0xeac00a76 @ 02000580 b #0x1002f60
    .byte 0xac, 0x00, 0x00, 0x0b @ 02000584
.L_02000588:
@ FUN_02000588 at 0x02000588
    push {r4, r5, r6, r7, r8, lr} @ 02000588
    ldr r8, [pc, #0x100] @ 0200058c
    ldr r7, [pc, #0x100] @ 02000590
    ldr r2, [r8] @ 02000594
    ldr r3, [r7] @ 02000598
    rsb r1, r3, r2 @ 0200059c
    cmp r1, #0x4000 @ 020005a0
    movlo r4, r1 @ 020005a4
    blo .L_02000634 @ 020005a8
    sub r2, r1, #0x4000 @ 020005ac
    mov r4, r1 @ 020005b0
    ldr r1, [pc, #0xe0] @ 020005b4
    ldr r6, [pc, #0xe0] @ 020005b8
    umull r0, r3, r1, r2 @ 020005bc
    rsb r2, r3, r2 @ 020005c0
    add r3, r3, r2, lsr #1 @ 020005c4
    lsr r3, r3, #0xd @ 020005c8
    rsb r2, r3, r3, lsl #18 @ 020005cc
    add r3, r3, r2, lsl #14 @ 020005d0
    add r3, r4, r3 @ 020005d4
    sub r5, r3, #0x3fc0 @ 020005d8
    sub r5, r5, #0x3f @ 020005dc
    b .L_020005ec @ 020005e0
.L_020005e4:
    cmp r4, r5 @ 020005e4
    beq .L_02000634 @ 020005e8
.L_020005ec:
    ldr r3, [r6] @ 020005ec
    sub r4, r4, #0x3fc0 @ 020005f0
    tst r3, #2 @ 020005f4
    sub r4, r4, #0x3f @ 020005f8
    bne .L_020005e4 @ 020005fc
    ldr r3, [pc, #0x9c] @ 02000600
    ldrb r2, [r3] @ 02000604
    cmp r2, #1 @ 02000608
    bne .L_020005e4 @ 0200060c
    ldr r3, [pc, #0x90] @ 02000610
    ldr r0, [pc, #0x90] @ 02000614
    ldrb r2, [r3] @ 02000618
    ldr r1, [pc, #0x8c] @ 0200061c
    cmp r2, #0 @ 02000620
    bne .L_020005e4 @ 02000624
    bl .L_0200df50 @ 02000628
    cmp r4, r5 @ 0200062c
    bne .L_020005ec @ 02000630
.L_02000634:
    cmp r4, #0 @ 02000634
    beq .L_0200066c @ 02000638
    ldr r3, [pc, #0x5c] @ 0200063c
    ldr r2, [r3] @ 02000640
    tst r2, #2 @ 02000644
    bne .L_0200066c @ 02000648
    ldr r3, [pc, #0x50] @ 0200064c
    ldrb r2, [r3] @ 02000650
    cmp r2, #1 @ 02000654
    bne .L_0200066c @ 02000658
    ldr r3, [pc, #0x44] @ 0200065c
    ldrb r2, [r3] @ 02000660
    cmp r2, #0 @ 02000664
    beq .L_02000684 @ 02000668
.L_0200066c:
    ldm r8, {r2, r3} @ 0200066c
    stm r7, {r2, r3} @ 02000670
    ldr r3, [pc, #0x38] @ 02000674
    mov r2, #0 @ 02000678
    str r2, [r3, #0xa8] @ 0200067c
    pop {r4, r5, r6, r7, r8, pc} @ 02000680
.L_02000684:
    mov r1, r4 @ 02000684
    ldr r0, [pc, #0x1c] @ 02000688
    bl .L_0200df50 @ 0200068c
    b .L_0200066c @ 02000690
    .byte 0x90, 0x8f, 0x09, 0x02, 0x98, 0x8f, 0x09, 0x02, 0x11, 0x00, 0x04, 0x00, 0x10, 0xb6, 0x3c, 0x02 @ 02000694
    .byte 0x01, 0x90, 0x09, 0x02, 0x00, 0x90, 0x09, 0x02, 0x58, 0x01, 0x00, 0x0b, 0xff, 0x3f, 0x00, 0x00 @ 020006a4
    .byte 0x00, 0x00, 0x00, 0x0b @ 020006b4
.L_020006b8:
@ FUN_020006b8 at 0x020006b8
    push {r4, r5, r6, r7, r8, sl, lr} @ 020006b8
    ldr r7, [pc, #0x130] @ 020006bc
    ldr sl, [pc, #0x130] @ 020006c0
    mov r2, #0xe3 @ 020006c4
    ldr r8, [pc, #0x12c] @ 020006c8
    ldm r7, {r0, r1} @ 020006cc
    mov r3, #0 @ 020006d0
    adds r0, r0, r2 @ 020006d4
    ldr lr, [sl] @ 020006d8
    adc r1, r1, r3 @ 020006dc
    ldr ip, [r8, #0xa8] @ 020006e0
    ldr r3, [pc, #0x114] @ 020006e4
    rsb r2, lr, r0 @ 020006e8
    cmp r2, r3 @ 020006ec
    cmpls ip, #0 @ 020006f0
    sub sp, sp, #4 @ 020006f4
    stm r7, {r0, r1} @ 020006f8
    beq .L_020007ac @ 020006fc
    cmp r2, #0x4000 @ 02000700
    movlo r4, r2 @ 02000704
    blo .L_02000794 @ 02000708
    ldr r1, [pc, #0xf0] @ 0200070c
    mov r4, r2 @ 02000710
    sub r2, r2, #0x4000 @ 02000714
    umull r0, r3, r1, r2 @ 02000718
    rsb r2, r3, r2 @ 0200071c
    add r3, r3, r2, lsr #1 @ 02000720
    lsr r3, r3, #0xd @ 02000724
    rsb r2, r3, r3, lsl #18 @ 02000728
    add r3, r3, r2, lsl #14 @ 0200072c
    add r3, r4, r3 @ 02000730
    sub r5, r3, #0x3fc0 @ 02000734
    ldr r6, [pc, #0xc8] @ 02000738
    sub r5, r5, #0x3f @ 0200073c
    b .L_0200074c @ 02000740
.L_02000744:
    cmp r4, r5 @ 02000744
    beq .L_02000794 @ 02000748
.L_0200074c:
    ldr r3, [r6] @ 0200074c
    sub r4, r4, #0x3fc0 @ 02000750
    tst r3, #2 @ 02000754
    sub r4, r4, #0x3f @ 02000758
    bne .L_02000744 @ 0200075c
    ldr r3, [pc, #0xa4] @ 02000760
    ldrb r2, [r3] @ 02000764
    cmp r2, #1 @ 02000768
    bne .L_02000744 @ 0200076c
    ldr r3, [pc, #0x98] @ 02000770
    ldr r0, [pc, #0x98] @ 02000774
    ldrb r2, [r3] @ 02000778
    ldr r1, [pc, #0x94] @ 0200077c
    cmp r2, #0 @ 02000780
    bne .L_02000744 @ 02000784
    bl .L_0200df50 @ 02000788
    cmp r4, r5 @ 0200078c
    bne .L_0200074c @ 02000790
.L_02000794:
    cmp r4, #0 @ 02000794
    bne .L_020007b4 @ 02000798
.L_0200079c:
    ldm r7, {r2, r3} @ 0200079c
    stm sl, {r2, r3} @ 020007a0
    mov r3, #0 @ 020007a4
    str r3, [r8, #0xa8] @ 020007a8
.L_020007ac:
    add sp, sp, #4 @ 020007ac
    pop {r4, r5, r6, r7, r8, sl, pc} @ 020007b0
.L_020007b4:
    ldr r3, [pc, #0x4c] @ 020007b4
    ldr r2, [r3] @ 020007b8
    tst r2, #2 @ 020007bc
    bne .L_0200079c @ 020007c0
    ldr r3, [pc, #0x40] @ 020007c4
    ldrb r2, [r3] @ 020007c8
    cmp r2, #1 @ 020007cc
    bne .L_0200079c @ 020007d0
    ldr r3, [pc, #0x34] @ 020007d4
    ldrb r2, [r3] @ 020007d8
    cmp r2, #0 @ 020007dc
    bne .L_0200079c @ 020007e0
    mov r1, r4 @ 020007e4
    ldr r0, [pc, #0x24] @ 020007e8
    bl .L_0200df50 @ 020007ec
    b .L_0200079c @ 020007f0
    .byte 0x90, 0x8f, 0x09, 0x02, 0x98, 0x8f, 0x09, 0x02, 0x00, 0x00, 0x00, 0x0b, 0xfe, 0x3f, 0x00, 0x00 @ 020007f4
    .byte 0x11, 0x00, 0x04, 0x00, 0x10, 0xb6, 0x3c, 0x02, 0x01, 0x90, 0x09, 0x02, 0x00, 0x90, 0x09, 0x02 @ 02000804
    .byte 0x58, 0x01, 0x00, 0x0b, 0xff, 0x3f, 0x00, 0x00 @ 02000814
.L_0200081c:
@ FUN_0200081c at 0x0200081c
    ldr r3, [pc, #0x34] @ 0200081c
    ldr r2, [r3] @ 02000820
    tst r2, #2 @ 02000824
    bxne lr @ 02000828
    ldr r3, [pc, #0x28] @ 0200082c
    ldrb r2, [r3] @ 02000830
    cmp r2, #1 @ 02000834
    bxne lr @ 02000838
    ldr r3, [pc, #0x1c] @ 0200083c
    mov r1, r0 @ 02000840
    ldrb r2, [r3] @ 02000844
    ldr r0, [pc, #0x14] @ 02000848
    cmp r2, #0 @ 0200084c
    bxne lr @ 02000850
    b .L_0200df50 @ 02000854
    .byte 0x10, 0xb6, 0x3c, 0x02, 0x01, 0x90, 0x09, 0x02, 0x00, 0x90, 0x09, 0x02, 0x58, 0x01, 0x00, 0x0b @ 02000858
@ FUN_02000868 at 0x02000868
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02000868
    ldr r7, [pc, #0x1a0] @ 0200086c
    sub sp, sp, #0xc @ 02000870
    ldr sl, [r7, #4] @ 02000874
    ldr r2, [r7, #0x18] @ 02000878
    ldr r3, [r7] @ 0200087c
    ldr sb, [r7, #0x14] @ 02000880
    str r2, [sp, #4] @ 02000884
    str r3, [sp] @ 02000888
    bl .L_0200b438 @ 0200088c
    cmp sl, #0 @ 02000890
    ldreq fp, [pc, #0x17c] @ 02000894
    moveq r5, #0 @ 02000898
    beq .L_02000948 @ 0200089c
    ldr fp, [pc, #0x170] @ 020008a0
    mov r4, #0 @ 020008a4
    lsl r8, sb, #4 @ 020008a8
.L_020008ac:
    mov r0, #0x24 @ 020008ac
    add r5, r4, #0x10 @ 020008b0
    bl .L_0200b284 @ 020008b4
    cmp r5, r4 @ 020008b8
    bls .L_020008e8 @ 020008bc
    ldr r6, [pc, #0x154] @ 020008c0
.L_020008c4:
    mov r0, r4 @ 020008c4
    str r4, [r7, #0xc] @ 020008c8
    bl .L_020090e8 @ 020008cc
    mov r0, r4 @ 020008d0
    add r4, r4, #1 @ 020008d4
    mov lr, pc @ 020008d8
    ldr pc, [r6] @ 020008dc
    cmp r4, r5 @ 020008e0
    blo .L_020008c4 @ 020008e4
.L_020008e8:
    mov r0, r8 @ 020008e8
    mov lr, pc @ 020008ec
    ldr pc, [r7, #0x40] @ 020008f0
    ldr r3, [fp] @ 020008f4
    tst r3, #2 @ 020008f8
    bne .L_02000910 @ 020008fc
    ldr r3, [pc, #0x118] @ 02000900
    ldrb r2, [r3] @ 02000904
    cmp r2, #1 @ 02000908
    beq .L_02000920 @ 0200090c
.L_02000910:
    cmp sl, r5 @ 02000910
    bls .L_02000948 @ 02000914
.L_02000918:
    mov r4, r5 @ 02000918
    b .L_020008ac @ 0200091c
.L_02000920:
    ldr r3, [pc, #0xfc] @ 02000920
    ldrb r2, [r3] @ 02000924
    cmp r2, #0 @ 02000928
    bne .L_02000910 @ 0200092c
    ldr r2, [sp, #4] @ 02000930
    ldr r0, [pc, #0xec] @ 02000934
    lsl r1, r2, #4 @ 02000938
    bl .L_0200df50 @ 0200093c
    cmp sl, r5 @ 02000940
    bhi .L_02000918 @ 02000944
.L_02000948:
    mov r0, r5 @ 02000948
    str r5, [r7, #0xc] @ 0200094c
    bl .L_02009144 @ 02000950
    mov r0, #0 @ 02000954
    bl .L_0200b284 @ 02000958
    mov r3, #4 @ 0200095c
    mov r2, #8 @ 02000960
    str r3, [r7, #0x80] @ 02000964
    str r2, [r7, #0x7c] @ 02000968
    mov r0, #0x4a @ 0200096c
    mov lr, pc @ 02000970
    ldr pc, [r7, #0x40] @ 02000974
    mov r0, #6 @ 02000978
    bl .L_020004e0 @ 0200097c
    mov r1, #1 @ 02000980
    mov r2, r1 @ 02000984
    ldr r0, [pc, #0x98] @ 02000988
    bl .L_02004ef4 @ 0200098c
    mov r3, #0 @ 02000990
    str r3, [r7, #0x80] @ 02000994
    sub r0, sb, #0x4a @ 02000998
    mov lr, pc @ 0200099c
    ldr pc, [r7, #0x40] @ 020009a0
    ldr r2, [sp] @ 020009a4
    rsb r3, r5, r2 @ 020009a8
    sub r4, r3, #1 @ 020009ac
    mul r0, r4, sb @ 020009b0
    mov lr, pc @ 020009b4
    ldr pc, [r7, #0x40] @ 020009b8
    ldr r3, [fp] @ 020009bc
    tst r3, #2 @ 020009c0
    bne .L_020009d8 @ 020009c4
    ldr r3, [pc, #0x50] @ 020009c8
    ldrb r2, [r3] @ 020009cc
    cmp r2, #1 @ 020009d0
    beq .L_020009f0 @ 020009d4
.L_020009d8:
    bl .L_020061a8 @ 020009d8
    ldr r3, [r7, #8] @ 020009dc
    add r3, r3, #1 @ 020009e0
    str r3, [r7, #8] @ 020009e4
    add sp, sp, #0xc @ 020009e8
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 020009ec
.L_020009f0:
    ldr r3, [pc, #0x2c] @ 020009f0
    ldrb r2, [r3] @ 020009f4
    cmp r2, #0 @ 020009f8
    bne .L_020009d8 @ 020009fc
    ldr r1, [sp, #4] @ 02000a00
    ldr r0, [pc, #0x1c] @ 02000a04
    mul r1, r4, r1 @ 02000a08
    bl .L_0200df50 @ 02000a0c
    b .L_020009d8 @ 02000a10
    .byte 0x00, 0x00, 0x00, 0x0b, 0x10, 0xb6, 0x3c, 0x02, 0xa8, 0xce, 0x3d, 0x02, 0x01, 0x90, 0x09, 0x02 @ 02000a14
    .byte 0x00, 0x90, 0x09, 0x02, 0x58, 0x01, 0x00, 0x0b @ 02000a24
@ FUN_02000a2c at 0x02000a2c
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 02000a2c
    ldr r5, [pc, #0x178] @ 02000a30
    bl .L_0200b438 @ 02000a34
    mov r0, #0 @ 02000a38
    mov r4, r0 @ 02000a3c
    ldr r7, [r5, #0x10] @ 02000a40
    ldr r6, [r5, #4] @ 02000a44
    ldr sl, [r5] @ 02000a48
    bl .L_020090e8 @ 02000a4c
    mov r3, #4 @ 02000a50
    mov r0, #0x22 @ 02000a54
    str r3, [r5, #0x80] @ 02000a58
    ldr r8, [pc, #0x150] @ 02000a5c
    bl .L_02000568 @ 02000a60
    mov r0, r4 @ 02000a64
    str r4, [r5, #0x80] @ 02000a68
    mov lr, pc @ 02000a6c
    ldr pc, [r8] @ 02000a70
    mov r0, r7 @ 02000a74
    bl .L_02000538 @ 02000a78
    mov r0, r4 @ 02000a7c
    bl .L_020006b8 @ 02000a80
    mov r2, r4 @ 02000a84
    ldr r0, [pc, #0x128] @ 02000a88
    mov r1, #1 @ 02000a8c
    bl .L_02004ef4 @ 02000a90
    cmp r6, #1 @ 02000a94
    addls r4, r4, #1 @ 02000a98
    movls sb, #2 @ 02000a9c
    bls .L_02000af8 @ 02000aa0
    mov r4, #1 @ 02000aa4
.L_02000aa8:
    mov r0, r4 @ 02000aa8
    bl .L_020090e8 @ 02000aac
    mov r3, #4 @ 02000ab0
    mov r0, #0x22 @ 02000ab4
    str r3, [r5, #0x80] @ 02000ab8
    bl .L_02000568 @ 02000abc
    mov r3, #0 @ 02000ac0
    str r3, [r5, #0x80] @ 02000ac4
    mov r0, r4 @ 02000ac8
    mov lr, pc @ 02000acc
    ldr pc, [r8] @ 02000ad0
    mov r0, r7 @ 02000ad4
    bl .L_02000538 @ 02000ad8
    mov r0, r4 @ 02000adc
    add r4, r4, #1 @ 02000ae0
    bl .L_020006b8 @ 02000ae4
    cmp r6, r4 @ 02000ae8
    bne .L_02000aa8 @ 02000aec
    mov r4, r6 @ 02000af0
    add sb, r6, #1 @ 02000af4
.L_02000af8:
    mov r0, r4 @ 02000af8
    bl .L_02009144 @ 02000afc
    mov r8, #4 @ 02000b00
    mov r3, #8 @ 02000b04
    mov r0, #0x4a @ 02000b08
    str r3, [r5, #0x7c] @ 02000b0c
    str r8, [r5, #0x80] @ 02000b10
    bl .L_02000538 @ 02000b14
    mov r1, #1 @ 02000b18
    mov r2, r1 @ 02000b1c
    ldr r0, [pc, #0x90] @ 02000b20
    bl .L_02004ef4 @ 02000b24
    mov r6, #0 @ 02000b28
    mov r0, r7 @ 02000b2c
    str r6, [r5, #0x80] @ 02000b30
    bl .L_02000538 @ 02000b34
    mov r0, r4 @ 02000b38
    bl .L_020006b8 @ 02000b3c
    cmp sl, sb @ 02000b40
    bls .L_02000b98 @ 02000b44
    mov r4, sb @ 02000b48
    rsb sl, sb, sl @ 02000b4c
.L_02000b50:
    mov r0, r4 @ 02000b50
    bl .L_020091ec @ 02000b54
    mov r0, #0x22 @ 02000b58
    str r8, [r5, #0x80] @ 02000b5c
    bl .L_02000568 @ 02000b60
    mov r0, r7 @ 02000b64
    str r6, [r5, #0x80] @ 02000b68
    bl .L_02000538 @ 02000b6c
    mov r0, r4 @ 02000b70
    bl .L_020006b8 @ 02000b74
    mov r0, #0x26 @ 02000b78
    str r8, [r5, #0x80] @ 02000b7c
    add r4, r4, #1 @ 02000b80
    bl .L_02000538 @ 02000b84
    add r3, sl, sb @ 02000b88
    cmp r3, r4 @ 02000b8c
    str r6, [r5, #0x80] @ 02000b90
    bne .L_02000b50 @ 02000b94
.L_02000b98:
    bl .L_02000588 @ 02000b98
    bl .L_020061a8 @ 02000b9c
    ldr r3, [r5, #8] @ 02000ba0
    add r3, r3, #1 @ 02000ba4
    str r3, [r5, #8] @ 02000ba8
    pop {r4, r5, r6, r7, r8, sb, sl, pc} @ 02000bac
    .byte 0x00, 0x00, 0x00, 0x0b, 0xa8, 0xce, 0x3d, 0x02, 0x58, 0x01, 0x00, 0x0b, 0x28, 0x30, 0x9f, 0xe5 @ 02000bb0
    .byte 0x00, 0x20, 0xd3, 0xe5, 0x00, 0x00, 0x52, 0xe3, 0x03, 0x00, 0x00, 0x1a, 0x1c, 0x20, 0x9f, 0xe5 @ 02000bc0
    .byte 0x1c, 0x30, 0x9f, 0xe5, 0x40, 0x20, 0x83, 0xe5, 0x22, 0xff, 0xff, 0xea, 0x14, 0x20, 0x9f, 0xe5 @ 02000bd0
    .byte 0x0c, 0x30, 0x9f, 0xe5, 0x40, 0x20, 0x83, 0xe5, 0x8f, 0xff, 0xff, 0xea, 0x44, 0x36, 0x00, 0x0b @ 02000be0
    .byte 0x58, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0b, 0x68, 0x05, 0x00, 0x02 @ 02000bf0
.L_02000bfc:
@ FUN_02000bfc at 0x02000bfc
    ldr r0, [pc] @ 02000bfc
    b .L_02004dcc @ 02000c00
    .byte 0x58, 0x01, 0x00, 0x0b @ 02000c04
.L_02000c08:
@ FUN_02000c08 at 0x02000c08
    push {r4, r5, lr} @ 02000c08
    ldr r4, [pc, #0xe4] @ 02000c0c
    ldr r3, [pc, #0xe4] @ 02000c10
    ldr r2, [r4, #0x20] @ 02000c14
    mov r1, #0 @ 02000c18
    cmp r2, #0 @ 02000c1c
    moveq r3, #0x138 @ 02000c20
    str r3, [r4] @ 02000c24
    ldr r3, [pc, #0xd0] @ 02000c28
    mov r2, #0xe0 @ 02000c2c
    sub sp, sp, #4 @ 02000c30
    ldr r0, [pc, #0xc8] @ 02000c34
    str r2, [r4, #4] @ 02000c38
    str r3, [r4, #0x14] @ 02000c3c
    add r2, r2, #3 @ 02000c40
    sub r3, r3, #0x4a @ 02000c44
    str r2, [r4, #0x18] @ 02000c48
    str r3, [r4, #0x10] @ 02000c4c
    str r1, [r4, #0xc] @ 02000c50
    str r1, [r4, #8] @ 02000c54
    str r1, [r4, #0x24] @ 02000c58
    str r1, [r4, #0xa8] @ 02000c5c
    bl .L_020054d4 @ 02000c60
    ldr r0, [pc, #0x9c] @ 02000c64
    bl .L_02004dcc @ 02000c68
    ldr r2, [pc, #0x98] @ 02000c6c
    mov r1, #1 @ 02000c70
    ldr r3, [r2] @ 02000c74
    ands r5, r3, r1 @ 02000c78
    beq .L_02000cdc @ 02000c7c
    ldr r0, [r4, #0x30] @ 02000c80
    bl .L_02003a50 @ 02000c84
    ldr r0, [r4, #0x34] @ 02000c88
    mov r1, #1 @ 02000c8c
    bl .L_02003a50 @ 02000c90
.L_02000c94:
    ldr r0, [r4, #0x30] @ 02000c94
    bl .L_020037b4 @ 02000c98
    ldr r0, [r4, #0x34] @ 02000c9c
    bl .L_020037b4 @ 02000ca0
    bl .L_02004bf0 @ 02000ca4
    bl .L_02004d94 @ 02000ca8
    bl .L_0200b6a8 @ 02000cac
    bl .L_020062c4 @ 02000cb0
    bl .L_020858a4 @ 02000cb4
    bl .L_020858a4 @ 02000cb8
    mov r0, #1 @ 02000cbc
    bl .L_02006308 @ 02000cc0
    bl .L_020858a4 @ 02000cc4
    bl .L_020858a4 @ 02000cc8
    bl .L_020063dc @ 02000ccc
    add sp, sp, #4 @ 02000cd0
    pop {r4, r5, lr} @ 02000cd4
    b .L_02009570 @ 02000cd8
.L_02000cdc:
    ldr r0, [r4, #0x30] @ 02000cdc
    mov r1, r5 @ 02000ce0
    bl .L_02003a50 @ 02000ce4
    mov r1, r5 @ 02000ce8
    ldr r0, [r4, #0x34] @ 02000cec
    bl .L_02003a50 @ 02000cf0
    b .L_02000c94 @ 02000cf4
    .byte 0x00, 0x00, 0x00, 0x0b, 0x06, 0x01, 0x00, 0x00, 0xe7, 0x01, 0x00, 0x00, 0xac, 0x00, 0x00, 0x0b @ 02000cf8
    .byte 0x58, 0x01, 0x00, 0x0b, 0x10, 0xb6, 0x3c, 0x02 @ 02000d08
.L_02000d10:
@ FUN_02000d10 at 0x02000d10
    ldr r3, [pc, #0x74] @ 02000d10
    push {r4, lr} @ 02000d14
    ldr r4, [pc, #0x70] @ 02000d18
    mov r0, #0 @ 02000d1c
    str r3, [r4, #0x3c] @ 02000d20
    bl .L_020075bc @ 02000d24
    mov r0, #1 @ 02000d28
    bl .L_020075bc @ 02000d2c
    bl .L_02009570 @ 02000d30
    bl .L_02006a44 @ 02000d34
    ldr r2, [pc, #0x54] @ 02000d38
    ldr r3, [r2] @ 02000d3c
    lsr r3, r3, #0xc @ 02000d40
    and r3, r3, #3 @ 02000d44
    cmp r3, #1 @ 02000d48
    beq .L_02000d78 @ 02000d4c
    bhs .L_02000d68 @ 02000d50
    ldr r3, [pc, #0x3c] @ 02000d54
    ldr r2, [pc, #0x3c] @ 02000d58
    str r3, [r4, #0x40] @ 02000d5c
    str r2, [r4, #0x38] @ 02000d60
    pop {r4, pc} @ 02000d64
.L_02000d68:
    cmp r3, #2 @ 02000d68
    ldreq r3, [pc, #0x2c] @ 02000d6c
    streq r3, [r4, #0x38] @ 02000d70
    pop {r4, pc} @ 02000d74
.L_02000d78:
    ldr r3, [pc, #0x24] @ 02000d78
    ldr r2, [pc, #0x24] @ 02000d7c
    str r3, [r4, #0x40] @ 02000d80
    str r2, [r4, #0x38] @ 02000d84
    pop {r4, pc} @ 02000d88
    .byte 0x58, 0x6a, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0b, 0x10, 0xb6, 0x3c, 0x02, 0x58, 0x05, 0x00, 0x02 @ 02000d8c
    .byte 0x68, 0x08, 0x00, 0x02, 0xbc, 0x0b, 0x00, 0x02, 0x68, 0x05, 0x00, 0x02, 0x2c, 0x0a, 0x00, 0x02 @ 02000d9c
.L_02000dac:
@ FUN_02000dac at 0x02000dac
    push {r4, r5, r6, r7, r8, lr} @ 02000dac
    ldr ip, [pc, #0x12c] @ 02000db0
    sub sp, sp, #0x18 @ 02000db4
    str ip, [sp] @ 02000db8
    ldr lr, [pc, #0x124] @ 02000dbc
    ldr ip, [pc, #0x124] @ 02000dc0
    ldr r8, [pc, #0x124] @ 02000dc4
    ldr r6, [pc, #0x124] @ 02000dc8
    str lr, [sp, #4] @ 02000dcc
    str ip, [sp, #8] @ 02000dd0
    ldr lr, [pc, #0x11c] @ 02000dd4
    ldr ip, [pc, #0x11c] @ 02000dd8
    ldr r4, [pc, #0x11c] @ 02000ddc
    ldr r1, [pc, #0x11c] @ 02000de0
    ldr r2, [pc, #0x11c] @ 02000de4
    ldr r3, [pc, #0x11c] @ 02000de8
    mov r0, r8 @ 02000dec
    str lr, [sp, #0xc] @ 02000df0
    str ip, [sp, #0x10] @ 02000df4
    str r4, [sp, #0x14] @ 02000df8
    bl .L_02005780 @ 02000dfc
    mov r0, r6 @ 02000e00
    bl .L_020050a8 @ 02000e04
    bl .L_02004c18 @ 02000e08
    lsr r1, r0, #0x18 @ 02000e0c
    lsr r3, r0, #8 @ 02000e10
    lsr r2, r0, #0x10 @ 02000e14
    strb r3, [r6, #0x401] @ 02000e18
    strb r2, [r6, #0x402] @ 02000e1c
    strb r1, [r6, #0x403] @ 02000e20
    strb r0, [r6, #0x400] @ 02000e24
    bl .L_02003ca4 @ 02000e28
    lsr r1, r0, #0x18 @ 02000e2c
    lsr r3, r0, #8 @ 02000e30
    lsr r2, r0, #0x10 @ 02000e34
    strb r3, [r6, #0x4b1] @ 02000e38
    strb r2, [r6, #0x4b2] @ 02000e3c
    strb r1, [r6, #0x4b3] @ 02000e40
    strb r0, [r6, #0x4b0] @ 02000e44
    bl .L_02003cbc @ 02000e48
    ldr r3, [pc, #0xbc] @ 02000e4c
    ldr r7, [pc, #0xbc] @ 02000e50
    lsr r5, r3, #0x18 @ 02000e54
    lsr ip, r3, #8 @ 02000e58
    lsr lr, r3, #0x10 @ 02000e5c
    lsr r4, r0, #0x18 @ 02000e60
    lsr r2, r0, #8 @ 02000e64
    lsr r1, r0, #0x10 @ 02000e68
    strb r3, [r6, #0x4a8] @ 02000e6c
    strb r2, [r6, #0x4ad] @ 02000e70
    strb r1, [r6, #0x4ae] @ 02000e74
    strb ip, [r6, #0x4a9] @ 02000e78
    strb lr, [r6, #0x4aa] @ 02000e7c
    strb r0, [r6, #0x4ac] @ 02000e80
    strb r4, [r6, #0x4af] @ 02000e84
    strb r5, [r6, #0x4ab] @ 02000e88
    bl .L_02003af0 @ 02000e8c
    bl .L_02004bf0 @ 02000e90
    bl .L_02004d94 @ 02000e94
    ldr r3, [r7, #0x30] @ 02000e98
    cmp r3, #0 @ 02000e9c
    beq .L_02000ed8 @ 02000ea0
.L_02000ea4:
    ldr r3, [r7, #0x34] @ 02000ea4
    cmp r3, #0 @ 02000ea8
    beq .L_02000ecc @ 02000eac
.L_02000eb0:
    str r6, [r7, #0x2c] @ 02000eb0
    str r8, [r7, #0x28] @ 02000eb4
    bl .L_02000d10 @ 02000eb8
    mov r0, #1 @ 02000ebc
    add sp, sp, #0x18 @ 02000ec0
    pop {r4, r5, r6, r7, r8, lr} @ 02000ec4
    b .L_0200648c @ 02000ec8
.L_02000ecc:
    bl .L_02003ad4 @ 02000ecc
    str r0, [r7, #0x34] @ 02000ed0
    b .L_02000eb0 @ 02000ed4
.L_02000ed8:
    bl .L_02003ad4 @ 02000ed8
    str r0, [r7, #0x30] @ 02000edc
    b .L_02000ea4 @ 02000ee0
    .byte 0xf8, 0x3c, 0x00, 0x02, 0x24, 0x3d, 0x00, 0x02, 0x50, 0x3d, 0x00, 0x02, 0xac, 0x00, 0x00, 0x0b @ 02000ee4
    .byte 0x58, 0x01, 0x00, 0x0b, 0x98, 0x3d, 0x00, 0x02, 0x14, 0x92, 0x00, 0x02, 0x88, 0x3c, 0x00, 0x02 @ 02000ef4
    .byte 0x34, 0x3b, 0x00, 0x02, 0x60, 0x3b, 0x00, 0x02, 0x8c, 0x3b, 0x00, 0x02, 0x78, 0xb7, 0x3d, 0x02 @ 02000f04
    .byte 0x00, 0x00, 0x00, 0x0b, 0x1e, 0xff, 0x2f, 0xe1 @ 02000f14
    mov r2, #0x4000000 @ 02000f1c
    ldrh r3, [r2, #6] @ 02000f20
    lsl r3, r3, #0x17 @ 02000f24
    lsr r3, r3, #0x17 @ 02000f28
    cmp r3, #0xbf @ 02000f2c
    mov r0, r3 @ 02000f30
    bxhi lr @ 02000f34
    b .L_020083ec @ 02000f38
@ FUN_02000f3c at 0x02000f3c
    push {r4, lr} @ 02000f3c
    ldr r4, [pc, #0x8c] @ 02000f40
    mov r0, #0 @ 02000f44
    ldr r3, [r4] @ 02000f48
    cmp r3, #1 @ 02000f4c
    beq .L_02000fb4 @ 02000f50
    cmp r3, #2 @ 02000f54
    mov r0, r3 @ 02000f58
    beq .L_02000fc4 @ 02000f5c
    cmp r3, #0 @ 02000f60
    mov r0, #2 @ 02000f64
    beq .L_02000fa4 @ 02000f68
.L_02000f6c:
    ldr r0, [r4] @ 02000f6c
    mov ip, #0x4000000 @ 02000f70
    ldr r1, [pc, #0x5c] @ 02000f74
    ldrh r3, [ip, #4] @ 02000f78
    lsl r0, r0, #1 @ 02000f7c
    ldrh r2, [r0, r1] @ 02000f80
    and r3, r3, #0x7f @ 02000f84
    orr r3, r3, r2, lsl #8 @ 02000f88
    and r2, r2, #0x100 @ 02000f8c
    orr r3, r3, r2, lsr #1 @ 02000f90
    lsl r3, r3, #0x10 @ 02000f94
    lsr r3, r3, #0x10 @ 02000f98
    strh r3, [ip, #4] @ 02000f9c
    pop {r4, pc} @ 02000fa0
.L_02000fa4:
    bl .L_020858b0 @ 02000fa4
    mov r3, #1 @ 02000fa8
    str r3, [r4] @ 02000fac
    b .L_02000f6c @ 02000fb0
.L_02000fb4:
    bl .L_020083ec @ 02000fb4
    mov r3, #2 @ 02000fb8
    str r3, [r4] @ 02000fbc
    b .L_02000f6c @ 02000fc0
.L_02000fc4:
    bl .L_020858bc @ 02000fc4
    mov r3, #0 @ 02000fc8
    str r3, [r4] @ 02000fcc
    b .L_02000f6c @ 02000fd0
    .byte 0xe8, 0x4c, 0x0b, 0x02, 0x08, 0x5a, 0x08, 0x02 @ 02000fd4
    ldr r3, [pc, #0x70] @ 02000fdc
    push {r4, r5, r6, lr} @ 02000fe0
    ldr r4, [r3] @ 02000fe4
    ldr r5, [pc, #0x68] @ 02000fe8
    cmp r4, #0 @ 02000fec
    ldr r6, [pc, #0x64] @ 02000ff0
    popne {r4, r5, r6, pc} @ 02000ff4
    ldr r3, [r6] @ 02000ff8
    ldr r2, [r5] @ 02000ffc
    add r3, r3, #1 @ 02001000
    add r2, r2, #1 @ 02001004
    str r3, [r6] @ 02001008
    str r2, [r5] @ 0200100c
    bl .L_02006228 @ 02001010
    bl .L_020090a0 @ 02001014
    ldr r3, [r5] @ 02001018
    ldr r1, [pc, #0x3c] @ 0200101c
    cmp r3, #0x3c @ 02001020
    popne {r4, r5, r6, pc} @ 02001024
    ldr r3, [r1] @ 02001028
    ldr r2, [pc, #0x30] @ 0200102c
    mov r0, r3 @ 02001030
    str r3, [r2] @ 02001034
    str r4, [r1] @ 02001038
    str r4, [r5] @ 0200103c
    bl .L_020023dc @ 02001040
    ldr r3, [pc, #0x1c] @ 02001044
    str r4, [r6] @ 02001048
    str r4, [r3] @ 0200104c
    pop {r4, r5, r6, pc} @ 02001050
    .byte 0xa8, 0x8f, 0x09, 0x02, 0xb8, 0x8f, 0x09, 0x02, 0xa4, 0x8f, 0x09, 0x02, 0xbc, 0x8f, 0x09, 0x02 @ 02001054
    .byte 0xc0, 0x8f, 0x09, 0x02, 0xa0, 0x8f, 0x09, 0x02 @ 02001064
.L_0200106c:
@ FUN_0200106c at 0x0200106c
    push {r4, r5, lr} @ 0200106c
    ldr r5, [pc, #0x8c] @ 02001070
    sub sp, sp, #4 @ 02001074
    ldr r4, [r5] @ 02001078
    cmp r4, #0 @ 0200107c
    beq .L_020010ec @ 02001080
    cmp r4, #1 @ 02001084
    mov r0, r4 @ 02001088
    beq .L_020010f4 @ 0200108c
.L_02001090:
    mov r3, #2 @ 02001090
    mov r0, r3 @ 02001094
    mov r4, #0x4000000 @ 02001098
    ldr r1, [pc, #0x64] @ 0200109c
    str r3, [r5] @ 020010a0
    bl .L_020858c8 @ 020010a4
    ldrh r2, [r4, #4] @ 020010a8
    ldr r3, [pc, #0x58] @ 020010ac
    and r2, r2, #0x7f @ 020010b0
    orr r2, r2, #0xc000 @ 020010b4
    mov ip, #0 @ 020010b8
    str ip, [r3] @ 020010bc
    strh r2, [r4, #4] @ 020010c0
    mov r0, #4 @ 020010c4
    ldr r1, [pc, #0x40] @ 020010c8
    bl .L_020858c8 @ 020010cc
    mov r0, #1 @ 020010d0
    ldr r1, [pc, #0x38] @ 020010d4
    bl .L_020858c8 @ 020010d8
    mov r0, #7 @ 020010dc
    add sp, sp, #4 @ 020010e0
    pop {r4, r5, lr} @ 020010e4
    b .L_020858bc @ 020010e8
.L_020010ec:
    bl .L_020858d4 @ 020010ec
    b .L_02001090 @ 020010f0
.L_020010f4:
    bl .L_020858b0 @ 020010f4
    mov r0, r4 @ 020010f8
    bl .L_020858e0 @ 020010fc
    b .L_02001090 @ 02001100
    .byte 0xc4, 0x8f, 0x09, 0x02, 0x1c, 0x0f, 0x00, 0x02, 0xe8, 0x4c, 0x0b, 0x02, 0x3c, 0x0f, 0x00, 0x02 @ 02001104
    .byte 0xdc, 0x0f, 0x00, 0x02 @ 02001114
.L_02001118:
@ FUN_02001118 at 0x02001118
    push {r4, r5, lr} @ 02001118
    ldr r5, [pc, #0x54] @ 0200111c
    sub sp, sp, #4 @ 02001120
    ldr r4, [r5] @ 02001124
    cmp r4, #0 @ 02001128
    beq .L_02001160 @ 0200112c
    cmp r4, #2 @ 02001130
    mov r0, r4 @ 02001134
    beq .L_02001168 @ 02001138
.L_0200113c:
    mov r4, #1 @ 0200113c
    mov r0, r4 @ 02001140
    ldr r1, [pc, #0x30] @ 02001144
    str r4, [r5] @ 02001148
    bl .L_020858c8 @ 0200114c
    mov r0, r4 @ 02001150
    add sp, sp, #4 @ 02001154
    pop {r4, r5, lr} @ 02001158
    b .L_020858bc @ 0200115c
.L_02001160:
    bl .L_020858d4 @ 02001160
    b .L_0200113c @ 02001164
.L_02001168:
    bl .L_020858b0 @ 02001168
    mov r0, r4 @ 0200116c
    bl .L_020858e0 @ 02001170
    b .L_0200113c @ 02001174
    .byte 0xc4, 0x8f, 0x09, 0x02, 0x18, 0x0f, 0x00, 0x02 @ 02001178
@ FUN_02001180 at 0x02001180
    push {r4, r5, lr} @ 02001180
    add r0, r0, r0, lsl #1 @ 02001184
    lsls r5, r0, #1 @ 02001188
    sub sp, sp, #4 @ 0200118c
    beq .L_020011a8 @ 02001190
    mov r4, #0 @ 02001194
.L_02001198:
    add r4, r4, #1 @ 02001198
    bl .L_020858a4 @ 0200119c
    cmp r4, r5 @ 020011a0
    bne .L_02001198 @ 020011a4
.L_020011a8:
    add sp, sp, #4 @ 020011a8
    pop {r4, r5, pc} @ 020011ac
