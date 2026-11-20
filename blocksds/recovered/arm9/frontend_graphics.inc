.L_02006730:
@ FUN_02006730 at 0x02006730
    ldr r2, [pc, #0x48] @ 02006730
    add r1, r2, #0x740 @ 02006734
.L_02006738:
    ldrb r3, [r2] @ 02006738
    sub r3, r3, #0x40 @ 0200673c
    strb r3, [r2], #1 @ 02006740
    cmp r2, r1 @ 02006744
    bne .L_02006738 @ 02006748
    add r1, r2, #0x500 @ 0200674c
.L_02006750:
    ldrb r3, [r2] @ 02006750
    sub r3, r3, #0x20 @ 02006754
    strb r3, [r2], #1 @ 02006758
    cmp r2, r1 @ 0200675c
    bne .L_02006750 @ 02006760
    add r1, r2, #0x780 @ 02006764
.L_02006768:
    ldrb r3, [r2] @ 02006768
    sub r3, r3, #0x50 @ 0200676c
    strb r3, [r2], #1 @ 02006770
    cmp r2, r1 @ 02006774
    bne .L_02006768 @ 02006778
    bx lr @ 0200677c
    .byte 0xe8, 0x87, 0x08, 0x02 @ 02006780
.L_02006784:
@ FUN_02006784 at 0x02006784
    ldr r2, [pc, #0x3c] @ 02006784
    lsl r0, r0, #6 @ 02006788
    mov r1, #0x4b @ 0200678c
    strh r1, [r0, r2] @ 02006790
    add r3, r0, #0x6200000 @ 02006794
    ldr r1, [pc, #0x2c] @ 02006798
    add r3, r3, #0x1000 @ 0200679c
    ldr ip, [pc, #0x28] @ 020067a0
    strh r1, [r3, #0x3e] @ 020067a4
    mov r2, #0 @ 020067a8
.L_020067ac:
    add r3, r0, r2 @ 020067ac
    add r2, r2, #2 @ 020067b0
    mov r1, #0x4c @ 020067b4
    cmp r2, #0x3c @ 020067b8
    strh r1, [r3, ip] @ 020067bc
    bne .L_020067ac @ 020067c0
    bx lr @ 020067c4
    .byte 0x00, 0x10, 0x20, 0x06, 0x4b, 0x04, 0x00, 0x00, 0x02, 0x10, 0x20, 0x06 @ 020067c8
.L_020067d4:
@ FUN_020067d4 at 0x020067d4
    cmp r0, #1 @ 020067d4
    ldr r3, [pc, #0xac] @ 020067d8
    beq .L_02006858 @ 020067dc
    bhs .L_02006818 @ 020067e0
    mov r2, #0x62 @ 020067e4
    strh r2, [r3, #0xbc] @ 020067e8
    mov r2, #0x52 @ 020067ec
    strh r2, [r3, #0x78] @ 020067f0
    mov r2, #0x53 @ 020067f4
    strh r2, [r3, #0x7a] @ 020067f8
    mov r2, #0x54 @ 020067fc
    strh r2, [r3, #0x7c] @ 02006800
    mov r2, #0x60 @ 02006804
    strh r2, [r3, #0xb8] @ 02006808
    mov r2, #0x61 @ 0200680c
    strh r2, [r3, #0xba] @ 02006810
    bx lr @ 02006814
.L_02006818:
    cmp r0, #2 @ 02006818
    bxne lr @ 0200681c
    ldr r3, [pc, #0x64] @ 02006820
    mov r2, #0x65 @ 02006824
    strh r2, [r3, #0xbc] @ 02006828
    mov r2, #0x55 @ 0200682c
    strh r2, [r3, #0x78] @ 02006830
    mov r2, #0x56 @ 02006834
    strh r2, [r3, #0x7a] @ 02006838
    mov r2, #0x57 @ 0200683c
    strh r2, [r3, #0x7c] @ 02006840
    mov r2, #0x63 @ 02006844
    strh r2, [r3, #0xb8] @ 02006848
    mov r2, #0x64 @ 0200684c
    strh r2, [r3, #0xba] @ 02006850
    bx lr @ 02006854
.L_02006858:
    mov r2, #0x5f @ 02006858
    strh r2, [r3, #0xbc] @ 0200685c
    mov r2, #0x4f @ 02006860
    strh r2, [r3, #0x78] @ 02006864
    mov r2, #0x50 @ 02006868
    strh r2, [r3, #0x7a] @ 0200686c
    mov r2, #0x51 @ 02006870
    strh r2, [r3, #0x7c] @ 02006874
    mov r2, #0x5d @ 02006878
    strh r2, [r3, #0xb8] @ 0200687c
    mov r2, #0x5e @ 02006880
    strh r2, [r3, #0xba] @ 02006884
    bx lr @ 02006888
    .byte 0x00, 0x15, 0x20, 0x06 @ 0200688c
.L_02006890:
@ FUN_02006890 at 0x02006890
    ldr r3, [pc, #0x10] @ 02006890
    mov r2, #0x5c @ 02006894
    strh r2, [r3, #0xb6] @ 02006898
    mov r2, #0x4e @ 0200689c
    strh r2, [r3, #0x76] @ 020068a0
    bx lr @ 020068a4
    .byte 0x00, 0x15, 0x20, 0x06 @ 020068a8
.L_020068ac:
@ FUN_020068ac at 0x020068ac
    ldr r2, [pc, #0x50] @ 020068ac
    cmp r0, #0 @ 020068b0
    mov r3, r2 @ 020068b4
    beq .L_020068e0 @ 020068b8
    mov r3, #0x69 @ 020068bc
    strh r3, [r2, #0x8c] @ 020068c0
    mov r3, #0x5a @ 020068c4
    strh r3, [r2, #0x4a] @ 020068c8
    mov r3, #0x5b @ 020068cc
    strh r3, [r2, #0x4c] @ 020068d0
    mov r3, #0x68 @ 020068d4
    strh r3, [r2, #0x8a] @ 020068d8
    bx lr @ 020068dc
.L_020068e0:
    mov r2, #0x67 @ 020068e0
    strh r2, [r3, #0x8c] @ 020068e4
    mov r2, #0x58 @ 020068e8
    strh r2, [r3, #0x4a] @ 020068ec
    mov r2, #0x59 @ 020068f0
    strh r2, [r3, #0x4c] @ 020068f4
    mov r2, #0x66 @ 020068f8
    strh r2, [r3, #0x8a] @ 020068fc
    bx lr @ 02006900
    .byte 0x00, 0x15, 0x20, 0x06 @ 02006904
.L_02006908:
@ FUN_02006908 at 0x02006908
    push {r4, lr} @ 02006908
    ldr r3, [pc, #0x88] @ 0200690c
    ldr lr, [pc, #0x88] @ 02006910
    umull r2, ip, r3, r0 @ 02006914
    umull r3, r2, lr, r0 @ 02006918
    lsr ip, ip, #5 @ 0200691c
    lsr r2, r2, #3 @ 02006920
    umull r4, r1, lr, r2 @ 02006924
    umull r4, r3, lr, ip @ 02006928
    lsr r1, r1, #3 @ 0200692c
    lsr r3, r3, #3 @ 02006930
    add lr, r2, r2, lsl #2 @ 02006934
    add r3, r3, r3, lsl #2 @ 02006938
    add r1, r1, r1, lsl #2 @ 0200693c
    sub ip, ip, r3, lsl #1 @ 02006940
    sub r0, r0, lr, lsl #1 @ 02006944
    sub r2, r2, r1, lsl #1 @ 02006948
    add ip, ip, #0x6a @ 0200694c
    add r2, r2, #0x6a @ 02006950
    add r0, r0, #0x6a @ 02006954
    lsl ip, ip, #0x10 @ 02006958
    lsl r2, r2, #0x10 @ 0200695c
    lsl r0, r0, #0x10 @ 02006960
    ldr r1, [pc, #0x38] @ 02006964
    lsr ip, ip, #0x10 @ 02006968
    lsr r2, r2, #0x10 @ 0200696c
    lsr r0, r0, #0x10 @ 02006970
    add lr, ip, #0xa @ 02006974
    add r4, r2, #0xa @ 02006978
    add r3, r0, #0xa @ 0200697c
    strh r3, [r1, #0x86] @ 02006980
    strh lr, [r1, #0x82] @ 02006984
    strh r4, [r1, #0x84] @ 02006988
    strh ip, [r1, #0x42] @ 0200698c
    strh r2, [r1, #0x44] @ 02006990
    strh r0, [r1, #0x46] @ 02006994
    pop {r4, pc} @ 02006998
    .byte 0x1f, 0x85, 0xeb, 0x51, 0xcd, 0xcc, 0xcc, 0xcc, 0x00, 0x15, 0x20, 0x06 @ 0200699c
.L_020069a8:
@ FUN_020069a8 at 0x020069a8
    ldr r3, [pc, #0x30] @ 020069a8
    mov r2, #0x9b @ 020069ac
    strh r2, [r3, #0xa6] @ 020069b0
    mov r2, #0x8a @ 020069b4
    strh r2, [r3, #0x62] @ 020069b8
    mov r2, #0x8b @ 020069bc
    strh r2, [r3, #0x64] @ 020069c0
    mov r2, #0x8c @ 020069c4
    strh r2, [r3, #0x66] @ 020069c8
    mov r2, #0x99 @ 020069cc
    strh r2, [r3, #0xa2] @ 020069d0
    mov r2, #0x9a @ 020069d4
    strh r2, [r3, #0xa4] @ 020069d8
    bx lr @ 020069dc
    .byte 0x00, 0x15, 0x20, 0x06 @ 020069e0
.L_020069e4:
@ FUN_020069e4 at 0x020069e4
    and r0, r0, #1 @ 020069e4
    lsl r3, r0, #1 @ 020069e8
    push {r4, r5, r6, lr} @ 020069ec
    add r3, r3, r0 @ 020069f0
    lsl r5, r3, #1 @ 020069f4
    add r4, r5, #0x7e @ 020069f8
    cmp r1, #0 @ 020069fc
    ldr r6, [pc, #0x38] @ 02006a00
    addeq r4, r4, #3 @ 02006a04
    ldr r3, [pc, #0x30] @ 02006a08
    add r6, r5, r6 @ 02006a0c
    add r2, r4, #0x11 @ 02006a10
    add r1, r4, #1 @ 02006a14
    add r0, r4, #2 @ 02006a18
    add ip, r4, #0xf @ 02006a1c
    add lr, r4, #0x10 @ 02006a20
    strh r4, [r5, r3] @ 02006a24
    strh r2, [r6, #0x44] @ 02006a28
    strh r1, [r6, #2] @ 02006a2c
    strh r0, [r6, #4] @ 02006a30
    strh ip, [r6, #0x40] @ 02006a34
    strh lr, [r6, #0x42] @ 02006a38
    pop {r4, r5, r6, pc} @ 02006a3c
    .byte 0x68, 0x15, 0x20, 0x06 @ 02006a40
.L_02006a44:
@ FUN_02006a44 at 0x02006a44
    ldr r3, [pc, #8] @ 02006a44
    mov r2, #0xff @ 02006a48
    str r2, [r3] @ 02006a4c
    bx lr @ 02006a50
    .byte 0xa0, 0x93, 0x09, 0x02, 0xf4, 0x30, 0x9f, 0xe5, 0xf4, 0x20, 0x9f, 0xe5, 0x30, 0x40, 0x2d, 0xe9 @ 02006a54
    .byte 0xf0, 0xe0, 0x9f, 0xe5, 0x00, 0x00, 0xd3, 0xe5, 0x00, 0xc0, 0xd2, 0xe5, 0x00, 0x30, 0x9e, 0xe5 @ 02006a64
    .byte 0x80, 0x10, 0x8c, 0xe1, 0x03, 0x00, 0x51, 0xe1, 0xdc, 0x50, 0x9f, 0x15, 0x25, 0x00, 0x00, 0x0a @ 02006a74
    .byte 0xd8, 0x30, 0x9f, 0xe5, 0xd8, 0x40, 0x9f, 0xe5, 0x00, 0x20, 0x93, 0xe5, 0x00, 0x30, 0xa0, 0xe3 @ 02006a84
    .byte 0x04, 0x00, 0x12, 0xe3, 0x00, 0x10, 0x8e, 0xe5, 0x00, 0x30, 0x84, 0xe5, 0x0d, 0x00, 0x00, 0x1a @ 02006a94
    .byte 0x03, 0x00, 0x5c, 0xe1, 0xbc, 0x20, 0x9f, 0x15, 0x05, 0x00, 0x00, 0x1a, 0xb4, 0x20, 0x9f, 0xe5 @ 02006aa4
    .byte 0x00, 0x30, 0x92, 0xe5, 0x10, 0x00, 0x73, 0xe3, 0x0f, 0x30, 0xe0, 0xb3, 0x00, 0x30, 0x82, 0xb5 @ 02006ab4
    .byte 0x19, 0x00, 0x00, 0xaa, 0x8c, 0x31, 0xa0, 0xe1, 0x00, 0x20, 0x92, 0xe5, 0x10, 0x30, 0x83, 0xe3 @ 02006ac4
    .byte 0x02, 0x30, 0x83, 0xe0, 0x00, 0x30, 0x84, 0xe5, 0x00, 0x00, 0x50, 0xe3, 0x88, 0x20, 0x9f, 0x15 @ 02006ad4
    .byte 0x88, 0xc0, 0x9f, 0xe5, 0x00, 0x30, 0x92, 0x15, 0x80, 0x12, 0xa0, 0xe1, 0x03, 0x30, 0x81, 0x10 @ 02006ae4
    .byte 0x00, 0x10, 0x8c, 0xe5, 0x00, 0x30, 0x8c, 0x15, 0x00, 0x30, 0x95, 0xe5, 0x00, 0x00, 0x53, 0xe3 @ 02006af4
    .byte 0x30, 0x80, 0xbd, 0x08, 0x50, 0x30, 0x9f, 0xe5, 0x00, 0x20, 0xa0, 0xe3, 0x00, 0x20, 0x83, 0xe5 @ 02006b04
    .byte 0x30, 0x40, 0xbd, 0xe8, 0xcf, 0x08, 0x00, 0xea, 0x3c, 0x50, 0x9f, 0xe5, 0x00, 0x30, 0x95, 0xe5 @ 02006b14
    .byte 0x00, 0x00, 0x53, 0xe3, 0xd5, 0xff, 0xff, 0x1a, 0x30, 0x80, 0xbd, 0xe8, 0x10, 0x00, 0x53, 0xe3 @ 02006b24
    .byte 0x10, 0x30, 0xa0, 0xc3, 0x00, 0x30, 0x82, 0xc5, 0x00, 0x20, 0x92, 0xe5, 0x8c, 0x31, 0xa0, 0xe1 @ 02006b34
    .byte 0x10, 0x30, 0x83, 0xe3, 0x02, 0x30, 0x83, 0xe0, 0x00, 0x30, 0x84, 0xe5, 0xe1, 0xff, 0xff, 0xea @ 02006b44
    .byte 0x05, 0xdb, 0x3d, 0x02, 0x06, 0xdb, 0x3d, 0x02, 0xa0, 0x93, 0x09, 0x02, 0xac, 0x93, 0x09, 0x02 @ 02006b54
    .byte 0x10, 0xb6, 0x3c, 0x02, 0xa8, 0x93, 0x09, 0x02, 0xb4, 0x93, 0x09, 0x02, 0xb0, 0x93, 0x09, 0x02 @ 02006b64
    .byte 0xa4, 0x93, 0x09, 0x02 @ 02006b74
.L_02006b78:
@ FUN_02006b78 at 0x02006b78
    ldr r0, [pc, #8] @ 02006b78
    ldr r1, [pc, #8] @ 02006b7c
    mov r2, #0x80 @ 02006b80
    b .L_0208591c @ 02006b84
    .byte 0xe8, 0xa0, 0x08, 0x02, 0x40, 0x15, 0x20, 0x06 @ 02006b88
.L_02006b90:
@ FUN_02006b90 at 0x02006b90
    lsl r3, r0, #6 @ 02006b90
    ldr r0, [pc, #0x10] @ 02006b94
    add r1, r3, #0x6200000 @ 02006b98
    add r0, r3, r0 @ 02006b9c
    add r1, r1, #0x1000 @ 02006ba0
    mov r2, #0x40 @ 02006ba4
    b .L_0208591c @ 02006ba8
    .byte 0xa8, 0x9b, 0x08, 0x02 @ 02006bac
.L_02006bb0:
@ FUN_02006bb0 at 0x02006bb0
    str lr, [sp, #-4]! @ 02006bb0
    ldr r2, [pc, #0x54] @ 02006bb4
    ldr ip, [pc, #0x54] @ 02006bb8
    ldr r0, [pc, #0x54] @ 02006bbc
    ldr r1, [pc, #0x54] @ 02006bc0
    sub sp, sp, #4 @ 02006bc4
.L_02006bc8:
    add r3, r2, ip @ 02006bc8
    ldrh r3, [r3, r0] @ 02006bcc
    strh r3, [r2], #2 @ 02006bd0
    cmp r2, r1 @ 02006bd4
    bne .L_02006bc8 @ 02006bd8
    ldr ip, [pc, #0x3c] @ 02006bdc
    ldr r3, [pc, #0x3c] @ 02006be0
    ldr r0, [pc, #0x3c] @ 02006be4
    ldr r1, [pc, #0x3c] @ 02006be8
    mov r2, #0x2700 @ 02006bec
    strh ip, [r3, #0xfe] @ 02006bf0
    bl .L_0208591c @ 02006bf4
    ldr r0, [pc, #0x30] @ 02006bf8
    ldr r1, [pc, #0x30] @ 02006bfc
    mov r2, #0x600 @ 02006c00
    add sp, sp, #4 @ 02006c04
    .word 0xe49de004 @ 02006c08 pop {lr}
    b .L_0208591c @ 02006c0c
    .byte 0x00, 0x04, 0x00, 0x05, 0xa8, 0x72, 0x08, 0x02, 0x00, 0xfc, 0xff, 0xfa, 0xe0, 0x05, 0x00, 0x05 @ 02006c10
    .byte 0x5f, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0xa8, 0x74, 0x08, 0x02, 0x00, 0x80, 0x20, 0x06 @ 02006c20
    .byte 0xa8, 0x9b, 0x08, 0x02, 0x00, 0x10, 0x20, 0x06 @ 02006c30
.L_02006c38:
    push {r4, r5, r6, lr} @ 02006c38
    sub sp, sp, #8 @ 02006c3c
    bl .L_020858a4 @ 02006c40
    ldr r3, [pc, #0xa8] @ 02006c44
    mov r5, #0x4000000 @ 02006c48
    mov r0, #0 @ 02006c4c
    str r3, [r5] @ 02006c50
    bl .L_02006f2c @ 02006c54
    bl .L_02008edc @ 02006c58
    ldrh r4, [r5] @ 02006c5c
    ldr ip, [pc, #0x90] @ 02006c60
    ldr r6, [pc, #0x90] @ 02006c64
    orr r4, r4, #0x20 @ 02006c68
    mov r1, #9 @ 02006c6c
    mov r2, #4 @ 02006c70
    mov r3, #2 @ 02006c74
    strh r4, [r5] @ 02006c78
    mov r0, #1 @ 02006c7c
    str ip, [r6] @ 02006c80
    bl .L_02085928 @ 02006c84
    mov r0, #2 @ 02006c88
    bl .L_02085934 @ 02006c8c
    mov ip, #0x288 @ 02006c90
    strh ip, [r6, #0xa] @ 02006c94
    ldr ip, [pc, #0x60] @ 02006c98
    ldr r0, [pc, #0x60] @ 02006c9c
    strh ip, [r6, #8] @ 02006ca0
    ldr r1, [pc, #0x5c] @ 02006ca4
    ldr r2, [pc, #0x5c] @ 02006ca8
    mov r3, #0x5f @ 02006cac
    mov r4, #0xf @ 02006cb0
    str r4, [sp] @ 02006cb4
    bl .L_0200d900 @ 02006cb8
    bl .L_02006bb0 @ 02006cbc
    bl .L_02006730 @ 02006cc0
    ldr r2, [pc, #0x44] @ 02006cc4
    ldr ip, [pc, #0x44] @ 02006cc8
    ldr r0, [pc, #0x44] @ 02006ccc
    ldr r1, [pc, #0x44] @ 02006cd0
.L_02006cd4:
    add r3, r2, ip @ 02006cd4
    ldrh r3, [r3, r0] @ 02006cd8
    strh r3, [r2], #2 @ 02006cdc
    cmp r2, r1 @ 02006ce0
    bne .L_02006cd4 @ 02006ce4
    add sp, sp, #8 @ 02006ce8
    pop {r4, r5, r6, lr} @ 02006cec
    b .L_020858a4 @ 02006cf0
    .byte 0x10, 0x3f, 0x11, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x10, 0x00, 0x04, 0x90, 0x1f, 0x00, 0x00 @ 02006cf4
    .byte 0xa8, 0x5a, 0x08, 0x02, 0x00, 0x00, 0x21, 0x06, 0x00, 0xf8, 0x20, 0x06, 0xe0, 0x05, 0x00, 0x05 @ 02006d04
    .byte 0x88, 0x5a, 0x08, 0x02, 0x20, 0xfa, 0xff, 0xfa, 0x00, 0x06, 0x00, 0x05 @ 02006d14
.L_02006d20:
@ FUN_02006d20 at 0x02006d20
    push {r4, r5, r6, lr} @ 02006d20
    bl .L_020858a4 @ 02006d24
    ldr ip, [pc, #0x1b0] @ 02006d28
    mov r4, #0x4000000 @ 02006d2c
    mov r1, #9 @ 02006d30
    mov r2, #4 @ 02006d34
    mov r3, #2 @ 02006d38
    mov r0, #1 @ 02006d3c
    str ip, [r4] @ 02006d40
    bl .L_02085928 @ 02006d44
    ldr r3, [pc, #0x194] @ 02006d48
    mov r2, #0 @ 02006d4c
    strh r3, [r4, #0xe] @ 02006d50
    mov r3, #0x100 @ 02006d54
    strh r3, [r4, #0x30] @ 02006d58
    strh r3, [r4, #0x36] @ 02006d5c
    str r2, [r4, #0x38] @ 02006d60
    ldr r3, [pc, #0x17c] @ 02006d64
    str r2, [r4, #0x3c] @ 02006d68
    ldr r2, [pc, #0x178] @ 02006d6c
    mov r6, #0xc8 @ 02006d70
    ldr r0, [pc, #0x174] @ 02006d74
    ldr r1, [pc, #0x174] @ 02006d78
    strh r6, [r4, #0x50] @ 02006d7c
    str r2, [r3] @ 02006d80
    mov r3, #0x5000000 @ 02006d84
.L_02006d88:
    ldrh r2, [r1], #2 @ 02006d88
    strh r2, [r3], #2 @ 02006d8c
    cmp r3, r0 @ 02006d90
    bne .L_02006d88 @ 02006d94
    ldr r0, [pc, #0x158] @ 02006d98
    ldr r1, [pc, #0x158] @ 02006d9c
    mov r2, #0x3e80 @ 02006da0
    bl .L_0208591c @ 02006da4
    ldr r0, [pc, #0x150] @ 02006da8
    ldr r1, [pc, #0x150] @ 02006dac
    mov r2, #0x300 @ 02006db0
    bl .L_0208591c @ 02006db4
    mov r4, #0 @ 02006db8
.L_02006dbc:
    add r4, r4, #1 @ 02006dbc
    bl .L_020858a4 @ 02006dc0
    cmp r4, #0x78 @ 02006dc4
    bne .L_02006dbc @ 02006dc8
    sub r4, r4, #0x78 @ 02006dcc
    mov r5, r4 @ 02006dd0
.L_02006dd4:
    mov r2, #0x4000000 @ 02006dd4
    ldrh r3, [r2, #6] @ 02006dd8
    lsl r3, r3, #0x17 @ 02006ddc
    lsr r3, r3, #0x17 @ 02006de0
    cmp r3, #0 @ 02006de4
    bne .L_02006dd4 @ 02006de8
    mov r0, r3 @ 02006dec
    mov lr, r2 @ 02006df0
    and ip, r5, #1 @ 02006df4
.L_02006df8:
    cmp ip, #0 @ 02006df8
    streq ip, [lr, #0x38] @ 02006dfc
    beq .L_02006e44 @ 02006e00
    ldr r2, [pc, #0xfc] @ 02006e04
    sub r3, r0, #0x60 @ 02006e08
    cmp r3, #0 @ 02006e0c
    rsblt r3, r3, #0 @ 02006e10
    smull r6, r1, r2, r3 @ 02006e14
    asr r3, r3, #0x1f @ 02006e18
    rsb r3, r3, r1, asr #2 @ 02006e1c
    mul r2, r3, r3 @ 02006e20
    tst r0, #1 @ 02006e24
    rsbeq r3, r4, #0 @ 02006e28
    addne r3, r2, r4 @ 02006e2c
    rsbeq r3, r2, r3 @ 02006e30
    lslne r3, r3, #7 @ 02006e34
    lsleq r3, r3, #7 @ 02006e38
    strne r3, [lr, #0x38] @ 02006e3c
    streq r3, [lr, #0x38] @ 02006e40
.L_02006e44:
    mov r2, #0x4000000 @ 02006e44
    ldrh r3, [r2, #6] @ 02006e48
    lsl r3, r3, #0x17 @ 02006e4c
    lsr r3, r3, #0x17 @ 02006e50
    cmp r0, r3 @ 02006e54
    beq .L_02006e44 @ 02006e58
    add r0, r0, #1 @ 02006e5c
    cmp r0, #0xc0 @ 02006e60
    bne .L_02006df8 @ 02006e64
    lsl r3, r5, #0x10 @ 02006e68
    add r5, r5, #1 @ 02006e6c
    lsr r3, r3, #0x10 @ 02006e70
    cmp r5, #0x1f @ 02006e74
    strh r3, [r2, #0x54] @ 02006e78
    addls r4, r4, #3 @ 02006e7c
    bls .L_02006dd4 @ 02006e80
    bl .L_020858a4 @ 02006e84
    ldr r2, [pc, #0x60] @ 02006e88
    mov r3, #0x5000000 @ 02006e8c
.L_02006e90:
    mov r1, #0 @ 02006e90
    strh r1, [r3], #2 @ 02006e94
    cmp r3, r2 @ 02006e98
    bne .L_02006e90 @ 02006e9c
    ldr r3, [pc, #0x54] @ 02006ea0
    ldr r2, [pc, #0x60] @ 02006ea4
.L_02006ea8:
    mov r6, #0 @ 02006ea8
    strh r6, [r3], #2 @ 02006eac
    cmp r3, r2 @ 02006eb0
    bne .L_02006ea8 @ 02006eb4
    ldr r3, [pc, #0x44] @ 02006eb8
    ldr r2, [pc, #0x4c] @ 02006ebc
.L_02006ec0:
    mov r1, #0 @ 02006ec0
    strh r1, [r3], #2 @ 02006ec4
    cmp r3, r2 @ 02006ec8
    bne .L_02006ec0 @ 02006ecc
    mov r3, #0x4000000 @ 02006ed0
    strh r1, [r3, #0x54] @ 02006ed4
    strh r1, [r3, #0x50] @ 02006ed8
    pop {r4, r5, r6, pc} @ 02006edc
    .byte 0x01, 0x08, 0x01, 0x00, 0xc8, 0x42, 0x00, 0x00, 0x00, 0x10, 0x00, 0x04, 0x00, 0x01, 0x01, 0x00 @ 02006ee0
    .byte 0x00, 0x02, 0x00, 0x05, 0xa8, 0xa1, 0x08, 0x02, 0xa8, 0xa3, 0x08, 0x02, 0x00, 0x80, 0x00, 0x06 @ 02006ef0
    .byte 0x28, 0xe2, 0x08, 0x02, 0x00, 0x10, 0x00, 0x06, 0x67, 0x66, 0x66, 0x66, 0x80, 0xbe, 0x00, 0x06 @ 02006f00
    .byte 0x00, 0x13, 0x00, 0x06, 0x0c, 0x30, 0x9f, 0xe5, 0x00, 0x20, 0xa0, 0xe3, 0x00, 0x00, 0x93, 0xe5 @ 02006f10
    .byte 0x00, 0x20, 0x83, 0xe5, 0x1e, 0xff, 0x2f, 0xe1, 0xc8, 0x93, 0x09, 0x02 @ 02006f20
