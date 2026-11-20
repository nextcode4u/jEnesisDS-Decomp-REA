/* YM2612 setup, channel preparation, and PCM mixing. 0x037f93e8–0x037f95fc. */


/* 0x037f93e8 */
.global initialize_ym2612_tables_and_channels
initialize_ym2612_tables_and_channels:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        r3, .L_037f95e4
    ldr        ip, .L_037f95e8
    str        r2, [r3]
    mov        r6, r1
    sub        sp, sp, #0xc
    mov        r5, r0
    mov        r3, #0
    add        r1, ip, #0x18
.L_037f940c:
    str        r3, [ip], #4
    cmp        ip, r1
    add        r3, r3, r2
    bne        .L_037f940c
    ldr        r4, .L_037f95ec
    mov        r2, #0x970
    mov        r0, r4
    add        r2, r2, #8
    mov        r1, #0
    bl         memset
    cmp        r6, #0
    str        r5, [r4, #-0x460]
    str        r6, [r4, #-0x45c]
    moveq      r0, r6
    moveq      r4, #0
    moveq      r5, #0
    beq        .L_037f94a8
    mov        r0, r5
    bl         __floatsidf
    mov        r4, r0
    mov        r0, r6
    mov        r5, r1
    bl         __floatsidf
    mov        r3, #0x40000000
    mov        r2, #0
    add        r3, r3, #0x620000
    bl         __muldf3
    mov        r2, r0
    mov        r3, r1
    mov        r0, r4
    mov        r1, r5
    bl         __divdf3
    mov        r3, #0x40000000
    mov        r2, #0
    add        r3, r3, #0xf00000
    mov        r4, r0
    mov        r5, r1
    bl         __muldf3
    bl         __fixunsdfsi
.L_037f94a8:
    ldr        fp, .L_037f95f0
    mov        r2, #0
    str        r4, [fp, #8]
    str        r5, [fp, #0xc]
    str        r2, [sp, #4]
    str        r0, [fp, #0x458]
.L_037f94c0:
    ldr        r2, [sp, #4]
    lsl        r3, r2, #7
    add        r2, r3, fp
    add        r3, r3, fp
    add        sl, r3, #0x2c
    ldr        r3, [sp, #4]
    add        r8, r2, #0x22c
    mov        r7, #0
    lsl        sb, r3, #5
    b          .L_037f952c
.L_037f94e8:
    mov        r1, #0x40000000
    add        r2, fp, #8
    ldm        r2, {r2, r3}
    mov        r0, #0
    add        r1, r1, #0x500000
    bl         __muldf3
    mov        r3, r1
    mov        r2, r0
    mov        r1, r6
    mov        r0, r5
    bl         __muldf3
    bl         __fixdfsi
    cmp        r7, #0x20
    rsb        r3, r0, #0
    str        r0, [sl], #4
    str        r3, [r8], #4
    beq        .L_037f9570
.L_037f952c:
    ldr        r2, .L_037f95f4
    add        r3, sb, r2
    ldrsb      r4, [r7, r3]
    mov        r0, r4
    bl         __floatsidf
    mov        r3, #0x40000000
    cmp        r4, #0
    add        r7, r7, #1
    mov        r5, r0
    mov        r6, r1
    mov        r2, #0
    add        r3, r3, #0x700000
    bge        .L_037f94e8
    bl         __adddf3
    mov        r5, r0
    mov        r6, r1
    b          .L_037f94e8
.L_037f9570:
    ldr        r3, [sp, #4]
    add        r3, r3, #1
    cmp        r3, #4
    str        r3, [sp, #4]
    bne        .L_037f94c0
    ldr        r1, .L_037f95f0
    add        r2, r1, #8
    ldm        r2, {r2, r3}
    mov        r1, #0x40000000
    mov        r0, #0
    add        r1, r1, #0xa00000
    bl         __muldf3
    ldr        r7, .L_037f95f8
    mov        r5, r0
    mov        r6, r1
    mov        r4, #0
.L_037f95b0:
    mov        r0, r4
    bl         __floatsidf
    mov        r2, r5
    mov        r3, r6
    bl         __muldf3
    bl         __fixunsdfsi
    add        r4, r4, #1
    cmp        r4, #0x1000
    str        r0, [r7], #4
    bne        .L_037f95b0
    add        sp, sp, #0xc
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    b          reset_ym2612_registers
.L_037f95e4:
    .word 0x03806ea0
.L_037f95e8:
    .word 0x03806e88
.L_037f95ec:
    .word 0x03807308
.L_037f95f0:
    .word 0x03806ea8
.L_037f95f4:
    .word ym2612_tables + 0x45bc /* pitch_modulation */
.L_037f95f8:
    .word 0x03807820
