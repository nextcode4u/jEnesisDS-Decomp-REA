/* ARM9 tightly coupled instruction memory code. 0x01000000–0x01001290. */


/* 0x01000000 */
.global m68k_write_work_ram_word
m68k_write_work_ram_word:
    ldr        r3, .L_01000014
    ldr        r2, .L_01000018
    and        r3, r0, r3
    strh       r1, [r3, r2]
    bx         lr
.L_01000014:
    .word 0x0000fffe
.L_01000018:
    .word 0x023cb634
    .fill 4, 1, 0xff

/* 0x01000020 */
.global z80_nop
z80_nop:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000030 */
.global z80_ld_bc_imm16
z80_ld_bc_imm16:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    lsl        r6, r0, #0x10
    lsl        r7, r0, #0x18
    and        r6, r6, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000060 */
.global z80_store_a_via_bc
z80_store_a_via_bc:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    lsr        r1, r4, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000090 */
.global z80_inc_bc
z80_inc_bc:
    adds       r7, r7, #0x1000000
    addhs      r6, r6, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x60000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010000b0 */
.global z80_inc_b
z80_inc_b:
    bic        r5, r5, #0xd6
    adds       r6, r6, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010000e0 */
.global z80_dec_b
z80_dec_b:
    bic        r5, r5, #0xd6
    subs       r6, r6, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000110 */
.global z80_ld_b_imm8
z80_ld_b_imm8:
    ldrb       r0, [fp], #1
    lsl        r6, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000130 */
.global z80_rlca
z80_rlca:
    lsls       r4, r4, #1
    orrhs      r4, r4, #0x1000000
    bic        r5, r5, #0x13
    orrhs      r5, r5, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000150 */
.global z80_exchange_af
z80_exchange_af:
    ldr        r0, [sp, #0x48]
    ldr        r1, [sp, #0x4c]
    str        r4, [sp, #0x48]
    str        r5, [sp, #0x4c]
    mov        r4, r0
    bic        r5, r5, #0xd7
    and        r1, r1, #0xff
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000180 */
.global z80_add_hl_bc
z80_add_hl_bc:
    orr        r0, r6, r7, lsr #8
    bic        r5, r5, #0x13
    adds       sl, sl, r0
    orrhs      r5, r5, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010001a0 */
.global z80_load_a_via_bc
z80_load_a_via_bc:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r4, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010001d0 */
.global z80_dec_bc
z80_dec_bc:
    subs       r7, r7, #0x1000000
    sublo      r6, r6, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x60000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010001f0 */
.global z80_inc_c
z80_inc_c:
    bic        r5, r5, #0xd6
    adds       r7, r7, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000220 */
.global z80_dec_c
z80_dec_c:
    bic        r5, r5, #0xd6
    subs       r7, r7, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000250 */
.global z80_ld_c_imm8
z80_ld_c_imm8:
    ldrb       r0, [fp], #1
    lsl        r7, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000270 */
.global z80_rrca
z80_rrca:
    lsrs       r4, r4, #0x19
    orrhs      r4, r4, #0x80
    bic        r5, r5, #0x13
    orrhs      r5, r5, #1
    lsl        r4, r4, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010002a0 */
.global z80_djnz
z80_djnz:
    subs       r6, r6, #0x1000000
    mov        r1, fp
    ldrsbne    r0, [fp], #1
    moveq      r0, #0
    subne      r5, r5, #0x50000
    addeq      fp, fp, #1
    addne      fp, fp, r0
    cmn        r0, #2
    moveq      r0, #0x27
    movne      r0, #0xd3
    strb       r0, [r1, #-1]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010002e0 */
.global z80_ld_de_imm16
z80_ld_de_imm16:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    lsl        r8, r0, #0x10
    lsl        sb, r0, #0x18
    and        r8, r8, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000310 */
.global z80_store_a_via_de
z80_store_a_via_de:
    lsr        r1, r4, #0x18
    orr        r0, r8, sb, lsr #8
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000340 */
.global z80_inc_de
z80_inc_de:
    adds       sb, sb, #0x1000000
    addhs      r8, r8, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x60000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000360 */
.global z80_inc_d
z80_inc_d:
    bic        r5, r5, #0xd6
    adds       r8, r8, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000390 */
.global z80_dec_d
z80_dec_d:
    bic        r5, r5, #0xd6
    subs       r8, r8, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010003c0 */
.global z80_ld_d_imm8
z80_ld_d_imm8:
    ldrb       r0, [fp], #1
    lsl        r8, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010003e0 */
.global z80_rla
z80_rla:
    and        r0, r5, #1
    lsl        r0, r0, #0x18
    bic        r5, r5, #0x13
    lsls       r4, r4, #1
    orrhs      r5, r5, #1
    orr        r4, r4, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000410 */
.global z80_jr
z80_jr:
    ldrsb      r0, [fp], #1
    add        fp, fp, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000430 */
.global z80_add_hl_de
z80_add_hl_de:
    orr        r0, r8, sb, lsr #8
    bic        r5, r5, #0x13
    adds       sl, sl, r0
    orrhs      r5, r5, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000450 */
.global z80_load_a_via_de
z80_load_a_via_de:
    orr        r0, r8, sb, lsr #8
    lsr        r0, r0, #0x10
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r4, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000480 */
.global z80_dec_de
z80_dec_de:
    subs       sb, sb, #0x1000000
    sublo      r8, r8, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x60000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010004a0 */
.global z80_inc_e
z80_inc_e:
    bic        r5, r5, #0xd6
    adds       sb, sb, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010004d0 */
.global z80_dec_e
z80_dec_e:
    bic        r5, r5, #0xd6
    subs       sb, sb, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000500 */
.global z80_ld_e_imm8
z80_ld_e_imm8:
    ldrb       r0, [fp], #1
    lsl        sb, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000520 */
.global z80_rra
z80_rra:
    lsl        r0, r5, #0x1f
    bic        r5, r5, #0x13
    lsrs       r4, r4, #0x19
    orrhs      r5, r5, #1
    orr        r4, r0, r4, lsl #24
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000550 */
.global z80_jr_nz
z80_jr_nz:
    tst        r5, #0x40
    ldrsbeq    r0, [fp], #1
    subeq      r5, r5, #0x50000
    addne      fp, fp, #1
    addeq      fp, fp, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000580 */
.global z80_ld_hl_imm16
z80_ld_hl_imm16:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    lsl        sl, r0, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010005a0 */
.global z80_store_hl_absolute
z80_store_hl_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    lsr        r1, sl, #0x10
    strb       r1, [r3, r0]
    lsr        r1, r1, #8
    add        r0, r0, #1
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010005d0 */
.global z80_inc_hl
z80_inc_hl:
    add        sl, sl, #0x10000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x60000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010005f0 */
.global z80_inc_h
z80_inc_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    adds       r0, r0, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    add        sl, sl, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01000620 */
.global z80_dec_h
z80_dec_h:
    and        r0, sl, #0xff000000
    bic        r5, r5, #0xd6
    subs       r0, r0, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    sub        sl, sl, #0x1000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000650 */
.global z80_ld_h_imm8
z80_ld_h_imm8:
    ldrb       r0, [fp], #1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01000670 */
.global z80_daa
z80_daa:
    sub        r6, r6, #0x1000000
    sub        r5, r5, r6, lsr #8
    sub        r5, r5, r6, lsr #6
    sub        r5, r5, r6, lsr #5
    add        fp, fp, #1
    ldrb       r0, [fp], #1
    mov        r6, #0
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010006a0 */
.global z80_jr_z
z80_jr_z:
    tst        r5, #0x40
    ldrsbne    r0, [fp], #1
    subne      r5, r5, #0x50000
    addeq      fp, fp, #1
    addne      fp, fp, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010006d0 */
.global z80_add_hl_hl
z80_add_hl_hl:
    mov        r0, sl
    bic        r5, r5, #0x13
    adds       sl, sl, r0
    orrhs      r5, r5, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010006f0 */
.global z80_load_hl_absolute
z80_load_hl_absolute:
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
    subs       r5, r5, #0x100000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000730 */
.global z80_dec_hl
z80_dec_hl:
    sub        sl, sl, #0x10000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x60000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000750 */
.global z80_inc_l
z80_inc_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    adds       r0, r0, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000780 */
.global z80_dec_l
z80_dec_l:
    lsl        r0, sl, #8
    bic        r5, r5, #0xd6
    subs       r0, r0, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010007c0 */
.global z80_ld_l_imm8
z80_ld_l_imm8:
    ldrb       r0, [fp], #1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010007e0 */
.global z80_cpl
z80_cpl:
    eor        r4, r4, #0xff000000
    orr        r5, r5, #0x12
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000800 */
.global z80_jr_nc
z80_jr_nc:
    tst        r5, #1
    ldrsbeq    r0, [fp], #1
    subeq      r5, r5, #0x50000
    addne      fp, fp, #1
    addeq      fp, fp, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000830 */
.global z80_ld_sp_imm16
z80_ld_sp_imm16:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        ip, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000850 */
.global z80_store_a_absolute
z80_store_a_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    lsr        r1, r4, #0x18
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xd0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01000880 */
.global z80_inc_sp
z80_inc_sp:
    add        ip, ip, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x60000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010008a0 */
.global z80_inc_via_hl
z80_inc_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    mov        r1, r0
    bic        r5, r5, #0xd6
    lsl        r1, r1, #0x18
    adds       r1, r1, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    lsr        r1, r1, #0x18
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010008f0 */
.global z80_dec_via_hl
z80_dec_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    mov        r1, r0
    bic        r5, r5, #0xd6
    lsl        r1, r1, #0x18
    subs       r1, r1, #0x1000000
    orr        r5, r5, #2
    orreq      r5, r5, #0x40
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    lsr        r1, r1, #0x18
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01000940 */
.global z80_ld_via_hl_imm8
z80_ld_via_hl_imm8:
    ldrb       r1, [fp], #1
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000960 */
.global z80_scf
z80_scf:
    bic        r5, r5, #0x12
    orr        r5, r5, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000980 */
.global z80_jr_c
z80_jr_c:
    tst        r5, #1
    ldrsbne    r0, [fp], #1
    subne      r5, r5, #0x50000
    addeq      fp, fp, #1
    addne      fp, fp, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010009b0 */
.global z80_add_hl_sp
z80_add_hl_sp:
    sub        r0, ip, r3
    bic        r5, r5, #0x13
    adds       sl, sl, r0, lsl #16
    orrhs      r5, r5, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010009d0 */
.global z80_load_a_absolute
z80_load_a_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    cmp        r0, #0x2000
    blge       dispatch_z80_mapped_read_by_address_page
    ldrb       r0, [r3, r0]
    lsl        r4, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xd0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01000a00 */
.global z80_dec_sp
z80_dec_sp:
    sub        ip, ip, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x60000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000a20 */
.global z80_inc_a
z80_inc_a:
    bic        r5, r5, #0xd6
    adds       r4, r4, #0x1000000
    orrmi      r5, r5, #0x80
    orrvs      r5, r5, #4
    orreq      r5, r5, #0x40
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000a50 */
.global z80_dec_a
z80_dec_a:
    bic        r5, r5, #0xd6
    subs       r4, r4, #0x1000000
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000a80 */
.global z80_ld_a_imm8
z80_ld_a_imm8:
    ldrb       r0, [fp], #1
    lsl        r4, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000aa0 */
.global z80_ccf
z80_ccf:
    tst        r5, #1
    bicne      r5, r5, #3
    biceq      r5, r5, #0x12
    orrne      r5, r5, #0x10
    orreq      r5, r5, #1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000ad0 */
.global z80_ld_b_from_b
z80_ld_b_from_b:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000ae0 */
.global z80_ld_b_from_c
z80_ld_b_from_c:
    mov        r6, r7
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000b00 */
.global z80_ld_b_from_d
z80_ld_b_from_d:
    mov        r6, r8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000b20 */
.global z80_ld_b_from_e
z80_ld_b_from_e:
    mov        r6, sb
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000b40 */
.global z80_ld_b_from_h
z80_ld_b_from_h:
    and        r6, sl, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000b60 */
.global z80_ld_b_from_l
z80_ld_b_from_l:
    lsl        r6, sl, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000b80 */
.global z80_ld_b_from_via_hl
z80_ld_b_from_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    lsl        r6, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000ba0 */
.global z80_ld_b_from_a
z80_ld_b_from_a:
    mov        r6, r4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000bc0 */
.global z80_ld_c_from_b
z80_ld_c_from_b:
    mov        r7, r6
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000be0 */
.global z80_ld_c_from_c
z80_ld_c_from_c:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000bf0 */
.global z80_ld_c_from_d
z80_ld_c_from_d:
    mov        r7, r8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000c10 */
.global z80_ld_c_from_e
z80_ld_c_from_e:
    mov        r7, sb
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000c30 */
.global z80_ld_c_from_h
z80_ld_c_from_h:
    and        r7, sl, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000c50 */
.global z80_ld_c_from_l
z80_ld_c_from_l:
    lsl        r7, sl, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000c70 */
.global z80_ld_c_from_via_hl
z80_ld_c_from_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    lsl        r7, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000c90 */
.global z80_ld_c_from_a
z80_ld_c_from_a:
    mov        r7, r4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000cb0 */
.global z80_ld_d_from_b
z80_ld_d_from_b:
    mov        r8, r6
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000cd0 */
.global z80_ld_d_from_c
z80_ld_d_from_c:
    mov        r8, r7
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000cf0 */
.global z80_ld_d_from_d
z80_ld_d_from_d:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000d00 */
.global z80_ld_d_from_e
z80_ld_d_from_e:
    mov        r8, sb
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000d20 */
.global z80_ld_d_from_h
z80_ld_d_from_h:
    and        r8, sl, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000d40 */
.global z80_ld_d_from_l
z80_ld_d_from_l:
    lsl        r8, sl, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000d60 */
.global z80_ld_d_from_via_hl
z80_ld_d_from_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    lsl        r8, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000d80 */
.global z80_ld_d_from_a
z80_ld_d_from_a:
    mov        r8, r4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000da0 */
.global z80_ld_e_from_b
z80_ld_e_from_b:
    mov        sb, r6
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000dc0 */
.global z80_ld_e_from_c
z80_ld_e_from_c:
    mov        sb, r7
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000de0 */
.global z80_ld_e_from_d
z80_ld_e_from_d:
    mov        sb, r8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000e00 */
.global z80_ld_e_from_e
z80_ld_e_from_e:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000e10 */
.global z80_ld_e_from_h
z80_ld_e_from_h:
    and        sb, sl, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000e30 */
.global z80_ld_e_from_l
z80_ld_e_from_l:
    lsl        sb, sl, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000e50 */
.global z80_ld_e_from_via_hl
z80_ld_e_from_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    lsl        sb, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000e70 */
.global z80_ld_e_from_a
z80_ld_e_from_a:
    mov        sb, r4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000e90 */
.global z80_ld_h_from_b
z80_ld_h_from_b:
    and        sl, sl, #0xff0000
    orr        sl, sl, r6
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000eb0 */
.global z80_ld_h_from_c
z80_ld_h_from_c:
    and        sl, sl, #0xff0000
    orr        sl, sl, r7
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000ed0 */
.global z80_ld_h_from_d
z80_ld_h_from_d:
    and        sl, sl, #0xff0000
    orr        sl, sl, r8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000ef0 */
.global z80_ld_h_from_e
z80_ld_h_from_e:
    and        sl, sl, #0xff0000
    orr        sl, sl, sb
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000f10 */
.global z80_ld_h_from_h
z80_ld_h_from_h:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01000f20 */
.global z80_ld_h_from_l
z80_ld_h_from_l:
    and        sl, sl, #0xff0000
    orr        sl, sl, sl, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000f40 */
.global z80_ld_h_from_via_hl
z80_ld_h_from_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000f70 */
.global z80_ld_h_from_a
z80_ld_h_from_a:
    and        sl, sl, #0xff0000
    orr        sl, sl, r4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000f90 */
.global z80_ld_l_from_b
z80_ld_l_from_b:
    and        sl, sl, #0xff000000
    orr        sl, sl, r6, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000fb0 */
.global z80_ld_l_from_c
z80_ld_l_from_c:
    and        sl, sl, #0xff000000
    orr        sl, sl, r7, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000fd0 */
.global z80_ld_l_from_d
z80_ld_l_from_d:
    and        sl, sl, #0xff000000
    orr        sl, sl, r8, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01000ff0 */
.global z80_ld_l_from_e
z80_ld_l_from_e:
    and        sl, sl, #0xff000000
    orr        sl, sl, sb, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001010 */
.global z80_ld_l_from_h
z80_ld_l_from_h:
    and        sl, sl, #0xff000000
    orr        sl, sl, sl, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001030 */
.global z80_ld_l_from_l
z80_ld_l_from_l:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001040 */
.global z80_ld_l_from_via_hl
z80_ld_l_from_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001070 */
.global z80_ld_l_from_a
z80_ld_l_from_a:
    and        sl, sl, #0xff000000
    orr        sl, sl, r4, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001090 */
.global z80_ld_via_hl_from_b
z80_ld_via_hl_from_b:
    lsr        r1, r6, #0x18
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010010b0 */
.global z80_ld_via_hl_from_c
z80_ld_via_hl_from_c:
    lsr        r1, r7, #0x18
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010010d0 */
.global z80_ld_via_hl_from_d
z80_ld_via_hl_from_d:
    lsr        r1, r8, #0x18
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010010f0 */
.global z80_ld_via_hl_from_e
z80_ld_via_hl_from_e:
    lsr        r1, sb, #0x18
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001110 */
.global z80_ld_via_hl_from_h
z80_ld_via_hl_from_h:
    lsr        r1, sl, #0x18
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001130 */
.global z80_ld_via_hl_from_l
z80_ld_via_hl_from_l:
    and        r1, sl, #0xff0000
    lsr        r1, r1, #0x10
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001160 */
.global z80_halt
z80_halt:
    sub        fp, fp, #1
    and        r5, r5, #0xff
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001180 */
.global z80_ld_via_hl_from_a
z80_ld_via_hl_from_a:
    lsr        r1, r4, #0x18
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010011a0 */
.global z80_ld_a_from_b
z80_ld_a_from_b:
    mov        r4, r6
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010011c0 */
.global z80_ld_a_from_c
z80_ld_a_from_c:
    mov        r4, r7
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010011e0 */
.global z80_ld_a_from_d
z80_ld_a_from_d:
    mov        r4, r8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001200 */
.global z80_ld_a_from_e
z80_ld_a_from_e:
    mov        r4, sb
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001220 */
.global z80_ld_a_from_h
z80_ld_a_from_h:
    and        r4, sl, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001240 */
.global z80_ld_a_from_l
z80_ld_a_from_l:
    lsl        r4, sl, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01001260 */
.global z80_ld_a_from_via_hl
z80_ld_a_from_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    lsl        r4, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01001280 */
.global z80_ld_a_from_a
z80_ld_a_from_a:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
