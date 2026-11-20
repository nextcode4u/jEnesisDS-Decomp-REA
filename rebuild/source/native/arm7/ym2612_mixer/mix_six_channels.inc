/* YM2612 setup, channel preparation, and PCM mixing. 0x037f9d9c–0x037fb9fc. */


/* 0x037f9d9c */
.global render_six_fm_channels
render_six_fm_channels:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        sl, .L_037f9f40
    ldr        r3, [sl, #0x470]
    sub        sp, sp, #0x84
    cmn        r3, #1
    str        r0, [sp, #4]
    mov        sb, r1
    beq        .L_037fb290
.L_037f9dbc:
    ldr        r3, [sl, #0x548]
    cmn        r3, #1
    ldr        ip, .L_037f9f40
    beq        .L_037faebc
.L_037f9dcc:
    ldrb       r3, [sl, #0x12]
    ands       ip, r3, #0xc0
    ldr        lr, .L_037f9f40
    beq        .L_037f9f50
    ldr        r3, [lr, #0x620]
    cmn        r3, #1
    beq        .L_037fb67c
.L_037f9de8:
    ldr        r3, [sl, #0x6f8]
    cmn        r3, #1
    ldr        ip, .L_037f9f40
    beq        .L_037fa328
.L_037f9df8:
    ldr        r3, [sl, #0x7d0]
    cmn        r3, #1
    ldr        ip, .L_037f9f40
    beq        .L_037fa708
.L_037f9e08:
    ldr        r3, [sl, #0x8a8]
    cmn        r3, #1
    ldr        ip, .L_037f9f40
    beq        .L_037faae8
.L_037f9e18:
    cmp        sb, #0
    movle      r0, #0
    ble        .L_037f9f1c
    mov        r0, #0x30000
    ldr        ip, [sl, #0x450]
    ldr        r3, [sl, #0x454]
    ldr        lr, [sl, #0x458]
    sub        r0, r0, #1
    mov        r1, sb
.L_037f9e3c:
    add        r3, r3, lr
    cmp        r3, r0
    bls        .L_037f9e60
    mov        r2, #0x30000
    sub        r2, r2, #1
.L_037f9e50:
    sub        r3, r3, #0x30000
    cmp        r3, r2
    add        ip, ip, #1
    bhi        .L_037f9e50
.L_037f9e60:
    subs       r1, r1, #1
    bne        .L_037f9e3c
    ldr        r4, .L_037f9f28
    ldr        r0, [sp, #4]
    mov        r1, sb
    ldr        r2, .L_037f9f2c
    str        ip, [sl, #0x45c]
    str        lr, [sl, #0x458]
    str        r3, [sl, #0x454]
    bl         prepare_and_render_fm_channel
    ldr        r3, [sp, #4]
    ldr        r0, [r4, #4]
    mov        r1, sb
    add        r0, r3, r0, lsl #1
    ldr        r2, .L_037f9f30
    bl         prepare_and_render_fm_channel
    ldr        lr, [sp, #4]
    ldr        r0, [r4, #8]
    mov        r1, sb
    add        r0, lr, r0, lsl #1
    ldr        r2, .L_037f9f34
    bl         prepare_and_render_fm_channel
    ldr        r1, [sp, #4]
    ldr        r0, [r4, #0xc]
    ldr        r2, .L_037f9f38
    add        r0, r1, r0, lsl #1
    mov        r1, sb
    bl         prepare_and_render_fm_channel
    ldr        r2, [sp, #4]
    ldr        r0, [r4, #0x10]
    mov        r1, sb
    add        r0, r2, r0, lsl #1
    ldr        r2, .L_037f9f3c
    bl         prepare_and_render_fm_channel
    ldr        r3, [sl, #0x970]
    cmp        r3, #0
    beq        .L_037fb660
    ldr        r3, [r4, #0x14]
    ldr        r4, [sp, #4]
    add        r0, r4, r3, lsl #1
.L_037f9f00:
    mov        lr, #0
    subs       sb, sb, #1
    strh       lr, [r0], #2
    bne        .L_037f9f00
.L_037f9f10:
    ldr        r3, [sl, #0x45c]
    str        r3, [sl, #0x450]
    mov        r0, #1
.L_037f9f1c:
    add        sp, sp, #0x84
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    bx         lr
.L_037f9f28:
    .word 0x03806e88
.L_037f9f2c:
    .word 0x03807308
.L_037f9f30:
    .word 0x038073e0
.L_037f9f34:
    .word 0x038074b8
.L_037f9f38:
    .word 0x03807590
.L_037f9f3c:
    .word 0x03807668
.L_037f9f40:
    .word 0x03806ea8
.L_037f9f44:
    .word ym2612_tables + 0x4530 /* envelope_patterns */
.L_037f9f48:
    .word ym2612_tables + 0x4430 /* envelope_shift */
.L_037f9f4c:
    .word ym2612_tables + 0x44b0 /* envelope_pattern_index */
.L_037f9f50:
    ldr        r3, [lr, #0x620]
    cmn        r3, #1
    bne        .L_037f9de8
    ldrb       r2, [lr, #0x6dc]
    str        r2, [sp, #0x1c]
    ldrb       r3, [lr, #0x624]
    asr        r4, r2, r3
    ldr        r3, [sp, #0x1c]
    ldr        r2, [lr, #0x610]
    lsl        r3, r3, #2
    str        r3, [sp, #0x18]
    ldr        fp, [lr, #0x6e0]
    ldr        r3, [r2, r3]
    ldr        r0, [lr, #0x618]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [lr, #0x625]
    lsr        r2, r2, #1
    cmp        r4, r1
    str        r2, [lr, #0x620]
    beq        .L_037fa058
    ldrb       r3, [lr, #0x614]
    and        r2, r4, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    ldrle      r4, .L_037f9f48
    ldrble     r3, [r4, r1]
    strb       r2, [lr, #0x625]
    ldrle      lr, .L_037f9f4c
    lslle      r3, r3, #0x18
    ldrble     r0, [lr, r1]
    strgt      ip, [sp, #0x64]
    strle      r3, [sp, #0x64]
    ldrb       r1, [sl, #0x615]
    ldrb       r3, [sl, #0x625]
    ldrb       ip, [sl, #0x616]
    ldr        lr, .L_037f9f4c
    ldrb       r2, [sl, #0x617]
    add        r1, r1, r3
    add        ip, ip, r3
    add        r2, r2, r3
    ldrb       r6, [lr, r1]
    ldr        r3, .L_037f9f4c
    ldrb       r7, [lr, ip]
    ldr        lr, .L_037f9f48
    ldrb       r4, [r3, r2]
    ldrb       r8, [lr, r2]
    ldr        r3, .L_037f9f44
    ldr        r2, .L_037f9f48
    ldr        lr, [r3, r4, lsl #2]
    ldrb       r4, [r2, r1]
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldr        r0, [r3, r0, lsl #2]
    ldr        r2, [r3, r6, lsl #2]
    ldrb       r5, [r1, ip]
    ldr        r1, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x64]
    orr        r2, r2, r4, lsl #24
    orr        r0, r3, r0
    orr        r1, r1, r5, lsl #24
    orr        lr, lr, r8, lsl #24
    str        r0, [sl, #0x630]
    str        r2, [sl, #0x634]
    str        r1, [sl, #0x638]
    str        lr, [sl, #0x63c]
.L_037fa058:
    ldrb       r3, [sl, #0x684]
    ldr        r4, [sp, #0x1c]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x670]
    ldr        lr, [sp, #0x18]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x678]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x685]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x680]
    ldr        r0, .L_037f9f40
    beq        .L_037fa148
    ldrb       r3, [r0, #0x674]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x685]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    ldrle      r4, .L_037f9f4c
    movgt      r1, #0
    lslle      r3, r3, #0x18
    ldrble     r0, [r4, r1]
    strgt      r1, [sp, #0x60]
    strle      r3, [sp, #0x60]
    ldrb       r1, [sl, #0x675]
    ldrb       r3, [sl, #0x685]
    ldrb       ip, [sl, #0x676]
    ldrb       r2, [sl, #0x677]
    ldr        lr, .L_037f9f4c
    add        r2, r2, r3
    add        r1, r1, r3
    add        ip, ip, r3
    ldrb       r4, [lr, r2]
    ldrb       r6, [lr, r1]
    ldrb       r7, [lr, ip]
    ldr        lr, .L_037f9f48
    ldr        r3, .L_037f9f44
    ldrb       r8, [lr, r2]
    ldr        r2, .L_037f9f48
    ldr        lr, [r3, r4, lsl #2]
    ldrb       r4, [r2, r1]
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldr        r0, [r3, r0, lsl #2]
    ldr        r2, [r3, r6, lsl #2]
    ldrb       r5, [r1, ip]
    ldr        r1, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x60]
    orr        r2, r2, r4, lsl #24
    orr        r0, r3, r0
    orr        r1, r1, r5, lsl #24
    orr        lr, lr, r8, lsl #24
    str        r0, [sl, #0x690]
    str        r2, [sl, #0x694]
    str        r1, [sl, #0x698]
    str        lr, [sl, #0x69c]
.L_037fa148:
    ldrb       r3, [sl, #0x654]
    ldr        r4, [sp, #0x1c]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x640]
    ldr        lr, [sp, #0x18]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x648]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x655]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x650]
    ldr        r0, .L_037f9f40
    beq        .L_037fa238
    ldrb       r3, [r0, #0x644]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x655]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    ldrle      r4, .L_037f9f4c
    movgt      r1, #0
    lslle      r3, r3, #0x18
    ldrble     r0, [r4, r1]
    strgt      r1, [sp, #0x5c]
    strle      r3, [sp, #0x5c]
    ldrb       r1, [sl, #0x645]
    ldrb       r3, [sl, #0x655]
    ldrb       ip, [sl, #0x646]
    ldrb       r2, [sl, #0x647]
    ldr        lr, .L_037f9f4c
    add        r2, r2, r3
    add        r1, r1, r3
    add        ip, ip, r3
    ldrb       r4, [lr, r2]
    ldrb       r6, [lr, r1]
    ldrb       r7, [lr, ip]
    ldr        lr, .L_037f9f48
    ldr        r3, .L_037f9f44
    ldrb       r8, [lr, r2]
    ldr        r2, .L_037f9f48
    ldr        lr, [r3, r4, lsl #2]
    ldrb       r4, [r2, r1]
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldr        r0, [r3, r0, lsl #2]
    ldr        r2, [r3, r6, lsl #2]
    ldrb       r5, [r1, ip]
    ldr        r1, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x5c]
    orr        r2, r2, r4, lsl #24
    orr        r0, r3, r0
    orr        r1, r1, r5, lsl #24
    orr        lr, lr, r8, lsl #24
    str        r0, [sl, #0x660]
    str        r2, [sl, #0x664]
    str        r1, [sl, #0x668]
    str        lr, [sl, #0x66c]
.L_037fa238:
    ldrb       r3, [sl, #0x6b4]
    ldr        r4, [sp, #0x1c]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x6a0]
    ldr        lr, [sp, #0x18]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x6a8]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x6b5]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x6b0]
    ldr        r0, .L_037f9f40
    beq        .L_037f9de8
    ldrb       r3, [r0, #0x6a4]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x6b5]
    bgt        .L_037fb994
    ldr        r2, .L_037f9f48
    ldr        r4, .L_037f9f4c
    ldrb       r3, [r2, r1]
    ldrb       r0, [r4, r1]
    lsl        fp, r3, #0x18
.L_037fa2a0:
    ldrb       r3, [sl, #0x6b5]
    ldrb       r1, [sl, #0x6a5]
    ldrb       ip, [sl, #0x6a6]
    ldrb       r2, [sl, #0x6a7]
    ldr        lr, .L_037f9f4c
    add        r2, r2, r3
    add        r1, r1, r3
    add        ip, ip, r3
    ldrb       r4, [lr, r2]
    ldrb       r6, [lr, r1]
    ldrb       r7, [lr, ip]
    ldr        lr, .L_037f9f48
    ldr        r3, .L_037f9f44
    ldrb       r8, [lr, r2]
    ldr        r2, .L_037f9f48
    ldr        lr, [r3, r4, lsl #2]
    ldrb       r4, [r2, r1]
    ldr        r1, .L_037f9f48
    ldr        r0, [r3, r0, lsl #2]
    ldrb       r5, [r1, ip]
    ldr        r2, [r3, r6, lsl #2]
    ldr        r1, [r3, r7, lsl #2]
    ldr        r3, [sl, #0x6f8]
    orr        r0, r0, fp
    orr        r2, r2, r4, lsl #24
    orr        r1, r1, r5, lsl #24
    orr        lr, lr, r8, lsl #24
    cmn        r3, #1
    str        r0, [sl, #0x6c0]
    str        r2, [sl, #0x6c4]
    str        r1, [sl, #0x6c8]
    str        lr, [sl, #0x6cc]
    ldr        ip, .L_037f9f40
    bne        .L_037f9df8
.L_037fa328:
    ldrb       r2, [ip, #0x7b4]
    str        r2, [sp, #0x24]
    ldrb       r3, [ip, #0x6fc]
    asr        lr, r2, r3
    ldr        r3, [sp, #0x24]
    ldr        r2, [ip, #0x6e8]
    lsl        r3, r3, #2
    str        r3, [sp, #0x20]
    ldr        fp, [ip, #0x7b8]
    ldr        r3, [r2, r3]
    ldr        r0, [ip, #0x6f0]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [ip, #0x6fd]
    lsr        r2, r2, #1
    cmp        lr, r1
    str        r2, [ip, #0x6f8]
    beq        .L_037fa428
    ldrb       r3, [ip, #0x6ec]
    and        r2, lr, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    ldrle      lr, .L_037f9f48
    ldrble     r3, [lr, r1]
    strb       r2, [ip, #0x6fd]
    ldrle      r2, .L_037f9f4c
    lslle      r3, r3, #0x18
    ldrble     r0, [r2, r1]
    strle      r3, [sp, #0x58]
    ldrb       ip, [sl, #0x6ed]
    ldrb       r3, [sl, #0x6fd]
    ldrb       lr, [sl, #0x6ee]
    ldrb       r2, [sl, #0x6ef]
    movgt      r4, #0
    add        r2, r2, r3
    add        ip, ip, r3
    add        lr, lr, r3
    strgt      r4, [sp, #0x58]
    ldr        r3, .L_037f9f4c
    ldr        r4, .L_037f9f4c
    ldrb       r1, [r3, r2]
    ldrb       r6, [r4, ip]
    ldr        r3, .L_037f9f44
    ldrb       r7, [r4, lr]
    ldr        r4, .L_037f9f48
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x58]
    orr        r1, r1, r5, lsl #24
    orr        r0, r0, r3
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x708]
    str        r1, [sl, #0x70c]
    str        r2, [sl, #0x710]
    str        r4, [sl, #0x714]
.L_037fa428:
    ldrb       r3, [sl, #0x75c]
    ldr        r4, [sp, #0x24]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x748]
    ldr        lr, [sp, #0x20]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x750]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x75d]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x758]
    ldr        r0, .L_037f9f40
    beq        .L_037fa51c
    ldrb       r3, [r0, #0x74c]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x75d]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037f9f4c
    strle      r3, [sp, #0x54]
    ldrb       ip, [sl, #0x74d]
    ldrb       r3, [sl, #0x75d]
    ldrb       lr, [sl, #0x74e]
    ldrb       r2, [sl, #0x74f]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x54]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037f9f48
    ldr        r3, .L_037f9f44
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x54]
    orr        r1, r1, r5, lsl #24
    orr        r0, r0, r3
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x768]
    str        r1, [sl, #0x76c]
    str        r2, [sl, #0x770]
    str        r4, [sl, #0x774]
.L_037fa51c:
    ldrb       r3, [sl, #0x72c]
    ldr        r4, [sp, #0x24]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x718]
    ldr        lr, [sp, #0x20]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x720]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x72d]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x728]
    ldr        r0, .L_037f9f40
    beq        .L_037fa610
    ldrb       r3, [r0, #0x71c]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x72d]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037f9f4c
    strle      r3, [sp, #0x50]
    ldrb       ip, [sl, #0x71d]
    ldrb       r3, [sl, #0x72d]
    ldrb       lr, [sl, #0x71e]
    ldrb       r2, [sl, #0x71f]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x50]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037f9f48
    ldr        r3, .L_037f9f44
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x50]
    orr        r1, r1, r5, lsl #24
    orr        r0, r0, r3
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x738]
    str        r1, [sl, #0x73c]
    str        r2, [sl, #0x740]
    str        r4, [sl, #0x744]
.L_037fa610:
    ldrb       r3, [sl, #0x78c]
    ldr        r4, [sp, #0x24]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x778]
    ldr        lr, [sp, #0x20]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x780]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x78d]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x788]
    ldr        r0, .L_037f9f40
    beq        .L_037f9df8
    ldrb       r3, [r0, #0x77c]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x78d]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    ldrle      r4, .L_037f9f4c
    lslle      fp, r3, #0x18
    ldrb       ip, [sl, #0x77d]
    ldrb       r3, [sl, #0x78d]
    ldrb       lr, [sl, #0x77e]
    ldrb       r2, [sl, #0x77f]
    ldrble     r0, [r4, r1]
    add        r2, r2, r3
    add        ip, ip, r3
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    ldrb       r6, [r4, ip]
    ldrb       r1, [r3, r2]
    ldrb       r7, [r4, lr]
    ldr        r3, .L_037f9f44
    ldr        r4, .L_037f9f48
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r1, [r3, r6, lsl #2]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sl, #0x7d0]
    movgt      fp, #0
    orr        r2, r2, ip, lsl #24
    orr        r0, r0, fp
    orr        r1, r1, r5, lsl #24
    orr        r4, r4, r8, lsl #24
    cmn        r3, #1
    str        r0, [sl, #0x798]
    str        r1, [sl, #0x79c]
    str        r2, [sl, #0x7a0]
    str        r4, [sl, #0x7a4]
    ldr        ip, .L_037f9f40
    bne        .L_037f9e08
.L_037fa708:
    ldrb       r3, [ip, #0x88c]
    str        r3, [sp, #0x2c]
    ldr        r4, [sp, #0x2c]
    ldrb       r3, [ip, #0x7d4]
    asr        lr, r4, r3
    ldr        r2, [ip, #0x7c0]
    lsl        r1, r4, #2
    ldr        r3, [r2, r1]
    ldr        fp, [ip, #0x890]
    ldr        r0, [ip, #0x7c8]
    add        r3, fp, r3
    mul        r2, r0, r3
    str        r1, [sp, #0x28]
    ldrb       r1, [ip, #0x7d5]
    lsr        r2, r2, #1
    cmp        lr, r1
    str        r2, [ip, #0x7d0]
    beq        .L_037fa808
    ldrb       r3, [ip, #0x7c4]
    and        r2, lr, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    ldrle      r4, .L_037f9f48
    ldrble     r3, [r4, r1]
    strb       r2, [ip, #0x7d5]
    ldrle      lr, .L_037f9f4c
    movgt      r2, #0
    lslle      r3, r3, #0x18
    ldrble     r0, [lr, r1]
    strgt      r2, [sp, #0x4c]
    strle      r3, [sp, #0x4c]
    ldrb       ip, [sl, #0x7c5]
    ldrb       r3, [sl, #0x7d5]
    ldrb       lr, [sl, #0x7c6]
    ldrb       r2, [sl, #0x7c7]
    add        ip, ip, r3
    add        r2, r2, r3
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    ldrb       r6, [r4, ip]
    ldrb       r1, [r3, r2]
    ldrb       r7, [r4, lr]
    ldr        r3, .L_037f9f44
    ldr        r4, .L_037f9f48
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x4c]
    orr        r1, r1, r5, lsl #24
    orr        r0, r0, r3
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x7e0]
    str        r1, [sl, #0x7e4]
    str        r2, [sl, #0x7e8]
    str        r4, [sl, #0x7ec]
.L_037fa808:
    ldrb       r3, [sl, #0x834]
    ldr        r4, [sp, #0x2c]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x820]
    ldr        lr, [sp, #0x28]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x828]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x835]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x830]
    ldr        r0, .L_037f9f40
    beq        .L_037fa8fc
    ldrb       r3, [r0, #0x824]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x835]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037f9f4c
    strle      r3, [sp, #0x48]
    ldrb       ip, [sl, #0x825]
    ldrb       r3, [sl, #0x835]
    ldrb       lr, [sl, #0x826]
    ldrb       r2, [sl, #0x827]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x48]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037f9f48
    ldr        r3, .L_037f9f44
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x48]
    orr        r1, r1, r5, lsl #24
    orr        r0, r0, r3
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x840]
    str        r1, [sl, #0x844]
    str        r2, [sl, #0x848]
    str        r4, [sl, #0x84c]
.L_037fa8fc:
    ldrb       r3, [sl, #0x804]
    ldr        r4, [sp, #0x2c]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x7f0]
    ldr        lr, [sp, #0x28]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x7f8]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x805]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x800]
    ldr        r0, .L_037f9f40
    beq        .L_037fa9f0
    ldrb       r3, [r0, #0x7f4]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x805]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037f9f4c
    strle      r3, [sp, #0x44]
    ldrb       ip, [sl, #0x7f5]
    ldrb       r3, [sl, #0x805]
    ldrb       lr, [sl, #0x7f6]
    ldrb       r2, [sl, #0x7f7]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x44]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037f9f48
    ldr        r3, .L_037f9f44
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x44]
    orr        r1, r1, r5, lsl #24
    orr        r0, r0, r3
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x810]
    str        r1, [sl, #0x814]
    str        r2, [sl, #0x818]
    str        r4, [sl, #0x81c]
.L_037fa9f0:
    ldrb       r3, [sl, #0x864]
    ldr        r4, [sp, #0x2c]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x850]
    ldr        lr, [sp, #0x28]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x858]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x865]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x860]
    ldr        r0, .L_037f9f40
    beq        .L_037f9e08
    ldrb       r3, [r0, #0x854]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x865]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    ldrle      r4, .L_037f9f4c
    lslle      fp, r3, #0x18
    ldrb       ip, [sl, #0x855]
    ldrb       r3, [sl, #0x865]
    ldrb       lr, [sl, #0x856]
    ldrb       r2, [sl, #0x857]
    ldrble     r0, [r4, r1]
    add        r2, r2, r3
    add        ip, ip, r3
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    ldrb       r6, [r4, ip]
    ldrb       r1, [r3, r2]
    ldrb       r7, [r4, lr]
    ldr        r3, .L_037f9f44
    ldr        r4, .L_037f9f48
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r1, [r3, r6, lsl #2]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sl, #0x8a8]
    movgt      fp, #0
    orr        r2, r2, ip, lsl #24
    orr        r0, r0, fp
    orr        r1, r1, r5, lsl #24
    orr        r4, r4, r8, lsl #24
    cmn        r3, #1
    str        r0, [sl, #0x870]
    str        r1, [sl, #0x874]
    str        r2, [sl, #0x878]
    str        r4, [sl, #0x87c]
    ldr        ip, .L_037f9f40
    bne        .L_037f9e18
.L_037faae8:
    ldrb       r3, [ip, #0x964]
    str        r3, [sp, #0x34]
    ldr        r4, [sp, #0x34]
    ldrb       r3, [ip, #0x8ac]
    asr        lr, r4, r3
    ldr        r2, [ip, #0x898]
    lsl        r1, r4, #2
    ldr        r3, [r2, r1]
    ldr        fp, [ip, #0x968]
    ldr        r0, [ip, #0x8a0]
    add        r3, fp, r3
    mul        r2, r0, r3
    str        r1, [sp, #0x30]
    ldrb       r1, [ip, #0x8ad]
    lsr        r2, r2, #1
    cmp        lr, r1
    str        r2, [ip, #0x8a8]
    beq        .L_037fabe8
    ldrb       r3, [ip, #0x89c]
    and        r2, lr, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    ldrle      r4, .L_037f9f48
    ldrble     r3, [r4, r1]
    strb       r2, [ip, #0x8ad]
    ldrle      lr, .L_037f9f4c
    movgt      r2, #0
    lslle      r3, r3, #0x18
    ldrble     r0, [lr, r1]
    strgt      r2, [sp, #0x40]
    strle      r3, [sp, #0x40]
    ldrb       ip, [sl, #0x89d]
    ldrb       r3, [sl, #0x8ad]
    ldrb       lr, [sl, #0x89e]
    ldrb       r2, [sl, #0x89f]
    add        ip, ip, r3
    add        r2, r2, r3
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    ldrb       r6, [r4, ip]
    ldrb       r1, [r3, r2]
    ldrb       r7, [r4, lr]
    ldr        r3, .L_037f9f44
    ldr        r4, .L_037f9f48
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x40]
    orr        r1, r1, r5, lsl #24
    orr        r0, r0, r3
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x8b8]
    str        r1, [sl, #0x8bc]
    str        r2, [sl, #0x8c0]
    str        r4, [sl, #0x8c4]
.L_037fabe8:
    ldrb       r3, [sl, #0x90c]
    ldr        r4, [sp, #0x34]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x8f8]
    ldr        lr, [sp, #0x30]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x900]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x90d]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x908]
    ldr        r0, .L_037f9f40
    beq        .L_037facdc
    ldrb       r3, [r0, #0x8fc]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x90d]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037f9f4c
    strle      r3, [sp, #0x3c]
    ldrb       ip, [sl, #0x8fd]
    ldrb       r3, [sl, #0x90d]
    ldrb       lr, [sl, #0x8fe]
    ldrb       r2, [sl, #0x8ff]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x3c]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037f9f48
    ldr        r3, .L_037f9f44
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x3c]
    orr        r1, r1, r5, lsl #24
    orr        r0, r0, r3
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x918]
    str        r1, [sl, #0x91c]
    str        r2, [sl, #0x920]
    str        r4, [sl, #0x924]
.L_037facdc:
    ldrb       r3, [sl, #0x8dc]
    ldr        r4, [sp, #0x34]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x8c8]
    ldr        lr, [sp, #0x30]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x8d0]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x8dd]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x8d8]
    ldr        r0, .L_037f9f40
    beq        .L_037fadd0
    ldrb       r3, [r0, #0x8cc]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x8dd]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037f9f4c
    strle      r3, [sp, #0x38]
    ldrb       ip, [sl, #0x8cd]
    ldrb       r3, [sl, #0x8dd]
    ldrb       lr, [sl, #0x8ce]
    ldrb       r2, [sl, #0x8cf]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x38]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037f9f48
    ldr        r3, .L_037f9f44
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x38]
    orr        r1, r1, r5, lsl #24
    orr        r0, r3, r0
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x8e8]
    str        r1, [sl, #0x8ec]
    str        r2, [sl, #0x8f0]
    str        r4, [sl, #0x8f4]
.L_037fadd0:
    ldrb       r3, [sl, #0x93c]
    ldr        r4, [sp, #0x34]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x928]
    ldr        lr, [sp, #0x30]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x930]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x93d]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x938]
    ldr        r0, .L_037f9f40
    beq        .L_037f9e18
    ldrb       r3, [r0, #0x92c]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x93d]
    ldrle      r2, .L_037f9f48
    ldrble     r3, [r2, r1]
    ldrle      r4, .L_037f9f4c
    lslle      fp, r3, #0x18
    ldrb       ip, [sl, #0x92d]
    ldrb       r3, [sl, #0x93d]
    ldrb       lr, [sl, #0x92e]
    ldrb       r2, [sl, #0x92f]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037f9f4c
    ldr        r3, .L_037f9f4c
    ldrb       r6, [r4, ip]
    ldrb       r1, [r3, r2]
    ldrb       r7, [r4, lr]
    ldr        r3, .L_037f9f44
    ldr        r4, .L_037f9f48
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037f9f48
    ldr        r1, .L_037f9f48
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r1, [r3, r6, lsl #2]
    ldr        r2, [r3, r7, lsl #2]
    movgt      fp, #0
    orr        r0, fp, r0
    orr        r1, r1, r5, lsl #24
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x948]
    str        r1, [sl, #0x94c]
    str        r2, [sl, #0x950]
    str        r4, [sl, #0x954]
    b          .L_037f9e18
.L_037faebc:
    ldrb       r3, [ip, #0x604]
    str        r3, [sp, #0x14]
    ldr        r4, [sp, #0x14]
    ldrb       r3, [ip, #0x54c]
    asr        lr, r4, r3
    ldr        r2, [ip, #0x538]
    lsl        r1, r4, #2
    ldr        r3, [r2, r1]
    ldr        fp, [ip, #0x608]
    ldr        r0, [ip, #0x540]
    add        r3, fp, r3
    mul        r2, r0, r3
    str        r1, [sp, #0x10]
    ldrb       r1, [ip, #0x54d]
    lsr        r2, r2, #1
    cmp        lr, r1
    str        r2, [ip, #0x548]
    beq        .L_037fafbc
    ldrb       r3, [ip, #0x53c]
    and        r2, lr, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    ldrle      r4, .L_037f9f48
    ldrble     r3, [r4, r1]
    strb       r2, [ip, #0x54d]
    ldrle      lr, .L_037f9f4c
    movgt      r2, #0
    lslle      r3, r3, #0x18
    ldrble     r0, [lr, r1]
    strgt      r2, [sp, #0x70]
    strle      r3, [sp, #0x70]
    ldrb       ip, [sl, #0x53d]
    ldrb       r3, [sl, #0x54d]
    ldrb       lr, [sl, #0x53e]
    ldrb       r2, [sl, #0x53f]
    add        ip, ip, r3
    add        r2, r2, r3
    add        lr, lr, r3
    ldr        r4, .L_037fb9a0
    ldr        r3, .L_037fb9a0
    ldrb       r6, [r4, ip]
    ldrb       r1, [r3, r2]
    ldrb       r7, [r4, lr]
    ldr        r3, .L_037fb9a4
    ldr        r4, .L_037fb9a8
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037fb9a8
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x70]
    orr        r1, r1, r5, lsl #24
    orr        r0, r3, r0
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x558]
    str        r1, [sl, #0x55c]
    str        r2, [sl, #0x560]
    str        r4, [sl, #0x564]
.L_037fafbc:
    ldrb       r3, [sl, #0x5ac]
    ldr        r4, [sp, #0x14]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x598]
    ldr        lr, [sp, #0x10]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x5a0]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x5ad]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x5a8]
    ldr        r0, .L_037fb9ac
    beq        .L_037fb0b0
    ldrb       r3, [r0, #0x59c]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x5ad]
    ldrle      r2, .L_037fb9a8
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037fb9a0
    strle      r3, [sp, #0x6c]
    ldrb       ip, [sl, #0x59d]
    ldrb       r3, [sl, #0x5ad]
    ldrb       lr, [sl, #0x59e]
    ldrb       r2, [sl, #0x59f]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037fb9a0
    ldr        r3, .L_037fb9a0
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x6c]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037fb9a8
    ldr        r3, .L_037fb9a4
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037fb9a8
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x6c]
    orr        r1, r1, r5, lsl #24
    orr        r0, r3, r0
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x5b8]
    str        r1, [sl, #0x5bc]
    str        r2, [sl, #0x5c0]
    str        r4, [sl, #0x5c4]
.L_037fb0b0:
    ldrb       r3, [sl, #0x57c]
    ldr        r4, [sp, #0x14]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x568]
    ldr        lr, [sp, #0x10]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x570]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x57d]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x578]
    ldr        r0, .L_037fb9ac
    beq        .L_037fb1a4
    ldrb       r3, [r0, #0x56c]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x57d]
    ldrle      r2, .L_037fb9a8
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037fb9a0
    strle      r3, [sp, #0x68]
    ldrb       ip, [sl, #0x56d]
    ldrb       r3, [sl, #0x57d]
    ldrb       lr, [sl, #0x56e]
    ldrb       r2, [sl, #0x56f]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037fb9a0
    ldr        r3, .L_037fb9a0
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x68]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037fb9a8
    ldr        r3, .L_037fb9a4
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037fb9a8
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x68]
    orr        r1, r1, r5, lsl #24
    orr        r0, r3, r0
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x588]
    str        r1, [sl, #0x58c]
    str        r2, [sl, #0x590]
    str        r4, [sl, #0x594]
.L_037fb1a4:
    ldrb       r3, [sl, #0x5dc]
    ldr        r4, [sp, #0x14]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x5c8]
    ldr        lr, [sp, #0x10]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x5d0]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x5dd]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x5d8]
    ldr        r0, .L_037fb9ac
    beq        .L_037f9dcc
    ldrb       r3, [r0, #0x5cc]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x5dd]
    ldrle      r2, .L_037fb9a8
    ldrble     r3, [r2, r1]
    ldrle      r4, .L_037fb9a0
    lslle      fp, r3, #0x18
    ldrb       ip, [sl, #0x5cd]
    ldrb       r3, [sl, #0x5dd]
    ldrb       lr, [sl, #0x5ce]
    ldrb       r2, [sl, #0x5cf]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037fb9a0
    ldr        r3, .L_037fb9a0
    ldrb       r6, [r4, ip]
    ldrb       r1, [r3, r2]
    ldrb       r7, [r4, lr]
    ldr        r3, .L_037fb9a4
    ldr        r4, .L_037fb9a8
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037fb9a8
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r1, [r3, r6, lsl #2]
    ldr        r2, [r3, r7, lsl #2]
    movgt      fp, #0
    orr        r0, fp, r0
    orr        r1, r1, r5, lsl #24
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x5e8]
    str        r1, [sl, #0x5ec]
    str        r2, [sl, #0x5f0]
    str        r4, [sl, #0x5f4]
    b          .L_037f9dcc
.L_037fb290:
    ldrb       r1, [sl, #0x52c]
    ldrb       r3, [sl, #0x474]
    asr        ip, r1, r3
    ldr        r2, [sl, #0x460]
    lsl        r3, r1, #2
    str        r3, [sp, #8]
    ldr        fp, [sl, #0x530]
    ldr        r3, [r2, r3]
    ldr        r0, [sl, #0x468]
    add        r3, fp, r3
    mul        r2, r0, r3
    str        r1, [sp, #0xc]
    ldrb       r1, [sl, #0x475]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x470]
    beq        .L_037fb38c
    ldrb       r3, [sl, #0x464]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    ldrle      lr, .L_037fb9a8
    ldrble     r3, [lr, r1]
    strb       r2, [sl, #0x475]
    ldrle      r2, .L_037fb9a0
    lslle      r3, r3, #0x18
    ldrble     r0, [r2, r1]
    strle      r3, [sp, #0x7c]
    ldrb       ip, [sl, #0x465]
    ldrb       r3, [sl, #0x475]
    ldrb       lr, [sl, #0x466]
    ldrb       r2, [sl, #0x467]
    movgt      r4, #0
    add        r2, r2, r3
    add        ip, ip, r3
    add        lr, lr, r3
    strgt      r4, [sp, #0x7c]
    ldr        r3, .L_037fb9a0
    ldr        r4, .L_037fb9a0
    ldrb       r1, [r3, r2]
    ldrb       r6, [r4, ip]
    ldr        r3, .L_037fb9a4
    ldrb       r7, [r4, lr]
    ldr        r4, .L_037fb9a8
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037fb9a8
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x7c]
    orr        r1, r1, r5, lsl #24
    orr        r0, r3, r0
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x480]
    str        r1, [sl, #0x484]
    str        r2, [sl, #0x488]
    str        r4, [sl, #0x48c]
.L_037fb38c:
    ldrb       r3, [sl, #0x4d4]
    ldr        r4, [sp, #0xc]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x4c0]
    ldr        lr, [sp, #8]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x4c8]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x4d5]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x4d0]
    ldr        r0, .L_037fb9ac
    beq        .L_037fb480
    ldrb       r3, [r0, #0x4c4]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x4d5]
    ldrle      r2, .L_037fb9a8
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037fb9a0
    strle      r3, [sp, #0x78]
    ldrb       ip, [sl, #0x4c5]
    ldrb       r3, [sl, #0x4d5]
    ldrb       lr, [sl, #0x4c6]
    ldrb       r2, [sl, #0x4c7]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037fb9a0
    ldr        r3, .L_037fb9a0
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x78]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037fb9a8
    ldr        r3, .L_037fb9a4
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037fb9a8
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x78]
    orr        r1, r1, r5, lsl #24
    orr        r0, r3, r0
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x4e0]
    str        r1, [sl, #0x4e4]
    str        r2, [sl, #0x4e8]
    str        r4, [sl, #0x4ec]
.L_037fb480:
    ldrb       r3, [sl, #0x4a4]
    ldr        r4, [sp, #0xc]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x490]
    ldr        lr, [sp, #8]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x498]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x4a5]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x4a0]
    ldr        r0, .L_037fb9ac
    beq        .L_037fb574
    ldrb       r3, [r0, #0x494]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x4a5]
    ldrle      r2, .L_037fb9a8
    ldrble     r3, [r2, r1]
    lslle      r3, r3, #0x18
    ldrle      r4, .L_037fb9a0
    strle      r3, [sp, #0x74]
    ldrb       ip, [sl, #0x495]
    ldrb       r3, [sl, #0x4a5]
    ldrb       lr, [sl, #0x496]
    ldrb       r2, [sl, #0x497]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037fb9a0
    ldr        r3, .L_037fb9a0
    movgt      r1, #0
    ldrb       r6, [r4, ip]
    strgt      r1, [sp, #0x74]
    ldrb       r7, [r4, lr]
    ldrb       r1, [r3, r2]
    ldr        r4, .L_037fb9a8
    ldr        r3, .L_037fb9a4
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037fb9a8
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r1, [r3, r6, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r2, [r3, r7, lsl #2]
    ldr        r3, [sp, #0x74]
    orr        r1, r1, r5, lsl #24
    orr        r0, r3, r0
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x4b0]
    str        r1, [sl, #0x4b4]
    str        r2, [sl, #0x4b8]
    str        r4, [sl, #0x4bc]
.L_037fb574:
    ldrb       r3, [sl, #0x504]
    ldr        r4, [sp, #0xc]
    asr        ip, r4, r3
    ldr        r2, [sl, #0x4f0]
    ldr        lr, [sp, #8]
    ldr        r3, [lr, r2]
    ldr        r0, [sl, #0x4f8]
    add        r3, fp, r3
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x505]
    lsr        r2, r2, #1
    cmp        ip, r1
    str        r2, [sl, #0x500]
    ldr        r0, .L_037fb9ac
    beq        .L_037f9dbc
    ldrb       r3, [r0, #0x4f4]
    and        r2, ip, #0xff
    add        r1, r3, r2
    cmp        r1, #0x5d
    strb       r2, [r0, #0x505]
    ldrle      r2, .L_037fb9a8
    ldrble     r3, [r2, r1]
    ldrle      r4, .L_037fb9a0
    lslle      fp, r3, #0x18
    ldrb       ip, [sl, #0x4f5]
    ldrb       r3, [sl, #0x505]
    ldrb       lr, [sl, #0x4f6]
    ldrb       r2, [sl, #0x4f7]
    add        ip, ip, r3
    add        r2, r2, r3
    ldrble     r0, [r4, r1]
    add        lr, lr, r3
    ldr        r4, .L_037fb9a0
    ldr        r3, .L_037fb9a0
    ldrb       r6, [r4, ip]
    ldrb       r1, [r3, r2]
    ldrb       r7, [r4, lr]
    ldr        r3, .L_037fb9a4
    ldr        r4, .L_037fb9a8
    ldrb       r8, [r4, r2]
    ldr        r4, [r3, r1, lsl #2]
    ldr        r2, .L_037fb9a8
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldrb       ip, [r2, lr]
    ldr        r1, [r3, r6, lsl #2]
    ldr        r2, [r3, r7, lsl #2]
    movgt      fp, #0
    orr        r0, fp, r0
    orr        r1, r1, r5, lsl #24
    orr        r2, r2, ip, lsl #24
    orr        r4, r4, r8, lsl #24
    str        r0, [sl, #0x510]
    str        r1, [sl, #0x514]
    str        r2, [sl, #0x518]
    str        r4, [sl, #0x51c]
    b          .L_037f9dbc
.L_037fb660:
    ldr        r0, [r4, #0x14]
    ldr        r3, [sp, #4]
    mov        r1, sb
    add        r0, r3, r0, lsl #1
    ldr        r2, .L_037fb9b0
    bl         prepare_and_render_fm_channel
    b          .L_037f9f10
.L_037fb67c:
    ldrb       r1, [lr, #0x43e]
    ldrb       r3, [lr, #0x624]
    asr        r4, r1, r3
    ldr        r2, [lr, #0x610]
    ldr        r3, [lr, #0x434]
    ldr        ip, [r2, r1, lsl #2]
    ldr        r0, [lr, #0x618]
    add        r3, r3, ip
    mul        r2, r0, r3
    ldrb       r1, [lr, #0x625]
    lsr        r2, r2, #1
    cmp        r4, r1
    str        r2, [lr, #0x620]
    beq        .L_037fb760
    ldrb       r3, [lr, #0x614]
    and        r2, r4, #0xff
    add        ip, r3, r2
    cmp        ip, #0x5d
    ldrle      r4, .L_037fb9a8
    strb       r2, [lr, #0x625]
    ldrble     r3, [r4, ip]
    ldrle      lr, .L_037fb9a0
    lslle      fp, r3, #0x18
    ldrble     r0, [lr, ip]
    ldrb       r3, [sl, #0x625]
    ldrb       r1, [sl, #0x615]
    ldrb       ip, [sl, #0x616]
    ldr        lr, .L_037fb9a0
    ldrb       r2, [sl, #0x617]
    add        r1, r1, r3
    add        ip, ip, r3
    add        r2, r2, r3
    ldrb       r6, [lr, r1]
    ldr        r3, .L_037fb9a0
    ldrb       r7, [lr, ip]
    ldr        lr, .L_037fb9a8
    ldrb       r4, [r3, r2]
    ldrb       r8, [lr, r2]
    ldr        r3, .L_037fb9a4
    ldr        r2, .L_037fb9a8
    ldr        lr, [r3, r4, lsl #2]
    ldrb       r4, [r2, r1]
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r2, [r3, r6, lsl #2]
    ldr        r1, [r3, r7, lsl #2]
    movgt      fp, #0
    orr        r0, fp, r0
    orr        r2, r2, r4, lsl #24
    orr        r1, r1, r5, lsl #24
    orr        lr, lr, r8, lsl #24
    str        r0, [sl, #0x630]
    str        r2, [sl, #0x634]
    str        r1, [sl, #0x638]
    str        lr, [sl, #0x63c]
.L_037fb760:
    ldrb       r1, [sl, #0x43f]
    ldrb       r3, [sl, #0x684]
    asr        lr, r1, r3
    ldr        r2, [sl, #0x670]
    ldr        r3, [sl, #0x438]
    ldr        ip, [r2, r1, lsl #2]
    ldr        r0, [sl, #0x678]
    add        r3, r3, ip
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x685]
    lsr        r2, r2, #1
    cmp        lr, r1
    str        r2, [sl, #0x680]
    ldr        r1, .L_037fb9ac
    beq        .L_037fb844
    ldrb       r3, [r1, #0x674]
    and        r2, lr, #0xff
    add        ip, r3, r2
    cmp        ip, #0x5d
    strb       r2, [r1, #0x685]
    ldrle      r2, .L_037fb9a8
    ldrle      r4, .L_037fb9a0
    ldrble     r3, [r2, ip]
    ldrble     r0, [r4, ip]
    lslle      fp, r3, #0x18
    ldrb       r1, [sl, #0x675]
    ldrb       r3, [sl, #0x685]
    ldrb       ip, [sl, #0x676]
    ldrb       r2, [sl, #0x677]
    ldr        lr, .L_037fb9a0
    add        r2, r2, r3
    add        r1, r1, r3
    add        ip, ip, r3
    ldrb       r4, [lr, r2]
    ldrb       r6, [lr, r1]
    ldrb       r7, [lr, ip]
    ldr        lr, .L_037fb9a8
    ldr        r3, .L_037fb9a4
    ldrb       r8, [lr, r2]
    ldr        r2, .L_037fb9a8
    ldr        lr, [r3, r4, lsl #2]
    ldrb       r4, [r2, r1]
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r2, [r3, r6, lsl #2]
    ldr        r1, [r3, r7, lsl #2]
    movgt      fp, #0
    orr        r0, fp, r0
    orr        r2, r2, r4, lsl #24
    orr        r1, r1, r5, lsl #24
    orr        lr, lr, r8, lsl #24
    str        r0, [sl, #0x690]
    str        r2, [sl, #0x694]
    str        r1, [sl, #0x698]
    str        lr, [sl, #0x69c]
.L_037fb844:
    ldrb       r1, [sl, #0x43d]
    ldrb       r3, [sl, #0x654]
    asr        lr, r1, r3
    ldr        r2, [sl, #0x640]
    ldr        r3, [sl, #0x430]
    ldr        ip, [r2, r1, lsl #2]
    ldr        r0, [sl, #0x648]
    add        r3, r3, ip
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x655]
    lsr        r2, r2, #1
    cmp        lr, r1
    str        r2, [sl, #0x650]
    ldr        r1, .L_037fb9ac
    beq        .L_037fb928
    ldrb       r3, [r1, #0x644]
    and        r2, lr, #0xff
    add        ip, r3, r2
    cmp        ip, #0x5d
    strb       r2, [r1, #0x655]
    ldrle      r2, .L_037fb9a8
    ldrle      r4, .L_037fb9a0
    ldrble     r3, [r2, ip]
    ldrble     r0, [r4, ip]
    lslle      fp, r3, #0x18
    ldrb       r1, [sl, #0x645]
    ldrb       r3, [sl, #0x655]
    ldrb       ip, [sl, #0x646]
    ldrb       r2, [sl, #0x647]
    ldr        lr, .L_037fb9a0
    add        r2, r2, r3
    add        r1, r1, r3
    add        ip, ip, r3
    ldrb       r4, [lr, r2]
    ldrb       r6, [lr, r1]
    ldrb       r7, [lr, ip]
    ldr        lr, .L_037fb9a8
    ldr        r3, .L_037fb9a4
    ldrb       r8, [lr, r2]
    ldr        r2, .L_037fb9a8
    ldr        lr, [r3, r4, lsl #2]
    ldrb       r4, [r2, r1]
    ldr        r1, .L_037fb9a8
    movgt      r0, #0x11
    ldrb       r5, [r1, ip]
    ldr        r0, [r3, r0, lsl #2]
    ldr        r2, [r3, r6, lsl #2]
    ldr        r1, [r3, r7, lsl #2]
    movgt      fp, #0
    orr        r0, fp, r0
    orr        r2, r2, r4, lsl #24
    orr        r1, r1, r5, lsl #24
    orr        lr, lr, r8, lsl #24
    str        r0, [sl, #0x660]
    str        r2, [sl, #0x664]
    str        r1, [sl, #0x668]
    str        lr, [sl, #0x66c]
.L_037fb928:
    ldrb       r1, [sl, #0x6dc]
    ldrb       r3, [sl, #0x6b4]
    asr        lr, r1, r3
    ldr        r2, [sl, #0x6a0]
    ldr        r3, [sl, #0x6e0]
    ldr        ip, [r2, r1, lsl #2]
    ldr        r0, [sl, #0x6a8]
    add        r3, r3, ip
    mul        r2, r0, r3
    ldrb       r1, [sl, #0x6b5]
    lsr        r2, r2, #1
    cmp        lr, r1
    str        r2, [sl, #0x6b0]
    ldr        r1, .L_037fb9ac
    beq        .L_037f9de8
    ldrb       r3, [r1, #0x6a4]
    and        r2, lr, #0xff
    add        ip, r3, r2
    cmp        ip, #0x5d
    strb       r2, [r1, #0x6b5]
    bgt        .L_037fb994
    ldr        r2, .L_037fb9a8
    ldr        r4, .L_037fb9a0
    ldrb       r3, [r2, ip]
    ldrb       r0, [r4, ip]
    lsl        fp, r3, #0x18
    b          .L_037fa2a0
.L_037fb994:
    mov        r0, #0x11
    mov        fp, #0
    b          .L_037fa2a0
.L_037fb9a0:
    .word ym2612_tables + 0x44b0 /* envelope_pattern_index */
.L_037fb9a4:
    .word ym2612_tables + 0x4530 /* envelope_patterns */
.L_037fb9a8:
    .word ym2612_tables + 0x4430 /* envelope_shift */
.L_037fb9ac:
    .word 0x03806ea8
.L_037fb9b0:
    .word 0x03807740
    cmp        r1, #0
    bxle       lr
.L_037fb9bc:
    mov        r3, #0
    subs       r1, r1, #1
    strh       r3, [r0], #2
    bne        .L_037fb9bc
    bx         lr
    cmp        r2, #0
    bxle       lr
    add        r3, r2, #1
    asr        r2, r3, #1
    mov        r3, #0
.L_037fb9e4:
    ldrh       ip, [r3, r1]
    subs       r2, r2, #1
    strh       ip, [r3, r0]
    add        r3, r3, #2
    bne        .L_037fb9e4
    bx         lr
