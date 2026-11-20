/* M68k reset and loop detection. Release range 0x020052ec–0x02005aac. */


/* 0x020052ec */
.global classify_and_rewrite_m68k_short_loop_branch
classify_and_rewrite_m68k_short_loop_branch:
    ldr        r3, .L_020054bc
    push       {r4, lr}
    ldr        r2, [r3, #8]
    cmp        r2, #0x59
    bls        .L_02005314
    ldrh       lr, [r0, #-2]
    sub        r4, r0, #2
    lsr        r3, lr, #0xc
    cmp        r3, #6
    beq        .L_0200531c
.L_02005314:
    mov        r0, #0
    pop        {r4, pc}
.L_0200531c:
    ldr        r3, .L_020054c0
    cmp        lr, r3
    beq        .L_0200547c
    lsl        r3, lr, #0x18
    asr        r3, r3, #0x18
    bic        r2, r3, #1
    adds       r3, r0, r2
    blo        .L_020053b0
    add        ip, r3, #2
    cmp        r0, ip
    ldrh       r2, [r0, r2]
    beq        .L_0200547c
.L_0200534c:
    lsr        r3, r2, #0xc
    cmp        r3, #0xb
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_020053b0
    .word .L_020053d8
    .word .L_0200541c
    .word .L_0200541c
    .word .L_0200541c
    .word .L_0200538c
    .word .L_020053b0
    .word .L_020053b0
    .word .L_020053b0
    .word .L_020053b0
    .word .L_020053b0
    .word .L_020053b0
    .word .L_02005490
.L_0200538c:
    ldr        r3, .L_020054c4
    cmp        r2, r3
    beq        .L_02005468
    and        r3, r2, #0xff00
    cmp        r3, #0x4a00
    bne        .L_020053b0
    and        r3, r2, #0xc0
    cmp        r3, #0xc0
    bne        .L_02005424
.L_020053b0:
    lsl        r3, lr, #0x14
    lsr        r3, r3, #0x14
    orr        r3, r3, #0xf000
    mov        r0, #0
.L_020053c0:
    ldr        r2, .L_020054c8
    strh       r3, [r4]
    ldr        r3, [r2]
    add        r3, r3, r0
    str        r3, [r2]
    pop        {r4, pc}
.L_020053d8:
    ldr        r3, .L_020054cc
    and        r3, r2, r3
    cmp        r3, #0x100
    beq        .L_02005424
    ldr        r1, .L_020054d0
    and        r1, r2, r1
    cmp        r1, #0x800
    beq        .L_02005414
    and        r3, r2, #0xff00
    cmp        r3, #0xc00
    beq        .L_020054a0
    cmp        r3, #0x200
    beq        .L_020054a0
.L_0200540c:
    cmp        r1, #0x880
    bne        .L_020053b0
.L_02005414:
    add        ip, ip, #2
    b          .L_02005424
.L_0200541c:
    tst        r2, #0x180
    bne        .L_020053b0
.L_02005424:
    and        r3, r2, #0x38
    cmp        r3, #0x20
    cmpne      r3, #0x18
    beq        .L_020053b0
    lsr        r3, r2, #3
    and        r3, r3, #7
    cmp        r3, #4
    and        r2, r2, #7
    movhi      r1, #2
    movls      r1, #0
    cmp        r3, #7
    cmpeq      r2, #1
    bne        .L_02005464
    cmp        r1, #0
    movne      r1, #4
    moveq      r1, #2
.L_02005464:
    add        ip, r1, ip
.L_02005468:
    cmp        r0, ip
    bls        .L_020053b0
    ldrh       r2, [ip], #2
    cmp        r0, ip
    bne        .L_0200534c
.L_0200547c:
    lsl        r3, lr, #0x14
    lsr        r3, r3, #0x14
    orr        r3, r3, #0xa000
    mov        r0, #1
    b          .L_020053c0
.L_02005490:
    and        r3, r2, #0xf100
    cmp        r3, #0xb000
    beq        .L_02005424
    b          .L_020053b0
.L_020054a0:
    and        r3, r2, #0xc0
    cmp        r3, #0xc0
    beq        .L_0200540c
    cmp        r3, #0x80
    add        ip, ip, #2
    addeq      ip, ip, #2
    b          .L_02005424
.L_020054bc:
    .word frame_timing
.L_020054c0:
    .word 0x000060fe
.L_020054c4:
    .word 0x00004e71
.L_020054c8:
    .word 0x0209903c
.L_020054cc:
    .word 0x0000f1c0
.L_020054d0:
    .word 0x0000ffc0

/* 0x020054d4 */
.global reset_m68k_registers_and_load_vectors
reset_m68k_registers_and_load_vectors:
    push       {r4, r5, r6, r7, r8, lr}
    mov        r8, #0
    mov        r7, r0
    mov        r1, r8
.L_020054e4:
    strb       r8, [r7, r1, lsl #2]
    add        r3, r7, r1, lsl #2
    add        r1, r1, #1
    add        r2, r3, #0x20
    cmp        r1, #8
    strb       r8, [r3, #0x20]
    strb       r8, [r3, #1]
    strb       r8, [r3, #2]
    strb       r8, [r3, #3]
    strb       r8, [r2, #3]
    strb       r8, [r2, #1]
    strb       r8, [r2, #2]
    bne        .L_020054e4
    ldrb       r2, [r7, #0x71]
    ldrb       r3, [r7, #0x70]
    ldrb       r0, [r7, #0x72]
    orr        r3, r3, r2, lsl #8
    ldrb       r1, [r7, #0x73]
    orr        r3, r3, r0, lsl #16
    orr        r3, r3, r1, lsl #24
    mov        r0, #0
    blx        r3
    ldrb       r2, [r7, #0x71]
    ldrb       r3, [r7, #0x70]
    ldrb       ip, [r7, #0x72]
    ldrb       lr, [r7, #0x73]
    orr        r3, r3, r2, lsl #8
    lsr        r1, r0, #8
    lsr        r2, r0, #0x10
    and        r1, r1, #0xff
    and        r2, r2, #0xff
    orr        r3, r3, ip, lsl #16
    lsr        ip, r0, #0x18
    and        r0, r0, #0xff
    orr        r3, r3, lr, lsl #24
    strb       ip, [r7, #0x3f]
    strb       ip, [r7, #0x4b]
    strb       r0, [r7, #0x3c]
    strb       r1, [r7, #0x3d]
    strb       r2, [r7, #0x3e]
    strb       r0, [r7, #0x48]
    strb       r1, [r7, #0x49]
    strb       r2, [r7, #0x4a]
    mov        r0, #4
    blx        r3
    lsr        r3, r0, #8
    lsr        r1, r0, #0x18
    lsr        r2, r0, #0x10
    strb       r3, [r7, #0x45]
    mov        r3, #0x27
    strb       r2, [r7, #0x46]
    strb       r1, [r7, #0x47]
    strb       r3, [r7, #0x51]
    strb       r0, [r7, #0x44]
    strb       r8, [r7, #0x40]
    strb       r8, [r7, #0x41]
    strb       r8, [r7, #0x42]
    strb       r8, [r7, #0x43]
    strb       r8, [r7, #0x4c]
    strb       r8, [r7, #0x4d]
    strb       r8, [r7, #0x4e]
    strb       r8, [r7, #0x4f]
    strb       r8, [r7, #0x50]
    strb       r8, [r7, #0x52]
    strb       r8, [r7, #0x53]
    strb       r8, [r7, #0xa0]
    strb       r8, [r7, #0xa1]
    strb       r8, [r7, #0xa7]
    strb       r8, [r7, #0xa2]
    strb       r8, [r7, #0xa3]
    strb       r8, [r7, #0xa4]
    strb       r8, [r7, #0x94]
    strb       r8, [r7, #0x95]
    strb       r8, [r7, #0x96]
    strb       r8, [r7, #0x97]
    bl         get_cartridge_rom_buffer
    lsr        r1, r0, #0x18
    lsr        r3, r0, #8
    lsr        r2, r0, #0x10
    strb       r3, [r7, #0x61]
    strb       r2, [r7, #0x62]
    strb       r1, [r7, #0x63]
    strb       r0, [r7, #0x60]
    bl         get_genesis_work_ram_buffer
    ldrb       r1, [r7, #0x89]
    mov        r3, r0
    ldrb       ip, [r7, #0x45]
    ldrb       r2, [r7, #0x88]
    ldrb       r0, [r7, #0x44]
    ldrb       lr, [r7, #0x8a]
    ldrb       r4, [r7, #0x46]
    orr        r2, r2, r1, lsl #8
    orr        r0, r0, ip, lsl #8
    lsr        r1, r3, #8
    lsr        ip, r3, #0x10
    ldrb       r5, [r7, #0x8b]
    ldrb       r6, [r7, #0x47]
    and        r1, r1, #0xff
    and        ip, ip, #0xff
    orr        r2, r2, lr, lsl #16
    orr        r0, r0, r4, lsl #16
    lsr        r4, r3, #0x18
    and        r3, r3, #0xff
    strb       r3, [r7, #0x58]
    strb       r1, [r7, #0x59]
    strb       ip, [r7, #0x5a]
    strb       r4, [r7, #0x5b]
    orr        r2, r2, r5, lsl #24
    strb       r3, [r7, #0x64]
    strb       r1, [r7, #0x65]
    strb       ip, [r7, #0x66]
    strb       r4, [r7, #0x67]
    orr        r0, r0, r6, lsl #24
    blx        r2
    ldr        r3, .L_02005774
    ldrb       r2, [r0]
    ldrb       r1, [r7, #0x44]
    str        r0, [r3]
    strb       r2, [r7, #0x54]
    ldrb       r3, [r0, #1]
    ldrb       lr, [r7, #0x45]
    strb       r3, [r7, #0x55]
    ldrb       r2, [r0, #2]
    ldrb       r4, [r7, #0x46]
    strb       r2, [r7, #0x56]
    ldrb       ip, [r0, #3]
    ldrb       r2, [r7, #0x47]
    strb       ip, [r7, #0x57]
    ldr        r3, [r0, #4]
    orr        r1, r1, lr, lsl #8
    orr        r1, r1, r4, lsl #16
    orr        r1, r1, r2, lsl #24
    mvn        r3, r3
    and        r3, r1, r3
    lsr        r2, r3, #8
    lsr        ip, r3, #0x10
    lsr        lr, r3, #0x18
    strb       ip, [r7, #0x9e]
    strb       r3, [r7, #0x9c]
    strb       r2, [r7, #0x9d]
    strb       lr, [r7, #0x9f]
    ldr        r2, [r0, #4]
    and        r1, r1, r2
    lsr        r3, r1, #8
    lsr        r2, r1, #0x10
    lsr        ip, r1, #0x18
    strb       r2, [r7, #0x46]
    strb       r1, [r7, #0x44]
    strb       r3, [r7, #0x45]
    strb       ip, [r7, #0x47]
    ldr        r3, [r0]
    add        r1, r1, r3
    lsr        r2, r1, #0x18
    lsr        r3, r1, #8
    strb       r2, [r7, #0x47]
    strb       r3, [r7, #0x45]
    ldr        r2, .L_02005778
    ldr        r3, .L_0200577c
    lsr        r0, r1, #0x10
    strb       r0, [r7, #0x46]
    strb       r1, [r7, #0x44]
    str        r8, [r3]
    str        r8, [r2]
    pop        {r4, r5, r6, r7, r8, pc}
.L_02005774:
    .word m68k_pc_mapping_entry
.L_02005778:
    .word 0x0209903c
.L_0200577c:
    .word 0x02099040

/* 0x02005780 */
.global install_m68k_callbacks_and_instrumented_opcode_entries
install_m68k_callbacks_and_instrumented_opcode_entries:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    cmp        r2, #0
    cmpne      r1, #0
    sub        sp, sp, #0x64
    mov        ip, r3
    ldr        lr, [sp, #0x88]
    ldr        r5, [sp, #0x8c]
    ldr        r7, [sp, #0x90]
    ldr        r4, [sp, #0x98]
    ldr        r8, [sp, #0x94]
    ldr        r6, [sp, #0x9c]
    beq        .L_0200599c
    cmp        lr, #0
    cmpne      r3, #0
    beq        .L_0200599c
    lsr        r3, r4, #0x18
    str        r3, [sp, #0x5c]
    lsr        r3, r1, #0x18
    str        r3, [sp, #0x48]
    lsr        r3, ip, #0x18
    str        r3, [sp, #0x30]
    lsr        r3, r5, #0x18
    str        r3, [sp, #0x18]
    lsr        r3, r8, #0x18
    str        r3, [sp]
    lsr        r3, r6, #0x10
    str        r3, [sp, #0x58]
    lsr        r3, r1, #8
    str        r3, [sp, #0x50]
    lsr        r3, r1, #0x10
    str        r3, [sp, #0x4c]
    lsr        r3, r2, #8
    str        r3, [sp, #0x44]
    lsr        r3, r2, #0x10
    str        r3, [sp, #0x40]
    lsr        r3, ip, #8
    str        r3, [sp, #0x38]
    lsr        r3, ip, #0x10
    str        r3, [sp, #0x34]
    lsr        r3, lr, #8
    str        r3, [sp, #0x2c]
    lsr        r3, lr, #0x10
    str        r3, [sp, #0x28]
    lsr        r3, r5, #8
    str        r3, [sp, #0x20]
    lsr        r3, r5, #0x10
    lsr        sl, r6, #0x18
    str        r3, [sp, #0x1c]
    lsr        r3, r7, #8
    str        sl, [sp, #0x54]
    str        r3, [sp, #0x14]
    lsr        sl, r2, #0x18
    lsr        r3, r7, #0x10
    str        sl, [sp, #0x3c]
    str        r3, [sp, #0x10]
    lsr        sl, lr, #0x18
    lsr        r3, r8, #8
    str        sl, [sp, #0x24]
    str        r3, [sp, #8]
    lsr        sl, r7, #0x18
    lsr        r3, r8, #0x10
    cmp        r7, #0
    cmpne      r5, #0
    str        sl, [sp, #0xc]
    lsr        sb, r4, #0x10
    lsr        sl, r4, #8
    lsr        fp, r6, #8
    str        r3, [sp, #4]
    beq        .L_0200599c
    strb       sl, [r0, #0x85]
    ldr        sl, [sp, #0x5c]
    subs       r3, r4, #0
    movne      r3, #1
    strb       sl, [r0, #0x87]
    ldr        sl, [sp, #0x58]
    strb       sb, [r0, #0x86]
    strb       sl, [r0, #0x8a]
    ldr        sl, [sp, #0x54]
    strb       fp, [r0, #0x89]
    strb       sl, [r0, #0x8b]
    ldr        sl, [sp, #0x50]
    strb       sl, [r0, #0x69]
    ldr        sl, [sp, #0x4c]
    strb       sl, [r0, #0x6a]
    ldr        sl, [sp, #0x48]
    strb       sl, [r0, #0x6b]
    ldr        sl, [sp, #0x44]
    strb       sl, [r0, #0x6d]
    ldr        sl, [sp, #0x40]
    strb       sl, [r0, #0x6e]
    ldr        sl, [sp, #0x3c]
    strb       sl, [r0, #0x6f]
    ldr        sl, [sp, #0x38]
    strb       sl, [r0, #0x71]
    ldr        sl, [sp, #0x34]
    strb       sl, [r0, #0x72]
    ldr        sl, [sp, #0x30]
    strb       sl, [r0, #0x73]
    ldr        sl, [sp, #0x2c]
    strb       sl, [r0, #0x75]
    ldr        sl, [sp, #0x28]
    strb       sl, [r0, #0x76]
    ldr        sl, [sp, #0x24]
    strb       sl, [r0, #0x77]
    ldr        sl, [sp, #0x20]
    strb       sl, [r0, #0x79]
    ldr        sl, [sp]
    strb       r3, [r0, #0xa5]
    ldr        r3, [sp, #0x1c]
    strb       sl, [r0, #0x83]
    strb       r3, [r0, #0x7a]
    ldr        sl, [sp, #0x14]
    ldr        r3, [sp, #0x18]
    strb       sl, [r0, #0x7d]
    strb       r3, [r0, #0x7b]
    ldr        sl, [sp, #0xc]
    ldr        r3, [sp, #0x10]
    strb       sl, [r0, #0x7f]
    strb       r3, [r0, #0x7e]
    ldr        sl, [sp, #4]
    ldr        r3, [sp, #8]
    strb       r4, [r0, #0x84]
    strb       r6, [r0, #0x88]
    strb       r1, [r0, #0x68]
    strb       r2, [r0, #0x6c]
    strb       ip, [r0, #0x70]
    strb       lr, [r0, #0x74]
    strb       r5, [r0, #0x78]
    strb       r3, [r0, #0x81]
    strb       sl, [r0, #0x82]
    strb       r7, [r0, #0x7c]
    strb       r8, [r0, #0x80]
    add        sp, sp, #0x64
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    b          m68k_arm_opcode_start
.L_0200599c:
    add        sp, sp, #0x64
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
    cmp        r0, #8
    beq        .L_020059d4
    cmp        r0, #0x11
    ldreq      r3, .L_020059e4
    moveq      r2, #1
    streq      r2, [r3]
    bxeq       lr
    cmp        r0, #7
    ldreq      r3, .L_020059e8
    moveq      r2, #1
    streq      r2, [r3]
    bx         lr
.L_020059d4:
    ldr        r2, [r1]
    ldr        r3, .L_020059ec
    str        r2, [r3]
    bx         lr
.L_020059e4:
    .word 0x0209906c
.L_020059e8:
    .word 0x02099074
.L_020059ec:
    .word 0x02099078

/* 0x020059f0 */
.global clear_sound_mirrors_before_state_load
clear_sound_mirrors_before_state_load:
    ldr        r3, .L_02005a94
    mov        r1, #0
    ldr        ip, .L_02005a98
    push       {r4, r5, lr}
    str        r1, [r3]
    ldr        r4, .L_02005a9c
    ldr        lr, .L_02005aa0
    ldr        r3, .L_02005aa4
    ldr        r2, .L_02005aa8
    mvn        r0, #0x3f
    str        r1, [r3]
    mov        r5, r4
    str        r1, [ip, #0x10]
    str        r1, [r2]
    strb       r0, [lr, #0xb4]
    str        r1, [ip]
    str        r1, [ip, #0xc]
    str        r1, [ip, #4]
    str        r1, [ip, #0x18]
    strb       r0, [r4, #0xb6]
    strb       r0, [lr, #0xb6]
    strb       r0, [r4, #0xb5]
    strb       r0, [lr, #0xb5]
    strb       r0, [r4, #0xb4]
    sub        r3, r4, #0x83
.L_02005a54:
    strb       r1, [r5, #0xb2]
    sub        r5, r5, #1
    cmp        r5, r3
    strb       r1, [lr, #0xb2]
    sub        lr, lr, #1
    bne        .L_02005a54
    add        r3, r5, #0x83
    strb       r1, [r3, #0x2b]
    strb       r1, [r3, #0x26]
    strb       r1, [r3, #0x25]
    strb       r1, [r3, #0x24]
    strb       r1, [r3, #0x23]
    strb       r1, [r3, #0x22]
    strb       r1, [r3, #0x21]
    strb       r1, [r3, #0x20]
    pop        {r4, r5, pc}
.L_02005a94:
    .word dac_queue_bytes
.L_02005a98:
    .word 0x023db778
.L_02005a9c:
    .word ym2612_bank_0_mirror
.L_02005aa0:
    .word ym2612_bank_1_mirror
.L_02005aa4:
    .word ym2612_bank_1_queue_bytes
.L_02005aa8:
    .word ym2612_bank_0_queue_bytes
