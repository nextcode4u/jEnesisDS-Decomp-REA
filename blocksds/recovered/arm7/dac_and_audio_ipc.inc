.L_037fbc68:
@ FUN_037fbc68 at 0x037fbc68
    push {r4, r5, r6, r7, r8, sl, lr} @ 037fbc68
    ldr sl, [pc, #0x84] @ 037fbc6c
    ldr r7, [pc, #0x84] @ 037fbc70
    ldr r4, [sl] @ 037fbc74
    subs r6, r1, #0 @ 037fbc78
    mov r5, r0 @ 037fbc7c
    ldrb r2, [r7, r4] @ 037fbc80
    beq .L_037fbcf0 @ 037fbc84
    ldr r8, [pc, #0x70] @ 037fbc88
    ldr r3, [pc, #0x70] @ 037fbc8c
    sub r2, r2, #0x80 @ 037fbc90
    lsl r2, r2, #0x16 @ 037fbc94
    mov r1, #0x10000 @ 037fbc98
    ldr r0, [r3] @ 037fbc9c
    ldr ip, [r8] @ 037fbca0
    lsr r2, r2, #0x10 @ 037fbca4
    sub r1, r1, #1 @ 037fbca8
    mov lr, #0 @ 037fbcac
.L_037fbcb0:
    add ip, ip, r0 @ 037fbcb0
    lsl r3, lr, #1 @ 037fbcb4
    cmp ip, r1 @ 037fbcb8
    add lr, lr, #1 @ 037fbcbc
    strh r2, [r3, r5] @ 037fbcc0
    bls .L_037fbce0 @ 037fbcc4
    add r4, r4, #1 @ 037fbcc8
    ldrb r3, [r7, r4] @ 037fbccc
    sub r3, r3, #0x80 @ 037fbcd0
    lsl r3, r3, #0x16 @ 037fbcd4
    lsr r2, r3, #0x10 @ 037fbcd8
    sub ip, ip, #0x10000 @ 037fbcdc
.L_037fbce0:
    cmp r6, lr @ 037fbce0
    bne .L_037fbcb0 @ 037fbce4
    str r4, [sl] @ 037fbce8
    str ip, [r8] @ 037fbcec
.L_037fbcf0:
    pop {r4, r5, r6, r7, r8, sl, lr} @ 037fbcf0
    bx lr @ 037fbcf4
    .byte 0x78, 0xb8, 0x80, 0x03, 0xa4, 0xb8, 0x80, 0x03, 0x7c, 0xb8, 0x80, 0x03, 0x80, 0xb8, 0x80, 0x03 @ 037fbcf8
.L_037fbd08:
    push {r4, r5, r6, r7, lr} @ 037fbd08
    ldr r6, [pc, #0x90] @ 037fbd0c
    ldr ip, [r6, #0x20] @ 037fbd10
    ldmib r6, {r2, lr} @ 037fbd14
    cmp ip, r0 @ 037fbd18
    movlt r5, ip @ 037fbd1c
    movge r5, r0 @ 037fbd20
    add r3, ip, ip, lsl #1 @ 037fbd24
    add r0, lr, r3, lsl #2 @ 037fbd28
    lsl r7, r5, #1 @ 037fbd2c
    rsb r3, lr, r2 @ 037fbd30
    asr r4, r3, #1 @ 037fbd34
    add r3, lr, r7 @ 037fbd38
    cmp r3, r2 @ 037fbd3c
    sub sp, sp, #4 @ 037fbd40
    mov r1, r4 @ 037fbd44
    bls .L_037fbd70 @ 037fbd48
    bl .L_037f86f4 @ 037fbd4c
    mov r1, r4 @ 037fbd50
    ldr r0, [r6, #8] @ 037fbd54
    bl .L_037f9d9c @ 037fbd58
    ldr lr, [r6] @ 037fbd5c
    rsb r5, r4, r5 @ 037fbd60
    str lr, [r6, #8] @ 037fbd64
    ldr ip, [r6, #0x20] @ 037fbd68
    lsl r7, r5, #1 @ 037fbd6c
.L_037fbd70:
    add r0, ip, ip, lsl #1 @ 037fbd70
    add r0, lr, r0, lsl #2 @ 037fbd74
    mov r1, r5 @ 037fbd78
    bl .L_037f86f4 @ 037fbd7c
    mov r1, r5 @ 037fbd80
    ldr r0, [r6, #8] @ 037fbd84
    bl .L_037f9d9c @ 037fbd88
    ldr r3, [r6, #8] @ 037fbd8c
    add r3, r3, r7 @ 037fbd90
    str r3, [r6, #8] @ 037fbd94
    add sp, sp, #4 @ 037fbd98
    pop {r4, r5, r6, r7, lr} @ 037fbd9c
    bx lr @ 037fbda0
    .byte 0xb8, 0xbd, 0x80, 0x03 @ 037fbda4
.L_037fbda8:
@ FUN_037fbda8 at 0x037fbda8
    push {r4, r5, r6, r7, lr} @ 037fbda8
    ldr r3, [pc, #0xfc] @ 037fbdac
    ldr r2, [r3] @ 037fbdb0
    cmp r2, #0 @ 037fbdb4
    sub sp, sp, #4 @ 037fbdb8
    mov r4, r0 @ 037fbdbc
    bne .L_037fbe70 @ 037fbdc0
.L_037fbdc4:
    mov r7, #0 @ 037fbdc4
.L_037fbdc8:
    cmp r4, #0x1000 @ 037fbdc8
    movge r4, #0x1000 @ 037fbdcc
    ldr r6, [pc, #0xdc] @ 037fbdd0
    mov r0, r4 @ 037fbdd4
    bl .L_037fbc10 @ 037fbdd8
    add r0, r6, #0x18 @ 037fbddc
    ldm r0, {r0, r2} @ 037fbde0
    lsl r5, r4, #1 @ 037fbde4
    add r3, r0, r5 @ 037fbde8
    cmp r3, r2 @ 037fbdec
    bls .L_037fbe30 @ 037fbdf0
    rsb r3, r0, r2 @ 037fbdf4
    cmp r7, #0 @ 037fbdf8
    asr r5, r3, #1 @ 037fbdfc
    bne .L_037fbe94 @ 037fbe00
    cmp r5, #0 @ 037fbe04
    ble .L_037fbe20 @ 037fbe08
    mov r3, r5 @ 037fbe0c
.L_037fbe10:
    mov r2, #0 @ 037fbe10
    subs r3, r3, #1 @ 037fbe14
    strh r2, [r0], #2 @ 037fbe18
    bne .L_037fbe10 @ 037fbe1c
.L_037fbe20:
    ldr r3, [r6, #0x14] @ 037fbe20
    rsb r4, r5, r4 @ 037fbe24
    str r3, [r6, #0x18] @ 037fbe28
    lsl r5, r4, #1 @ 037fbe2c
.L_037fbe30:
    cmp r7, #0 @ 037fbe30
    bne .L_037fbe84 @ 037fbe34
    cmp r4, #0 @ 037fbe38
    ldr r3, [r6, #0x18] @ 037fbe3c
    ble .L_037fbe58 @ 037fbe40
    mov r0, r4 @ 037fbe44
.L_037fbe48:
    mov r2, #0 @ 037fbe48
    subs r0, r0, #1 @ 037fbe4c
    strh r2, [r3], #2 @ 037fbe50
    bne .L_037fbe48 @ 037fbe54
.L_037fbe58:
    ldr r3, [r6, #0x18] @ 037fbe58
    add r3, r3, r5 @ 037fbe5c
    str r3, [r6, #0x18] @ 037fbe60
    add sp, sp, #4 @ 037fbe64
    pop {r4, r5, r6, r7, lr} @ 037fbe68
    bx lr @ 037fbe6c
.L_037fbe70:
    bl .L_037f93d8 @ 037fbe70
    cmp r0, #0 @ 037fbe74
    movne r7, #1 @ 037fbe78
    bne .L_037fbdc8 @ 037fbe7c
    b .L_037fbdc4 @ 037fbe80
.L_037fbe84:
    mov r1, r4 @ 037fbe84
    ldr r0, [r6, #0x18] @ 037fbe88
    bl .L_037fbc68 @ 037fbe8c
    b .L_037fbe58 @ 037fbe90
.L_037fbe94:
    mov r1, r5 @ 037fbe94
    bl .L_037fbc68 @ 037fbe98
    rsb r4, r5, r4 @ 037fbe9c
    ldr r3, [r6, #0x14] @ 037fbea0
    lsl r5, r4, #1 @ 037fbea4
    str r3, [r6, #0x18] @ 037fbea8
    b .L_037fbe30 @ 037fbeac
    .byte 0xa0, 0xb8, 0x80, 0x03, 0xb8, 0xbd, 0x80, 0x03 @ 037fbeb0
.L_037fbeb8:
@ FUN_037fbeb8 at 0x037fbeb8
    ldr r3, [pc, #0x78] @ 037fbeb8
    mov r0, #0x4000000 @ 037fbebc
    add r0, r0, #0x100 @ 037fbec0
    ldr ip, [pc, #0x70] @ 037fbec4
    push {r4, r5, lr} @ 037fbec8
    ldrh r1, [r0, #4] @ 037fbecc
    ldr r5, [r3] @ 037fbed0
    ldr r3, [pc, #0x64] @ 037fbed4
    ldr r2, [ip, #0x34] @ 037fbed8
    ldr lr, [r3] @ 037fbedc
    lsl r1, r1, #0x10 @ 037fbee0
    ldrh r3, [r0, #0xc] @ 037fbee4
    lsr r1, r1, #0x10 @ 037fbee8
    subs r4, r1, r2 @ 037fbeec
    lsl r3, r3, #0x10 @ 037fbef0
    ldr r2, [ip, #0x38] @ 037fbef4
    lsr r3, r3, #0x10 @ 037fbef8
    addmi r4, r4, #0x10000 @ 037fbefc
    cmp r4, lr @ 037fbf00
    movhs r4, lr @ 037fbf04
    subs r0, r3, r2 @ 037fbf08
    addmi r0, r0, #0x10000 @ 037fbf0c
    cmp r0, r5 @ 037fbf10
    movhs r0, r5 @ 037fbf14
    sub sp, sp, #4 @ 037fbf18
    str r1, [ip, #0x34] @ 037fbf1c
    str r3, [ip, #0x38] @ 037fbf20
    bl .L_037fbda8 @ 037fbf24
    mov r0, r4 @ 037fbf28
    add sp, sp, #4 @ 037fbf2c
    pop {r4, r5, lr} @ 037fbf30
    b .L_037fbd08 @ 037fbf34
    .byte 0x74, 0xb8, 0x80, 0x03, 0xb8, 0xbd, 0x80, 0x03, 0x70, 0xb8, 0x80, 0x03 @ 037fbf38
@ FUN_037fbf44 at 0x037fbf44
    str lr, [sp, #-4]! @ 037fbf44
    sub sp, sp, #4 @ 037fbf48
    bl .L_037f9238 @ 037fbf4c
    add sp, sp, #4 @ 037fbf50
    .word 0xe49de004 @ 037fbf54 pop {lr}
    bx lr @ 037fbf58
.L_037fbf5c:
@ FUN_037fbf5c at 0x037fbf5c
    ldr r3, [pc, #0x144] @ 037fbf5c
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 037fbf60
    mov r2, #0x1c8 @ 037fbf64
    ldr r8, [pc, #0x13c] @ 037fbf68
    mov r0, #0x6b00 @ 037fbf6c
    mov r1, #0 @ 037fbf70
    add r2, r2, #3 @ 037fbf74
    ldr sb, [r3] @ 037fbf78
    add r0, r0, #0xab @ 037fbf7c
    mov r3, #0x800 @ 037fbf80
    str r2, [r8, #0x28] @ 037fbf84
    str r3, [r8, #0x20] @ 037fbf88
    add r2, r2, #0x35 @ 037fbf8c
    mov r3, #1 @ 037fbf90
    str r0, [r8, #0x30] @ 037fbf94
    str r1, [r8, #0x40] @ 037fbf98
    str r1, [r8, #0x34] @ 037fbf9c
    str r1, [r8, #0x38] @ 037fbfa0
    str r1, [r8, #0x3c] @ 037fbfa4
    str r2, [r8, #0x24] @ 037fbfa8
    str r3, [r8, #0x2c] @ 037fbfac
    mov r2, sb @ 037fbfb0
    mov r3, #0x7000 @ 037fbfb4
.L_037fbfb8:
    mov r1, #0 @ 037fbfb8
    subs r3, r3, #1 @ 037fbfbc
    strh r1, [r2], #2 @ 037fbfc0
    bne .L_037fbfb8 @ 037fbfc4
    ldr r2, [pc, #0xe0] @ 037fbfc8
    mov r3, sb @ 037fbfcc
    add r1, r2, #0x1c @ 037fbfd0
.L_037fbfd4:
    str r3, [r2], #4 @ 037fbfd4
    cmp r2, r1 @ 037fbfd8
    add r3, r3, #0x1000 @ 037fbfdc
    bne .L_037fbfd4 @ 037fbfe0
    ldr r3, [pc, #0xc8] @ 037fbfe4
    ldr sl, [r3] @ 037fbfe8
    mov r7, #0x1000 @ 037fbfec
    mov r3, sl @ 037fbff0
.L_037fbff4:
    mov r2, #0 @ 037fbff4
    subs r7, r7, #1 @ 037fbff8
    strh r2, [r3], #2 @ 037fbffc
    bne .L_037fbff4 @ 037fc000
    add ip, sl, #0x2000 @ 037fc004
    mov lr, #0x368000 @ 037fc008
    ldr r5, [r8, #0x20] @ 037fc00c
    str ip, [r8, #0x1c] @ 037fc010
    add lr, lr, #0x1e80 @ 037fc014
    ldr ip, [pc, #0x98] @ 037fc018
    mov r4, #0x750000 @ 037fc01c
    add lr, lr, #0x19 @ 037fc020
    ldr r6, [pc, #0x90] @ 037fc024
    add r4, r4, #0xab0 @ 037fc028
    mov r3, r5 @ 037fc02c
    mov r0, lr @ 037fc030
    add r5, sb, r5, lsl #1 @ 037fc034
    mov r1, #0x64 @ 037fc038
    ldr r2, [r8, #0x30] @ 037fc03c
    str lr, [ip] @ 037fc040
    add r4, r4, #5 @ 037fc044
    str sl, [r8, #0x18] @ 037fc048
    str sb, [r8, #0xc] @ 037fc04c
    str r5, [r8, #0x10] @ 037fc050
    str r4, [r6] @ 037fc054
    str sb, [r8] @ 037fc058
    stmib r8, {r5, sb} @ 037fc05c
    str sl, [r8, #0x14] @ 037fc060
    bl .L_037f8a30 @ 037fc064
    ldr r0, [r6] @ 037fc068
    ldr r1, [r8, #0x30] @ 037fc06c
    ldr r2, [r8, #0x20] @ 037fc070
    bl .L_037f93e8 @ 037fc074
    ldr r3, [pc, #0x40] @ 037fc078
    ldr r1, [r8, #0x28] @ 037fc07c
    mov r0, #0x420 @ 037fc080
    str r7, [r3] @ 037fc084
    ldr r2, [pc, #0x34] @ 037fc088
    ldr r3, [pc, #0x34] @ 037fc08c
    lsl r1, r1, #1 @ 037fc090
    add r0, r0, #0xa @ 037fc094
    str r1, [r2] @ 037fc098
    str r0, [r3] @ 037fc09c
    pop {r4, r5, r6, r7, r8, sb, sl, lr} @ 037fc0a0
    bx lr @ 037fc0a4
    .byte 0x8c, 0x6d, 0x80, 0x03, 0xb8, 0xbd, 0x80, 0x03, 0x84, 0xb8, 0x80, 0x03, 0x90, 0x6d, 0x80, 0x03 @ 037fc0a8
    .byte 0xfc, 0xba, 0x80, 0x03, 0x00, 0xbb, 0x80, 0x03, 0xa0, 0xb8, 0x80, 0x03, 0x70, 0xb8, 0x80, 0x03 @ 037fc0b8
    .byte 0x74, 0xb8, 0x80, 0x03 @ 037fc0c8
.L_037fc0cc:
@ FUN_037fc0cc at 0x037fc0cc
    str lr, [sp, #-4]! @ 037fc0cc
    sub sp, sp, #4 @ 037fc0d0
    bl .L_037fc544 @ 037fc0d4
    ldr r0, [pc, #0xc] @ 037fc0d8
    bl .L_037fc504 @ 037fc0dc
    add sp, sp, #4 @ 037fc0e0
    .word 0xe49de004 @ 037fc0e4 pop {lr}
    bx lr @ 037fc0e8
    .byte 0x18, 0xc2, 0x7f, 0x03, 0x48, 0x30, 0x9f, 0xe5, 0x20, 0x20, 0x93, 0xe5, 0x82, 0x21, 0x62, 0xe0 @ 037fc0ec
    .byte 0x82, 0x20, 0xa0, 0xe1, 0x3c, 0x30, 0x9f, 0xe5, 0x00, 0x00, 0x52, 0xe3, 0x00, 0x30, 0x93, 0xe5 @ 037fc0fc
    .byte 0x03, 0x00, 0x00, 0xda, 0x00, 0x10, 0xa0, 0xe3, 0x01, 0x20, 0x52, 0xe2, 0xb2, 0x10, 0xc3, 0xe0 @ 037fc10c
    .byte 0xfb, 0xff, 0xff, 0x1a, 0x20, 0x30, 0x9f, 0xe5, 0x00, 0x30, 0x93, 0xe5, 0x01, 0x2a, 0xa0, 0xe3 @ 037fc11c
    .byte 0x00, 0x10, 0xa0, 0xe3, 0x01, 0x20, 0x52, 0xe2, 0xb2, 0x10, 0xc3, 0xe0, 0xfb, 0xff, 0xff, 0x1a @ 037fc12c
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0xb8, 0xbd, 0x80, 0x03, 0x8c, 0x6d, 0x80, 0x03, 0x90, 0x6d, 0x80, 0x03 @ 037fc13c
.L_037fc14c:
@ FUN_037fc14c at 0x037fc14c
    push {r4, r5, r6, r7, lr} @ 037fc14c
    ldr r5, [pc, #0xac] @ 037fc150
    ldr r3, [r5, #0x20] @ 037fc154
    rsb r3, r3, r3, lsl #3 @ 037fc158
    lsl r3, r3, #1 @ 037fc15c
    ldr r7, [pc, #0xa0] @ 037fc160
    cmp r3, #0 @ 037fc164
    sub sp, sp, #4 @ 037fc168
    ldr r2, [r7] @ 037fc16c
    ble .L_037fc184 @ 037fc170
.L_037fc174:
    mov r1, #0 @ 037fc174
    subs r3, r3, #1 @ 037fc178
    strh r1, [r2], #2 @ 037fc17c
    bne .L_037fc174 @ 037fc180
.L_037fc184:
    ldr r6, [pc, #0x80] @ 037fc184
    ldr r3, [r6] @ 037fc188
    mov r4, #0x1000 @ 037fc18c
.L_037fc190:
    mov r2, #0 @ 037fc190
    subs r4, r4, #1 @ 037fc194
    strh r2, [r3], #2 @ 037fc198
    bne .L_037fc190 @ 037fc19c
    ldr r3, [pc, #0x68] @ 037fc1a0
    ldr r2, [r5, #0x30] @ 037fc1a4
    ldr r0, [r3] @ 037fc1a8
    mov r1, #0x64 @ 037fc1ac
    bl .L_037f89bc @ 037fc1b0
    bl .L_037f9238 @ 037fc1b4
    ldr r2, [r5, #0x20] @ 037fc1b8
    ldr r3, [r7] @ 037fc1bc
    bic r2, r2, #1 @ 037fc1c0
    add r2, r2, r3 @ 037fc1c4
    ldr ip, [r6] @ 037fc1c8
    ldr r3, [pc, #0x40] @ 037fc1cc
    add ip, ip, #0x1000 @ 037fc1d0
    mov r1, r4 @ 037fc1d4
    str r4, [r3] @ 037fc1d8
    mov r0, #0x11 @ 037fc1dc
    str r2, [r5, #8] @ 037fc1e0
    str ip, [r5, #0x18] @ 037fc1e4
    str r4, [r5, #0x40] @ 037fc1e8
    str r4, [r5, #0x34] @ 037fc1ec
    str r4, [r5, #0x38] @ 037fc1f0
    bl .L_037fc514 @ 037fc1f4
    add sp, sp, #4 @ 037fc1f8
    pop {r4, r5, r6, r7, lr} @ 037fc1fc
    bx lr @ 037fc200
    .byte 0xb8, 0xbd, 0x80, 0x03, 0x8c, 0x6d, 0x80, 0x03, 0x90, 0x6d, 0x80, 0x03, 0xfc, 0xba, 0x80, 0x03 @ 037fc204
    .byte 0xa0, 0xb8, 0x80, 0x03 @ 037fc214
@ FUN_037fc218 at 0x037fc218
    str lr, [sp, #-4]! @ 037fc218
    ldr r1, [r1] @ 037fc21c
    sub sp, sp, #4 @ 037fc220
    cmp r0, #0x10 @ 037fc224
    ldrls pc, [pc, r0, lsl #2] @ 037fc228
    b .L_037fc288 @ 037fc22c
    .byte 0x94, 0xc2, 0x7f, 0x03, 0x50, 0xc3, 0x7f, 0x03, 0x48, 0xc3, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03 @ 037fc230
    .byte 0x88, 0xc2, 0x7f, 0x03, 0x20, 0xc3, 0x7f, 0x03, 0xf8, 0xc2, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03 @ 037fc240
    .byte 0x88, 0xc2, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03, 0x68, 0xc3, 0x7f, 0x03 @ 037fc250
    .byte 0x60, 0xc3, 0x7f, 0x03, 0x88, 0xc2, 0x7f, 0x03, 0x44, 0xc4, 0x7f, 0x03, 0x74, 0xc2, 0x7f, 0x03 @ 037fc260
    .byte 0xa8, 0xc2, 0x7f, 0x03 @ 037fc270
    mov r2, #0x4000000 @ 037fc274
    mvn r3, #0x7f00 @ 037fc278
    add r2, r2, #0x500 @ 037fc27c
    sub r3, r3, #0x80 @ 037fc280
    strh r3, [r2] @ 037fc284
.L_037fc288:
    add sp, sp, #4 @ 037fc288
    .word 0xe49de004 @ 037fc28c pop {lr}
    bx lr @ 037fc290
    mov r0, r1 @ 037fc294
    mov r1, #2 @ 037fc298
    add sp, sp, #4 @ 037fc29c
    .word 0xe49de004 @ 037fc2a0 pop {lr}
    b .L_037fbf5c @ 037fc2a4
    mov r3, #0x27c0000 @ 037fc2a8
    add r3, r3, #0x3f000 @ 037fc2ac
    ldr r0, [r3, #0x28] @ 037fc2b0
    ldr ip, [r0, #4] @ 037fc2b4
    cmp ip, #0 @ 037fc2b8
    ldr r2, [r0] @ 037fc2bc
    beq .L_037fc2e4 @ 037fc2c0
    ble .L_037fc2e4 @ 037fc2c4
    add r3, ip, #1 @ 037fc2c8
    ldr r1, [pc, #0x184] @ 037fc2cc
    asr r3, r3, #1 @ 037fc2d0
.L_037fc2d4:
    ldrh lr, [r2], #2 @ 037fc2d4
    subs r3, r3, #1 @ 037fc2d8
    strh lr, [r1], #2 @ 037fc2dc
    bne .L_037fc2d4 @ 037fc2e0
.L_037fc2e4:
    ldr r3, [pc, #0x170] @ 037fc2e4
    mov r2, #0 @ 037fc2e8
    str ip, [r3] @ 037fc2ec
    str r2, [r0, #4] @ 037fc2f0
    b .L_037fc288 @ 037fc2f4
    mov r3, #0x4000000 @ 037fc2f8
    add r3, r3, #0x500 @ 037fc2fc
    mov r2, #0x8000 @ 037fc300
    strh r2, [r3] @ 037fc304
    ldr r3, [pc, #0x150] @ 037fc308
    mov r1, #0 @ 037fc30c
    str r1, [r3, #0x3c] @ 037fc310
    add sp, sp, #4 @ 037fc314
    .word 0xe49de004 @ 037fc318 pop {lr}
    b .L_037fbbb0 @ 037fc31c
    mov r2, #0x4000000 @ 037fc320
    mvn r3, #0x7f00 @ 037fc324
    add r2, r2, #0x500 @ 037fc328
    sub r3, r3, #0x80 @ 037fc32c
    strh r3, [r2] @ 037fc330
    bl .L_037fb9fc @ 037fc334
    ldr r3, [pc, #0x120] @ 037fc338
    mov r2, #1 @ 037fc33c
    str r2, [r3, #0x3c] @ 037fc340
    b .L_037fc288 @ 037fc344
    bl .L_037f9238 @ 037fc348
    b .L_037fc288 @ 037fc34c
    ldr r3, [pc, #0x108] @ 037fc350
    mov r2, #1 @ 037fc354
    str r2, [r3, #0x40] @ 037fc358
    b .L_037fc288 @ 037fc35c
    bl .L_037f812c @ 037fc360
    b .L_037fc288 @ 037fc364
    mov r3, #0x27c0000 @ 037fc368
    add r3, r3, #0x3f000 @ 037fc36c
    ldr r3, [r3, #0x28] @ 037fc370
    ldr r1, [r3, #0x14] @ 037fc374
    cmp r1, #0 @ 037fc378
    beq .L_037fc3ac @ 037fc37c
    ldr r2, [r3, #0x10] @ 037fc380
    ble .L_037fc3a4 @ 037fc384
    add r3, r1, #1 @ 037fc388
    ldr r0, [pc, #0xd0] @ 037fc38c
    asr r3, r3, #1 @ 037fc390
.L_037fc394:
    ldrh ip, [r2], #2 @ 037fc394
    subs r3, r3, #1 @ 037fc398
    strh ip, [r0], #2 @ 037fc39c
    bne .L_037fc394 @ 037fc3a0
.L_037fc3a4:
    ldr r0, [pc, #0xb8] @ 037fc3a4
    bl .L_037f9afc @ 037fc3a8
.L_037fc3ac:
    mov r3, #0x27c0000 @ 037fc3ac
    add r3, r3, #0x3f000 @ 037fc3b0
    ldr r3, [r3, #0x28] @ 037fc3b4
    ldr r1, [r3, #0x24] @ 037fc3b8
    cmp r1, #0 @ 037fc3bc
    beq .L_037fc3f0 @ 037fc3c0
    ldr r2, [r3, #0x20] @ 037fc3c4
    ble .L_037fc3e8 @ 037fc3c8
    add r3, r1, #1 @ 037fc3cc
    ldr r0, [pc, #0x8c] @ 037fc3d0
    asr r3, r3, #1 @ 037fc3d4
.L_037fc3d8:
    ldrh lr, [r2], #2 @ 037fc3d8
    subs r3, r3, #1 @ 037fc3dc
    strh lr, [r0], #2 @ 037fc3e0
    bne .L_037fc3d8 @ 037fc3e4
.L_037fc3e8:
    ldr r0, [pc, #0x74] @ 037fc3e8
    bl .L_037f9394 @ 037fc3ec
.L_037fc3f0:
    mov r3, #0x27c0000 @ 037fc3f0
    add r3, r3, #0x3f000 @ 037fc3f4
    ldr r3, [r3, #0x28] @ 037fc3f8
    ldr r1, [r3, #0x34] @ 037fc3fc
    cmp r1, #0 @ 037fc400
    beq .L_037fc434 @ 037fc404
    ldr r2, [r3, #0x30] @ 037fc408
    ble .L_037fc42c @ 037fc40c
    add r3, r1, #1 @ 037fc410
    ldr r0, [pc, #0x48] @ 037fc414
    asr r3, r3, #1 @ 037fc418
.L_037fc41c:
    ldrh ip, [r2], #2 @ 037fc41c
    subs r3, r3, #1 @ 037fc420
    strh ip, [r0], #2 @ 037fc424
    bne .L_037fc41c @ 037fc428
.L_037fc42c:
    ldr r0, [pc, #0x30] @ 037fc42c
    bl .L_037f8504 @ 037fc430
.L_037fc434:
    ldr r3, [pc, #0x24] @ 037fc434
    mov r2, #1 @ 037fc438
    str r2, [r3, #0x3c] @ 037fc43c
    b .L_037fc288 @ 037fc440
    mov r3, #0x4000000 @ 037fc444
    add r3, r3, #0x500 @ 037fc448
    mov r2, #0x8000 @ 037fc44c
    strh r2, [r3] @ 037fc450
    b .L_037fc288 @ 037fc454
    .byte 0xa4, 0xb8, 0x80, 0x03, 0xa0, 0xb8, 0x80, 0x03, 0xb8, 0xbd, 0x80, 0x03, 0x38, 0xbb, 0x80, 0x03 @ 037fc458
@ FUN_037fc468 at 0x037fc468
    push {r4, r5, lr} @ 037fc468
    mov r3, #0x4000000 @ 037fc46c
    add r3, r3, #0x100 @ 037fc470
    mov r2, #0 @ 037fc474
    strh r2, [r3, #0x80] @ 037fc478
    sub sp, sp, #4 @ 037fc47c
    mov r5, r3 @ 037fc480
.L_037fc484:
    ldrh r3, [r5, #0x84] @ 037fc484
    ldr r4, [pc, #0x68] @ 037fc488
    tst r3, #0x100 @ 037fc48c
    mov r1, r4 @ 037fc490
    bne .L_037fc4e4 @ 037fc494
.L_037fc498:
    ldr r2, [pc, #0x5c] @ 037fc498
    mov r3, #0x4100000 @ 037fc49c
    ldr ip, [r3] @ 037fc4a0
    ldr r2, [r2] @ 037fc4a4
    ldr r3, [pc, #0x50] @ 037fc4a8
    bic lr, ip, #0xff000000 @ 037fc4ac
    cmp r2, #0 @ 037fc4b0
    lsr ip, ip, #0x18 @ 037fc4b4
    mov r0, ip @ 037fc4b8
    str ip, [r3] @ 037fc4bc
    str lr, [r4] @ 037fc4c0
    beq .L_037fc484 @ 037fc4c4
    mov lr, pc @ 037fc4c8
    bx r2 @ 037fc4cc
    ldrh r3, [r5, #0x84] @ 037fc4d0
    ldr r4, [pc, #0x1c] @ 037fc4d4
    tst r3, #0x100 @ 037fc4d8
    mov r1, r4 @ 037fc4dc
    beq .L_037fc498 @ 037fc4e0
.L_037fc4e4:
    mov r3, #0x100 @ 037fc4e4
    strh r3, [r5, #0x80] @ 037fc4e8
    add sp, sp, #4 @ 037fc4ec
    pop {r4, r5, lr} @ 037fc4f0
    bx lr @ 037fc4f4
    .byte 0x08, 0xbb, 0x80, 0x03, 0x00, 0xbe, 0x80, 0x03, 0x04, 0xbb, 0x80, 0x03 @ 037fc4f8
.L_037fc504:
@ FUN_037fc504 at 0x037fc504
    ldr r3, [pc, #4] @ 037fc504
    str r0, [r3] @ 037fc508
    bx lr @ 037fc50c
    .byte 0x00, 0xbe, 0x80, 0x03 @ 037fc510
.L_037fc514:
@ FUN_037fc514 at 0x037fc514
    mov r2, #0x4000000 @ 037fc514
    mov ip, r0 @ 037fc518
    add r2, r2, #0x100 @ 037fc51c
.L_037fc520:
    ldrh r3, [r2, #0x84] @ 037fc520
    ands r0, r3, #2 @ 037fc524
    bne .L_037fc520 @ 037fc528
    bic r3, r1, #0xff000000 @ 037fc52c
    orr r3, r3, ip, lsl #24 @ 037fc530
    mov r2, #0x4000000 @ 037fc534
    str r3, [r2, #0x188] @ 037fc538
    bx lr @ 037fc53c
    .byte 0xf3, 0xff, 0xff, 0xea @ 037fc540
.L_037fc544:
@ FUN_037fc544 at 0x037fc544
    push {r4, lr} @ 037fc544
    mvn r3, #0x7f00 @ 037fc548
    mov r4, #0x4000000 @ 037fc54c
    sub r3, r3, #0xf7 @ 037fc550
    add r4, r4, #0x100 @ 037fc554
    strh r3, [r4, #0x84] @ 037fc558
    mov r0, #0x40000 @ 037fc55c
    ldr r1, [pc, #0x24] @ 037fc560
    bl .L_037f8114 @ 037fc564
    mov r0, #0x40000 @ 037fc568
    bl .L_037f8120 @ 037fc56c
    mvn r3, #0x7b00 @ 037fc570
    sub r3, r3, #0xf7 @ 037fc574
    strh r3, [r4, #0x84] @ 037fc578
    mov r3, #0 @ 037fc57c
    strh r3, [r4, #0x80] @ 037fc580
    pop {r4, lr} @ 037fc584
    bx lr @ 037fc588
    .byte 0x68, 0xc4, 0x7f, 0x03 @ 037fc58c
