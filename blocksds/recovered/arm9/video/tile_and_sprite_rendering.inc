.L_02006f2c:
@ FUN_02006f2c at 0x02006f2c
    push {r4, r5, r6, r7, r8, lr} @ 02006f2c
    ldr r8, [pc, #0x2e8] @ 02006f30
    mov r7, r0 @ 02006f34
    ldr r3, [r8] @ 02006f38
    cmp r3, r0 @ 02006f3c
    popeq {r4, r5, r6, r7, r8, pc} @ 02006f40
    ldr r6, [pc, #0x2d8] @ 02006f44
    mov r3, #0 @ 02006f48
    str r3, [r6] @ 02006f4c
    cmp r0, #0x31 @ 02006f50
    ldrls pc, [pc, r0, lsl #2] @ 02006f54
    b .L_020071a4 @ 02006f58
    .byte 0x50, 0x71, 0x00, 0x02, 0x24, 0x70, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0x24, 0x70, 0x00, 0x02 @ 02006f5c
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 02006f6c
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 02006f7c
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 02006f8c
    .byte 0xcc, 0x71, 0x00, 0x02, 0xec, 0x70, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xec, 0x70, 0x00, 0x02 @ 02006f9c
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 02006fac
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 02006fbc
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 02006fcc
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 02006fdc
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 02006fec
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 02006ffc
    .byte 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02, 0xa4, 0x71, 0x00, 0x02 @ 0200700c
    .byte 0x88, 0x70, 0x00, 0x02, 0x88, 0x70, 0x00, 0x02 @ 0200701c
    ldr lr, [pc, #0x1fc] @ 02007024
    ldr r3, [pc, #0x1fc] @ 02007028
    ldr r2, [pc, #0x1fc] @ 0200702c
    str r3, [lr, #4] @ 02007030
    ldr r3, [pc, #0x1f8] @ 02007034
    ldr r1, [pc, #0x1f8] @ 02007038
    str r2, [r3] @ 0200703c
    ldr r3, [pc, #0x1f4] @ 02007040
    ldr r2, [pc, #0x1f4] @ 02007044
    mov ip, #0x4000000 @ 02007048
    str r1, [r3] @ 0200704c
    ldr r0, [pc, #0x1ec] @ 02007050
    ldr r3, [pc, #0x1ec] @ 02007054
    strh r2, [ip, #8] @ 02007058
    ldr r2, [pc, #0x1e8] @ 0200705c
    str r0, [r3] @ 02007060
    ldr r3, [pc, #0x1e4] @ 02007064
    strh r2, [ip, #0xa] @ 02007068
    ldr r2, [pc, #0x1e0] @ 0200706c
    str r3, [lr] @ 02007070
    sub r3, r3, #0x10000 @ 02007074
    strh r3, [ip, #0xc] @ 02007078
    strh r2, [ip, #0xe] @ 0200707c
.L_02007080:
    str r7, [r8] @ 02007080
    pop {r4, r5, r6, r7, r8, pc} @ 02007084
    ldr r2, [pc, #0x1c8] @ 02007088
    ldr r3, [pc, #0x1a0] @ 0200708c
    ldr r1, [pc, #0x1c4] @ 02007090
    str r2, [r3] @ 02007094
    ldr r3, [pc, #0x19c] @ 02007098
    ldr r0, [pc, #0x1bc] @ 0200709c
    str r1, [r3] @ 020070a0
    ldr r3, [pc, #0x19c] @ 020070a4
    ldr r4, [pc, #0x1b4] @ 020070a8
    str r0, [r3] @ 020070ac
    ldr r3, [pc, #0x1b0] @ 020070b0
    mov ip, #0x4000000 @ 020070b4
    strh r4, [ip, #8] @ 020070b8
    ldr r5, [pc, #0x1a8] @ 020070bc
    strh r3, [ip, #0xa] @ 020070c0
    ldr lr, [pc, #0x15c] @ 020070c4
    ldr r3, [pc, #0x1a0] @ 020070c8
    mov r2, #1 @ 020070cc
    strh r5, [ip, #0xc] @ 020070d0
    str r4, [lr, #4] @ 020070d4
    str r2, [r6] @ 020070d8
    str r5, [lr] @ 020070dc
    strh r3, [ip, #0xe] @ 020070e0
    str r7, [r8] @ 020070e4
    pop {r4, r5, r6, r7, r8, pc} @ 020070e8
    ldr lr, [pc, #0x134] @ 020070ec
    ldr r3, [pc, #0x17c] @ 020070f0
    ldr r2, [pc, #0x17c] @ 020070f4
    str r3, [lr, #4] @ 020070f8
    ldr r3, [pc, #0x130] @ 020070fc
    ldr r1, [pc, #0x174] @ 02007100
    str r2, [r3] @ 02007104
    ldr r3, [pc, #0x12c] @ 02007108
    ldr r2, [pc, #0x16c] @ 0200710c
    mov ip, #0x4000000 @ 02007110
    str r1, [r3] @ 02007114
    ldr r0, [pc, #0x164] @ 02007118
    ldr r3, [pc, #0x124] @ 0200711c
    strh r2, [ip, #8] @ 02007120
    ldr r2, [pc, #0x15c] @ 02007124
    str r0, [r3] @ 02007128
    ldr r3, [pc, #0x158] @ 0200712c
    strh r2, [ip, #0xa] @ 02007130
    ldr r2, [pc, #0x154] @ 02007134
    str r3, [lr] @ 02007138
    sub r3, r3, #0x10000 @ 0200713c
    strh r3, [ip, #0xc] @ 02007140
    str r7, [r8] @ 02007144
    strh r2, [ip, #0xe] @ 02007148
    pop {r4, r5, r6, r7, r8, pc} @ 0200714c
    ldr r2, [pc, #0xd8] @ 02007150
    ldr r3, [pc, #0xd8] @ 02007154
    ldr r1, [pc, #0xd8] @ 02007158
    str r2, [r3] @ 0200715c
    ldr r3, [pc, #0xd4] @ 02007160
    ldr r2, [pc, #0xd8] @ 02007164
    str r1, [r3] @ 02007168
    ldr r3, [pc, #0xd4] @ 0200716c
    mov r0, #0x4000000 @ 02007170
    str r2, [r3] @ 02007174
    ldr r3, [pc, #0x114] @ 02007178
    mov ip, #0x820 @ 0200717c
    strh ip, [r0, #8] @ 02007180
    ldr lr, [pc, #0x9c] @ 02007184
    strh r3, [r0, #0xa] @ 02007188
    ldr r3, [pc, #0x104] @ 0200718c
    mov r4, #0x22 @ 02007190
    strh r4, [r0, #0xc] @ 02007194
    stm lr, {r4, ip} @ 02007198
    strh r3, [r0, #0xe] @ 0200719c
    b .L_02007080 @ 020071a0
.L_020071a4:
    ldr r2, [pc, #0x84] @ 020071a4
    ldr r3, [pc, #0x84] @ 020071a8
    ldr r1, [pc, #0x84] @ 020071ac
    str r2, [r3] @ 020071b0
    ldr r3, [pc, #0x80] @ 020071b4
    ldr r2, [pc, #0x84] @ 020071b8
    str r1, [r3] @ 020071bc
    ldr r3, [pc, #0x80] @ 020071c0
    str r2, [r3] @ 020071c4
    b .L_02007080 @ 020071c8
    ldr r2, [pc, #0xc8] @ 020071cc
    ldr r3, [pc, #0x5c] @ 020071d0
    ldr r1, [pc, #0xc4] @ 020071d4
    str r2, [r3] @ 020071d8
    ldr r3, [pc, #0x58] @ 020071dc
    ldr r2, [pc, #0xbc] @ 020071e0
    str r1, [r3] @ 020071e4
    ldr r3, [pc, #0x58] @ 020071e8
    ldr lr, [pc, #0x70] @ 020071ec
    str r2, [r3] @ 020071f0
    ldr r3, [pc, #0x6c] @ 020071f4
    mov r0, #0x4000000 @ 020071f8
    strh lr, [r0, #8] @ 020071fc
    ldr r4, [pc, #0x64] @ 02007200
    strh r3, [r0, #0xa] @ 02007204
    ldr ip, [pc, #0x18] @ 02007208
    ldr r3, [pc, #0x5c] @ 0200720c
    strh r4, [r0, #0xc] @ 02007210
    stm ip, {r4, lr} @ 02007214
    strh r3, [r0, #0xe] @ 02007218
    b .L_02007080 @ 0200721c
    .byte 0x50, 0xf3, 0x08, 0x02, 0xc4, 0x93, 0x09, 0x02, 0xa4, 0xc6, 0x3d, 0x02, 0x20, 0x88, 0x00, 0x00 @ 02007220
    .byte 0xb8, 0x77, 0x00, 0x02, 0x9c, 0xc6, 0x3d, 0x02, 0x4c, 0x7b, 0x00, 0x02, 0xac, 0xc6, 0x3d, 0x02 @ 02007230
    .byte 0x20, 0x88, 0xff, 0xff, 0xd8, 0x7e, 0x00, 0x02, 0xa0, 0xc6, 0x3d, 0x02, 0x29, 0x8c, 0xff, 0xff @ 02007240
    .byte 0x22, 0x80, 0x00, 0x00, 0x2b, 0x84, 0xff, 0xff, 0x7c, 0x79, 0x00, 0x02, 0xdc, 0x7d, 0x00, 0x02 @ 02007250
    .byte 0x74, 0x81, 0x00, 0x02, 0x20, 0x48, 0x00, 0x00, 0x29, 0x4c, 0x00, 0x00, 0x22, 0x40, 0x00, 0x00 @ 02007260
    .byte 0x2b, 0x44, 0x00, 0x00, 0x20, 0xc8, 0x00, 0x00, 0xc8, 0x78, 0x00, 0x02, 0xe4, 0x7c, 0x00, 0x02 @ 02007270
    .byte 0x20, 0xc8, 0xff, 0xff, 0x78, 0x80, 0x00, 0x02, 0x29, 0xcc, 0xff, 0xff, 0x22, 0xc0, 0x00, 0x00 @ 02007280
    .byte 0x2b, 0xc4, 0xff, 0xff, 0x29, 0x0c, 0x00, 0x00, 0x2b, 0x04, 0x00, 0x00, 0x30, 0x78, 0x00, 0x02 @ 02007290
    .byte 0x04, 0x7c, 0x00, 0x02, 0x94, 0x7f, 0x00, 0x02 @ 020072a0
.L_020072a8:
@ FUN_020072a8 at 0x020072a8
    push {r4, lr} @ 020072a8
    ldr lr, [pc, #0x74] @ 020072ac
    ldr r3, [lr] @ 020072b0
    cmp r3, r0 @ 020072b4
    beq .L_020072f0 @ 020072b8
    cmp r0, #0 @ 020072bc
    ldr r4, [pc, #0x64] @ 020072c0
    bne .L_020072f8 @ 020072c4
    ldr r3, [pc, #0x60] @ 020072c8
    ldr r2, [pc, #0x60] @ 020072cc
    str r3, [r4, #4] @ 020072d0
    ldr r3, [pc, #0x5c] @ 020072d4
    ldr r1, [pc, #0x5c] @ 020072d8
    str r2, [r3] @ 020072dc
    ldr r3, [pc, #0x58] @ 020072e0
    ldr r2, [pc, #0x58] @ 020072e4
    str r1, [r3] @ 020072e8
    str r2, [r4] @ 020072ec
.L_020072f0:
    str r0, [lr] @ 020072f0
    pop {r4, pc} @ 020072f4
.L_020072f8:
    ldr r3, [pc, #0x48] @ 020072f8
    ldr r2, [pc, #0x48] @ 020072fc
    str r3, [r4, #4] @ 02007300
    ldr r3, [pc, #0x2c] @ 02007304
    ldr r1, [pc, #0x40] @ 02007308
    str r2, [r3] @ 0200730c
    ldr r3, [pc, #0x28] @ 02007310
    ldr r2, [pc, #0x38] @ 02007314
    str r1, [r3] @ 02007318
    str r2, [r4] @ 0200731c
    str r0, [lr] @ 02007320
    pop {r4, pc} @ 02007324
    .byte 0x4c, 0xf3, 0x08, 0x02, 0xac, 0xc5, 0x3d, 0x02, 0x30, 0x14, 0x00, 0x00, 0x2c, 0x7a, 0x00, 0x02 @ 02007328
    .byte 0xa8, 0xc5, 0x3d, 0x02, 0x70, 0x82, 0x00, 0x02, 0xb8, 0xc5, 0x3d, 0x02, 0x32, 0x10, 0x00, 0x00 @ 02007338
    .byte 0x30, 0x54, 0x00, 0x00, 0xac, 0x7a, 0x00, 0x02, 0x20, 0x83, 0x00, 0x02, 0x32, 0x50, 0x00, 0x00 @ 02007348
.L_02007358:
@ FUN_02007358 at 0x02007358
    ldr r2, [pc, #0x3c] @ 02007358
    ldr r1, [r2] @ 0200735c
    add r3, r1, r0 @ 02007360
    cmn r3, #0x20 @ 02007364
    str r3, [r2] @ 02007368
    mvnlt r3, #0x1f @ 0200736c
    strlt r3, [r2] @ 02007370
    blt .L_02007384 @ 02007374
    cmp r3, #0x20 @ 02007378
    movgt r3, #0x20 @ 0200737c
    strgt r3, [r2] @ 02007380
.L_02007384:
    ldr r3, [r2] @ 02007384
    ldr r2, [pc, #0x10] @ 02007388
    subs r3, r1, r3 @ 0200738c
    movne r3, #1 @ 02007390
    str r3, [r2] @ 02007394
    bx lr @ 02007398
    .byte 0xb0, 0x93, 0x09, 0x02, 0xac, 0x93, 0x09, 0x02 @ 0200739c
.L_020073a4:
@ FUN_020073a4 at 0x020073a4
    ldr r2, [pc, #0x3c] @ 020073a4
    ldr r1, [r2] @ 020073a8
    add r3, r1, r0 @ 020073ac
    cmn r3, #0x18 @ 020073b0
    str r3, [r2] @ 020073b4
    mvnlt r3, #0x17 @ 020073b8
    strlt r3, [r2] @ 020073bc
    blt .L_020073d0 @ 020073c0
    cmp r3, #0x18 @ 020073c4
    movgt r3, #0x18 @ 020073c8
    strgt r3, [r2] @ 020073cc
.L_020073d0:
    ldr r3, [r2] @ 020073d0
    ldr r2, [pc, #0x10] @ 020073d4
    subs r3, r1, r3 @ 020073d8
    movne r3, #1 @ 020073dc
    str r3, [r2] @ 020073e0
    bx lr @ 020073e4
    .byte 0xb4, 0x93, 0x09, 0x02, 0xac, 0x93, 0x09, 0x02 @ 020073e8
.L_020073f0:
@ FUN_020073f0 at 0x020073f0
    ldr r3, [pc, #0x1c] @ 020073f0
    mov r1, #1 @ 020073f4
    str r1, [r3] @ 020073f8
    ldr r2, [pc, #0x14] @ 020073fc
    ldr r3, [pc, #0x14] @ 02007400
    mov r0, #0 @ 02007404
    str r0, [r2] @ 02007408
    str r0, [r3] @ 0200740c
    bx lr @ 02007410
    .byte 0xac, 0x93, 0x09, 0x02, 0xb4, 0x93, 0x09, 0x02, 0xb0, 0x93, 0x09, 0x02 @ 02007414
.L_02007420:
@ FUN_02007420 at 0x02007420
    ldr r2, [pc, #0x74] @ 02007420
    mov r3, #0x6000000 @ 02007424
.L_02007428:
    mov r1, #0 @ 02007428
    strh r1, [r3], #2 @ 0200742c
    cmp r3, r2 @ 02007430
    bne .L_02007428 @ 02007434
    ldr r3, [pc, #0x60] @ 02007438
    ldr r2, [pc, #0x60] @ 0200743c
.L_02007440:
    mov r1, #0 @ 02007440
    strh r1, [r3], #2 @ 02007444
    cmp r3, r2 @ 02007448
    bne .L_02007440 @ 0200744c
    ldr r3, [pc, #0x50] @ 02007450
    ldr r2, [pc, #0x50] @ 02007454
.L_02007458:
    mov r1, #0 @ 02007458
    strh r1, [r3], #2 @ 0200745c
    cmp r3, r2 @ 02007460
    bne .L_02007458 @ 02007464
    ldr r3, [pc, #0x34] @ 02007468
    ldr r2, [pc, #0x3c] @ 0200746c
.L_02007470:
    mov r1, #0 @ 02007470
    strh r1, [r3], #2 @ 02007474
    cmp r3, r2 @ 02007478
    bne .L_02007470 @ 0200747c
    ldr r2, [pc, #0x2c] @ 02007480
    mov r3, #0x6400000 @ 02007484
.L_02007488:
    mov r1, #0 @ 02007488
    strh r1, [r3], #2 @ 0200748c
    cmp r3, r2 @ 02007490
    bne .L_02007488 @ 02007494
    bx lr @ 02007498
    .byte 0x00, 0xc0, 0x00, 0x06, 0x00, 0x00, 0x02, 0x06, 0x00, 0x00, 0x03, 0x06, 0x00, 0x80, 0x02, 0x06 @ 0200749c
    .byte 0x00, 0x80, 0x03, 0x06, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x41, 0x06 @ 020074ac
.L_020074b8:
@ FUN_020074b8 at 0x020074b8
    push {r4, r5, r6, r7, r8, lr} @ 020074b8
    add r3, r0, r1, lsl #11 @ 020074bc
    ldr r7, [pc, #0xc8] @ 020074c0
    lsl r5, r3, #1 @ 020074c4
    ldrh lr, [r5, r7] @ 020074c8
    mov r8, r0 @ 020074cc
    tst lr, #0x8000 @ 020074d0
    lslne ip, lr, #0x16 @ 020074d4
    mov r4, r1 @ 020074d8
    lsrne ip, ip, #0x16 @ 020074dc
    bne .L_02007588 @ 020074e0
    ldr r6, [pc, #0xa8] @ 020074e4
    lsl r1, r1, #1 @ 020074e8
    ldrh r0, [r1, r6] @ 020074ec
    ldr r3, [pc, #0xa0] @ 020074f0
    cmp r0, r3 @ 020074f4
    ldrhi r2, [pc, #0x9c] @ 020074f8
    movhi r3, #1 @ 020074fc
    movhi r0, r3 @ 02007500
    strhi r3, [r2, r4, lsl #2] @ 02007504
    strhhi r3, [r1, r6] @ 02007508
    orr r3, lr, #0x8000 @ 0200750c
    orr r3, r0, r3 @ 02007510
    lsl r3, r3, #0x10 @ 02007514
    ldr lr, [pc, #0x80] @ 02007518
    lsr r3, r3, #0x10 @ 0200751c
    and lr, r3, lr @ 02007520
    add r2, r0, #1 @ 02007524
    tst r3, #0x4000 @ 02007528
    mov ip, r0 @ 0200752c
    strh r2, [r1, r6] @ 02007530
    strh lr, [r5, r7] @ 02007534
    beq .L_02007588 @ 02007538
    ldr r3, [pc, #0x60] @ 0200753c
    ldr r2, [pc, #0x60] @ 02007540
    ldr r0, [r3] @ 02007544
    ldr r1, [r2, r4, lsl #2] @ 02007548
    bic r3, lr, #0x4000 @ 0200754c
    add r1, r1, ip, lsl #5 @ 02007550
    lsl lr, ip, #5 @ 02007554
    strh r3, [r5, r7] @ 02007558
    add r0, r0, r8, lsl #5 @ 0200755c
    mov ip, #0 @ 02007560
.L_02007564:
    lsl r2, ip, #1 @ 02007564
    eor r3, ip, #1 @ 02007568
    ldrh r2, [r2, r0] @ 0200756c
    add ip, ip, #1 @ 02007570
    lsl r3, r3, #1 @ 02007574
    cmp ip, #0x10 @ 02007578
    strh r2, [r3, r1] @ 0200757c
    bne .L_02007564 @ 02007580
    lsr ip, lr, #5 @ 02007584
.L_02007588:
    mov r0, ip @ 02007588
    pop {r4, r5, r6, r7, r8, pc} @ 0200758c
    .byte 0xcc, 0x93, 0x09, 0x02, 0xcc, 0xc3, 0x09, 0x02, 0xfe, 0x03, 0x00, 0x00, 0xd4, 0xc3, 0x09, 0x02 @ 02007590
    .byte 0xff, 0xdf, 0x00, 0x00, 0x48, 0x36, 0x00, 0x0b, 0x90, 0xe5, 0x08, 0x02 @ 020075a0
.L_020075ac:
@ FUN_020075ac at 0x020075ac
    ldr r3, [pc, #4] @ 020075ac
    ldr r0, [r3, r0, lsl #2] @ 020075b0
    bx lr @ 020075b4
    .byte 0xd4, 0xc3, 0x09, 0x02 @ 020075b8
.L_020075bc:
@ FUN_020075bc at 0x020075bc
    ldr r3, [pc, #8] @ 020075bc
    mov r2, #1 @ 020075c0
    str r2, [r3, r0, lsl #2] @ 020075c4
    bx lr @ 020075c8
    .byte 0xd4, 0xc3, 0x09, 0x02 @ 020075cc
.L_020075d0:
@ FUN_020075d0 at 0x020075d0
    ldr ip, [pc, #0x48] @ 020075d0
    lsl r1, r0, #1 @ 020075d4
    ldrh r2, [r1, ip] @ 020075d8
    ldr r3, [pc, #0x40] @ 020075dc
    cmp r2, r3 @ 020075e0
    bxls lr @ 020075e4
    mov r3, #1 @ 020075e8
    strh r3, [r1, ip] @ 020075ec
    ldr r3, [pc, #0x30] @ 020075f0
    add r2, r3, r0, lsl #12 @ 020075f4
    mov r3, #1 @ 020075f8
.L_020075fc:
    add r3, r3, #1 @ 020075fc
    mov r1, #0x6000 @ 02007600
    cmp r3, #0x800 @ 02007604
    strh r1, [r2, #2]! @ 02007608
    bne .L_020075fc @ 0200760c
    ldr r3, [pc, #0x14] @ 02007610
    mov r2, #0 @ 02007614
    str r2, [r3, r0, lsl #2] @ 02007618
    bx lr @ 0200761c
    .byte 0xcc, 0xc3, 0x09, 0x02, 0xfe, 0x02, 0x00, 0x00, 0xcc, 0x93, 0x09, 0x02, 0xd4, 0xc3, 0x09, 0x02 @ 02007620
.L_02007630:
@ FUN_02007630 at 0x02007630
    push {r4, r5, r6, r7, r8, lr} @ 02007630
    ldr r3, [pc, #0x64] @ 02007634
    mov r7, r1 @ 02007638
    mov r6, r2 @ 0200763c
    lsl r1, r2, #1 @ 02007640
    mov r5, r0 @ 02007644
    mov r0, r2 @ 02007648
    ldr r2, [pc, #0x50] @ 0200764c
    strh r2, [r1, r3] @ 02007650
    bl .L_020075d0 @ 02007654
    cmp r7, #0 @ 02007658
    beq .L_02007688 @ 0200765c
    ldr r8, [pc, #0x40] @ 02007660
    mov r4, #0 @ 02007664
.L_02007668:
    mov r1, r4 @ 02007668
    mov r0, r6 @ 0200766c
    add r4, r4, #2 @ 02007670
    ldrh r2, [r5], #2 @ 02007674
    mov lr, pc @ 02007678
    ldr pc, [r8] @ 0200767c
    cmp r7, r4 @ 02007680
    bhi .L_02007668 @ 02007684
.L_02007688:
    ldr r2, [pc, #0x1c] @ 02007688
    ldr r3, [r2] @ 0200768c
    ands r2, r3, #8 @ 02007690
    ldreq r3, [pc, #0x14] @ 02007694
    streq r2, [r3, r6, lsl #2] @ 02007698
    pop {r4, r5, r6, r7, r8, pc} @ 0200769c
    .byte 0xcc, 0xc3, 0x09, 0x02, 0xfe, 0x03, 0x00, 0x00, 0x9c, 0xc6, 0x3d, 0x02, 0x10, 0xb6, 0x3c, 0x02 @ 020076a0
    .byte 0xd4, 0xc3, 0x09, 0x02, 0x10, 0x30, 0x9f, 0xe5, 0x01, 0x00, 0xc0, 0xe3, 0x02, 0xc1, 0x93, 0xe7 @ 020076b0
    .byte 0x02, 0x00, 0x20, 0xe2, 0xbc, 0x10, 0x80, 0xe1, 0x1e, 0xff, 0x2f, 0xe1, 0x90, 0xe5, 0x08, 0x02 @ 020076c0
.L_020076d0:
@ FUN_020076d0 at 0x020076d0
    push {r4, r5, r6, r7, lr} @ 020076d0
    lsr ip, r0, #5 @ 020076d4
    ldr r6, [pc, #0xc4] @ 020076d8
    lsl r4, ip, #1 @ 020076dc
    mov r5, r0 @ 020076e0
    and r2, r0, #0x1f @ 020076e4
    ldrh r0, [r4, r6] @ 020076e8
    mov r7, r1 @ 020076ec
    lsl r3, r0, #0x16 @ 020076f0
    lsr r3, r3, #0x16 @ 020076f4
    orr r2, r2, r3, lsl #5 @ 020076f8
    ldr r3, [pc, #0xa4] @ 020076fc
    tst r0, #0x8000 @ 02007700
    orr lr, r0, #0x4000 @ 02007704
    lsr r2, r2, #1 @ 02007708
    mov r0, #1 @ 0200770c
    strb r0, [r3, ip] @ 02007710
    eor r2, r2, #1 @ 02007714
    ldrne r3, [pc, #0x8c] @ 02007718
    lsl r2, r2, #1 @ 0200771c
    strhne r1, [r2, r3] @ 02007720
    add r3, r4, r6 @ 02007724
    strheq lr, [r4, r6] @ 02007728
    add r0, r3, #0x1000 @ 0200772c
    ldrh r1, [r0] @ 02007730
    and r2, r5, #0x1f @ 02007734
    lsl r3, r1, #0x16 @ 02007738
    lsr r3, r3, #0x16 @ 0200773c
    orr r2, r2, r3, lsl #5 @ 02007740
    tst r1, #0x8000 @ 02007744
    lsr r2, r2, #1 @ 02007748
    ldrne r3, [pc, #0x5c] @ 0200774c
    eor r2, r2, #1 @ 02007750
    lsl r2, r2, #1 @ 02007754
    strhne r7, [r2, r3] @ 02007758
    orr r1, r1, #0x4000 @ 0200775c
    add r3, r4, r6 @ 02007760
    strheq r1, [r0] @ 02007764
    add ip, r3, #0x2000 @ 02007768
    ldrh r1, [ip] @ 0200776c
    and r2, r5, #0x1f @ 02007770
    lsl r3, r1, #0x16 @ 02007774
    lsr r3, r3, #0x16 @ 02007778
    orr r2, r2, r3, lsl #5 @ 0200777c
    tst r1, #0x8000 @ 02007780
    lsr r2, r2, #1 @ 02007784
    orr r3, r1, #0x4000 @ 02007788
    eor r2, r2, #1 @ 0200778c
    ldrne r3, [pc, #0x1c] @ 02007790
    lsl r0, r2, #1 @ 02007794
    strhne r7, [r0, r3] @ 02007798
    strheq r3, [ip] @ 0200779c
    pop {r4, r5, r6, r7, pc} @ 020077a0
    .byte 0xcc, 0x93, 0x09, 0x02, 0xe0, 0xc3, 0x09, 0x02, 0x00, 0x00, 0x02, 0x06, 0x00, 0x80, 0x02, 0x06 @ 020077a4
    .byte 0x00, 0x00, 0x03, 0x06 @ 020077b4
@ FUN_020077b8 at 0x020077b8
    push {r4, r5, r6, lr} @ 020077b8
    mov r6, r0 @ 020077bc
    lsl r0, r2, #0x15 @ 020077c0
    mov r4, r1 @ 020077c4
    lsr r0, r0, #0x15 @ 020077c8
    mov r1, r6 @ 020077cc
    mov r5, r2 @ 020077d0
    bl .L_020074b8 @ 020077d4
    ldr r2, [pc, #0x4c] @ 020077d8
    and r3, r5, #0x7800 @ 020077dc
    orr r0, r0, r3, lsr #1 @ 020077e0
    lsl r0, r0, #0x10 @ 020077e4
    add r3, r2, r6, lsl #3 @ 020077e8
    lsl r4, r4, #0xf @ 020077ec
    tst r5, #0x8000 @ 020077f0
    ldr ip, [r2, r6, lsl #3] @ 020077f4
    lsr r4, r4, #0x10 @ 020077f8
    ldr r2, [r3, #4] @ 020077fc
    eor r0, r0, #0x4000000 @ 02007800
    lsl r1, r4, #1 @ 02007804
    lsr r0, r0, #0x10 @ 02007808
    lsl r4, r4, #1 @ 0200780c
    mvnne r3, #0xfc00 @ 02007810
    mvneq r3, #0xfc00 @ 02007814
    strhne r0, [r2, r1] @ 02007818
    strheq r3, [r2, r4] @ 0200781c
    strhne r3, [ip, r1] @ 02007820
    strheq r0, [ip, r4] @ 02007824
    pop {r4, r5, r6, pc} @ 02007828
    .byte 0x78, 0xe5, 0x08, 0x02 @ 0200782c
@ FUN_02007830 at 0x02007830
    push {r4, r5, r6, lr} @ 02007830
    mov r5, r0 @ 02007834
    lsl r0, r2, #0x15 @ 02007838
    mov r4, r1 @ 0200783c
    lsr r0, r0, #0x15 @ 02007840
    mov r1, r5 @ 02007844
    mov r6, r2 @ 02007848
    bl .L_020074b8 @ 0200784c
    lsr r2, r4, #1 @ 02007850
    and r2, r2, #0x3f @ 02007854
    lsr r4, r4, #7 @ 02007858
    add r4, r2, r4, lsl #5 @ 0200785c
    and r3, r6, #0x7800 @ 02007860
    lsl r4, r4, #0x10 @ 02007864
    lsr r4, r4, #0x10 @ 02007868
    orr r0, r0, r3, lsr #1 @ 0200786c
    ldr r1, [pc, #0x4c] @ 02007870
    add r3, r4, #0x3e0 @ 02007874
    lsl r0, r0, #0x10 @ 02007878
    lsl r3, r3, #0x10 @ 0200787c
    cmp r2, #0x1f @ 02007880
    eor r0, r0, #0x4000000 @ 02007884
    add r2, r1, r5, lsl #3 @ 02007888
    lsrhi r4, r3, #0x10 @ 0200788c
    lsr lr, r0, #0x10 @ 02007890
    tst r6, #0x8000 @ 02007894
    ldr r0, [r1, r5, lsl #3] @ 02007898
    ldr r2, [r2, #4] @ 0200789c
    lsl ip, r4, #1 @ 020078a0
    mvnne r3, #0xfc00 @ 020078a4
    lsl r4, r4, #1 @ 020078a8
    mvneq r3, #0xfc00 @ 020078ac
    strhne lr, [r2, ip] @ 020078b0
    strheq r3, [r2, r4] @ 020078b4
    strhne r3, [r0, ip] @ 020078b8
    strheq lr, [r0, r4] @ 020078bc
    pop {r4, r5, r6, pc} @ 020078c0
    .byte 0x78, 0xe5, 0x08, 0x02 @ 020078c4
@ FUN_020078c8 at 0x020078c8
    push {r4, r5, r6, r7, lr} @ 020078c8
    mov r5, r0 @ 020078cc
    lsl r0, r2, #0x15 @ 020078d0
    mov r4, r1 @ 020078d4
    sub sp, sp, #4 @ 020078d8
    mov r1, r5 @ 020078dc
    lsr r0, r0, #0x15 @ 020078e0
    mov r6, r2 @ 020078e4
    bl .L_020074b8 @ 020078e8
    lsl r2, r4, #9 @ 020078ec
    lsr r4, r4, #1 @ 020078f0
    and r4, r4, #0x3f @ 020078f4
    lsr ip, r2, #0x10 @ 020078f8
    add r2, r4, ip, lsl #5 @ 020078fc
    lsl r2, r2, #0x10 @ 02007900
    lsr r2, r2, #0x10 @ 02007904
    and r3, r6, #0x7800 @ 02007908
    orr r0, r0, r3, lsr #1 @ 0200790c
    add r3, r2, #0x3e0 @ 02007910
    cmp r4, #0x1f @ 02007914
    lsl r3, r3, #0x10 @ 02007918
    lsrhi r2, r3, #0x10 @ 0200791c
    ldr r7, [pc, #0x50] @ 02007920
    add r3, r2, #0x400 @ 02007924
    lsl r0, r0, #0x10 @ 02007928
    lsl r3, r3, #0x10 @ 0200792c
    cmp ip, #0x1f @ 02007930
    eor r0, r0, #0x4000000 @ 02007934
    add r1, r7, r5, lsl #3 @ 02007938
    lsrhi r2, r3, #0x10 @ 0200793c
    lsr r4, r0, #0x10 @ 02007940
    tst r6, #0x8000 @ 02007944
    ldr r0, [r7, r5, lsl #3] @ 02007948
    ldr ip, [r1, #4] @ 0200794c
    lsl lr, r2, #1 @ 02007950
    mvnne r3, #0xfc00 @ 02007954
    lsl r2, r2, #1 @ 02007958
    mvneq r3, #0xfc00 @ 0200795c
    strhne r4, [ip, lr] @ 02007960
    strheq r3, [ip, r2] @ 02007964
    strhne r3, [r0, lr] @ 02007968
    strheq r4, [r0, r2] @ 0200796c
    add sp, sp, #4 @ 02007970
    pop {r4, r5, r6, r7, pc} @ 02007974
    .byte 0x78, 0xe5, 0x08, 0x02 @ 02007978
@ FUN_0200797c at 0x0200797c
    push {r4, r5, r6, r7, lr} @ 0200797c
    mov r5, r0 @ 02007980
    lsl r0, r2, #0x15 @ 02007984
    mov r4, r1 @ 02007988
    sub sp, sp, #4 @ 0200798c
    mov r1, r5 @ 02007990
    lsr r0, r0, #0x15 @ 02007994
    mov r6, r2 @ 02007998
    bl .L_020074b8 @ 0200799c
    lsr r2, r4, #1 @ 020079a0
    and r2, r2, #0x7f @ 020079a4
    lsr r4, r4, #8 @ 020079a8
    add r4, r2, r4, lsl #5 @ 020079ac
    lsl r4, r4, #0x10 @ 020079b0
    lsr r4, r4, #0x10 @ 020079b4
    and r3, r6, #0x7800 @ 020079b8
    orr r0, r0, r3, lsr #1 @ 020079bc
    add r3, r4, #0x3e0 @ 020079c0
    cmp r2, #0x1f @ 020079c4
    lsl r3, r3, #0x10 @ 020079c8
    lsrhi r4, r3, #0x10 @ 020079cc
    ldr r7, [pc, #0x50] @ 020079d0
    add r3, r4, #0x400 @ 020079d4
    lsl r0, r0, #0x10 @ 020079d8
    lsl r3, r3, #0x10 @ 020079dc
    cmp r2, #0x3f @ 020079e0
    eor r0, r0, #0x4000000 @ 020079e4
    add r1, r7, r5, lsl #3 @ 020079e8
    lsrhi r4, r3, #0x10 @ 020079ec
    lsr lr, r0, #0x10 @ 020079f0
    tst r6, #0x8000 @ 020079f4
    ldr r0, [r7, r5, lsl #3] @ 020079f8
    ldr r2, [r1, #4] @ 020079fc
    lsl ip, r4, #1 @ 02007a00
    mvnne r3, #0xfc00 @ 02007a04
    lsl r4, r4, #1 @ 02007a08
    mvneq r3, #0xfc00 @ 02007a0c
    strhne lr, [r2, ip] @ 02007a10
    strheq r3, [r2, r4] @ 02007a14
    strhne r3, [r0, ip] @ 02007a18
    strheq lr, [r0, r4] @ 02007a1c
    add sp, sp, #4 @ 02007a20
    pop {r4, r5, r6, r7, pc} @ 02007a24
    .byte 0x78, 0xe5, 0x08, 0x02 @ 02007a28
@ FUN_02007a2c at 0x02007a2c
    push {r4, r5, lr} @ 02007a2c
    mov r4, r0 @ 02007a30
    lsl r0, r1, #0x15 @ 02007a34
    mov r5, r1 @ 02007a38
    sub sp, sp, #4 @ 02007a3c
    mov r1, #2 @ 02007a40
    lsr r0, r0, #0x15 @ 02007a44
    bl .L_020074b8 @ 02007a48
    and r3, r5, #0x7800 @ 02007a4c
    orr r0, r0, r3, lsr #1 @ 02007a50
    tst r5, #0x8000 @ 02007a54
    lsl r0, r0, #0x10 @ 02007a58
    lsl r4, r4, #0xf @ 02007a5c
    ldreq r3, [pc, #0x3c] @ 02007a60
    lsr r4, r4, #0x10 @ 02007a64
    eor r0, r0, #0x4000000 @ 02007a68
    lsl ip, r4, #1 @ 02007a6c
    lsr r0, r0, #0x10 @ 02007a70
    lsl r4, r4, #1 @ 02007a74
    ldrne r2, [pc, #0x24] @ 02007a78
    ldrne r1, [pc, #0x24] @ 02007a7c
    strheq r0, [r4, r3] @ 02007a80
    mvnne r3, #0xfc00 @ 02007a84
    mvneq r2, #0xfc00 @ 02007a88
    addeq r3, r3, #0x2000 @ 02007a8c
    strhne r3, [ip, r2] @ 02007a90
    strheq r2, [r4, r3] @ 02007a94
    strhne r0, [ip, r1] @ 02007a98
    add sp, sp, #4 @ 02007a9c
    pop {r4, r5, pc} @ 02007aa0
    .byte 0x00, 0x80, 0x00, 0x06, 0x00, 0xa0, 0x00, 0x06 @ 02007aa4
@ FUN_02007aac at 0x02007aac
    push {r4, r5, lr} @ 02007aac
    mov r4, r0 @ 02007ab0
    lsl r0, r1, #0x15 @ 02007ab4
    mov r5, r1 @ 02007ab8
    sub sp, sp, #4 @ 02007abc
    mov r1, #2 @ 02007ac0
    lsr r0, r0, #0x15 @ 02007ac4
    bl .L_020074b8 @ 02007ac8
    lsr r2, r4, #1 @ 02007acc
    and r2, r2, #0x3f @ 02007ad0
    lsr r4, r4, #7 @ 02007ad4
    add r4, r2, r4, lsl #5 @ 02007ad8
    lsl r4, r4, #0x10 @ 02007adc
    lsr r4, r4, #0x10 @ 02007ae0
    and r3, r5, #0x7800 @ 02007ae4
    orr r0, r0, r3, lsr #1 @ 02007ae8
    add r3, r4, #0x3e0 @ 02007aec
    lsl r3, r3, #0x10 @ 02007af0
    cmp r2, #0x1f @ 02007af4
    lsrhi r4, r3, #0x10 @ 02007af8
    lsl r0, r0, #0x10 @ 02007afc
    tst r5, #0x8000 @ 02007b00
    ldreq r3, [pc, #0x38] @ 02007b04
    eor r0, r0, #0x4000000 @ 02007b08
    lsl ip, r4, #1 @ 02007b0c
    lsr r0, r0, #0x10 @ 02007b10
    lsl r4, r4, #1 @ 02007b14
    ldrne r2, [pc, #0x24] @ 02007b18
    ldrne r1, [pc, #0x24] @ 02007b1c
    strheq r0, [r4, r3] @ 02007b20
    mvnne r3, #0xfc00 @ 02007b24
    mvneq r2, #0xfc00 @ 02007b28
    addeq r3, r3, #0x2000 @ 02007b2c
    strhne r3, [ip, r2] @ 02007b30
    strheq r2, [r4, r3] @ 02007b34
    strhne r0, [ip, r1] @ 02007b38
    add sp, sp, #4 @ 02007b3c
    pop {r4, r5, pc} @ 02007b40
    .byte 0x00, 0x80, 0x00, 0x06, 0x00, 0xa0, 0x00, 0x06 @ 02007b44
@ FUN_02007b4c at 0x02007b4c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02007b4c
    ldr ip, [pc, #0xa4] @ 02007b50
    sub sp, sp, #4 @ 02007b54
    ldr sb, [ip] @ 02007b58
    mov r7, r0 @ 02007b5c
    mov r6, r1 @ 02007b60
    mov sl, r2 @ 02007b64
    mov r8, r3 @ 02007b68
    mvn fp, #0xfc00 @ 02007b6c
    b .L_02007b80 @ 02007b70
.L_02007b74:
    add r6, r6, sl @ 02007b74
    cmp r6, r8 @ 02007b78
    bhs .L_02007bf4 @ 02007b7c
.L_02007b80:
    lsl r3, r6, #0xf @ 02007b80
    lsr r5, r3, #0x10 @ 02007b84
    ldrb r2, [sb, r5] @ 02007b88
    ldrh r4, [r7], #2 @ 02007b8c
    mov r1, #0 @ 02007b90
    lsl r0, r4, #0x15 @ 02007b94
    cmp r2, r1 @ 02007b98
    lsr r0, r0, #0x15 @ 02007b9c
    beq .L_02007b74 @ 02007ba0
    bl .L_020074b8 @ 02007ba4
    and r3, r4, #0x7800 @ 02007ba8
    orr r0, r0, r3, lsr #1 @ 02007bac
    tst r4, #0x8000 @ 02007bb0
    lsl r0, r0, #0x10 @ 02007bb4
    lsl r3, r5, #1 @ 02007bb8
    eor r0, r0, #0x4000000 @ 02007bbc
    ldrne r3, [pc, #0x38] @ 02007bc0
    lsl r2, r5, #1 @ 02007bc4
    lsr r0, r0, #0x10 @ 02007bc8
    moveq r2, #0x6000000 @ 02007bcc
    strhne r0, [r2, r3] @ 02007bd0
    strheq r0, [r3, r2] @ 02007bd4
    subne r3, r3, #0x4000 @ 02007bd8
    addeq r2, r2, #0x4000 @ 02007bdc
    add r6, r6, sl @ 02007be0
    strhne fp, [r2, r3] @ 02007be4
    strheq fp, [r3, r2] @ 02007be8
    cmp r6, r8 @ 02007bec
    blo .L_02007b80 @ 02007bf0
.L_02007bf4:
    add sp, sp, #4 @ 02007bf4
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02007bf8
    .byte 0x8c, 0xde, 0x3d, 0x02, 0x00, 0x40, 0x00, 0x06 @ 02007bfc
@ FUN_02007c04 at 0x02007c04
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02007c04
    ldr ip, [pc, #0xc8] @ 02007c08
    sub sp, sp, #4 @ 02007c0c
    ldr fp, [ip] @ 02007c10
    mov r8, r0 @ 02007c14
    mov r6, r1 @ 02007c18
    mov sb, r2 @ 02007c1c
    mov sl, r3 @ 02007c20
    b .L_02007c34 @ 02007c24
.L_02007c28:
    add r6, r6, sb @ 02007c28
    cmp r6, sl @ 02007c2c
    bhs .L_02007cd0 @ 02007c30
.L_02007c34:
    lsr r3, r6, #1 @ 02007c34
    lsl r7, r3, #0x10 @ 02007c38
    lsr r5, r7, #0x10 @ 02007c3c
    ldrb r3, [fp, r5] @ 02007c40
    ldrh r4, [r8], #2 @ 02007c44
    mov r1, #0 @ 02007c48
    lsl r0, r4, #0x15 @ 02007c4c
    cmp r3, r1 @ 02007c50
    lsr r0, r0, #0x15 @ 02007c54
    beq .L_02007c28 @ 02007c58
    bl .L_020074b8 @ 02007c5c
    and r3, r4, #0x7800 @ 02007c60
    orr r0, r0, r3, lsr #1 @ 02007c64
    and r1, r5, #0x3f @ 02007c68
    lsr r3, r7, #0x16 @ 02007c6c
    cmp r1, #0x1f @ 02007c70
    add r1, r1, r3, lsl #5 @ 02007c74
    add r2, r1, #0x3e0 @ 02007c78
    lsl r2, r2, #0x10 @ 02007c7c
    lsrhi r1, r2, #0x10 @ 02007c80
    lsl r0, r0, #0x10 @ 02007c84
    tst r4, #0x8000 @ 02007c88
    lsl r3, r1, #1 @ 02007c8c
    eor r0, r0, #0x4000000 @ 02007c90
    lsl r1, r1, #1 @ 02007c94
    ldrne r1, [pc, #0x3c] @ 02007c98
    moveq r2, #0x6000000 @ 02007c9c
    lsr r0, r0, #0x10 @ 02007ca0
    strhne r0, [r3, r1] @ 02007ca4
    strheq r0, [r1, r2] @ 02007ca8
    ldrne r1, [pc, #0x2c] @ 02007cac
    ldreq r2, [pc, #0x28] @ 02007cb0
    ldreq r3, [pc, #0x20] @ 02007cb4
    movne r2, #0x6000000 @ 02007cb8
    add r6, r6, sb @ 02007cbc
    strhne r1, [r3, r2] @ 02007cc0
    strheq r2, [r1, r3] @ 02007cc4
    cmp r6, sl @ 02007cc8
    blo .L_02007c34 @ 02007ccc
.L_02007cd0:
    add sp, sp, #4 @ 02007cd0
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02007cd4
    .byte 0x8c, 0xde, 0x3d, 0x02, 0x00, 0x40, 0x00, 0x06, 0xff, 0x03, 0x00, 0x00 @ 02007cd8
@ FUN_02007ce4 at 0x02007ce4
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02007ce4
    ldr ip, [pc, #0xe0] @ 02007ce8
    sub sp, sp, #4 @ 02007cec
    ldr fp, [ip] @ 02007cf0
    mov r8, r0 @ 02007cf4
    mov r5, r1 @ 02007cf8
    mov sb, r2 @ 02007cfc
    mov sl, r3 @ 02007d00
    b .L_02007d14 @ 02007d04
.L_02007d08:
    add r5, r5, sb @ 02007d08
    cmp r5, sl @ 02007d0c
    bhs .L_02007dac @ 02007d10
.L_02007d14:
    lsr r3, r5, #1 @ 02007d14
    lsl r7, r3, #0x10 @ 02007d18
    lsr r4, r7, #0x10 @ 02007d1c
    ldrb r3, [fp, r4] @ 02007d20
    ldrh r6, [r8], #2 @ 02007d24
    cmp r3, #0 @ 02007d28
    beq .L_02007d08 @ 02007d2c
    lsl r0, r6, #0x15 @ 02007d30
    mov r1, #0 @ 02007d34
    lsr r0, r0, #0x15 @ 02007d38
    bl .L_020074b8 @ 02007d3c
    and r2, r4, #0x3f @ 02007d40
    lsr r1, r7, #0x16 @ 02007d44
    and r3, r6, #0x7800 @ 02007d48
    cmp r2, #0x1f @ 02007d4c
    add r2, r2, r1, lsl #5 @ 02007d50
    orr r0, r0, r3, lsr #1 @ 02007d54
    addhi r3, r2, #0x3e0 @ 02007d58
    lslhi r3, r3, #0x10 @ 02007d5c
    lsrhi r2, r3, #0x10 @ 02007d60
    cmp r1, #0x1f @ 02007d64
    addhi r3, r2, #0x400 @ 02007d68
    lslhi r3, r3, #0x10 @ 02007d6c
    lsl r0, r0, #0x10 @ 02007d70
    eor r0, r0, #0x4000000 @ 02007d74
    lsrhi r2, r3, #0x10 @ 02007d78
    tst r6, #0x8000 @ 02007d7c
    lsr r0, r0, #0x10 @ 02007d80
    bne .L_02007db4 @ 02007d84
    lsl r3, r2, #1 @ 02007d88
    mov r2, #0x6000000 @ 02007d8c
    strh r0, [r3, r2] @ 02007d90
    ldr r1, [pc, #0x38] @ 02007d94
    ldr r2, [pc, #0x38] @ 02007d98
    add r5, r5, sb @ 02007d9c
    cmp r5, sl @ 02007da0
    strh r2, [r3, r1] @ 02007da4
    blo .L_02007d14 @ 02007da8
.L_02007dac:
    add sp, sp, #4 @ 02007dac
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02007db0
.L_02007db4:
    ldr r1, [pc, #0x18] @ 02007db4
    lsl r3, r2, #1 @ 02007db8
    strh r0, [r3, r1] @ 02007dbc
    ldr r1, [pc, #0x10] @ 02007dc0
    mov r2, #0x6000000 @ 02007dc4
    strh r1, [r3, r2] @ 02007dc8
    b .L_02007d08 @ 02007dcc
    .byte 0x8c, 0xde, 0x3d, 0x02, 0x00, 0x40, 0x00, 0x06, 0xff, 0x03, 0x00, 0x00 @ 02007dd0
@ FUN_02007ddc at 0x02007ddc
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02007ddc
    ldr ip, [pc, #0xe8] @ 02007de0
    sub sp, sp, #4 @ 02007de4
    ldr sl, [ip] @ 02007de8
    mov r8, r0 @ 02007dec
    mov r5, r1 @ 02007df0
    mov fp, r2 @ 02007df4
    mov sb, r3 @ 02007df8
    b .L_02007e0c @ 02007dfc
.L_02007e00:
    add r5, r5, fp @ 02007e00
    cmp r5, sb @ 02007e04
    bhs .L_02007eac @ 02007e08
.L_02007e0c:
    lsr r3, r5, #1 @ 02007e0c
    lsl r7, r3, #0x10 @ 02007e10
    lsr r4, r7, #0x10 @ 02007e14
    ldrb r3, [sl, r4] @ 02007e18
    ldrh r6, [r8], #2 @ 02007e1c
    cmp r3, #0 @ 02007e20
    beq .L_02007e00 @ 02007e24
    mov r1, #0 @ 02007e28
    lsl r0, r6, #0x15 @ 02007e2c
    strb r1, [sl, r4] @ 02007e30
    lsr r0, r0, #0x15 @ 02007e34
    mov r1, #0 @ 02007e38
    bl .L_020074b8 @ 02007e3c
    and r3, r6, #0x7800 @ 02007e40
    and r1, r4, #0x7f @ 02007e44
    orr r0, r0, r3, lsr #1 @ 02007e48
    lsr r3, r7, #0x17 @ 02007e4c
    add r2, r1, r3, lsl #5 @ 02007e50
    cmp r1, #0x1f @ 02007e54
    addhi r3, r2, #0x3e0 @ 02007e58
    lslhi r3, r3, #0x10 @ 02007e5c
    lsrhi r2, r3, #0x10 @ 02007e60
    cmp r1, #0x3f @ 02007e64
    addhi r3, r2, #0x400 @ 02007e68
    lslhi r3, r3, #0x10 @ 02007e6c
    lsl r0, r0, #0x10 @ 02007e70
    eor r0, r0, #0x4000000 @ 02007e74
    lsrhi r2, r3, #0x10 @ 02007e78
    tst r6, #0x8000 @ 02007e7c
    lsr r0, r0, #0x10 @ 02007e80
    bne .L_02007eb4 @ 02007e84
    lsl r2, r2, #1 @ 02007e88
    mov r1, #0x6000000 @ 02007e8c
    add r5, r5, fp @ 02007e90
    strh r0, [r2, r1] @ 02007e94
    mvn r3, #0xfc00 @ 02007e98
    add r1, r1, #0x4000 @ 02007e9c
    cmp r5, sb @ 02007ea0
    strh r3, [r2, r1] @ 02007ea4
    blo .L_02007e0c @ 02007ea8
.L_02007eac:
    add sp, sp, #4 @ 02007eac
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02007eb0
.L_02007eb4:
    lsl r2, r2, #1 @ 02007eb4
    mvn r3, #0xfc00 @ 02007eb8
    mov r1, #0x6000000 @ 02007ebc
    strh r3, [r2, r1] @ 02007ec0
    ldr r3, [pc, #8] @ 02007ec4
    strh r0, [r2, r3] @ 02007ec8
    b .L_02007e00 @ 02007ecc
    .byte 0x8c, 0xde, 0x3d, 0x02, 0x00, 0x40, 0x00, 0x06 @ 02007ed0
@ FUN_02007ed8 at 0x02007ed8
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02007ed8
    ldr ip, [pc, #0xa4] @ 02007edc
    sub sp, sp, #4 @ 02007ee0
    ldr sb, [ip, #4] @ 02007ee4
    mov r7, r0 @ 02007ee8
    mov r6, r1 @ 02007eec
    mov sl, r2 @ 02007ef0
    mov r8, r3 @ 02007ef4
    mvn fp, #0xfc00 @ 02007ef8
    b .L_02007f0c @ 02007efc
.L_02007f00:
    add r6, r6, sl @ 02007f00
    cmp r6, r8 @ 02007f04
    bhs .L_02007f80 @ 02007f08
.L_02007f0c:
    lsl r3, r6, #0xf @ 02007f0c
    lsr r5, r3, #0x10 @ 02007f10
    ldrb r2, [sb, r5] @ 02007f14
    ldrh r4, [r7], #2 @ 02007f18
    cmp r2, #0 @ 02007f1c
    lsl r0, r4, #0x15 @ 02007f20
    mov r1, #1 @ 02007f24
    lsr r0, r0, #0x15 @ 02007f28
    beq .L_02007f00 @ 02007f2c
    bl .L_020074b8 @ 02007f30
    and r3, r4, #0x7800 @ 02007f34
    orr r0, r0, r3, lsr #1 @ 02007f38
    tst r4, #0x8000 @ 02007f3c
    lsl r0, r0, #0x10 @ 02007f40
    lsl r2, r5, #1 @ 02007f44
    lsl r3, r5, #1 @ 02007f48
    ldreq r2, [pc, #0x38] @ 02007f4c
    ldrne r3, [pc, #0x38] @ 02007f50
    eor r0, r0, #0x4000000 @ 02007f54
    lsr r0, r0, #0x10 @ 02007f58
    strhne r0, [r2, r3] @ 02007f5c
    strheq r0, [r3, r2] @ 02007f60
    subne r3, r3, #0x4000 @ 02007f64
    addeq r2, r2, #0x4000 @ 02007f68
    add r6, r6, sl @ 02007f6c
    strhne fp, [r2, r3] @ 02007f70
    strheq fp, [r3, r2] @ 02007f74
    cmp r6, r8 @ 02007f78
    blo .L_02007f0c @ 02007f7c
.L_02007f80:
    add sp, sp, #4 @ 02007f80
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02007f84
    .byte 0x8c, 0xde, 0x3d, 0x02, 0x00, 0x20, 0x00, 0x06, 0x00, 0x60, 0x00, 0x06 @ 02007f88
@ FUN_02007f94 at 0x02007f94
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02007f94
    ldr ip, [pc, #0xc8] @ 02007f98
    sub sp, sp, #4 @ 02007f9c
    ldr fp, [ip, #4] @ 02007fa0
    mov r8, r0 @ 02007fa4
    mov r6, r1 @ 02007fa8
    mov sb, r2 @ 02007fac
    mov sl, r3 @ 02007fb0
    b .L_02007fc4 @ 02007fb4
.L_02007fb8:
    add r6, r6, sb @ 02007fb8
    cmp r6, sl @ 02007fbc
    bhs .L_02008060 @ 02007fc0
.L_02007fc4:
    mov r1, #1 @ 02007fc4
    lsr r3, r6, r1 @ 02007fc8
    lsl r7, r3, #0x10 @ 02007fcc
    lsr r5, r7, #0x10 @ 02007fd0
    ldrb r3, [fp, r5] @ 02007fd4
    ldrh r4, [r8], #2 @ 02007fd8
    cmp r3, #0 @ 02007fdc
    lsl r0, r4, #0x15 @ 02007fe0
    lsr r0, r0, #0x15 @ 02007fe4
    beq .L_02007fb8 @ 02007fe8
    bl .L_020074b8 @ 02007fec
    and r3, r4, #0x7800 @ 02007ff0
    orr r0, r0, r3, lsr #1 @ 02007ff4
    and r1, r5, #0x3f @ 02007ff8
    lsr r3, r7, #0x16 @ 02007ffc
    cmp r1, #0x1f @ 02008000
    add r1, r1, r3, lsl #5 @ 02008004
    add r2, r1, #0x3e0 @ 02008008
    lsl r2, r2, #0x10 @ 0200800c
    lsrhi r1, r2, #0x10 @ 02008010
    lsl r0, r0, #0x10 @ 02008014
    tst r4, #0x8000 @ 02008018
    lsl r3, r1, #1 @ 0200801c
    ldreq r2, [pc, #0x44] @ 02008020
    lsl r1, r1, #1 @ 02008024
    eor r0, r0, #0x4000000 @ 02008028
    ldrne r1, [pc, #0x3c] @ 0200802c
    lsr r0, r0, #0x10 @ 02008030
    strhne r0, [r3, r1] @ 02008034
    strheq r0, [r1, r2] @ 02008038
    ldrne r1, [pc, #0x30] @ 0200803c
    ldrne r2, [pc, #0x24] @ 02008040
    ldreq r2, [pc, #0x28] @ 02008044
    ldreq r3, [pc, #0x20] @ 02008048
    add r6, r6, sb @ 0200804c
    strhne r1, [r3, r2] @ 02008050
    strheq r2, [r1, r3] @ 02008054
    cmp r6, sl @ 02008058
    blo .L_02007fc4 @ 0200805c
.L_02008060:
    add sp, sp, #4 @ 02008060
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02008064
    .byte 0x8c, 0xde, 0x3d, 0x02, 0x00, 0x20, 0x00, 0x06, 0x00, 0x60, 0x00, 0x06, 0xff, 0x03, 0x00, 0x00 @ 02008068
@ FUN_02008078 at 0x02008078
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02008078
    ldr ip, [pc, #0xe0] @ 0200807c
    sub sp, sp, #4 @ 02008080
    ldr fp, [ip, #4] @ 02008084
    mov r8, r0 @ 02008088
    mov r5, r1 @ 0200808c
    mov sb, r2 @ 02008090
    mov sl, r3 @ 02008094
    b .L_020080a8 @ 02008098
.L_0200809c:
    add r5, r5, sb @ 0200809c
    cmp r5, sl @ 020080a0
    bhs .L_02008140 @ 020080a4
.L_020080a8:
    lsr r3, r5, #1 @ 020080a8
    lsl r7, r3, #0x10 @ 020080ac
    lsr r4, r7, #0x10 @ 020080b0
    ldrb r3, [fp, r4] @ 020080b4
    ldrh r6, [r8], #2 @ 020080b8
    cmp r3, #0 @ 020080bc
    beq .L_0200809c @ 020080c0
    lsl r0, r6, #0x15 @ 020080c4
    mov r1, #1 @ 020080c8
    lsr r0, r0, #0x15 @ 020080cc
    bl .L_020074b8 @ 020080d0
    and r2, r4, #0x3f @ 020080d4
    lsr r1, r7, #0x16 @ 020080d8
    and r3, r6, #0x7800 @ 020080dc
    cmp r2, #0x1f @ 020080e0
    add r2, r2, r1, lsl #5 @ 020080e4
    orr r0, r0, r3, lsr #1 @ 020080e8
    addhi r3, r2, #0x3e0 @ 020080ec
    lslhi r3, r3, #0x10 @ 020080f0
    lsrhi r2, r3, #0x10 @ 020080f4
    cmp r1, #0x1f @ 020080f8
    addhi r3, r2, #0x400 @ 020080fc
    lslhi r3, r3, #0x10 @ 02008100
    lsl r0, r0, #0x10 @ 02008104
    eor r0, r0, #0x4000000 @ 02008108
    lsrhi r2, r3, #0x10 @ 0200810c
    tst r6, #0x8000 @ 02008110
    lsr r0, r0, #0x10 @ 02008114
    bne .L_02008148 @ 02008118
    lsl r3, r2, #1 @ 0200811c
    ldr r2, [pc, #0x40] @ 02008120
    ldr r1, [pc, #0x40] @ 02008124
    strh r0, [r3, r2] @ 02008128
    add r5, r5, sb @ 0200812c
    ldr r2, [pc, #0x38] @ 02008130
    cmp r5, sl @ 02008134
    strh r2, [r3, r1] @ 02008138
    blo .L_020080a8 @ 0200813c
.L_02008140:
    add sp, sp, #4 @ 02008140
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02008144
.L_02008148:
    ldr r1, [pc, #0x1c] @ 02008148
    lsl r3, r2, #1 @ 0200814c
    strh r0, [r3, r1] @ 02008150
    ldr r2, [pc, #0xc] @ 02008154
    ldr r1, [pc, #0x10] @ 02008158
    strh r1, [r3, r2] @ 0200815c
    b .L_0200809c @ 02008160
    .byte 0x8c, 0xde, 0x3d, 0x02, 0x00, 0x20, 0x00, 0x06, 0x00, 0x60, 0x00, 0x06, 0xff, 0x03, 0x00, 0x00 @ 02008164
@ FUN_02008174 at 0x02008174
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02008174
    ldr ip, [pc, #0xe0] @ 02008178
    sub sp, sp, #4 @ 0200817c
    ldr fp, [ip, #4] @ 02008180
    mov r8, r0 @ 02008184
    mov r5, r1 @ 02008188
    mov sb, r2 @ 0200818c
    mov sl, r3 @ 02008190
    b .L_020081a4 @ 02008194
.L_02008198:
    add r5, r5, sb @ 02008198
    cmp r5, sl @ 0200819c
    bhs .L_0200823c @ 020081a0
.L_020081a4:
    lsr r3, r5, #1 @ 020081a4
    lsl r7, r3, #0x10 @ 020081a8
    lsr r4, r7, #0x10 @ 020081ac
    ldrb r3, [fp, r4] @ 020081b0
    ldrh r6, [r8], #2 @ 020081b4
    cmp r3, #0 @ 020081b8
    beq .L_02008198 @ 020081bc
    lsl r0, r6, #0x15 @ 020081c0
    lsr r0, r0, #0x15 @ 020081c4
    mov r1, #1 @ 020081c8
    bl .L_020074b8 @ 020081cc
    and r3, r6, #0x7800 @ 020081d0
    and r2, r4, #0x7f @ 020081d4
    orr r0, r0, r3, lsr #1 @ 020081d8
    lsr r3, r7, #0x17 @ 020081dc
    add r3, r2, r3, lsl #5 @ 020081e0
    cmp r2, #0x1f @ 020081e4
    addhi r3, r3, #0x3e0 @ 020081e8
    lslhi r3, r3, #0x10 @ 020081ec
    lsrhi r3, r3, #0x10 @ 020081f0
    cmp r2, #0x3f @ 020081f4
    addhi r3, r3, #0x400 @ 020081f8
    lslhi r3, r3, #0x10 @ 020081fc
    lsl r0, r0, #0x10 @ 02008200
    eor r0, r0, #0x4000000 @ 02008204
    lsrhi r3, r3, #0x10 @ 02008208
    tst r6, #0x8000 @ 0200820c
    lsr r0, r0, #0x10 @ 02008210
    bne .L_02008244 @ 02008214
    ldr r2, [pc, #0x44] @ 02008218
    lsl r3, r3, #1 @ 0200821c
    strh r0, [r3, r2] @ 02008220
    ldr r1, [pc, #0x3c] @ 02008224
    ldr r2, [pc, #0x3c] @ 02008228
    add r5, r5, sb @ 0200822c
    cmp r5, sl @ 02008230
    strh r2, [r3, r1] @ 02008234
    blo .L_020081a4 @ 02008238
.L_0200823c:
    add sp, sp, #4 @ 0200823c
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02008240
.L_02008244:
    ldr r1, [pc, #0x1c] @ 02008244
    lsl r3, r3, #1 @ 02008248
    strh r0, [r3, r1] @ 0200824c
    ldr r2, [pc, #0xc] @ 02008250
    ldr r1, [pc, #0x10] @ 02008254
    strh r1, [r3, r2] @ 02008258
    b .L_02008198 @ 0200825c
    .byte 0x8c, 0xde, 0x3d, 0x02, 0x00, 0x20, 0x00, 0x06, 0x00, 0x60, 0x00, 0x06, 0xff, 0x03, 0x00, 0x00 @ 02008260
@ FUN_02008270 at 0x02008270
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02008270
    cmp r1, #0x1000 @ 02008274
    sub sp, sp, #4 @ 02008278
    mov r8, r1 @ 0200827c
    mov sl, r0 @ 02008280
    mov r6, r2 @ 02008284
    mov r7, r3 @ 02008288
    ldrls fp, [pc, #0x84] @ 0200828c
    addls r5, r1, r2 @ 02008290
    mvnls sb, #0xfc00 @ 02008294
    bls .L_020082a8 @ 02008298
    b .L_02008310 @ 0200829c
.L_020082a0:
    cmp r3, #0x1000 @ 020082a0
    bhi .L_02008310 @ 020082a4
.L_020082a8:
    ldrh r4, [sl], #2 @ 020082a8
    mov r1, #2 @ 020082ac
    lsl r0, r4, #0x15 @ 020082b0
    lsr r0, r0, #0x15 @ 020082b4
    bl .L_020074b8 @ 020082b8
    and r3, r4, #0x7800 @ 020082bc
    orr r0, r0, r3, lsr #1 @ 020082c0
    lsl r3, r8, #0xf @ 020082c4
    tst r4, #0x8000 @ 020082c8
    lsr r3, r3, #0x10 @ 020082cc
    lsl r0, r0, #0x10 @ 020082d0
    lsl r2, r3, #1 @ 020082d4
    eor r0, r0, #0x4000000 @ 020082d8
    lsl r3, r3, #1 @ 020082dc
    ldreq r2, [pc, #0x34] @ 020082e0
    ldrne r3, [pc, #0x30] @ 020082e4
    lsr r0, r0, #0x10 @ 020082e8
    strhne r0, [r2, r3] @ 020082ec
    strheq r0, [r3, fp] @ 020082f0
    strhne sb, [r2, fp] @ 020082f4
    strheq sb, [r3, r2] @ 020082f8
    add r5, r5, r6 @ 020082fc
    subs r7, r7, #1 @ 02008300
    add r8, r8, r6 @ 02008304
    rsb r3, r6, r5 @ 02008308
    bne .L_020082a0 @ 0200830c
.L_02008310:
    add sp, sp, #4 @ 02008310
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02008314
    .byte 0x00, 0x80, 0x00, 0x06, 0x00, 0xa0, 0x00, 0x06 @ 02008318
@ FUN_02008320 at 0x02008320
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02008320
    cmp r1, #0x1000 @ 02008324
    sub sp, sp, #4 @ 02008328
    mov r7, r1 @ 0200832c
    mov sl, r0 @ 02008330
    mov r6, r2 @ 02008334
    mov r8, r3 @ 02008338
    ldrls fp, [pc, #0xa0] @ 0200833c
    addls r5, r1, r2 @ 02008340
    mvnls sb, #0xfc00 @ 02008344
    bls .L_02008358 @ 02008348
    b .L_020083dc @ 0200834c
.L_02008350:
    cmp r3, #0x1000 @ 02008350
    bhi .L_020083dc @ 02008354
.L_02008358:
    ldrh r4, [sl], #2 @ 02008358
    mov r1, #2 @ 0200835c
    lsl r0, r4, #0x15 @ 02008360
    lsr r0, r0, #0x15 @ 02008364
    bl .L_020074b8 @ 02008368
    lsr r2, r7, #1 @ 0200836c
    and r1, r2, #0x3f @ 02008370
    lsl r2, r2, #0x10 @ 02008374
    lsr r2, r2, #0x16 @ 02008378
    add r2, r1, r2, lsl #5 @ 0200837c
    and r3, r4, #0x7800 @ 02008380
    orr r0, r0, r3, lsr #1 @ 02008384
    add r3, r2, #0x3e0 @ 02008388
    cmp r1, #0x1f @ 0200838c
    lsl r3, r3, #0x10 @ 02008390
    lsrhi r2, r3, #0x10 @ 02008394
    lsl r0, r0, #0x10 @ 02008398
    tst r4, #0x8000 @ 0200839c
    lsl r3, r2, #1 @ 020083a0
    lsl r1, r2, #1 @ 020083a4
    eor r0, r0, #0x4000000 @ 020083a8
    ldrne r2, [pc, #0x34] @ 020083ac
    ldreq r2, [pc, #0x30] @ 020083b0
    lsr r0, r0, #0x10 @ 020083b4
    strheq r0, [r3, fp] @ 020083b8
    strhne r0, [r1, r2] @ 020083bc
    strheq sb, [r3, r2] @ 020083c0
    strhne sb, [r1, fp] @ 020083c4
    add r5, r5, r6 @ 020083c8
    subs r8, r8, #1 @ 020083cc
    add r7, r7, r6 @ 020083d0
    rsb r3, r6, r5 @ 020083d4
    bne .L_02008350 @ 020083d8
.L_020083dc:
    add sp, sp, #4 @ 020083dc
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 020083e0
    .byte 0x00, 0x80, 0x00, 0x06, 0x00, 0xa0, 0x00, 0x06 @ 020083e4
.L_020083ec:
@ FUN_020083ec at 0x020083ec
    ldr r3, [pc, #0x17c] @ 020083ec
    push {r4, r5, r6, r7, lr} @ 020083f0
    ldr r4, [r3] @ 020083f4
    ldr r1, [pc, #0x174] @ 020083f8
    add r2, r4, #1 @ 020083fc
    add r0, r0, r2 @ 02008400
    lsl lr, r0, #1 @ 02008404
    ldrh r1, [lr, r1] @ 02008408
    mov r3, #0x5000000 @ 0200840c
    ldr r2, [pc, #0x160] @ 02008410
    strh r1, [r3] @ 02008414
    ldrb r3, [r2, r0] @ 02008418
    cmp r3, #0 @ 0200841c
    beq .L_0200843c @ 02008420
    mov r1, #0x4000000 @ 02008424
    ldrh r2, [r1] @ 02008428
    ldr r3, [pc, #0x148] @ 0200842c
    and r3, r2, r3 @ 02008430
    strh r3, [r1] @ 02008434
    pop {r4, r5, r6, r7, pc} @ 02008438
.L_0200843c:
    ldr r6, [pc, #0x13c] @ 0200843c
    ldr r1, [pc, #0x13c] @ 02008440
    add r3, lr, r6 @ 02008444
    add r3, r3, #0x1e0 @ 02008448
    ldrh r2, [r3] @ 0200844c
    ldr r5, [r1] @ 02008450
    ldr r7, [pc, #0x12c] @ 02008454
    add r2, r2, r5 @ 02008458
    lsl r2, r2, #0x10 @ 0200845c
    mov ip, #0x4000000 @ 02008460
    lsr r2, r2, #0x10 @ 02008464
    add r1, lr, r7 @ 02008468
    strh r2, [ip, #0x1c] @ 0200846c
    add r1, r1, #0x1e0 @ 02008470
    strh r2, [ip, #0x14] @ 02008474
    ldrh r3, [r1] @ 02008478
    ldr r2, [pc, #0x108] @ 0200847c
    add r3, r4, r3 @ 02008480
    lsl r3, r3, #0x10 @ 02008484
    lsr r3, r3, #0x10 @ 02008488
    strh r3, [ip, #0x1e] @ 0200848c
    strh r3, [ip, #0x16] @ 02008490
    ldrb r3, [r2, r0] @ 02008494
    cmp r3, #1 @ 02008498
    ldreq r1, [pc, #0xec] @ 0200849c
    ldrne r1, [pc, #0xec] @ 020084a0
    ldm r1, {r2, r3} @ 020084a4
    lsl r2, r2, #0x10 @ 020084a8
    lsl r3, r3, #0x10 @ 020084ac
    lsr r3, r3, #0x10 @ 020084b0
    lsr r2, r2, #0x10 @ 020084b4
    strh r3, [ip, #8] @ 020084b8
    strh r2, [ip, #0xc] @ 020084bc
    ldrh r2, [lr, r6] @ 020084c0
    mov ip, #0x4000000 @ 020084c4
    add r2, r5, r2 @ 020084c8
    lsl r2, r2, #0x10 @ 020084cc
    lsr r2, r2, #0x10 @ 020084d0
    strh r2, [ip, #0x18] @ 020084d4
    strh r2, [ip, #0x10] @ 020084d8
    ldrh r3, [lr, r7] @ 020084dc
    add r3, r4, r3 @ 020084e0
    lsl r3, r3, #0x10 @ 020084e4
    lsr r3, r3, #0x10 @ 020084e8
    strh r3, [ip, #0x1a] @ 020084ec
    strh r3, [ip, #0x12] @ 020084f0
    ldrh r2, [ip] @ 020084f4
    ldr r3, [pc, #0x98] @ 020084f8
    orr r2, r2, #0x1f00 @ 020084fc
    strh r2, [ip] @ 02008500
    ldr r2, [pc, #0x90] @ 02008504
    ldrb r1, [r3, r0] @ 02008508
    ldrb r3, [r2] @ 0200850c
    ldr r4, [pc, #0x88] @ 02008510
    cmp r1, r3 @ 02008514
    moveq r3, #0xf @ 02008518
    movne r3, #0x1f @ 0200851c
    strheq r3, [ip, #0x48] @ 02008520
    strhne r3, [ip, #0x48] @ 02008524
    ldr r3, [r4, r0, lsl #2] @ 02008528
    cmp r3, #0 @ 0200852c
    popeq {r4, r5, r6, r7, pc} @ 02008530
    ldr r1, [pc, #0x68] @ 02008534
    ldr ip, [pc, #0x68] @ 02008538
    add r2, r3, #2 @ 0200853c
    mov lr, #0x8000 @ 02008540
.L_02008544:
    ldrh r3, [r2] @ 02008544
    cmp r3, #0x8000 @ 02008548
    strhne r3, [r1] @ 0200854c
    add r1, r1, #2 @ 02008550
    strhne lr, [r2] @ 02008554
    cmp r1, ip @ 02008558
    add r2, r2, #2 @ 0200855c
    bne .L_02008544 @ 02008560
    mov r3, #0 @ 02008564
    str r3, [r4, r0, lsl #2] @ 02008568
    pop {r4, r5, r6, r7, pc} @ 0200856c
    .byte 0xa8, 0x93, 0x09, 0x02, 0xca, 0xcb, 0x3d, 0x02, 0xb4, 0xce, 0x3d, 0x02, 0xff, 0xe0, 0x00, 0x00 @ 02008570
    .byte 0x44, 0xd7, 0x3d, 0x02, 0xa4, 0x93, 0x09, 0x02, 0x84, 0xd3, 0x3d, 0x02, 0xb0, 0xc7, 0x3d, 0x02 @ 02008580
    .byte 0xac, 0xc5, 0x3d, 0x02, 0xa4, 0xc6, 0x3d, 0x02, 0xbc, 0xc5, 0x3d, 0x02, 0xb4, 0xc5, 0x3d, 0x02 @ 02008590
    .byte 0x0c, 0xdb, 0x3d, 0x02, 0x02, 0x00, 0x00, 0x05, 0x80, 0x00, 0x00, 0x05, 0x1e, 0xff, 0x2f, 0xe1 @ 020085a0
    .byte 0x1e, 0xff, 0x2f, 0xe1 @ 020085b0
.L_020085b4:
@ FUN_020085b4 at 0x020085b4
    ldr r2, [pc, #0x108] @ 020085b4
    push {r4, r5, r6, lr} @ 020085b8
    ldrh ip, [r0, #6] @ 020085bc
    mov r5, r0 @ 020085c0
    ldrh r0, [r0] @ 020085c4
    ldr lr, [r2] @ 020085c8
    ldr r3, [pc, #0xf4] @ 020085cc
    bic r0, r0, #0xfe00 @ 020085d0
    ldr r4, [r3] @ 020085d4
    rsb r0, lr, r0 @ 020085d8
    ldr r3, [pc, #0xe8] @ 020085dc
    bic ip, ip, #0xfe00 @ 020085e0
    sub r0, r0, #0x80 @ 020085e4
    rsb ip, r4, ip @ 020085e8
    ldr r2, [r3] @ 020085ec
    lsl r0, r0, #0x10 @ 020085f0
    ldr r6, [pc, #0xd4] @ 020085f4
    sub ip, ip, #0x80 @ 020085f8
    lsr r0, r0, #0x10 @ 020085fc
    lsl ip, ip, #0x10 @ 02008600
    sub r3, r0, #1 @ 02008604
    lsl lr, r1, #3 @ 02008608
    tst r2, #4 @ 0200860c
    lsl r3, r3, #0x10 @ 02008610
    lsr ip, ip, #0x10 @ 02008614
    add r4, lr, r6 @ 02008618
    beq .L_02008638 @ 0200861c
    cmp r3, #0xee0000 @ 02008620
    ldrls r2, [pc, #0xa8] @ 02008624
    ldrbls r3, [r2, r0] @ 02008628
    rsbls r3, r3, r0 @ 0200862c
    lslls r3, r3, #0x10 @ 02008630
    lsrls r0, r3, #0x10 @ 02008634
.L_02008638:
    ldrh r3, [r5, #2] @ 02008638
    lsr r2, r3, #8 @ 0200863c
    lsr r3, r3, #0xa @ 02008640
    and r3, r3, #3 @ 02008644
    cmp r3, #2 @ 02008648
    and r1, r2, #3 @ 0200864c
    beq .L_020086ac @ 02008650
.L_02008654:
    cmp r1, #2 @ 02008654
    bic ip, ip, #0xfe00 @ 02008658
    bne .L_02008674 @ 0200865c
    ldrh r2, [r5, #4] @ 02008660
    sub r3, r0, #8 @ 02008664
    lsl r3, r3, #0x10 @ 02008668
    tst r2, #0x1000 @ 0200866c
    lsrne r0, r3, #0x10 @ 02008670
.L_02008674:
    ldrh r2, [lr, r6] @ 02008674
    and r1, r0, #0xff @ 02008678
    bic r2, r2, #0xff @ 0200867c
    strh r2, [lr, r6] @ 02008680
    ldrh r3, [r4, #2] @ 02008684
    and r3, r3, #0xfe00 @ 02008688
    strh r3, [r4, #2] @ 0200868c
    ldrh r2, [lr, r6] @ 02008690
    orr r2, r2, r1 @ 02008694
    strh r2, [lr, r6] @ 02008698
    ldrh r3, [r4, #2] @ 0200869c
    orr r3, r3, ip @ 020086a0
    strh r3, [r4, #2] @ 020086a4
    pop {r4, r5, r6, pc} @ 020086a8
.L_020086ac:
    ldrh r2, [r5, #4] @ 020086ac
    sub r3, ip, #8 @ 020086b0
    lsl r3, r3, #0x10 @ 020086b4
    tst r2, #0x800 @ 020086b8
    lsrne ip, r3, #0x10 @ 020086bc
    b .L_02008654 @ 020086c0
    .byte 0xa8, 0x93, 0x09, 0x02, 0xa4, 0x93, 0x09, 0x02, 0x10, 0xb6, 0x3c, 0x02, 0xa8, 0xc1, 0x3d, 0x02 @ 020086c4
    .byte 0xb4, 0xcd, 0x3d, 0x02 @ 020086d4
.L_020086d8:
@ FUN_020086d8 at 0x020086d8
    push {r4, r5, r6, r7, lr} @ 020086d8
    ldrh ip, [r0, #6] @ 020086dc
    ldrh lr, [r0] @ 020086e0
    ldr r3, [pc, #0x214] @ 020086e4
    mov r6, r0 @ 020086e8
    ldr r0, [pc, #0x210] @ 020086ec
    ldr r5, [r3] @ 020086f0
    ldr r4, [r0] @ 020086f4
    ldr r3, [pc, #0x208] @ 020086f8
    bic ip, ip, #0xfe00 @ 020086fc
    bic lr, lr, #0xfe00 @ 02008700
    rsb ip, r5, ip @ 02008704
    rsb lr, r4, lr @ 02008708
    ldr r0, [r3] @ 0200870c
    sub ip, ip, #0x80 @ 02008710
    sub lr, lr, #0x80 @ 02008714
    tst r0, #4 @ 02008718
    lsl ip, ip, #0x10 @ 0200871c
    lsl lr, lr, #0x10 @ 02008720
    sub sp, sp, #4 @ 02008724
    mov r0, r1 @ 02008728
    mov r7, r2 @ 0200872c
    lsr r5, ip, #0x10 @ 02008730
    lsr r4, lr, #0x10 @ 02008734
    beq .L_0200875c @ 02008738
    sub r3, r4, #1 @ 0200873c
    lsl r3, r3, #0x10 @ 02008740
    cmp r3, #0xee0000 @ 02008744
    ldrls r2, [pc, #0x1bc] @ 02008748
    ldrbls r3, [r2, r4] @ 0200874c
    rsbls r3, r3, r4 @ 02008750
    lslls r3, r3, #0x10 @ 02008754
    lsrls r4, r3, #0x10 @ 02008758
.L_0200875c:
    ldrh r3, [r6, #2] @ 0200875c
    ldrh r1, [r6, #4] @ 02008760
    lsr r2, r3, #8 @ 02008764
    lsl r1, r1, #0x15 @ 02008768
    lsl r3, r3, #0x16 @ 0200876c
    and r2, r2, #0xc @ 02008770
    lsr r1, r1, #0x15 @ 02008774
    orr r2, r2, r3, lsr #30 @ 02008778
    lsl r3, r7, #9 @ 0200877c
    add r0, r0, r1, lsl #5 @ 02008780
    add r1, r3, #0x6400000 @ 02008784
    cmp r2, #0xf @ 02008788
    ldrls pc, [pc, r2, lsl #2] @ 0200878c
    b .L_020087d8 @ 02008790
    .byte 0x0c, 0x88, 0x00, 0x02, 0xf8, 0x88, 0x00, 0x02, 0xe4, 0x88, 0x00, 0x02, 0xdc, 0x88, 0x00, 0x02 @ 02008794
    .byte 0xd4, 0x88, 0x00, 0x02, 0xcc, 0x88, 0x00, 0x02, 0xb8, 0x88, 0x00, 0x02, 0xb0, 0x88, 0x00, 0x02 @ 020087a4
    .byte 0x9c, 0x88, 0x00, 0x02, 0x88, 0x88, 0x00, 0x02, 0x64, 0x88, 0x00, 0x02, 0x44, 0x88, 0x00, 0x02 @ 020087b4
    .byte 0x3c, 0x88, 0x00, 0x02, 0x34, 0x88, 0x00, 0x02, 0x14, 0x88, 0x00, 0x02, 0xd4, 0x87, 0x00, 0x02 @ 020087c4
    .word 0xebbff30d @ 020087d4 bl #0x1005410
.L_020087d8:
    ldr r0, [pc, #0x130] @ 020087d8
    lsl r1, r7, #3 @ 020087dc
    ldrh r3, [r1, r0] @ 020087e0
    and r2, r4, #0xff @ 020087e4
    orr r3, r3, r2 @ 020087e8
    strh r3, [r1, r0] @ 020087ec
    add r1, r1, r0 @ 020087f0
    ldrh r3, [r1, #2] @ 020087f4
    bic r2, r5, #0xfe00 @ 020087f8
    orr r3, r3, r2 @ 020087fc
    strh r3, [r1, #2] @ 02008800
    add sp, sp, #4 @ 02008804
    pop {r4, r5, r6, r7, pc} @ 02008808
    .word 0xebbfeeab @ 0200880c bl #0x10042c0
    b .L_020087d8 @ 02008810
    .word 0xebbff131 @ 02008814 bl #0x1004ce0
    ldrh r3, [r6, #4] @ 02008818
    tst r3, #0x1000 @ 0200881c
    beq .L_020087d8 @ 02008820
.L_02008824:
    sub r3, r4, #8 @ 02008824
    lsl r3, r3, #0x10 @ 02008828
    lsr r4, r3, #0x10 @ 0200882c
    b .L_020087d8 @ 02008830
    .word 0xebbfefc5 @ 02008834 bl #0x1004750
    b .L_020087d8 @ 02008838
    .word 0xebbfeef3 @ 0200883c bl #0x1004410
    b .L_020087d8 @ 02008840
    .word 0xebbff245 @ 02008844 bl #0x1005160
    ldrh r3, [r6, #4] @ 02008848
    tst r3, #0x800 @ 0200884c
    beq .L_020087d8 @ 02008850
.L_02008854:
    sub r3, r5, #8 @ 02008854
    lsl r3, r3, #0x10 @ 02008858
    lsr r5, r3, #0x10 @ 0200885c
    b .L_020087d8 @ 02008860
    .word 0xebbff091 @ 02008864 bl #0x1004ab0
    ldrh r0, [r6, #4] @ 02008868
    tst r0, #0x1000 @ 0200886c
    subne r3, r4, #8 @ 02008870
    lslne r3, r3, #0x10 @ 02008874
    lsrne r4, r3, #0x10 @ 02008878
    tst r0, #0x800 @ 0200887c
    bne .L_02008854 @ 02008880
    b .L_020087d8 @ 02008884
    .word 0xebbfef58 @ 02008888 bl #0x10045f0
    ldrh r3, [r6, #4] @ 0200888c
    tst r3, #0x800 @ 02008890
    bne .L_02008854 @ 02008894
    b .L_020087d8 @ 02008898
    .word 0xebbfeeaf @ 0200889c bl #0x1004360
    ldrh r3, [r6, #4] @ 020088a0
    tst r3, #0x800 @ 020088a4
    bne .L_02008854 @ 020088a8
    b .L_020087d8 @ 020088ac
    .word 0xebbff1ce @ 020088b0 bl #0x1004ff0
    b .L_020087d8 @ 020088b4
    .word 0xebbff02c @ 020088b8 bl #0x1004970
    ldrh r3, [r6, #4] @ 020088bc
    tst r3, #0x1000 @ 020088c0
    bne .L_02008824 @ 020088c4
    b .L_020087d8 @ 020088c8
    .word 0xebbfef17 @ 020088cc bl #0x1004530
    b .L_020087d8 @ 020088d0
    .word 0xebbfee89 @ 020088d4 bl #0x1004300
    b .L_020087d8 @ 020088d8
    .word 0xebbff193 @ 020088dc bl #0x1004f30
    b .L_020087d8 @ 020088e0
    .word 0xebbfeff5 @ 020088e4 bl #0x10048c0
    ldrh r3, [r6, #4] @ 020088e8
    tst r3, #0x1000 @ 020088ec
    bne .L_02008824 @ 020088f0
    b .L_020087d8 @ 020088f4
    .word 0xebbfeef4 @ 020088f8 bl #0x10044d0
    b .L_020087d8 @ 020088fc
    .byte 0xa4, 0x93, 0x09, 0x02, 0xa8, 0x93, 0x09, 0x02, 0x10, 0xb6, 0x3c, 0x02, 0xb4, 0xcd, 0x3d, 0x02 @ 02008900
    .byte 0xa8, 0xc1, 0x3d, 0x02 @ 02008910
.L_02008914:
@ FUN_02008914 at 0x02008914
    ldr r2, [pc, #0x60] @ 02008914
    push {r4, r5, lr} @ 02008918
    ldr r4, [r2] @ 0200891c
    ldr r5, [pc, #0x58] @ 02008920
    cmp r0, r4 @ 02008924
    movhs r4, r0 @ 02008928
    mov r3, r0 @ 0200892c
    lsl r4, r4, #3 @ 02008930
    str r3, [r2] @ 02008934
    mov r1, r4 @ 02008938
    sub sp, sp, #4 @ 0200893c
    mov r0, r5 @ 02008940
    lsr r4, r4, #1 @ 02008944
    bl .L_020802c4 @ 02008948
    orr r4, r4, #0x80000000 @ 0200894c
    mov r3, #0x4000000 @ 02008950
    mov r2, #0x7000000 @ 02008954
    str r5, [r3, #0xd4] @ 02008958
    str r2, [r3, #0xd8] @ 0200895c
    str r4, [r3, #0xdc] @ 02008960
    mov r2, r3 @ 02008964
.L_02008968:
    ldr r3, [r2, #0xdc] @ 02008968
    cmp r3, #0 @ 0200896c
    blt .L_02008968 @ 02008970
    add sp, sp, #4 @ 02008974
    pop {r4, r5, pc} @ 02008978
    .byte 0xc0, 0x93, 0x09, 0x02, 0xa8, 0xc1, 0x3d, 0x02 @ 0200897c
.L_02008984:
@ FUN_02008984 at 0x02008984
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02008984
    ldr r2, [pc, #0x488] @ 02008988
    sub sp, sp, #0xc @ 0200898c
    ldrb r3, [r2] @ 02008990
    mov r7, #0 @ 02008994
    add r3, r3, #1 @ 02008998
    and r3, r3, #0xff @ 0200899c
    cmp r3, #0 @ 020089a0
    strb r3, [r2] @ 020089a4
    ldr sb, [pc, #0x46c] @ 020089a8
    addeq r3, r3, #1 @ 020089ac
    str r0, [sp, #4] @ 020089b0
    mov fp, r1 @ 020089b4
    strbeq r3, [r2] @ 020089b8
    mov r4, r7 @ 020089bc
.L_020089c0:
    ldr r1, [pc, #0x458] @ 020089c0
    ldr r2, [pc, #0x458] @ 020089c4
    ldr r3, [r1] @ 020089c8
    ldr r0, [r2] @ 020089cc
    add r5, r3, r4, lsl #3 @ 020089d0
    ldrh lr, [r5, #2] @ 020089d4
    ldr r1, [pc, #0x448] @ 020089d8
    lsr r2, lr, #8 @ 020089dc
    ldrh r8, [r5, #4] @ 020089e0
    and r2, r2, #0xc @ 020089e4
    lsr r3, lr, #8 @ 020089e8
    and r3, r3, #3 @ 020089ec
    add r2, r2, r1 @ 020089f0
    ldrb r1, [r2, r3] @ 020089f4
    lsl ip, r8, #0x15 @ 020089f8
    ldr r2, [pc, #0x428] @ 020089fc
    add r3, r4, r4, lsl #1 @ 02008a00
    lsr ip, ip, #0x15 @ 02008a04
    cmp r0, #0 @ 02008a08
    add r6, r2, r3, lsl #2 @ 02008a0c
    add sl, ip, r1 @ 02008a10
    bne .L_02008a40 @ 02008a14
    ldrh r4, [r6, #2] @ 02008a18
    and r2, lr, #0x7f @ 02008a1c
    and r3, r4, #0x7f @ 02008a20
    cmp r2, r3 @ 02008a24
    ldrne r3, [pc, #0x3f4] @ 02008a28
    movne r2, #1 @ 02008a2c
    strne r2, [r3] @ 02008a30
    ldrh r3, [r6, #8] @ 02008a34
    cmp r7, r3 @ 02008a38
    beq .L_02008cd0 @ 02008a3c
.L_02008a40:
    ldrh r1, [r5] @ 02008a40
    lsl r3, r7, #0x10 @ 02008a44
    strh r1, [r6] @ 02008a48
    ldrh r2, [r5, #2] @ 02008a4c
    lsr r8, r3, #0x10 @ 02008a50
    strh r2, [r6, #2] @ 02008a54
    ldrh r1, [r5, #4] @ 02008a58
    strh r1, [r6, #4] @ 02008a5c
    ldrh r2, [r5, #6] @ 02008a60
    strh r8, [r6, #8] @ 02008a64
    strh r2, [r6, #6] @ 02008a68
    ldrh r0, [r5, #6] @ 02008a6c
    ldr r2, [pc, #0x3b8] @ 02008a70
    lsl r3, r0, #0x17 @ 02008a74
    lsr r3, r3, #0x17 @ 02008a78
    ldrh r1, [r2] @ 02008a7c
    sub r3, r3, #0x80 @ 02008a80
    cmp r3, r1 @ 02008a84
    bge .L_02008c00 @ 02008a88
    ldrh ip, [r5, #2] @ 02008a8c
    bic r3, r0, #0xfe00 @ 02008a90
    lsr r2, ip, #0xa @ 02008a94
    and lr, r2, #3 @ 02008a98
    add r1, lr, #1 @ 02008a9c
    add r3, r3, r1, lsl #3 @ 02008aa0
    sub r3, r3, #0x80 @ 02008aa4
    tst r3, #0x8000 @ 02008aa8
    bne .L_02008c00 @ 02008aac
    ldrh r0, [r5] @ 02008ab0
    ldr r2, [pc, #0x378] @ 02008ab4
    lsl r3, r0, #0x17 @ 02008ab8
    lsr r3, r3, #0x17 @ 02008abc
    ldrh r1, [r2] @ 02008ac0
    sub r3, r3, #0x80 @ 02008ac4
    cmp r3, r1 @ 02008ac8
    bge .L_02008c00 @ 02008acc
    lsr r3, ip, #8 @ 02008ad0
    and r1, r3, #3 @ 02008ad4
    bic r2, r0, #0xfe00 @ 02008ad8
    add r3, r1, #1 @ 02008adc
    add r2, r2, r3, lsl #3 @ 02008ae0
    sub r2, r2, #0x80 @ 02008ae4
    tst r2, #0x8000 @ 02008ae8
    bne .L_02008c00 @ 02008aec
    add r1, r1, lr, lsl #2 @ 02008af0
    ldr r3, [pc, #0x33c] @ 02008af4
    lsl r1, r1, #1 @ 02008af8
    ldrh r3, [r1, r3] @ 02008afc
    strh r3, [sb, #-2] @ 02008b00
    ldrh r2, [r5, #4] @ 02008b04
    ldr r3, [pc, #0x32c] @ 02008b08
    and r4, r2, #0x8000 @ 02008b0c
    cmp r4, #0 @ 02008b10
    and ip, r2, #0x1800 @ 02008b14
    ldrh r0, [r1, r3] @ 02008b18
    moveq r4, #0x800 @ 02008b1c
    movne r4, #0 @ 02008b20
    and r2, r2, #0x6000 @ 02008b24
    lsl ip, ip, #1 @ 02008b28
    orr r4, r4, r2, lsr #1 @ 02008b2c
    eor ip, ip, #0x1000 @ 02008b30
    orr ip, ip, r0 @ 02008b34
    orr r4, r4, r8, lsl #3 @ 02008b38
    mov r0, r5 @ 02008b3c
    ldr r1, [sp, #4] @ 02008b40
    mov r2, r7 @ 02008b44
    strh ip, [sb] @ 02008b48
    strh r4, [sb, #2] @ 02008b4c
    bl .L_020086d8 @ 02008b50
    ldrh r3, [r5, #4] @ 02008b54
    lsl r3, r3, #0x15 @ 02008b58
    lsr r3, r3, #0x15 @ 02008b5c
    cmp sl, r3 @ 02008b60
    bls .L_02008b84 @ 02008b64
    ldr r0, [pc, #0x2d0] @ 02008b68
    mov r1, #0 @ 02008b6c
    add r2, sl, r0 @ 02008b70
    add r3, r3, r0 @ 02008b74
.L_02008b78:
    strb r1, [r3], #1 @ 02008b78
    cmp r3, r2 @ 02008b7c
    bne .L_02008b78 @ 02008b80
.L_02008b84:
    mov r3, #1 @ 02008b84
    strh r3, [r6, #0xa] @ 02008b88
    ldrh lr, [r5, #2] @ 02008b8c
.L_02008b90:
    ands r3, lr, #0x7f @ 02008b90
    movne r3, #1 @ 02008b94
    add r7, r7, #1 @ 02008b98
    cmp r7, fp @ 02008b9c
    movhs r3, #0 @ 02008ba0
    andlo r3, r3, #1 @ 02008ba4
    cmp r3, #0 @ 02008ba8
    add sb, sb, #8 @ 02008bac
    and r4, lr, #0x7f @ 02008bb0
    bne .L_020089c0 @ 02008bb4
    ldr r3, [pc, #0x284] @ 02008bb8
    mov r0, r7 @ 02008bbc
    ldr r2, [r3] @ 02008bc0
    cmp r7, r2 @ 02008bc4
    bhs .L_02008be8 @ 02008bc8
    ldr r3, [pc, #0x274] @ 02008bcc
    add r3, r3, r7, lsl #3 @ 02008bd0
.L_02008bd4:
    add r7, r7, #1 @ 02008bd4
    mov r1, #0x200 @ 02008bd8
    cmp r7, r2 @ 02008bdc
    strh r1, [r3], #8 @ 02008be0
    blo .L_02008bd4 @ 02008be4
.L_02008be8:
    bl .L_02008914 @ 02008be8
    ldr r2, [pc, #0x230] @ 02008bec
    mov r3, #0 @ 02008bf0
    str r3, [r2] @ 02008bf4
    add sp, sp, #0xc @ 02008bf8
    pop {r4, r5, r6, r7, r8, sb, sl, fp, pc} @ 02008bfc
.L_02008c00:
    ldr r3, [pc, #0x244] @ 02008c00
    mov r1, #0 @ 02008c04
    ldr r2, [r3] @ 02008c08
    mov r3, #0x200 @ 02008c0c
    tst r2, #0x100 @ 02008c10
    strh r1, [r6, #0xa] @ 02008c14
    strh r3, [sb, #-2] @ 02008c18
    beq .L_02008cc8 @ 02008c1c
    cmp r7, #0xb @ 02008c20
    bhi .L_02008cc8 @ 02008c24
    ldrh r3, [r5, #6] @ 02008c28
    lsl r3, r3, #0x17 @ 02008c2c
    lsr r3, r3, #0x17 @ 02008c30
    cmp r3, #0 @ 02008c34
    bne .L_02008cc8 @ 02008c38
    ldrh r3, [r5] @ 02008c3c
    lsl r3, r3, #0x17 @ 02008c40
    lsr r3, r3, #0x17 @ 02008c44
    sub r1, r3, #0x80 @ 02008c48
    cmp r1, #0xdf @ 02008c4c
    bhi .L_02008cc8 @ 02008c50
    ldr r4, [pc, #0x1f4] @ 02008c54
    ldrh lr, [r5, #2] @ 02008c58
    ldrb r0, [r4, r1] @ 02008c5c
    lsr r3, lr, #8 @ 02008c60
    and r3, r3, #3 @ 02008c64
    add r3, r3, #1 @ 02008c68
    cmp r0, #0xc8 @ 02008c6c
    lsl ip, r3, #3 @ 02008c70
    addeq r3, r1, r4 @ 02008c74
    ldrbeq r3, [r3, #-1] @ 02008c78
    movne r3, r0 @ 02008c7c
    tst r2, #4 @ 02008c80
    and r1, r3, #0xff @ 02008c84
    ldrne r3, [pc, #0x1c4] @ 02008c88
    add r0, ip, r1 @ 02008c8c
    ldrbne r2, [r3, ip] @ 02008c90
    rsbne r0, r2, r0 @ 02008c94
    cmp r0, #0xbf @ 02008c98
    movhs r0, #0xbf @ 02008c9c
    cmp r0, r1 @ 02008ca0
    bls .L_02008b90 @ 02008ca4
    ldr r3, [pc, #0x168] @ 02008ca8
    ldrb r2, [r3] @ 02008cac
    ldr r3, [pc, #0x1a0] @ 02008cb0
    add r3, r1, r3 @ 02008cb4
.L_02008cb8:
    add r1, r1, #1 @ 02008cb8
    cmp r0, r1 @ 02008cbc
    strb r2, [r3], #1 @ 02008cc0
    bhi .L_02008cb8 @ 02008cc4
.L_02008cc8:
    ldrh lr, [r5, #2] @ 02008cc8
    b .L_02008b90 @ 02008ccc
.L_02008cd0:
    cmp ip, sl @ 02008cd0
    bhs .L_02008d14 @ 02008cd4
    ldr r0, [pc, #0x160] @ 02008cd8
    ldrb r3, [r0, ip] @ 02008cdc
    cmp r3, #0 @ 02008ce0
    addeq r2, ip, r0 @ 02008ce4
    rsbeq r1, ip, sl @ 02008ce8
    beq .L_02008d00 @ 02008cec
    b .L_02008a40 @ 02008cf0
.L_02008cf4:
    ldrb r3, [r2, #1]! @ 02008cf4
    cmp r3, #0 @ 02008cf8
    bne .L_02008a40 @ 02008cfc
.L_02008d00:
    add r3, r1, ip @ 02008d00
    sub r3, r3, #1 @ 02008d04
    add r3, r3, r0 @ 02008d08
    cmp r2, r3 @ 02008d0c
    bne .L_02008cf4 @ 02008d10
.L_02008d14:
    ldr r2, [r5] @ 02008d14
    ldr r3, [r6] @ 02008d18
    cmp r2, r3 @ 02008d1c
    beq .L_02008dec @ 02008d20
.L_02008d24:
    ldrh r3, [r6, #0xa] @ 02008d24
    cmp r3, #0 @ 02008d28
    beq .L_02008a40 @ 02008d2c
    cmp lr, r4 @ 02008d30
    bne .L_02008a40 @ 02008d34
    ldrh r3, [r6, #4] @ 02008d38
    cmp r3, r8 @ 02008d3c
    bne .L_02008a40 @ 02008d40
    ldrh r3, [r5] @ 02008d44
    ldr r2, [pc, #0xe0] @ 02008d48
    strh r3, [r6] @ 02008d4c
    ldrh r1, [r5, #6] @ 02008d50
    strh r1, [r6, #6] @ 02008d54
    ldrh r0, [r5, #6] @ 02008d58
    ldrh r1, [r2] @ 02008d5c
    lsl r3, r0, #0x17 @ 02008d60
    lsr r3, r3, #0x17 @ 02008d64
    sub r3, r3, #0x80 @ 02008d68
    cmp r3, r1 @ 02008d6c
    bge .L_02008e00 @ 02008d70
    ldrh ip, [r5, #2] @ 02008d74
    bic r2, r0, #0xfe00 @ 02008d78
    lsr r3, ip, #0xa @ 02008d7c
    and r3, r3, #3 @ 02008d80
    add r3, r3, #1 @ 02008d84
    add r2, r2, r3, lsl #3 @ 02008d88
    sub r2, r2, #0x80 @ 02008d8c
    tst r2, #0x8000 @ 02008d90
    bne .L_02008e00 @ 02008d94
    ldrh r0, [r5] @ 02008d98
    ldr r2, [pc, #0x90] @ 02008d9c
    lsl r3, r0, #0x17 @ 02008da0
    lsr r3, r3, #0x17 @ 02008da4
    ldrh r1, [r2] @ 02008da8
    sub r3, r3, #0x80 @ 02008dac
    cmp r3, r1 @ 02008db0
    bge .L_02008e00 @ 02008db4
    lsr r3, ip, #8 @ 02008db8
    and r3, r3, #3 @ 02008dbc
    bic r2, r0, #0xfe00 @ 02008dc0
    add r3, r3, #1 @ 02008dc4
    add r2, r2, r3, lsl #3 @ 02008dc8
    sub r2, r2, #0x80 @ 02008dcc
    tst r2, #0x8000 @ 02008dd0
    bne .L_02008e00 @ 02008dd4
    mov r0, r5 @ 02008dd8
    mov r1, r7 @ 02008ddc
    bl .L_020085b4 @ 02008de0
    ldrh lr, [r5, #2] @ 02008de4
    b .L_02008b90 @ 02008de8
.L_02008dec:
    ldr r2, [r5, #4] @ 02008dec
    ldr r3, [r6, #4] @ 02008df0
    cmp r2, r3 @ 02008df4
    bne .L_02008d24 @ 02008df8
    b .L_02008b90 @ 02008dfc
.L_02008e00:
    mov r2, #0 @ 02008e00
    mov r3, #0x200 @ 02008e04
    strh r2, [r6, #0xa] @ 02008e08
    strh r3, [sb, #-2] @ 02008e0c
    ldrh lr, [r5, #2] @ 02008e10
    b .L_02008b90 @ 02008e14
    .byte 0xb4, 0xc5, 0x3d, 0x02, 0xaa, 0xc1, 0x3d, 0x02, 0xac, 0xcd, 0x3d, 0x02, 0xbc, 0x93, 0x09, 0x02 @ 02008e18
    .byte 0x28, 0xe5, 0x08, 0x02, 0xb0, 0xcf, 0x3d, 0x02, 0xb2, 0xc8, 0x3d, 0x02, 0xac, 0xc8, 0x3d, 0x02 @ 02008e28
    .byte 0x38, 0xe5, 0x08, 0x02, 0x58, 0xe5, 0x08, 0x02, 0xe0, 0xc3, 0x09, 0x02, 0xc0, 0x93, 0x09, 0x02 @ 02008e38
    .byte 0xa8, 0xc1, 0x3d, 0x02, 0x10, 0xb6, 0x3c, 0x02, 0xb0, 0xeb, 0x08, 0x02, 0xf0, 0xea, 0x08, 0x02 @ 02008e48
    .byte 0xbc, 0xc5, 0x3d, 0x02 @ 02008e58
.L_02008e5c:
    ldr r3, [pc, #0x28] @ 02008e5c
    ldr r2, [pc, #0x28] @ 02008e60
    push {r4, lr} @ 02008e64
    ldr r4, [pc, #0x24] @ 02008e68
    ldr r0, [r3] @ 02008e6c
    ldr r1, [r2] @ 02008e70
    mov r3, #1 @ 02008e74
    str r3, [r4] @ 02008e78
    bl .L_02008984 @ 02008e7c
    mov r3, #0 @ 02008e80
    str r3, [r4] @ 02008e84
    pop {r4, pc} @ 02008e88
    .byte 0x48, 0x36, 0x00, 0x0b, 0xc0, 0x93, 0x09, 0x02, 0xbc, 0x93, 0x09, 0x02 @ 02008e8c
.L_02008e98:
    push {r4, lr} @ 02008e98
    ldr r4, [pc, #0x30] @ 02008e9c
    mov r1, #0x400 @ 02008ea0
    mov r0, r4 @ 02008ea4
    bl .L_020802c4 @ 02008ea8
    ldr r2, [pc, #0x24] @ 02008eac
    mov r1, #0x4000000 @ 02008eb0
    mov r3, #0x7000000 @ 02008eb4
    str r4, [r1, #0xd4] @ 02008eb8
    str r3, [r1, #0xd8] @ 02008ebc
    str r2, [r1, #0xdc] @ 02008ec0
.L_02008ec4:
    ldr r3, [r1, #0xdc] @ 02008ec4
    cmp r3, #0 @ 02008ec8
    blt .L_02008ec4 @ 02008ecc
    pop {r4, pc} @ 02008ed0
    .byte 0xa8, 0xc1, 0x3d, 0x02, 0x00, 0x02, 0x00, 0x80 @ 02008ed4
.L_02008edc:
@ FUN_02008edc at 0x02008edc
    ldr r2, [pc, #0x8c] @ 02008edc
    add r3, r2, #0x400 @ 02008ee0
.L_02008ee4:
    mov r1, #0 @ 02008ee4
    mov r0, #0x200 @ 02008ee8
    strh r0, [r2] @ 02008eec
    strh r1, [r2, #2] @ 02008ef0
    strh r1, [r2, #4] @ 02008ef4
    strh r1, [r2, #6] @ 02008ef8
    add r2, r2, #8 @ 02008efc
    cmp r2, r3 @ 02008f00
    bne .L_02008ee4 @ 02008f04
    sub r2, r2, #0x400 @ 02008f08
    ldr r3, [pc, #0x60] @ 02008f0c
    mov r0, #0x100 @ 02008f10
    strh r0, [r2, #6] @ 02008f14
    mov r0, #0 @ 02008f18
    ldr r1, [pc, #0x54] @ 02008f1c
    strh r3, [r2, #0x3e] @ 02008f20
    strh r0, [r2, #0xe] @ 02008f24
    strh r0, [r2, #0x16] @ 02008f28
    strh r3, [r2, #0x1e] @ 02008f2c
    strh r0, [r2, #0x2e] @ 02008f30
    mvn r3, #0xf9 @ 02008f34
    strh r0, [r2, #0x36] @ 02008f38
    mov r0, #0x100 @ 02008f3c
    strh r3, [r2, #0x26] @ 02008f40
    strh r0, [r2, #0x46] @ 02008f44
    mov r3, #0 @ 02008f48
    mvn r0, #0xf9 @ 02008f4c
    strh r1, [r2, #0x7e] @ 02008f50
    strh r3, [r2, #0x4e] @ 02008f54
    strh r3, [r2, #0x56] @ 02008f58
    strh r1, [r2, #0x5e] @ 02008f5c
    strh r0, [r2, #0x66] @ 02008f60
    strh r3, [r2, #0x6e] @ 02008f64
    strh r3, [r2, #0x76] @ 02008f68
    b .L_02008e98 @ 02008f6c
    .byte 0xa8, 0xc1, 0x3d, 0x02, 0x22, 0x01, 0x00, 0x00, 0xde, 0xfe, 0xff, 0xff @ 02008f70
.L_02008f7c:
@ FUN_02008f7c at 0x02008f7c
    push {r4, r5, r6, lr} @ 02008f7c
    mov r0, #0 @ 02008f80
    bl .L_02006f2c @ 02008f84
    mov r0, #0 @ 02008f88
    bl .L_020072a8 @ 02008f8c
    ldr r6, [pc, #0xe4] @ 02008f90
    bl .L_02007420 @ 02008f94
    mov r2, #0x4000000 @ 02008f98
    mov r1, #0 @ 02008f9c
    mvn r3, #0 @ 02008fa0
    strb r1, [r2, #0x41] @ 02008fa4
    strb r3, [r2, #0x40] @ 02008fa8
    sub r3, r3, #0x3b @ 02008fac
    strb r1, [r2, #0x45] @ 02008fb0
    add r0, r6, #0xff0 @ 02008fb4
    strb r3, [r2, #0x44] @ 02008fb8
    ldr lr, [pc, #0xbc] @ 02008fbc
    mov r3, #0x1f @ 02008fc0
    ldr ip, [pc, #0xb8] @ 02008fc4
    strh r3, [r2, #0x48] @ 02008fc8
    add r0, r0, #0xe @ 02008fcc
    strh r3, [r2, #0x4a] @ 02008fd0
    mov r3, r6 @ 02008fd4
.L_02008fd8:
    mov r2, #0x2000 @ 02008fd8
    strh r2, [r3, #2] @ 02008fdc
    strh r2, [r3, lr] @ 02008fe0
    strh r2, [r3, ip] @ 02008fe4
    add r3, r3, #2 @ 02008fe8
    cmp r3, r0 @ 02008fec
    bne .L_02008fd8 @ 02008ff0
    ldr r3, [pc, #0x8c] @ 02008ff4
    mov r5, #0 @ 02008ff8
    add r2, r3, #0xe0 @ 02008ffc
.L_02009000:
    strb r5, [r3], #1 @ 02009000
    cmp r3, r2 @ 02009004
    bne .L_02009000 @ 02009008
    mov r0, #0x8000 @ 0200900c
    mov r3, #0x2000 @ 02009010
    strh r0, [r6, r3] @ 02009014
    ldr r3, [pc, #0x6c] @ 02009018
    ldr ip, [pc, #0x6c] @ 0200901c
    ldr lr, [pc, #0x6c] @ 02009020
    ldr r4, [pc, #0x6c] @ 02009024
    mov r1, #0x50 @ 02009028
    mov r2, #0x1000 @ 0200902c
    str r1, [r3] @ 02009030
    mov r3, #1 @ 02009034
    strh r0, [r6, r2] @ 02009038
    strh r3, [ip, #4] @ 0200903c
    strh r3, [ip] @ 02009040
    strh r3, [ip, #2] @ 02009044
    str r5, [lr, #8] @ 02009048
    strh r0, [r6] @ 0200904c
    str r5, [lr] @ 02009050
    str r5, [lr, #4] @ 02009054
    add r3, r4, #0x800 @ 02009058
    mov r2, #1 @ 0200905c
.L_02009060:
    strb r2, [r4], #1 @ 02009060
    cmp r4, r3 @ 02009064
    bne .L_02009060 @ 02009068
    ldr r3, [pc, #0x28] @ 0200906c
    strb r2, [r3] @ 02009070
    pop {r4, r5, r6, lr} @ 02009074
    b .L_02072c30 @ 02009078
    .byte 0xcc, 0x93, 0x09, 0x02, 0x02, 0x10, 0x00, 0x00, 0x02, 0x20, 0x00, 0x00, 0xbc, 0xc5, 0x3d, 0x02 @ 0200907c
    .byte 0xc0, 0x93, 0x09, 0x02, 0xcc, 0xc3, 0x09, 0x02, 0xd4, 0xc3, 0x09, 0x02, 0xe0, 0xc3, 0x09, 0x02 @ 0200908c
    .byte 0xb4, 0xc5, 0x3d, 0x02 @ 0200909c
.L_020090a0:
@ FUN_020090a0 at 0x020090a0
    push {r4, lr} @ 020090a0
    ldr r4, [pc, #0x34] @ 020090a4
    mov r1, #0x80 @ 020090a8
    mov r0, r4 @ 020090ac
    bl .L_020802c4 @ 020090b0
    mov r2, #0x4000000 @ 020090b4
    ldr r1, [pc, #0x24] @ 020090b8
    mov r3, #0x5000000 @ 020090bc
    str r4, [r2, #0xd4] @ 020090c0
    str r3, [r2, #0xd8] @ 020090c4
    add r3, r3, #0x200 @ 020090c8
    str r1, [r2, #0xdc] @ 020090cc
    str r4, [r2, #0xd4] @ 020090d0
    str r3, [r2, #0xd8] @ 020090d4
    str r1, [r2, #0xdc] @ 020090d8
    pop {r4, pc} @ 020090dc
    .byte 0x30, 0xc7, 0x3d, 0x02, 0x40, 0x00, 0x00, 0x80 @ 020090e0
