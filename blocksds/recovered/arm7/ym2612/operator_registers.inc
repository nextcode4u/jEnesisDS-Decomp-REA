.L_037f8a88:
@ FUN_037f8a88 at 0x037f8a88
    cmp r1, r2 @ 037f8a88
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 037f8a8c
    mov ip, r2 @ 037f8a90
    mov r5, r0 @ 037f8a94
    ldrsh lr, [r0, #0x1a] @ 037f8a98
    bhs .L_037f8b94 @ 037f8a9c
    mov sb, #0x3fc @ 037f8aa0
    add sb, sb, #2 @ 037f8aa4
    mov sl, #1 @ 037f8aa8
.L_037f8aac:
    ldrb r3, [r5, #0x17] @ 037f8aac
    sub r3, r3, #1 @ 037f8ab0
    add r1, r1, #1 @ 037f8ab4
    cmp r3, #3 @ 037f8ab8
    ldrls pc, [pc, r3, lsl #2] @ 037f8abc
    b .L_037f8b8c @ 037f8ac0
    .byte 0xb4, 0x8b, 0x7f, 0x03, 0x84, 0x8c, 0x7f, 0x03, 0xd4, 0x8a, 0x7f, 0x03, 0x4c, 0x8d, 0x7f, 0x03 @ 037f8ac4
    ldr r7, [r5, #0x24] @ 037f8ad4
    lsr r6, r7, #0x18 @ 037f8ad8
    lsl r3, sl, r6 @ 037f8adc
    sub r0, r3, #1 @ 037f8ae0
    b .L_037f8aec @ 037f8ae4
.L_037f8ae8:
    add r1, r1, #1 @ 037f8ae8
.L_037f8aec:
    ands r2, r1, r0 @ 037f8aec
    moveq r3, #0 @ 037f8af0
    movne r3, #1 @ 037f8af4
    cmp ip, r1 @ 037f8af8
    movls r3, #0 @ 037f8afc
    andhi r3, r3, #1 @ 037f8b00
    cmp r3, #0 @ 037f8b04
    bne .L_037f8ae8 @ 037f8b08
    cmp r2, #0 @ 037f8b0c
    bne .L_037f8b8c @ 037f8b10
    ldr r4, [r5, #0x1c] @ 037f8b14
    cmp r4, lr @ 037f8b18
    movle r3, #0 @ 037f8b1c
    movgt r3, #1 @ 037f8b20
    cmp ip, r1 @ 037f8b24
    movls r3, #0 @ 037f8b28
    cmp r3, #0 @ 037f8b2c
    beq .L_037f8b80 @ 037f8b30
    mov r8, #1 @ 037f8b34
.L_037f8b38:
    cmp r2, #0 @ 037f8b38
    bne .L_037f8b5c @ 037f8b3c
    lsr r3, r1, r6 @ 037f8b40
    and r3, r3, #7 @ 037f8b44
    add r3, r3, r3, lsl #1 @ 037f8b48
    lsr r3, r7, r3 @ 037f8b4c
    and r3, r3, #7 @ 037f8b50
    lsl r3, r8, r3 @ 037f8b54
    add lr, lr, r3, asr #1 @ 037f8b58
.L_037f8b5c:
    add r1, r1, #1 @ 037f8b5c
    cmp lr, r4 @ 037f8b60
    movge r3, #0 @ 037f8b64
    movlt r3, #1 @ 037f8b68
    cmp ip, r1 @ 037f8b6c
    movls r3, #0 @ 037f8b70
    cmp r3, #0 @ 037f8b74
    and r2, r1, r0 @ 037f8b78
    bne .L_037f8b38 @ 037f8b7c
.L_037f8b80:
    cmp r4, lr @ 037f8b80
    movle r3, #2 @ 037f8b84
    strble r3, [r5, #0x17] @ 037f8b88
.L_037f8b8c:
    cmp ip, r1 @ 037f8b8c
    bhi .L_037f8aac @ 037f8b90
.L_037f8b94:
    lsl r3, lr, #0x10 @ 037f8b94
    lsr r1, r3, #0x10 @ 037f8b98
    mov r2, lr @ 037f8b9c
.L_037f8ba0:
    ldrh r0, [r5, #0x18] @ 037f8ba0
    add r0, r0, r2 @ 037f8ba4
    strh r1, [r5, #0x1a] @ 037f8ba8
    pop {r4, r5, r6, r7, r8, sb, sl, lr} @ 037f8bac
    bx lr @ 037f8bb0
    ldr r7, [r5, #0x2c] @ 037f8bb4
    lsr r6, r7, #0x18 @ 037f8bb8
    lsl r3, sl, r6 @ 037f8bbc
    sub r0, r3, #1 @ 037f8bc0
    b .L_037f8bcc @ 037f8bc4
.L_037f8bc8:
    add r1, r1, #1 @ 037f8bc8
.L_037f8bcc:
    ands r2, r1, r0 @ 037f8bcc
    moveq r3, #0 @ 037f8bd0
    movne r3, #1 @ 037f8bd4
    cmp ip, r1 @ 037f8bd8
    movls r3, #0 @ 037f8bdc
    andhi r3, r3, #1 @ 037f8be0
    cmp r3, #0 @ 037f8be4
    bne .L_037f8bc8 @ 037f8be8
    cmp r2, #0 @ 037f8bec
    bne .L_037f8b8c @ 037f8bf0
    cmp lr, sb @ 037f8bf4
    movgt r3, #0 @ 037f8bf8
    movle r3, #1 @ 037f8bfc
    cmp ip, r1 @ 037f8c00
    movls r3, #0 @ 037f8c04
    cmp r3, #0 @ 037f8c08
    beq .L_037f8c64 @ 037f8c0c
    mov r4, #0x3fc @ 037f8c10
    add r4, r4, #2 @ 037f8c14
    mov r8, #1 @ 037f8c18
.L_037f8c1c:
    cmp r2, #0 @ 037f8c1c
    bne .L_037f8c40 @ 037f8c20
    lsr r3, r1, r6 @ 037f8c24
    and r3, r3, #7 @ 037f8c28
    add r3, r3, r3, lsl #1 @ 037f8c2c
    lsr r3, r7, r3 @ 037f8c30
    and r3, r3, #7 @ 037f8c34
    lsl r3, r8, r3 @ 037f8c38
    add lr, lr, r3, asr #1 @ 037f8c3c
.L_037f8c40:
    add r1, r1, #1 @ 037f8c40
    cmp lr, r4 @ 037f8c44
    movgt r3, #0 @ 037f8c48
    movle r3, #1 @ 037f8c4c
    cmp ip, r1 @ 037f8c50
    movls r3, #0 @ 037f8c54
    cmp r3, #0 @ 037f8c58
    and r2, r1, r0 @ 037f8c5c
    bne .L_037f8c1c @ 037f8c60
.L_037f8c64:
    cmp lr, sb @ 037f8c64
    movgt r2, #0x3fc @ 037f8c68
    addgt r2, r2, #3 @ 037f8c6c
    movgt r3, #0 @ 037f8c70
    movgt r1, r2 @ 037f8c74
    strbgt r3, [r5, #0x17] @ 037f8c78
    bgt .L_037f8ba0 @ 037f8c7c
    b .L_037f8b94 @ 037f8c80
    ldr r7, [r5, #0x28] @ 037f8c84
    lsr r6, r7, #0x18 @ 037f8c88
    lsl r3, sl, r6 @ 037f8c8c
    sub r0, r3, #1 @ 037f8c90
    b .L_037f8c9c @ 037f8c94
.L_037f8c98:
    add r1, r1, #1 @ 037f8c98
.L_037f8c9c:
    ands r2, r1, r0 @ 037f8c9c
    moveq r3, #0 @ 037f8ca0
    movne r3, #1 @ 037f8ca4
    cmp ip, r1 @ 037f8ca8
    movls r3, #0 @ 037f8cac
    andhi r3, r3, #1 @ 037f8cb0
    cmp r3, #0 @ 037f8cb4
    bne .L_037f8c98 @ 037f8cb8
    cmp r2, #0 @ 037f8cbc
    bne .L_037f8b8c @ 037f8cc0
    cmp ip, r1 @ 037f8cc4
    movls r3, #0 @ 037f8cc8
    movhi r3, #1 @ 037f8ccc
    cmp lr, sb @ 037f8cd0
    movgt r3, #0 @ 037f8cd4
    cmp r3, #0 @ 037f8cd8
    beq .L_037f8d34 @ 037f8cdc
    mov r4, #0x3fc @ 037f8ce0
    add r4, r4, #2 @ 037f8ce4
    mov r8, #1 @ 037f8ce8
.L_037f8cec:
    cmp r2, #0 @ 037f8cec
    bne .L_037f8d10 @ 037f8cf0
    lsr r3, r1, r6 @ 037f8cf4
    and r3, r3, #7 @ 037f8cf8
    add r3, r3, r3, lsl #1 @ 037f8cfc
    lsr r3, r7, r3 @ 037f8d00
    and r3, r3, #7 @ 037f8d04
    lsl r3, r8, r3 @ 037f8d08
    add lr, lr, r3, asr #1 @ 037f8d0c
.L_037f8d10:
    add r1, r1, #1 @ 037f8d10
    cmp ip, r1 @ 037f8d14
    movls r3, #0 @ 037f8d18
    movhi r3, #1 @ 037f8d1c
    cmp lr, r4 @ 037f8d20
    movgt r3, #0 @ 037f8d24
    cmp r3, #0 @ 037f8d28
    and r2, r1, r0 @ 037f8d2c
    bne .L_037f8cec @ 037f8d30
.L_037f8d34:
    cmp lr, sb @ 037f8d34
    ble .L_037f8b8c @ 037f8d38
    mov r2, #0x3fc @ 037f8d3c
    add r2, r2, #3 @ 037f8d40
    mov r1, r2 @ 037f8d44
    b .L_037f8ba0 @ 037f8d48
    ldr r7, [r5, #0x20] @ 037f8d4c
    lsr r6, r7, #0x18 @ 037f8d50
    lsl r3, sl, r6 @ 037f8d54
    sub r0, r3, #1 @ 037f8d58
    b .L_037f8d64 @ 037f8d5c
.L_037f8d60:
    add r1, r1, #1 @ 037f8d60
.L_037f8d64:
    ands r2, r1, r0 @ 037f8d64
    moveq r3, #0 @ 037f8d68
    movne r3, #1 @ 037f8d6c
    cmp ip, r1 @ 037f8d70
    movls r3, #0 @ 037f8d74
    andhi r3, r3, #1 @ 037f8d78
    cmp r3, #0 @ 037f8d7c
    bne .L_037f8d60 @ 037f8d80
    cmp r2, #0 @ 037f8d84
    bne .L_037f8b8c @ 037f8d88
    cmp lr, #0 @ 037f8d8c
    movle r3, #0 @ 037f8d90
    movgt r3, #1 @ 037f8d94
    cmp ip, r1 @ 037f8d98
    movls r3, #0 @ 037f8d9c
    cmp r3, #0 @ 037f8da0
    beq .L_037f8e00 @ 037f8da4
    mov r8, #1 @ 037f8da8
.L_037f8dac:
    cmp r2, #0 @ 037f8dac
    mvn r4, lr @ 037f8db0
    bne .L_037f8ddc @ 037f8db4
    lsr r3, r1, r6 @ 037f8db8
    and r3, r3, #7 @ 037f8dbc
    add r3, r3, r3, lsl #1 @ 037f8dc0
    lsr r3, r7, r3 @ 037f8dc4
    and r3, r3, #7 @ 037f8dc8
    lsl r3, r8, r3 @ 037f8dcc
    asr r3, r3, #1 @ 037f8dd0
    mul r2, r3, r4 @ 037f8dd4
    add lr, lr, r2, asr #4 @ 037f8dd8
.L_037f8ddc:
    add r1, r1, #1 @ 037f8ddc
    cmp lr, #0 @ 037f8de0
    movle r3, #0 @ 037f8de4
    movgt r3, #1 @ 037f8de8
    cmp ip, r1 @ 037f8dec
    movls r3, #0 @ 037f8df0
    cmp r3, #0 @ 037f8df4
    and r2, r1, r0 @ 037f8df8
    bne .L_037f8dac @ 037f8dfc
.L_037f8e00:
    cmp lr, #0 @ 037f8e00
    movle r3, #3 @ 037f8e04
    movle lr, #0 @ 037f8e08
    strble r3, [r5, #0x17] @ 037f8e0c
    cmp ip, r1 @ 037f8e10
    bhi .L_037f8aac @ 037f8e14
    b .L_037f8b94 @ 037f8e18
.L_037f8e1c:
@ FUN_037f8e1c at 0x037f8e1c
    push {r4, r5, r6, r7, r8, lr} @ 037f8e1c
    and r5, r0, #3 @ 037f8e20
    cmp r5, #3 @ 037f8e24
    mov r4, r1 @ 037f8e28
    beq .L_037f8e88 @ 037f8e2c
    cmp r0, #0xff @ 037f8e30
    addgt r5, r5, #3 @ 037f8e34
    asr r3, r0, #2 @ 037f8e38
    lsl lr, r5, #1 @ 037f8e3c
    and ip, r3, #3 @ 037f8e40
    add r2, lr, r5 @ 037f8e44
    ldr r3, [pc, #0x3a0] @ 037f8e48
    add r2, r2, r2, lsl #3 @ 037f8e4c
    and r1, r0, #0xf0 @ 037f8e50
    add r7, r3, r2, lsl #3 @ 037f8e54
    cmp r1, #0x60 @ 037f8e58
    add r3, ip, ip, lsl #1 @ 037f8e5c
    add r6, r7, r3, lsl #4 @ 037f8e60
    beq .L_037f8ef4 @ 037f8e64
    ble .L_037f8e98 @ 037f8e68
    cmp r1, #0x80 @ 037f8e6c
    beq .L_037f9014 @ 037f8e70
    ble .L_037f8f40 @ 037f8e74
    cmp r1, #0xa0 @ 037f8e78
    beq .L_037f90e0 @ 037f8e7c
    cmp r1, #0xb0 @ 037f8e80
    beq .L_037f9064 @ 037f8e84
.L_037f8e88:
    mov r8, #0 @ 037f8e88
.L_037f8e8c:
    mov r0, r8 @ 037f8e8c
    pop {r4, r5, r6, r7, r8, lr} @ 037f8e90
    bx lr @ 037f8e94
.L_037f8e98:
    cmp r1, #0x40 @ 037f8e98
    andeq r3, r4, #0x7f @ 037f8e9c
    lsleq r3, r3, #3 @ 037f8ea0
    moveq r8, #1 @ 037f8ea4
    strheq r3, [r6, #0x18] @ 037f8ea8
    beq .L_037f8e8c @ 037f8eac
    cmp r1, #0x50 @ 037f8eb0
    beq .L_037f8f94 @ 037f8eb4
    cmp r1, #0x30 @ 037f8eb8
    bne .L_037f8e88 @ 037f8ebc
    ands r3, r4, #0xf @ 037f8ec0
    lslne r1, r3, #1 @ 037f8ec4
    ldr r2, [pc, #0x324] @ 037f8ec8
    lsl r3, r4, #3 @ 037f8ecc
    and r3, r3, #0x380 @ 037f8ed0
    add r3, r3, r2 @ 037f8ed4
    moveq r1, #1 @ 037f8ed8
    mvn r2, #0 @ 037f8edc
    mov r8, #1 @ 037f8ee0
    str r3, [r6] @ 037f8ee4
    str r2, [r7, #0x10] @ 037f8ee8
    str r1, [r6, #8] @ 037f8eec
    b .L_037f8e8c @ 037f8ef0
.L_037f8ef4:
    ands r0, r4, #0x1f @ 037f8ef4
    lslne r3, r0, #1 @ 037f8ef8
    moveq r3, r0 @ 037f8efc
    ldrb r0, [r6, #0x15] @ 037f8f00
    addne r3, r3, #0x20 @ 037f8f04
    add r0, r3, r0 @ 037f8f08
    moveq lr, r3 @ 037f8f0c
    movne lr, r3 @ 037f8f10
    ldr r3, [pc, #0x2dc] @ 037f8f14
    ldr r2, [pc, #0x2dc] @ 037f8f18
    ldrb ip, [r3, r0] @ 037f8f1c
    ldr r3, [pc, #0x2d8] @ 037f8f20
    ldr r1, [r2, ip, lsl #2] @ 037f8f24
    ldrb r2, [r3, r0] @ 037f8f28
    mov r8, #1 @ 037f8f2c
    orr r1, r1, r2, lsl #24 @ 037f8f30
    str r1, [r6, #0x24] @ 037f8f34
    strb lr, [r6, #5] @ 037f8f38
    b .L_037f8e8c @ 037f8f3c
.L_037f8f40:
    cmp r1, #0x70 @ 037f8f40
    bne .L_037f8e88 @ 037f8f44
    ands r0, r4, #0x1f @ 037f8f48
    lslne r3, r0, #1 @ 037f8f4c
    moveq r3, r0 @ 037f8f50
    ldrb r0, [r6, #0x15] @ 037f8f54
    addne r3, r3, #0x20 @ 037f8f58
    add r0, r3, r0 @ 037f8f5c
    moveq lr, r3 @ 037f8f60
    movne lr, r3 @ 037f8f64
    ldr r3, [pc, #0x288] @ 037f8f68
    ldr r2, [pc, #0x288] @ 037f8f6c
    ldrb ip, [r3, r0] @ 037f8f70
    ldr r3, [pc, #0x284] @ 037f8f74
    ldr r1, [r2, ip, lsl #2] @ 037f8f78
    ldrb r2, [r3, r0] @ 037f8f7c
    mov r8, #1 @ 037f8f80
    orr r1, r1, r2, lsl #24 @ 037f8f84
    str r1, [r6, #0x28] @ 037f8f88
    strb lr, [r6, #6] @ 037f8f8c
    b .L_037f8e8c @ 037f8f90
.L_037f8f94:
    ands r3, r4, #0x1f @ 037f8f94
    lslne r3, r3, #1 @ 037f8f98
    moveq r1, r3 @ 037f8f9c
    addne r1, r3, #0x20 @ 037f8fa0
    asr r3, r4, #6 @ 037f8fa4
    ldrb r2, [r6, #0x14] @ 037f8fa8
    rsb r3, r3, #3 @ 037f8fac
    and r3, r3, #0xff @ 037f8fb0
    cmp r2, r3 @ 037f8fb4
    strb r3, [r6, #0x14] @ 037f8fb8
    mvnne r3, #0 @ 037f8fbc
    strb r1, [r6, #4] @ 037f8fc0
    movne r8, #1 @ 037f8fc4
    strne r3, [r7, #0x10] @ 037f8fc8
    bne .L_037f8e8c @ 037f8fcc
    ldrb r3, [r6, #0x15] @ 037f8fd0
    ldrb r2, [r6, #4] @ 037f8fd4
    add r0, r2, r3 @ 037f8fd8
    cmp r0, #0x5d @ 037f8fdc
    ldrle r3, [pc, #0x218] @ 037f8fe0
    ldrle r2, [pc, #0x20c] @ 037f8fe4
    ldrble r1, [r3, r0] @ 037f8fe8
    ldrble r3, [r2, r0] @ 037f8fec
    ldr r2, [pc, #0x204] @ 037f8ff0
    movgt r3, #0x11 @ 037f8ff4
    ldr r3, [r2, r3, lsl #2] @ 037f8ff8
    movgt r1, #0 @ 037f8ffc
    lslle r1, r1, #0x18 @ 037f9000
    orr r3, r1, r3 @ 037f9004
    mov r8, #1 @ 037f9008
    str r3, [r6, #0x20] @ 037f900c
    b .L_037f8e8c @ 037f9010
.L_037f9014:
    and r0, r4, #0xf @ 037f9014
    lsl r0, r0, #2 @ 037f9018
    ldrb r1, [r6, #0x15] @ 037f901c
    add r0, r0, #0x22 @ 037f9020
    ldr r3, [pc, #0x1cc] @ 037f9024
    add r1, r0, r1 @ 037f9028
    ldrb ip, [r3, r1] @ 037f902c
    ldr r2, [pc, #0x1c8] @ 037f9030
    ldr r3, [pc, #0x1c0] @ 037f9034
    ldrb lr, [r2, r1] @ 037f9038
    ldr r2, [r3, ip, lsl #2] @ 037f903c
    ldr r3, [pc, #0x1bc] @ 037f9040
    asr r1, r4, #4 @ 037f9044
    ldr ip, [r3, r1, lsl #2] @ 037f9048
    orr r2, r2, lr, lsl #24 @ 037f904c
    mov r8, #1 @ 037f9050
    str r2, [r6, #0x2c] @ 037f9054
    str ip, [r6, #0x1c] @ 037f9058
    strb r0, [r6, #7] @ 037f905c
    b .L_037f8e8c @ 037f9060
.L_037f9064:
    cmp ip, #0 @ 037f9064
    beq .L_037f91d0 @ 037f9068
    cmp ip, #1 @ 037f906c
    bne .L_037f8e88 @ 037f9070
    mov r3, #3 @ 037f9074
    lsl r3, r3, lr @ 037f9078
    ldr r0, [pc, #0x184] @ 037f907c
    ldr r2, [r0, #0x44c] @ 037f9080
    mvn r3, r3 @ 037f9084
    and r1, r4, #0xc0 @ 037f9088
    asr r1, r1, #6 @ 037f908c
    and r2, r2, r3 @ 037f9090
    orr r2, r2, r1, lsl lr @ 037f9094
    mov lr, #0x4000000 @ 037f9098
    str r2, [r0, #0x44c] @ 037f909c
    add lr, lr, #0x400 @ 037f90a0
    ldr r3, [lr, r5, lsl #4] @ 037f90a4
    ldr r2, [pc, #0x15c] @ 037f90a8
    cmp r3, #0 @ 037f90ac
    ldr r3, [pc, #0x158] @ 037f90b0
    ldr ip, [r2, r1, lsl #2] @ 037f90b4
    ldr r0, [r3, r1, lsl #2] @ 037f90b8
    orrlt r3, ip, #0xa8000000 @ 037f90bc
    orrlt r3, r3, r0, lsl #16 @ 037f90c0
    addlt r2, r5, #6 @ 037f90c4
    strlt r3, [lr, r5, lsl #4] @ 037f90c8
    movlt r8, #1 @ 037f90cc
    strlt r3, [lr, r2, lsl #4] @ 037f90d0
    blt .L_037f8e8c @ 037f90d4
.L_037f90d8:
    mov r8, #1 @ 037f90d8
    b .L_037f8e8c @ 037f90dc
.L_037f90e0:
    cmp ip, #3 @ 037f90e0
    ldrls pc, [pc, ip, lsl #2] @ 037f90e4
    b .L_037f8e88 @ 037f90e8
    .byte 0xfc, 0x90, 0x7f, 0x03, 0x44, 0x91, 0x7f, 0x03, 0x58, 0x91, 0x7f, 0x03, 0xb4, 0x91, 0x7f, 0x03 @ 037f90ec
    ldr r3, [pc, #0x104] @ 037f90fc
    ldrb ip, [r3, #0x13] @ 037f9100
    ldr r3, [pc, #0x108] @ 037f9104
    and r0, ip, #7 @ 037f9108
    add r0, r4, r0, lsl #8 @ 037f910c
    ldr lr, [r3, r0, lsl #3] @ 037f9110
    lsr ip, ip, #3 @ 037f9114
    rsb r3, ip, #7 @ 037f9118
    lsr lr, lr, r3 @ 037f911c
    ldr r2, [pc, #0xf0] @ 037f9120
    ldrb r1, [r2, r0, lsr #7] @ 037f9124
    mvn r3, #0 @ 037f9128
    orr r1, r1, ip, lsl #2 @ 037f912c
    mov r8, #1 @ 037f9130
    str r3, [r7, #0x10] @ 037f9134
    strb r1, [r7, #0xcc] @ 037f9138
    str lr, [r7, #0xd0] @ 037f913c
    b .L_037f8e8c @ 037f9140
    ldr r3, [pc, #0xbc] @ 037f9144
    and r2, r4, #0x3f @ 037f9148
    mov r8, #0 @ 037f914c
    strb r2, [r3, #0x13] @ 037f9150
    b .L_037f8e8c @ 037f9154
    cmp r0, #0xff @ 037f9158
    bgt .L_037f90d8 @ 037f915c
    ldr lr, [pc, #0xa0] @ 037f9160
    ldrb r1, [lr, #0x43c] @ 037f9164
    ldr r3, [pc, #0xa4] @ 037f9168
    and r0, r1, #7 @ 037f916c
    add r0, r4, r0, lsl #8 @ 037f9170
    ldr ip, [r3, r0, lsl #3] @ 037f9174
    lsr r1, r1, #3 @ 037f9178
    rsb r2, r1, #7 @ 037f917c
    lsr ip, ip, r2 @ 037f9180
    ldr r3, [pc, #0x8c] @ 037f9184
    ldrb r2, [r3, r0, lsr #7] @ 037f9188
    add r3, r5, lr @ 037f918c
    orr r2, r2, r1, lsl #2 @ 037f9190
    add r4, lr, r5, lsl #2 @ 037f9194
    strb r2, [r3, #0x43d] @ 037f9198
    mov r8, #1 @ 037f919c
    mvn r3, #0 @ 037f91a0
    str r0, [r4, #0x440] @ 037f91a4
    str ip, [r4, #0x430] @ 037f91a8
    str r3, [lr, #0x620] @ 037f91ac
    b .L_037f8e8c @ 037f91b0
    cmp r0, #0xff @ 037f91b4
    ldrle r3, [pc, #0x48] @ 037f91b8
    andle r2, r4, #0x3f @ 037f91bc
    movle r8, #0 @ 037f91c0
    strble r2, [r3, #0x43c] @ 037f91c4
    ble .L_037f8e8c @ 037f91c8
    b .L_037f8e88 @ 037f91cc
.L_037f91d0:
    asr r3, r4, #3 @ 037f91d0
    ands r3, r3, #7 @ 037f91d4
    and r2, r4, #7 @ 037f91d8
    addne r3, r3, #6 @ 037f91dc
    mov r8, #1 @ 037f91e0
    strb r2, [r7, #0xc0] @ 037f91e4
    strb r3, [r7, #0xc1] @ 037f91e8
    b .L_037f8e8c @ 037f91ec
    .byte 0x08, 0x73, 0x80, 0x03, 0xd4, 0x6e, 0x80, 0x03, 0xa8, 0x6b, 0x80, 0x03, 0x28, 0x6c, 0x80, 0x03 @ 037f91f0
    .byte 0x28, 0x6b, 0x80, 0x03, 0x74, 0x6c, 0x80, 0x03, 0xa8, 0x6e, 0x80, 0x03, 0x18, 0x6b, 0x80, 0x03 @ 037f9200
    .byte 0x08, 0x6b, 0x80, 0x03, 0x20, 0x78, 0x80, 0x03, 0xf8, 0x6a, 0x80, 0x03, 0x00, 0x00, 0x51, 0xe3 @ 037f9210
    .byte 0x1e, 0xff, 0x2f, 0xd1, 0x00, 0x30, 0xa0, 0xe3, 0x01, 0x10, 0x51, 0xe2, 0xb2, 0x30, 0xc0, 0xe0 @ 037f9220
    .byte 0xfb, 0xff, 0xff, 0x1a, 0x1e, 0xff, 0x2f, 0xe1 @ 037f9230
.L_037f9238:
@ FUN_037f9238 at 0x037f9238
    push {r4, r5, lr} @ 037f9238
    ldr r5, [pc, #0x14c] @ 037f923c
    mov r3, #0 @ 037f9240
    add ip, r5, #0x460 @ 037f9244
    str r3, [r5, #0x454] @ 037f9248
    str r3, [r5, #0x450] @ 037f924c
    str r3, [r5, #0x45c] @ 037f9250
    strb r3, [r5, #0x11] @ 037f9254
    strb r3, [r5, #0x12] @ 037f9258
    str r3, [r5, #0x14] @ 037f925c
    str r3, [r5, #0x18] @ 037f9260
    strb r3, [r5, #0x20] @ 037f9264
    str r3, [r5, #0x24] @ 037f9268
    sub sp, sp, #4 @ 037f926c
    add r4, r5, #0x970 @ 037f9270
    mvn lr, #0xfc00 @ 037f9274
    rsb r0, r5, ip, lsl #1 @ 037f9278
.L_037f927c:
    str r3, [r0, #-0x390] @ 037f927c
    mov r2, ip @ 037f9280
    mov r1, r3 @ 037f9284
.L_037f9288:
    add r1, r1, #1 @ 037f9288
    cmp r1, #4 @ 037f928c
    strb r3, [r2, #0x17] @ 037f9290
    strh lr, [r2, #0x1a] @ 037f9294
    add r2, r2, #0x30 @ 037f9298
    bne .L_037f9288 @ 037f929c
    add ip, ip, #0xd8 @ 037f92a0
    cmp ip, r4 @ 037f92a4
    add r0, r0, #0xd8 @ 037f92a8
    bne .L_037f927c @ 037f92ac
    add r1, r1, #0xbc @ 037f92b0
    mov r0, #0xb6 @ 037f92b4
    bl .L_037f8e1c @ 037f92b8
    mov r0, #0x1b4 @ 037f92bc
    mov r1, #0xc0 @ 037f92c0
    add r0, r0, #2 @ 037f92c4
    bl .L_037f8e1c @ 037f92c8
    mov r1, #0xc0 @ 037f92cc
    mov r0, #0xb5 @ 037f92d0
    bl .L_037f8e1c @ 037f92d4
    mov r0, #0x1b4 @ 037f92d8
    mov r1, #0xc0 @ 037f92dc
    add r0, r0, #1 @ 037f92e0
    bl .L_037f8e1c @ 037f92e4
    mov r1, #0xc0 @ 037f92e8
    mov r0, #0xb4 @ 037f92ec
    bl .L_037f8e1c @ 037f92f0
    mov r0, #0x1b4 @ 037f92f4
    mov r1, #0xc0 @ 037f92f8
    bl .L_037f8e1c @ 037f92fc
    mov r4, #0xb2 @ 037f9300
.L_037f9304:
    mov r0, r4 @ 037f9304
    mov r1, #0 @ 037f9308
    bl .L_037f8e1c @ 037f930c
    orr r0, r4, #0x100 @ 037f9310
    mov r1, #0 @ 037f9314
    sub r4, r4, #1 @ 037f9318
    bl .L_037f8e1c @ 037f931c
    cmp r4, #0x2f @ 037f9320
    bne .L_037f9304 @ 037f9324
    mov r1, #0 @ 037f9328
    mov r0, #0x26 @ 037f932c
    bl .L_037f8e1c @ 037f9330
    mov r1, #0 @ 037f9334
    mov r0, #0x25 @ 037f9338
    bl .L_037f8e1c @ 037f933c
    mov r1, #0 @ 037f9340
    mov r0, #0x24 @ 037f9344
    bl .L_037f8e1c @ 037f9348
    mov r1, #0 @ 037f934c
    mov r0, #0x23 @ 037f9350
    bl .L_037f8e1c @ 037f9354
    mov r1, #0 @ 037f9358
    mov r0, #0x22 @ 037f935c
    bl .L_037f8e1c @ 037f9360
    mov r1, #0 @ 037f9364
    mov r0, #0x21 @ 037f9368
    bl .L_037f8e1c @ 037f936c
    mov r0, #0x20 @ 037f9370
    mov r1, #0 @ 037f9374
    bl .L_037f8e1c @ 037f9378
    mov r3, #0 @ 037f937c
    str r3, [r5, #0x970] @ 037f9380
    add sp, sp, #4 @ 037f9384
    pop {r4, r5, lr} @ 037f9388
    bx lr @ 037f938c
    .byte 0xa8, 0x6e, 0x80, 0x03 @ 037f9390
.L_037f9394:
@ FUN_037f9394 at 0x037f9394
    push {r4, r5, r6, lr} @ 037f9394
    subs r6, r1, #0 @ 037f9398
    mov r5, r0 @ 037f939c
    beq .L_037f93c8 @ 037f93a0
    mov r4, r0 @ 037f93a4
.L_037f93a8:
    ldrb r0, [r4] @ 037f93a8
    ldrb r1, [r4, #1] @ 037f93ac
    orr r0, r0, #0x100 @ 037f93b0
    add r4, r4, #2 @ 037f93b4
    bl .L_037f8e1c @ 037f93b8
    rsb r3, r5, r4 @ 037f93bc
    cmp r6, r3 @ 037f93c0
    bhi .L_037f93a8 @ 037f93c4
.L_037f93c8:
    pop {r4, r5, r6, lr} @ 037f93c8
    bx lr @ 037f93cc
    .byte 0x00, 0x00, 0xa0, 0xe3, 0x1e, 0xff, 0x2f, 0xe1 @ 037f93d0
.L_037f93d8:
@ FUN_037f93d8 at 0x037f93d8
    ldr r3, [pc, #4] @ 037f93d8
    ldr r0, [r3, #0x970] @ 037f93dc
    bx lr @ 037f93e0
    .byte 0xa8, 0x6e, 0x80, 0x03 @ 037f93e4
