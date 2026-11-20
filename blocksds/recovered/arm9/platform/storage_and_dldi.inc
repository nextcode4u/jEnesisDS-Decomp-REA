    .byte 0x00, 0x00, 0xa0, 0xe1, 0x00, 0x00, 0xa0, 0xe1 @ 02072c28
.L_02072c30:
    mov r0, #7 @ 02072c30
    mcr p15, #0, r0, c3, c0, #0 @ 02072c34
    bx lr @ 02072c38
    .byte 0x00, 0x00, 0x00, 0x00, 0x10, 0x0f, 0x13, 0xee, 0x1e, 0xff, 0x2f, 0xe1, 0x00, 0x00, 0xa0, 0xe1 @ 02072c3c
    .byte 0x00, 0x00, 0xa0, 0xe1, 0x00, 0xb5, 0x81, 0xb0, 0x00, 0xf0, 0x4a, 0xf8, 0x01, 0xb0, 0x00, 0xbd @ 02072c4c
@ FUN_02072c5c at 0x02072c5c
.thumb
    push {lr} @ 02072c5c
    sub sp, #4 @ 02072c5e
    bl .L_02072db4 @ 02072c60
    add sp, #4 @ 02072c64
    pop {pc} @ 02072c66
@ FUN_02072c68 at 0x02072c68
    push {lr} @ 02072c68
    sub sp, #4 @ 02072c6a
    bl .L_02072e14 @ 02072c6c
    add sp, #4 @ 02072c70
    pop {pc} @ 02072c72
@ FUN_02072c74 at 0x02072c74
    push {lr} @ 02072c74
    sub sp, #4 @ 02072c76
    bl .L_020730f0 @ 02072c78
    add sp, #4 @ 02072c7c
    pop {pc} @ 02072c7e
@ FUN_02072c80 at 0x02072c80
    push {lr} @ 02072c80
    sub sp, #4 @ 02072c82
    bl .L_02073150 @ 02072c84
    add sp, #4 @ 02072c88
    pop {pc} @ 02072c8a
.L_02072c8c:
@ FUN_02072c8c at 0x02072c8c
    push {r4, r5, r6, lr} @ 02072c8c
    adds r4, r0, #0 @ 02072c8e
    adds r6, r1, #0 @ 02072c90
    movs r0, #1 @ 02072c92
    adds r1, r4, #0 @ 02072c94
    bl .L_02073150 @ 02072c96
    adds r1, r4, #0 @ 02072c9a
    adds r5, r0, #0 @ 02072c9c
    movs r0, #2 @ 02072c9e
    bl .L_02073150 @ 02072ca0
    cmp r5, #0 @ 02072ca4
    bne .L_02072ccc @ 02072ca6
    cmp r0, #0 @ 02072ca8
    bne .L_02072cae @ 02072caa
.L_02072cac:
    pop {r4, r5, r6, pc} @ 02072cac
.L_02072cae:
    movs r0, #2 @ 02072cae
    bl .L_02072cec @ 02072cb0
.L_02072cb4:
    ldr r0, [pc, #0x1c] @ 02072cb4
    bl .L_02085940 @ 02072cb6
    cmp r6, #0 @ 02072cba
    bne .L_02072cc2 @ 02072cbc
    movs r0, #1 @ 02072cbe
    b .L_02072cac @ 02072cc0
.L_02072cc2:
    ldr r0, [pc, #0x14] @ 02072cc2
    bl .L_02085948 @ 02072cc4
    movs r0, #1 @ 02072cc8
    b .L_02072cac @ 02072cca
.L_02072ccc:
    movs r0, #1 @ 02072ccc
    bl .L_02072cec @ 02072cce
    b .L_02072cb4 @ 02072cd2
    .byte 0xa0, 0xec, 0x08, 0x02, 0xf8, 0xf2, 0x08, 0x02 @ 02072cd4
@ FUN_02072cdc at 0x02072cdc
    push {lr} @ 02072cdc
    sub sp, #4 @ 02072cde
    movs r0, #8 @ 02072ce0
    movs r1, #1 @ 02072ce2
    bl .L_02072c8c @ 02072ce4
    add sp, #4 @ 02072ce8
    pop {pc} @ 02072cea
.L_02072cec:
@ FUN_02072cec at 0x02072cec
    push {lr} @ 02072cec
    subs r3, r0, #1 @ 02072cee
    lsls r3, r3, #0x18 @ 02072cf0
    lsrs r3, r3, #0x18 @ 02072cf2
    cmp r3, #2 @ 02072cf4
    bhi .L_02072d08 @ 02072cf6
    ldr r2, [pc, #0x10] @ 02072cf8
    lsls r3, r0, #2 @ 02072cfa
    ldr r0, [r3, r2] @ 02072cfc
    cmp r0, #0 @ 02072cfe
    beq .L_02072d08 @ 02072d00
    str r0, [r2] @ 02072d02
    movs r0, #1 @ 02072d04
.L_02072d06:
    pop {pc} @ 02072d06
.L_02072d08:
    movs r0, #0 @ 02072d08
    b .L_02072d06 @ 02072d0a
    .byte 0x5c, 0x4c, 0x0b, 0x02 @ 02072d0c
.L_02072d10:
@ FUN_02072d10 at 0x02072d10
    push {lr} @ 02072d10
    cmp r0, #0 @ 02072d12
    beq .L_02072d2a @ 02072d14
    ldr r2, [pc, #0x1c] @ 02072d16
    ldr r3, [r2, #4] @ 02072d18
    cmp r0, r3 @ 02072d1a
    beq .L_02072d2e @ 02072d1c
    ldr r3, [r2, #8] @ 02072d1e
    cmp r0, r3 @ 02072d20
    beq .L_02072d2e @ 02072d22
    ldr r3, [r2, #0xc] @ 02072d24
    cmp r0, r3 @ 02072d26
    beq .L_02072d2e @ 02072d28
.L_02072d2a:
    movs r0, #0 @ 02072d2a
.L_02072d2c:
    pop {pc} @ 02072d2c
.L_02072d2e:
    str r0, [r2] @ 02072d2e
    movs r0, #1 @ 02072d30
    b .L_02072d2c @ 02072d32
    .byte 0x5c, 0x4c, 0x0b, 0x02 @ 02072d34
.L_02072d38:
@ FUN_02072d38 at 0x02072d38
    push {r4, r5, r6, lr} @ 02072d38
    ldr r3, [pc, #0x54] @ 02072d3a
    adds r5, r0, #0 @ 02072d3c
    ldr r4, [r3] @ 02072d3e
    adds r0, r4, #0 @ 02072d40
    bl .L_02085950 @ 02072d42
    movs r1, #0x3a @ 02072d46
    adds r6, r0, #0 @ 02072d48
    adds r0, r5, #0 @ 02072d4a
    bl .L_02085958 @ 02072d4c
    cmp r0, #0 @ 02072d50
    bne .L_02072d5e @ 02072d52
.L_02072d54:
    movs r3, #0 @ 02072d54
.L_02072d56:
    ldr r2, [pc, #0x3c] @ 02072d56
    lsls r3, r3, #2 @ 02072d58
    ldr r0, [r3, r2] @ 02072d5a
.L_02072d5c:
    pop {r4, r5, r6, pc} @ 02072d5c
.L_02072d5e:
    adds r0, r4, #0 @ 02072d5e
    adds r1, r5, #0 @ 02072d60
    adds r2, r6, #0 @ 02072d62
    bl .L_02085960 @ 02072d64
    cmp r0, #0 @ 02072d68
    bne .L_02072d8c @ 02072d6a
    ldrb r4, [r5, r6] @ 02072d6c
    cmp r4, #0x3a @ 02072d6e
    beq .L_02072d54 @ 02072d70
    ldr r3, [pc, #0x24] @ 02072d72
    ldr r3, [r3] @ 02072d74
    ldrb r3, [r4, r3] @ 02072d76
    lsls r2, r3, #0x1d @ 02072d78
    bpl .L_02072d8c @ 02072d7a
    adds r3, r5, r6 @ 02072d7c
    ldrb r3, [r3, #1] @ 02072d7e
    cmp r3, #0x3a @ 02072d80
    bne .L_02072d8c @ 02072d82
    adds r3, r4, #0 @ 02072d84
    subs r3, #0x30 @ 02072d86
    cmp r3, #3 @ 02072d88
    bls .L_02072d56 @ 02072d8a
.L_02072d8c:
    movs r0, #0 @ 02072d8c
    b .L_02072d5c @ 02072d8e
    .byte 0x60, 0xf3, 0x08, 0x02, 0x5c, 0x4c, 0x0b, 0x02, 0x94, 0xf3, 0x08, 0x02 @ 02072d90
.L_02072d9c:
@ FUN_02072d9c at 0x02072d9c
    push {r4, lr} @ 02072d9c
    adds r4, r0, #0 @ 02072d9e
    ldr r0, [r0, #4] @ 02072da0
    bl .L_0207d0a8 @ 02072da2
    ldr r3, [r4] @ 02072da6
    ldr r3, [r3, #0x1c] @ 02072da8
    blx r3 @ 02072daa
    adds r0, r4, #0 @ 02072dac
    bl .L_02085968 @ 02072dae
    pop {r4, pc} @ 02072db2
.L_02072db4:
@ FUN_02072db4 at 0x02072db4
    push {r4, lr} @ 02072db4
    ldr r2, [pc, #0x58] @ 02072db6
    lsls r0, r0, #2 @ 02072db8
    ldr r4, [r0, r2] @ 02072dba
    cmp r4, #0 @ 02072dbc
    beq .L_02072e0c @ 02072dbe
    ldr r3, [r2] @ 02072dc0
    cmp r4, r3 @ 02072dc2
    beq .L_02072de8 @ 02072dc4
    ldr r3, [r2, #4] @ 02072dc6
    cmp r4, r3 @ 02072dc8
    beq .L_02072df2 @ 02072dca
.L_02072dcc:
    ldr r3, [r2, #8] @ 02072dcc
    cmp r4, r3 @ 02072dce
    beq .L_02072dfc @ 02072dd0
.L_02072dd2:
    ldr r3, [r2, #0xc] @ 02072dd2
    cmp r4, r3 @ 02072dd4
    beq .L_02072e06 @ 02072dd6
.L_02072dd8:
    ldr r0, [r4, #4] @ 02072dd8
    bl .L_0207cf90 @ 02072dda
    adds r0, r4, #0 @ 02072dde
    bl .L_02072d9c @ 02072de0
    movs r0, #1 @ 02072de4
.L_02072de6:
    pop {r4, pc} @ 02072de6
.L_02072de8:
    movs r3, #0 @ 02072de8
    str r3, [r2] @ 02072dea
    ldr r3, [r2, #4] @ 02072dec
    cmp r4, r3 @ 02072dee
    bne .L_02072dcc @ 02072df0
.L_02072df2:
    movs r3, #0 @ 02072df2
    str r3, [r2, #4] @ 02072df4
    ldr r3, [r2, #8] @ 02072df6
    cmp r4, r3 @ 02072df8
    bne .L_02072dd2 @ 02072dfa
.L_02072dfc:
    movs r3, #0 @ 02072dfc
    str r3, [r2, #8] @ 02072dfe
    ldr r3, [r2, #0xc] @ 02072e00
    cmp r4, r3 @ 02072e02
    bne .L_02072dd8 @ 02072e04
.L_02072e06:
    movs r3, #0 @ 02072e06
    str r3, [r2, #0xc] @ 02072e08
    b .L_02072dd8 @ 02072e0a
.L_02072e0c:
    movs r0, #0 @ 02072e0c
    b .L_02072de6 @ 02072e0e
    .byte 0x5c, 0x4c, 0x0b, 0x02 @ 02072e10
.L_02072e14:
@ FUN_02072e14 at 0x02072e14
    push {lr} @ 02072e14
    ldr r2, [pc, #0x54] @ 02072e16
    lsls r0, r0, #2 @ 02072e18
    ldr r0, [r0, r2] @ 02072e1a
    sub sp, #4 @ 02072e1c
    cmp r0, #0 @ 02072e1e
    beq .L_02072e4a @ 02072e20
    ldr r1, [r0, #0x40] @ 02072e22
    cmp r1, #0 @ 02072e24
    bne .L_02072e4a @ 02072e26
    ldr r3, [r2] @ 02072e28
    cmp r0, r3 @ 02072e2a
    beq .L_02072e52 @ 02072e2c
    ldr r3, [r2, #4] @ 02072e2e
    cmp r0, r3 @ 02072e30
    beq .L_02072e5a @ 02072e32
.L_02072e34:
    ldr r3, [r2, #8] @ 02072e34
    cmp r0, r3 @ 02072e36
    beq .L_02072e62 @ 02072e38
.L_02072e3a:
    ldr r3, [r2, #0xc] @ 02072e3a
    cmp r0, r3 @ 02072e3c
    beq .L_02072e4e @ 02072e3e
.L_02072e40:
    bl .L_02072d9c @ 02072e40
    movs r0, #1 @ 02072e44
.L_02072e46:
    add sp, #4 @ 02072e46
    pop {pc} @ 02072e48
.L_02072e4a:
    movs r0, #0 @ 02072e4a
    b .L_02072e46 @ 02072e4c
.L_02072e4e:
    str r1, [r2, #0xc] @ 02072e4e
    b .L_02072e40 @ 02072e50
.L_02072e52:
    ldr r3, [r2, #4] @ 02072e52
    str r1, [r2] @ 02072e54
    cmp r0, r3 @ 02072e56
    bne .L_02072e34 @ 02072e58
.L_02072e5a:
    ldr r3, [r2, #8] @ 02072e5a
    str r1, [r2, #4] @ 02072e5c
    cmp r0, r3 @ 02072e5e
    bne .L_02072e3a @ 02072e60
.L_02072e62:
    ldr r3, [r2, #0xc] @ 02072e62
    str r1, [r2, #8] @ 02072e64
    cmp r0, r3 @ 02072e66
    bne .L_02072e40 @ 02072e68
    b .L_02072e4e @ 02072e6a
    .byte 0x5c, 0x4c, 0x0b, 0x02 @ 02072e6c
.L_02072e70:
@ FUN_02072e70 at 0x02072e70
    push {r4, r5, r6, r7, lr} @ 02072e70
    mov r7, sl @ 02072e72
    mov r6, sb @ 02072e74
    mov r5, r8 @ 02072e76
    push {r5, r6, r7} @ 02072e78
    ldr r4, [pc, #0x264] @ 02072e7a
    movs r2, #0x80 @ 02072e7c
    add sp, r4 @ 02072e7e
    adds r7, r0, #0 @ 02072e80
    lsls r2, r2, #2 @ 02072e82
    adds r4, r1, #0 @ 02072e84
    mov r0, sp @ 02072e86
    movs r1, #0 @ 02072e88
    bl .L_02085970 @ 02072e8a
    ldr r3, [r7, #0x10] @ 02072e8e
    movs r0, #0 @ 02072e90
    movs r1, #1 @ 02072e92
    mov r2, sp @ 02072e94
    blx r3 @ 02072e96
    lsls r0, r0, #0x18 @ 02072e98
    mov r6, sp @ 02072e9a
    cmp r0, #0 @ 02072e9c
    bne .L_02072eb4 @ 02072e9e
.L_02072ea0:
    movs r5, #0 @ 02072ea0
.L_02072ea2:
    movs r3, #0x80 @ 02072ea2
    lsls r3, r3, #2 @ 02072ea4
    adds r0, r5, #0 @ 02072ea6
    add sp, r3 @ 02072ea8
    pop {r2, r3, r4} @ 02072eaa
    mov r8, r2 @ 02072eac
    mov sb, r3 @ 02072eae
    mov sl, r4 @ 02072eb0
    pop {r4, r5, r6, r7, pc} @ 02072eb2
.L_02072eb4:
    movs r3, #0xff @ 02072eb4
    lsls r3, r3, #1 @ 02072eb6
    ldrb r3, [r6, r3] @ 02072eb8
    cmp r3, #0x55 @ 02072eba
    bne .L_02072ea0 @ 02072ebc
    ldr r3, [pc, #0x224] @ 02072ebe
    ldrb r3, [r6, r3] @ 02072ec0
    cmp r3, #0xaa @ 02072ec2
    bne .L_02072ea0 @ 02072ec4
    movs r3, #0x36 @ 02072ec6
    ldrb r3, [r6, r3] @ 02072ec8
    cmp r3, #0x46 @ 02072eca
    bne .L_02072ed0 @ 02072ecc
    b .L_02073048 @ 02072ece
.L_02072ed0:
    movs r3, #0x52 @ 02072ed0
    ldrb r3, [r6, r3] @ 02072ed2
    cmp r3, #0x46 @ 02072ed4
    bne .L_02072eda @ 02072ed6
    b .L_02073032 @ 02072ed8
.L_02072eda:
    movs r1, #0xdf @ 02072eda
    lsls r1, r1, #1 @ 02072edc
.L_02072ede:
    ldrb r3, [r1, r6] @ 02072ede
    cmp r3, #0x80 @ 02072ee0
    bne .L_02072ee6 @ 02072ee2
    b .L_0207309a @ 02072ee4
.L_02072ee6:
    movs r3, #0xff @ 02072ee6
    adds r1, #0x10 @ 02072ee8
    lsls r3, r3, #1 @ 02072eea
    cmp r1, r3 @ 02072eec
    bne .L_02072ede @ 02072eee
    movs r3, #0xe1 @ 02072ef0
    lsls r3, r3, #1 @ 02072ef2
    ldrb r3, [r6, r3] @ 02072ef4
    cmp r3, #0 @ 02072ef6
    beq .L_02072efc @ 02072ef8
    b .L_02073094 @ 02072efa
.L_02072efc:
    movs r3, #0xe9 @ 02072efc
    lsls r3, r3, #1 @ 02072efe
    ldrb r3, [r6, r3] @ 02072f00
    cmp r3, #0 @ 02072f02
    beq .L_02072f08 @ 02072f04
    b .L_0207307e @ 02072f06
.L_02072f08:
    movs r3, #0xf1 @ 02072f08
    lsls r3, r3, #1 @ 02072f0a
    ldrb r3, [r6, r3] @ 02072f0c
    cmp r3, #0 @ 02072f0e
    beq .L_02072f14 @ 02072f10
    b .L_0207305e @ 02072f12
.L_02072f14:
    movs r3, #0xf9 @ 02072f14
    lsls r3, r3, #1 @ 02072f16
    ldrb r3, [r6, r3] @ 02072f18
    cmp r3, #0 @ 02072f1a
    beq .L_02072f20 @ 02072f1c
    b .L_02073084 @ 02072f1e
.L_02072f20:
    movs r2, #0 @ 02072f20
    mov sl, r2 @ 02072f22
.L_02072f24:
    ldr r3, [r7, #0x10] @ 02072f24
    mov r0, sl @ 02072f26
    movs r1, #1 @ 02072f28
    adds r2, r6, #0 @ 02072f2a
    blx r3 @ 02072f2c
    lsls r0, r0, #0x18 @ 02072f2e
    cmp r0, #0 @ 02072f30
    beq .L_02072ea0 @ 02072f32
    movs r0, #0x44 @ 02072f34
    bl .L_02085978 @ 02072f36
    mov r8, r0 @ 02072f3a
    cmp r0, #0 @ 02072f3c
    beq .L_02072ea0 @ 02072f3e
    mov r5, r8 @ 02072f40
    str r7, [r5] @ 02072f42
    ldrb r3, [r6, #0x17] @ 02072f44
    ldrb r2, [r6, #0x16] @ 02072f46
    lsls r3, r3, #8 @ 02072f48
    orrs r2, r3 @ 02072f4a
    str r2, [r5, #0x30] @ 02072f4c
    cmp r2, #0 @ 02072f4e
    bne .L_02072f70 @ 02072f50
    movs r3, #0x24 @ 02072f52
    ldrb r1, [r6, r3] @ 02072f54
    movs r3, #0x25 @ 02072f56
    ldrb r3, [r6, r3] @ 02072f58
    lsls r3, r3, #8 @ 02072f5a
    orrs r1, r3 @ 02072f5c
    movs r3, #0x26 @ 02072f5e
    ldrb r2, [r6, r3] @ 02072f60
    movs r3, #0x27 @ 02072f62
    ldrb r3, [r6, r3] @ 02072f64
    lsls r2, r2, #0x10 @ 02072f66
    lsls r3, r3, #0x18 @ 02072f68
    orrs r2, r3 @ 02072f6a
    orrs r1, r2 @ 02072f6c
    str r1, [r5, #0x30] @ 02072f6e
.L_02072f70:
    ldrb r3, [r6, #0x14] @ 02072f70
    ldrb r2, [r6, #0x13] @ 02072f72
    lsls r3, r3, #8 @ 02072f74
    orrs r2, r3 @ 02072f76
    str r2, [r5, #0x18] @ 02072f78
    cmp r2, #0 @ 02072f7a
    bne .L_02072f9c @ 02072f7c
    movs r3, #0x20 @ 02072f7e
    ldrb r1, [r6, r3] @ 02072f80
    movs r3, #0x21 @ 02072f82
    ldrb r3, [r6, r3] @ 02072f84
    lsls r3, r3, #8 @ 02072f86
    orrs r1, r3 @ 02072f88
    movs r3, #0x22 @ 02072f8a
    ldrb r2, [r6, r3] @ 02072f8c
    movs r3, #0x23 @ 02072f8e
    ldrb r3, [r6, r3] @ 02072f90
    lsls r2, r2, #0x10 @ 02072f92
    lsls r3, r3, #0x18 @ 02072f94
    orrs r2, r3 @ 02072f96
    orrs r1, r2 @ 02072f98
    str r1, [r5, #0x18] @ 02072f9a
.L_02072f9c:
    movs r3, #0x80 @ 02072f9c
    lsls r3, r3, #2 @ 02072f9e
    str r3, [r5, #0x20] @ 02072fa0
    ldrb r3, [r6, #0xc] @ 02072fa2
    ldrb r2, [r6, #0xb] @ 02072fa4
    ldrb r1, [r6, #0xd] @ 02072fa6
    lsls r3, r3, #8 @ 02072fa8
    orrs r2, r3 @ 02072faa
    muls r1, r2, r1 @ 02072fac
    cmp r1, #0 @ 02072fae
    bge .L_02072fb6 @ 02072fb0
    ldr r3, [pc, #0x130] @ 02072fb2
    adds r1, r1, r3 @ 02072fb4
.L_02072fb6:
    asrs r1, r1, #9 @ 02072fb6
    lsls r3, r1, #9 @ 02072fb8
    str r1, [r5, #0x24] @ 02072fba
    str r3, [r5, #0x28] @ 02072fbc
    ldrb r3, [r6, #0xf] @ 02072fbe
    ldrb r2, [r6, #0xe] @ 02072fc0
    lsls r3, r3, #8 @ 02072fc2
    orrs r2, r3 @ 02072fc4
    add sl, r2 @ 02072fc6
    mov r2, sl @ 02072fc8
    str r2, [r5, #0x2c] @ 02072fca
    ldrb r3, [r6, #0x10] @ 02072fcc
    ldr r2, [r5, #0x30] @ 02072fce
    mov sb, r2 @ 02072fd0
    adds r2, r3, #0 @ 02072fd2
    mov r3, sb @ 02072fd4
    muls r3, r2, r3 @ 02072fd6
    mov r2, sl @ 02072fd8
    adds r0, r2, r3 @ 02072fda
    str r0, [r5, #0x10] @ 02072fdc
    ldrb r3, [r6, #0x12] @ 02072fde
    ldrb r2, [r6, #0x11] @ 02072fe0
    lsls r3, r3, #8 @ 02072fe2
    orrs r2, r3 @ 02072fe4
    lsrs r2, r2, #4 @ 02072fe6
    adds r3, r0, r2 @ 02072fe8
    ldr r0, [r5, #0x18] @ 02072fea
    str r3, [r5, #0x1c] @ 02072fec
    subs r0, r0, r3 @ 02072fee
    lsls r3, r0, #9 @ 02072ff0
    str r3, [r5, #0xc] @ 02072ff2
    bl .L_02085980 @ 02072ff4
    ldr r3, [pc, #0xec] @ 02072ff8
    movs r2, #2 @ 02072ffa
    str r0, [r5, #0x34] @ 02072ffc
    str r2, [r5, #0x38] @ 02072ffe
    cmp r0, r3 @ 02073000
    bhi .L_0207308a @ 02073002
    movs r3, #1 @ 02073004
    strb r3, [r5, #9] @ 02073006
.L_02073008:
    movs r3, #0 @ 02073008
    mov r2, r8 @ 0207300a
    str r3, [r2, #0x14] @ 0207300c
.L_0207300e:
    mov r3, r8 @ 0207300e
    ldr r1, [r3] @ 02073010
    adds r0, r4, #0 @ 02073012
    bl .L_0207d0c4 @ 02073014
    mov r2, r8 @ 02073018
    ldr r3, [r2, #0x14] @ 0207301a
    str r0, [r2, #4] @ 0207301c
    str r3, [r2, #0x3c] @ 0207301e
    ldr r2, [r7, #4] @ 02073020
    movs r3, #1 @ 02073022
    lsrs r2, r2, #1 @ 02073024
    bics r3, r2 @ 02073026
    mov r2, r8 @ 02073028
    strb r3, [r2, #8] @ 0207302a
    movs r3, #0 @ 0207302c
    str r3, [r2, #0x40] @ 0207302e
    b .L_02072ea2 @ 02073030
.L_02073032:
    movs r3, #0x53 @ 02073032
    ldrb r3, [r6, r3] @ 02073034
    cmp r3, #0x41 @ 02073036
    beq .L_0207303c @ 02073038
    b .L_02072eda @ 0207303a
.L_0207303c:
    movs r3, #0x54 @ 0207303c
    ldrb r3, [r6, r3] @ 0207303e
    cmp r3, #0x54 @ 02073040
    beq .L_02073046 @ 02073042
    b .L_02072eda @ 02073044
.L_02073046:
    b .L_02072f20 @ 02073046
.L_02073048:
    movs r3, #0x37 @ 02073048
    ldrb r3, [r6, r3] @ 0207304a
    cmp r3, #0x41 @ 0207304c
    beq .L_02073052 @ 0207304e
    b .L_02072ed0 @ 02073050
.L_02073052:
    movs r3, #0x38 @ 02073052
    ldrb r3, [r6, r3] @ 02073054
    cmp r3, #0x54 @ 02073056
    beq .L_0207305c @ 02073058
    b .L_02072ed0 @ 0207305a
.L_0207305c:
    b .L_02072f20 @ 0207305c
.L_0207305e:
    movs r1, #0xef @ 0207305e
    lsls r1, r1, #1 @ 02073060
.L_02073062:
    adds r1, #8 @ 02073062
    adds r1, r6, r1 @ 02073064
    ldrb r3, [r1, #1] @ 02073066
    ldrb r0, [r1] @ 02073068
    lsls r3, r3, #8 @ 0207306a
    orrs r0, r3 @ 0207306c
    ldrb r2, [r1, #2] @ 0207306e
    ldrb r3, [r1, #3] @ 02073070
    lsls r2, r2, #0x10 @ 02073072
    lsls r3, r3, #0x18 @ 02073074
    orrs r2, r3 @ 02073076
    orrs r0, r2 @ 02073078
    mov sl, r0 @ 0207307a
    b .L_02072f24 @ 0207307c
.L_0207307e:
    movs r1, #0xe7 @ 0207307e
    lsls r1, r1, #1 @ 02073080
    b .L_02073062 @ 02073082
.L_02073084:
    movs r1, #0xf7 @ 02073084
    lsls r1, r1, #1 @ 02073086
    b .L_02073062 @ 02073088
.L_0207308a:
    ldr r3, [pc, #0x60] @ 0207308a
    cmp r0, r3 @ 0207308c
    bhi .L_020730a4 @ 0207308e
    strb r2, [r5, #9] @ 02073090
    b .L_02073008 @ 02073092
.L_02073094:
    movs r1, #0xdf @ 02073094
    lsls r1, r1, #1 @ 02073096
    b .L_02073062 @ 02073098
.L_0207309a:
    movs r3, #0xff @ 0207309a
    lsls r3, r3, #1 @ 0207309c
    cmp r1, r3 @ 0207309e
    bne .L_02073062 @ 020730a0
    b .L_02072f20 @ 020730a2
.L_020730a4:
    movs r3, #3 @ 020730a4
    strb r3, [r5, #9] @ 020730a6
    movs r3, #0x2c @ 020730a8
    ldrb r1, [r6, r3] @ 020730aa
    movs r3, #0x2d @ 020730ac
    ldrb r3, [r6, r3] @ 020730ae
    lsls r3, r3, #8 @ 020730b0
    orrs r1, r3 @ 020730b2
    movs r3, #0x2e @ 020730b4
    ldrb r2, [r6, r3] @ 020730b6
    movs r3, #0x2f @ 020730b8
    ldrb r3, [r6, r3] @ 020730ba
    lsls r2, r2, #0x10 @ 020730bc
    lsls r3, r3, #0x18 @ 020730be
    orrs r2, r3 @ 020730c0
    orrs r1, r2 @ 020730c2
    movs r3, #0x28 @ 020730c4
    str r1, [r5, #0x14] @ 020730c6
    ldrb r0, [r6, r3] @ 020730c8
    lsls r3, r0, #0x18 @ 020730ca
    cmp r3, #0 @ 020730cc
    blt .L_0207300e @ 020730ce
    movs r3, #0xf @ 020730d0
    ands r3, r0 @ 020730d2
    adds r2, r3, #0 @ 020730d4
    mov r3, sb @ 020730d6
    muls r3, r2, r3 @ 020730d8
    add r3, sl @ 020730da
    str r3, [r5, #0x2c] @ 020730dc
    b .L_0207300e @ 020730de
    .byte 0x00, 0xfe, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0xf4, 0x0f, 0x00, 0x00, 0xf4, 0xff, 0x00, 0x00 @ 020730e0
.L_020730f0:
@ FUN_020730f0 at 0x020730f0
    push {r4, r5, r6, lr} @ 020730f0
    adds r6, r1, #0 @ 020730f2
    ldr r1, [pc, #0x54] @ 020730f4
    ldr r3, [r1, #0xc] @ 020730f6
    cmp r3, #0 @ 020730f8
    beq .L_02073100 @ 020730fa
.L_020730fc:
    movs r0, #0 @ 020730fc
.L_020730fe:
    pop {r4, r5, r6, pc} @ 020730fe
.L_02073100:
    cmp r0, #0 @ 02073100
    beq .L_020730fc @ 02073102
    adds r5, r1, #0 @ 02073104
    adds r4, r1, #0 @ 02073106
    adds r5, #0x10 @ 02073108
.L_0207310a:
    ldr r2, [r4] @ 0207310a
    cmp r2, #0 @ 0207310c
    beq .L_02073116 @ 0207310e
    ldr r3, [r2] @ 02073110
    cmp r0, r3 @ 02073112
    beq .L_02073144 @ 02073114
.L_02073116:
    adds r4, #4 @ 02073116
    cmp r4, r5 @ 02073118
    bne .L_0207310a @ 0207311a
    adds r1, r6, #0 @ 0207311c
    bl .L_02072e70 @ 0207311e
    adds r3, r4, #0 @ 02073122
    subs r3, #0x10 @ 02073124
    str r0, [r3, #0xc] @ 02073126
    movs r2, #0 @ 02073128
    cmp r0, #0 @ 0207312a
    beq .L_02073138 @ 0207312c
    movs r3, #1 @ 0207312e
    eors r3, r2 @ 02073130
    lsls r3, r3, #0x18 @ 02073132
    lsrs r0, r3, #0x18 @ 02073134
    b .L_020730fe @ 02073136
.L_02073138:
    movs r2, #1 @ 02073138
    movs r3, #1 @ 0207313a
    eors r3, r2 @ 0207313c
    lsls r3, r3, #0x18 @ 0207313e
    lsrs r0, r3, #0x18 @ 02073140
    b .L_020730fe @ 02073142
.L_02073144:
    movs r0, #1 @ 02073144
    str r2, [r1, #0xc] @ 02073146
    b .L_020730fe @ 02073148
    .byte 0x00, 0x00, 0x5c, 0x4c, 0x0b, 0x02 @ 0207314a
.L_02073150:
@ FUN_02073150 at 0x02073150
    push {r4, r5, r6, r7, lr} @ 02073150
    ldr r5, [pc, #0x64] @ 02073152
    lsls r6, r0, #2 @ 02073154
    ldr r3, [r6, r5] @ 02073156
    sub sp, #4 @ 02073158
    adds r7, r1, #0 @ 0207315a
    cmp r3, #0 @ 0207315c
    beq .L_02073166 @ 0207315e
.L_02073160:
    movs r0, #0 @ 02073160
.L_02073162:
    add sp, #4 @ 02073162
    pop {r4, r5, r6, r7, pc} @ 02073164
.L_02073166:
    cmp r0, #1 @ 02073166
    beq .L_020731ac @ 02073168
    cmp r0, #2 @ 0207316a
    bne .L_02073160 @ 0207316c
    bl .L_020731bc @ 0207316e
.L_02073172:
    cmp r0, #0 @ 02073172
    beq .L_02073160 @ 02073174
    adds r1, r5, #0 @ 02073176
    adds r4, r5, #0 @ 02073178
    adds r1, #0x10 @ 0207317a
.L_0207317c:
    ldr r2, [r4] @ 0207317c
    cmp r2, #0 @ 0207317e
    beq .L_02073188 @ 02073180
    ldr r3, [r2] @ 02073182
    cmp r0, r3 @ 02073184
    beq .L_020731b2 @ 02073186
.L_02073188:
    adds r4, #4 @ 02073188
    cmp r4, r1 @ 0207318a
    bne .L_0207317c @ 0207318c
    adds r1, r7, #0 @ 0207318e
    bl .L_02072e70 @ 02073190
    adds r3, r4, #0 @ 02073194
    subs r3, #0x10 @ 02073196
    str r0, [r6, r3] @ 02073198
    movs r2, #0 @ 0207319a
    cmp r0, #0 @ 0207319c
    bne .L_020731a2 @ 0207319e
    movs r2, #1 @ 020731a0
.L_020731a2:
    movs r3, #1 @ 020731a2
    eors r3, r2 @ 020731a4
    lsls r3, r3, #0x18 @ 020731a6
    lsrs r0, r3, #0x18 @ 020731a8
    b .L_02073162 @ 020731aa
.L_020731ac:
    bl .L_020731f8 @ 020731ac
    b .L_02073172 @ 020731b0
.L_020731b2:
    movs r0, #1 @ 020731b2
    str r2, [r6, r5] @ 020731b4
    b .L_02073162 @ 020731b6
    .byte 0x5c, 0x4c, 0x0b, 0x02 @ 020731b8
.L_020731bc:
@ FUN_020731bc at 0x020731bc
    push {r4, r5, r6, lr} @ 020731bc
    ldr r3, [pc, #0x30] @ 020731be
    movs r1, #0x80 @ 020731c0
    ldrh r2, [r3] @ 020731c2
    ldr r4, [pc, #0x2c] @ 020731c4
    bics r2, r1 @ 020731c6
    strh r2, [r3] @ 020731c8
    movs r5, #0 @ 020731ca
    adds r6, r4, #0 @ 020731cc
.L_020731ce:
    ldr r2, [r4] @ 020731ce
    ldr r3, [r2, #4] @ 020731d0
    lsls r1, r3, #0x1b @ 020731d2
    bpl .L_020731de @ 020731d4
    ldr r3, [r2, #8] @ 020731d6
    blx r3 @ 020731d8
    cmp r0, #0 @ 020731da
    bne .L_020731ec @ 020731dc
.L_020731de:
    adds r5, #1 @ 020731de
    adds r6, #4 @ 020731e0
    adds r4, #4 @ 020731e2
    cmp r5, #8 @ 020731e4
    bne .L_020731ce @ 020731e6
    movs r0, #0 @ 020731e8
.L_020731ea:
    pop {r4, r5, r6, pc} @ 020731ea
.L_020731ec:
    ldr r0, [r6] @ 020731ec
    b .L_020731ea @ 020731ee
    .byte 0x04, 0x02, 0x00, 0x04, 0x64, 0xf3, 0x08, 0x02 @ 020731f0
.L_020731f8:
@ FUN_020731f8 at 0x020731f8
    push {r4, r5, r6, lr} @ 020731f8
    ldr r3, [pc, #0x30] @ 020731fa
    ldr r1, [pc, #0x30] @ 020731fc
    ldrh r2, [r3] @ 020731fe
    ldr r4, [pc, #0x30] @ 02073200
    ands r2, r1 @ 02073202
    strh r2, [r3] @ 02073204
    movs r5, #0 @ 02073206
    adds r6, r4, #0 @ 02073208
.L_0207320a:
    ldr r2, [r4] @ 0207320a
    ldr r3, [r2, #4] @ 0207320c
    lsls r1, r3, #0x1a @ 0207320e
    bpl .L_0207321a @ 02073210
    ldr r3, [r2, #8] @ 02073212
    blx r3 @ 02073214
    cmp r0, #0 @ 02073216
    bne .L_02073228 @ 02073218
.L_0207321a:
    adds r5, #1 @ 0207321a
    adds r6, #4 @ 0207321c
    adds r4, #4 @ 0207321e
    cmp r5, #8 @ 02073220
    bne .L_0207320a @ 02073222
    movs r0, #0 @ 02073224
.L_02073226:
    pop {r4, r5, r6, pc} @ 02073226
.L_02073228:
    ldr r0, [r6] @ 02073228
    b .L_02073226 @ 0207322a
    .byte 0x04, 0x02, 0x00, 0x04, 0xff, 0xf7, 0xff, 0xff, 0x64, 0xf3, 0x08, 0x02 @ 0207322c
@ FUN_02073238 at 0x02073238
    push {r4, r5, r6, lr} @ 02073238
    ldr r3, [pc, #0x2c] @ 0207323a
    ldr r1, [pc, #0x2c] @ 0207323c
    ldrh r2, [r3] @ 0207323e
    ldr r4, [pc, #0x2c] @ 02073240
    ands r2, r1 @ 02073242
    strh r2, [r3] @ 02073244
    movs r5, #0 @ 02073246
    adds r6, r4, #0 @ 02073248
.L_0207324a:
    ldr r3, [r4] @ 0207324a
    ldr r3, [r3, #8] @ 0207324c
    blx r3 @ 0207324e
    cmp r0, #0 @ 02073250
    bne .L_02073262 @ 02073252
    adds r5, #1 @ 02073254
    adds r6, #4 @ 02073256
    adds r4, #4 @ 02073258
    cmp r5, #8 @ 0207325a
    bne .L_0207324a @ 0207325c
    movs r0, #0 @ 0207325e
.L_02073260:
    pop {r4, r5, r6, pc} @ 02073260
.L_02073262:
    ldr r0, [r6] @ 02073262
    b .L_02073260 @ 02073264
    .byte 0x00, 0x00, 0x04, 0x02, 0x00, 0x04, 0x7f, 0xf7, 0xff, 0xff, 0x64, 0xf3, 0x08, 0x02 @ 02073266
@ FUN_02073274 at 0x02073274
    push {lr} @ 02073274
    sub sp, #4 @ 02073276
    ldr r0, [pc, #0xc] @ 02073278
    bl .L_0207ebf4 @ 0207327a
    ldr r0, [pc, #0xc] @ 0207327e
    bl .L_0207eba0 @ 02073280
    add sp, #4 @ 02073284
    pop {pc} @ 02073286
    .byte 0x03, 0x00, 0x40, 0x00, 0x0c, 0xed, 0x08, 0x02 @ 02073288
.L_02073290:
@ FUN_02073290 at 0x02073290
    push {r4, lr} @ 02073290
    movs r4, #0x98 @ 02073292
    movs r3, #8 @ 02073294
    lsls r4, r4, #0x14 @ 02073296
    adds r0, #0x40 @ 02073298
    strh r3, [r4] @ 0207329a
    lsls r0, r0, #0x10 @ 0207329c
    movs r3, #0x92 @ 0207329e
    lsrs r0, r0, #0x10 @ 020732a0
    lsls r3, r3, #0x14 @ 020732a2
    strh r0, [r3] @ 020732a4
    movs r3, #0x94 @ 020732a6
    lsrs r2, r1, #0x10 @ 020732a8
    lsls r3, r3, #0x14 @ 020732aa
    strh r2, [r3] @ 020732ac
    lsls r1, r1, #0x10 @ 020732ae
    movs r3, #0x96 @ 020732b0
    lsrs r1, r1, #0x10 @ 020732b2
    lsls r3, r3, #0x14 @ 020732b4
    strh r1, [r3] @ 020732b6
    movs r3, #0x88 @ 020732b8
    movs r2, #0x29 @ 020732ba
    lsls r3, r3, #0x14 @ 020732bc
    ldr r1, [pc, #0x2c] @ 020732be
    strh r2, [r3] @ 020732c0
    movs r0, #1 @ 020732c2
    movs r2, #0 @ 020732c4
    b .L_020732ce @ 020732c6
.L_020732c8:
    adds r2, #1 @ 020732c8
    cmp r2, r1 @ 020732ca
    beq .L_020732e0 @ 020732cc
.L_020732ce:
    ldrh r3, [r4] @ 020732ce
    tst r3, r0 @ 020732d0
    beq .L_020732c8 @ 020732d2
    movs r3, #0x88 @ 020732d4
    lsls r3, r3, #0x14 @ 020732d6
    movs r2, #9 @ 020732d8
    strh r2, [r3] @ 020732da
    movs r0, #1 @ 020732dc
.L_020732de:
    pop {r4, pc} @ 020732de
.L_020732e0:
    movs r3, #0x88 @ 020732e0
    lsls r3, r3, #0x14 @ 020732e2
    movs r2, #9 @ 020732e4
    movs r0, #0 @ 020732e6
    strh r2, [r3] @ 020732e8
    b .L_020732de @ 020732ea
    .byte 0x20, 0x4e, 0x00, 0x00 @ 020732ec
.L_020732f0:
@ FUN_020732f0 at 0x020732f0
    push {r4, lr} @ 020732f0
    movs r3, #0x88 @ 020732f2
    movs r2, #2 @ 020732f4
    lsls r3, r3, #0x14 @ 020732f6
    strh r2, [r3] @ 020732f8
    movs r3, #0x98 @ 020732fa
    lsls r3, r3, #0x14 @ 020732fc
    ldr r1, [pc, #0x40] @ 020732fe
    strh r2, [r3] @ 02073300
    adds r4, r3, #0 @ 02073302
    movs r2, #0 @ 02073304
    movs r0, #8 @ 02073306
    b .L_02073310 @ 02073308
.L_0207330a:
    adds r2, #1 @ 0207330a
    cmp r2, r1 @ 0207330c
    beq .L_0207333a @ 0207330e
.L_02073310:
    ldrh r3, [r4] @ 02073310
    tst r3, r0 @ 02073312
    beq .L_0207330a @ 02073314
    movs r1, #0x98 @ 02073316
    ldr r0, [pc, #0x24] @ 02073318
    movs r2, #0 @ 0207331a
    lsls r1, r1, #0x14 @ 0207331c
    movs r4, #8 @ 0207331e
    b .L_02073328 @ 02073320
.L_02073322:
    adds r2, #1 @ 02073322
    cmp r2, r0 @ 02073324
    beq .L_0207333a @ 02073326
.L_02073328:
    ldrh r3, [r1] @ 02073328
    tst r3, r4 @ 0207332a
    bne .L_02073322 @ 0207332c
    movs r3, #0x90 @ 0207332e
    lsls r3, r3, #0x14 @ 02073330
    ldrh r3, [r3] @ 02073332
    lsls r3, r3, #0x18 @ 02073334
    lsrs r0, r3, #0x18 @ 02073336
.L_02073338:
    pop {r4, pc} @ 02073338
.L_0207333a:
    movs r0, #0xff @ 0207333a
    b .L_02073338 @ 0207333c
    .byte 0x00, 0x00, 0x20, 0x4e, 0x00, 0x00 @ 0207333e
.L_02073344:
@ FUN_02073344 at 0x02073344
    push {r4, r5, r6, r7, lr} @ 02073344
    mov r7, r8 @ 02073346
    push {r7} @ 02073348
    movs r5, #0x80 @ 0207334a
    mov r8, r0 @ 0207334c
    adds r7, r1, #0 @ 0207334e
    movs r4, #0 @ 02073350
    lsls r5, r5, #1 @ 02073352
    b .L_0207335c @ 02073354
.L_02073356:
    adds r4, #1 @ 02073356
    cmp r4, r5 @ 02073358
    beq .L_02073366 @ 0207335a
.L_0207335c:
    bl .L_020732f0 @ 0207335c
    adds r6, r0, #0 @ 02073360
    cmp r0, #0xff @ 02073362
    beq .L_02073356 @ 02073364
.L_02073366:
    mov r3, r8 @ 02073366
    cmp r3, #0 @ 02073368
    beq .L_020733e4 @ 0207336a
    cmp r6, #0xff @ 0207336c
    beq .L_020733aa @ 0207336e
    cmp r7, #0 @ 02073370
    beq .L_02073386 @ 02073372
    movs r4, #0 @ 02073374
.L_02073376:
    mov r3, r8 @ 02073376
    strb r6, [r4, r3] @ 02073378
    bl .L_020732f0 @ 0207337a
    adds r4, #1 @ 0207337e
    adds r6, r0, #0 @ 02073380
    cmp r7, r4 @ 02073382
    bne .L_02073376 @ 02073384
.L_02073386:
    bl .L_020732f0 @ 02073386
    bl .L_020732f0 @ 0207338a
    mov r3, r8 @ 0207338e
    ldrb r2, [r3] @ 02073390
    movs r3, #0x80 @ 02073392
    tst r2, r3 @ 02073394
    beq .L_020733e8 @ 02073396
    movs r1, #0 @ 02073398
    movs r0, #0x80 @ 0207339a
.L_0207339c:
    adds r1, #1 @ 0207339c
    adds r3, r2, #0 @ 0207339e
    lsls r3, r1 @ 020733a0
    tst r3, r0 @ 020733a2
    beq .L_020733b2 @ 020733a4
    cmp r1, #7 @ 020733a6
    bne .L_0207339c @ 020733a8
.L_020733aa:
    movs r0, #0 @ 020733aa
.L_020733ac:
    pop {r2} @ 020733ac
    mov r8, r2 @ 020733ae
    pop {r4, r5, r6, r7, pc} @ 020733b0
.L_020733b2:
    movs r3, #8 @ 020733b2
    subs r0, r3, r1 @ 020733b4
.L_020733b6:
    subs r7, #1 @ 020733b6
    cmp r7, #0 @ 020733b8
    beq .L_020733ee @ 020733ba
    movs r5, #0 @ 020733bc
    mov r4, r8 @ 020733be
.L_020733c0:
    ldrb r2, [r4] @ 020733c0
    ldrb r3, [r4, #1] @ 020733c2
    lsls r2, r1 @ 020733c4
    asrs r3, r0 @ 020733c6
    orrs r2, r3 @ 020733c8
    adds r5, #1 @ 020733ca
    strb r2, [r4] @ 020733cc
    adds r4, #1 @ 020733ce
    cmp r5, r7 @ 020733d0
    bne .L_020733c0 @ 020733d2
    adds r3, r7, #0 @ 020733d4
.L_020733d6:
    add r3, r8 @ 020733d6
    ldrb r2, [r3] @ 020733d8
    lsls r2, r1 @ 020733da
    adds r1, r6, #0 @ 020733dc
    asrs r1, r0 @ 020733de
    orrs r2, r1 @ 020733e0
    strb r2, [r3] @ 020733e2
.L_020733e4:
    movs r0, #1 @ 020733e4
    b .L_020733ac @ 020733e6
.L_020733e8:
    movs r1, #0 @ 020733e8
    movs r0, #8 @ 020733ea
    b .L_020733b6 @ 020733ec
.L_020733ee:
    movs r3, #0 @ 020733ee
    b .L_020733d6 @ 020733f0
    .zero 2
    push {r4, lr} @ 020733f4
    adds r4, r0, #0 @ 020733f6
    adds r0, r1, #0 @ 020733f8
    adds r1, r2, #0 @ 020733fa
    bl .L_02073290 @ 020733fc
    adds r0, r4, #0 @ 02073400
    movs r1, #6 @ 02073402
    bl .L_02073344 @ 02073404
    pop {r4, pc} @ 02073408
    .zero 2
@ FUN_0207340c at 0x0207340c
    push {r4, lr} @ 0207340c
    adds r4, r0, #0 @ 0207340e
    adds r0, r1, #0 @ 02073410
    adds r1, r2, #0 @ 02073412
    bl .L_02073290 @ 02073414
    adds r0, r4, #0 @ 02073418
    movs r1, #0x11 @ 0207341a
    bl .L_02073344 @ 0207341c
    pop {r4, pc} @ 02073420
    .zero 2
.L_02073424:
@ FUN_02073424 at 0x02073424
    push {r4, r5, lr} @ 02073424
    movs r3, #0x88 @ 02073426
    movs r2, #0x49 @ 02073428
    lsls r3, r3, #0x14 @ 0207342a
    movs r1, #0x98 @ 0207342c
    ldr r4, [pc, #0x80] @ 0207342e
    adds r5, r0, #0 @ 02073430
    strh r2, [r3] @ 02073432
    lsls r1, r1, #0x14 @ 02073434
    movs r2, #0 @ 02073436
    movs r0, #0x40 @ 02073438
    b .L_02073442 @ 0207343a
.L_0207343c:
    adds r2, #1 @ 0207343c
    cmp r2, r4 @ 0207343e
    beq .L_020734a4 @ 02073440
.L_02073442:
    ldrh r3, [r1] @ 02073442
    tst r3, r0 @ 02073444
    beq .L_0207343c @ 02073446
    movs r1, #0x88 @ 02073448
    lsls r1, r1, #0x14 @ 0207344a
    movs r3, #9 @ 0207344c
    strh r3, [r1] @ 0207344e
    movs r3, #8 @ 02073450
    strh r3, [r1] @ 02073452
    movs r3, #0x98 @ 02073454
    lsls r3, r3, #0x14 @ 02073456
    movs r2, #4 @ 02073458
    strh r2, [r3] @ 0207345a
    ldrh r3, [r1] @ 0207345c
    lsls r3, r5, #0x1f @ 0207345e
    bpl .L_0207348c @ 02073460
    adds r4, r1, #0 @ 02073462
    movs r1, #0x80 @ 02073464
    movs r2, #0 @ 02073466
    lsls r1, r1, #2 @ 02073468
    adds r0, r5, #0 @ 0207346a
.L_0207346c:
    ldrh r3, [r4] @ 0207346c
    adds r2, #2 @ 0207346e
    strb r3, [r0] @ 02073470
    lsrs r3, r3, #8 @ 02073472
    strb r3, [r0, #1] @ 02073474
    adds r0, #2 @ 02073476
    cmp r2, r1 @ 02073478
    bne .L_0207346c @ 0207347a
.L_0207347c:
    movs r3, #0x88 @ 0207347c
    lsls r3, r3, #0x14 @ 0207347e
    ldrh r2, [r3] @ 02073480
    ldrh r2, [r3] @ 02073482
    ldrh r2, [r3] @ 02073484
    ldrh r3, [r3] @ 02073486
    movs r0, #1 @ 02073488
.L_0207348a:
    pop {r4, r5, pc} @ 0207348a
.L_0207348c:
    movs r3, #0x80 @ 0207348c
    lsls r3, r3, #2 @ 0207348e
    adds r0, r5, #0 @ 02073490
    adds r2, r5, r3 @ 02073492
.L_02073494:
    movs r3, #0x88 @ 02073494
    lsls r3, r3, #0x14 @ 02073496
    ldrh r3, [r3] @ 02073498
    strh r3, [r0] @ 0207349a
    adds r0, #2 @ 0207349c
    cmp r2, r0 @ 0207349e
    bne .L_02073494 @ 020734a0
    b .L_0207347c @ 020734a2
.L_020734a4:
    movs r3, #0x88 @ 020734a4
    lsls r3, r3, #0x14 @ 020734a6
    movs r2, #9 @ 020734a8
    movs r0, #0 @ 020734aa
    strh r2, [r3] @ 020734ac
    b .L_0207348a @ 020734ae
    .byte 0x20, 0x4e, 0x00, 0x00 @ 020734b0
.L_020734b4:
@ FUN_020734b4 at 0x020734b4
    movs r3, #0x88 @ 020734b4
    lsls r3, r3, #0x14 @ 020734b6
    movs r2, #4 @ 020734b8
    strh r2, [r3] @ 020734ba
    movs r2, #0xc @ 020734bc
    strh r2, [r3] @ 020734be
    bx lr @ 020734c0
    .zero 2
.L_020734c4:
@ FUN_020734c4 at 0x020734c4
    movs r3, #0x88 @ 020734c4
    lsls r3, r3, #0x14 @ 020734c6
    movs r2, #0 @ 020734c8
    strh r2, [r3] @ 020734ca
    movs r2, #8 @ 020734cc
    strh r2, [r3] @ 020734ce
    bx lr @ 020734d0
    .zero 2
@ FUN_020734d4 at 0x020734d4
    push {r4, lr} @ 020734d4
    sub sp, #8 @ 020734d6
    movs r0, #0xd @ 020734d8
    movs r1, #0 @ 020734da
    bl .L_02073290 @ 020734dc
    cmp r0, #0 @ 020734e0
    bne .L_020734ea @ 020734e2
.L_020734e4:
    movs r0, #0 @ 020734e4
.L_020734e6:
    add sp, #8 @ 020734e6
    pop {r4, pc} @ 020734e8
.L_020734ea:
    mov r4, sp @ 020734ea
    adds r4, #2 @ 020734ec
    adds r0, r4, #0 @ 020734ee
    movs r1, #6 @ 020734f0
    bl .L_02073344 @ 020734f2
    lsls r0, r0, #0x18 @ 020734f6
    cmp r0, #0 @ 020734f8
    beq .L_020734e4 @ 020734fa
    ldrb r3, [r4] @ 020734fc
    movs r2, #0 @ 020734fe
    cmp r3, #0xd @ 02073500
    beq .L_02073506 @ 02073502
    movs r2, #1 @ 02073504
.L_02073506:
    movs r3, #1 @ 02073506
    eors r3, r2 @ 02073508
    lsls r3, r3, #0x18 @ 0207350a
    lsrs r0, r3, #0x18 @ 0207350c
    b .L_020734e6 @ 0207350e
@ FUN_02073510 at 0x02073510
    push {r4, r5, r6, r7, lr} @ 02073510
    mov r7, r8 @ 02073512
    push {r7} @ 02073514
    sub sp, #8 @ 02073516
    adds r6, r1, #0 @ 02073518
    adds r4, r2, #0 @ 0207351a
    cmp r1, #1 @ 0207351c
    beq .L_02073560 @ 0207351e
    lsls r1, r0, #9 @ 02073520
    movs r0, #0x12 @ 02073522
    bl .L_02073290 @ 02073524
    cmp r0, #0 @ 02073528
    beq .L_02073556 @ 0207352a
    cmp r6, #0 @ 0207352c
    beq .L_02073584 @ 0207352e
    movs r7, #0x98 @ 02073530
    movs r3, #8 @ 02073532
    movs r5, #0 @ 02073534
    lsls r7, r7, #0x14 @ 02073536
    mov r8, r3 @ 02073538
    b .L_0207354c @ 0207353a
.L_0207353c:
    mov r3, r8 @ 0207353c
    adds r5, #1 @ 0207353e
    strh r3, [r7] @ 02073540
    cmp r6, r5 @ 02073542
    beq .L_02073584 @ 02073544
    movs r3, #0x80 @ 02073546
    lsls r3, r3, #2 @ 02073548
    adds r4, r4, r3 @ 0207354a
.L_0207354c:
    adds r0, r4, #0 @ 0207354c
    bl .L_02073424 @ 0207354e
    cmp r0, #0 @ 02073552
    bne .L_0207353c @ 02073554
.L_02073556:
    movs r0, #0 @ 02073556
.L_02073558:
    add sp, #8 @ 02073558
    pop {r2} @ 0207355a
    mov r8, r2 @ 0207355c
    pop {r4, r5, r6, r7, pc} @ 0207355e
.L_02073560:
    lsls r1, r0, #9 @ 02073560
    movs r0, #0x11 @ 02073562
    bl .L_02073290 @ 02073564
    cmp r0, #0 @ 02073568
    beq .L_02073556 @ 0207356a
    adds r0, r4, #0 @ 0207356c
    bl .L_02073424 @ 0207356e
    movs r2, #0 @ 02073572
    cmp r0, #0 @ 02073574
    bne .L_0207357a @ 02073576
    movs r2, #1 @ 02073578
.L_0207357a:
    movs r3, #1 @ 0207357a
    eors r3, r2 @ 0207357c
    lsls r3, r3, #0x18 @ 0207357e
    lsrs r0, r3, #0x18 @ 02073580
    b .L_02073558 @ 02073582
.L_02073584:
    movs r1, #0 @ 02073584
    movs r0, #0xc @ 02073586
    bl .L_02073290 @ 02073588
    mov r0, sp @ 0207358c
    adds r0, #2 @ 0207358e
    movs r1, #6 @ 02073590
    bl .L_02073344 @ 02073592
    movs r0, #1 @ 02073596
    b .L_02073558 @ 02073598
    .zero 2
    push {lr} @ 0207359c
    sub sp, #4 @ 0207359e
    ldr r0, [pc, #8] @ 020735a0
    bl .L_0207ebf4 @ 020735a2
    movs r0, #1 @ 020735a6
    add sp, #4 @ 020735a8
    pop {pc} @ 020735aa
    .byte 0x04, 0x00, 0x40, 0x00 @ 020735ac
.L_020735b0:
@ FUN_020735b0 at 0x020735b0
    push {r4, r5, r6, r7, lr} @ 020735b0
    mov r7, sl @ 020735b2
    mov r6, r8 @ 020735b4
    push {r6, r7} @ 020735b6
    movs r3, #0xff @ 020735b8
    mov sl, r3 @ 020735ba
    movs r3, #3 @ 020735bc
    movs r7, #0x90 @ 020735be
    movs r6, #0x88 @ 020735c0
    movs r1, #0x98 @ 020735c2
    mov r8, r3 @ 020735c4
    ldr r0, [pc, #0x60] @ 020735c6
    movs r3, #1 @ 020735c8
    sub sp, #4 @ 020735ca
    movs r5, #0x63 @ 020735cc
    lsls r7, r7, #0x14 @ 020735ce
    lsls r6, r6, #0x14 @ 020735d0
    lsls r1, r1, #0x14 @ 020735d2
    movs r4, #4 @ 020735d4
    mov ip, r3 @ 020735d6
.L_020735d8:
    mov r3, sl @ 020735d8
    strh r3, [r7] @ 020735da
    mov r3, r8 @ 020735dc
    strh r3, [r6] @ 020735de
    movs r2, #0 @ 020735e0
    mov r3, ip @ 020735e2
    strh r3, [r1] @ 020735e4
    b .L_020735ee @ 020735e6
.L_020735e8:
    adds r2, #1 @ 020735e8
    cmp r2, r0 @ 020735ea
    beq .L_020735f4 @ 020735ec
.L_020735ee:
    ldrh r3, [r1] @ 020735ee
    tst r3, r4 @ 020735f0
    beq .L_020735e8 @ 020735f2
.L_020735f4:
    subs r5, #1 @ 020735f4
    bhs .L_020735d8 @ 020735f6
    movs r0, #0 @ 020735f8
    movs r1, #0 @ 020735fa
    bl .L_02073290 @ 020735fc
    cmp r0, #0 @ 02073600
    beq .L_0207361e @ 02073602
    movs r4, #0x63 @ 02073604
.L_02073606:
    bl .L_020732f0 @ 02073606
    subs r4, #1 @ 0207360a
    bhs .L_02073606 @ 0207360c
    ldr r3, [pc, #0x1c] @ 0207360e
    movs r2, #0 @ 02073610
    str r2, [r3] @ 02073612
    ldr r0, [pc, #0x18] @ 02073614
    ldr r1, [pc, #0x1c] @ 02073616
    movs r2, #1 @ 02073618
    bl .L_02074c84 @ 0207361a
.L_0207361e:
    add sp, #4 @ 0207361e
    pop {r2, r3} @ 02073620
    mov r8, r2 @ 02073622
    mov sl, r3 @ 02073624
    pop {r4, r5, r6, r7, pc} @ 02073626
    .byte 0x20, 0x4e, 0x00, 0x00, 0x6c, 0x4c, 0x0b, 0x02, 0xf5, 0x33, 0x07, 0x02, 0x0d, 0x34, 0x07, 0x02 @ 02073628
@ FUN_02073638 at 0x02073638
    push {lr} @ 02073638
    sub sp, #4 @ 0207363a
    bl .L_020735b0 @ 0207363c
    add sp, #4 @ 02073640
    pop {pc} @ 02073642
@ FUN_02073644 at 0x02073644
    push {lr} @ 02073644
    sub sp, #4 @ 02073646
    ldr r0, [pc, #0xc] @ 02073648
    bl .L_0207ebf4 @ 0207364a
    bl .L_020735b0 @ 0207364e
    add sp, #4 @ 02073652
    pop {pc} @ 02073654
    .byte 0x00, 0x00, 0x03, 0x00, 0x40, 0x00 @ 02073656
@ FUN_0207365c at 0x0207365c
    push {r4, r5, r6, r7, lr} @ 0207365c
    mov r7, fp @ 0207365e
    mov r6, sl @ 02073660
    mov r5, sb @ 02073662
    mov r4, r8 @ 02073664
    push {r4, r5, r6, r7} @ 02073666
    sub sp, #0x1c @ 02073668
    lsls r0, r0, #9 @ 0207366a
    str r0, [sp, #4] @ 0207366c
    mov sb, r1 @ 0207366e
    adds r0, r2, #0 @ 02073670
    mov fp, r2 @ 02073672
    movs r1, #0x80 @ 02073674
    mov r2, sp @ 02073676
    adds r2, #0xa @ 02073678
    lsls r1, r1, #2 @ 0207367a
    bl .L_02074b88 @ 0207367c
    movs r2, #0x12 @ 02073680
    ldr r3, [pc, #0x12c] @ 02073682
    add r2, sp @ 02073684
    mov sl, r2 @ 02073686
    str r3, [sp] @ 02073688
.L_0207368a:
    mov r3, sb @ 0207368a
    subs r3, #1 @ 0207368c
    mov sb, r3 @ 0207368e
    bhs .L_02073694 @ 02073690
    b .L_020737ac @ 02073692
.L_02073694:
    ldr r1, [sp, #4] @ 02073694
    movs r0, #0x18 @ 02073696
    bl .L_02073290 @ 02073698
    mov r0, sl @ 0207369c
    movs r1, #6 @ 0207369e
    bl .L_02073344 @ 020736a0
    lsls r0, r0, #0x18 @ 020736a4
    cmp r0, #0 @ 020736a6
    beq .L_02073780 @ 020736a8
    movs r3, #0x88 @ 020736aa
    lsls r3, r3, #0x14 @ 020736ac
    movs r2, #4 @ 020736ae
    strh r2, [r3] @ 020736b0
    movs r3, #0x98 @ 020736b2
    lsls r3, r3, #0x14 @ 020736b4
    movs r2, #0 @ 020736b6
    movs r5, #0x90 @ 020736b8
    movs r4, #0x80 @ 020736ba
    strh r2, [r3] @ 020736bc
    lsls r5, r5, #0x14 @ 020736be
    lsls r4, r4, #1 @ 020736c0
.L_020736c2:
    bl .L_020734c4 @ 020736c2
    ldrh r3, [r5] @ 020736c6
    tst r3, r4 @ 020736c8
    beq .L_020736c2 @ 020736ca
    movs r3, #0 @ 020736cc
    strh r3, [r5] @ 020736ce
    bl .L_020734b4 @ 020736d0
    movs r2, #0x80 @ 020736d4
    movs r7, #0x90 @ 020736d6
    lsls r3, r2, #2 @ 020736d8
    mov r5, fp @ 020736da
    movs r6, #0 @ 020736dc
    lsls r7, r7, #0x14 @ 020736de
    mov r8, r3 @ 020736e0
.L_020736e2:
    ldrb r4, [r5] @ 020736e2
    adds r6, #1 @ 020736e4
    lsrs r3, r4, #4 @ 020736e6
    strh r3, [r7] @ 020736e8
    bl .L_020734b4 @ 020736ea
    strh r4, [r7] @ 020736ee
    adds r5, #1 @ 020736f0
    bl .L_020734b4 @ 020736f2
    cmp r6, r8 @ 020736f6
    bne .L_020736e2 @ 020736f8
    mov r5, sp @ 020736fa
    movs r6, #0x90 @ 020736fc
    adds r5, #0xa @ 020736fe
    lsls r6, r6, #0x14 @ 02073700
.L_02073702:
    ldrb r4, [r5] @ 02073702
    adds r5, #1 @ 02073704
    lsrs r3, r4, #4 @ 02073706
    strh r3, [r6] @ 02073708
    bl .L_020734b4 @ 0207370a
    strh r4, [r6] @ 0207370e
    bl .L_020734b4 @ 02073710
    cmp sl, r5 @ 02073714
    bne .L_02073702 @ 02073716
    movs r5, #0x90 @ 02073718
    movs r4, #0 @ 0207371a
    lsls r5, r5, #0x14 @ 0207371c
    movs r6, #0xff @ 0207371e
.L_02073720:
    strh r6, [r5] @ 02073720
    adds r4, #1 @ 02073722
    bl .L_020734b4 @ 02073724
    cmp r4, #0x20 @ 02073728
    bne .L_02073720 @ 0207372a
    movs r5, #0x90 @ 0207372c
    movs r4, #0x80 @ 0207372e
    lsls r5, r5, #0x14 @ 02073730
    lsls r4, r4, #1 @ 02073732
.L_02073734:
    bl .L_020734c4 @ 02073734
    ldrh r3, [r5] @ 02073738
    tst r3, r4 @ 0207373a
    beq .L_02073734 @ 0207373c
    mov r2, sb @ 0207373e
    cmp r2, #0 @ 02073740
    bne .L_02073790 @ 02073742
.L_02073744:
    movs r2, #0 @ 02073744
    mov r3, sl @ 02073746
    strb r2, [r3, #3] @ 02073748
    ldr r6, [sp] @ 0207374a
    movs r0, #0xd @ 0207374c
    ldr r1, [r6] @ 0207374e
    bl .L_02073290 @ 02073750
    mov r0, sl @ 02073754
    movs r1, #6 @ 02073756
    bl .L_02073344 @ 02073758
    ldr r4, [pc, #0x54] @ 0207375c
    movs r5, #0x1f @ 0207375e
.L_02073760:
    mov r2, sl @ 02073760
    ldrb r3, [r2, #3] @ 02073762
    ands r3, r5 @ 02073764
    cmp r3, #9 @ 02073766
    beq .L_0207368a @ 02073768
    ldr r1, [r6] @ 0207376a
    movs r0, #0xd @ 0207376c
    bl .L_02073290 @ 0207376e
    subs r4, #1 @ 02073772
    mov r0, sl @ 02073774
    movs r1, #6 @ 02073776
    bl .L_02073344 @ 02073778
    cmp r4, #0 @ 0207377c
    bne .L_02073760 @ 0207377e
.L_02073780:
    movs r0, #0 @ 02073780
.L_02073782:
    add sp, #0x1c @ 02073782
    pop {r2, r3, r4, r5} @ 02073784
    mov r8, r2 @ 02073786
    mov sb, r3 @ 02073788
    mov sl, r4 @ 0207378a
    mov fp, r5 @ 0207378c
    pop {r4, r5, r6, r7, pc} @ 0207378e
.L_02073790:
    ldr r3, [sp, #4] @ 02073790
    movs r2, #0x80 @ 02073792
    lsls r2, r2, #2 @ 02073794
    adds r3, r3, r2 @ 02073796
    add fp, r2 @ 02073798
    movs r1, #0x80 @ 0207379a
    mov r2, sp @ 0207379c
    mov r0, fp @ 0207379e
    lsls r1, r1, #2 @ 020737a0
    adds r2, #0xa @ 020737a2
    str r3, [sp, #4] @ 020737a4
    bl .L_02074b88 @ 020737a6
    b .L_02073744 @ 020737aa
.L_020737ac:
    movs r0, #1 @ 020737ac
    b .L_02073782 @ 020737ae
    .byte 0x6c, 0x4c, 0x0b, 0x02, 0xb7, 0x0b, 0x00, 0x00 @ 020737b0
@ FUN_020737b8 at 0x020737b8
    push {lr} @ 020737b8
    sub sp, #4 @ 020737ba
    ldr r0, [pc, #8] @ 020737bc
    bl .L_0207eba0 @ 020737be
    add sp, #4 @ 020737c2
    pop {pc} @ 020737c4
    .byte 0x00, 0x00, 0x70, 0xed, 0x08, 0x02 @ 020737c6
.L_020737cc:
@ FUN_020737cc at 0x020737cc
    push {lr} @ 020737cc
    ldr r2, [pc, #0x58] @ 020737ce
    movs r3, #0x80 @ 020737d0
    negs r3, r3 @ 020737d2
    strb r3, [r2] @ 020737d4
    ldr r3, [pc, #0x54] @ 020737d6
    movs r2, #0x20 @ 020737d8
    strb r2, [r3] @ 020737da
    movs r2, #0 @ 020737dc
    adds r3, #1 @ 020737de
    strb r2, [r3] @ 020737e0
    adds r3, #1 @ 020737e2
    strb r2, [r3] @ 020737e4
    adds r3, #1 @ 020737e6
    strb r2, [r3] @ 020737e8
    adds r3, #1 @ 020737ea
    strb r2, [r3] @ 020737ec
    adds r3, #1 @ 020737ee
    strb r2, [r3] @ 020737f0
    adds r3, #1 @ 020737f2
    strb r2, [r3] @ 020737f4
    adds r3, #1 @ 020737f6
    strb r2, [r3] @ 020737f8
    ldr r1, [pc, #0x34] @ 020737fa
    ldr r2, [pc, #0x34] @ 020737fc
    ldr r3, [pc, #0x38] @ 020737fe
    str r3, [r2] @ 02073800
    b .L_0207380a @ 02073802
.L_02073804:
    subs r1, #1 @ 02073804
    cmp r1, #0 @ 02073806
    beq .L_02073824 @ 02073808
.L_0207380a:
    ldr r3, [r2] @ 0207380a
    cmp r3, #0 @ 0207380c
    blt .L_02073804 @ 0207380e
    movs r2, #0 @ 02073810
    cmp r1, #0 @ 02073812
    ble .L_02073820 @ 02073814
.L_02073816:
    movs r3, #1 @ 02073816
    eors r3, r2 @ 02073818
    lsls r3, r3, #0x18 @ 0207381a
    lsrs r0, r3, #0x18 @ 0207381c
.L_0207381e:
    pop {pc} @ 0207381e
.L_02073820:
    movs r2, #1 @ 02073820
    b .L_02073816 @ 02073822
.L_02073824:
    movs r0, #0 @ 02073824
    b .L_0207381e @ 02073826
    .byte 0xa1, 0x01, 0x00, 0x04, 0xa8, 0x01, 0x00, 0x04, 0x10, 0x27, 0x00, 0x00, 0xa4, 0x01, 0x00, 0x04 @ 02073828
    .byte 0x00, 0x60, 0x40, 0xa0 @ 02073838
.L_0207383c:
@ FUN_0207383c at 0x0207383c
    push {r4, r5, r6, r7, lr} @ 0207383c
    mov r7, r8 @ 0207383e
    push {r7} @ 02073840
    adds r4, r0, #0 @ 02073842
    adds r0, r2, #0 @ 02073844
    ldr r2, [pc, #0x154] @ 02073846
    mov ip, r3 @ 02073848
    ldrh r3, [r2] @ 0207384a
    ldr r6, [sp, #0x18] @ 0207384c
    mov r8, r3 @ 0207384e
    movs r3, #0 @ 02073850
    strh r3, [r2] @ 02073852
    movs r3, #0x80 @ 02073854
    lsls r3, r3, #0xd @ 02073856
    adds r2, #0xc @ 02073858
    str r3, [r2] @ 0207385a
    movs r3, #0x80 @ 0207385c
    negs r3, r3 @ 0207385e
    subs r2, #0x73 @ 02073860
    strb r3, [r2] @ 02073862
    adds r5, r0, #0 @ 02073864
    movs r3, #3 @ 02073866
    ands r5, r3 @ 02073868
    adds r7, r1, #0 @ 0207386a
    cmp r5, #1 @ 0207386c
    ble .L_0207391e @ 0207386e
    cmp r5, #2 @ 02073870
    beq .L_02073918 @ 02073872
    lsls r3, r4, #2 @ 02073874
    movs r2, #0xe @ 02073876
.L_02073878:
    negs r2, r2 @ 02073878
    orrs r3, r2 @ 0207387a
    lsls r3, r3, #0x18 @ 0207387c
    ldr r2, [pc, #0x120] @ 0207387e
    lsrs r3, r3, #0x18 @ 02073880
    strb r3, [r2] @ 02073882
.L_02073884:
    movs r3, #0x40 @ 02073884
    adds r2, r0, #0 @ 02073886
    ands r2, r3 @ 02073888
    lsls r3, r0, #0x1b @ 0207388a
    lsrs r3, r3, #0x1d @ 0207388c
    lsls r3, r3, #3 @ 0207388e
    orrs r2, r3 @ 02073890
    ldr r3, [pc, #0x110] @ 02073892
    strb r2, [r3] @ 02073894
    mov r2, ip @ 02073896
    movs r3, #0x40 @ 02073898
    orrs r3, r2 @ 0207389a
    lsls r3, r3, #0x18 @ 0207389c
    ldr r2, [pc, #0x108] @ 0207389e
    lsrs r3, r3, #0x18 @ 020738a0
    strb r3, [r2] @ 020738a2
    ldr r3, [pc, #0x104] @ 020738a4
    lsrs r2, r6, #0x18 @ 020738a6
    strb r2, [r3] @ 020738a8
    ldr r2, [pc, #0x104] @ 020738aa
    lsls r3, r6, #8 @ 020738ac
    lsrs r3, r3, #0x18 @ 020738ae
    strb r3, [r2] @ 020738b0
    lsls r3, r6, #0x10 @ 020738b2
    lsrs r3, r3, #0x18 @ 020738b4
    adds r2, #1 @ 020738b6
    strb r3, [r2] @ 020738b8
    lsls r3, r6, #0x18 @ 020738ba
    lsrs r3, r3, #0x18 @ 020738bc
    adds r2, #1 @ 020738be
    strb r3, [r2] @ 020738c0
    ldr r3, [pc, #0xf0] @ 020738c2
    movs r2, #0 @ 020738c4
    strb r2, [r3] @ 020738c6
    cmp r5, #1 @ 020738c8
    ble .L_02073934 @ 020738ca
    ldr r3, [pc, #0xe8] @ 020738cc
    ldr r2, [r3] @ 020738ce
    ldr r3, [pc, #0xe8] @ 020738d0
    str r2, [r3] @ 020738d2
    adds r2, r3, #0 @ 020738d4
.L_020738d6:
    ldr r3, [r2] @ 020738d6
    cmp r3, #0 @ 020738d8
    blt .L_020738d6 @ 020738da
    movs r1, #0x80 @ 020738dc
    ldr r2, [pc, #0xe0] @ 020738de
    ldr r0, [pc, #0xe0] @ 020738e0
    lsls r1, r1, #0xd @ 020738e2
    b .L_020738ec @ 020738e4
.L_020738e6:
    subs r2, #1 @ 020738e6
    cmp r2, #0 @ 020738e8
    beq .L_02073906 @ 020738ea
.L_020738ec:
    ldr r3, [r0] @ 020738ec
    tst r3, r1 @ 020738ee
    beq .L_020738e6 @ 020738f0
    str r1, [r0] @ 020738f2
    cmp r2, #0 @ 020738f4
    ble .L_0207390e @ 020738f6
.L_020738f8:
    ldr r3, [pc, #0xa0] @ 020738f8
    mov r2, r8 @ 020738fa
    strh r2, [r3] @ 020738fc
    movs r0, #1 @ 020738fe
.L_02073900:
    pop {r2} @ 02073900
    mov r8, r2 @ 02073902
    pop {r4, r5, r6, r7, pc} @ 02073904
.L_02073906:
    movs r3, #0x80 @ 02073906
    ldr r2, [pc, #0xb8] @ 02073908
    lsls r3, r3, #0xd @ 0207390a
    str r3, [r2] @ 0207390c
.L_0207390e:
    ldr r3, [pc, #0x8c] @ 0207390e
    mov r2, r8 @ 02073910
    movs r0, #0 @ 02073912
    strh r2, [r3] @ 02073914
    b .L_02073900 @ 02073916
.L_02073918:
    lsls r3, r4, #2 @ 02073918
    movs r2, #0x1e @ 0207391a
    b .L_02073878 @ 0207391c
.L_0207391e:
    movs r3, #0xf @ 0207391e
    negs r3, r3 @ 02073920
    lsls r1, r4, #2 @ 02073922
    orrs r1, r3 @ 02073924
    lsls r2, r0, #1 @ 02073926
    orrs r2, r1 @ 02073928
    lsls r2, r2, #0x18 @ 0207392a
    ldr r3, [pc, #0x70] @ 0207392c
    lsrs r2, r2, #0x18 @ 0207392e
    strb r2, [r3] @ 02073930
    b .L_02073884 @ 02073932
.L_02073934:
    ldr r2, [pc, #0x80] @ 02073934
    movs r3, #0x80 @ 02073936
    ldr r2, [r2] @ 02073938
    lsls r3, r3, #0x11 @ 0207393a
    orrs r2, r3 @ 0207393c
    ldr r3, [pc, #0x7c] @ 0207393e
    movs r1, #0x80 @ 02073940
    str r2, [r3] @ 02073942
    ldr r0, [pc, #0x7c] @ 02073944
    ldr r2, [pc, #0x78] @ 02073946
    lsls r1, r1, #0xd @ 02073948
    b .L_02073952 @ 0207394a
.L_0207394c:
    subs r2, #1 @ 0207394c
    cmp r2, #0 @ 0207394e
    beq .L_02073906 @ 02073950
.L_02073952:
    ldr r3, [r0] @ 02073952
    tst r3, r1 @ 02073954
    beq .L_0207394c @ 02073956
    str r1, [r0] @ 02073958
    cmp r2, #0 @ 0207395a
    ble .L_0207390e @ 0207395c
    ldr r0, [pc, #0x5c] @ 0207395e
    movs r1, #0 @ 02073960
.L_02073962:
    ldr r3, [r0] @ 02073962
    lsls r2, r3, #8 @ 02073964
    bpl .L_0207397a @ 02073966
    ldr r3, [pc, #0x5c] @ 02073968
    ldr r2, [r3] @ 0207396a
    cmp r7, #0 @ 0207396c
    beq .L_02073978 @ 0207396e
    cmp r1, #4 @ 02073970
    beq .L_0207398a @ 02073972
    cmp r1, #5 @ 02073974
    beq .L_02073982 @ 02073976
.L_02073978:
    adds r1, #1 @ 02073978
.L_0207397a:
    ldr r3, [r0] @ 0207397a
    cmp r3, #0 @ 0207397c
    blt .L_02073962 @ 0207397e
    b .L_020738f8 @ 02073980
.L_02073982:
    lsrs r3, r2, #8 @ 02073982
    strb r2, [r7, #4] @ 02073984
    strb r3, [r7, #5] @ 02073986
    b .L_02073978 @ 02073988
.L_0207398a:
    lsrs r3, r2, #8 @ 0207398a
    strb r3, [r7, #1] @ 0207398c
    lsrs r3, r2, #0x10 @ 0207398e
    strb r3, [r7, #2] @ 02073990
    lsrs r3, r2, #0x18 @ 02073992
    strb r2, [r7] @ 02073994
    strb r3, [r7, #3] @ 02073996
    b .L_02073978 @ 02073998
    .byte 0x00, 0x00, 0x08, 0x02, 0x00, 0x04, 0xa8, 0x01, 0x00, 0x04, 0xa9, 0x01, 0x00, 0x04, 0xaa, 0x01 @ 0207399a
    .byte 0x00, 0x04, 0xab, 0x01, 0x00, 0x04, 0xac, 0x01, 0x00, 0x04, 0xaf, 0x01, 0x00, 0x04, 0x74, 0x4c @ 020739aa
    .byte 0x0b, 0x02, 0xa4, 0x01, 0x00, 0x04, 0x40, 0x42, 0x0f, 0x00, 0x14, 0x02, 0x00, 0x04, 0x10, 0x00 @ 020739ba
    .byte 0x10, 0x04 @ 020739ca
.L_020739cc:
@ FUN_020739cc at 0x020739cc
    push {r4, lr} @ 020739cc
    ldr r2, [pc, #0x9c] @ 020739ce
    subs r1, #1 @ 020739d0
    ldrh r3, [r2] @ 020739d2
    movs r4, #0 @ 020739d4
    mov ip, r3 @ 020739d6
    movs r3, #0 @ 020739d8
    strh r3, [r2] @ 020739da
    movs r3, #0x80 @ 020739dc
    lsls r3, r3, #0xd @ 020739de
    adds r2, #0xc @ 020739e0
    str r3, [r2] @ 020739e2
    movs r3, #3 @ 020739e4
    ands r0, r3 @ 020739e6
    movs r3, #0x20 @ 020739e8
    negs r3, r3 @ 020739ea
    lsls r0, r0, #2 @ 020739ec
    orrs r0, r3 @ 020739ee
    lsls r0, r0, #0x18 @ 020739f0
    ldr r3, [pc, #0x7c] @ 020739f2
    lsrs r0, r0, #0x18 @ 020739f4
    strb r0, [r3] @ 020739f6
    lsls r1, r1, #0x18 @ 020739f8
    adds r3, #1 @ 020739fa
    strb r4, [r3] @ 020739fc
    lsrs r1, r1, #0x18 @ 020739fe
    adds r3, #1 @ 02073a00
    strb r1, [r3] @ 02073a02
    adds r3, #1 @ 02073a04
    strb r4, [r3] @ 02073a06
    adds r3, #1 @ 02073a08
    strb r4, [r3] @ 02073a0a
    adds r3, #1 @ 02073a0c
    strb r4, [r3] @ 02073a0e
    adds r3, #1 @ 02073a10
    strb r4, [r3] @ 02073a12
    adds r3, #1 @ 02073a14
    strb r4, [r3] @ 02073a16
    ldr r3, [pc, #0x58] @ 02073a18
    ldr r1, [pc, #0x5c] @ 02073a1a
    ldr r3, [r3] @ 02073a1c
    subs r2, #0x70 @ 02073a1e
    str r3, [r2] @ 02073a20
    b .L_02073a2a @ 02073a22
.L_02073a24:
    subs r1, #1 @ 02073a24
    cmp r1, #0 @ 02073a26
    beq .L_02073a62 @ 02073a28
.L_02073a2a:
    ldr r3, [r2] @ 02073a2a
    cmp r3, #0 @ 02073a2c
    blt .L_02073a24 @ 02073a2e
    cmp r1, #0 @ 02073a30
    ble .L_02073a62 @ 02073a32
    movs r1, #0x80 @ 02073a34
    ldr r2, [pc, #0x44] @ 02073a36
    ldr r0, [pc, #0x44] @ 02073a38
    lsls r1, r1, #0xd @ 02073a3a
    b .L_02073a44 @ 02073a3c
.L_02073a3e:
    subs r2, #1 @ 02073a3e
    cmp r2, #0 @ 02073a40
    beq .L_02073a5a @ 02073a42
.L_02073a44:
    ldr r3, [r0] @ 02073a44
    tst r3, r1 @ 02073a46
    beq .L_02073a3e @ 02073a48
    str r1, [r0] @ 02073a4a
    cmp r2, #0 @ 02073a4c
    ble .L_02073a62 @ 02073a4e
    ldr r3, [pc, #0x18] @ 02073a50
    mov r2, ip @ 02073a52
    movs r0, #1 @ 02073a54
    strh r2, [r3] @ 02073a56
    b .L_02073a6a @ 02073a58
.L_02073a5a:
    movs r3, #0x80 @ 02073a5a
    ldr r2, [pc, #0x20] @ 02073a5c
    lsls r3, r3, #0xd @ 02073a5e
    str r3, [r2] @ 02073a60
.L_02073a62:
    ldr r3, [pc, #8] @ 02073a62
    mov r2, ip @ 02073a64
    strh r2, [r3] @ 02073a66
    movs r0, #0 @ 02073a68
.L_02073a6a:
    pop {r4, pc} @ 02073a6a
    .byte 0x08, 0x02, 0x00, 0x04, 0xa8, 0x01, 0x00, 0x04, 0x74, 0x4c, 0x0b, 0x02, 0xa0, 0x86, 0x01, 0x00 @ 02073a6c
    .byte 0x40, 0x42, 0x0f, 0x00, 0x14, 0x02, 0x00, 0x04 @ 02073a7c
.L_02073a84:
@ FUN_02073a84 at 0x02073a84
    push {r4, r5, r6, lr} @ 02073a84
    mov r6, r8 @ 02073a86
    push {r6} @ 02073a88
    ldr r4, [pc, #0xbc] @ 02073a8a
    lsrs r6, r2, #0x18 @ 02073a8c
    ldrh r3, [r4] @ 02073a8e
    lsls r5, r2, #0x10 @ 02073a90
    mov r8, r3 @ 02073a92
    movs r3, #0 @ 02073a94
    mov ip, r3 @ 02073a96
    movs r3, #0 @ 02073a98
    strh r3, [r4] @ 02073a9a
    movs r3, #0x80 @ 02073a9c
    lsls r3, r3, #0xd @ 02073a9e
    adds r4, #0xc @ 02073aa0
    str r3, [r4] @ 02073aa2
    movs r3, #0x80 @ 02073aa4
    negs r3, r3 @ 02073aa6
    subs r4, #0x73 @ 02073aa8
    strb r3, [r4] @ 02073aaa
    movs r3, #3 @ 02073aac
    ands r0, r3 @ 02073aae
    movs r3, #0x10 @ 02073ab0
    negs r3, r3 @ 02073ab2
    lsls r0, r0, #2 @ 02073ab4
    orrs r0, r3 @ 02073ab6
    movs r3, #0x40 @ 02073ab8
    orrs r1, r3 @ 02073aba
    lsls r0, r0, #0x18 @ 02073abc
    ldr r3, [pc, #0x8c] @ 02073abe
    lsrs r0, r0, #0x18 @ 02073ac0
    strb r0, [r3] @ 02073ac2
    lsls r1, r1, #0x18 @ 02073ac4
    adds r3, #1 @ 02073ac6
    mov r0, ip @ 02073ac8
    strb r0, [r3] @ 02073aca
    lsrs r1, r1, #0x18 @ 02073acc
    adds r3, #1 @ 02073ace
    strb r1, [r3] @ 02073ad0
    lsls r4, r2, #8 @ 02073ad2
    adds r3, #1 @ 02073ad4
    strb r6, [r3] @ 02073ad6
    lsrs r4, r4, #0x18 @ 02073ad8
    adds r3, #1 @ 02073ada
    strb r4, [r3] @ 02073adc
    lsrs r5, r5, #0x18 @ 02073ade
    adds r3, #1 @ 02073ae0
    lsls r2, r2, #0x18 @ 02073ae2
    strb r5, [r3] @ 02073ae4
    lsrs r2, r2, #0x18 @ 02073ae6
    adds r3, #1 @ 02073ae8
    strb r2, [r3] @ 02073aea
    adds r3, #1 @ 02073aec
    strb r0, [r3] @ 02073aee
    ldr r3, [pc, #0x5c] @ 02073af0
    ldr r2, [pc, #0x60] @ 02073af2
    ldr r3, [r3] @ 02073af4
    ldr r1, [pc, #0x60] @ 02073af6
    str r3, [r2] @ 02073af8
    b .L_02073b02 @ 02073afa
.L_02073afc:
    subs r1, #1 @ 02073afc
    cmp r1, #0 @ 02073afe
    beq .L_02073b3a @ 02073b00
.L_02073b02:
    ldr r3, [r2] @ 02073b02
    cmp r3, #0 @ 02073b04
    blt .L_02073afc @ 02073b06
    cmp r1, #0 @ 02073b08
    ble .L_02073b3a @ 02073b0a
    movs r1, #0x80 @ 02073b0c
    ldr r2, [pc, #0x4c] @ 02073b0e
    ldr r0, [pc, #0x4c] @ 02073b10
    lsls r1, r1, #0xd @ 02073b12
    b .L_02073b1c @ 02073b14
.L_02073b16:
    subs r2, #1 @ 02073b16
    cmp r2, #0 @ 02073b18
    beq .L_02073b32 @ 02073b1a
.L_02073b1c:
    ldr r3, [r0] @ 02073b1c
    tst r3, r1 @ 02073b1e
    beq .L_02073b16 @ 02073b20
    str r1, [r0] @ 02073b22
    cmp r2, #0 @ 02073b24
    ble .L_02073b3a @ 02073b26
    ldr r3, [pc, #0x1c] @ 02073b28
    mov r2, r8 @ 02073b2a
    movs r0, #1 @ 02073b2c
    strh r2, [r3] @ 02073b2e
    b .L_02073b42 @ 02073b30
.L_02073b32:
    movs r3, #0x80 @ 02073b32
    ldr r2, [pc, #0x28] @ 02073b34
    lsls r3, r3, #0xd @ 02073b36
    str r3, [r2] @ 02073b38
.L_02073b3a:
    ldr r3, [pc, #0xc] @ 02073b3a
    mov r2, r8 @ 02073b3c
    strh r2, [r3] @ 02073b3e
    movs r0, #0 @ 02073b40
.L_02073b42:
    pop {r2} @ 02073b42
    mov r8, r2 @ 02073b44
    pop {r4, r5, r6, pc} @ 02073b46
    .byte 0x08, 0x02, 0x00, 0x04, 0xa8, 0x01, 0x00, 0x04, 0x74, 0x4c, 0x0b, 0x02, 0xa4, 0x01, 0x00, 0x04 @ 02073b48
    .byte 0xa0, 0x86, 0x01, 0x00, 0x40, 0x42, 0x0f, 0x00, 0x14, 0x02, 0x00, 0x04 @ 02073b58
@ FUN_02073b64 at 0x02073b64
    push {r4, lr} @ 02073b64
    sub sp, #8 @ 02073b66
    adds r4, r0, #0 @ 02073b68
    adds r3, r1, #0 @ 02073b6a
    str r2, [sp] @ 02073b6c
    adds r1, r4, #0 @ 02073b6e
    movs r2, #0 @ 02073b70
    movs r0, #0 @ 02073b72
    bl .L_0207383c @ 02073b74
    add sp, #8 @ 02073b78
    pop {r4, pc} @ 02073b7a
@ FUN_02073b7c at 0x02073b7c
    push {r4, lr} @ 02073b7c
    sub sp, #8 @ 02073b7e
    adds r4, r0, #0 @ 02073b80
    adds r3, r1, #0 @ 02073b82
    str r2, [sp] @ 02073b84
    adds r1, r4, #0 @ 02073b86
    movs r2, #1 @ 02073b88
    movs r0, #0 @ 02073b8a
    bl .L_0207383c @ 02073b8c
    add sp, #8 @ 02073b90
    pop {r4, pc} @ 02073b92
@ FUN_02073b94 at 0x02073b94
    push {r4, lr} @ 02073b94
    sub sp, #0x10 @ 02073b96
    add r4, sp, #8 @ 02073b98
    movs r3, #0 @ 02073b9a
    str r3, [sp] @ 02073b9c
    movs r0, #0 @ 02073b9e
    movs r3, #0xd @ 02073ba0
    adds r1, r4, #0 @ 02073ba2
    movs r2, #0 @ 02073ba4
    bl .L_0207383c @ 02073ba6
    ldrb r3, [r4] @ 02073baa
    movs r0, #0 @ 02073bac
    cmp r3, #0xd @ 02073bae
    beq .L_02073bb4 @ 02073bb0
    movs r0, #1 @ 02073bb2
.L_02073bb4:
    movs r3, #1 @ 02073bb4
    eors r0, r3 @ 02073bb6
    lsls r0, r0, #0x18 @ 02073bb8
    lsrs r0, r0, #0x18 @ 02073bba
    add sp, #0x10 @ 02073bbc
    pop {r4, pc} @ 02073bbe
.L_02073bc0:
@ FUN_02073bc0 at 0x02073bc0
    push {lr} @ 02073bc0
    sub sp, #4 @ 02073bc2
    bl .L_020737cc @ 02073bc4
    add sp, #4 @ 02073bc8
    pop {pc} @ 02073bca
@ FUN_02073bcc at 0x02073bcc
    push {lr} @ 02073bcc
    sub sp, #4 @ 02073bce
    bl .L_02073bc0 @ 02073bd0
    add sp, #4 @ 02073bd4
    pop {pc} @ 02073bd6
@ FUN_02073bd8 at 0x02073bd8
    push {r4, r5, r6, r7, lr} @ 02073bd8
    mov r7, fp @ 02073bda
    mov r6, sl @ 02073bdc
    mov r5, sb @ 02073bde
    mov r4, r8 @ 02073be0
    push {r4, r5, r6, r7} @ 02073be2
    sub sp, #0x3c @ 02073be4
    adds r4, r0, #0 @ 02073be6
    adds r0, r2, #0 @ 02073be8
    subs r2, r1, #1 @ 02073bea
    str r2, [sp, #0x24] @ 02073bec
    bhs .L_02073bf2 @ 02073bee
    b .L_02073e1c @ 02073bf0
.L_02073bf2:
    movs r3, #0x2a @ 02073bf2
    lsls r4, r4, #9 @ 02073bf4
    add r3, sp @ 02073bf6
    str r4, [sp, #0x18] @ 02073bf8
    str r0, [sp, #0x1c] @ 02073bfa
    mov sl, r3 @ 02073bfc
.L_02073bfe:
    movs r1, #0x80 @ 02073bfe
    lsls r1, r1, #2 @ 02073c00
    mov r2, sl @ 02073c02
    ldr r0, [sp, #0x1c] @ 02073c04
    bl .L_02074b88 @ 02073c06
    ldr r2, [pc, #0x214] @ 02073c0a
    movs r1, #0 @ 02073c0c
    ldrh r3, [r2] @ 02073c0e
    str r3, [sp, #0x20] @ 02073c10
    movs r3, #0 @ 02073c12
    strh r3, [r2] @ 02073c14
    movs r3, #0x80 @ 02073c16
    negs r3, r3 @ 02073c18
    subs r2, #0x67 @ 02073c1a
    strb r3, [r2] @ 02073c1c
    adds r2, #7 @ 02073c1e
    strb r3, [r2] @ 02073c20
    ldr r3, [pc, #0x200] @ 02073c22
    subs r2, #4 @ 02073c24
    strb r1, [r3] @ 02073c26
    adds r3, #1 @ 02073c28
    strb r1, [r3] @ 02073c2a
    adds r3, #1 @ 02073c2c
    strb r1, [r3] @ 02073c2e
    adds r3, #1 @ 02073c30
    strb r1, [r3] @ 02073c32
    adds r3, #1 @ 02073c34
    strb r1, [r3] @ 02073c36
    adds r3, #1 @ 02073c38
    strb r1, [r3] @ 02073c3a
    adds r3, #1 @ 02073c3c
    strb r1, [r3] @ 02073c3e
    ldr r3, [pc, #0x1e4] @ 02073c40
    ldr r1, [pc, #0x1e8] @ 02073c42
    str r3, [r2] @ 02073c44
    b .L_02073c50 @ 02073c46
.L_02073c48:
    subs r1, #1 @ 02073c48
    cmp r1, #0 @ 02073c4a
    bne .L_02073c50 @ 02073c4c
    b .L_02073e06 @ 02073c4e
.L_02073c50:
    ldr r3, [r2] @ 02073c50
    cmp r3, #0 @ 02073c52
    blt .L_02073c48 @ 02073c54
    cmp r1, #0 @ 02073c56
    bgt .L_02073c5c @ 02073c58
    b .L_02073e06 @ 02073c5a
.L_02073c5c:
    ldr r5, [pc, #0x1d0] @ 02073c5c
    ldr r7, [pc, #0x1d4] @ 02073c5e
    movs r4, #0 @ 02073c60
    ldr r6, [sp, #0x1c] @ 02073c62
    mov r8, r4 @ 02073c64
    mov sb, r5 @ 02073c66
    mov fp, r7 @ 02073c68
.L_02073c6a:
    movs r3, #0x80 @ 02073c6a
    ldr r2, [pc, #0x1c8] @ 02073c6c
    negs r3, r3 @ 02073c6e
    mov r0, r8 @ 02073c70
    strb r3, [r2] @ 02073c72
    cmp r0, #0x3f @ 02073c74
    ble .L_02073c7a @ 02073c76
    b .L_02073dd0 @ 02073c78
.L_02073c7a:
    ldrb r1, [r6] @ 02073c7a
    str r1, [sp, #0x14] @ 02073c7c
    ldrb r2, [r6, #1] @ 02073c7e
    str r2, [sp, #0xc] @ 02073c80
    ldrb r1, [r6, #2] @ 02073c82
    ldrb r0, [r6, #3] @ 02073c84
    ldrb r4, [r6, #4] @ 02073c86
    ldrb r5, [r6, #5] @ 02073c88
    ldrb r7, [r6, #6] @ 02073c8a
    ldrb r3, [r6, #7] @ 02073c8c
.L_02073c8e:
    mov r2, sp @ 02073c8e
    mov ip, r3 @ 02073c90
    ldrb r3, [r2, #0x14] @ 02073c92
    ldr r2, [pc, #0x1a4] @ 02073c94
    strb r3, [r2] @ 02073c96
    mov r2, sp @ 02073c98
    ldrb r3, [r2, #0xc] @ 02073c9a
    ldr r2, [pc, #0x184] @ 02073c9c
    strb r3, [r2] @ 02073c9e
    ldr r3, [pc, #0x19c] @ 02073ca0
    adds r2, #1 @ 02073ca2
    strb r1, [r2] @ 02073ca4
    strb r0, [r3] @ 02073ca6
    ldr r0, [pc, #0x198] @ 02073ca8
    ldr r1, [pc, #0x19c] @ 02073caa
    strb r4, [r0] @ 02073cac
    mov r2, sb @ 02073cae
    mov r3, fp @ 02073cb0
    mov r4, ip @ 02073cb2
    strb r5, [r1] @ 02073cb4
    strb r7, [r2] @ 02073cb6
    ldr r2, [pc, #0x190] @ 02073cb8
    strb r4, [r3] @ 02073cba
    ldr r3, [pc, #0x190] @ 02073cbc
    adds r7, r2, #0 @ 02073cbe
    str r3, [r2] @ 02073cc0
    ldr r1, [pc, #0x190] @ 02073cc2
    movs r2, #0x80 @ 02073cc4
    lsls r2, r2, #0x10 @ 02073cc6
.L_02073cc8:
    ldr r3, [r7] @ 02073cc8
    tst r3, r2 @ 02073cca
    beq .L_02073cd0 @ 02073ccc
    ldr r3, [r1] @ 02073cce
.L_02073cd0:
    ldr r3, [r7] @ 02073cd0
    cmp r3, #0 @ 02073cd2
    blt .L_02073cc8 @ 02073cd4
    movs r5, #1 @ 02073cd6
    add r8, r5 @ 02073cd8
    mov r0, r8 @ 02073cda
    adds r6, #8 @ 02073cdc
    cmp r0, #0x41 @ 02073cde
    bne .L_02073c6a @ 02073ce0
    ldr r3, [pc, #0x154] @ 02073ce2
    movs r1, #0x80 @ 02073ce4
    negs r1, r1 @ 02073ce6
    strb r1, [r3] @ 02073ce8
    ldr r2, [sp, #0x18] @ 02073cea
    ldr r3, [sp, #0x18] @ 02073cec
    lsrs r2, r2, #0x18 @ 02073cee
    mov ip, r2 @ 02073cf0
    lsls r0, r3, #8 @ 02073cf2
    lsls r4, r3, #0x10 @ 02073cf4
    lsls r5, r3, #0x18 @ 02073cf6
    ldr r2, [pc, #0x140] @ 02073cf8
    movs r3, #0xb @ 02073cfa
    negs r3, r3 @ 02073cfc
    strb r3, [r2] @ 02073cfe
    ldr r3, [pc, #0x120] @ 02073d00
    movs r2, #0x58 @ 02073d02
    strb r1, [r3] @ 02073d04
    adds r3, #1 @ 02073d06
    strb r2, [r3] @ 02073d08
    mov r1, ip @ 02073d0a
    adds r3, #1 @ 02073d0c
    strb r1, [r3] @ 02073d0e
    lsrs r0, r0, #0x18 @ 02073d10
    adds r3, #1 @ 02073d12
    strb r0, [r3] @ 02073d14
    lsrs r4, r4, #0x18 @ 02073d16
    adds r3, #1 @ 02073d18
    strb r4, [r3] @ 02073d1a
    lsrs r5, r5, #0x18 @ 02073d1c
    adds r3, #1 @ 02073d1e
    strb r5, [r3] @ 02073d20
    movs r2, #0 @ 02073d22
    adds r3, #1 @ 02073d24
    strb r2, [r3] @ 02073d26
    movs r1, #0x80 @ 02073d28
    ldr r3, [pc, #0x124] @ 02073d2a
    ldr r2, [pc, #0x128] @ 02073d2c
    ldr r0, [pc, #0x12c] @ 02073d2e
    lsls r1, r1, #0xd @ 02073d30
    str r3, [r7] @ 02073d32
    b .L_02073d3c @ 02073d34
.L_02073d36:
    subs r2, #1 @ 02073d36
    cmp r2, #0 @ 02073d38
    beq .L_02073dfe @ 02073d3a
.L_02073d3c:
    ldr r3, [r0] @ 02073d3c
    tst r3, r1 @ 02073d3e
    beq .L_02073d36 @ 02073d40
    str r1, [r0] @ 02073d42
    cmp r2, #0 @ 02073d44
    ble .L_02073e06 @ 02073d46
    mov r5, sp @ 02073d48
    movs r0, #0x80 @ 02073d4a
    ldr r4, [pc, #0xfc] @ 02073d4c
    ldr r6, [pc, #0x104] @ 02073d4e
    movs r1, #0 @ 02073d50
    adds r5, #0x32 @ 02073d52
    lsls r0, r0, #0x10 @ 02073d54
.L_02073d56:
    ldr r3, [r4] @ 02073d56
    tst r3, r0 @ 02073d58
    beq .L_02073d68 @ 02073d5a
    ldr r2, [r6] @ 02073d5c
    cmp r1, #2 @ 02073d5e
    beq .L_02073dee @ 02073d60
    cmp r1, #3 @ 02073d62
    beq .L_02073dc8 @ 02073d64
.L_02073d66:
    adds r1, #1 @ 02073d66
.L_02073d68:
    ldr r3, [r4] @ 02073d68
    cmp r3, #0 @ 02073d6a
    blt .L_02073d56 @ 02073d6c
    ldr r6, [pc, #0xf0] @ 02073d6e
    movs r3, #0 @ 02073d70
    strb r3, [r5, #3] @ 02073d72
    ldr r3, [r6] @ 02073d74
    movs r0, #0 @ 02073d76
    str r3, [sp] @ 02073d78
    adds r1, r5, #0 @ 02073d7a
    movs r2, #0 @ 02073d7c
    movs r3, #0xd @ 02073d7e
    bl .L_0207383c @ 02073d80
    ldr r4, [pc, #0xdc] @ 02073d84
    movs r7, #0x1f @ 02073d86
    b .L_02073da0 @ 02073d88
.L_02073d8a:
    ldr r3, [r6] @ 02073d8a
    movs r0, #0 @ 02073d8c
    str r3, [sp] @ 02073d8e
    adds r1, r5, #0 @ 02073d90
    movs r2, #0 @ 02073d92
    movs r3, #0xd @ 02073d94
    subs r4, #1 @ 02073d96
    bl .L_0207383c @ 02073d98
    cmp r4, #0 @ 02073d9c
    beq .L_02073e06 @ 02073d9e
.L_02073da0:
    ldrb r3, [r5, #3] @ 02073da0
    ands r3, r7 @ 02073da2
    cmp r3, #9 @ 02073da4
    bne .L_02073d8a @ 02073da6
    ldr r2, [sp, #0x20] @ 02073da8
    ldr r3, [pc, #0x74] @ 02073daa
    strh r2, [r3] @ 02073dac
    ldr r2, [sp, #0x24] @ 02073dae
    subs r2, #1 @ 02073db0
    str r2, [sp, #0x24] @ 02073db2
    blo .L_02073e1c @ 02073db4
    ldr r3, [sp, #0x18] @ 02073db6
    ldr r5, [sp, #0x1c] @ 02073db8
    movs r4, #0x80 @ 02073dba
    lsls r4, r4, #2 @ 02073dbc
    adds r3, r3, r4 @ 02073dbe
    adds r5, r5, r4 @ 02073dc0
    str r3, [sp, #0x18] @ 02073dc2
    str r5, [sp, #0x1c] @ 02073dc4
    b .L_02073bfe @ 02073dc6
.L_02073dc8:
    lsrs r3, r2, #8 @ 02073dc8
    strb r2, [r5, #4] @ 02073dca
    strb r3, [r5, #5] @ 02073dcc
    b .L_02073d66 @ 02073dce
.L_02073dd0:
    mov r5, sl @ 02073dd0
    ldrb r5, [r5] @ 02073dd2
    mov r7, sl @ 02073dd4
    str r5, [sp, #0x14] @ 02073dd6
    ldrb r7, [r7, #1] @ 02073dd8
    mov r2, sl @ 02073dda
    str r7, [sp, #0xc] @ 02073ddc
    mov r0, sl @ 02073dde
    ldrb r1, [r0, #2] @ 02073de0
    ldrb r4, [r2, #4] @ 02073de2
    ldrb r0, [r0, #3] @ 02073de4
    ldrb r5, [r2, #5] @ 02073de6
    ldrb r7, [r2, #6] @ 02073de8
    ldrb r3, [r2, #7] @ 02073dea
    b .L_02073c8e @ 02073dec
.L_02073dee:
    lsrs r3, r2, #8 @ 02073dee
    strb r3, [r5, #1] @ 02073df0
    lsrs r3, r2, #0x10 @ 02073df2
    strb r3, [r5, #2] @ 02073df4
    lsrs r3, r2, #0x18 @ 02073df6
    strb r2, [r5] @ 02073df8
    strb r3, [r5, #3] @ 02073dfa
    b .L_02073d66 @ 02073dfc
.L_02073dfe:
    movs r3, #0x80 @ 02073dfe
    ldr r2, [pc, #0x58] @ 02073e00
    lsls r3, r3, #0xd @ 02073e02
    str r3, [r2] @ 02073e04
.L_02073e06:
    ldr r2, [sp, #0x20] @ 02073e06
    ldr r3, [pc, #0x14] @ 02073e08
    movs r0, #0 @ 02073e0a
    strh r2, [r3] @ 02073e0c
.L_02073e0e:
    add sp, #0x3c @ 02073e0e
    pop {r2, r3, r4, r5} @ 02073e10
    mov r8, r2 @ 02073e12
    mov sb, r3 @ 02073e14
    mov sl, r4 @ 02073e16
    mov fp, r5 @ 02073e18
    pop {r4, r5, r6, r7, pc} @ 02073e1a
.L_02073e1c:
    movs r0, #1 @ 02073e1c
    b .L_02073e0e @ 02073e1e
    .byte 0x08, 0x02, 0x00, 0x04, 0xa9, 0x01, 0x00, 0x04, 0x00, 0x60, 0x40, 0xa0, 0xa0, 0x86, 0x01, 0x00 @ 02073e20
    .byte 0xae, 0x01, 0x00, 0x04, 0xaf, 0x01, 0x00, 0x04, 0xa1, 0x01, 0x00, 0x04, 0xa8, 0x01, 0x00, 0x04 @ 02073e30
    .byte 0xab, 0x01, 0x00, 0x04, 0xac, 0x01, 0x00, 0x04, 0xad, 0x01, 0x00, 0x04, 0xa4, 0x01, 0x00, 0x04 @ 02073e40
    .byte 0x00, 0x60, 0x40, 0xa7, 0x10, 0x00, 0x10, 0x04, 0x40, 0x42, 0x0f, 0x00, 0x14, 0x02, 0x00, 0x04 @ 02073e50
    .byte 0x70, 0x4c, 0x0b, 0x02, 0xb7, 0x0b, 0x00, 0x00 @ 02073e60
@ FUN_02073e68 at 0x02073e68
    push {lr} @ 02073e68
    ldr r2, [pc, #0x80] @ 02073e6a
    ldr r3, [pc, #0x80] @ 02073e6c
    movs r0, #0x80 @ 02073e6e
    str r3, [r2] @ 02073e70
    ldr r3, [pc, #0x80] @ 02073e72
    lsls r0, r0, #0xd @ 02073e74
    sub sp, #4 @ 02073e76
    str r0, [r3] @ 02073e78
    bl .L_0208024c @ 02073e7a
    bl .L_020737cc @ 02073e7e
    cmp r0, #0 @ 02073e82
    bne .L_02073e8c @ 02073e84
.L_02073e86:
    movs r0, #0 @ 02073e86
.L_02073e88:
    add sp, #4 @ 02073e88
    pop {pc} @ 02073e8a
.L_02073e8c:
    movs r1, #0x80 @ 02073e8c
    movs r0, #0 @ 02073e8e
    lsls r1, r1, #1 @ 02073e90
    bl .L_020739cc @ 02073e92
    cmp r0, #0 @ 02073e96
    beq .L_02073e86 @ 02073e98
    movs r0, #0 @ 02073e9a
    movs r1, #0 @ 02073e9c
    movs r2, #0 @ 02073e9e
    bl .L_02073a84 @ 02073ea0
    cmp r0, #0 @ 02073ea4
    beq .L_02073e86 @ 02073ea6
    movs r1, #8 @ 02073ea8
    movs r0, #0 @ 02073eaa
    bl .L_020739cc @ 02073eac
    movs r1, #0x80 @ 02073eb0
    lsls r1, r1, #1 @ 02073eb2
    movs r0, #0 @ 02073eb4
    bl .L_020739cc @ 02073eb6
    movs r2, #0 @ 02073eba
    movs r1, #0 @ 02073ebc
    movs r0, #0 @ 02073ebe
    bl .L_02073a84 @ 02073ec0
    movs r1, #8 @ 02073ec4
    movs r0, #0 @ 02073ec6
    bl .L_020739cc @ 02073ec8
    movs r2, #1 @ 02073ecc
    ldr r0, [pc, #0x28] @ 02073ece
    ldr r1, [pc, #0x28] @ 02073ed0
    ldr r3, [pc, #0x2c] @ 02073ed2
    bl .L_02074c84 @ 02073ed4
    lsls r0, r0, #0x18 @ 02073ed8
    movs r2, #0 @ 02073eda
    cmp r0, #0 @ 02073edc
    bne .L_02073ee2 @ 02073ede
    movs r2, #1 @ 02073ee0
.L_02073ee2:
    movs r3, #1 @ 02073ee2
    eors r3, r2 @ 02073ee4
    lsls r3, r3, #0x18 @ 02073ee6
    lsrs r0, r3, #0x18 @ 02073ee8
    b .L_02073e88 @ 02073eea
    .byte 0x74, 0x4c, 0x0b, 0x02, 0x00, 0x60, 0x40, 0xa0, 0x14, 0x02, 0x00, 0x04, 0x65, 0x3b, 0x07, 0x02 @ 02073eec
    .byte 0x7d, 0x3b, 0x07, 0x02, 0x70, 0x4c, 0x0b, 0x02 @ 02073efc
@ FUN_02073f04 at 0x02073f04
    push {r4, r5, r6, r7, lr} @ 02073f04
    mov r7, fp @ 02073f06
    mov r6, sl @ 02073f08
    mov r5, sb @ 02073f0a
    mov r4, r8 @ 02073f0c
    push {r4, r5, r6, r7} @ 02073f0e
    ldr r4, [pc, #0x1c0] @ 02073f10
    adds r7, r1, #0 @ 02073f12
    add sp, r4 @ 02073f14
    adds r5, r2, #0 @ 02073f16
    cmp r1, #0 @ 02073f18
    bne .L_02073f1e @ 02073f1a
    b .L_0207404e @ 02073f1c
.L_02073f1e:
    ldr r3, [pc, #0x1b8] @ 02073f1e
    mov sb, r2 @ 02073f20
    ldrh r2, [r3] @ 02073f22
    mov fp, r2 @ 02073f24
    movs r2, #0 @ 02073f26
    strh r2, [r3] @ 02073f28
    cmp r1, #1 @ 02073f2a
    bhi .L_02073f30 @ 02073f2c
    b .L_02074052 @ 02073f2e
.L_02073f30:
    lsls r3, r0, #9 @ 02073f30
    str r3, [sp] @ 02073f32
    movs r0, #2 @ 02073f34
    movs r3, #0x12 @ 02073f36
    movs r1, #0 @ 02073f38
    movs r2, #2 @ 02073f3a
    bl .L_0207383c @ 02073f3c
    subs r3, r7, #2 @ 02073f40
    mov sl, r3 @ 02073f42
    cmp r3, #0 @ 02073f44
    bne .L_02073f4a @ 02073f46
    b .L_020740cc @ 02073f48
.L_02073f4a:
    movs r3, #3 @ 02073f4a
    ands r3, r5 @ 02073f4c
    ldr r4, [pc, #0x18c] @ 02073f4e
    mov r8, r3 @ 02073f50
    movs r6, #0 @ 02073f52
.L_02073f54:
    mov r3, r8 @ 02073f54
    cmp r3, #0 @ 02073f56
    beq .L_0207400e @ 02073f58
    movs r2, #0x80 @ 02073f5a
    ldr r0, [pc, #0x180] @ 02073f5c
    add r1, sp, #8 @ 02073f5e
    lsls r2, r2, #2 @ 02073f60
    adds r3, r4, #0 @ 02073f62
    bl .L_0207fdcc @ 02073f64
    movs r2, #0x80 @ 02073f68
    adds r0, r5, #0 @ 02073f6a
    add r1, sp, #8 @ 02073f6c
    lsls r2, r2, #2 @ 02073f6e
    bl .L_02085988 @ 02073f70
.L_02073f74:
    movs r1, #0x80 @ 02073f74
    ldr r2, [pc, #0x16c] @ 02073f76
    ldr r0, [pc, #0x16c] @ 02073f78
    lsls r1, r1, #0xd @ 02073f7a
    b .L_02073f84 @ 02073f7c
.L_02073f7e:
    subs r2, #1 @ 02073f7e
    cmp r2, #0 @ 02073f80
    beq .L_0207401e @ 02073f82
.L_02073f84:
    ldr r3, [r0] @ 02073f84
    tst r3, r1 @ 02073f86
    beq .L_02073f7e @ 02073f88
    str r1, [r0] @ 02073f8a
    cmp r2, #0 @ 02073f8c
    ble .L_02074026 @ 02073f8e
    movs r3, #0x80 @ 02073f90
    lsls r3, r3, #2 @ 02073f92
    adds r6, #1 @ 02073f94
    adds r5, r5, r3 @ 02073f96
    cmp sl, r6 @ 02073f98
    bne .L_02073f54 @ 02073f9a
.L_02073f9c:
    mov r3, r8 @ 02073f9c
    cmp r3, #0 @ 02073f9e
    bne .L_02073fa4 @ 02073fa0
    b .L_0207409e @ 02073fa2
.L_02073fa4:
    add r6, sp, #8 @ 02073fa4
    movs r2, #0x80 @ 02073fa6
    ldr r3, [pc, #0x140] @ 02073fa8
    ldr r0, [pc, #0x134] @ 02073faa
    adds r1, r6, #0 @ 02073fac
    lsls r2, r2, #2 @ 02073fae
    bl .L_0207fdcc @ 02073fb0
    lsls r5, r7, #9 @ 02073fb4
    mov r3, sb @ 02073fb6
    adds r0, r3, r5 @ 02073fb8
    ldr r3, [pc, #0x134] @ 02073fba
    movs r2, #0x80 @ 02073fbc
    adds r0, r0, r3 @ 02073fbe
    adds r1, r6, #0 @ 02073fc0
    lsls r2, r2, #2 @ 02073fc2
    bl .L_02085988 @ 02073fc4
.L_02073fc8:
    movs r1, #0x80 @ 02073fc8
    ldr r2, [pc, #0x118] @ 02073fca
    ldr r0, [pc, #0x118] @ 02073fcc
    lsls r1, r1, #0xd @ 02073fce
    b .L_02073fd8 @ 02073fd0
.L_02073fd2:
    subs r2, #1 @ 02073fd2
    cmp r2, #0 @ 02073fd4
    beq .L_02074040 @ 02073fd6
.L_02073fd8:
    ldr r3, [r0] @ 02073fd8
    tst r3, r1 @ 02073fda
    beq .L_02073fd2 @ 02073fdc
    str r1, [r0] @ 02073fde
    cmp r2, #0 @ 02073fe0
    ble .L_02074048 @ 02073fe2
    mov r3, r8 @ 02073fe4
    cmp r3, #0 @ 02073fe6
    beq .L_020740b6 @ 02073fe8
    add r6, sp, #8 @ 02073fea
    movs r2, #0x80 @ 02073fec
    adds r1, r6, #0 @ 02073fee
    ldr r3, [pc, #0xe8] @ 02073ff0
    ldr r0, [pc, #0xec] @ 02073ff2
    lsls r2, r2, #2 @ 02073ff4
    bl .L_0207fdcc @ 02073ff6
    mov r3, sb @ 02073ffa
    adds r0, r3, r5 @ 02073ffc
    ldr r3, [pc, #0xf4] @ 02073ffe
    movs r2, #0x80 @ 02074000
    adds r0, r0, r3 @ 02074002
    adds r1, r6, #0 @ 02074004
    lsls r2, r2, #2 @ 02074006
    bl .L_02085988 @ 02074008
    b .L_02074084 @ 0207400c
.L_0207400e:
    movs r2, #0x80 @ 0207400e
    ldr r0, [pc, #0xcc] @ 02074010
    adds r1, r5, #0 @ 02074012
    lsls r2, r2, #2 @ 02074014
    adds r3, r4, #0 @ 02074016
    bl .L_0207fdcc @ 02074018
    b .L_02073f74 @ 0207401c
.L_0207401e:
    movs r3, #0x80 @ 0207401e
    ldr r2, [pc, #0xc4] @ 02074020
    lsls r3, r3, #0xd @ 02074022
    str r3, [r2] @ 02074024
.L_02074026:
    ldr r3, [pc, #0xb0] @ 02074026
    mov r2, fp @ 02074028
    strh r2, [r3] @ 0207402a
    movs r0, #0 @ 0207402c
.L_0207402e:
    movs r3, #0x83 @ 0207402e
    lsls r3, r3, #2 @ 02074030
    add sp, r3 @ 02074032
    pop {r2, r3, r4, r5} @ 02074034
    mov r8, r2 @ 02074036
    mov sb, r3 @ 02074038
    mov sl, r4 @ 0207403a
    mov fp, r5 @ 0207403c
    pop {r4, r5, r6, r7, pc} @ 0207403e
.L_02074040:
    movs r3, #0x80 @ 02074040
    ldr r2, [pc, #0xa4] @ 02074042
    lsls r3, r3, #0xd @ 02074044
    str r3, [r2] @ 02074046
.L_02074048:
    ldr r3, [pc, #0x8c] @ 02074048
    mov r2, fp @ 0207404a
    strh r2, [r3] @ 0207404c
.L_0207404e:
    movs r0, #0 @ 0207404e
    b .L_0207402e @ 02074050
.L_02074052:
    lsls r3, r0, #9 @ 02074052
    str r3, [sp] @ 02074054
    movs r0, #2 @ 02074056
    movs r3, #0x11 @ 02074058
    movs r1, #0 @ 0207405a
    movs r2, #3 @ 0207405c
    bl .L_0207383c @ 0207405e
    movs r3, #3 @ 02074062
    tst r5, r3 @ 02074064
    beq .L_0207408e @ 02074066
    add r6, sp, #8 @ 02074068
    movs r2, #0x80 @ 0207406a
    ldr r0, [pc, #0x70] @ 0207406c
    adds r1, r6, #0 @ 0207406e
    lsls r2, r2, #2 @ 02074070
    ldr r3, [pc, #0x68] @ 02074072
    bl .L_0207fdcc @ 02074074
    movs r2, #0x80 @ 02074078
    adds r0, r5, #0 @ 0207407a
    adds r1, r6, #0 @ 0207407c
    lsls r2, r2, #2 @ 0207407e
    bl .L_02085988 @ 02074080
.L_02074084:
    ldr r3, [pc, #0x50] @ 02074084
    mov r2, fp @ 02074086
    movs r0, #1 @ 02074088
    strh r2, [r3] @ 0207408a
    b .L_0207402e @ 0207408c
.L_0207408e:
    movs r2, #0x80 @ 0207408e
    ldr r3, [pc, #0x48] @ 02074090
    ldr r0, [pc, #0x4c] @ 02074092
    adds r1, r5, #0 @ 02074094
    lsls r2, r2, #2 @ 02074096
    bl .L_0207fdcc @ 02074098
    b .L_02074084 @ 0207409c
.L_0207409e:
    mov r3, sb @ 0207409e
    lsls r5, r7, #9 @ 020740a0
    adds r1, r3, r5 @ 020740a2
    ldr r3, [pc, #0x48] @ 020740a4
    movs r2, #0x80 @ 020740a6
    adds r1, r1, r3 @ 020740a8
    ldr r0, [pc, #0x34] @ 020740aa
    ldr r3, [pc, #0x3c] @ 020740ac
    lsls r2, r2, #2 @ 020740ae
    bl .L_0207fdcc @ 020740b0
    b .L_02073fc8 @ 020740b4
.L_020740b6:
    mov r3, sb @ 020740b6
    adds r1, r3, r5 @ 020740b8
    ldr r3, [pc, #0x38] @ 020740ba
    movs r2, #0x80 @ 020740bc
    adds r1, r1, r3 @ 020740be
    ldr r0, [pc, #0x1c] @ 020740c0
    ldr r3, [pc, #0x18] @ 020740c2
    lsls r2, r2, #2 @ 020740c4
    bl .L_0207fdcc @ 020740c6
    b .L_02074084 @ 020740ca
.L_020740cc:
    movs r3, #3 @ 020740cc
    ands r5, r3 @ 020740ce
    mov r8, r5 @ 020740d0
    b .L_02073f9c @ 020740d2
    .byte 0xf4, 0xfd, 0xff, 0xff, 0x08, 0x02, 0x00, 0x04, 0xb4, 0xed, 0x08, 0x02, 0x00, 0x60, 0x40, 0xa1 @ 020740d4
    .byte 0x40, 0x42, 0x0f, 0x00, 0x14, 0x02, 0x00, 0x04, 0xbc, 0xed, 0x08, 0x02, 0x00, 0xfc, 0xff, 0xff @ 020740e4
    .byte 0x00, 0xfe, 0xff, 0xff @ 020740f4
.L_020740f8:
@ FUN_020740f8 at 0x020740f8
    push {r4, lr} @ 020740f8
    ldr r2, [pc, #0xa8] @ 020740fa
    movs r3, #1 @ 020740fc
    adds r4, r1, #0 @ 020740fe
    negs r3, r3 @ 02074100
    ldr r1, [pc, #0xa4] @ 02074102
    strb r3, [r2] @ 02074104
    movs r2, #0x80 @ 02074106
.L_02074108:
    ldrh r3, [r1] @ 02074108
    tst r3, r2 @ 0207410a
    bne .L_02074108 @ 0207410c
    ldr r2, [pc, #0x94] @ 0207410e
    ldrb r3, [r2] @ 02074110
    movs r3, #0x40 @ 02074112
    orrs r3, r0 @ 02074114
    lsls r3, r3, #0x18 @ 02074116
    lsrs r3, r3, #0x18 @ 02074118
    ldr r0, [pc, #0x8c] @ 0207411a
    strb r3, [r2] @ 0207411c
    movs r2, #0x80 @ 0207411e
.L_02074120:
    ldrh r3, [r0] @ 02074120
    tst r3, r2 @ 02074122
    bne .L_02074120 @ 02074124
    ldr r3, [pc, #0x7c] @ 02074126
    ldr r0, [pc, #0x7c] @ 02074128
    ldrb r2, [r3] @ 0207412a
    lsrs r2, r4, #0x18 @ 0207412c
    strb r2, [r3] @ 0207412e
    movs r2, #0x80 @ 02074130
.L_02074132:
    ldrh r3, [r0] @ 02074132
    tst r3, r2 @ 02074134
    bne .L_02074132 @ 02074136
    ldr r3, [pc, #0x68] @ 02074138
    ldr r0, [pc, #0x6c] @ 0207413a
    ldrb r2, [r3] @ 0207413c
    lsls r2, r4, #8 @ 0207413e
    lsrs r2, r2, #0x18 @ 02074140
    strb r2, [r3] @ 02074142
    movs r2, #0x80 @ 02074144
.L_02074146:
    ldrh r3, [r0] @ 02074146
    tst r3, r2 @ 02074148
    bne .L_02074146 @ 0207414a
    ldr r3, [pc, #0x54] @ 0207414c
    ldr r0, [pc, #0x58] @ 0207414e
    ldrb r2, [r3] @ 02074150
    lsls r2, r4, #0x10 @ 02074152
    lsrs r2, r2, #0x18 @ 02074154
    strb r2, [r3] @ 02074156
    movs r2, #0x80 @ 02074158
.L_0207415a:
    ldrh r3, [r0] @ 0207415a
    tst r3, r2 @ 0207415c
    bne .L_0207415a @ 0207415e
    ldr r3, [pc, #0x40] @ 02074160
    ldr r1, [pc, #0x44] @ 02074162
    ldrb r2, [r3] @ 02074164
    lsls r2, r4, #0x18 @ 02074166
    lsrs r2, r2, #0x18 @ 02074168
    strb r2, [r3] @ 0207416a
    movs r2, #0x80 @ 0207416c
.L_0207416e:
    ldrh r3, [r1] @ 0207416e
    tst r3, r2 @ 02074170
    bne .L_0207416e @ 02074172
    ldr r3, [pc, #0x2c] @ 02074174
    ldr r1, [pc, #0x30] @ 02074176
    ldrb r2, [r3] @ 02074178
    movs r2, #0x6b @ 0207417a
    negs r2, r2 @ 0207417c
    strb r2, [r3] @ 0207417e
    movs r2, #0x80 @ 02074180
.L_02074182:
    ldrh r3, [r1] @ 02074182
    tst r3, r2 @ 02074184
    bne .L_02074182 @ 02074186
    ldr r3, [pc, #0x18] @ 02074188
    ldr r1, [pc, #0x1c] @ 0207418a
    ldrb r2, [r3] @ 0207418c
    movs r2, #1 @ 0207418e
    negs r2, r2 @ 02074190
    strb r2, [r3] @ 02074192
    movs r2, #0x80 @ 02074194
.L_02074196:
    ldrh r3, [r1] @ 02074196
    tst r3, r2 @ 02074198
    bne .L_02074196 @ 0207419a
    ldr r3, [pc, #4] @ 0207419c
    ldrb r3, [r3] @ 0207419e
    pop {r4, pc} @ 020741a0
    .byte 0x00, 0x00, 0xa2, 0x01, 0x00, 0x04, 0xa0, 0x01, 0x00, 0x04 @ 020741a2
.L_020741ac:
@ FUN_020741ac at 0x020741ac
    push {r4, r5, r6, r7, lr} @ 020741ac
    adds r7, r1, #0 @ 020741ae
    movs r5, #1 @ 020741b0
    movs r4, #0x80 @ 020741b2
    ldr r6, [pc, #0x28] @ 020741b4
    ldr r1, [pc, #0x2c] @ 020741b6
    mov ip, r0 @ 020741b8
    negs r5, r5 @ 020741ba
    movs r0, #0 @ 020741bc
    movs r2, #0x80 @ 020741be
    lsls r4, r4, #1 @ 020741c0
.L_020741c2:
    strb r5, [r6] @ 020741c2
.L_020741c4:
    ldrh r3, [r1] @ 020741c4
    tst r3, r2 @ 020741c6
    bne .L_020741c4 @ 020741c8
    ldrb r3, [r6] @ 020741ca
    ands r3, r7 @ 020741cc
    cmp r3, ip @ 020741ce
    beq .L_020741dc @ 020741d0
    adds r0, #1 @ 020741d2
    cmp r0, r4 @ 020741d4
    bne .L_020741c2 @ 020741d6
    movs r0, #0 @ 020741d8
    b .L_020741de @ 020741da
.L_020741dc:
    movs r0, #1 @ 020741dc
.L_020741de:
    pop {r4, r5, r6, r7, pc} @ 020741de
    .byte 0xa2, 0x01, 0x00, 0x04, 0xa0, 0x01, 0x00, 0x04 @ 020741e0
.L_020741e8:
@ FUN_020741e8 at 0x020741e8
    push {lr} @ 020741e8
    adds r3, r0, #0 @ 020741ea
    ldr r0, [pc, #0x18] @ 020741ec
    sub sp, #4 @ 020741ee
    strb r3, [r0, #1] @ 020741f0
    bl .L_0207fda8 @ 020741f2
    ldr r2, [pc, #0x14] @ 020741f6
    ldr r3, [pc, #0x14] @ 020741f8
    str r3, [r2] @ 020741fa
.L_020741fc:
    ldr r3, [r2] @ 020741fc
    cmp r3, #0 @ 020741fe
    blt .L_020741fc @ 02074200
    add sp, #4 @ 02074202
    pop {pc} @ 02074204
    .byte 0x00, 0x00, 0x88, 0xf3, 0x08, 0x02, 0xa4, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0xa0 @ 02074206
.L_02074214:
@ FUN_02074214 at 0x02074214
    push {lr} @ 02074214
    sub sp, #4 @ 02074216
    cmp r0, #0 @ 02074218
    bne .L_0207422e @ 0207421a
    ldr r3, [pc, #0x2c] @ 0207421c
    strh r0, [r3] @ 0207421e
    bl .L_020741e8 @ 02074220
    movs r0, #0 @ 02074224
    bl .L_020741e8 @ 02074226
.L_0207422a:
    add sp, #4 @ 0207422a
    pop {pc} @ 0207422c
.L_0207422e:
    movs r0, #1 @ 0207422e
    bl .L_020741e8 @ 02074230
    movs r0, #1 @ 02074234
    bl .L_020741e8 @ 02074236
    ldr r3, [pc, #0x14] @ 0207423a
    ldr r2, [pc, #0x14] @ 0207423c
    ldrb r3, [r3] @ 0207423e
    orrs r3, r2 @ 02074240
    lsls r3, r3, #0x10 @ 02074242
    ldr r2, [pc, #4] @ 02074244
    lsrs r3, r3, #0x10 @ 02074246
    strh r3, [r2] @ 02074248
    b .L_0207422a @ 0207424a
    .byte 0xa0, 0x01, 0x00, 0x04, 0x84, 0xf3, 0x08, 0x02, 0x40, 0xa0, 0xff, 0xff @ 0207424c
.L_02074258:
@ FUN_02074258 at 0x02074258
    push {r4, r5, lr} @ 02074258
    movs r0, #1 @ 0207425a
    sub sp, #4 @ 0207425c
    bl .L_02074214 @ 0207425e
    movs r4, #1 @ 02074262
    ldr r5, [pc, #0x64] @ 02074264
    ldr r1, [pc, #0x68] @ 02074266
    movs r0, #0 @ 02074268
    negs r4, r4 @ 0207426a
    movs r2, #0x80 @ 0207426c
.L_0207426e:
    strb r4, [r5] @ 0207426e
.L_02074270:
    ldrh r3, [r1] @ 02074270
    tst r3, r2 @ 02074272
    bne .L_02074270 @ 02074274
    adds r0, #1 @ 02074276
    ldrb r3, [r5] @ 02074278
    cmp r0, #0xa @ 0207427a
    bne .L_0207426e @ 0207427c
    movs r0, #0 @ 0207427e
    movs r1, #0 @ 02074280
    bl .L_020740f8 @ 02074282
    movs r0, #1 @ 02074286
    movs r1, #0xff @ 02074288
    bl .L_020741ac @ 0207428a
    cmp r0, #0 @ 0207428e
    beq .L_020742c2 @ 02074290
    movs r5, #0x80 @ 02074292
    movs r4, #0 @ 02074294
    lsls r5, r5, #1 @ 02074296
    b .L_020742a0 @ 02074298
.L_0207429a:
    adds r4, #1 @ 0207429a
    cmp r4, r5 @ 0207429c
    beq .L_020742c0 @ 0207429e
.L_020742a0:
    movs r0, #1 @ 020742a0
    movs r1, #0 @ 020742a2
    bl .L_020740f8 @ 020742a4
    movs r0, #0 @ 020742a8
    movs r1, #1 @ 020742aa
    bl .L_020741ac @ 020742ac
    cmp r0, #1 @ 020742b0
    bne .L_0207429a @ 020742b2
    movs r0, #0 @ 020742b4
    bl .L_02074214 @ 020742b6
    movs r0, #1 @ 020742ba
.L_020742bc:
    add sp, #4 @ 020742bc
    pop {r4, r5, pc} @ 020742be
.L_020742c0:
    movs r0, #0 @ 020742c0
.L_020742c2:
    bl .L_02074214 @ 020742c2
    movs r0, #0 @ 020742c6
    b .L_020742bc @ 020742c8
    .byte 0x00, 0x00, 0xa2, 0x01, 0x00, 0x04, 0xa0, 0x01, 0x00, 0x04 @ 020742ca
@ FUN_020742d4 at 0x020742d4
    push {lr} @ 020742d4
    sub sp, #4 @ 020742d6
    bl .L_02074258 @ 020742d8
    add sp, #4 @ 020742dc
    pop {pc} @ 020742de
@ FUN_020742e0 at 0x020742e0
    push {r4, r5, lr} @ 020742e0
    sub sp, #4 @ 020742e2
    movs r0, #1 @ 020742e4
    bl .L_02074214 @ 020742e6
    movs r0, #9 @ 020742ea
    movs r1, #0 @ 020742ec
    bl .L_020740f8 @ 020742ee
    movs r0, #0 @ 020742f2
    movs r1, #0xff @ 020742f4
    bl .L_020741ac @ 020742f6
    cmp r0, #0 @ 020742fa
    beq .L_0207432a @ 020742fc
    movs r0, #0xfe @ 020742fe
    movs r1, #0xff @ 02074300
    bl .L_020741ac @ 02074302
    cmp r0, #0 @ 02074306
    beq .L_0207432a @ 02074308
    movs r4, #1 @ 0207430a
    ldr r5, [pc, #0x24] @ 0207430c
    ldr r1, [pc, #0x28] @ 0207430e
    movs r0, #0 @ 02074310
    negs r4, r4 @ 02074312
    movs r2, #0x80 @ 02074314
.L_02074316:
    strb r4, [r5] @ 02074316
.L_02074318:
    ldrh r3, [r1] @ 02074318
    tst r3, r2 @ 0207431a
    bne .L_02074318 @ 0207431c
    adds r0, #1 @ 0207431e
    ldrb r3, [r5] @ 02074320
    cmp r0, #0x1c @ 02074322
    bne .L_02074316 @ 02074324
    movs r0, #1 @ 02074326
    b .L_02074330 @ 02074328
.L_0207432a:
    bl .L_02074214 @ 0207432a
    movs r0, #0 @ 0207432e
.L_02074330:
    add sp, #4 @ 02074330
    pop {r4, r5, pc} @ 02074332
    .byte 0xa2, 0x01, 0x00, 0x04, 0xa0, 0x01, 0x00, 0x04 @ 02074334
@ FUN_0207433c at 0x0207433c
    push {r4, r5, r6, r7, lr} @ 0207433c
    mov r7, fp @ 0207433e
    mov r6, sl @ 02074340
    mov r5, sb @ 02074342
    mov r4, r8 @ 02074344
    push {r4, r5, r6, r7} @ 02074346
    adds r6, r0, #0 @ 02074348
    adds r4, r1, #0 @ 0207434a
    sub sp, #4 @ 0207434c
    movs r0, #1 @ 0207434e
    adds r5, r2, #0 @ 02074350
    bl .L_02074214 @ 02074352
    subs r2, r4, #1 @ 02074356
    mov sl, r2 @ 02074358
    blo .L_02074400 @ 0207435a
    ldr r3, [pc, #0xac] @ 0207435c
    lsls r6, r6, #9 @ 0207435e
    mov sb, r5 @ 02074360
    mov r8, r6 @ 02074362
    mov fp, r3 @ 02074364
.L_02074366:
    movs r0, #0x11 @ 02074366
    mov r1, r8 @ 02074368
    bl .L_020740f8 @ 0207436a
    movs r0, #0 @ 0207436e
    movs r1, #0xff @ 02074370
    bl .L_020741ac @ 02074372
    cmp r0, #0 @ 02074376
    beq .L_020743ec @ 02074378
    movs r0, #0xfe @ 0207437a
    movs r1, #0xff @ 0207437c
    bl .L_020741ac @ 0207437e
    cmp r0, #0 @ 02074382
    beq .L_020743ec @ 02074384
    ldr r2, [pc, #0x84] @ 02074386
    movs r7, #1 @ 02074388
    movs r6, #0x80 @ 0207438a
    ldr r1, [pc, #0x80] @ 0207438c
    mov ip, r2 @ 0207438e
    mov r0, sb @ 02074390
    movs r4, #0 @ 02074392
    negs r7, r7 @ 02074394
    movs r2, #0x80 @ 02074396
    lsls r6, r6, #2 @ 02074398
.L_0207439a:
    mov r3, ip @ 0207439a
    strb r7, [r3] @ 0207439c
.L_0207439e:
    ldrh r3, [r1] @ 0207439e
    tst r3, r2 @ 020743a0
    bne .L_0207439e @ 020743a2
    ldr r5, [pc, #0x64] @ 020743a4
    adds r4, #1 @ 020743a6
    ldrb r3, [r5] @ 020743a8
    strb r3, [r0] @ 020743aa
    adds r0, #1 @ 020743ac
    cmp r4, r6 @ 020743ae
    bne .L_0207439a @ 020743b0
    movs r3, #1 @ 020743b2
    negs r3, r3 @ 020743b4
    ldr r1, [pc, #0x58] @ 020743b6
    add sb, r4 @ 020743b8
    strb r3, [r5] @ 020743ba
    movs r2, #0x80 @ 020743bc
.L_020743be:
    ldrh r3, [r1] @ 020743be
    tst r3, r2 @ 020743c0
    bne .L_020743be @ 020743c2
    mov r2, fp @ 020743c4
    ldrb r3, [r2] @ 020743c6
    movs r3, #1 @ 020743c8
    negs r3, r3 @ 020743ca
    ldr r1, [pc, #0x40] @ 020743cc
    strb r3, [r2] @ 020743ce
    movs r2, #0x80 @ 020743d0
.L_020743d2:
    ldrh r3, [r1] @ 020743d2
    tst r3, r2 @ 020743d4
    bne .L_020743d2 @ 020743d6
    mov r2, fp @ 020743d8
    ldrb r3, [r2] @ 020743da
    mov r3, sl @ 020743dc
    subs r3, #1 @ 020743de
    mov sl, r3 @ 020743e0
    blo .L_02074400 @ 020743e2
    movs r2, #0x80 @ 020743e4
    lsls r2, r2, #2 @ 020743e6
    add r8, r2 @ 020743e8
    b .L_02074366 @ 020743ea
.L_020743ec:
    bl .L_02074214 @ 020743ec
    movs r0, #0 @ 020743f0
.L_020743f2:
    add sp, #4 @ 020743f2
    pop {r2, r3, r4, r5} @ 020743f4
    mov r8, r2 @ 020743f6
    mov sb, r3 @ 020743f8
    mov sl, r4 @ 020743fa
    mov fp, r5 @ 020743fc
    pop {r4, r5, r6, r7, pc} @ 020743fe
.L_02074400:
    movs r0, #0 @ 02074400
    bl .L_02074214 @ 02074402
    movs r0, #1 @ 02074406
    b .L_020743f2 @ 02074408
    .byte 0x00, 0x00, 0xa2, 0x01, 0x00, 0x04, 0xa0, 0x01, 0x00, 0x04 @ 0207440a
@ FUN_02074414 at 0x02074414
    push {r4, r5, r6, r7, lr} @ 02074414
    mov r7, r8 @ 02074416
    push {r7} @ 02074418
    adds r4, r0, #0 @ 0207441a
    lsls r4, r4, #9 @ 0207441c
    movs r0, #1 @ 0207441e
    mov r8, r1 @ 02074420
    adds r5, r2, #0 @ 02074422
    bl .L_02074214 @ 02074424
    movs r0, #0x19 @ 02074428
    adds r1, r4, #0 @ 0207442a
    bl .L_020740f8 @ 0207442c
    movs r0, #0 @ 02074430
    movs r1, #0xff @ 02074432
    bl .L_020741ac @ 02074434
    cmp r0, #0 @ 02074438
    bne .L_0207443e @ 0207443a
    b .L_020745a2 @ 0207443c
.L_0207443e:
    mov r3, r8 @ 0207443e
    mov ip, r5 @ 02074440
    subs r3, #1 @ 02074442
    mov r8, r3 @ 02074444
    blo .L_020744ec @ 02074446
.L_02074448:
    ldr r2, [pc, #0x160] @ 02074448
    movs r3, #4 @ 0207444a
    negs r3, r3 @ 0207444c
    ldr r1, [pc, #0x160] @ 0207444e
    strb r3, [r2] @ 02074450
    movs r2, #0x80 @ 02074452
.L_02074454:
    ldrh r3, [r1] @ 02074454
    tst r3, r2 @ 02074456
    bne .L_02074454 @ 02074458
    ldr r3, [pc, #0x150] @ 0207445a
    movs r6, #0x80 @ 0207445c
    ldr r0, [pc, #0x150] @ 0207445e
    ldrb r2, [r3] @ 02074460
    mov r1, ip @ 02074462
    movs r4, #0 @ 02074464
    adds r7, r3, #0 @ 02074466
    movs r2, #0x80 @ 02074468
    lsls r6, r6, #2 @ 0207446a
.L_0207446c:
    ldrb r3, [r1] @ 0207446c
    adds r1, #1 @ 0207446e
    strb r3, [r7] @ 02074470
.L_02074472:
    ldrh r3, [r0] @ 02074472
    tst r3, r2 @ 02074474
    bne .L_02074472 @ 02074476
    ldr r5, [pc, #0x130] @ 02074478
    adds r4, #1 @ 0207447a
    ldrb r3, [r5] @ 0207447c
    cmp r4, r6 @ 0207447e
    bne .L_0207446c @ 02074480
    movs r3, #1 @ 02074482
    negs r3, r3 @ 02074484
    ldr r1, [pc, #0x128] @ 02074486
    add ip, r4 @ 02074488
    strb r3, [r5] @ 0207448a
    movs r2, #0x80 @ 0207448c
.L_0207448e:
    ldrh r3, [r1] @ 0207448e
    tst r3, r2 @ 02074490
    bne .L_0207448e @ 02074492
    ldr r3, [pc, #0x114] @ 02074494
    ldr r1, [pc, #0x118] @ 02074496
    ldrb r2, [r3] @ 02074498
    movs r2, #1 @ 0207449a
    negs r2, r2 @ 0207449c
    strb r2, [r3] @ 0207449e
    movs r2, #0x80 @ 020744a0
.L_020744a2:
    ldrh r3, [r1] @ 020744a2
    tst r3, r2 @ 020744a4
    bne .L_020744a2 @ 020744a6
    ldr r3, [pc, #0x100] @ 020744a8
    ldr r1, [pc, #0x104] @ 020744aa
    ldrb r2, [r3] @ 020744ac
    movs r2, #1 @ 020744ae
    negs r2, r2 @ 020744b0
    strb r2, [r3] @ 020744b2
    movs r2, #0x80 @ 020744b4
.L_020744b6:
    ldrh r3, [r1] @ 020744b6
    tst r3, r2 @ 020744b8
    bne .L_020744b6 @ 020744ba
    ldr r3, [pc, #0xec] @ 020744bc
    movs r2, #0xf @ 020744be
    ldrb r3, [r3] @ 020744c0
    ands r3, r2 @ 020744c2
    cmp r3, #5 @ 020744c4
    beq .L_020744ca @ 020744c6
    b .L_020745a2 @ 020744c8
.L_020744ca:
    ldr r2, [pc, #0xe0] @ 020744ca
    movs r3, #1 @ 020744cc
    negs r3, r3 @ 020744ce
    ldr r1, [pc, #0xdc] @ 020744d0
    strb r3, [r2] @ 020744d2
    movs r2, #0x80 @ 020744d4
.L_020744d6:
    ldrh r3, [r1] @ 020744d6
    tst r3, r2 @ 020744d8
    bne .L_020744d6 @ 020744da
    ldr r3, [pc, #0xcc] @ 020744dc
    ldrb r3, [r3] @ 020744de
    cmp r3, #0 @ 020744e0
    beq .L_020744ca @ 020744e2
    mov r3, r8 @ 020744e4
    subs r3, #1 @ 020744e6
    mov r8, r3 @ 020744e8
    bhs .L_02074448 @ 020744ea
.L_020744ec:
    ldr r2, [pc, #0xbc] @ 020744ec
    movs r3, #3 @ 020744ee
    negs r3, r3 @ 020744f0
    ldr r1, [pc, #0xbc] @ 020744f2
    strb r3, [r2] @ 020744f4
    movs r2, #0x80 @ 020744f6
.L_020744f8:
    ldrh r3, [r1] @ 020744f8
    tst r3, r2 @ 020744fa
    bne .L_020744f8 @ 020744fc
    ldr r3, [pc, #0xac] @ 020744fe
    movs r6, #1 @ 02074500
    movs r4, #0x80 @ 02074502
    ldr r1, [pc, #0xa8] @ 02074504
    ldrb r2, [r3] @ 02074506
    movs r0, #0 @ 02074508
    adds r7, r3, #0 @ 0207450a
    negs r6, r6 @ 0207450c
    movs r2, #0x80 @ 0207450e
    lsls r4, r4, #2 @ 02074510
.L_02074512:
    strb r6, [r7] @ 02074512
.L_02074514:
    ldrh r3, [r1] @ 02074514
    tst r3, r2 @ 02074516
    bne .L_02074514 @ 02074518
    ldr r5, [pc, #0x90] @ 0207451a
    adds r0, #1 @ 0207451c
    ldrb r3, [r5] @ 0207451e
    cmp r0, r4 @ 02074520
    bne .L_02074512 @ 02074522
    movs r3, #1 @ 02074524
    negs r3, r3 @ 02074526
    ldr r1, [pc, #0x84] @ 02074528
    strb r3, [r5] @ 0207452a
    movs r2, #0x80 @ 0207452c
.L_0207452e:
    ldrh r3, [r1] @ 0207452e
    tst r3, r2 @ 02074530
    bne .L_0207452e @ 02074532
    ldr r3, [pc, #0x74] @ 02074534
    ldr r1, [pc, #0x78] @ 02074536
    ldrb r2, [r3] @ 02074538
    movs r2, #1 @ 0207453a
    negs r2, r2 @ 0207453c
    strb r2, [r3] @ 0207453e
    movs r2, #0x80 @ 02074540
.L_02074542:
    ldrh r3, [r1] @ 02074542
    tst r3, r2 @ 02074544
    bne .L_02074542 @ 02074546
    ldr r3, [pc, #0x60] @ 02074548
    ldr r1, [pc, #0x64] @ 0207454a
    ldrb r2, [r3] @ 0207454c
    movs r2, #1 @ 0207454e
    negs r2, r2 @ 02074550
    strb r2, [r3] @ 02074552
    movs r2, #0x80 @ 02074554
.L_02074556:
    ldrh r3, [r1] @ 02074556
    tst r3, r2 @ 02074558
    bne .L_02074556 @ 0207455a
    ldr r3, [pc, #0x4c] @ 0207455c
    ldr r0, [pc, #0x50] @ 0207455e
    ldrb r2, [r3] @ 02074560
    movs r2, #1 @ 02074562
    adds r4, r3, #0 @ 02074564
    negs r2, r2 @ 02074566
    movs r1, #0x80 @ 02074568
.L_0207456a:
    strb r2, [r4] @ 0207456a
.L_0207456c:
    ldrh r3, [r0] @ 0207456c
    tst r3, r1 @ 0207456e
    bne .L_0207456c @ 02074570
    ldrb r3, [r4] @ 02074572
    cmp r3, #0 @ 02074574
    beq .L_0207456a @ 02074576
    movs r4, #1 @ 02074578
    ldr r5, [pc, #0x30] @ 0207457a
    ldr r1, [pc, #0x30] @ 0207457c
    movs r0, #0 @ 0207457e
    negs r4, r4 @ 02074580
    movs r2, #0x80 @ 02074582
.L_02074584:
    strb r4, [r5] @ 02074584
.L_02074586:
    ldrh r3, [r1] @ 02074586
    tst r3, r2 @ 02074588
    bne .L_02074586 @ 0207458a
    adds r0, #1 @ 0207458c
    ldrb r3, [r5] @ 0207458e
    cmp r0, #0x10 @ 02074590
    bne .L_02074584 @ 02074592
    movs r0, #0 @ 02074594
    bl .L_02074214 @ 02074596
    movs r0, #1 @ 0207459a
.L_0207459c:
    pop {r2} @ 0207459c
    mov r8, r2 @ 0207459e
    pop {r4, r5, r6, r7, pc} @ 020745a0
.L_020745a2:
    movs r0, #0 @ 020745a2
    bl .L_02074214 @ 020745a4
    movs r0, #0 @ 020745a8
    b .L_0207459c @ 020745aa
    .byte 0xa2, 0x01, 0x00, 0x04, 0xa0, 0x01, 0x00, 0x04 @ 020745ac
@ FUN_020745b4 at 0x020745b4
    push {r4, r5, r6, r7, lr} @ 020745b4
    ldr r7, [pc, #0x1c4] @ 020745b6
    ldr r2, [pc, #0x1c4] @ 020745b8
    ldrb r3, [r7] @ 020745ba
    ldr r1, [pc, #0x1c4] @ 020745bc
    orrs r3, r2 @ 020745be
    lsls r3, r3, #0x10 @ 020745c0
    lsrs r4, r3, #0x10 @ 020745c2
    ldr r2, [pc, #0x1c0] @ 020745c4
    movs r3, #0xf @ 020745c6
    negs r3, r3 @ 020745c8
    strh r4, [r1] @ 020745ca
    sub sp, #4 @ 020745cc
    strb r3, [r2] @ 020745ce
    movs r2, #0x80 @ 020745d0
.L_020745d2:
    ldrh r3, [r1] @ 020745d2
    adds r0, r3, #0 @ 020745d4
    ands r0, r2 @ 020745d6
    bne .L_020745d2 @ 020745d8
    ldr r3, [pc, #0x1ac] @ 020745da
    ldrb r2, [r3] @ 020745dc
    strh r0, [r1] @ 020745de
    movs r2, #6 @ 020745e0
    ldr r0, [pc, #0x1a0] @ 020745e2
    strh r4, [r1] @ 020745e4
    strb r2, [r3] @ 020745e6
    movs r2, #0x80 @ 020745e8
.L_020745ea:
    ldrh r3, [r0] @ 020745ea
    adds r1, r3, #0 @ 020745ec
    ands r1, r2 @ 020745ee
    bne .L_020745ea @ 020745f0
    ldr r3, [pc, #0x194] @ 020745f2
    ldrb r2, [r3] @ 020745f4
    movs r2, #6 @ 020745f6
    strh r1, [r0] @ 020745f8
    negs r2, r2 @ 020745fa
    ldr r1, [pc, #0x184] @ 020745fc
    strh r4, [r0] @ 020745fe
    strb r2, [r3] @ 02074600
    movs r2, #0x80 @ 02074602
.L_02074604:
    ldrh r3, [r1] @ 02074604
    tst r3, r2 @ 02074606
    bne .L_02074604 @ 02074608
    ldr r3, [pc, #0x17c] @ 0207460a
    ldr r1, [pc, #0x174] @ 0207460c
    ldrb r2, [r3] @ 0207460e
    movs r2, #1 @ 02074610
    strb r2, [r3] @ 02074612
    movs r2, #0x80 @ 02074614
.L_02074616:
    ldrh r3, [r1] @ 02074616
    tst r3, r2 @ 02074618
    bne .L_02074616 @ 0207461a
    ldr r3, [pc, #0x168] @ 0207461c
    ldr r0, [pc, #0x164] @ 0207461e
    ldrb r2, [r3] @ 02074620
    movs r2, #0x31 @ 02074622
    strb r2, [r3] @ 02074624
    movs r2, #0x80 @ 02074626
.L_02074628:
    ldrh r3, [r0] @ 02074628
    adds r1, r3, #0 @ 0207462a
    ands r1, r2 @ 0207462c
    bne .L_02074628 @ 0207462e
    ldr r3, [pc, #0x154] @ 02074630
    ldrb r2, [r3] @ 02074632
    strh r1, [r0] @ 02074634
    movs r2, #0xe @ 02074636
    strh r4, [r0] @ 02074638
    ldr r0, [pc, #0x148] @ 0207463a
    strb r2, [r3] @ 0207463c
    movs r2, #0x80 @ 0207463e
.L_02074640:
    ldrh r3, [r0] @ 02074640
    adds r1, r3, #0 @ 02074642
    ands r1, r2 @ 02074644
    bne .L_02074640 @ 02074646
    ldr r3, [pc, #0x13c] @ 02074648
    ldrb r2, [r3] @ 0207464a
    strh r1, [r0] @ 0207464c
    movs r2, #6 @ 0207464e
    strh r4, [r0] @ 02074650
    ldr r0, [pc, #0x130] @ 02074652
    strb r2, [r3] @ 02074654
    movs r2, #0x80 @ 02074656
.L_02074658:
    ldrh r3, [r0] @ 02074658
    adds r1, r3, #0 @ 0207465a
    ands r1, r2 @ 0207465c
    bne .L_02074658 @ 0207465e
    ldr r3, [pc, #0x124] @ 02074660
    ldrb r2, [r3] @ 02074662
    movs r2, #8 @ 02074664
    strh r1, [r0] @ 02074666
    negs r2, r2 @ 02074668
    ldr r1, [pc, #0x118] @ 0207466a
    strh r4, [r0] @ 0207466c
    strb r2, [r3] @ 0207466e
    movs r2, #0x80 @ 02074670
.L_02074672:
    ldrh r3, [r1] @ 02074672
    tst r3, r2 @ 02074674
    bne .L_02074672 @ 02074676
    ldr r3, [pc, #0x10c] @ 02074678
    ldr r0, [pc, #0x108] @ 0207467a
    ldrb r2, [r3] @ 0207467c
    movs r2, #1 @ 0207467e
    strb r2, [r3] @ 02074680
    movs r2, #0x80 @ 02074682
.L_02074684:
    ldrh r3, [r0] @ 02074684
    adds r1, r3, #0 @ 02074686
    ands r1, r2 @ 02074688
    bne .L_02074684 @ 0207468a
    ldr r3, [pc, #0xf8] @ 0207468c
    ldr r0, [pc, #0xf4] @ 0207468e
    ldrb r2, [r3] @ 02074690
    strb r1, [r3] @ 02074692
    movs r2, #0x80 @ 02074694
.L_02074696:
    ldrh r3, [r0] @ 02074696
    adds r1, r3, #0 @ 02074698
    ands r1, r2 @ 0207469a
    bne .L_02074696 @ 0207469c
    ldr r3, [pc, #0xe8] @ 0207469e
    ldrb r2, [r3] @ 020746a0
    strh r1, [r0] @ 020746a2
    adds r5, r2, #0 @ 020746a4
    strh r4, [r0] @ 020746a6
    movs r2, #0xe @ 020746a8
    ldr r0, [pc, #0xd8] @ 020746aa
    strb r2, [r3] @ 020746ac
    movs r2, #0x80 @ 020746ae
.L_020746b0:
    ldrh r3, [r0] @ 020746b0
    adds r1, r3, #0 @ 020746b2
    ands r1, r2 @ 020746b4
    bne .L_020746b0 @ 020746b6
    ldr r3, [pc, #0xcc] @ 020746b8
    ldrb r3, [r3] @ 020746ba
    strh r1, [r0] @ 020746bc
    cmp r5, #0x31 @ 020746be
    beq .L_020746c8 @ 020746c0
.L_020746c2:
    movs r0, #0 @ 020746c2
.L_020746c4:
    add sp, #4 @ 020746c4
    pop {r4, r5, r6, r7, pc} @ 020746c6
.L_020746c8:
    bl .L_02074258 @ 020746c8
    cmp r0, #0 @ 020746cc
    beq .L_020746c2 @ 020746ce
    movs r0, #1 @ 020746d0
    bl .L_02074214 @ 020746d2
    movs r1, #0x80 @ 020746d6
    movs r0, #0x10 @ 020746d8
    lsls r1, r1, #2 @ 020746da
    bl .L_020740f8 @ 020746dc
    movs r0, #0 @ 020746e0
    movs r1, #0xff @ 020746e2
    bl .L_020741ac @ 020746e4
    cmp r0, #0 @ 020746e8
    beq .L_02074776 @ 020746ea
    movs r0, #9 @ 020746ec
    movs r1, #0 @ 020746ee
    bl .L_020740f8 @ 020746f0
    movs r0, #0 @ 020746f4
    movs r1, #0xff @ 020746f6
    bl .L_020741ac @ 020746f8
    cmp r0, #0 @ 020746fc
    beq .L_02074776 @ 020746fe
    movs r0, #0xfe @ 02074700
    movs r1, #0xff @ 02074702
    bl .L_020741ac @ 02074704
    cmp r0, #0 @ 02074708
    beq .L_02074774 @ 0207470a
    movs r0, #0 @ 0207470c
.L_0207470e:
    ldr r2, [pc, #0x78] @ 0207470e
    movs r3, #1 @ 02074710
    negs r3, r3 @ 02074712
    ldr r1, [pc, #0x6c] @ 02074714
    strb r3, [r2] @ 02074716
    movs r2, #0x80 @ 02074718
.L_0207471a:
    ldrh r3, [r1] @ 0207471a
    tst r3, r2 @ 0207471c
    bne .L_0207471a @ 0207471e
    ldr r2, [pc, #0x64] @ 02074720
    adds r0, #1 @ 02074722
    ldrb r3, [r2] @ 02074724
    cmp r0, #3 @ 02074726
    bne .L_0207470e @ 02074728
    movs r3, #1 @ 0207472a
    negs r3, r3 @ 0207472c
    ldr r1, [pc, #0x54] @ 0207472e
    strb r3, [r2] @ 02074730
    movs r2, #0x80 @ 02074732
.L_02074734:
    ldrh r3, [r1] @ 02074734
    tst r3, r2 @ 02074736
    bne .L_02074734 @ 02074738
    ldr r2, [pc, #0x4c] @ 0207473a
    ldr r4, [pc, #0x44] @ 0207473c
    ldrb r3, [r2] @ 0207473e
    adds r6, r2, #0 @ 02074740
    movs r2, #1 @ 02074742
    mov ip, r3 @ 02074744
    movs r5, #0 @ 02074746
    negs r2, r2 @ 02074748
    movs r1, #0x80 @ 0207474a
.L_0207474c:
    strb r2, [r6] @ 0207474c
.L_0207474e:
    ldrh r3, [r4] @ 0207474e
    adds r0, r3, #0 @ 02074750
    ands r0, r1 @ 02074752
    bne .L_0207474e @ 02074754
    adds r5, #1 @ 02074756
    ldrb r3, [r6] @ 02074758
    cmp r5, #0x18 @ 0207475a
    bne .L_0207474c @ 0207475c
    movs r3, #0xf0 @ 0207475e
    mov r2, ip @ 02074760
    ands r3, r2 @ 02074762
    cmp r3, #0x2f @ 02074764
    ble .L_0207476a @ 02074766
    str r0, [r7] @ 02074768
.L_0207476a:
    movs r0, #0 @ 0207476a
    bl .L_02074214 @ 0207476c
    movs r0, #1 @ 02074770
    b .L_020746c4 @ 02074772
.L_02074774:
    movs r0, #0 @ 02074774
.L_02074776:
    bl .L_02074214 @ 02074776
    b .L_020746c2 @ 0207477a
    .byte 0x84, 0xf3, 0x08, 0x02, 0x40, 0xa0, 0xff, 0xff, 0xa0, 0x01, 0x00, 0x04, 0xa2, 0x01, 0x00, 0x04 @ 0207477c
@ FUN_0207478c at 0x0207478c
    push {lr} @ 0207478c
    sub sp, #4 @ 0207478e
    movs r0, #3 @ 02074790
    bl .L_0207ec90 @ 02074792
    ldr r0, [pc, #8] @ 02074796
    bl .L_0207eba0 @ 02074798
    add sp, #4 @ 0207479c
    pop {pc} @ 0207479e
    .byte 0x04, 0xee, 0x08, 0x02 @ 020747a0
.L_020747a4:
@ FUN_020747a4 at 0x020747a4
    push {r4, r5, r6, lr} @ 020747a4
    lsls r5, r1, #3 @ 020747a6
    ldr r2, [pc, #0x58] @ 020747a8
    movs r1, #0x98 @ 020747aa
    adds r4, r0, #0 @ 020747ac
    lsls r1, r1, #0x14 @ 020747ae
    movs r0, #1 @ 020747b0
    b .L_020747ba @ 020747b2
.L_020747b4:
    subs r2, #1 @ 020747b4
    cmp r2, #0 @ 020747b6
    beq .L_020747c0 @ 020747b8
.L_020747ba:
    ldrh r3, [r1] @ 020747ba
    tst r3, r0 @ 020747bc
    bne .L_020747b4 @ 020747be
.L_020747c0:
    cmp r4, #0 @ 020747c0
    beq .L_020747fc @ 020747c2
    cmp r2, #0 @ 020747c4
    beq .L_02074800 @ 020747c6
    movs r0, #0x98 @ 020747c8
    subs r1, r5, #1 @ 020747ca
    movs r2, #0 @ 020747cc
    lsls r0, r0, #0x14 @ 020747ce
    movs r6, #1 @ 020747d0
    movs r5, #7 @ 020747d2
.L_020747d4:
    subs r1, #1 @ 020747d4
    blo .L_020747ee @ 020747d6
.L_020747d8:
    ldrh r3, [r0] @ 020747d8
    lsls r2, r2, #1 @ 020747da
    ands r3, r6 @ 020747dc
    orrs r2, r3 @ 020747de
    tst r1, r5 @ 020747e0
    bne .L_020747d4 @ 020747e2
    strb r2, [r4] @ 020747e4
    adds r4, #1 @ 020747e6
    movs r2, #0 @ 020747e8
    subs r1, #1 @ 020747ea
    bhs .L_020747d8 @ 020747ec
.L_020747ee:
    movs r1, #0x98 @ 020747ee
    movs r2, #0 @ 020747f0
    lsls r1, r1, #0x14 @ 020747f2
.L_020747f4:
    adds r2, #1 @ 020747f4
    ldrh r3, [r1] @ 020747f6
    cmp r2, #0x10 @ 020747f8
    bne .L_020747f4 @ 020747fa
.L_020747fc:
    movs r0, #1 @ 020747fc
.L_020747fe:
    pop {r4, r5, r6, pc} @ 020747fe
.L_02074800:
    movs r0, #0 @ 02074800
    b .L_020747fe @ 02074802
    .byte 0x20, 0xa1, 0x07, 0x00 @ 02074804
.L_02074808:
@ FUN_02074808 at 0x02074808
    push {lr} @ 02074808
    movs r2, #0x98 @ 0207480a
    lsls r2, r2, #0x14 @ 0207480c
.L_0207480e:
    ldrh r3, [r2] @ 0207480e
    subs r0, #1 @ 02074810
    bhs .L_0207480e @ 02074812
    pop {pc} @ 02074814
    .zero 2
.L_02074818:
@ FUN_02074818 at 0x02074818
    push {r4, r5, lr} @ 02074818
    adds r5, r0, #0 @ 0207481a
    movs r1, #0x80 @ 0207481c
    movs r0, #0x91 @ 0207481e
    ldr r2, [pc, #0x84] @ 02074820
    sub sp, #0xc @ 02074822
    lsls r0, r0, #0x14 @ 02074824
    lsls r1, r1, #1 @ 02074826
    b .L_02074830 @ 02074828
.L_0207482a:
    subs r2, #1 @ 0207482a
    cmp r2, #0 @ 0207482c
    beq .L_020748a2 @ 0207482e
.L_02074830:
    ldrh r3, [r0] @ 02074830
    tst r3, r1 @ 02074832
    bne .L_0207482a @ 02074834
    cmp r2, #0 @ 02074836
    beq .L_020748a2 @ 02074838
    lsls r3, r5, #0x1f @ 0207483a
    bmi .L_02074878 @ 0207483c
    movs r3, #0x80 @ 0207483e
    lsls r3, r3, #2 @ 02074840
    movs r2, #0x91 @ 02074842
    adds r0, r5, #0 @ 02074844
    adds r1, r5, r3 @ 02074846
    lsls r2, r2, #0x14 @ 02074848
.L_0207484a:
    ldr r3, [r2] @ 0207484a
    str r3, [sp, #4] @ 0207484c
    ldr r3, [r2] @ 0207484e
    lsrs r3, r3, #0x10 @ 02074850
    str r3, [sp, #4] @ 02074852
    ldr r3, [sp, #4] @ 02074854
    strh r3, [r0] @ 02074856
    adds r0, #2 @ 02074858
    cmp r0, r1 @ 0207485a
    bne .L_0207484a @ 0207485c
.L_0207485e:
    movs r1, #0x91 @ 0207485e
    movs r2, #0 @ 02074860
    lsls r1, r1, #0x14 @ 02074862
.L_02074864:
    ldr r3, [r1] @ 02074864
    adds r2, #1 @ 02074866
    str r3, [sp, #4] @ 02074868
    cmp r2, #8 @ 0207486a
    bne .L_02074864 @ 0207486c
    ldrh r3, [r1] @ 0207486e
    movs r0, #1 @ 02074870
    str r3, [sp, #4] @ 02074872
.L_02074874:
    add sp, #0xc @ 02074874
    pop {r4, r5, pc} @ 02074876
.L_02074878:
    movs r1, #0x91 @ 02074878
    movs r4, #0x80 @ 0207487a
    movs r2, #0 @ 0207487c
    lsls r1, r1, #0x14 @ 0207487e
    lsls r4, r4, #2 @ 02074880
    adds r0, r5, #0 @ 02074882
.L_02074884:
    ldr r3, [r1] @ 02074884
    adds r2, #2 @ 02074886
    str r3, [sp, #4] @ 02074888
    ldr r3, [r1] @ 0207488a
    lsrs r3, r3, #0x10 @ 0207488c
    str r3, [sp, #4] @ 0207488e
    ldr r3, [sp, #4] @ 02074890
    strb r3, [r0] @ 02074892
    ldr r3, [sp, #4] @ 02074894
    lsrs r3, r3, #8 @ 02074896
    strb r3, [r0, #1] @ 02074898
    adds r0, #2 @ 0207489a
    cmp r2, r4 @ 0207489c
    bne .L_02074884 @ 0207489e
    b .L_0207485e @ 020748a0
.L_020748a2:
    movs r0, #0 @ 020748a2
    b .L_02074874 @ 020748a4
    .byte 0x00, 0x00, 0x20, 0xa1, 0x07, 0x00 @ 020748a6
@ FUN_020748ac at 0x020748ac
    push {lr} @ 020748ac
    sub sp, #4 @ 020748ae
    movs r0, #1 @ 020748b0
    bl .L_0207ec90 @ 020748b2
    movs r0, #1 @ 020748b6
    add sp, #4 @ 020748b8
    pop {pc} @ 020748ba
.L_020748bc:
@ FUN_020748bc at 0x020748bc
    push {r4, r5, lr} @ 020748bc
    sub sp, #0xc @ 020748be
    movs r3, #0x40 @ 020748c0
    mov r4, sp @ 020748c2
    adds r4, #2 @ 020748c4
    orrs r0, r3 @ 020748c6
    lsrs r3, r1, #0x18 @ 020748c8
    strb r3, [r4, #1] @ 020748ca
    lsrs r3, r1, #0x10 @ 020748cc
    strb r0, [r4] @ 020748ce
    strb r3, [r4, #2] @ 020748d0
    strb r1, [r4, #4] @ 020748d2
    lsrs r3, r1, #8 @ 020748d4
    adds r0, r4, #0 @ 020748d6
    movs r1, #5 @ 020748d8
    strb r3, [r4, #3] @ 020748da
    bl .L_02074b2c @ 020748dc
    movs r1, #0x98 @ 020748e0
    ldr r2, [pc, #0x44] @ 020748e2
    adds r5, r0, #0 @ 020748e4
    lsls r1, r1, #0x14 @ 020748e6
    movs r0, #1 @ 020748e8
    b .L_020748f2 @ 020748ea
.L_020748ec:
    subs r2, #1 @ 020748ec
    cmp r2, #0 @ 020748ee
    beq .L_02074922 @ 020748f0
.L_020748f2:
    ldrh r3, [r1] @ 020748f2
    tst r3, r0 @ 020748f4
    beq .L_020748ec @ 020748f6
    cmp r2, #0 @ 020748f8
    beq .L_02074922 @ 020748fa
    strb r5, [r4, #5] @ 020748fc
    ldrh r3, [r1] @ 020748fe
    movs r1, #0x98 @ 02074900
    adds r0, r4, #0 @ 02074902
    lsls r1, r1, #0x14 @ 02074904
.L_02074906:
    ldrb r3, [r0] @ 02074906
    movs r2, #7 @ 02074908
    adds r0, #1 @ 0207490a
.L_0207490c:
    strh r3, [r1] @ 0207490c
    lsls r3, r3, #0x11 @ 0207490e
    lsrs r3, r3, #0x10 @ 02074910
    subs r2, #1 @ 02074912
    bhs .L_0207490c @ 02074914
    add r3, sp, #8 @ 02074916
    cmp r3, r0 @ 02074918
    bne .L_02074906 @ 0207491a
    movs r0, #1 @ 0207491c
.L_0207491e:
    add sp, #0xc @ 0207491e
    pop {r4, r5, pc} @ 02074920
.L_02074922:
    movs r0, #0 @ 02074922
    b .L_0207491e @ 02074924
    .byte 0x00, 0x00, 0x20, 0xa1, 0x07, 0x00 @ 02074926
@ FUN_0207492c at 0x0207492c
    push {r4, r5, r6, lr} @ 0207492c
    sub sp, #8 @ 0207492e
    adds r6, r1, #0 @ 02074930
    adds r4, r2, #0 @ 02074932
    cmp r1, #1 @ 02074934
    beq .L_02074968 @ 02074936
    lsls r1, r0, #9 @ 02074938
    movs r0, #0x12 @ 0207493a
    bl .L_020748bc @ 0207493c
    cmp r0, #0 @ 02074940
    beq .L_02074962 @ 02074942
    cmp r6, #0 @ 02074944
    beq .L_02074980 @ 02074946
    movs r5, #0 @ 02074948
    b .L_02074958 @ 0207494a
.L_0207494c:
    adds r5, #1 @ 0207494c
    cmp r6, r5 @ 0207494e
    beq .L_02074980 @ 02074950
    movs r3, #0x80 @ 02074952
    lsls r3, r3, #2 @ 02074954
    adds r4, r4, r3 @ 02074956
.L_02074958:
    adds r0, r4, #0 @ 02074958
    bl .L_02074818 @ 0207495a
    cmp r0, #0 @ 0207495e
    bne .L_0207494c @ 02074960
.L_02074962:
    movs r0, #0 @ 02074962
.L_02074964:
    add sp, #8 @ 02074964
    pop {r4, r5, r6, pc} @ 02074966
.L_02074968:
    lsls r1, r0, #9 @ 02074968
    movs r0, #0x11 @ 0207496a
    bl .L_020748bc @ 0207496c
    cmp r0, #0 @ 02074970
    beq .L_02074962 @ 02074972
    adds r0, r4, #0 @ 02074974
    bl .L_02074818 @ 02074976
    cmp r0, #0 @ 0207497a
    bne .L_02074992 @ 0207497c
    b .L_02074962 @ 0207497e
.L_02074980:
    movs r1, #0 @ 02074980
    movs r0, #0xc @ 02074982
    bl .L_020748bc @ 02074984
    mov r0, sp @ 02074988
    adds r0, #2 @ 0207498a
    movs r1, #6 @ 0207498c
    bl .L_020747a4 @ 0207498e
.L_02074992:
    movs r0, #0x10 @ 02074992
    bl .L_02074808 @ 02074994
    movs r0, #1 @ 02074998
    b .L_02074964 @ 0207499a
@ FUN_0207499c at 0x0207499c
    push {r4, lr} @ 0207499c
    sub sp, #8 @ 0207499e
    movs r0, #0xd @ 020749a0
    movs r1, #0 @ 020749a2
    bl .L_020748bc @ 020749a4
    cmp r0, #0 @ 020749a8
    bne .L_020749b2 @ 020749aa
.L_020749ac:
    movs r0, #0 @ 020749ac
.L_020749ae:
    add sp, #8 @ 020749ae
    pop {r4, pc} @ 020749b0
.L_020749b2:
    mov r4, sp @ 020749b2
    adds r4, #2 @ 020749b4
    adds r0, r4, #0 @ 020749b6
    movs r1, #6 @ 020749b8
    bl .L_020747a4 @ 020749ba
    lsls r0, r0, #0x18 @ 020749be
    cmp r0, #0 @ 020749c0
    beq .L_020749ac @ 020749c2
    ldrb r3, [r4] @ 020749c4
    movs r2, #0 @ 020749c6
    cmp r3, #0xd @ 020749c8
    beq .L_020749ce @ 020749ca
    movs r2, #1 @ 020749cc
.L_020749ce:
    movs r3, #1 @ 020749ce
    eors r3, r2 @ 020749d0
    lsls r3, r3, #0x18 @ 020749d2
    lsrs r0, r3, #0x18 @ 020749d4
    b .L_020749ae @ 020749d6
.L_020749d8:
@ FUN_020749d8 at 0x020749d8
    push {r4, lr} @ 020749d8
    ldr r3, [pc, #0x2c] @ 020749da
    movs r4, #0 @ 020749dc
    movs r0, #0x64 @ 020749de
    strh r4, [r3] @ 020749e0
    bl .L_02074808 @ 020749e2
    movs r0, #0 @ 020749e6
    movs r1, #0 @ 020749e8
    bl .L_020748bc @ 020749ea
    cmp r0, #0 @ 020749ee
    beq .L_02074a06 @ 020749f0
    movs r0, #0x64 @ 020749f2
    bl .L_02074808 @ 020749f4
    ldr r3, [pc, #0x10] @ 020749f8
    ldr r0, [pc, #0x14] @ 020749fa
    str r4, [r3] @ 020749fc
    ldr r1, [pc, #0x14] @ 020749fe
    movs r2, #1 @ 02074a00
    bl .L_02074c84 @ 02074a02
.L_02074a06:
    pop {r4, pc} @ 02074a06
    .byte 0x00, 0x00, 0x44, 0x09, 0x78, 0x4c, 0x0b, 0x02, 0x51, 0x4a, 0x07, 0x02, 0x39, 0x4a, 0x07, 0x02 @ 02074a08
@ FUN_02074a18 at 0x02074a18
    push {lr} @ 02074a18
    sub sp, #4 @ 02074a1a
    bl .L_020749d8 @ 02074a1c
    add sp, #4 @ 02074a20
    pop {pc} @ 02074a22
@ FUN_02074a24 at 0x02074a24
    push {lr} @ 02074a24
    sub sp, #4 @ 02074a26
    movs r0, #3 @ 02074a28
    bl .L_0207ec90 @ 02074a2a
    bl .L_020749d8 @ 02074a2e
    add sp, #4 @ 02074a32
    pop {pc} @ 02074a34
    .zero 2
@ FUN_02074a38 at 0x02074a38
    push {r4, lr} @ 02074a38
    adds r4, r0, #0 @ 02074a3a
    adds r0, r1, #0 @ 02074a3c
    adds r1, r2, #0 @ 02074a3e
    bl .L_020748bc @ 02074a40
    adds r0, r4, #0 @ 02074a44
    movs r1, #0x11 @ 02074a46
    bl .L_020747a4 @ 02074a48
    pop {r4, pc} @ 02074a4c
    .zero 2
@ FUN_02074a50 at 0x02074a50
    push {r4, lr} @ 02074a50
    adds r4, r0, #0 @ 02074a52
    adds r0, r1, #0 @ 02074a54
    adds r1, r2, #0 @ 02074a56
    bl .L_020748bc @ 02074a58
    adds r0, r4, #0 @ 02074a5c
    movs r1, #6 @ 02074a5e
    bl .L_020747a4 @ 02074a60
    pop {r4, pc} @ 02074a64
    .zero 2
@ FUN_02074a68 at 0x02074a68
    push {r4, r5, r6, r7, lr} @ 02074a68
    mov r7, fp @ 02074a6a
    mov r6, sl @ 02074a6c
    mov r5, sb @ 02074a6e
    mov r4, r8 @ 02074a70
    push {r4, r5, r6, r7} @ 02074a72
    sub sp, #0x14 @ 02074a74
    adds r4, r2, #0 @ 02074a76
    ldr r3, [pc, #0xa8] @ 02074a78
    movs r2, #0xa @ 02074a7a
    add r2, sp @ 02074a7c
    adds r5, r1, #0 @ 02074a7e
    lsls r6, r0, #9 @ 02074a80
    mov r8, r2 @ 02074a82
    mov fp, r3 @ 02074a84
    b .L_02074a90 @ 02074a86
.L_02074a88:
    movs r3, #0x80 @ 02074a88
    lsls r3, r3, #2 @ 02074a8a
    adds r6, r6, r3 @ 02074a8c
    adds r4, r4, r3 @ 02074a8e
.L_02074a90:
    subs r5, #1 @ 02074a90
    blo .L_02074b20 @ 02074a92
    movs r1, #0x80 @ 02074a94
    mov r2, sp @ 02074a96
    adds r2, #2 @ 02074a98
    adds r0, r4, #0 @ 02074a9a
    lsls r1, r1, #2 @ 02074a9c
    bl .L_02074b88 @ 02074a9e
    adds r1, r6, #0 @ 02074aa2
    movs r0, #0x18 @ 02074aa4
    bl .L_020748bc @ 02074aa6
    mov r0, r8 @ 02074aaa
    movs r1, #6 @ 02074aac
    bl .L_020747a4 @ 02074aae
    lsls r0, r0, #0x18 @ 02074ab2
    cmp r0, #0 @ 02074ab4
    beq .L_02074b10 @ 02074ab6
    mov r1, sp @ 02074ab8
    adds r0, r4, #0 @ 02074aba
    adds r1, #2 @ 02074abc
    bl .L_02085990 @ 02074abe
    cmp r0, #0 @ 02074ac2
    beq .L_02074b10 @ 02074ac4
    movs r0, #0x10 @ 02074ac6
    bl .L_02074808 @ 02074ac8
    mov r2, r8 @ 02074acc
    movs r3, #0 @ 02074ace
    strb r3, [r2, #3] @ 02074ad0
    mov r3, fp @ 02074ad2
    ldr r1, [r3] @ 02074ad4
    movs r0, #0xd @ 02074ad6
    bl .L_020748bc @ 02074ad8
    mov r0, r8 @ 02074adc
    movs r1, #6 @ 02074ade
    bl .L_020747a4 @ 02074ae0
    ldr r7, [pc, #0x40] @ 02074ae4
    movs r2, #0x1f @ 02074ae6
    mov sb, fp @ 02074ae8
    mov sl, r2 @ 02074aea
.L_02074aec:
    mov r2, r8 @ 02074aec
    ldrb r3, [r2, #3] @ 02074aee
    mov r2, sl @ 02074af0
    ands r3, r2 @ 02074af2
    cmp r3, #9 @ 02074af4
    beq .L_02074a88 @ 02074af6
    mov r3, sb @ 02074af8
    ldr r1, [r3] @ 02074afa
    movs r0, #0xd @ 02074afc
    bl .L_020748bc @ 02074afe
    subs r7, #1 @ 02074b02
    mov r0, r8 @ 02074b04
    movs r1, #6 @ 02074b06
    bl .L_020747a4 @ 02074b08
    cmp r7, #0 @ 02074b0c
    bne .L_02074aec @ 02074b0e
.L_02074b10:
    movs r0, #0 @ 02074b10
.L_02074b12:
    add sp, #0x14 @ 02074b12
    pop {r2, r3, r4, r5} @ 02074b14
    mov r8, r2 @ 02074b16
    mov sb, r3 @ 02074b18
    mov sl, r4 @ 02074b1a
    mov fp, r5 @ 02074b1c
    pop {r4, r5, r6, r7, pc} @ 02074b1e
.L_02074b20:
    movs r0, #1 @ 02074b20
    b .L_02074b12 @ 02074b22
    .byte 0x78, 0x4c, 0x0b, 0x02, 0xb7, 0x0b, 0x00, 0x00 @ 02074b24
.L_02074b2c:
@ FUN_02074b2c at 0x02074b2c
    push {r4, r5, r6, r7, lr} @ 02074b2c
    mov r7, r8 @ 02074b2e
    push {r7} @ 02074b30
    mov r8, r0 @ 02074b32
    mov ip, r1 @ 02074b34
    cmp r1, #0 @ 02074b36
    ble .L_02074b82 @ 02074b38
    movs r6, #0 @ 02074b3a
    movs r0, #0 @ 02074b3c
    movs r5, #0x80 @ 02074b3e
    movs r7, #9 @ 02074b40
.L_02074b42:
    mov r3, r8 @ 02074b42
    ldrb r1, [r6, r3] @ 02074b44
    movs r4, #0 @ 02074b46
    b .L_02074b4e @ 02074b48
.L_02074b4a:
    lsls r3, r1, #0x19 @ 02074b4a
    lsrs r1, r3, #0x18 @ 02074b4c
.L_02074b4e:
    lsls r3, r0, #0x19 @ 02074b4e
    lsrs r0, r3, #0x18 @ 02074b50
    adds r2, r1, #0 @ 02074b52
    adds r3, r0, #0 @ 02074b54
    ands r2, r5 @ 02074b56
    ands r3, r5 @ 02074b58
    cmp r2, r3 @ 02074b5a
    beq .L_02074b66 @ 02074b5c
    adds r3, r0, #0 @ 02074b5e
    eors r3, r7 @ 02074b60
    lsls r3, r3, #0x18 @ 02074b62
    lsrs r0, r3, #0x18 @ 02074b64
.L_02074b66:
    adds r4, #1 @ 02074b66
    cmp r4, #8 @ 02074b68
    bne .L_02074b4a @ 02074b6a
    adds r6, #1 @ 02074b6c
    cmp ip, r6 @ 02074b6e
    bne .L_02074b42 @ 02074b70
    lsls r3, r0, #1 @ 02074b72
    movs r2, #1 @ 02074b74
    orrs r3, r2 @ 02074b76
    lsls r3, r3, #0x18 @ 02074b78
    lsrs r0, r3, #0x18 @ 02074b7a
.L_02074b7c:
    pop {r2} @ 02074b7c
    mov r8, r2 @ 02074b7e
    pop {r4, r5, r6, r7, pc} @ 02074b80
.L_02074b82:
    movs r0, #1 @ 02074b82
    b .L_02074b7c @ 02074b84
    .zero 2
.L_02074b88:
@ FUN_02074b88 at 0x02074b88
    push {r4, r5, r6, r7, lr} @ 02074b88
    mov r7, fp @ 02074b8a
    mov r6, sl @ 02074b8c
    mov r5, sb @ 02074b8e
    mov r4, r8 @ 02074b90
    push {r4, r5, r6, r7} @ 02074b92
    mov sl, r2 @ 02074b94
    lsls r1, r1, #3 @ 02074b96
    movs r4, #0 @ 02074b98
    ldr r2, [pc, #0xe0] @ 02074b9a
    mov sb, r0 @ 02074b9c
    mov ip, r1 @ 02074b9e
    movs r7, #0 @ 02074ba0
    movs r6, #0 @ 02074ba2
    movs r5, #0 @ 02074ba4
    mov r8, r4 @ 02074ba6
.L_02074ba8:
    lsls r0, r2, #0x18 @ 02074ba8
    bpl .L_02074bb6 @ 02074baa
    mov r1, sb @ 02074bac
    ldrb r1, [r1] @ 02074bae
    movs r3, #1 @ 02074bb0
    mov r8, r1 @ 02074bb2
    add sb, r3 @ 02074bb4
.L_02074bb6:
    movs r1, #0x80 @ 02074bb6
    lsls r7, r7, #1 @ 02074bb8
    lsls r1, r1, #9 @ 02074bba
    tst r7, r1 @ 02074bbc
    beq .L_02074bc4 @ 02074bbe
    ldr r0, [pc, #0xbc] @ 02074bc0
    eors r7, r0 @ 02074bc2
.L_02074bc4:
    lsrs r3, r2, #0x18 @ 02074bc4
    mov r0, r8 @ 02074bc6
    tst r0, r3 @ 02074bc8
    beq .L_02074bd0 @ 02074bca
    ldr r3, [pc, #0xb0] @ 02074bcc
    eors r7, r3 @ 02074bce
.L_02074bd0:
    lsls r6, r6, #1 @ 02074bd0
    tst r6, r1 @ 02074bd2
    beq .L_02074bda @ 02074bd4
    ldr r0, [pc, #0xa8] @ 02074bd6
    eors r6, r0 @ 02074bd8
.L_02074bda:
    lsrs r3, r2, #0x19 @ 02074bda
    mov r0, r8 @ 02074bdc
    tst r0, r3 @ 02074bde
    beq .L_02074be6 @ 02074be0
    ldr r3, [pc, #0x9c] @ 02074be2
    eors r6, r3 @ 02074be4
.L_02074be6:
    lsls r5, r5, #1 @ 02074be6
    tst r5, r1 @ 02074be8
    beq .L_02074bf0 @ 02074bea
    ldr r0, [pc, #0x90] @ 02074bec
    eors r5, r0 @ 02074bee
.L_02074bf0:
    lsrs r3, r2, #0x1a @ 02074bf0
    mov r0, r8 @ 02074bf2
    tst r0, r3 @ 02074bf4
    beq .L_02074bfc @ 02074bf6
    ldr r3, [pc, #0x84] @ 02074bf8
    eors r5, r3 @ 02074bfa
.L_02074bfc:
    lsls r4, r4, #1 @ 02074bfc
    tst r4, r1 @ 02074bfe
    beq .L_02074c06 @ 02074c00
    ldr r0, [pc, #0x7c] @ 02074c02
    eors r4, r0 @ 02074c04
.L_02074c06:
    lsrs r3, r2, #0x1b @ 02074c06
    mov r1, r8 @ 02074c08
    tst r1, r3 @ 02074c0a
    beq .L_02074c12 @ 02074c0c
    ldr r3, [pc, #0x70] @ 02074c0e
    eors r4, r3 @ 02074c10
.L_02074c12:
    movs r0, #4 @ 02074c12
    negs r0, r0 @ 02074c14
    add ip, r0 @ 02074c16
    movs r3, #4 @ 02074c18
    mov r1, ip @ 02074c1a
    rors r2, r3 @ 02074c1c
    cmp r1, #0 @ 02074c1e
    bne .L_02074ba8 @ 02074c20
    movs r3, #1 @ 02074c22
    movs r1, #0x80 @ 02074c24
    mov ip, r3 @ 02074c26
    movs r3, #8 @ 02074c28
    movs r0, #0x10 @ 02074c2a
    lsls r1, r1, #8 @ 02074c2c
    mov r8, r3 @ 02074c2e
    b .L_02074c3a @ 02074c30
.L_02074c32:
    lsls r7, r7, #1 @ 02074c32
    lsls r6, r6, #1 @ 02074c34
    lsls r5, r5, #1 @ 02074c36
    lsls r4, r4, #1 @ 02074c38
.L_02074c3a:
    lsls r2, r2, #4 @ 02074c3a
    tst r7, r1 @ 02074c3c
    beq .L_02074c44 @ 02074c3e
    mov r3, r8 @ 02074c40
    orrs r2, r3 @ 02074c42
.L_02074c44:
    tst r6, r1 @ 02074c44
    beq .L_02074c4c @ 02074c46
    movs r3, #4 @ 02074c48
    orrs r2, r3 @ 02074c4a
.L_02074c4c:
    tst r5, r1 @ 02074c4c
    beq .L_02074c54 @ 02074c4e
    movs r3, #2 @ 02074c50
    orrs r2, r3 @ 02074c52
.L_02074c54:
    tst r4, r1 @ 02074c54
    beq .L_02074c5c @ 02074c56
    mov r3, ip @ 02074c58
    orrs r2, r3 @ 02074c5a
.L_02074c5c:
    subs r0, #1 @ 02074c5c
    mov r3, ip @ 02074c5e
    tst r0, r3 @ 02074c60
    bne .L_02074c6c @ 02074c62
    mov r3, sl @ 02074c64
    strb r2, [r3] @ 02074c66
    movs r3, #1 @ 02074c68
    add sl, r3 @ 02074c6a
.L_02074c6c:
    cmp r0, #0 @ 02074c6c
    bne .L_02074c32 @ 02074c6e
    pop {r2, r3, r4, r5} @ 02074c70
    mov r8, r2 @ 02074c72
    mov sb, r3 @ 02074c74
    mov sl, r4 @ 02074c76
    mov fp, r5 @ 02074c78
    pop {r4, r5, r6, r7, pc} @ 02074c7a
    .byte 0x80, 0x80, 0x80, 0x80, 0x21, 0x10, 0x00, 0x00 @ 02074c7c
.L_02074c84:
@ FUN_02074c84 at 0x02074c84
    push {r4, r5, r6, r7, lr} @ 02074c84
    mov r7, sl @ 02074c86
    mov r6, sb @ 02074c88
    mov r5, r8 @ 02074c8a
    push {r5, r6, r7} @ 02074c8c
    sub sp, #0x18 @ 02074c8e
    mov r5, sp @ 02074c90
    adds r5, #7 @ 02074c92
    adds r6, r0, #0 @ 02074c94
    mov sl, r1 @ 02074c96
    mov sb, r2 @ 02074c98
    adds r0, r5, #0 @ 02074c9a
    movs r1, #0 @ 02074c9c
    movs r2, #0x11 @ 02074c9e
    mov r8, r3 @ 02074ca0
    bl .L_02085970 @ 02074ca2
    movs r4, #0 @ 02074ca6
    b .L_02074cca @ 02074ca8
.L_02074caa:
    movs r2, #0xc0 @ 02074caa
    adds r0, r5, #0 @ 02074cac
    movs r1, #0x29 @ 02074cae
    lsls r2, r2, #0xa @ 02074cb0
    blx r6 @ 02074cb2
    cmp r0, #0 @ 02074cb4
    beq .L_02074cc0 @ 02074cb6
    movs r3, #1 @ 02074cb8
    ldrsb r3, [r5, r3] @ 02074cba
    cmp r3, #0 @ 02074cbc
    blt .L_02074ce6 @ 02074cbe
.L_02074cc0:
    movs r3, #0xfa @ 02074cc0
    adds r4, #1 @ 02074cc2
    lsls r3, r3, #2 @ 02074cc4
    cmp r4, r3 @ 02074cc6
    beq .L_02074cd8 @ 02074cc8
.L_02074cca:
    adds r0, r5, #0 @ 02074cca
    movs r1, #0x37 @ 02074ccc
    movs r2, #0 @ 02074cce
    blx r6 @ 02074cd0
    ldrb r3, [r5] @ 02074cd2
    cmp r3, #0x37 @ 02074cd4
    beq .L_02074caa @ 02074cd6
.L_02074cd8:
    movs r0, #0 @ 02074cd8
.L_02074cda:
    add sp, #0x18 @ 02074cda
    pop {r2, r3, r4} @ 02074cdc
    mov r8, r2 @ 02074cde
    mov sb, r3 @ 02074ce0
    mov sl, r4 @ 02074ce2
    pop {r4, r5, r6, r7, pc} @ 02074ce4
.L_02074ce6:
    adds r0, r5, #0 @ 02074ce6
    movs r1, #2 @ 02074ce8
    movs r2, #0 @ 02074cea
    blx sl @ 02074cec
    movs r7, #0 @ 02074cee
    b .L_02074cfc @ 02074cf0
.L_02074cf2:
    movs r3, #0xfa @ 02074cf2
    adds r7, #1 @ 02074cf4
    lsls r3, r3, #2 @ 02074cf6
    cmp r7, r3 @ 02074cf8
    beq .L_02074cd8 @ 02074cfa
.L_02074cfc:
    movs r2, #0 @ 02074cfc
    adds r0, r5, #0 @ 02074cfe
    movs r1, #3 @ 02074d00
    blx r6 @ 02074d02
    ldrb r2, [r5, #1] @ 02074d04
    ldrb r3, [r5, #2] @ 02074d06
    lsls r2, r2, #0x18 @ 02074d08
    lsls r3, r3, #0x10 @ 02074d0a
    adds r4, r2, #0 @ 02074d0c
    orrs r4, r3 @ 02074d0e
    mov r2, r8 @ 02074d10
    str r4, [r2] @ 02074d12
    ldrb r3, [r5, #3] @ 02074d14
    movs r2, #0x1e @ 02074d16
    ands r3, r2 @ 02074d18
    cmp r3, #6 @ 02074d1a
    beq .L_02074cf2 @ 02074d1c
    movs r1, #9 @ 02074d1e
    adds r2, r4, #0 @ 02074d20
    adds r0, r5, #0 @ 02074d22
    blx sl @ 02074d24
    mov r3, r8 @ 02074d26
    ldr r2, [r3] @ 02074d28
    adds r0, r5, #0 @ 02074d2a
    movs r1, #7 @ 02074d2c
    blx r6 @ 02074d2e
    mov r2, sb @ 02074d30
    cmp r2, #0 @ 02074d32
    bne .L_02074d6e @ 02074d34
.L_02074d36:
    movs r2, #0x80 @ 02074d36
    lsls r2, r2, #2 @ 02074d38
    adds r0, r5, #0 @ 02074d3a
    movs r1, #0x10 @ 02074d3c
    blx r6 @ 02074d3e
    movs r7, #0x80 @ 02074d40
    movs r2, #0x1f @ 02074d42
    movs r4, #0 @ 02074d44
    mov sl, r2 @ 02074d46
    lsls r7, r7, #1 @ 02074d48
    b .L_02074d5c @ 02074d4a
.L_02074d4c:
    ldrb r3, [r5, #3] @ 02074d4c
    mov r2, sl @ 02074d4e
    ands r3, r2 @ 02074d50
    cmp r3, #9 @ 02074d52
    beq .L_02074d6a @ 02074d54
    adds r4, #1 @ 02074d56
    cmp r4, r7 @ 02074d58
    beq .L_02074cd8 @ 02074d5a
.L_02074d5c:
    mov r3, r8 @ 02074d5c
    ldr r2, [r3] @ 02074d5e
    adds r0, r5, #0 @ 02074d60
    movs r1, #0xd @ 02074d62
    blx r6 @ 02074d64
    cmp r0, #0 @ 02074d66
    beq .L_02074d4c @ 02074d68
.L_02074d6a:
    movs r0, #1 @ 02074d6a
    b .L_02074cda @ 02074d6c
.L_02074d6e:
    mov r3, r8 @ 02074d6e
    ldr r2, [r3] @ 02074d70
    adds r0, r5, #0 @ 02074d72
    movs r1, #0x37 @ 02074d74
    blx r6 @ 02074d76
    adds r0, r5, #0 @ 02074d78
    movs r1, #6 @ 02074d7a
    movs r2, #2 @ 02074d7c
    blx r6 @ 02074d7e
    b .L_02074d36 @ 02074d80
    .byte 0xc0, 0x46, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff @ 02074d82
    .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff @ 02074d92
    .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff @ 02074da2
    .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xed, 0xa5 @ 02074db2
    .byte 0x8d, 0xbf, 0x20, 0x43, 0x68, 0x69, 0x73, 0x68, 0x6d, 0x00, 0x01, 0x0f, 0x00, 0x0f, 0x44, 0x65 @ 02074dc2
    .byte 0x66, 0x61, 0x75, 0x6c, 0x74, 0x20, 0x28, 0x4e, 0x6f, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x66 @ 02074dd2
    .byte 0x61, 0x63, 0x65, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 02074de2
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x4d @ 02074df2
    .byte 0x07, 0x02, 0xc0, 0xcd, 0x07, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 @ 02074e02
    .byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x4c @ 02074e12
    .byte 0x44, 0x49, 0x00, 0x00, 0x00, 0x00, 0x40, 0x4e, 0x07, 0x02, 0x40, 0x4e, 0x07, 0x02, 0x40, 0x4e @ 02074e22
    .byte 0x07, 0x02, 0x40, 0x4e, 0x07, 0x02, 0x40, 0x4e, 0x07, 0x02, 0x40, 0x4e, 0x07, 0x02 @ 02074e32
@ FUN_02074e40 at 0x02074e40
.arm
    mov r0, #0 @ 02074e40
    bx lr @ 02074e44
    .zero 32632
.L_0207cdc0:
@ FUN_0207cdc0 at 0x0207cdc0
    push {r4, r5} @ 0207cdc0
    mov r5, #0x200 @ 0207cdc4
    mov r2, #0x9000000 @ 0207cdc8
    mov r4, #0x10000 @ 0207cdcc
.L_0207cdd0:
    subs r4, r4, #1 @ 0207cdd0
    moveq r0, #0 @ 0207cdd4
    beq .L_0207ce70 @ 0207cdd8
    ldrh r3, [r2] @ 0207cddc
    tst r3, #0x100 @ 0207cde0
    beq .L_0207cdd0 @ 0207cde4
    ldrh r3, [r2] @ 0207cde8
    mov r3, #0 @ 0207cdec
    strh r3, [r2] @ 0207cdf0
    tst r0, #1 @ 0207cdf4
    beq .L_0207ce18 @ 0207cdf8
.L_0207cdfc:
    ldrb r3, [r0], #1 @ 0207cdfc
    ldrb r4, [r0], #1 @ 0207ce00
    orr r3, r3, r4, lsl #8 @ 0207ce04
    stm r2, {r3, r4} @ 0207ce08
    subs r5, r5, #2 @ 0207ce0c
    bne .L_0207cdfc @ 0207ce10
    b .L_0207ce30 @ 0207ce14
.L_0207ce18:
    ldrh r3, [r0], #2 @ 0207ce18
    add r3, r3, r3, lsl #20 @ 0207ce1c
    lsr r4, r3, #8 @ 0207ce20
    stm r2, {r3, r4} @ 0207ce24
    subs r5, r5, #2 @ 0207ce28
    bne .L_0207ce18 @ 0207ce2c
.L_0207ce30:
    cmp r1, #0 @ 0207ce30
    movne r0, r1 @ 0207ce34
    movne r1, #0 @ 0207ce38
    movne r5, #8 @ 0207ce3c
    bne .L_0207ce18 @ 0207ce40
    mov r3, #0xff @ 0207ce44
    strh r3, [r2] @ 0207ce48
    mov r4, #0x10000 @ 0207ce4c
.L_0207ce50:
    subs r4, r4, #1 @ 0207ce50
    moveq r0, #0 @ 0207ce54
    beq .L_0207ce70 @ 0207ce58
    ldrh r3, [r2] @ 0207ce5c
    tst r3, #0x100 @ 0207ce60
    bne .L_0207ce50 @ 0207ce64
    ldm r2, {r3, r4} @ 0207ce68
    mov r0, #1 @ 0207ce6c
.L_0207ce70:
    pop {r4, r5} @ 0207ce70
    bx lr @ 0207ce74
    .byte 0x00, 0x00, 0xa0, 0xe1, 0x00, 0x00, 0xa0, 0xe1 @ 0207ce78
.L_0207ce80:
@ FUN_0207ce80 at 0x0207ce80
.thumb
    push {r4, r5, r6, r7, lr} @ 0207ce80
    mov r7, sl @ 0207ce82
    mov r6, r8 @ 0207ce84
    push {r6, r7} @ 0207ce86
    ldr r6, [r0, #4] @ 0207ce88
    sub sp, #4 @ 0207ce8a
    mov r8, r0 @ 0207ce8c
    adds r7, r1, #0 @ 0207ce8e
    ldr r5, [r0, #8] @ 0207ce90
    cmp r6, #0 @ 0207ce92
    beq .L_0207cf3c @ 0207ce94
    ldr r3, [r5] @ 0207ce96
    cmp r1, r3 @ 0207ce98
    beq .L_0207cece @ 0207ce9a
    movs r1, #0 @ 0207ce9c
    movs r4, #1 @ 0207ce9e
    mov sl, r1 @ 0207cea0
    adds r2, r5, #0 @ 0207cea2
    negs r4, r4 @ 0207cea4
    movs r0, #0 @ 0207cea6
    movs r1, #0xc @ 0207cea8
    b .L_0207cec6 @ 0207ceaa
.L_0207ceac:
    ldr r3, [r2, #4] @ 0207ceac
    cmp r4, r3 @ 0207ceae
    bls .L_0207ceb6 @ 0207ceb0
.L_0207ceb2:
    adds r4, r3, #0 @ 0207ceb2
    mov sl, r0 @ 0207ceb4
.L_0207ceb6:
    adds r0, #1 @ 0207ceb6
    cmp r6, r0 @ 0207ceb8
    beq .L_0207cee2 @ 0207ceba
    adds r2, r5, r1 @ 0207cebc
    ldr r3, [r2] @ 0207cebe
    adds r1, #0xc @ 0207cec0
    cmp r7, r3 @ 0207cec2
    beq .L_0207ced2 @ 0207cec4
.L_0207cec6:
    adds r3, #1 @ 0207cec6
    bne .L_0207ceac @ 0207cec8
    ldr r3, [r2, #4] @ 0207ceca
    b .L_0207ceb2 @ 0207cecc
.L_0207cece:
    adds r2, r5, #0 @ 0207cece
    movs r0, #0 @ 0207ced0
.L_0207ced2:
    ldr r3, [r2, #4] @ 0207ced2
    adds r3, #1 @ 0207ced4
    str r3, [r2, #4] @ 0207ced6
.L_0207ced8:
    add sp, #4 @ 0207ced8
    pop {r2, r3} @ 0207ceda
    mov r8, r2 @ 0207cedc
    mov sl, r3 @ 0207cede
    pop {r4, r5, r6, r7, pc} @ 0207cee0
.L_0207cee2:
    mov r2, sl @ 0207cee2
    lsls r3, r2, #1 @ 0207cee4
    add r3, sl @ 0207cee6
    lsls r3, r3, #2 @ 0207cee8
    lsls r6, r2, #9 @ 0207ceea
.L_0207ceec:
    adds r4, r5, r3 @ 0207ceec
    ldr r0, [r4] @ 0207ceee
    adds r1, r0, #1 @ 0207cef0
    bne .L_0207cf1c @ 0207cef2
.L_0207cef4:
    mov r1, r8 @ 0207cef4
    ldr r3, [r1] @ 0207cef6
    ldr r2, [r1, #0xc] @ 0207cef8
    ldr r3, [r3, #0x10] @ 0207cefa
    adds r2, r6, r2 @ 0207cefc
    adds r0, r7, #0 @ 0207cefe
    movs r1, #1 @ 0207cf00
    blx r3 @ 0207cf02
    lsls r0, r0, #0x18 @ 0207cf04
    cmp r0, #0 @ 0207cf06
    beq .L_0207cf16 @ 0207cf08
    ldr r3, [r4, #4] @ 0207cf0a
    mov r0, sl @ 0207cf0c
    adds r3, #1 @ 0207cf0e
    str r7, [r4] @ 0207cf10
    str r3, [r4, #4] @ 0207cf12
    b .L_0207ced8 @ 0207cf14
.L_0207cf16:
    movs r0, #1 @ 0207cf16
    negs r0, r0 @ 0207cf18
    b .L_0207ced8 @ 0207cf1a
.L_0207cf1c:
    ldrb r3, [r4, #8] @ 0207cf1c
    cmp r3, #1 @ 0207cf1e
    bne .L_0207cef4 @ 0207cf20
    mov r2, r8 @ 0207cf22
    ldr r3, [r2] @ 0207cf24
    ldr r2, [r2, #0xc] @ 0207cf26
    ldr r3, [r3, #0x14] @ 0207cf28
    adds r2, r6, r2 @ 0207cf2a
    movs r1, #1 @ 0207cf2c
    blx r3 @ 0207cf2e
    lsls r0, r0, #0x18 @ 0207cf30
    cmp r0, #0 @ 0207cf32
    beq .L_0207cf16 @ 0207cf34
    movs r3, #0 @ 0207cf36
    strb r3, [r4, #8] @ 0207cf38
    b .L_0207cef4 @ 0207cf3a
.L_0207cf3c:
    movs r3, #0 @ 0207cf3c
    mov sl, r3 @ 0207cf3e
    movs r6, #0 @ 0207cf40
    b .L_0207ceec @ 0207cf42
.L_0207cf44:
@ FUN_0207cf44 at 0x0207cf44
    push {r4, r5, r6, lr} @ 0207cf44
    ldr r3, [r0, #4] @ 0207cf46
    adds r4, r0, #0 @ 0207cf48
    cmp r3, #0 @ 0207cf4a
    beq .L_0207cf86 @ 0207cf4c
    ldr r1, [r0, #8] @ 0207cf4e
    movs r6, #0 @ 0207cf50
    movs r5, #0 @ 0207cf52
.L_0207cf54:
    adds r0, r5, r1 @ 0207cf54
    ldrb r3, [r0, #8] @ 0207cf56
    cmp r3, #0 @ 0207cf58
    beq .L_0207cf74 @ 0207cf5a
    ldr r1, [r4] @ 0207cf5c
    ldr r3, [r4, #0xc] @ 0207cf5e
    lsls r2, r6, #9 @ 0207cf60
    adds r2, r2, r3 @ 0207cf62
    ldr r0, [r0] @ 0207cf64
    ldr r3, [r1, #0x14] @ 0207cf66
    movs r1, #1 @ 0207cf68
    blx r3 @ 0207cf6a
    lsls r0, r0, #0x18 @ 0207cf6c
    cmp r0, #0 @ 0207cf6e
    beq .L_0207cf8a @ 0207cf70
    ldr r1, [r4, #8] @ 0207cf72
.L_0207cf74:
    adds r2, r5, r1 @ 0207cf74
    movs r3, #0 @ 0207cf76
    str r3, [r2, #4] @ 0207cf78
    strb r3, [r2, #8] @ 0207cf7a
    ldr r3, [r4, #4] @ 0207cf7c
    adds r6, #1 @ 0207cf7e
    adds r5, #0xc @ 0207cf80
    cmp r3, r6 @ 0207cf82
    bhi .L_0207cf54 @ 0207cf84
.L_0207cf86:
    movs r0, #1 @ 0207cf86
.L_0207cf88:
    pop {r4, r5, r6, pc} @ 0207cf88
.L_0207cf8a:
    movs r0, #0xff @ 0207cf8a
    b .L_0207cf88 @ 0207cf8c
    .zero 2
.L_0207cf90:
@ FUN_0207cf90 at 0x0207cf90
    push {r4, r5, r6, lr} @ 0207cf90
    ldr r6, [r0, #4] @ 0207cf92
    cmp r6, #0 @ 0207cf94
    beq .L_0207cfba @ 0207cf96
    movs r4, #1 @ 0207cf98
    ldr r5, [r0, #8] @ 0207cf9a
    movs r1, #0 @ 0207cf9c
    movs r2, #0 @ 0207cf9e
    negs r4, r4 @ 0207cfa0
    movs r0, #0 @ 0207cfa2
.L_0207cfa4:
    lsls r3, r2, #1 @ 0207cfa4
    adds r3, r3, r2 @ 0207cfa6
    lsls r3, r3, #2 @ 0207cfa8
    adds r3, r5, r3 @ 0207cfaa
    adds r1, #1 @ 0207cfac
    str r4, [r3] @ 0207cfae
    str r0, [r3, #4] @ 0207cfb0
    strb r0, [r3, #8] @ 0207cfb2
    adds r2, r1, #0 @ 0207cfb4
    cmp r6, r1 @ 0207cfb6
    bne .L_0207cfa4 @ 0207cfb8
.L_0207cfba:
    pop {r4, r5, r6, pc} @ 0207cfba
.L_0207cfbc:
@ FUN_0207cfbc at 0x0207cfbc
    push {r4, r5, r6, r7, lr} @ 0207cfbc
    mov r7, sl @ 0207cfbe
    mov r6, r8 @ 0207cfc0
    push {r6, r7} @ 0207cfc2
    sub sp, #4 @ 0207cfc4
    mov r8, r3 @ 0207cfc6
    ldr r3, [sp, #0x20] @ 0207cfc8
    movs r5, #0x80 @ 0207cfca
    add r3, r8 @ 0207cfcc
    lsls r5, r5, #2 @ 0207cfce
    mov sl, r1 @ 0207cfd0
    adds r7, r0, #0 @ 0207cfd2
    adds r1, r2, #0 @ 0207cfd4
    cmp r3, r5 @ 0207cfd6
    bls .L_0207cfe6 @ 0207cfd8
.L_0207cfda:
    movs r0, #0 @ 0207cfda
.L_0207cfdc:
    add sp, #4 @ 0207cfdc
    pop {r2, r3} @ 0207cfde
    mov r8, r2 @ 0207cfe0
    mov sl, r3 @ 0207cfe2
    pop {r4, r5, r6, r7, pc} @ 0207cfe4
.L_0207cfe6:
    bl .L_0207ce80 @ 0207cfe6
    adds r6, r0, #0 @ 0207cfea
    adds r3, r0, #1 @ 0207cfec
    beq .L_0207cfda @ 0207cfee
    lsls r4, r0, #9 @ 0207cff0
    ldr r0, [r7, #0xc] @ 0207cff2
    movs r1, #0 @ 0207cff4
    adds r0, r4, r0 @ 0207cff6
    adds r2, r5, #0 @ 0207cff8
    bl .L_02085970 @ 0207cffa
    ldr r3, [r7, #0xc] @ 0207cffe
    ldr r2, [sp, #0x20] @ 0207d000
    adds r4, r4, r3 @ 0207d002
    add r4, r8 @ 0207d004
    adds r0, r4, #0 @ 0207d006
    mov r1, sl @ 0207d008
    bl .L_02085988 @ 0207d00a
    lsls r3, r6, #1 @ 0207d00e
    ldr r2, [r7, #8] @ 0207d010
    adds r3, r3, r6 @ 0207d012
    lsls r3, r3, #2 @ 0207d014
    adds r3, r3, r2 @ 0207d016
    movs r0, #1 @ 0207d018
    movs r2, #1 @ 0207d01a
    strb r2, [r3, #8] @ 0207d01c
    b .L_0207cfdc @ 0207d01e
.L_0207d020:
@ FUN_0207d020 at 0x0207d020
    push {r4, r5, r6, r7, lr} @ 0207d020
    sub sp, #4 @ 0207d022
    adds r6, r3, #0 @ 0207d024
    ldr r3, [sp, #0x18] @ 0207d026
    adds r7, r1, #0 @ 0207d028
    adds r1, r2, #0 @ 0207d02a
    adds r2, r6, r3 @ 0207d02c
    movs r3, #0x80 @ 0207d02e
    lsls r3, r3, #2 @ 0207d030
    adds r5, r0, #0 @ 0207d032
    cmp r2, r3 @ 0207d034
    bls .L_0207d03e @ 0207d036
.L_0207d038:
    movs r0, #0 @ 0207d038
.L_0207d03a:
    add sp, #4 @ 0207d03a
    pop {r4, r5, r6, r7, pc} @ 0207d03c
.L_0207d03e:
    bl .L_0207ce80 @ 0207d03e
    adds r4, r0, #0 @ 0207d042
    adds r3, r0, #1 @ 0207d044
    beq .L_0207d038 @ 0207d046
    ldr r3, [r5, #0xc] @ 0207d048
    lsls r0, r0, #9 @ 0207d04a
    adds r0, r0, r3 @ 0207d04c
    ldr r2, [sp, #0x18] @ 0207d04e
    adds r0, r0, r6 @ 0207d050
    adds r1, r7, #0 @ 0207d052
    bl .L_02085988 @ 0207d054
    lsls r3, r4, #1 @ 0207d058
    ldr r2, [r5, #8] @ 0207d05a
    adds r3, r3, r4 @ 0207d05c
    lsls r3, r3, #2 @ 0207d05e
    adds r3, r3, r2 @ 0207d060
    movs r0, #1 @ 0207d062
    movs r2, #1 @ 0207d064
    strb r2, [r3, #8] @ 0207d066
    b .L_0207d03a @ 0207d068
    .zero 2
.L_0207d06c:
@ FUN_0207d06c at 0x0207d06c
    push {r4, r5, r6, r7, lr} @ 0207d06c
    sub sp, #4 @ 0207d06e
    ldr r7, [sp, #0x18] @ 0207d070
    adds r6, r1, #0 @ 0207d072
    adds r4, r3, #0 @ 0207d074
    adds r1, r2, #0 @ 0207d076
    adds r2, r3, r7 @ 0207d078
    movs r3, #0x80 @ 0207d07a
    lsls r3, r3, #2 @ 0207d07c
    adds r5, r0, #0 @ 0207d07e
    cmp r2, r3 @ 0207d080
    bls .L_0207d08a @ 0207d082
.L_0207d084:
    movs r0, #0 @ 0207d084
.L_0207d086:
    add sp, #4 @ 0207d086
    pop {r4, r5, r6, r7, pc} @ 0207d088
.L_0207d08a:
    bl .L_0207ce80 @ 0207d08a
    adds r3, r0, #1 @ 0207d08e
    beq .L_0207d084 @ 0207d090
    ldr r3, [r5, #0xc] @ 0207d092
    lsls r1, r0, #9 @ 0207d094
    adds r1, r1, r3 @ 0207d096
    adds r1, r1, r4 @ 0207d098
    adds r0, r6, #0 @ 0207d09a
    adds r2, r7, #0 @ 0207d09c
    bl .L_02085988 @ 0207d09e
    movs r0, #1 @ 0207d0a2
    b .L_0207d086 @ 0207d0a4
    .zero 2
.L_0207d0a8:
@ FUN_0207d0a8 at 0x0207d0a8
    push {r4, lr} @ 0207d0a8
    adds r4, r0, #0 @ 0207d0aa
    bl .L_0207cf44 @ 0207d0ac
    ldr r0, [r4, #0xc] @ 0207d0b0
    bl .L_02085968 @ 0207d0b2
    ldr r0, [r4, #8] @ 0207d0b6
    bl .L_02085968 @ 0207d0b8
    adds r0, r4, #0 @ 0207d0bc
    bl .L_02085968 @ 0207d0be
    pop {r4, pc} @ 0207d0c2
.L_0207d0c4:
@ FUN_0207d0c4 at 0x0207d0c4
    push {r4, r5, r6, r7, lr} @ 0207d0c4
    sub sp, #4 @ 0207d0c6
    adds r4, r0, #0 @ 0207d0c8
    adds r6, r1, #0 @ 0207d0ca
    cmp r0, #1 @ 0207d0cc
    bls .L_0207d130 @ 0207d0ce
.L_0207d0d0:
    movs r0, #0x10 @ 0207d0d0
    bl .L_02085978 @ 0207d0d2
    adds r5, r0, #0 @ 0207d0d6
    cmp r0, #0 @ 0207d0d8
    beq .L_0207d12c @ 0207d0da
    adds r7, r0, #0 @ 0207d0dc
    str r6, [r0] @ 0207d0de
    str r4, [r0, #4] @ 0207d0e0
    lsls r0, r4, #1 @ 0207d0e2
    adds r0, r0, r4 @ 0207d0e4
    lsls r0, r0, #2 @ 0207d0e6
    bl .L_02085978 @ 0207d0e8
    cmp r0, #0 @ 0207d0ec
    beq .L_0207d134 @ 0207d0ee
    adds r6, r0, #0 @ 0207d0f0
    cmp r4, #0 @ 0207d0f2
    beq .L_0207d10c @ 0207d0f4
    movs r1, #1 @ 0207d0f6
    movs r3, #0 @ 0207d0f8
    negs r1, r1 @ 0207d0fa
    movs r2, #0 @ 0207d0fc
.L_0207d0fe:
    adds r3, #1 @ 0207d0fe
    str r1, [r0] @ 0207d100
    str r2, [r0, #4] @ 0207d102
    strb r2, [r0, #8] @ 0207d104
    adds r0, #0xc @ 0207d106
    cmp r4, r3 @ 0207d108
    bne .L_0207d0fe @ 0207d10a
.L_0207d10c:
    lsls r0, r4, #9 @ 0207d10c
    str r6, [r5, #8] @ 0207d10e
    bl .L_02085978 @ 0207d110
    str r0, [r5, #0xc] @ 0207d114
    cmp r0, #0 @ 0207d116
    beq .L_0207d120 @ 0207d118
.L_0207d11a:
    adds r0, r7, #0 @ 0207d11a
    add sp, #4 @ 0207d11c
    pop {r4, r5, r6, r7, pc} @ 0207d11e
.L_0207d120:
    ldr r0, [r5, #8] @ 0207d120
    bl .L_02085968 @ 0207d122
    adds r0, r5, #0 @ 0207d126
    bl .L_02085968 @ 0207d128
.L_0207d12c:
    movs r7, #0 @ 0207d12c
    b .L_0207d11a @ 0207d12e
.L_0207d130:
    movs r4, #2 @ 0207d130
    b .L_0207d0d0 @ 0207d132
.L_0207d134:
    adds r0, r5, #0 @ 0207d134
    bl .L_02085968 @ 0207d136
    movs r7, #0 @ 0207d13a
    b .L_0207d11a @ 0207d13c
    .byte 0xc0, 0x46 @ 0207d13e
    movs r3, #0x86 @ 0207d140
    str r3, [r0] @ 0207d142
    movs r0, #1 @ 0207d144
    negs r0, r0 @ 0207d146
    bx lr @ 0207d148
    .zero 2
    ldr r1, [r1, #4] @ 0207d14c
    movs r3, #0xa0 @ 0207d14e
    lsls r3, r3, #1 @ 0207d150
    movs r2, #0 @ 0207d152
    movs r0, #0 @ 0207d154
    strb r2, [r1, r3] @ 0207d156
    bx lr @ 0207d158
    .zero 2
@ FUN_0207d15c at 0x0207d15c
    push {r4, r5, r6, r7, lr} @ 0207d15c
    adds r6, r3, #0 @ 0207d15e
    ldr r4, [r1, #4] @ 0207d160
    movs r3, #0xa0 @ 0207d162
    lsls r3, r3, #1 @ 0207d164
    ldrb r3, [r4, r3] @ 0207d166
    adds r5, r0, #0 @ 0207d168
    sub sp, #4 @ 0207d16a
    adds r0, r2, #0 @ 0207d16c
    cmp r3, #0 @ 0207d16e
    beq .L_0207d1b4 @ 0207d170
    ldr r7, [pc, #0x4c] @ 0207d172
    ldrb r3, [r4, r7] @ 0207d174
    cmp r3, #0 @ 0207d176
    beq .L_0207d1aa @ 0207d178
    adds r1, r4, #0 @ 0207d17a
    movs r2, #0x80 @ 0207d17c
    adds r1, #0x3c @ 0207d17e
    lsls r2, r2, #1 @ 0207d180
    bl .L_02085998 @ 0207d182
    cmp r6, #0 @ 0207d186
    beq .L_0207d1a6 @ 0207d188
    adds r5, r4, #0 @ 0207d18a
    ldm r5!, {r0} @ 0207d18c
    adds r2, r6, #0 @ 0207d18e
    adds r1, r5, #0 @ 0207d190
    bl .L_0207f4f0 @ 0207d192
.L_0207d196:
    ldr r0, [r4] @ 0207d196
    adds r1, r5, #0 @ 0207d198
    bl .L_0207ee00 @ 0207d19a
    strb r0, [r4, r7] @ 0207d19e
    movs r0, #0 @ 0207d1a0
.L_0207d1a2:
    add sp, #4 @ 0207d1a2
    pop {r4, r5, r6, r7, pc} @ 0207d1a4
.L_0207d1a6:
    adds r5, r4, #4 @ 0207d1a6
    b .L_0207d196 @ 0207d1a8
.L_0207d1aa:
    movs r0, #1 @ 0207d1aa
    movs r3, #2 @ 0207d1ac
    negs r0, r0 @ 0207d1ae
    str r3, [r5] @ 0207d1b0
    b .L_0207d1a2 @ 0207d1b2
.L_0207d1b4:
    movs r0, #1 @ 0207d1b4
    movs r3, #9 @ 0207d1b6
    negs r0, r0 @ 0207d1b8
    str r3, [r5] @ 0207d1ba
    b .L_0207d1a2 @ 0207d1bc
    .byte 0x00, 0x00, 0x41, 0x01, 0x00, 0x00 @ 0207d1be
@ FUN_0207d1c4 at 0x0207d1c4
    push {r4, lr} @ 0207d1c4
    ldr r4, [r1, #4] @ 0207d1c6
    movs r3, #0xa0 @ 0207d1c8
    lsls r3, r3, #1 @ 0207d1ca
    ldrb r3, [r4, r3] @ 0207d1cc
    cmp r3, #0 @ 0207d1ce
    beq .L_0207d1e8 @ 0207d1d0
    movs r3, #0x9e @ 0207d1d2
    lsls r3, r3, #1 @ 0207d1d4
    adds r1, r4, #0 @ 0207d1d6
    ldr r2, [r4, r3] @ 0207d1d8
    ldm r1!, {r0} @ 0207d1da
    bl .L_0207efc4 @ 0207d1dc
    ldr r3, [pc, #0x10] @ 0207d1e0
    strb r0, [r4, r3] @ 0207d1e2
    movs r0, #0 @ 0207d1e4
.L_0207d1e6:
    pop {r4, pc} @ 0207d1e6
.L_0207d1e8:
    movs r3, #9 @ 0207d1e8
    str r3, [r0] @ 0207d1ea
    movs r0, #1 @ 0207d1ec
    negs r0, r0 @ 0207d1ee
    b .L_0207d1e6 @ 0207d1f0
    .byte 0x00, 0x00, 0x41, 0x01, 0x00, 0x00 @ 0207d1f2
@ FUN_0207d1f8 at 0x0207d1f8
    push {r4, r5, r6, r7, lr} @ 0207d1f8
    mov r7, r8 @ 0207d1fa
    push {r7} @ 0207d1fc
    sub sp, #0x138 @ 0207d1fe
    adds r7, r0, #0 @ 0207d200
    adds r0, r1, #0 @ 0207d202
    adds r4, r1, #0 @ 0207d204
    mov r8, r2 @ 0207d206
    bl .L_02072d38 @ 0207d208
    adds r5, r0, #0 @ 0207d20c
    cmp r0, #0 @ 0207d20e
    beq .L_0207d264 @ 0207d210
    adds r0, r4, #0 @ 0207d212
    movs r1, #0x3a @ 0207d214
    bl .L_02085958 @ 0207d216
    cmp r0, #0 @ 0207d21a
    beq .L_0207d22c @ 0207d21c
    adds r4, r0, #1 @ 0207d21e
    adds r0, r4, #0 @ 0207d220
    movs r1, #0x3a @ 0207d222
    bl .L_02085958 @ 0207d224
    cmp r0, #0 @ 0207d228
    bne .L_0207d250 @ 0207d22a
.L_0207d22c:
    adds r0, r5, #0 @ 0207d22c
    mov r1, sp @ 0207d22e
    adds r2, r4, #0 @ 0207d230
    movs r3, #0 @ 0207d232
    bl .L_0207f07c @ 0207d234
    cmp r0, #0 @ 0207d238
    beq .L_0207d25a @ 0207d23a
    adds r0, r5, #0 @ 0207d23c
    mov r1, sp @ 0207d23e
    mov r2, r8 @ 0207d240
    bl .L_0207f4f0 @ 0207d242
    movs r0, #0 @ 0207d246
.L_0207d248:
    add sp, #0x138 @ 0207d248
    pop {r2} @ 0207d24a
    mov r8, r2 @ 0207d24c
    pop {r4, r5, r6, r7, pc} @ 0207d24e
.L_0207d250:
    movs r0, #1 @ 0207d250
    movs r3, #0x16 @ 0207d252
    negs r0, r0 @ 0207d254
    str r3, [r7] @ 0207d256
    b .L_0207d248 @ 0207d258
.L_0207d25a:
    movs r0, #1 @ 0207d25a
    movs r3, #2 @ 0207d25c
    negs r0, r0 @ 0207d25e
    str r3, [r7] @ 0207d260
    b .L_0207d248 @ 0207d262
.L_0207d264:
    movs r0, #1 @ 0207d264
    movs r3, #0x13 @ 0207d266
    negs r0, r0 @ 0207d268
    str r3, [r7] @ 0207d26a
    b .L_0207d248 @ 0207d26c
    .zero 2
    push {r4, r5, r6, lr} @ 0207d270
    adds r6, r0, #0 @ 0207d272
    adds r0, r1, #0 @ 0207d274
    adds r4, r1, #0 @ 0207d276
    bl .L_02072d38 @ 0207d278
    adds r5, r0, #0 @ 0207d27c
    cmp r0, #0 @ 0207d27e
    beq .L_0207d2d4 @ 0207d280
    adds r0, r4, #0 @ 0207d282
    movs r1, #0x3a @ 0207d284
    bl .L_02085958 @ 0207d286
    cmp r0, #0 @ 0207d28a
    beq .L_0207d29c @ 0207d28c
    adds r4, r0, #1 @ 0207d28e
    adds r0, r4, #0 @ 0207d290
    movs r1, #0x3a @ 0207d292
    bl .L_02085958 @ 0207d294
    cmp r0, #0 @ 0207d298
    bne .L_0207d2b6 @ 0207d29a
.L_0207d29c:
    adds r0, r5, #0 @ 0207d29c
    bl .L_02072d10 @ 0207d29e
    cmp r0, #0 @ 0207d2a2
    beq .L_0207d2c0 @ 0207d2a4
    adds r0, r5, #0 @ 0207d2a6
    adds r1, r4, #0 @ 0207d2a8
    bl .L_0207f208 @ 0207d2aa
    cmp r0, #0 @ 0207d2ae
    beq .L_0207d2ca @ 0207d2b0
    movs r0, #0 @ 0207d2b2
.L_0207d2b4:
    pop {r4, r5, r6, pc} @ 0207d2b4
.L_0207d2b6:
    movs r0, #1 @ 0207d2b6
    movs r3, #0x16 @ 0207d2b8
    negs r0, r0 @ 0207d2ba
    str r3, [r6] @ 0207d2bc
    b .L_0207d2b4 @ 0207d2be
.L_0207d2c0:
    movs r0, #1 @ 0207d2c0
    movs r3, #2 @ 0207d2c2
    negs r0, r0 @ 0207d2c4
    str r3, [r6] @ 0207d2c6
    b .L_0207d2b4 @ 0207d2c8
.L_0207d2ca:
    movs r0, #1 @ 0207d2ca
    movs r3, #0x14 @ 0207d2cc
    negs r0, r0 @ 0207d2ce
    str r3, [r6] @ 0207d2d0
    b .L_0207d2b4 @ 0207d2d2
.L_0207d2d4:
    movs r0, #1 @ 0207d2d4
    movs r3, #0x13 @ 0207d2d6
    negs r0, r0 @ 0207d2d8
    str r3, [r6] @ 0207d2da
    b .L_0207d2b4 @ 0207d2dc
    .zero 2
    push {r4, r5, r6, r7, lr} @ 0207d2e0
    mov r7, sl @ 0207d2e2
    mov r6, r8 @ 0207d2e4
    push {r6, r7} @ 0207d2e6
    ldr r4, [pc, #0x134] @ 0207d2e8
    mov r8, r0 @ 0207d2ea
    add sp, r4 @ 0207d2ec
    adds r0, r1, #0 @ 0207d2ee
    adds r4, r1, #0 @ 0207d2f0
    bl .L_02072d38 @ 0207d2f2
    adds r5, r0, #0 @ 0207d2f6
    cmp r0, #0 @ 0207d2f8
    bne .L_0207d2fe @ 0207d2fa
    b .L_0207d414 @ 0207d2fc
.L_0207d2fe:
    ldrb r3, [r0, #8] @ 0207d2fe
    cmp r3, #0 @ 0207d300
    beq .L_0207d306 @ 0207d302
    b .L_0207d3f0 @ 0207d304
.L_0207d306:
    adds r0, r4, #0 @ 0207d306
    movs r1, #0x3a @ 0207d308
    bl .L_02085958 @ 0207d30a
    cmp r0, #0 @ 0207d30e
    beq .L_0207d320 @ 0207d310
    adds r4, r0, #1 @ 0207d312
    adds r0, r4, #0 @ 0207d314
    movs r1, #0x3a @ 0207d316
    bl .L_02085958 @ 0207d318
    cmp r0, #0 @ 0207d31c
    bne .L_0207d3e4 @ 0207d31e
.L_0207d320:
    adds r0, r5, #0 @ 0207d320
    mov r1, sp @ 0207d322
    adds r2, r4, #0 @ 0207d324
    movs r3, #0 @ 0207d326
    mov r7, sp @ 0207d328
    bl .L_0207f07c @ 0207d32a
    cmp r0, #0 @ 0207d32e
    beq .L_0207d3fc @ 0207d330
    mov r0, sp @ 0207d332
    bl .L_0207ed1c @ 0207d334
    ldrb r3, [r7, #0xb] @ 0207d338
    adds r6, r0, #0 @ 0207d33a
    lsls r2, r3, #0x1b @ 0207d33c
    bmi .L_0207d37c @ 0207d33e
.L_0207d340:
    cmp r6, #0 @ 0207d340
    bne .L_0207d3ce @ 0207d342
.L_0207d344:
    movs r4, #0 @ 0207d344
.L_0207d346:
    adds r0, r5, #0 @ 0207d346
    adds r1, r7, #0 @ 0207d348
    bl .L_0207f430 @ 0207d34a
    cmp r0, #0 @ 0207d34e
    beq .L_0207d372 @ 0207d350
.L_0207d352:
    ldr r0, [r5, #4] @ 0207d352
    bl .L_0207cf44 @ 0207d354
    cmp r0, #0 @ 0207d358
    beq .L_0207d408 @ 0207d35a
    cmp r4, #0 @ 0207d35c
    beq .L_0207d3ca @ 0207d35e
.L_0207d360:
    movs r0, #1 @ 0207d360
    negs r0, r0 @ 0207d362
.L_0207d364:
    movs r3, #0x9d @ 0207d364
    lsls r3, r3, #2 @ 0207d366
    add sp, r3 @ 0207d368
    pop {r2, r3} @ 0207d36a
    mov r8, r2 @ 0207d36c
    mov sl, r3 @ 0207d36e
    pop {r4, r5, r6, r7, pc} @ 0207d370
.L_0207d372:
    movs r3, #5 @ 0207d372
    mov r2, r8 @ 0207d374
    movs r4, #1 @ 0207d376
    str r3, [r2] @ 0207d378
    b .L_0207d352 @ 0207d37a
.L_0207d37c:
    add r4, sp, #0x138 @ 0207d37c
    adds r0, r5, #0 @ 0207d37e
    adds r1, r4, #0 @ 0207d380
    adds r2, r6, #0 @ 0207d382
    bl .L_0207efc4 @ 0207d384
    cmp r0, #0 @ 0207d388
    beq .L_0207d340 @ 0207d38a
    movs r3, #0x38 @ 0207d38c
    ldrb r3, [r4, r3] @ 0207d38e
    cmp r3, #0x2e @ 0207d390
    bne .L_0207d3c2 @ 0207d392
    ldr r3, [pc, #0x8c] @ 0207d394
    mov sl, r3 @ 0207d396
.L_0207d398:
    movs r3, #0x39 @ 0207d398
    ldrb r3, [r4, r3] @ 0207d39a
    cmp r3, #0 @ 0207d39c
    beq .L_0207d3ae @ 0207d39e
    ldr r2, [sp, #0x170] @ 0207d3a0
    mov r3, sl @ 0207d3a2
    ands r2, r3 @ 0207d3a4
    movs r3, #0xb8 @ 0207d3a6
    lsls r3, r3, #6 @ 0207d3a8
    cmp r2, r3 @ 0207d3aa
    bne .L_0207d3c2 @ 0207d3ac
.L_0207d3ae:
    adds r0, r5, #0 @ 0207d3ae
    adds r1, r4, #0 @ 0207d3b0
    bl .L_0207ee00 @ 0207d3b2
    cmp r0, #0 @ 0207d3b6
    beq .L_0207d340 @ 0207d3b8
    movs r3, #0x38 @ 0207d3ba
    ldrb r3, [r4, r3] @ 0207d3bc
    cmp r3, #0x2e @ 0207d3be
    beq .L_0207d398 @ 0207d3c0
.L_0207d3c2:
    movs r3, #1 @ 0207d3c2
    mov r2, r8 @ 0207d3c4
    str r3, [r2] @ 0207d3c6
    b .L_0207d360 @ 0207d3c8
.L_0207d3ca:
    movs r0, #0 @ 0207d3ca
    b .L_0207d364 @ 0207d3cc
.L_0207d3ce:
    adds r0, r5, #0 @ 0207d3ce
    adds r1, r6, #0 @ 0207d3d0
    bl .L_0207e6cc @ 0207d3d2
    cmp r0, #0 @ 0207d3d6
    bne .L_0207d344 @ 0207d3d8
    movs r3, #5 @ 0207d3da
    mov r2, r8 @ 0207d3dc
    movs r4, #1 @ 0207d3de
    str r3, [r2] @ 0207d3e0
    b .L_0207d346 @ 0207d3e2
.L_0207d3e4:
    movs r0, #1 @ 0207d3e4
    movs r3, #0x16 @ 0207d3e6
    mov r2, r8 @ 0207d3e8
    negs r0, r0 @ 0207d3ea
    str r3, [r2] @ 0207d3ec
    b .L_0207d364 @ 0207d3ee
.L_0207d3f0:
    movs r0, #1 @ 0207d3f0
    movs r3, #0x1e @ 0207d3f2
    mov r2, r8 @ 0207d3f4
    negs r0, r0 @ 0207d3f6
    str r3, [r2] @ 0207d3f8
    b .L_0207d364 @ 0207d3fa
.L_0207d3fc:
    movs r0, #1 @ 0207d3fc
    movs r3, #2 @ 0207d3fe
    mov r2, r8 @ 0207d400
    negs r0, r0 @ 0207d402
    str r3, [r2] @ 0207d404
    b .L_0207d364 @ 0207d406
.L_0207d408:
    movs r0, #1 @ 0207d408
    movs r3, #5 @ 0207d40a
    mov r2, r8 @ 0207d40c
    negs r0, r0 @ 0207d40e
    str r3, [r2] @ 0207d410
    b .L_0207d364 @ 0207d412
.L_0207d414:
    movs r0, #1 @ 0207d414
    movs r3, #0x13 @ 0207d416
    mov r2, r8 @ 0207d418
    negs r0, r0 @ 0207d41a
    str r3, [r2] @ 0207d41c
    b .L_0207d364 @ 0207d41e
    .byte 0x8c, 0xfd, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00 @ 0207d420
@ FUN_0207d428 at 0x0207d428
    push {r4, r5, r6, r7, lr} @ 0207d428
    mov r7, r8 @ 0207d42a
    push {r7} @ 0207d42c
    sub sp, #0x138 @ 0207d42e
    mov r8, r0 @ 0207d430
    adds r0, r2, #0 @ 0207d432
    ldr r7, [r1, #4] @ 0207d434
    adds r4, r2, #0 @ 0207d436
    bl .L_02072d38 @ 0207d438
    adds r5, r0, #0 @ 0207d43c
    str r0, [r7] @ 0207d43e
    cmp r0, #0 @ 0207d440
    beq .L_0207d4be @ 0207d442
    adds r0, r4, #0 @ 0207d444
    movs r1, #0x3a @ 0207d446
    bl .L_02085958 @ 0207d448
    cmp r0, #0 @ 0207d44c
    beq .L_0207d45e @ 0207d44e
    adds r4, r0, #1 @ 0207d450
    adds r0, r4, #0 @ 0207d452
    movs r1, #0x3a @ 0207d454
    bl .L_02085958 @ 0207d456
    cmp r0, #0 @ 0207d45a
    bne .L_0207d4a2 @ 0207d45c
.L_0207d45e:
    adds r0, r5, #0 @ 0207d45e
    mov r1, sp @ 0207d460
    adds r2, r4, #0 @ 0207d462
    movs r3, #0 @ 0207d464
    mov r6, sp @ 0207d466
    bl .L_0207f07c @ 0207d468
    cmp r0, #0 @ 0207d46c
    beq .L_0207d4b6 @ 0207d46e
    ldrb r3, [r6, #0xb] @ 0207d470
    lsls r2, r3, #0x1b @ 0207d472
    bpl .L_0207d4ac @ 0207d474
    mov r0, sp @ 0207d476
    bl .L_0207ed1c @ 0207d478
    movs r3, #0x9e @ 0207d47c
    lsls r3, r3, #1 @ 0207d47e
    adds r1, r7, #0 @ 0207d480
    adds r2, r0, #0 @ 0207d482
    str r0, [r7, r3] @ 0207d484
    ldm r1!, {r0} @ 0207d486
    bl .L_0207efc4 @ 0207d488
    ldr r3, [pc, #0x38] @ 0207d48c
    movs r2, #1 @ 0207d48e
    strb r0, [r7, r3] @ 0207d490
    movs r3, #0xa0 @ 0207d492
    lsls r3, r3, #1 @ 0207d494
    strb r2, [r7, r3] @ 0207d496
    adds r0, r7, #0 @ 0207d498
.L_0207d49a:
    add sp, #0x138 @ 0207d49a
    pop {r2} @ 0207d49c
    mov r8, r2 @ 0207d49e
    pop {r4, r5, r6, r7, pc} @ 0207d4a0
.L_0207d4a2:
    movs r3, #0x16 @ 0207d4a2
    mov r2, r8 @ 0207d4a4
    movs r0, #0 @ 0207d4a6
    str r3, [r2] @ 0207d4a8
    b .L_0207d49a @ 0207d4aa
.L_0207d4ac:
    movs r3, #0x14 @ 0207d4ac
    mov r2, r8 @ 0207d4ae
    movs r0, #0 @ 0207d4b0
    str r3, [r2] @ 0207d4b2
    b .L_0207d49a @ 0207d4b4
.L_0207d4b6:
    movs r3, #2 @ 0207d4b6
    mov r2, r8 @ 0207d4b8
    str r3, [r2] @ 0207d4ba
    b .L_0207d49a @ 0207d4bc
.L_0207d4be:
    movs r3, #0x13 @ 0207d4be
    mov r2, r8 @ 0207d4c0
    movs r0, #0 @ 0207d4c2
    str r3, [r2] @ 0207d4c4
    b .L_0207d49a @ 0207d4c6
    .byte 0x41, 0x01, 0x00, 0x00 @ 0207d4c8
    push {r4, r5, r6, r7, lr} @ 0207d4cc
    mov r7, sl @ 0207d4ce
    mov r6, sb @ 0207d4d0
    mov r5, r8 @ 0207d4d2
    push {r5, r6, r7} @ 0207d4d4
    ldr r4, [pc, #0x170] @ 0207d4d6
    mov r8, r0 @ 0207d4d8
    add sp, r4 @ 0207d4da
    adds r0, r1, #0 @ 0207d4dc
    adds r5, r1, #0 @ 0207d4de
    adds r4, r2, #0 @ 0207d4e0
    bl .L_02072d38 @ 0207d4e2
    adds r6, r0, #0 @ 0207d4e6
    cmp r0, #0 @ 0207d4e8
    bne .L_0207d4ee @ 0207d4ea
    b .L_0207d63a @ 0207d4ec
.L_0207d4ee:
    adds r0, r4, #0 @ 0207d4ee
    bl .L_02072d38 @ 0207d4f0
    cmp r6, r0 @ 0207d4f4
    beq .L_0207d4fa @ 0207d4f6
    b .L_0207d5e6 @ 0207d4f8
.L_0207d4fa:
    ldrb r3, [r6, #8] @ 0207d4fa
    cmp r3, #0 @ 0207d4fc
    beq .L_0207d502 @ 0207d4fe
    b .L_0207d5fe @ 0207d500
.L_0207d502:
    adds r0, r5, #0 @ 0207d502
    movs r1, #0x3a @ 0207d504
    bl .L_02085958 @ 0207d506
    cmp r0, #0 @ 0207d50a
    beq .L_0207d51c @ 0207d50c
    adds r5, r0, #1 @ 0207d50e
    adds r0, r5, #0 @ 0207d510
    movs r1, #0x3a @ 0207d512
    bl .L_02085958 @ 0207d514
    cmp r0, #0 @ 0207d518
    bne .L_0207d598 @ 0207d51a
.L_0207d51c:
    adds r0, r4, #0 @ 0207d51c
    movs r1, #0x3a @ 0207d51e
    bl .L_02085958 @ 0207d520
    cmp r0, #0 @ 0207d524
    beq .L_0207d536 @ 0207d526
    adds r4, r0, #1 @ 0207d528
    adds r0, r4, #0 @ 0207d52a
    movs r1, #0x3a @ 0207d52c
    bl .L_02085958 @ 0207d52e
    cmp r0, #0 @ 0207d532
    bne .L_0207d598 @ 0207d534
.L_0207d536:
    adds r0, r6, #0 @ 0207d536
    mov r1, sp @ 0207d538
    adds r2, r5, #0 @ 0207d53a
    movs r3, #0 @ 0207d53c
    mov sl, sp @ 0207d53e
    bl .L_0207f07c @ 0207d540
    cmp r0, #0 @ 0207d544
    beq .L_0207d60a @ 0207d546
    add r7, sp, #0x138 @ 0207d548
    adds r0, r6, #0 @ 0207d54a
    adds r1, r7, #0 @ 0207d54c
    adds r2, r4, #0 @ 0207d54e
    movs r3, #0 @ 0207d550
    bl .L_0207f07c @ 0207d552
    cmp r0, #0 @ 0207d556
    bne .L_0207d616 @ 0207d558
    adds r0, r4, #0 @ 0207d55a
    movs r1, #0x2f @ 0207d55c
    bl .L_020859a0 @ 0207d55e
    adds r5, r0, #0 @ 0207d562
    cmp r0, #0 @ 0207d564
    beq .L_0207d5a4 @ 0207d566
    adds r0, r6, #0 @ 0207d568
    adds r1, r7, #0 @ 0207d56a
    adds r2, r4, #0 @ 0207d56c
    adds r3, r5, #0 @ 0207d56e
    bl .L_0207f07c @ 0207d570
    cmp r0, #0 @ 0207d574
    beq .L_0207d57e @ 0207d576
    ldrb r3, [r7, #0xb] @ 0207d578
    lsls r2, r3, #0x1b @ 0207d57a
    bmi .L_0207d5f2 @ 0207d57c
.L_0207d57e:
    movs r3, #0x14 @ 0207d57e
    mov r2, r8 @ 0207d580
    movs r0, #1 @ 0207d582
    str r3, [r2] @ 0207d584
    negs r0, r0 @ 0207d586
.L_0207d588:
    movs r3, #0x9c @ 0207d588
    lsls r3, r3, #2 @ 0207d58a
    add sp, r3 @ 0207d58c
    pop {r2, r3, r4} @ 0207d58e
    mov r8, r2 @ 0207d590
    mov sb, r3 @ 0207d592
    mov sl, r4 @ 0207d594
    pop {r4, r5, r6, r7, pc} @ 0207d596
.L_0207d598:
    movs r0, #1 @ 0207d598
    movs r3, #0x16 @ 0207d59a
    mov r2, r8 @ 0207d59c
    negs r0, r0 @ 0207d59e
    str r3, [r2] @ 0207d5a0
    b .L_0207d588 @ 0207d5a2
.L_0207d5a4:
    ldr r3, [r6, #0x3c] @ 0207d5a4
    mov sb, r3 @ 0207d5a6
.L_0207d5a8:
    movs r2, #0x9c @ 0207d5a8
    mov r1, sl @ 0207d5aa
    lsls r2, r2, #1 @ 0207d5ac
    adds r0, r7, #0 @ 0207d5ae
    bl .L_02085988 @ 0207d5b0
    adds r1, r4, #0 @ 0207d5b4
    movs r2, #0xff @ 0207d5b6
    add r0, sp, #0x170 @ 0207d5b8
    bl .L_02085998 @ 0207d5ba
    adds r0, r6, #0 @ 0207d5be
    adds r1, r7, #0 @ 0207d5c0
    mov r2, sb @ 0207d5c2
    bl .L_0207f5bc @ 0207d5c4
    cmp r0, #0 @ 0207d5c8
    beq .L_0207d62e @ 0207d5ca
    adds r0, r6, #0 @ 0207d5cc
    mov r1, sl @ 0207d5ce
    bl .L_0207f430 @ 0207d5d0
    cmp r0, #0 @ 0207d5d4
    beq .L_0207d622 @ 0207d5d6
    ldr r0, [r6, #4] @ 0207d5d8
    bl .L_0207cf44 @ 0207d5da
    cmp r0, #0 @ 0207d5de
    beq .L_0207d622 @ 0207d5e0
    movs r0, #0 @ 0207d5e2
    b .L_0207d588 @ 0207d5e4
.L_0207d5e6:
    movs r0, #1 @ 0207d5e6
    movs r3, #0x12 @ 0207d5e8
    mov r2, r8 @ 0207d5ea
    negs r0, r0 @ 0207d5ec
    str r3, [r2] @ 0207d5ee
    b .L_0207d588 @ 0207d5f0
.L_0207d5f2:
    adds r0, r7, #0 @ 0207d5f2
    bl .L_0207ed1c @ 0207d5f4
    adds r4, r5, #1 @ 0207d5f8
    mov sb, r0 @ 0207d5fa
    b .L_0207d5a8 @ 0207d5fc
.L_0207d5fe:
    movs r0, #1 @ 0207d5fe
    movs r3, #0x1e @ 0207d600
    mov r2, r8 @ 0207d602
    negs r0, r0 @ 0207d604
    str r3, [r2] @ 0207d606
    b .L_0207d588 @ 0207d608
.L_0207d60a:
    movs r0, #1 @ 0207d60a
    movs r3, #2 @ 0207d60c
    mov r2, r8 @ 0207d60e
    negs r0, r0 @ 0207d610
    str r3, [r2] @ 0207d612
    b .L_0207d588 @ 0207d614
.L_0207d616:
    movs r0, #1 @ 0207d616
    movs r3, #0x11 @ 0207d618
    mov r2, r8 @ 0207d61a
    negs r0, r0 @ 0207d61c
    str r3, [r2] @ 0207d61e
    b .L_0207d588 @ 0207d620
.L_0207d622:
    movs r0, #1 @ 0207d622
    movs r3, #5 @ 0207d624
    mov r2, r8 @ 0207d626
    negs r0, r0 @ 0207d628
    str r3, [r2] @ 0207d62a
    b .L_0207d588 @ 0207d62c
.L_0207d62e:
    movs r0, #1 @ 0207d62e
    movs r3, #0x1c @ 0207d630
    mov r2, r8 @ 0207d632
    negs r0, r0 @ 0207d634
    str r3, [r2] @ 0207d636
    b .L_0207d588 @ 0207d638
.L_0207d63a:
    movs r0, #1 @ 0207d63a
    movs r3, #0x13 @ 0207d63c
    mov r2, r8 @ 0207d63e
    negs r0, r0 @ 0207d640
    str r3, [r2] @ 0207d642
    b .L_0207d588 @ 0207d644
    .byte 0x00, 0x00, 0x90, 0xfd, 0xff, 0xff @ 0207d646
@ FUN_0207d64c at 0x0207d64c
    push {r4, r5, r6, r7, lr} @ 0207d64c
    mov r7, fp @ 0207d64e
    mov r6, sl @ 0207d650
    mov r5, sb @ 0207d652
    mov r4, r8 @ 0207d654
    push {r4, r5, r6, r7} @ 0207d656
    sub sp, #0x174 @ 0207d658
    str r0, [sp, #0xc] @ 0207d65a
    adds r0, r1, #0 @ 0207d65c
    adds r4, r1, #0 @ 0207d65e
    bl .L_02072d38 @ 0207d660
    adds r7, r0, #0 @ 0207d664
    cmp r0, #0 @ 0207d666
    bne .L_0207d66c @ 0207d668
    b .L_0207d82e @ 0207d66a
.L_0207d66c:
    adds r0, r4, #0 @ 0207d66c
    movs r1, #0x3a @ 0207d66e
    bl .L_02085958 @ 0207d670
    cmp r0, #0 @ 0207d674
    beq .L_0207d688 @ 0207d676
    adds r4, r0, #1 @ 0207d678
    adds r0, r4, #0 @ 0207d67a
    movs r1, #0x3a @ 0207d67c
    bl .L_02085958 @ 0207d67e
    cmp r0, #0 @ 0207d682
    beq .L_0207d688 @ 0207d684
    b .L_0207d7f6 @ 0207d686
.L_0207d688:
    add r6, sp, #0x18 @ 0207d688
    adds r0, r7, #0 @ 0207d68a
    adds r1, r6, #0 @ 0207d68c
    adds r2, r4, #0 @ 0207d68e
    movs r3, #0 @ 0207d690
    bl .L_0207f07c @ 0207d692
    cmp r0, #0 @ 0207d696
    beq .L_0207d69c @ 0207d698
    b .L_0207d822 @ 0207d69a
.L_0207d69c:
    ldrb r3, [r7, #8] @ 0207d69c
    cmp r3, #0 @ 0207d69e
    beq .L_0207d6a4 @ 0207d6a0
    b .L_0207d802 @ 0207d6a2
.L_0207d6a4:
    adds r0, r4, #0 @ 0207d6a4
    movs r1, #0x2f @ 0207d6a6
    bl .L_020859a0 @ 0207d6a8
    adds r5, r0, #0 @ 0207d6ac
    cmp r0, #0 @ 0207d6ae
    beq .L_0207d6e2 @ 0207d6b0
    adds r0, r7, #0 @ 0207d6b2
    adds r1, r6, #0 @ 0207d6b4
    adds r2, r4, #0 @ 0207d6b6
    adds r3, r5, #0 @ 0207d6b8
    bl .L_0207f07c @ 0207d6ba
    cmp r0, #0 @ 0207d6be
    beq .L_0207d6ca @ 0207d6c0
    ldrb r3, [r6, #0xb] @ 0207d6c2
    lsls r2, r3, #0x1b @ 0207d6c4
    bpl .L_0207d6ca @ 0207d6c6
    b .L_0207d7ea @ 0207d6c8
.L_0207d6ca:
    ldr r2, [sp, #0xc] @ 0207d6ca
    movs r3, #0x14 @ 0207d6cc
    movs r0, #1 @ 0207d6ce
    str r3, [r2] @ 0207d6d0
    negs r0, r0 @ 0207d6d2
.L_0207d6d4:
    add sp, #0x174 @ 0207d6d4
    pop {r2, r3, r4, r5} @ 0207d6d6
    mov r8, r2 @ 0207d6d8
    mov sb, r3 @ 0207d6da
    mov sl, r4 @ 0207d6dc
    mov fp, r5 @ 0207d6de
    pop {r4, r5, r6, r7, pc} @ 0207d6e0
.L_0207d6e2:
    ldr r3, [r7, #0x3c] @ 0207d6e2
    adds r1, r4, #0 @ 0207d6e4
    mov sb, r3 @ 0207d6e6
.L_0207d6e8:
    movs r2, #0xff @ 0207d6e8
    add r0, sp, #0x50 @ 0207d6ea
    bl .L_02085998 @ 0207d6ec
    movs r1, #0 @ 0207d6f0
    movs r2, #0x20 @ 0207d6f2
    adds r0, r6, #0 @ 0207d6f4
    bl .L_02085970 @ 0207d6f6
    movs r3, #0 @ 0207d6fa
    mov r8, r3 @ 0207d6fc
    strb r3, [r6, #0xd] @ 0207d6fe
    bl .L_0207e808 @ 0207d700
    strb r0, [r6, #0xe] @ 0207d704
    lsrs r0, r0, #8 @ 0207d706
    strb r0, [r6, #0xf] @ 0207d708
    bl .L_0207e854 @ 0207d70a
    strb r0, [r6, #0x10] @ 0207d70e
    lsrs r0, r0, #8 @ 0207d710
    strb r0, [r6, #0x11] @ 0207d712
    movs r3, #0x10 @ 0207d714
    adds r0, r7, #0 @ 0207d716
    movs r1, #0 @ 0207d718
    strb r3, [r6, #0xb] @ 0207d71a
    bl .L_0207e7a0 @ 0207d71c
    adds r5, r0, #0 @ 0207d720
    cmp r0, #0 @ 0207d722
    beq .L_0207d816 @ 0207d724
    lsls r2, r0, #0x10 @ 0207d726
    lsls r3, r2, #8 @ 0207d728
    lsrs r3, r3, #0x18 @ 0207d72a
    str r3, [sp, #0x14] @ 0207d72c
    strb r3, [r6, #0x1a] @ 0207d72e
    lsrs r3, r0, #0x10 @ 0207d730
    lsrs r2, r2, #0x18 @ 0207d732
    lsls r3, r3, #0x10 @ 0207d734
    str r2, [sp, #0x10] @ 0207d736
    strb r2, [r6, #0x1b] @ 0207d738
    lsls r2, r3, #8 @ 0207d73a
    lsrs r2, r2, #0x18 @ 0207d73c
    lsrs r3, r3, #0x18 @ 0207d73e
    mov fp, r2 @ 0207d740
    strb r2, [r6, #0x14] @ 0207d742
    adds r0, r7, #0 @ 0207d744
    adds r1, r6, #0 @ 0207d746
    mov r2, sb @ 0207d748
    mov sl, r3 @ 0207d74a
    strb r3, [r6, #0x15] @ 0207d74c
    bl .L_0207f5bc @ 0207d74e
    cmp r0, #0 @ 0207d752
    beq .L_0207d816 @ 0207d754
    add r4, sp, #0x150 @ 0207d756
    mov r3, r8 @ 0207d758
    movs r2, #0xb @ 0207d75a
    adds r0, r4, #0 @ 0207d75c
    movs r1, #0x20 @ 0207d75e
    str r3, [sp, #0x150] @ 0207d760
    str r3, [sp, #0x154] @ 0207d762
    str r3, [sp, #0x158] @ 0207d764
    str r3, [sp, #0x15c] @ 0207d766
    str r3, [sp, #0x160] @ 0207d768
    str r3, [sp, #0x164] @ 0207d76a
    str r3, [sp, #0x168] @ 0207d76c
    str r3, [sp, #0x16c] @ 0207d76e
    bl .L_02085970 @ 0207d770
    movs r3, #0x2e @ 0207d774
    movs r2, #0x10 @ 0207d776
    strb r3, [r4] @ 0207d778
    strb r2, [r4, #0xb] @ 0207d77a
    mov r3, sp @ 0207d77c
    ldrb r3, [r3, #0x14] @ 0207d77e
    mov r2, sp @ 0207d780
    strb r3, [r4, #0x1a] @ 0207d782
    ldrb r2, [r2, #0x10] @ 0207d784
    mov r3, fp @ 0207d786
    strb r2, [r4, #0x1b] @ 0207d788
    mov r2, sl @ 0207d78a
    strb r3, [r4, #0x14] @ 0207d78c
    strb r2, [r4, #0x15] @ 0207d78e
    ldr r0, [r7, #4] @ 0207d790
    cmp r5, #1 @ 0207d792
    bls .L_0207d812 @ 0207d794
    ldr r3, [r7, #0x24] @ 0207d796
    subs r2, r5, #2 @ 0207d798
    muls r2, r3, r2 @ 0207d79a
    ldr r3, [r7, #0x1c] @ 0207d79c
    adds r2, r2, r3 @ 0207d79e
.L_0207d7a0:
    movs r3, #0x20 @ 0207d7a0
    str r3, [sp] @ 0207d7a2
    adds r1, r4, #0 @ 0207d7a4
    movs r3, #0 @ 0207d7a6
    bl .L_0207cfbc @ 0207d7a8
    movs r3, #0x2e @ 0207d7ac
    strb r3, [r4, #1] @ 0207d7ae
    mov r2, sb @ 0207d7b0
    mov r3, sb @ 0207d7b2
    strb r3, [r4, #0x1a] @ 0207d7b4
    lsrs r3, r2, #8 @ 0207d7b6
    strb r3, [r4, #0x1b] @ 0207d7b8
    lsrs r3, r2, #0x10 @ 0207d7ba
    strb r3, [r4, #0x14] @ 0207d7bc
    lsrs r3, r3, #8 @ 0207d7be
    strb r3, [r4, #0x15] @ 0207d7c0
    ldr r0, [r7, #4] @ 0207d7c2
    cmp r5, #1 @ 0207d7c4
    bls .L_0207d80e @ 0207d7c6
    ldr r3, [r7, #0x24] @ 0207d7c8
    subs r2, r5, #2 @ 0207d7ca
    muls r2, r3, r2 @ 0207d7cc
    ldr r3, [r7, #0x1c] @ 0207d7ce
    adds r2, r2, r3 @ 0207d7d0
.L_0207d7d2:
    movs r3, #0x20 @ 0207d7d2
    adds r1, r4, #0 @ 0207d7d4
    str r3, [sp] @ 0207d7d6
    bl .L_0207d020 @ 0207d7d8
    ldr r0, [r7, #4] @ 0207d7dc
    bl .L_0207cf44 @ 0207d7de
    cmp r0, #0 @ 0207d7e2
    beq .L_0207d83a @ 0207d7e4
    movs r0, #0 @ 0207d7e6
    b .L_0207d6d4 @ 0207d7e8
.L_0207d7ea:
    adds r0, r6, #0 @ 0207d7ea
    bl .L_0207ed1c @ 0207d7ec
    adds r1, r5, #1 @ 0207d7f0
    mov sb, r0 @ 0207d7f2
    b .L_0207d6e8 @ 0207d7f4
.L_0207d7f6:
    ldr r2, [sp, #0xc] @ 0207d7f6
    movs r0, #1 @ 0207d7f8
    movs r3, #0x16 @ 0207d7fa
    negs r0, r0 @ 0207d7fc
    str r3, [r2] @ 0207d7fe
    b .L_0207d6d4 @ 0207d800
.L_0207d802:
    ldr r2, [sp, #0xc] @ 0207d802
    movs r0, #1 @ 0207d804
    movs r3, #0x1e @ 0207d806
    negs r0, r0 @ 0207d808
    str r3, [r2] @ 0207d80a
    b .L_0207d6d4 @ 0207d80c
.L_0207d80e:
    ldr r2, [r7, #0x10] @ 0207d80e
    b .L_0207d7d2 @ 0207d810
.L_0207d812:
    ldr r2, [r7, #0x10] @ 0207d812
    b .L_0207d7a0 @ 0207d814
.L_0207d816:
    ldr r2, [sp, #0xc] @ 0207d816
    movs r0, #1 @ 0207d818
    movs r3, #0x1c @ 0207d81a
    negs r0, r0 @ 0207d81c
    str r3, [r2] @ 0207d81e
    b .L_0207d6d4 @ 0207d820
.L_0207d822:
    ldr r2, [sp, #0xc] @ 0207d822
    movs r0, #1 @ 0207d824
    movs r3, #0x11 @ 0207d826
    negs r0, r0 @ 0207d828
    str r3, [r2] @ 0207d82a
    b .L_0207d6d4 @ 0207d82c
.L_0207d82e:
    ldr r2, [sp, #0xc] @ 0207d82e
    movs r0, #1 @ 0207d830
    movs r3, #0x13 @ 0207d832
    negs r0, r0 @ 0207d834
    str r3, [r2] @ 0207d836
    b .L_0207d6d4 @ 0207d838
.L_0207d83a:
    ldr r2, [sp, #0xc] @ 0207d83a
    movs r0, #1 @ 0207d83c
    movs r3, #5 @ 0207d83e
    negs r0, r0 @ 0207d840
    str r3, [r2] @ 0207d842
    b .L_0207d6d4 @ 0207d844
    .byte 0xc0, 0x46 @ 0207d846
@ FUN_0207d848 at 0x0207d848
    push {r4, r5, r6, r7, lr} @ 0207d848
    mov r7, sl @ 0207d84a
    mov r6, r8 @ 0207d84c
    push {r6, r7} @ 0207d84e
    sub sp, #0x13c @ 0207d850
    adds r6, r0, #0 @ 0207d852
    adds r4, r1, #0 @ 0207d854
    adds r5, r2, #0 @ 0207d856
    cmp r1, #0 @ 0207d858
    beq .L_0207d864 @ 0207d85a
    movs r3, #0x27 @ 0207d85c
    ldrb r3, [r1, r3] @ 0207d85e
    cmp r3, #0 @ 0207d860
    bne .L_0207d876 @ 0207d862
.L_0207d864:
    movs r3, #9 @ 0207d864
    movs r0, #1 @ 0207d866
    str r3, [r6] @ 0207d868
    negs r0, r0 @ 0207d86a
.L_0207d86c:
    add sp, #0x13c @ 0207d86c
    pop {r2, r3} @ 0207d86e
    mov r8, r2 @ 0207d870
    mov sl, r3 @ 0207d872
    pop {r4, r5, r6, r7, pc} @ 0207d874
.L_0207d876:
    ldr r0, [r1, #0x28] @ 0207d876
    adds r3, r1, #0 @ 0207d878
    add r2, sp, #0x20 @ 0207d87a
    adds r3, #0x2c @ 0207d87c
    mov sl, r0 @ 0207d87e
    ldm r3!, {r0, r1, r7} @ 0207d880
    stm r2!, {r0, r1, r7} @ 0207d882
    add r2, sp, #0x2c @ 0207d884
    ldm r3!, {r0, r1, r7} @ 0207d886
    stm r2!, {r0, r1, r7} @ 0207d888
    mov r0, sl @ 0207d88a
    mov r1, sp @ 0207d88c
    bl .L_0207f320 @ 0207d88e
    cmp r0, #0 @ 0207d892
    beq .L_0207d8ac @ 0207d894
    mov r0, sl @ 0207d896
    mov r1, sp @ 0207d898
    adds r2, r5, #0 @ 0207d89a
    bl .L_0207f4f0 @ 0207d89c
    ldr r3, [r4, #4] @ 0207d8a0
    movs r0, #0 @ 0207d8a2
    str r3, [r5, #4] @ 0207d8a4
    ldr r3, [r4] @ 0207d8a6
    str r3, [r5, #0x18] @ 0207d8a8
    b .L_0207d86c @ 0207d8aa
.L_0207d8ac:
    movs r0, #1 @ 0207d8ac
    movs r3, #5 @ 0207d8ae
    negs r0, r0 @ 0207d8b0
    str r3, [r6] @ 0207d8b2
    b .L_0207d86c @ 0207d8b4
    .zero 2
    push {r4, r5, r6, r7, lr} @ 0207d8b8
    mov r7, sl @ 0207d8ba
    mov r6, r8 @ 0207d8bc
    push {r6, r7} @ 0207d8be
    adds r6, r1, #0 @ 0207d8c0
    sub sp, #4 @ 0207d8c2
    adds r1, r3, #0 @ 0207d8c4
    cmp r6, #0 @ 0207d8c6
    beq .L_0207d96e @ 0207d8c8
    movs r3, #0x27 @ 0207d8ca
    ldrb r3, [r6, r3] @ 0207d8cc
    cmp r3, #0 @ 0207d8ce
    beq .L_0207d96e @ 0207d8d0
    ldr r3, [r6, #0x28] @ 0207d8d2
    mov sl, r3 @ 0207d8d4
    cmp r1, #1 @ 0207d8d6
    beq .L_0207d990 @ 0207d8d8
    cmp r1, #2 @ 0207d8da
    beq .L_0207d9ac @ 0207d8dc
    cmp r1, #0 @ 0207d8de
    bne .L_0207d986 @ 0207d8e0
    adds r7, r2, #0 @ 0207d8e2
.L_0207d8e4:
    cmp r2, #0 @ 0207d8e4
    ble .L_0207d982 @ 0207d8e6
    cmp r7, #0 @ 0207d8e8
    bge .L_0207d8ee @ 0207d8ea
    b .L_0207d9cc @ 0207d8ec
.L_0207d8ee:
    ldr r3, [r6] @ 0207d8ee
    cmp r3, r7 @ 0207d8f0
    bls .L_0207d96a @ 0207d8f2
    mov r2, sl @ 0207d8f4
    ldr r2, [r2, #0x28] @ 0207d8f6
    adds r0, r7, #0 @ 0207d8f8
    adds r1, r2, #0 @ 0207d8fa
    mov r8, r2 @ 0207d8fc
    bl .L_020859a8 @ 0207d8fe
    ldr r3, [pc, #0xd4] @ 0207d902
    adds r2, r7, #0 @ 0207d904
    lsrs r1, r1, #9 @ 0207d906
    ands r2, r3 @ 0207d908
    str r1, [r6, #0x10] @ 0207d90a
    cmp r2, #0 @ 0207d90c
    blt .L_0207d9c2 @ 0207d90e
.L_0207d910:
    ldr r5, [r6, #8] @ 0207d910
    str r2, [r6, #0x14] @ 0207d912
    cmp r7, r5 @ 0207d914
    blo .L_0207d9b2 @ 0207d916
    mov r1, r8 @ 0207d918
    adds r0, r7, #0 @ 0207d91a
    bl .L_02085980 @ 0207d91c
    mov r1, r8 @ 0207d920
    adds r4, r0, #0 @ 0207d922
    adds r0, r5, #0 @ 0207d924
    bl .L_02085980 @ 0207d926
    ldr r3, [r6, #0xc] @ 0207d92a
    subs r4, r4, r0 @ 0207d92c
    mov r8, r3 @ 0207d92e
.L_0207d930:
    mov r0, sl @ 0207d930
    mov r1, r8 @ 0207d932
    bl .L_0207e470 @ 0207d934
    adds r5, r0, #0 @ 0207d938
    cmp r4, #0 @ 0207d93a
    ble .L_0207d966 @ 0207d93c
    cmp r0, #0 @ 0207d93e
    beq .L_0207d998 @ 0207d940
    ldr r3, [pc, #0x98] @ 0207d942
    cmp r0, r3 @ 0207d944
    beq .L_0207d998 @ 0207d946
    mov r8, r3 @ 0207d948
    b .L_0207d956 @ 0207d94a
.L_0207d94c:
    cmp r0, #0 @ 0207d94c
    beq .L_0207d996 @ 0207d94e
    cmp r0, r8 @ 0207d950
    beq .L_0207d996 @ 0207d952
    adds r5, r0, #0 @ 0207d954
.L_0207d956:
    subs r4, #1 @ 0207d956
    mov r0, sl @ 0207d958
    adds r1, r5, #0 @ 0207d95a
    bl .L_0207e470 @ 0207d95c
    cmp r4, #0 @ 0207d960
    bne .L_0207d94c @ 0207d962
    mov r8, r5 @ 0207d964
.L_0207d966:
    mov r3, r8 @ 0207d966
    str r3, [r6, #0xc] @ 0207d968
.L_0207d96a:
    str r7, [r6, #8] @ 0207d96a
    b .L_0207d976 @ 0207d96c
.L_0207d96e:
    movs r3, #9 @ 0207d96e
    movs r7, #1 @ 0207d970
    str r3, [r0] @ 0207d972
    negs r7, r7 @ 0207d974
.L_0207d976:
    adds r0, r7, #0 @ 0207d976
    add sp, #4 @ 0207d978
    pop {r2, r3} @ 0207d97a
    mov r8, r2 @ 0207d97c
    mov sl, r3 @ 0207d97e
    pop {r4, r5, r6, r7, pc} @ 0207d980
.L_0207d982:
    cmp r7, #0 @ 0207d982
    bge .L_0207d8ee @ 0207d984
.L_0207d986:
    movs r7, #1 @ 0207d986
    movs r3, #0x16 @ 0207d988
    negs r7, r7 @ 0207d98a
    str r3, [r0] @ 0207d98c
    b .L_0207d976 @ 0207d98e
.L_0207d990:
    ldr r3, [r6, #8] @ 0207d990
    adds r7, r2, r3 @ 0207d992
    b .L_0207d8e4 @ 0207d994
.L_0207d996:
    mov r8, r5 @ 0207d996
.L_0207d998:
    ldr r2, [r6, #0x24] @ 0207d998
    ldr r3, [pc, #0x44] @ 0207d99a
    tst r2, r3 @ 0207d99c
    beq .L_0207d966 @ 0207d99e
    mov r2, sl @ 0207d9a0
    ldr r3, [r2, #0x24] @ 0207d9a2
    str r3, [r6, #0x10] @ 0207d9a4
    movs r3, #0 @ 0207d9a6
    str r3, [r6, #0x14] @ 0207d9a8
    b .L_0207d966 @ 0207d9aa
.L_0207d9ac:
    ldr r3, [r6] @ 0207d9ac
    adds r7, r2, r3 @ 0207d9ae
    b .L_0207d8e4 @ 0207d9b0
.L_0207d9b2:
    mov r1, r8 @ 0207d9b2
    adds r0, r7, #0 @ 0207d9b4
    bl .L_02085980 @ 0207d9b6
    ldr r2, [r6, #4] @ 0207d9ba
    adds r4, r0, #0 @ 0207d9bc
    mov r8, r2 @ 0207d9be
    b .L_0207d930 @ 0207d9c0
.L_0207d9c2:
    ldr r3, [pc, #0x20] @ 0207d9c2
    subs r2, #1 @ 0207d9c4
    orrs r2, r3 @ 0207d9c6
    adds r2, #1 @ 0207d9c8
    b .L_0207d910 @ 0207d9ca
.L_0207d9cc:
    movs r7, #1 @ 0207d9cc
    movs r3, #0x8b @ 0207d9ce
    negs r7, r7 @ 0207d9d0
    str r3, [r0] @ 0207d9d2
    b .L_0207d976 @ 0207d9d4
    .byte 0x00, 0x00, 0xff, 0x01, 0x00, 0x80, 0xff, 0xff, 0xff, 0x0f, 0x00, 0xff, 0xff, 0x00, 0x00, 0xfe @ 0207d9d6
    .byte 0xff, 0xff @ 0207d9e6
    push {r4, r5, r6, lr} @ 0207d9e8
    movs r3, #0x27 @ 0207d9ea
    ldrb r3, [r1, r3] @ 0207d9ec
    sub sp, #0x28 @ 0207d9ee
    adds r6, r0, #0 @ 0207d9f0
    adds r4, r1, #0 @ 0207d9f2
    cmp r3, #0 @ 0207d9f4
    beq .L_0207dabe @ 0207d9f6
    movs r3, #0x25 @ 0207d9f8
    ldrb r3, [r1, r3] @ 0207d9fa
    cmp r3, #0 @ 0207d9fc
    beq .L_0207da98 @ 0207d9fe
    ldr r1, [r1, #0x28] @ 0207da00
    ldr r2, [r4, #0x38] @ 0207da02
    ldr r0, [r1, #4] @ 0207da04
    cmp r2, #1 @ 0207da06
    bls .L_0207dab0 @ 0207da08
    ldr r3, [r1, #0x24] @ 0207da0a
    subs r2, #2 @ 0207da0c
    muls r2, r3, r2 @ 0207da0e
    ldr r3, [r1, #0x1c] @ 0207da10
    adds r3, r2, r3 @ 0207da12
.L_0207da14:
    ldr r2, [r4, #0x3c] @ 0207da14
    add r5, sp, #8 @ 0207da16
    adds r2, r3, r2 @ 0207da18
    ldr r3, [r4, #0x40] @ 0207da1a
    movs r1, #0x20 @ 0207da1c
    lsls r3, r3, #5 @ 0207da1e
    str r1, [sp] @ 0207da20
    adds r1, r5, #0 @ 0207da22
    bl .L_0207d06c @ 0207da24
    ldr r3, [r4] @ 0207da28
    lsrs r2, r3, #8 @ 0207da2a
    strb r3, [r5, #0x1c] @ 0207da2c
    strb r2, [r5, #0x1d] @ 0207da2e
    lsrs r2, r3, #0x10 @ 0207da30
    lsrs r3, r3, #0x18 @ 0207da32
    strb r3, [r5, #0x1f] @ 0207da34
    ldr r3, [r4, #4] @ 0207da36
    strb r2, [r5, #0x1e] @ 0207da38
    strb r3, [r5, #0x1a] @ 0207da3a
    lsrs r2, r3, #8 @ 0207da3c
    lsrs r3, r3, #0x10 @ 0207da3e
    strb r3, [r5, #0x14] @ 0207da40
    lsrs r3, r3, #8 @ 0207da42
    strb r2, [r5, #0x1b] @ 0207da44
    strb r3, [r5, #0x15] @ 0207da46
    bl .L_0207e808 @ 0207da48
    strb r0, [r5, #0x16] @ 0207da4c
    lsrs r0, r0, #8 @ 0207da4e
    strb r0, [r5, #0x17] @ 0207da50
    bl .L_0207e854 @ 0207da52
    strb r0, [r5, #0x18] @ 0207da56
    lsrs r0, r0, #8 @ 0207da58
    strb r0, [r5, #0x19] @ 0207da5a
    bl .L_0207e854 @ 0207da5c
    ldr r1, [r4, #0x28] @ 0207da60
    strb r0, [r5, #0x12] @ 0207da62
    ldr r2, [r4, #0x38] @ 0207da64
    lsrs r0, r0, #8 @ 0207da66
    strb r0, [r5, #0x13] @ 0207da68
    ldr r0, [r1, #4] @ 0207da6a
    cmp r2, #1 @ 0207da6c
    bls .L_0207daac @ 0207da6e
    ldr r3, [r1, #0x24] @ 0207da70
    subs r2, #2 @ 0207da72
    muls r2, r3, r2 @ 0207da74
    ldr r3, [r1, #0x1c] @ 0207da76
    adds r3, r2, r3 @ 0207da78
.L_0207da7a:
    ldr r2, [r4, #0x3c] @ 0207da7a
    movs r1, #0x20 @ 0207da7c
    adds r2, r3, r2 @ 0207da7e
    ldr r3, [r4, #0x40] @ 0207da80
    str r1, [sp] @ 0207da82
    lsls r3, r3, #5 @ 0207da84
    adds r1, r5, #0 @ 0207da86
    bl .L_0207d020 @ 0207da88
    ldr r3, [r4, #0x28] @ 0207da8c
    ldr r0, [r3, #4] @ 0207da8e
    bl .L_0207cf44 @ 0207da90
    cmp r0, #0 @ 0207da94
    beq .L_0207dab4 @ 0207da96
.L_0207da98:
    movs r2, #0 @ 0207da98
    movs r3, #0x27 @ 0207da9a
    strb r2, [r4, r3] @ 0207da9c
    ldr r2, [r4, #0x28] @ 0207da9e
    movs r0, #0 @ 0207daa0
    ldr r3, [r2, #0x40] @ 0207daa2
    subs r3, #1 @ 0207daa4
    str r3, [r2, #0x40] @ 0207daa6
.L_0207daa8:
    add sp, #0x28 @ 0207daa8
    pop {r4, r5, r6, pc} @ 0207daaa
.L_0207daac:
    ldr r3, [r1, #0x10] @ 0207daac
    b .L_0207da7a @ 0207daae
.L_0207dab0:
    ldr r3, [r1, #0x10] @ 0207dab0
    b .L_0207da14 @ 0207dab2
.L_0207dab4:
    movs r0, #1 @ 0207dab4
    movs r3, #5 @ 0207dab6
    negs r0, r0 @ 0207dab8
    str r3, [r6] @ 0207daba
    b .L_0207daa8 @ 0207dabc
.L_0207dabe:
    movs r3, #9 @ 0207dabe
    str r3, [r0] @ 0207dac0
    movs r0, #1 @ 0207dac2
    negs r0, r0 @ 0207dac4
    b .L_0207daa8 @ 0207dac6
@ FUN_0207dac8 at 0x0207dac8
    push {r4, r5, r6, r7, lr} @ 0207dac8
    mov r7, fp @ 0207daca
    mov r6, sl @ 0207dacc
    mov r5, sb @ 0207dace
    mov r4, r8 @ 0207dad0
    push {r4, r5, r6, r7} @ 0207dad2
    sub sp, #0x13c @ 0207dad4
    mov sb, r0 @ 0207dad6
    adds r0, r2, #0 @ 0207dad8
    adds r5, r1, #0 @ 0207dada
    adds r4, r2, #0 @ 0207dadc
    mov sl, r3 @ 0207dade
    bl .L_02072d38 @ 0207dae0
    mov r8, r0 @ 0207dae4
    cmp r0, #0 @ 0207dae6
    bne .L_0207daec @ 0207dae8
    b .L_0207dd4a @ 0207daea
.L_0207daec:
    adds r0, r4, #0 @ 0207daec
    movs r1, #0x3a @ 0207daee
    bl .L_02085958 @ 0207daf0
    cmp r0, #0 @ 0207daf4
    beq .L_0207db08 @ 0207daf6
    adds r4, r0, #1 @ 0207daf8
    adds r0, r4, #0 @ 0207dafa
    movs r1, #0x3a @ 0207dafc
    bl .L_02085958 @ 0207dafe
    cmp r0, #0 @ 0207db02
    beq .L_0207db08 @ 0207db04
    b .L_0207dd0e @ 0207db06
.L_0207db08:
    movs r3, #3 @ 0207db08
    mov r1, sl @ 0207db0a
    ands r1, r3 @ 0207db0c
    beq .L_0207db12 @ 0207db0e
    b .L_0207dc26 @ 0207db10
.L_0207db12:
    movs r3, #0x24 @ 0207db12
    movs r2, #1 @ 0207db14
    strb r2, [r5, r3] @ 0207db16
    movs r3, #0x25 @ 0207db18
    strb r1, [r5, r3] @ 0207db1a
    movs r3, #0x26 @ 0207db1c
    strb r1, [r5, r3] @ 0207db1e
.L_0207db20:
    movs r3, #0x25 @ 0207db20
    ldrb r3, [r5, r3] @ 0207db22
    cmp r3, #0 @ 0207db24
    beq .L_0207db32 @ 0207db26
    mov r0, r8 @ 0207db28
    ldrb r3, [r0, #8] @ 0207db2a
    cmp r3, #0 @ 0207db2c
    beq .L_0207db32 @ 0207db2e
    b .L_0207dd3e @ 0207db30
.L_0207db32:
    adds r2, r4, #0 @ 0207db32
    movs r3, #0 @ 0207db34
    mov r0, r8 @ 0207db36
    mov r1, sp @ 0207db38
    bl .L_0207f07c @ 0207db3a
    movs r3, #0xa0 @ 0207db3e
    lsls r3, r3, #4 @ 0207db40
    mov r2, sl @ 0207db42
    ands r2, r3 @ 0207db44
    mov r6, sp @ 0207db46
    cmp r2, r3 @ 0207db48
    bne .L_0207db4e @ 0207db4a
    b .L_0207dc42 @ 0207db4c
.L_0207db4e:
    cmp r0, #0 @ 0207db4e
    bne .L_0207db54 @ 0207db50
    b .L_0207dc46 @ 0207db52
.L_0207db54:
    ldrb r3, [r6, #0xb] @ 0207db54
    lsls r4, r3, #0x1b @ 0207db56
    bpl .L_0207db5c @ 0207db58
    b .L_0207dd6e @ 0207db5a
.L_0207db5c:
    ldrb r3, [r6, #0x1d] @ 0207db5c
    ldrb r1, [r6, #0x1c] @ 0207db5e
    lsls r3, r3, #8 @ 0207db60
    orrs r1, r3 @ 0207db62
    ldrb r2, [r6, #0x1e] @ 0207db64
    ldrb r3, [r6, #0x1f] @ 0207db66
    lsls r2, r2, #0x10 @ 0207db68
    lsls r3, r3, #0x18 @ 0207db6a
    orrs r2, r3 @ 0207db6c
    orrs r1, r2 @ 0207db6e
    str r1, [r5] @ 0207db70
    movs r3, #0x25 @ 0207db72
    ldrb r3, [r5, r3] @ 0207db74
    cmp r3, #0 @ 0207db76
    beq .L_0207db82 @ 0207db78
    ldrb r3, [r6, #0xb] @ 0207db7a
    lsls r1, r3, #0x1f @ 0207db7c
    bpl .L_0207db82 @ 0207db7e
    b .L_0207dd62 @ 0207db80
.L_0207db82:
    mov r3, r8 @ 0207db82
    str r3, [r5, #0x28] @ 0207db84
    adds r0, r6, #0 @ 0207db86
    bl .L_0207ed1c @ 0207db88
    mov r4, sl @ 0207db8c
    adds r1, r0, #0 @ 0207db8e
    str r0, [r5, #4] @ 0207db90
    lsls r4, r4, #0x15 @ 0207db92
    bpl .L_0207dba0 @ 0207db94
    movs r3, #0x25 @ 0207db96
    ldrb r3, [r5, r3] @ 0207db98
    cmp r3, #0 @ 0207db9a
    beq .L_0207dba0 @ 0207db9c
    b .L_0207dc90 @ 0207db9e
.L_0207dba0:
    ldr r3, [r5, #4] @ 0207dba0
    cmp r3, #0 @ 0207dba2
    bne .L_0207dbb0 @ 0207dba4
.L_0207dba6:
    mov r0, r8 @ 0207dba6
    movs r1, #0 @ 0207dba8
    bl .L_0207e71c @ 0207dbaa
    str r0, [r5, #4] @ 0207dbae
.L_0207dbb0:
    adds r2, r5, #0 @ 0207dbb0
    adds r2, #0x2c @ 0207dbb2
    add r3, sp, #0x20 @ 0207dbb4
    ldm r3!, {r0, r1, r4} @ 0207dbb6
    stm r2!, {r0, r1, r4} @ 0207dbb8
    add r3, sp, #0x2c @ 0207dbba
    ldm r3!, {r0, r1, r4} @ 0207dbbc
    stm r2!, {r0, r1, r4} @ 0207dbbe
    ldr r1, [r5, #4] @ 0207dbc0
    movs r3, #0 @ 0207dbc2
    str r3, [r5, #8] @ 0207dbc4
    str r3, [r5, #0x10] @ 0207dbc6
    str r3, [r5, #0x14] @ 0207dbc8
    str r1, [r5, #0xc] @ 0207dbca
    mov r0, r8 @ 0207dbcc
    bl .L_0207e558 @ 0207dbce
    ldr r4, [r5] @ 0207dbd2
    str r0, [r5, #0x18] @ 0207dbd4
    mov r2, r8 @ 0207dbd6
    ldr r1, [r2, #0x28] @ 0207dbd8
    adds r0, r4, #0 @ 0207dbda
    bl .L_020859a8 @ 0207dbdc
    ldr r3, [pc, #0x198] @ 0207dbe0
    lsrs r1, r1, #9 @ 0207dbe2
    ands r3, r4 @ 0207dbe4
    str r1, [r5, #0x1c] @ 0207dbe6
    str r3, [r5, #0x20] @ 0207dbe8
    cmp r4, #0 @ 0207dbea
    beq .L_0207dbfc @ 0207dbec
    mov r3, r8 @ 0207dbee
    adds r0, r4, #0 @ 0207dbf0
    ldr r1, [r3, #0x28] @ 0207dbf2
    bl .L_020859a8 @ 0207dbf4
    cmp r1, #0 @ 0207dbf8
    beq .L_0207dc86 @ 0207dbfa
.L_0207dbfc:
    mov r0, sl @ 0207dbfc
    lsls r0, r0, #0x1c @ 0207dbfe
    bpl .L_0207dc08 @ 0207dc00
    movs r2, #1 @ 0207dc02
    movs r3, #0x26 @ 0207dc04
    strb r2, [r5, r3] @ 0207dc06
.L_0207dc08:
    movs r3, #0x27 @ 0207dc08
    mov r1, r8 @ 0207dc0a
    movs r2, #1 @ 0207dc0c
    strb r2, [r5, r3] @ 0207dc0e
    ldr r3, [r1, #0x40] @ 0207dc10
    adds r0, r5, #0 @ 0207dc12
    adds r3, #1 @ 0207dc14
    str r3, [r1, #0x40] @ 0207dc16
.L_0207dc18:
    add sp, #0x13c @ 0207dc18
    pop {r2, r3, r4, r5} @ 0207dc1a
    mov r8, r2 @ 0207dc1c
    mov sb, r3 @ 0207dc1e
    mov sl, r4 @ 0207dc20
    mov fp, r5 @ 0207dc22
    pop {r4, r5, r6, r7, pc} @ 0207dc24
.L_0207dc26:
    cmp r1, #1 @ 0207dc26
    beq .L_0207dcfe @ 0207dc28
    cmp r1, #2 @ 0207dc2a
    beq .L_0207dc30 @ 0207dc2c
    b .L_0207dd32 @ 0207dc2e
.L_0207dc30:
    movs r2, #1 @ 0207dc30
    movs r3, #0x24 @ 0207dc32
    strb r2, [r5, r3] @ 0207dc34
    movs r3, #0x25 @ 0207dc36
    strb r2, [r5, r3] @ 0207dc38
    movs r2, #0 @ 0207dc3a
    movs r3, #0x26 @ 0207dc3c
    strb r2, [r5, r3] @ 0207dc3e
    b .L_0207db20 @ 0207dc40
.L_0207dc42:
    cmp r0, #0 @ 0207dc42
    bne .L_0207dd1a @ 0207dc44
.L_0207dc46:
    mov r1, sl @ 0207dc46
    lsls r1, r1, #0x16 @ 0207dc48
    bmi .L_0207dc4e @ 0207dc4a
    b .L_0207dd56 @ 0207dc4c
.L_0207dc4e:
    mov r2, r8 @ 0207dc4e
    ldrb r3, [r2, #8] @ 0207dc50
    cmp r3, #0 @ 0207dc52
    bne .L_0207dd26 @ 0207dc54
    adds r0, r4, #0 @ 0207dc56
    movs r1, #0x2f @ 0207dc58
    bl .L_020859a0 @ 0207dc5a
    adds r7, r0, #0 @ 0207dc5e
    cmp r0, #0 @ 0207dc60
    beq .L_0207dcf4 @ 0207dc62
    mov r0, r8 @ 0207dc64
    adds r1, r6, #0 @ 0207dc66
    adds r2, r4, #0 @ 0207dc68
    adds r3, r7, #0 @ 0207dc6a
    bl .L_0207f07c @ 0207dc6c
    cmp r0, #0 @ 0207dc70
    beq .L_0207dc7a @ 0207dc72
    ldrb r3, [r6, #0xb] @ 0207dc74
    lsls r1, r3, #0x1b @ 0207dc76
    bmi .L_0207dca4 @ 0207dc78
.L_0207dc7a:
    movs r0, #1 @ 0207dc7a
    movs r3, #0x14 @ 0207dc7c
    mov r2, sb @ 0207dc7e
    negs r0, r0 @ 0207dc80
    str r3, [r2] @ 0207dc82
    b .L_0207dc18 @ 0207dc84
.L_0207dc86:
    mov r4, r8 @ 0207dc86
    ldr r3, [r4, #0x24] @ 0207dc88
    str r1, [r5, #0x20] @ 0207dc8a
    str r3, [r5, #0x1c] @ 0207dc8c
    b .L_0207dbfc @ 0207dc8e
.L_0207dc90:
    cmp r0, #0 @ 0207dc90
    bne .L_0207dc96 @ 0207dc92
    b .L_0207dba6 @ 0207dc94
.L_0207dc96:
    mov r0, r8 @ 0207dc96
    bl .L_0207e6cc @ 0207dc98
    movs r3, #0 @ 0207dc9c
    str r3, [r5, #4] @ 0207dc9e
    str r3, [r5] @ 0207dca0
    b .L_0207dba0 @ 0207dca2
.L_0207dca4:
    adds r0, r6, #0 @ 0207dca4
    bl .L_0207ed1c @ 0207dca6
    adds r1, r7, #1 @ 0207dcaa
    mov fp, r0 @ 0207dcac
.L_0207dcae:
    movs r2, #0xff @ 0207dcae
    add r0, sp, #0x38 @ 0207dcb0
    bl .L_02085998 @ 0207dcb2
    movs r1, #0 @ 0207dcb6
    movs r2, #0x20 @ 0207dcb8
    adds r0, r6, #0 @ 0207dcba
    bl .L_02085970 @ 0207dcbc
    movs r3, #0 @ 0207dcc0
    strb r3, [r6, #0xd] @ 0207dcc2
    bl .L_0207e808 @ 0207dcc4
    strb r0, [r6, #0xe] @ 0207dcc8
    lsrs r0, r0, #8 @ 0207dcca
    strb r0, [r6, #0xf] @ 0207dccc
    bl .L_0207e854 @ 0207dcce
    strb r0, [r6, #0x10] @ 0207dcd2
    lsrs r0, r0, #8 @ 0207dcd4
    strb r0, [r6, #0x11] @ 0207dcd6
    adds r1, r6, #0 @ 0207dcd8
    mov r0, r8 @ 0207dcda
    mov r2, fp @ 0207dcdc
    bl .L_0207f5bc @ 0207dcde
    cmp r0, #0 @ 0207dce2
    beq .L_0207dce8 @ 0207dce4
    b .L_0207db5c @ 0207dce6
.L_0207dce8:
    movs r0, #1 @ 0207dce8
    movs r3, #0x1c @ 0207dcea
    mov r4, sb @ 0207dcec
    negs r0, r0 @ 0207dcee
    str r3, [r4] @ 0207dcf0
    b .L_0207dc18 @ 0207dcf2
.L_0207dcf4:
    mov r0, r8 @ 0207dcf4
    ldr r0, [r0, #0x3c] @ 0207dcf6
    adds r1, r4, #0 @ 0207dcf8
    mov fp, r0 @ 0207dcfa
    b .L_0207dcae @ 0207dcfc
.L_0207dcfe:
    movs r2, #0 @ 0207dcfe
    movs r3, #0x24 @ 0207dd00
    strb r2, [r5, r3] @ 0207dd02
    movs r3, #0x25 @ 0207dd04
    strb r1, [r5, r3] @ 0207dd06
    movs r3, #0x26 @ 0207dd08
    strb r2, [r5, r3] @ 0207dd0a
    b .L_0207db20 @ 0207dd0c
.L_0207dd0e:
    movs r0, #1 @ 0207dd0e
    movs r3, #0x16 @ 0207dd10
    mov r1, sb @ 0207dd12
    negs r0, r0 @ 0207dd14
    str r3, [r1] @ 0207dd16
    b .L_0207dc18 @ 0207dd18
.L_0207dd1a:
    movs r0, #1 @ 0207dd1a
    movs r3, #0x11 @ 0207dd1c
    mov r2, sb @ 0207dd1e
    negs r0, r0 @ 0207dd20
    str r3, [r2] @ 0207dd22
    b .L_0207dc18 @ 0207dd24
.L_0207dd26:
    movs r0, #1 @ 0207dd26
    movs r3, #0x1e @ 0207dd28
    mov r4, sb @ 0207dd2a
    negs r0, r0 @ 0207dd2c
    str r3, [r4] @ 0207dd2e
    b .L_0207dc18 @ 0207dd30
.L_0207dd32:
    movs r0, #1 @ 0207dd32
    movs r3, #0xd @ 0207dd34
    mov r2, sb @ 0207dd36
    negs r0, r0 @ 0207dd38
    str r3, [r2] @ 0207dd3a
    b .L_0207dc18 @ 0207dd3c
.L_0207dd3e:
    movs r0, #1 @ 0207dd3e
    movs r3, #0x1e @ 0207dd40
    mov r1, sb @ 0207dd42
    negs r0, r0 @ 0207dd44
    str r3, [r1] @ 0207dd46
    b .L_0207dc18 @ 0207dd48
.L_0207dd4a:
    mov r0, sb @ 0207dd4a
    movs r3, #0x13 @ 0207dd4c
    str r3, [r0] @ 0207dd4e
    movs r0, #1 @ 0207dd50
    negs r0, r0 @ 0207dd52
    b .L_0207dc18 @ 0207dd54
.L_0207dd56:
    mov r0, sb @ 0207dd56
    movs r3, #2 @ 0207dd58
    str r3, [r0] @ 0207dd5a
    movs r0, #1 @ 0207dd5c
    negs r0, r0 @ 0207dd5e
    b .L_0207dc18 @ 0207dd60
.L_0207dd62:
    movs r0, #1 @ 0207dd62
    movs r3, #0x1e @ 0207dd64
    mov r2, sb @ 0207dd66
    negs r0, r0 @ 0207dd68
    str r3, [r2] @ 0207dd6a
    b .L_0207dc18 @ 0207dd6c
.L_0207dd6e:
    mov r0, sb @ 0207dd6e
    movs r3, #0x15 @ 0207dd70
    str r3, [r0] @ 0207dd72
    movs r0, #1 @ 0207dd74
    negs r0, r0 @ 0207dd76
    b .L_0207dc18 @ 0207dd78
    .byte 0x00, 0x00, 0xff, 0x01, 0x00, 0x00 @ 0207dd7a
@ FUN_0207dd80 at 0x0207dd80
    push {r4, r5, r6, r7, lr} @ 0207dd80
    mov r7, fp @ 0207dd82
    mov r6, sl @ 0207dd84
    mov r5, sb @ 0207dd86
    mov r4, r8 @ 0207dd88
    push {r4, r5, r6, r7} @ 0207dd8a
    mov sl, r2 @ 0207dd8c
    sub sp, #0x1c @ 0207dd8e
    mov sb, r0 @ 0207dd90
    adds r7, r1, #0 @ 0207dd92
    adds r2, r3, #0 @ 0207dd94
    cmp r1, #0 @ 0207dd96
    beq .L_0207dda2 @ 0207dd98
    movs r3, #0x27 @ 0207dd9a
    ldrb r3, [r1, r3] @ 0207dd9c
    cmp r3, #0 @ 0207dd9e
    bne .L_0207ddb8 @ 0207dda0
.L_0207dda2:
    movs r3, #9 @ 0207dda2
    mov r2, sb @ 0207dda4
    str r3, [r2] @ 0207dda6
    movs r0, #0 @ 0207dda8
.L_0207ddaa:
    add sp, #0x1c @ 0207ddaa
    pop {r2, r3, r4, r5} @ 0207ddac
    mov r8, r2 @ 0207ddae
    mov sb, r3 @ 0207ddb0
    mov sl, r4 @ 0207ddb2
    mov fp, r5 @ 0207ddb4
    pop {r4, r5, r6, r7, pc} @ 0207ddb6
.L_0207ddb8:
    movs r3, #0x24 @ 0207ddb8
    ldrb r3, [r1, r3] @ 0207ddba
    cmp r3, #0 @ 0207ddbc
    beq .L_0207dda2 @ 0207ddbe
    ldr r3, [r1, #8] @ 0207ddc0
    ldr r1, [r1] @ 0207ddc2
    cmp r3, r1 @ 0207ddc4
    blo .L_0207ddca @ 0207ddc6
    b .L_0207df76 @ 0207ddc8
.L_0207ddca:
    adds r3, r3, r2 @ 0207ddca
    str r2, [sp, #0x14] @ 0207ddcc
    cmp r1, r3 @ 0207ddce
    blo .L_0207ded0 @ 0207ddd0
.L_0207ddd2:
    ldr r3, [r7, #0x10] @ 0207ddd2
    ldr r2, [r7, #0xc] @ 0207ddd4
    ldr r4, [r7, #0x28] @ 0207ddd6
    mov fp, r3 @ 0207ddd8
    ldr r3, [r7, #0x14] @ 0207ddda
    mov r8, r2 @ 0207dddc
    ldr r2, [r4, #4] @ 0207ddde
    str r3, [sp, #0x10] @ 0207dde0
    str r2, [sp, #8] @ 0207dde2
    movs r3, #0x80 @ 0207dde4
    ldr r2, [sp, #0x10] @ 0207dde6
    lsls r3, r3, #2 @ 0207dde8
    subs r5, r3, r2 @ 0207ddea
    ldr r3, [sp, #0x14] @ 0207ddec
    cmp r5, r3 @ 0207ddee
    bhi .L_0207decc @ 0207ddf0
.L_0207ddf2:
    ldr r3, [pc, #0x1cc] @ 0207ddf2
    cmp r5, r3 @ 0207ddf4
    ble .L_0207de90 @ 0207ddf6
    ldr r6, [sp, #0x14] @ 0207ddf8
.L_0207ddfa:
    ldr r1, [r4, #0x24] @ 0207ddfa
    mov r3, fp @ 0207ddfc
    subs r2, r1, r3 @ 0207ddfe
    lsls r3, r2, #9 @ 0207de00
    cmp r6, r3 @ 0207de02
    bhi .L_0207de08 @ 0207de04
    b .L_0207df72 @ 0207de06
.L_0207de08:
    adds r5, r2, #0 @ 0207de08
.L_0207de0a:
    cmp r5, #0 @ 0207de0a
    ble .L_0207de3a @ 0207de0c
    ldr r2, [r4] @ 0207de0e
    mov r3, r8 @ 0207de10
    mov ip, r2 @ 0207de12
    cmp r3, #1 @ 0207de14
    bhi .L_0207de1a @ 0207de16
    b .L_0207df9c @ 0207de18
.L_0207de1a:
    subs r3, #2 @ 0207de1a
    adds r2, r3, #0 @ 0207de1c
    muls r2, r1, r2 @ 0207de1e
    ldr r3, [r4, #0x1c] @ 0207de20
    adds r0, r2, r3 @ 0207de22
.L_0207de24:
    mov r2, ip @ 0207de24
    ldr r3, [r2, #0x10] @ 0207de26
    add r0, fp @ 0207de28
    adds r1, r5, #0 @ 0207de2a
    mov r2, sl @ 0207de2c
    blx r3 @ 0207de2e
    lsls r3, r5, #9 @ 0207de30
    ldr r1, [r4, #0x24] @ 0207de32
    add sl, r3 @ 0207de34
    subs r6, r6, r3 @ 0207de36
    add fp, r5 @ 0207de38
.L_0207de3a:
    cmp r1, fp @ 0207de3a
    bhi .L_0207de40 @ 0207de3c
    b .L_0207df7a @ 0207de3e
.L_0207de40:
    movs r3, #1 @ 0207de40
    str r3, [sp, #0xc] @ 0207de42
.L_0207de44:
    ldr r3, [r4, #0x28] @ 0207de44
    cmp r6, r3 @ 0207de46
    blo .L_0207defa @ 0207de48
    ldr r2, [sp, #0xc] @ 0207de4a
    cmp r2, #0 @ 0207de4c
    beq .L_0207defa @ 0207de4e
    mov r2, r8 @ 0207de50
    ldr r5, [r4] @ 0207de52
    cmp r2, #1 @ 0207de54
    bls .L_0207deec @ 0207de56
    mov r3, r8 @ 0207de58
    ldr r1, [r4, #0x24] @ 0207de5a
    subs r3, #2 @ 0207de5c
    adds r2, r1, #0 @ 0207de5e
    muls r2, r3, r2 @ 0207de60
    ldr r3, [r4, #0x1c] @ 0207de62
    adds r0, r2, r3 @ 0207de64
.L_0207de66:
    ldr r3, [r5, #0x10] @ 0207de66
    mov r2, sl @ 0207de68
    blx r3 @ 0207de6a
    ldr r5, [r4, #0x28] @ 0207de6c
    adds r0, r4, #0 @ 0207de6e
    subs r6, r6, r5 @ 0207de70
    mov r1, r8 @ 0207de72
    bl .L_0207e470 @ 0207de74
    cmp r6, #0 @ 0207de78
    bne .L_0207de82 @ 0207de7a
    ldr r3, [pc, #0x144] @ 0207de7c
    cmp r0, r3 @ 0207de7e
    beq .L_0207def2 @ 0207de80
.L_0207de82:
    cmp r0, #0 @ 0207de82
    beq .L_0207dede @ 0207de84
    movs r2, #0 @ 0207de86
    mov r8, r0 @ 0207de88
    mov fp, r2 @ 0207de8a
    add sl, r5 @ 0207de8c
    b .L_0207de44 @ 0207de8e
.L_0207de90:
    mov r2, r8 @ 0207de90
    cmp r2, #1 @ 0207de92
    bhi .L_0207de98 @ 0207de94
    b .L_0207dfac @ 0207de96
.L_0207de98:
    ldr r3, [r4, #0x24] @ 0207de98
    subs r2, #2 @ 0207de9a
    muls r2, r3, r2 @ 0207de9c
    ldr r3, [r4, #0x1c] @ 0207de9e
    adds r2, r2, r3 @ 0207dea0
.L_0207dea2:
    add r2, fp @ 0207dea2
    mov r1, sl @ 0207dea4
    ldr r3, [sp, #0x10] @ 0207dea6
    ldr r0, [sp, #8] @ 0207dea8
    str r5, [sp] @ 0207deaa
    bl .L_0207d06c @ 0207deac
    ldr r3, [sp, #0x14] @ 0207deb0
    ldr r2, [sp, #0x10] @ 0207deb2
    subs r6, r3, r5 @ 0207deb4
    ldr r3, [pc, #0x108] @ 0207deb6
    adds r2, r2, r5 @ 0207deb8
    add sl, r5 @ 0207deba
    str r2, [sp, #0x10] @ 0207debc
    cmp r2, r3 @ 0207debe
    ble .L_0207ddfa @ 0207dec0
    movs r3, #1 @ 0207dec2
    movs r2, #0 @ 0207dec4
    add fp, r3 @ 0207dec6
    str r2, [sp, #0x10] @ 0207dec8
    b .L_0207ddfa @ 0207deca
.L_0207decc:
    adds r5, r3, #0 @ 0207decc
    b .L_0207ddf2 @ 0207dece
.L_0207ded0:
    movs r3, #0x8b @ 0207ded0
    str r3, [r0] @ 0207ded2
    ldr r2, [r7] @ 0207ded4
    ldr r3, [r7, #8] @ 0207ded6
    subs r2, r2, r3 @ 0207ded8
    str r2, [sp, #0x14] @ 0207deda
    b .L_0207ddd2 @ 0207dedc
.L_0207dede:
    movs r3, #5 @ 0207dede
    mov r2, sb @ 0207dee0
    str r3, [r2] @ 0207dee2
    add sl, r5 @ 0207dee4
    movs r3, #0 @ 0207dee6
    str r3, [sp, #0xc] @ 0207dee8
    b .L_0207de44 @ 0207deea
.L_0207deec:
    ldr r0, [r4, #0x10] @ 0207deec
    ldr r1, [r4, #0x24] @ 0207deee
    b .L_0207de66 @ 0207def0
.L_0207def2:
    ldr r3, [r4, #0x24] @ 0207def2
    add sl, r5 @ 0207def4
    mov fp, r3 @ 0207def6
    b .L_0207de44 @ 0207def8
.L_0207defa:
    lsrs r5, r6, #9 @ 0207defa
    cmp r5, #0 @ 0207defc
    ble .L_0207df28 @ 0207defe
    ldr r3, [sp, #0xc] @ 0207df00
    cmp r3, #0 @ 0207df02
    beq .L_0207df28 @ 0207df04
    mov r2, r8 @ 0207df06
    ldr r1, [r4] @ 0207df08
    cmp r2, #1 @ 0207df0a
    bls .L_0207dfb0 @ 0207df0c
    ldr r3, [r4, #0x24] @ 0207df0e
    subs r2, #2 @ 0207df10
    muls r2, r3, r2 @ 0207df12
    ldr r3, [r4, #0x1c] @ 0207df14
    adds r0, r2, r3 @ 0207df16
.L_0207df18:
    ldr r3, [r1, #0x10] @ 0207df18
    mov r2, sl @ 0207df1a
    adds r1, r5, #0 @ 0207df1c
    blx r3 @ 0207df1e
    lsls r3, r5, #9 @ 0207df20
    add sl, r3 @ 0207df22
    subs r6, r6, r3 @ 0207df24
    add fp, r5 @ 0207df26
.L_0207df28:
    cmp r6, #0 @ 0207df28
    beq .L_0207df5a @ 0207df2a
    ldr r3, [sp, #0xc] @ 0207df2c
    cmp r3, #0 @ 0207df2e
    beq .L_0207df5a @ 0207df30
    mov r2, r8 @ 0207df32
    cmp r2, #1 @ 0207df34
    bls .L_0207dfb4 @ 0207df36
    ldr r3, [r4, #0x24] @ 0207df38
    subs r2, #2 @ 0207df3a
    muls r2, r3, r2 @ 0207df3c
    ldr r3, [r4, #0x1c] @ 0207df3e
    adds r0, r2, r3 @ 0207df40
.L_0207df42:
    mov r3, fp @ 0207df42
    adds r2, r0, r3 @ 0207df44
    mov r1, sl @ 0207df46
    ldr r0, [sp, #8] @ 0207df48
    movs r3, #0 @ 0207df4a
    str r6, [sp] @ 0207df4c
    bl .L_0207d06c @ 0207df4e
    ldr r2, [sp, #0x10] @ 0207df52
    adds r2, r2, r6 @ 0207df54
    str r2, [sp, #0x10] @ 0207df56
    movs r6, #0 @ 0207df58
.L_0207df5a:
    ldr r3, [sp, #0x14] @ 0207df5a
    mov r2, fp @ 0207df5c
    subs r0, r3, r6 @ 0207df5e
    mov r3, r8 @ 0207df60
    str r3, [r7, #0xc] @ 0207df62
    ldr r3, [r7, #8] @ 0207df64
    str r2, [r7, #0x10] @ 0207df66
    ldr r2, [sp, #0x10] @ 0207df68
    adds r3, r3, r0 @ 0207df6a
    str r2, [r7, #0x14] @ 0207df6c
    str r3, [r7, #8] @ 0207df6e
    b .L_0207ddaa @ 0207df70
.L_0207df72:
    lsrs r5, r6, #9 @ 0207df72
    b .L_0207de0a @ 0207df74
.L_0207df76:
    movs r0, #0 @ 0207df76
    b .L_0207ddaa @ 0207df78
.L_0207df7a:
    adds r0, r4, #0 @ 0207df7a
    mov r1, r8 @ 0207df7c
    bl .L_0207e470 @ 0207df7e
    cmp r6, #0 @ 0207df82
    bne .L_0207df8c @ 0207df84
    ldr r3, [pc, #0x3c] @ 0207df86
    cmp r0, r3 @ 0207df88
    beq .L_0207dfb8 @ 0207df8a
.L_0207df8c:
    cmp r0, #0 @ 0207df8c
    beq .L_0207dfa0 @ 0207df8e
    movs r3, #0 @ 0207df90
    movs r2, #1 @ 0207df92
    mov r8, r0 @ 0207df94
    mov fp, r3 @ 0207df96
    str r2, [sp, #0xc] @ 0207df98
    b .L_0207de44 @ 0207df9a
.L_0207df9c:
    ldr r0, [r4, #0x10] @ 0207df9c
    b .L_0207de24 @ 0207df9e
.L_0207dfa0:
    movs r3, #5 @ 0207dfa0
    mov r2, sb @ 0207dfa2
    str r3, [r2] @ 0207dfa4
    movs r3, #0 @ 0207dfa6
    str r3, [sp, #0xc] @ 0207dfa8
    b .L_0207de44 @ 0207dfaa
.L_0207dfac:
    ldr r2, [r4, #0x10] @ 0207dfac
    b .L_0207dea2 @ 0207dfae
.L_0207dfb0:
    ldr r0, [r4, #0x10] @ 0207dfb0
    b .L_0207df18 @ 0207dfb2
.L_0207dfb4:
    ldr r0, [r4, #0x10] @ 0207dfb4
    b .L_0207df42 @ 0207dfb6
.L_0207dfb8:
    ldr r2, [r4, #0x24] @ 0207dfb8
    mov fp, r2 @ 0207dfba
    b .L_0207de40 @ 0207dfbc
    .byte 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0xff, 0xff, 0xff, 0x0f @ 0207dfbe
@ FUN_0207dfc8 at 0x0207dfc8
    push {r4, r5, r6, r7, lr} @ 0207dfc8
    mov r7, fp @ 0207dfca
    mov r6, sl @ 0207dfcc
    mov r5, sb @ 0207dfce
    mov r4, r8 @ 0207dfd0
    push {r4, r5, r6, r7} @ 0207dfd2
    ldr r4, [pc, #0x2ec] @ 0207dfd4
    mov r8, r1 @ 0207dfd6
    add sp, r4 @ 0207dfd8
    str r0, [sp, #0xc] @ 0207dfda
    mov sb, r2 @ 0207dfdc
    str r3, [sp, #8] @ 0207dfde
    cmp r1, #0 @ 0207dfe0
    beq .L_0207dfec @ 0207dfe2
    movs r3, #0x27 @ 0207dfe4
    ldrb r3, [r1, r3] @ 0207dfe6
    cmp r3, #0 @ 0207dfe8
    bne .L_0207e008 @ 0207dfea
.L_0207dfec:
    ldr r1, [sp, #0xc] @ 0207dfec
    movs r3, #9 @ 0207dfee
    movs r0, #1 @ 0207dff0
    str r3, [r1] @ 0207dff2
    negs r0, r0 @ 0207dff4
.L_0207dff6:
    movs r3, #0x89 @ 0207dff6
    lsls r3, r3, #2 @ 0207dff8
    add sp, r3 @ 0207dffa
    pop {r2, r3, r4, r5} @ 0207dffc
    mov r8, r2 @ 0207dffe
    mov sb, r3 @ 0207e000
    mov sl, r4 @ 0207e002
    mov fp, r5 @ 0207e004
    pop {r4, r5, r6, r7, pc} @ 0207e006
.L_0207e008:
    movs r3, #0x25 @ 0207e008
    ldrb r3, [r1, r3] @ 0207e00a
    cmp r3, #0 @ 0207e00c
    beq .L_0207dfec @ 0207e00e
    ldr r6, [r1, #0x28] @ 0207e010
    adds r2, r1, #0 @ 0207e012
    ldr r3, [r6, #4] @ 0207e014
    str r3, [sp, #0x10] @ 0207e016
    movs r3, #0x26 @ 0207e018
    ldrb r3, [r1, r3] @ 0207e01a
    cmp r3, #0 @ 0207e01c
    beq .L_0207e090 @ 0207e01e
    ldr r1, [r1, #0x20] @ 0207e020
    ldr r7, [r2, #0x18] @ 0207e022
    ldr r2, [r2, #0x1c] @ 0207e024
    movs r3, #1 @ 0207e026
    str r1, [sp, #0x1c] @ 0207e028
    mov sl, r2 @ 0207e02a
    str r3, [sp, #0x14] @ 0207e02c
.L_0207e02e:
    ldr r3, [r6, #0x24] @ 0207e02e
    cmp r3, sl @ 0207e030
    bhi .L_0207e036 @ 0207e032
    b .L_0207e22e @ 0207e034
.L_0207e036:
    movs r1, #1 @ 0207e036
    mov fp, r1 @ 0207e038
.L_0207e03a:
    movs r3, #0x80 @ 0207e03a
    ldr r1, [sp, #0x1c] @ 0207e03c
    lsls r3, r3, #2 @ 0207e03e
    ldr r2, [sp, #8] @ 0207e040
    subs r4, r3, r1 @ 0207e042
    cmp r2, r4 @ 0207e044
    bhs .L_0207e04a @ 0207e046
    adds r4, r2, #0 @ 0207e048
.L_0207e04a:
    ldr r3, [pc, #0x27c] @ 0207e04a
    cmp r4, r3 @ 0207e04c
    bgt .L_0207e0b8 @ 0207e04e
    mov r3, fp @ 0207e050
    cmp r3, #0 @ 0207e052
    beq .L_0207e0b8 @ 0207e054
    cmp r7, #1 @ 0207e056
    bhi .L_0207e05c @ 0207e058
    b .L_0207e2c0 @ 0207e05a
.L_0207e05c:
    ldr r3, [r6, #0x24] @ 0207e05c
    subs r2, r7, #2 @ 0207e05e
    muls r2, r3, r2 @ 0207e060
    ldr r3, [r6, #0x1c] @ 0207e062
    adds r2, r2, r3 @ 0207e064
.L_0207e066:
    mov r1, sb @ 0207e066
    add r2, sl @ 0207e068
    ldr r3, [sp, #0x1c] @ 0207e06a
    ldr r0, [sp, #0x10] @ 0207e06c
    str r4, [sp] @ 0207e06e
    bl .L_0207d020 @ 0207e070
    ldr r2, [sp, #0x1c] @ 0207e074
    ldr r1, [sp, #8] @ 0207e076
    ldr r3, [pc, #0x24c] @ 0207e078
    adds r2, r2, r4 @ 0207e07a
    subs r5, r1, r4 @ 0207e07c
    add sb, r4 @ 0207e07e
    str r2, [sp, #0x1c] @ 0207e080
    cmp r2, r3 @ 0207e082
    ble .L_0207e0ba @ 0207e084
    movs r3, #1 @ 0207e086
    movs r1, #0 @ 0207e088
    add sl, r3 @ 0207e08a
    str r1, [sp, #0x1c] @ 0207e08c
    b .L_0207e0ba @ 0207e08e
.L_0207e090:
    ldr r3, [r1, #8] @ 0207e090
    ldr r2, [r1] @ 0207e092
    cmp r3, r2 @ 0207e094
    bls .L_0207e09a @ 0207e096
    b .L_0207e2d0 @ 0207e098
.L_0207e09a:
    mov r1, r8 @ 0207e09a
    ldr r1, [r1, #0x14] @ 0207e09c
    str r1, [sp, #0x1c] @ 0207e09e
    mov r1, r8 @ 0207e0a0
    ldr r7, [r1, #0xc] @ 0207e0a2
    ldr r1, [r1, #0x10] @ 0207e0a4
    mov sl, r1 @ 0207e0a6
    ldr r1, [sp, #8] @ 0207e0a8
    adds r3, r1, r3 @ 0207e0aa
    cmp r3, r2 @ 0207e0ac
    bhi .L_0207e0b2 @ 0207e0ae
    b .L_0207e266 @ 0207e0b0
.L_0207e0b2:
    movs r2, #1 @ 0207e0b2
    str r2, [sp, #0x14] @ 0207e0b4
    b .L_0207e02e @ 0207e0b6
.L_0207e0b8:
    ldr r5, [sp, #8] @ 0207e0b8
.L_0207e0ba:
    ldr r1, [r6, #0x24] @ 0207e0ba
    mov r3, sl @ 0207e0bc
    subs r2, r1, r3 @ 0207e0be
    lsls r3, r2, #9 @ 0207e0c0
    cmp r5, r3 @ 0207e0c2
    bhi .L_0207e0c8 @ 0207e0c4
    b .L_0207e208 @ 0207e0c6
.L_0207e0c8:
    adds r4, r2, #0 @ 0207e0c8
.L_0207e0ca:
    cmp r4, #0 @ 0207e0ca
    ble .L_0207e0fe @ 0207e0cc
    mov r2, fp @ 0207e0ce
    cmp r2, #0 @ 0207e0d0
    beq .L_0207e0fe @ 0207e0d2
    ldr r3, [r6] @ 0207e0d4
    mov ip, r3 @ 0207e0d6
    cmp r7, #1 @ 0207e0d8
    bhi .L_0207e0de @ 0207e0da
    b .L_0207e346 @ 0207e0dc
.L_0207e0de:
    subs r3, r7, #2 @ 0207e0de
    adds r2, r3, #0 @ 0207e0e0
    muls r2, r1, r2 @ 0207e0e2
    ldr r3, [r6, #0x1c] @ 0207e0e4
    adds r0, r2, r3 @ 0207e0e6
.L_0207e0e8:
    mov r1, ip @ 0207e0e8
    ldr r3, [r1, #0x14] @ 0207e0ea
    add r0, sl @ 0207e0ec
    adds r1, r4, #0 @ 0207e0ee
    mov r2, sb @ 0207e0f0
    blx r3 @ 0207e0f2
    lsls r3, r4, #9 @ 0207e0f4
    ldr r1, [r6, #0x24] @ 0207e0f6
    add sb, r3 @ 0207e0f8
    subs r5, r5, r3 @ 0207e0fa
    add sl, r4 @ 0207e0fc
.L_0207e0fe:
    cmp r1, sl @ 0207e0fe
    bhi .L_0207e10e @ 0207e100
    mov r2, fp @ 0207e102
    cmp r2, #0 @ 0207e104
    beq .L_0207e10e @ 0207e106
    cmp r5, #0 @ 0207e108
    beq .L_0207e10e @ 0207e10a
    b .L_0207e28e @ 0207e10c
.L_0207e10e:
    ldr r3, [r6, #0x28] @ 0207e10e
.L_0207e110:
    cmp r5, r3 @ 0207e110
    blo .L_0207e146 @ 0207e112
.L_0207e114:
    mov r2, fp @ 0207e114
    cmp r2, #0 @ 0207e116
    beq .L_0207e146 @ 0207e118
    ldr r4, [r6] @ 0207e11a
    cmp r7, #1 @ 0207e11c
    bls .L_0207e202 @ 0207e11e
    ldr r1, [r6, #0x24] @ 0207e120
    subs r3, r7, #2 @ 0207e122
    adds r2, r1, #0 @ 0207e124
    muls r2, r3, r2 @ 0207e126
    ldr r3, [r6, #0x1c] @ 0207e128
    adds r0, r2, r3 @ 0207e12a
.L_0207e12c:
    ldr r3, [r4, #0x14] @ 0207e12c
    mov r2, sb @ 0207e12e
    blx r3 @ 0207e130
    ldr r3, [r6, #0x28] @ 0207e132
    subs r5, r5, r3 @ 0207e134
    adds r4, r3, #0 @ 0207e136
    cmp r5, #0 @ 0207e138
    bne .L_0207e1cc @ 0207e13a
    ldr r1, [r6, #0x24] @ 0207e13c
    add sb, r4 @ 0207e13e
    mov sl, r1 @ 0207e140
.L_0207e142:
    cmp r5, r3 @ 0207e142
    bhs .L_0207e114 @ 0207e144
.L_0207e146:
    lsrs r4, r5, #9 @ 0207e146
    cmp r4, #0 @ 0207e148
    ble .L_0207e174 @ 0207e14a
    mov r3, fp @ 0207e14c
    cmp r3, #0 @ 0207e14e
    beq .L_0207e174 @ 0207e150
    ldr r1, [r6] @ 0207e152
    cmp r7, #1 @ 0207e154
    bhi .L_0207e15a @ 0207e156
    b .L_0207e34a @ 0207e158
.L_0207e15a:
    ldr r3, [r6, #0x24] @ 0207e15a
    subs r2, r7, #2 @ 0207e15c
    muls r2, r3, r2 @ 0207e15e
    ldr r3, [r6, #0x1c] @ 0207e160
    adds r0, r2, r3 @ 0207e162
.L_0207e164:
    ldr r3, [r1, #0x14] @ 0207e164
    mov r2, sb @ 0207e166
    adds r1, r4, #0 @ 0207e168
    blx r3 @ 0207e16a
    lsls r3, r4, #9 @ 0207e16c
    add sb, r3 @ 0207e16e
    subs r5, r5, r3 @ 0207e170
    add sl, r4 @ 0207e172
.L_0207e174:
    cmp r5, #0 @ 0207e174
    beq .L_0207e1ac @ 0207e176
    mov r1, fp @ 0207e178
    cmp r1, #0 @ 0207e17a
    beq .L_0207e1ac @ 0207e17c
    ldr r2, [sp, #0x14] @ 0207e17e
    cmp r2, #0 @ 0207e180
    beq .L_0207e26c @ 0207e182
    cmp r7, #1 @ 0207e184
    bhi .L_0207e18a @ 0207e186
    b .L_0207e418 @ 0207e188
.L_0207e18a:
    ldr r3, [r6, #0x24] @ 0207e18a
    subs r2, r7, #2 @ 0207e18c
    muls r2, r3, r2 @ 0207e18e
    ldr r3, [r6, #0x1c] @ 0207e190
    adds r0, r2, r3 @ 0207e192
.L_0207e194:
    mov r3, sl @ 0207e194
    adds r2, r0, r3 @ 0207e196
    mov r1, sb @ 0207e198
    ldr r0, [sp, #0x10] @ 0207e19a
    movs r3, #0 @ 0207e19c
    str r5, [sp] @ 0207e19e
    bl .L_0207cfbc @ 0207e1a0
.L_0207e1a4:
    ldr r2, [sp, #0x1c] @ 0207e1a4
    adds r2, r2, r5 @ 0207e1a6
    str r2, [sp, #0x1c] @ 0207e1a8
    movs r5, #0 @ 0207e1aa
.L_0207e1ac:
    ldr r3, [sp, #8] @ 0207e1ac
    mov r1, r8 @ 0207e1ae
    subs r0, r3, r5 @ 0207e1b0
    movs r3, #0x26 @ 0207e1b2
    ldrb r3, [r1, r3] @ 0207e1b4
    cmp r3, #0 @ 0207e1b6
    beq .L_0207e20c @ 0207e1b8
    mov r3, sl @ 0207e1ba
    ldr r2, [sp, #0x1c] @ 0207e1bc
    str r3, [r1, #0x1c] @ 0207e1be
    ldr r3, [r1] @ 0207e1c0
    str r2, [r1, #0x20] @ 0207e1c2
    adds r2, r3, r0 @ 0207e1c4
    str r7, [r1, #0x18] @ 0207e1c6
    str r2, [r1] @ 0207e1c8
    b .L_0207dff6 @ 0207e1ca
.L_0207e1cc:
    adds r0, r6, #0 @ 0207e1cc
    adds r1, r7, #0 @ 0207e1ce
    bl .L_0207e470 @ 0207e1d0
    ldr r3, [pc, #0xf4] @ 0207e1d4
    cmp r0, r3 @ 0207e1d6
    beq .L_0207e1de @ 0207e1d8
    cmp r0, #0 @ 0207e1da
    bne .L_0207e1fa @ 0207e1dc
.L_0207e1de:
    adds r0, r6, #0 @ 0207e1de
    adds r1, r7, #0 @ 0207e1e0
    bl .L_0207e71c @ 0207e1e2
    cmp r0, #0 @ 0207e1e6
    bne .L_0207e1fa @ 0207e1e8
    ldr r1, [sp, #0xc] @ 0207e1ea
    movs r3, #0x1c @ 0207e1ec
    str r3, [r1] @ 0207e1ee
    movs r2, #0 @ 0207e1f0
    ldr r3, [r6, #0x28] @ 0207e1f2
    mov fp, r2 @ 0207e1f4
    add sb, r4 @ 0207e1f6
    b .L_0207e142 @ 0207e1f8
.L_0207e1fa:
    ldr r3, [r6, #0x28] @ 0207e1fa
    adds r7, r0, #0 @ 0207e1fc
    add sb, r4 @ 0207e1fe
    b .L_0207e142 @ 0207e200
.L_0207e202:
    ldr r0, [r6, #0x10] @ 0207e202
    ldr r1, [r6, #0x24] @ 0207e204
    b .L_0207e12c @ 0207e206
.L_0207e208:
    lsrs r4, r5, #9 @ 0207e208
    b .L_0207e0ca @ 0207e20a
.L_0207e20c:
    ldr r2, [sp, #0x1c] @ 0207e20c
    mov r3, r8 @ 0207e20e
    mov r1, sl @ 0207e210
    str r2, [r3, #0x14] @ 0207e212
    str r7, [r3, #0xc] @ 0207e214
    str r1, [r3, #0x10] @ 0207e216
    ldr r3, [r3, #8] @ 0207e218
    adds r2, r3, r0 @ 0207e21a
    mov r3, r8 @ 0207e21c
    str r2, [r3, #8] @ 0207e21e
    ldr r3, [r3] @ 0207e220
    cmp r2, r3 @ 0207e222
    bhi .L_0207e228 @ 0207e224
    b .L_0207dff6 @ 0207e226
.L_0207e228:
    mov r1, r8 @ 0207e228
    str r2, [r1] @ 0207e22a
    b .L_0207dff6 @ 0207e22c
.L_0207e22e:
    adds r0, r6, #0 @ 0207e22e
    adds r1, r7, #0 @ 0207e230
    bl .L_0207e470 @ 0207e232
    ldr r3, [pc, #0x94] @ 0207e236
    cmp r0, r3 @ 0207e238
    beq .L_0207e240 @ 0207e23a
    cmp r0, #0 @ 0207e23c
    bne .L_0207e25a @ 0207e23e
.L_0207e240:
    adds r0, r6, #0 @ 0207e240
    adds r1, r7, #0 @ 0207e242
    bl .L_0207e71c @ 0207e244
    cmp r0, #0 @ 0207e248
    bne .L_0207e25a @ 0207e24a
    ldr r2, [sp, #0xc] @ 0207e24c
    movs r3, #0x1c @ 0207e24e
    str r3, [r2] @ 0207e250
    movs r3, #0 @ 0207e252
    mov fp, r3 @ 0207e254
    mov sl, r3 @ 0207e256
    b .L_0207e03a @ 0207e258
.L_0207e25a:
    movs r1, #1 @ 0207e25a
    movs r2, #0 @ 0207e25c
    adds r7, r0, #0 @ 0207e25e
    mov fp, r1 @ 0207e260
    mov sl, r2 @ 0207e262
    b .L_0207e03a @ 0207e264
.L_0207e266:
    movs r3, #0 @ 0207e266
    str r3, [sp, #0x14] @ 0207e268
    b .L_0207e02e @ 0207e26a
.L_0207e26c:
    cmp r7, #1 @ 0207e26c
    bhi .L_0207e272 @ 0207e26e
    b .L_0207e41c @ 0207e270
.L_0207e272:
    ldr r3, [r6, #0x24] @ 0207e272
    subs r2, r7, #2 @ 0207e274
    muls r2, r3, r2 @ 0207e276
    ldr r3, [r6, #0x1c] @ 0207e278
    adds r0, r2, r3 @ 0207e27a
.L_0207e27c:
    mov r1, sl @ 0207e27c
    adds r2, r0, r1 @ 0207e27e
    movs r3, #0 @ 0207e280
    ldr r0, [sp, #0x10] @ 0207e282
    mov r1, sb @ 0207e284
    str r5, [sp] @ 0207e286
    bl .L_0207d020 @ 0207e288
    b .L_0207e1a4 @ 0207e28c
.L_0207e28e:
    adds r0, r6, #0 @ 0207e28e
    adds r1, r7, #0 @ 0207e290
    bl .L_0207e470 @ 0207e292
    ldr r3, [pc, #0x34] @ 0207e296
    cmp r0, r3 @ 0207e298
    beq .L_0207e2a2 @ 0207e29a
    cmp r0, #0 @ 0207e29c
    beq .L_0207e2a2 @ 0207e29e
    b .L_0207e40e @ 0207e2a0
.L_0207e2a2:
    adds r0, r6, #0 @ 0207e2a2
    adds r1, r7, #0 @ 0207e2a4
    bl .L_0207e71c @ 0207e2a6
    cmp r0, #0 @ 0207e2aa
    beq .L_0207e2b0 @ 0207e2ac
    b .L_0207e40e @ 0207e2ae
.L_0207e2b0:
    ldr r1, [sp, #0xc] @ 0207e2b0
    movs r3, #0x1c @ 0207e2b2
    str r3, [r1] @ 0207e2b4
    movs r2, #0 @ 0207e2b6
    ldr r3, [r6, #0x28] @ 0207e2b8
    mov fp, r2 @ 0207e2ba
    mov sl, r2 @ 0207e2bc
    b .L_0207e110 @ 0207e2be
.L_0207e2c0:
    ldr r2, [r6, #0x10] @ 0207e2c0
    b .L_0207e066 @ 0207e2c2
    .byte 0xdc, 0xfd, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0xff, 0xff, 0xff, 0x0f @ 0207e2c4
.L_0207e2d0:
    movs r2, #0x80 @ 0207e2d0
    movs r1, #0 @ 0207e2d2
    lsls r2, r2, #2 @ 0207e2d4
    add r0, sp, #0x20 @ 0207e2d6
    bl .L_02085970 @ 0207e2d8
    mov r2, r8 @ 0207e2dc
    ldr r0, [r2] @ 0207e2de
    ldr r4, [pc, #0x180] @ 0207e2e0
    adds r3, r0, #0 @ 0207e2e2
    ands r3, r4 @ 0207e2e4
    ldr r1, [r6, #0x28] @ 0207e2e6
    mov fp, r3 @ 0207e2e8
    bl .L_020859a8 @ 0207e2ea
    mov r2, r8 @ 0207e2ee
    lsrs r5, r1, #9 @ 0207e2f0
    adds r0, r6, #0 @ 0207e2f2
    ldr r1, [r2, #4] @ 0207e2f4
    bl .L_0207e558 @ 0207e2f6
    mov r3, r8 @ 0207e2fa
    ldr r2, [r3, #8] @ 0207e2fc
    ldr r3, [r3] @ 0207e2fe
    mov r1, fp @ 0207e300
    subs r7, r2, r3 @ 0207e302
    adds r1, r7, r1 @ 0207e304
    mov sl, r0 @ 0207e306
    str r1, [sp, #0x18] @ 0207e308
    cmp r1, r4 @ 0207e30a
    bhi .L_0207e34e @ 0207e30c
    cmp r0, #1 @ 0207e30e
    bhi .L_0207e314 @ 0207e310
    b .L_0207e446 @ 0207e312
.L_0207e314:
    ldr r3, [r6, #0x24] @ 0207e314
    mov r2, sl @ 0207e316
    subs r2, #2 @ 0207e318
    muls r2, r3, r2 @ 0207e31a
    ldr r3, [r6, #0x1c] @ 0207e31c
    adds r2, r2, r3 @ 0207e31e
.L_0207e320:
    adds r2, r2, r5 @ 0207e320
    mov r3, fp @ 0207e322
    ldr r0, [sp, #0x10] @ 0207e324
    add r1, sp, #0x20 @ 0207e326
    str r7, [sp] @ 0207e328
    bl .L_0207d020 @ 0207e32a
    ldr r2, [sp, #0x18] @ 0207e32e
    mov fp, r2 @ 0207e330
.L_0207e332:
    mov r1, r8 @ 0207e332
    mov r2, fp @ 0207e334
    str r2, [r1, #0x14] @ 0207e336
    ldr r2, [r1, #8] @ 0207e338
    mov r3, sl @ 0207e33a
    str r3, [r1, #0xc] @ 0207e33c
    adds r3, r2, #0 @ 0207e33e
    str r5, [r1, #0x10] @ 0207e340
    str r2, [r1] @ 0207e342
    b .L_0207e09a @ 0207e344
.L_0207e346:
    ldr r0, [r6, #0x10] @ 0207e346
    b .L_0207e0e8 @ 0207e348
.L_0207e34a:
    ldr r0, [r6, #0x10] @ 0207e34a
    b .L_0207e164 @ 0207e34c
.L_0207e34e:
    mov r3, fp @ 0207e34e
    cmp r3, #0 @ 0207e350
    ble .L_0207e3ac @ 0207e352
    cmp r0, #1 @ 0207e354
    bls .L_0207e450 @ 0207e356
    ldr r3, [r6, #0x24] @ 0207e358
    adds r2, r0, #0 @ 0207e35a
    subs r2, #2 @ 0207e35c
    muls r2, r3, r2 @ 0207e35e
    ldr r3, [r6, #0x1c] @ 0207e360
    adds r2, r2, r3 @ 0207e362
.L_0207e364:
    movs r3, #0x80 @ 0207e364
    mov r1, fp @ 0207e366
    lsls r3, r3, #2 @ 0207e368
    subs r3, r3, r1 @ 0207e36a
    adds r2, r2, r5 @ 0207e36c
    str r3, [sp] @ 0207e36e
    add r1, sp, #0x20 @ 0207e370
    mov r3, fp @ 0207e372
    ldr r0, [sp, #0x10] @ 0207e374
    bl .L_0207d020 @ 0207e376
    ldr r2, [sp, #0x18] @ 0207e37a
    ldr r3, [pc, #0xe8] @ 0207e37c
    movs r1, #0 @ 0207e37e
    adds r7, r2, r3 @ 0207e380
    adds r5, #1 @ 0207e382
    mov fp, r1 @ 0207e384
    b .L_0207e3ac @ 0207e386
.L_0207e388:
    adds r4, r5, #0 @ 0207e388
    adds r5, #1 @ 0207e38a
.L_0207e38c:
    mov r2, sl @ 0207e38c
    ldr r1, [r6] @ 0207e38e
    cmp r2, #1 @ 0207e390
    bls .L_0207e3de @ 0207e392
    ldr r3, [r6, #0x24] @ 0207e394
    subs r2, #2 @ 0207e396
    muls r2, r3, r2 @ 0207e398
    ldr r3, [r6, #0x1c] @ 0207e39a
    adds r0, r2, r3 @ 0207e39c
.L_0207e39e:
    ldr r3, [r1, #0x14] @ 0207e39e
    adds r0, r0, r4 @ 0207e3a0
    movs r1, #1 @ 0207e3a2
    add r2, sp, #0x20 @ 0207e3a4
    blx r3 @ 0207e3a6
    ldr r3, [pc, #0xbc] @ 0207e3a8
    adds r7, r7, r3 @ 0207e3aa
.L_0207e3ac:
    ldr r3, [pc, #0xb4] @ 0207e3ac
    cmp r7, r3 @ 0207e3ae
    bls .L_0207e3e2 @ 0207e3b0
    ldr r3, [r6, #0x24] @ 0207e3b2
    cmp r5, r3 @ 0207e3b4
    blo .L_0207e388 @ 0207e3b6
    adds r0, r6, #0 @ 0207e3b8
    mov r1, sl @ 0207e3ba
    bl .L_0207e470 @ 0207e3bc
    ldr r3, [pc, #0xa8] @ 0207e3c0
    cmp r0, r3 @ 0207e3c2
    beq .L_0207e3ca @ 0207e3c4
    cmp r0, #0 @ 0207e3c6
    bne .L_0207e3d6 @ 0207e3c8
.L_0207e3ca:
    adds r0, r6, #0 @ 0207e3ca
    mov r1, sl @ 0207e3cc
    bl .L_0207e71c @ 0207e3ce
    cmp r0, #0 @ 0207e3d2
    beq .L_0207e454 @ 0207e3d4
.L_0207e3d6:
    mov sl, r0 @ 0207e3d6
    movs r4, #0 @ 0207e3d8
    movs r5, #1 @ 0207e3da
    b .L_0207e38c @ 0207e3dc
.L_0207e3de:
    ldr r0, [r6, #0x10] @ 0207e3de
    b .L_0207e39e @ 0207e3e0
.L_0207e3e2:
    ldr r3, [r6, #0x24] @ 0207e3e2
    cmp r5, r3 @ 0207e3e4
    bhs .L_0207e420 @ 0207e3e6
.L_0207e3e8:
    cmp r7, #0 @ 0207e3e8
    beq .L_0207e332 @ 0207e3ea
    mov r2, sl @ 0207e3ec
    cmp r2, #1 @ 0207e3ee
    bls .L_0207e45e @ 0207e3f0
    ldr r3, [r6, #0x24] @ 0207e3f2
    subs r2, #2 @ 0207e3f4
    muls r2, r3, r2 @ 0207e3f6
    ldr r3, [r6, #0x1c] @ 0207e3f8
    adds r2, r2, r3 @ 0207e3fa
.L_0207e3fc:
    adds r2, r2, r5 @ 0207e3fc
    ldr r0, [sp, #0x10] @ 0207e3fe
    add r1, sp, #0x20 @ 0207e400
    movs r3, #0 @ 0207e402
    str r7, [sp] @ 0207e404
    bl .L_0207d020 @ 0207e406
    mov fp, r7 @ 0207e40a
    b .L_0207e332 @ 0207e40c
.L_0207e40e:
    movs r3, #0 @ 0207e40e
    mov sl, r3 @ 0207e410
    ldr r3, [r6, #0x28] @ 0207e412
    adds r7, r0, #0 @ 0207e414
    b .L_0207e110 @ 0207e416
.L_0207e418:
    ldr r0, [r6, #0x10] @ 0207e418
    b .L_0207e194 @ 0207e41a
.L_0207e41c:
    ldr r0, [r6, #0x10] @ 0207e41c
    b .L_0207e27c @ 0207e41e
.L_0207e420:
    adds r0, r6, #0 @ 0207e420
    mov r1, sl @ 0207e422
    bl .L_0207e470 @ 0207e424
    ldr r3, [pc, #0x40] @ 0207e428
    cmp r0, r3 @ 0207e42a
    beq .L_0207e432 @ 0207e42c
    cmp r0, #0 @ 0207e42e
    bne .L_0207e44a @ 0207e430
.L_0207e432:
    adds r0, r6, #0 @ 0207e432
    mov r1, sl @ 0207e434
    bl .L_0207e71c @ 0207e436
    cmp r0, #0 @ 0207e43a
    bne .L_0207e44a @ 0207e43c
    ldr r1, [sp, #0xc] @ 0207e43e
    movs r3, #0x1c @ 0207e440
    str r3, [r1] @ 0207e442
    b .L_0207dff6 @ 0207e444
.L_0207e446:
    ldr r2, [r6, #0x10] @ 0207e446
    b .L_0207e320 @ 0207e448
.L_0207e44a:
    mov sl, r0 @ 0207e44a
    movs r5, #0 @ 0207e44c
    b .L_0207e3e8 @ 0207e44e
.L_0207e450:
    ldr r2, [r6, #0x10] @ 0207e450
    b .L_0207e364 @ 0207e452
.L_0207e454:
    ldr r1, [sp, #0xc] @ 0207e454
    movs r3, #0x1c @ 0207e456
    movs r0, #0 @ 0207e458
    str r3, [r1] @ 0207e45a
    b .L_0207dff6 @ 0207e45c
.L_0207e45e:
    ldr r2, [r6, #0x10] @ 0207e45e
    b .L_0207e3fc @ 0207e460
    .byte 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f @ 0207e462
.L_0207e470:
@ FUN_0207e470 at 0x0207e470
    push {r4, r5, r6, r7, lr} @ 0207e470
    mov r7, r8 @ 0207e472
    push {r7} @ 0207e474
    adds r6, r0, #0 @ 0207e476
    sub sp, #0x10 @ 0207e478
    adds r7, r1, #0 @ 0207e47a
    ldrb r1, [r6, #9] @ 0207e47c
    add r3, sp, #0xc @ 0207e47e
    movs r0, #0 @ 0207e480
    mov ip, r3 @ 0207e482
    str r0, [sp, #0xc] @ 0207e484
    cmp r1, #1 @ 0207e486
    beq .L_0207e4c4 @ 0207e488
    cmp r1, #1 @ 0207e48a
    bhs .L_0207e498 @ 0207e48c
.L_0207e48e:
    str r0, [sp, #0xc] @ 0207e48e
.L_0207e490:
    add sp, #0x10 @ 0207e490
    pop {r2} @ 0207e492
    mov r8, r2 @ 0207e494
    pop {r4, r5, r6, r7, pc} @ 0207e496
.L_0207e498:
    cmp r1, #2 @ 0207e498
    beq .L_0207e51e @ 0207e49a
    cmp r1, #3 @ 0207e49c
    bne .L_0207e48e @ 0207e49e
    ldr r3, [r6, #0x2c] @ 0207e4a0
    lsls r2, r7, #2 @ 0207e4a2
    lsrs r2, r2, #9 @ 0207e4a4
    adds r2, r2, r3 @ 0207e4a6
    movs r3, #0x7f @ 0207e4a8
    movs r1, #4 @ 0207e4aa
    ands r3, r7 @ 0207e4ac
    lsls r3, r3, #2 @ 0207e4ae
    str r1, [sp] @ 0207e4b0
    ldr r0, [r6, #4] @ 0207e4b2
    mov r1, ip @ 0207e4b4
    bl .L_0207d06c @ 0207e4b6
    ldr r0, [sp, #0xc] @ 0207e4ba
    ldr r3, [pc, #0x80] @ 0207e4bc
    cmp r0, r3 @ 0207e4be
    bhi .L_0207e50e @ 0207e4c0
    b .L_0207e490 @ 0207e4c2
.L_0207e4c4:
    lsls r4, r7, #1 @ 0207e4c4
    ldr r3, [r6, #0x2c] @ 0207e4c6
    adds r4, r4, r7 @ 0207e4c8
    lsrs r2, r4, #0xa @ 0207e4ca
    adds r5, r2, r3 @ 0207e4cc
    ldr r3, [pc, #0x74] @ 0207e4ce
    lsrs r4, r4, #1 @ 0207e4d0
    ands r4, r3 @ 0207e4d2
    str r1, [sp] @ 0207e4d4
    mov r8, r3 @ 0207e4d6
    ldr r0, [r6, #4] @ 0207e4d8
    adds r3, r4, #0 @ 0207e4da
    mov r1, ip @ 0207e4dc
    adds r2, r5, #0 @ 0207e4de
    bl .L_0207d06c @ 0207e4e0
    adds r3, r4, #1 @ 0207e4e4
    cmp r3, r8 @ 0207e4e6
    ble .L_0207e4ee @ 0207e4e8
    adds r5, #1 @ 0207e4ea
    movs r3, #0 @ 0207e4ec
.L_0207e4ee:
    mov r1, sp @ 0207e4ee
    movs r4, #1 @ 0207e4f0
    ldr r0, [r6, #4] @ 0207e4f2
    adds r1, #0xd @ 0207e4f4
    adds r2, r5, #0 @ 0207e4f6
    str r4, [sp] @ 0207e4f8
    bl .L_0207d06c @ 0207e4fa
    tst r7, r4 @ 0207e4fe
    beq .L_0207e514 @ 0207e500
    ldr r0, [sp, #0xc] @ 0207e502
    lsrs r0, r0, #4 @ 0207e504
    str r0, [sp, #0xc] @ 0207e506
.L_0207e508:
    ldr r3, [pc, #0x3c] @ 0207e508
    cmp r0, r3 @ 0207e50a
    bls .L_0207e490 @ 0207e50c
.L_0207e50e:
    ldr r0, [pc, #0x3c] @ 0207e50e
    str r0, [sp, #0xc] @ 0207e510
    b .L_0207e490 @ 0207e512
.L_0207e514:
    ldr r0, [sp, #0xc] @ 0207e514
    ldr r3, [pc, #0x38] @ 0207e516
    ands r0, r3 @ 0207e518
    str r0, [sp, #0xc] @ 0207e51a
    b .L_0207e508 @ 0207e51c
.L_0207e51e:
    ldr r3, [r6, #0x2c] @ 0207e51e
    lsls r2, r7, #1 @ 0207e520
    lsrs r2, r2, #9 @ 0207e522
    adds r2, r2, r3 @ 0207e524
    movs r3, #0xff @ 0207e526
    ands r3, r7 @ 0207e528
    lsls r3, r3, #1 @ 0207e52a
    str r1, [sp] @ 0207e52c
    ldr r0, [r6, #4] @ 0207e52e
    mov r1, ip @ 0207e530
    bl .L_0207d06c @ 0207e532
    ldr r0, [sp, #0xc] @ 0207e536
    ldr r3, [pc, #0x18] @ 0207e538
    cmp r0, r3 @ 0207e53a
    bhi .L_0207e50e @ 0207e53c
    b .L_0207e490 @ 0207e53e
    .byte 0xf6, 0xff, 0xff, 0x0f, 0xff, 0x01, 0x00, 0x00, 0xf6, 0x0f, 0x00, 0x00, 0xff, 0xff, 0xff, 0x0f @ 0207e540
    .byte 0xff, 0x0f, 0x00, 0x00, 0xf6, 0xff, 0x00, 0x00 @ 0207e550
.L_0207e558:
@ FUN_0207e558 at 0x0207e558
    push {r4, r5, lr} @ 0207e558
    sub sp, #4 @ 0207e55a
    adds r5, r0, #0 @ 0207e55c
    adds r4, r1, #0 @ 0207e55e
    b .L_0207e57a @ 0207e560
.L_0207e562:
    adds r0, r5, #0 @ 0207e562
    adds r1, r4, #0 @ 0207e564
    bl .L_0207e470 @ 0207e566
    ldr r3, [pc, #0x20] @ 0207e56a
    cmp r0, r3 @ 0207e56c
    beq .L_0207e586 @ 0207e56e
    adds r1, r4, #0 @ 0207e570
    adds r0, r5, #0 @ 0207e572
    bl .L_0207e470 @ 0207e574
    adds r4, r0, #0 @ 0207e578
.L_0207e57a:
    adds r0, r5, #0 @ 0207e57a
    adds r1, r4, #0 @ 0207e57c
    bl .L_0207e470 @ 0207e57e
    cmp r0, #0 @ 0207e582
    bne .L_0207e562 @ 0207e584
.L_0207e586:
    adds r0, r4, #0 @ 0207e586
    add sp, #4 @ 0207e588
    pop {r4, r5, pc} @ 0207e58a
    .byte 0xff, 0xff, 0xff, 0x0f @ 0207e58c
.L_0207e590:
@ FUN_0207e590 at 0x0207e590
    push {r4, r5, r6, r7, lr} @ 0207e590
    mov r7, sl @ 0207e592
    mov r6, sb @ 0207e594
    mov r5, r8 @ 0207e596
    push {r5, r6, r7} @ 0207e598
    sub sp, #0x18 @ 0207e59a
    add r3, sp, #0xc @ 0207e59c
    adds r6, r0, #0 @ 0207e59e
    adds r4, r1, #0 @ 0207e5a0
    mov sl, r3 @ 0207e5a2
    str r2, [sp, #0xc] @ 0207e5a4
    cmp r1, #1 @ 0207e5a6
    bls .L_0207e5be @ 0207e5a8
    ldr r3, [r0, #0x34] @ 0207e5aa
    cmp r1, r3 @ 0207e5ac
    bhi .L_0207e5be @ 0207e5ae
    ldrb r5, [r0, #9] @ 0207e5b0
    cmp r5, #2 @ 0207e5b2
    beq .L_0207e5cc @ 0207e5b4
    cmp r5, #3 @ 0207e5b6
    beq .L_0207e64e @ 0207e5b8
    cmp r5, #1 @ 0207e5ba
    beq .L_0207e5e8 @ 0207e5bc
.L_0207e5be:
    movs r0, #0 @ 0207e5be
.L_0207e5c0:
    add sp, #0x18 @ 0207e5c0
    pop {r2, r3, r4} @ 0207e5c2
    mov r8, r2 @ 0207e5c4
    mov sb, r3 @ 0207e5c6
    mov sl, r4 @ 0207e5c8
    pop {r4, r5, r6, r7, pc} @ 0207e5ca
.L_0207e5cc:
    ldr r3, [r6, #0x2c] @ 0207e5cc
    lsls r2, r1, #1 @ 0207e5ce
    lsrs r2, r2, #9 @ 0207e5d0
    adds r2, r2, r3 @ 0207e5d2
    movs r3, #0xff @ 0207e5d4
    ands r3, r1 @ 0207e5d6
    ldr r0, [r0, #4] @ 0207e5d8
    lsls r3, r3, #1 @ 0207e5da
    mov r1, sl @ 0207e5dc
    str r5, [sp] @ 0207e5de
    bl .L_0207d020 @ 0207e5e0
    movs r0, #1 @ 0207e5e4
    b .L_0207e5c0 @ 0207e5e6
.L_0207e5e8:
    lsls r3, r1, #1 @ 0207e5e8
    adds r3, r3, r1 @ 0207e5ea
    ldr r2, [r0, #0x2c] @ 0207e5ec
    lsrs r1, r3, #0xa @ 0207e5ee
    adds r1, r1, r2 @ 0207e5f0
    ldr r2, [pc, #0xd4] @ 0207e5f2
    lsrs r3, r3, #1 @ 0207e5f4
    adds r7, r2, #0 @ 0207e5f6
    mov r8, r1 @ 0207e5f8
    mov sb, r2 @ 0207e5fa
    ands r7, r3 @ 0207e5fc
    tst r4, r5 @ 0207e5fe
    bne .L_0207e66c @ 0207e600
    ldr r0, [r0, #4] @ 0207e602
    adds r3, r7, #0 @ 0207e604
    mov r1, sl @ 0207e606
    mov r2, r8 @ 0207e608
    str r5, [sp] @ 0207e60a
    bl .L_0207d020 @ 0207e60c
    adds r3, r7, #1 @ 0207e610
    cmp r3, sb @ 0207e612
    bgt .L_0207e6c0 @ 0207e614
    adds r7, r3, #0 @ 0207e616
.L_0207e618:
    mov r4, sp @ 0207e618
    adds r4, #0x17 @ 0207e61a
    movs r5, #1 @ 0207e61c
    adds r1, r4, #0 @ 0207e61e
    mov r2, r8 @ 0207e620
    adds r3, r7, #0 @ 0207e622
    ldr r0, [r6, #4] @ 0207e624
    str r5, [sp] @ 0207e626
    bl .L_0207d06c @ 0207e628
    ldr r3, [sp, #0xc] @ 0207e62c
    ldrb r2, [r4] @ 0207e62e
    movs r1, #0xf0 @ 0207e630
    lsls r3, r3, #0x14 @ 0207e632
    ands r2, r1 @ 0207e634
    lsrs r3, r3, #0x1c @ 0207e636
    orrs r3, r2 @ 0207e638
    str r3, [sp, #0xc] @ 0207e63a
    ldr r0, [r6, #4] @ 0207e63c
    mov r1, sl @ 0207e63e
    mov r2, r8 @ 0207e640
    adds r3, r7, #0 @ 0207e642
    str r5, [sp] @ 0207e644
    bl .L_0207d020 @ 0207e646
    movs r0, #1 @ 0207e64a
    b .L_0207e5c0 @ 0207e64c
.L_0207e64e:
    ldr r3, [r6, #0x2c] @ 0207e64e
    lsls r2, r1, #2 @ 0207e650
    lsrs r2, r2, #9 @ 0207e652
    adds r2, r2, r3 @ 0207e654
    movs r3, #0x7f @ 0207e656
    ands r3, r1 @ 0207e658
    movs r1, #4 @ 0207e65a
    ldr r0, [r0, #4] @ 0207e65c
    lsls r3, r3, #2 @ 0207e65e
    str r1, [sp] @ 0207e660
    mov r1, sl @ 0207e662
    bl .L_0207d020 @ 0207e664
    movs r0, #1 @ 0207e668
    b .L_0207e5c0 @ 0207e66a
.L_0207e66c:
    mov r4, sp @ 0207e66c
    adds r4, #0x17 @ 0207e66e
    ldr r0, [r0, #4] @ 0207e670
    adds r1, r4, #0 @ 0207e672
    mov r2, r8 @ 0207e674
    adds r3, r7, #0 @ 0207e676
    str r5, [sp] @ 0207e678
    bl .L_0207d06c @ 0207e67a
    ldr r2, [sp, #0xc] @ 0207e67e
    ldrb r3, [r4] @ 0207e680
    movs r1, #0xf @ 0207e682
    ands r3, r1 @ 0207e684
    lsls r2, r2, #4 @ 0207e686
    orrs r2, r3 @ 0207e688
    str r2, [sp, #0xc] @ 0207e68a
    adds r3, r7, #0 @ 0207e68c
    ldr r0, [r6, #4] @ 0207e68e
    mov r1, sl @ 0207e690
    mov r2, r8 @ 0207e692
    str r5, [sp] @ 0207e694
    bl .L_0207d020 @ 0207e696
    adds r3, r7, #1 @ 0207e69a
    cmp r3, sb @ 0207e69c
    bgt .L_0207e6b8 @ 0207e69e
    adds r4, r3, #0 @ 0207e6a0
.L_0207e6a2:
    movs r3, #1 @ 0207e6a2
    mov r1, sp @ 0207e6a4
    str r3, [sp] @ 0207e6a6
    ldr r0, [r6, #4] @ 0207e6a8
    adds r1, #0xd @ 0207e6aa
    mov r2, r8 @ 0207e6ac
    adds r3, r4, #0 @ 0207e6ae
    bl .L_0207d020 @ 0207e6b0
    movs r0, #1 @ 0207e6b4
    b .L_0207e5c0 @ 0207e6b6
.L_0207e6b8:
    movs r3, #1 @ 0207e6b8
    add r8, r3 @ 0207e6ba
    movs r4, #0 @ 0207e6bc
    b .L_0207e6a2 @ 0207e6be
.L_0207e6c0:
    movs r2, #1 @ 0207e6c0
    add r8, r2 @ 0207e6c2
    movs r7, #0 @ 0207e6c4
    b .L_0207e618 @ 0207e6c6
    .byte 0xff, 0x01, 0x00, 0x00 @ 0207e6c8
.L_0207e6cc:
@ FUN_0207e6cc at 0x0207e6cc
    push {r4, r5, r6, lr} @ 0207e6cc
    adds r6, r0, #0 @ 0207e6ce
    adds r5, r1, #0 @ 0207e6d0
    cmp r1, #1 @ 0207e6d2
    bls .L_0207e712 @ 0207e6d4
    ldr r3, [r0, #0x34] @ 0207e6d6
    cmp r1, r3 @ 0207e6d8
    bhi .L_0207e712 @ 0207e6da
    ldr r3, [r0, #0x38] @ 0207e6dc
    cmp r1, r3 @ 0207e6de
    blo .L_0207e70e @ 0207e6e0
.L_0207e6e2:
    ldr r3, [pc, #0x34] @ 0207e6e2
    cmp r5, r3 @ 0207e6e4
    bne .L_0207e6f0 @ 0207e6e6
    b .L_0207e70a @ 0207e6e8
.L_0207e6ea:
    adds r5, r4, #0 @ 0207e6ea
    cmp r4, #0 @ 0207e6ec
    beq .L_0207e70a @ 0207e6ee
.L_0207e6f0:
    adds r1, r5, #0 @ 0207e6f0
    adds r0, r6, #0 @ 0207e6f2
    bl .L_0207e470 @ 0207e6f4
    adds r1, r5, #0 @ 0207e6f8
    adds r4, r0, #0 @ 0207e6fa
    movs r2, #0 @ 0207e6fc
    adds r0, r6, #0 @ 0207e6fe
    bl .L_0207e590 @ 0207e700
    ldr r3, [pc, #0x10] @ 0207e704
    cmp r4, r3 @ 0207e706
    bne .L_0207e6ea @ 0207e708
.L_0207e70a:
    movs r0, #1 @ 0207e70a
.L_0207e70c:
    pop {r4, r5, r6, pc} @ 0207e70c
.L_0207e70e:
    str r1, [r6, #0x38] @ 0207e70e
    b .L_0207e6e2 @ 0207e710
.L_0207e712:
    movs r0, #0 @ 0207e712
    b .L_0207e70c @ 0207e714
    .byte 0x00, 0x00, 0xff, 0xff, 0xff, 0x0f @ 0207e716
.L_0207e71c:
@ FUN_0207e71c at 0x0207e71c
    push {r4, r5, r6, r7, lr} @ 0207e71c
    mov r7, r8 @ 0207e71e
    push {r7} @ 0207e720
    ldr r6, [r0, #0x34] @ 0207e722
    mov r8, r1 @ 0207e724
    adds r5, r0, #0 @ 0207e726
    cmp r6, r8 @ 0207e728
    bhs .L_0207e734 @ 0207e72a
.L_0207e72c:
    movs r0, #0 @ 0207e72c
.L_0207e72e:
    pop {r2} @ 0207e72e
    mov r8, r2 @ 0207e730
    pop {r4, r5, r6, r7, pc} @ 0207e732
.L_0207e734:
    bl .L_0207e470 @ 0207e734
    cmp r0, #1 @ 0207e738
    bls .L_0207e740 @ 0207e73a
    cmp r6, r0 @ 0207e73c
    bhs .L_0207e72e @ 0207e73e
.L_0207e740:
    ldr r4, [r5, #0x38] @ 0207e740
    cmp r4, #1 @ 0207e742
    bls .L_0207e792 @ 0207e744
.L_0207e746:
    movs r7, #0 @ 0207e746
.L_0207e748:
    adds r0, r5, #0 @ 0207e748
    adds r1, r4, #0 @ 0207e74a
    bl .L_0207e470 @ 0207e74c
    cmp r0, #0 @ 0207e750
    beq .L_0207e76e @ 0207e752
.L_0207e754:
    adds r4, #1 @ 0207e754
    cmp r6, r4 @ 0207e756
    bhs .L_0207e748 @ 0207e758
    cmp r7, #0 @ 0207e75a
    bne .L_0207e796 @ 0207e75c
    movs r4, #2 @ 0207e75e
    adds r0, r5, #0 @ 0207e760
    adds r1, r4, #0 @ 0207e762
    movs r7, #1 @ 0207e764
    bl .L_0207e470 @ 0207e766
    cmp r0, #0 @ 0207e76a
    bne .L_0207e754 @ 0207e76c
.L_0207e76e:
    mov r3, r8 @ 0207e76e
    str r4, [r5, #0x38] @ 0207e770
    cmp r3, #1 @ 0207e772
    bls .L_0207e784 @ 0207e774
    cmp r6, r8 @ 0207e776
    bls .L_0207e784 @ 0207e778
    adds r0, r5, #0 @ 0207e77a
    mov r1, r8 @ 0207e77c
    adds r2, r4, #0 @ 0207e77e
    bl .L_0207e590 @ 0207e780
.L_0207e784:
    adds r0, r5, #0 @ 0207e784
    adds r1, r4, #0 @ 0207e786
    ldr r2, [pc, #0x10] @ 0207e788
    bl .L_0207e590 @ 0207e78a
    adds r0, r4, #0 @ 0207e78e
    b .L_0207e72e @ 0207e790
.L_0207e792:
    movs r4, #2 @ 0207e792
    b .L_0207e746 @ 0207e794
.L_0207e796:
    str r4, [r5, #0x38] @ 0207e796
    b .L_0207e72c @ 0207e798
    .byte 0x00, 0x00, 0xff, 0xff, 0xff, 0x0f @ 0207e79a
.L_0207e7a0:
@ FUN_0207e7a0 at 0x0207e7a0
    push {r4, r5, r6, r7, lr} @ 0207e7a0
    mov r7, r8 @ 0207e7a2
    push {r7} @ 0207e7a4
    ldr r4, [pc, #0x5c] @ 0207e7a6
    add sp, r4 @ 0207e7a8
    adds r4, r0, #0 @ 0207e7aa
    bl .L_0207e71c @ 0207e7ac
    adds r6, r0, #0 @ 0207e7b0
    cmp r0, #0 @ 0207e7b2
    bne .L_0207e7c4 @ 0207e7b4
.L_0207e7b6:
    movs r3, #0x80 @ 0207e7b6
    lsls r3, r3, #2 @ 0207e7b8
    adds r0, r6, #0 @ 0207e7ba
    add sp, r3 @ 0207e7bc
    pop {r2} @ 0207e7be
    mov r8, r2 @ 0207e7c0
    pop {r4, r5, r6, r7, pc} @ 0207e7c2
.L_0207e7c4:
    movs r2, #0x80 @ 0207e7c4
    lsls r2, r2, #2 @ 0207e7c6
    mov r0, sp @ 0207e7c8
    movs r1, #0 @ 0207e7ca
    bl .L_02085970 @ 0207e7cc
    ldr r2, [r4, #0x24] @ 0207e7d0
    mov r8, sp @ 0207e7d2
    cmp r2, #0 @ 0207e7d4
    beq .L_0207e7b6 @ 0207e7d6
    movs r7, #0 @ 0207e7d8
    movs r1, #0 @ 0207e7da
    b .L_0207e7fa @ 0207e7dc
.L_0207e7de:
    subs r3, r6, #2 @ 0207e7de
    muls r2, r3, r2 @ 0207e7e0
    ldr r3, [r4, #0x1c] @ 0207e7e2
    adds r0, r2, r3 @ 0207e7e4
.L_0207e7e6:
    adds r0, r0, r1 @ 0207e7e6
    mov r2, r8 @ 0207e7e8
    movs r1, #1 @ 0207e7ea
    ldr r3, [r5, #0x14] @ 0207e7ec
    blx r3 @ 0207e7ee
    ldr r2, [r4, #0x24] @ 0207e7f0
    adds r1, r7, #1 @ 0207e7f2
    adds r7, r1, #0 @ 0207e7f4
    cmp r2, r1 @ 0207e7f6
    bls .L_0207e7b6 @ 0207e7f8
.L_0207e7fa:
    ldr r5, [r4] @ 0207e7fa
    cmp r6, #1 @ 0207e7fc
    bhi .L_0207e7de @ 0207e7fe
    ldr r0, [r4, #0x10] @ 0207e800
    b .L_0207e7e6 @ 0207e802
    .byte 0x00, 0xfe, 0xff, 0xff @ 0207e804
.L_0207e808:
@ FUN_0207e808 at 0x0207e808
    push {r4, lr} @ 0207e808
    ldr r2, [pc, #0x44] @ 0207e80a
    ldrb r3, [r2, #0x1b] @ 0207e80c
    cmp r3, #0x27 @ 0207e80e
    bls .L_0207e848 @ 0207e810
    ldrb r3, [r2, #0x1b] @ 0207e812
    adds r1, r3, #0 @ 0207e814
    subs r1, #0x28 @ 0207e816
.L_0207e818:
    ldr r3, [pc, #0x34] @ 0207e818
    ldrb r2, [r3, #0x1c] @ 0207e81a
    ldrb r3, [r3, #0x1d] @ 0207e81c
    adds r4, r3, #0 @ 0207e81e
    cmp r1, #0x17 @ 0207e820
    bhi .L_0207e844 @ 0207e822
    cmp r2, #0x3b @ 0207e824
    bhi .L_0207e844 @ 0207e826
    cmp r3, #0x3b @ 0207e828
    bhi .L_0207e844 @ 0207e82a
    movs r0, #0x1f @ 0207e82c
    movs r3, #0x3f @ 0207e82e
    ands r1, r0 @ 0207e830
    ands r2, r3 @ 0207e832
    asrs r3, r4, #1 @ 0207e834
    ands r3, r0 @ 0207e836
    lsls r1, r1, #0xb @ 0207e838
    lsls r2, r2, #5 @ 0207e83a
    orrs r2, r3 @ 0207e83c
    adds r0, r1, #0 @ 0207e83e
    orrs r0, r2 @ 0207e840
    b .L_0207e846 @ 0207e842
.L_0207e844:
    movs r0, #0 @ 0207e844
.L_0207e846:
    pop {r4, pc} @ 0207e846
.L_0207e848:
    ldrb r3, [r2, #0x1b] @ 0207e848
    adds r1, r3, #0 @ 0207e84a
    b .L_0207e818 @ 0207e84c
    .byte 0x00, 0x00, 0x00, 0xf0, 0x7f, 0x02 @ 0207e84e
.L_0207e854:
@ FUN_0207e854 at 0x0207e854
    push {r4, lr} @ 0207e854
    ldr r2, [pc, #0x3c] @ 0207e856
    ldrb r3, [r2, #0x17] @ 0207e858
    adds r1, r3, #0 @ 0207e85a
    ldrb r3, [r2, #0x18] @ 0207e85c
    adds r0, r3, #0 @ 0207e85e
    ldrb r3, [r2, #0x19] @ 0207e860
    adds r4, r3, #0 @ 0207e862
    subs r3, r1, #6 @ 0207e864
    cmp r3, #0x5d @ 0207e866
    bhi .L_0207e890 @ 0207e868
    subs r3, r0, #1 @ 0207e86a
    cmp r3, #0xb @ 0207e86c
    bhi .L_0207e890 @ 0207e86e
    subs r3, r4, #1 @ 0207e870
    cmp r3, #0x1e @ 0207e872
    bhi .L_0207e890 @ 0207e874
    movs r3, #0x7f @ 0207e876
    adds r1, #0x14 @ 0207e878
    ands r1, r3 @ 0207e87a
    movs r3, #0xf @ 0207e87c
    ands r3, r0 @ 0207e87e
    movs r2, #0x1f @ 0207e880
    lsls r1, r1, #9 @ 0207e882
    lsls r3, r3, #5 @ 0207e884
    ands r2, r4 @ 0207e886
    orrs r3, r2 @ 0207e888
    adds r0, r1, #0 @ 0207e88a
    orrs r0, r3 @ 0207e88c
    b .L_0207e892 @ 0207e88e
.L_0207e890:
    movs r0, #0 @ 0207e890
.L_0207e892:
    pop {r4, pc} @ 0207e892
    .byte 0x00, 0xf0, 0x7f, 0x02 @ 0207e894
.L_0207e898:
@ FUN_0207e898 at 0x0207e898
    push {r4, r5, lr} @ 0207e898
    lsls r3, r1, #0x17 @ 0207e89a
    ldr r2, [pc, #0x38] @ 0207e89c
    lsrs r3, r3, #0x1c @ 0207e89e
    adds r5, r3, #0 @ 0207e8a0
    muls r5, r2, r5 @ 0207e8a2
    movs r4, #0x1f @ 0207e8a4
    adds r2, r1, #0 @ 0207e8a6
    ldr r3, [pc, #0x30] @ 0207e8a8
    ands r2, r4 @ 0207e8aa
    muls r3, r2, r3 @ 0207e8ac
    adds r5, r5, r3 @ 0207e8ae
    lsls r3, r0, #0x15 @ 0207e8b0
    lsrs r3, r3, #0x1a @ 0207e8b2
    lsls r2, r3, #4 @ 0207e8b4
    subs r2, r2, r3 @ 0207e8b6
    movs r3, #0xe1 @ 0207e8b8
    ands r4, r0 @ 0207e8ba
    lsls r3, r3, #4 @ 0207e8bc
    lsrs r0, r0, #0xb @ 0207e8be
    muls r3, r0, r3 @ 0207e8c0
    lsls r4, r4, #1 @ 0207e8c2
    adds r4, r4, r3 @ 0207e8c4
    ldr r3, [pc, #0x18] @ 0207e8c6
    lsrs r1, r1, #9 @ 0207e8c8
    muls r3, r1, r3 @ 0207e8ca
    lsls r2, r2, #2 @ 0207e8cc
    adds r2, r2, r4 @ 0207e8ce
    adds r2, r2, r3 @ 0207e8d0
    adds r5, r5, r2 @ 0207e8d2
    adds r0, r5, #0 @ 0207e8d4
    pop {r4, r5, pc} @ 0207e8d6
    .byte 0x6f, 0x20, 0x28, 0x00, 0x80, 0x51, 0x01, 0x00, 0x3e, 0x85, 0xe1, 0x01 @ 0207e8d8
@ FUN_0207e8e4 at 0x0207e8e4
    push {lr} @ 0207e8e4
    ldr r3, [pc, #0x18] @ 0207e8e6
    movs r0, #0 @ 0207e8e8
    ldr r2, [r3, #4] @ 0207e8ea
    movs r3, #0x50 @ 0207e8ec
    strh r3, [r2] @ 0207e8ee
    ldrh r3, [r2] @ 0207e8f0
    movs r2, #0xff @ 0207e8f2
    ands r3, r2 @ 0207e8f4
    cmp r3, #0x50 @ 0207e8f6
    beq .L_0207e8fc @ 0207e8f8
.L_0207e8fa:
    pop {pc} @ 0207e8fa
.L_0207e8fc:
    movs r0, #1 @ 0207e8fc
    b .L_0207e8fa @ 0207e8fe
    .byte 0x7c, 0x4c, 0x0b, 0x02 @ 0207e900
.L_0207e904:
@ FUN_0207e904 at 0x0207e904
    push {r4, lr} @ 0207e904
    ldr r0, [pc, #0x58] @ 0207e906
    ldr r1, [r0, #8] @ 0207e908
    ldrh r3, [r1] @ 0207e90a
    lsls r2, r3, #0x18 @ 0207e90c
    bpl .L_0207e922 @ 0207e90e
    movs r2, #0 @ 0207e910
    b .L_0207e91c @ 0207e912
.L_0207e914:
    ldr r3, [pc, #0x4c] @ 0207e914
    adds r2, #1 @ 0207e916
    cmp r2, r3 @ 0207e918
    beq .L_0207e922 @ 0207e91a
.L_0207e91c:
    ldrh r3, [r1] @ 0207e91c
    lsls r4, r3, #0x18 @ 0207e91e
    bmi .L_0207e914 @ 0207e920
.L_0207e922:
    ldr r1, [r0, #4] @ 0207e922
    movs r3, #0x50 @ 0207e924
    ldrh r2, [r1] @ 0207e926
    tst r2, r3 @ 0207e928
    bne .L_0207e95a @ 0207e92a
    ldr r0, [pc, #0x34] @ 0207e92c
    movs r2, #0 @ 0207e92e
    movs r4, #0x50 @ 0207e930
    b .L_0207e938 @ 0207e932
.L_0207e934:
    cmp r2, r0 @ 0207e934
    beq .L_0207e956 @ 0207e936
.L_0207e938:
    ldrh r3, [r1] @ 0207e938
    adds r2, #1 @ 0207e93a
    tst r3, r4 @ 0207e93c
    beq .L_0207e934 @ 0207e93e
    ldr r3, [pc, #0x24] @ 0207e940
    movs r1, #0 @ 0207e942
    cmp r2, r3 @ 0207e944
    bgt .L_0207e952 @ 0207e946
.L_0207e948:
    movs r3, #1 @ 0207e948
    eors r3, r1 @ 0207e94a
    lsls r3, r3, #0x18 @ 0207e94c
    lsrs r0, r3, #0x18 @ 0207e94e
.L_0207e950:
    pop {r4, pc} @ 0207e950
.L_0207e952:
    movs r1, #1 @ 0207e952
    b .L_0207e948 @ 0207e954
.L_0207e956:
    movs r0, #0 @ 0207e956
    b .L_0207e950 @ 0207e958
.L_0207e95a:
    movs r0, #1 @ 0207e95a
    b .L_0207e950 @ 0207e95c
    .byte 0x00, 0x00, 0x7c, 0x4c, 0x0b, 0x02, 0x80, 0x96, 0x98, 0x00, 0x7f, 0x96, 0x98, 0x00 @ 0207e95e
@ FUN_0207e96c at 0x0207e96c
    push {r4, r5, r6, r7, lr} @ 0207e96c
    mov r7, r8 @ 0207e96e
    push {r7} @ 0207e970
    ldr r4, [pc, #0xf8] @ 0207e972
    adds r6, r1, #0 @ 0207e974
    ldr r1, [r4, #8] @ 0207e976
    mov r8, r0 @ 0207e978
    ldrh r3, [r1] @ 0207e97a
    adds r7, r2, #0 @ 0207e97c
    lsls r0, r3, #0x18 @ 0207e97e
    bpl .L_0207e994 @ 0207e980
    movs r2, #0 @ 0207e982
    b .L_0207e98e @ 0207e984
.L_0207e986:
    ldr r3, [pc, #0xe8] @ 0207e986
    adds r2, #1 @ 0207e988
    cmp r2, r3 @ 0207e98a
    beq .L_0207e994 @ 0207e98c
.L_0207e98e:
    ldrh r3, [r1] @ 0207e98e
    lsls r0, r3, #0x18 @ 0207e990
    bmi .L_0207e986 @ 0207e992
.L_0207e994:
    ldr r1, [r4, #4] @ 0207e994
    movs r3, #0x50 @ 0207e996
    ldrh r2, [r1] @ 0207e998
    tst r2, r3 @ 0207e99a
    bne .L_0207e9b8 @ 0207e99c
    ldr r5, [pc, #0xd0] @ 0207e99e
    movs r2, #0 @ 0207e9a0
    movs r0, #0x50 @ 0207e9a2
    b .L_0207e9aa @ 0207e9a4
.L_0207e9a6:
    cmp r2, r5 @ 0207e9a6
    beq .L_0207ea42 @ 0207e9a8
.L_0207e9aa:
    ldrh r3, [r1] @ 0207e9aa
    adds r2, #1 @ 0207e9ac
    tst r3, r0 @ 0207e9ae
    beq .L_0207e9a6 @ 0207e9b0
    ldr r3, [pc, #0xc0] @ 0207e9b2
    cmp r2, r3 @ 0207e9b4
    bgt .L_0207ea42 @ 0207e9b6
.L_0207e9b8:
    ldr r2, [r4, #0x10] @ 0207e9b8
    cmp r6, #0xff @ 0207e9ba
    bls .L_0207ea4a @ 0207e9bc
    movs r3, #0 @ 0207e9be
.L_0207e9c0:
    strh r3, [r2] @ 0207e9c0
    ldr r1, [r4, #0x14] @ 0207e9c2
    movs r2, #0xff @ 0207e9c4
    mov r3, r8 @ 0207e9c6
    ands r3, r2 @ 0207e9c8
    mov r0, r8 @ 0207e9ca
    strh r3, [r1] @ 0207e9cc
    ldr r1, [r4, #0x18] @ 0207e9ce
    lsrs r3, r0, #8 @ 0207e9d0
    ands r3, r2 @ 0207e9d2
    strh r3, [r1] @ 0207e9d4
    ldr r1, [r4, #0x1c] @ 0207e9d6
    lsrs r3, r0, #0x10 @ 0207e9d8
    ands r3, r2 @ 0207e9da
    strh r3, [r1] @ 0207e9dc
    lsls r3, r0, #4 @ 0207e9de
    movs r2, #0xe0 @ 0207e9e0
    lsrs r3, r3, #0x1c @ 0207e9e2
    orrs r3, r2 @ 0207e9e4
    ldr r1, [r4, #0x20] @ 0207e9e6
    lsls r3, r3, #0x10 @ 0207e9e8
    lsrs r3, r3, #0x10 @ 0207e9ea
    ldr r2, [r4, #8] @ 0207e9ec
    strh r3, [r1] @ 0207e9ee
    movs r3, #0x20 @ 0207e9f0
    mov ip, r7 @ 0207e9f2
    strh r3, [r2] @ 0207e9f4
.L_0207e9f6:
    subs r6, #1 @ 0207e9f6
    blo .L_0207ea68 @ 0207e9f8
    ldr r1, [r4, #4] @ 0207e9fa
    movs r2, #0xff @ 0207e9fc
    ldrh r3, [r1] @ 0207e9fe
    ands r3, r2 @ 0207ea00
    cmp r3, #0x58 @ 0207ea02
    beq .L_0207ea22 @ 0207ea04
    ldr r0, [pc, #0x68] @ 0207ea06
    movs r2, #0 @ 0207ea08
    movs r5, #0xff @ 0207ea0a
    b .L_0207ea12 @ 0207ea0c
.L_0207ea0e:
    cmp r2, r0 @ 0207ea0e
    beq .L_0207ea42 @ 0207ea10
.L_0207ea12:
    ldrh r3, [r1] @ 0207ea12
    adds r2, #1 @ 0207ea14
    ands r3, r5 @ 0207ea16
    cmp r3, #0x58 @ 0207ea18
    bne .L_0207ea0e @ 0207ea1a
    ldr r3, [pc, #0x54] @ 0207ea1c
    cmp r2, r3 @ 0207ea1e
    bgt .L_0207ea42 @ 0207ea20
.L_0207ea22:
    lsls r2, r7, #0x1f @ 0207ea22
    bpl .L_0207ea50 @ 0207ea24
    adds r2, r7, #0 @ 0207ea26
    movs r1, #0xff @ 0207ea28
.L_0207ea2a:
    ldr r3, [r4] @ 0207ea2a
    ldrh r3, [r3] @ 0207ea2c
    strb r3, [r2] @ 0207ea2e
    asrs r3, r3, #8 @ 0207ea30
    strb r3, [r2, #1] @ 0207ea32
    adds r2, #2 @ 0207ea34
    subs r1, #1 @ 0207ea36
    bhs .L_0207ea2a @ 0207ea38
    movs r3, #0x80 @ 0207ea3a
    lsls r3, r3, #2 @ 0207ea3c
    adds r7, r7, r3 @ 0207ea3e
    b .L_0207e9f6 @ 0207ea40
.L_0207ea42:
    movs r0, #0 @ 0207ea42
.L_0207ea44:
    pop {r2} @ 0207ea44
    mov r8, r2 @ 0207ea46
    pop {r4, r5, r6, r7, pc} @ 0207ea48
.L_0207ea4a:
    lsls r3, r6, #0x10 @ 0207ea4a
    lsrs r3, r3, #0x10 @ 0207ea4c
    b .L_0207e9c0 @ 0207ea4e
.L_0207ea50:
    ldr r0, [r4] @ 0207ea50
    mov r2, ip @ 0207ea52
    movs r1, #0xff @ 0207ea54
.L_0207ea56:
    ldrh r3, [r0] @ 0207ea56
    strh r3, [r2] @ 0207ea58
    adds r2, #2 @ 0207ea5a
    subs r1, #1 @ 0207ea5c
    bhs .L_0207ea56 @ 0207ea5e
    movs r0, #0x80 @ 0207ea60
    lsls r0, r0, #2 @ 0207ea62
    add ip, r0 @ 0207ea64
    b .L_0207e9f6 @ 0207ea66
.L_0207ea68:
    movs r0, #1 @ 0207ea68
    b .L_0207ea44 @ 0207ea6a
    .byte 0x7c, 0x4c, 0x0b, 0x02, 0x80, 0x96, 0x98, 0x00, 0x7f, 0x96, 0x98, 0x00 @ 0207ea6c
@ FUN_0207ea78 at 0x0207ea78
    push {r4, r5, r6, r7, lr} @ 0207ea78
    mov r7, sl @ 0207ea7a
    mov r6, r8 @ 0207ea7c
    push {r6, r7} @ 0207ea7e
    ldr r5, [pc, #0x104] @ 0207ea80
    adds r6, r1, #0 @ 0207ea82
    ldr r1, [r5, #8] @ 0207ea84
    mov r8, r0 @ 0207ea86
    ldrh r3, [r1] @ 0207ea88
    adds r7, r2, #0 @ 0207ea8a
    lsls r0, r3, #0x18 @ 0207ea8c
    bpl .L_0207eaa2 @ 0207ea8e
    movs r2, #0 @ 0207ea90
    b .L_0207ea9c @ 0207ea92
.L_0207ea94:
    ldr r3, [pc, #0xf4] @ 0207ea94
    adds r2, #1 @ 0207ea96
    cmp r2, r3 @ 0207ea98
    beq .L_0207eaa2 @ 0207ea9a
.L_0207ea9c:
    ldrh r3, [r1] @ 0207ea9c
    lsls r0, r3, #0x18 @ 0207ea9e
    bmi .L_0207ea94 @ 0207eaa0
.L_0207eaa2:
    ldr r1, [r5, #4] @ 0207eaa2
    movs r3, #0x50 @ 0207eaa4
    ldrh r2, [r1] @ 0207eaa6
    tst r2, r3 @ 0207eaa8
    bne .L_0207eac6 @ 0207eaaa
    ldr r4, [pc, #0xdc] @ 0207eaac
    movs r2, #0 @ 0207eaae
    movs r0, #0x50 @ 0207eab0
    b .L_0207eab8 @ 0207eab2
.L_0207eab4:
    cmp r2, r4 @ 0207eab4
    beq .L_0207eb5a @ 0207eab6
.L_0207eab8:
    ldrh r3, [r1] @ 0207eab8
    adds r2, #1 @ 0207eaba
    tst r3, r0 @ 0207eabc
    beq .L_0207eab4 @ 0207eabe
    ldr r3, [pc, #0xcc] @ 0207eac0
    cmp r2, r3 @ 0207eac2
    bgt .L_0207eb5a @ 0207eac4
.L_0207eac6:
    ldr r2, [r5, #0x10] @ 0207eac6
    cmp r6, #0xff @ 0207eac8
    bls .L_0207eb64 @ 0207eaca
    movs r3, #0 @ 0207eacc
.L_0207eace:
    strh r3, [r2] @ 0207eace
    ldr r1, [r5, #0x14] @ 0207ead0
    movs r2, #0xff @ 0207ead2
    mov r3, r8 @ 0207ead4
    mov r0, r8 @ 0207ead6
    ands r3, r2 @ 0207ead8
    strh r3, [r1] @ 0207eada
    ldr r1, [r5, #0x18] @ 0207eadc
    lsrs r3, r0, #8 @ 0207eade
    ands r3, r2 @ 0207eae0
    strh r3, [r1] @ 0207eae2
    ldr r1, [r5, #0x1c] @ 0207eae4
    lsrs r3, r0, #0x10 @ 0207eae6
    ands r3, r2 @ 0207eae8
    strh r3, [r1] @ 0207eaea
    lsls r3, r0, #4 @ 0207eaec
    movs r2, #0xe0 @ 0207eaee
    lsrs r3, r3, #0x1c @ 0207eaf0
    orrs r3, r2 @ 0207eaf2
    ldr r1, [r5, #0x20] @ 0207eaf4
    lsls r3, r3, #0x10 @ 0207eaf6
    ldr r2, [r5, #8] @ 0207eaf8
    lsrs r3, r3, #0x10 @ 0207eafa
    strh r3, [r1] @ 0207eafc
    movs r3, #0x30 @ 0207eafe
    strh r3, [r2] @ 0207eb00
    ldr r2, [r5, #4] @ 0207eb02
    ldr r5, [r5] @ 0207eb04
    mov ip, r7 @ 0207eb06
    mov r8, r2 @ 0207eb08
    mov sl, r5 @ 0207eb0a
.L_0207eb0c:
    subs r6, #1 @ 0207eb0c
    blo .L_0207eb82 @ 0207eb0e
    mov r1, r8 @ 0207eb10
    ldrh r3, [r1] @ 0207eb12
    movs r2, #0xff @ 0207eb14
    ands r3, r2 @ 0207eb16
    cmp r3, #0x58 @ 0207eb18
    beq .L_0207eb38 @ 0207eb1a
    ldr r0, [pc, #0x6c] @ 0207eb1c
    movs r2, #0 @ 0207eb1e
    movs r4, #0xff @ 0207eb20
    b .L_0207eb28 @ 0207eb22
.L_0207eb24:
    cmp r2, r0 @ 0207eb24
    beq .L_0207eb5a @ 0207eb26
.L_0207eb28:
    ldrh r3, [r1] @ 0207eb28
    adds r2, #1 @ 0207eb2a
    ands r3, r4 @ 0207eb2c
    cmp r3, #0x58 @ 0207eb2e
    bne .L_0207eb24 @ 0207eb30
    ldr r3, [pc, #0x5c] @ 0207eb32
    cmp r2, r3 @ 0207eb34
    bgt .L_0207eb5a @ 0207eb36
.L_0207eb38:
    lsls r3, r7, #0x1f @ 0207eb38
    bpl .L_0207eb6a @ 0207eb3a
    adds r1, r7, #0 @ 0207eb3c
    movs r0, #0xff @ 0207eb3e
    mov r4, sl @ 0207eb40
.L_0207eb42:
    ldrb r3, [r1, #1] @ 0207eb42
    ldrb r2, [r1] @ 0207eb44
    lsls r3, r3, #8 @ 0207eb46
    orrs r2, r3 @ 0207eb48
    adds r1, #2 @ 0207eb4a
    strh r2, [r4] @ 0207eb4c
    subs r0, #1 @ 0207eb4e
    bhs .L_0207eb42 @ 0207eb50
    movs r0, #0x80 @ 0207eb52
    lsls r0, r0, #2 @ 0207eb54
    adds r7, r7, r0 @ 0207eb56
    b .L_0207eb0c @ 0207eb58
.L_0207eb5a:
    movs r0, #0 @ 0207eb5a
.L_0207eb5c:
    pop {r2, r3} @ 0207eb5c
    mov r8, r2 @ 0207eb5e
    mov sl, r3 @ 0207eb60
    pop {r4, r5, r6, r7, pc} @ 0207eb62
.L_0207eb64:
    lsls r3, r6, #0x10 @ 0207eb64
    lsrs r3, r3, #0x10 @ 0207eb66
    b .L_0207eace @ 0207eb68
.L_0207eb6a:
    mov r2, ip @ 0207eb6a
    movs r1, #0xff @ 0207eb6c
    adds r0, r5, #0 @ 0207eb6e
.L_0207eb70:
    ldrh r3, [r2] @ 0207eb70
    adds r2, #2 @ 0207eb72
    strh r3, [r0] @ 0207eb74
    subs r1, #1 @ 0207eb76
    bhs .L_0207eb70 @ 0207eb78
    movs r2, #0x80 @ 0207eb7a
    lsls r2, r2, #2 @ 0207eb7c
    add ip, r2 @ 0207eb7e
    b .L_0207eb0c @ 0207eb80
.L_0207eb82:
    movs r0, #1 @ 0207eb82
    b .L_0207eb5c @ 0207eb84
    .byte 0x00, 0x00, 0x7c, 0x4c, 0x0b, 0x02, 0x80, 0x96, 0x98, 0x00, 0x7f, 0x96, 0x98, 0x00 @ 0207eb86
@ FUN_0207eb94 at 0x0207eb94
    push {lr} @ 0207eb94
    sub sp, #4 @ 0207eb96
    bl .L_0207e904 @ 0207eb98
    add sp, #4 @ 0207eb9c
    pop {pc} @ 0207eb9e
.L_0207eba0:
@ FUN_0207eba0 at 0x0207eba0
    push {r4, r5, r6, lr} @ 0207eba0
    ldr r1, [pc, #0x40] @ 0207eba2
    adds r3, r0, #0 @ 0207eba4
    adds r2, r1, #0 @ 0207eba6
    ldm r3!, {r4, r5, r6} @ 0207eba8
    stm r2!, {r4, r5, r6} @ 0207ebaa
    ldm r3!, {r0, r4, r5} @ 0207ebac
    stm r2!, {r0, r4, r5} @ 0207ebae
    ldm r3!, {r0, r4, r6} @ 0207ebb0
    stm r2!, {r0, r4, r6} @ 0207ebb2
    ldr r1, [r1, #0x14] @ 0207ebb4
    movs r3, #0xff @ 0207ebb6
    ldrh r2, [r1] @ 0207ebb8
    bics r3, r2 @ 0207ebba
    strh r3, [r1] @ 0207ebbc
    ldrh r2, [r1] @ 0207ebbe
    cmp r3, r2 @ 0207ebc0
    beq .L_0207ebc8 @ 0207ebc2
    movs r0, #0 @ 0207ebc4
.L_0207ebc6:
    pop {r4, r5, r6, pc} @ 0207ebc6
.L_0207ebc8:
    ldr r3, [pc, #0x1c] @ 0207ebc8
    strh r3, [r1] @ 0207ebca
    ldrh r2, [r1] @ 0207ebcc
    ldr r3, [pc, #0x1c] @ 0207ebce
    movs r1, #0 @ 0207ebd0
    cmp r2, r3 @ 0207ebd2
    beq .L_0207ebe0 @ 0207ebd4
.L_0207ebd6:
    movs r3, #1 @ 0207ebd6
    eors r3, r1 @ 0207ebd8
    lsls r3, r3, #0x18 @ 0207ebda
    lsrs r0, r3, #0x18 @ 0207ebdc
    b .L_0207ebc6 @ 0207ebde
.L_0207ebe0:
    movs r1, #1 @ 0207ebe0
    b .L_0207ebd6 @ 0207ebe2
    .byte 0x7c, 0x4c, 0x0b, 0x02, 0x55, 0xaa, 0xff, 0xff, 0x55, 0xaa, 0x00, 0x00 @ 0207ebe4
.L_0207ebf0:
@ FUN_0207ebf0 at 0x0207ebf0
    ldrh r0, [r0] @ 0207ebf0
    bx lr @ 0207ebf2
.L_0207ebf4:
@ FUN_0207ebf4 at 0x0207ebf4
    push {r4, lr} @ 0207ebf4
    adds r4, r0, #0 @ 0207ebf6
    ldr r0, [pc, #0x70] @ 0207ebf8
    bl .L_0207ebf0 @ 0207ebfa
    ldr r0, [pc, #0x70] @ 0207ebfe
    bl .L_0207ebf0 @ 0207ec00
    ldr r0, [pc, #0x6c] @ 0207ec04
    bl .L_0207ebf0 @ 0207ec06
    ldr r0, [pc, #0x6c] @ 0207ec0a
    bl .L_0207ebf0 @ 0207ec0c
    ldr r0, [pc, #0x68] @ 0207ec10
    bl .L_0207ebf0 @ 0207ec12
    movs r0, #0x80 @ 0207ec16
    lsls r0, r0, #0x14 @ 0207ec18
    bl .L_0207ebf0 @ 0207ec1a
    ldr r0, [pc, #0x60] @ 0207ec1e
    bl .L_0207ebf0 @ 0207ec20
    movs r3, #0x80 @ 0207ec24
    lsls r3, r3, #0x14 @ 0207ec26
    lsls r0, r4, #1 @ 0207ec28
    adds r0, r0, r3 @ 0207ec2a
    bl .L_0207ebf0 @ 0207ec2c
    ldr r0, [pc, #0x50] @ 0207ec30
    bl .L_0207ebf0 @ 0207ec32
    movs r0, #0x80 @ 0207ec36
    lsls r0, r0, #0x14 @ 0207ec38
    bl .L_0207ebf0 @ 0207ec3a
    movs r3, #0xf @ 0207ec3e
    ands r4, r3 @ 0207ec40
    cmp r4, #4 @ 0207ec42
    beq .L_0207ec50 @ 0207ec44
    movs r0, #0x90 @ 0207ec46
    lsls r0, r0, #0x14 @ 0207ec48
    bl .L_0207ebf0 @ 0207ec4a
.L_0207ec4e:
    pop {r4, pc} @ 0207ec4e
.L_0207ec50:
    ldr r0, [pc, #0x34] @ 0207ec50
    bl .L_0207ebf0 @ 0207ec52
    ldr r0, [pc, #0x30] @ 0207ec56
    bl .L_0207ebf0 @ 0207ec58
    ldr r0, [pc, #0x2c] @ 0207ec5c
    bl .L_0207ebf0 @ 0207ec5e
    ldr r0, [pc, #0x28] @ 0207ec62
    bl .L_0207ebf0 @ 0207ec64
    b .L_0207ec4e @ 0207ec68
    .byte 0x00, 0x00, 0x02, 0x00, 0xe0, 0x08, 0x0e, 0x00, 0x00, 0x08, 0xfc, 0x1f, 0x80, 0x08, 0x4a, 0x10 @ 0207ec6a
    .byte 0x00, 0x08, 0x12, 0x06, 0x80, 0x08, 0x66, 0x1b, 0x80, 0x08, 0x0e, 0x08, 0x00, 0x08, 0xe4, 0x01 @ 0207ec7a
    .byte 0x00, 0x08, 0x88, 0x01, 0x00, 0x08 @ 0207ec8a
.L_0207ec90:
@ FUN_0207ec90 at 0x0207ec90
    ldr r3, [pc, #0xc] @ 0207ec90
    ldr r2, [pc, #0x10] @ 0207ec92
    strh r2, [r3] @ 0207ec94
    strh r2, [r3] @ 0207ec96
    strh r0, [r3] @ 0207ec98
    strh r0, [r3] @ 0207ec9a
    bx lr @ 0207ec9c
    .byte 0x00, 0x00, 0xfe, 0xff, 0xff, 0x09, 0x5a, 0xa5, 0xff, 0xff @ 0207ec9e
.L_0207eca8:
@ FUN_0207eca8 at 0x0207eca8
    push {r4, r5, r6, lr} @ 0207eca8
    movs r2, #0 @ 0207ecaa
    strb r2, [r1] @ 0207ecac
    ldrb r3, [r0] @ 0207ecae
    adds r4, r1, #0 @ 0207ecb0
    cmp r3, #0xe5 @ 0207ecb2
    beq .L_0207ecfe @ 0207ecb4
    cmp r3, #0x2e @ 0207ecb6
    beq .L_0207ed0a @ 0207ecb8
    movs r1, #0 @ 0207ecba
.L_0207ecbc:
    ldrb r3, [r1, r0] @ 0207ecbc
    adds r2, r1, #0 @ 0207ecbe
    cmp r3, #0x20 @ 0207ecc0
    beq .L_0207ecce @ 0207ecc2
    adds r1, r2, #1 @ 0207ecc4
    strb r3, [r2, r4] @ 0207ecc6
    cmp r1, #8 @ 0207ecc8
    bne .L_0207ecbc @ 0207ecca
    movs r2, #8 @ 0207eccc
.L_0207ecce:
    ldrb r3, [r0, #8] @ 0207ecce
    adds r6, r0, #0 @ 0207ecd0
    adds r6, #8 @ 0207ecd2
    cmp r3, #0x20 @ 0207ecd4
    beq .L_0207ecfa @ 0207ecd6
    movs r3, #0x2e @ 0207ecd8
    strb r3, [r4, r2] @ 0207ecda
    adds r3, r4, r1 @ 0207ecdc
    adds r5, r1, #1 @ 0207ecde
    adds r0, r6, #0 @ 0207ece0
    adds r3, #1 @ 0207ece2
    adds r1, #4 @ 0207ece4
.L_0207ece6:
    ldrb r2, [r0] @ 0207ece6
    cmp r2, #0x20 @ 0207ece8
    beq .L_0207ecf8 @ 0207ecea
    adds r5, #1 @ 0207ecec
    strb r2, [r3] @ 0207ecee
    adds r0, #1 @ 0207ecf0
    adds r3, #1 @ 0207ecf2
    cmp r5, r1 @ 0207ecf4
    bne .L_0207ece6 @ 0207ecf6
.L_0207ecf8:
    adds r2, r5, #0 @ 0207ecf8
.L_0207ecfa:
    movs r3, #0 @ 0207ecfa
    strb r3, [r4, r2] @ 0207ecfc
.L_0207ecfe:
    ldrb r3, [r4] @ 0207ecfe
    movs r0, #0 @ 0207ed00
    cmp r3, #0 @ 0207ed02
    beq .L_0207ed08 @ 0207ed04
    movs r0, #1 @ 0207ed06
.L_0207ed08:
    pop {r4, r5, r6, pc} @ 0207ed08
.L_0207ed0a:
    strb r3, [r1] @ 0207ed0a
    ldrb r0, [r0, #1] @ 0207ed0c
    cmp r0, #0x2e @ 0207ed0e
    beq .L_0207ed16 @ 0207ed10
    strb r2, [r1, #1] @ 0207ed12
    b .L_0207ecfe @ 0207ed14
.L_0207ed16:
    strb r0, [r1, #1] @ 0207ed16
    strb r2, [r1, #2] @ 0207ed18
    b .L_0207ecfe @ 0207ed1a
.L_0207ed1c:
@ FUN_0207ed1c at 0x0207ed1c
    ldrb r3, [r0, #0x1b] @ 0207ed1c
    ldrb r1, [r0, #0x1a] @ 0207ed1e
    lsls r3, r3, #8 @ 0207ed20
    orrs r1, r3 @ 0207ed22
    ldrb r3, [r0, #0x15] @ 0207ed24
    ldrb r2, [r0, #0x14] @ 0207ed26
    lsls r3, r3, #8 @ 0207ed28
    orrs r2, r3 @ 0207ed2a
    lsls r2, r2, #0x10 @ 0207ed2c
    orrs r1, r2 @ 0207ed2e
    adds r0, r1, #0 @ 0207ed30
    bx lr @ 0207ed32
.L_0207ed34:
@ FUN_0207ed34 at 0x0207ed34
    push {r4, r5, r6, lr} @ 0207ed34
    movs r3, #0 @ 0207ed36
    str r3, [r1, #0x20] @ 0207ed38
    str r3, [r1, #0x24] @ 0207ed3a
    str r3, [r1, #0x28] @ 0207ed3c
    adds r2, r1, #0 @ 0207ed3e
    adds r3, r1, #0 @ 0207ed40
    adds r4, r1, #0 @ 0207ed42
    adds r2, #0x2c @ 0207ed44
    adds r3, #0x20 @ 0207ed46
    adds r6, r0, #0 @ 0207ed48
    ldm r3!, {r0, r1, r5} @ 0207ed4a
    stm r2!, {r0, r1, r5} @ 0207ed4c
    adds r0, r4, #0 @ 0207ed4e
    movs r2, #0x80 @ 0207ed50
    lsls r2, r2, #1 @ 0207ed52
    movs r1, #0 @ 0207ed54
    adds r0, #0x38 @ 0207ed56
    bl .L_02085970 @ 0207ed58
    movs r5, #0x2e @ 0207ed5c
    movs r3, #0x38 @ 0207ed5e
    strb r5, [r4, r3] @ 0207ed60
    adds r0, r4, #0 @ 0207ed62
    movs r1, #0 @ 0207ed64
    movs r2, #0x20 @ 0207ed66
    bl .L_02085970 @ 0207ed68
    adds r0, r4, #0 @ 0207ed6c
    movs r1, #0x20 @ 0207ed6e
    movs r2, #0xb @ 0207ed70
    bl .L_02085970 @ 0207ed72
    movs r3, #0x10 @ 0207ed76
    strb r5, [r4] @ 0207ed78
    strb r3, [r4, #0xb] @ 0207ed7a
    ldr r3, [r6, #0x14] @ 0207ed7c
    movs r0, #1 @ 0207ed7e
    strb r3, [r4, #0x1a] @ 0207ed80
    lsrs r3, r3, #8 @ 0207ed82
    strb r3, [r4, #0x1b] @ 0207ed84
    ldrh r3, [r6, #0x16] @ 0207ed86
    strb r3, [r4, #0x14] @ 0207ed88
    lsrs r3, r3, #8 @ 0207ed8a
    strb r3, [r4, #0x15] @ 0207ed8c
    pop {r4, r5, r6, pc} @ 0207ed8e
.L_0207ed90:
@ FUN_0207ed90 at 0x0207ed90
    push {r4, r5, r6, r7, lr} @ 0207ed90
    adds r4, r1, #0 @ 0207ed92
    ldr r3, [r4, #8] @ 0207ed94
    ldr r5, [r1] @ 0207ed96
    adds r3, #1 @ 0207ed98
    sub sp, #4 @ 0207ed9a
    adds r6, r0, #0 @ 0207ed9c
    adds r7, r2, #0 @ 0207ed9e
    ldr r1, [r1, #4] @ 0207eda0
    cmp r3, #0x10 @ 0207eda2
    beq .L_0207edb2 @ 0207eda4
.L_0207eda6:
    str r5, [r4] @ 0207eda6
    str r1, [r4, #4] @ 0207eda8
    str r3, [r4, #8] @ 0207edaa
    movs r0, #1 @ 0207edac
.L_0207edae:
    add sp, #4 @ 0207edae
    pop {r4, r5, r6, r7, pc} @ 0207edb0
.L_0207edb2:
    ldr r3, [r0, #0x24] @ 0207edb2
    adds r1, #1 @ 0207edb4
    cmp r1, r3 @ 0207edb6
    beq .L_0207edc2 @ 0207edb8
    cmp r5, #0 @ 0207edba
    beq .L_0207edc6 @ 0207edbc
.L_0207edbe:
    movs r3, #0 @ 0207edbe
    b .L_0207eda6 @ 0207edc0
.L_0207edc2:
    cmp r5, #0 @ 0207edc2
    bne .L_0207edd4 @ 0207edc4
.L_0207edc6:
    ldr r3, [r6, #0x1c] @ 0207edc6
    ldr r2, [r6, #0x10] @ 0207edc8
    subs r3, r3, r2 @ 0207edca
    cmp r1, r3 @ 0207edcc
    bne .L_0207edbe @ 0207edce
.L_0207edd0:
    movs r0, #0 @ 0207edd0
    b .L_0207edae @ 0207edd2
.L_0207edd4:
    adds r1, r5, #0 @ 0207edd4
    bl .L_0207e470 @ 0207edd6
    ldr r3, [pc, #0x20] @ 0207edda
    cmp r0, r3 @ 0207eddc
    beq .L_0207ede8 @ 0207edde
.L_0207ede0:
    adds r5, r0, #0 @ 0207ede0
    movs r1, #0 @ 0207ede2
    movs r3, #0 @ 0207ede4
    b .L_0207eda6 @ 0207ede6
.L_0207ede8:
    cmp r7, #0 @ 0207ede8
    beq .L_0207edd0 @ 0207edea
    adds r0, r6, #0 @ 0207edec
    adds r1, r5, #0 @ 0207edee
    bl .L_0207e7a0 @ 0207edf0
    cmp r0, #0 @ 0207edf4
    bne .L_0207ede0 @ 0207edf6
    movs r0, #0 @ 0207edf8
    b .L_0207edae @ 0207edfa
    .byte 0xff, 0xff, 0xff, 0x0f @ 0207edfc
.L_0207ee00:
@ FUN_0207ee00 at 0x0207ee00
    push {r4, r5, r6, r7, lr} @ 0207ee00
    mov r7, fp @ 0207ee02
    mov r6, sl @ 0207ee04
    mov r5, sb @ 0207ee06
    mov r4, r8 @ 0207ee08
    push {r4, r5, r6, r7} @ 0207ee0a
    sub sp, #0x5c @ 0207ee0c
    mov fp, r1 @ 0207ee0e
    adds r4, r0, #0 @ 0207ee10
    movs r0, #0x2c @ 0207ee12
    add r0, fp @ 0207ee14
    add r6, sp, #0x40 @ 0207ee16
    adds r3, r0, #0 @ 0207ee18
    adds r2, r6, #0 @ 0207ee1a
    ldm r3!, {r1, r5, r7} @ 0207ee1c
    stm r2!, {r1, r5, r7} @ 0207ee1e
    mov r8, r0 @ 0207ee20
    ldr r0, [sp, #0x40] @ 0207ee22
    mov sb, r0 @ 0207ee24
    cmp r0, #0 @ 0207ee26
    bne .L_0207ee2e @ 0207ee28
    ldr r1, [r4, #0x14] @ 0207ee2a
    mov sb, r1 @ 0207ee2c
.L_0207ee2e:
    mov r3, sp @ 0207ee2e
    adds r3, #0x4c @ 0207ee30
    mov r2, sb @ 0207ee32
    str r2, [sp, #0x40] @ 0207ee34
    str r3, [sp, #0xc] @ 0207ee36
    adds r2, r3, #0 @ 0207ee38
    adds r3, r6, #0 @ 0207ee3a
    ldm r3!, {r0, r5, r7} @ 0207ee3c
    stm r2!, {r0, r5, r7} @ 0207ee3e
    mov r1, fp @ 0207ee40
    ldr r3, [pc, #0x178] @ 0207ee42
    movs r2, #0 @ 0207ee44
    adds r1, #0x38 @ 0207ee46
    str r1, [sp, #0x14] @ 0207ee48
    str r2, [sp, #0x1c] @ 0207ee4a
    str r2, [sp, #0x18] @ 0207ee4c
    add r5, sp, #0x20 @ 0207ee4e
    str r3, [sp, #0x10] @ 0207ee50
.L_0207ee52:
    adds r0, r4, #0 @ 0207ee52
    add r1, sp, #0x4c @ 0207ee54
    movs r2, #0 @ 0207ee56
    bl .L_0207ed90 @ 0207ee58
    movs r7, #0 @ 0207ee5c
    mov sl, r7 @ 0207ee5e
    cmp r0, #0 @ 0207ee60
    bne .L_0207ee68 @ 0207ee62
    movs r0, #1 @ 0207ee64
    mov sl, r0 @ 0207ee66
.L_0207ee68:
    ldr r2, [sp, #0x4c] @ 0207ee68
    ldr r0, [r4, #4] @ 0207ee6a
    cmp r2, #1 @ 0207ee6c
    bhi .L_0207ee72 @ 0207ee6e
    b .L_0207ef66 @ 0207ee70
.L_0207ee72:
    ldr r3, [r4, #0x24] @ 0207ee72
    subs r2, #2 @ 0207ee74
    muls r2, r3, r2 @ 0207ee76
    ldr r3, [r4, #0x1c] @ 0207ee78
    adds r3, r2, r3 @ 0207ee7a
.L_0207ee7c:
    ldr r2, [sp, #0x50] @ 0207ee7c
    movs r1, #0x20 @ 0207ee7e
    adds r2, r3, r2 @ 0207ee80
    ldr r3, [sp, #0x54] @ 0207ee82
    str r1, [sp] @ 0207ee84
    lsls r3, r3, #5 @ 0207ee86
    adds r1, r5, #0 @ 0207ee88
    bl .L_0207d06c @ 0207ee8a
    ldrb r3, [r5, #0xb] @ 0207ee8e
    cmp r3, #0xf @ 0207ee90
    beq .L_0207eee6 @ 0207ee92
    lsls r7, r3, #0x1c @ 0207ee94
    bmi .L_0207eed0 @ 0207ee96
    ldrb r3, [r5] @ 0207ee98
    cmp r3, #0 @ 0207ee9a
    beq .L_0207eed6 @ 0207ee9c
    cmp r3, #0xe5 @ 0207ee9e
    beq .L_0207eed0 @ 0207eea0
    cmp r3, #0x20 @ 0207eea2
    bls .L_0207eed0 @ 0207eea4
    ldr r0, [sp, #0x18] @ 0207eea6
    cmp r0, #0 @ 0207eea8
    beq .L_0207ef80 @ 0207eeaa
    movs r1, #1 @ 0207eeac
    movs r0, #1 @ 0207eeae
    b .L_0207eec6 @ 0207eeb0
.L_0207eeb2:
    movs r2, #0x80 @ 0207eeb2
.L_0207eeb4:
    lsrs r3, r3, #1 @ 0207eeb4
    adds r3, r2, r3 @ 0207eeb6
    ldrb r2, [r1, r5] @ 0207eeb8
    adds r1, #1 @ 0207eeba
    adds r3, r3, r2 @ 0207eebc
    lsls r3, r3, #0x18 @ 0207eebe
    lsrs r3, r3, #0x18 @ 0207eec0
    cmp r1, #0xb @ 0207eec2
    beq .L_0207ef74 @ 0207eec4
.L_0207eec6:
    tst r3, r0 @ 0207eec6
    bne .L_0207eeb2 @ 0207eec8
    movs r2, #0 @ 0207eeca
    b .L_0207eeb4 @ 0207eecc
.L_0207eece:
    str r3, [sp, #0x1c] @ 0207eece
.L_0207eed0:
    mov r2, sl @ 0207eed0
    cmp r2, #0 @ 0207eed2
    beq .L_0207ee52 @ 0207eed4
.L_0207eed6:
    movs r0, #0 @ 0207eed6
.L_0207eed8:
    add sp, #0x5c @ 0207eed8
    pop {r2, r3, r4, r5} @ 0207eeda
    mov r8, r2 @ 0207eedc
    mov sb, r3 @ 0207eede
    mov sl, r4 @ 0207eee0
    mov fp, r5 @ 0207eee2
    pop {r4, r5, r6, r7, pc} @ 0207eee4
.L_0207eee6:
    ldrb r1, [r5] @ 0207eee6
    lsls r3, r1, #0x18 @ 0207eee8
    mov ip, r1 @ 0207eeea
    cmp r3, #0 @ 0207eeec
    blt .L_0207ef4c @ 0207eeee
    movs r2, #0x40 @ 0207eef0
    tst r1, r2 @ 0207eef2
    beq .L_0207ef50 @ 0207eef4
    ldr r3, [sp, #0xc] @ 0207eef6
    adds r2, r6, #0 @ 0207eef8
    ldm r3!, {r0, r1, r7} @ 0207eefa
    stm r2!, {r0, r1, r7} @ 0207eefc
    ldr r2, [sp, #0x40] @ 0207eefe
    movs r3, #0x40 @ 0207ef00
    mov sb, r2 @ 0207ef02
    mov r2, ip @ 0207ef04
    bics r2, r3 @ 0207ef06
    lsls r3, r2, #1 @ 0207ef08
    adds r3, r3, r2 @ 0207ef0a
    lsls r3, r3, #2 @ 0207ef0c
    ldr r7, [sp, #0x14] @ 0207ef0e
    adds r3, r3, r2 @ 0207ef10
    movs r2, #0 @ 0207ef12
    strb r2, [r3, r7] @ 0207ef14
    ldrb r0, [r5, #0xd] @ 0207ef16
    movs r1, #1 @ 0207ef18
    str r0, [sp, #0x1c] @ 0207ef1a
    str r1, [sp, #0x18] @ 0207ef1c
.L_0207ef1e:
    ldrb r3, [r5] @ 0207ef1e
    movs r2, #0x40 @ 0207ef20
    bics r3, r2 @ 0207ef22
    lsls r2, r3, #1 @ 0207ef24
    adds r2, r2, r3 @ 0207ef26
    lsls r2, r2, #2 @ 0207ef28
    adds r2, r2, r3 @ 0207ef2a
    ldr r3, [sp, #0x14] @ 0207ef2c
    ldr r1, [pc, #0x90] @ 0207ef2e
    adds r2, r3, r2 @ 0207ef30
    ldr r0, [sp, #0x10] @ 0207ef32
    subs r2, #0xd @ 0207ef34
.L_0207ef36:
    ldm r1!, {r3} @ 0207ef36
    ldrb r3, [r5, r3] @ 0207ef38
    strb r3, [r2] @ 0207ef3a
    adds r2, #1 @ 0207ef3c
    cmp r1, r0 @ 0207ef3e
    bne .L_0207ef36 @ 0207ef40
    mov r2, sl @ 0207ef42
    cmp r2, #0 @ 0207ef44
    bne .L_0207ef4a @ 0207ef46
    b .L_0207ee52 @ 0207ef48
.L_0207ef4a:
    b .L_0207eed6 @ 0207ef4a
.L_0207ef4c:
    movs r2, #0 @ 0207ef4c
    str r2, [sp, #0x18] @ 0207ef4e
.L_0207ef50:
    ldrb r3, [r5, #0xd] @ 0207ef50
    ldr r7, [sp, #0x1c] @ 0207ef52
    cmp r3, r7 @ 0207ef54
    beq .L_0207ef6a @ 0207ef56
    movs r0, #0 @ 0207ef58
    mov r2, sl @ 0207ef5a
    str r0, [sp, #0x18] @ 0207ef5c
    cmp r2, #0 @ 0207ef5e
    bne .L_0207ef64 @ 0207ef60
    b .L_0207ee52 @ 0207ef62
.L_0207ef64:
    b .L_0207eed6 @ 0207ef64
.L_0207ef66:
    ldr r3, [r4, #0x10] @ 0207ef66
    b .L_0207ee7c @ 0207ef68
.L_0207ef6a:
    ldr r1, [sp, #0x18] @ 0207ef6a
    cmp r1, #0 @ 0207ef6c
    beq .L_0207eece @ 0207ef6e
    str r3, [sp, #0x1c] @ 0207ef70
    b .L_0207ef1e @ 0207ef72
.L_0207ef74:
    ldr r1, [sp, #0x1c] @ 0207ef74
    cmp r3, r1 @ 0207ef76
    beq .L_0207ef94 @ 0207ef78
    ldr r2, [sp, #0x14] @ 0207ef7a
    movs r3, #0 @ 0207ef7c
    strb r3, [r2] @ 0207ef7e
.L_0207ef80:
    ldr r3, [sp, #0xc] @ 0207ef80
    adds r2, r6, #0 @ 0207ef82
    ldm r3!, {r0, r4, r7} @ 0207ef84
    stm r2!, {r0, r4, r7} @ 0207ef86
    ldr r1, [sp, #0x40] @ 0207ef88
    adds r0, r5, #0 @ 0207ef8a
    mov sb, r1 @ 0207ef8c
    ldr r1, [sp, #0x14] @ 0207ef8e
    bl .L_0207eca8 @ 0207ef90
.L_0207ef94:
    mov r0, sl @ 0207ef94
    cmp r0, #0 @ 0207ef96
    bne .L_0207eed6 @ 0207ef98
    mov r3, sb @ 0207ef9a
    str r3, [sp, #0x40] @ 0207ef9c
    mov r3, fp @ 0207ef9e
    adds r3, #0x20 @ 0207efa0
    ldm r6!, {r0, r4, r7} @ 0207efa2
    stm r3!, {r0, r4, r7} @ 0207efa4
    ldr r3, [sp, #0xc] @ 0207efa6
    mov r2, r8 @ 0207efa8
    ldm r3!, {r1, r4, r7} @ 0207efaa
    stm r2!, {r1, r4, r7} @ 0207efac
    mov r0, fp @ 0207efae
    adds r1, r5, #0 @ 0207efb0
    movs r2, #0x20 @ 0207efb2
    bl .L_02085988 @ 0207efb4
    movs r0, #1 @ 0207efb8
    b .L_0207eed8 @ 0207efba
    .byte 0x7c, 0xee, 0x08, 0x02, 0x48, 0xee, 0x08, 0x02 @ 0207efbc
.L_0207efc4:
@ FUN_0207efc4 at 0x0207efc4
    push {r4, r5, r6, lr} @ 0207efc4
    movs r3, #0 @ 0207efc6
    str r3, [r1, #0x24] @ 0207efc8
    movs r3, #1 @ 0207efca
    negs r3, r3 @ 0207efcc
    str r2, [r1, #0x20] @ 0207efce
    str r3, [r1, #0x28] @ 0207efd0
    adds r2, r1, #0 @ 0207efd2
    adds r3, r1, #0 @ 0207efd4
    adds r2, #0x2c @ 0207efd6
    adds r3, #0x20 @ 0207efd8
    ldm r3!, {r4, r5, r6} @ 0207efda
    stm r2!, {r4, r5, r6} @ 0207efdc
    bl .L_0207ee00 @ 0207efde
    pop {r4, r5, r6, pc} @ 0207efe2
.L_0207efe4:
@ FUN_0207efe4 at 0x0207efe4
    push {r4, r5, r6, r7, lr} @ 0207efe4
    mov r7, sl @ 0207efe6
    mov r6, r8 @ 0207efe8
    push {r6, r7} @ 0207efea
    mov r8, r0 @ 0207efec
    adds r7, r1, #0 @ 0207efee
    adds r0, r1, #0 @ 0207eff0
    movs r1, #0x80 @ 0207eff2
    sub sp, #0x14c @ 0207eff4
    lsls r1, r1, #1 @ 0207eff6
    adds r5, r2, #0 @ 0207eff8
    bl .L_020859b0 @ 0207effa
    adds r4, r0, #0 @ 0207effe
    cmp r0, #0xff @ 0207f000
    bls .L_0207f010 @ 0207f002
.L_0207f004:
    movs r0, #0 @ 0207f004
.L_0207f006:
    add sp, #0x14c @ 0207f006
    pop {r2, r3} @ 0207f008
    mov r8, r2 @ 0207f00a
    mov sl, r3 @ 0207f00c
    pop {r4, r5, r6, r7, pc} @ 0207f00e
.L_0207f010:
    mov r0, r8 @ 0207f010
    mov r1, sp @ 0207f012
    adds r2, r5, #0 @ 0207f014
    mov r6, sp @ 0207f016
    bl .L_0207efc4 @ 0207f018
    cmp r0, #0 @ 0207f01c
    beq .L_0207f004 @ 0207f01e
    ldr r5, [pc, #0x54] @ 0207f020
    add r3, sp, #0x38 @ 0207f022
    mov sl, r3 @ 0207f024
    add r5, sp @ 0207f026
    b .L_0207f04a @ 0207f028
.L_0207f02a:
    adds r1, r5, #0 @ 0207f02a
    adds r0, r6, #0 @ 0207f02c
    bl .L_0207eca8 @ 0207f02e
    adds r0, r5, #0 @ 0207f032
    movs r1, #0xd @ 0207f034
    bl .L_020859b0 @ 0207f036
    cmp r4, r0 @ 0207f03a
    beq .L_0207f068 @ 0207f03c
.L_0207f03e:
    mov r0, r8 @ 0207f03e
    adds r1, r6, #0 @ 0207f040
    bl .L_0207ee00 @ 0207f042
    cmp r0, #0 @ 0207f046
    beq .L_0207f004 @ 0207f048
.L_0207f04a:
    movs r1, #0x80 @ 0207f04a
    mov r0, sl @ 0207f04c
    lsls r1, r1, #1 @ 0207f04e
    bl .L_020859b0 @ 0207f050
    cmp r4, r0 @ 0207f054
    bne .L_0207f02a @ 0207f056
    mov r0, sl @ 0207f058
    adds r1, r7, #0 @ 0207f05a
    bl .L_020859b8 @ 0207f05c
    cmp r0, #0 @ 0207f060
    bne .L_0207f02a @ 0207f062
    movs r0, #1 @ 0207f064
    b .L_0207f006 @ 0207f066
.L_0207f068:
    adds r0, r5, #0 @ 0207f068
    adds r1, r7, #0 @ 0207f06a
    bl .L_020859b8 @ 0207f06c
    cmp r0, #0 @ 0207f070
    bne .L_0207f03e @ 0207f072
    movs r0, #1 @ 0207f074
    b .L_0207f006 @ 0207f076
    .byte 0x3b, 0x01, 0x00, 0x00 @ 0207f078
.L_0207f07c:
@ FUN_0207f07c at 0x0207f07c
    push {r4, r5, r6, r7, lr} @ 0207f07c
    mov r7, fp @ 0207f07e
    mov r6, sl @ 0207f080
    mov r5, sb @ 0207f082
    mov r4, r8 @ 0207f084
    push {r4, r5, r6, r7} @ 0207f086
    sub sp, #0x1c @ 0207f088
    mov sl, r0 @ 0207f08a
    mov r8, r1 @ 0207f08c
    adds r4, r2, #0 @ 0207f08e
    str r3, [sp, #4] @ 0207f090
    cmp r3, #0 @ 0207f092
    bne .L_0207f098 @ 0207f094
    b .L_0207f1dc @ 0207f096
.L_0207f098:
    ldrb r3, [r4] @ 0207f098
    cmp r3, #0x2f @ 0207f09a
    beq .L_0207f16c @ 0207f09c
    mov r2, sl @ 0207f09e
    ldr r5, [r2, #0x3c] @ 0207f0a0
    adds r7, r4, #0 @ 0207f0a2
    movs r4, #0 @ 0207f0a4
.L_0207f0a6:
    mov r2, sl @ 0207f0a6
    ldr r3, [r2, #0x14] @ 0207f0a8
    cmp r5, r3 @ 0207f0aa
    beq .L_0207f182 @ 0207f0ac
.L_0207f0ae:
    cmp r4, #0 @ 0207f0ae
    beq .L_0207f0b4 @ 0207f0b0
    b .L_0207f1aa @ 0207f0b2
.L_0207f0b4:
    mov r3, r8 @ 0207f0b4
    movs r2, #0xb @ 0207f0b6
    adds r3, #0x38 @ 0207f0b8
    add r2, sp @ 0207f0ba
    str r3, [sp] @ 0207f0bc
    mov fp, r2 @ 0207f0be
.L_0207f0c0:
    adds r0, r7, #0 @ 0207f0c0
    movs r1, #0x2f @ 0207f0c2
    bl .L_02085958 @ 0207f0c4
    mov sb, r0 @ 0207f0c8
    cmp r0, #0 @ 0207f0ca
    bne .L_0207f0d0 @ 0207f0cc
    b .L_0207f1f4 @ 0207f0ce
.L_0207f0d0:
    subs r6, r0, r7 @ 0207f0d0
.L_0207f0d2:
    movs r3, #0x80 @ 0207f0d2
    lsls r3, r3, #1 @ 0207f0d4
    cmp r6, r3 @ 0207f0d6
    bhi .L_0207f15c @ 0207f0d8
    adds r2, r5, #0 @ 0207f0da
    mov r0, sl @ 0207f0dc
    mov r1, r8 @ 0207f0de
    bl .L_0207efc4 @ 0207f0e0
    adds r5, r0, #0 @ 0207f0e4
    cmp r0, #0 @ 0207f0e6
    bne .L_0207f128 @ 0207f0e8
    b .L_0207f15c @ 0207f0ea
.L_0207f0ec:
    movs r4, #0 @ 0207f0ec
.L_0207f0ee:
    mov r1, fp @ 0207f0ee
    mov r0, r8 @ 0207f0f0
    bl .L_0207eca8 @ 0207f0f2
    mov r0, fp @ 0207f0f6
    movs r1, #0xd @ 0207f0f8
    bl .L_020859b0 @ 0207f0fa
    cmp r6, r0 @ 0207f0fe
    beq .L_0207f14a @ 0207f100
.L_0207f102:
    cmp r4, #0 @ 0207f102
    beq .L_0207f116 @ 0207f104
.L_0207f106:
    mov r2, r8 @ 0207f106
    ldrb r3, [r2, #0xb] @ 0207f108
    lsls r2, r3, #0x1b @ 0207f10a
    bmi .L_0207f120 @ 0207f10c
    mov r3, sb @ 0207f10e
    cmp r3, #0 @ 0207f110
    beq .L_0207f120 @ 0207f112
    movs r4, #0 @ 0207f114
.L_0207f116:
    mov r0, sl @ 0207f116
    mov r1, r8 @ 0207f118
    bl .L_0207ee00 @ 0207f11a
    adds r5, r0, #0 @ 0207f11e
.L_0207f120:
    cmp r5, #0 @ 0207f120
    beq .L_0207f15c @ 0207f122
    cmp r4, #0 @ 0207f124
    bne .L_0207f19e @ 0207f126
.L_0207f128:
    movs r1, #0x80 @ 0207f128
    ldr r0, [sp] @ 0207f12a
    lsls r1, r1, #1 @ 0207f12c
    bl .L_020859b0 @ 0207f12e
    cmp r6, r0 @ 0207f132
    bne .L_0207f0ec @ 0207f134
    ldr r0, [sp] @ 0207f136
    adds r1, r7, #0 @ 0207f138
    adds r2, r6, #0 @ 0207f13a
    movs r4, #0 @ 0207f13c
    bl .L_020859c0 @ 0207f13e
    cmp r0, #0 @ 0207f142
    bne .L_0207f0ee @ 0207f144
    movs r4, #1 @ 0207f146
    b .L_0207f0ee @ 0207f148
.L_0207f14a:
    mov r0, fp @ 0207f14a
    adds r1, r7, #0 @ 0207f14c
    adds r2, r6, #0 @ 0207f14e
    bl .L_020859c0 @ 0207f150
    cmp r0, #0 @ 0207f154
    bne .L_0207f102 @ 0207f156
    movs r4, #1 @ 0207f158
    b .L_0207f106 @ 0207f15a
.L_0207f15c:
    movs r0, #0 @ 0207f15c
.L_0207f15e:
    add sp, #0x1c @ 0207f15e
    pop {r2, r3, r4, r5} @ 0207f160
    mov r8, r2 @ 0207f162
    mov sb, r3 @ 0207f164
    mov sl, r4 @ 0207f166
    mov fp, r5 @ 0207f168
    pop {r4, r5, r6, r7, pc} @ 0207f16a
.L_0207f16c:
    mov r2, sl @ 0207f16c
    ldr r5, [r2, #0x14] @ 0207f16e
    adds r7, r4, #0 @ 0207f170
.L_0207f172:
    adds r7, #1 @ 0207f172
    ldrb r3, [r7] @ 0207f174
    cmp r3, #0x2f @ 0207f176
    beq .L_0207f172 @ 0207f178
    ldr r3, [sp, #4] @ 0207f17a
    cmp r3, r7 @ 0207f17c
    bls .L_0207f1e8 @ 0207f17e
    movs r4, #0 @ 0207f180
.L_0207f182:
    ldr r0, [pc, #0x80] @ 0207f182
    adds r1, r7, #0 @ 0207f184
    movs r2, #2 @ 0207f186
    bl .L_020859c0 @ 0207f188
    cmp r0, #0 @ 0207f18c
    beq .L_0207f192 @ 0207f18e
    b .L_0207f0ae @ 0207f190
.L_0207f192:
    mov r0, sl @ 0207f192
    mov r1, r8 @ 0207f194
    bl .L_0207ed34 @ 0207f196
    movs r0, #1 @ 0207f19a
    b .L_0207f15e @ 0207f19c
.L_0207f19e:
    mov r2, sb @ 0207f19e
    cmp r2, #0 @ 0207f1a0
    beq .L_0207f1aa @ 0207f1a2
    ldr r3, [sp, #4] @ 0207f1a4
    cmp r3, sb @ 0207f1a6
    bhi .L_0207f1ae @ 0207f1a8
.L_0207f1aa:
    movs r0, #1 @ 0207f1aa
    b .L_0207f15e @ 0207f1ac
.L_0207f1ae:
    mov r2, r8 @ 0207f1ae
    ldrb r3, [r2, #0xb] @ 0207f1b0
    lsls r2, r3, #0x1b @ 0207f1b2
    bpl .L_0207f1aa @ 0207f1b4
    mov r0, r8 @ 0207f1b6
    bl .L_0207ed1c @ 0207f1b8
    mov r2, sb @ 0207f1bc
    ldrb r3, [r2] @ 0207f1be
    adds r5, r0, #0 @ 0207f1c0
    cmp r3, #0x2f @ 0207f1c2
    bne .L_0207f1fe @ 0207f1c4
    mov r7, sb @ 0207f1c6
.L_0207f1c8:
    adds r7, #1 @ 0207f1c8
    ldrb r3, [r7] @ 0207f1ca
    cmp r3, #0x2f @ 0207f1cc
    beq .L_0207f1c8 @ 0207f1ce
    ldr r3, [sp, #4] @ 0207f1d0
    cmp r3, r7 @ 0207f1d2
    bls .L_0207f1d8 @ 0207f1d4
    b .L_0207f0c0 @ 0207f1d6
.L_0207f1d8:
    movs r0, #1 @ 0207f1d8
    b .L_0207f15e @ 0207f1da
.L_0207f1dc:
    adds r0, r2, #0 @ 0207f1dc
    movs r1, #0 @ 0207f1de
    bl .L_02085958 @ 0207f1e0
    str r0, [sp, #4] @ 0207f1e4
    b .L_0207f098 @ 0207f1e6
.L_0207f1e8:
    mov r0, sl @ 0207f1e8
    mov r1, r8 @ 0207f1ea
    bl .L_0207ed34 @ 0207f1ec
    movs r4, #1 @ 0207f1f0
    b .L_0207f0a6 @ 0207f1f2
.L_0207f1f4:
    adds r0, r7, #0 @ 0207f1f4
    bl .L_02085950 @ 0207f1f6
    adds r6, r0, #0 @ 0207f1fa
    b .L_0207f0d2 @ 0207f1fc
.L_0207f1fe:
    mov r7, sb @ 0207f1fe
    b .L_0207f0c0 @ 0207f200
    .byte 0x00, 0x00, 0x24, 0xf2, 0x08, 0x02 @ 0207f202
.L_0207f208:
@ FUN_0207f208 at 0x0207f208
    push {r4, r5, lr} @ 0207f208
    sub sp, #0x13c @ 0207f20a
    adds r2, r1, #0 @ 0207f20c
    movs r3, #0 @ 0207f20e
    mov r1, sp @ 0207f210
    adds r5, r0, #0 @ 0207f212
    mov r4, sp @ 0207f214
    bl .L_0207f07c @ 0207f216
    cmp r0, #0 @ 0207f21a
    beq .L_0207f224 @ 0207f21c
    ldrb r3, [r4, #0xb] @ 0207f21e
    lsls r2, r3, #0x1b @ 0207f220
    bmi .L_0207f22a @ 0207f222
.L_0207f224:
    movs r0, #0 @ 0207f224
.L_0207f226:
    add sp, #0x13c @ 0207f226
    pop {r4, r5, pc} @ 0207f228
.L_0207f22a:
    mov r0, sp @ 0207f22a
    bl .L_0207ed1c @ 0207f22c
    str r0, [r5, #0x3c] @ 0207f230
    movs r0, #1 @ 0207f232
    b .L_0207f226 @ 0207f234
    .zero 2
.L_0207f238:
@ FUN_0207f238 at 0x0207f238
    push {r4, r5, r6, lr} @ 0207f238
    movs r1, #0xd @ 0207f23a
    adds r4, r0, #0 @ 0207f23c
    bl .L_020859b0 @ 0207f23e
    cmp r0, #0xc @ 0207f242
    bls .L_0207f24a @ 0207f244
.L_0207f246:
    movs r0, #0 @ 0207f246
.L_0207f248:
    pop {r4, r5, r6, pc} @ 0207f248
.L_0207f24a:
    ldr r1, [pc, #0x84] @ 0207f24a
    adds r0, r4, #0 @ 0207f24c
    bl .L_020859c8 @ 0207f24e
    cmp r0, #0 @ 0207f252
    bne .L_0207f246 @ 0207f254
    adds r0, r4, #0 @ 0207f256
    movs r1, #0xd @ 0207f258
    bl .L_020859b0 @ 0207f25a
    adds r5, r0, #0 @ 0207f25e
    cmp r0, #0 @ 0207f260
    beq .L_0207f27a @ 0207f262
    ldrb r3, [r4] @ 0207f264
    cmp r3, #0x1f @ 0207f266
    bls .L_0207f246 @ 0207f268
    movs r2, #0 @ 0207f26a
    b .L_0207f274 @ 0207f26c
.L_0207f26e:
    ldrb r3, [r2, r4] @ 0207f26e
    cmp r3, #0x1f @ 0207f270
    bls .L_0207f246 @ 0207f272
.L_0207f274:
    adds r2, #1 @ 0207f274
    cmp r5, r2 @ 0207f276
    bne .L_0207f26e @ 0207f278
.L_0207f27a:
    adds r0, r4, #0 @ 0207f27a
    movs r1, #0x2e @ 0207f27c
    bl .L_02085958 @ 0207f27e
    adds r6, r0, #0 @ 0207f282
    cmp r0, #0 @ 0207f284
    beq .L_0207f2c2 @ 0207f286
    adds r0, r4, #0 @ 0207f288
    movs r1, #0x2e @ 0207f28a
    bl .L_020859a0 @ 0207f28c
    cmp r6, r0 @ 0207f290
    bne .L_0207f246 @ 0207f292
    subs r3, r6, r4 @ 0207f294
    subs r3, #2 @ 0207f296
    cmp r3, #7 @ 0207f298
    bhi .L_0207f246 @ 0207f29a
    adds r4, r6, #1 @ 0207f29c
    adds r0, r4, #0 @ 0207f29e
    movs r1, #0xd @ 0207f2a0
    bl .L_020859b0 @ 0207f2a2
    cmp r0, #3 @ 0207f2a6
    bhi .L_0207f246 @ 0207f2a8
    adds r0, r4, #0 @ 0207f2aa
    movs r1, #0xd @ 0207f2ac
    bl .L_020859b0 @ 0207f2ae
    movs r2, #0 @ 0207f2b2
    cmp r0, #0 @ 0207f2b4
    beq .L_0207f2ca @ 0207f2b6
.L_0207f2b8:
    movs r3, #1 @ 0207f2b8
    eors r3, r2 @ 0207f2ba
    lsls r3, r3, #0x18 @ 0207f2bc
    lsrs r0, r3, #0x18 @ 0207f2be
    b .L_0207f248 @ 0207f2c0
.L_0207f2c2:
    subs r3, r5, #1 @ 0207f2c2
    movs r2, #0 @ 0207f2c4
    cmp r3, #7 @ 0207f2c6
    bls .L_0207f2b8 @ 0207f2c8
.L_0207f2ca:
    movs r2, #1 @ 0207f2ca
    b .L_0207f2b8 @ 0207f2cc
    .byte 0x00, 0x00, 0x04, 0xf3, 0x08, 0x02 @ 0207f2ce
.L_0207f2d4:
@ FUN_0207f2d4 at 0x0207f2d4
    push {r4, lr} @ 0207f2d4
    movs r1, #0x80 @ 0207f2d6
    lsls r1, r1, #1 @ 0207f2d8
    adds r4, r0, #0 @ 0207f2da
    bl .L_020859b0 @ 0207f2dc
    cmp r0, #0xff @ 0207f2e0
    bls .L_0207f2e8 @ 0207f2e2
.L_0207f2e4:
    movs r0, #0 @ 0207f2e4
.L_0207f2e6:
    pop {r4, pc} @ 0207f2e6
.L_0207f2e8:
    ldr r1, [pc, #0x30] @ 0207f2e8
    adds r0, r4, #0 @ 0207f2ea
    bl .L_020859c8 @ 0207f2ec
    cmp r0, #0 @ 0207f2f0
    bne .L_0207f2e4 @ 0207f2f2
    movs r1, #0x80 @ 0207f2f4
    adds r0, r4, #0 @ 0207f2f6
    lsls r1, r1, #1 @ 0207f2f8
    bl .L_020859b0 @ 0207f2fa
    cmp r0, #0 @ 0207f2fe
    beq .L_0207f318 @ 0207f300
    ldrb r3, [r4] @ 0207f302
    cmp r3, #0x1f @ 0207f304
    bls .L_0207f2e4 @ 0207f306
    movs r2, #0 @ 0207f308
    b .L_0207f312 @ 0207f30a
.L_0207f30c:
    ldrb r3, [r2, r4] @ 0207f30c
    cmp r3, #0x1f @ 0207f30e
    bls .L_0207f2e4 @ 0207f310
.L_0207f312:
    adds r2, #1 @ 0207f312
    cmp r0, r2 @ 0207f314
    bne .L_0207f30c @ 0207f316
.L_0207f318:
    movs r0, #1 @ 0207f318
    b .L_0207f2e6 @ 0207f31a
    .byte 0x18, 0xf3, 0x08, 0x02 @ 0207f31c
.L_0207f320:
@ FUN_0207f320 at 0x0207f320
    push {r4, r5, r6, r7, lr} @ 0207f320
    mov r7, fp @ 0207f322
    mov r6, sl @ 0207f324
    mov r5, sb @ 0207f326
    mov r4, r8 @ 0207f328
    push {r4, r5, r6, r7} @ 0207f32a
    sub sp, #0x44 @ 0207f32c
    adds r3, r1, #0 @ 0207f32e
    adds r5, r0, #0 @ 0207f330
    add r0, sp, #0x34 @ 0207f332
    adds r2, r0, #0 @ 0207f334
    adds r3, #0x20 @ 0207f336
    adds r7, r1, #0 @ 0207f338
    mov r8, r0 @ 0207f33a
    ldm r3!, {r0, r1, r4} @ 0207f33c
    stm r2!, {r0, r1, r4} @ 0207f33e
    ldr r2, [r7, #0x30] @ 0207f340
    ldr r1, [r7, #0x34] @ 0207f342
    adds r4, r7, #0 @ 0207f344
    adds r4, #0x38 @ 0207f346
    ldr r3, [r7, #0x2c] @ 0207f348
    mov fp, r2 @ 0207f34a
    movs r2, #0x80 @ 0207f34c
    str r1, [sp, #0xc] @ 0207f34e
    adds r0, r4, #0 @ 0207f350
    movs r1, #0 @ 0207f352
    lsls r2, r2, #1 @ 0207f354
    str r4, [sp, #8] @ 0207f356
    mov sb, r3 @ 0207f358
    bl .L_02085970 @ 0207f35a
    ldr r0, [pc, #0xc8] @ 0207f35e
    add r4, sp, #0x14 @ 0207f360
    mov sl, r0 @ 0207f362
.L_0207f364:
    ldr r2, [sp, #0x34] @ 0207f364
    ldr r0, [r5, #4] @ 0207f366
    cmp r2, #1 @ 0207f368
    bls .L_0207f3f6 @ 0207f36a
    ldr r3, [r5, #0x24] @ 0207f36c
    subs r2, #2 @ 0207f36e
    muls r2, r3, r2 @ 0207f370
    ldr r3, [r5, #0x1c] @ 0207f372
    adds r3, r2, r3 @ 0207f374
.L_0207f376:
    ldr r2, [sp, #0x38] @ 0207f376
    movs r1, #0x20 @ 0207f378
    adds r2, r3, r2 @ 0207f37a
    ldr r3, [sp, #0x3c] @ 0207f37c
    str r1, [sp] @ 0207f37e
    lsls r3, r3, #5 @ 0207f380
    adds r1, r4, #0 @ 0207f382
    bl .L_0207d06c @ 0207f384
    ldr r3, [sp, #0x34] @ 0207f388
    cmp r3, sb @ 0207f38a
    beq .L_0207f3da @ 0207f38c
.L_0207f38e:
    ldrb r3, [r4] @ 0207f38e
    movs r2, #0x40 @ 0207f390
    bics r3, r2 @ 0207f392
    lsls r2, r3, #1 @ 0207f394
    adds r2, r2, r3 @ 0207f396
    lsls r2, r2, #2 @ 0207f398
    adds r2, r2, r3 @ 0207f39a
    adds r2, #0x2b @ 0207f39c
    adds r1, r7, r2 @ 0207f39e
    ldr r2, [pc, #0x88] @ 0207f3a0
    mov r0, sl @ 0207f3a2
.L_0207f3a4:
    ldm r2!, {r3} @ 0207f3a4
    ldrb r3, [r4, r3] @ 0207f3a6
    strb r3, [r1] @ 0207f3a8
    adds r1, #1 @ 0207f3aa
    cmp r2, r0 @ 0207f3ac
    bne .L_0207f3a4 @ 0207f3ae
    movs r6, #0 @ 0207f3b0
.L_0207f3b2:
    adds r0, r5, #0 @ 0207f3b2
    mov r1, r8 @ 0207f3b4
    movs r2, #0 @ 0207f3b6
    bl .L_0207ed90 @ 0207f3b8
    cmp r0, #0 @ 0207f3bc
    beq .L_0207f422 @ 0207f3be
    cmp r6, #0 @ 0207f3c0
    beq .L_0207f364 @ 0207f3c2
    ldr r3, [sp, #0x34] @ 0207f3c4
    cmp r3, sb @ 0207f3c6
    beq .L_0207f3fa @ 0207f3c8
.L_0207f3ca:
    movs r0, #1 @ 0207f3ca
.L_0207f3cc:
    add sp, #0x44 @ 0207f3cc
    pop {r2, r3, r4, r5} @ 0207f3ce
    mov r8, r2 @ 0207f3d0
    mov sb, r3 @ 0207f3d2
    mov sl, r4 @ 0207f3d4
    mov fp, r5 @ 0207f3d6
    pop {r4, r5, r6, r7, pc} @ 0207f3d8
.L_0207f3da:
    ldr r3, [sp, #0x38] @ 0207f3da
    cmp r3, fp @ 0207f3dc
    bne .L_0207f38e @ 0207f3de
    ldr r3, [sp, #0x3c] @ 0207f3e0
    ldr r1, [sp, #0xc] @ 0207f3e2
    cmp r3, r1 @ 0207f3e4
    bne .L_0207f38e @ 0207f3e6
    adds r0, r7, #0 @ 0207f3e8
    adds r1, r4, #0 @ 0207f3ea
    movs r2, #0x20 @ 0207f3ec
    bl .L_02085988 @ 0207f3ee
    movs r6, #1 @ 0207f3f2
    b .L_0207f3b2 @ 0207f3f4
.L_0207f3f6:
    ldr r3, [r5, #0x10] @ 0207f3f6
    b .L_0207f376 @ 0207f3f8
.L_0207f3fa:
    ldr r3, [sp, #0x38] @ 0207f3fa
    cmp r3, fp @ 0207f3fc
    bne .L_0207f3ca @ 0207f3fe
    ldr r3, [sp, #0x3c] @ 0207f400
    ldr r2, [sp, #0xc] @ 0207f402
    cmp r3, r2 @ 0207f404
    bne .L_0207f3ca @ 0207f406
    adds r0, r7, #0 @ 0207f408
    ldr r1, [sp, #8] @ 0207f40a
    bl .L_0207eca8 @ 0207f40c
    movs r2, #0 @ 0207f410
    cmp r0, #0 @ 0207f412
    bne .L_0207f418 @ 0207f414
    movs r2, #1 @ 0207f416
.L_0207f418:
    movs r3, #1 @ 0207f418
    eors r3, r2 @ 0207f41a
    lsls r3, r3, #0x18 @ 0207f41c
    lsrs r0, r3, #0x18 @ 0207f41e
    b .L_0207f3cc @ 0207f420
.L_0207f422:
    movs r0, #0 @ 0207f422
    b .L_0207f3cc @ 0207f424
    .byte 0x00, 0x00, 0x7c, 0xee, 0x08, 0x02, 0x48, 0xee, 0x08, 0x02 @ 0207f426
.L_0207f430:
@ FUN_0207f430 at 0x0207f430
    push {r4, r5, r6, r7, lr} @ 0207f430
    mov r7, sl @ 0207f432
    mov r6, sb @ 0207f434
    mov r5, r8 @ 0207f436
    push {r5, r6, r7} @ 0207f438
    sub sp, #0x38 @ 0207f43a
    adds r3, r1, #0 @ 0207f43c
    add r7, sp, #0x2c @ 0207f43e
    adds r3, #0x20 @ 0207f440
    adds r2, r7, #0 @ 0207f442
    adds r4, r0, #0 @ 0207f444
    ldm r3!, {r0, r5, r6} @ 0207f446
    stm r2!, {r0, r5, r6} @ 0207f448
    ldr r0, [r1, #0x34] @ 0207f44a
    ldr r3, [r1, #0x30] @ 0207f44c
    ldr r1, [r1, #0x2c] @ 0207f44e
    mov sb, r0 @ 0207f450
    mov sl, r3 @ 0207f452
    mov r8, r1 @ 0207f454
    add r6, sp, #0xc @ 0207f456
.L_0207f458:
    ldr r2, [sp, #0x2c] @ 0207f458
    ldr r0, [r4, #4] @ 0207f45a
    cmp r2, #1 @ 0207f45c
    bls .L_0207f4e4 @ 0207f45e
    ldr r3, [r4, #0x24] @ 0207f460
    subs r2, #2 @ 0207f462
    muls r2, r3, r2 @ 0207f464
    ldr r3, [r4, #0x1c] @ 0207f466
    adds r3, r2, r3 @ 0207f468
.L_0207f46a:
    ldr r2, [sp, #0x30] @ 0207f46a
    movs r1, #0x20 @ 0207f46c
    adds r2, r3, r2 @ 0207f46e
    ldr r3, [sp, #0x34] @ 0207f470
    str r1, [sp] @ 0207f472
    lsls r3, r3, #5 @ 0207f474
    adds r1, r6, #0 @ 0207f476
    bl .L_0207d06c @ 0207f478
    movs r3, #0x1b @ 0207f47c
    ldr r2, [sp, #0x2c] @ 0207f47e
    negs r3, r3 @ 0207f480
    strb r3, [r6] @ 0207f482
    ldr r0, [r4, #4] @ 0207f484
    cmp r2, #1 @ 0207f486
    bls .L_0207f4e0 @ 0207f488
    ldr r3, [r4, #0x24] @ 0207f48a
    subs r2, #2 @ 0207f48c
    muls r2, r3, r2 @ 0207f48e
    ldr r3, [r4, #0x1c] @ 0207f490
    adds r3, r2, r3 @ 0207f492
.L_0207f494:
    ldr r2, [sp, #0x30] @ 0207f494
    movs r1, #0x20 @ 0207f496
    adds r2, r3, r2 @ 0207f498
    ldr r3, [sp, #0x34] @ 0207f49a
    str r1, [sp] @ 0207f49c
    lsls r3, r3, #5 @ 0207f49e
    adds r1, r6, #0 @ 0207f4a0
    bl .L_0207d020 @ 0207f4a2
    ldr r3, [sp, #0x2c] @ 0207f4a6
    cmp r3, r8 @ 0207f4a8
    beq .L_0207f4ce @ 0207f4aa
.L_0207f4ac:
    movs r5, #0 @ 0207f4ac
.L_0207f4ae:
    adds r0, r4, #0 @ 0207f4ae
    adds r1, r7, #0 @ 0207f4b0
    movs r2, #0 @ 0207f4b2
    bl .L_0207ed90 @ 0207f4b4
    cmp r0, #0 @ 0207f4b8
    beq .L_0207f4c2 @ 0207f4ba
    cmp r5, #0 @ 0207f4bc
    beq .L_0207f458 @ 0207f4be
    movs r0, #1 @ 0207f4c0
.L_0207f4c2:
    add sp, #0x38 @ 0207f4c2
    pop {r2, r3, r4} @ 0207f4c4
    mov r8, r2 @ 0207f4c6
    mov sb, r3 @ 0207f4c8
    mov sl, r4 @ 0207f4ca
    pop {r4, r5, r6, r7, pc} @ 0207f4cc
.L_0207f4ce:
    ldr r3, [sp, #0x30] @ 0207f4ce
    cmp r3, sl @ 0207f4d0
    bne .L_0207f4ac @ 0207f4d2
    ldr r3, [sp, #0x34] @ 0207f4d4
    movs r2, #0 @ 0207f4d6
    cmp sb, r3 @ 0207f4d8
    beq .L_0207f4e8 @ 0207f4da
    adds r5, r2, #0 @ 0207f4dc
    b .L_0207f4ae @ 0207f4de
.L_0207f4e0:
    ldr r3, [r4, #0x10] @ 0207f4e0
    b .L_0207f494 @ 0207f4e2
.L_0207f4e4:
    ldr r3, [r4, #0x10] @ 0207f4e4
    b .L_0207f46a @ 0207f4e6
.L_0207f4e8:
    movs r2, #1 @ 0207f4e8
    adds r5, r2, #0 @ 0207f4ea
    b .L_0207f4ae @ 0207f4ec
    .zero 2
.L_0207f4f0:
@ FUN_0207f4f0 at 0x0207f4f0
    push {r4, r5, r6, lr} @ 0207f4f0
    ldr r3, [r0] @ 0207f4f2
    adds r0, r1, #0 @ 0207f4f4
    ldr r3, [r3] @ 0207f4f6
    adds r4, r2, #0 @ 0207f4f8
    str r3, [r2] @ 0207f4fa
    adds r5, r1, #0 @ 0207f4fc
    bl .L_0207ed1c @ 0207f4fe
    str r0, [r4, #4] @ 0207f502
    ldrb r2, [r5, #0xb] @ 0207f504
    lsls r1, r2, #0x1b @ 0207f506
    bpl .L_0207f59a @ 0207f508
    ldr r1, [pc, #0xa0] @ 0207f50a
    lsls r3, r2, #0x1f @ 0207f50c
    bmi .L_0207f5a0 @ 0207f50e
.L_0207f510:
    movs r3, #0x92 @ 0207f510
.L_0207f512:
    orrs r3, r1 @ 0207f512
    str r3, [r4, #8] @ 0207f514
    movs r3, #1 @ 0207f516
    strh r3, [r4, #0xc] @ 0207f518
    strh r3, [r4, #0xe] @ 0207f51a
    movs r3, #2 @ 0207f51c
    strh r3, [r4, #0x10] @ 0207f51e
    ldr r3, [r4] @ 0207f520
    adds r0, r5, #0 @ 0207f522
    str r3, [r4, #0x14] @ 0207f524
    adds r0, #0x1c @ 0207f526
    ldrb r3, [r0, #1] @ 0207f528
    ldrb r1, [r5, #0x1c] @ 0207f52a
    lsls r3, r3, #8 @ 0207f52c
    ldrb r2, [r0, #2] @ 0207f52e
    orrs r1, r3 @ 0207f530
    ldrb r3, [r0, #3] @ 0207f532
    lsls r2, r2, #0x10 @ 0207f534
    lsls r3, r3, #0x18 @ 0207f536
    orrs r2, r3 @ 0207f538
    orrs r1, r2 @ 0207f53a
    str r1, [r4, #0x18] @ 0207f53c
    ldrb r3, [r5, #0x13] @ 0207f53e
    ldrb r1, [r5, #0x12] @ 0207f540
    lsls r3, r3, #8 @ 0207f542
    orrs r1, r3 @ 0207f544
    movs r0, #0 @ 0207f546
    bl .L_0207e898 @ 0207f548
    movs r6, #0 @ 0207f54c
    str r0, [r4, #0x1c] @ 0207f54e
    str r6, [r4, #0x20] @ 0207f550
    ldrb r3, [r5, #0x17] @ 0207f552
    ldrb r0, [r5, #0x16] @ 0207f554
    lsls r3, r3, #8 @ 0207f556
    orrs r0, r3 @ 0207f558
    ldrb r3, [r5, #0x19] @ 0207f55a
    ldrb r1, [r5, #0x18] @ 0207f55c
    lsls r3, r3, #8 @ 0207f55e
    orrs r1, r3 @ 0207f560
    bl .L_0207e898 @ 0207f562
    str r6, [r4, #0x28] @ 0207f566
    str r0, [r4, #0x24] @ 0207f568
    ldrb r3, [r5, #0xf] @ 0207f56a
    ldrb r0, [r5, #0xe] @ 0207f56c
    lsls r3, r3, #8 @ 0207f56e
    orrs r0, r3 @ 0207f570
    ldrb r3, [r5, #0x11] @ 0207f572
    ldrb r1, [r5, #0x10] @ 0207f574
    lsls r3, r3, #8 @ 0207f576
    orrs r1, r3 @ 0207f578
    bl .L_0207e898 @ 0207f57a
    movs r3, #0x80 @ 0207f57e
    ldr r2, [r4, #0x18] @ 0207f580
    ldr r1, [pc, #0x2c] @ 0207f582
    lsls r3, r3, #2 @ 0207f584
    str r0, [r4, #0x2c] @ 0207f586
    str r6, [r4, #0x30] @ 0207f588
    str r3, [r4, #0x34] @ 0207f58a
    adds r3, r2, r1 @ 0207f58c
    bmi .L_0207f5a4 @ 0207f58e
.L_0207f590:
    asrs r3, r3, #9 @ 0207f590
    str r6, [r4, #0x3c] @ 0207f592
    str r6, [r4, #0x40] @ 0207f594
    str r3, [r4, #0x38] @ 0207f596
    pop {r4, r5, r6, pc} @ 0207f598
.L_0207f59a:
    ldr r1, [pc, #0x18] @ 0207f59a
    lsls r3, r2, #0x1f @ 0207f59c
    bpl .L_0207f510 @ 0207f59e
.L_0207f5a0:
    movs r3, #0 @ 0207f5a0
    b .L_0207f512 @ 0207f5a2
.L_0207f5a4:
    ldr r1, [pc, #0x10] @ 0207f5a4
    adds r3, r2, r1 @ 0207f5a6
    b .L_0207f590 @ 0207f5a8
    .byte 0x00, 0x00, 0x24, 0x41, 0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0x24, 0x81, 0x00, 0x00, 0xfe, 0x03 @ 0207f5aa
    .zero 2
.L_0207f5bc:
@ FUN_0207f5bc at 0x0207f5bc
    push {r4, r5, r6, r7, lr} @ 0207f5bc
    mov r7, fp @ 0207f5be
    mov r6, sl @ 0207f5c0
    mov r5, sb @ 0207f5c2
    mov r4, r8 @ 0207f5c4
    push {r4, r5, r6, r7} @ 0207f5c6
    adds r5, r1, #0 @ 0207f5c8
    mov r8, r1 @ 0207f5ca
    adds r5, #0x38 @ 0207f5cc
    movs r1, #0x80 @ 0207f5ce
    adds r6, r0, #0 @ 0207f5d0
    sub sp, #0x8c @ 0207f5d2
    adds r0, r5, #0 @ 0207f5d4
    lsls r1, r1, #1 @ 0207f5d6
    adds r7, r2, #0 @ 0207f5d8
    bl .L_020859b0 @ 0207f5da
    cmp r0, #0 @ 0207f5de
    bne .L_0207f5f2 @ 0207f5e0
.L_0207f5e2:
    movs r0, #0 @ 0207f5e2
.L_0207f5e4:
    add sp, #0x8c @ 0207f5e4
    pop {r2, r3, r4, r5} @ 0207f5e6
    mov r8, r2 @ 0207f5e8
    mov sb, r3 @ 0207f5ea
    mov sl, r4 @ 0207f5ec
    mov fp, r5 @ 0207f5ee
    pop {r4, r5, r6, r7, pc} @ 0207f5f0
.L_0207f5f2:
    adds r0, r5, #0 @ 0207f5f2
    bl .L_0207f2d4 @ 0207f5f4
    cmp r0, #0 @ 0207f5f8
    beq .L_0207f5e2 @ 0207f5fa
    adds r0, r5, #0 @ 0207f5fc
    bl .L_02085950 @ 0207f5fe
    subs r1, r0, #1 @ 0207f602
    cmp r1, #0 @ 0207f604
    ble .L_0207f632 @ 0207f606
    mov r2, r8 @ 0207f608
    adds r3, r1, r2 @ 0207f60a
    adds r3, #0x38 @ 0207f60c
    ldrb r3, [r3] @ 0207f60e
    cmp r3, #0x20 @ 0207f610
    bne .L_0207f632 @ 0207f612
    adds r3, r0, #0 @ 0207f614
    adds r3, #0x37 @ 0207f616
    adds r0, r2, r3 @ 0207f618
    b .L_0207f626 @ 0207f61a
.L_0207f61c:
    subs r3, r2, #1 @ 0207f61c
    ldrb r3, [r3] @ 0207f61e
    subs r0, #1 @ 0207f620
    cmp r3, #0x20 @ 0207f622
    bne .L_0207f632 @ 0207f624
.L_0207f626:
    movs r3, #0 @ 0207f626
    subs r1, #1 @ 0207f628
    adds r2, r0, #0 @ 0207f62a
    strb r3, [r0] @ 0207f62c
    cmp r1, #0 @ 0207f62e
    bgt .L_0207f61c @ 0207f630
.L_0207f632:
    adds r0, r5, #0 @ 0207f632
    bl .L_02085950 @ 0207f634
    movs r2, #0 @ 0207f638
    b .L_0207f64a @ 0207f63a
.L_0207f63c:
    mov r4, r8 @ 0207f63c
    adds r3, r4, r2 @ 0207f63e
    adds r3, #0x38 @ 0207f640
    ldrb r3, [r3] @ 0207f642
    cmp r3, #0x20 @ 0207f644
    bne .L_0207f64e @ 0207f646
    adds r2, #1 @ 0207f648
.L_0207f64a:
    cmp r2, r0 @ 0207f64a
    bne .L_0207f63c @ 0207f64c
.L_0207f64e:
    cmp r2, #0 @ 0207f64e
    ble .L_0207f664 @ 0207f650
    adds r4, r5, r2 @ 0207f652
    adds r0, r4, #0 @ 0207f654
    bl .L_02085950 @ 0207f656
    adds r1, r4, #0 @ 0207f65a
    adds r2, r0, #0 @ 0207f65c
    adds r0, r5, #0 @ 0207f65e
    bl .L_020859d0 @ 0207f660
.L_0207f664:
    adds r0, r5, #0 @ 0207f664
    bl .L_02085950 @ 0207f666
    movs r4, #0x80 @ 0207f66a
    lsls r4, r4, #1 @ 0207f66c
    subs r2, r4, r0 @ 0207f66e
    movs r1, #0 @ 0207f670
    adds r0, r5, r0 @ 0207f672
    bl .L_02085970 @ 0207f674
    adds r0, r6, #0 @ 0207f678
    adds r1, r5, #0 @ 0207f67a
    adds r2, r7, #0 @ 0207f67c
    bl .L_0207efe4 @ 0207f67e
    cmp r0, #0 @ 0207f682
    bne .L_0207f5e2 @ 0207f684
    movs r1, #0x20 @ 0207f686
    movs r2, #0xb @ 0207f688
    mov r0, r8 @ 0207f68a
    bl .L_02085970 @ 0207f68c
    ldr r1, [pc, #0x2fc] @ 0207f690
    adds r0, r5, #0 @ 0207f692
    adds r2, r4, #0 @ 0207f694
    bl .L_02085960 @ 0207f696
    cmp r0, #0 @ 0207f69a
    beq .L_0207f6a0 @ 0207f69c
    b .L_0207f8e0 @ 0207f69e
.L_0207f6a0:
    movs r3, #0x2e @ 0207f6a0
    mov r5, r8 @ 0207f6a2
    strb r3, [r5] @ 0207f6a4
.L_0207f6a6:
    add r3, sp, #0x64 @ 0207f6a6
    mov sb, r3 @ 0207f6a8
    str r7, [sp, #0x64] @ 0207f6aa
    movs r3, #0 @ 0207f6ac
    add r7, sp, #0x70 @ 0207f6ae
    str r3, [sp, #0x6c] @ 0207f6b0
    str r3, [sp, #0x68] @ 0207f6b2
    adds r2, r7, #0 @ 0207f6b4
    mov r3, sb @ 0207f6b6
    ldm r3!, {r0, r4, r5} @ 0207f6b8
    stm r2!, {r0, r4, r5} @ 0207f6ba
    movs r1, #0 @ 0207f6bc
    movs r4, #1 @ 0207f6be
    str r4, [sp, #8] @ 0207f6c0
    str r1, [sp, #0xc] @ 0207f6c2
.L_0207f6c4:
    movs r2, #0x37 @ 0207f6c4
    movs r1, #1 @ 0207f6c6
    add r2, sp @ 0207f6c8
    mov sl, r1 @ 0207f6ca
    mov fp, r2 @ 0207f6cc
    b .L_0207f6ec @ 0207f6ce
.L_0207f6d0:
    adds r2, r7, #0 @ 0207f6d0
    mov r3, sb @ 0207f6d2
    ldm r3!, {r0, r1, r5} @ 0207f6d4
    stm r2!, {r0, r1, r5} @ 0207f6d6
    subs r4, #1 @ 0207f6d8
    movs r3, #1 @ 0207f6da
.L_0207f6dc:
    mov r2, sl @ 0207f6dc
    cmp r2, #0 @ 0207f6de
    bne .L_0207f6e4 @ 0207f6e0
    b .L_0207f5e2 @ 0207f6e2
.L_0207f6e4:
    cmp r3, #0 @ 0207f6e4
    bne .L_0207f744 @ 0207f6e6
    cmp r4, #0 @ 0207f6e8
    beq .L_0207f7b0 @ 0207f6ea
.L_0207f6ec:
    ldr r2, [sp, #0x64] @ 0207f6ec
    ldr r0, [r6, #4] @ 0207f6ee
    cmp r2, #1 @ 0207f6f0
    bls .L_0207f72e @ 0207f6f2
    ldr r3, [r6, #0x24] @ 0207f6f4
    subs r2, #2 @ 0207f6f6
    muls r2, r3, r2 @ 0207f6f8
    ldr r3, [r6, #0x1c] @ 0207f6fa
    adds r3, r2, r3 @ 0207f6fc
.L_0207f6fe:
    ldr r2, [sp, #0x68] @ 0207f6fe
    movs r1, #0x20 @ 0207f700
    adds r2, r3, r2 @ 0207f702
    ldr r3, [sp, #0x6c] @ 0207f704
    str r1, [sp] @ 0207f706
    lsls r3, r3, #5 @ 0207f708
    mov r1, fp @ 0207f70a
    bl .L_0207d06c @ 0207f70c
    mov r1, fp @ 0207f710
    ldrb r3, [r1] @ 0207f712
    cmp r3, #0 @ 0207f714
    beq .L_0207f6d0 @ 0207f716
    cmp r3, #0xe5 @ 0207f718
    beq .L_0207f732 @ 0207f71a
    ldr r4, [sp, #8] @ 0207f71c
.L_0207f71e:
    adds r0, r6, #0 @ 0207f71e
    mov r1, sb @ 0207f720
    movs r2, #1 @ 0207f722
    bl .L_0207ed90 @ 0207f724
    movs r3, #0 @ 0207f728
    mov sl, r0 @ 0207f72a
    b .L_0207f6dc @ 0207f72c
.L_0207f72e:
    ldr r3, [r6, #0x10] @ 0207f72e
    b .L_0207f6fe @ 0207f730
.L_0207f732:
    ldr r2, [sp, #8] @ 0207f732
    cmp r2, r4 @ 0207f734
    bne .L_0207f73a @ 0207f736
    b .L_0207f900 @ 0207f738
.L_0207f73a:
    subs r4, #1 @ 0207f73a
    cmp r4, #0 @ 0207f73c
    bne .L_0207f71e @ 0207f73e
    movs r3, #0 @ 0207f740
    b .L_0207f6dc @ 0207f742
.L_0207f744:
    movs r3, #0x20 @ 0207f744
    add r3, r8 @ 0207f746
    adds r2, r3, #0 @ 0207f748
    ldm r7!, {r0, r1, r5} @ 0207f74a
    stm r2!, {r0, r1, r5} @ 0207f74c
    mov r0, fp @ 0207f74e
    movs r1, #0 @ 0207f750
    movs r2, #0x20 @ 0207f752
    adds r5, r4, #1 @ 0207f754
    mov sl, r3 @ 0207f756
    bl .L_02085970 @ 0207f758
    cmp r5, #0 @ 0207f75c
    beq .L_0207f7c6 @ 0207f75e
    mov r4, r8 @ 0207f760
    adds r4, #0x2c @ 0207f762
    b .L_0207f78e @ 0207f764
.L_0207f766:
    ldr r3, [r6, #0x24] @ 0207f766
    subs r2, #2 @ 0207f768
    muls r2, r3, r2 @ 0207f76a
    ldr r3, [r6, #0x1c] @ 0207f76c
    adds r3, r2, r3 @ 0207f76e
.L_0207f770:
    ldr r2, [sp, #0x68] @ 0207f770
    movs r1, #0x20 @ 0207f772
    adds r2, r3, r2 @ 0207f774
    ldr r3, [sp, #0x6c] @ 0207f776
    str r1, [sp] @ 0207f778
    lsls r3, r3, #5 @ 0207f77a
    mov r1, fp @ 0207f77c
    bl .L_0207d020 @ 0207f77e
    cmp r5, #0 @ 0207f782
    bne .L_0207f788 @ 0207f784
    b .L_0207f8f8 @ 0207f786
.L_0207f788:
    cmp r7, #0 @ 0207f788
    bne .L_0207f78e @ 0207f78a
    b .L_0207f5e2 @ 0207f78c
.L_0207f78e:
    adds r2, r4, #0 @ 0207f78e
    mov r3, sb @ 0207f790
    ldm r3!, {r0, r1, r7} @ 0207f792
    stm r2!, {r0, r1, r7} @ 0207f794
    movs r2, #1 @ 0207f796
    adds r0, r6, #0 @ 0207f798
    mov r1, sb @ 0207f79a
    bl .L_0207ed90 @ 0207f79c
    ldr r2, [sp, #0x64] @ 0207f7a0
    adds r7, r0, #0 @ 0207f7a2
    subs r5, #1 @ 0207f7a4
    ldr r0, [r6, #4] @ 0207f7a6
    cmp r2, #1 @ 0207f7a8
    bhi .L_0207f766 @ 0207f7aa
    ldr r3, [r6, #0x10] @ 0207f7ac
    b .L_0207f770 @ 0207f7ae
.L_0207f7b0:
    movs r1, #0x20 @ 0207f7b0
    add r1, r8 @ 0207f7b2
    adds r2, r1, #0 @ 0207f7b4
    ldm r7!, {r0, r4, r5} @ 0207f7b6
    stm r2!, {r0, r4, r5} @ 0207f7b8
    mov r3, r8 @ 0207f7ba
    adds r3, #0x2c @ 0207f7bc
    mov r2, sb @ 0207f7be
    mov sl, r1 @ 0207f7c0
    ldm r2!, {r1, r4, r5} @ 0207f7c2
    stm r3!, {r1, r4, r5} @ 0207f7c4
.L_0207f7c6:
    add r1, sp, #0x7c @ 0207f7c6
    mov r3, sl @ 0207f7c8
    adds r2, r1, #0 @ 0207f7ca
    ldm r3!, {r4, r5, r7} @ 0207f7cc
    stm r2!, {r4, r5, r7} @ 0207f7ce
    ldr r0, [sp, #8] @ 0207f7d0
    mov fp, r1 @ 0207f7d2
    mov sl, r0 @ 0207f7d4
    cmp r0, #0 @ 0207f7d6
    ble .L_0207f8a2 @ 0207f7d8
    lsls r3, r0, #1 @ 0207f7da
    adds r3, r3, r0 @ 0207f7dc
    lsls r3, r3, #2 @ 0207f7de
    adds r3, r3, r0 @ 0207f7e0
    subs r3, #0x1a @ 0207f7e2
    mov sb, r3 @ 0207f7e4
.L_0207f7e6:
    mov r2, sl @ 0207f7e6
    cmp r2, #1 @ 0207f7e8
    beq .L_0207f8b2 @ 0207f7ea
    ldr r3, [sp, #8] @ 0207f7ec
    cmp sl, r3 @ 0207f7ee
    beq .L_0207f8d8 @ 0207f7f0
    movs r2, #0 @ 0207f7f2
.L_0207f7f4:
    mov r3, sl @ 0207f7f4
    mov r5, sp @ 0207f7f6
    subs r3, #1 @ 0207f7f8
    orrs r3, r2 @ 0207f7fa
    adds r5, #0x17 @ 0207f7fc
    strb r3, [r5] @ 0207f7fe
    mov r3, sb @ 0207f800
    mov r4, r8 @ 0207f802
    adds r3, #0x38 @ 0207f804
    adds r1, r4, r3 @ 0207f806
    movs r7, #1 @ 0207f808
    movs r4, #0 @ 0207f80a
    ldr r0, [pc, #0x184] @ 0207f80c
    negs r7, r7 @ 0207f80e
    mov ip, r4 @ 0207f810
    b .L_0207f832 @ 0207f812
.L_0207f814:
    cmp r4, #1 @ 0207f814
    ble .L_0207f8a6 @ 0207f816
    subs r3, r1, #1 @ 0207f818
    ldrb r3, [r3] @ 0207f81a
    cmp r3, #0 @ 0207f81c
    bne .L_0207f8a6 @ 0207f81e
    ldr r3, [r0] @ 0207f820
    strb r7, [r5, r3] @ 0207f822
    adds r3, r5, r3 @ 0207f824
    strb r7, [r3, #1] @ 0207f826
.L_0207f828:
    adds r4, #1 @ 0207f828
    adds r1, #1 @ 0207f82a
    adds r0, #4 @ 0207f82c
    cmp r4, #0xd @ 0207f82e
    beq .L_0207f84c @ 0207f830
.L_0207f832:
    ldrb r2, [r1] @ 0207f832
    cmp r2, #0 @ 0207f834
    beq .L_0207f814 @ 0207f836
    ldr r3, [r0] @ 0207f838
    adds r4, #1 @ 0207f83a
    strb r2, [r5, r3] @ 0207f83c
    adds r3, r5, r3 @ 0207f83e
    lsrs r2, r2, #8 @ 0207f840
    strb r2, [r3, #1] @ 0207f842
    adds r1, #1 @ 0207f844
    adds r0, #4 @ 0207f846
    cmp r4, #0xd @ 0207f848
    bne .L_0207f832 @ 0207f84a
.L_0207f84c:
    mov r3, sp @ 0207f84c
    ldrb r3, [r3, #0xc] @ 0207f84e
    ldr r2, [sp, #0x7c] @ 0207f850
    strb r3, [r5, #0xd] @ 0207f852
    movs r3, #0xf @ 0207f854
    strb r3, [r5, #0xb] @ 0207f856
    movs r3, #0 @ 0207f858
    strb r3, [r5, #0xc] @ 0207f85a
    strb r3, [r5, #0x1a] @ 0207f85c
    strb r3, [r5, #0x1b] @ 0207f85e
    ldr r0, [r6, #4] @ 0207f860
    cmp r2, #1 @ 0207f862
    bls .L_0207f8dc @ 0207f864
    ldr r3, [r6, #0x24] @ 0207f866
    subs r2, #2 @ 0207f868
    muls r2, r3, r2 @ 0207f86a
    ldr r3, [r6, #0x1c] @ 0207f86c
    adds r3, r2, r3 @ 0207f86e
.L_0207f870:
    ldr r2, [sp, #0x80] @ 0207f870
    movs r1, #0x20 @ 0207f872
    adds r2, r3, r2 @ 0207f874
    ldr r3, [sp, #0x84] @ 0207f876
    str r1, [sp] @ 0207f878
    lsls r3, r3, #5 @ 0207f87a
    adds r1, r5, #0 @ 0207f87c
    bl .L_0207d020 @ 0207f87e
.L_0207f882:
    adds r0, r6, #0 @ 0207f882
    mov r1, fp @ 0207f884
    movs r2, #0 @ 0207f886
    bl .L_0207ed90 @ 0207f888
    cmp r0, #0 @ 0207f88c
    beq .L_0207f8a2 @ 0207f88e
    movs r4, #1 @ 0207f890
    negs r4, r4 @ 0207f892
    add sl, r4 @ 0207f894
    movs r5, #0xd @ 0207f896
    negs r5, r5 @ 0207f898
    mov r7, sl @ 0207f89a
    add sb, r5 @ 0207f89c
    cmp r7, #0 @ 0207f89e
    bne .L_0207f7e6 @ 0207f8a0
.L_0207f8a2:
    movs r0, #1 @ 0207f8a2
    b .L_0207f5e4 @ 0207f8a4
.L_0207f8a6:
    ldr r3, [r0] @ 0207f8a6
    mov r2, ip @ 0207f8a8
    strb r2, [r5, r3] @ 0207f8aa
    adds r3, r5, r3 @ 0207f8ac
    strb r2, [r3, #1] @ 0207f8ae
    b .L_0207f828 @ 0207f8b0
.L_0207f8b2:
    ldr r2, [sp, #0x7c] @ 0207f8b2
    ldr r0, [r6, #4] @ 0207f8b4
    cmp r2, #1 @ 0207f8b6
    bls .L_0207f90a @ 0207f8b8
    ldr r3, [r6, #0x24] @ 0207f8ba
    subs r2, #2 @ 0207f8bc
    muls r2, r3, r2 @ 0207f8be
    ldr r3, [r6, #0x1c] @ 0207f8c0
    adds r3, r2, r3 @ 0207f8c2
.L_0207f8c4:
    ldr r2, [sp, #0x80] @ 0207f8c4
    movs r1, #0x20 @ 0207f8c6
    adds r2, r3, r2 @ 0207f8c8
    ldr r3, [sp, #0x84] @ 0207f8ca
    str r1, [sp] @ 0207f8cc
    lsls r3, r3, #5 @ 0207f8ce
    mov r1, r8 @ 0207f8d0
    bl .L_0207d020 @ 0207f8d2
    b .L_0207f882 @ 0207f8d6
.L_0207f8d8:
    movs r2, #0x40 @ 0207f8d8
    b .L_0207f7f4 @ 0207f8da
.L_0207f8dc:
    ldr r3, [r6, #0x10] @ 0207f8dc
    b .L_0207f870 @ 0207f8de
.L_0207f8e0:
    ldr r1, [pc, #0xb4] @ 0207f8e0
    adds r0, r5, #0 @ 0207f8e2
    adds r2, r4, #0 @ 0207f8e4
    bl .L_02085960 @ 0207f8e6
    cmp r0, #0 @ 0207f8ea
    bne .L_0207f90e @ 0207f8ec
    movs r3, #0x2e @ 0207f8ee
    mov r0, r8 @ 0207f8f0
    strb r3, [r0] @ 0207f8f2
    strb r3, [r0, #1] @ 0207f8f4
    b .L_0207f6a6 @ 0207f8f6
.L_0207f8f8:
    cmp r7, #0 @ 0207f8f8
    bne .L_0207f8fe @ 0207f8fa
    b .L_0207f5e2 @ 0207f8fc
.L_0207f8fe:
    b .L_0207f7c6 @ 0207f8fe
.L_0207f900:
    adds r2, r7, #0 @ 0207f900
    mov r3, sb @ 0207f902
    ldm r3!, {r0, r1, r5} @ 0207f904
    stm r2!, {r0, r1, r5} @ 0207f906
    b .L_0207f73a @ 0207f908
.L_0207f90a:
    ldr r3, [r6, #0x10] @ 0207f90a
    b .L_0207f8c4 @ 0207f90c
.L_0207f90e:
    adds r0, r5, #0 @ 0207f90e
    bl .L_0207f238 @ 0207f910
    cmp r0, #0 @ 0207f914
    beq .L_0207f968 @ 0207f916
    adds r0, r5, #0 @ 0207f918
    bl .L_020859d8 @ 0207f91a
    movs r4, #0 @ 0207f91e
.L_0207f920:
    mov r2, r8 @ 0207f920
    adds r1, r2, r4 @ 0207f922
    adds r3, r1, #0 @ 0207f924
    adds r3, #0x38 @ 0207f926
    ldrb r3, [r3] @ 0207f928
    cmp r3, #0x2e @ 0207f92a
    bne .L_0207f930 @ 0207f92c
    b .L_0207faec @ 0207f92e
.L_0207f930:
    cmp r3, #0 @ 0207f930
    bne .L_0207f936 @ 0207f932
    b .L_0207faec @ 0207f934
.L_0207f936:
    adds r4, #1 @ 0207f936
    strb r3, [r1] @ 0207f938
    cmp r4, #8 @ 0207f93a
    bne .L_0207f920 @ 0207f93c
    mov r1, r8 @ 0207f93e
    movs r2, #8 @ 0207f940
    adds r1, #8 @ 0207f942
.L_0207f944:
    adds r3, r1, #0 @ 0207f944
    adds r3, #0x38 @ 0207f946
    ldrb r3, [r3] @ 0207f948
    cmp r3, #0x2e @ 0207f94a
    bne .L_0207f950 @ 0207f94c
    b .L_0207fb04 @ 0207f94e
.L_0207f950:
    cmp r2, #0xa @ 0207f950
    ble .L_0207f956 @ 0207f952
    b .L_0207f6a6 @ 0207f954
.L_0207f956:
    mov r4, r8 @ 0207f956
    adds r3, r4, r2 @ 0207f958
    movs r1, #0x20 @ 0207f95a
.L_0207f95c:
    adds r2, #1 @ 0207f95c
    strb r1, [r3] @ 0207f95e
    adds r3, #1 @ 0207f960
    cmp r2, #0xb @ 0207f962
    bne .L_0207f95c @ 0207f964
    b .L_0207f6a6 @ 0207f966
.L_0207f968:
    adds r1, r4, #0 @ 0207f968
    adds r0, r5, #0 @ 0207f96a
    bl .L_020859b0 @ 0207f96c
    movs r1, #0x2e @ 0207f970
    mov sb, r0 @ 0207f972
    adds r0, r5, #0 @ 0207f974
    bl .L_020859a0 @ 0207f976
    mov ip, r0 @ 0207f97a
    cmp r0, #0 @ 0207f97c
    bne .L_0207f982 @ 0207f97e
    b .L_0207fb60 @ 0207f980
.L_0207f982:
    movs r1, #0x57 @ 0207f982
    add r1, sp @ 0207f984
    movs r0, #0 @ 0207f986
    movs r4, #0 @ 0207f988
    mov sl, r1 @ 0207f98a
    b .L_0207f99e @ 0207f98c
    .byte 0x00, 0x00, 0x24, 0xf2, 0x08, 0x02, 0x48, 0xee, 0x08, 0x02, 0x54, 0xf2, 0x08, 0x02 @ 0207f98e
.L_0207f99c:
    adds r0, #1 @ 0207f99c
.L_0207f99e:
    adds r3, r5, r0 @ 0207f99e
    cmp ip, r3 @ 0207f9a0
    bls .L_0207f9c2 @ 0207f9a2
    mov r2, r8 @ 0207f9a4
    adds r3, r0, r2 @ 0207f9a6
    adds r3, #0x38 @ 0207f9a8
    ldrb r1, [r3] @ 0207f9aa
    ldr r3, [pc, #0x1bc] @ 0207f9ac
    ldr r3, [r3] @ 0207f9ae
    ldrb r2, [r1, r3] @ 0207f9b0
    movs r3, #7 @ 0207f9b2
    tst r2, r3 @ 0207f9b4
    beq .L_0207f9be @ 0207f9b6
    mov r3, sl @ 0207f9b8
    strb r1, [r3, r4] @ 0207f9ba
    adds r4, #1 @ 0207f9bc
.L_0207f9be:
    cmp r4, #5 @ 0207f9be
    ble .L_0207f99c @ 0207f9c0
.L_0207f9c2:
    cmp r4, #7 @ 0207f9c2
    bgt .L_0207f9da @ 0207f9c4
    mov r0, sl @ 0207f9c6
    mov r1, sp @ 0207f9c8
    adds r3, r0, r4 @ 0207f9ca
    adds r1, #0x5f @ 0207f9cc
    movs r2, #0x5f @ 0207f9ce
.L_0207f9d0:
    strb r2, [r3] @ 0207f9d0
    adds r3, #1 @ 0207f9d2
    cmp r3, r1 @ 0207f9d4
    bne .L_0207f9d0 @ 0207f9d6
    movs r4, #8 @ 0207f9d8
.L_0207f9da:
    adds r0, r5, #0 @ 0207f9da
    movs r1, #0x2e @ 0207f9dc
    bl .L_020859a0 @ 0207f9de
    cmp r0, #0 @ 0207f9e2
    bne .L_0207f9e8 @ 0207f9e4
    b .L_0207fb52 @ 0207f9e6
.L_0207f9e8:
    movs r3, #0x2e @ 0207f9e8
    mov r1, sl @ 0207f9ea
    strb r3, [r1, #8] @ 0207f9ec
    cmp r4, #0xb @ 0207f9ee
    bgt .L_0207fa12 @ 0207f9f0
    ldrb r3, [r0] @ 0207f9f2
    adds r0, #1 @ 0207f9f4
    strb r3, [r1, r4] @ 0207f9f6
    adds r4, #1 @ 0207f9f8
    cmp r0, #0 @ 0207f9fa
    beq .L_0207fa12 @ 0207f9fc
    adds r2, r1, r4 @ 0207f9fe
.L_0207fa00:
    cmp r4, #0xc @ 0207fa00
    beq .L_0207fa12 @ 0207fa02
    ldrb r3, [r0] @ 0207fa04
    adds r0, #1 @ 0207fa06
    strb r3, [r2] @ 0207fa08
    adds r4, #1 @ 0207fa0a
    adds r2, #1 @ 0207fa0c
    cmp r0, #0 @ 0207fa0e
    bne .L_0207fa00 @ 0207fa10
.L_0207fa12:
    movs r3, #0 @ 0207fa12
    mov r2, sl @ 0207fa14
    strb r3, [r2, r4] @ 0207fa16
.L_0207fa18:
    mov r4, sl @ 0207fa18
    movs r3, #0x7e @ 0207fa1a
    strb r3, [r4, #5] @ 0207fa1c
    movs r4, #0 @ 0207fa1e
    b .L_0207fa28 @ 0207fa20
.L_0207fa22:
    cmp r4, #0x64 @ 0207fa22
    bne .L_0207fa28 @ 0207fa24
    b .L_0207f5e2 @ 0207fa26
.L_0207fa28:
    adds r4, #1 @ 0207fa28
    movs r1, #0xa @ 0207fa2a
    adds r0, r4, #0 @ 0207fa2c
    bl .L_020859e0 @ 0207fa2e
    movs r1, #0xa @ 0207fa32
    bl .L_020859e8 @ 0207fa34
    mov r5, sl @ 0207fa38
    adds r1, #0x30 @ 0207fa3a
    strb r1, [r5, #6] @ 0207fa3c
    adds r0, r4, #0 @ 0207fa3e
    movs r1, #0xa @ 0207fa40
    bl .L_020859e8 @ 0207fa42
    adds r1, #0x30 @ 0207fa46
    strb r1, [r5, #7] @ 0207fa48
    adds r0, r6, #0 @ 0207fa4a
    mov r1, sl @ 0207fa4c
    adds r2, r7, #0 @ 0207fa4e
    bl .L_0207efe4 @ 0207fa50
    cmp r0, #0 @ 0207fa54
    bne .L_0207fa22 @ 0207fa56
    cmp r4, #0x64 @ 0207fa58
    bne .L_0207fa5e @ 0207fa5a
    b .L_0207f5e2 @ 0207fa5c
.L_0207fa5e:
    mov r0, sl @ 0207fa5e
    bl .L_020859d8 @ 0207fa60
    mov r1, sl @ 0207fa64
    movs r2, #8 @ 0207fa66
    mov r0, r8 @ 0207fa68
    bl .L_02085988 @ 0207fa6a
    mov r0, r8 @ 0207fa6e
    add r1, sp, #0x60 @ 0207fa70
    movs r2, #3 @ 0207fa72
    adds r0, #8 @ 0207fa74
    bl .L_02085988 @ 0207fa76
    movs r2, #0 @ 0207fa7a
    movs r1, #0x20 @ 0207fa7c
.L_0207fa7e:
    mov r0, r8 @ 0207fa7e
    ldrb r3, [r2, r0] @ 0207fa80
    cmp r3, #0x1f @ 0207fa82
    bhi .L_0207fa88 @ 0207fa84
    strb r1, [r2, r0] @ 0207fa86
.L_0207fa88:
    adds r2, #1 @ 0207fa88
    cmp r2, #0xa @ 0207fa8a
    bne .L_0207fa7e @ 0207fa8c
    mov r0, r8 @ 0207fa8e
    ldrb r0, [r0] @ 0207fa90
    movs r1, #1 @ 0207fa92
    str r0, [sp, #0xc] @ 0207fa94
    b .L_0207fab2 @ 0207fa96
.L_0207fa98:
    movs r2, #0x80 @ 0207fa98
.L_0207fa9a:
    ldr r4, [sp, #0xc] @ 0207fa9a
    mov r5, r8 @ 0207fa9c
    lsrs r3, r4, #1 @ 0207fa9e
    adds r3, r2, r3 @ 0207faa0
    ldrb r2, [r1, r5] @ 0207faa2
    adds r1, #1 @ 0207faa4
    adds r3, r3, r2 @ 0207faa6
    lsls r3, r3, #0x18 @ 0207faa8
    lsrs r3, r3, #0x18 @ 0207faaa
    str r3, [sp, #0xc] @ 0207faac
    cmp r1, #0xb @ 0207faae
    beq .L_0207fabc @ 0207fab0
.L_0207fab2:
    ldr r2, [sp, #0xc] @ 0207fab2
    lsls r2, r2, #0x1f @ 0207fab4
    bmi .L_0207fa98 @ 0207fab6
    movs r2, #0 @ 0207fab8
    b .L_0207fa9a @ 0207faba
.L_0207fabc:
    mov r0, sb @ 0207fabc
    movs r1, #0xd @ 0207fabe
    adds r0, #0xc @ 0207fac0
    bl .L_02085980 @ 0207fac2
    adds r0, #1 @ 0207fac6
    str r0, [sp, #8] @ 0207fac8
    movs r3, #0 @ 0207faca
    add r0, sp, #0x64 @ 0207facc
    str r7, [sp, #0x64] @ 0207face
    add r7, sp, #0x70 @ 0207fad0
    str r3, [sp, #0x6c] @ 0207fad2
    str r3, [sp, #0x68] @ 0207fad4
    adds r2, r7, #0 @ 0207fad6
    adds r3, r0, #0 @ 0207fad8
    ldm r3!, {r1, r4, r5} @ 0207fada
    stm r2!, {r1, r4, r5} @ 0207fadc
    mov sb, r0 @ 0207fade
    ldr r0, [sp, #8] @ 0207fae0
    cmp r0, #0 @ 0207fae2
    bne .L_0207fae8 @ 0207fae4
    b .L_0207f7b0 @ 0207fae6
.L_0207fae8:
    adds r4, r0, #0 @ 0207fae8
    b .L_0207f6c4 @ 0207faea
.L_0207faec:
    adds r2, r4, #0 @ 0207faec
    cmp r4, #7 @ 0207faee
    ble .L_0207faf4 @ 0207faf0
    b .L_0207f944 @ 0207faf2
.L_0207faf4:
    adds r3, r1, #0 @ 0207faf4
    movs r0, #0x20 @ 0207faf6
.L_0207faf8:
    adds r2, #1 @ 0207faf8
    strb r0, [r3] @ 0207fafa
    adds r3, #1 @ 0207fafc
    cmp r2, #7 @ 0207fafe
    ble .L_0207faf8 @ 0207fb00
    b .L_0207f944 @ 0207fb02
.L_0207fb04:
    adds r3, r1, #0 @ 0207fb04
    adds r3, #0x39 @ 0207fb06
    ldrb r1, [r3] @ 0207fb08
    cmp r1, #0 @ 0207fb0a
    bne .L_0207fb10 @ 0207fb0c
    b .L_0207f950 @ 0207fb0e
.L_0207fb10:
    cmp r2, #0xa @ 0207fb10
    bgt .L_0207fb32 @ 0207fb12
    mov r3, r8 @ 0207fb14
    adds r0, r3, r2 @ 0207fb16
    adds r3, r4, #0 @ 0207fb18
    adds r3, #0x3a @ 0207fb1a
    add r3, r8 @ 0207fb1c
.L_0207fb1e:
    strb r1, [r0] @ 0207fb1e
    ldrb r1, [r3] @ 0207fb20
    adds r2, #1 @ 0207fb22
    cmp r1, #0 @ 0207fb24
    bne .L_0207fb2a @ 0207fb26
    b .L_0207f950 @ 0207fb28
.L_0207fb2a:
    adds r0, #1 @ 0207fb2a
    adds r3, #1 @ 0207fb2c
    cmp r2, #0xb @ 0207fb2e
    bne .L_0207fb1e @ 0207fb30
.L_0207fb32:
    add r0, sp, #0x64 @ 0207fb32
    movs r3, #0 @ 0207fb34
    str r7, [sp, #0x64] @ 0207fb36
    add r7, sp, #0x70 @ 0207fb38
    str r3, [sp, #0x6c] @ 0207fb3a
    str r3, [sp, #0x68] @ 0207fb3c
    adds r2, r7, #0 @ 0207fb3e
    adds r3, r0, #0 @ 0207fb40
    ldm r3!, {r1, r4, r5} @ 0207fb42
    stm r2!, {r1, r4, r5} @ 0207fb44
    mov sb, r0 @ 0207fb46
    movs r4, #1 @ 0207fb48
    movs r0, #0 @ 0207fb4a
    str r4, [sp, #8] @ 0207fb4c
    str r0, [sp, #0xc] @ 0207fb4e
    b .L_0207f6c4 @ 0207fb50
.L_0207fb52:
    mov r3, sl @ 0207fb52
    strb r0, [r3, #8] @ 0207fb54
    strb r0, [r3, #9] @ 0207fb56
    strb r0, [r3, #0xa] @ 0207fb58
    strb r0, [r3, #0xb] @ 0207fb5a
    strb r0, [r3, #0xc] @ 0207fb5c
    b .L_0207fa18 @ 0207fb5e
.L_0207fb60:
    adds r0, r5, #0 @ 0207fb60
    movs r1, #0 @ 0207fb62
    bl .L_02085958 @ 0207fb64
    mov ip, r0 @ 0207fb68
    b .L_0207f982 @ 0207fb6a
    .byte 0x94, 0xf3, 0x08, 0x02 @ 0207fb6c
