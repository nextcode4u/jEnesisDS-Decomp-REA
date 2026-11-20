/* Frame without h interrupts. Release range 0x02000868–0x02000a2c. */


/* 0x02000868 */
.global run_frame_h_int_off
run_frame_h_int_off:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        r7, .L_02000a14
    sub        sp, sp, #0xc
    ldr        sl, [r7, #4]
    ldr        r2, [r7, #0x18]
    ldr        r3, [r7]
    ldr        sb, [r7, #0x14]
    str        r2, [sp, #4]
    str        r3, [sp]
    bl         begin_vdp_frame_and_refresh_backgrounds
    cmp        sl, #0
    ldreq      fp, .L_02000a18
    moveq      r5, #0
    beq        .L_02000948
    ldr        fp, .L_02000a18
    mov        r4, #0
    lsl        r8, sb, #4
.L_020008ac:
    mov        r0, #0x24
    add        r5, r4, #0x10
    bl         update_vdp_line_cycles_and_queue_m68k_interrupts
    cmp        r5, r4
    bls        .L_020008e8
    ldr        r6, .L_02000a1c
.L_020008c4:
    mov        r0, r4
    str        r4, [r7, #0xc]
    bl         tick_vdp_horizontal_interrupt_counter
    mov        r0, r4
    add        r4, r4, #1
    mov        lr, pc
    ldr        pc, [r6]
    cmp        r4, r5
    blo        .L_020008c4
.L_020008e8:
    mov        r0, r8
    mov        lr, pc
    ldr        pc, [r7, #0x40]
    ldr        r3, [fp]
    tst        r3, #2
    bne        .L_02000910
    ldr        r3, .L_02000a20
    ldrb       r2, [r3]
    cmp        r2, #1
    beq        .L_02000920
.L_02000910:
    cmp        sl, r5
    bls        .L_02000948
.L_02000918:
    mov        r4, r5
    b          .L_020008ac
.L_02000920:
    ldr        r3, .L_02000a24
    ldrb       r2, [r3]
    cmp        r2, #0
    bne        .L_02000910
    ldr        r2, [sp, #4]
    ldr        r0, .L_02000a28
    lsl        r1, r2, #4
    bl         run_z80_cycle_budget
    cmp        sl, r5
    bhi        .L_02000918
.L_02000948:
    mov        r0, r5
    str        r5, [r7, #0xc]
    bl         begin_vdp_vertical_blanking
    mov        r0, #0
    bl         update_vdp_line_cycles_and_queue_m68k_interrupts
    mov        r3, #4
    mov        r2, #8
    str        r3, [r7, #0x80]
    str        r2, [r7, #0x7c]
    mov        r0, #0x4a
    mov        lr, pc
    ldr        pc, [r7, #0x40]
    mov        r0, #6
    bl         queue_m68k_interrupt_level
    mov        r1, #1
    mov        r2, r1
    ldr        r0, .L_02000a28
    bl         set_or_clear_z80_pending_interrupt_bits
    mov        r3, #0
    str        r3, [r7, #0x80]
    sub        r0, sb, #0x4a
    mov        lr, pc
    ldr        pc, [r7, #0x40]
    ldr        r2, [sp]
    rsb        r3, r5, r2
    sub        r4, r3, #1
    mul        r0, r4, sb
    mov        lr, pc
    ldr        pc, [r7, #0x40]
    ldr        r3, [fp]
    tst        r3, #2
    bne        .L_020009d8
    ldr        r3, .L_02000a20
    ldrb       r2, [r3]
    cmp        r2, #1
    beq        .L_020009f0
.L_020009d8:
    bl         submit_arm7_dac_sample_buffer
    ldr        r3, [r7, #8]
    add        r3, r3, #1
    str        r3, [r7, #8]
    add        sp, sp, #0xc
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_020009f0:
    ldr        r3, .L_02000a24
    ldrb       r2, [r3]
    cmp        r2, #0
    bne        .L_020009d8
    ldr        r1, [sp, #4]
    ldr        r0, .L_02000a28
    mul        r1, r4, r1
    bl         run_z80_cycle_budget
    b          .L_020009d8
.L_02000a14:
    .word frame_timing
.L_02000a18:
    .word emulator_option_flags
.L_02000a1c:
    .word record_vdp_scanline_state
.L_02000a20:
    .word z80_reset_released
.L_02000a24:
    .word z80_bus_request_asserted
.L_02000a28:
    .word address_0b000158
