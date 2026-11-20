/* Savestate io. Release range 0x0200d13c–0x0200d8c4. */


/* 0x0200d13c */
.global load_emulator_savestate
load_emulator_savestate:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        r3, .L_0200d4b0
    sub        sp, sp, #0xc
    ldr        r2, [r3]
    mov        r4, r0
    cmp        r2, #0
    beq        .L_0200d4a8
.L_0200d158:
    ldr        sl, .L_0200d4b4
    mov        r3, #0
    mov        r0, r4
    str        r3, [sp, #4]
    ldr        r8, [sl, #4]
    ldr        sb, [sl, #0x1c]
    bl         make_savestate_slot_path
    ldr        r1, .L_0200d4b8
    bl         fopen
    subs       r7, r0, #0
    beq        .L_0200d4a0
    mov        r0, #3
    bl         address_020858b0
    bl         configure_ds_display_windows
    bl         clear_sound_mirrors_before_state_load
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    mov        r0, sl
    bl         fread
    mov        r1, #4
    mov        r2, #8
    mov        r3, r7
    mov        r0, r8
    bl         fread
    mov        r1, #4
    mov        r2, #8
    mov        r3, r7
    add        r0, r8, #0x20
    bl         fread
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    add        r0, r8, #0x40
    bl         fread
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    add        r0, r8, #0x44
    bl         fread
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    add        r0, r8, #0x48
    bl         fread
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    add        r0, r8, #0x4c
    bl         fread
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    add        r0, r8, #0x50
    bl         fread
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    add        r0, r8, #0x8c
    bl         fread
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    add        r0, r8, #0x90
    bl         fread
    mov        r3, r7
    add        r0, r8, #0x94
    mov        r1, #4
    mov        r2, #1
    bl         fread
    ldrb       r3, [sl]
    cmp        r3, #1
    bls        .L_0200d290
    add        r0, r8, #0x98
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    bl         fread
.L_0200d290:
    mov        r1, #4
    add        fp, sp, r1
    mov        r2, #1
    mov        r3, r7
    add        r0, r8, #0x9c
    bl         fread
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    mov        r0, fp
    bl         fread
    ldrb       r3, [sp, #7]
    mov        r1, #4
    strb       r3, [r8, #0xa0]
    ldr        r3, [sp, #4]
    mov        r2, #1
    lsr        r3, r3, #0x10
    strb       r3, [r8, #0xa1]
    ldr        r0, [sp, #4]
    mov        r3, r7
    lsr        r0, r0, #8
    strb       r0, [r8, #0xa2]
    ldr        ip, [sp, #4]
    mov        r0, fp
    strb       ip, [r8, #0xa3]
    bl         fread
    ldr        r3, [sp, #4]
    mov        r1, #1
    lsr        r3, r3, #8
    strb       r3, [r8, #0xa4]
    ldr        r3, [sp, #4]
    mov        r2, #0x10000
    strb       r3, [r8, #0xa5]
    ldr        r0, [sl, #8]
    mov        r3, r7
    bl         fread
    mov        r1, #1
    mov        r2, #0x18
    mov        r3, r7
    ldr        r0, [sl, #0xc]
    bl         fread
    mov        r1, #2
    mov        r2, #0x40
    mov        r3, r7
    ldr        r0, [sl, #0x10]
    bl         fread
    mov        r1, #2
    mov        r2, #0x28
    mov        r3, r7
    ldr        r0, [sl, #0x14]
    bl         fread
    mov        r3, r7
    ldr        r0, [sl, #0x18]
    mov        r1, #1
    mov        r2, #0x10000
    bl         fread
    ldrb       r3, [sl]
    cmp        r3, #1
    bls        .L_0200d46c
    mov        r1, #1
    mov        r2, #0x2000
    mov        r3, r7
    ldr        r0, [sl, #0x24]
    bl         fread
    add        r0, sb, #0x400
    mov        r1, #1
    mov        r2, #0x5c
    mov        r3, r7
    add        r0, r0, #4
    bl         fread
    mov        r1, #1
    mov        r2, #0x100
    mov        r3, r7
    ldr        r0, [sl, #0x28]
    bl         fread
    mov        r1, #1
    mov        r2, #0x100
    mov        r3, r7
    ldr        r0, [sl, #0x2c]
    bl         fread
    mov        r1, #1
    mov        r2, #0x20
    mov        r3, r7
    ldr        r0, [sl, #0x30]
    bl         fread
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    mov        r0, fp
    bl         fread
    ldr        r4, [sp, #4]
    ldr        ip, .L_0200d4bc
    lsr        r5, r4, #0x10
    ldr        lr, .L_0200d4c0
    strb       r5, [ip]
    ldr        ip, .L_0200d4c4
    lsr        r6, r4, #8
    mov        r1, #4
    mov        r2, #1
    mov        r3, r7
    strb       r6, [lr]
    strb       r4, [ip]
    mov        r0, fp
    bl         fread
    ldr        r0, [sp, #4]
    bl         restore_z80_bank_latch_from_savestate
    mov        r2, #1
    mov        r3, r7
    mov        r0, fp
    mov        r1, #4
    bl         fread
    ldrb       r3, [sp, #4]
    strb       r3, [sb, #0x4a4]
    ldrb       r2, [sp, #5]
    strb       r2, [sb, #0x4a5]
    ldrb       r3, [sp, #6]
    strb       r3, [sb, #0x4a6]
    ldrb       r2, [sp, #7]
    strb       r2, [sb, #0x4a7]
.L_0200d46c:
    mov        r0, r7
    bl         fclose
    bl         rebuild_display_from_vdp_state
    mov        r0, r8
    bl         rebase_m68k_program_counter_after_savestate
    ldrb       r3, [sl]
    cmp        r3, #1
    bls        .L_0200d498
    mov        r0, sb
    bl         rebase_z80_pc_and_sp_into_work_ram
    bl         restart_arm7_audio_and_replay_fm_registers
.L_0200d498:
    mov        r0, #3
    bl         address_020858bc
.L_0200d4a0:
    add        sp, sp, #0xc
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_0200d4a8:
    bl         prepare_savestate_header_and_regions
    b          .L_0200d158
.L_0200d4b0:
    .word savestate_regions_initialized
.L_0200d4b4:
    .word savestate_header
.L_0200d4b8:
    .word address_0208f074
.L_0200d4bc:
    .word z80_bus_request_asserted
.L_0200d4c0:
    .word z80_reset_released
.L_0200d4c4:
    .word address_0208f349

/* 0x0200d4c8 */
.global write_emulator_savestate
write_emulator_savestate:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r3, .L_0200d810
    sub        sp, sp, #8
    ldr        r2, [r3]
    mov        r4, r0
    cmp        r2, #0
    beq        .L_0200d808
.L_0200d4e4:
    ldr        r7, .L_0200d814
    mov        r0, r4
    ldr        r6, [r7, #4]
    ldr        r8, [r7, #0x1c]
    bl         make_savestate_slot_path
    ldr        r3, .L_0200d818
    ldr        r1, .L_0200d81c
    str        r3, [r7]
    bl         fopen
    subs       r5, r0, #0
    beq        .L_0200d800
    mov        r0, #3
    bl         address_020858b0
    mov        r0, r6
    bl         encode_m68k_program_counter_for_savestate
    mov        r0, r8
    bl         encode_z80_pc_and_sp_as_ram_offsets
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    mov        r0, r7
    bl         fwrite
    mov        r1, #4
    mov        r2, #8
    mov        r3, r5
    mov        r0, r6
    bl         fwrite
    mov        r1, #4
    mov        r2, #8
    mov        r3, r5
    add        r0, r6, #0x20
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x40
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x44
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x48
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x4c
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x50
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x8c
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x90
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x94
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x98
    bl         fwrite
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    add        r0, r6, #0x9c
    bl         fwrite
    ldrb       r3, [r6, #0xa1]
    ldrb       r1, [r6, #0xa0]
    ldrb       r0, [r6, #0xa3]
    lsl        r3, r3, #0x10
    ldrb       r2, [r6, #0xa2]
    orr        r3, r3, r1, lsl #24
    orr        r3, r3, r0
    add        r4, sp, #8
    orr        r3, r3, r2, lsl #8
    str        r3, [r4, #-4]!
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    mov        r0, r4
    bl         fwrite
    ldrb       r3, [r6, #0xa4]
    ldrb       ip, [r6, #0xa5]
    mov        r1, #4
    orr        ip, ip, r3, lsl #8
    mov        r2, #1
    mov        r3, r5
    mov        r0, r4
    str        ip, [sp, #4]
    bl         fwrite
    mov        r1, #1
    mov        r2, #0x10000
    mov        r3, r5
    ldr        r0, [r7, #8]
    bl         fwrite
    mov        r1, #1
    mov        r2, #0x18
    mov        r3, r5
    ldr        r0, [r7, #0xc]
    bl         fwrite
    mov        r1, #2
    mov        r2, #0x40
    mov        r3, r5
    ldr        r0, [r7, #0x10]
    bl         fwrite
    mov        r1, #2
    mov        r2, #0x28
    mov        r3, r5
    ldr        r0, [r7, #0x14]
    bl         fwrite
    mov        r1, #1
    mov        r2, #0x10000
    mov        r3, r5
    ldr        r0, [r7, #0x18]
    bl         fwrite
    mov        r1, #1
    mov        r2, #0x2000
    mov        r3, r5
    ldr        r0, [r7, #0x24]
    bl         fwrite
    add        r0, r8, #0x400
    mov        r1, #1
    mov        r2, #0x5c
    mov        r3, r5
    add        r0, r0, #4
    bl         fwrite
    mov        r1, #1
    mov        r2, #0x100
    mov        r3, r5
    ldr        r0, [r7, #0x28]
    bl         fwrite
    mov        r1, #1
    mov        r2, #0x100
    mov        r3, r5
    ldr        r0, [r7, #0x2c]
    bl         fwrite
    mov        r1, #1
    mov        r2, #0x20
    mov        r3, r5
    ldr        r0, [r7, #0x30]
    bl         fwrite
    ldr        r3, .L_0200d820
    ldr        r2, .L_0200d824
    ldrb       r1, [r3]
    ldr        r3, .L_0200d828
    ldrb       ip, [r2]
    ldrb       r2, [r3]
    orr        ip, ip, r1, lsl #16
    orr        ip, ip, r2, lsl #8
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    mov        r0, r4
    str        ip, [sp, #4]
    bl         fwrite
    bl         get_z80_bank_latch_for_savestate
    mov        r1, #4
    str        r0, [sp, #4]
    mov        r2, #1
    mov        r3, r5
    mov        r0, r4
    bl         fwrite
    ldrb       r3, [r8, #0x4a5]
    ldrb       ip, [r8, #0x4a4]
    ldrb       r1, [r8, #0x4a6]
    ldrb       r2, [r8, #0x4a7]
    orr        ip, ip, r3, lsl #8
    orr        ip, ip, r1, lsl #16
    orr        ip, ip, r2, lsl #24
    mov        r1, #4
    mov        r2, #1
    mov        r3, r5
    mov        r0, r4
    str        ip, [sp, #4]
    bl         fwrite
    mov        r0, r5
    bl         fclose
    mov        r0, r6
    bl         rebase_m68k_program_counter_after_savestate
    mov        r0, r8
    bl         rebase_z80_pc_and_sp_into_work_ram
    mov        r0, #3
    bl         address_020858bc
.L_0200d800:
    add        sp, sp, #8
    pop        {r4, r5, r6, r7, r8, pc}
.L_0200d808:
    bl         prepare_savestate_header_and_regions
    b          .L_0200d4e4
.L_0200d810:
    .word savestate_regions_initialized
.L_0200d814:
    .word savestate_header
.L_0200d818:
    .word 0x4a530003
.L_0200d81c:
    .word address_0208f070
.L_0200d820:
    .word z80_bus_request_asserted
.L_0200d824:
    .word address_0208f349
.L_0200d828:
    .word z80_reset_released

/* 0x0200d82c */
.global probe_savestate_slots
probe_savestate_slots:
    push       {r4, lr}
    mov        r0, #1
    bl         make_savestate_slot_path
    ldr        r1, .L_0200d8ac
    mov        r4, r0
    bl         fopen
    cmp        r0, #0
    beq        .L_0200d864
    ldr        r3, .L_0200d8b0
    ldr        r1, [r3]
    ldr        r2, [r1, #0x258]
    orr        r2, r2, #0x20
    str        r2, [r1, #0x258]
    bl         fclose
.L_0200d864:
    mov        r0, r4
    bl         address_020826fc
    mov        r0, #2
    bl         make_savestate_slot_path
    ldr        r1, .L_0200d8ac
    mov        r4, r0
    bl         fopen
    cmp        r0, #0
    beq        .L_0200d8a0
    ldr        r3, .L_0200d8b0
    ldr        r1, [r3]
    ldr        r2, [r1, #0x258]
    orr        r2, r2, #0x40
    str        r2, [r1, #0x258]
    bl         fclose
.L_0200d8a0:
    mov        r0, r4
    pop        {r4, lr}
    b          address_020826fc
.L_0200d8ac:
    .word address_0208f074
.L_0200d8b0:
    .word loaded_cartridge_metadata
    ldr        r3, .L_0200d8c0
    str        r0, [r3]
    bx         lr
.L_0200d8c0:
    .word address_0208f35c
