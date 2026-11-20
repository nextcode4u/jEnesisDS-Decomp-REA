/* Z80 write and read window. Release range 0x02004908–0x02004aa8. */

/* 0x02004908 */
.global z80_write_and_read_window
z80_write_and_read_window:
    ldr        r3, .L_02004974
    mov        r2, r0
    cmp        r2, r3
    push       {r4, lr}
    and        r0, r0, #0xff
    bls        .L_02004964
    ldr        r3, .L_02004978
    mov        r0, #1
    cmp        r2, r3
    beq        .L_02004938
    bl         read_default_m68k_bus_word
    pop        {r4, pc}
.L_02004938:
    bl         read_z80_bus_request_status
    mov        r4, r0
    mov        r0, #1
    bl         read_default_m68k_bus_word
    bic        r0, r0, #0x300
    orr        r0, r0, r4, lsl #8
    orr        r0, r0, r4
    orr        r0, r0, r4, lsl #9
    lsl        r0, r0, #0x10
    lsr        r0, r0, #0x10
    pop        {r4, pc}
.L_02004964:
    bl         read_genesis_io_as_u8
    lsl        r0, r0, #0x10
    lsr        r0, r0, #0x10
    pop        {r4, pc}
.L_02004974:
    .word 0x00a1001f
.L_02004978:
    .word 0x00a11100
    str        lr, [sp, #-4]!
    ldr        r3, .L_02004a14
    sub        sp, sp, #4
    ldrb       r2, [r3]
    mov        r1, r0
    cmp        r2, #1
    beq        .L_020049b8
    and        r3, r0, #0x6000
    cmp        r3, #0x2000
    beq        .L_020049d0
    bls        .L_020049c8
    cmp        r3, #0x4000
    beq        .L_02004a04
    cmp        r3, #0x6000
    beq        .L_020049ec
.L_020049b8:
    mov        r0, #0
    bl         read_default_m68k_bus_word
.L_020049c0:
    add        sp, sp, #4
    ldm        sp!, {pc}
.L_020049c8:
    cmp        r3, #0
    bne        .L_020049b8
.L_020049d0:
    lsl        r0, r1, #0x13
    lsr        r0, r0, #0x13
    bl         read_z80_work_ram_byte
    orr        r0, r0, r0, lsl #8
    lsl        r0, r0, #0x10
    lsr        r0, r0, #0x10
    b          .L_020049c0
.L_020049ec:
    and        r3, r0, #0xff00
    cmp        r3, #0x7f00
    ldrne      r0, .L_02004a18
    bne        .L_020049c0
    bl         return_zero_for_unhandled_z80_vdp_access
    b          .L_020049c0
.L_02004a04:
    bl         read_ym2612_timer_status
    and        r0, r0, #0xff
    orr        r0, r0, r0, lsl #8
    b          .L_020049c0
.L_02004a14:
    .word address_0208f349
.L_02004a18:
    .word 0x0000ffff

/* 0x02004a1c */
.global read_z80_window_from_m68k
read_z80_window_from_m68k:
    str        lr, [sp, #-4]!
    ldr        r3, .L_02004aa4
    sub        sp, sp, #4
    ldrb       r2, [r3]
    mov        r1, r0
    cmp        r2, #1
    beq        .L_02004a5c
    and        r3, r0, #0x6000
    cmp        r3, #0x2000
    beq        .L_02004a70
    bls        .L_02004a68
    cmp        r3, #0x4000
    beq        .L_02004a98
    cmp        r3, #0x6000
    beq        .L_02004a80
.L_02004a58:
    mov        r0, r1
.L_02004a5c:
    bl         read_default_m68k_bus_byte
.L_02004a60:
    add        sp, sp, #4
    ldm        sp!, {pc}
.L_02004a68:
    cmp        r3, #0
    bne        .L_02004a58
.L_02004a70:
    lsl        r0, r1, #0x13
    lsr        r0, r0, #0x13
    bl         read_z80_work_ram_byte
    b          .L_02004a60
.L_02004a80:
    and        r3, r0, #0xff00
    cmp        r3, #0x7f00
    movne      r0, #0xff
    bne        .L_02004a60
    bl         return_zero_for_unhandled_z80_vdp_access
    b          .L_02004a60
.L_02004a98:
    bl         read_ym2612_timer_status
    and        r0, r0, #0xff
    b          .L_02004a60
.L_02004aa4:
    .word address_0208f349
