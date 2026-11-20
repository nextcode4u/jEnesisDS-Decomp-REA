/* Z80 bus status. Release range 0x020043cc–0x02004438. */


/* 0x020043cc */
.global read_z80_bus_request_status
read_z80_bus_request_status:
    ldr        r0, .L_02004400
    ldr        r3, .L_02004404
    ldr        r2, [r0]
    ldrb       ip, [r3]
    mov        r1, #1
    cmp        r2, #0xa
    add        r2, r2, #1
    ldr        r3, .L_02004408
    str        r2, [r0]
    and        r0, ip, r1
    eorhi      r0, r0, r1
    str        r1, [r3, #0xa8]
    bx         lr
.L_02004400:
    .word 0x02099004
.L_02004404:
    .word address_0208f349
.L_02004408:
    .word frame_timing

/* 0x0200440c */
.global shift_z80_cartridge_bank_latch
shift_z80_cartridge_bank_latch:
    ldr        r1, .L_02004430
    and        r0, r0, #1
    ldr        r2, [r1]
    lsl        r0, r0, #0x17
    ldr        r3, .L_02004434
    orr        r0, r0, r2, lsr #1
    and        r3, r0, r3
    str        r3, [r1]
    bx         lr
.L_02004430:
    .word z80_cartridge_bank_base
.L_02004434:
    .word 0x00ff8000
