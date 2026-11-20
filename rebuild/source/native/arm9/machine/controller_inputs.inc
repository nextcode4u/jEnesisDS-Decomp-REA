/* Controller inputs. Release range 0x02003828–0x02003a48. */


/* 0x02003828 */
.global read_genesis_controller_port_pins
read_genesis_controller_port_pins:
    push       {r4, lr}
    ldrb       r3, [r0, #0x1e]
    mov        r4, r0
    cmp        r3, #0
    bne        .L_020038a8
    ldrb       r3, [r0, #0x18]
    cmp        r3, #0
    beq        .L_0200396c
    ldr        r3, [r0, #0xc]
    cmp        r3, #3
    beq        .L_020039d0
    cmp        r3, #4
    beq        .L_02003a08
    ldrb       r3, [r0, #0x20]
    ldrb       r2, [r0, #0x2a]
    ldrb       ip, [r0, #0x23]
    ldrb       r1, [r0, #0x1a]
    lsl        r3, r3, #4
    orr        r3, r3, r2, lsl #5
    ldrb       r0, [r0, #0x24]
    orr        r3, r3, ip
    mvn        r2, r1
    ldrb       ip, [r4, #0x19]
    orr        r3, r3, r0, lsl #1
    and        r2, r2, #0xff
    and        r1, r1, ip
    and        r3, r3, r2
    ldr        ip, .L_02003a44
    orr        r1, r1, r3
    str        r1, [ip]
.L_020038a0:
    ldr        r0, [ip]
    pop        {r4, pc}
.L_020038a8:
    ldrb       r3, [r0, #0x18]
    cmp        r3, #0
    beq        .L_0200391c
    ldr        r3, [r0, #0xc]
    cmp        r3, #3
    beq        .L_020039ac
    ldrb       r2, [r0, #0x21]
    ldrb       r1, [r0, #0x25]
    ldrb       ip, [r4, #0x26]
    ldrb       r0, [r0, #0x22]
    ldrb       lr, [r4, #0x23]
    ldrb       r3, [r4, #0x24]
    lsl        r2, r2, #4
    lsl        r1, r1, #2
.L_020038e0:
    orr        r2, r2, r0, lsl #5
    orr        r1, r1, ip, lsl #3
    ldrb       r0, [r4, #0x1a]
    ldrb       ip, [r4, #0x19]
    orr        r2, r2, r3, lsl #1
    orr        r1, r1, lr
    mvn        r3, r0
    orr        r2, r2, r1
    and        r2, r2, r3
    and        r0, r0, ip
    ldr        ip, .L_02003a44
    orr        r0, r0, r2
    str        r0, [ip]
    ldr        r0, [ip]
    pop        {r4, pc}
.L_0200391c:
    ldrb       r3, [r0, #0x21]
    ldrb       r1, [r0, #0x25]
    ldrb       ip, [r4, #0x26]
    ldrb       r0, [r0, #0x22]
    ldrb       r2, [r4, #0x24]
    lsl        r3, r3, #4
    lsl        r1, r1, #2
    ldrb       lr, [r4, #0x23]
    orr        r3, r3, r0, lsl #5
    orr        r1, r1, ip, lsl #3
    ldrb       r0, [r4, #0x1a]
    orr        r3, r3, r2, lsl #1
    orr        r1, r1, lr
    ldrb       ip, [r4, #0x19]
    mvn        r2, r0
    orr        r3, r3, r1
    and        r3, r3, r2
    and        r0, r0, ip
    orr        r0, r0, r3
    pop        {r4, pc}
.L_0200396c:
    ldrb       r3, [r0, #0x20]
    ldrb       r2, [r0, #0x2a]
    ldrb       r1, [r4, #0x1a]
    ldrb       r0, [r0, #0x23]
    lsl        r3, r3, #4
    orr        r3, r3, r2, lsl #5
    ldrb       ip, [r4, #0x24]
    orr        r3, r3, r0
    mvn        r2, r1
    ldrb       r0, [r4, #0x19]
    orr        r3, r3, ip, lsl #1
    and        r2, r2, #0xff
    and        r3, r3, r2
    and        r1, r1, r0
    orr        r0, r1, r3
    pop        {r4, pc}
.L_020039ac:
    ldrb       r2, [r0, #0x21]
    ldrb       r1, [r0, #0x27]
    ldrb       ip, [r4, #0x2b]
    ldrb       r0, [r0, #0x22]
    ldrb       lr, [r4, #0x28]
    ldrb       r3, [r4, #0x29]
    lsl        r2, r2, #4
    lsl        r1, r1, #2
    b          .L_020038e0
.L_020039d0:
    ldrb       r3, [r0, #0x20]
    ldrb       r2, [r0, #0x1a]
    ldrb       r0, [r0, #0x2a]
    ldrb       ip, [r4, #0x19]
    lsl        r3, r3, #4
    mvn        r1, r2
    orr        r3, r3, r0, lsl #5
    and        r2, r2, ip
    and        r3, r3, r1
    orr        r2, r2, r3
    ldr        ip, .L_02003a44
    and        r2, r2, #0xf0
    str        r2, [ip]
    b          .L_020038a0
.L_02003a08:
    ldrb       r2, [r0, #0x20]
    ldrb       r3, [r0, #0x1a]
    ldrb       r0, [r0, #0x2a]
    ldrb       ip, [r4, #0x19]
    lsl        r2, r2, #4
    mvn        r1, r3
    orr        r2, r2, r0, lsl #5
    and        r3, r3, ip
    and        r2, r2, r1
    orr        r3, r3, r2
    and        r3, r3, #0xf0
    ldr        ip, .L_02003a44
    orr        r3, r3, #0xf
    str        r3, [ip]
    b          .L_020038a0
.L_02003a44:
    .word controller_port_read_latch
