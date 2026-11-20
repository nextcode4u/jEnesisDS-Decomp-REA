/* Z80 execution and prefixed instruction handlers. 0x02010260–0x02010f10. */


/* 0x02010260 */
.global z80_ed_in_b_port_c
z80_ed_in_b_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r6, #0xff000000
    bic        r5, r5, #0xd7
    orr        r5, r5, #0x84
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010284 */
.global z80_ed_out_b_port_c
z80_ed_out_b_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201029c */
.global z80_ed_sbc_hl_bc
z80_ed_sbc_hl_bc:
    orr        r0, r6, r7, lsr #8
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       sl, sl, lr, lsl #16
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       sl, sl, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020102dc */
.global z80_ed_store_bc_absolute
z80_ed_store_bc_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    orr        r1, r6, r7, lsr #8
    lsr        r1, r1, #0x10
    strb       r1, [r3, r0]
    lsr        r1, r1, #8
    add        r0, r0, #1
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010310 */
.global z80_ed_negate_accumulator
z80_ed_negate_accumulator:
    mov        r0, r4
    mov        r4, #0
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010344 */
.global z80_ed_retn
z80_ed_retn:
    ldr        r0, [sp, #0x44]
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    tst        r0, #4
    orrne      r0, r0, #8
    biceq      r0, r0, #8
    str        r0, [sp, #0x44]
    sub        r5, r5, #0xe0000
    b          check_z80_pending_interrupt_then_dispatch

/* 0x02010370 */
.global z80_ed_set_interrupt_mode_0
z80_ed_set_interrupt_mode_0:
    ldr        r0, [sp, #0x44]
    bic        r0, r0, #3
    str        r0, [sp, #0x44]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201038c */
.global z80_ed_ld_i_a
z80_ed_ld_i_a:
    str        r4, [sp, #0x38]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x90000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020103a0 */
.global z80_ed_in_c_port_c
z80_ed_in_c_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r7, #0xff000000
    bic        r5, r5, #0xd7
    orr        r5, r5, #0x84
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020103c4 */
.global z80_ed_out_c_port_c
z80_ed_out_c_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020103dc */
.global z80_ed_adc_hl_bc
z80_ed_adc_hl_bc:
    orr        r0, r6, r7, lsr #8
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     sl, sl, #0x10000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       sl, sl, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010418 */
.global z80_ed_ld_bc_from_absolute
z80_ed_ld_bc_from_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    cmp        r0, #0x2000
    blge       bridge_to_z80_mapped_word_read
    ldrb       lr, [r3, r0]
    add        r0, r0, #1
    ldrb       r0, [r3, r0]
    orr        r0, lr, r0, lsl #8
    lsl        r6, r0, #0x10
    lsl        r7, r0, #0x18
    and        r6, r6, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010458 */
.global z80_ed_reti
z80_ed_reti:
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xe0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010478 */
.global z80_ed_ld_r_a
z80_ed_ld_r_a:
    str        r4, [sp, #0x3c]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x90000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201048c */
.global z80_ed_in_d_port_c
z80_ed_in_d_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r8, #0xff000000
    bic        r5, r5, #0xd7
    orr        r5, r5, #0x84
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020104b0 */
.global z80_ed_out_d_port_c
z80_ed_out_d_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020104c8 */
.global z80_ed_sbc_hl_de
z80_ed_sbc_hl_de:
    orr        r0, r8, sb, lsr #8
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       sl, sl, lr, lsl #16
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       sl, sl, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010508 */
.global z80_ed_store_de_absolute
z80_ed_store_de_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    orr        r1, r8, sb, lsr #8
    lsr        r1, r1, #0x10
    strb       r1, [r3, r0]
    lsr        r1, r1, #8
    add        r0, r0, #1
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201053c */
.global z80_ed_set_interrupt_mode_1
z80_ed_set_interrupt_mode_1:
    ldr        r0, [sp, #0x44]
    bic        r0, r0, #3
    orr        r0, r0, #1
    str        r0, [sp, #0x44]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201055c */
.global z80_ed_ld_a_i
z80_ed_ld_a_i:
    ldr        r0, [sp, #0x38]
    bic        r5, r5, #0xd7
    ldr        r1, [sp, #0x44]
    movs       r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    tst        r1, #4
    orrne      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x90000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201058c */
.global z80_ed_in_e_port_c
z80_ed_in_e_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        sb, #0xff000000
    bic        r5, r5, #0xd7
    orr        r5, r5, #0x84
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020105b0 */
.global z80_ed_out_e_port_c
z80_ed_out_e_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020105c8 */
.global z80_ed_adc_hl_de
z80_ed_adc_hl_de:
    orr        r0, r8, sb, lsr #8
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     sl, sl, #0x10000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       sl, sl, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010604 */
.global z80_ed_ld_de_from_absolute
z80_ed_ld_de_from_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    cmp        r0, #0x2000
    blge       bridge_to_z80_mapped_word_read
    ldrb       lr, [r3, r0]
    add        r0, r0, #1
    ldrb       r0, [r3, r0]
    orr        r0, lr, r0, lsl #8
    lsl        r8, r0, #0x10
    lsl        sb, r0, #0x18
    and        r8, r8, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010644 */
.global z80_ed_set_interrupt_mode_2
z80_ed_set_interrupt_mode_2:
    ldr        r0, [sp, #0x44]
    bic        r0, r0, #3
    orr        r0, r0, #2
    str        r0, [sp, #0x44]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010664 */
.global z80_ed_ld_a_r
z80_ed_ld_a_r:
    ldr        r0, [sp, #0x3c]
    bic        r5, r5, #0xd7
    ldr        r1, [sp, #0x44]
    movs       r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    tst        r1, #4
    orrne      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x90000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010694 */
.global z80_ed_in_h_port_c
z80_ed_in_h_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r1, #0xff000000
    bic        r5, r5, #0xd7
    orr        r5, r5, #0x84
    and        sl, sl, #0xff0000
    orr        sl, sl, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020106c0 */
.global z80_ed_out_h_port_c
z80_ed_out_h_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    and        r1, sl, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020106dc */
.global z80_ed_sbc_hl_hl
z80_ed_sbc_hl_hl:
    mov        r0, sl
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       sl, sl, lr, lsl #16
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       sl, sl, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201071c */
.global z80_ed_store_hl_absolute
z80_ed_store_hl_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    lsr        r1, sl, #0x10
    strb       r1, [r3, r0]
    lsr        r1, r1, #8
    add        r0, r0, #1
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201074c */
.global z80_ed_rrd
z80_ed_rrd:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    lsl        r1, r4, #4
    orr        r1, r1, r0, lsl #20
    lsr        r1, r1, #0x18
    and        r0, r0, #0xf
    and        r4, r4, #0xf0000000
    orrs       r4, r4, r0, lsl #24
    ldr        lr, .L_020107a4
    bic        r5, r5, #0xd6
    ldrb       lr, [lr, r4, lsr #24]
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orr        r5, r5, lr
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x120000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
.L_020107a4:
    .word address_0200dd20

/* 0x020107a8 */
.global z80_ed_in_l_port_c
z80_ed_in_l_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r1, #0xff000000
    bic        r5, r5, #0xd7
    orr        r5, r5, #0x84
    and        sl, sl, #0xff000000
    orr        sl, sl, r1, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020107d4 */
.global z80_ed_out_l_port_c
z80_ed_out_l_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    lsl        r1, sl, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020107f0 */
.global z80_ed_adc_hl_hl
z80_ed_adc_hl_hl:
    mov        r0, sl
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     sl, sl, #0x10000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       sl, sl, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201082c */
.global z80_ed_ld_hl_from_absolute
z80_ed_ld_hl_from_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    cmp        r0, #0x2000
    blge       bridge_to_z80_mapped_word_read
    ldrb       lr, [r3, r0]
    add        r0, r0, #1
    ldrb       r0, [r3, r0]
    orr        r0, lr, r0, lsl #8
    lsl        sl, r0, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010864 */
.global z80_ed_rld
z80_ed_rld:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    and        r1, r4, #0xf000000
    orr        r1, r1, r0, lsl #28
    lsr        r1, r1, #0x18
    lsr        r0, r0, #4
    and        r4, r4, #0xf0000000
    orrs       r4, r4, r0, lsl #24
    ldr        lr, .L_020108bc
    bic        r5, r5, #0xd6
    ldrb       lr, [lr, r4, lsr #24]
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orr        r5, r5, lr
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x120000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
.L_020108bc:
    .word address_0200dd20

/* 0x020108c0 */
.global z80_ed_in_via_hl_port_c
z80_ed_in_via_hl_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r1, #0xff000000
    bic        r5, r5, #0xd7
    orr        r5, r5, #0x84
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020108e4 */
.global z80_ed_out_via_hl_port_c
z80_ed_out_via_hl_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r1, #0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010900 */
.global z80_ed_sbc_hl_sp
z80_ed_sbc_hl_sp:
    sub        r0, ip, r3
    lsl        r0, r0, #0x10
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       sl, sl, lr, lsl #16
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       sl, sl, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010944 */
.global z80_ed_store_sp_absolute
z80_ed_store_sp_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    sub        r1, ip, r3
    strb       r1, [r3, r0]
    lsr        r1, r1, #8
    add        r0, r0, #1
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010974 */
.global z80_ed_undefined_ed_02010974
z80_ed_undefined_ed_02010974:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010984 */
.global z80_ed_in_a_port_c
z80_ed_in_a_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r4, #0xff000000
    bic        r5, r5, #0xd7
    orr        r5, r5, #0x84
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020109a8 */
.global z80_ed_out_a_port_c
z80_ed_out_a_port_c:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020109c0 */
.global z80_ed_adc_hl_sp
z80_ed_adc_hl_sp:
    sub        r0, ip, r3
    lsl        r0, r0, #0x10
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     sl, sl, #0x10000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       sl, sl, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010a00 */
.global z80_ed_ld_sp_from_absolute
z80_ed_ld_sp_from_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    cmp        r0, #0x2000
    blge       bridge_to_z80_mapped_word_read
    ldrb       lr, [r3, r0]
    add        r0, r0, #1
    ldrb       r0, [r3, r0]
    orr        r0, lr, r0, lsl #8
    add        ip, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010a38 */
.global z80_ed_ldi
z80_ed_ldi:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    add        sl, sl, #0x10000
    mov        r1, r0
    orr        r0, r8, sb, lsr #8
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    adds       sb, sb, #0x1000000
    addhs      r8, r8, #0x1000000
    bic        r5, r5, #0x16
    orr        r6, r6, r7, lsr #8
    subs       r6, r6, #0x10000
    lsl        r7, r6, #8
    and        r6, r6, #0xff000000
    orrne      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010a90 */
.global z80_ed_cpi
z80_ed_cpi:
    lsr        r0, sl, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    cmp        r4, r0, lsl #24
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    add        sl, sl, #0x10000
    orr        r6, r6, r7, lsr #8
    subs       r6, r6, #0x10000
    lsl        r7, r6, #8
    and        r6, r6, #0xff000000
    orrne      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010adc */
.global z80_ed_ini
z80_ed_ini:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r0, #0xff
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    add        sl, sl, #0x10000
    bic        r5, r5, #0x40
    orr        r5, r5, #2
    subs       r6, r6, #0x1000000
    orreq      r5, r5, #0x40
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010b1c */
.global z80_ed_outi
z80_ed_outi:
    bic        r5, r5, #0x40
    orr        r5, r5, #2
    subs       r6, r6, #0x1000000
    orreq      r5, r5, #0x40
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    mov        r1, r0
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    add        sl, sl, #0x10000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010b58 */
.global z80_ed_ldd
z80_ed_ldd:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    sub        sl, sl, #0x10000
    mov        r1, r0
    orr        r0, r8, sb, lsr #8
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    subs       sb, sb, #0x1000000
    sublo      r8, r8, #0x1000000
    bic        r5, r5, #0x16
    orr        r6, r6, r7, lsr #8
    subs       r6, r6, #0x10000
    lsl        r7, r6, #8
    and        r6, r6, #0xff000000
    orrne      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010bb0 */
.global z80_ed_cpd
z80_ed_cpd:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    cmp        r4, r0, lsl #24
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    sub        sl, sl, #0x10000
    orr        r6, r6, r7, lsr #8
    subs       r6, r6, #0x10000
    lsl        r7, r6, #8
    and        r6, r6, #0xff000000
    orrne      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010bf8 */
.global z80_ed_ind
z80_ed_ind:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r0, #0xff
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    sub        sl, sl, #0x10000
    bic        r5, r5, #0x40
    orr        r5, r5, #2
    subs       r6, r6, #0x1000000
    orreq      r5, r5, #0x40
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010c38 */
.global z80_ed_outd
z80_ed_outd:
    bic        r5, r5, #0x40
    orr        r5, r5, #2
    subs       r6, r6, #0x1000000
    orreq      r5, r5, #0x40
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    mov        r1, r0
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    sub        sl, sl, #0x10000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010c74 */
.global z80_ed_ldir
z80_ed_ldir:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    add        sl, sl, #0x10000
    mov        r1, r0
    orr        r0, r8, sb, lsr #8
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    adds       sb, sb, #0x1000000
    addhs      r8, r8, #0x1000000
    bic        r5, r5, #0x16
    orr        r6, r6, r7, lsr #8
    subs       r6, r6, #0x10000
    lsl        r7, r6, #8
    and        r6, r6, #0xff000000
    orrne      r5, r5, #4
    subne      r5, r5, #0x50000
    subne      fp, fp, #2
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010cd4 */
.global z80_ed_cpir
z80_ed_cpir:
    lsr        r0, sl, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    cmp        r4, r0, lsl #24
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    add        sl, sl, #0x10000
    orr        r6, r6, r7, lsr #8
    subs       r6, r6, #0x10000
    lsl        r7, r6, #8
    and        r6, r6, #0xff000000
    orrne      r5, r5, #4
    and        r0, r5, #0x44
    cmp        r0, #4
    subeq      r5, r5, #0x50000
    subeq      fp, fp, #2
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010d30 */
.global z80_ed_inir
z80_ed_inir:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r0, #0xff
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    add        sl, sl, #0x10000
    bic        r5, r5, #0x40
    orr        r5, r5, #2
    subs       r6, r6, #0x1000000
    orreq      r5, r5, #0x40
    subne      r5, r5, #0x50000
    subne      fp, fp, #2
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010d78 */
.global z80_ed_otir
z80_ed_otir:
    subs       r6, r6, #0x1000000
    bicne      r5, r5, #0x40
    orreq      r5, r5, #0x40
    orr        r5, r5, #2
    subne      r5, r5, #0x50000
    subne      fp, fp, #2
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    add        sl, sl, #0x10000
    mov        r1, r0
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010dbc */
.global z80_ed_lddr
z80_ed_lddr:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    sub        sl, sl, #0x10000
    mov        r1, r0
    orr        r0, r8, sb, lsr #8
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    subs       sb, sb, #0x1000000
    sublo      r8, r8, #0x1000000
    bic        r5, r5, #0x16
    orr        r6, r6, r7, lsr #8
    subs       r6, r6, #0x10000
    lsl        r7, r6, #8
    and        r6, r6, #0xff000000
    orrne      r5, r5, #4
    subne      r5, r5, #0x50000
    subne      fp, fp, #2
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010e1c */
.global z80_ed_cpdr
z80_ed_cpdr:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    cmp        r4, r0, lsl #24
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    sub        sl, sl, #0x10000
    orr        r6, r6, r7, lsr #8
    subs       r6, r6, #0x10000
    lsl        r7, r6, #8
    and        r6, r6, #0xff000000
    orrne      r5, r5, #4
    and        r0, r5, #0x44
    cmp        r0, #4
    subeq      r5, r5, #0x50000
    subeq      fp, fp, #2
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010e74 */
.global z80_ed_indr
z80_ed_indr:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    mov        r0, #0xff
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    sub        sl, sl, #0x10000
    bic        r5, r5, #0x40
    orr        r5, r5, #2
    subs       r6, r6, #0x1000000
    orreq      r5, r5, #0x40
    subne      r5, r5, #0x50000
    subne      fp, fp, #2
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010ebc */
.global z80_ed_otdr
z80_ed_otdr:
    bic        r5, r5, #0x40
    orr        r5, r5, #2
    subs       r6, r6, #0x1000000
    orreq      r5, r5, #0x40
    subne      r5, r5, #0x50000
    subne      fp, fp, #2
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    mov        r1, r0
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    sub        sl, sl, #0x10000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010f00 */
.global z80_ed_undefined_ed_02010f00
z80_ed_undefined_ed_02010f00:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
