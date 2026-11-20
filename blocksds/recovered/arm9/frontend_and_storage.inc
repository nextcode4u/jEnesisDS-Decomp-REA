.L_020011b0:
@ FUN_020011b0 at 0x020011b0
    str lr, [sp, #-4]! @ 020011b0
    sub sp, sp, #4 @ 020011b4
    bl .L_02001118 @ 020011b8
    ldr r2, [pc, #0x1c] @ 020011bc
    ldrh r3, [r2, #4] @ 020011c0
    orr r3, r3, #0x20c @ 020011c4
    orr r3, r3, #3 @ 020011c8
    strh r3, [r2, #4] @ 020011cc
    bl .L_02006d20 @ 020011d0
    add sp, sp, #4 @ 020011d4
    .word 0xe49de004 @ 020011d8 pop {lr}
    b .L_02006c38 @ 020011dc
    .byte 0x00, 0x03, 0x00, 0x04 @ 020011e0
@ arm9_main at 0x020011e4
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 020011e4
    sub sp, sp, #4 @ 020011e8
    bl .L_02002068 @ 020011ec
    bl .L_020011b0 @ 020011f0
    ldr r2, [pc, #0x2f0] @ 020011f4
.L_020011f8:
    ldrh r3, [r2, #0x80] @ 020011f8
    tst r3, #0xf @ 020011fc
    beq .L_020011f8 @ 02001200
    bl .L_020025a4 @ 02001204
    bl .L_020858a4 @ 02001208
    bl .L_020858a4 @ 0200120c
    ldr r1, [pc, #0x2d8] @ 02001210
    ldr r5, [pc, #0x2d8] @ 02001214
    ldrb r0, [r1] @ 02001218
    bl .L_020034b0 @ 0200121c
    cmp r0, #1 @ 02001220
    ldr r8, [pc, #0x2cc] @ 02001224
    ldr r4, [pc, #0x2cc] @ 02001228
    ldr r6, [pc, #0x2cc] @ 0200122c
    ldr fp, [pc, #0x2cc] @ 02001230
    ldr sb, [pc, #0x2cc] @ 02001234
    beq .L_02001438 @ 02001238
.L_0200123c:
    cmp r0, #2 @ 0200123c
    beq .L_020014cc @ 02001240
    ldr r0, [pc, #0x2c0] @ 02001244
    bl .L_020023e0 @ 02001248
    bl .L_020027d0 @ 0200124c
.L_02001250:
    bl .L_02000dac @ 02001250
    bl .L_02000c08 @ 02001254
    ldr r2, [pc, #0x2b0] @ 02001258
    mov r3, #0 @ 0200125c
    str r3, [r2] @ 02001260
    str r3, [r5] @ 02001264
    bl .L_0200106c @ 02001268
.L_0200126c:
    ldr r1, [pc, #0x27c] @ 0200126c
    mov r2, #1 @ 02001270
    mov r3, #0 @ 02001274
    str r2, [r1] @ 02001278
    str r3, [r8] @ 0200127c
    mov sl, r3 @ 02001280
    mov r7, r2 @ 02001284
.L_02001288:
    ldr r3, [r4] @ 02001288
    add r3, r3, #1 @ 0200128c
    cmp r3, #8 @ 02001290
    str r3, [r4] @ 02001294
    bne .L_020013bc @ 02001298
    ldr r3, [pc, #0x270] @ 0200129c
    ldr r2, [r3] @ 020012a0
    ldrb r3, [r2, #0x261] @ 020012a4
    cmp r3, #0 @ 020012a8
    beq .L_020012dc @ 020012ac
    ldrb r3, [r2, #0x263] @ 020012b0
    cmp r3, #0 @ 020012b4
    beq .L_020012dc @ 020012b8
    ldr r1, [pc, #0x254] @ 020012bc
    ldr r2, [r6, #8] @ 020012c0
    ldr r3, [r1] @ 020012c4
    rsb r3, r3, r2 @ 020012c8
    cmp r3, #0x78 @ 020012cc
    bhi .L_020014dc @ 020012d0
.L_020012d4:
    ldr r3, [pc, #0x23c] @ 020012d4
    str r2, [r3] @ 020012d8
.L_020012dc:
    str sl, [r4] @ 020012dc
    bl .L_020025a8 @ 020012e0
    sub r0, r0, #1 @ 020012e4
    cmp r0, #9 @ 020012e8
    ldrls pc, [pc, r0, lsl #2] @ 020012ec
    b .L_02001444 @ 020012f0
    .byte 0x1c, 0x13, 0x00, 0x02, 0xa4, 0x13, 0x00, 0x02, 0x54, 0x12, 0x00, 0x02, 0x44, 0x14, 0x00, 0x02 @ 020012f4
    .byte 0x44, 0x14, 0x00, 0x02, 0x0c, 0x14, 0x00, 0x02, 0x44, 0x14, 0x00, 0x02, 0x54, 0x14, 0x00, 0x02 @ 02001304
    .byte 0xa0, 0x14, 0x00, 0x02, 0x7c, 0x14, 0x00, 0x02 @ 02001314
    bl .L_020858a4 @ 0200131c
    bl .L_020025a4 @ 02001320
    bl .L_020027d0 @ 02001324
    ldr r2, [pc, #0x1ec] @ 02001328
    ldr r0, [r2] @ 0200132c
    bl .L_020023dc @ 02001330
    mov r1, #0xe @ 02001334
    mov r2, #0xa @ 02001338
    ldr r0, [pc, #0x1dc] @ 0200133c
    bl .L_0200da3c @ 02001340
    mov r0, #0x10 @ 02001344
    bl .L_0200d9ec @ 02001348
    ldr r0, [pc, #0x1d0] @ 0200134c
    mov r1, #0x10 @ 02001350
    mov r2, #5 @ 02001354
    bl .L_0200da3c @ 02001358
    ldr r0, [pc, #0x1c4] @ 0200135c
    mov r1, #0x11 @ 02001360
    mov r2, #5 @ 02001364
    bl .L_0200da3c @ 02001368
    ldr r0, [pc, #0x1b8] @ 0200136c
    mov r1, #0x13 @ 02001370
    mov r2, #2 @ 02001374
    bl .L_0200da3c @ 02001378
    str r7, [r8] @ 0200137c
.L_02001380:
    bl .L_02002150 @ 02001380
    bl .L_020858a4 @ 02001384
    mov r0, #1 @ 02001388
    bl .L_020062f0 @ 0200138c
    bl .L_020858a4 @ 02001390
    bl .L_020858a4 @ 02001394
    mov lr, pc @ 02001398
    ldr pc, [r6, #0x3c] @ 0200139c
    b .L_020012dc @ 020013a0
    bl .L_0200d8c4 @ 020013a4
    bl .L_020025a4 @ 020013a8
    bl .L_020027d0 @ 020013ac
    mov r0, #0 @ 020013b0
    bl .L_020062f0 @ 020013b4
    str sl, [r8] @ 020013b8
.L_020013bc:
    mov lr, pc @ 020013bc
    ldr pc, [r6, #0x38] @ 020013c0
    bl .L_020021cc @ 020013c4
    ldr r3, [fp] @ 020013c8
    tst r3, #0x40 @ 020013cc
    beq .L_020013e8 @ 020013d0
    ldr r1, [pc, #0x134] @ 020013d4
    ldr r2, [r5] @ 020013d8
    ldr r3, [r1] @ 020013dc
    cmp r2, r3 @ 020013e0
    bhi .L_020014c4 @ 020013e4
.L_020013e8:
    mov lr, pc @ 020013e8
    ldr pc, [r6, #0x3c] @ 020013ec
    ldr r3, [sb] @ 020013f0
    ldr r2, [r5] @ 020013f4
    add r3, r3, #1 @ 020013f8
    add r2, r2, #1 @ 020013fc
    str r3, [sb] @ 02001400
    str r2, [r5] @ 02001404
    b .L_02001288 @ 02001408
    mov r0, r7 @ 0200140c
    str r7, [r8] @ 02001410
    bl .L_020062f0 @ 02001414
    bl .L_020025a4 @ 02001418
    bl .L_020858a4 @ 0200141c
    bl .L_020858a4 @ 02001420
    ldr r1, [pc, #0xc4] @ 02001424
    ldrb r0, [r1] @ 02001428
    bl .L_020034b0 @ 0200142c
    cmp r0, #1 @ 02001430
    bne .L_0200123c @ 02001434
.L_02001438:
    bl .L_0200d8c4 @ 02001438
    bl .L_020027d0 @ 0200143c
    b .L_02001250 @ 02001440
.L_02001444:
    ldr r3, [r8] @ 02001444
    cmp r3, #0 @ 02001448
    bne .L_02001380 @ 0200144c
    b .L_020013bc @ 02001450
    mov r0, r7 @ 02001454
    str r7, [r8] @ 02001458
    bl .L_020062f0 @ 0200145c
    ldr r3, [pc, #0x88] @ 02001460
    ldrb r0, [r3] @ 02001464
    bl .L_02002c68 @ 02001468
    mov r0, #0 @ 0200146c
    bl .L_020062f0 @ 02001470
    str sl, [r8] @ 02001474
    b .L_020013bc @ 02001478
    mov r0, r7 @ 0200147c
    str r7, [r8] @ 02001480
    bl .L_020062f0 @ 02001484
    mov r0, #2 @ 02001488
    bl .L_02002e54 @ 0200148c
    mov r0, #0 @ 02001490
    bl .L_020062f0 @ 02001494
    str sl, [r8] @ 02001498
    b .L_020013bc @ 0200149c
    mov r0, r7 @ 020014a0
    str r7, [r8] @ 020014a4
    bl .L_020062f0 @ 020014a8
    mov r0, r7 @ 020014ac
    bl .L_02002e54 @ 020014b0
    mov r0, #0 @ 020014b4
    bl .L_020062f0 @ 020014b8
    str sl, [r8] @ 020014bc
    b .L_020013bc @ 020014c0
.L_020014c4:
    bl .L_020858a4 @ 020014c4
    b .L_020013e8 @ 020014c8
.L_020014cc:
    bl .L_020027d0 @ 020014cc
    mov r0, #0 @ 020014d0
    bl .L_020062f0 @ 020014d4
    b .L_0200126c @ 020014d8
.L_020014dc:
    bl .L_0200163c @ 020014dc
    ldr r3, [pc, #0x18] @ 020014e0
    ldr r2, [r3, #8] @ 020014e4
    b .L_020012d4 @ 020014e8
    .byte 0x00, 0x01, 0x00, 0x04, 0xb0, 0x8f, 0x09, 0x02, 0xa0, 0x8f, 0x09, 0x02, 0xa8, 0x8f, 0x09, 0x02 @ 020014ec
    .byte 0xac, 0x8f, 0x09, 0x02, 0x00, 0x00, 0x00, 0x0b, 0x10, 0xb6, 0x3c, 0x02, 0xbc, 0x8f, 0x09, 0x02 @ 020014fc
    .byte 0xe4, 0xef, 0x08, 0x02, 0xa4, 0x8f, 0x09, 0x02, 0xc8, 0x8f, 0x09, 0x02, 0xb4, 0x8f, 0x09, 0x02 @ 0200150c
    .byte 0xc0, 0x8f, 0x09, 0x02, 0x14, 0xf0, 0x08, 0x02, 0x24, 0xf0, 0x08, 0x02, 0x3c, 0xf0, 0x08, 0x02 @ 0200151c
    .byte 0x50, 0xf0, 0x08, 0x02 @ 0200152c
.L_02001530:
@ FUN_02001530 at 0x02001530
    cmp r1, #0x200 @ 02001530
    mov ip, r0 @ 02001534
    movls r0, #0 @ 02001538
    bxls lr @ 0200153c
    mov r2, #0x200 @ 02001540
    mov r0, #0 @ 02001544
    mov r3, r2 @ 02001548
.L_0200154c:
    tst r2, #1 @ 0200154c
    ldrbeq r3, [ip, r3] @ 02001550
    ldrbne r3, [r3, ip] @ 02001554
    add r2, r2, #1 @ 02001558
    addeq r0, r0, r3, lsl #8 @ 0200155c
    addne r0, r0, r3 @ 02001560
    cmp r2, r1 @ 02001564
    mov r3, r2 @ 02001568
    bne .L_0200154c @ 0200156c
    lsl r0, r0, #0x10 @ 02001570
    lsr r0, r0, #0x10 @ 02001574
    bx lr @ 02001578
.L_0200157c:
@ FUN_0200157c at 0x0200157c
    cmp r0, #0 @ 0200157c
    cmpne r1, #1 @ 02001580
    movls ip, #0 @ 02001584
    bls .L_020015b8 @ 02001588
    bics ip, r1, #1 @ 0200158c
    beq .L_020015b8 @ 02001590
    mov r1, r0 @ 02001594
.L_02001598:
    ldrb r3, [r1] @ 02001598
    ldrb r2, [r1, #1] @ 0200159c
    strb r3, [r1, #1] @ 020015a0
    strb r2, [r1] @ 020015a4
    add r1, r1, #2 @ 020015a8
    rsb r3, r0, r1 @ 020015ac
    cmp ip, r3 @ 020015b0
    bhi .L_02001598 @ 020015b4
.L_020015b8:
    mov r0, ip @ 020015b8
    bx lr @ 020015bc
    .byte 0x68, 0x30, 0x9f, 0xe5, 0x04, 0xe0, 0x2d, 0xe5, 0x00, 0xc0, 0x93, 0xe5, 0x5c, 0x22, 0x9c, 0xe5 @ 020015c0
    .byte 0x00, 0x00, 0x52, 0xe3, 0x04, 0xf0, 0x9d, 0x04, 0x64, 0x22, 0xdc, 0xe5, 0x00, 0x00, 0x52, 0xe1 @ 020015d0
    .byte 0x04, 0xf0, 0x9d, 0x04, 0x48, 0x32, 0x9c, 0xe5, 0x4c, 0x12, 0x9c, 0xe5, 0xa3, 0xe0, 0xb0, 0xe1 @ 020015e0
    .byte 0x3c, 0x30, 0x9f, 0xe5, 0x01, 0x20, 0x22, 0xe2, 0x64, 0x22, 0xcc, 0xe5, 0x03, 0x10, 0x81, 0xe0 @ 020015f0
    .byte 0x04, 0xf0, 0x9d, 0x04, 0x2c, 0x00, 0x9f, 0xe5, 0x0e, 0xc0, 0xa0, 0xe1, 0x00, 0x20, 0xa0, 0xe3 @ 02001600
    .byte 0xb0, 0x30, 0xd1, 0xe1, 0xb0, 0xe0, 0xd0, 0xe1, 0x01, 0x20, 0x82, 0xe2, 0x02, 0x00, 0x5c, 0xe1 @ 02001610
    .byte 0xb2, 0xe0, 0xc1, 0xe0, 0xb2, 0x30, 0xc0, 0xe0, 0xf8, 0xff, 0xff, 0x8a, 0x04, 0xf0, 0x9d, 0xe4 @ 02001620
    .byte 0xc8, 0x8f, 0x09, 0x02, 0xec, 0x4c, 0x0b, 0x02, 0xf0, 0xb4, 0x3b, 0x02 @ 02001630
.L_0200163c:
@ FUN_0200163c at 0x0200163c
    push {r4, r5, r6, r7, lr} @ 0200163c
    ldr r7, [pc, #0x7c] @ 02001640
    ldr r1, [pc, #0x7c] @ 02001644
    ldr r0, [r7] @ 02001648
    sub sp, sp, #4 @ 0200164c
    ldrb r3, [r0, #0x264] @ 02001650
    ldr r4, [r0, #0x248] @ 02001654
    cmp r3, #0 @ 02001658
    ldrne r2, [r0, #0x24c] @ 0200165c
    ldrne r3, [pc, #0x64] @ 02001660
    add r0, r0, #0x100 @ 02001664
    ldr r6, [pc, #0x60] @ 02001668
    addne r6, r2, r3 @ 0200166c
    bl .L_02081588 @ 02001670
    subs r5, r0, #0 @ 02001674
    mov r1, r4 @ 02001678
    mov r0, r6 @ 0200167c
    beq .L_020016b0 @ 02001680
    bl .L_0200157c @ 02001684
    mov r2, r4 @ 02001688
    mov r3, r5 @ 0200168c
    mov r1, #1 @ 02001690
    mov r0, r6 @ 02001694
    bl .L_020822e0 @ 02001698
    mov r0, r6 @ 0200169c
    mov r1, r4 @ 020016a0
    bl .L_0200157c @ 020016a4
    mov r0, r5 @ 020016a8
    bl .L_02081020 @ 020016ac
.L_020016b0:
    ldr r2, [r7] @ 020016b0
    mov r3, #0 @ 020016b4
    strb r3, [r2, #0x263] @ 020016b8
    add sp, sp, #4 @ 020016bc
    pop {r4, r5, r6, r7, pc} @ 020016c0
    .byte 0xc8, 0x8f, 0x09, 0x02, 0x70, 0xf0, 0x08, 0x02, 0xec, 0x4c, 0x0b, 0x02, 0xf0, 0xb4, 0x3b, 0x02 @ 020016c4
.L_020016d4:
@ FUN_020016d4 at 0x020016d4
    push {r4, r5, r6, lr} @ 020016d4
    subs r4, r0, #0 @ 020016d8
    moveq r0, r4 @ 020016dc
    popeq {r4, r5, r6, pc} @ 020016e0
    ldr r5, [pc, #0x250] @ 020016e4
    mov r1, #0 @ 020016e8
    ldr r0, [r5] @ 020016ec
    mov r2, #0x20 @ 020016f0
    add r0, r0, #0x200 @ 020016f4
    bl .L_02083058 @ 020016f8
    ldr r0, [r5] @ 020016fc
    mov r1, #0 @ 02001700
    mov r2, #0x20 @ 02001704
    add r0, r0, #0x220 @ 02001708
    bl .L_02083058 @ 0200170c
    mov r3, #0 @ 02001710
    ldr r2, [r5] @ 02001714
    mov ip, r3 @ 02001718
    mov r1, #0x120 @ 0200171c
    mov r0, r3 @ 02001720
    strb r3, [r2, #0x262] @ 02001724
    str r3, [r2, #0x240] @ 02001728
    str r3, [r2, #0x244] @ 0200172c
    str r3, [r2, #0x24c] @ 02001730
    str r3, [r2, #0x250] @ 02001734
    str r3, [r2, #0x248] @ 02001738
    strb r3, [r2, #0x261] @ 0200173c
    str r3, [r2, #0x25c] @ 02001740
    b .L_02001760 @ 02001744
.L_02001748:
    ldr r3, [r5] @ 02001748
    cmp r1, #0x150 @ 0200174c
    add r3, r0, r3 @ 02001750
    strb r2, [r3, #0x200] @ 02001754
    add r0, r0, #1 @ 02001758
    beq .L_02001784 @ 0200175c
.L_02001760:
    ldrb r2, [r1, r4] @ 02001760
    cmp ip, #0x20 @ 02001764
    add r1, r1, #1 @ 02001768
    mov ip, r2 @ 0200176c
    bne .L_02001748 @ 02001770
    cmp r2, #0x20 @ 02001774
    bne .L_02001748 @ 02001778
    cmp r1, #0x150 @ 0200177c
    bne .L_02001760 @ 02001780
.L_02001784:
    mov ip, #0 @ 02001784
    mov r0, ip @ 02001788
    b .L_020017a8 @ 0200178c
.L_02001790:
    ldr r3, [r5] @ 02001790
    cmp r1, #0x180 @ 02001794
    add r3, r0, r3 @ 02001798
    strb r2, [r3, #0x220] @ 0200179c
    add r0, r0, #1 @ 020017a0
    beq .L_020017cc @ 020017a4
.L_020017a8:
    ldrb r2, [r1, r4] @ 020017a8
    cmp ip, #0x20 @ 020017ac
    add r1, r1, #1 @ 020017b0
    mov ip, r2 @ 020017b4
    bne .L_02001790 @ 020017b8
    cmp r2, #0x20 @ 020017bc
    bne .L_02001790 @ 020017c0
    cmp r1, #0x180 @ 020017c4
    bne .L_020017a8 @ 020017c8
.L_020017cc:
    ldrb r3, [r4, #0x18e] @ 020017cc
    ldrb r2, [r4, #0x18f] @ 020017d0
    ldr r6, [r5] @ 020017d4
    orr r2, r2, r3, lsl #8 @ 020017d8
    str r2, [r6, #0x240] @ 020017dc
    ldrb r3, [r4, #0x1b0] @ 020017e0
    cmp r3, #0x52 @ 020017e4
    beq .L_02001824 @ 020017e8
.L_020017ec:
    ldr r2, [r5] @ 020017ec
    mov r3, #0 @ 020017f0
    mov r0, r3 @ 020017f4
    mov r1, r3 @ 020017f8
    strb r3, [r2, #0x262] @ 020017fc
    strb r3, [r2, #0x261] @ 02001800
.L_02001804:
    ldr r3, [r5] @ 02001804
    mov r2, #0 @ 02001808
    str r0, [r3, #0x250] @ 0200180c
    mov r0, #1 @ 02001810
    strb r2, [r3, #0x265] @ 02001814
    str r1, [r3, #0x24c] @ 02001818
    str r2, [r3, #0x248] @ 0200181c
    pop {r4, r5, r6, pc} @ 02001820
.L_02001824:
    ldrb r3, [r4, #0x1b1] @ 02001824
    cmp r3, #0x41 @ 02001828
    bne .L_020017ec @ 0200182c
    ldrb r3, [r4, #0x1b5] @ 02001830
    ldrb r2, [r4, #0x1b9] @ 02001834
    ldrb r0, [r4, #0x1b4] @ 02001838
    ldrb ip, [r4, #0x1b8] @ 0200183c
    ldrb r1, [r4, #0x1b7] @ 02001840
    lsl r3, r3, #0x10 @ 02001844
    lsl r2, r2, #0x10 @ 02001848
    ldrb lr, [r4, #0x1bb] @ 0200184c
    orr r3, r3, r0, lsl #24 @ 02001850
    orr r2, r2, ip, lsl #24 @ 02001854
    ldrb r0, [r4, #0x1b6] @ 02001858
    ldrb ip, [r4, #0x1ba] @ 0200185c
    orr r3, r3, r1 @ 02001860
    orr r2, r2, lr @ 02001864
    orr r1, r3, r0, lsl #8 @ 02001868
    orr r0, r2, ip, lsl #8 @ 0200186c
    cmp r1, r0 @ 02001870
    bhs .L_020018e4 @ 02001874
    tst r1, #1 @ 02001878
    subne r1, r1, #1 @ 0200187c
    tst r0, #1 @ 02001880
    addeq r0, r0, #1 @ 02001884
    rsb r3, r1, r0 @ 02001888
    add r3, r3, #1 @ 0200188c
    mov ip, #0 @ 02001890
    mov r2, #1 @ 02001894
    cmp r3, #0 @ 02001898
    str r0, [r6, #0x250] @ 0200189c
    str r1, [r6, #0x24c] @ 020018a0
    strb r2, [r6, #0x261] @ 020018a4
    strb ip, [r6, #0x262] @ 020018a8
    str r3, [r6, #0x248] @ 020018ac
    strb ip, [r6, #0x265] @ 020018b0
    moveq r0, r2 @ 020018b4
    popeq {r4, r5, r6, pc} @ 020018b8
    cmp r3, #0x10000 @ 020018bc
    movhs r0, r2 @ 020018c0
    strbhs ip, [r6, #0x262] @ 020018c4
    strbhs ip, [r6, #0x261] @ 020018c8
    pophs {r4, r5, r6, pc} @ 020018cc
.L_020018d0:
    mov r3, #1 @ 020018d0
    ldr r2, [r5] @ 020018d4
    mov r0, r3 @ 020018d8
    strb r3, [r2, #0x265] @ 020018dc
    pop {r4, r5, r6, pc} @ 020018e0
.L_020018e4:
    ldr r3, [pc, #0x54] @ 020018e4
    movne r2, #0 @ 020018e8
    moveq r2, #1 @ 020018ec
    cmp r1, r3 @ 020018f0
    movne r3, #0 @ 020018f4
    andeq r3, r2, #1 @ 020018f8
    cmp r3, #0 @ 020018fc
    strbeq r3, [r6, #0x262] @ 02001900
    strbeq r3, [r6, #0x261] @ 02001904
    beq .L_02001804 @ 02001908
    mov r3, #0 @ 0200190c
    strb r3, [r6, #0x265] @ 02001910
    add r3, r3, #0x80 @ 02001914
    str r3, [r6, #0x248] @ 02001918
    ldr r3, [pc, #0x20] @ 0200191c
    mov r1, #1 @ 02001920
    mov r2, #0x200000 @ 02001924
    strb r1, [r6, #0x262] @ 02001928
    str r2, [r6, #0x24c] @ 0200192c
    str r3, [r6, #0x250] @ 02001930
    strb r1, [r6, #0x261] @ 02001934
    b .L_020018d0 @ 02001938
    .byte 0xc8, 0x8f, 0x09, 0x02, 0x01, 0x00, 0x20, 0x00, 0xff, 0x00, 0x20, 0x00 @ 0200193c
.L_02001948:
@ FUN_02001948 at 0x02001948
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 02001948
    mov r7, r1 @ 0200194c
    mov r5, r2 @ 02001950
    mov r8, r0 @ 02001954
    bl .L_02083a6c @ 02001958
    ldr r6, [pc, #0x18c] @ 0200195c
    ldr r3, [pc, #0x18c] @ 02001960
    ldr lr, [r6] @ 02001964
    mov r1, #0 @ 02001968
    ldr ip, [lr, #0x250] @ 0200196c
    mov sl, r0 @ 02001970
    cmp ip, r3 @ 02001974
    mov r2, #0x10000 @ 02001978
    ldr r0, [pc, #0x174] @ 0200197c
    mov r4, r1 @ 02001980
    strhi r1, [lr, #0x24c] @ 02001984
    strbhi r1, [lr, #0x261] @ 02001988
    strhi r1, [lr, #0x250] @ 0200198c
    bls .L_0200199c @ 02001990
.L_02001994:
    mov r0, #0 @ 02001994
    pop {r4, r5, r6, r7, r8, sb, sl, pc} @ 02001998
.L_0200199c:
    bl .L_02083058 @ 0200199c
    ldr lr, [r6] @ 020019a0
    ldr sb, [pc, #0x150] @ 020019a4
    ldr r3, [lr, #0x24c] @ 020019a8
    mov ip, #0 @ 020019ac
    mov r4, #1 @ 020019b0
    cmp r3, r5 @ 020019b4
    add r1, r3, sb @ 020019b8
    ldr r0, [pc, #0x134] @ 020019bc
    mov r2, r7 @ 020019c0
    str ip, [lr, #0x25c] @ 020019c4
    strb ip, [lr, #0x263] @ 020019c8
    strb r4, [lr, #0x264] @ 020019cc
    ldrhs sb, [pc, #0x124] @ 020019d0
    blo .L_02001a98 @ 020019d4
.L_020019d8:
    mov r1, r8 @ 020019d8
    add r0, lr, #0x100 @ 020019dc
    mov r2, #0x100 @ 020019e0
    bl .L_02083dbc @ 020019e4
    ldr r3, [r6] @ 020019e8
    mov r2, #0x2e @ 020019ec
    add r4, r3, #0x100 @ 020019f0
    add r1, r4, sl @ 020019f4
    mov r3, #0x6d @ 020019f8
    strb r3, [r1, #-1] @ 020019fc
    strb r2, [r1, #-4] @ 02001a00
    add r3, r3, #6 @ 02001a04
    add r2, r2, #0x44 @ 02001a08
    strb r2, [r1, #-2] @ 02001a0c
    strb r3, [r1, #-3] @ 02001a10
    mov r0, r4 @ 02001a14
    ldr r1, [pc, #0xe0] @ 02001a18
    bl .L_02081588 @ 02001a1c
    subs r5, r0, #0 @ 02001a20
    mov r1, #0 @ 02001a24
    mov r2, #2 @ 02001a28
    beq .L_02001aa8 @ 02001a2c
    bl .L_02081ff0 @ 02001a30
    mov r0, r5 @ 02001a34
    bl .L_0208212c @ 02001a38
    mov r1, #0 @ 02001a3c
    mov r2, r1 @ 02001a40
    mov r4, r0 @ 02001a44
    mov r0, r5 @ 02001a48
    bl .L_02081ff0 @ 02001a4c
    ldr r3, [r6] @ 02001a50
    cmp r7, r4 @ 02001a54
    movlo r4, r7 @ 02001a58
    ldr r0, [r3, #0x24c] @ 02001a5c
    mov r2, r4 @ 02001a60
    mov r3, r5 @ 02001a64
    add r0, r0, sb @ 02001a68
    mov r1, #1 @ 02001a6c
    bl .L_02081788 @ 02001a70
    ldr r3, [r6] @ 02001a74
    mov r1, r4 @ 02001a78
    ldr r0, [r3, #0x24c] @ 02001a7c
    add r0, r0, sb @ 02001a80
    bl .L_0200157c @ 02001a84
    mov r0, r5 @ 02001a88
    bl .L_02081020 @ 02001a8c
    mov r0, #0 @ 02001a90
    pop {r4, r5, r6, r7, r8, sb, sl, pc} @ 02001a94
.L_02001a98:
    str r4, [lr, #0x25c] @ 02001a98
    bl .L_02082ec0 @ 02001a9c
    ldr lr, [r6] @ 02001aa0
    b .L_020019d8 @ 02001aa4
.L_02001aa8:
    mov r0, r4 @ 02001aa8
    ldr r1, [pc, #0x50] @ 02001aac
    bl .L_02081588 @ 02001ab0
    mov r2, r7 @ 02001ab4
    mov r3, r0 @ 02001ab8
    mov r4, r0 @ 02001abc
    mov r1, #1 @ 02001ac0
    ldr r0, [pc, #0x2c] @ 02001ac4
    bl .L_020822e0 @ 02001ac8
    mov r0, r4 @ 02001acc
    bl .L_02081020 @ 02001ad0
    ldr r3, [r6] @ 02001ad4
    mov r1, r5 @ 02001ad8
    ldr r0, [r3, #0x24c] @ 02001adc
    mov r2, r7 @ 02001ae0
    add r0, r0, sb @ 02001ae4
    bl .L_02083058 @ 02001ae8
    b .L_02001994 @ 02001aec
    .byte 0xc8, 0x8f, 0x09, 0x02, 0xff, 0x67, 0x30, 0x00, 0xf0, 0xb4, 0x3b, 0x02, 0xec, 0x4c, 0x0b, 0x02 @ 02001af0
    .byte 0x74, 0xf0, 0x08, 0x02, 0x70, 0xf0, 0x08, 0x02 @ 02001b00
.L_02001b08:
@ FUN_02001b08 at 0x02001b08
    push {r4, r5, r6, lr} @ 02001b08
    mov r3, #0 @ 02001b0c
    sub sp, sp, #8 @ 02001b10
    mov r2, r3 @ 02001b14
    add r6, sp, #8 @ 02001b18
    mov r1, #0x100 @ 02001b1c
    strb r3, [r6, #-1]! @ 02001b20
    mov r5, r0 @ 02001b24
    bl .L_02081ff0 @ 02001b28
    mov r1, #1 @ 02001b2c
    mov r3, r5 @ 02001b30
    mov r0, r6 @ 02001b34
    mov r2, r1 @ 02001b38
    bl .L_02081788 @ 02001b3c
    ldrb r3, [sp, #7] @ 02001b40
    cmp r3, #0x20 @ 02001b44
    bne .L_02001c44 @ 02001b48
    ldrh r3, [r5, #0xc] @ 02001b4c
    ands r3, r3, #0x20 @ 02001b50
    bne .L_02001c44 @ 02001b54
    mov r4, r3 @ 02001b58
    b .L_02001b6c @ 02001b5c
.L_02001b60:
    ldrh r3, [r5, #0xc] @ 02001b60
    tst r3, #0x20 @ 02001b64
    bne .L_02001b90 @ 02001b68
.L_02001b6c:
    mov r1, #1 @ 02001b6c
    mov r3, r5 @ 02001b70
    mov r0, r6 @ 02001b74
    mov r2, r1 @ 02001b78
    bl .L_02081788 @ 02001b7c
    ldrb r3, [sp, #7] @ 02001b80
    add r4, r4, #1 @ 02001b84
    cmp r3, #0x20 @ 02001b88
    beq .L_02001b60 @ 02001b8c
.L_02001b90:
    add r1, r4, #0x100 @ 02001b90
.L_02001b94:
    mov r2, #0 @ 02001b94
    mov r0, r5 @ 02001b98
    bl .L_02081ff0 @ 02001b9c
    mov r1, #1 @ 02001ba0
    mov r2, r1 @ 02001ba4
    mov r3, r5 @ 02001ba8
    mov r0, r6 @ 02001bac
    bl .L_02081788 @ 02001bb0
    ldrb ip, [sp, #7] @ 02001bb4
    mov r1, #1 @ 02001bb8
    mov r2, r1 @ 02001bbc
    mov r3, r5 @ 02001bc0
    mov r0, r6 @ 02001bc4
    cmp ip, #0x53 @ 02001bc8
    movne r4, #0 @ 02001bcc
    moveq r4, #1 @ 02001bd0
    bl .L_02081788 @ 02001bd4
    ldrb r3, [sp, #7] @ 02001bd8
    mov r1, #1 @ 02001bdc
    cmp r3, #0x45 @ 02001be0
    mov r2, r1 @ 02001be4
    mov r3, r5 @ 02001be8
    mov r0, r6 @ 02001bec
    addeq r4, r4, #1 @ 02001bf0
    bl .L_02081788 @ 02001bf4
    ldrb r3, [sp, #7] @ 02001bf8
    mov r1, #1 @ 02001bfc
    cmp r3, #0x47 @ 02001c00
    mov r2, r1 @ 02001c04
    mov r3, r5 @ 02001c08
    mov r0, r6 @ 02001c0c
    addeq r4, r4, #1 @ 02001c10
    bl .L_02081788 @ 02001c14
    ldrb r3, [sp, #7] @ 02001c18
    mov r1, #0 @ 02001c1c
    cmp r3, #0x41 @ 02001c20
    mov r0, r5 @ 02001c24
    mov r2, r1 @ 02001c28
    addeq r4, r4, #1 @ 02001c2c
    bl .L_02081ff0 @ 02001c30
    subs r0, r4, #4 @ 02001c34
    movne r0, #1 @ 02001c38
    add sp, sp, #8 @ 02001c3c
    pop {r4, r5, r6, pc} @ 02001c40
.L_02001c44:
    mov r1, #0x100 @ 02001c44
    b .L_02001b94 @ 02001c48
.L_02001c4c:
@ FUN_02001c4c at 0x02001c4c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02001c4c
    cmp r1, #0x200 @ 02001c50
    movhs r3, #0 @ 02001c54
    movlo r3, #1 @ 02001c58
    cmp r0, #0 @ 02001c5c
    movne r5, r3 @ 02001c60
    orreq r5, r3, #1 @ 02001c64
    cmp r5, #0 @ 02001c68
    sub sp, sp, #0xc @ 02001c6c
    mov r4, r1 @ 02001c70
    mov r7, r0 @ 02001c74
    beq .L_02001c84 @ 02001c78
    add sp, sp, #0xc @ 02001c7c
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02001c80
.L_02001c84:
    mov r0, #0x4000 @ 02001c84
    bl .L_02082724 @ 02001c88
    ldr sl, [pc, #0xa4] @ 02001c8c
    lsr r3, r4, #0xe @ 02001c90
    cmp r3, #0 @ 02001c94
    str r3, [sp, #4] @ 02001c98
    str r0, [sl] @ 02001c9c
    beq .L_02001d28 @ 02001ca0
    ldr r8, [pc, #0x90] @ 02001ca4
    mov fp, r5 @ 02001ca8
    mov sb, r7 @ 02001cac
    mov r6, #1 @ 02001cb0
.L_02001cb4:
    mov r1, sb @ 02001cb4
    ldr r0, [sl] @ 02001cb8
    mov r2, #0x4000 @ 02001cbc
    bl .L_02082ec0 @ 02001cc0
    mov r1, #0 @ 02001cc4
    b .L_02001cec @ 02001cc8
.L_02001ccc:
    cmp r4, r6 @ 02001ccc
    ldrhi r3, [sl] @ 02001cd0
    ldrbhi r2, [r1, r3] @ 02001cd4
    strbhi r2, [r7, r6] @ 02001cd8
    addhi r6, r6, #2 @ 02001cdc
    add r1, r1, #1 @ 02001ce0
    cmp r1, #0x4000 @ 02001ce4
    beq .L_02001d14 @ 02001ce8
.L_02001cec:
    cmp r1, r8 @ 02001cec
    bls .L_02001ccc @ 02001cf0
    cmp r4, r5 @ 02001cf4
    ldrhi r3, [sl] @ 02001cf8
    ldrbhi r2, [r3, r1] @ 02001cfc
    add r1, r1, #1 @ 02001d00
    strbhi r2, [r7, r5] @ 02001d04
    addhi r5, r5, #2 @ 02001d08
    cmp r1, #0x4000 @ 02001d0c
    bne .L_02001cec @ 02001d10
.L_02001d14:
    ldr r3, [sp, #4] @ 02001d14
    add fp, fp, #1 @ 02001d18
    cmp r3, fp @ 02001d1c
    add sb, sb, #0x4000 @ 02001d20
    bne .L_02001cb4 @ 02001d24
.L_02001d28:
    ldr r0, [sl] @ 02001d28
    add sp, sp, #0xc @ 02001d2c
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02001d30
    b .L_020826fc @ 02001d34
    .byte 0xec, 0xb4, 0x3b, 0x02, 0xff, 0x1f, 0x00, 0x00 @ 02001d38
.L_02001d40:
@ FUN_02001d40 at 0x02001d40
    push {r4, r5, r6, r7, r8, lr} @ 02001d40
    ldr r8, [pc, #0x30c] @ 02001d44
    ldr r7, [pc, #0x30c] @ 02001d48
    mov r4, r0 @ 02001d4c
    mov r5, r1 @ 02001d50
    ldr r0, [pc, #0x304] @ 02001d54
    mov r1, #0 @ 02001d58
    mov r2, r8 @ 02001d5c
    bl .L_02083058 @ 02001d60
    ldr r0, [r7] @ 02001d64
    cmp r0, #0 @ 02001d68
    beq .L_02001fb4 @ 02001d6c
.L_02001d70:
    mov r1, r5 @ 02001d70
    mov r2, #0x100 @ 02001d74
    bl .L_02083dbc @ 02001d78
    ldr r3, [r7] @ 02001d7c
    mov r5, #0 @ 02001d80
    cmp r4, #0 @ 02001d84
    str r5, [r3, #0x258] @ 02001d88
    beq .L_02001dcc @ 02001d8c
    mov r1, r5 @ 02001d90
    mov r2, #2 @ 02001d94
    mov r0, r4 @ 02001d98
    bl .L_02081ff0 @ 02001d9c
    mov r0, r4 @ 02001da0
    bl .L_0208212c @ 02001da4
    mov r1, r5 @ 02001da8
    mov r6, r0 @ 02001dac
    mov r2, r5 @ 02001db0
    mov r0, r4 @ 02001db4
    bl .L_02081ff0 @ 02001db8
    cmp r6, r8 @ 02001dbc
    bhi .L_02001e00 @ 02001dc0
    cmp r6, #0 @ 02001dc4
    bne .L_02001e1c @ 02001dc8
.L_02001dcc:
    mov r4, #0 @ 02001dcc
    mov r6, r4 @ 02001dd0
.L_02001dd4:
    ldr r2, [r7] @ 02001dd4
    ldr r3, [r2, #0x258] @ 02001dd8
    str r6, [r2, #0x244] @ 02001ddc
    orr r3, r3, #1 @ 02001de0
    str r3, [r2, #0x258] @ 02001de4
    bl .L_0200d82c @ 02001de8
    mov r1, r6 @ 02001dec
    ldr r0, [pc, #0x268] @ 02001df0
    bl .L_0200157c @ 02001df4
    mov r0, r4 @ 02001df8
    pop {r4, r5, r6, r7, r8, pc} @ 02001dfc
.L_02001e00:
    ldr r2, [r7] @ 02001e00
    mov r4, r5 @ 02001e04
    ldr r3, [r2, #0x258] @ 02001e08
    mov r0, r4 @ 02001e0c
    orr r3, r3, #6 @ 02001e10
    str r3, [r2, #0x258] @ 02001e14
    pop {r4, r5, r6, r7, r8, pc} @ 02001e18
.L_02001e1c:
    mov r0, r4 @ 02001e1c
    bl .L_02001b08 @ 02001e20
    subs r8, r0, #0 @ 02001e24
    beq .L_02001fc4 @ 02001e28
    sub r6, r6, #0x200 @ 02001e2c
    mov r2, r5 @ 02001e30
    mov r1, #0x200 @ 02001e34
    mov r0, r4 @ 02001e38
    bl .L_02081ff0 @ 02001e3c
    mov r3, r4 @ 02001e40
    mov r2, r6 @ 02001e44
    mov r1, #1 @ 02001e48
    ldr r0, [pc, #0x20c] @ 02001e4c
    bl .L_02081788 @ 02001e50
    ldr r0, [pc, #0x204] @ 02001e54
    mov r1, r6 @ 02001e58
    bl .L_02001c4c @ 02001e5c
    ldr r2, [r7] @ 02001e60
    mov r3, #1 @ 02001e64
    strb r3, [r2, #0x260] @ 02001e68
.L_02001e6c:
    ldr r4, [pc, #0x1ec] @ 02001e6c
    ldr r5, [pc, #0x1ec] @ 02001e70
    mov r0, r4 @ 02001e74
    mov r1, r6 @ 02001e78
    bl .L_020016d4 @ 02001e7c
    ldr r3, [r5] @ 02001e80
    tst r3, #0x20 @ 02001e84
    bne .L_02002014 @ 02001e88
.L_02001e8c:
    ldr r3, [r5] @ 02001e8c
    lsr r3, r3, #0x10 @ 02001e90
    and r3, r3, #3 @ 02001e94
    cmp r3, #1 @ 02001e98
    moveq ip, #0x4a @ 02001e9c
    beq .L_02001eb0 @ 02001ea0
    cmp r3, #2 @ 02001ea4
    movne ip, #0x55 @ 02001ea8
    moveq ip, #0x45 @ 02001eac
.L_02001eb0:
    ldr r1, [pc, #0x1a8] @ 02001eb0
    mov r0, #0x55 @ 02001eb4
    mov lr, #0 @ 02001eb8
    add r4, r1, #3 @ 02001ebc
.L_02001ec0:
    ldrb r2, [r1, #0x1f0] @ 02001ec0
    eor r3, lr, #1 @ 02001ec4
    cmp ip, r2 @ 02001ec8
    add r1, r1, #1 @ 02001ecc
    beq .L_02002050 @ 02001ed0
    cmp r2, #0x20 @ 02001ed4
    moveq r3, #0 @ 02001ed8
    andne r3, r3, #1 @ 02001edc
    cmp r3, #0 @ 02001ee0
    movne r0, r2 @ 02001ee4
    movne lr, #1 @ 02001ee8
    cmp r4, r1 @ 02001eec
    bne .L_02001ec0 @ 02001ef0
.L_02001ef4:
    sub r3, r0, #0x31 @ 02001ef4
    cmp r3, #0x24 @ 02001ef8
    ldrls pc, [pc, r3, lsl #2] @ 02001efc
    b .L_02001f98 @ 02001f00
    .byte 0xe4, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0xfc, 0x1f, 0x00, 0x02 @ 02001f04
    .byte 0xfc, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02 @ 02001f14
    .byte 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02 @ 02001f24
    .byte 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02 @ 02001f34
    .byte 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02 @ 02001f44
    .byte 0x98, 0x1f, 0x00, 0x02, 0xfc, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02 @ 02001f54
    .byte 0x98, 0x1f, 0x00, 0x02, 0xe4, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02 @ 02001f64
    .byte 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02 @ 02001f74
    .byte 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02, 0x98, 0x1f, 0x00, 0x02 @ 02001f84
    .byte 0xfc, 0x1f, 0x00, 0x02 @ 02001f94
.L_02001f98:
    ldr r2, [r7] @ 02001f98
    mov r3, #2 @ 02001f9c
    strb r3, [r2, #0x254] @ 02001fa0
    mov r0, #0xc0 @ 02001fa4
    bl .L_020002e4 @ 02001fa8
    mov r4, #1 @ 02001fac
    b .L_02001dd4 @ 02001fb0
.L_02001fb4:
    add r0, r0, #0x268 @ 02001fb4
    bl .L_02082724 @ 02001fb8
    str r0, [r7] @ 02001fbc
    b .L_02001d70 @ 02001fc0
.L_02001fc4:
    mov r3, r4 @ 02001fc4
    ldr r0, [pc, #0x90] @ 02001fc8
    mov r1, #1 @ 02001fcc
    mov r2, r6 @ 02001fd0
    bl .L_02081788 @ 02001fd4
    ldr r3, [r7] @ 02001fd8
    strb r8, [r3, #0x260] @ 02001fdc
    b .L_02001e6c @ 02001fe0
    ldr r3, [r7] @ 02001fe4
    mov r0, #0 @ 02001fe8
    strb r0, [r3, #0x254] @ 02001fec
    bl .L_020002e4 @ 02001ff0
    mov r4, #1 @ 02001ff4
    b .L_02001dd4 @ 02001ff8
    ldr r3, [r7] @ 02001ffc
    mov r4, #1 @ 02002000
    strb r4, [r3, #0x254] @ 02002004
    mov r0, #0x80 @ 02002008
    bl .L_020002e4 @ 0200200c
    b .L_02001dd4 @ 02002010
.L_02002014:
    mov r1, r6 @ 02002014
    mov r0, r4 @ 02002018
    bl .L_02001530 @ 0200201c
    ldr r1, [r7] @ 02002020
    ldr r3, [r1, #0x240] @ 02002024
    cmp r0, r3 @ 02002028
    beq .L_02001e8c @ 0200202c
    ldr r3, [r1, #0x258] @ 02002030
    lsr r2, r0, #8 @ 02002034
    orr r3, r3, #0x10 @ 02002038
    str r3, [r1, #0x258] @ 0200203c
    str r0, [r1, #0x240] @ 02002040
    strb r0, [r4, #0x18f] @ 02002044
    strb r2, [r4, #0x18e] @ 02002048
    b .L_02001e8c @ 0200204c
.L_02002050:
    mov r0, r2 @ 02002050
    b .L_02001ef4 @ 02002054
    .byte 0x00, 0x68, 0x30, 0x00, 0xc8, 0x8f, 0x09, 0x02, 0xec, 0x4c, 0x0b, 0x02, 0x10, 0xb6, 0x3c, 0x02 @ 02002058
.L_02002068:
@ FUN_02002068 at 0x02002068
    ldr r2, [pc, #0x14] @ 02002068
    ldr r3, [r2] @ 0200206c
    orr r3, r3, #0x5c @ 02002070
    bic r3, r3, #0x33000 @ 02002074
    orr r3, r3, #0x2000 @ 02002078
    str r3, [r2] @ 0200207c
    bx lr @ 02002080
    .byte 0x10, 0xb6, 0x3c, 0x02 @ 02002084
.L_02002088:
@ FUN_02002088 at 0x02002088
    ldr r1, [pc, #0x28] @ 02002088
    ldr r3, [r1] @ 0200208c
    cmp r3, #0 @ 02002090
    sub r2, r3, #1 @ 02002094
    ldreq r3, [pc, #0x1c] @ 02002098
    ldreq r2, [r3] @ 0200209c
    ldr r3, [pc, #0x18] @ 020020a0
    subeq r2, r2, #1 @ 020020a4
    str r2, [r1] @ 020020a8
    mov r2, #1 @ 020020ac
    str r2, [r3] @ 020020b0
    bx lr @ 020020b4
    .byte 0xe0, 0x8f, 0x09, 0x02, 0xd8, 0x8f, 0x09, 0x02, 0xcc, 0x8f, 0x09, 0x02 @ 020020b8
.L_020020c4:
@ FUN_020020c4 at 0x020020c4
    ldr r3, [r0, #4] @ 020020c4
    push {r4, r5, lr} @ 020020c8
    cmp r3, #3 @ 020020cc
    ldrls pc, [pc, r3, lsl #2] @ 020020d0
    b .L_02002144 @ 020020d4
    .byte 0xe8, 0x20, 0x00, 0x02, 0xe8, 0x20, 0x00, 0x02, 0x00, 0x21, 0x00, 0x02, 0x00, 0x21, 0x00, 0x02 @ 020020d8
    ldr r3, [pc, #0x58] @ 020020e8
    ldr r2, [r0, #8] @ 020020ec
    ldr r1, [r3] @ 020020f0
    eor r2, r2, r1 @ 020020f4
    str r2, [r3] @ 020020f8
    pop {r4, r5, pc} @ 020020fc
    ldr r4, [pc, #0x40] @ 02002100
    ldr lr, [r0, #8] @ 02002104
    ldr ip, [r4] @ 02002108
    mov r0, #3 @ 0200210c
    lsr r2, ip, lr @ 02002110
    lsl r0, r0, lr @ 02002114
    and r2, r2, #3 @ 02002118
    ldr r1, [pc, #0x28] @ 0200211c
    add r2, r2, #1 @ 02002120
    umull r5, r3, r1, r2 @ 02002124
    lsr r3, r3, #1 @ 02002128
    mvn r0, r0 @ 0200212c
    add r3, r3, r3, lsl #1 @ 02002130
    and ip, ip, r0 @ 02002134
    rsb r2, r3, r2 @ 02002138
    orr ip, ip, r2, lsl lr @ 0200213c
    str ip, [r4] @ 02002140
.L_02002144:
    pop {r4, r5, pc} @ 02002144
    .byte 0x10, 0xb6, 0x3c, 0x02, 0xab, 0xaa, 0xaa, 0xaa @ 02002148
.L_02002150:
@ FUN_02002150 at 0x02002150
    push {r4, r5, lr} @ 02002150
    sub sp, sp, #4 @ 02002154
    bl .L_020858ec @ 02002158
    bl .L_020858f8 @ 0200215c
    tst r0, #1 @ 02002160
    moveq r4, #1 @ 02002164
    movne r4, #4 @ 02002168
    tst r0, #0x20 @ 0200216c
    mov r5, r0 @ 02002170
    mov r0, r4 @ 02002174
    bne .L_020021c4 @ 02002178
.L_0200217c:
    tst r5, #0x10 @ 0200217c
    rsb r0, r4, #0 @ 02002180
    bne .L_020021bc @ 02002184
.L_02002188:
    tst r5, #0x40 @ 02002188
    mov r0, r4 @ 0200218c
    bne .L_020021b4 @ 02002190
.L_02002194:
    tst r5, #0x80 @ 02002194
    rsb r0, r4, #0 @ 02002198
    bne .L_020021a8 @ 0200219c
    add sp, sp, #4 @ 020021a0
    pop {r4, r5, pc} @ 020021a4
.L_020021a8:
    add sp, sp, #4 @ 020021a8
    pop {r4, r5, lr} @ 020021ac
    b .L_020073a4 @ 020021b0
.L_020021b4:
    bl .L_020073a4 @ 020021b4
    b .L_02002194 @ 020021b8
.L_020021bc:
    bl .L_02007358 @ 020021bc
    b .L_02002188 @ 020021c0
.L_020021c4:
    bl .L_02007358 @ 020021c4
    b .L_0200217c @ 020021c8
.L_020021cc:
@ FUN_020021cc at 0x020021cc
    push {r4, r5, r6, r7, lr} @ 020021cc
    sub sp, sp, #4 @ 020021d0
    bl .L_020858ec @ 020021d4
    bl .L_020858f8 @ 020021d8
    mov r4, r0 @ 020021dc
    ldr r0, [pc, #0x1e8] @ 020021e0
    lsr r3, r4, #0xb @ 020021e4
    ldr r1, [r0, #0x30] @ 020021e8
    eor r3, r3, #1 @ 020021ec
    and r3, r3, #1 @ 020021f0
    strb r3, [r1, #0x20] @ 020021f4
    lsr r2, r4, #1 @ 020021f8
    ldr r3, [r0, #0x30] @ 020021fc
    eor r2, r2, #1 @ 02002200
    and r2, r2, #1 @ 02002204
    strb r2, [r3, #0x21] @ 02002208
    ldr r1, [r0, #0x30] @ 0200220c
    and r3, r4, #1 @ 02002210
    eor r3, r3, #1 @ 02002214
    strb r3, [r1, #0x22] @ 02002218
    lsr r2, r4, #7 @ 0200221c
    ldr r1, [r0, #0x30] @ 02002220
    eor r2, r2, #1 @ 02002224
    and r2, r2, #1 @ 02002228
    strb r2, [r1, #0x24] @ 0200222c
    lsr r3, r4, #6 @ 02002230
    ldr r2, [r0, #0x30] @ 02002234
    eor r3, r3, #1 @ 02002238
    and r3, r3, #1 @ 0200223c
    strb r3, [r2, #0x23] @ 02002240
    ldr r1, [r0, #0x30] @ 02002244
    ands r6, r4, #0x20 @ 02002248
    movne r3, #0 @ 0200224c
    moveq r3, #1 @ 02002250
    strb r3, [r1, #0x25] @ 02002254
    ands r7, r4, #0x10 @ 02002258
    ldr r1, [r0, #0x30] @ 0200225c
    movne r2, #0 @ 02002260
    moveq r2, #1 @ 02002264
    ldr r5, [pc, #0x164] @ 02002268
    strb r2, [r1, #0x26] @ 0200226c
    ldr r3, [r5] @ 02002270
    tst r3, #1 @ 02002274
    beq .L_02002350 @ 02002278
    lsr r3, r4, #0xa @ 0200227c
    eor r3, r3, #1 @ 02002280
    ldr r1, [r0, #0x30] @ 02002284
    and r2, r4, #0x308 @ 02002288
    and r3, r3, #1 @ 0200228c
    cmp r2, #0x308 @ 02002290
    strb r3, [r1, #0x27] @ 02002294
    beq .L_02002388 @ 02002298
    ldr r1, [r0, #0x30] @ 0200229c
    mov r2, #1 @ 020022a0
    strb r2, [r1, #0x2b] @ 020022a4
    lsr r3, r4, #3 @ 020022a8
    ldr r1, [r0, #0x30] @ 020022ac
    eor r3, r3, r2 @ 020022b0
    and r3, r3, r2 @ 020022b4
    strb r3, [r1, #0x2a] @ 020022b8
    lsr r2, r4, #9 @ 020022bc
    ldr r1, [r0, #0x30] @ 020022c0
    eor r2, r2, #1 @ 020022c4
    and r2, r2, #1 @ 020022c8
    strb r2, [r1, #0x29] @ 020022cc
    lsr r3, r4, #8 @ 020022d0
    ldr r2, [r0, #0x30] @ 020022d4
    eor r3, r3, #1 @ 020022d8
    and r3, r3, #1 @ 020022dc
    strb r3, [r2, #0x28] @ 020022e0
.L_020022e4:
    ldr r3, [r5] @ 020022e4
    tst r3, #0x200 @ 020022e8
    beq .L_02002394 @ 020022ec
    tst r4, #0x400 @ 020022f0
    bne .L_020023a4 @ 020022f4
.L_020022f8:
    cmp r6, #0 @ 020022f8
    beq .L_0200231c @ 020022fc
    ldr r3, [pc, #0xd0] @ 02002300
    ldr r0, [r3] @ 02002304
    cmn r0, #0x200 @ 02002308
    subgt r0, r0, #0x40 @ 0200230c
    strgt r0, [r3] @ 02002310
    cmp r0, #0 @ 02002314
    blt .L_020023c4 @ 02002318
.L_0200231c:
    cmp r7, #0 @ 0200231c
    beq .L_02002394 @ 02002320
    ldr r3, [pc, #0xac] @ 02002324
    ldr r0, [r3] @ 02002328
    cmp r0, #0x200 @ 0200232c
    addlt r0, r0, #0x40 @ 02002330
    strlt r0, [r3] @ 02002334
    cmp r0, #0 @ 02002338
    ble .L_02002394 @ 0200233c
    asr r0, r0, #8 @ 02002340
    add sp, sp, #4 @ 02002344
    pop {r4, r5, r6, r7, lr} @ 02002348
    b .L_02007358 @ 0200234c
.L_02002350:
    lsr r3, r4, #3 @ 02002350
    ldr r2, [r0, #0x30] @ 02002354
    eor r3, r3, #1 @ 02002358
    and r3, r3, #1 @ 0200235c
    tst r4, #0x400 @ 02002360
    strb r3, [r2, #0x2a] @ 02002364
    bne .L_0200239c @ 02002368
    tst r4, #0x200 @ 0200236c
    bne .L_020023b8 @ 02002370
    tst r4, #0x100 @ 02002374
    beq .L_020022e4 @ 02002378
    mvn r0, #3 @ 0200237c
    bl .L_02007358 @ 02002380
    b .L_020022e4 @ 02002384
.L_02002388:
    ldr r2, [r0, #0x30] @ 02002388
    mov r3, #0 @ 0200238c
    strb r3, [r2, #0x2b] @ 02002390
.L_02002394:
    add sp, sp, #4 @ 02002394
    pop {r4, r5, r6, r7, pc} @ 02002398
.L_0200239c:
    bl .L_020073f0 @ 0200239c
    b .L_020022e4 @ 020023a0
.L_020023a4:
    ldr r3, [pc, #0x2c] @ 020023a4
    mov r2, #0 @ 020023a8
    str r2, [r3] @ 020023ac
    bl .L_020073f0 @ 020023b0
    b .L_020022f8 @ 020023b4
.L_020023b8:
    mov r0, #4 @ 020023b8
    bl .L_02007358 @ 020023bc
    b .L_020022e4 @ 020023c0
.L_020023c4:
    asr r0, r0, #8 @ 020023c4
    bl .L_02007358 @ 020023c8
    b .L_0200231c @ 020023cc
    .byte 0x00, 0x00, 0x00, 0x0b, 0x10, 0xb6, 0x3c, 0x02, 0xf8, 0x8f, 0x09, 0x02 @ 020023d0
.L_020023dc:
@ thunk_FUN_02006908 at 0x020023dc
    b .L_02006908 @ 020023dc
.L_020023e0:
@ FUN_020023e0 at 0x020023e0
    mov r1, #6 @ 020023e0
    mov r2, #1 @ 020023e4
    b .L_0200da3c @ 020023e8
.L_020023ec:
@ FUN_020023ec at 0x020023ec
    push {r4, r5, lr} @ 020023ec
    ldr r3, [r0, #4] @ 020023f0
    sub sp, sp, #4 @ 020023f4
    mov r4, r0 @ 020023f8
    add r5, r1, #8 @ 020023fc
    cmp r3, #3 @ 02002400
    ldrls pc, [pc, r3, lsl #2] @ 02002404
    b .L_0200241c @ 02002408
    .byte 0x24, 0x24, 0x00, 0x02, 0x64, 0x24, 0x00, 0x02, 0x90, 0x24, 0x00, 0x02, 0xd8, 0x24, 0x00, 0x02 @ 0200240c
.L_0200241c:
    add sp, sp, #4 @ 0200241c
    pop {r4, r5, pc} @ 02002420
    ldr r0, [r0] @ 02002424
    mov r1, r5 @ 02002428
    mov r2, #1 @ 0200242c
    bl .L_0200da3c @ 02002430
    ldr r3, [pc, #0x144] @ 02002434
    ldr r1, [r4, #8] @ 02002438
    ldr r2, [r3] @ 0200243c
    ldr r0, [pc, #0x13c] @ 02002440
    ldr r3, [pc, #0x13c] @ 02002444
    tst r1, r2 @ 02002448
.L_0200244c:
    moveq r0, r3 @ 0200244c
    mov r1, r5 @ 02002450
    mov r2, #0x16 @ 02002454
    add sp, sp, #4 @ 02002458
    pop {r4, r5, lr} @ 0200245c
    b .L_0200da3c @ 02002460
    ldr r0, [r0] @ 02002464
    mov r1, r5 @ 02002468
    mov r2, #1 @ 0200246c
    bl .L_0200da3c @ 02002470
    ldr r3, [pc, #0x104] @ 02002474
    ldr r1, [r4, #8] @ 02002478
    ldr r2, [r3] @ 0200247c
    ldr r0, [pc, #0x104] @ 02002480
    ldr r3, [pc, #0x104] @ 02002484
    tst r1, r2 @ 02002488
    b .L_0200244c @ 0200248c
    mov r1, r5 @ 02002490
    mov r2, #1 @ 02002494
    ldr r0, [r0] @ 02002498
    bl .L_0200da3c @ 0200249c
    ldr r2, [pc, #0xd8] @ 020024a0
    ldr r1, [r4, #8] @ 020024a4
    ldr r3, [r2] @ 020024a8
    lsr r3, r3, r1 @ 020024ac
    ands r3, r3, #3 @ 020024b0
    beq .L_02002538 @ 020024b4
    cmp r3, #1 @ 020024b8
    beq .L_02002568 @ 020024bc
    ldr r0, [pc, #0xcc] @ 020024c0
    mov r1, r5 @ 020024c4
    mov r2, #0x16 @ 020024c8
    add sp, sp, #4 @ 020024cc
    pop {r4, r5, lr} @ 020024d0
    b .L_0200da3c @ 020024d4
    mov r1, r5 @ 020024d8
    mov r2, #1 @ 020024dc
    ldr r0, [r0] @ 020024e0
    bl .L_0200da3c @ 020024e4
    ldr r2, [pc, #0x90] @ 020024e8
    ldr r1, [r4, #8] @ 020024ec
    ldr r3, [r2] @ 020024f0
    lsr r3, r3, r1 @ 020024f4
    ands r3, r3, #3 @ 020024f8
    beq .L_02002520 @ 020024fc
    cmp r3, #1 @ 02002500
    beq .L_02002550 @ 02002504
    ldr r0, [pc, #0x88] @ 02002508
    mov r1, r5 @ 0200250c
    mov r2, #0x16 @ 02002510
    add sp, sp, #4 @ 02002514
    pop {r4, r5, lr} @ 02002518
    b .L_0200da3c @ 0200251c
.L_02002520:
    ldr r0, [pc, #0x74] @ 02002520
    mov r1, r5 @ 02002524
    mov r2, #0x16 @ 02002528
    add sp, sp, #4 @ 0200252c
    pop {r4, r5, lr} @ 02002530
    b .L_0200da3c @ 02002534
.L_02002538:
    ldr r0, [pc, #0x48] @ 02002538
    mov r1, r5 @ 0200253c
    mov r2, #0x16 @ 02002540
    add sp, sp, #4 @ 02002544
    pop {r4, r5, lr} @ 02002548
    b .L_0200da3c @ 0200254c
.L_02002550:
    ldr r0, [pc, #0x48] @ 02002550
    mov r1, r5 @ 02002554
    mov r2, #0x16 @ 02002558
    add sp, sp, #4 @ 0200255c
    pop {r4, r5, lr} @ 02002560
    b .L_0200da3c @ 02002564
.L_02002568:
    ldr r0, [pc, #0x14] @ 02002568
    mov r1, r5 @ 0200256c
    mov r2, #0x16 @ 02002570
    add sp, sp, #4 @ 02002574
    pop {r4, r5, lr} @ 02002578
    b .L_0200da3c @ 0200257c
    .byte 0x10, 0xb6, 0x3c, 0x02, 0x78, 0xf0, 0x08, 0x02, 0x80, 0xf0, 0x08, 0x02, 0x88, 0xf0, 0x08, 0x02 @ 02002580
    .byte 0x90, 0xf0, 0x08, 0x02, 0x98, 0xf0, 0x08, 0x02, 0xa8, 0xf0, 0x08, 0x02, 0xa0, 0xf0, 0x08, 0x02 @ 02002590
    .byte 0xa4, 0xf0, 0x08, 0x02 @ 020025a0
.L_020025a4:
@ thunk_FUN_02006bb0 at 0x020025a4
    b .L_02006bb0 @ 020025a4
.L_020025a8:
@ FUN_020025a8 at 0x020025a8
    push {r4, r5, r6, r7, r8, lr} @ 020025a8
    ldr r7, [pc, #0x1a0] @ 020025ac
    sub sp, sp, #0x10 @ 020025b0
    ldrb r3, [r7] @ 020025b4
    ldr r5, [pc, #0x198] @ 020025b8
    cmp r3, #1 @ 020025bc
    movne r8, #0 @ 020025c0
    moveq r8, #1 @ 020025c4
    bl .L_020858ec @ 020025c8
    bl .L_020858f8 @ 020025cc
    mov r6, r0 @ 020025d0
    mov r0, sp @ 020025d4
    bl .L_02085904 @ 020025d8
    mov r1, sp @ 020025dc
    mov r0, r5 @ 020025e0
    mov r2, #0xc @ 020025e4
    bl .L_02082ec0 @ 020025e8
    ldrh r1, [r5, #6] @ 020025ec
    mov r4, sp @ 020025f0
    cmp r1, #0 @ 020025f4
    beq .L_02002608 @ 020025f8
    ldrh r0, [r5, #4] @ 020025fc
    cmp r0, #0 @ 02002600
    bne .L_02002674 @ 02002604
.L_02002608:
    ldr r3, [pc, #0x14c] @ 02002608
    mov r2, #0 @ 0200260c
    strb r2, [r3] @ 02002610
.L_02002614:
    tst r6, #4 @ 02002614
    ldreq r4, [pc, #0x140] @ 02002618
    bne .L_02002630 @ 0200261c
.L_02002620:
    mov r0, #0 @ 02002620
    str r6, [r4] @ 02002624
.L_02002628:
    add sp, sp, #0x10 @ 02002628
    pop {r4, r5, r6, r7, r8, pc} @ 0200262c
.L_02002630:
    ldr r4, [pc, #0x128] @ 02002630
    ldr r3, [r4] @ 02002634
    tst r3, #4 @ 02002638
    bne .L_02002620 @ 0200263c
    cmp r8, #0 @ 02002640
    movne r3, #2 @ 02002644
    moveq r3, #6 @ 02002648
    strbne r3, [r7] @ 0200264c
    strbeq r3, [r7] @ 02002650
    bl .L_020858a4 @ 02002654
    bl .L_020858a4 @ 02002658
    bl .L_020858a4 @ 0200265c
    bl .L_020858a4 @ 02002660
    bl .L_020025a4 @ 02002664
    ldrb r0, [r7] @ 02002668
    str r6, [r4] @ 0200266c
    b .L_02002628 @ 02002670
.L_02002674:
    ldr lr, [pc, #0xe0] @ 02002674
    ldrb r3, [lr] @ 02002678
    cmp r3, #0 @ 0200267c
    bne .L_02002614 @ 02002680
    lsl r3, r1, #0x10 @ 02002684
    asr r3, r3, #0x10 @ 02002688
    lsl r2, r0, #0x10 @ 0200268c
    asr r2, r2, #0x10 @ 02002690
    add r1, r3, #7 @ 02002694
    cmp r3, #0 @ 02002698
    movlt r3, r1 @ 0200269c
    add r0, r2, #7 @ 020026a0
    cmp r2, #0 @ 020026a4
    movlt r2, r0 @ 020026a8
    asr r3, r3, #3 @ 020026ac
    asr r2, r2, #3 @ 020026b0
    and ip, r3, #0xff @ 020026b4
    and r0, r2, #0xff @ 020026b8
    ldr r3, [pc, #0xa0] @ 020026bc
    ldr r2, [pc, #0xa0] @ 020026c0
    mov r1, #1 @ 020026c4
    cmp ip, #2 @ 020026c8
    strb r1, [lr] @ 020026cc
    strb ip, [r3] @ 020026d0
    strb r0, [r2] @ 020026d4
    strb r1, [r7] @ 020026d8
    bhi .L_02002714 @ 020026dc
    cmp r0, #0 @ 020026e0
    beq .L_02002708 @ 020026e4
    cmp r0, #4 @ 020026e8
    movls r0, #6 @ 020026ec
    bls .L_02002628 @ 020026f0
    cmp r0, #5 @ 020026f4
    bls .L_02002708 @ 020026f8
    cmp r0, #0xa @ 020026fc
    movls r0, #8 @ 02002700
    bls .L_02002628 @ 02002704
.L_02002708:
    bl .L_020025a4 @ 02002708
    mov r0, #1 @ 0200270c
    b .L_02002628 @ 02002710
.L_02002714:
    cmp ip, #0x14 @ 02002714
    bls .L_02002708 @ 02002718
    cmp r0, #0x13 @ 0200271c
    bls .L_0200273c @ 02002720
    cmp r0, #0x16 @ 02002724
    movls r0, #9 @ 02002728
    bls .L_02002628 @ 0200272c
    cmp r0, #0x19 @ 02002730
    movls r0, #0xa @ 02002734
    bls .L_02002628 @ 02002738
.L_0200273c:
    cmp r8, #0 @ 0200273c
    movne r3, #2 @ 02002740
    strbne r3, [r7] @ 02002744
    bl .L_020025a4 @ 02002748
    ldrb r0, [r7] @ 0200274c
    b .L_02002628 @ 02002750
    .byte 0x47, 0xf3, 0x08, 0x02, 0x18, 0xb6, 0x3c, 0x02, 0xec, 0x8f, 0x09, 0x02, 0xd0, 0x8f, 0x09, 0x02 @ 02002754
    .byte 0x44, 0xf3, 0x08, 0x02, 0x45, 0xf3, 0x08, 0x02 @ 02002764
.L_0200276c:
@ FUN_0200276c at 0x0200276c
    push {r4, r5, lr} @ 0200276c
    ldr r4, [pc, #0x50] @ 02002770
    sub sp, sp, #4 @ 02002774
    mov r5, r0 @ 02002778
    bl .L_020025a4 @ 0200277c
    mov r0, #3 @ 02002780
    bl .L_0200d9ec @ 02002784
    mov r1, r5 @ 02002788
    mov r2, #0x1d @ 0200278c
    mov r0, r4 @ 02002790
    bl .L_02083dbc @ 02002794
    mov r3, #0 @ 02002798
    mov r1, #6 @ 0200279c
    mov r2, #1 @ 020027a0
    ldr r0, [pc, #0x20] @ 020027a4
    strb r3, [r4, #0x1c] @ 020027a8
    bl .L_0200da3c @ 020027ac
    mov r0, r4 @ 020027b0
    mov r1, #7 @ 020027b4
    mov r2, #1 @ 020027b8
    add sp, sp, #4 @ 020027bc
    pop {r4, r5, lr} @ 020027c0
    b .L_0200da3c @ 020027c4
    .byte 0xf0, 0xb4, 0x3c, 0x02, 0xac, 0xf0, 0x08, 0x02 @ 020027c8
.L_020027d0:
@ FUN_020027d0 at 0x020027d0
    push {r4, r5, r6, r7, r8, lr} @ 020027d0
    ldr r5, [pc, #0x188] @ 020027d4
    ldr r6, [pc, #0x188] @ 020027d8
    ldr r3, [r5] @ 020027dc
    ldr r8, [pc, #0x17c] @ 020027e0
    ldrb r7, [r3, #0x254] @ 020027e4
    bl .L_020025a4 @ 020027e8
    mov r0, #3 @ 020027ec
    bl .L_0200d9ec @ 020027f0
    ldr r4, [r5] @ 020027f4
    mov r1, #0x2f @ 020027f8
    mov r0, r4 @ 020027fc
    bl .L_02083f68 @ 02002800
    subs r1, r0, #0 @ 02002804
    mov r0, r6 @ 02002808
    ldreq r6, [pc, #0x154] @ 0200280c
    mov r2, #0x1d @ 02002810
    moveq r0, r6 @ 02002814
    moveq r2, #0x1d @ 02002818
    add r1, r1, #1 @ 0200281c
    moveq r1, r4 @ 02002820
    bl .L_02083dbc @ 02002824
    mov r4, #0 @ 02002828
    ldr r0, [pc, #0x138] @ 0200282c
    mov r1, #6 @ 02002830
    mov r2, #1 @ 02002834
    strb r4, [r6, #0x1c] @ 02002838
    bl .L_0200da3c @ 0200283c
    ldr r0, [pc, #0x120] @ 02002840
    mov r1, #7 @ 02002844
    mov r2, #1 @ 02002848
    bl .L_0200da3c @ 0200284c
    ldr r0, [pc, #0x118] @ 02002850
    mov r1, #9 @ 02002854
    mov r2, #1 @ 02002858
    bl .L_0200da3c @ 0200285c
    ldr r3, [r5] @ 02002860
    mov r1, #9 @ 02002864
    ldr r0, [r3, #0x244] @ 02002868
    mov r2, #0xf @ 0200286c
    bl .L_0200db8c @ 02002870
    ldr r0, [pc, #0xf8] @ 02002874
    mov r1, #0xa @ 02002878
    mov r2, #1 @ 0200287c
    bl .L_0200da3c @ 02002880
    ldr r3, [r5] @ 02002884
    mov r1, #0xa @ 02002888
    ldr r0, [r3, #0x240] @ 0200288c
    mov r2, #0xf @ 02002890
    bl .L_0200dc64 @ 02002894
    ldr r0, [pc, #0xd8] @ 02002898
    mov r1, #0xb @ 0200289c
    mov r2, #1 @ 020028a0
    bl .L_0200da3c @ 020028a4
    ldr r3, [r5] @ 020028a8
    ldr r0, [pc, #0xc8] @ 020028ac
    ldrb r2, [r3, #0x260] @ 020028b0
    ldr r3, [pc, #0xc4] @ 020028b4
    cmp r2, r4 @ 020028b8
    moveq r0, r3 @ 020028bc
    mov r1, #0xb @ 020028c0
    mov r2, #0xf @ 020028c4
    bl .L_0200da3c @ 020028c8
    ldr r0, [pc, #0xb0] @ 020028cc
    mov r1, #0xd @ 020028d0
    mov r2, #1 @ 020028d4
    bl .L_0200da3c @ 020028d8
    ldr r0, [pc, #0xa4] @ 020028dc
    mov r1, #0x10 @ 020028e0
    mov r2, #1 @ 020028e4
    bl .L_0200da3c @ 020028e8
    mov r2, #1 @ 020028ec
    mov r1, #0x11 @ 020028f0
    ldr r0, [pc, #0x90] @ 020028f4
    bl .L_0200da3c @ 020028f8
    mov r0, #7 @ 020028fc
    bl .L_02006784 @ 02002900
    bl .L_02006b78 @ 02002904
    mov r0, r7 @ 02002908
    bl .L_020067d4 @ 0200290c
    ldr r3, [r5] @ 02002910
    ldrb r2, [r3, #0x261] @ 02002914
    cmp r2, r4 @ 02002918
    beq .L_02002924 @ 0200291c
    bl .L_02006890 @ 02002920
.L_02002924:
    cmp r7, #2 @ 02002924
    movne r0, #0 @ 02002928
    moveq r0, #1 @ 0200292c
    bl .L_020068ac @ 02002930
    bl .L_020069a8 @ 02002934
    ldr r3, [r8] @ 02002938
    mov r0, r4 @ 0200293c
    ldr r1, [r3, #0x258] @ 02002940
    and r1, r1, #0x20 @ 02002944
    bl .L_020069e4 @ 02002948
    ldr r3, [r8] @ 0200294c
    mov r0, #1 @ 02002950
    ldr r1, [r3, #0x258] @ 02002954
    and r1, r1, #0x40 @ 02002958
    pop {r4, r5, r6, r7, r8, lr} @ 0200295c
    b .L_020069e4 @ 02002960
    .byte 0xc8, 0x8f, 0x09, 0x02, 0xf0, 0xb4, 0x3c, 0x02, 0xb8, 0xf0, 0x08, 0x02, 0xc8, 0xf0, 0x08, 0x02 @ 02002964
    .byte 0xd4, 0xf0, 0x08, 0x02, 0xe4, 0xf0, 0x08, 0x02, 0xf0, 0xf0, 0x08, 0x02, 0xf4, 0xf0, 0x08, 0x02 @ 02002974
    .byte 0xf8, 0xf0, 0x08, 0x02, 0x18, 0xf1, 0x08, 0x02, 0x34, 0xf1, 0x08, 0x02 @ 02002984
.L_02002990:
@ FUN_02002990 at 0x02002990
    push {r4, r5, r6, r7, r8, lr} @ 02002990
    ldr r3, [pc, #0x16c] @ 02002994
    ldr r7, [pc, #0x16c] @ 02002998
    ldr r4, [r3] @ 0200299c
    mov r3, #0 @ 020029a0
    cmp r4, #0 @ 020029a4
    sub sp, sp, #0x20 @ 020029a8
    str r3, [r7] @ 020029ac
    mov r8, r0 @ 020029b0
    beq .L_020029e0 @ 020029b4
    lsls r2, r0, #4 @ 020029b8
    beq .L_020029e8 @ 020029bc
    add r3, r3, #1 @ 020029c0
    b .L_020029d4 @ 020029c4
.L_020029c8:
    cmp r2, r3 @ 020029c8
    add r3, r3, #1 @ 020029cc
    beq .L_020029e8 @ 020029d0
.L_020029d4:
    ldr r4, [r4] @ 020029d4
    cmp r4, #0 @ 020029d8
    bne .L_020029c8 @ 020029dc
.L_020029e0:
    add sp, sp, #0x20 @ 020029e0
    pop {r4, r5, r6, r7, r8, pc} @ 020029e4
.L_020029e8:
    mov r0, #3 @ 020029e8
    bl .L_0200d9ec @ 020029ec
    mov r5, #4 @ 020029f0
    add r6, sp, #3 @ 020029f4
    b .L_02002a40 @ 020029f8
.L_020029fc:
    add r1, r4, #0xc @ 020029fc
    mov r2, #0x1d @ 02002a00
    mov r0, r6 @ 02002a04
    bl .L_02083a04 @ 02002a08
.L_02002a0c:
    mov r1, r5 @ 02002a0c
    mov r2, #1 @ 02002a10
    mov r0, r6 @ 02002a14
    add r5, r5, r2 @ 02002a18
    bl .L_0200dae0 @ 02002a1c
    ldr r3, [r7] @ 02002a20
    ldr r4, [r4] @ 02002a24
    add r3, r3, #1 @ 02002a28
    cmp r4, #0 @ 02002a2c
    str r3, [r7] @ 02002a30
    beq .L_02002a80 @ 02002a34
    cmp r5, #0x14 @ 02002a38
    beq .L_02002a80 @ 02002a3c
.L_02002a40:
    ldr r3, [r4, #8] @ 02002a40
    mov r0, r6 @ 02002a44
    cmp r3, #2 @ 02002a48
    ldr r1, [pc, #0xbc] @ 02002a4c
    mov r2, #0x1d @ 02002a50
    bne .L_020029fc @ 02002a54
    bl .L_02083a04 @ 02002a58
    add r1, r4, #0xc @ 02002a5c
    mov r0, r6 @ 02002a60
    mov r2, #0x1b @ 02002a64
    bl .L_02083bb4 @ 02002a68
    mov r0, r6 @ 02002a6c
    ldr r1, [pc, #0x9c] @ 02002a70
    mov r2, #0x1d @ 02002a74
    bl .L_0208395c @ 02002a78
    b .L_02002a0c @ 02002a7c
.L_02002a80:
    ldr r5, [pc, #0x90] @ 02002a80
    ldr r3, [r5] @ 02002a84
    cmp r3, #0 @ 02002a88
    bne .L_02002ac8 @ 02002a8c
.L_02002a90:
    add r0, r8, #1 @ 02002a90
    mov r1, #0x15 @ 02002a94
    mov r2, #0x1a @ 02002a98
    bl .L_0200db8c @ 02002a9c
    ldr r0, [pc, #0x74] @ 02002aa0
    mov r1, #0x15 @ 02002aa4
    mov r2, #0x1c @ 02002aa8
    bl .L_0200da3c @ 02002aac
    ldr r3, [pc, #0x68] @ 02002ab0
    mov r1, #0x15 @ 02002ab4
    ldr r0, [r3] @ 02002ab8
    mov r2, #0x1e @ 02002abc
    bl .L_0200db8c @ 02002ac0
    b .L_020029e0 @ 02002ac4
.L_02002ac8:
    ldr r4, [pc, #0x54] @ 02002ac8
    ldrb r0, [r4] @ 02002acc
    bl .L_02006b90 @ 02002ad0
    ldr r3, [pc, #0x30] @ 02002ad4
    ldr r2, [r3] @ 02002ad8
    ldr r3, [pc, #0x44] @ 02002adc
    add r2, r2, #3 @ 02002ae0
    and r2, r2, #0xff @ 02002ae4
    sub r1, r2, #4 @ 02002ae8
    str r1, [r3] @ 02002aec
    mov r0, r2 @ 02002af0
    strb r2, [r4] @ 02002af4
    bl .L_02006784 @ 02002af8
    mov r3, #0 @ 02002afc
    str r3, [r5] @ 02002b00
    b .L_02002a90 @ 02002b04
    .byte 0xf0, 0x8f, 0x09, 0x02, 0xdc, 0x8f, 0x09, 0x02, 0x50, 0xf1, 0x08, 0x02, 0x54, 0xf1, 0x08, 0x02 @ 02002b08
    .byte 0xcc, 0x8f, 0x09, 0x02, 0xfc, 0xf2, 0x08, 0x02, 0xd8, 0x8f, 0x09, 0x02, 0x44, 0xf3, 0x08, 0x02 @ 02002b18
    .byte 0xe4, 0x8f, 0x09, 0x02 @ 02002b28
.L_02002b2c:
@ FUN_02002b2c at 0x02002b2c
    push {r4, lr} @ 02002b2c
    ldr r4, [pc, #0x20] @ 02002b30
    ldr r0, [r4] @ 02002b34
    add r0, r0, #8 @ 02002b38
    bl .L_02006b90 @ 02002b3c
    ldr r3, [r4] @ 02002b40
    add r0, r3, #9 @ 02002b44
    add r3, r3, #1 @ 02002b48
    str r3, [r4] @ 02002b4c
    pop {r4, lr} @ 02002b50
    b .L_02006784 @ 02002b54
    .byte 0xe8, 0x8f, 0x09, 0x02 @ 02002b58
.L_02002b5c:
@ FUN_02002b5c at 0x02002b5c
    push {r4, lr} @ 02002b5c
    ldr r4, [pc, #0x20] @ 02002b60
    ldr r0, [r4] @ 02002b64
    add r0, r0, #8 @ 02002b68
    bl .L_02006b90 @ 02002b6c
    ldr r3, [r4] @ 02002b70
    add r0, r3, #7 @ 02002b74
    sub r3, r3, #1 @ 02002b78
    str r3, [r4] @ 02002b7c
    pop {r4, lr} @ 02002b80
    b .L_02006784 @ 02002b84
    .byte 0xe8, 0x8f, 0x09, 0x02 @ 02002b88
.L_02002b8c:
@ FUN_02002b8c at 0x02002b8c
    push {r4, r5, r6, lr} @ 02002b8c
    ldr r5, [pc, #0x40] @ 02002b90
    ldr r6, [pc, #0x40] @ 02002b94
    ldrb r0, [r5] @ 02002b98
    bl .L_02006b90 @ 02002b9c
    ldr r3, [pc, #0x38] @ 02002ba0
    ldr r0, [r6] @ 02002ba4
    ldr r1, [r3] @ 02002ba8
    ldr r3, [pc, #0x30] @ 02002bac
    mov r2, #0 @ 02002bb0
    mov r4, #4 @ 02002bb4
    str r2, [r3] @ 02002bb8
    add r0, r0, #1 @ 02002bbc
    strb r4, [r5] @ 02002bc0
    bl .L_0208047c @ 02002bc4
    mov r0, r4 @ 02002bc8
    str r1, [r6] @ 02002bcc
    pop {r4, r5, r6, lr} @ 02002bd0
    b .L_02006784 @ 02002bd4
    .byte 0x44, 0xf3, 0x08, 0x02, 0xe0, 0x8f, 0x09, 0x02, 0xd8, 0x8f, 0x09, 0x02, 0xe4, 0x8f, 0x09, 0x02 @ 02002bd8
.L_02002be8:
@ FUN_02002be8 at 0x02002be8
    push {r4, lr} @ 02002be8
    ldr r4, [pc, #0x2c] @ 02002bec
    ldrb r0, [r4] @ 02002bf0
    bl .L_02006b90 @ 02002bf4
    ldrb r3, [r4] @ 02002bf8
    ldr r2, [pc, #0x20] @ 02002bfc
    add r3, r3, #1 @ 02002c00
    and r3, r3, #0xff @ 02002c04
    sub r1, r3, #4 @ 02002c08
    mov r0, r3 @ 02002c0c
    str r1, [r2] @ 02002c10
    strb r3, [r4] @ 02002c14
    pop {r4, lr} @ 02002c18
    b .L_02006784 @ 02002c1c
    .byte 0x44, 0xf3, 0x08, 0x02, 0xe4, 0x8f, 0x09, 0x02 @ 02002c20
.L_02002c28:
@ FUN_02002c28 at 0x02002c28
    push {r4, lr} @ 02002c28
    ldr r4, [pc, #0x2c] @ 02002c2c
    ldrb r0, [r4] @ 02002c30
    bl .L_02006b90 @ 02002c34
    ldrb r3, [r4] @ 02002c38
    ldr r2, [pc, #0x20] @ 02002c3c
    sub r3, r3, #1 @ 02002c40
    and r3, r3, #0xff @ 02002c44
    sub r1, r3, #4 @ 02002c48
    mov r0, r3 @ 02002c4c
    str r1, [r2] @ 02002c50
    strb r3, [r4] @ 02002c54
    pop {r4, lr} @ 02002c58
    b .L_02006784 @ 02002c5c
    .byte 0x44, 0xf3, 0x08, 0x02, 0xe4, 0x8f, 0x09, 0x02 @ 02002c60
.L_02002c68:
@ FUN_02002c68 at 0x02002c68
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02002c68
    ldr sb, [pc, #0x1bc] @ 02002c6c
    sub sp, sp, #4 @ 02002c70
    mov r8, r0 @ 02002c74
    ldr sl, [sb] @ 02002c78
    bl .L_0200d8c4 @ 02002c7c
    bl .L_020025a4 @ 02002c80
    ldr r0, [pc, #0x1a8] @ 02002c84
    mov r1, #5 @ 02002c88
    mov r2, #1 @ 02002c8c
    bl .L_0200da3c @ 02002c90
    ldr r0, [pc, #0x19c] @ 02002c94
    mov r1, #6 @ 02002c98
    mov r2, #1 @ 02002c9c
    bl .L_0200da3c @ 02002ca0
    cmp r8, #0 @ 02002ca4
    beq .L_02002df0 @ 02002ca8
    ldr r0, [pc, #0x188] @ 02002cac
    mov r1, #0x15 @ 02002cb0
    mov r2, #1 @ 02002cb4
    bl .L_0200da3c @ 02002cb8
    ldr r0, [pc, #0x17c] @ 02002cbc
    mov r1, #0x16 @ 02002cc0
    mov r2, #1 @ 02002cc4
    bl .L_0200da3c @ 02002cc8
.L_02002ccc:
    ldr r6, [pc, #0x170] @ 02002ccc
    mov r3, #0 @ 02002cd0
    ldr fp, [pc, #0x16c] @ 02002cd4
    ldr r7, [pc, #0x16c] @ 02002cd8
    str r3, [r6] @ 02002cdc
.L_02002ce0:
    bl .L_020858ec @ 02002ce0
    ldr r5, [pc, #0x15c] @ 02002ce4
    mov r4, #0 @ 02002ce8
.L_02002cec:
    mov r0, r5 @ 02002cec
    mov r1, r4 @ 02002cf0
    add r4, r4, #1 @ 02002cf4
    bl .L_020023ec @ 02002cf8
    cmp r4, #0xa @ 02002cfc
    add r5, r5, #0xc @ 02002d00
    bne .L_02002cec @ 02002d04
    ldr r0, [r7] @ 02002d08
    add r0, r0, #8 @ 02002d0c
    bl .L_02006784 @ 02002d10
    bl .L_020858f8 @ 02002d14
    tst r0, #0x40 @ 02002d18
    mov r4, r0 @ 02002d1c
    beq .L_02002d6c @ 02002d20
    ldr r3, [r6] @ 02002d24
    tst r3, #0x40 @ 02002d28
    bne .L_02002d6c @ 02002d2c
    ldr r3, [pc, #0x114] @ 02002d30
    ldr r2, [r3] @ 02002d34
    cmp r2, #0 @ 02002d38
    bne .L_02002e28 @ 02002d3c
.L_02002d40:
    tst r4, #1 @ 02002d40
    beq .L_02002d54 @ 02002d44
    ldr r3, [r6] @ 02002d48
    tst r3, #1 @ 02002d4c
    beq .L_02002e14 @ 02002d50
.L_02002d54:
    tst r4, #4 @ 02002d54
    bne .L_02002d94 @ 02002d58
    str r4, [r6] @ 02002d5c
    bl .L_020858a4 @ 02002d60
    bl .L_020858a4 @ 02002d64
    b .L_02002ce0 @ 02002d68
.L_02002d6c:
    tst r4, #0x80 @ 02002d6c
    beq .L_02002d40 @ 02002d70
    ldr r3, [r6] @ 02002d74
    tst r3, #0x80 @ 02002d78
    bne .L_02002d40 @ 02002d7c
    ldr r3, [r7] @ 02002d80
    cmp r3, #8 @ 02002d84
    bhi .L_02002d40 @ 02002d88
    bl .L_02002b2c @ 02002d8c
    b .L_02002d40 @ 02002d90
.L_02002d94:
    str r4, [r6] @ 02002d94
    bl .L_020858a4 @ 02002d98
    bl .L_020858a4 @ 02002d9c
    bl .L_020858a4 @ 02002da0
    ldr r0, [r7] @ 02002da4
    add r0, r0, #8 @ 02002da8
    bl .L_02006b90 @ 02002dac
    bl .L_020858a4 @ 02002db0
    ldr r3, [sb] @ 02002db4
    cmp sl, r3 @ 02002db8
    beq .L_02002dc4 @ 02002dbc
    bl .L_02000d10 @ 02002dc0
.L_02002dc4:
    bl .L_020858a4 @ 02002dc4
    mov r3, #0 @ 02002dc8
    cmp r8, #0 @ 02002dcc
    str r3, [r6] @ 02002dd0
    beq .L_02002de4 @ 02002dd4
    bl .L_0200d8c4 @ 02002dd8
    bl .L_020025a4 @ 02002ddc
    bl .L_020027d0 @ 02002de0
.L_02002de4:
    mov r0, #1 @ 02002de4
    add sp, sp, #4 @ 02002de8
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02002dec
.L_02002df0:
    ldr r0, [pc, #0x44] @ 02002df0
    mov r1, #0x15 @ 02002df4
    mov r2, #1 @ 02002df8
    bl .L_0200da3c @ 02002dfc
    ldr r0, [pc, #0x48] @ 02002e00
    mov r1, #0x16 @ 02002e04
    mov r2, #1 @ 02002e08
    bl .L_0200da3c @ 02002e0c
    b .L_02002ccc @ 02002e10
.L_02002e14:
    ldr r0, [r7] @ 02002e14
    add r0, r0, r0, lsl #1 @ 02002e18
    add r0, fp, r0, lsl #2 @ 02002e1c
    bl .L_020020c4 @ 02002e20
    b .L_02002d54 @ 02002e24
.L_02002e28:
    bl .L_02002b5c @ 02002e28
    b .L_02002d40 @ 02002e2c
    .byte 0x10, 0xb6, 0x3c, 0x02, 0x58, 0xf1, 0x08, 0x02, 0xf8, 0xf0, 0x08, 0x02, 0x68, 0xf1, 0x08, 0x02 @ 02002e30
    .byte 0x80, 0xf1, 0x08, 0x02, 0xd0, 0x8f, 0x09, 0x02, 0x10, 0x5a, 0x08, 0x02, 0xe8, 0x8f, 0x09, 0x02 @ 02002e40
    .byte 0x98, 0xf1, 0x08, 0x02 @ 02002e50
.L_02002e54:
@ FUN_02002e54 at 0x02002e54
    push {r4, r5, r6, r7, r8, sl, lr} @ 02002e54
    ldr r8, [pc, #0x298] @ 02002e58
    mov r3, #0 @ 02002e5c
    cmp r0, #1 @ 02002e60
    sub sp, sp, #4 @ 02002e64
    mov r7, r0 @ 02002e68
    str r3, [r8] @ 02002e6c
    beq .L_0200304c @ 02002e70
    cmp r0, #2 @ 02002e74
    beq .L_02002fd4 @ 02002e78
.L_02002e7c:
    bl .L_020858a4 @ 02002e7c
    mov r0, #0xe @ 02002e80
    bl .L_0200d9ec @ 02002e84
    mov r1, #0xe @ 02002e88
    mov r2, #8 @ 02002e8c
    ldr r0, [pc, #0x264] @ 02002e90
    bl .L_0200da3c @ 02002e94
    mov r0, r7 @ 02002e98
    mov r1, #0xe @ 02002e9c
    mov r2, #0x17 @ 02002ea0
    bl .L_0200db8c @ 02002ea4
    mov sl, #1 @ 02002ea8
.L_02002eac:
    ldr r0, [pc, #0x24c] @ 02002eac
    mov r1, #0x12 @ 02002eb0
    mov r2, #0xe @ 02002eb4
    bl .L_0200da3c @ 02002eb8
    mov r1, #0x13 @ 02002ebc
    mov r2, #0xd @ 02002ec0
    ldr r0, [pc, #0x238] @ 02002ec4
    bl .L_0200da3c @ 02002ec8
    mov r0, #0x13 @ 02002ecc
    bl .L_02006784 @ 02002ed0
    bl .L_020858a4 @ 02002ed4
    mov r6, #2 @ 02002ed8
.L_02002edc:
    add r5, r6, #0x11 @ 02002edc
    bl .L_020858ec @ 02002ee0
    mov r0, r5 @ 02002ee4
    bl .L_02006784 @ 02002ee8
    bl .L_020858f8 @ 02002eec
    tst r0, #0x40 @ 02002ef0
    mov r4, r0 @ 02002ef4
    beq .L_02002f10 @ 02002ef8
    ldr r3, [r8] @ 02002efc
    tst r3, #0x40 @ 02002f00
    bne .L_02002f10 @ 02002f04
    cmp r6, sl @ 02002f08
    bhi .L_0200302c @ 02002f0c
.L_02002f10:
    tst r4, #0x80 @ 02002f10
    beq .L_02002f2c @ 02002f14
    ldr r3, [r8] @ 02002f18
    tst r3, #0x80 @ 02002f1c
    bne .L_02002f2c @ 02002f20
    cmp r6, #1 @ 02002f24
    bls .L_0200303c @ 02002f28
.L_02002f2c:
    ands r3, r4, #1 @ 02002f2c
    ldrne r3, [r8] @ 02002f30
    moveq r5, r3 @ 02002f34
    eorne r3, r3, #1 @ 02002f38
    andne r5, r3, #1 @ 02002f3c
    tst r4, #4 @ 02002f40
    bne .L_02002f94 @ 02002f44
    str r4, [r8] @ 02002f48
    bl .L_020858a4 @ 02002f4c
    bl .L_020858a4 @ 02002f50
    bl .L_020858a4 @ 02002f54
    cmp r5, #0 @ 02002f58
    beq .L_02002edc @ 02002f5c
    add r0, r6, #0x11 @ 02002f60
    bl .L_02006b90 @ 02002f64
    cmp r6, #0 @ 02002f68
    bne .L_0200309c @ 02002f6c
    mov r1, #0xf @ 02002f70
    mov r2, #1 @ 02002f74
    ldr r0, [pc, #0x188] @ 02002f78
    bl .L_0200da3c @ 02002f7c
    mov r0, r7 @ 02002f80
    bl .L_0200d13c @ 02002f84
    ldr r3, [pc, #0x17c] @ 02002f88
    str r6, [r3, #0x24] @ 02002f8c
    b .L_02002fac @ 02002f90
.L_02002f94:
    str r4, [r8] @ 02002f94
    bl .L_020858a4 @ 02002f98
    bl .L_020858a4 @ 02002f9c
    bl .L_020858a4 @ 02002fa0
    mov r0, #0x13 @ 02002fa4
    bl .L_02006b90 @ 02002fa8
.L_02002fac:
    bl .L_020858a4 @ 02002fac
    bl .L_020858a4 @ 02002fb0
    bl .L_020025a4 @ 02002fb4
    bl .L_020858a4 @ 02002fb8
    bl .L_020027d0 @ 02002fbc
    bl .L_020858a4 @ 02002fc0
    bl .L_020858a4 @ 02002fc4
    mov r0, #1 @ 02002fc8
    add sp, sp, #4 @ 02002fcc
    pop {r4, r5, r6, r7, r8, sl, pc} @ 02002fd0
.L_02002fd4:
    ldr r3, [pc, #0x134] @ 02002fd4
    ldr r2, [r3] @ 02002fd8
    ldr r1, [r2, #0x258] @ 02002fdc
    tst r1, #0x40 @ 02002fe0
    beq .L_02002e7c @ 02002fe4
    bl .L_020858a4 @ 02002fe8
    mov r0, #0xe @ 02002fec
    bl .L_0200d9ec @ 02002ff0
    ldr r0, [pc, #0x100] @ 02002ff4
    mov r1, #0xe @ 02002ff8
    mov r2, #8 @ 02002ffc
    bl .L_0200da3c @ 02003000
    mov r0, #2 @ 02003004
    mov r1, #0xe @ 02003008
    mov r2, #0x17 @ 0200300c
    bl .L_0200db8c @ 02003010
    mov sl, #0 @ 02003014
.L_02003018:
    ldr r0, [pc, #0xf4] @ 02003018
    mov r1, #0x11 @ 0200301c
    mov r2, #0xe @ 02003020
    bl .L_0200da3c @ 02003024
    b .L_02002eac @ 02003028
.L_0200302c:
    mov r0, r5 @ 0200302c
    bl .L_02006b90 @ 02003030
    sub r6, r6, #1 @ 02003034
    b .L_02002f10 @ 02003038
.L_0200303c:
    add r0, r6, #0x11 @ 0200303c
    bl .L_02006b90 @ 02003040
    add r6, r6, #1 @ 02003044
    b .L_02002f2c @ 02003048
.L_0200304c:
    ldr r3, [pc, #0xbc] @ 0200304c
    ldr r2, [r3] @ 02003050
    ldr r4, [r2, #0x258] @ 02003054
    bl .L_020858a4 @ 02003058
    mov r0, #0xe @ 0200305c
    bl .L_0200d9ec @ 02003060
    lsr r4, r4, #5 @ 02003064
    mov r1, #0xe @ 02003068
    mov r2, #8 @ 0200306c
    ldr r0, [pc, #0x84] @ 02003070
    bl .L_0200da3c @ 02003074
    and r4, r4, #1 @ 02003078
    mov r0, r7 @ 0200307c
    mov r1, #0xe @ 02003080
    mov r2, #0x17 @ 02003084
    bl .L_0200db8c @ 02003088
    cmp r4, #0 @ 0200308c
    eor sl, r4, #1 @ 02003090
    bne .L_02003018 @ 02003094
    b .L_02002eac @ 02003098
.L_0200309c:
    cmp r6, #1 @ 0200309c
    bne .L_02002fac @ 020030a0
    mov r2, r6 @ 020030a4
    ldr r0, [pc, #0x68] @ 020030a8
    mov r1, #0xf @ 020030ac
    bl .L_0200da3c @ 020030b0
    cmp r7, #1 @ 020030b4
    beq .L_020030e0 @ 020030b8
    cmp r7, #2 @ 020030bc
    ldreq r3, [pc, #0x48] @ 020030c0
    ldreq r1, [r3] @ 020030c4
    ldreq r2, [r1, #0x258] @ 020030c8
    orreq r2, r2, #0x40 @ 020030cc
    streq r2, [r1, #0x258] @ 020030d0
.L_020030d4:
    mov r0, r7 @ 020030d4
    bl .L_0200d4c8 @ 020030d8
    b .L_02002fac @ 020030dc
.L_020030e0:
    ldr r3, [pc, #0x28] @ 020030e0
    ldr r1, [r3] @ 020030e4
    ldr r2, [r1, #0x258] @ 020030e8
    orr r2, r2, #0x20 @ 020030ec
    str r2, [r1, #0x258] @ 020030f0
    b .L_020030d4 @ 020030f4
    .byte 0xd0, 0x8f, 0x09, 0x02, 0xac, 0xf1, 0x08, 0x02, 0xc4, 0xf1, 0x08, 0x02, 0xcc, 0xf1, 0x08, 0x02 @ 020030f8
    .byte 0xd4, 0xf1, 0x08, 0x02, 0x00, 0x00, 0x00, 0x0b, 0xc8, 0x8f, 0x09, 0x02, 0xbc, 0xf1, 0x08, 0x02 @ 02003108
    .byte 0xf0, 0xf1, 0x08, 0x02 @ 02003118
.L_0200311c:
@ FUN_0200311c at 0x0200311c
    push {r4, r5, lr} @ 0200311c
    ldr r5, [pc, #0x6c] @ 02003120
    sub sp, sp, #4 @ 02003124
    ldr r3, [r5] @ 02003128
    cmp r3, #0 @ 0200312c
    beq .L_0200316c @ 02003130
    ldr r3, [r3, #4] @ 02003134
    cmp r3, #0 @ 02003138
    beq .L_02003154 @ 0200313c
.L_02003140:
    mov r2, r3 @ 02003140
    ldr r3, [r3, #4] @ 02003144
    cmp r3, #0 @ 02003148
    bne .L_02003140 @ 0200314c
    str r2, [r5] @ 02003150
.L_02003154:
    ldr r0, [r5] @ 02003154
.L_02003158:
    ldr r4, [r0] @ 02003158
    bl .L_020826fc @ 0200315c
    subs r0, r4, #0 @ 02003160
    str r4, [r5] @ 02003164
    bne .L_02003158 @ 02003168
.L_0200316c:
    ldr r3, [pc, #0x24] @ 0200316c
    mov r1, #0 @ 02003170
    str r1, [r3] @ 02003174
    ldr r2, [pc, #0x1c] @ 02003178
    ldr r3, [pc, #0x1c] @ 0200317c
    str r1, [r5] @ 02003180
    str r1, [r3] @ 02003184
    str r1, [r2] @ 02003188
    add sp, sp, #4 @ 0200318c
    pop {r4, r5, pc} @ 02003190
    .byte 0xf0, 0x8f, 0x09, 0x02, 0xd8, 0x8f, 0x09, 0x02, 0xd4, 0x8f, 0x09, 0x02, 0xf4, 0x8f, 0x09, 0x02 @ 02003194
.L_020031a4:
@ FUN_020031a4 at 0x020031a4
    push {r4, r5, r6, r7, lr} @ 020031a4
    mov r7, r1 @ 020031a8
    sub sp, sp, #4 @ 020031ac
    mov r6, r0 @ 020031b0
    bl .L_02083a6c @ 020031b4
    cmp r7, #2 @ 020031b8
    beq .L_020031dc @ 020031bc
    add r3, r6, r0 @ 020031c0
    sub r4, r3, #4 @ 020031c4
    ldr r0, [pc, #0xc0] @ 020031c8
    mov r1, r4 @ 020031cc
    bl .L_02083638 @ 020031d0
    cmp r0, #0 @ 020031d4
    bne .L_02003250 @ 020031d8
.L_020031dc:
    ldr r5, [pc, #0xb0] @ 020031dc
    ldr r4, [r5] @ 020031e0
    cmp r4, #0 @ 020031e4
    beq .L_0200327c @ 020031e8
    mov r0, #0x10c @ 020031ec
    bl .L_02082724 @ 020031f0
    ldr r2, [r5] @ 020031f4
    str r0, [r4] @ 020031f8
    ldr r3, [r2] @ 020031fc
    str r2, [r3, #4] @ 02003200
    str r3, [r5] @ 02003204
.L_02003208:
    ldr r0, [r5] @ 02003208
    mov r1, r6 @ 0200320c
    add r0, r0, #0xc @ 02003210
    bl .L_020838bc @ 02003214
    ldr r2, [pc, #0x78] @ 02003218
    ldr r0, [r5] @ 0200321c
    ldr r3, [r2] @ 02003220
    str r7, [r0, #8] @ 02003224
    cmp r3, #0 @ 02003228
    mov r3, #0 @ 0200322c
    str r3, [r0] @ 02003230
    streq r0, [r2] @ 02003234
    ldr r2, [pc, #0x5c] @ 02003238
    ldr r3, [r2] @ 0200323c
    add r3, r3, #1 @ 02003240
    str r3, [r2] @ 02003244
.L_02003248:
    add sp, sp, #4 @ 02003248
    pop {r4, r5, r6, r7, pc} @ 0200324c
.L_02003250:
    ldr r0, [pc, #0x48] @ 02003250
    mov r1, r4 @ 02003254
    bl .L_02083638 @ 02003258
    cmp r0, #0 @ 0200325c
    beq .L_020031dc @ 02003260
    mov r1, r4 @ 02003264
    ldr r0, [pc, #0x34] @ 02003268
    bl .L_02083638 @ 0200326c
    cmp r0, #0 @ 02003270
    beq .L_020031dc @ 02003274
    b .L_02003248 @ 02003278
.L_0200327c:
    mov r0, #0x10c @ 0200327c
    bl .L_02082724 @ 02003280
    str r4, [r0, #4] @ 02003284
    str r0, [r5] @ 02003288
    b .L_02003208 @ 0200328c
    .byte 0x0c, 0xf2, 0x08, 0x02, 0xf4, 0x8f, 0x09, 0x02, 0xf0, 0x8f, 0x09, 0x02, 0xd4, 0x8f, 0x09, 0x02 @ 02003290
    .byte 0x14, 0xf2, 0x08, 0x02, 0x1c, 0xf2, 0x08, 0x02 @ 020032a0
.L_020032a8:
@ FUN_020032a8 at 0x020032a8
    push {r4, r5, r6, lr} @ 020032a8
    sub sp, sp, #0x48 @ 020032ac
    bl .L_0200311c @ 020032b0
    ldr r0, [pc, #0xc8] @ 020032b4
    bl .L_020857d4 @ 020032b8
    ldr r4, [pc, #0xc4] @ 020032bc
    add r5, sp, #4 @ 020032c0
    mov r6, r4 @ 020032c4
    str r0, [r4] @ 020032c8
.L_020032cc:
    ldr r1, [pc, #0xb8] @ 020032cc
    mov r2, r5 @ 020032d0
    ldr r0, [r4] @ 020032d4
    bl .L_020856f0 @ 020032d8
    cmp r0, #0 @ 020032dc
    ldr r1, [pc, #0x9c] @ 020032e0
    ldr r0, [pc, #0xa0] @ 020032e4
    bne .L_02003330 @ 020032e8
.L_020032ec:
    bl .L_020837ec @ 020032ec
    cmp r0, #0 @ 020032f0
    ldr r0, [pc, #0x90] @ 020032f4
    beq .L_020032cc @ 020032f8
    ldr r3, [sp, #0xc] @ 020032fc
    tst r3, #0x4000 @ 02003300
    moveq r1, #1 @ 02003304
    movne r1, #2 @ 02003308
    bl .L_020031a4 @ 0200330c
    ldr r1, [pc, #0x74] @ 02003310
    mov r2, r5 @ 02003314
    ldr r0, [r4] @ 02003318
    bl .L_020856f0 @ 0200331c
    cmp r0, #0 @ 02003320
    ldr r1, [pc, #0x58] @ 02003324
    ldr r0, [pc, #0x5c] @ 02003328
    beq .L_020032ec @ 0200332c
.L_02003330:
    ldr r2, [pc, #0x58] @ 02003330
    ldr r4, [pc, #0x58] @ 02003334
    ldr r3, [r2] @ 02003338
    ldr r2, [pc, #0x54] @ 0200333c
    sub r3, r3, #1 @ 02003340
    lsr r3, r3, #4 @ 02003344
    add r3, r3, #1 @ 02003348
    str r3, [r2] @ 0200334c
    ldr r1, [pc, #0x44] @ 02003350
    ldr r3, [pc, #0x44] @ 02003354
    mov ip, #0 @ 02003358
    ldrb r0, [r4] @ 0200335c
    str ip, [r3] @ 02003360
    str ip, [r1] @ 02003364
    bl .L_02006b90 @ 02003368
    mov r3, #4 @ 0200336c
    ldr r0, [r6] @ 02003370
    strb r3, [r4] @ 02003374
    bl .L_02085760 @ 02003378
    add sp, sp, #0x48 @ 0200337c
    pop {r4, r5, r6, pc} @ 02003380
    .byte 0x24, 0xf2, 0x08, 0x02, 0x14, 0xb6, 0x3c, 0x02, 0x10, 0xb5, 0x3c, 0x02, 0xd4, 0x8f, 0x09, 0x02 @ 02003384
    .byte 0x44, 0xf3, 0x08, 0x02, 0xd8, 0x8f, 0x09, 0x02, 0xe4, 0x8f, 0x09, 0x02, 0xe0, 0x8f, 0x09, 0x02 @ 02003394
.L_020033a4:
@ FUN_020033a4 at 0x020033a4
    push {r4, r5, lr} @ 020033a4
    ldr r3, [pc, #0xec] @ 020033a8
    sub sp, sp, #4 @ 020033ac
    ldr r2, [r3] @ 020033b0
    mov r1, r0 @ 020033b4
    cmp r2, r0 @ 020033b8
    bls .L_02003484 @ 020033bc
    ldr r3, [pc, #0xd8] @ 020033c0
    ldr r0, [r3] @ 020033c4
    subs r2, r0, #0 @ 020033c8
    movne r2, #1 @ 020033cc
    cmp r1, #0 @ 020033d0
    cmpne r0, #0 @ 020033d4
    beq .L_020033fc @ 020033d8
    mov r3, #0 @ 020033dc
.L_020033e0:
    ldr r0, [r0] @ 020033e0
    add r3, r3, #1 @ 020033e4
    subs r2, r0, #0 @ 020033e8
    movne r2, #1 @ 020033ec
    cmp r0, #0 @ 020033f0
    cmpne r1, r3 @ 020033f4
    bhi .L_020033e0 @ 020033f8
.L_020033fc:
    cmp r2, #0 @ 020033fc
    moveq r0, r2 @ 02003400
    beq .L_02003470 @ 02003404
    ldr r3, [r0, #8] @ 02003408
    cmp r3, #2 @ 0200340c
    beq .L_02003478 @ 02003410
    add r4, r0, #0xc @ 02003414
    bl .L_020858a4 @ 02003418
    mov r0, r4 @ 0200341c
    bl .L_0200276c @ 02003420
    mov r0, r4 @ 02003424
    ldr r1, [pc, #0x74] @ 02003428
    bl .L_02081588 @ 0200342c
    mov r1, r4 @ 02003430
    mov r5, r0 @ 02003434
    bl .L_02001d40 @ 02003438
    mov r3, r0 @ 0200343c
    mov r0, r5 @ 02003440
    and r4, r3, #0xff @ 02003444
    bl .L_02081020 @ 02003448
    ldr r3, [pc, #0x54] @ 0200344c
    ldr r0, [r3] @ 02003450
    ldrb r2, [r0, #0x265] @ 02003454
    cmp r2, #0 @ 02003458
    bne .L_0200348c @ 0200345c
.L_02003460:
    ldr r3, [pc, #0x44] @ 02003460
    mov r2, #0 @ 02003464
    str r2, [r3] @ 02003468
    mov r0, r4 @ 0200346c
.L_02003470:
    add sp, sp, #4 @ 02003470
    pop {r4, r5, pc} @ 02003474
.L_02003478:
    add r0, r0, #0xc @ 02003478
    bl .L_0208553c @ 0200347c
    bl .L_020032a8 @ 02003480
.L_02003484:
    mov r0, #0 @ 02003484
    b .L_02003470 @ 02003488
.L_0200348c:
    ldr r1, [r0, #0x248] @ 0200348c
    ldr r2, [r0, #0x244] @ 02003490
    bl .L_02001948 @ 02003494
    b .L_02003460 @ 02003498
    .byte 0xd4, 0x8f, 0x09, 0x02, 0xf0, 0x8f, 0x09, 0x02, 0x74, 0xf0, 0x08, 0x02, 0xc8, 0x8f, 0x09, 0x02 @ 0200349c
    .byte 0xf8, 0x8f, 0x09, 0x02 @ 020034ac
.L_020034b0:
@ FUN_020034b0 at 0x020034b0
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 020034b0
    ldr r4, [pc, #0x2d4] @ 020034b4
    sub sp, sp, #4 @ 020034b8
    ldrb r3, [r4] @ 020034bc
    mov sb, r0 @ 020034c0
    cmp r3, #0 @ 020034c4
    bne .L_0200373c @ 020034c8
.L_020034cc:
    ldr r8, [pc, #0x2c0] @ 020034cc
    mov r3, #4 @ 020034d0
    strb r3, [r8] @ 020034d4
.L_020034d8:
    ldr fp, [pc, #0x2b8] @ 020034d8
    bl .L_020032a8 @ 020034dc
    ldrb r0, [r8] @ 020034e0
    bl .L_02006784 @ 020034e4
    ldr r0, [fp] @ 020034e8
    mov r7, #0 @ 020034ec
    bl .L_02002990 @ 020034f0
    cmp sb, #0 @ 020034f4
    ldr r6, [pc, #0x29c] @ 020034f8
    mov sl, r7 @ 020034fc
    bne .L_02003610 @ 02003500
.L_02003504:
    bl .L_020858ec @ 02003504
    bl .L_020858f8 @ 02003508
    tst r0, #0x80 @ 0200350c
    mov r5, r0 @ 02003510
    beq .L_02003644 @ 02003514
.L_02003518:
    ldrb r1, [r8] @ 02003518
    cmp r1, #0x12 @ 0200351c
    bhi .L_0200369c @ 02003520
    ldr r2, [pc, #0x274] @ 02003524
    ldr r3, [r2] @ 02003528
    add r3, r3, #3 @ 0200352c
    cmp r1, r3 @ 02003530
    bhs .L_02003544 @ 02003534
    sub r3, sl, #1 @ 02003538
    cmp r3, #7 @ 0200353c
    bhi .L_0200376c @ 02003540
.L_02003544:
    add sl, sl, #1 @ 02003544
.L_02003548:
    tst r5, #0x40 @ 02003548
    beq .L_02003650 @ 0200354c
.L_02003550:
    ldrb r3, [r8] @ 02003550
    cmp r3, #4 @ 02003554
    bls .L_020036bc @ 02003558
    sub r3, r7, #1 @ 0200355c
    cmp r3, #7 @ 02003560
    bhi .L_02003720 @ 02003564
.L_02003568:
    add r7, r7, #1 @ 02003568
.L_0200356c:
    tst r5, #0x20 @ 0200356c
    beq .L_02003580 @ 02003570
    ldr r3, [r6] @ 02003574
    tst r3, #0x20 @ 02003578
    beq .L_020036d8 @ 0200357c
.L_02003580:
    tst r5, #0x10 @ 02003580
    beq .L_02003594 @ 02003584
    ldr r3, [r6] @ 02003588
    tst r3, #0x10 @ 0200358c
    beq .L_020036e4 @ 02003590
.L_02003594:
    tst r5, #2 @ 02003594
    beq .L_020035a8 @ 02003598
    ldr r3, [r6] @ 0200359c
    tst r3, #2 @ 020035a0
    beq .L_020036f0 @ 020035a4
.L_020035a8:
    ands r3, r5, #1 @ 020035a8
    ldrne r3, [r6] @ 020035ac
    moveq r1, r3 @ 020035b0
    eorne r3, r3, #1 @ 020035b4
    andne r1, r3, #1 @ 020035b8
    tst r5, #4 @ 020035bc
    beq .L_020035d8 @ 020035c0
    ldr r3, [r6] @ 020035c4
    tst r3, #4 @ 020035c8
    bne .L_020035d8 @ 020035cc
    cmp sb, #0 @ 020035d0
    bne .L_02003774 @ 020035d4
.L_020035d8:
    ldrb r2, [r8] @ 020035d8
    ldr r3, [pc, #0x1c0] @ 020035dc
    sub r2, r2, #4 @ 020035e0
    cmp r1, #0 @ 020035e4
    str r2, [r3] @ 020035e8
    bne .L_02003658 @ 020035ec
.L_020035f0:
    bl .L_020858a4 @ 020035f0
    bl .L_020858a4 @ 020035f4
    bl .L_020858a4 @ 020035f8
    ldr r0, [fp] @ 020035fc
    str r5, [r6] @ 02003600
    bl .L_02002990 @ 02003604
    cmp sb, #0 @ 02003608
    beq .L_02003504 @ 0200360c
.L_02003610:
    ldr r0, [pc, #0x190] @ 02003610
    mov r1, #0x15 @ 02003614
    mov r2, #1 @ 02003618
    bl .L_0200da3c @ 0200361c
    ldr r0, [pc, #0x184] @ 02003620
    mov r1, #0x16 @ 02003624
    mov r2, #1 @ 02003628
    bl .L_0200da3c @ 0200362c
    bl .L_020858ec @ 02003630
    bl .L_020858f8 @ 02003634
    tst r0, #0x80 @ 02003638
    mov r5, r0 @ 0200363c
    bne .L_02003518 @ 02003640
.L_02003644:
    tst r5, #0x40 @ 02003644
    mov sl, #0 @ 02003648
    bne .L_02003550 @ 0200364c
.L_02003650:
    mov r7, #0 @ 02003650
    b .L_0200356c @ 02003654
.L_02003658:
    ldr r0, [fp] @ 02003658
    add r0, r2, r0, lsl #4 @ 0200365c
    bl .L_020033a4 @ 02003660
    mov r4, r0 @ 02003664
    bl .L_020858a4 @ 02003668
    bl .L_020858a4 @ 0200366c
    bl .L_020858a4 @ 02003670
    cmp r4, #0 @ 02003674
    beq .L_0200372c @ 02003678
    bl .L_020858a4 @ 0200367c
    bl .L_020858a4 @ 02003680
    bl .L_020858a4 @ 02003684
    str r5, [r6] @ 02003688
    bl .L_0200311c @ 0200368c
.L_02003690:
    mov r0, #1 @ 02003690
.L_02003694:
    add sp, sp, #4 @ 02003694
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02003698
.L_0200369c:
    cmp r1, #0x13 @ 0200369c
    bne .L_02003548 @ 020036a0
    ldr r3, [r6] @ 020036a4
    ands r4, r3, #0x80 @ 020036a8
    bne .L_02003644 @ 020036ac
    bl .L_02002b8c @ 020036b0
    mov sl, r4 @ 020036b4
    b .L_02003548 @ 020036b8
.L_020036bc:
    bne .L_02003568 @ 020036bc
    ldr r3, [r6] @ 020036c0
    ands r4, r3, #0x40 @ 020036c4
    bne .L_02003650 @ 020036c8
    bl .L_02002088 @ 020036cc
    mov r7, r4 @ 020036d0
    b .L_0200356c @ 020036d4
.L_020036d8:
    bl .L_02002088 @ 020036d8
    bl .L_020858a4 @ 020036dc
    b .L_02003580 @ 020036e0
.L_020036e4:
    bl .L_02002b8c @ 020036e4
    bl .L_020858a4 @ 020036e8
    b .L_02003594 @ 020036ec
.L_020036f0:
    ldr r0, [pc, #0xb8] @ 020036f0
    bl .L_0208553c @ 020036f4
    bl .L_020032a8 @ 020036f8
    ldrb r0, [r8] @ 020036fc
    bl .L_02006b90 @ 02003700
    mov r3, #4 @ 02003704
    mov r0, r3 @ 02003708
    strb r3, [r8] @ 0200370c
    bl .L_02006784 @ 02003710
    bl .L_020858a4 @ 02003714
    bl .L_020858a4 @ 02003718
    b .L_020035a8 @ 0200371c
.L_02003720:
    bl .L_02002c28 @ 02003720
    add r7, r7, #1 @ 02003724
    b .L_0200356c @ 02003728
.L_0200372c:
    ldr r3, [pc, #0x60] @ 0200372c
    ldrb r0, [r3] @ 02003730
    bl .L_02006784 @ 02003734
    b .L_020035f0 @ 02003738
.L_0200373c:
    bl .L_02085910 @ 0200373c
    cmp r0, #0 @ 02003740
    movne r3, #0 @ 02003744
    strbne r3, [r4] @ 02003748
    bne .L_020034cc @ 0200374c
    ldrb r2, [r4] @ 02003750
    ldr r8, [pc, #0x38] @ 02003754
    mov r3, #4 @ 02003758
    cmp r2, #0 @ 0200375c
    strb r3, [r8] @ 02003760
    beq .L_020034d8 @ 02003764
    b .L_02003690 @ 02003768
.L_0200376c:
    bl .L_02002be8 @ 0200376c
    b .L_02003544 @ 02003770
.L_02003774:
    ldrb r0, [r8] @ 02003774
    bl .L_02006b90 @ 02003778
    bl .L_0200311c @ 0200377c
    ldr r3, [pc, #0x14] @ 02003780
    mov r0, #2 @ 02003784
    str r5, [r3] @ 02003788
    b .L_02003694 @ 0200378c
    .byte 0x46, 0xf3, 0x08, 0x02, 0x44, 0xf3, 0x08, 0x02, 0xe0, 0x8f, 0x09, 0x02, 0xd0, 0x8f, 0x09, 0x02 @ 02003790
    .byte 0xdc, 0x8f, 0x09, 0x02, 0xe4, 0x8f, 0x09, 0x02, 0x28, 0xf2, 0x08, 0x02, 0x40, 0xf2, 0x08, 0x02 @ 020037a0
    .byte 0x54, 0xf2, 0x08, 0x02 @ 020037b0
.L_020037b4:
@ FUN_020037b4 at 0x020037b4
    mov ip, #1 @ 020037b4
    mov r3, #0 @ 020037b8
    mov r2, #0x7f @ 020037bc
    mvn r1, #0 @ 020037c0
    strb ip, [r0, #0x2b] @ 020037c4
    strb r2, [r0, #0x19] @ 020037c8
    strb r1, [r0, #0x1b] @ 020037cc
    strb r3, [r0, #0x1e] @ 020037d0
    str r3, [r0, #8] @ 020037d4
    str r3, [r0] @ 020037d8
    str r3, [r0, #0xc] @ 020037dc
    strb r3, [r0, #0x1a] @ 020037e0
    strb r3, [r0, #0x1c] @ 020037e4
    strb r3, [r0, #0x1d] @ 020037e8
    strb r3, [r0, #0x1f] @ 020037ec
    strb ip, [r0, #0x20] @ 020037f0
    strb ip, [r0, #0x21] @ 020037f4
    strb ip, [r0, #0x22] @ 020037f8
    strb ip, [r0, #0x23] @ 020037fc
    strb ip, [r0, #0x24] @ 02003800
    strb ip, [r0, #0x25] @ 02003804
    strb ip, [r0, #0x26] @ 02003808
    strb ip, [r0, #0x27] @ 0200380c
    strb ip, [r0, #0x28] @ 02003810
    strb ip, [r0, #0x29] @ 02003814
    strb ip, [r0, #0x2a] @ 02003818
    bx lr @ 0200381c
.L_02003820:
    strb r1, [r0, #0x1a] @ 02003820
    bx lr @ 02003824
.L_02003828:
@ FUN_02003828 at 0x02003828
    push {r4, lr} @ 02003828
    ldrb r3, [r0, #0x1e] @ 0200382c
    mov r4, r0 @ 02003830
    cmp r3, #0 @ 02003834
    bne .L_020038a8 @ 02003838
    ldrb r3, [r0, #0x18] @ 0200383c
    cmp r3, #0 @ 02003840
    beq .L_0200396c @ 02003844
    ldr r3, [r0, #0xc] @ 02003848
    cmp r3, #3 @ 0200384c
    beq .L_020039d0 @ 02003850
    cmp r3, #4 @ 02003854
    beq .L_02003a08 @ 02003858
    ldrb r3, [r0, #0x20] @ 0200385c
    ldrb r2, [r0, #0x2a] @ 02003860
    ldrb ip, [r0, #0x23] @ 02003864
    ldrb r1, [r0, #0x1a] @ 02003868
    lsl r3, r3, #4 @ 0200386c
    orr r3, r3, r2, lsl #5 @ 02003870
    ldrb r0, [r0, #0x24] @ 02003874
    orr r3, r3, ip @ 02003878
    mvn r2, r1 @ 0200387c
    ldrb ip, [r4, #0x19] @ 02003880
    orr r3, r3, r0, lsl #1 @ 02003884
    and r2, r2, #0xff @ 02003888
    and r1, r1, ip @ 0200388c
    and r3, r3, r2 @ 02003890
    ldr ip, [pc, #0x1a8] @ 02003894
    orr r1, r1, r3 @ 02003898
    str r1, [ip] @ 0200389c
.L_020038a0:
    ldr r0, [ip] @ 020038a0
    pop {r4, pc} @ 020038a4
.L_020038a8:
    ldrb r3, [r0, #0x18] @ 020038a8
    cmp r3, #0 @ 020038ac
    beq .L_0200391c @ 020038b0
    ldr r3, [r0, #0xc] @ 020038b4
    cmp r3, #3 @ 020038b8
    beq .L_020039ac @ 020038bc
    ldrb r2, [r0, #0x21] @ 020038c0
    ldrb r1, [r0, #0x25] @ 020038c4
    ldrb ip, [r4, #0x26] @ 020038c8
    ldrb r0, [r0, #0x22] @ 020038cc
    ldrb lr, [r4, #0x23] @ 020038d0
    ldrb r3, [r4, #0x24] @ 020038d4
    lsl r2, r2, #4 @ 020038d8
    lsl r1, r1, #2 @ 020038dc
.L_020038e0:
    orr r2, r2, r0, lsl #5 @ 020038e0
    orr r1, r1, ip, lsl #3 @ 020038e4
    ldrb r0, [r4, #0x1a] @ 020038e8
    ldrb ip, [r4, #0x19] @ 020038ec
    orr r2, r2, r3, lsl #1 @ 020038f0
    orr r1, r1, lr @ 020038f4
    mvn r3, r0 @ 020038f8
    orr r2, r2, r1 @ 020038fc
    and r2, r2, r3 @ 02003900
    and r0, r0, ip @ 02003904
    ldr ip, [pc, #0x134] @ 02003908
    orr r0, r0, r2 @ 0200390c
    str r0, [ip] @ 02003910
    ldr r0, [ip] @ 02003914
    pop {r4, pc} @ 02003918
.L_0200391c:
    ldrb r3, [r0, #0x21] @ 0200391c
    ldrb r1, [r0, #0x25] @ 02003920
    ldrb ip, [r4, #0x26] @ 02003924
    ldrb r0, [r0, #0x22] @ 02003928
    ldrb r2, [r4, #0x24] @ 0200392c
    lsl r3, r3, #4 @ 02003930
    lsl r1, r1, #2 @ 02003934
    ldrb lr, [r4, #0x23] @ 02003938
    orr r3, r3, r0, lsl #5 @ 0200393c
    orr r1, r1, ip, lsl #3 @ 02003940
    ldrb r0, [r4, #0x1a] @ 02003944
    orr r3, r3, r2, lsl #1 @ 02003948
    orr r1, r1, lr @ 0200394c
    ldrb ip, [r4, #0x19] @ 02003950
    mvn r2, r0 @ 02003954
    orr r3, r3, r1 @ 02003958
    and r3, r3, r2 @ 0200395c
    and r0, r0, ip @ 02003960
    orr r0, r0, r3 @ 02003964
    pop {r4, pc} @ 02003968
.L_0200396c:
    ldrb r3, [r0, #0x20] @ 0200396c
    ldrb r2, [r0, #0x2a] @ 02003970
    ldrb r1, [r4, #0x1a] @ 02003974
    ldrb r0, [r0, #0x23] @ 02003978
    lsl r3, r3, #4 @ 0200397c
    orr r3, r3, r2, lsl #5 @ 02003980
    ldrb ip, [r4, #0x24] @ 02003984
    orr r3, r3, r0 @ 02003988
    mvn r2, r1 @ 0200398c
    ldrb r0, [r4, #0x19] @ 02003990
    orr r3, r3, ip, lsl #1 @ 02003994
    and r2, r2, #0xff @ 02003998
    and r3, r3, r2 @ 0200399c
    and r1, r1, r0 @ 020039a0
    orr r0, r1, r3 @ 020039a4
    pop {r4, pc} @ 020039a8
.L_020039ac:
    ldrb r2, [r0, #0x21] @ 020039ac
    ldrb r1, [r0, #0x27] @ 020039b0
    ldrb ip, [r4, #0x2b] @ 020039b4
    ldrb r0, [r0, #0x22] @ 020039b8
    ldrb lr, [r4, #0x28] @ 020039bc
    ldrb r3, [r4, #0x29] @ 020039c0
    lsl r2, r2, #4 @ 020039c4
    lsl r1, r1, #2 @ 020039c8
    b .L_020038e0 @ 020039cc
.L_020039d0:
    ldrb r3, [r0, #0x20] @ 020039d0
    ldrb r2, [r0, #0x1a] @ 020039d4
    ldrb r0, [r0, #0x2a] @ 020039d8
    ldrb ip, [r4, #0x19] @ 020039dc
    lsl r3, r3, #4 @ 020039e0
    mvn r1, r2 @ 020039e4
    orr r3, r3, r0, lsl #5 @ 020039e8
    and r2, r2, ip @ 020039ec
    and r3, r3, r1 @ 020039f0
    orr r2, r2, r3 @ 020039f4
    ldr ip, [pc, #0x44] @ 020039f8
    and r2, r2, #0xf0 @ 020039fc
    str r2, [ip] @ 02003a00
    b .L_020038a0 @ 02003a04
.L_02003a08:
    ldrb r2, [r0, #0x20] @ 02003a08
    ldrb r3, [r0, #0x1a] @ 02003a0c
    ldrb r0, [r0, #0x2a] @ 02003a10
    ldrb ip, [r4, #0x19] @ 02003a14
    lsl r2, r2, #4 @ 02003a18
    mvn r1, r3 @ 02003a1c
    orr r2, r2, r0, lsl #5 @ 02003a20
    and r3, r3, ip @ 02003a24
    and r2, r2, r1 @ 02003a28
    orr r3, r3, r2 @ 02003a2c
    and r3, r3, #0xf0 @ 02003a30
    ldr ip, [pc, #8] @ 02003a34
    orr r3, r3, #0xf @ 02003a38
    str r3, [ip] @ 02003a3c
    b .L_020038a0 @ 02003a40
    .byte 0xfc, 0x8f, 0x09, 0x02 @ 02003a44
.L_02003a48:
    ldrb r0, [r0, #0x1a] @ 02003a48
    bx lr @ 02003a4c
.L_02003a50:
@ FUN_02003a50 at 0x02003a50
    strb r1, [r0, #0x18] @ 02003a50
    bx lr @ 02003a54
    .byte 0x2b, 0x00, 0xd0, 0xe5, 0x01, 0x00, 0x70, 0xe2, 0x00, 0x00, 0xa0, 0x33, 0x1e, 0xff, 0x2f, 0xe1 @ 02003a58
.L_02003a68:
    push {r4, lr} @ 02003a68
    and r1, r1, #0xff @ 02003a6c
    ldrb r2, [r0, #0x18] @ 02003a70
    mov r4, r0 @ 02003a74
    lsr r3, r1, #6 @ 02003a78
    ldrb r0, [r0, #0x1e] @ 02003a7c
    and r3, r3, #1 @ 02003a80
    cmp r2, #0 @ 02003a84
    strb r0, [r4, #0x1f] @ 02003a88
    strb r3, [r4, #0x1e] @ 02003a8c
    strb r1, [r4, #0x19] @ 02003a90
    popeq {r4, pc} @ 02003a94
    bl .L_0200052c @ 02003a98
    ldr r3, [r4, #8] @ 02003a9c
    str r0, [r4, #4] @ 02003aa0
    rsb r3, r3, r0 @ 02003aa4
    cmp r3, #0x2000 @ 02003aa8
    str r3, [r4] @ 02003aac
    movhs r3, #0 @ 02003ab0
    strhs r3, [r4, #0xc] @ 02003ab4
    ldrh r3, [r4, #0x1e] @ 02003ab8
    strhs r0, [r4, #8] @ 02003abc
    cmp r3, #0x100 @ 02003ac0
    ldreq r3, [r4, #0xc] @ 02003ac4
    addeq r3, r3, #1 @ 02003ac8
    streq r3, [r4, #0xc] @ 02003acc
    pop {r4, pc} @ 02003ad0
.L_02003ad4:
@ FUN_02003ad4 at 0x02003ad4
    push {r4, lr} @ 02003ad4
    mov r0, #0x2c @ 02003ad8
    bl .L_02082724 @ 02003adc
    mov r4, r0 @ 02003ae0
    bl .L_020037b4 @ 02003ae4
    mov r0, r4 @ 02003ae8
    pop {r4, pc} @ 02003aec
