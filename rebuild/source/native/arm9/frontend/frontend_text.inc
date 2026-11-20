/* Frontend text. Release range 0x0200d8c4–0x0200db8c. */


/* 0x0200d8c4 */
.global clear_text_overlay_tilemap
clear_text_overlay_tilemap:
    ldr        r3, .L_0200d8f8
    ldr        r2, [r3]
    cmp        r2, #0
    bxeq       lr
    ldr        r3, .L_0200d8fc
    mov        r2, #0
    ldr        r3, [r3]
.L_0200d8e0:
    mov        r1, #0
    strh       r1, [r2, r3]
    add        r2, r2, #2
    cmp        r2, #0x600
    bne        .L_0200d8e0
    bx         lr
.L_0200d8f8:
    .word 0x020b4c50
.L_0200d8fc:
    .word 0x020b4c58

/* 0x0200d900 */
.global initialize_text_overlay_tiles
initialize_text_overlay_tiles:
    push       {r4, r5, r6, r7, lr}
    cmp        r2, #0
    cmpne      r0, #0
    mov        ip, r2
    movne      r7, #0
    moveq      r7, #1
    mov        r6, r1
    mov        r2, r3
    ldr        lr, [sp, #0x14]
    popeq      {r4, r5, r6, r7, pc}
    and        r3, lr, #0xf
    lsls       r5, r2, #5
    ldr        r1, .L_0200d9a0
    ldr        r2, .L_0200d9a4
    lsl        r3, r3, #0xc
    str        ip, [r2]
    str        r3, [r1]
    lsl        r4, lr, #4
    beq        .L_0200d98c
    mov        ip, r7
    lsl        lr, lr, #0xc
    mov        r1, r7
.L_0200d958:
    ldrh       r2, [r1, r0]
    and        r3, lr, #0xf000
    tst        r2, #0xff00
    orrne      r2, r3, r2
    orr        r3, r2, r4
    tst        r2, #0xff
    add        ip, ip, #1
    lsl        r3, r3, #0x10
    lsrne      r2, r3, #0x10
    cmp        r5, ip
    strh       r2, [r1, r6]
    add        r1, r1, #2
    bne        .L_0200d958
.L_0200d98c:
    ldr        r3, .L_0200d9a8
    mov        r2, #1
    str        r2, [r3]
    pop        {r4, r5, r6, r7, lr}
    b          clear_text_overlay_tilemap
.L_0200d9a0:
    .word 0x020b4c54
.L_0200d9a4:
    .word 0x020b4c58
.L_0200d9a8:
    .word 0x020b4c50
    ldr        r3, .L_0200d9e4
    ldr        r2, [r3]
    cmp        r2, #0
    bxeq       lr
    ldr        r3, .L_0200d9e8
    mov        r1, #0
    ldr        r2, [r3]
    add        r0, r2, r0, lsl #6
.L_0200d9cc:
    mov        r3, #0
    strh       r3, [r1, r0]
    add        r1, r1, #2
    cmp        r1, #0x40
    bne        .L_0200d9cc
    bx         lr
.L_0200d9e4:
    .word 0x020b4c50
.L_0200d9e8:
    .word 0x020b4c58

/* 0x0200d9ec */
.global clear_text_rows_from
clear_text_rows_from:
    ldr        r3, .L_0200da34
    ldr        r2, [r3]
    cmp        r2, #0
    bxeq       lr
    ldr        r2, .L_0200da38
    rsb        r3, r0, #0x18
    ldr        r1, [r2]
    lsls       ip, r3, #5
    add        r0, r1, r0, lsl #6
    bxeq       lr
    mov        r2, #0
.L_0200da18:
    lsl        r3, r2, #1
    add        r2, r2, #1
    mov        r1, #0
    cmp        r2, ip
    strh       r1, [r3, r0]
    bne        .L_0200da18
    bx         lr
.L_0200da34:
    .word 0x020b4c50
.L_0200da38:
    .word 0x020b4c58

/* 0x0200da3c */
.global write_text_at_tile_position
write_text_at_tile_position:
    push       {r4, r5, lr}
    subs       r5, r0, #0
    mov        r4, r1
    mov        r0, r2
    popeq      {r4, r5, pc}
    ldrb       lr, [r5]
    cmp        lr, #0
    popeq      {r4, r5, pc}
    ldr        r3, .L_0200dad0
    ldr        r2, [r3]
    cmp        r2, #0
    popeq      {r4, r5, pc}
    ldr        r3, .L_0200dad4
    ldr        r2, .L_0200dad8
    ldr        r1, [r3]
    ldr        r3, .L_0200dadc
    ldr        ip, [r2]
    add        r0, r0, r4, lsl #5
    lsl        r1, r1, #0x10
    ldrb       r4, [r3]
    add        ip, ip, r0, lsl #1
    lsr        r1, r1, #0x10
    mov        r0, #0
.L_0200da98:
    rsb        r3, r4, lr
    and        r3, r3, #0xff
    orr        r3, r1, r3
    lsl        r2, r0, #1
    strh       r3, [r2, ip]
    add        r0, r0, #1
    ldrb       lr, [r0, r5]
    subs       r3, lr, #0
    movne      r3, #1
    cmp        r0, #0xfe
    movhi      r3, #0
    cmp        r3, #0
    bne        .L_0200da98
    pop        {r4, r5, pc}
.L_0200dad0:
    .word 0x020b4c50
.L_0200dad4:
    .word 0x020b4c54
.L_0200dad8:
    .word 0x020b4c58
.L_0200dadc:
    .word address_0208f35c

/* 0x0200dae0 */
.global write_clipped_text_row
write_clipped_text_row:
    push       {r4, r5, r6, lr}
    subs       r5, r0, #0
    mov        lr, r2
    popeq      {r4, r5, r6, pc}
    ldrb       ip, [r5]
    cmp        ip, #0
    popeq      {r4, r5, r6, pc}
    ldr        r3, .L_0200db7c
    ldr        r2, [r3]
    cmp        r2, #0
    popeq      {r4, r5, r6, pc}
    ldr        r3, .L_0200db80
    cmp        lr, #0x1f
    ldr        r2, [r3]
    add        r6, r2, r1, lsl #6
    pophi      {r4, r5, r6, pc}
    ldr        r3, .L_0200db84
    ldr        r1, .L_0200db88
    ldr        r2, [r3]
    ldrb       r4, [r1]
    lsl        r2, r2, #0x10
    lsr        r0, r2, #0x10
    add        r1, r6, lr, lsl #1
    mov        r2, lr
    mov        lr, #0
.L_0200db44:
    rsb        r3, r4, ip
    and        r3, r3, #0xff
    orr        r3, r0, r3
    strh       r3, [r1], #2
    add        lr, lr, #1
    ldrb       ip, [lr, r5]
    add        r2, r2, #1
    subs       r3, ip, #0
    movne      r3, #1
    cmp        r2, #0x1f
    movhi      r3, #0
    cmp        r3, #0
    bne        .L_0200db44
    pop        {r4, r5, r6, pc}
.L_0200db7c:
    .word 0x020b4c50
.L_0200db80:
    .word 0x020b4c58
.L_0200db84:
    .word 0x020b4c54
.L_0200db88:
    .word address_0208f35c
