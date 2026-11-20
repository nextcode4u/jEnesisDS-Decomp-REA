/* ARM9 tightly coupled instruction memory code. 0x01001290–0x01001fe0. */


/* 0x01001290 */
.global z80_add_a_b
z80_add_a_b:
    bic        r5, r5, #0xd7
    adds       r4, r4, r6
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010012c0 */
.global z80_add_a_c
z80_add_a_c:
    bic        r5, r5, #0xd7
    adds       r4, r4, r7
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010012f0 */
.global z80_add_a_d
z80_add_a_d:
    bic        r5, r5, #0xd7
    adds       r4, r4, r8
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001320 */
.global z80_add_a_e
z80_add_a_e:
    bic        r5, r5, #0xd7
    adds       r4, r4, sb
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001350 */
.global z80_add_a_h
z80_add_a_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd7
    adds       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001380 */
.global z80_add_a_l
z80_add_a_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd7
    adds       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010013b0 */
.global z80_add_a_via_hl
z80_add_a_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd7
    adds       r4, r4, r0, lsl #24
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010013f0 */
.global z80_add_a_a
z80_add_a_a:
    bic        r5, r5, #0xd7
    adds       r4, r4, r4
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001420 */
.global z80_adc_a_b
z80_adc_a_b:
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     r4, r4, #0x1000000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       r4, r4, r6
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001460 */
.global z80_adc_a_c
z80_adc_a_c:
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     r4, r4, #0x1000000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       r4, r4, r7
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010014a0 */
.global z80_adc_a_d
z80_adc_a_d:
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     r4, r4, #0x1000000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       r4, r4, r8
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010014e0 */
.global z80_adc_a_e
z80_adc_a_e:
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     r4, r4, #0x1000000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       r4, r4, sb
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001520 */
.global z80_adc_a_h
z80_adc_a_h:
    and        r0, sl, #0xff000000
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
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001560 */
.global z80_adc_a_l
z80_adc_a_l:
    lsl        r0, sl, #8
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
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010015a0 */
.global z80_adc_a_via_hl
z80_adc_a_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     r4, r4, #0x1000000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       r4, r4, r0, lsl #24
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010015f0 */
.global z80_adc_a_a
z80_adc_a_a:
    mov        r0, r4
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
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001630 */
.global z80_sub_a_b
z80_sub_a_b:
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r6
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001660 */
.global z80_sub_a_c
z80_sub_a_c:
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r7
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001690 */
.global z80_sub_a_d
z80_sub_a_d:
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r8
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010016c0 */
.global z80_sub_a_e
z80_sub_a_e:
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, sb
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010016f0 */
.global z80_sub_a_h
z80_sub_a_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001720 */
.global z80_sub_a_l
z80_sub_a_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001750 */
.global z80_sub_a_via_hl
z80_sub_a_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r0, lsl #24
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001790 */
.global z80_sub_a_a
z80_sub_a_a:
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r4
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010017c0 */
.global z80_sbc_a_b
z80_sbc_a_b:
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, lr, lsl #24
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       r4, r4, r6
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001800 */
.global z80_sbc_a_c
z80_sbc_a_c:
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, lr, lsl #24
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       r4, r4, r7
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001840 */
.global z80_sbc_a_d
z80_sbc_a_d:
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, lr, lsl #24
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       r4, r4, r8
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001880 */
.global z80_sbc_a_e
z80_sbc_a_e:
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, lr, lsl #24
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       r4, r4, sb
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010018c0 */
.global z80_sbc_a_h
z80_sbc_a_h:
    and        r0, sl, #0xff000000
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
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001900 */
.global z80_sbc_a_l
z80_sbc_a_l:
    lsl        r0, sl, #8
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
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001940 */
.global z80_sbc_a_via_hl
z80_sbc_a_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, lr, lsl #24
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       r4, r4, r0, lsl #24
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001990 */
.global z80_sbc_a_a
z80_sbc_a_a:
    mov        r0, r4
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
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010019d0 */
.global z80_and_a_b
z80_and_a_b:
    ldr        r1, .L_01001e44
    and        r4, r4, r6
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001a00 */
.global z80_and_a_c
z80_and_a_c:
    ldr        r1, .L_01001e44
    and        r4, r4, r7
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001a30 */
.global z80_and_a_d
z80_and_a_d:
    ldr        r1, .L_01001e44
    and        r4, r4, r8
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001a60 */
.global z80_and_a_e
z80_and_a_e:
    ldr        r1, .L_01001e44
    and        r4, r4, sb
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001a90 */
.global z80_and_a_h
z80_and_a_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_01001e44
    and        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001ac0 */
.global z80_and_a_l
z80_and_a_l:
    lsl        r0, sl, #8
    ldr        r1, .L_01001e44
    and        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001af0 */
.global z80_and_a_via_hl
z80_and_a_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_01001e44
    and        r4, r4, r0, lsl #24
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001b20 */
.global z80_and_a_a
z80_and_a_a:
    ldr        r1, .L_01001e44
    and        r4, r4, r4
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001b50 */
.global z80_xor_a_b
z80_xor_a_b:
    ldr        r1, .L_01001e44
    eor        r4, r4, r6
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001b80 */
.global z80_xor_a_c
z80_xor_a_c:
    ldr        r1, .L_01001e44
    eor        r4, r4, r7
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001bb0 */
.global z80_xor_a_d
z80_xor_a_d:
    ldr        r1, .L_01001e44
    eor        r4, r4, r8
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001be0 */
.global z80_xor_a_e
z80_xor_a_e:
    ldr        r1, .L_01001e44
    eor        r4, r4, sb
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001c10 */
.global z80_xor_a_h
z80_xor_a_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_01001e44
    eor        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001c40 */
.global z80_xor_a_l
z80_xor_a_l:
    lsl        r0, sl, #8
    ldr        r1, .L_01001e44
    eor        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001c70 */
.global z80_xor_a_via_hl
z80_xor_a_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_01001e44
    eor        r4, r4, r0, lsl #24
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001ca0 */
.global z80_xor_a_a
z80_xor_a_a:
    ldr        r1, .L_01001e44
    eor        r4, r4, r4
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001cd0 */
.global z80_or_a_b
z80_or_a_b:
    ldr        r1, .L_01001e44
    orr        r4, r4, r6
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001d00 */
.global z80_or_a_c
z80_or_a_c:
    ldr        r1, .L_01001e44
    orr        r4, r4, r7
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001d30 */
.global z80_or_a_d
z80_or_a_d:
    ldr        r1, .L_01001e44
    orr        r4, r4, r8
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001d60 */
.global z80_or_a_e
z80_or_a_e:
    ldr        r1, .L_01001e44
    orr        r4, r4, sb
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001d90 */
.global z80_or_a_h
z80_or_a_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_01001e44
    orr        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001dc0 */
.global z80_or_a_l
z80_or_a_l:
    lsl        r0, sl, #8
    ldr        r1, .L_01001e44
    orr        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001df0 */
.global z80_or_a_via_hl
z80_or_a_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_01001e44
    orr        r4, r4, r0, lsl #24
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001e20 */
.global z80_or_a_a
z80_or_a_a:
    ldr        r1, .L_01001e44
    orr        r4, r4, r4
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
.L_01001e44:
    .word z80_result_flags
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001e50 */
.global z80_cp_a_b
z80_cp_a_b:
    cmp        r4, r6
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001e80 */
.global z80_cp_a_c
z80_cp_a_c:
    cmp        r4, r7
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001eb0 */
.global z80_cp_a_d
z80_cp_a_d:
    cmp        r4, r8
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001ee0 */
.global z80_cp_a_e
z80_cp_a_e:
    cmp        r4, sb
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01001f10 */
.global z80_cp_a_h
z80_cp_a_h:
    and        r0, sl, #0xff000000
    cmp        r4, r0
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001f40 */
.global z80_cp_a_l
z80_cp_a_l:
    lsl        r0, sl, #8
    cmp        r4, r0
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001f70 */
.global z80_cp_a_via_hl
z80_cp_a_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    cmp        r4, r0, lsl #24
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001fb0 */
.global z80_cp_a_a
z80_cp_a_a:
    cmp        r4, r4
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
