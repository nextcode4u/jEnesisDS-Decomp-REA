.L_02003af0:
@ FUN_02003af0 at 0x02003af0
    ldr r1, [pc, #0x24] @ 02003af0
    ldr r0, [pc, #0x24] @ 02003af4
    ldr r3, [pc, #0x24] @ 02003af8
    ldr r2, [pc, #0x24] @ 02003afc
    str r3, [r1, #4] @ 02003b00
    str r2, [r0, #4] @ 02003b04
    ldr r3, [pc, #0x1c] @ 02003b08
    ldr r2, [pc, #0x1c] @ 02003b0c
    str r3, [r1] @ 02003b10
    str r2, [r0] @ 02003b14
    bx lr @ 02003b18
    .byte 0x24, 0xb6, 0x3c, 0x02, 0x2c, 0xb6, 0x3c, 0x02, 0xff, 0xff, 0x3f, 0x00, 0xff, 0xff, 0x00, 0x00 @ 02003b1c
    .byte 0xec, 0x4c, 0x0b, 0x02, 0x34, 0xb6, 0x3c, 0x02 @ 02003b2c
    str lr, [sp, #-4]! @ 02003b34
    bic r3, r0, #0xff000000 @ 02003b38
    sub sp, sp, #4 @ 02003b3c
    mov r0, r3 @ 02003b40
    ldr r2, [pc, #0x10] @ 02003b44
    lsr r3, r3, #0x10 @ 02003b48
    mov lr, pc @ 02003b4c
    ldr pc, [r2, r3, lsl #2] @ 02003b50
    add sp, sp, #4 @ 02003b54
    ldm sp!, {pc} @ 02003b58
    .byte 0x1c, 0x06, 0x00, 0x0b @ 02003b5c
    str lr, [sp, #-4]! @ 02003b60
    bic r3, r0, #0xff000000 @ 02003b64
    sub sp, sp, #4 @ 02003b68
    mov r0, r3 @ 02003b6c
    ldr r2, [pc, #0x10] @ 02003b70
    lsr r3, r3, #0x10 @ 02003b74
    mov lr, pc @ 02003b78
    ldr pc, [r2, r3, lsl #2] @ 02003b7c
    add sp, sp, #4 @ 02003b80
    ldm sp!, {pc} @ 02003b84
    .byte 0x1c, 0x0a, 0x00, 0x0b @ 02003b88
    push {r4, r5, r6, r7, lr} @ 02003b8c
    bic r4, r0, #0xff000000 @ 02003b90
    sub sp, sp, #4 @ 02003b94
    lsr r7, r4, #0x10 @ 02003b98
    ldr r6, [pc, #0x24] @ 02003b9c
    mov r0, r4 @ 02003ba0
    mov lr, pc @ 02003ba4
    ldr pc, [r6, r7, lsl #2] @ 02003ba8
    mov r5, r0 @ 02003bac
    add r0, r4, #2 @ 02003bb0
    mov lr, pc @ 02003bb4
    ldr pc, [r6, r7, lsl #2] @ 02003bb8
    orr r0, r0, r5, lsl #16 @ 02003bbc
    add sp, sp, #4 @ 02003bc0
    pop {r4, r5, r6, r7, pc} @ 02003bc4
    .byte 0x1c, 0x0a, 0x00, 0x0b, 0x04, 0xe0, 0x2d, 0xe5, 0xff, 0x34, 0xc0, 0xe3, 0x03, 0x05, 0x10, 0xe3 @ 02003bc8
    .byte 0x04, 0xd0, 0x4d, 0xe2, 0x01, 0x10, 0x23, 0xe2, 0x03, 0x00, 0xa0, 0xe1, 0x23, 0x28, 0xa0, 0xe1 @ 02003bd8
    .byte 0x03, 0x00, 0x00, 0x1a, 0x18, 0x30, 0x9f, 0xe5, 0x01, 0x00, 0xd3, 0xe7, 0x04, 0xd0, 0x8d, 0xe2 @ 02003be8
    .byte 0x00, 0x80, 0xbd, 0xe8, 0x0c, 0x30, 0x9f, 0xe5, 0x0f, 0xe0, 0xa0, 0xe1, 0x02, 0xf1, 0x93, 0xe7 @ 02003bf8
    .byte 0xf9, 0xff, 0xff, 0xea, 0xec, 0x4c, 0x0b, 0x02, 0x1c, 0x06, 0x00, 0x0b, 0x04, 0xe0, 0x2d, 0xe5 @ 02003c08
    .byte 0xff, 0x24, 0xc0, 0xe3, 0x03, 0x05, 0x10, 0xe3, 0x04, 0xd0, 0x4d, 0xe2, 0x02, 0x00, 0xa0, 0xe1 @ 02003c18
    .byte 0x22, 0x18, 0xa0, 0xe1, 0x03, 0x00, 0x00, 0x1a, 0x18, 0x30, 0x9f, 0xe5, 0xb3, 0x00, 0x92, 0xe1 @ 02003c28
    .byte 0x04, 0xd0, 0x8d, 0xe2, 0x00, 0x80, 0xbd, 0xe8, 0x0c, 0x30, 0x9f, 0xe5, 0x0f, 0xe0, 0xa0, 0xe1 @ 02003c38
    .byte 0x01, 0xf1, 0x93, 0xe7, 0xf9, 0xff, 0xff, 0xea, 0xec, 0x4c, 0x0b, 0x02, 0x1c, 0x0a, 0x00, 0x0b @ 02003c48
    .byte 0x24, 0x10, 0x9f, 0xe5, 0x03, 0x05, 0x10, 0xe3, 0xff, 0x24, 0xc0, 0xe3, 0x02, 0x30, 0x81, 0xe2 @ 02003c58
    .byte 0x02, 0x00, 0xa0, 0xe1, 0x03, 0x00, 0x00, 0x1a, 0xb3, 0x30, 0x92, 0xe1, 0xb1, 0x00, 0x92, 0xe1 @ 02003c68
    .byte 0x00, 0x08, 0x83, 0xe1, 0x1e, 0xff, 0x2f, 0xe1, 0xc1, 0xff, 0xff, 0xea, 0xec, 0x4c, 0x0b, 0x02 @ 02003c78
    tst r0, #0xc00000 @ 02003c88
    ldr r3, [pc, #8] @ 02003c8c
    ldr r0, [pc, #8] @ 02003c90
    movne r0, r3 @ 02003c94
    bx lr @ 02003c98
    .byte 0x2c, 0xb6, 0x3c, 0x02, 0x24, 0xb6, 0x3c, 0x02 @ 02003c9c
.L_02003ca4:
@ FUN_02003ca4 at 0x02003ca4
    ldr r0, [pc] @ 02003ca4
    bx lr @ 02003ca8
    .byte 0xec, 0x4c, 0x0b, 0x02 @ 02003cac
.L_02003cb0:
@ FUN_02003cb0 at 0x02003cb0
    ldr r0, [pc] @ 02003cb0
    bx lr @ 02003cb4
    .byte 0x34, 0xb6, 0x3c, 0x02 @ 02003cb8
.L_02003cbc:
@ FUN_02003cbc at 0x02003cbc
    ldr r0, [pc] @ 02003cbc
    bx lr @ 02003cc0
    .byte 0x08, 0x90, 0x09, 0x02 @ 02003cc4
.L_02003cc8:
@ FUN_02003cc8 at 0x02003cc8
    lsl r3, r0, #0x10 @ 02003cc8
    ldr r2, [pc, #0x1c] @ 02003ccc
    tst r0, #0xc00000 @ 02003cd0
    lsr r3, r3, #0x10 @ 02003cd4
    add r3, r3, r2 @ 02003cd8
    ldreq r3, [pc, #0x10] @ 02003cdc
    bic r0, r0, #0xff000000 @ 02003ce0
    addeq r3, r0, r3 @ 02003ce4
    mov r0, r3 @ 02003ce8
    bx lr @ 02003cec
    .byte 0x34, 0xb6, 0x3c, 0x02, 0xec, 0x4c, 0x0b, 0x02 @ 02003cf0
    str lr, [sp, #-4]! @ 02003cf8
    bic r3, r0, #0xff000000 @ 02003cfc
    mov r0, r3 @ 02003d00
    sub sp, sp, #4 @ 02003d04
    lsr r3, r3, #0x10 @ 02003d08
    ldr r2, [pc, #0xc] @ 02003d0c
    mov lr, pc @ 02003d10
    ldr pc, [r2, r3, lsl #2] @ 02003d14
    add sp, sp, #4 @ 02003d18
    ldm sp!, {pc} @ 02003d1c
    .byte 0x1c, 0x0e, 0x00, 0x0b @ 02003d20
    str lr, [sp, #-4]! @ 02003d24
    bic r3, r0, #0xff000000 @ 02003d28
    mov r0, r3 @ 02003d2c
    sub sp, sp, #4 @ 02003d30
    lsr r3, r3, #0x10 @ 02003d34
    ldr r2, [pc, #0xc] @ 02003d38
    mov lr, pc @ 02003d3c
    ldr pc, [r2, r3, lsl #2] @ 02003d40
    add sp, sp, #4 @ 02003d44
    ldm sp!, {pc} @ 02003d48
    .byte 0x1c, 0x12, 0x00, 0x0b @ 02003d4c
    push {r4, r5, r6, r7, lr} @ 02003d50
    bic r5, r0, #0xff000000 @ 02003d54
    mov r4, r1 @ 02003d58
    mov r0, r5 @ 02003d5c
    sub sp, sp, #4 @ 02003d60
    lsr r1, r1, #0x10 @ 02003d64
    lsr r7, r5, #0x10 @ 02003d68
    ldr r6, [pc, #0x20] @ 02003d6c
    lsl r4, r4, #0x10 @ 02003d70
    mov lr, pc @ 02003d74
    ldr pc, [r6, r7, lsl #2] @ 02003d78
    add r0, r5, #2 @ 02003d7c
    lsr r1, r4, #0x10 @ 02003d80
    mov lr, pc @ 02003d84
    ldr pc, [r6, r7, lsl #2] @ 02003d88
    add sp, sp, #4 @ 02003d8c
    pop {r4, r5, r6, r7, pc} @ 02003d90
    .byte 0x1c, 0x12, 0x00, 0x0b @ 02003d94
    push {r4, r5, r6, r7, lr} @ 02003d98
    bic r4, r0, #0xff000000 @ 02003d9c
    mov r7, r1 @ 02003da0
    lsl r1, r1, #0x10 @ 02003da4
    add r0, r4, #2 @ 02003da8
    sub sp, sp, #4 @ 02003dac
    lsr r1, r1, #0x10 @ 02003db0
    lsr r6, r4, #0x10 @ 02003db4
    ldr r5, [pc, #0x1c] @ 02003db8
    mov lr, pc @ 02003dbc
    ldr pc, [r5, r6, lsl #2] @ 02003dc0
    mov r0, r4 @ 02003dc4
    lsr r1, r7, #0x10 @ 02003dc8
    mov lr, pc @ 02003dcc
    ldr pc, [r5, r6, lsl #2] @ 02003dd0
    add sp, sp, #4 @ 02003dd4
    pop {r4, r5, r6, r7, pc} @ 02003dd8
    .byte 0x1c, 0x12, 0x00, 0x0b @ 02003ddc
    mov r0, #0 @ 02003de0
    bx lr @ 02003de4
    mov r0, #0 @ 02003de8
    bx lr @ 02003dec
    mov r0, #0 @ 02003df0
    bx lr @ 02003df4
    mov r0, #0 @ 02003df8
    bx lr @ 02003dfc
    mov r0, #0 @ 02003e00
    bx lr @ 02003e04
    ldr r3, [pc, #0xc] @ 02003e08
    bic r0, r0, #0xfc000001 @ 02003e0c
    bic r0, r0, #0x3c00000 @ 02003e10
    ldrh r0, [r0, r3] @ 02003e14
    bx lr @ 02003e18
    .byte 0xec, 0x4c, 0x0b, 0x02 @ 02003e1c
    mov r0, #0 @ 02003e20
    bx lr @ 02003e24
    mov r0, #0 @ 02003e28
    bx lr @ 02003e2c
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0x1e, 0xff, 0x2f, 0xe1 @ 02003e30
    ldr r3, [pc, #0x68] @ 02003e38
    and ip, r0, #0x3f0000 @ 02003e3c
    ldr r2, [r3] @ 02003e40
    bic r0, r0, #0xff000000 @ 02003e44
    ldrb r3, [r2, #0x261] @ 02003e48
    str lr, [sp, #-4]! @ 02003e4c
    cmp r3, #0 @ 02003e50
    bic r0, r0, #0xc00000 @ 02003e54
    beq .L_02003e94 @ 02003e58
    ldr r3, [pc, #0x48] @ 02003e5c
    ldrb ip, [r3] @ 02003e60
    cmp ip, #1 @ 02003e64
    .word 0x149df004 @ 02003e68 popne {pc}
    ldr r3, [r2, #0x24c] @ 02003e6c
    cmp r0, r3 @ 02003e70
    .word 0x349df004 @ 02003e74 poplo {pc}
    ldr r3, [r2, #0x250] @ 02003e78
    eor lr, r0, #1 @ 02003e7c
    cmp r0, r3 @ 02003e80
    ldrls r3, [pc, #0x24] @ 02003e84
    strbls r1, [r3, lr] @ 02003e88
    strbls ip, [r2, #0x263] @ 02003e8c
    .word 0xe49df004 @ 02003e90 pop {pc}
.L_02003e94:
    cmp ip, #0x200000 @ 02003e94
    ldreq r3, [pc, #0x14] @ 02003e98
    moveq r2, #1 @ 02003e9c
    strbeq r2, [r3] @ 02003ea0
    .word 0xe49df004 @ 02003ea4 pop {pc}
    .byte 0xc8, 0x8f, 0x09, 0x02, 0x4a, 0xf3, 0x08, 0x02, 0xec, 0x4c, 0x0b, 0x02, 0x0d, 0x90, 0x09, 0x02 @ 02003ea8
    lsl r0, r0, #0x10 @ 02003eb8
    lsr r0, r0, #0x10 @ 02003ebc
    ldr r3, [pc, #8] @ 02003ec0
    eor r0, r0, #1 @ 02003ec4
    strb r1, [r3, r0] @ 02003ec8
    bx lr @ 02003ecc
    .byte 0x34, 0xb6, 0x3c, 0x02 @ 02003ed0
    ldr r3, [pc, #0x48] @ 02003ed4
    ldr r2, [r3] @ 02003ed8
    ldrb r3, [r2, #0x261] @ 02003edc
    cmp r3, #0 @ 02003ee0
    bxeq lr @ 02003ee4
    ldr r3, [pc, #0x38] @ 02003ee8
    bic r0, r0, #0xff000000 @ 02003eec
    ldrb ip, [r3] @ 02003ef0
    bic r0, r0, #0xc00000 @ 02003ef4
    cmp ip, #1 @ 02003ef8
    bxne lr @ 02003efc
    ldr r3, [r2, #0x24c] @ 02003f00
    cmp r0, r3 @ 02003f04
    bxlo lr @ 02003f08
    ldr r3, [r2, #0x250] @ 02003f0c
    cmp r0, r3 @ 02003f10
    ldrls r3, [pc, #0x10] @ 02003f14
    strbls ip, [r2, #0x263] @ 02003f18
    strhls r1, [r0, r3] @ 02003f1c
    bx lr @ 02003f20
    .byte 0xc8, 0x8f, 0x09, 0x02, 0x4a, 0xf3, 0x08, 0x02, 0xec, 0x4c, 0x0b, 0x02 @ 02003f24
.L_02003f30:
@ FUN_02003f30 at 0x02003f30
    lsr r3, r0, #4 @ 02003f30
    and r3, r3, #0xf @ 02003f34
    cmp r3, #0xf @ 02003f38
    ldrls pc, [pc, r3, lsl #2] @ 02003f3c
    b .L_02003fbc @ 02003f40
    .byte 0xe8, 0x3f, 0x00, 0x02, 0xe8, 0x3f, 0x00, 0x02, 0x84, 0x3f, 0x00, 0x02, 0xe8, 0x3f, 0x00, 0x02 @ 02003f44
    .byte 0xbc, 0x3f, 0x00, 0x02, 0xbc, 0x3f, 0x00, 0x02, 0xbc, 0x3f, 0x00, 0x02, 0xbc, 0x3f, 0x00, 0x02 @ 02003f54
    .byte 0xbc, 0x3f, 0x00, 0x02, 0xbc, 0x3f, 0x00, 0x02, 0xc8, 0x3f, 0x00, 0x02, 0xbc, 0x3f, 0x00, 0x02 @ 02003f64
    .byte 0xb0, 0x3f, 0x00, 0x02, 0xb0, 0x3f, 0x00, 0x02, 0xa4, 0x3f, 0x00, 0x02, 0xa4, 0x3f, 0x00, 0x02 @ 02003f74
    ldr r3, [pc, #0x7c] @ 02003f84
    ldr r2, [pc, #0x7c] @ 02003f88
    ldrb r1, [r3] @ 02003f8c
    ldr r3, [pc, #0x78] @ 02003f90
    cmp r1, #0 @ 02003f94
    moveq r3, r2 @ 02003f98
.L_02003f9c:
    mov r0, r3 @ 02003f9c
    bx lr @ 02003fa0
    ldr r3, [pc, #0x68] @ 02003fa4
    mov r0, r3 @ 02003fa8
    bx lr @ 02003fac
    ldr r3, [pc, #0x60] @ 02003fb0
    mov r0, r3 @ 02003fb4
    bx lr @ 02003fb8
.L_02003fbc:
    ldr r3, [pc, #0x58] @ 02003fbc
    mov r0, r3 @ 02003fc0
    bx lr @ 02003fc4
    ands r1, r0, #0xf @ 02003fc8
    ldr r3, [pc, #0x4c] @ 02003fcc
    beq .L_02003f9c @ 02003fd0
    ldr r2, [pc, #0x40] @ 02003fd4
    ldr r3, [pc, #0x44] @ 02003fd8
    cmp r1, #1 @ 02003fdc
    movne r3, r2 @ 02003fe0
    b .L_02003f9c @ 02003fe4
    ldr r3, [pc, #0x18] @ 02003fe8
    ldr r2, [pc, #0x34] @ 02003fec
    ldrb r1, [r3] @ 02003ff0
    ldr r3, [pc, #0x14] @ 02003ff4
    cmp r1, #0 @ 02003ff8
    moveq r3, r2 @ 02003ffc
    mov r0, r3 @ 02004000
    bx lr @ 02004004
    .byte 0x0e, 0x90, 0x09, 0x02, 0xe0, 0x3d, 0x00, 0x02, 0xf0, 0x3d, 0x00, 0x02, 0xf8, 0x3d, 0x00, 0x02 @ 02004008
    .byte 0xa8, 0x4a, 0x00, 0x02, 0x78, 0x43, 0x00, 0x02, 0x1c, 0x4a, 0x00, 0x02, 0xdc, 0x4a, 0x00, 0x02 @ 02004018
    .byte 0xe8, 0x3d, 0x00, 0x02 @ 02004028
.L_0200402c:
@ FUN_0200402c at 0x0200402c
    bic r0, r0, #0xff000000 @ 0200402c
    lsr r3, r0, #4 @ 02004030
    and r3, r3, #0xf @ 02004034
    cmp r3, #0xf @ 02004038
    ldrls pc, [pc, r3, lsl #2] @ 0200403c
    b .L_020040bc @ 02004040
    .byte 0xe8, 0x40, 0x00, 0x02, 0xe8, 0x40, 0x00, 0x02, 0x84, 0x40, 0x00, 0x02, 0xe8, 0x40, 0x00, 0x02 @ 02004044
    .byte 0xbc, 0x40, 0x00, 0x02, 0xbc, 0x40, 0x00, 0x02, 0xbc, 0x40, 0x00, 0x02, 0xbc, 0x40, 0x00, 0x02 @ 02004054
    .byte 0xbc, 0x40, 0x00, 0x02, 0xbc, 0x40, 0x00, 0x02, 0xc8, 0x40, 0x00, 0x02, 0xbc, 0x40, 0x00, 0x02 @ 02004064
    .byte 0xb0, 0x40, 0x00, 0x02, 0xb0, 0x40, 0x00, 0x02, 0xa4, 0x40, 0x00, 0x02, 0xa4, 0x40, 0x00, 0x02 @ 02004074
    ldr r3, [pc, #0x7c] @ 02004084
    ldr r2, [pc, #0x7c] @ 02004088
    ldrb r1, [r3] @ 0200408c
    ldr r3, [pc, #0x78] @ 02004090
    cmp r1, #0 @ 02004094
    moveq r3, r2 @ 02004098
.L_0200409c:
    mov r0, r3 @ 0200409c
    bx lr @ 020040a0
    ldr r3, [pc, #0x68] @ 020040a4
    mov r0, r3 @ 020040a8
    bx lr @ 020040ac
    ldr r3, [pc, #0x60] @ 020040b0
    mov r0, r3 @ 020040b4
    bx lr @ 020040b8
.L_020040bc:
    ldr r3, [pc, #0x58] @ 020040bc
    mov r0, r3 @ 020040c0
    bx lr @ 020040c4
    ands r1, r0, #0xf @ 020040c8
    ldr r3, [pc, #0x4c] @ 020040cc
    beq .L_0200409c @ 020040d0
    ldr r2, [pc, #0x40] @ 020040d4
    ldr r3, [pc, #0x44] @ 020040d8
    cmp r1, #1 @ 020040dc
    movne r3, r2 @ 020040e0
    b .L_0200409c @ 020040e4
    ldr r3, [pc, #0x18] @ 020040e8
    ldr r2, [pc, #0x34] @ 020040ec
    ldrb r1, [r3] @ 020040f0
    ldr r3, [pc, #0x14] @ 020040f4
    cmp r1, #0 @ 020040f8
    moveq r3, r2 @ 020040fc
    mov r0, r3 @ 02004100
    bx lr @ 02004104
    .byte 0x0e, 0x90, 0x09, 0x02, 0x00, 0x3e, 0x00, 0x02, 0x20, 0x3e, 0x00, 0x02, 0x28, 0x3e, 0x00, 0x02 @ 02004108
    .byte 0xd4, 0x48, 0x00, 0x02, 0xa4, 0x43, 0x00, 0x02, 0x7c, 0x49, 0x00, 0x02, 0x08, 0x49, 0x00, 0x02 @ 02004118
    .byte 0x08, 0x3e, 0x00, 0x02 @ 02004128
@ FUN_0200412c at 0x0200412c
    push {r4, r5, r6, lr} @ 0200412c
    ldr r6, [pc, #0x2c] @ 02004130
    ldr r5, [pc, #0x2c] @ 02004134
    mov r4, #0 @ 02004138
.L_0200413c:
    mov r0, r4 @ 0200413c
    bl .L_02003f30 @ 02004140
    str r0, [r6], #4 @ 02004144
    mov r0, r4 @ 02004148
    bl .L_0200402c @ 0200414c
    add r4, r4, #1 @ 02004150
    cmp r4, #0x40 @ 02004154
    str r0, [r5], #4 @ 02004158
    bne .L_0200413c @ 0200415c
    pop {r4, r5, r6, pc} @ 02004160
    .byte 0x1c, 0x06, 0x00, 0x0b, 0x1c, 0x0a, 0x00, 0x0b @ 02004164
.L_0200416c:
@ FUN_0200416c at 0x0200416c
    bic r0, r0, #0xff000000 @ 0200416c
    lsr r3, r0, #4 @ 02004170
    and r3, r3, #0xf @ 02004174
    cmp r3, #0xf @ 02004178
    ldrls pc, [pc, r3, lsl #2] @ 0200417c
    b .L_020041f4 @ 02004180
    .byte 0xc4, 0x41, 0x00, 0x02, 0xc4, 0x41, 0x00, 0x02, 0xc4, 0x41, 0x00, 0x02, 0xc4, 0x41, 0x00, 0x02 @ 02004184
    .byte 0xf4, 0x41, 0x00, 0x02, 0xf4, 0x41, 0x00, 0x02, 0xf4, 0x41, 0x00, 0x02, 0xf4, 0x41, 0x00, 0x02 @ 02004194
    .byte 0xf4, 0x41, 0x00, 0x02, 0xf4, 0x41, 0x00, 0x02, 0xd0, 0x41, 0x00, 0x02, 0xf4, 0x41, 0x00, 0x02 @ 020041a4
    .byte 0x00, 0x42, 0x00, 0x02, 0x00, 0x42, 0x00, 0x02, 0x0c, 0x42, 0x00, 0x02, 0x0c, 0x42, 0x00, 0x02 @ 020041b4
    ldr r3, [pc, #0x4c] @ 020041c4
.L_020041c8:
    mov r0, r3 @ 020041c8
    bx lr @ 020041cc
    ands r1, r0, #0xf @ 020041d0
    ldr r3, [pc, #0x40] @ 020041d4
    beq .L_020041c8 @ 020041d8
    ldr r2, [pc, #0x3c] @ 020041dc
    ldr r3, [pc, #0x3c] @ 020041e0
    cmp r1, #1 @ 020041e4
    movne r3, r2 @ 020041e8
    mov r0, r3 @ 020041ec
    bx lr @ 020041f0
.L_020041f4:
    ldr r3, [pc, #0x24] @ 020041f4
    mov r0, r3 @ 020041f8
    bx lr @ 020041fc
    ldr r3, [pc, #0x20] @ 02004200
    mov r0, r3 @ 02004204
    bx lr @ 02004208
    ldr r3, [pc, #0x18] @ 0200420c
    mov r0, r3 @ 02004210
    bx lr @ 02004214
    .byte 0x38, 0x3e, 0x00, 0x02, 0x84, 0x47, 0x00, 0x02, 0x30, 0x3e, 0x00, 0x02, 0xf0, 0x47, 0x00, 0x02 @ 02004218
    .byte 0xa4, 0x44, 0x00, 0x02, 0xb8, 0x3e, 0x00, 0x02 @ 02004228
.L_02004230:
@ FUN_02004230 at 0x02004230
    lsr r3, r0, #4 @ 02004230
    and r3, r3, #0xf @ 02004234
    cmp r3, #0xf @ 02004238
    ldrls pc, [pc, r3, lsl #2] @ 0200423c
    b .L_020042b4 @ 02004240
    .byte 0x84, 0x42, 0x00, 0x02, 0x84, 0x42, 0x00, 0x02, 0x84, 0x42, 0x00, 0x02, 0x84, 0x42, 0x00, 0x02 @ 02004244
    .byte 0xb4, 0x42, 0x00, 0x02, 0xb4, 0x42, 0x00, 0x02, 0xb4, 0x42, 0x00, 0x02, 0xb4, 0x42, 0x00, 0x02 @ 02004254
    .byte 0xb4, 0x42, 0x00, 0x02, 0xb4, 0x42, 0x00, 0x02, 0x90, 0x42, 0x00, 0x02, 0xb4, 0x42, 0x00, 0x02 @ 02004264
    .byte 0xc0, 0x42, 0x00, 0x02, 0xc0, 0x42, 0x00, 0x02, 0xcc, 0x42, 0x00, 0x02, 0xcc, 0x42, 0x00, 0x02 @ 02004274
    ldr r3, [pc, #0x4c] @ 02004284
.L_02004288:
    mov r0, r3 @ 02004288
    bx lr @ 0200428c
    ands r1, r0, #0xf @ 02004290
    ldr r3, [pc, #0x40] @ 02004294
    beq .L_02004288 @ 02004298
    ldr r2, [pc, #0x3c] @ 0200429c
    ldr r3, [pc, #0x3c] @ 020042a0
    cmp r1, #1 @ 020042a4
    movne r3, r2 @ 020042a8
    mov r0, r3 @ 020042ac
    bx lr @ 020042b0
.L_020042b4:
    ldr r3, [pc, #0x24] @ 020042b4
    mov r0, r3 @ 020042b8
    bx lr @ 020042bc
    ldr r3, [pc, #0x20] @ 020042c0
    mov r0, r3 @ 020042c4
    bx lr @ 020042c8
    ldr r3, [pc, #0x18] @ 020042cc
    mov r0, r3 @ 020042d0
    bx lr @ 020042d4
    .byte 0xd4, 0x3e, 0x00, 0x02, 0x14, 0x47, 0x00, 0x02, 0x34, 0x3e, 0x00, 0x02, 0xc0, 0x46, 0x00, 0x02 @ 020042d8
    .byte 0x84, 0x44, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01 @ 020042e8
.L_020042f0:
@ FUN_020042f0 at 0x020042f0
    push {r4, r5, r6, r7, r8, sl, lr} @ 020042f0
    mov r4, #0 @ 020042f4
    ldr sl, [pc, #0x58] @ 020042f8
    ldr r8, [pc, #0x58] @ 020042fc
    ldr r7, [pc, #0x58] @ 02004300
    ldr r6, [pc, #0x58] @ 02004304
    sub sp, sp, #4 @ 02004308
    mov r5, r4 @ 0200430c
.L_02004310:
    mov r0, r4 @ 02004310
    bl .L_02003f30 @ 02004314
    str r0, [r5, sl] @ 02004318
    mov r0, r4 @ 0200431c
    bl .L_0200402c @ 02004320
    str r0, [r5, r8] @ 02004324
    mov r0, r4 @ 02004328
    bl .L_0200416c @ 0200432c
    str r0, [r5, r7] @ 02004330
    mov r0, r4 @ 02004334
    bl .L_02004230 @ 02004338
    add r4, r4, #1 @ 0200433c
    cmp r4, #0x100 @ 02004340
    str r0, [r5, r6] @ 02004344
    add r5, r5, #4 @ 02004348
    bne .L_02004310 @ 0200434c
    add sp, sp, #4 @ 02004350
    pop {r4, r5, r6, r7, r8, sl, pc} @ 02004354
    .byte 0x1c, 0x06, 0x00, 0x0b, 0x1c, 0x0a, 0x00, 0x0b, 0x1c, 0x0e, 0x00, 0x0b, 0x1c, 0x12, 0x00, 0x0b @ 02004358
.L_02004368:
@ FUN_02004368 at 0x02004368
    tst r0, #1 @ 02004368
    moveq r0, #0x71 @ 0200436c
    movne r0, #0x4e @ 02004370
    bx lr @ 02004374
@ FUN_02004378 at 0x02004378
    str lr, [sp, #-4]! @ 02004378
    sub sp, sp, #4 @ 0200437c
    bl .L_02004368 @ 02004380
    add sp, sp, #4 @ 02004384
    ldm sp!, {pc} @ 02004388
.L_0200438c:
@ FUN_0200438c at 0x0200438c
    ldr r3, [pc, #0xc] @ 0200438c
    cmp r0, #0 @ 02004390
    moveq r0, r3 @ 02004394
    movne r0, #0x4e00 @ 02004398
    bx lr @ 0200439c
    .byte 0x71, 0x4e, 0x00, 0x00 @ 020043a0
@ FUN_020043a4 at 0x020043a4
    str lr, [sp, #-4]! @ 020043a4
    mov r0, #1 @ 020043a8
    sub sp, sp, #4 @ 020043ac
    bl .L_0200438c @ 020043b0
    add sp, sp, #4 @ 020043b4
    ldm sp!, {pc} @ 020043b8
.L_020043bc:
@ FUN_020043bc at 0x020043bc
    mov r0, #0 @ 020043bc
    bx lr @ 020043c0
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0x1e, 0xff, 0x2f, 0xe1 @ 020043c4
.L_020043cc:
@ FUN_020043cc at 0x020043cc
    ldr r0, [pc, #0x2c] @ 020043cc
    ldr r3, [pc, #0x2c] @ 020043d0
    ldr r2, [r0] @ 020043d4
    ldrb ip, [r3] @ 020043d8
    mov r1, #1 @ 020043dc
    cmp r2, #0xa @ 020043e0
    add r2, r2, #1 @ 020043e4
    ldr r3, [pc, #0x18] @ 020043e8
    str r2, [r0] @ 020043ec
    and r0, ip, r1 @ 020043f0
    eorhi r0, r0, r1 @ 020043f4
    str r1, [r3, #0xa8] @ 020043f8
    bx lr @ 020043fc
    .byte 0x04, 0x90, 0x09, 0x02, 0x49, 0xf3, 0x08, 0x02, 0x00, 0x00, 0x00, 0x0b @ 02004400
.L_0200440c:
    ldr r1, [pc, #0x1c] @ 0200440c
    and r0, r0, #1 @ 02004410
    ldr r2, [r1] @ 02004414
    lsl r0, r0, #0x17 @ 02004418
    ldr r3, [pc, #0x10] @ 0200441c
    orr r0, r0, r2, lsr #1 @ 02004420
    and r3, r0, r3 @ 02004424
    str r3, [r1] @ 02004428
    bx lr @ 0200442c
    .byte 0x08, 0x90, 0x09, 0x02, 0x00, 0x80, 0xff, 0x00 @ 02004430
.L_02004438:
@ FUN_02004438 at 0x02004438
    ldr r3, [pc, #4] @ 02004438
    ldr r0, [r3] @ 0200443c
    bx lr @ 02004440
    .byte 0x08, 0x90, 0x09, 0x02 @ 02004444
.L_02004448:
@ FUN_02004448 at 0x02004448
    ldr r3, [pc, #4] @ 02004448
    str r0, [r3] @ 0200444c
    bx lr @ 02004450
    .byte 0x08, 0x90, 0x09, 0x02 @ 02004454
.L_02004458:
@ default at 0x02004458
    ldr r3, [pc, #0x1c] @ 02004458
    ldr r2, [r3] @ 0200445c
    ldr r3, [pc, #0x18] @ 02004460
    orr r0, r0, r2 @ 02004464
    bic r0, r0, #0xff000000 @ 02004468
    bic r0, r0, #0xc00000 @ 0200446c
    eor r0, r0, #1 @ 02004470
    ldrb r0, [r3, r0] @ 02004474
    bx lr @ 02004478
    .byte 0x08, 0x90, 0x09, 0x02, 0xec, 0x4c, 0x0b, 0x02, 0x00, 0x20, 0xa0, 0xe1, 0x10, 0x00, 0x12, 0xe3 @ 0200447c
    .byte 0x1f, 0x00, 0x00, 0xe2, 0xff, 0x30, 0x01, 0xe2, 0x01, 0x00, 0x00, 0x0a, 0x03, 0x00, 0xa0, 0xe1 @ 0200448c
    .byte 0x8b, 0x05, 0x00, 0xea, 0x71, 0x1b, 0x00, 0xea, 0x00, 0x30, 0xa0, 0xe1, 0x10, 0x00, 0x13, 0xe3 @ 0200449c
    .byte 0x01, 0x30, 0xa0, 0xe1, 0x1f, 0x00, 0x00, 0xe2, 0x01, 0x14, 0x81, 0xe1, 0x01, 0x00, 0x00, 0x0a @ 020044ac
    .byte 0x03, 0x00, 0xa0, 0xe1, 0x82, 0x05, 0x00, 0xea, 0x68, 0x1b, 0x00, 0xea @ 020044bc
.L_020044c8:
    str lr, [sp, #-4]! @ 020044c8
    ldr r3, [pc, #0x50] @ 020044cc
    and r0, r0, #1 @ 020044d0
    ldrb r1, [r3] @ 020044d4
    ldr r3, [pc, #0x48] @ 020044d8
    mov ip, #1 @ 020044dc
    and r1, r0, r1 @ 020044e0
    str ip, [r3, #0xa8] @ 020044e4
    ldr r2, [pc, #0x3c] @ 020044e8
    ldr r3, [pc, #0x3c] @ 020044ec
    eor r1, r1, #1 @ 020044f0
    cmp r0, #0 @ 020044f4
    sub sp, sp, #4 @ 020044f8
    strb r1, [r2] @ 020044fc
    strb r0, [r3] @ 02004500
    bne .L_02004510 @ 02004504
    bl .L_020062d0 @ 02004508
    bl .L_02000bfc @ 0200450c
.L_02004510:
    ldr r3, [pc, #0x1c] @ 02004510
    mov r2, #0 @ 02004514
    str r2, [r3] @ 02004518
    add sp, sp, #4 @ 0200451c
    ldm sp!, {pc} @ 02004520
    .byte 0x00, 0x90, 0x09, 0x02, 0x00, 0x00, 0x00, 0x0b, 0x49, 0xf3, 0x08, 0x02, 0x01, 0x90, 0x09, 0x02 @ 02004524
    .byte 0x04, 0x90, 0x09, 0x02 @ 02004534
.L_02004538:
    str lr, [sp, #-4]! @ 02004538
    ldr r3, [pc, #0x6c] @ 0200453c
    and r0, r0, #1 @ 02004540
    ldrb lr, [r3] @ 02004544
    ldr r3, [pc, #0x64] @ 02004548
    mov ip, #1 @ 0200454c
    and r1, r0, lr @ 02004550
    str ip, [r3, #0xa8] @ 02004554
    ldr r2, [pc, #0x58] @ 02004558
    ldr r3, [pc, #0x58] @ 0200455c
    eor r1, r1, #1 @ 02004560
    cmp r0, #0 @ 02004564
    sub sp, sp, #4 @ 02004568
    strb r1, [r2] @ 0200456c
    strb r0, [r3] @ 02004570
    bne .L_02004580 @ 02004574
    cmp lr, ip @ 02004578
    beq .L_02004594 @ 0200457c
.L_02004580:
    ldr r3, [pc, #0x38] @ 02004580
    mov r2, #0 @ 02004584
    str r2, [r3] @ 02004588
    add sp, sp, #4 @ 0200458c
    ldm sp!, {pc} @ 02004590
.L_02004594:
    ldr r3, [pc, #0x28] @ 02004594
    add r0, r0, #0x20 @ 02004598
    ldr r2, [r3] @ 0200459c
    tst r2, #2 @ 020045a0
    bne .L_02004580 @ 020045a4
    bl .L_0200081c @ 020045a8
    b .L_02004580 @ 020045ac
    .byte 0x01, 0x90, 0x09, 0x02, 0x00, 0x00, 0x00, 0x0b, 0x49, 0xf3, 0x08, 0x02, 0x00, 0x90, 0x09, 0x02 @ 020045b0
    .byte 0x04, 0x90, 0x09, 0x02, 0x10, 0xb6, 0x3c, 0x02 @ 020045c0
.L_020045c8:
    ldr r3, [pc, #0xe0] @ 020045c8
    ldr r2, [r3] @ 020045cc
    orr r0, r0, r2 @ 020045d0
    asr r3, r0, #0x15 @ 020045d4
    and r3, r3, #7 @ 020045d8
    cmp r3, #6 @ 020045dc
    beq .L_02004648 @ 020045e0
    cmp r3, #7 @ 020045e4
    lsleq r3, r0, #0x10 @ 020045e8
    lsreq r3, r3, #0x10 @ 020045ec
    ldreq r2, [pc, #0xbc] @ 020045f0
    eoreq r3, r3, #1 @ 020045f4
    strbeq r1, [r2, r3] @ 020045f8
    bxeq lr @ 020045fc
    cmp r3, #5 @ 02004600
    bxne lr @ 02004604
    cmp r0, #0xa10000 @ 02004608
    bxlt lr @ 0200460c
    asr r3, r0, #8 @ 02004610
    and r3, r3, #0xff @ 02004614
    cmp r3, #0x11 @ 02004618
    beq .L_020046a0 @ 0200461c
    cmp r3, #0x12 @ 02004620
    beq .L_02004690 @ 02004624
    cmp r3, #0 @ 02004628
    bxne lr @ 0200462c
    ldr r3, [pc, #0x80] @ 02004630
    cmp r0, r3 @ 02004634
    bxgt lr @ 02004638
    asr r0, r0, #1 @ 0200463c
    and r0, r0, #0xf @ 02004640
    b .L_0200037c @ 02004644
.L_02004648:
    ldr r3, [pc, #0x6c] @ 02004648
    and r3, r0, r3 @ 0200464c
    cmp r3, #0xc00000 @ 02004650
    bxne lr @ 02004654
    and r0, r0, #0x1f @ 02004658
    cmp r0, #0x17 @ 0200465c
    bxhi lr @ 02004660
    mov r3, #1 @ 02004664
    lsl r3, r3, r0 @ 02004668
    tst r3, #0xaa0000 @ 0200466c
    bne .L_02004688 @ 02004670
    tst r3, #0xff @ 02004674
    bxeq lr @ 02004678
    lsl r1, r1, #0x10 @ 0200467c
    lsr r1, r1, #0x10 @ 02004680
    b .L_0200b26c @ 02004684
.L_02004688:
    mov r0, r1 @ 02004688
    b .L_02005ad0 @ 0200468c
.L_02004690:
    tst r0, #1 @ 02004690
    bxne lr @ 02004694
    and r0, r1, #1 @ 02004698
    b .L_020044c8 @ 0200469c
.L_020046a0:
    tst r0, #1 @ 020046a0
    bxne lr @ 020046a4
    and r0, r1, #1 @ 020046a8
    b .L_02004538 @ 020046ac
    .byte 0x08, 0x90, 0x09, 0x02, 0x34, 0xb6, 0x3c, 0x02, 0x1f, 0x00, 0xa1, 0x00, 0xe0, 0x00, 0xe7, 0x00 @ 020046b0
    .byte 0x40, 0x30, 0x9f, 0xe5, 0x00, 0x20, 0xa0, 0xe1, 0x03, 0x00, 0x52, 0xe1, 0x1f, 0x00, 0x00, 0xe2 @ 020046c0
    .byte 0x0a, 0x00, 0x00, 0x9a, 0x30, 0x30, 0x9f, 0xe5, 0x21, 0x04, 0xa0, 0xe1, 0x03, 0x00, 0x52, 0xe1 @ 020046d0
    .byte 0x01, 0x00, 0x00, 0xe2, 0x06, 0x00, 0x00, 0x0a, 0x20, 0x30, 0x9f, 0xe5, 0x21, 0x04, 0xa0, 0xe1 @ 020046e0
    .byte 0x03, 0x00, 0x52, 0xe1, 0x01, 0x00, 0x00, 0xe2, 0x1e, 0xff, 0x2f, 0x11, 0x71, 0xff, 0xff, 0xea @ 020046f0
    .byte 0x39, 0xef, 0xff, 0xea, 0x8b, 0xff, 0xff, 0xea, 0x1f, 0x00, 0xa1, 0x00, 0x00, 0x11, 0xa1, 0x00 @ 02004700
    .byte 0x00, 0x12, 0xa1, 0x00, 0x64, 0x30, 0x9f, 0xe5, 0x00, 0x20, 0xd3, 0xe5, 0x01, 0x00, 0x52, 0xe3 @ 02004710
    .byte 0x1e, 0xff, 0x2f, 0x01, 0x06, 0x3a, 0x00, 0xe2, 0x02, 0x0a, 0x53, 0xe3, 0x0c, 0x00, 0x00, 0x0a @ 02004720
    .byte 0x09, 0x00, 0x00, 0x9a, 0x01, 0x09, 0x53, 0xe3, 0x0d, 0x00, 0x00, 0x0a, 0x06, 0x0a, 0x53, 0xe3 @ 02004730
    .byte 0x1e, 0xff, 0x2f, 0x11, 0x7f, 0x3c, 0x00, 0xe2, 0x06, 0x0a, 0x53, 0xe3, 0x1e, 0xff, 0x2f, 0x11 @ 02004740
    .byte 0x21, 0x04, 0xa0, 0xe1, 0x01, 0x00, 0x00, 0xe2, 0x2b, 0xff, 0xff, 0xea, 0x00, 0x00, 0x53, 0xe3 @ 02004750
    .byte 0x1e, 0xff, 0x2f, 0x11, 0x80, 0x09, 0xa0, 0xe1, 0xa0, 0x09, 0xa0, 0xe1, 0x21, 0x14, 0xa0, 0xe1 @ 02004760
    .byte 0x2f, 0x01, 0x00, 0xea, 0x03, 0x00, 0x00, 0xe2, 0x21, 0x14, 0xa0, 0xe1, 0x07, 0x05, 0x00, 0xea @ 02004770
    .byte 0x49, 0xf3, 0x08, 0x02, 0x60, 0x30, 0x9f, 0xe5, 0x00, 0x20, 0xd3, 0xe5, 0x01, 0xc0, 0xa0, 0xe1 @ 02004780
    .byte 0x00, 0x00, 0x52, 0xe3, 0x1e, 0xff, 0x2f, 0x11, 0x06, 0x3a, 0x00, 0xe2, 0x02, 0x0a, 0x53, 0xe3 @ 02004790
    .byte 0x02, 0x00, 0x00, 0x0a, 0x05, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x53, 0xe3, 0x1e, 0xff, 0x2f, 0x11 @ 020047a0
    .byte 0x80, 0x09, 0xa0, 0xe1, 0xa0, 0x09, 0xa0, 0xe1, 0x0c, 0x10, 0xa0, 0xe1, 0x1c, 0x01, 0x00, 0xea @ 020047b0
    .byte 0x01, 0x09, 0x53, 0xe3, 0x06, 0x00, 0x00, 0x0a, 0x06, 0x0a, 0x53, 0xe3, 0x1e, 0xff, 0x2f, 0x11 @ 020047c0
    .byte 0xff, 0x3c, 0x00, 0xe2, 0x06, 0x0a, 0x53, 0xe3, 0x1e, 0xff, 0x2f, 0x11, 0x01, 0x00, 0x01, 0xe2 @ 020047d0
    .byte 0x09, 0xff, 0xff, 0xea, 0x03, 0x00, 0x00, 0xe2, 0xec, 0x04, 0x00, 0xea, 0x49, 0xf3, 0x08, 0x02 @ 020047e0
    .byte 0xb8, 0x30, 0x9f, 0xe5, 0x03, 0x00, 0x50, 0xe1, 0x01, 0x20, 0xa0, 0xe1, 0x1c, 0x00, 0x00, 0x9a @ 020047f0
    .byte 0xac, 0x30, 0x9f, 0xe5, 0x03, 0x00, 0x50, 0xe1, 0x20, 0x00, 0x00, 0x0a, 0xa4, 0x30, 0x9f, 0xe5 @ 02004800
    .byte 0x03, 0x00, 0x50, 0xe1, 0x1f, 0x00, 0x00, 0x0a, 0x9c, 0x30, 0x9f, 0xe5, 0x03, 0x00, 0x50, 0xe1 @ 02004810
    .byte 0x15, 0x00, 0x00, 0x0a, 0x94, 0x30, 0x9f, 0xe5, 0x03, 0x30, 0x80, 0xe0, 0x0c, 0x00, 0x53, 0xe3 @ 02004820
    .byte 0x0f, 0x30, 0x00, 0x92, 0x88, 0x20, 0x9f, 0x95, 0xa3, 0x30, 0xa0, 0x91, 0x3f, 0x10, 0x01, 0x92 @ 02004830
    .byte 0x03, 0x11, 0x82, 0x97, 0x1e, 0xff, 0x2f, 0x91, 0x78, 0x30, 0x9f, 0xe5, 0x03, 0x00, 0x50, 0xe1 @ 02004840
    .byte 0x1e, 0xff, 0x2f, 0x11, 0x70, 0x10, 0x9f, 0xe5, 0x00, 0x30, 0xd1, 0xe5, 0x00, 0x00, 0x53, 0xe3 @ 02004850
    .byte 0x0e, 0x00, 0x00, 0x0a, 0x01, 0x00, 0x12, 0xe3, 0x00, 0x30, 0xa0, 0x13, 0x00, 0x30, 0xc1, 0x15 @ 02004860
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0x1f, 0x00, 0x00, 0xe2, 0xbf, 0xee, 0xff, 0xea, 0x01, 0x20, 0x01, 0xe2 @ 02004870
    .byte 0x48, 0x30, 0x9f, 0xe5, 0x02, 0x00, 0xa0, 0xe1, 0x00, 0x20, 0xc3, 0xe5, 0x4b, 0xf3, 0xff, 0xea @ 02004880
    .byte 0x01, 0x00, 0x01, 0xe2, 0x27, 0xff, 0xff, 0xea, 0x01, 0x00, 0x01, 0xe2, 0x09, 0xff, 0xff, 0xea @ 02004890
    .byte 0x01, 0x00, 0x12, 0xe3, 0x01, 0x30, 0x83, 0x02, 0x00, 0x30, 0xc1, 0x05, 0x1e, 0xff, 0x2f, 0xe1 @ 020048a0
    .byte 0x1f, 0x00, 0xa1, 0x00, 0x00, 0x11, 0xa1, 0x00, 0x00, 0x12, 0xa1, 0x00, 0xf1, 0x30, 0xa1, 0x00 @ 020048b0
    .byte 0x0d, 0xcf, 0x5e, 0xff, 0x14, 0x90, 0x09, 0x02, 0x01, 0x41, 0xa1, 0x00, 0x0c, 0x90, 0x09, 0x02 @ 020048c0
    .byte 0x4a, 0xf3, 0x08, 0x02 @ 020048d0
    str lr, [sp, #-4]! @ 020048d4
    ldr r3, [pc, #0x24] @ 020048d8
    sub sp, sp, #4 @ 020048dc
    and r3, r0, r3 @ 020048e0
    cmp r3, #0xc00000 @ 020048e4
    beq .L_020048f8 @ 020048e8
    bl .L_020043bc @ 020048ec
.L_020048f0:
    add sp, sp, #4 @ 020048f0
    ldm sp!, {pc} @ 020048f4
.L_020048f8:
    and r0, r0, #0x1f @ 020048f8
    bl .L_0200944c @ 020048fc
    b .L_020048f0 @ 02004900
    .byte 0xe0, 0x00, 0xe7, 0x00, 0x64, 0x30, 0x9f, 0xe5, 0x00, 0x20, 0xa0, 0xe1, 0x03, 0x00, 0x52, 0xe1 @ 02004904
    .byte 0x10, 0x40, 0x2d, 0xe9, 0xff, 0x00, 0x00, 0xe2, 0x10, 0x00, 0x00, 0x9a, 0x50, 0x30, 0x9f, 0xe5 @ 02004914
    .byte 0x01, 0x00, 0xa0, 0xe3, 0x03, 0x00, 0x52, 0xe1, 0x01, 0x00, 0x00, 0x0a, 0x95, 0xfe, 0xff, 0xeb @ 02004924
    .byte 0x10, 0x80, 0xbd, 0xe8, 0xa3, 0xfe, 0xff, 0xeb, 0x00, 0x40, 0xa0, 0xe1, 0x01, 0x00, 0xa0, 0xe3 @ 02004934
    .byte 0x90, 0xfe, 0xff, 0xeb, 0x03, 0x0c, 0xc0, 0xe3, 0x04, 0x04, 0x80, 0xe1, 0x04, 0x00, 0x80, 0xe1 @ 02004944
    .byte 0x84, 0x04, 0x80, 0xe1, 0x00, 0x08, 0xa0, 0xe1, 0x20, 0x08, 0xa0, 0xe1, 0x10, 0x80, 0xbd, 0xe8 @ 02004954
    .byte 0xd7, 0xee, 0xff, 0xeb, 0x00, 0x08, 0xa0, 0xe1, 0x20, 0x08, 0xa0, 0xe1, 0x10, 0x80, 0xbd, 0xe8 @ 02004964
    .byte 0x1f, 0x00, 0xa1, 0x00, 0x00, 0x11, 0xa1, 0x00 @ 02004974
    str lr, [sp, #-4]! @ 0200497c
    ldr r3, [pc, #0x8c] @ 02004980
    sub sp, sp, #4 @ 02004984
    ldrb r2, [r3] @ 02004988
    mov r1, r0 @ 0200498c
    cmp r2, #1 @ 02004990
    beq .L_020049b8 @ 02004994
    and r3, r0, #0x6000 @ 02004998
    cmp r3, #0x2000 @ 0200499c
    beq .L_020049d0 @ 020049a0
    bls .L_020049c8 @ 020049a4
    cmp r3, #0x4000 @ 020049a8
    beq .L_02004a04 @ 020049ac
    cmp r3, #0x6000 @ 020049b0
    beq .L_020049ec @ 020049b4
.L_020049b8:
    mov r0, #0 @ 020049b8
    bl .L_0200438c @ 020049bc
.L_020049c0:
    add sp, sp, #4 @ 020049c0
    ldm sp!, {pc} @ 020049c4
.L_020049c8:
    cmp r3, #0 @ 020049c8
    bne .L_020049b8 @ 020049cc
.L_020049d0:
    lsl r0, r1, #0x13 @ 020049d0
    lsr r0, r0, #0x13 @ 020049d4
    bl .L_02004c24 @ 020049d8
    orr r0, r0, r0, lsl #8 @ 020049dc
    lsl r0, r0, #0x10 @ 020049e0
    lsr r0, r0, #0x10 @ 020049e4
    b .L_020049c0 @ 020049e8
.L_020049ec:
    and r3, r0, #0xff00 @ 020049ec
    cmp r3, #0x7f00 @ 020049f0
    ldrne r0, [pc, #0x1c] @ 020049f4
    bne .L_020049c0 @ 020049f8
    bl .L_020043bc @ 020049fc
    b .L_020049c0 @ 02004a00
.L_02004a04:
    bl .L_02005b7c @ 02004a04
    and r0, r0, #0xff @ 02004a08
    orr r0, r0, r0, lsl #8 @ 02004a0c
    b .L_020049c0 @ 02004a10
    .byte 0x49, 0xf3, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00 @ 02004a14
@ FUN_02004a1c at 0x02004a1c
    str lr, [sp, #-4]! @ 02004a1c
    ldr r3, [pc, #0x7c] @ 02004a20
    sub sp, sp, #4 @ 02004a24
    ldrb r2, [r3] @ 02004a28
    mov r1, r0 @ 02004a2c
    cmp r2, #1 @ 02004a30
    beq .L_02004a5c @ 02004a34
    and r3, r0, #0x6000 @ 02004a38
    cmp r3, #0x2000 @ 02004a3c
    beq .L_02004a70 @ 02004a40
    bls .L_02004a68 @ 02004a44
    cmp r3, #0x4000 @ 02004a48
    beq .L_02004a98 @ 02004a4c
    cmp r3, #0x6000 @ 02004a50
    beq .L_02004a80 @ 02004a54
.L_02004a58:
    mov r0, r1 @ 02004a58
.L_02004a5c:
    bl .L_02004368 @ 02004a5c
.L_02004a60:
    add sp, sp, #4 @ 02004a60
    ldm sp!, {pc} @ 02004a64
.L_02004a68:
    cmp r3, #0 @ 02004a68
    bne .L_02004a58 @ 02004a6c
.L_02004a70:
    lsl r0, r1, #0x13 @ 02004a70
    lsr r0, r0, #0x13 @ 02004a74
    bl .L_02004c24 @ 02004a78
    b .L_02004a60 @ 02004a7c
.L_02004a80:
    and r3, r0, #0xff00 @ 02004a80
    cmp r3, #0x7f00 @ 02004a84
    movne r0, #0xff @ 02004a88
    bne .L_02004a60 @ 02004a8c
    bl .L_020043bc @ 02004a90
    b .L_02004a60 @ 02004a94
.L_02004a98:
    bl .L_02005b7c @ 02004a98
    and r0, r0, #0xff @ 02004a9c
    b .L_02004a60 @ 02004aa0
    .byte 0x49, 0xf3, 0x08, 0x02 @ 02004aa4
@ FUN_02004aa8 at 0x02004aa8
    str lr, [sp, #-4]! @ 02004aa8
    ldr r3, [pc, #0x24] @ 02004aac
    sub sp, sp, #4 @ 02004ab0
    and r3, r0, r3 @ 02004ab4
    cmp r3, #0xc00000 @ 02004ab8
    beq .L_02004acc @ 02004abc
    bl .L_020043bc @ 02004ac0
.L_02004ac4:
    add sp, sp, #4 @ 02004ac4
    ldm sp!, {pc} @ 02004ac8
.L_02004acc:
    and r0, r0, #0x1f @ 02004acc
    bl .L_020094b4 @ 02004ad0
    b .L_02004ac4 @ 02004ad4
    .byte 0xe0, 0x00, 0xe7, 0x00 @ 02004ad8
@ FUN_02004adc at 0x02004adc
    str lr, [sp, #-4]! @ 02004adc
    ldr r3, [pc, #0x7c] @ 02004ae0
    sub sp, sp, #4 @ 02004ae4
    cmp r0, r3 @ 02004ae8
    and r1, r0, #0xff @ 02004aec
    bls .L_02004b34 @ 02004af0
    ldr r3, [pc, #0x6c] @ 02004af4
    cmp r0, r3 @ 02004af8
    beq .L_02004b5c @ 02004afc
    ldr r3, [pc, #0x64] @ 02004b00
    ldr r1, [pc, #0x64] @ 02004b04
    cmp r0, r3 @ 02004b08
    add r1, r0, r1 @ 02004b0c
    beq .L_02004b44 @ 02004b10
    and r3, r0, #0xf @ 02004b14
    cmp r1, #0xc @ 02004b18
    lsr r2, r3, #1 @ 02004b1c
    bhi .L_02004b54 @ 02004b20
    ldr r3, [pc, #0x48] @ 02004b24
    ldrb r0, [r3, r2, lsl #2] @ 02004b28
.L_02004b2c:
    add sp, sp, #4 @ 02004b2c
    ldm sp!, {pc} @ 02004b30
.L_02004b34:
    mov r0, r1 @ 02004b34
    bl .L_020003f4 @ 02004b38
    and r0, r0, #0xff @ 02004b3c
    b .L_02004b2c @ 02004b40
.L_02004b44:
    ldr r3, [pc, #0x2c] @ 02004b44
    ldrb r2, [r3] @ 02004b48
    and r0, r2, #1 @ 02004b4c
    b .L_02004b2c @ 02004b50
.L_02004b54:
    bl .L_02004368 @ 02004b54
    b .L_02004b2c @ 02004b58
.L_02004b5c:
    bl .L_020043cc @ 02004b5c
    b .L_02004b2c @ 02004b60
    .byte 0x1f, 0x00, 0xa1, 0x00, 0x00, 0x11, 0xa1, 0x00, 0xf1, 0x30, 0xa1, 0x00, 0x0d, 0xcf, 0x5e, 0xff @ 02004b64
    .byte 0x14, 0x90, 0x09, 0x02, 0x4a, 0xf3, 0x08, 0x02 @ 02004b74
.L_02004b7c:
    str lr, [sp, #-4]! @ 02004b7c
    mov r1, #0 @ 02004b80
    mov r2, #0x10000 @ 02004b84
    sub sp, sp, #4 @ 02004b88
    ldr r0, [pc, #0x40] @ 02004b8c
    bl .L_02083058 @ 02004b90
    ldr r3, [pc, #0x3c] @ 02004b94
    ldr r2, [pc, #0x3c] @ 02004b98
    mov r1, #0 @ 02004b9c
    mov r0, #1 @ 02004ba0
    str r1, [r3] @ 02004ba4
    strb r0, [r2] @ 02004ba8
    ldr r3, [pc, #0x2c] @ 02004bac
    ldr r2, [pc, #0x2c] @ 02004bb0
    str r1, [r3] @ 02004bb4
    strb r1, [r2] @ 02004bb8
    ldr r3, [pc, #0x24] @ 02004bbc
    ldr r2, [pc, #0x24] @ 02004bc0
    strb r1, [r3] @ 02004bc4
    strb r0, [r2] @ 02004bc8
    add sp, sp, #4 @ 02004bcc
    ldm sp!, {pc} @ 02004bd0
    .byte 0x34, 0xb6, 0x3c, 0x02, 0x08, 0x90, 0x09, 0x02, 0x4a, 0xf3, 0x08, 0x02, 0x10, 0x90, 0x09, 0x02 @ 02004bd4
    .byte 0x01, 0x90, 0x09, 0x02, 0x00, 0x90, 0x09, 0x02, 0x49, 0xf3, 0x08, 0x02 @ 02004be4
.L_02004bf0:
@ FUN_02004bf0 at 0x02004bf0
    str lr, [sp, #-4]! @ 02004bf0
    ldr r3, [pc, #0x18] @ 02004bf4
    mov r2, #0 @ 02004bf8
    sub sp, sp, #4 @ 02004bfc
    strb r2, [r3] @ 02004c00
    bl .L_020042f0 @ 02004c04
    add sp, sp, #4 @ 02004c08
    .word 0xe49de004 @ 02004c0c pop {lr}
    b .L_02004b7c @ 02004c10
    .byte 0x0e, 0x90, 0x09, 0x02 @ 02004c14
.L_02004c18:
@ FUN_02004c18 at 0x02004c18
    ldr r0, [pc] @ 02004c18
    bx lr @ 02004c1c
    .byte 0x1c, 0x16, 0x00, 0x0b @ 02004c20
.L_02004c24:
@ FUN_02004c24 at 0x02004c24
    ldr r3, [pc, #4] @ 02004c24
    ldrb r0, [r3, r0] @ 02004c28
    bx lr @ 02004c2c
    .byte 0x1c, 0x16, 0x00, 0x0b, 0x04, 0x30, 0x9f, 0xe5, 0x00, 0x10, 0xc3, 0xe7, 0x1e, 0xff, 0x2f, 0xe1 @ 02004c30
    .byte 0x1c, 0x16, 0x00, 0x0b, 0x1e, 0xff, 0x2f, 0xe1, 0xff, 0x00, 0xa0, 0xe3, 0x1e, 0xff, 0x2f, 0xe1 @ 02004c40
.L_02004c50:
@ FUN_02004c50 at 0x02004c50
    asr r3, r0, #0xd @ 02004c50
    and r3, r3, #7 @ 02004c54
    cmp r3, #3 @ 02004c58
    ldrls pc, [pc, r3, lsl #2] @ 02004c5c
    b .L_02004c74 @ 02004c60
    .byte 0x80, 0x4c, 0x00, 0x02, 0x80, 0x4c, 0x00, 0x02, 0x94, 0x4c, 0x00, 0x02, 0xa0, 0x4c, 0x00, 0x02 @ 02004c64
.L_02004c74:
    lsl r0, r0, #0x11 @ 02004c74
    lsr r0, r0, #0x11 @ 02004c78
    b .L_020045c8 @ 02004c7c
    lsl r3, r0, #0x13 @ 02004c80
    ldr r2, [pc, #0x54] @ 02004c84
    lsr r3, r3, #0x13 @ 02004c88
    strb r1, [r2, r3] @ 02004c8c
    bx lr @ 02004c90
    and r1, r1, #0xff @ 02004c94
    and r0, r0, #3 @ 02004c98
    b .L_02005ba0 @ 02004c9c
    and r3, r0, #0xff00 @ 02004ca0
    cmp r3, #0x6000 @ 02004ca4
    beq .L_02004cd8 @ 02004ca8
    cmp r3, #0x7f00 @ 02004cac
    bxne lr @ 02004cb0
    and r0, r0, #0x1f @ 02004cb4
    cmp r0, #0x17 @ 02004cb8
    bxhi lr @ 02004cbc
    mov r3, #1 @ 02004cc0
    lsl r3, r3, r0 @ 02004cc4
    tst r3, #0xaa0000 @ 02004cc8
    bxeq lr @ 02004ccc
    and r0, r1, #0xff @ 02004cd0
    b .L_02005ad0 @ 02004cd4
.L_02004cd8:
    and r0, r1, #1 @ 02004cd8
    b .L_0200440c @ 02004cdc
    .byte 0x1c, 0x16, 0x00, 0x0b @ 02004ce0
@ FUN_02004ce4 at 0x02004ce4
    push {r4, r5, lr} @ 02004ce4
    mov r4, r1 @ 02004ce8
    sub sp, sp, #4 @ 02004cec
    and r1, r1, #0xff @ 02004cf0
    mov r5, r0 @ 02004cf4
    bl .L_02004c50 @ 02004cf8
    and r4, r4, #0xff00 @ 02004cfc
    add r0, r5, #1 @ 02004d00
    lsr r1, r4, #8 @ 02004d04
    add sp, sp, #4 @ 02004d08
    pop {r4, r5, lr} @ 02004d0c
    b .L_02004c50 @ 02004d10
.L_02004d14:
@ FUN_02004d14 at 0x02004d14
    asr r3, r0, #0xd @ 02004d14
    and r3, r3, #7 @ 02004d18
    cmp r3, #3 @ 02004d1c
    ldrls pc, [pc, r3, lsl #2] @ 02004d20
    b .L_02004d38 @ 02004d24
    .byte 0x44, 0x4d, 0x00, 0x02, 0x44, 0x4d, 0x00, 0x02, 0x58, 0x4d, 0x00, 0x02, 0x5c, 0x4d, 0x00, 0x02 @ 02004d28
.L_02004d38:
    lsl r0, r0, #0x11 @ 02004d38
    lsr r0, r0, #0x11 @ 02004d3c
    b .L_02004458 @ 02004d40
    lsl r3, r0, #0x13 @ 02004d44
    ldr r2, [pc, #0x14] @ 02004d48
    lsr r3, r3, #0x13 @ 02004d4c
    ldrb r0, [r2, r3] @ 02004d50
    bx lr @ 02004d54
    b .L_02005b7c @ 02004d58
    mov r0, #0 @ 02004d5c
    bx lr @ 02004d60
    .byte 0x1c, 0x16, 0x00, 0x0b @ 02004d64
@ FUN_02004d68 at 0x02004d68
    push {r4, r5, lr} @ 02004d68
    sub sp, sp, #4 @ 02004d6c
    mov r5, r0 @ 02004d70
    bl .L_02004d14 @ 02004d74
    mov r4, r0 @ 02004d78
    add r0, r5, #1 @ 02004d7c
    bl .L_02004d14 @ 02004d80
    and r4, r4, #0xff @ 02004d84
    orr r0, r4, r0, lsl #8 @ 02004d88
    add sp, sp, #4 @ 02004d8c
    pop {r4, r5, pc} @ 02004d90
.L_02004d94:
@ FUN_02004d94 at 0x02004d94
    str lr, [sp, #-4]! @ 02004d94
    mov r3, #0 @ 02004d98
    ldr ip, [pc, #0x1c] @ 02004d9c
    ldr lr, [pc, #0x1c] @ 02004da0
    ldr r0, [pc, #0x1c] @ 02004da4
    mov r1, r3 @ 02004da8
    mov r2, #0x2000 @ 02004dac
    str r3, [ip] @ 02004db0
    str r3, [lr] @ 02004db4
    .word 0xe49de004 @ 02004db8 pop {lr}
    b .L_02083058 @ 02004dbc
    .byte 0x34, 0x90, 0x09, 0x02, 0x38, 0x90, 0x09, 0x02, 0x1c, 0x16, 0x00, 0x0b @ 02004dc0
.L_02004dcc:
@ FUN_02004dcc at 0x02004dcc
    ldrb r3, [r0, #0x401] @ 02004dcc
    ldrb ip, [r0, #0x400] @ 02004dd0
    ldrb r1, [r0, #0x402] @ 02004dd4
    push {r4, r5, r6, r7, lr} @ 02004dd8
    orr ip, ip, r3, lsl #8 @ 02004ddc
    ldrb r2, [r0, #0x403] @ 02004de0
    orr ip, ip, r1, lsl #16 @ 02004de4
    orr ip, ip, r2, lsl #24 @ 02004de8
    ldrb r6, [r0, #0x408] @ 02004dec
    lsr lr, ip, #8 @ 02004df0
    lsr r4, ip, #0x10 @ 02004df4
    mov r3, #0 @ 02004df8
    lsr r7, ip, #0x18 @ 02004dfc
    and lr, lr, #0xff @ 02004e00
    and r4, r4, #0xff @ 02004e04
    and ip, ip, #0xff @ 02004e08
    lsr r5, r6, #0x18 @ 02004e0c
    strb r3, [r0, #0x409] @ 02004e10
    strb r3, [r0, #0x40a] @ 02004e14
    strb r5, [r0, #0x40b] @ 02004e18
    strb ip, [r0, #0x424] @ 02004e1c
    strb lr, [r0, #0x425] @ 02004e20
    strb r4, [r0, #0x426] @ 02004e24
    strb r7, [r0, #0x427] @ 02004e28
    strb r3, [r0, #0x438] @ 02004e2c
    strb r3, [r0, #0x439] @ 02004e30
    strb r3, [r0, #0x43a] @ 02004e34
    strb r3, [r0, #0x43b] @ 02004e38
    strb r3, [r0, #0x43c] @ 02004e3c
    strb r3, [r0, #0x43d] @ 02004e40
    strb r3, [r0, #0x43e] @ 02004e44
    strb r3, [r0, #0x43f] @ 02004e48
    strb r3, [r0, #0x444] @ 02004e4c
    strb r3, [r0, #0x445] @ 02004e50
    strb r3, [r0, #0x446] @ 02004e54
    strb r3, [r0, #0x447] @ 02004e58
    strb r6, [r0, #0x408] @ 02004e5c
    strb r3, [r0, #0x4a4] @ 02004e60
    strb r3, [r0, #0x4a5] @ 02004e64
    strb r3, [r0, #0x4a6] @ 02004e68
    strb r3, [r0, #0x4a7] @ 02004e6c
    strb ip, [r0, #0x420] @ 02004e70
    strb lr, [r0, #0x421] @ 02004e74
    strb r4, [r0, #0x422] @ 02004e78
    strb r7, [r0, #0x423] @ 02004e7c
    strb r3, [r0, #0x474] @ 02004e80
    strb r3, [r0, #0x483] @ 02004e84
    strb r3, [r0, #0x475] @ 02004e88
    strb r3, [r0, #0x476] @ 02004e8c
    strb r3, [r0, #0x477] @ 02004e90
    strb r3, [r0, #0x484] @ 02004e94
    strb r3, [r0, #0x485] @ 02004e98
    strb r3, [r0, #0x486] @ 02004e9c
    strb r3, [r0, #0x487] @ 02004ea0
    strb r3, [r0, #0x488] @ 02004ea4
    strb r3, [r0, #0x489] @ 02004ea8
    strb r3, [r0, #0x48a] @ 02004eac
    strb r3, [r0, #0x48b] @ 02004eb0
    strb r3, [r0, #0x48c] @ 02004eb4
    strb r3, [r0, #0x48d] @ 02004eb8
    strb r3, [r0, #0x48e] @ 02004ebc
    strb r3, [r0, #0x48f] @ 02004ec0
    strb r3, [r0, #0x490] @ 02004ec4
    strb r3, [r0, #0x491] @ 02004ec8
    strb r3, [r0, #0x492] @ 02004ecc
    strb r3, [r0, #0x493] @ 02004ed0
    strb r3, [r0, #0x47c] @ 02004ed4
    strb r3, [r0, #0x47d] @ 02004ed8
    strb r3, [r0, #0x47e] @ 02004edc
    strb r3, [r0, #0x47f] @ 02004ee0
    strb r3, [r0, #0x480] @ 02004ee4
    strb r3, [r0, #0x481] @ 02004ee8
    strb r3, [r0, #0x482] @ 02004eec
    pop {r4, r5, r6, r7, pc} @ 02004ef0
.L_02004ef4:
@ FUN_02004ef4 at 0x02004ef4
    cmp r2, #0 @ 02004ef4
    push {r4, lr} @ 02004ef8
    mov ip, r0 @ 02004efc
    mov lr, r1 @ 02004f00
    mvn r4, r1 @ 02004f04
    beq .L_02004f4c @ 02004f08
    ldrb r3, [r0, #0x4a4] @ 02004f0c
    ldrb r2, [r0, #0x4a5] @ 02004f10
    ldrb r0, [r0, #0x4a6] @ 02004f14
    orr r3, r3, r2, lsl #8 @ 02004f18
    ldrb r1, [ip, #0x4a7] @ 02004f1c
    orr r3, r3, r0, lsl #16 @ 02004f20
    orr r3, r3, r1, lsl #24 @ 02004f24
    orr r3, lr, r3 @ 02004f28
.L_02004f2c:
    lsr r2, r3, #0x18 @ 02004f2c
    lsr r1, r3, #8 @ 02004f30
    lsr r0, r3, #0x10 @ 02004f34
    strb r2, [ip, #0x4a7] @ 02004f38
    strb r1, [ip, #0x4a5] @ 02004f3c
    strb r0, [ip, #0x4a6] @ 02004f40
    strb r3, [ip, #0x4a4] @ 02004f44
    pop {r4, pc} @ 02004f48
.L_02004f4c:
    ldrb r3, [r0, #0x4a4] @ 02004f4c
    ldrb r2, [r0, #0x4a5] @ 02004f50
    ldrb r0, [r0, #0x4a6] @ 02004f54
    orr r3, r3, r2, lsl #8 @ 02004f58
    ldrb r1, [ip, #0x4a7] @ 02004f5c
    orr r3, r3, r0, lsl #16 @ 02004f60
    orr r3, r3, r1, lsl #24 @ 02004f64
    and r3, r3, r4 @ 02004f68
    b .L_02004f2c @ 02004f6c
.L_02004f70:
@ FUN_02004f70 at 0x02004f70
    push {r4, r5, r6, r7, lr} @ 02004f70
    ldrb r1, [r0, #0x420] @ 02004f74
    ldrb lr, [r0, #0x421] @ 02004f78
    ldrb r4, [r0, #0x425] @ 02004f7c
    ldrb r2, [r0, #0x424] @ 02004f80
    ldrb ip, [r0, #0x401] @ 02004f84
    ldrb r3, [r0, #0x400] @ 02004f88
    ldrb r6, [r0, #0x422] @ 02004f8c
    ldrb r7, [r0, #0x426] @ 02004f90
    ldrb r5, [r0, #0x402] @ 02004f94
    orr r1, r1, lr, lsl #8 @ 02004f98
    orr r3, r3, ip, lsl #8 @ 02004f9c
    ldrb lr, [r0, #0x423] @ 02004fa0
    orr r2, r2, r4, lsl #8 @ 02004fa4
    ldrb ip, [r0, #0x403] @ 02004fa8
    ldrb r4, [r0, #0x427] @ 02004fac
    orr r1, r1, r6, lsl #16 @ 02004fb0
    orr r3, r3, r5, lsl #16 @ 02004fb4
    orr r2, r2, r7, lsl #16 @ 02004fb8
    orr r3, r3, ip, lsl #24 @ 02004fbc
    orr r1, r1, lr, lsl #24 @ 02004fc0
    orr r2, r2, r4, lsl #24 @ 02004fc4
    rsb r1, r3, r1 @ 02004fc8
    rsb r2, r3, r2 @ 02004fcc
    lsr r6, r1, #0x18 @ 02004fd0
    lsr r3, r2, #0x18 @ 02004fd4
    lsr ip, r1, #8 @ 02004fd8
    lsr lr, r1, #0x10 @ 02004fdc
    lsr r4, r2, #8 @ 02004fe0
    lsr r5, r2, #0x10 @ 02004fe4
    strb r3, [r0, #0x427] @ 02004fe8
    strb ip, [r0, #0x421] @ 02004fec
    strb lr, [r0, #0x422] @ 02004ff0
    strb r6, [r0, #0x423] @ 02004ff4
    strb r4, [r0, #0x425] @ 02004ff8
    strb r5, [r0, #0x426] @ 02004ffc
    strb r1, [r0, #0x420] @ 02005000
    strb r2, [r0, #0x424] @ 02005004
    pop {r4, r5, r6, r7, pc} @ 02005008
.L_0200500c:
@ FUN_0200500c at 0x0200500c
    push {r4, r5, r6, r7, lr} @ 0200500c
    ldrb r1, [r0, #0x420] @ 02005010
    ldrb lr, [r0, #0x421] @ 02005014
    ldrb r4, [r0, #0x425] @ 02005018
    ldrb r2, [r0, #0x424] @ 0200501c
    ldrb ip, [r0, #0x401] @ 02005020
    ldrb r3, [r0, #0x400] @ 02005024
    ldrb r6, [r0, #0x422] @ 02005028
    ldrb r7, [r0, #0x426] @ 0200502c
    ldrb r5, [r0, #0x402] @ 02005030
    orr r1, r1, lr, lsl #8 @ 02005034
    orr r3, r3, ip, lsl #8 @ 02005038
    ldrb lr, [r0, #0x423] @ 0200503c
    orr r2, r2, r4, lsl #8 @ 02005040
    ldrb ip, [r0, #0x403] @ 02005044
    ldrb r4, [r0, #0x427] @ 02005048
    orr r1, r1, r6, lsl #16 @ 0200504c
    orr r3, r3, r5, lsl #16 @ 02005050
    orr r2, r2, r7, lsl #16 @ 02005054
    orr r3, r3, ip, lsl #24 @ 02005058
    orr r1, r1, lr, lsl #24 @ 0200505c
    orr r2, r2, r4, lsl #24 @ 02005060
    add r1, r1, r3 @ 02005064
    add r2, r2, r3 @ 02005068
    lsr r6, r1, #0x18 @ 0200506c
    lsr r3, r2, #0x18 @ 02005070
    lsr ip, r1, #8 @ 02005074
    lsr lr, r1, #0x10 @ 02005078
    lsr r4, r2, #8 @ 0200507c
    lsr r5, r2, #0x10 @ 02005080
    strb r3, [r0, #0x427] @ 02005084
    strb ip, [r0, #0x421] @ 02005088
    strb lr, [r0, #0x422] @ 0200508c
    strb r6, [r0, #0x423] @ 02005090
    strb r4, [r0, #0x425] @ 02005094
    strb r5, [r0, #0x426] @ 02005098
    strb r1, [r0, #0x420] @ 0200509c
    strb r2, [r0, #0x424] @ 020050a0
    pop {r4, r5, r6, r7, pc} @ 020050a4
.L_020050a8:
@ FUN_020050a8 at 0x020050a8
    push {r4, lr} @ 020050a8
    mov r1, #0 @ 020050ac
    ldr r2, [pc, #0x10] @ 020050b0
    mov r4, r0 @ 020050b4
    bl .L_02083058 @ 020050b8
    mov r0, r4 @ 020050bc
    pop {r4, lr} @ 020050c0
    b .L_0200df20 @ 020050c4
    .byte 0xc4, 0x04, 0x00, 0x00 @ 020050c8
.L_020050cc:
    cmp r1, #0 @ 020050cc
    movne r3, #1 @ 020050d0
    ldrb r2, [r0, #0x95] @ 020050d4
    strbne r3, [r0, #0xa1] @ 020050d8
    ldrb r3, [r0, #0x94] @ 020050dc
    strbeq r1, [r0, #0xa0] @ 020050e0
    strbeq r1, [r0, #0xa1] @ 020050e4
    strbne r1, [r0, #0xa0] @ 020050e8
    ldrb r1, [r0, #0x96] @ 020050ec
    mov ip, r0 @ 020050f0
    orr r3, r3, r2, lsl #8 @ 020050f4
    ldrb r0, [r0, #0x97] @ 020050f8
    orr r3, r3, r1, lsl #16 @ 020050fc
    orr r3, r3, r0, lsl #24 @ 02005100
    sub r3, r3, #4 @ 02005104
    lsr r2, r3, #0x18 @ 02005108
    lsr r1, r3, #8 @ 0200510c
    lsr r0, r3, #0x10 @ 02005110
    strb r2, [ip, #0x97] @ 02005114
    strb r1, [ip, #0x95] @ 02005118
    strb r0, [ip, #0x96] @ 0200511c
    strb r3, [ip, #0x94] @ 02005120
    bx lr @ 02005124
    .byte 0x51, 0x30, 0xd0, 0xe5, 0x4c, 0x00, 0xd0, 0xe5, 0x03, 0x34, 0xa0, 0xe1, 0xa7, 0x3c, 0x03, 0xe2 @ 02005128
    .byte 0x1f, 0x00, 0x00, 0xe2, 0x00, 0x00, 0x83, 0xe1, 0x1e, 0xff, 0x2f, 0xe1 @ 02005138
.L_02005144:
@ FUN_02005144 at 0x02005144
    ldrb r3, [r0, #0x94] @ 02005144
    ldrb r2, [r0, #0x95] @ 02005148
    ldrb r1, [r0, #0x96] @ 0200514c
    orr r3, r3, r2, lsl #8 @ 02005150
    ldrb r0, [r0, #0x97] @ 02005154
    orr r3, r3, r1, lsl #16 @ 02005158
    orr r0, r3, r0, lsl #24 @ 0200515c
    bx lr @ 02005160
.L_02005164:
@ FUN_02005164 at 0x02005164
    push {r4, r5, lr} @ 02005164
    mov r4, r0 @ 02005168
    ldrb r1, [r0, #0x89] @ 0200516c
    ldrb r3, [r0, #0x88] @ 02005170
    ldrb r2, [r4, #0x45] @ 02005174
    ldrb r0, [r0, #0x44] @ 02005178
    ldrb ip, [r4, #0x8a] @ 0200517c
    ldrb lr, [r4, #0x46] @ 02005180
    orr r3, r3, r1, lsl #8 @ 02005184
    orr r0, r0, r2, lsl #8 @ 02005188
    ldrb r1, [r4, #0x8b] @ 0200518c
    ldrb r2, [r4, #0x47] @ 02005190
    orr r3, r3, ip, lsl #16 @ 02005194
    orr r0, r0, lr, lsl #16 @ 02005198
    orr r3, r3, r1, lsl #24 @ 0200519c
    orr r0, r0, r2, lsl #24 @ 020051a0
    sub sp, sp, #4 @ 020051a4
    blx r3 @ 020051a8
    ldr r3, [pc, #0xb4] @ 020051ac
    ldrb r2, [r0] @ 020051b0
    ldrb r1, [r4, #0x44] @ 020051b4
    str r0, [r3] @ 020051b8
    strb r2, [r4, #0x54] @ 020051bc
    ldrb r3, [r0, #1] @ 020051c0
    ldrb lr, [r4, #0x45] @ 020051c4
    strb r3, [r4, #0x55] @ 020051c8
    ldrb r2, [r0, #2] @ 020051cc
    ldrb r5, [r4, #0x46] @ 020051d0
    strb r2, [r4, #0x56] @ 020051d4
    ldrb ip, [r0, #3] @ 020051d8
    ldrb r2, [r4, #0x47] @ 020051dc
    strb ip, [r4, #0x57] @ 020051e0
    ldr r3, [r0, #4] @ 020051e4
    orr r1, r1, lr, lsl #8 @ 020051e8
    orr r1, r1, r5, lsl #16 @ 020051ec
    orr r1, r1, r2, lsl #24 @ 020051f0
    mvn r3, r3 @ 020051f4
    and r3, r1, r3 @ 020051f8
    lsr r2, r3, #8 @ 020051fc
    lsr ip, r3, #0x10 @ 02005200
    lsr lr, r3, #0x18 @ 02005204
    strb ip, [r4, #0x9e] @ 02005208
    strb r3, [r4, #0x9c] @ 0200520c
    strb r2, [r4, #0x9d] @ 02005210
    strb lr, [r4, #0x9f] @ 02005214
    ldr r2, [r0, #4] @ 02005218
    and r1, r1, r2 @ 0200521c
    lsr r3, r1, #8 @ 02005220
    lsr r2, r1, #0x10 @ 02005224
    lsr ip, r1, #0x18 @ 02005228
    strb r2, [r4, #0x46] @ 0200522c
    strb r1, [r4, #0x44] @ 02005230
    strb r3, [r4, #0x45] @ 02005234
    strb ip, [r4, #0x47] @ 02005238
    ldr r3, [r0] @ 0200523c
    add r1, r1, r3 @ 02005240
    lsr r2, r1, #0x18 @ 02005244
    lsr r3, r1, #8 @ 02005248
    lsr r0, r1, #0x10 @ 0200524c
    strb r2, [r4, #0x47] @ 02005250
    strb r3, [r4, #0x45] @ 02005254
    strb r0, [r4, #0x46] @ 02005258
    strb r1, [r4, #0x44] @ 0200525c
    add sp, sp, #4 @ 02005260
    pop {r4, r5, pc} @ 02005264
    .byte 0x44, 0x90, 0x09, 0x02 @ 02005268
.L_0200526c:
@ FUN_0200526c at 0x0200526c
    push {r4, r5, r6, r7, r8, lr} @ 0200526c
    ldrb r3, [r0, #0x44] @ 02005270
    ldrb lr, [r0, #0x45] @ 02005274
    ldrb ip, [r0, #0x55] @ 02005278
    ldrb r1, [r0, #0x54] @ 0200527c
    ldrb r7, [r0, #0x46] @ 02005280
    ldrb r8, [r0, #0x56] @ 02005284
    ldrb r2, [r0, #0x9c] @ 02005288
    ldrb r6, [r0, #0x9d] @ 0200528c
    orr r3, r3, lr, lsl #8 @ 02005290
    orr r1, r1, ip, lsl #8 @ 02005294
    ldrb lr, [r0, #0x47] @ 02005298
    ldrb r4, [r0, #0x57] @ 0200529c
    ldrb r5, [r0, #0x9e] @ 020052a0
    ldrb ip, [r0, #0x9f] @ 020052a4
    orr r3, r3, r7, lsl #16 @ 020052a8
    orr r1, r1, r8, lsl #16 @ 020052ac
    orr r2, r2, r6, lsl #8 @ 020052b0
    orr r1, r1, r4, lsl #24 @ 020052b4
    orr r3, r3, lr, lsl #24 @ 020052b8
    orr r2, r2, r5, lsl #16 @ 020052bc
    orr r2, r2, ip, lsl #24 @ 020052c0
    rsb r3, r1, r3 @ 020052c4
    orr r3, r3, r2 @ 020052c8
    lsr r1, r3, #0x18 @ 020052cc
    lsr r2, r3, #8 @ 020052d0
    lsr ip, r3, #0x10 @ 020052d4
    strb r1, [r0, #0x47] @ 020052d8
    strb r2, [r0, #0x45] @ 020052dc
    strb ip, [r0, #0x46] @ 020052e0
    strb r3, [r0, #0x44] @ 020052e4
    pop {r4, r5, r6, r7, r8, pc} @ 020052e8
@ FUN_020052ec at 0x020052ec
    ldr r3, [pc, #0x1c8] @ 020052ec
    push {r4, lr} @ 020052f0
    ldr r2, [r3, #8] @ 020052f4
    cmp r2, #0x59 @ 020052f8
    bls .L_02005314 @ 020052fc
    ldrh lr, [r0, #-2] @ 02005300
    sub r4, r0, #2 @ 02005304
    lsr r3, lr, #0xc @ 02005308
    cmp r3, #6 @ 0200530c
    beq .L_0200531c @ 02005310
.L_02005314:
    mov r0, #0 @ 02005314
    pop {r4, pc} @ 02005318
.L_0200531c:
    ldr r3, [pc, #0x19c] @ 0200531c
    cmp lr, r3 @ 02005320
    beq .L_0200547c @ 02005324
    lsl r3, lr, #0x18 @ 02005328
    asr r3, r3, #0x18 @ 0200532c
    bic r2, r3, #1 @ 02005330
    adds r3, r0, r2 @ 02005334
    blo .L_020053b0 @ 02005338
    add ip, r3, #2 @ 0200533c
    cmp r0, ip @ 02005340
    ldrh r2, [r0, r2] @ 02005344
    beq .L_0200547c @ 02005348
.L_0200534c:
    lsr r3, r2, #0xc @ 0200534c
    cmp r3, #0xb @ 02005350
    ldrls pc, [pc, r3, lsl #2] @ 02005354
    b .L_020053b0 @ 02005358
    .byte 0xd8, 0x53, 0x00, 0x02, 0x1c, 0x54, 0x00, 0x02, 0x1c, 0x54, 0x00, 0x02, 0x1c, 0x54, 0x00, 0x02 @ 0200535c
    .byte 0x8c, 0x53, 0x00, 0x02, 0xb0, 0x53, 0x00, 0x02, 0xb0, 0x53, 0x00, 0x02, 0xb0, 0x53, 0x00, 0x02 @ 0200536c
    .byte 0xb0, 0x53, 0x00, 0x02, 0xb0, 0x53, 0x00, 0x02, 0xb0, 0x53, 0x00, 0x02, 0x90, 0x54, 0x00, 0x02 @ 0200537c
    ldr r3, [pc, #0x130] @ 0200538c
    cmp r2, r3 @ 02005390
    beq .L_02005468 @ 02005394
    and r3, r2, #0xff00 @ 02005398
    cmp r3, #0x4a00 @ 0200539c
    bne .L_020053b0 @ 020053a0
    and r3, r2, #0xc0 @ 020053a4
    cmp r3, #0xc0 @ 020053a8
    bne .L_02005424 @ 020053ac
.L_020053b0:
    lsl r3, lr, #0x14 @ 020053b0
    lsr r3, r3, #0x14 @ 020053b4
    orr r3, r3, #0xf000 @ 020053b8
    mov r0, #0 @ 020053bc
.L_020053c0:
    ldr r2, [pc, #0x100] @ 020053c0
    strh r3, [r4] @ 020053c4
    ldr r3, [r2] @ 020053c8
    add r3, r3, r0 @ 020053cc
    str r3, [r2] @ 020053d0
    pop {r4, pc} @ 020053d4
    ldr r3, [pc, #0xec] @ 020053d8
    and r3, r2, r3 @ 020053dc
    cmp r3, #0x100 @ 020053e0
    beq .L_02005424 @ 020053e4
    ldr r1, [pc, #0xe0] @ 020053e8
    and r1, r2, r1 @ 020053ec
    cmp r1, #0x800 @ 020053f0
    beq .L_02005414 @ 020053f4
    and r3, r2, #0xff00 @ 020053f8
    cmp r3, #0xc00 @ 020053fc
    beq .L_020054a0 @ 02005400
    cmp r3, #0x200 @ 02005404
    beq .L_020054a0 @ 02005408
.L_0200540c:
    cmp r1, #0x880 @ 0200540c
    bne .L_020053b0 @ 02005410
.L_02005414:
    add ip, ip, #2 @ 02005414
    b .L_02005424 @ 02005418
    tst r2, #0x180 @ 0200541c
    bne .L_020053b0 @ 02005420
.L_02005424:
    and r3, r2, #0x38 @ 02005424
    cmp r3, #0x20 @ 02005428
    cmpne r3, #0x18 @ 0200542c
    beq .L_020053b0 @ 02005430
    lsr r3, r2, #3 @ 02005434
    and r3, r3, #7 @ 02005438
    cmp r3, #4 @ 0200543c
    and r2, r2, #7 @ 02005440
    movhi r1, #2 @ 02005444
    movls r1, #0 @ 02005448
    cmp r3, #7 @ 0200544c
    cmpeq r2, #1 @ 02005450
    bne .L_02005464 @ 02005454
    cmp r1, #0 @ 02005458
    movne r1, #4 @ 0200545c
    moveq r1, #2 @ 02005460
.L_02005464:
    add ip, r1, ip @ 02005464
.L_02005468:
    cmp r0, ip @ 02005468
    bls .L_020053b0 @ 0200546c
    ldrh r2, [ip], #2 @ 02005470
    cmp r0, ip @ 02005474
    bne .L_0200534c @ 02005478
.L_0200547c:
    lsl r3, lr, #0x14 @ 0200547c
    lsr r3, r3, #0x14 @ 02005480
    orr r3, r3, #0xa000 @ 02005484
    mov r0, #1 @ 02005488
    b .L_020053c0 @ 0200548c
    and r3, r2, #0xf100 @ 02005490
    cmp r3, #0xb000 @ 02005494
    beq .L_02005424 @ 02005498
    b .L_020053b0 @ 0200549c
.L_020054a0:
    and r3, r2, #0xc0 @ 020054a0
    cmp r3, #0xc0 @ 020054a4
    beq .L_0200540c @ 020054a8
    cmp r3, #0x80 @ 020054ac
    add ip, ip, #2 @ 020054b0
    addeq ip, ip, #2 @ 020054b4
    b .L_02005424 @ 020054b8
    .byte 0x00, 0x00, 0x00, 0x0b, 0xfe, 0x60, 0x00, 0x00, 0x71, 0x4e, 0x00, 0x00, 0x3c, 0x90, 0x09, 0x02 @ 020054bc
    .byte 0xc0, 0xf1, 0x00, 0x00, 0xc0, 0xff, 0x00, 0x00 @ 020054cc
.L_020054d4:
@ FUN_020054d4 at 0x020054d4
    push {r4, r5, r6, r7, r8, lr} @ 020054d4
    mov r8, #0 @ 020054d8
    mov r7, r0 @ 020054dc
    mov r1, r8 @ 020054e0
.L_020054e4:
    strb r8, [r7, r1, lsl #2] @ 020054e4
    add r3, r7, r1, lsl #2 @ 020054e8
    add r1, r1, #1 @ 020054ec
    add r2, r3, #0x20 @ 020054f0
    cmp r1, #8 @ 020054f4
    strb r8, [r3, #0x20] @ 020054f8
    strb r8, [r3, #1] @ 020054fc
    strb r8, [r3, #2] @ 02005500
    strb r8, [r3, #3] @ 02005504
    strb r8, [r2, #3] @ 02005508
    strb r8, [r2, #1] @ 0200550c
    strb r8, [r2, #2] @ 02005510
    bne .L_020054e4 @ 02005514
    ldrb r2, [r7, #0x71] @ 02005518
    ldrb r3, [r7, #0x70] @ 0200551c
    ldrb r0, [r7, #0x72] @ 02005520
    orr r3, r3, r2, lsl #8 @ 02005524
    ldrb r1, [r7, #0x73] @ 02005528
    orr r3, r3, r0, lsl #16 @ 0200552c
    orr r3, r3, r1, lsl #24 @ 02005530
    mov r0, #0 @ 02005534
    blx r3 @ 02005538
    ldrb r2, [r7, #0x71] @ 0200553c
    ldrb r3, [r7, #0x70] @ 02005540
    ldrb ip, [r7, #0x72] @ 02005544
    ldrb lr, [r7, #0x73] @ 02005548
    orr r3, r3, r2, lsl #8 @ 0200554c
    lsr r1, r0, #8 @ 02005550
    lsr r2, r0, #0x10 @ 02005554
    and r1, r1, #0xff @ 02005558
    and r2, r2, #0xff @ 0200555c
    orr r3, r3, ip, lsl #16 @ 02005560
    lsr ip, r0, #0x18 @ 02005564
    and r0, r0, #0xff @ 02005568
    orr r3, r3, lr, lsl #24 @ 0200556c
    strb ip, [r7, #0x3f] @ 02005570
    strb ip, [r7, #0x4b] @ 02005574
    strb r0, [r7, #0x3c] @ 02005578
    strb r1, [r7, #0x3d] @ 0200557c
    strb r2, [r7, #0x3e] @ 02005580
    strb r0, [r7, #0x48] @ 02005584
    strb r1, [r7, #0x49] @ 02005588
    strb r2, [r7, #0x4a] @ 0200558c
    mov r0, #4 @ 02005590
    blx r3 @ 02005594
    lsr r3, r0, #8 @ 02005598
    lsr r1, r0, #0x18 @ 0200559c
    lsr r2, r0, #0x10 @ 020055a0
    strb r3, [r7, #0x45] @ 020055a4
    mov r3, #0x27 @ 020055a8
    strb r2, [r7, #0x46] @ 020055ac
    strb r1, [r7, #0x47] @ 020055b0
    strb r3, [r7, #0x51] @ 020055b4
    strb r0, [r7, #0x44] @ 020055b8
    strb r8, [r7, #0x40] @ 020055bc
    strb r8, [r7, #0x41] @ 020055c0
    strb r8, [r7, #0x42] @ 020055c4
    strb r8, [r7, #0x43] @ 020055c8
    strb r8, [r7, #0x4c] @ 020055cc
    strb r8, [r7, #0x4d] @ 020055d0
    strb r8, [r7, #0x4e] @ 020055d4
    strb r8, [r7, #0x4f] @ 020055d8
    strb r8, [r7, #0x50] @ 020055dc
    strb r8, [r7, #0x52] @ 020055e0
    strb r8, [r7, #0x53] @ 020055e4
    strb r8, [r7, #0xa0] @ 020055e8
    strb r8, [r7, #0xa1] @ 020055ec
    strb r8, [r7, #0xa7] @ 020055f0
    strb r8, [r7, #0xa2] @ 020055f4
    strb r8, [r7, #0xa3] @ 020055f8
    strb r8, [r7, #0xa4] @ 020055fc
    strb r8, [r7, #0x94] @ 02005600
    strb r8, [r7, #0x95] @ 02005604
    strb r8, [r7, #0x96] @ 02005608
    strb r8, [r7, #0x97] @ 0200560c
    bl .L_02003ca4 @ 02005610
    lsr r1, r0, #0x18 @ 02005614
    lsr r3, r0, #8 @ 02005618
    lsr r2, r0, #0x10 @ 0200561c
    strb r3, [r7, #0x61] @ 02005620
    strb r2, [r7, #0x62] @ 02005624
    strb r1, [r7, #0x63] @ 02005628
    strb r0, [r7, #0x60] @ 0200562c
    bl .L_02003cb0 @ 02005630
    ldrb r1, [r7, #0x89] @ 02005634
    mov r3, r0 @ 02005638
    ldrb ip, [r7, #0x45] @ 0200563c
    ldrb r2, [r7, #0x88] @ 02005640
    ldrb r0, [r7, #0x44] @ 02005644
    ldrb lr, [r7, #0x8a] @ 02005648
    ldrb r4, [r7, #0x46] @ 0200564c
    orr r2, r2, r1, lsl #8 @ 02005650
    orr r0, r0, ip, lsl #8 @ 02005654
    lsr r1, r3, #8 @ 02005658
    lsr ip, r3, #0x10 @ 0200565c
    ldrb r5, [r7, #0x8b] @ 02005660
    ldrb r6, [r7, #0x47] @ 02005664
    and r1, r1, #0xff @ 02005668
    and ip, ip, #0xff @ 0200566c
    orr r2, r2, lr, lsl #16 @ 02005670
    orr r0, r0, r4, lsl #16 @ 02005674
    lsr r4, r3, #0x18 @ 02005678
    and r3, r3, #0xff @ 0200567c
    strb r3, [r7, #0x58] @ 02005680
    strb r1, [r7, #0x59] @ 02005684
    strb ip, [r7, #0x5a] @ 02005688
    strb r4, [r7, #0x5b] @ 0200568c
    orr r2, r2, r5, lsl #24 @ 02005690
    strb r3, [r7, #0x64] @ 02005694
    strb r1, [r7, #0x65] @ 02005698
    strb ip, [r7, #0x66] @ 0200569c
    strb r4, [r7, #0x67] @ 020056a0
    orr r0, r0, r6, lsl #24 @ 020056a4
    blx r2 @ 020056a8
    ldr r3, [pc, #0xc0] @ 020056ac
    ldrb r2, [r0] @ 020056b0
    ldrb r1, [r7, #0x44] @ 020056b4
    str r0, [r3] @ 020056b8
    strb r2, [r7, #0x54] @ 020056bc
    ldrb r3, [r0, #1] @ 020056c0
    ldrb lr, [r7, #0x45] @ 020056c4
    strb r3, [r7, #0x55] @ 020056c8
    ldrb r2, [r0, #2] @ 020056cc
    ldrb r4, [r7, #0x46] @ 020056d0
    strb r2, [r7, #0x56] @ 020056d4
    ldrb ip, [r0, #3] @ 020056d8
    ldrb r2, [r7, #0x47] @ 020056dc
    strb ip, [r7, #0x57] @ 020056e0
    ldr r3, [r0, #4] @ 020056e4
    orr r1, r1, lr, lsl #8 @ 020056e8
    orr r1, r1, r4, lsl #16 @ 020056ec
    orr r1, r1, r2, lsl #24 @ 020056f0
    mvn r3, r3 @ 020056f4
    and r3, r1, r3 @ 020056f8
    lsr r2, r3, #8 @ 020056fc
    lsr ip, r3, #0x10 @ 02005700
    lsr lr, r3, #0x18 @ 02005704
    strb ip, [r7, #0x9e] @ 02005708
    strb r3, [r7, #0x9c] @ 0200570c
    strb r2, [r7, #0x9d] @ 02005710
    strb lr, [r7, #0x9f] @ 02005714
    ldr r2, [r0, #4] @ 02005718
    and r1, r1, r2 @ 0200571c
    lsr r3, r1, #8 @ 02005720
    lsr r2, r1, #0x10 @ 02005724
    lsr ip, r1, #0x18 @ 02005728
    strb r2, [r7, #0x46] @ 0200572c
    strb r1, [r7, #0x44] @ 02005730
    strb r3, [r7, #0x45] @ 02005734
    strb ip, [r7, #0x47] @ 02005738
    ldr r3, [r0] @ 0200573c
    add r1, r1, r3 @ 02005740
    lsr r2, r1, #0x18 @ 02005744
    lsr r3, r1, #8 @ 02005748
    strb r2, [r7, #0x47] @ 0200574c
    strb r3, [r7, #0x45] @ 02005750
    ldr r2, [pc, #0x1c] @ 02005754
    ldr r3, [pc, #0x1c] @ 02005758
    lsr r0, r1, #0x10 @ 0200575c
    strb r0, [r7, #0x46] @ 02005760
    strb r1, [r7, #0x44] @ 02005764
    str r8, [r3] @ 02005768
    str r8, [r2] @ 0200576c
    pop {r4, r5, r6, r7, r8, pc} @ 02005770
    .byte 0x44, 0x90, 0x09, 0x02, 0x3c, 0x90, 0x09, 0x02, 0x40, 0x90, 0x09, 0x02 @ 02005774
.L_02005780:
@ FUN_02005780 at 0x02005780
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02005780
    cmp r2, #0 @ 02005784
    cmpne r1, #0 @ 02005788
    sub sp, sp, #0x64 @ 0200578c
    mov ip, r3 @ 02005790
    ldr lr, [sp, #0x88] @ 02005794
    ldr r5, [sp, #0x8c] @ 02005798
    ldr r7, [sp, #0x90] @ 0200579c
    ldr r4, [sp, #0x98] @ 020057a0
    ldr r8, [sp, #0x94] @ 020057a4
    ldr r6, [sp, #0x9c] @ 020057a8
    beq .L_0200599c @ 020057ac
    cmp lr, #0 @ 020057b0
    cmpne r3, #0 @ 020057b4
    beq .L_0200599c @ 020057b8
    lsr r3, r4, #0x18 @ 020057bc
    str r3, [sp, #0x5c] @ 020057c0
    lsr r3, r1, #0x18 @ 020057c4
    str r3, [sp, #0x48] @ 020057c8
    lsr r3, ip, #0x18 @ 020057cc
    str r3, [sp, #0x30] @ 020057d0
    lsr r3, r5, #0x18 @ 020057d4
    str r3, [sp, #0x18] @ 020057d8
    lsr r3, r8, #0x18 @ 020057dc
    str r3, [sp] @ 020057e0
    lsr r3, r6, #0x10 @ 020057e4
    str r3, [sp, #0x58] @ 020057e8
    lsr r3, r1, #8 @ 020057ec
    str r3, [sp, #0x50] @ 020057f0
    lsr r3, r1, #0x10 @ 020057f4
    str r3, [sp, #0x4c] @ 020057f8
    lsr r3, r2, #8 @ 020057fc
    str r3, [sp, #0x44] @ 02005800
    lsr r3, r2, #0x10 @ 02005804
    str r3, [sp, #0x40] @ 02005808
    lsr r3, ip, #8 @ 0200580c
    str r3, [sp, #0x38] @ 02005810
    lsr r3, ip, #0x10 @ 02005814
    str r3, [sp, #0x34] @ 02005818
    lsr r3, lr, #8 @ 0200581c
    str r3, [sp, #0x2c] @ 02005820
    lsr r3, lr, #0x10 @ 02005824
    str r3, [sp, #0x28] @ 02005828
    lsr r3, r5, #8 @ 0200582c
    str r3, [sp, #0x20] @ 02005830
    lsr r3, r5, #0x10 @ 02005834
    lsr sl, r6, #0x18 @ 02005838
    str r3, [sp, #0x1c] @ 0200583c
    lsr r3, r7, #8 @ 02005840
    str sl, [sp, #0x54] @ 02005844
    str r3, [sp, #0x14] @ 02005848
    lsr sl, r2, #0x18 @ 0200584c
    lsr r3, r7, #0x10 @ 02005850
    str sl, [sp, #0x3c] @ 02005854
    str r3, [sp, #0x10] @ 02005858
    lsr sl, lr, #0x18 @ 0200585c
    lsr r3, r8, #8 @ 02005860
    str sl, [sp, #0x24] @ 02005864
    str r3, [sp, #8] @ 02005868
    lsr sl, r7, #0x18 @ 0200586c
    lsr r3, r8, #0x10 @ 02005870
    cmp r7, #0 @ 02005874
    cmpne r5, #0 @ 02005878
    str sl, [sp, #0xc] @ 0200587c
    lsr sb, r4, #0x10 @ 02005880
    lsr sl, r4, #8 @ 02005884
    lsr fp, r6, #8 @ 02005888
    str r3, [sp, #4] @ 0200588c
    beq .L_0200599c @ 02005890
    strb sl, [r0, #0x85] @ 02005894
    ldr sl, [sp, #0x5c] @ 02005898
    subs r3, r4, #0 @ 0200589c
    movne r3, #1 @ 020058a0
    strb sl, [r0, #0x87] @ 020058a4
    ldr sl, [sp, #0x58] @ 020058a8
    strb sb, [r0, #0x86] @ 020058ac
    strb sl, [r0, #0x8a] @ 020058b0
    ldr sl, [sp, #0x54] @ 020058b4
    strb fp, [r0, #0x89] @ 020058b8
    strb sl, [r0, #0x8b] @ 020058bc
    ldr sl, [sp, #0x50] @ 020058c0
    strb sl, [r0, #0x69] @ 020058c4
    ldr sl, [sp, #0x4c] @ 020058c8
    strb sl, [r0, #0x6a] @ 020058cc
    ldr sl, [sp, #0x48] @ 020058d0
    strb sl, [r0, #0x6b] @ 020058d4
    ldr sl, [sp, #0x44] @ 020058d8
    strb sl, [r0, #0x6d] @ 020058dc
    ldr sl, [sp, #0x40] @ 020058e0
    strb sl, [r0, #0x6e] @ 020058e4
    ldr sl, [sp, #0x3c] @ 020058e8
    strb sl, [r0, #0x6f] @ 020058ec
    ldr sl, [sp, #0x38] @ 020058f0
    strb sl, [r0, #0x71] @ 020058f4
    ldr sl, [sp, #0x34] @ 020058f8
    strb sl, [r0, #0x72] @ 020058fc
    ldr sl, [sp, #0x30] @ 02005900
    strb sl, [r0, #0x73] @ 02005904
    ldr sl, [sp, #0x2c] @ 02005908
    strb sl, [r0, #0x75] @ 0200590c
    ldr sl, [sp, #0x28] @ 02005910
    strb sl, [r0, #0x76] @ 02005914
    ldr sl, [sp, #0x24] @ 02005918
    strb sl, [r0, #0x77] @ 0200591c
    ldr sl, [sp, #0x20] @ 02005920
    strb sl, [r0, #0x79] @ 02005924
    ldr sl, [sp] @ 02005928
    strb r3, [r0, #0xa5] @ 0200592c
    ldr r3, [sp, #0x1c] @ 02005930
    strb sl, [r0, #0x83] @ 02005934
    strb r3, [r0, #0x7a] @ 02005938
    ldr sl, [sp, #0x14] @ 0200593c
    ldr r3, [sp, #0x18] @ 02005940
    strb sl, [r0, #0x7d] @ 02005944
    strb r3, [r0, #0x7b] @ 02005948
    ldr sl, [sp, #0xc] @ 0200594c
    ldr r3, [sp, #0x10] @ 02005950
    strb sl, [r0, #0x7f] @ 02005954
    strb r3, [r0, #0x7e] @ 02005958
    ldr sl, [sp, #4] @ 0200595c
    ldr r3, [sp, #8] @ 02005960
    strb r4, [r0, #0x84] @ 02005964
    strb r6, [r0, #0x88] @ 02005968
    strb r1, [r0, #0x68] @ 0200596c
    strb r2, [r0, #0x6c] @ 02005970
    strb ip, [r0, #0x70] @ 02005974
    strb lr, [r0, #0x74] @ 02005978
    strb r5, [r0, #0x78] @ 0200597c
    strb r3, [r0, #0x81] @ 02005980
    strb sl, [r0, #0x82] @ 02005984
    strb r7, [r0, #0x7c] @ 02005988
    strb r8, [r0, #0x80] @ 0200598c
    add sp, sp, #0x64 @ 02005990
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02005994
    b .L_02016a70 @ 02005998
.L_0200599c:
    add sp, sp, #0x64 @ 0200599c
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 020059a0
    cmp r0, #8 @ 020059a4
    beq .L_020059d4 @ 020059a8
    cmp r0, #0x11 @ 020059ac
    ldreq r3, [pc, #0x2c] @ 020059b0
    moveq r2, #1 @ 020059b4
    streq r2, [r3] @ 020059b8
    bxeq lr @ 020059bc
    cmp r0, #7 @ 020059c0
    ldreq r3, [pc, #0x1c] @ 020059c4
    moveq r2, #1 @ 020059c8
    streq r2, [r3] @ 020059cc
    bx lr @ 020059d0
.L_020059d4:
    ldr r2, [r1] @ 020059d4
    ldr r3, [pc, #0xc] @ 020059d8
    str r2, [r3] @ 020059dc
    bx lr @ 020059e0
    .byte 0x6c, 0x90, 0x09, 0x02, 0x74, 0x90, 0x09, 0x02, 0x78, 0x90, 0x09, 0x02 @ 020059e4
.L_020059f0:
@ FUN_020059f0 at 0x020059f0
    ldr r3, [pc, #0x9c] @ 020059f0
    mov r1, #0 @ 020059f4
    ldr ip, [pc, #0x98] @ 020059f8
    push {r4, r5, lr} @ 020059fc
    str r1, [r3] @ 02005a00
    ldr r4, [pc, #0x90] @ 02005a04
    ldr lr, [pc, #0x90] @ 02005a08
    ldr r3, [pc, #0x90] @ 02005a0c
    ldr r2, [pc, #0x90] @ 02005a10
    mvn r0, #0x3f @ 02005a14
    str r1, [r3] @ 02005a18
    mov r5, r4 @ 02005a1c
    str r1, [ip, #0x10] @ 02005a20
    str r1, [r2] @ 02005a24
    strb r0, [lr, #0xb4] @ 02005a28
    str r1, [ip] @ 02005a2c
    str r1, [ip, #0xc] @ 02005a30
    str r1, [ip, #4] @ 02005a34
    str r1, [ip, #0x18] @ 02005a38
    strb r0, [r4, #0xb6] @ 02005a3c
    strb r0, [lr, #0xb6] @ 02005a40
    strb r0, [r4, #0xb5] @ 02005a44
    strb r0, [lr, #0xb5] @ 02005a48
    strb r0, [r4, #0xb4] @ 02005a4c
    sub r3, r4, #0x83 @ 02005a50
.L_02005a54:
    strb r1, [r5, #0xb2] @ 02005a54
    sub r5, r5, #1 @ 02005a58
    cmp r5, r3 @ 02005a5c
    strb r1, [lr, #0xb2] @ 02005a60
    sub lr, lr, #1 @ 02005a64
    bne .L_02005a54 @ 02005a68
    add r3, r5, #0x83 @ 02005a6c
    strb r1, [r3, #0x2b] @ 02005a70
    strb r1, [r3, #0x26] @ 02005a74
    strb r1, [r3, #0x25] @ 02005a78
    strb r1, [r3, #0x24] @ 02005a7c
    strb r1, [r3, #0x23] @ 02005a80
    strb r1, [r3, #0x22] @ 02005a84
    strb r1, [r3, #0x21] @ 02005a88
    strb r1, [r3, #0x20] @ 02005a8c
    pop {r4, r5, pc} @ 02005a90
    .byte 0x48, 0x90, 0x09, 0x02, 0x78, 0xb7, 0x3d, 0x02, 0x7c, 0x90, 0x09, 0x02, 0x7c, 0x91, 0x09, 0x02 @ 02005a94
    .byte 0x54, 0x90, 0x09, 0x02, 0x50, 0x90, 0x09, 0x02 @ 02005aa4
.L_02005aac:
@ FUN_02005aac at 0x02005aac
    ldr r0, [pc] @ 02005aac
    bx lr @ 02005ab0
    .byte 0x7c, 0x90, 0x09, 0x02 @ 02005ab4
.L_02005ab8:
@ FUN_02005ab8 at 0x02005ab8
    ldr r0, [pc] @ 02005ab8
    bx lr @ 02005abc
    .byte 0x7c, 0x91, 0x09, 0x02 @ 02005ac0
.L_02005ac4:
@ FUN_02005ac4 at 0x02005ac4
    ldr r0, [pc] @ 02005ac4
    bx lr @ 02005ac8
    .byte 0x7c, 0x93, 0x09, 0x02 @ 02005acc
