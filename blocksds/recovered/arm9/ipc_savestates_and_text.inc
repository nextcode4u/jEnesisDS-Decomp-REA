@ FUN_0200c4a8 at 0x0200c4a8
    push {r4, lr} @ 0200c4a8
.L_0200c4ac:
    ldr r3, [pc, #0x5c] @ 0200c4ac
    ldr r4, [pc, #0x5c] @ 0200c4b0
    ldrh r2, [r3, #0x84] @ 0200c4b4
    tst r2, #0x100 @ 0200c4b8
    bne .L_0200c50c @ 0200c4bc
.L_0200c4c0:
    ldr r2, [pc, #0x50] @ 0200c4c0
    mov r3, #0x4100000 @ 0200c4c4
    ldr ip, [r3] @ 0200c4c8
    ldr r2, [r2] @ 0200c4cc
    ldr r3, [pc, #0x44] @ 0200c4d0
    bic lr, ip, #0xff000000 @ 0200c4d4
    cmp r2, #0 @ 0200c4d8
    lsr ip, ip, #0x18 @ 0200c4dc
    mov r1, r4 @ 0200c4e0
    mov r0, ip @ 0200c4e4
    str ip, [r3] @ 0200c4e8
    str lr, [r4] @ 0200c4ec
    beq .L_0200c4ac @ 0200c4f0
    blx r2 @ 0200c4f4
    ldr r3, [pc, #0x10] @ 0200c4f8
    ldr r4, [pc, #0x10] @ 0200c4fc
    ldrh r2, [r3, #0x84] @ 0200c500
    tst r2, #0x100 @ 0200c504
    beq .L_0200c4c0 @ 0200c508
.L_0200c50c:
    pop {r4, pc} @ 0200c50c
    .byte 0x00, 0x01, 0x00, 0x04, 0x3c, 0x4c, 0x0b, 0x02, 0xb8, 0xde, 0x3d, 0x02, 0x38, 0x4c, 0x0b, 0x02 @ 0200c510
.L_0200c520:
@ FUN_0200c520 at 0x0200c520
    ldr r3, [pc, #4] @ 0200c520
    str r0, [r3] @ 0200c524
    bx lr @ 0200c528
    .byte 0xb8, 0xde, 0x3d, 0x02, 0x20, 0x20, 0x9f, 0xe5, 0x00, 0xc0, 0xa0, 0xe1, 0xb4, 0x38, 0xd2, 0xe1 @ 0200c52c
    .byte 0x02, 0x00, 0x13, 0xe2, 0xfc, 0xff, 0xff, 0x1a, 0xff, 0x34, 0xc1, 0xe3, 0x0c, 0x3c, 0x83, 0xe1 @ 0200c53c
    .byte 0x01, 0x23, 0xa0, 0xe3, 0x88, 0x31, 0x82, 0xe5, 0x1e, 0xff, 0x2f, 0xe1, 0x00, 0x01, 0x00, 0x04 @ 0200c54c
.L_0200c55c:
@ FUN_0200c55c at 0x0200c55c
    str lr, [sp, #-4]! @ 0200c55c
    ldr lr, [pc, #0x2c] @ 0200c560
    mov ip, #0 @ 0200c564
    ldrh r3, [lr, #0x84] @ 0200c568
    bic r1, r1, #0xff000000 @ 0200c56c
    tst r3, #2 @ 0200c570
    ldrne r3, [pc, #0x1c] @ 0200c574
    moveq ip, #1 @ 0200c578
    orr r2, r1, r0, lsl #24 @ 0200c57c
    moveq r3, #0x4000000 @ 0200c580
    mov r0, ip @ 0200c584
    strhne r3, [lr, #0x84] @ 0200c588
    streq r2, [r3, #0x188] @ 0200c58c
    .word 0xe49df004 @ 0200c590 pop {pc}
    .byte 0x00, 0x01, 0x00, 0x04, 0x08, 0x84, 0xff, 0xff @ 0200c594
.L_0200c59c:
@ FUN_0200c59c at 0x0200c59c
    str lr, [sp, #-4]! @ 0200c59c
    mov r0, #0x40000 @ 0200c5a0
    sub sp, sp, #4 @ 0200c5a4
    ldr r1, [pc, #0x1c] @ 0200c5a8
    bl .L_020858c8 @ 0200c5ac
    mov r0, #0x40000 @ 0200c5b0
    bl .L_020858bc @ 0200c5b4
    ldr r2, [pc, #0x10] @ 0200c5b8
    ldr r3, [pc, #0x10] @ 0200c5bc
    strh r2, [r3, #0x84] @ 0200c5c0
    add sp, sp, #4 @ 0200c5c4
    ldm sp!, {pc} @ 0200c5c8
    .byte 0xa8, 0xc4, 0x00, 0x02, 0x08, 0x84, 0xff, 0xff, 0x00, 0x01, 0x00, 0x04 @ 0200c5cc
.L_0200c5d8:
@ FUN_0200c5d8 at 0x0200c5d8
    ldr r3, [pc, #0x28] @ 0200c5d8
    mov r1, #0x1000 @ 0200c5dc
    add r2, r3, #0x400 @ 0200c5e0
.L_0200c5e4:
    str r1, [r3], #4 @ 0200c5e4
    cmp r3, r2 @ 0200c5e8
    bne .L_0200c5e4 @ 0200c5ec
    ldr r3, [pc, #0x14] @ 0200c5f0
    add r2, r3, #0x4000 @ 0200c5f4
.L_0200c5f8:
    str r1, [r3], #4 @ 0200c5f8
    cmp r3, r2 @ 0200c5fc
    bne .L_0200c5f8 @ 0200c600
    bx lr @ 0200c604
    .byte 0xf4, 0xae, 0x3e, 0x02, 0xec, 0x2e, 0x3e, 0x02 @ 0200c608
.L_0200c610:
@ FUN_0200c610 at 0x0200c610
    push {r4, r5, r6, r7, r8, sl, lr} @ 0200c610
    ldr r5, [pc, #0x128] @ 0200c614
    ldr sl, [pc, #0x128] @ 0200c618
    ldrb r3, [r0, r5] @ 0200c61c
    ldr r7, [pc, #0x124] @ 0200c620
    ldr r8, [pc, #0x124] @ 0200c624
    mov r4, #1 @ 0200c628
    mov r6, r0 @ 0200c62c
    add r1, r3, #0x1000 @ 0200c630
    mov r2, #0x1000 @ 0200c634
    mov r3, #0 @ 0200c638
    cmp r4, #0 @ 0200c63c
    add r1, r1, #1 @ 0200c640
    add r0, r0, r5 @ 0200c644
    str r2, [r7, r6, lsl #2] @ 0200c648
    str r3, [r8] @ 0200c64c
    str r2, [sl, r6, lsl #2] @ 0200c650
    blt .L_0200c6bc @ 0200c654
.L_0200c658:
    ldr lr, [r7, r1, lsl #2] @ 0200c658
    cmp lr, #0x1000 @ 0200c65c
    beq .L_0200c6dc @ 0200c660
.L_0200c664:
    add r1, lr, r5 @ 0200c664
    mov ip, #1 @ 0200c668
.L_0200c66c:
    ldrb r3, [r1, #1] @ 0200c66c
    ldrb r2, [ip, r0] @ 0200c670
    add r1, r1, #1 @ 0200c674
    subs r4, r2, r3 @ 0200c678
    bne .L_0200c68c @ 0200c67c
    add ip, ip, #1 @ 0200c680
    cmp ip, #0x12 @ 0200c684
    bne .L_0200c66c @ 0200c688
.L_0200c68c:
    ldr r3, [r8] @ 0200c68c
    cmp r3, ip @ 0200c690
    bge .L_0200c6b0 @ 0200c694
    ldr r2, [pc, #0xb4] @ 0200c698
    ldr r3, [pc, #0xac] @ 0200c69c
    cmp ip, #0x11 @ 0200c6a0
    str lr, [r2] @ 0200c6a4
    str ip, [r3] @ 0200c6a8
    bgt .L_0200c6f0 @ 0200c6ac
.L_0200c6b0:
    cmp r4, #0 @ 0200c6b0
    mov r1, lr @ 0200c6b4
    bge .L_0200c658 @ 0200c6b8
.L_0200c6bc:
    ldr lr, [sl, r1, lsl #2] @ 0200c6bc
    cmp lr, #0x1000 @ 0200c6c0
    bne .L_0200c664 @ 0200c6c4
    ldr r3, [pc, #0x78] @ 0200c6c8
    ldr r2, [pc, #0x84] @ 0200c6cc
    str r6, [r3, r1, lsl #2] @ 0200c6d0
    str r1, [r2, r6, lsl #2] @ 0200c6d4
    pop {r4, r5, r6, r7, r8, sl, pc} @ 0200c6d8
.L_0200c6dc:
    ldr r3, [pc, #0x68] @ 0200c6dc
    ldr r2, [pc, #0x70] @ 0200c6e0
    str r6, [r3, r1, lsl #2] @ 0200c6e4
    str r1, [r2, r6, lsl #2] @ 0200c6e8
    pop {r4, r5, r6, r7, r8, sl, pc} @ 0200c6ec
.L_0200c6f0:
    ldr r2, [sl, lr, lsl #2] @ 0200c6f0
    ldr r3, [r7, lr, lsl #2] @ 0200c6f4
    ldr r0, [pc, #0x58] @ 0200c6f8
    str r3, [r7, r6, lsl #2] @ 0200c6fc
    str r2, [sl, r6, lsl #2] @ 0200c700
    ldr r3, [r0, lr, lsl #2] @ 0200c704
    ldr r2, [r7, lr, lsl #2] @ 0200c708
    ldr r1, [sl, lr, lsl #2] @ 0200c70c
    str r3, [r0, r6, lsl #2] @ 0200c710
    str r6, [r0, r1, lsl #2] @ 0200c714
    str r6, [r0, r2, lsl #2] @ 0200c718
    ldr r2, [r0, lr, lsl #2] @ 0200c71c
    ldr r3, [r7, r2, lsl #2] @ 0200c720
    cmp lr, r3 @ 0200c724
    ldreq r3, [pc, #0x1c] @ 0200c728
    streq r6, [r3, r2, lsl #2] @ 0200c72c
    ldrne r3, [pc, #0x10] @ 0200c730
    strne r6, [r3, r2, lsl #2] @ 0200c734
    mov r3, #0x1000 @ 0200c738
    str r3, [r0, lr, lsl #2] @ 0200c73c
    pop {r4, r5, r6, r7, r8, sl, pc} @ 0200c740
    .byte 0xc0, 0xde, 0x3d, 0x02, 0xe4, 0xee, 0x3d, 0x02, 0xf0, 0x6e, 0x3e, 0x02, 0x10, 0xb3, 0x3e, 0x02 @ 0200c744
    .byte 0x0c, 0xb3, 0x3e, 0x02, 0xec, 0x2e, 0x3e, 0x02 @ 0200c754
.L_0200c75c:
@ FUN_0200c75c at 0x0200c75c
    push {r4, r5, r6, lr} @ 0200c75c
    ldr r4, [pc, #0xb8] @ 0200c760
    ldr r3, [r4, r0, lsl #2] @ 0200c764
    cmp r3, #0x1000 @ 0200c768
    popeq {r4, r5, r6, pc} @ 0200c76c
    ldr lr, [pc, #0xac] @ 0200c770
    ldr ip, [lr, r0, lsl #2] @ 0200c774
    cmp ip, #0x1000 @ 0200c778
    beq .L_0200c814 @ 0200c77c
    ldr r5, [pc, #0xa0] @ 0200c780
    ldr r1, [r5, r0, lsl #2] @ 0200c784
    cmp r1, #0x1000 @ 0200c788
    beq .L_0200c7e8 @ 0200c78c
    ldr r3, [lr, r1, lsl #2] @ 0200c790
    cmp r3, #0x1000 @ 0200c794
    beq .L_0200c7d4 @ 0200c798
    mov ip, r1 @ 0200c79c
    mov r6, lr @ 0200c7a0
.L_0200c7a4:
    ldr ip, [lr, ip, lsl #2] @ 0200c7a4
    ldr r3, [lr, ip, lsl #2] @ 0200c7a8
    cmp r3, #0x1000 @ 0200c7ac
    bne .L_0200c7a4 @ 0200c7b0
    ldr r3, [r5, ip, lsl #2] @ 0200c7b4
    str r1, [r5, ip, lsl #2] @ 0200c7b8
    ldr r2, [r4, ip, lsl #2] @ 0200c7bc
    ldr r1, [r5, r0, lsl #2] @ 0200c7c0
    str r2, [r4, r3, lsl #2] @ 0200c7c4
    str r3, [r6, r2, lsl #2] @ 0200c7c8
    str ip, [r4, r1, lsl #2] @ 0200c7cc
    mov r1, ip @ 0200c7d0
.L_0200c7d4:
    ldr r2, [lr, r0, lsl #2] @ 0200c7d4
    mov ip, r1 @ 0200c7d8
    str r2, [lr, r1, lsl #2] @ 0200c7dc
    ldr r3, [lr, r0, lsl #2] @ 0200c7e0
    str r1, [r4, r3, lsl #2] @ 0200c7e4
.L_0200c7e8:
    ldr r3, [r4, r0, lsl #2] @ 0200c7e8
    str r3, [r4, ip, lsl #2] @ 0200c7ec
    ldr r2, [r4, r0, lsl #2] @ 0200c7f0
    ldr r3, [lr, r2, lsl #2] @ 0200c7f4
    cmp r0, r3 @ 0200c7f8
    ldreq r3, [pc, #0x20] @ 0200c7fc
    strne ip, [r5, r2, lsl #2] @ 0200c800
    streq ip, [r3, r2, lsl #2] @ 0200c804
    mov r3, #0x1000 @ 0200c808
    str r3, [r4, r0, lsl #2] @ 0200c80c
    pop {r4, r5, r6, pc} @ 0200c810
.L_0200c814:
    ldr r5, [pc, #0xc] @ 0200c814
    ldr ip, [r5, r0, lsl #2] @ 0200c818
    b .L_0200c7e8 @ 0200c81c
    .byte 0xec, 0x2e, 0x3e, 0x02, 0xf0, 0x6e, 0x3e, 0x02, 0xe4, 0xee, 0x3d, 0x02 @ 0200c820
.L_0200c82c:
@ FUN_0200c82c at 0x0200c82c
    ldr r3, [r0, #0xc] @ 0200c82c
    ldr r2, [r0, #8] @ 0200c830
    add r1, r3, #1 @ 0200c834
    cmp r3, r2 @ 0200c838
    ldrlo r3, [r0] @ 0200c83c
    strlo r1, [r0, #0xc] @ 0200c840
    mvn r2, #0 @ 0200c844
    ldrblo r2, [r3], #1 @ 0200c848
    strlo r3, [r0] @ 0200c84c
    mov r0, r2 @ 0200c850
    bx lr @ 0200c854
.L_0200c858:
@ FUN_0200c858 at 0x0200c858
    ldr r3, [r1, #0xc] @ 0200c858
    ldr r2, [r1, #8] @ 0200c85c
    add ip, r3, #1 @ 0200c860
    cmp r3, r2 @ 0200c864
    ldrlo r3, [r1] @ 0200c868
    strlo ip, [r1, #0xc] @ 0200c86c
    strblo r0, [r3], #1 @ 0200c870
    strlo r3, [r1] @ 0200c874
    bx lr @ 0200c878
@ FUN_0200c87c at 0x0200c87c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 0200c87c
    ldr fp, [pc, #0x2c8] @ 0200c880
    sub sp, sp, #0x24 @ 0200c884
    bl .L_0200c5d8 @ 0200c888
    add r2, fp, #0xfe0 @ 0200c88c
    add r2, r2, #0xe @ 0200c890
    mov r3, fp @ 0200c894
    mov r1, #0x20 @ 0200c898
.L_0200c89c:
    strb r1, [r3], #1 @ 0200c89c
    cmp r3, r2 @ 0200c8a0
    bne .L_0200c89c @ 0200c8a4
    mov sl, #0 @ 0200c8a8
.L_0200c8ac:
    ldr r1, [pc, #0x2a0] @ 0200c8ac
    ldr r0, [r1] @ 0200c8b0
    bl .L_0200c82c @ 0200c8b4
    cmn r0, #1 @ 0200c8b8
    add r3, sl, fp @ 0200c8bc
    beq .L_0200cb38 @ 0200c8c0
    add sl, sl, #1 @ 0200c8c4
    cmp sl, #0x12 @ 0200c8c8
    strb r0, [r3, #0xfee] @ 0200c8cc
    bne .L_0200c8ac @ 0200c8d0
    ldr r0, [pc, #0x27c] @ 0200c8d4
    ldr r4, [pc, #0x27c] @ 0200c8d8
    str sl, [r0] @ 0200c8dc
.L_0200c8e0:
    mov r0, r4 @ 0200c8e0
    bl .L_0200c610 @ 0200c8e4
    ldr r3, [pc, #0x270] @ 0200c8e8
    sub r4, r4, #1 @ 0200c8ec
    cmp r4, r3 @ 0200c8f0
    bne .L_0200c8e0 @ 0200c8f4
    mov r4, #0 @ 0200c8f8
    ldr r0, [pc, #0x260] @ 0200c8fc
    mov sb, #1 @ 0200c900
    ldr r7, [pc, #0x258] @ 0200c904
    strb r4, [sp, #0xf] @ 0200c908
    mov r5, r4 @ 0200c90c
    bl .L_0200c610 @ 0200c910
    str sb, [sp, #4] @ 0200c914
.L_0200c918:
    ldr r3, [pc, #0x248] @ 0200c918
    ldr lr, [r3] @ 0200c91c
    cmp sl, lr @ 0200c920
    movlt lr, sl @ 0200c924
    strlt sl, [r3] @ 0200c928
    cmp lr, #2 @ 0200c92c
    bgt .L_0200caf8 @ 0200c930
    ldrb r3, [sp, #0xf] @ 0200c934
    ldr lr, [sp, #4] @ 0200c938
    ldrb r1, [fp, r7] @ 0200c93c
    add r0, sp, #0x20 @ 0200c940
    orr r3, lr, r3 @ 0200c944
    add r2, r0, sb @ 0200c948
    strb r3, [sp, #0xf] @ 0200c94c
    strb r1, [r2, #-0x11] @ 0200c950
    ldr r1, [pc, #0x20c] @ 0200c954
    mov lr, #1 @ 0200c958
    add sb, sb, #1 @ 0200c95c
    str lr, [r1] @ 0200c960
.L_0200c964:
    ldr r0, [sp, #4] @ 0200c964
    lsl r3, r0, #1 @ 0200c968
    and r3, r3, #0xff @ 0200c96c
    cmp r3, #0 @ 0200c970
    str r3, [sp, #4] @ 0200c974
    bne .L_0200c9c8 @ 0200c978
    cmp sb, #0 @ 0200c97c
    ble .L_0200c9a8 @ 0200c980
    ldr r6, [pc, #0x1e0] @ 0200c984
    mov r4, r3 @ 0200c988
.L_0200c98c:
    add r1, r4, #0xf @ 0200c98c
    ldrb r0, [r1, sp] @ 0200c990
    add r4, r4, #1 @ 0200c994
    ldr r1, [r6] @ 0200c998
    bl .L_0200c858 @ 0200c99c
    cmp sb, r4 @ 0200c9a0
    bne .L_0200c98c @ 0200c9a4
.L_0200c9a8:
    ldr r1, [pc, #0x1c0] @ 0200c9a8
    mov r3, #0 @ 0200c9ac
    ldr r2, [r1] @ 0200c9b0
    strb r3, [sp, #0xf] @ 0200c9b4
    add r2, r2, sb @ 0200c9b8
    mov sb, #1 @ 0200c9bc
    str r2, [r1] @ 0200c9c0
    str sb, [sp, #4] @ 0200c9c4
.L_0200c9c8:
    ldr r2, [pc, #0x198] @ 0200c9c8
    ldr r8, [r2] @ 0200c9cc
    cmp r8, #0 @ 0200c9d0
    movle r6, #0 @ 0200c9d4
    movle r2, r6 @ 0200c9d8
    ble .L_0200ca54 @ 0200c9dc
    mov r6, #0 @ 0200c9e0
    b .L_0200ca34 @ 0200c9e4
.L_0200c9e8:
    bl .L_0200c75c @ 0200c9e8
    cmp r5, #0x10 @ 0200c9ec
    add r3, r7, #1 @ 0200c9f0
    lsl r7, r3, #0x14 @ 0200c9f4
    ldrle r3, [pc, #0x150] @ 0200c9f8
    and r2, r4, #0xff @ 0200c9fc
    addle r3, r5, r3 @ 0200ca00
    addle r3, r3, #0x1000 @ 0200ca04
    lsr r7, r7, #0x14 @ 0200ca08
    strb r2, [fp, r5] @ 0200ca0c
    add r1, r5, #1 @ 0200ca10
    strble r2, [r3] @ 0200ca14
    add r6, r6, #1 @ 0200ca18
    mov r0, r7 @ 0200ca1c
    lsl r5, r1, #0x14 @ 0200ca20
    bl .L_0200c610 @ 0200ca24
    cmp r8, r6 @ 0200ca28
    lsr r5, r5, #0x14 @ 0200ca2c
    beq .L_0200cb30 @ 0200ca30
.L_0200ca34:
    ldr r3, [pc, #0x118] @ 0200ca34
    ldr r0, [r3] @ 0200ca38
    bl .L_0200c82c @ 0200ca3c
    mov r4, r0 @ 0200ca40
    cmn r4, #1 @ 0200ca44
    mov r0, r5 @ 0200ca48
    bne .L_0200c9e8 @ 0200ca4c
    mov r2, r6 @ 0200ca50
.L_0200ca54:
    ldr lr, [pc, #0xfc] @ 0200ca54
    mov r4, r6 @ 0200ca58
    ldr r3, [lr] @ 0200ca5c
    add r3, r2, r3 @ 0200ca60
    str r3, [lr] @ 0200ca64
    b .L_0200ca78 @ 0200ca68
.L_0200ca6c:
    add r3, r5, #1 @ 0200ca6c
    lsl r5, r3, #0x14 @ 0200ca70
    lsr r5, r5, #0x14 @ 0200ca74
.L_0200ca78:
    cmp r8, r4 @ 0200ca78
    mov r0, r5 @ 0200ca7c
    add r4, r4, #1 @ 0200ca80
    ble .L_0200caac @ 0200ca84
    bl .L_0200c75c @ 0200ca88
    add r3, r7, #1 @ 0200ca8c
    lsl r7, r3, #0x14 @ 0200ca90
    lsr r7, r7, #0x14 @ 0200ca94
    subs sl, sl, #1 @ 0200ca98
    mov r0, r7 @ 0200ca9c
    beq .L_0200ca6c @ 0200caa0
    bl .L_0200c610 @ 0200caa4
    b .L_0200ca6c @ 0200caa8
.L_0200caac:
    cmp sl, #0 @ 0200caac
    bgt .L_0200c918 @ 0200cab0
    cmp sb, #1 @ 0200cab4
    ble .L_0200caf0 @ 0200cab8
    ldr r6, [pc, #0xa8] @ 0200cabc
    mov r4, #0 @ 0200cac0
    add r5, sp, #0xf @ 0200cac4
.L_0200cac8:
    ldrb r0, [r4, r5] @ 0200cac8
    ldr r1, [r6] @ 0200cacc
    add r4, r4, #1 @ 0200cad0
    bl .L_0200c858 @ 0200cad4
    cmp r4, sb @ 0200cad8
    bne .L_0200cac8 @ 0200cadc
    ldr r2, [pc, #0x88] @ 0200cae0
    ldr r3, [r2] @ 0200cae4
    add r3, r3, sb @ 0200cae8
    str r3, [r2] @ 0200caec
.L_0200caf0:
    add sp, sp, #0x24 @ 0200caf0
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 0200caf4
.L_0200caf8:
    ldr r3, [pc, #0x74] @ 0200caf8
    sub r1, lr, #3 @ 0200cafc
    ldr r0, [r3] @ 0200cb00
    add ip, sb, #1 @ 0200cb04
    asr r3, r0, #4 @ 0200cb08
    add lr, sp, #0x20 @ 0200cb0c
    bic r3, r3, #0xf @ 0200cb10
    orr r3, r3, r1 @ 0200cb14
    add r2, lr, sb @ 0200cb18
    add r1, lr, ip @ 0200cb1c
    add sb, ip, #1 @ 0200cb20
    strb r0, [r2, #-0x11] @ 0200cb24
    strb r3, [r1, #-0x11] @ 0200cb28
    b .L_0200c964 @ 0200cb2c
.L_0200cb30:
    mov r2, r8 @ 0200cb30
    b .L_0200ca54 @ 0200cb34
.L_0200cb38:
    ldr r2, [pc, #0x18] @ 0200cb38
    cmp sl, #0 @ 0200cb3c
    str sl, [r2] @ 0200cb40
    beq .L_0200caf0 @ 0200cb44
    ldr r4, [pc, #0xc] @ 0200cb48
    b .L_0200c8e0 @ 0200cb4c
    .byte 0xc0, 0xde, 0x3d, 0x02, 0xbc, 0xde, 0x3d, 0x02, 0x40, 0x4c, 0x0b, 0x02, 0xed, 0x0f, 0x00, 0x00 @ 0200cb50
    .byte 0xdb, 0x0f, 0x00, 0x00, 0xee, 0x0f, 0x00, 0x00, 0x10, 0xb3, 0x3e, 0x02, 0xf8, 0xb2, 0x3e, 0x02 @ 0200cb60
    .byte 0x44, 0x4c, 0x0b, 0x02, 0x0c, 0xb3, 0x3e, 0x02 @ 0200cb70
.L_0200cb78:
@ FUN_0200cb78 at 0x0200cb78
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 0200cb78
    ldr sl, [pc, #0x120] @ 0200cb7c
    sub sp, sp, #4 @ 0200cb80
    add r2, sl, #0xfe0 @ 0200cb84
    mov r1, #0x20 @ 0200cb88
    add r2, r2, #0xe @ 0200cb8c
    mov r3, sl @ 0200cb90
.L_0200cb94:
    strb r1, [r3], #1 @ 0200cb94
    cmp r3, r2 @ 0200cb98
    bne .L_0200cb94 @ 0200cb9c
    ldr r6, [pc, #0x100] @ 0200cba0
    mov fp, #0 @ 0200cba4
.L_0200cba8:
    lsr fp, fp, #1 @ 0200cba8
    tst fp, #0x100 @ 0200cbac
    beq .L_0200cc00 @ 0200cbb0
.L_0200cbb4:
    ands r5, fp, #1 @ 0200cbb4
    beq .L_0200cc20 @ 0200cbb8
.L_0200cbbc:
    ldr r3, [pc, #0xe8] @ 0200cbbc
    ldr r0, [r3] @ 0200cbc0
    bl .L_0200c82c @ 0200cbc4
    cmn r0, #1 @ 0200cbc8
    beq .L_0200cc9c @ 0200cbcc
    ldr sb, [pc, #0xd8] @ 0200cbd0
    and r4, r0, #0xff @ 0200cbd4
    ldr r1, [sb] @ 0200cbd8
    mov r0, r4 @ 0200cbdc
    bl .L_0200c858 @ 0200cbe0
    lsr fp, fp, #1 @ 0200cbe4
    add r3, r6, #1 @ 0200cbe8
    strb r4, [sl, r6] @ 0200cbec
    tst fp, #0x100 @ 0200cbf0
    lsl r6, r3, #0x14 @ 0200cbf4
    lsr r6, r6, #0x14 @ 0200cbf8
    bne .L_0200cbb4 @ 0200cbfc
.L_0200cc00:
    ldr r3, [pc, #0xa4] @ 0200cc00
    ldr r0, [r3] @ 0200cc04
    bl .L_0200c82c @ 0200cc08
    cmn r0, #1 @ 0200cc0c
    beq .L_0200cc9c @ 0200cc10
    orr fp, r0, #0xff00 @ 0200cc14
    ands r5, fp, #1 @ 0200cc18
    bne .L_0200cbbc @ 0200cc1c
.L_0200cc20:
    ldr r3, [pc, #0x84] @ 0200cc20
    ldr r0, [r3] @ 0200cc24
    bl .L_0200c82c @ 0200cc28
    cmn r0, #1 @ 0200cc2c
    mov r4, r0 @ 0200cc30
    beq .L_0200cc9c @ 0200cc34
    ldr r3, [pc, #0x6c] @ 0200cc38
    ldr r0, [r3] @ 0200cc3c
    bl .L_0200c82c @ 0200cc40
    cmn r0, #1 @ 0200cc44
    beq .L_0200cc9c @ 0200cc48
    and r2, r0, #0xf @ 0200cc4c
    and r3, r0, #0xf0 @ 0200cc50
    ldr sb, [pc, #0x54] @ 0200cc54
    orr r8, r4, r3, lsl #4 @ 0200cc58
    add r7, r2, #2 @ 0200cc5c
.L_0200cc60:
    add r3, r8, r5 @ 0200cc60
    lsl r3, r3, #0x14 @ 0200cc64
    lsr r3, r3, #0x14 @ 0200cc68
    ldrb r4, [sl, r3] @ 0200cc6c
    ldr r1, [sb] @ 0200cc70
    mov r0, r4 @ 0200cc74
    bl .L_0200c858 @ 0200cc78
    add r5, r5, #1 @ 0200cc7c
    add r3, r6, #1 @ 0200cc80
    strb r4, [sl, r6] @ 0200cc84
    cmp r7, r5 @ 0200cc88
    lsl r6, r3, #0x14 @ 0200cc8c
    lsr r6, r6, #0x14 @ 0200cc90
    bge .L_0200cc60 @ 0200cc94
    b .L_0200cba8 @ 0200cc98
.L_0200cc9c:
    add sp, sp, #4 @ 0200cc9c
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 0200cca0
    .byte 0xc0, 0xde, 0x3d, 0x02, 0xee, 0x0f, 0x00, 0x00, 0xbc, 0xde, 0x3d, 0x02, 0xf8, 0xb2, 0x3e, 0x02 @ 0200cca4
@ FUN_0200ccb4 at 0x0200ccb4
    push {r4, r5, r6, r7, r8, sl, lr} @ 0200ccb4
    cmp r1, #0 @ 0200ccb8
    cmpne r0, #0 @ 0200ccbc
    sub sp, sp, #4 @ 0200ccc0
    mov ip, r0 @ 0200ccc4
    mov lr, r1 @ 0200ccc8
    ldr r4, [sp, #0x20] @ 0200cccc
    beq .L_0200cd4c @ 0200ccd0
    cmp r3, #0 @ 0200ccd4
    cmpne r2, #0 @ 0200ccd8
    movne r7, #0 @ 0200ccdc
    moveq r7, #1 @ 0200cce0
    beq .L_0200cd4c @ 0200cce4
    cmp r2, r4 @ 0200cce8
    ldr r5, [pc, #0xa0] @ 0200ccec
    ldr r6, [pc, #0xa0] @ 0200ccf0
    ldr r8, [pc, #0xa0] @ 0200ccf4
    ldr sl, [pc, #0xa0] @ 0200ccf8
    bls .L_0200cd4c @ 0200ccfc
    cmp r2, r3 @ 0200cd00
    str r5, [r8] @ 0200cd04
    str r6, [sl] @ 0200cd08
    str r2, [r5, #8] @ 0200cd0c
    bhi .L_0200cd4c @ 0200cd10
    subs r2, r4, #0 @ 0200cd14
    mov r1, r0 @ 0200cd18
    str r7, [r6, #0xc] @ 0200cd1c
    mov r0, lr @ 0200cd20
    str r7, [r5, #0xc] @ 0200cd24
    str r3, [r6, #8] @ 0200cd28
    str ip, [r5] @ 0200cd2c
    str ip, [r5, #4] @ 0200cd30
    str lr, [r6] @ 0200cd34
    str lr, [r6, #4] @ 0200cd38
    bne .L_0200cd54 @ 0200cd3c
.L_0200cd40:
    add sp, sp, #4 @ 0200cd40
    pop {r4, r5, r6, r7, r8, sl, lr} @ 0200cd44
    b .L_0200cb78 @ 0200cd48
.L_0200cd4c:
    add sp, sp, #4 @ 0200cd4c
    pop {r4, r5, r6, r7, r8, sl, pc} @ 0200cd50
.L_0200cd54:
    bl .L_02082ec0 @ 0200cd54
    ldr ip, [r8] @ 0200cd58
    ldr r0, [sl] @ 0200cd5c
    ldr r2, [ip] @ 0200cd60
    ldr r3, [ip, #0xc] @ 0200cd64
    add r2, r2, r4 @ 0200cd68
    add r3, r3, r4 @ 0200cd6c
    str r3, [ip, #0xc] @ 0200cd70
    str r2, [ip] @ 0200cd74
    ldr r1, [r0] @ 0200cd78
    ldr r3, [r0, #0xc] @ 0200cd7c
    add r1, r1, r4 @ 0200cd80
    add r3, r3, r4 @ 0200cd84
    str r3, [r0, #0xc] @ 0200cd88
    str r1, [r0] @ 0200cd8c
    b .L_0200cd40 @ 0200cd90
    .byte 0xd4, 0xee, 0x3d, 0x02, 0xfc, 0xb2, 0x3e, 0x02, 0xbc, 0xde, 0x3d, 0x02, 0xf8, 0xb2, 0x3e, 0x02 @ 0200cd94
@ FUN_0200cda4 at 0x0200cda4
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 0200cda4
    cmp r1, #0 @ 0200cda8
    cmpne r0, #0 @ 0200cdac
    sub sp, sp, #4 @ 0200cdb0
    mov r6, r0 @ 0200cdb4
    mov r7, r1 @ 0200cdb8
    mov r0, r2 @ 0200cdbc
    mov r5, r3 @ 0200cdc0
    ldr r8, [sp, #0x28] @ 0200cdc4
    beq .L_0200ce64 @ 0200cdc8
    cmp r3, #0 @ 0200cdcc
    cmpne r2, #0 @ 0200cdd0
    movne sb, #0 @ 0200cdd4
    moveq sb, #1 @ 0200cdd8
    beq .L_0200ce64 @ 0200cddc
    cmp r3, r8 @ 0200cde0
    bls .L_0200ce64 @ 0200cde4
    ldr r3, [pc, #0x124] @ 0200cde8
    ldr fp, [pc, #0x124] @ 0200cdec
    ldr r2, [pc, #0x124] @ 0200cdf0
    str r3, [fp] @ 0200cdf4
    ldr r3, [pc, #0x120] @ 0200cdf8
    ldr r1, [pc, #0x120] @ 0200cdfc
    str r2, [r3] @ 0200ce00
    bl .L_02081588 @ 0200ce04
    subs sl, r0, #0 @ 0200ce08
    beq .L_0200ce64 @ 0200ce0c
    mov r1, sb @ 0200ce10
    mov r2, #2 @ 0200ce14
    bl .L_02081ff0 @ 0200ce18
    mov r0, sl @ 0200ce1c
    ldr r4, [fp] @ 0200ce20
    bl .L_0208212c @ 0200ce24
    mov r1, sb @ 0200ce28
    str r0, [r4, #8] @ 0200ce2c
    mov r2, sb @ 0200ce30
    mov r0, sl @ 0200ce34
    bl .L_02081ff0 @ 0200ce38
    ldr r3, [fp] @ 0200ce3c
    ldr r3, [r3, #8] @ 0200ce40
    cmp r5, r3 @ 0200ce44
    blo .L_0200ce54 @ 0200ce48
    cmp r8, r3 @ 0200ce4c
    bls .L_0200ce6c @ 0200ce50
.L_0200ce54:
    mov r0, sl @ 0200ce54
    add sp, sp, #4 @ 0200ce58
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 0200ce5c
    b .L_02081020 @ 0200ce60
.L_0200ce64:
    add sp, sp, #4 @ 0200ce64
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 0200ce68
.L_0200ce6c:
    mov r2, r5 @ 0200ce6c
    mov r3, sl @ 0200ce70
    mov r1, #1 @ 0200ce74
    mov r0, r6 @ 0200ce78
    bl .L_02081788 @ 0200ce7c
    mov r0, sl @ 0200ce80
    bl .L_02081020 @ 0200ce84
    ldr r2, [pc, #0x90] @ 0200ce88
    cmp r8, #0 @ 0200ce8c
    ldr r3, [r2] @ 0200ce90
    ldr r2, [fp] @ 0200ce94
    str r5, [r3, #8] @ 0200ce98
    str r6, [r2, #4] @ 0200ce9c
    str r6, [r2] @ 0200cea0
    str sb, [r2, #0xc] @ 0200cea4
    str r7, [r3] @ 0200cea8
    str sb, [r3, #0xc] @ 0200ceac
    str r7, [r3, #4] @ 0200ceb0
    bne .L_0200cec4 @ 0200ceb4
.L_0200ceb8:
    add sp, sp, #4 @ 0200ceb8
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 0200cebc
    b .L_0200cb78 @ 0200cec0
.L_0200cec4:
    ldr r1, [r2, #4] @ 0200cec4
    mov r0, r7 @ 0200cec8
    mov r2, r8 @ 0200cecc
    bl .L_02082ec0 @ 0200ced0
    ldr ip, [fp] @ 0200ced4
    ldr r3, [pc, #0x40] @ 0200ced8
    ldr r2, [ip] @ 0200cedc
    ldr r0, [r3] @ 0200cee0
    ldr r3, [ip, #0xc] @ 0200cee4
    add r2, r2, r8 @ 0200cee8
    add r3, r3, r8 @ 0200ceec
    str r3, [ip, #0xc] @ 0200cef0
    str r2, [ip] @ 0200cef4
    ldr r1, [r0] @ 0200cef8
    ldr r3, [r0, #0xc] @ 0200cefc
    add r1, r1, r8 @ 0200cf00
    add r3, r3, r8 @ 0200cf04
    str r3, [r0, #0xc] @ 0200cf08
    str r1, [r0] @ 0200cf0c
    b .L_0200ceb8 @ 0200cf10
    .byte 0xd4, 0xee, 0x3d, 0x02, 0xbc, 0xde, 0x3d, 0x02, 0xfc, 0xb2, 0x3e, 0x02, 0xf8, 0xb2, 0x3e, 0x02 @ 0200cf14
    .byte 0x74, 0xf0, 0x08, 0x02, 0xf0, 0x47, 0x2d, 0xe9, 0x00, 0x00, 0x51, 0xe3, 0x00, 0x00, 0x50, 0x13 @ 0200cf24
    .byte 0x01, 0xe0, 0xa0, 0xe1, 0x00, 0xc0, 0xa0, 0xe1, 0x02, 0x50, 0xa0, 0xe1, 0x20, 0x40, 0x9d, 0xe5 @ 0200cf34
    .byte 0xf0, 0x87, 0xbd, 0x08, 0x00, 0x00, 0x53, 0xe3, 0x00, 0x00, 0x52, 0x13, 0x00, 0x80, 0xa0, 0x13 @ 0200cf44
    .byte 0x01, 0x80, 0xa0, 0x03, 0xf0, 0x87, 0xbd, 0x08, 0x04, 0x00, 0x53, 0xe1, 0xc0, 0x60, 0x9f, 0xe5 @ 0200cf54
    .byte 0xc0, 0x70, 0x9f, 0xe5, 0xc0, 0xa0, 0x9f, 0xe5, 0xc0, 0x90, 0x9f, 0xe5, 0xf0, 0x87, 0xbd, 0x98 @ 0200cf64
    .byte 0x00, 0x20, 0x54, 0xe2, 0x00, 0x10, 0xa0, 0xe1, 0x0c, 0x80, 0x87, 0xe5, 0x0e, 0x00, 0xa0, 0xe1 @ 0200cf74
    .byte 0x0c, 0x80, 0x86, 0xe5, 0x08, 0x30, 0x87, 0xe5, 0x00, 0x60, 0x89, 0xe5, 0x00, 0x70, 0x8a, 0xe5 @ 0200cf84
    .byte 0x00, 0xc0, 0x86, 0xe5, 0x04, 0xc0, 0x86, 0xe5, 0x08, 0x30, 0x86, 0xe5, 0x00, 0xe0, 0x87, 0xe5 @ 0200cf94
    .byte 0x04, 0xe0, 0x87, 0xe5, 0x0e, 0x00, 0x00, 0x1a, 0x32, 0xfe, 0xff, 0xeb, 0x80, 0x10, 0x9f, 0xe5 @ 0200cfa4
    .byte 0x05, 0x00, 0xa0, 0xe1, 0x72, 0xd1, 0x01, 0xeb, 0x00, 0x40, 0x50, 0xe2, 0x01, 0x10, 0xa0, 0xe3 @ 0200cfb4
    .byte 0x04, 0x30, 0xa0, 0xe1, 0xf0, 0x87, 0xbd, 0x08, 0x00, 0xc0, 0x9a, 0xe5, 0x0c, 0x20, 0x9c, 0xe5 @ 0200cfc4
    .byte 0x04, 0x00, 0x9c, 0xe5, 0xc0, 0xd4, 0x01, 0xeb, 0x04, 0x00, 0xa0, 0xe1, 0xf0, 0x47, 0xbd, 0xe8 @ 0200cfd4
    .byte 0x0d, 0xd0, 0x01, 0xea, 0xb4, 0xd7, 0x01, 0xeb, 0x00, 0xc0, 0x99, 0xe5, 0x00, 0x00, 0x9a, 0xe5 @ 0200cfe4
    .byte 0x00, 0x20, 0x9c, 0xe5, 0x0c, 0x30, 0x9c, 0xe5, 0x04, 0x20, 0x82, 0xe0, 0x04, 0x30, 0x83, 0xe0 @ 0200cff4
    .byte 0x0c, 0x30, 0x8c, 0xe5, 0x00, 0x20, 0x8c, 0xe5, 0x00, 0x10, 0x90, 0xe5, 0x0c, 0x30, 0x90, 0xe5 @ 0200d004
    .byte 0x04, 0x10, 0x81, 0xe0, 0x04, 0x30, 0x83, 0xe0, 0x0c, 0x30, 0x80, 0xe5, 0x00, 0x10, 0x80, 0xe5 @ 0200d014
    .byte 0xe0, 0xff, 0xff, 0xea, 0xd4, 0xee, 0x3d, 0x02, 0xfc, 0xb2, 0x3e, 0x02, 0xf8, 0xb2, 0x3e, 0x02 @ 0200d024
    .byte 0xbc, 0xde, 0x3d, 0x02, 0x70, 0xf0, 0x08, 0x02 @ 0200d034
.L_0200d03c:
@ FUN_0200d03c at 0x0200d03c
    push {r4, lr} @ 0200d03c
    ldr r2, [pc, #0x58] @ 0200d040
    ldr r4, [pc, #0x58] @ 0200d044
    ldr r3, [pc, #0x58] @ 0200d048
    ldr r1, [r2, #0x28] @ 0200d04c
    ldr r0, [r2, #0x2c] @ 0200d050
    str r4, [r3] @ 0200d054
    ldr r2, [pc, #0x4c] @ 0200d058
    ldr r3, [pc, #0x4c] @ 0200d05c
    str r2, [r4] @ 0200d060
    stmib r4, {r1, r3} @ 0200d064
    str r0, [r4, #0x1c] @ 0200d068
    bl .L_02004c18 @ 0200d06c
    str r0, [r4, #0x24] @ 0200d070
    bl .L_02005aac @ 0200d074
    str r0, [r4, #0x28] @ 0200d078
    bl .L_02005ab8 @ 0200d07c
    str r0, [r4, #0x2c] @ 0200d080
    bl .L_02005ac4 @ 0200d084
    str r0, [r4, #0x30] @ 0200d088
    bl .L_02009cb0 @ 0200d08c
    ldr r3, [pc, #0x1c] @ 0200d090
    mov r2, #1 @ 0200d094
    str r2, [r3] @ 0200d098
    pop {r4, pc} @ 0200d09c
    .byte 0x00, 0x00, 0x00, 0x0b, 0x14, 0xb3, 0x3e, 0x02, 0x48, 0xb3, 0x3e, 0x02, 0x03, 0x00, 0x53, 0x4a @ 0200d0a0
    .byte 0x34, 0xb6, 0x3c, 0x02, 0x4c, 0x4c, 0x0b, 0x02 @ 0200d0b0
.L_0200d0b8:
@ FUN_0200d0b8 at 0x0200d0b8
    push {r4, r5, r6, r7, lr} @ 0200d0b8
    ldr r7, [pc, #0x74] @ 0200d0bc
    sub sp, sp, #4 @ 0200d0c0
    mov r4, r0 @ 0200d0c4
    ldr r0, [r7] @ 0200d0c8
    bl .L_02083a6c @ 0200d0cc
    mov r5, r0 @ 0200d0d0
    add r0, r0, #3 @ 0200d0d4
    bl .L_02082724 @ 0200d0d8
    ldr r1, [r7] @ 0200d0dc
    mov r2, r5 @ 0200d0e0
    mov r6, r0 @ 0200d0e4
    bl .L_02083dbc @ 0200d0e8
    add r1, r6, r5 @ 0200d0ec
    mov r3, #0x5f @ 0200d0f0
    strb r3, [r1, #-4] @ 0200d0f4
    and r4, r4, #3 @ 0200d0f8
    sub r3, r3, #0x31 @ 0200d0fc
    strb r3, [r1, #-2] @ 0200d100
    add r4, r4, #0x30 @ 0200d104
    mov r2, #0x6a @ 0200d108
    add r3, r3, #0x45 @ 0200d10c
    strb r2, [r1, #-1] @ 0200d110
    strb r4, [r1, #-3] @ 0200d114
    sub r2, r2, #0x6a @ 0200d118
    strb r3, [r6, r5] @ 0200d11c
    mov r0, r6 @ 0200d120
    add r3, r3, #1 @ 0200d124
    strb r2, [r1, #2] @ 0200d128
    strb r3, [r1, #1] @ 0200d12c
    add sp, sp, #4 @ 0200d130
    pop {r4, r5, r6, r7, pc} @ 0200d134
    .byte 0xc8, 0x8f, 0x09, 0x02 @ 0200d138
.L_0200d13c:
@ FUN_0200d13c at 0x0200d13c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 0200d13c
    ldr r3, [pc, #0x368] @ 0200d140
    sub sp, sp, #0xc @ 0200d144
    ldr r2, [r3] @ 0200d148
    mov r4, r0 @ 0200d14c
    cmp r2, #0 @ 0200d150
    beq .L_0200d4a8 @ 0200d154
.L_0200d158:
    ldr sl, [pc, #0x354] @ 0200d158
    mov r3, #0 @ 0200d15c
    mov r0, r4 @ 0200d160
    str r3, [sp, #4] @ 0200d164
    ldr r8, [sl, #4] @ 0200d168
    ldr sb, [sl, #0x1c] @ 0200d16c
    bl .L_0200d0b8 @ 0200d170
    ldr r1, [pc, #0x33c] @ 0200d174
    bl .L_02081588 @ 0200d178
    subs r7, r0, #0 @ 0200d17c
    beq .L_0200d4a0 @ 0200d180
    mov r0, #3 @ 0200d184
    bl .L_020858b0 @ 0200d188
    bl .L_02008f7c @ 0200d18c
    bl .L_020059f0 @ 0200d190
    mov r1, #4 @ 0200d194
    mov r2, #1 @ 0200d198
    mov r3, r7 @ 0200d19c
    mov r0, sl @ 0200d1a0
    bl .L_02081788 @ 0200d1a4
    mov r1, #4 @ 0200d1a8
    mov r2, #8 @ 0200d1ac
    mov r3, r7 @ 0200d1b0
    mov r0, r8 @ 0200d1b4
    bl .L_02081788 @ 0200d1b8
    mov r1, #4 @ 0200d1bc
    mov r2, #8 @ 0200d1c0
    mov r3, r7 @ 0200d1c4
    add r0, r8, #0x20 @ 0200d1c8
    bl .L_02081788 @ 0200d1cc
    mov r1, #4 @ 0200d1d0
    mov r2, #1 @ 0200d1d4
    mov r3, r7 @ 0200d1d8
    add r0, r8, #0x40 @ 0200d1dc
    bl .L_02081788 @ 0200d1e0
    mov r1, #4 @ 0200d1e4
    mov r2, #1 @ 0200d1e8
    mov r3, r7 @ 0200d1ec
    add r0, r8, #0x44 @ 0200d1f0
    bl .L_02081788 @ 0200d1f4
    mov r1, #4 @ 0200d1f8
    mov r2, #1 @ 0200d1fc
    mov r3, r7 @ 0200d200
    add r0, r8, #0x48 @ 0200d204
    bl .L_02081788 @ 0200d208
    mov r1, #4 @ 0200d20c
    mov r2, #1 @ 0200d210
    mov r3, r7 @ 0200d214
    add r0, r8, #0x4c @ 0200d218
    bl .L_02081788 @ 0200d21c
    mov r1, #4 @ 0200d220
    mov r2, #1 @ 0200d224
    mov r3, r7 @ 0200d228
    add r0, r8, #0x50 @ 0200d22c
    bl .L_02081788 @ 0200d230
    mov r1, #4 @ 0200d234
    mov r2, #1 @ 0200d238
    mov r3, r7 @ 0200d23c
    add r0, r8, #0x8c @ 0200d240
    bl .L_02081788 @ 0200d244
    mov r1, #4 @ 0200d248
    mov r2, #1 @ 0200d24c
    mov r3, r7 @ 0200d250
    add r0, r8, #0x90 @ 0200d254
    bl .L_02081788 @ 0200d258
    mov r3, r7 @ 0200d25c
    add r0, r8, #0x94 @ 0200d260
    mov r1, #4 @ 0200d264
    mov r2, #1 @ 0200d268
    bl .L_02081788 @ 0200d26c
    ldrb r3, [sl] @ 0200d270
    cmp r3, #1 @ 0200d274
    bls .L_0200d290 @ 0200d278
    add r0, r8, #0x98 @ 0200d27c
    mov r1, #4 @ 0200d280
    mov r2, #1 @ 0200d284
    mov r3, r7 @ 0200d288
    bl .L_02081788 @ 0200d28c
.L_0200d290:
    mov r1, #4 @ 0200d290
    add fp, sp, r1 @ 0200d294
    mov r2, #1 @ 0200d298
    mov r3, r7 @ 0200d29c
    add r0, r8, #0x9c @ 0200d2a0
    bl .L_02081788 @ 0200d2a4
    mov r1, #4 @ 0200d2a8
    mov r2, #1 @ 0200d2ac
    mov r3, r7 @ 0200d2b0
    mov r0, fp @ 0200d2b4
    bl .L_02081788 @ 0200d2b8
    ldrb r3, [sp, #7] @ 0200d2bc
    mov r1, #4 @ 0200d2c0
    strb r3, [r8, #0xa0] @ 0200d2c4
    ldr r3, [sp, #4] @ 0200d2c8
    mov r2, #1 @ 0200d2cc
    lsr r3, r3, #0x10 @ 0200d2d0
    strb r3, [r8, #0xa1] @ 0200d2d4
    ldr r0, [sp, #4] @ 0200d2d8
    mov r3, r7 @ 0200d2dc
    lsr r0, r0, #8 @ 0200d2e0
    strb r0, [r8, #0xa2] @ 0200d2e4
    ldr ip, [sp, #4] @ 0200d2e8
    mov r0, fp @ 0200d2ec
    strb ip, [r8, #0xa3] @ 0200d2f0
    bl .L_02081788 @ 0200d2f4
    ldr r3, [sp, #4] @ 0200d2f8
    mov r1, #1 @ 0200d2fc
    lsr r3, r3, #8 @ 0200d300
    strb r3, [r8, #0xa4] @ 0200d304
    ldr r3, [sp, #4] @ 0200d308
    mov r2, #0x10000 @ 0200d30c
    strb r3, [r8, #0xa5] @ 0200d310
    ldr r0, [sl, #8] @ 0200d314
    mov r3, r7 @ 0200d318
    bl .L_02081788 @ 0200d31c
    mov r1, #1 @ 0200d320
    mov r2, #0x18 @ 0200d324
    mov r3, r7 @ 0200d328
    ldr r0, [sl, #0xc] @ 0200d32c
    bl .L_02081788 @ 0200d330
    mov r1, #2 @ 0200d334
    mov r2, #0x40 @ 0200d338
    mov r3, r7 @ 0200d33c
    ldr r0, [sl, #0x10] @ 0200d340
    bl .L_02081788 @ 0200d344
    mov r1, #2 @ 0200d348
    mov r2, #0x28 @ 0200d34c
    mov r3, r7 @ 0200d350
    ldr r0, [sl, #0x14] @ 0200d354
    bl .L_02081788 @ 0200d358
    mov r3, r7 @ 0200d35c
    ldr r0, [sl, #0x18] @ 0200d360
    mov r1, #1 @ 0200d364
    mov r2, #0x10000 @ 0200d368
    bl .L_02081788 @ 0200d36c
    ldrb r3, [sl] @ 0200d370
    cmp r3, #1 @ 0200d374
    bls .L_0200d46c @ 0200d378
    mov r1, #1 @ 0200d37c
    mov r2, #0x2000 @ 0200d380
    mov r3, r7 @ 0200d384
    ldr r0, [sl, #0x24] @ 0200d388
    bl .L_02081788 @ 0200d38c
    add r0, sb, #0x400 @ 0200d390
    mov r1, #1 @ 0200d394
    mov r2, #0x5c @ 0200d398
    mov r3, r7 @ 0200d39c
    add r0, r0, #4 @ 0200d3a0
    bl .L_02081788 @ 0200d3a4
    mov r1, #1 @ 0200d3a8
    mov r2, #0x100 @ 0200d3ac
    mov r3, r7 @ 0200d3b0
    ldr r0, [sl, #0x28] @ 0200d3b4
    bl .L_02081788 @ 0200d3b8
    mov r1, #1 @ 0200d3bc
    mov r2, #0x100 @ 0200d3c0
    mov r3, r7 @ 0200d3c4
    ldr r0, [sl, #0x2c] @ 0200d3c8
    bl .L_02081788 @ 0200d3cc
    mov r1, #1 @ 0200d3d0
    mov r2, #0x20 @ 0200d3d4
    mov r3, r7 @ 0200d3d8
    ldr r0, [sl, #0x30] @ 0200d3dc
    bl .L_02081788 @ 0200d3e0
    mov r1, #4 @ 0200d3e4
    mov r2, #1 @ 0200d3e8
    mov r3, r7 @ 0200d3ec
    mov r0, fp @ 0200d3f0
    bl .L_02081788 @ 0200d3f4
    ldr r4, [sp, #4] @ 0200d3f8
    ldr ip, [pc, #0xb8] @ 0200d3fc
    lsr r5, r4, #0x10 @ 0200d400
    ldr lr, [pc, #0xb4] @ 0200d404
    strb r5, [ip] @ 0200d408
    ldr ip, [pc, #0xb0] @ 0200d40c
    lsr r6, r4, #8 @ 0200d410
    mov r1, #4 @ 0200d414
    mov r2, #1 @ 0200d418
    mov r3, r7 @ 0200d41c
    strb r6, [lr] @ 0200d420
    strb r4, [ip] @ 0200d424
    mov r0, fp @ 0200d428
    bl .L_02081788 @ 0200d42c
    ldr r0, [sp, #4] @ 0200d430
    bl .L_02004448 @ 0200d434
    mov r2, #1 @ 0200d438
    mov r3, r7 @ 0200d43c
    mov r0, fp @ 0200d440
    mov r1, #4 @ 0200d444
    bl .L_02081788 @ 0200d448
    ldrb r3, [sp, #4] @ 0200d44c
    strb r3, [sb, #0x4a4] @ 0200d450
    ldrb r2, [sp, #5] @ 0200d454
    strb r2, [sb, #0x4a5] @ 0200d458
    ldrb r3, [sp, #6] @ 0200d45c
    strb r3, [sb, #0x4a6] @ 0200d460
    ldrb r2, [sp, #7] @ 0200d464
    strb r2, [sb, #0x4a7] @ 0200d468
.L_0200d46c:
    mov r0, r7 @ 0200d46c
    bl .L_02081020 @ 0200d470
    bl .L_02009cf0 @ 0200d474
    mov r0, r8 @ 0200d478
    bl .L_02005164 @ 0200d47c
    ldrb r3, [sl] @ 0200d480
    cmp r3, #1 @ 0200d484
    bls .L_0200d498 @ 0200d488
    mov r0, sb @ 0200d48c
    bl .L_0200500c @ 0200d490
    bl .L_020063e8 @ 0200d494
.L_0200d498:
    mov r0, #3 @ 0200d498
    bl .L_020858bc @ 0200d49c
.L_0200d4a0:
    add sp, sp, #0xc @ 0200d4a0
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 0200d4a4
.L_0200d4a8:
    bl .L_0200d03c @ 0200d4a8
    b .L_0200d158 @ 0200d4ac
    .byte 0x4c, 0x4c, 0x0b, 0x02, 0x14, 0xb3, 0x3e, 0x02, 0x74, 0xf0, 0x08, 0x02, 0x00, 0x90, 0x09, 0x02 @ 0200d4b0
    .byte 0x01, 0x90, 0x09, 0x02, 0x49, 0xf3, 0x08, 0x02 @ 0200d4c0
.L_0200d4c8:
@ FUN_0200d4c8 at 0x0200d4c8
    push {r4, r5, r6, r7, r8, lr} @ 0200d4c8
    ldr r3, [pc, #0x33c] @ 0200d4cc
    sub sp, sp, #8 @ 0200d4d0
    ldr r2, [r3] @ 0200d4d4
    mov r4, r0 @ 0200d4d8
    cmp r2, #0 @ 0200d4dc
    beq .L_0200d808 @ 0200d4e0
.L_0200d4e4:
    ldr r7, [pc, #0x328] @ 0200d4e4
    mov r0, r4 @ 0200d4e8
    ldr r6, [r7, #4] @ 0200d4ec
    ldr r8, [r7, #0x1c] @ 0200d4f0
    bl .L_0200d0b8 @ 0200d4f4
    ldr r3, [pc, #0x318] @ 0200d4f8
    ldr r1, [pc, #0x318] @ 0200d4fc
    str r3, [r7] @ 0200d500
    bl .L_02081588 @ 0200d504
    subs r5, r0, #0 @ 0200d508
    beq .L_0200d800 @ 0200d50c
    mov r0, #3 @ 0200d510
    bl .L_020858b0 @ 0200d514
    mov r0, r6 @ 0200d518
    bl .L_0200526c @ 0200d51c
    mov r0, r8 @ 0200d520
    bl .L_02004f70 @ 0200d524
    mov r1, #4 @ 0200d528
    mov r2, #1 @ 0200d52c
    mov r3, r5 @ 0200d530
    mov r0, r7 @ 0200d534
    bl .L_020822e0 @ 0200d538
    mov r1, #4 @ 0200d53c
    mov r2, #8 @ 0200d540
    mov r3, r5 @ 0200d544
    mov r0, r6 @ 0200d548
    bl .L_020822e0 @ 0200d54c
    mov r1, #4 @ 0200d550
    mov r2, #8 @ 0200d554
    mov r3, r5 @ 0200d558
    add r0, r6, #0x20 @ 0200d55c
    bl .L_020822e0 @ 0200d560
    mov r1, #4 @ 0200d564
    mov r2, #1 @ 0200d568
    mov r3, r5 @ 0200d56c
    add r0, r6, #0x40 @ 0200d570
    bl .L_020822e0 @ 0200d574
    mov r1, #4 @ 0200d578
    mov r2, #1 @ 0200d57c
    mov r3, r5 @ 0200d580
    add r0, r6, #0x44 @ 0200d584
    bl .L_020822e0 @ 0200d588
    mov r1, #4 @ 0200d58c
    mov r2, #1 @ 0200d590
    mov r3, r5 @ 0200d594
    add r0, r6, #0x48 @ 0200d598
    bl .L_020822e0 @ 0200d59c
    mov r1, #4 @ 0200d5a0
    mov r2, #1 @ 0200d5a4
    mov r3, r5 @ 0200d5a8
    add r0, r6, #0x4c @ 0200d5ac
    bl .L_020822e0 @ 0200d5b0
    mov r1, #4 @ 0200d5b4
    mov r2, #1 @ 0200d5b8
    mov r3, r5 @ 0200d5bc
    add r0, r6, #0x50 @ 0200d5c0
    bl .L_020822e0 @ 0200d5c4
    mov r1, #4 @ 0200d5c8
    mov r2, #1 @ 0200d5cc
    mov r3, r5 @ 0200d5d0
    add r0, r6, #0x8c @ 0200d5d4
    bl .L_020822e0 @ 0200d5d8
    mov r1, #4 @ 0200d5dc
    mov r2, #1 @ 0200d5e0
    mov r3, r5 @ 0200d5e4
    add r0, r6, #0x90 @ 0200d5e8
    bl .L_020822e0 @ 0200d5ec
    mov r1, #4 @ 0200d5f0
    mov r2, #1 @ 0200d5f4
    mov r3, r5 @ 0200d5f8
    add r0, r6, #0x94 @ 0200d5fc
    bl .L_020822e0 @ 0200d600
    mov r1, #4 @ 0200d604
    mov r2, #1 @ 0200d608
    mov r3, r5 @ 0200d60c
    add r0, r6, #0x98 @ 0200d610
    bl .L_020822e0 @ 0200d614
    mov r1, #4 @ 0200d618
    mov r2, #1 @ 0200d61c
    mov r3, r5 @ 0200d620
    add r0, r6, #0x9c @ 0200d624
    bl .L_020822e0 @ 0200d628
    ldrb r3, [r6, #0xa1] @ 0200d62c
    ldrb r1, [r6, #0xa0] @ 0200d630
    ldrb r0, [r6, #0xa3] @ 0200d634
    lsl r3, r3, #0x10 @ 0200d638
    ldrb r2, [r6, #0xa2] @ 0200d63c
    orr r3, r3, r1, lsl #24 @ 0200d640
    orr r3, r3, r0 @ 0200d644
    add r4, sp, #8 @ 0200d648
    orr r3, r3, r2, lsl #8 @ 0200d64c
    str r3, [r4, #-4]! @ 0200d650
    mov r1, #4 @ 0200d654
    mov r2, #1 @ 0200d658
    mov r3, r5 @ 0200d65c
    mov r0, r4 @ 0200d660
    bl .L_020822e0 @ 0200d664
    ldrb r3, [r6, #0xa4] @ 0200d668
    ldrb ip, [r6, #0xa5] @ 0200d66c
    mov r1, #4 @ 0200d670
    orr ip, ip, r3, lsl #8 @ 0200d674
    mov r2, #1 @ 0200d678
    mov r3, r5 @ 0200d67c
    mov r0, r4 @ 0200d680
    str ip, [sp, #4] @ 0200d684
    bl .L_020822e0 @ 0200d688
    mov r1, #1 @ 0200d68c
    mov r2, #0x10000 @ 0200d690
    mov r3, r5 @ 0200d694
    ldr r0, [r7, #8] @ 0200d698
    bl .L_020822e0 @ 0200d69c
    mov r1, #1 @ 0200d6a0
    mov r2, #0x18 @ 0200d6a4
    mov r3, r5 @ 0200d6a8
    ldr r0, [r7, #0xc] @ 0200d6ac
    bl .L_020822e0 @ 0200d6b0
    mov r1, #2 @ 0200d6b4
    mov r2, #0x40 @ 0200d6b8
    mov r3, r5 @ 0200d6bc
    ldr r0, [r7, #0x10] @ 0200d6c0
    bl .L_020822e0 @ 0200d6c4
    mov r1, #2 @ 0200d6c8
    mov r2, #0x28 @ 0200d6cc
    mov r3, r5 @ 0200d6d0
    ldr r0, [r7, #0x14] @ 0200d6d4
    bl .L_020822e0 @ 0200d6d8
    mov r1, #1 @ 0200d6dc
    mov r2, #0x10000 @ 0200d6e0
    mov r3, r5 @ 0200d6e4
    ldr r0, [r7, #0x18] @ 0200d6e8
    bl .L_020822e0 @ 0200d6ec
    mov r1, #1 @ 0200d6f0
    mov r2, #0x2000 @ 0200d6f4
    mov r3, r5 @ 0200d6f8
    ldr r0, [r7, #0x24] @ 0200d6fc
    bl .L_020822e0 @ 0200d700
    add r0, r8, #0x400 @ 0200d704
    mov r1, #1 @ 0200d708
    mov r2, #0x5c @ 0200d70c
    mov r3, r5 @ 0200d710
    add r0, r0, #4 @ 0200d714
    bl .L_020822e0 @ 0200d718
    mov r1, #1 @ 0200d71c
    mov r2, #0x100 @ 0200d720
    mov r3, r5 @ 0200d724
    ldr r0, [r7, #0x28] @ 0200d728
    bl .L_020822e0 @ 0200d72c
    mov r1, #1 @ 0200d730
    mov r2, #0x100 @ 0200d734
    mov r3, r5 @ 0200d738
    ldr r0, [r7, #0x2c] @ 0200d73c
    bl .L_020822e0 @ 0200d740
    mov r1, #1 @ 0200d744
    mov r2, #0x20 @ 0200d748
    mov r3, r5 @ 0200d74c
    ldr r0, [r7, #0x30] @ 0200d750
    bl .L_020822e0 @ 0200d754
    ldr r3, [pc, #0xc0] @ 0200d758
    ldr r2, [pc, #0xc0] @ 0200d75c
    ldrb r1, [r3] @ 0200d760
    ldr r3, [pc, #0xbc] @ 0200d764
    ldrb ip, [r2] @ 0200d768
    ldrb r2, [r3] @ 0200d76c
    orr ip, ip, r1, lsl #16 @ 0200d770
    orr ip, ip, r2, lsl #8 @ 0200d774
    mov r1, #4 @ 0200d778
    mov r2, #1 @ 0200d77c
    mov r3, r5 @ 0200d780
    mov r0, r4 @ 0200d784
    str ip, [sp, #4] @ 0200d788
    bl .L_020822e0 @ 0200d78c
    bl .L_02004438 @ 0200d790
    mov r1, #4 @ 0200d794
    str r0, [sp, #4] @ 0200d798
    mov r2, #1 @ 0200d79c
    mov r3, r5 @ 0200d7a0
    mov r0, r4 @ 0200d7a4
    bl .L_020822e0 @ 0200d7a8
    ldrb r3, [r8, #0x4a5] @ 0200d7ac
    ldrb ip, [r8, #0x4a4] @ 0200d7b0
    ldrb r1, [r8, #0x4a6] @ 0200d7b4
    ldrb r2, [r8, #0x4a7] @ 0200d7b8
    orr ip, ip, r3, lsl #8 @ 0200d7bc
    orr ip, ip, r1, lsl #16 @ 0200d7c0
    orr ip, ip, r2, lsl #24 @ 0200d7c4
    mov r1, #4 @ 0200d7c8
    mov r2, #1 @ 0200d7cc
    mov r3, r5 @ 0200d7d0
    mov r0, r4 @ 0200d7d4
    str ip, [sp, #4] @ 0200d7d8
    bl .L_020822e0 @ 0200d7dc
    mov r0, r5 @ 0200d7e0
    bl .L_02081020 @ 0200d7e4
    mov r0, r6 @ 0200d7e8
    bl .L_02005164 @ 0200d7ec
    mov r0, r8 @ 0200d7f0
    bl .L_0200500c @ 0200d7f4
    mov r0, #3 @ 0200d7f8
    bl .L_020858bc @ 0200d7fc
.L_0200d800:
    add sp, sp, #8 @ 0200d800
    pop {r4, r5, r6, r7, r8, pc} @ 0200d804
.L_0200d808:
    bl .L_0200d03c @ 0200d808
    b .L_0200d4e4 @ 0200d80c
    .byte 0x4c, 0x4c, 0x0b, 0x02, 0x14, 0xb3, 0x3e, 0x02, 0x03, 0x00, 0x53, 0x4a, 0x70, 0xf0, 0x08, 0x02 @ 0200d810
    .byte 0x00, 0x90, 0x09, 0x02, 0x49, 0xf3, 0x08, 0x02, 0x01, 0x90, 0x09, 0x02 @ 0200d820
.L_0200d82c:
@ FUN_0200d82c at 0x0200d82c
    push {r4, lr} @ 0200d82c
    mov r0, #1 @ 0200d830
    bl .L_0200d0b8 @ 0200d834
    ldr r1, [pc, #0x6c] @ 0200d838
    mov r4, r0 @ 0200d83c
    bl .L_02081588 @ 0200d840
    cmp r0, #0 @ 0200d844
    beq .L_0200d864 @ 0200d848
    ldr r3, [pc, #0x5c] @ 0200d84c
    ldr r1, [r3] @ 0200d850
    ldr r2, [r1, #0x258] @ 0200d854
    orr r2, r2, #0x20 @ 0200d858
    str r2, [r1, #0x258] @ 0200d85c
    bl .L_02081020 @ 0200d860
.L_0200d864:
    mov r0, r4 @ 0200d864
    bl .L_020826fc @ 0200d868
    mov r0, #2 @ 0200d86c
    bl .L_0200d0b8 @ 0200d870
    ldr r1, [pc, #0x30] @ 0200d874
    mov r4, r0 @ 0200d878
    bl .L_02081588 @ 0200d87c
    cmp r0, #0 @ 0200d880
    beq .L_0200d8a0 @ 0200d884
    ldr r3, [pc, #0x20] @ 0200d888
    ldr r1, [r3] @ 0200d88c
    ldr r2, [r1, #0x258] @ 0200d890
    orr r2, r2, #0x40 @ 0200d894
    str r2, [r1, #0x258] @ 0200d898
    bl .L_02081020 @ 0200d89c
.L_0200d8a0:
    mov r0, r4 @ 0200d8a0
    pop {r4, lr} @ 0200d8a4
    b .L_020826fc @ 0200d8a8
    .byte 0x74, 0xf0, 0x08, 0x02, 0xc8, 0x8f, 0x09, 0x02, 0x04, 0x30, 0x9f, 0xe5, 0x00, 0x00, 0x83, 0xe5 @ 0200d8ac
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0x5c, 0xf3, 0x08, 0x02 @ 0200d8bc
.L_0200d8c4:
@ FUN_0200d8c4 at 0x0200d8c4
    ldr r3, [pc, #0x2c] @ 0200d8c4
    ldr r2, [r3] @ 0200d8c8
    cmp r2, #0 @ 0200d8cc
    bxeq lr @ 0200d8d0
    ldr r3, [pc, #0x20] @ 0200d8d4
    mov r2, #0 @ 0200d8d8
    ldr r3, [r3] @ 0200d8dc
.L_0200d8e0:
    mov r1, #0 @ 0200d8e0
    strh r1, [r2, r3] @ 0200d8e4
    add r2, r2, #2 @ 0200d8e8
    cmp r2, #0x600 @ 0200d8ec
    bne .L_0200d8e0 @ 0200d8f0
    bx lr @ 0200d8f4
    .byte 0x50, 0x4c, 0x0b, 0x02, 0x58, 0x4c, 0x0b, 0x02 @ 0200d8f8
.L_0200d900:
@ FUN_0200d900 at 0x0200d900
    push {r4, r5, r6, r7, lr} @ 0200d900
    cmp r2, #0 @ 0200d904
    cmpne r0, #0 @ 0200d908
    mov ip, r2 @ 0200d90c
    movne r7, #0 @ 0200d910
    moveq r7, #1 @ 0200d914
    mov r6, r1 @ 0200d918
    mov r2, r3 @ 0200d91c
    ldr lr, [sp, #0x14] @ 0200d920
    popeq {r4, r5, r6, r7, pc} @ 0200d924
    and r3, lr, #0xf @ 0200d928
    lsls r5, r2, #5 @ 0200d92c
    ldr r1, [pc, #0x68] @ 0200d930
    ldr r2, [pc, #0x68] @ 0200d934
    lsl r3, r3, #0xc @ 0200d938
    str ip, [r2] @ 0200d93c
    str r3, [r1] @ 0200d940
    lsl r4, lr, #4 @ 0200d944
    beq .L_0200d98c @ 0200d948
    mov ip, r7 @ 0200d94c
    lsl lr, lr, #0xc @ 0200d950
    mov r1, r7 @ 0200d954
.L_0200d958:
    ldrh r2, [r1, r0] @ 0200d958
    and r3, lr, #0xf000 @ 0200d95c
    tst r2, #0xff00 @ 0200d960
    orrne r2, r3, r2 @ 0200d964
    orr r3, r2, r4 @ 0200d968
    tst r2, #0xff @ 0200d96c
    add ip, ip, #1 @ 0200d970
    lsl r3, r3, #0x10 @ 0200d974
    lsrne r2, r3, #0x10 @ 0200d978
    cmp r5, ip @ 0200d97c
    strh r2, [r1, r6] @ 0200d980
    add r1, r1, #2 @ 0200d984
    bne .L_0200d958 @ 0200d988
.L_0200d98c:
    ldr r3, [pc, #0x14] @ 0200d98c
    mov r2, #1 @ 0200d990
    str r2, [r3] @ 0200d994
    pop {r4, r5, r6, r7, lr} @ 0200d998
    b .L_0200d8c4 @ 0200d99c
    .byte 0x54, 0x4c, 0x0b, 0x02, 0x58, 0x4c, 0x0b, 0x02, 0x50, 0x4c, 0x0b, 0x02, 0x30, 0x30, 0x9f, 0xe5 @ 0200d9a0
    .byte 0x00, 0x20, 0x93, 0xe5, 0x00, 0x00, 0x52, 0xe3, 0x1e, 0xff, 0x2f, 0x01, 0x24, 0x30, 0x9f, 0xe5 @ 0200d9b0
    .byte 0x00, 0x10, 0xa0, 0xe3, 0x00, 0x20, 0x93, 0xe5, 0x00, 0x03, 0x82, 0xe0, 0x00, 0x30, 0xa0, 0xe3 @ 0200d9c0
    .byte 0xb0, 0x30, 0x81, 0xe1, 0x02, 0x10, 0x81, 0xe2, 0x40, 0x00, 0x51, 0xe3, 0xfa, 0xff, 0xff, 0x1a @ 0200d9d0
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0x50, 0x4c, 0x0b, 0x02, 0x58, 0x4c, 0x0b, 0x02 @ 0200d9e0
.L_0200d9ec:
@ FUN_0200d9ec at 0x0200d9ec
    ldr r3, [pc, #0x40] @ 0200d9ec
    ldr r2, [r3] @ 0200d9f0
    cmp r2, #0 @ 0200d9f4
    bxeq lr @ 0200d9f8
    ldr r2, [pc, #0x34] @ 0200d9fc
    rsb r3, r0, #0x18 @ 0200da00
    ldr r1, [r2] @ 0200da04
    lsls ip, r3, #5 @ 0200da08
    add r0, r1, r0, lsl #6 @ 0200da0c
    bxeq lr @ 0200da10
    mov r2, #0 @ 0200da14
.L_0200da18:
    lsl r3, r2, #1 @ 0200da18
    add r2, r2, #1 @ 0200da1c
    mov r1, #0 @ 0200da20
    cmp r2, ip @ 0200da24
    strh r1, [r3, r0] @ 0200da28
    bne .L_0200da18 @ 0200da2c
    bx lr @ 0200da30
    .byte 0x50, 0x4c, 0x0b, 0x02, 0x58, 0x4c, 0x0b, 0x02 @ 0200da34
.L_0200da3c:
@ FUN_0200da3c at 0x0200da3c
    push {r4, r5, lr} @ 0200da3c
    subs r5, r0, #0 @ 0200da40
    mov r4, r1 @ 0200da44
    mov r0, r2 @ 0200da48
    popeq {r4, r5, pc} @ 0200da4c
    ldrb lr, [r5] @ 0200da50
    cmp lr, #0 @ 0200da54
    popeq {r4, r5, pc} @ 0200da58
    ldr r3, [pc, #0x6c] @ 0200da5c
    ldr r2, [r3] @ 0200da60
    cmp r2, #0 @ 0200da64
    popeq {r4, r5, pc} @ 0200da68
    ldr r3, [pc, #0x60] @ 0200da6c
    ldr r2, [pc, #0x60] @ 0200da70
    ldr r1, [r3] @ 0200da74
    ldr r3, [pc, #0x5c] @ 0200da78
    ldr ip, [r2] @ 0200da7c
    add r0, r0, r4, lsl #5 @ 0200da80
    lsl r1, r1, #0x10 @ 0200da84
    ldrb r4, [r3] @ 0200da88
    add ip, ip, r0, lsl #1 @ 0200da8c
    lsr r1, r1, #0x10 @ 0200da90
    mov r0, #0 @ 0200da94
.L_0200da98:
    rsb r3, r4, lr @ 0200da98
    and r3, r3, #0xff @ 0200da9c
    orr r3, r1, r3 @ 0200daa0
    lsl r2, r0, #1 @ 0200daa4
    strh r3, [r2, ip] @ 0200daa8
    add r0, r0, #1 @ 0200daac
    ldrb lr, [r0, r5] @ 0200dab0
    subs r3, lr, #0 @ 0200dab4
    movne r3, #1 @ 0200dab8
    cmp r0, #0xfe @ 0200dabc
    movhi r3, #0 @ 0200dac0
    cmp r3, #0 @ 0200dac4
    bne .L_0200da98 @ 0200dac8
    pop {r4, r5, pc} @ 0200dacc
    .byte 0x50, 0x4c, 0x0b, 0x02, 0x54, 0x4c, 0x0b, 0x02, 0x58, 0x4c, 0x0b, 0x02, 0x5c, 0xf3, 0x08, 0x02 @ 0200dad0
.L_0200dae0:
@ FUN_0200dae0 at 0x0200dae0
    push {r4, r5, r6, lr} @ 0200dae0
    subs r5, r0, #0 @ 0200dae4
    mov lr, r2 @ 0200dae8
    popeq {r4, r5, r6, pc} @ 0200daec
    ldrb ip, [r5] @ 0200daf0
    cmp ip, #0 @ 0200daf4
    popeq {r4, r5, r6, pc} @ 0200daf8
    ldr r3, [pc, #0x78] @ 0200dafc
    ldr r2, [r3] @ 0200db00
    cmp r2, #0 @ 0200db04
    popeq {r4, r5, r6, pc} @ 0200db08
    ldr r3, [pc, #0x6c] @ 0200db0c
    cmp lr, #0x1f @ 0200db10
    ldr r2, [r3] @ 0200db14
    add r6, r2, r1, lsl #6 @ 0200db18
    pophi {r4, r5, r6, pc} @ 0200db1c
    ldr r3, [pc, #0x5c] @ 0200db20
    ldr r1, [pc, #0x5c] @ 0200db24
    ldr r2, [r3] @ 0200db28
    ldrb r4, [r1] @ 0200db2c
    lsl r2, r2, #0x10 @ 0200db30
    lsr r0, r2, #0x10 @ 0200db34
    add r1, r6, lr, lsl #1 @ 0200db38
    mov r2, lr @ 0200db3c
    mov lr, #0 @ 0200db40
.L_0200db44:
    rsb r3, r4, ip @ 0200db44
    and r3, r3, #0xff @ 0200db48
    orr r3, r0, r3 @ 0200db4c
    strh r3, [r1], #2 @ 0200db50
    add lr, lr, #1 @ 0200db54
    ldrb ip, [lr, r5] @ 0200db58
    add r2, r2, #1 @ 0200db5c
    subs r3, ip, #0 @ 0200db60
    movne r3, #1 @ 0200db64
    cmp r2, #0x1f @ 0200db68
    movhi r3, #0 @ 0200db6c
    cmp r3, #0 @ 0200db70
    bne .L_0200db44 @ 0200db74
    pop {r4, r5, r6, pc} @ 0200db78
    .byte 0x50, 0x4c, 0x0b, 0x02, 0x58, 0x4c, 0x0b, 0x02, 0x54, 0x4c, 0x0b, 0x02, 0x5c, 0xf3, 0x08, 0x02 @ 0200db7c
.L_0200db8c:
@ FUN_0200db8c at 0x0200db8c
    ldr r3, [pc, #0xb8] @ 0200db8c
    push {r4, r5, r6, r7, lr} @ 0200db90
    mov r7, r0 @ 0200db94
    ldr r0, [r3] @ 0200db98
    mov ip, r1 @ 0200db9c
    cmp r0, #0 @ 0200dba0
    popeq {r4, r5, r6, r7, pc} @ 0200dba4
    ldr lr, [pc, #0xa0] @ 0200dba8
    add r2, r2, ip, lsl #5 @ 0200dbac
    umull r3, r1, lr, r7 @ 0200dbb0
    ldr r3, [pc, #0x98] @ 0200dbb4
    lsrs r1, r1, #3 @ 0200dbb8
    ldr r0, [r3] @ 0200dbbc
    add r0, r0, r2, lsl #1 @ 0200dbc0
    beq .L_0200dc44 @ 0200dbc4
    mov r2, lr @ 0200dbc8
    mov ip, #0 @ 0200dbcc
.L_0200dbd0:
    umull lr, r3, r2, r1 @ 0200dbd0
    lsrs r1, r3, #3 @ 0200dbd4
    add ip, ip, #1 @ 0200dbd8
    bne .L_0200dbd0 @ 0200dbdc
    cmp ip, #0 @ 0200dbe0
    poplt {r4, r5, r6, r7, pc} @ 0200dbe4
.L_0200dbe8:
    ldr r3, [pc, #0x68] @ 0200dbe8
    ldr r2, [pc, #0x68] @ 0200dbec
    ldr r1, [r3] @ 0200dbf0
    ldrb r5, [r2] @ 0200dbf4
    lsl r1, r1, #0x10 @ 0200dbf8
    ldr r6, [pc, #0x5c] @ 0200dbfc
    add lr, r0, ip, lsl #1 @ 0200dc00
    lsr r4, r1, #0x10 @ 0200dc04
    mov r0, r7 @ 0200dc08
.L_0200dc0c:
    ldr r3, [pc, #0x3c] @ 0200dc0c
    subs ip, ip, #1 @ 0200dc10
    umull r2, r1, r3, r0 @ 0200dc14
    lsr r1, r1, #3 @ 0200dc18
    add r2, r1, r1, lsl #2 @ 0200dc1c
    sub r2, r0, r2, lsl #1 @ 0200dc20
    ldrb r3, [r6, r2] @ 0200dc24
    mov r0, r1 @ 0200dc28
    rsb r3, r5, r3 @ 0200dc2c
    and r3, r3, #0xff @ 0200dc30
    orr r3, r4, r3 @ 0200dc34
    strh r3, [lr], #-2 @ 0200dc38
    bpl .L_0200dc0c @ 0200dc3c
    pop {r4, r5, r6, r7, pc} @ 0200dc40
.L_0200dc44:
    mov ip, r1 @ 0200dc44
    b .L_0200dbe8 @ 0200dc48
    .byte 0x50, 0x4c, 0x0b, 0x02, 0xcd, 0xcc, 0xcc, 0xcc, 0x58, 0x4c, 0x0b, 0x02, 0x54, 0x4c, 0x0b, 0x02 @ 0200dc4c
    .byte 0x5c, 0xf3, 0x08, 0x02, 0x90, 0xec, 0x08, 0x02 @ 0200dc5c
.L_0200dc64:
@ FUN_0200dc64 at 0x0200dc64
    ldr r3, [pc, #0x94] @ 0200dc64
    push {r4, r5, r6, r7, lr} @ 0200dc68
    mov r6, r0 @ 0200dc6c
    ldr r0, [r3] @ 0200dc70
    cmp r0, #0 @ 0200dc74
    popeq {r4, r5, r6, r7, pc} @ 0200dc78
    add r3, r2, r1, lsl #5 @ 0200dc7c
    ldr r2, [pc, #0x7c] @ 0200dc80
    lsrs r0, r6, #4 @ 0200dc84
    ldr r1, [r2] @ 0200dc88
    add r7, r1, r3, lsl #1 @ 0200dc8c
    beq .L_0200dcf8 @ 0200dc90
    mov ip, #0 @ 0200dc94
.L_0200dc98:
    lsrs r0, r0, #4 @ 0200dc98
    add ip, ip, #1 @ 0200dc9c
    bne .L_0200dc98 @ 0200dca0
    cmp ip, #0 @ 0200dca4
    poplt {r4, r5, r6, r7, pc} @ 0200dca8
.L_0200dcac:
    ldr r3, [pc, #0x54] @ 0200dcac
    ldr r2, [pc, #0x54] @ 0200dcb0
    ldr r1, [r3] @ 0200dcb4
    ldrb r4, [r2] @ 0200dcb8
    lsl r1, r1, #0x10 @ 0200dcbc
    ldr r5, [pc, #0x48] @ 0200dcc0
    lsr lr, r1, #0x10 @ 0200dcc4
    mov r0, r6 @ 0200dcc8
    add r1, r7, ip, lsl #1 @ 0200dccc
.L_0200dcd0:
    and r2, r0, #0xf @ 0200dcd0
    ldrb r3, [r5, r2] @ 0200dcd4
    subs ip, ip, #1 @ 0200dcd8
    rsb r3, r4, r3 @ 0200dcdc
    and r3, r3, #0xff @ 0200dce0
    orr r3, lr, r3 @ 0200dce4
    strh r3, [r1], #-2 @ 0200dce8
    lsr r0, r0, #4 @ 0200dcec
    bpl .L_0200dcd0 @ 0200dcf0
    pop {r4, r5, r6, r7, pc} @ 0200dcf4
.L_0200dcf8:
    mov ip, r0 @ 0200dcf8
    b .L_0200dcac @ 0200dcfc
    .byte 0x50, 0x4c, 0x0b, 0x02, 0x58, 0x4c, 0x0b, 0x02, 0x54, 0x4c, 0x0b, 0x02, 0x5c, 0xf3, 0x08, 0x02 @ 0200dd00
    .byte 0x90, 0xec, 0x08, 0x02, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff @ 0200dd10
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200dd20
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200dd30
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200dd40
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200dd50
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200dd60
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200dd70
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200dd80
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200dd90
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200dda0
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200ddb0
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200ddc0
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200ddd0
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200dde0
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200ddf0
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200de00
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200de10
    .byte 0x44, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200de20
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200de30
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200de40
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200de50
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200de60
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200de70
    .byte 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04 @ 0200de80
    .byte 0x00, 0x04, 0x04, 0x00, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x00, 0x04, 0x04, 0x00 @ 0200de90
    .byte 0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84, 0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80 @ 0200dea0
    .byte 0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80, 0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84 @ 0200deb0
    .byte 0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80, 0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84 @ 0200dec0
    .byte 0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84, 0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80 @ 0200ded0
    .byte 0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80, 0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84 @ 0200dee0
    .byte 0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84, 0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80 @ 0200def0
    .byte 0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84, 0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80 @ 0200df00
    .byte 0x84, 0x80, 0x80, 0x84, 0x80, 0x84, 0x84, 0x80, 0x80, 0x84, 0x84, 0x80, 0x84, 0x80, 0x80, 0x84 @ 0200df10
