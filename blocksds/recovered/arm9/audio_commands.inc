.L_02005ad0:
    ldr r2, [pc, #0x90] @ 02005ad0
    str lr, [sp, #-4]! @ 02005ad4
    mov lr, r0 @ 02005ad8
.L_02005adc:
    ldrh r3, [r2, #0x80] @ 02005adc
    tst r3, #0xf @ 02005ae0
    beq .L_02005adc @ 02005ae4
    ldr ip, [pc, #0x7c] @ 02005ae8
    ldr r0, [ip] @ 02005aec
    cmp r0, #0xff @ 02005af0
    ldrls r2, [pc, #0x74] @ 02005af4
    addls r3, r0, #1 @ 02005af8
    ldrls r1, [r2] @ 02005afc
    strbls lr, [r0, r1] @ 02005b00
    strls r3, [ip] @ 02005b04
    tst lr, #0x80 @ 02005b08
    beq .L_02005b3c @ 02005b0c
    ldr r0, [pc, #0x5c] @ 02005b10
    and r1, lr, #0x70 @ 02005b14
    asr r1, r1, #4 @ 02005b18
    ldr r3, [r0, r1, lsl #2] @ 02005b1c
    and r2, lr, #0xf @ 02005b20
    and r3, r3, #0x3f0 @ 02005b24
    orr r3, r3, r2 @ 02005b28
    ldr r2, [pc, #0x44] @ 02005b2c
    str r3, [r0, r1, lsl #2] @ 02005b30
    str r1, [r2] @ 02005b34
    .word 0xe49df004 @ 02005b38 pop {pc}
.L_02005b3c:
    ldr r3, [pc, #0x34] @ 02005b3c
    ldr ip, [r3] @ 02005b40
    tst ip, #1 @ 02005b44
    .word 0x149df004 @ 02005b48 popne {pc}
    ldr r1, [pc, #0x20] @ 02005b4c
    and r2, lr, #0x3f @ 02005b50
    ldr r3, [r1, ip, lsl #2] @ 02005b54
    and r3, r3, #0xf @ 02005b58
    orr r3, r3, r2, lsl #4 @ 02005b5c
    str r3, [r1, ip, lsl #2] @ 02005b60
    .word 0xe49df004 @ 02005b64 pop {pc}
    .byte 0x00, 0x01, 0x00, 0x04, 0x58, 0x90, 0x09, 0x02, 0x58, 0xb6, 0x3d, 0x02, 0x7c, 0x93, 0x09, 0x02 @ 02005b68
    .byte 0x9c, 0x93, 0x09, 0x02 @ 02005b78
.L_02005b7c:
@ FUN_02005b7c at 0x02005b7c
    ldr r3, [pc, #0xc] @ 02005b7c
    ldr r2, [r3, #0x2c] @ 02005b80
    ldrb r0, [r2, #0x480] @ 02005b84
    and r0, r0, #3 @ 02005b88
    bx lr @ 02005b8c
    .byte 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x9f, 0xe5, 0x1e, 0xff, 0x2f, 0xe1, 0x94, 0xb7, 0x3d, 0x02 @ 02005b90
.L_02005ba0:
@ FUN_02005ba0 at 0x02005ba0
    ldr r2, [pc, #0x3e8] @ 02005ba0
    push {r4, r5, r6, lr} @ 02005ba4
    mov r5, r1 @ 02005ba8
.L_02005bac:
    ldrh r3, [r2, #0x80] @ 02005bac
    tst r3, #0xf @ 02005bb0
    beq .L_02005bac @ 02005bb4
    and r3, r0, #3 @ 02005bb8
    cmp r3, #3 @ 02005bbc
    ldrls pc, [pc, r3, lsl #2] @ 02005bc0
    b .L_02005c4c @ 02005bc4
    .byte 0x50, 0x5c, 0x00, 0x02, 0x68, 0x5c, 0x00, 0x02, 0xc0, 0x5c, 0x00, 0x02, 0xd8, 0x5b, 0x00, 0x02 @ 02005bc8
    ldr r3, [pc, #0x3b4] @ 02005bd8
    ldr r2, [r3] @ 02005bdc
    cmp r2, #0 @ 02005be0
    popeq {r4, r5, r6, pc} @ 02005be4
    ldr r3, [pc, #0x3a8] @ 02005be8
    ldr r2, [pc, #0x3a8] @ 02005bec
    ldr r4, [r3] @ 02005bf0
    ldrb r3, [r2, r4] @ 02005bf4
    cmp r3, #0 @ 02005bf8
    ldreq r2, [pc, #0x39c] @ 02005bfc
    beq .L_02005c14 @ 02005c00
    ldr r2, [pc, #0x394] @ 02005c04
    ldrb r3, [r2, r4] @ 02005c08
    cmp r3, r5 @ 02005c0c
    popeq {r4, r5, r6, pc} @ 02005c10
.L_02005c14:
    ldr r6, [pc, #0x388] @ 02005c14
    ldr r3, [pc, #0x388] @ 02005c18
    ldr lr, [r6] @ 02005c1c
    strb r5, [r2, r4] @ 02005c20
    cmp lr, r3 @ 02005c24
    pophi {r4, r5, r6, pc} @ 02005c28
    ldr r1, [pc, #0x378] @ 02005c2c
    add r0, lr, #1 @ 02005c30
    ldr r2, [r1] @ 02005c34
    add ip, r0, #1 @ 02005c38
    strb r4, [lr, r2] @ 02005c3c
    ldr r3, [r1] @ 02005c40
    strb r5, [r0, r3] @ 02005c44
    str ip, [r6] @ 02005c48
.L_02005c4c:
    pop {r4, r5, r6, pc} @ 02005c4c
    ldr r2, [pc, #0x33c] @ 02005c50
    ldr r1, [pc, #0x354] @ 02005c54
    mov r3, #0 @ 02005c58
    str r3, [r2] @ 02005c5c
    str r5, [r1] @ 02005c60
    pop {r4, r5, r6, pc} @ 02005c64
    ldr r3, [pc, #0x340] @ 02005c68
    ldr r4, [r3] @ 02005c6c
    cmp r4, #0x2a @ 02005c70
    beq .L_02005cd8 @ 02005c74
    ldr r3, [pc, #0x314] @ 02005c78
    ldr r2, [r3] @ 02005c7c
    cmp r2, #0 @ 02005c80
    popne {r4, r5, r6, pc} @ 02005c84
    ldr r3, [pc, #0x30c] @ 02005c88
    ldrb r2, [r3, r4] @ 02005c8c
    cmp r2, #0 @ 02005c90
    ldreq r2, [pc, #0x318] @ 02005c94
    bne .L_02005d14 @ 02005c98
.L_02005c9c:
    sub r3, r4, #0x24 @ 02005c9c
    strb r5, [r2, r4] @ 02005ca0
    cmp r3, #3 @ 02005ca4
    ldrls pc, [pc, r3, lsl #2] @ 02005ca8
    b .L_02005e4c @ 02005cac
    .byte 0x84, 0x5e, 0x00, 0x02, 0xfc, 0x5e, 0x00, 0x02, 0x1c, 0x5f, 0x00, 0x02, 0x28, 0x5d, 0x00, 0x02 @ 02005cb0
    ldr r2, [pc, #0x2cc] @ 02005cc0
    ldr r1, [pc, #0x2cc] @ 02005cc4
    mov r3, #1 @ 02005cc8
    str r3, [r2] @ 02005ccc
    str r5, [r1] @ 02005cd0
    pop {r4, r5, r6, pc} @ 02005cd4
.L_02005cd8:
    ldr r4, [pc, #0x2d8] @ 02005cd8
    ldr lr, [r4] @ 02005cdc
    cmp lr, #0x400 @ 02005ce0
    pophs {r4, r5, r6, pc} @ 02005ce4
    ldr r0, [pc, #0x2cc] @ 02005ce8
    ldr r2, [pc, #0x2cc] @ 02005cec
    ldr r1, [r0] @ 02005cf0
    ldr ip, [r2] @ 02005cf4
    and r3, r5, #0x7f @ 02005cf8
    orr r3, r3, r1 @ 02005cfc
    add r2, lr, #1 @ 02005d00
    str r3, [r0] @ 02005d04
    strb r5, [lr, ip] @ 02005d08
    str r2, [r4] @ 02005d0c
    pop {r4, r5, r6, pc} @ 02005d10
.L_02005d14:
    ldr r2, [pc, #0x298] @ 02005d14
    ldrb r3, [r2, r4] @ 02005d18
    cmp r3, r5 @ 02005d1c
    bne .L_02005c9c @ 02005d20
    pop {r4, r5, r6, pc} @ 02005d24
    ldr lr, [pc, #0x294] @ 02005d28
    tst r5, #0x20 @ 02005d2c
    str r5, [lr] @ 02005d30
    ldreq r6, [pc, #0x28c] @ 02005d34
    beq .L_02005d90 @ 02005d38
    ldr r2, [lr, #0x1c] @ 02005d3c
    ldr r6, [pc, #0x280] @ 02005d40
    bic r2, r2, #2 @ 02005d44
    ldr r1, [r6, #0x2c] @ 02005d48
    str r2, [lr, #0x1c] @ 02005d4c
    ldrb r2, [r1, #0x481] @ 02005d50
    ldrb r3, [r1, #0x480] @ 02005d54
    ldrb ip, [r1, #0x482] @ 02005d58
    ldrb r0, [r1, #0x483] @ 02005d5c
    orr r3, r3, r2, lsl #8 @ 02005d60
    orr r3, r3, ip, lsl #16 @ 02005d64
    orr r3, r3, r0, lsl #24 @ 02005d68
    bic r2, r3, #2 @ 02005d6c
    lsr r0, r2, #0x18 @ 02005d70
    lsr ip, r2, #8 @ 02005d74
    and r3, r3, #0xfd @ 02005d78
    lsr r2, r2, #0x10 @ 02005d7c
    strb r0, [r1, #0x483] @ 02005d80
    strb r3, [r1, #0x480] @ 02005d84
    strb ip, [r1, #0x481] @ 02005d88
    strb r2, [r1, #0x482] @ 02005d8c
.L_02005d90:
    tst r5, #0x10 @ 02005d90
    beq .L_02005de8 @ 02005d94
    ldr r3, [lr, #0x1c] @ 02005d98
    ldr r1, [r6, #0x2c] @ 02005d9c
    bic r3, r3, #1 @ 02005da0
    str r3, [lr, #0x1c] @ 02005da4
    ldrb r3, [r1, #0x481] @ 02005da8
    ldrb r2, [r1, #0x480] @ 02005dac
    ldrb ip, [r1, #0x482] @ 02005db0
    ldrb r0, [r1, #0x483] @ 02005db4
    orr r2, r2, r3, lsl #8 @ 02005db8
    orr r2, r2, ip, lsl #16 @ 02005dbc
    orr r2, r2, r0, lsl #24 @ 02005dc0
    bic r3, r2, #1 @ 02005dc4
    lsr r0, r3, #0x18 @ 02005dc8
    lsr ip, r3, #8 @ 02005dcc
    and r2, r2, #0xfe @ 02005dd0
    lsr r3, r3, #0x10 @ 02005dd4
    strb r0, [r1, #0x483] @ 02005dd8
    strb r2, [r1, #0x480] @ 02005ddc
    strb ip, [r1, #0x481] @ 02005de0
    strb r3, [r1, #0x482] @ 02005de4
.L_02005de8:
    ldr r1, [r6, #0x2c] @ 02005de8
    mov r2, #0 @ 02005dec
    ldrb r0, [r1, #0x480] @ 02005df0
    strb r2, [r1, #0x481] @ 02005df4
    and r0, r0, #3 @ 02005df8
    lsr r3, r0, #0x18 @ 02005dfc
    strb r3, [r1, #0x483] @ 02005e00
    strb r2, [r1, #0x482] @ 02005e04
    strb r0, [r1, #0x480] @ 02005e08
    ldr r2, [r6, #0x2c] @ 02005e0c
    ldrb r1, [r2, #0x481] @ 02005e10
    ldrb r3, [r2, #0x480] @ 02005e14
    ldrb ip, [r2, #0x482] @ 02005e18
    ldrb r0, [r2, #0x483] @ 02005e1c
    orr r3, r3, r1, lsl #8 @ 02005e20
    orr r3, r3, ip, lsl #16 @ 02005e24
    orr r3, r3, r0, lsl #24 @ 02005e28
    orr r3, r3, r5, lsl #8 @ 02005e2c
    lsr r1, r3, #0x18 @ 02005e30
    lsr r0, r3, #8 @ 02005e34
    lsr ip, r3, #0x10 @ 02005e38
    strb r1, [r2, #0x483] @ 02005e3c
    strb r0, [r2, #0x481] @ 02005e40
    strb ip, [r2, #0x482] @ 02005e44
    strb r3, [r2, #0x480] @ 02005e48
.L_02005e4c:
    ldr r6, [pc, #0x178] @ 02005e4c
    ldr r3, [pc, #0x150] @ 02005e50
    ldr lr, [r6] @ 02005e54
    cmp lr, r3 @ 02005e58
    pophi {r4, r5, r6, pc} @ 02005e5c
    ldr r1, [pc, #0x168] @ 02005e60
    add r0, lr, #1 @ 02005e64
    ldr r2, [r1] @ 02005e68
    add ip, r0, #1 @ 02005e6c
    strb r4, [lr, r2] @ 02005e70
    ldr r3, [r1] @ 02005e74
    strb r5, [r0, r3] @ 02005e78
    str ip, [r6] @ 02005e7c
    pop {r4, r5, r6, pc} @ 02005e80
    ldr r6, [pc, #0x138] @ 02005e84
    ldr r2, [r6, #0xc] @ 02005e88
    and r3, r2, #3 @ 02005e8c
    orr r4, r3, r5, lsl #2 @ 02005e90
    cmp r2, r4 @ 02005e94
    popeq {r4, r5, r6, pc} @ 02005e98
.L_02005e9c:
    add r3, r6, r4, lsl #1 @ 02005e9c
    ldrh r2, [r3, #0x20] @ 02005ea0
    ldr lr, [pc, #0x11c] @ 02005ea4
    lsl r2, r2, #1 @ 02005ea8
    ldr r3, [lr, #0x2c] @ 02005eac
    lsr r1, r2, #0x18 @ 02005eb0
    lsr r0, r2, #8 @ 02005eb4
    lsr ip, r2, #0x10 @ 02005eb8
    str r2, [r6, #4] @ 02005ebc
    str r4, [r6, #0xc] @ 02005ec0
    strb r1, [r3, #0x487] @ 02005ec4
    strb r0, [r3, #0x485] @ 02005ec8
    strb ip, [r3, #0x486] @ 02005ecc
    strb r2, [r3, #0x484] @ 02005ed0
    ldrb r3, [r6, #4] @ 02005ed4
    ldr r1, [lr, #0x2c] @ 02005ed8
    strb r3, [r1, #0x488] @ 02005edc
    ldrb r2, [r6, #5] @ 02005ee0
    strb r2, [r1, #0x489] @ 02005ee4
    ldrb r3, [r6, #6] @ 02005ee8
    strb r3, [r1, #0x48a] @ 02005eec
    ldrb r2, [r6, #7] @ 02005ef0
    strb r2, [r1, #0x48b] @ 02005ef4
    pop {r4, r5, r6, pc} @ 02005ef8
    ldr r6, [pc, #0xc0] @ 02005efc
    and r1, r5, #3 @ 02005f00
    ldr r2, [r6, #0xc] @ 02005f04
    and r3, r2, #0x3fc @ 02005f08
    orr r4, r3, r1 @ 02005f0c
    cmp r2, r4 @ 02005f10
    bne .L_02005e9c @ 02005f14
    pop {r4, r5, r6, pc} @ 02005f18
    ldr r4, [pc, #0xa0] @ 02005f1c
    ldr r3, [r4, #0x18] @ 02005f20
    cmp r3, r5 @ 02005f24
    popeq {r4, r5, r6, pc} @ 02005f28
    add r3, r4, r5, lsl #1 @ 02005f2c
    add r3, r3, #0x820 @ 02005f30
    ldrh r2, [r3] @ 02005f34
    ldr lr, [pc, #0x88] @ 02005f38
    lsl r2, r2, #5 @ 02005f3c
    ldr r3, [lr, #0x2c] @ 02005f40
    lsr r1, r2, #0x18 @ 02005f44
    lsr r0, r2, #8 @ 02005f48
    lsr ip, r2, #0x10 @ 02005f4c
    str r2, [r4, #0x10] @ 02005f50
    str r5, [r4, #0x18] @ 02005f54
    strb r1, [r3, #0x48f] @ 02005f58
    strb r0, [r3, #0x48d] @ 02005f5c
    strb ip, [r3, #0x48e] @ 02005f60
    strb r2, [r3, #0x48c] @ 02005f64
    ldrb r3, [r4, #0x10] @ 02005f68
    ldr r1, [lr, #0x2c] @ 02005f6c
    strb r3, [r1, #0x490] @ 02005f70
    ldrb r2, [r4, #0x11] @ 02005f74
    strb r2, [r1, #0x491] @ 02005f78
    ldrb r3, [r4, #0x12] @ 02005f7c
    strb r3, [r1, #0x492] @ 02005f80
    ldrb r2, [r4, #0x13] @ 02005f84
    strb r2, [r1, #0x493] @ 02005f88
    pop {r4, r5, r6, pc} @ 02005f8c
    .byte 0x00, 0x01, 0x00, 0x04, 0x60, 0x90, 0x09, 0x02, 0x68, 0x90, 0x09, 0x02, 0x7c, 0x92, 0x09, 0x02 @ 02005f90
    .byte 0x7c, 0x91, 0x09, 0x02, 0x54, 0x90, 0x09, 0x02, 0xfd, 0x01, 0x00, 0x00, 0x60, 0xb7, 0x3d, 0x02 @ 02005fa0
    .byte 0x64, 0x90, 0x09, 0x02, 0x7c, 0x90, 0x09, 0x02, 0x48, 0x90, 0x09, 0x02, 0x4c, 0x90, 0x09, 0x02 @ 02005fb0
    .byte 0x74, 0xb7, 0x3d, 0x02, 0x78, 0xb7, 0x3d, 0x02, 0x00, 0x00, 0x00, 0x0b, 0x50, 0x90, 0x09, 0x02 @ 02005fc0
    .byte 0x44, 0xb6, 0x3d, 0x02, 0xb0, 0xc0, 0x9f, 0xe5, 0x10, 0x40, 0x2d, 0xe9, 0x00, 0x40, 0x9c, 0xe5 @ 02005fd0
    .byte 0x80, 0x31, 0x60, 0xe0, 0x83, 0x01, 0x80, 0xe0, 0x01, 0x00, 0x14, 0xe3, 0x04, 0xe0, 0xa0, 0xe1 @ 02005fe0
    .byte 0x00, 0x01, 0xa0, 0xe1, 0x04, 0x00, 0x00, 0x0a, 0x04, 0x30, 0x9c, 0xe5, 0x03, 0x10, 0x60, 0xe0 @ 02005ff0
    .byte 0x00, 0x00, 0x51, 0xe3, 0x04, 0x10, 0x8c, 0xe5, 0x12, 0x00, 0x00, 0xda, 0x02, 0x00, 0x14, 0xe3 @ 02006000
    .byte 0x74, 0x10, 0x9f, 0xe5, 0x10, 0x80, 0xbd, 0x08, 0x10, 0x30, 0x91, 0xe5, 0x03, 0x00, 0x60, 0xe0 @ 02006010
    .byte 0x00, 0x00, 0x50, 0xe3, 0x10, 0x00, 0x81, 0xe5, 0x10, 0x80, 0xbd, 0xc8, 0x18, 0x20, 0x91, 0xe5 @ 02006020
    .byte 0x08, 0x00, 0x14, 0xe3, 0x82, 0x20, 0x81, 0xe0, 0x82, 0x2e, 0x82, 0xe2, 0xb0, 0x30, 0xd2, 0xe1 @ 02006030
    .byte 0x83, 0x32, 0x80, 0xe0, 0x10, 0x30, 0x81, 0xe5, 0x1c, 0x30, 0x91, 0x15, 0x02, 0x30, 0x83, 0x13 @ 02006040
    .byte 0x1c, 0x30, 0x81, 0x15, 0x10, 0x80, 0xbd, 0xe8, 0x0c, 0x20, 0x9c, 0xe5, 0x04, 0x00, 0x14, 0xe3 @ 02006050
    .byte 0x82, 0x20, 0x8c, 0xe0, 0xb0, 0x32, 0xd2, 0xe1, 0x83, 0x30, 0x81, 0xe0, 0x04, 0x30, 0x8c, 0xe5 @ 02006060
    .byte 0x1c, 0x30, 0x9c, 0x15, 0x10, 0x10, 0x9f, 0xe5, 0x01, 0x30, 0x83, 0x13, 0x1c, 0x30, 0x8c, 0x15 @ 02006070
    .byte 0x02, 0x00, 0x14, 0xe3, 0xe3, 0xff, 0xff, 0x1a, 0x10, 0x80, 0xbd, 0xe8, 0x78, 0xb7, 0x3d, 0x02 @ 02006080
    .byte 0xdc, 0xc0, 0x9f, 0xe5, 0x00, 0x30, 0x9c, 0xe5, 0x01, 0x00, 0x13, 0xe3, 0x04, 0x00, 0x00, 0x0a @ 02006090
    .byte 0x04, 0x30, 0x9c, 0xe5, 0x03, 0x10, 0x60, 0xe0, 0x00, 0x00, 0x51, 0xe3, 0x04, 0x10, 0x8c, 0xe5 @ 020060a0
    .byte 0x1a, 0x00, 0x00, 0xda, 0x00, 0x30, 0x9c, 0xe5, 0xb4, 0x20, 0x9f, 0xe5, 0x02, 0x00, 0x13, 0xe3 @ 020060b0
    .byte 0x1e, 0xff, 0x2f, 0x01, 0x10, 0x30, 0x92, 0xe5, 0x03, 0x00, 0x60, 0xe0, 0x00, 0x00, 0x50, 0xe3 @ 020060c0
    .byte 0x10, 0x00, 0x82, 0xe5, 0x1e, 0xff, 0x2f, 0xc1, 0x09, 0x00, 0x00, 0xaa, 0x18, 0x30, 0x9c, 0xe5 @ 020060d0
    .byte 0x83, 0x30, 0x8c, 0xe0, 0x82, 0x3e, 0x83, 0xe2, 0xb0, 0x20, 0xd3, 0xe1, 0x82, 0x22, 0xa0, 0xe1 @ 020060e0
    .byte 0x02, 0x30, 0x80, 0xe0, 0x00, 0x00, 0x53, 0xe3, 0x03, 0x00, 0xa0, 0xe1, 0xfb, 0xff, 0xff, 0xba @ 020060f0
    .byte 0x10, 0x30, 0x8c, 0xe5, 0x00, 0x30, 0x9c, 0xe5, 0x64, 0x20, 0x9f, 0xe5, 0x08, 0x00, 0x13, 0xe3 @ 02006100
    .byte 0x1c, 0x30, 0x92, 0x15, 0x02, 0x30, 0x83, 0x13, 0x1c, 0x30, 0x82, 0x15, 0x1e, 0xff, 0x2f, 0xe1 @ 02006110
    .byte 0x08, 0x00, 0x00, 0xaa, 0x0c, 0x30, 0x9c, 0xe5, 0x83, 0x30, 0x8c, 0xe0, 0xb0, 0x22, 0xd3, 0xe1 @ 02006120
    .byte 0x82, 0x20, 0xa0, 0xe1, 0x02, 0x30, 0x81, 0xe0, 0x00, 0x00, 0x53, 0xe3, 0x03, 0x10, 0xa0, 0xe1 @ 02006130
    .byte 0xfb, 0xff, 0xff, 0xba, 0x04, 0x30, 0x8c, 0xe5, 0x00, 0x30, 0x9c, 0xe5, 0x20, 0x20, 0x9f, 0xe5 @ 02006140
    .byte 0x04, 0x00, 0x13, 0xe3, 0x1c, 0x30, 0x92, 0x15, 0x01, 0x30, 0x83, 0x13, 0x1c, 0x30, 0x82, 0x15 @ 02006150
    .byte 0x00, 0x30, 0x9c, 0xe5, 0x08, 0x20, 0x9f, 0xe5, 0x02, 0x00, 0x13, 0xe3, 0xd4, 0xff, 0xff, 0x1a @ 02006160
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0x78, 0xb7, 0x3d, 0x02, 0x24, 0x20, 0x9f, 0xe5, 0x00, 0x00, 0xe0, 0xe3 @ 02006170
    .byte 0x00, 0x30, 0x92, 0xe5, 0x01, 0x00, 0x13, 0xe3, 0x04, 0x00, 0x92, 0x15, 0x02, 0x00, 0x13, 0xe3 @ 02006180
    .byte 0x00, 0x30, 0xe0, 0xe3, 0x10, 0x30, 0x92, 0x15, 0x03, 0x00, 0x50, 0xe1, 0x03, 0x00, 0xa0, 0x21 @ 02006190
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0x78, 0xb7, 0x3d, 0x02 @ 020061a0
.L_020061a8:
@ FUN_020061a8 at 0x020061a8
    push {r4, lr} @ 020061a8
    ldr r2, [pc, #0x64] @ 020061ac
.L_020061b0:
    ldrh r3, [r2, #0x80] @ 020061b0
    tst r3, #0xf @ 020061b4
    beq .L_020061b0 @ 020061b8
    ldr lr, [pc, #0x58] @ 020061bc
    mov r4, #0 @ 020061c0
    ldr r1, [lr] @ 020061c4
    cmp r1, #0 @ 020061c8
    ldrne ip, [pc, #0x4c] @ 020061cc
    ldrne r3, [pc, #0x4c] @ 020061d0
    ldreq r3, [pc, #0x48] @ 020061d4
    ldrne r1, [r3, #0x28] @ 020061d8
    ldreq r2, [r3, #0x28] @ 020061dc
    ldrne r2, [ip] @ 020061e0
    ldr r3, [pc, #0x38] @ 020061e4
    ldreq ip, [pc, #0x30] @ 020061e8
    strne r2, [r1, #4] @ 020061ec
    streq r1, [r2, #4] @ 020061f0
    ldr r0, [r3, #0x28] @ 020061f4
    mov r1, #0x104 @ 020061f8
    str r4, [lr] @ 020061fc
    str r4, [ip] @ 02006200
    bl .L_020802c4 @ 02006204
    mov r1, r4 @ 02006208
    mov r0, #0x10 @ 0200620c
    pop {r4, lr} @ 02006210
    b .L_0200c55c @ 02006214
    .byte 0x00, 0x01, 0x00, 0x04, 0x4c, 0x90, 0x09, 0x02, 0x48, 0x90, 0x09, 0x02, 0x00, 0xf0, 0x7f, 0x02 @ 02006218
.L_02006228:
@ FUN_02006228 at 0x02006228
    push {r4, r5, r6, r7, r8, lr} @ 02006228
    ldr r2, [pc, #0x78] @ 0200622c
.L_02006230:
    ldrh r3, [r2, #0x80] @ 02006230
    tst r3, #0xf @ 02006234
    beq .L_02006230 @ 02006238
    ldr r3, [pc, #0x6c] @ 0200623c
    ldr r6, [pc, #0x6c] @ 02006240
    ldr r7, [pc, #0x6c] @ 02006244
    ldr r8, [pc, #0x6c] @ 02006248
    ldr r5, [r3, #0x28] @ 0200624c
    ldr r2, [r8] @ 02006250
    ldr r4, [r3, #0x28] @ 02006254
    ldr lr, [r6] @ 02006258
    ldr r1, [r7] @ 0200625c
    ldr ip, [r3, #0x28] @ 02006260
    str lr, [r5, #0x14] @ 02006264
    ldr r0, [r3, #0x28] @ 02006268
    str r1, [r4, #0x24] @ 0200626c
    str r2, [ip, #0x34] @ 02006270
    mov r4, #0 @ 02006274
    mov r1, #0x104 @ 02006278
    str r4, [r6] @ 0200627c
    str r4, [r7] @ 02006280
    str r4, [r8] @ 02006284
    bl .L_020802c4 @ 02006288
    mov r1, r4 @ 0200628c
    mov r0, #0xb @ 02006290
    bl .L_0200c55c @ 02006294
    ldr r2, [pc, #0x20] @ 02006298
    ldr r3, [r2] @ 0200629c
    add r3, r3, #1 @ 020062a0
    str r3, [r2] @ 020062a4
    pop {r4, r5, r6, r7, r8, pc} @ 020062a8
    .byte 0x00, 0x01, 0x00, 0x04, 0x00, 0xf0, 0x7f, 0x02, 0x50, 0x90, 0x09, 0x02, 0x54, 0x90, 0x09, 0x02 @ 020062ac
    .byte 0x58, 0x90, 0x09, 0x02, 0x5c, 0x90, 0x09, 0x02 @ 020062bc
.L_020062c4:
@ FUN_020062c4 at 0x020062c4
    mov r0, #6 @ 020062c4
    mov r1, #0 @ 020062c8
    b .L_0200c55c @ 020062cc
.L_020062d0:
@ FUN_020062d0 at 0x020062d0
    str lr, [sp, #-4]! @ 020062d0
    mov r1, #0 @ 020062d4
    sub sp, sp, #4 @ 020062d8
    mov r0, #2 @ 020062dc
    bl .L_0200c55c @ 020062e0
    add sp, sp, #4 @ 020062e4
    .word 0xe49de004 @ 020062e8 pop {lr}
    b .L_020059f0 @ 020062ec
.L_020062f0:
@ FUN_020062f0 at 0x020062f0
    subs r3, r0, #0 @ 020062f0
    mov r1, #0 @ 020062f4
    mov r0, #0xe @ 020062f8
    moveq r1, r3 @ 020062fc
    moveq r0, #0xf @ 02006300
    b .L_0200c55c @ 02006304
.L_02006308:
@ FUN_02006308 at 0x02006308
    ldr r3, [pc, #0xa4] @ 02006308
    mov ip, #0 @ 0200630c
    str ip, [r3] @ 02006310
    ldr r3, [pc, #0x9c] @ 02006314
    ldr r2, [pc, #0x9c] @ 02006318
    str ip, [r3] @ 0200631c
    ldr r3, [pc, #0x98] @ 02006320
    str ip, [r2] @ 02006324
    str ip, [r3] @ 02006328
    ldr r2, [pc, #0x90] @ 0200632c
    ldr r3, [pc, #0x90] @ 02006330
    ldr r1, [pc, #0x90] @ 02006334
    push {r4, lr} @ 02006338
    str ip, [r2] @ 0200633c
    ldr r4, [pc, #0x88] @ 02006340
    str ip, [r3] @ 02006344
    ldr r2, [pc, #0x84] @ 02006348
    ldr r3, [pc, #0x84] @ 0200634c
    cmp r0, #0 @ 02006350
    str ip, [r1, #0x1c] @ 02006354
    str ip, [r2] @ 02006358
    str ip, [r3] @ 0200635c
    str ip, [r4] @ 02006360
    str ip, [r1] @ 02006364
    str ip, [r1, #0xc] @ 02006368
    str ip, [r1, #4] @ 0200636c
    str ip, [r1, #0x18] @ 02006370
    str ip, [r1, #0x10] @ 02006374
    beq .L_020063a4 @ 02006378
    mov r1, ip @ 0200637c
    mov r0, #1 @ 02006380
    bl .L_0200c55c @ 02006384
.L_02006388:
    ldr r3, [r4] @ 02006388
    cmp r3, #0 @ 0200638c
    popne {r4, pc} @ 02006390
    ldr r3, [r4] @ 02006394
    cmp r3, #0 @ 02006398
    beq .L_02006388 @ 0200639c
    pop {r4, pc} @ 020063a0
.L_020063a4:
    mov r1, r0 @ 020063a4
    mov r0, #6 @ 020063a8
    pop {r4, lr} @ 020063ac
    b .L_0200c55c @ 020063b0
    .byte 0x48, 0x90, 0x09, 0x02, 0x54, 0x90, 0x09, 0x02, 0x50, 0x90, 0x09, 0x02, 0x9c, 0x93, 0x09, 0x02 @ 020063b4
    .byte 0x58, 0x90, 0x09, 0x02, 0x64, 0x90, 0x09, 0x02, 0x78, 0xb7, 0x3d, 0x02, 0x6c, 0x90, 0x09, 0x02 @ 020063c4
    .byte 0x68, 0x90, 0x09, 0x02, 0x60, 0x90, 0x09, 0x02 @ 020063d4
.L_020063dc:
@ FUN_020063dc at 0x020063dc
    mov r0, #5 @ 020063dc
    mov r1, #0 @ 020063e0
    b .L_0200c55c @ 020063e4
.L_020063e8:
@ FUN_020063e8 at 0x020063e8
    push {r4, r5, r6, r7, lr} @ 020063e8
    mov r0, #1 @ 020063ec
    sub sp, sp, #4 @ 020063f0
    bl .L_020858bc @ 020063f4
    bl .L_020062c4 @ 020063f8
    bl .L_020858a4 @ 020063fc
    bl .L_020858a4 @ 02006400
    mov r0, #1 @ 02006404
    bl .L_02006308 @ 02006408
    bl .L_020858a4 @ 0200640c
    bl .L_020858a4 @ 02006410
    mov r0, #1 @ 02006414
    bl .L_020858b0 @ 02006418
    ldr r7, [pc, #0x60] @ 0200641c
    ldr r6, [pc, #0x60] @ 02006420
    mov r5, #0 @ 02006424
.L_02006428:
    and r4, r5, #0xff @ 02006428
    mov r0, #0 @ 0200642c
    mov r1, r4 @ 02006430
    bl .L_02005ba0 @ 02006434
    ldrb r1, [r5, r7] @ 02006438
    mov r0, #1 @ 0200643c
    bl .L_02005ba0 @ 02006440
    mov r1, r4 @ 02006444
    mov r0, #2 @ 02006448
    bl .L_02005ba0 @ 0200644c
    ldrb r1, [r5, r6] @ 02006450
    mov r0, #3 @ 02006454
    add r5, r5, #1 @ 02006458
    bl .L_02005ba0 @ 0200645c
    cmp r5, #0x100 @ 02006460
    bne .L_02006428 @ 02006464
    mov r0, #1 @ 02006468
    bl .L_020858bc @ 0200646c
    bl .L_020858a4 @ 02006470
    bl .L_020858a4 @ 02006474
    add sp, sp, #4 @ 02006478
    pop {r4, r5, r6, r7, lr} @ 0200647c
    b .L_020063dc @ 02006480
    .byte 0x7c, 0x90, 0x09, 0x02, 0x7c, 0x91, 0x09, 0x02 @ 02006484
.L_0200648c:
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 0200648c
    ldr fp, [pc, #0x248] @ 02006490
    sub sp, sp, #4 @ 02006494
    ldr sb, [fp] @ 02006498
    cmp sb, #0 @ 0200649c
    beq .L_020064ac @ 020064a0
.L_020064a4:
    add sp, sp, #4 @ 020064a4
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 020064a8
.L_020064ac:
    bl .L_0200c59c @ 020064ac
    ldr r0, [pc, #0x22c] @ 020064b0
    bl .L_0200c520 @ 020064b4
    mov r1, #0x400 @ 020064b8
    mov r0, #0x20 @ 020064bc
    bl .L_02082560 @ 020064c0
    ldr r6, [pc, #0x21c] @ 020064c4
    orr r3, r0, #0x400000 @ 020064c8
    str r3, [r6] @ 020064cc
    mov r1, #0x400 @ 020064d0
    mov r0, #0x20 @ 020064d4
    bl .L_02082560 @ 020064d8
    ldr r5, [pc, #0x208] @ 020064dc
    orr r3, r0, #0x400000 @ 020064e0
    str r3, [r5] @ 020064e4
    mov r1, #0x400 @ 020064e8
    mov r0, #0x20 @ 020064ec
    bl .L_02082560 @ 020064f0
    ldr r4, [pc, #0x1f4] @ 020064f4
    orr r3, r0, #0x400000 @ 020064f8
    str r3, [r4] @ 020064fc
    mov r1, #0x100 @ 02006500
    mov r0, #0x20 @ 02006504
    bl .L_02082560 @ 02006508
    ldr r3, [r6] @ 0200650c
    ldr r2, [r5] @ 02006510
    ldr r1, [r4] @ 02006514
    ldr r6, [pc, #0x1d4] @ 02006518
    ldr lr, [pc, #0x1d4] @ 0200651c
    ldr r8, [pc, #0x1d4] @ 02006520
    ldr sl, [pc, #0x1d4] @ 02006524
    orr r3, r3, #0x400000 @ 02006528
    ldr r7, [pc, #0x1d0] @ 0200652c
    str r3, [r6] @ 02006530
    orr r2, r2, #0x400000 @ 02006534
    orr r1, r1, #0x400000 @ 02006538
    ldr r3, [pc, #0x1c4] @ 0200653c
    str r2, [r8] @ 02006540
    str r1, [sl] @ 02006544
    orr r0, r0, #0x400000 @ 02006548
    str sb, [r6, #4] @ 0200654c
    str sb, [r8, #4] @ 02006550
    str sb, [sl, #4] @ 02006554
    add ip, lr, #0x10 @ 02006558
    add r4, lr, #0x20 @ 0200655c
    add r5, lr, #0x30 @ 02006560
    str r0, [r3] @ 02006564
    stm r7, {r0, sb} @ 02006568
    ldm r6, {r0, r1, r2, r3} @ 0200656c
    stm lr, {r0, r1, r2, r3} @ 02006570
    ldm r8, {r0, r1, r2, r3} @ 02006574
    stm ip, {r0, r1, r2, r3} @ 02006578
    ldm sl, {r0, r1, r2, r3} @ 0200657c
    stm r4, {r0, r1, r2, r3} @ 02006580
    ldm r7, {r0, r1, r2, r3} @ 02006584
    stm r5, {r0, r1, r2, r3} @ 02006588
    ldr r3, [pc, #0x178] @ 0200658c
    ldr r1, [pc, #0x178] @ 02006590
    mov r2, #4 @ 02006594
    str lr, [r3, #0x28] @ 02006598
    mov ip, #1 @ 0200659c
    strb r2, [lr, #0x100] @ 020065a0
    add r3, r1, #0x100 @ 020065a4
.L_020065a8:
    strb ip, [r1], #1 @ 020065a8
    cmp r1, r3 @ 020065ac
    bne .L_020065a8 @ 020065b0
    mov r3, #0 @ 020065b4
    ldr r7, [pc, #0x154] @ 020065b8
    sub r2, r1, #0x100 @ 020065bc
    mov r6, r3 @ 020065c0
    str ip, [fp] @ 020065c4
    strb r3, [r2, #0xa9] @ 020065c8
    strb r3, [r2, #0x24] @ 020065cc
    strb r3, [r2, #0x25] @ 020065d0
    strb r3, [r2, #0x26] @ 020065d4
    strb r3, [r2, #0x27] @ 020065d8
    strb r3, [r2, #0x2a] @ 020065dc
    strb r3, [r2, #0xa0] @ 020065e0
    strb r3, [r2, #0xa1] @ 020065e4
    strb r3, [r2, #0xa2] @ 020065e8
    strb r3, [r2, #0xa3] @ 020065ec
    strb r3, [r2, #0xa4] @ 020065f0
    strb r3, [r2, #0xa5] @ 020065f4
    strb r3, [r2, #0xa6] @ 020065f8
    strb r3, [r2, #0xa7] @ 020065fc
    strb r3, [r2, #0xa8] @ 02006600
    b .L_0200663c @ 02006604
.L_02006608:
    mov r2, r4 @ 02006608
    mov r3, r5 @ 0200660c
    mov r0, #0 @ 02006610
    ldr r1, [pc, #0xfc] @ 02006614
    bl .L_02080620 @ 02006618
    ldr r2, [pc, #0xf8] @ 0200661c
    ldr r3, [pc, #0xf8] @ 02006620
    bl .L_02080a34 @ 02006624
    bl .L_02080ed0 @ 02006628
    cmp r6, #0x400 @ 0200662c
    strh r0, [r7, #0x20] @ 02006630
    add r7, r7, #2 @ 02006634
    beq .L_02006670 @ 02006638
.L_0200663c:
    mov r0, r6 @ 0200663c
    bl .L_02080958 @ 02006640
    cmp r6, #0 @ 02006644
    mov r4, r0 @ 02006648
    mov r5, r1 @ 0200664c
    add r6, r6, #1 @ 02006650
    mov r2, #0 @ 02006654
    ldr r3, [pc, #0xc4] @ 02006658
    bge .L_02006608 @ 0200665c
    bl .L_02080624 @ 02006660
    mov r4, r0 @ 02006664
    mov r5, r1 @ 02006668
    b .L_02006608 @ 0200666c
.L_02006670:
    ldr r7, [pc, #0xb0] @ 02006670
    sub r6, r6, #0x400 @ 02006674
    b .L_020066ac @ 02006678
.L_0200667c:
    mov r2, r4 @ 0200667c
    mov r3, r5 @ 02006680
    mov r0, #0 @ 02006684
    ldr r1, [pc, #0x9c] @ 02006688
    bl .L_02080620 @ 0200668c
    ldr r2, [pc, #0x84] @ 02006690
    ldr r3, [pc, #0x84] @ 02006694
    bl .L_02080a34 @ 02006698
    bl .L_02080ed0 @ 0200669c
    cmp r6, #0x100 @ 020066a0
    strh r0, [r7], #2 @ 020066a4
    beq .L_020064a4 @ 020066a8
.L_020066ac:
    mov r0, r6 @ 020066ac
    bl .L_02080958 @ 020066b0
    cmp r6, #0 @ 020066b4
    mov r4, r0 @ 020066b8
    mov r5, r1 @ 020066bc
    add r6, r6, #1 @ 020066c0
    mov r2, #0 @ 020066c4
    ldr r3, [pc, #0x54] @ 020066c8
    bge .L_0200667c @ 020066cc
    bl .L_02080624 @ 020066d0
    mov r4, r0 @ 020066d4
    mov r5, r1 @ 020066d8
    b .L_0200667c @ 020066dc
    .byte 0x70, 0x90, 0x09, 0x02, 0xa4, 0x59, 0x00, 0x02, 0x74, 0xb7, 0x3d, 0x02, 0x44, 0xb6, 0x3d, 0x02 @ 020066e0
    .byte 0x60, 0xb7, 0x3d, 0x02, 0x48, 0xb6, 0x3d, 0x02, 0x5c, 0xb6, 0x3d, 0x02, 0x64, 0xb7, 0x3d, 0x02 @ 020066f0
    .byte 0x34, 0xb6, 0x3d, 0x02, 0x98, 0xc1, 0x3d, 0x02, 0x58, 0xb6, 0x3d, 0x02, 0x00, 0xf0, 0x7f, 0x02 @ 02006700
    .byte 0x7c, 0x92, 0x09, 0x02, 0x78, 0xb7, 0x3d, 0x02, 0x00, 0x00, 0x90, 0x40, 0x7d, 0x05, 0x69, 0xc6 @ 02006710
    .byte 0xa2, 0x1b, 0x40, 0x40, 0x00, 0x00, 0xf0, 0x41, 0x98, 0xbf, 0x3d, 0x02, 0x00, 0x00, 0x70, 0x40 @ 02006720
