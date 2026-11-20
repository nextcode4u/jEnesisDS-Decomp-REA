/* Paused viewport. Release range 0x02002150–0x020021cc. */


/* 0x02002150 */
.global adjust_paused_viewport
adjust_paused_viewport:
    push       {r4, r5, lr}
    sub        sp, sp, #4
    bl         scanKeys_arm_veneer
    bl         keysHeld_arm_veneer
    tst        r0, #1
    moveq      r4, #1
    movne      r4, #4
    tst        r0, #0x20
    mov        r5, r0
    mov        r0, r4
    bne        .L_020021c4
.L_0200217c:
    tst        r5, #0x10
    rsb        r0, r4, #0
    bne        .L_020021bc
.L_02002188:
    tst        r5, #0x40
    mov        r0, r4
    bne        .L_020021b4
.L_02002194:
    tst        r5, #0x80
    rsb        r0, r4, #0
    bne        .L_020021a8
    add        sp, sp, #4
    pop        {r4, r5, pc}
.L_020021a8:
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          adjust_vertical_viewport_offset
.L_020021b4:
    bl         adjust_vertical_viewport_offset
    b          .L_02002194
.L_020021bc:
    bl         adjust_horizontal_viewport_offset
    b          .L_02002188
.L_020021c4:
    bl         adjust_horizontal_viewport_offset
    b          .L_0200217c
