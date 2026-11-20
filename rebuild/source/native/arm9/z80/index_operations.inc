/* Z80 execution and prefixed instruction handlers. 0x02010f10–0x02011d3c. */


/* 0x02010f10 */
.global z80_ix_iy_add_ix_or_iy_bc
z80_ix_iy_add_ix_or_iy_bc:
    orr        r1, r6, r7, lsr #8
    adds       r0, r0, r1
    bic        r5, r5, #0x13
    orrhs      r5, r5, #1
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010f34 */
.global z80_ix_iy_add_ix_or_iy_de
z80_ix_iy_add_ix_or_iy_de:
    orr        r1, r8, sb, lsr #8
    adds       r0, r0, r1
    bic        r5, r5, #0x13
    orrhs      r5, r5, #1
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010f58 */
.global z80_ix_iy_ld_ix_or_iy_imm16
z80_ix_iy_ld_ix_or_iy_imm16:
    ldrb       r0, [fp], #1
    ldrb       r1, [fp], #1
    orr        r0, r0, r1, lsl #8
    lsl        r0, r0, #0x10
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xe0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010f7c */
.global z80_ix_iy_store_ix_or_iy_absolute
z80_ix_iy_store_ix_or_iy_absolute:
    lsr        r1, r0, #0x10
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    strb       r1, [r3, r0]
    lsr        r1, r1, #8
    add        r0, r0, #1
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010fac */
.global z80_ix_iy_inc_ix_or_iy
z80_ix_iy_inc_ix_or_iy:
    add        r0, r0, #0x10000
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010fc4 */
.global z80_ix_iy_inc_index_high
z80_ix_iy_inc_index_high:
    and        r1, r0, #0xff000000
    bic        r5, r5, #0xd6
    adds       r1, r1, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    and        r0, r0, #0xff0000
    orr        r0, r0, r1
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010ff8 */
.global z80_ix_iy_dec_index_high
z80_ix_iy_dec_index_high:
    and        r1, r0, #0xff000000
    bic        r5, r5, #0xd6
    subs       r1, r1, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    and        r0, r0, #0xff0000
    orr        r0, r0, r1
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011030 */
.global z80_ix_iy_ld_index_high_imm8
z80_ix_iy_ld_index_high_imm8:
    ldrb       r1, [fp], #1
    and        r0, r0, #0xff0000
    orr        r0, r0, r1, lsl #24
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011050 */
.global z80_ix_iy_add_ix_or_iy_ix_or_iy
z80_ix_iy_add_ix_or_iy_ix_or_iy:
    mov        r1, r0
    adds       r0, r0, r1
    bic        r5, r5, #0x13
    orrhs      r5, r5, #1
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011074 */
.global z80_ix_iy_load_ix_or_iy_absolute
z80_ix_iy_load_ix_or_iy_absolute:
    ldrb       r0, [fp], #1
    ldrb       r1, [fp], #1
    orr        r0, r0, r1, lsl #8
    str        lr, [sp, #0x64]
    cmp        r0, #0x2000
    blge       bridge_to_z80_mapped_word_read
    add        r0, r3, r0
    ldrb       r1, [r0], #1
    ldrb       r0, [r0]
    orr        r0, r1, r0, lsl #8
    ldr        lr, [sp, #0x64]
    lsl        r0, r0, #0x10
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020110b8 */
.global z80_ix_iy_dec_ix_or_iy
z80_ix_iy_dec_ix_or_iy:
    sub        r0, r0, #0x10000
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020110d0 */
.global z80_ix_iy_inc_index_low
z80_ix_iy_inc_index_low:
    lsl        r1, r0, #8
    bic        r5, r5, #0xd6
    adds       r1, r1, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    and        r0, r0, #0xff000000
    orr        r0, r0, r1, lsr #8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011104 */
.global z80_ix_iy_dec_index_low
z80_ix_iy_dec_index_low:
    lsl        r1, r0, #8
    bic        r5, r5, #0xd6
    subs       r1, r1, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    and        r0, r0, #0xff000000
    orr        r0, r0, r1, lsr #8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201113c */
.global z80_ix_iy_ld_index_low_imm8
z80_ix_iy_ld_index_low_imm8:
    ldrb       r1, [fp], #1
    and        r0, r0, #0xff000000
    orr        r0, r0, r1, lsl #16
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201115c */
.global z80_ix_iy_inc_indexed_memory
z80_ix_iy_inc_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    orr        r1, r0, r1, lsl #16
    lsr        r0, r1, #0x10
    lsl        r1, r1, #0x18
    bic        r5, r5, #0xd6
    adds       r1, r1, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    lsr        r1, r1, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020111b8 */
.global z80_ix_iy_dec_indexed_memory
z80_ix_iy_dec_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    orr        r1, r0, r1, lsl #16
    lsr        r0, r1, #0x10
    lsl        r1, r1, #0x18
    bic        r5, r5, #0xd6
    subs       r1, r1, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    lsr        r1, r1, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011218 */
.global z80_ix_iy_ld_indexed_memory_imm8
z80_ix_iy_ld_indexed_memory_imm8:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    ldrb       r1, [fp], #1
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011244 */
.global z80_ix_iy_add_ix_or_iy_sp
z80_ix_iy_add_ix_or_iy_sp:
    sub        r1, ip, r3
    lsl        r1, r1, #0x10
    adds       r0, r0, r1
    bic        r5, r5, #0x13
    orrhs      r5, r5, #1
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201126c */
.global z80_ix_iy_ld_b_from_index_high
z80_ix_iy_ld_b_from_index_high:
    and        r6, r0, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011280 */
.global z80_ix_iy_ld_b_from_index_low
z80_ix_iy_ld_b_from_index_low:
    lsl        r6, r0, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011294 */
.global z80_ix_iy_ld_b_from_indexed_memory
z80_ix_iy_ld_b_from_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r6, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020112c0 */
.global z80_ix_iy_ld_c_from_index_high
z80_ix_iy_ld_c_from_index_high:
    and        r7, r0, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020112d4 */
.global z80_ix_iy_ld_c_from_index_low
z80_ix_iy_ld_c_from_index_low:
    lsl        r7, r0, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020112e8 */
.global z80_ix_iy_ld_c_from_indexed_memory
z80_ix_iy_ld_c_from_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r7, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011314 */
.global z80_ix_iy_ld_d_from_index_high
z80_ix_iy_ld_d_from_index_high:
    and        r8, r0, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011328 */
.global z80_ix_iy_ld_d_from_index_low
z80_ix_iy_ld_d_from_index_low:
    lsl        r8, r0, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201133c */
.global z80_ix_iy_ld_d_from_indexed_memory
z80_ix_iy_ld_d_from_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r8, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011368 */
.global z80_ix_iy_ld_e_from_index_high
z80_ix_iy_ld_e_from_index_high:
    and        sb, r0, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201137c */
.global z80_ix_iy_ld_e_from_index_low
z80_ix_iy_ld_e_from_index_low:
    lsl        sb, r0, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011390 */
.global z80_ix_iy_ld_e_from_indexed_memory
z80_ix_iy_ld_e_from_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        sb, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020113bc */
.global z80_ix_iy_ld_index_high_from_b
z80_ix_iy_ld_index_high_from_b:
    and        r0, r0, #0xff0000
    orr        r0, r0, r6
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020113d8 */
.global z80_ix_iy_ld_index_high_from_c
z80_ix_iy_ld_index_high_from_c:
    and        r0, r0, #0xff0000
    orr        r0, r0, r7
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020113f4 */
.global z80_ix_iy_ld_index_high_from_d
z80_ix_iy_ld_index_high_from_d:
    and        r0, r0, #0xff0000
    orr        r0, r0, r8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011410 */
.global z80_ix_iy_ld_index_high_from_e
z80_ix_iy_ld_index_high_from_e:
    and        r0, r0, #0xff0000
    orr        r0, r0, sb
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201142c */
.global z80_ix_iy_ld_index_high_from_index_high
z80_ix_iy_ld_index_high_from_index_high:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201143c */
.global z80_ix_iy_ld_index_high_from_index_low
z80_ix_iy_ld_index_high_from_index_low:
    and        r0, r0, #0xff0000
    orr        r0, r0, r0, lsl #8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011458 */
.global z80_ix_iy_ld_h_from_indexed_memory
z80_ix_iy_ld_h_from_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011488 */
.global z80_ix_iy_ld_index_high_from_a
z80_ix_iy_ld_index_high_from_a:
    and        r0, r0, #0xff0000
    orr        r0, r0, r4
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020114a4 */
.global z80_ix_iy_ld_index_low_from_b
z80_ix_iy_ld_index_low_from_b:
    and        r0, r0, #0xff000000
    orr        r0, r0, r6, lsr #8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020114c0 */
.global z80_ix_iy_ld_index_low_from_c
z80_ix_iy_ld_index_low_from_c:
    and        r0, r0, #0xff000000
    orr        r0, r0, r7, lsr #8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020114dc */
.global z80_ix_iy_ld_index_low_from_d
z80_ix_iy_ld_index_low_from_d:
    and        r0, r0, #0xff000000
    orr        r0, r0, r8, lsr #8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020114f8 */
.global z80_ix_iy_ld_index_low_from_e
z80_ix_iy_ld_index_low_from_e:
    and        r0, r0, #0xff000000
    orr        r0, r0, sb, lsr #8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011514 */
.global z80_ix_iy_ld_index_low_from_index_high
z80_ix_iy_ld_index_low_from_index_high:
    and        r0, r0, #0xff000000
    orr        r0, r0, r0, lsr #8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011530 */
.global z80_ix_iy_ld_index_low_from_index_low
z80_ix_iy_ld_index_low_from_index_low:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011540 */
.global z80_ix_iy_ld_l_from_indexed_memory
z80_ix_iy_ld_l_from_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011570 */
.global z80_ix_iy_ld_index_low_from_a
z80_ix_iy_ld_index_low_from_a:
    and        r0, r0, #0xff000000
    orr        r0, r0, r4, lsr #8
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201158c */
.global z80_ix_iy_ld_indexed_memory_from_b
z80_ix_iy_ld_indexed_memory_from_b:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    lsr        r1, r6, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020115b8 */
.global z80_ix_iy_ld_indexed_memory_from_c
z80_ix_iy_ld_indexed_memory_from_c:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    lsr        r1, r7, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020115e4 */
.global z80_ix_iy_ld_indexed_memory_from_d
z80_ix_iy_ld_indexed_memory_from_d:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    lsr        r1, r8, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011610 */
.global z80_ix_iy_ld_indexed_memory_from_e
z80_ix_iy_ld_indexed_memory_from_e:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    lsr        r1, sb, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201163c */
.global z80_ix_iy_ld_indexed_memory_from_h
z80_ix_iy_ld_indexed_memory_from_h:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    lsr        r1, sl, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011668 */
.global z80_ix_iy_ld_indexed_memory_from_l
z80_ix_iy_ld_indexed_memory_from_l:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    and        r1, sl, #0xff0000
    lsr        r1, r1, #0x10
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011698 */
.global z80_ix_iy_ld_indexed_memory_from_a
z80_ix_iy_ld_indexed_memory_from_a:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    lsr        r1, r4, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020116c4 */
.global z80_ix_iy_ld_a_from_index_high
z80_ix_iy_ld_a_from_index_high:
    and        r4, r0, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020116d8 */
.global z80_ix_iy_ld_a_from_index_low
z80_ix_iy_ld_a_from_index_low:
    lsl        r4, r0, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020116ec */
.global z80_ix_iy_ld_a_from_indexed_memory
z80_ix_iy_ld_a_from_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r4, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011718 */
.global z80_ix_iy_add_a_index_high
z80_ix_iy_add_a_index_high:
    and        r0, r0, #0xff000000
    bic        r5, r5, #0xd7
    adds       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011744 */
.global z80_ix_iy_add_a_index_low
z80_ix_iy_add_a_index_low:
    lsl        r0, r0, #8
    bic        r5, r5, #0xd7
    adds       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011770 */
.global z80_ix_iy_add_a_indexed_memory
z80_ix_iy_add_a_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd7
    adds       r4, r4, r0, lsl #24
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020117b0 */
.global z80_ix_iy_adc_a_index_high
z80_ix_iy_adc_a_index_high:
    and        r0, r0, #0xff000000
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     r4, r4, #0x1000000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020117ec */
.global z80_ix_iy_adc_a_index_low
z80_ix_iy_adc_a_index_low:
    lsl        r0, r0, #8
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     r4, r4, #0x1000000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011828 */
.global z80_ix_iy_adc_a_indexed_memory
z80_ix_iy_adc_a_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r0, r0, #0x18
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     r4, r4, #0x1000000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201187c */
.global z80_ix_iy_sub_a_index_high
z80_ix_iy_sub_a_index_high:
    and        r0, r0, #0xff000000
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

/* 0x020118ac */
.global z80_ix_iy_sub_a_index_low
z80_ix_iy_sub_a_index_low:
    lsl        r0, r0, #8
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

/* 0x020118dc */
.global z80_ix_iy_sub_a_indexed_memory
z80_ix_iy_sub_a_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r0, lsl #24
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011920 */
.global z80_ix_iy_sbc_a_index_high
z80_ix_iy_sbc_a_index_high:
    and        r0, r0, #0xff000000
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, lr, lsl #24
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011960 */
.global z80_ix_iy_sbc_a_index_low
z80_ix_iy_sbc_a_index_low:
    lsl        r0, r0, #8
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, lr, lsl #24
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020119a0 */
.global z80_ix_iy_sbc_a_indexed_memory
z80_ix_iy_sbc_a_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r0, r0, #0x18
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, lr, lsl #24
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020119f8 */
.global z80_ix_iy_and_a_index_high
z80_ix_iy_and_a_index_high:
    and        r0, r0, #0xff000000
    ldr        r1, .L_02011b9c
    and        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011a20 */
.global z80_ix_iy_and_a_index_low
z80_ix_iy_and_a_index_low:
    lsl        r0, r0, #8
    ldr        r1, .L_02011b9c
    and        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011a48 */
.global z80_ix_iy_and_a_indexed_memory
z80_ix_iy_and_a_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    ldr        r1, .L_02011b9c
    and        r4, r4, r0, lsl #24
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011a84 */
.global z80_ix_iy_xor_a_index_high
z80_ix_iy_xor_a_index_high:
    and        r0, r0, #0xff000000
    ldr        r1, .L_02011b9c
    eor        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011aac */
.global z80_ix_iy_xor_a_index_low
z80_ix_iy_xor_a_index_low:
    lsl        r0, r0, #8
    ldr        r1, .L_02011b9c
    eor        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011ad4 */
.global z80_ix_iy_xor_a_indexed_memory
z80_ix_iy_xor_a_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    ldr        r1, .L_02011b9c
    eor        r4, r4, r0, lsl #24
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011b10 */
.global z80_ix_iy_or_a_index_high
z80_ix_iy_or_a_index_high:
    and        r0, r0, #0xff000000
    ldr        r1, .L_02011b9c
    orr        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011b38 */
.global z80_ix_iy_or_a_index_low
z80_ix_iy_or_a_index_low:
    lsl        r0, r0, #8
    ldr        r1, .L_02011b9c
    orr        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011b60 */
.global z80_ix_iy_or_a_indexed_memory
z80_ix_iy_or_a_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    ldr        r1, .L_02011b9c
    orr        r4, r4, r0, lsl #24
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
.L_02011b9c:
    .word address_0200de20

/* 0x02011ba0 */
.global z80_ix_iy_cp_a_index_high
z80_ix_iy_cp_a_index_high:
    and        r0, r0, #0xff000000
    cmp        r4, r0
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011bd0 */
.global z80_ix_iy_cp_a_index_low
z80_ix_iy_cp_a_index_low:
    lsl        r0, r0, #8
    cmp        r4, r0
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011c00 */
.global z80_ix_iy_cp_a_indexed_memory
z80_ix_iy_cp_a_indexed_memory:
    ldrsb      r1, [fp], #1
    add        r0, r0, r1, lsl #16
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r0, r0, #0x18
    cmp        r4, r0
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011c48 */
.global dispatch_indexed_cb_with_displacement
dispatch_indexed_cb_with_displacement:
    ldrsb      r1, [fp], #1
    add        lr, r2, #0x1000
    add        r0, r0, r1, lsl #16
    ldrb       r1, [fp], #1
    lsr        r0, r0, #0x10
    ldr        pc, [lr, r1, lsl #2]

/* 0x02011c60 */
.global z80_ix_iy_pop_ix_or_iy
z80_ix_iy_pop_ix_or_iy:
    ldrb       r1, [ip], #1
    ldrb       r0, [ip], #1
    orr        r0, r1, r0, lsl #8
    lsl        r0, r0, #0x10
    str        r0, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xe0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011c84 */
.global z80_ix_iy_exchange_stack_ix_or_iy
z80_ix_iy_exchange_stack_ix_or_iy:
    ldrb       r1, [ip]
    lsr        r0, r0, #0x10
    strb       r0, [ip]
    ldrb       r2, [ip, #1]
    lsr        r0, r0, #8
    strb       r0, [ip, #1]
    orr        r1, r1, r2, lsl #8
    lsl        r1, r1, #0x10
    ldr        r2, [sp, #0x94]
    str        r1, [lr]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011cbc */
.global z80_ix_iy_push_ix_or_iy
z80_ix_iy_push_ix_or_iy:
    lsr        r0, r0, #0x10
    lsr        r1, r0, #8
    strb       r1, [ip, #-1]!
    strb       r0, [ip, #-1]!
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011cdc */
.global z80_ix_iy_jp_via_ix_or_iy
z80_ix_iy_jp_via_ix_or_iy:
    add        fp, r3, r0, lsr #16
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011cf0 */
.global z80_ix_iy_ld_sp_ix_or_iy
z80_ix_iy_ld_sp_ix_or_iy:
    add        ip, r3, r0, lsr #16
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011d04 */
.global z80_ix_iy_dispatch_dd
z80_ix_iy_dispatch_dd:
    sub        fp, fp, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011d18 */
.global z80_ix_iy_exchange_de_hl
z80_ix_iy_exchange_de_hl:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011d28 */
.global resume_base_decode_after_unused_index_prefix
resume_base_decode_after_unused_index_prefix:
    sub        fp, fp, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
