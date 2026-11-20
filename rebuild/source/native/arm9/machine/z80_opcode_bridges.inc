/* Install pointers to the four decode pages at 0x0200df20–0x0200df50. */
.global install_z80_dispatch_tables
.type install_z80_dispatch_tables, %function
install_z80_dispatch_tables:
    /* The adjacent Z80 core places the four pointers at 0x0200e020. */
    push       {r4, lr}
    add        r0, r0, #0x400
    ldr        r1, [pc, #0xf0]
    ldr        r2, [pc, #0xf0]
    ldr        r3, [pc, #0xf0]
    ldr        r4, [pc, #0xf0]
    str        r1, [r0, #0x94]
    str        r2, [r0, #0x98]
    str        r3, [r0, #0x9c]
    str        r4, [r0, #0xa0]
    pop        {r4, pc}
    .word 0
