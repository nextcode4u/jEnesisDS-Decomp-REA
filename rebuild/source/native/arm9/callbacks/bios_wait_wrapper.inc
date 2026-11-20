/* Bios wait wrapper. Release range 0x02001180–0x020011b0. */


/* 0x02001180 */
.global wait_six_vblanks_per_unit
wait_six_vblanks_per_unit:
    push       {r4, r5, lr}
    add        r0, r0, r0, lsl #1
    lsls       r5, r0, #1
    sub        sp, sp, #4
    beq        .L_020011a8
    mov        r4, #0
.L_02001198:
    add        r4, r4, #1
    bl         swiWaitForVBlank
    cmp        r4, r5
    bne        .L_02001198
.L_020011a8:
    add        sp, sp, #4
    pop        {r4, r5, pc}
