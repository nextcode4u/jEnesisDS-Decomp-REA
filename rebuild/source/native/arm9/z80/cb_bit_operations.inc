/* Z80 execution and prefixed instruction handlers. 0x0200ee6c–0x02010260. */


/* 0x0200ee6c */
.global z80_cb_test_bit_0_b
z80_cb_test_bit_0_b:
    bic        r5, r5, #0xd6
    ands       r1, r6, #0x1000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ee8c */
.global z80_cb_test_bit_0_c
z80_cb_test_bit_0_c:
    bic        r5, r5, #0xd6
    ands       r1, r7, #0x1000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200eeac */
.global z80_cb_test_bit_0_d
z80_cb_test_bit_0_d:
    bic        r5, r5, #0xd6
    ands       r1, r8, #0x1000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200eecc */
.global z80_cb_test_bit_0_e
z80_cb_test_bit_0_e:
    bic        r5, r5, #0xd6
    ands       r1, sb, #0x1000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200eeec */
.global z80_cb_test_bit_0_h
z80_cb_test_bit_0_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x1000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ef10 */
.global z80_cb_test_bit_0_l
z80_cb_test_bit_0_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x1000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x0200ef40 */
.global z80_cb_test_bit_1_b
z80_cb_test_bit_1_b:
    bic        r5, r5, #0xd6
    ands       r1, r6, #0x2000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ef60 */
.global z80_cb_test_bit_1_c
z80_cb_test_bit_1_c:
    bic        r5, r5, #0xd6
    ands       r1, r7, #0x2000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ef80 */
.global z80_cb_test_bit_1_d
z80_cb_test_bit_1_d:
    bic        r5, r5, #0xd6
    ands       r1, r8, #0x2000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200efa0 */
.global z80_cb_test_bit_1_e
z80_cb_test_bit_1_e:
    bic        r5, r5, #0xd6
    ands       r1, sb, #0x2000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200efc0 */
.global z80_cb_test_bit_1_h
z80_cb_test_bit_1_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x2000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200efe4 */
.global z80_cb_test_bit_1_l
z80_cb_test_bit_1_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x2000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x0200f010 */
.global z80_cb_test_bit_2_b
z80_cb_test_bit_2_b:
    bic        r5, r5, #0xd6
    ands       r1, r6, #0x4000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f030 */
.global z80_cb_test_bit_2_c
z80_cb_test_bit_2_c:
    bic        r5, r5, #0xd6
    ands       r1, r7, #0x4000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f050 */
.global z80_cb_test_bit_2_d
z80_cb_test_bit_2_d:
    bic        r5, r5, #0xd6
    ands       r1, r8, #0x4000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f070 */
.global z80_cb_test_bit_2_e
z80_cb_test_bit_2_e:
    bic        r5, r5, #0xd6
    ands       r1, sb, #0x4000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f090 */
.global z80_cb_test_bit_2_h
z80_cb_test_bit_2_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x4000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f0b4 */
.global z80_cb_test_bit_2_l
z80_cb_test_bit_2_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x4000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f0d8 */
.global z80_cb_test_bit_2_via_hl
z80_cb_test_bit_2_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x4000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f108 */
.global z80_cb_test_bit_2_a
z80_cb_test_bit_2_a:
    bic        r5, r5, #0xd6
    ands       r1, r4, #0x4000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f128 */
.global z80_cb_test_bit_3_b
z80_cb_test_bit_3_b:
    bic        r5, r5, #0xd6
    ands       r1, r6, #0x8000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f148 */
.global z80_cb_test_bit_3_c
z80_cb_test_bit_3_c:
    bic        r5, r5, #0xd6
    ands       r1, r7, #0x8000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f168 */
.global z80_cb_test_bit_3_d
z80_cb_test_bit_3_d:
    bic        r5, r5, #0xd6
    ands       r1, r8, #0x8000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f188 */
.global z80_cb_test_bit_3_e
z80_cb_test_bit_3_e:
    bic        r5, r5, #0xd6
    ands       r1, sb, #0x8000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f1a8 */
.global z80_cb_test_bit_3_h
z80_cb_test_bit_3_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x8000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f1cc */
.global z80_cb_test_bit_3_l
z80_cb_test_bit_3_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x8000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f1f0 */
.global z80_cb_test_bit_3_via_hl
z80_cb_test_bit_3_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x8000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f220 */
.global z80_cb_test_bit_3_a
z80_cb_test_bit_3_a:
    bic        r5, r5, #0xd6
    ands       r1, r4, #0x8000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f240 */
.global z80_cb_test_bit_4_b
z80_cb_test_bit_4_b:
    bic        r5, r5, #0xd6
    ands       r1, r6, #0x10000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f260 */
.global z80_cb_test_bit_4_c
z80_cb_test_bit_4_c:
    bic        r5, r5, #0xd6
    ands       r1, r7, #0x10000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f280 */
.global z80_cb_test_bit_4_d
z80_cb_test_bit_4_d:
    bic        r5, r5, #0xd6
    ands       r1, r8, #0x10000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f2a0 */
.global z80_cb_test_bit_4_e
z80_cb_test_bit_4_e:
    bic        r5, r5, #0xd6
    ands       r1, sb, #0x10000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f2c0 */
.global z80_cb_test_bit_4_h
z80_cb_test_bit_4_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x10000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f2e4 */
.global z80_cb_test_bit_4_l
z80_cb_test_bit_4_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x10000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f308 */
.global z80_cb_test_bit_4_via_hl
z80_cb_test_bit_4_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x10000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f338 */
.global z80_cb_test_bit_4_a
z80_cb_test_bit_4_a:
    bic        r5, r5, #0xd6
    ands       r1, r4, #0x10000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f358 */
.global z80_cb_test_bit_5_b
z80_cb_test_bit_5_b:
    bic        r5, r5, #0xd6
    ands       r1, r6, #0x20000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f378 */
.global z80_cb_test_bit_5_c
z80_cb_test_bit_5_c:
    bic        r5, r5, #0xd6
    ands       r1, r7, #0x20000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f398 */
.global z80_cb_test_bit_5_d
z80_cb_test_bit_5_d:
    bic        r5, r5, #0xd6
    ands       r1, r8, #0x20000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f3b8 */
.global z80_cb_test_bit_5_e
z80_cb_test_bit_5_e:
    bic        r5, r5, #0xd6
    ands       r1, sb, #0x20000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f3d8 */
.global z80_cb_test_bit_5_h
z80_cb_test_bit_5_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x20000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f3fc */
.global z80_cb_test_bit_5_l
z80_cb_test_bit_5_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x20000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f420 */
.global z80_cb_test_bit_5_via_hl
z80_cb_test_bit_5_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x20000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f450 */
.global z80_cb_test_bit_5_a
z80_cb_test_bit_5_a:
    bic        r5, r5, #0xd6
    ands       r1, r4, #0x20000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f470 */
.global z80_cb_test_bit_6_b
z80_cb_test_bit_6_b:
    bic        r5, r5, #0xd6
    ands       r1, r6, #0x40000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f490 */
.global z80_cb_test_bit_6_c
z80_cb_test_bit_6_c:
    bic        r5, r5, #0xd6
    ands       r1, r7, #0x40000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f4b0 */
.global z80_cb_test_bit_6_d
z80_cb_test_bit_6_d:
    bic        r5, r5, #0xd6
    ands       r1, r8, #0x40000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f4d0 */
.global z80_cb_test_bit_6_e
z80_cb_test_bit_6_e:
    bic        r5, r5, #0xd6
    ands       r1, sb, #0x40000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f4f0 */
.global z80_cb_test_bit_6_h
z80_cb_test_bit_6_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x40000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f514 */
.global z80_cb_test_bit_6_l
z80_cb_test_bit_6_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x40000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f538 */
.global z80_cb_test_bit_6_via_hl
z80_cb_test_bit_6_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x40000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f568 */
.global z80_cb_test_bit_6_a
z80_cb_test_bit_6_a:
    bic        r5, r5, #0xd6
    ands       r1, r4, #0x40000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f588 */
.global z80_cb_test_bit_7_b
z80_cb_test_bit_7_b:
    bic        r5, r5, #0xd6
    ands       r1, r6, #0x80000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f5a8 */
.global z80_cb_test_bit_7_c
z80_cb_test_bit_7_c:
    bic        r5, r5, #0xd6
    ands       r1, r7, #0x80000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f5c8 */
.global z80_cb_test_bit_7_d
z80_cb_test_bit_7_d:
    bic        r5, r5, #0xd6
    ands       r1, r8, #0x80000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f5e8 */
.global z80_cb_test_bit_7_e
z80_cb_test_bit_7_e:
    bic        r5, r5, #0xd6
    ands       r1, sb, #0x80000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f608 */
.global z80_cb_test_bit_7_h
z80_cb_test_bit_7_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x80000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f62c */
.global z80_cb_test_bit_7_l
z80_cb_test_bit_7_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    ands       r1, r0, #0x80000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f650 */
.global z80_cb_test_bit_7_via_hl
z80_cb_test_bit_7_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x80000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f680 */
.global z80_cb_test_bit_7_a
z80_cb_test_bit_7_a:
    bic        r5, r5, #0xd6
    ands       r1, r4, #0x80000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f6a0 */
.global z80_cb_reset_bit_0_b
z80_cb_reset_bit_0_b:
    bic        r6, r6, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f6b4 */
.global z80_cb_reset_bit_0_c
z80_cb_reset_bit_0_c:
    bic        r7, r7, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f6c8 */
.global z80_cb_reset_bit_0_d
z80_cb_reset_bit_0_d:
    bic        r8, r8, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f6dc */
.global z80_cb_reset_bit_0_e
z80_cb_reset_bit_0_e:
    bic        sb, sb, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f6f0 */
.global z80_cb_reset_bit_0_h
z80_cb_reset_bit_0_h:
    bic        sl, sl, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f704 */
.global z80_cb_reset_bit_0_l
z80_cb_reset_bit_0_l:
    bic        sl, sl, #0x10000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f718 */
.global z80_cb_reset_bit_0_via_hl
z80_cb_reset_bit_0_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r0, r0, #1
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f748 */
.global z80_cb_reset_bit_0_a
z80_cb_reset_bit_0_a:
    bic        r4, r4, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f75c */
.global z80_cb_reset_bit_1_b
z80_cb_reset_bit_1_b:
    bic        r6, r6, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f770 */
.global z80_cb_reset_bit_1_c
z80_cb_reset_bit_1_c:
    bic        r7, r7, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f784 */
.global z80_cb_reset_bit_1_d
z80_cb_reset_bit_1_d:
    bic        r8, r8, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f798 */
.global z80_cb_reset_bit_1_e
z80_cb_reset_bit_1_e:
    bic        sb, sb, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f7ac */
.global z80_cb_reset_bit_1_h
z80_cb_reset_bit_1_h:
    bic        sl, sl, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f7c0 */
.global z80_cb_reset_bit_1_l
z80_cb_reset_bit_1_l:
    bic        sl, sl, #0x20000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f7d4 */
.global z80_cb_reset_bit_1_via_hl
z80_cb_reset_bit_1_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r0, r0, #2
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f804 */
.global z80_cb_reset_bit_1_a
z80_cb_reset_bit_1_a:
    bic        r4, r4, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f818 */
.global z80_cb_reset_bit_2_b
z80_cb_reset_bit_2_b:
    bic        r6, r6, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f82c */
.global z80_cb_reset_bit_2_c
z80_cb_reset_bit_2_c:
    bic        r7, r7, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f840 */
.global z80_cb_reset_bit_2_d
z80_cb_reset_bit_2_d:
    bic        r8, r8, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f854 */
.global z80_cb_reset_bit_2_e
z80_cb_reset_bit_2_e:
    bic        sb, sb, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f868 */
.global z80_cb_reset_bit_2_h
z80_cb_reset_bit_2_h:
    bic        sl, sl, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f87c */
.global z80_cb_reset_bit_2_l
z80_cb_reset_bit_2_l:
    bic        sl, sl, #0x40000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f890 */
.global z80_cb_reset_bit_2_via_hl
z80_cb_reset_bit_2_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r0, r0, #4
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f8c0 */
.global z80_cb_reset_bit_2_a
z80_cb_reset_bit_2_a:
    bic        r4, r4, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f8d4 */
.global z80_cb_reset_bit_3_b
z80_cb_reset_bit_3_b:
    bic        r6, r6, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f8e8 */
.global z80_cb_reset_bit_3_c
z80_cb_reset_bit_3_c:
    bic        r7, r7, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f8fc */
.global z80_cb_reset_bit_3_d
z80_cb_reset_bit_3_d:
    bic        r8, r8, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f910 */
.global z80_cb_reset_bit_3_e
z80_cb_reset_bit_3_e:
    bic        sb, sb, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f924 */
.global z80_cb_reset_bit_3_h
z80_cb_reset_bit_3_h:
    bic        sl, sl, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f938 */
.global z80_cb_reset_bit_3_l
z80_cb_reset_bit_3_l:
    bic        sl, sl, #0x80000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f94c */
.global z80_cb_reset_bit_3_via_hl
z80_cb_reset_bit_3_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r0, r0, #8
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f97c */
.global z80_cb_reset_bit_3_a
z80_cb_reset_bit_3_a:
    bic        r4, r4, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f990 */
.global z80_cb_reset_bit_4_b
z80_cb_reset_bit_4_b:
    bic        r6, r6, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f9a4 */
.global z80_cb_reset_bit_4_c
z80_cb_reset_bit_4_c:
    bic        r7, r7, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f9b8 */
.global z80_cb_reset_bit_4_d
z80_cb_reset_bit_4_d:
    bic        r8, r8, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f9cc */
.global z80_cb_reset_bit_4_e
z80_cb_reset_bit_4_e:
    bic        sb, sb, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f9e0 */
.global z80_cb_reset_bit_4_h
z80_cb_reset_bit_4_h:
    bic        sl, sl, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200f9f4 */
.global z80_cb_reset_bit_4_l
z80_cb_reset_bit_4_l:
    bic        sl, sl, #0x100000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fa08 */
.global z80_cb_reset_bit_4_via_hl
z80_cb_reset_bit_4_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r0, r0, #0x10
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fa38 */
.global z80_cb_reset_bit_4_a
z80_cb_reset_bit_4_a:
    bic        r4, r4, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fa4c */
.global z80_cb_reset_bit_5_b
z80_cb_reset_bit_5_b:
    bic        r6, r6, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fa60 */
.global z80_cb_reset_bit_5_c
z80_cb_reset_bit_5_c:
    bic        r7, r7, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fa74 */
.global z80_cb_reset_bit_5_d
z80_cb_reset_bit_5_d:
    bic        r8, r8, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fa88 */
.global z80_cb_reset_bit_5_e
z80_cb_reset_bit_5_e:
    bic        sb, sb, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fa9c */
.global z80_cb_reset_bit_5_h
z80_cb_reset_bit_5_h:
    bic        sl, sl, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fab0 */
.global z80_cb_reset_bit_5_l
z80_cb_reset_bit_5_l:
    bic        sl, sl, #0x200000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fac4 */
.global z80_cb_reset_bit_5_via_hl
z80_cb_reset_bit_5_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r0, r0, #0x20
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200faf4 */
.global z80_cb_reset_bit_5_a
z80_cb_reset_bit_5_a:
    bic        r4, r4, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fb08 */
.global z80_cb_reset_bit_6_b
z80_cb_reset_bit_6_b:
    bic        r6, r6, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fb1c */
.global z80_cb_reset_bit_6_c
z80_cb_reset_bit_6_c:
    bic        r7, r7, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fb30 */
.global z80_cb_reset_bit_6_d
z80_cb_reset_bit_6_d:
    bic        r8, r8, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fb44 */
.global z80_cb_reset_bit_6_e
z80_cb_reset_bit_6_e:
    bic        sb, sb, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fb58 */
.global z80_cb_reset_bit_6_h
z80_cb_reset_bit_6_h:
    bic        sl, sl, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fb6c */
.global z80_cb_reset_bit_6_l
z80_cb_reset_bit_6_l:
    bic        sl, sl, #0x400000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fb80 */
.global z80_cb_reset_bit_6_via_hl
z80_cb_reset_bit_6_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r0, r0, #0x40
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fbb0 */
.global z80_cb_reset_bit_6_a
z80_cb_reset_bit_6_a:
    bic        r4, r4, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fbc4 */
.global z80_cb_reset_bit_7_b
z80_cb_reset_bit_7_b:
    bic        r6, r6, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fbd8 */
.global z80_cb_reset_bit_7_c
z80_cb_reset_bit_7_c:
    bic        r7, r7, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fbec */
.global z80_cb_reset_bit_7_d
z80_cb_reset_bit_7_d:
    bic        r8, r8, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fc00 */
.global z80_cb_reset_bit_7_e
z80_cb_reset_bit_7_e:
    bic        sb, sb, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fc14 */
.global z80_cb_reset_bit_7_h
z80_cb_reset_bit_7_h:
    bic        sl, sl, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fc28 */
.global z80_cb_reset_bit_7_l
z80_cb_reset_bit_7_l:
    bic        sl, sl, #0x800000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fc3c */
.global z80_cb_reset_bit_7_via_hl
z80_cb_reset_bit_7_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r0, r0, #0x80
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fc6c */
.global z80_cb_reset_bit_7_a
z80_cb_reset_bit_7_a:
    bic        r4, r4, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fc80 */
.global z80_cb_set_bit_0_b
z80_cb_set_bit_0_b:
    orr        r6, r6, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fc94 */
.global z80_cb_set_bit_0_c
z80_cb_set_bit_0_c:
    orr        r7, r7, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fca8 */
.global z80_cb_set_bit_0_d
z80_cb_set_bit_0_d:
    orr        r8, r8, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fcbc */
.global z80_cb_set_bit_0_e
z80_cb_set_bit_0_e:
    orr        sb, sb, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fcd0 */
.global z80_cb_set_bit_0_h
z80_cb_set_bit_0_h:
    orr        sl, sl, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fce4 */
.global z80_cb_set_bit_0_l
z80_cb_set_bit_0_l:
    orr        sl, sl, #0x10000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fcf8 */
.global z80_cb_set_bit_0_via_hl
z80_cb_set_bit_0_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    orr        r0, r0, #1
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fd28 */
.global z80_cb_set_bit_0_a
z80_cb_set_bit_0_a:
    orr        r4, r4, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fd3c */
.global z80_cb_set_bit_1_b
z80_cb_set_bit_1_b:
    orr        r6, r6, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fd50 */
.global z80_cb_set_bit_1_c
z80_cb_set_bit_1_c:
    orr        r7, r7, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fd64 */
.global z80_cb_set_bit_1_d
z80_cb_set_bit_1_d:
    orr        r8, r8, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fd78 */
.global z80_cb_set_bit_1_e
z80_cb_set_bit_1_e:
    orr        sb, sb, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fd8c */
.global z80_cb_set_bit_1_h
z80_cb_set_bit_1_h:
    orr        sl, sl, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fda0 */
.global z80_cb_set_bit_1_l
z80_cb_set_bit_1_l:
    orr        sl, sl, #0x20000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fdb4 */
.global z80_cb_set_bit_1_via_hl
z80_cb_set_bit_1_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    orr        r0, r0, #2
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fde4 */
.global z80_cb_set_bit_1_a
z80_cb_set_bit_1_a:
    orr        r4, r4, #0x2000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fdf8 */
.global z80_cb_set_bit_2_b
z80_cb_set_bit_2_b:
    orr        r6, r6, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fe0c */
.global z80_cb_set_bit_2_c
z80_cb_set_bit_2_c:
    orr        r7, r7, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fe20 */
.global z80_cb_set_bit_2_d
z80_cb_set_bit_2_d:
    orr        r8, r8, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fe34 */
.global z80_cb_set_bit_2_e
z80_cb_set_bit_2_e:
    orr        sb, sb, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fe48 */
.global z80_cb_set_bit_2_h
z80_cb_set_bit_2_h:
    orr        sl, sl, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fe5c */
.global z80_cb_set_bit_2_l
z80_cb_set_bit_2_l:
    orr        sl, sl, #0x40000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fe70 */
.global z80_cb_set_bit_2_via_hl
z80_cb_set_bit_2_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    orr        r0, r0, #4
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fea0 */
.global z80_cb_set_bit_2_a
z80_cb_set_bit_2_a:
    orr        r4, r4, #0x4000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200feb4 */
.global z80_cb_set_bit_3_b
z80_cb_set_bit_3_b:
    orr        r6, r6, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fec8 */
.global z80_cb_set_bit_3_c
z80_cb_set_bit_3_c:
    orr        r7, r7, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fedc */
.global z80_cb_set_bit_3_d
z80_cb_set_bit_3_d:
    orr        r8, r8, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200fef0 */
.global z80_cb_set_bit_3_e
z80_cb_set_bit_3_e:
    orr        sb, sb, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ff04 */
.global z80_cb_set_bit_3_h
z80_cb_set_bit_3_h:
    orr        sl, sl, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ff18 */
.global z80_cb_set_bit_3_l
z80_cb_set_bit_3_l:
    orr        sl, sl, #0x80000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ff2c */
.global z80_cb_set_bit_3_via_hl
z80_cb_set_bit_3_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    orr        r0, r0, #8
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ff5c */
.global z80_cb_set_bit_3_a
z80_cb_set_bit_3_a:
    orr        r4, r4, #0x8000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ff70 */
.global z80_cb_set_bit_4_b
z80_cb_set_bit_4_b:
    orr        r6, r6, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ff84 */
.global z80_cb_set_bit_4_c
z80_cb_set_bit_4_c:
    orr        r7, r7, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ff98 */
.global z80_cb_set_bit_4_d
z80_cb_set_bit_4_d:
    orr        r8, r8, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ffac */
.global z80_cb_set_bit_4_e
z80_cb_set_bit_4_e:
    orr        sb, sb, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ffc0 */
.global z80_cb_set_bit_4_h
z80_cb_set_bit_4_h:
    orr        sl, sl, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ffd4 */
.global z80_cb_set_bit_4_l
z80_cb_set_bit_4_l:
    orr        sl, sl, #0x100000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ffe8 */
.global z80_cb_set_bit_4_via_hl
z80_cb_set_bit_4_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    orr        r0, r0, #0x10
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010018 */
.global z80_cb_set_bit_4_a
z80_cb_set_bit_4_a:
    orr        r4, r4, #0x10000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201002c */
.global z80_cb_set_bit_5_b
z80_cb_set_bit_5_b:
    orr        r6, r6, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010040 */
.global z80_cb_set_bit_5_c
z80_cb_set_bit_5_c:
    orr        r7, r7, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010054 */
.global z80_cb_set_bit_5_d
z80_cb_set_bit_5_d:
    orr        r8, r8, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010068 */
.global z80_cb_set_bit_5_e
z80_cb_set_bit_5_e:
    orr        sb, sb, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201007c */
.global z80_cb_set_bit_5_h
z80_cb_set_bit_5_h:
    orr        sl, sl, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010090 */
.global z80_cb_set_bit_5_l
z80_cb_set_bit_5_l:
    orr        sl, sl, #0x200000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020100a4 */
.global z80_cb_set_bit_5_via_hl
z80_cb_set_bit_5_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    orr        r0, r0, #0x20
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020100d4 */
.global z80_cb_set_bit_5_a
z80_cb_set_bit_5_a:
    orr        r4, r4, #0x20000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020100e8 */
.global z80_cb_set_bit_6_b
z80_cb_set_bit_6_b:
    orr        r6, r6, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020100fc */
.global z80_cb_set_bit_6_c
z80_cb_set_bit_6_c:
    orr        r7, r7, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010110 */
.global z80_cb_set_bit_6_d
z80_cb_set_bit_6_d:
    orr        r8, r8, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010124 */
.global z80_cb_set_bit_6_e
z80_cb_set_bit_6_e:
    orr        sb, sb, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010138 */
.global z80_cb_set_bit_6_h
z80_cb_set_bit_6_h:
    orr        sl, sl, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201014c */
.global z80_cb_set_bit_6_l
z80_cb_set_bit_6_l:
    orr        sl, sl, #0x400000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010160 */
.global z80_cb_set_bit_6_via_hl
z80_cb_set_bit_6_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    orr        r0, r0, #0x40
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010190 */
.global z80_cb_set_bit_6_a
z80_cb_set_bit_6_a:
    orr        r4, r4, #0x40000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020101a4 */
.global z80_cb_set_bit_7_b
z80_cb_set_bit_7_b:
    orr        r6, r6, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020101b8 */
.global z80_cb_set_bit_7_c
z80_cb_set_bit_7_c:
    orr        r7, r7, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020101cc */
.global z80_cb_set_bit_7_d
z80_cb_set_bit_7_d:
    orr        r8, r8, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020101e0 */
.global z80_cb_set_bit_7_e
z80_cb_set_bit_7_e:
    orr        sb, sb, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020101f4 */
.global z80_cb_set_bit_7_h
z80_cb_set_bit_7_h:
    orr        sl, sl, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02010208 */
.global z80_cb_set_bit_7_l
z80_cb_set_bit_7_l:
    orr        sl, sl, #0x800000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201021c */
.global z80_cb_set_bit_7_via_hl
z80_cb_set_bit_7_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    orr        r0, r0, #0x80
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201024c */
.global z80_cb_set_bit_7_a
z80_cb_set_bit_7_a:
    orr        r4, r4, #0x80000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
