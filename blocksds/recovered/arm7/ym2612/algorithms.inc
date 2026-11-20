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
