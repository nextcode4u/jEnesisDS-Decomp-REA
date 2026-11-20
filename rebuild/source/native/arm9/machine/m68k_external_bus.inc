/* M68k external bus. Release range 0x020045c8–0x020046c0. */

/* 0x020045c8 */
.global m68k_external_bus
m68k_external_bus:
    ldr        r3, .L_020046b0
    ldr        r2, [r3]
    orr        r0, r0, r2
    asr        r3, r0, #0x15
    and        r3, r3, #7
    cmp        r3, #6
    beq        .L_02004648
    cmp        r3, #7
    lsleq      r3, r0, #0x10
    lsreq      r3, r3, #0x10
    ldreq      r2, .L_020046b4
    eoreq      r3, r3, #1
    strbeq     r1, [r2, r3]
    bxeq       lr
    cmp        r3, #5
    bxne       lr
    cmp        r0, #0xa10000
    bxlt       lr
    asr        r3, r0, #8
    and        r3, r3, #0xff
    cmp        r3, #0x11
    beq        .L_020046a0
    cmp        r3, #0x12
    beq        .L_02004690
    cmp        r3, #0
    bxne       lr
    ldr        r3, .L_020046b8
    cmp        r0, r3
    bxgt       lr
    asr        r0, r0, #1
    and        r0, r0, #0xf
    b          address_0200037c
.L_02004648:
    ldr        r3, .L_020046bc
    and        r3, r0, r3
    cmp        r3, #0xc00000
    bxne       lr
    and        r0, r0, #0x1f
    cmp        r0, #0x17
    bxhi       lr
    mov        r3, #1
    lsl        r3, r3, r0
    tst        r3, #0xaa0000
    bne        .L_02004688
    tst        r3, #0xff
    bxeq       lr
    lsl        r1, r1, #0x10
    lsr        r1, r1, #0x10
    b          address_0200b26c
.L_02004688:
    mov        r0, r1
    b          address_02005ad0
.L_02004690:
    tst        r0, #1
    bxne       lr
    and        r0, r1, #1
    b          address_020044c8
.L_020046a0:
    tst        r0, #1
    bxne       lr
    and        r0, r1, #1
    b          address_02004538
.L_020046b0:
    .word z80_cartridge_bank_base
.L_020046b4:
    .word genesis_work_ram_bytes
.L_020046b8:
    .word 0x00a1001f
.L_020046bc:
    .word 0x00e700e0
