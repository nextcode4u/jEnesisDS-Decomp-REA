/* Z80 execution and prefixed instruction handlers. 0x02013410–0x020144d0. */


/* 0x02013410 */
.global z80_ix_iy_cb_test_bit_0_indexed_memory
z80_ix_iy_cb_test_bit_0_indexed_memory:
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    orr        r5, r5, #0x10
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x1000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013444 */
.global z80_ix_iy_cb_test_bit_1_indexed_memory
z80_ix_iy_cb_test_bit_1_indexed_memory:
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    orr        r5, r5, #0x10
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x2000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013478 */
.global z80_ix_iy_cb_test_bit_2_indexed_memory
z80_ix_iy_cb_test_bit_2_indexed_memory:
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    orr        r5, r5, #0x10
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x4000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020134ac */
.global z80_ix_iy_cb_test_bit_3_indexed_memory
z80_ix_iy_cb_test_bit_3_indexed_memory:
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    orr        r5, r5, #0x10
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x8000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020134e0 */
.global z80_ix_iy_cb_test_bit_4_indexed_memory
z80_ix_iy_cb_test_bit_4_indexed_memory:
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    orr        r5, r5, #0x10
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x10000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013514 */
.global z80_ix_iy_cb_test_bit_5_indexed_memory
z80_ix_iy_cb_test_bit_5_indexed_memory:
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    orr        r5, r5, #0x10
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x20000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013548 */
.global z80_ix_iy_cb_test_bit_6_indexed_memory
z80_ix_iy_cb_test_bit_6_indexed_memory:
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    orr        r5, r5, #0x10
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x40000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201357c */
.global z80_ix_iy_cb_test_bit_7_indexed_memory
z80_ix_iy_cb_test_bit_7_indexed_memory:
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    bic        r5, r5, #0xd6
    orr        r5, r5, #0x10
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x80000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x140000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020135b0 */
.global z80_ix_iy_cb_reset_bit_0_indexed_memory_to_b
z80_ix_iy_cb_reset_bit_0_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #1
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020135ec */
.global z80_ix_iy_cb_reset_bit_0_indexed_memory_to_c
z80_ix_iy_cb_reset_bit_0_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #1
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013628 */
.global z80_ix_iy_cb_reset_bit_0_indexed_memory_to_d
z80_ix_iy_cb_reset_bit_0_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #1
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013664 */
.global z80_ix_iy_cb_reset_bit_0_indexed_memory_to_e
z80_ix_iy_cb_reset_bit_0_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #1
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020136a0 */
.global z80_ix_iy_cb_reset_bit_0_indexed_memory_to_h
z80_ix_iy_cb_reset_bit_0_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    bic        r1, r0, #1
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020136e0 */
.global z80_ix_iy_cb_reset_bit_0_indexed_memory_to_l
z80_ix_iy_cb_reset_bit_0_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    bic        r1, r0, #1
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013720 */
.global z80_ix_iy_cb_reset_bit_0_indexed_memory
z80_ix_iy_cb_reset_bit_0_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #1
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013758 */
.global z80_ix_iy_cb_reset_bit_0_indexed_memory_to_a
z80_ix_iy_cb_reset_bit_0_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #1
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013794 */
.global z80_ix_iy_cb_reset_bit_1_indexed_memory_to_b
z80_ix_iy_cb_reset_bit_1_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #2
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020137d0 */
.global z80_ix_iy_cb_reset_bit_1_indexed_memory_to_c
z80_ix_iy_cb_reset_bit_1_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #2
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201380c */
.global z80_ix_iy_cb_reset_bit_1_indexed_memory_to_d
z80_ix_iy_cb_reset_bit_1_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #2
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013848 */
.global z80_ix_iy_cb_reset_bit_1_indexed_memory_to_e
z80_ix_iy_cb_reset_bit_1_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #2
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013884 */
.global z80_ix_iy_cb_reset_bit_1_indexed_memory_to_h
z80_ix_iy_cb_reset_bit_1_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    bic        r1, r0, #2
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020138c4 */
.global z80_ix_iy_cb_reset_bit_1_indexed_memory_to_l
z80_ix_iy_cb_reset_bit_1_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    bic        r1, r0, #2
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013904 */
.global z80_ix_iy_cb_reset_bit_1_indexed_memory
z80_ix_iy_cb_reset_bit_1_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #2
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201393c */
.global z80_ix_iy_cb_reset_bit_1_indexed_memory_to_a
z80_ix_iy_cb_reset_bit_1_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #2
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013978 */
.global z80_ix_iy_cb_reset_bit_2_indexed_memory_to_b
z80_ix_iy_cb_reset_bit_2_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #4
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020139b4 */
.global z80_ix_iy_cb_reset_bit_2_indexed_memory_to_c
z80_ix_iy_cb_reset_bit_2_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #4
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020139f0 */
.global z80_ix_iy_cb_reset_bit_2_indexed_memory_to_d
z80_ix_iy_cb_reset_bit_2_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #4
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013a2c */
.global z80_ix_iy_cb_reset_bit_2_indexed_memory_to_e
z80_ix_iy_cb_reset_bit_2_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #4
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013a68 */
.global z80_ix_iy_cb_reset_bit_2_indexed_memory_to_h
z80_ix_iy_cb_reset_bit_2_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    bic        r1, r0, #4
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013aa8 */
.global z80_ix_iy_cb_reset_bit_2_indexed_memory_to_l
z80_ix_iy_cb_reset_bit_2_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    bic        r1, r0, #4
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013ae8 */
.global z80_ix_iy_cb_reset_bit_2_indexed_memory
z80_ix_iy_cb_reset_bit_2_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #4
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013b20 */
.global z80_ix_iy_cb_reset_bit_2_indexed_memory_to_a
z80_ix_iy_cb_reset_bit_2_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #4
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013b5c */
.global z80_ix_iy_cb_reset_bit_3_indexed_memory_to_b
z80_ix_iy_cb_reset_bit_3_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #8
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013b98 */
.global z80_ix_iy_cb_reset_bit_3_indexed_memory_to_c
z80_ix_iy_cb_reset_bit_3_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #8
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013bd4 */
.global z80_ix_iy_cb_reset_bit_3_indexed_memory_to_d
z80_ix_iy_cb_reset_bit_3_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #8
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013c10 */
.global z80_ix_iy_cb_reset_bit_3_indexed_memory_to_e
z80_ix_iy_cb_reset_bit_3_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #8
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013c4c */
.global z80_ix_iy_cb_reset_bit_3_indexed_memory_to_h
z80_ix_iy_cb_reset_bit_3_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    bic        r1, r0, #8
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013c8c */
.global z80_ix_iy_cb_reset_bit_3_indexed_memory_to_l
z80_ix_iy_cb_reset_bit_3_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    bic        r1, r0, #8
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013ccc */
.global z80_ix_iy_cb_reset_bit_3_indexed_memory
z80_ix_iy_cb_reset_bit_3_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #8
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013d04 */
.global z80_ix_iy_cb_reset_bit_3_indexed_memory_to_a
z80_ix_iy_cb_reset_bit_3_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #8
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013d40 */
.global z80_ix_iy_cb_reset_bit_4_indexed_memory_to_b
z80_ix_iy_cb_reset_bit_4_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x10
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013d7c */
.global z80_ix_iy_cb_reset_bit_4_indexed_memory_to_c
z80_ix_iy_cb_reset_bit_4_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x10
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013db8 */
.global z80_ix_iy_cb_reset_bit_4_indexed_memory_to_d
z80_ix_iy_cb_reset_bit_4_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x10
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013df4 */
.global z80_ix_iy_cb_reset_bit_4_indexed_memory_to_e
z80_ix_iy_cb_reset_bit_4_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x10
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013e30 */
.global z80_ix_iy_cb_reset_bit_4_indexed_memory_to_h
z80_ix_iy_cb_reset_bit_4_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    bic        r1, r0, #0x10
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013e70 */
.global z80_ix_iy_cb_reset_bit_4_indexed_memory_to_l
z80_ix_iy_cb_reset_bit_4_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    bic        r1, r0, #0x10
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013eb0 */
.global z80_ix_iy_cb_reset_bit_4_indexed_memory
z80_ix_iy_cb_reset_bit_4_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x10
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013ee8 */
.global z80_ix_iy_cb_reset_bit_4_indexed_memory_to_a
z80_ix_iy_cb_reset_bit_4_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x10
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013f24 */
.global z80_ix_iy_cb_reset_bit_5_indexed_memory_to_b
z80_ix_iy_cb_reset_bit_5_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x20
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013f60 */
.global z80_ix_iy_cb_reset_bit_5_indexed_memory_to_c
z80_ix_iy_cb_reset_bit_5_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x20
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013f9c */
.global z80_ix_iy_cb_reset_bit_5_indexed_memory_to_d
z80_ix_iy_cb_reset_bit_5_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x20
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013fd8 */
.global z80_ix_iy_cb_reset_bit_5_indexed_memory_to_e
z80_ix_iy_cb_reset_bit_5_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x20
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014014 */
.global z80_ix_iy_cb_reset_bit_5_indexed_memory_to_h
z80_ix_iy_cb_reset_bit_5_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    bic        r1, r0, #0x20
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014054 */
.global z80_ix_iy_cb_reset_bit_5_indexed_memory_to_l
z80_ix_iy_cb_reset_bit_5_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    bic        r1, r0, #0x20
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014094 */
.global z80_ix_iy_cb_reset_bit_5_indexed_memory
z80_ix_iy_cb_reset_bit_5_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x20
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020140cc */
.global z80_ix_iy_cb_reset_bit_5_indexed_memory_to_a
z80_ix_iy_cb_reset_bit_5_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x20
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014108 */
.global z80_ix_iy_cb_reset_bit_6_indexed_memory_to_b
z80_ix_iy_cb_reset_bit_6_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x40
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014144 */
.global z80_ix_iy_cb_reset_bit_6_indexed_memory_to_c
z80_ix_iy_cb_reset_bit_6_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x40
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014180 */
.global z80_ix_iy_cb_reset_bit_6_indexed_memory_to_d
z80_ix_iy_cb_reset_bit_6_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x40
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020141bc */
.global z80_ix_iy_cb_reset_bit_6_indexed_memory_to_e
z80_ix_iy_cb_reset_bit_6_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x40
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020141f8 */
.global z80_ix_iy_cb_reset_bit_6_indexed_memory_to_h
z80_ix_iy_cb_reset_bit_6_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    bic        r1, r0, #0x40
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014238 */
.global z80_ix_iy_cb_reset_bit_6_indexed_memory_to_l
z80_ix_iy_cb_reset_bit_6_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    bic        r1, r0, #0x40
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014278 */
.global z80_ix_iy_cb_reset_bit_6_indexed_memory
z80_ix_iy_cb_reset_bit_6_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x40
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020142b0 */
.global z80_ix_iy_cb_reset_bit_6_indexed_memory_to_a
z80_ix_iy_cb_reset_bit_6_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x40
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020142ec */
.global z80_ix_iy_cb_reset_bit_7_indexed_memory_to_b
z80_ix_iy_cb_reset_bit_7_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x80
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014328 */
.global z80_ix_iy_cb_reset_bit_7_indexed_memory_to_c
z80_ix_iy_cb_reset_bit_7_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x80
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014364 */
.global z80_ix_iy_cb_reset_bit_7_indexed_memory_to_d
z80_ix_iy_cb_reset_bit_7_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x80
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020143a0 */
.global z80_ix_iy_cb_reset_bit_7_indexed_memory_to_e
z80_ix_iy_cb_reset_bit_7_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x80
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020143dc */
.global z80_ix_iy_cb_reset_bit_7_indexed_memory_to_h
z80_ix_iy_cb_reset_bit_7_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    bic        r1, r0, #0x80
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201441c */
.global z80_ix_iy_cb_reset_bit_7_indexed_memory_to_l
z80_ix_iy_cb_reset_bit_7_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    bic        r1, r0, #0x80
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201445c */
.global z80_ix_iy_cb_reset_bit_7_indexed_memory
z80_ix_iy_cb_reset_bit_7_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x80
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014494 */
.global z80_ix_iy_cb_reset_bit_7_indexed_memory_to_a
z80_ix_iy_cb_reset_bit_7_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    bic        r1, r0, #0x80
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
