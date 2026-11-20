/* M68k page reads. Release range 0x02003e38–0x0200412c. */

/* 0x02003e38 */
.global m68k_page_reads
m68k_page_reads:
    ldr        r3, .L_02003ea8
    and        ip, r0, #0x3f0000
    ldr        r2, [r3]
    bic        r0, r0, #0xff000000
    ldrb       r3, [r2, #0x261]
    str        lr, [sp, #-4]!
    cmp        r3, #0
    bic        r0, r0, #0xc00000
    beq        .L_02003e94
    ldr        r3, .L_02003eac
    ldrb       ip, [r3]
    cmp        ip, #1
    ldrne       pc, [sp], #4
    ldr        r3, [r2, #0x24c]
    cmp        r0, r3
    ldrlo       pc, [sp], #4
    ldr        r3, [r2, #0x250]
    eor        lr, r0, #1
    cmp        r0, r3
    ldrls      r3, .L_02003eb0
    strbls     r1, [r3, lr]
    strbls     ip, [r2, #0x263]
    ldr         pc, [sp], #4
.L_02003e94:
    cmp        ip, #0x200000
    ldreq      r3, .L_02003eb4
    moveq      r2, #1
    strbeq     r2, [r3]
    ldr         pc, [sp], #4
.L_02003ea8:
    .word loaded_cartridge_metadata
.L_02003eac:
    .word address_0208f34a
.L_02003eb0:
    .word cartridge_rom_bytes
.L_02003eb4:
    .word 0x0209900d
    lsl        r0, r0, #0x10
    lsr        r0, r0, #0x10
    ldr        r3, .L_02003ed0
    eor        r0, r0, #1
    strb       r1, [r3, r0]
    bx         lr
.L_02003ed0:
    .word genesis_work_ram_bytes
    ldr        r3, .L_02003f24
    ldr        r2, [r3]
    ldrb       r3, [r2, #0x261]
    cmp        r3, #0
    bxeq       lr
    ldr        r3, .L_02003f28
    bic        r0, r0, #0xff000000
    ldrb       ip, [r3]
    bic        r0, r0, #0xc00000
    cmp        ip, #1
    bxne       lr
    ldr        r3, [r2, #0x24c]
    cmp        r0, r3
    bxlo       lr
    ldr        r3, [r2, #0x250]
    cmp        r0, r3
    ldrls      r3, .L_02003f2c
    strbls     ip, [r2, #0x263]
    strhls     r1, [r0, r3]
    bx         lr
.L_02003f24:
    .word loaded_cartridge_metadata
.L_02003f28:
    .word address_0208f34a
.L_02003f2c:
    .word cartridge_rom_bytes

/* 0x02003f30 */
.global select_m68k_byte_read_handler
select_m68k_byte_read_handler:
    lsr        r3, r0, #4
    and        r3, r3, #0xf
    cmp        r3, #0xf
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_02003fbc
    .word .L_02003fe8
    .word .L_02003fe8
    .word .L_02003f84
    .word .L_02003fe8
    .word .L_02003fbc
    .word .L_02003fbc
    .word .L_02003fbc
    .word .L_02003fbc
    .word .L_02003fbc
    .word .L_02003fbc
    .word .L_02003fc8
    .word .L_02003fbc
    .word .L_02003fb0
    .word .L_02003fb0
    .word .L_02003fa4
    .word .L_02003fa4
.L_02003f84:
    ldr        r3, .L_02004008
    ldr        r2, .L_0200400c
    ldrb       r1, [r3]
    ldr        r3, .L_02004010
    cmp        r1, #0
    moveq      r3, r2
.L_02003f9c:
    mov        r0, r3
    bx         lr
.L_02003fa4:
    ldr        r3, .L_02004014
    mov        r0, r3
    bx         lr
.L_02003fb0:
    ldr        r3, .L_02004018
    mov        r0, r3
    bx         lr
.L_02003fbc:
    ldr        r3, .L_0200401c
    mov        r0, r3
    bx         lr
.L_02003fc8:
    ands       r1, r0, #0xf
    ldr        r3, .L_02004020
    beq        .L_02003f9c
    ldr        r2, .L_0200401c
    ldr        r3, .L_02004024
    cmp        r1, #1
    movne      r3, r2
    b          .L_02003f9c
.L_02003fe8:
    ldr        r3, .L_02004008
    ldr        r2, .L_02004028
    ldrb       r1, [r3]
    ldr        r3, .L_02004010
    cmp        r1, #0
    moveq      r3, r2
    mov        r0, r3
    bx         lr
.L_02004008:
    .word 0x0209900e
.L_0200400c:
    .word address_02003de0
.L_02004010:
    .word address_02003df0
.L_02004014:
    .word address_02003df8
.L_02004018:
    .word read_vdp_byte_from_m68k
.L_0200401c:
    .word default_m68k_byte_read_entry
.L_02004020:
    .word read_z80_window_from_m68k
.L_02004024:
    .word read_m68k_io_or_mapper_byte
.L_02004028:
    .word address_02003de8

/* 0x0200402c */
.global select_m68k_word_read_handler
select_m68k_word_read_handler:
    bic        r0, r0, #0xff000000
    lsr        r3, r0, #4
    and        r3, r3, #0xf
    cmp        r3, #0xf
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_020040bc
    .word .L_020040e8
    .word .L_020040e8
    .word .L_02004084
    .word .L_020040e8
    .word .L_020040bc
    .word .L_020040bc
    .word .L_020040bc
    .word .L_020040bc
    .word .L_020040bc
    .word .L_020040bc
    .word .L_020040c8
    .word .L_020040bc
    .word .L_020040b0
    .word .L_020040b0
    .word .L_020040a4
    .word .L_020040a4
.L_02004084:
    ldr        r3, .L_02004108
    ldr        r2, .L_0200410c
    ldrb       r1, [r3]
    ldr        r3, .L_02004110
    cmp        r1, #0
    moveq      r3, r2
.L_0200409c:
    mov        r0, r3
    bx         lr
.L_020040a4:
    ldr        r3, .L_02004114
    mov        r0, r3
    bx         lr
.L_020040b0:
    ldr        r3, .L_02004118
    mov        r0, r3
    bx         lr
.L_020040bc:
    ldr        r3, .L_0200411c
    mov        r0, r3
    bx         lr
.L_020040c8:
    ands       r1, r0, #0xf
    ldr        r3, .L_02004120
    beq        .L_0200409c
    ldr        r2, .L_0200411c
    ldr        r3, .L_02004124
    cmp        r1, #1
    movne      r3, r2
    b          .L_0200409c
.L_020040e8:
    ldr        r3, .L_02004108
    ldr        r2, .L_02004128
    ldrb       r1, [r3]
    ldr        r3, .L_02004110
    cmp        r1, #0
    moveq      r3, r2
    mov        r0, r3
    bx         lr
.L_02004108:
    .word 0x0209900e
.L_0200410c:
    .word address_02003e00
.L_02004110:
    .word address_02003e20
.L_02004114:
    .word address_02003e28
.L_02004118:
    .word address_020048d4
.L_0200411c:
    .word default_m68k_word_read_entry
.L_02004120:
    .word address_0200497c
.L_02004124:
    .word address_02004908
.L_02004128:
    .word address_02003e08
