/* Browser page and settings state. Release range 0x02002088–0x02002150. */


/* 0x02002088 */
.global select_previous_rom_browser_page
select_previous_rom_browser_page:
    ldr        r1, .L_020020b8
    ldr        r3, [r1]
    cmp        r3, #0
    sub        r2, r3, #1
    ldreq      r3, .L_020020bc
    ldreq      r2, [r3]
    ldr        r3, .L_020020c0
    subeq      r2, r2, #1
    str        r2, [r1]
    mov        r2, #1
    str        r2, [r3]
    bx         lr
.L_020020b8:
    .word 0x02098fe0
.L_020020bc:
    .word 0x02098fd8
.L_020020c0:
    .word 0x02098fcc

/* 0x020020c4 */
.global advance_configuration_value
advance_configuration_value:
    ldr        r3, [r0, #4]
    push       {r4, r5, lr}
    cmp        r3, #3
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_02002144
    .word .L_020020e8
    .word .L_020020e8
    .word .L_02002100
    .word .L_02002100
.L_020020e8:
    ldr        r3, .L_02002148
    ldr        r2, [r0, #8]
    ldr        r1, [r3]
    eor        r2, r2, r1
    str        r2, [r3]
    pop        {r4, r5, pc}
.L_02002100:
    ldr        r4, .L_02002148
    ldr        lr, [r0, #8]
    ldr        ip, [r4]
    mov        r0, #3
    lsr        r2, ip, lr
    lsl        r0, r0, lr
    and        r2, r2, #3
    ldr        r1, .L_0200214c
    add        r2, r2, #1
    umull      r5, r3, r1, r2
    lsr        r3, r3, #1
    mvn        r0, r0
    add        r3, r3, r3, lsl #1
    and        ip, ip, r0
    rsb        r2, r3, r2
    orr        ip, ip, r2, lsl lr
    str        ip, [r4]
.L_02002144:
    pop        {r4, r5, pc}
.L_02002148:
    .word emulator_option_flags
.L_0200214c:
    .word 0xaaaaaaab
