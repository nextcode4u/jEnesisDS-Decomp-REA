/* Shared audio startup. Release range 0x02000dac–0x02000f3c. */


/* 0x02000dac */
.global initialize_emulator_state_and_shared_audio
initialize_emulator_state_and_shared_audio:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        ip, .L_02000ee4
    sub        sp, sp, #0x18
    str        ip, [sp]
    ldr        lr, .L_02000ee8
    ldr        ip, .L_02000eec
    ldr        r8, .L_02000ef0
    ldr        r6, .L_02000ef4
    str        lr, [sp, #4]
    str        ip, [sp, #8]
    ldr        lr, .L_02000ef8
    ldr        ip, .L_02000efc
    ldr        r4, .L_02000f00
    ldr        r1, .L_02000f04
    ldr        r2, .L_02000f08
    ldr        r3, .L_02000f0c
    mov        r0, r8
    str        lr, [sp, #0xc]
    str        ip, [sp, #0x10]
    str        r4, [sp, #0x14]
    bl         install_m68k_callbacks_and_instrumented_opcode_entries
    mov        r0, r6
    bl         initialize_z80_state_and_dispatch_pointers
    bl         get_z80_work_ram_buffer
    lsr        r1, r0, #0x18
    lsr        r3, r0, #8
    lsr        r2, r0, #0x10
    strb       r3, [r6, #0x401]
    strb       r2, [r6, #0x402]
    strb       r1, [r6, #0x403]
    strb       r0, [r6, #0x400]
    bl         get_cartridge_rom_buffer
    lsr        r1, r0, #0x18
    lsr        r3, r0, #8
    lsr        r2, r0, #0x10
    strb       r3, [r6, #0x4b1]
    strb       r2, [r6, #0x4b2]
    strb       r1, [r6, #0x4b3]
    strb       r0, [r6, #0x4b0]
    bl         get_z80_bank_latch_address
    ldr        r3, .L_02000f10
    ldr        r7, .L_02000f14
    lsr        r5, r3, #0x18
    lsr        ip, r3, #8
    lsr        lr, r3, #0x10
    lsr        r4, r0, #0x18
    lsr        r2, r0, #8
    lsr        r1, r0, #0x10
    strb       r3, [r6, #0x4a8]
    strb       r2, [r6, #0x4ad]
    strb       r1, [r6, #0x4ae]
    strb       ip, [r6, #0x4a9]
    strb       lr, [r6, #0x4aa]
    strb       r0, [r6, #0x4ac]
    strb       r4, [r6, #0x4af]
    strb       r5, [r6, #0x4ab]
    bl         initialize_cartridge_and_work_ram_mapping
    bl         reset_bus_tables_work_ram_and_z80_bus_lines
    bl         clear_z80_work_ram
    ldr        r3, [r7, #0x30]
    cmp        r3, #0
    beq        .L_02000ed8
.L_02000ea4:
    ldr        r3, [r7, #0x34]
    cmp        r3, #0
    beq        .L_02000ecc
.L_02000eb0:
    str        r6, [r7, #0x2c]
    str        r8, [r7, #0x28]
    bl         configure_frame_timing_callbacks
    mov        r0, #1
    add        sp, sp, #0x18
    pop        {r4, r5, r6, r7, r8, lr}
    b          address_0200648c
.L_02000ecc:
    bl         allocate_genesis_controller_port
    str        r0, [r7, #0x34]
    b          .L_02000eb0
.L_02000ed8:
    bl         allocate_genesis_controller_port
    str        r0, [r7, #0x30]
    b          .L_02000ea4
.L_02000ee4:
    .word write_m68k_byte_to_bus_page
.L_02000ee8:
    .word write_m68k_word_to_bus_page
.L_02000eec:
    .word write_m68k_long_to_bus_page
.L_02000ef0:
    .word address_0b0000ac
.L_02000ef4:
    .word address_0b000158
.L_02000ef8:
    .word write_m68k_bus_long_for_predecrement
.L_02000efc:
    .word acknowledge_vdp_interrupt
.L_02000f00:
    .word address_02003c88
.L_02000f04:
    .word read_m68k_byte_from_page
.L_02000f08:
    .word read_m68k_word_from_page
.L_02000f0c:
    .word read_m68k_long_from_page
.L_02000f10:
    .word 0x023db778
.L_02000f14:
    .word frame_timing
    bx         lr
    mov        r2, #0x4000000
    ldrh       r3, [r2, #6]
    lsl        r3, r3, #0x17
    lsr        r3, r3, #0x17
    cmp        r3, #0xbf
    mov        r0, r3
    bxhi       lr
    b          apply_prepared_scanline_display_state
