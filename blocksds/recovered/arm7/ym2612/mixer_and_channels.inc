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
