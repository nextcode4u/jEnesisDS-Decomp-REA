/* Z80 reset. Release range 0x02004dcc–0x02004ef4. */


/* 0x02004dcc */
.global reset_z80_cpu_registers_and_latches
reset_z80_cpu_registers_and_latches:
    ldrb       r3, [r0, #0x401]
    ldrb       ip, [r0, #0x400]
    ldrb       r1, [r0, #0x402]
    push       {r4, r5, r6, r7, lr}
    orr        ip, ip, r3, lsl #8
    ldrb       r2, [r0, #0x403]
    orr        ip, ip, r1, lsl #16
    orr        ip, ip, r2, lsl #24
    ldrb       r6, [r0, #0x408]
    lsr        lr, ip, #8
    lsr        r4, ip, #0x10
    mov        r3, #0
    lsr        r7, ip, #0x18
    and        lr, lr, #0xff
    and        r4, r4, #0xff
    and        ip, ip, #0xff
    lsr        r5, r6, #0x18
    strb       r3, [r0, #0x409]
    strb       r3, [r0, #0x40a]
    strb       r5, [r0, #0x40b]
    strb       ip, [r0, #0x424]
    strb       lr, [r0, #0x425]
    strb       r4, [r0, #0x426]
    strb       r7, [r0, #0x427]
    strb       r3, [r0, #0x438]
    strb       r3, [r0, #0x439]
    strb       r3, [r0, #0x43a]
    strb       r3, [r0, #0x43b]
    strb       r3, [r0, #0x43c]
    strb       r3, [r0, #0x43d]
    strb       r3, [r0, #0x43e]
    strb       r3, [r0, #0x43f]
    strb       r3, [r0, #0x444]
    strb       r3, [r0, #0x445]
    strb       r3, [r0, #0x446]
    strb       r3, [r0, #0x447]
    strb       r6, [r0, #0x408]
    strb       r3, [r0, #0x4a4]
    strb       r3, [r0, #0x4a5]
    strb       r3, [r0, #0x4a6]
    strb       r3, [r0, #0x4a7]
    strb       ip, [r0, #0x420]
    strb       lr, [r0, #0x421]
    strb       r4, [r0, #0x422]
    strb       r7, [r0, #0x423]
    strb       r3, [r0, #0x474]
    strb       r3, [r0, #0x483]
    strb       r3, [r0, #0x475]
    strb       r3, [r0, #0x476]
    strb       r3, [r0, #0x477]
    strb       r3, [r0, #0x484]
    strb       r3, [r0, #0x485]
    strb       r3, [r0, #0x486]
    strb       r3, [r0, #0x487]
    strb       r3, [r0, #0x488]
    strb       r3, [r0, #0x489]
    strb       r3, [r0, #0x48a]
    strb       r3, [r0, #0x48b]
    strb       r3, [r0, #0x48c]
    strb       r3, [r0, #0x48d]
    strb       r3, [r0, #0x48e]
    strb       r3, [r0, #0x48f]
    strb       r3, [r0, #0x490]
    strb       r3, [r0, #0x491]
    strb       r3, [r0, #0x492]
    strb       r3, [r0, #0x493]
    strb       r3, [r0, #0x47c]
    strb       r3, [r0, #0x47d]
    strb       r3, [r0, #0x47e]
    strb       r3, [r0, #0x47f]
    strb       r3, [r0, #0x480]
    strb       r3, [r0, #0x481]
    strb       r3, [r0, #0x482]
    pop        {r4, r5, r6, r7, pc}
