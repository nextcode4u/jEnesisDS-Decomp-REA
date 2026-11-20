/* ARM9 save states — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02002e54  display_savestate_slot_status

undefined4 display_savestate_slot_status(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  DAT_02098fd0 = 0;
  if (param_1 == 1) {
    uVar3 = *(uint *)(DAT_02098fc8 + 600);
    arm_veneer_for_nds_swiwaitforvblank();
    clear_text_rows_from(0xe);
    write_text_at_tile_position("Savestate Slot",0xe,8);
    uVar3 = uVar3 >> 5 & 1;
    format_hexadecimal_value(1,0xe,0x17);
    uVar4 = uVar3 ^ 1;
    if (uVar3 == 0) goto LAB_02002eac;
  }
  else {
    if ((param_1 != 2) || ((*(uint *)(DAT_02098fc8 + 600) & 0x40) == 0)) {
      arm_veneer_for_nds_swiwaitforvblank();
      clear_text_rows_from(0xe);
      write_text_at_tile_position("Savestate Slot",0xe,8);
      format_hexadecimal_value(param_1,0xe,0x17);
      uVar4 = 1;
      goto LAB_02002eac;
    }
    arm_veneer_for_nds_swiwaitforvblank();
    clear_text_rows_from(0xe);
    write_text_at_tile_position("Savestate Slot",0xe,8);
    format_hexadecimal_value(2,0xe,0x17);
    uVar4 = 0;
  }
  write_text_at_tile_position(&DAT_0208f1bc,0x11,0xe);
LAB_02002eac:
  write_text_at_tile_position(&DAT_0208f1c4,0x12,0xe);
  write_text_at_tile_position("CANCEL",0x13,0xd);
  draw_rom_browser_row_highlight(0x13);
  arm_veneer_for_nds_swiwaitforvblank();
  uVar3 = 2;
  while( true ) {
    arm_veneer_for_sample_ds_keys_and_update_repeat_state();
    draw_rom_browser_row_highlight(uVar3 + 0x11);
    uVar1 = arm_veneer_for_read_latched_ds_key_state();
    if ((((uVar1 & 0x40) != 0) && ((DAT_02098fd0 & 0x40) == 0)) && (uVar4 < uVar3)) {
      restore_overlay_tilemap_row(uVar3 + 0x11);
      uVar3 = uVar3 - 1;
    }
    if ((((uVar1 & 0x80) != 0) && ((DAT_02098fd0 & 0x80) == 0)) && (uVar3 < 2)) {
      restore_overlay_tilemap_row(uVar3 + 0x11);
      uVar3 = uVar3 + 1;
    }
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (DAT_02098fd0 ^ 1) & 1;
    }
    DAT_02098fd0 = uVar1;
    if ((uVar1 & 4) != 0) break;
    arm_veneer_for_nds_swiwaitforvblank();
    arm_veneer_for_nds_swiwaitforvblank();
    arm_veneer_for_nds_swiwaitforvblank();
    if (uVar2 != 0) {
      restore_overlay_tilemap_row(uVar3 + 0x11);
      if (uVar3 == 0) {
        write_text_at_tile_position("Loading.. DONT switch off!",0xf,1);
        load_emulator_savestate(param_1);
        DAT_0b000024 = 0;
      }
      else if (uVar3 == 1) {
        write_text_at_tile_position("Saving... DONT switch off!",0xf);
        if (param_1 == 1) {
          *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x20;
        }
        else if (param_1 == 2) {
          *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x40;
        }
        write_emulator_savestate(param_1);
      }
LAB_02002fac:
      arm_veneer_for_nds_swiwaitforvblank();
      arm_veneer_for_nds_swiwaitforvblank();
      arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
      arm_veneer_for_nds_swiwaitforvblank();
      draw_current_rom_information();
      arm_veneer_for_nds_swiwaitforvblank();
      arm_veneer_for_nds_swiwaitforvblank();
      return 1;
    }
  }
  arm_veneer_for_nds_swiwaitforvblank();
  arm_veneer_for_nds_swiwaitforvblank();
  arm_veneer_for_nds_swiwaitforvblank();
  restore_overlay_tilemap_row(0x13);
  goto LAB_02002fac;
}


// 0x02004438  get_z80_bank_latch_for_savestate

undefined4 get_z80_bank_latch_for_savestate(void)

{
  return z80_cartridge_bank_base;
}


// 0x02004448  restore_z80_bank_latch_from_savestate

void restore_z80_bank_latch_from_savestate(undefined4 param_1)

{
  z80_cartridge_bank_base = param_1;
  return;
}


// 0x02004f70  encode_z80_pc_and_sp_as_ram_offsets

void encode_z80_pc_and_sp_as_ram_offsets(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x420) - *(int *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x424) - *(int *)(param_1 + 0x400);
  *(char *)(param_1 + 0x427) = (char)((uint)iVar2 >> 0x18);
  *(char *)(param_1 + 0x421) = (char)((uint)iVar1 >> 8);
  *(char *)(param_1 + 0x422) = (char)((uint)iVar1 >> 0x10);
  *(char *)(param_1 + 0x423) = (char)((uint)iVar1 >> 0x18);
  *(char *)(param_1 + 0x425) = (char)((uint)iVar2 >> 8);
  *(char *)(param_1 + 0x426) = (char)((uint)iVar2 >> 0x10);
  *(char *)(param_1 + 0x420) = (char)iVar1;
  *(char *)(param_1 + 0x424) = (char)iVar2;
  return;
}


// 0x0200500c  rebase_z80_pc_and_sp_into_work_ram

void rebase_z80_pc_and_sp_into_work_ram(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x420) + *(int *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x424) + *(int *)(param_1 + 0x400);
  *(char *)(param_1 + 0x427) = (char)((uint)iVar2 >> 0x18);
  *(char *)(param_1 + 0x421) = (char)((uint)iVar1 >> 8);
  *(char *)(param_1 + 0x422) = (char)((uint)iVar1 >> 0x10);
  *(char *)(param_1 + 0x423) = (char)((uint)iVar1 >> 0x18);
  *(char *)(param_1 + 0x425) = (char)((uint)iVar2 >> 8);
  *(char *)(param_1 + 0x426) = (char)((uint)iVar2 >> 0x10);
  *(char *)(param_1 + 0x420) = (char)iVar1;
  *(char *)(param_1 + 0x424) = (char)iVar2;
  return;
}


// 0x02005164  rebase_m68k_program_counter_after_savestate

void rebase_m68k_program_counter_after_savestate(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)(**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x44));
  DAT_02099044 = piVar1;
  *(char *)(param_1 + 0x54) = (char)*piVar1;
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)((int)piVar1 + 1);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)((int)piVar1 + 2);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)((int)piVar1 + 3);
  uVar2 = CONCAT13(*(undefined1 *)(param_1 + 0x47),
                   CONCAT12(*(undefined1 *)(param_1 + 0x46),
                            CONCAT11(*(undefined1 *)(param_1 + 0x45),*(undefined1 *)(param_1 + 0x44)
                                    )));
  uVar4 = uVar2 & ~piVar1[1];
  *(char *)(param_1 + 0x9e) = (char)(uVar4 >> 0x10);
  *(char *)(param_1 + 0x9c) = (char)uVar4;
  *(char *)(param_1 + 0x9d) = (char)(uVar4 >> 8);
  *(char *)(param_1 + 0x9f) = (char)(uVar4 >> 0x18);
  uVar2 = uVar2 & piVar1[1];
  *(char *)(param_1 + 0x46) = (char)(uVar2 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)uVar2;
  *(char *)(param_1 + 0x45) = (char)(uVar2 >> 8);
  *(char *)(param_1 + 0x47) = (char)(uVar2 >> 0x18);
  iVar3 = uVar2 + *piVar1;
  *(char *)(param_1 + 0x47) = (char)((uint)iVar3 >> 0x18);
  *(char *)(param_1 + 0x45) = (char)((uint)iVar3 >> 8);
  *(char *)(param_1 + 0x46) = (char)((uint)iVar3 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)iVar3;
  return;
}


// 0x0200526c  encode_m68k_program_counter_for_savestate

void encode_m68k_program_counter_for_savestate(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x54) | *(uint *)(param_1 + 0x9c);
  *(char *)(param_1 + 0x47) = (char)(uVar1 >> 0x18);
  *(char *)(param_1 + 0x45) = (char)(uVar1 >> 8);
  *(char *)(param_1 + 0x46) = (char)(uVar1 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)uVar1;
  return;
}


// 0x020059f0  clear_sound_mirrors_before_state_load

void clear_sound_mirrors_before_state_load(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  dac_queue_bytes = 0;
  puVar3 = &ym2612_bank_1_mirror;
  ym2612_bank_1_queue_bytes = 0;
  DAT_023db788 = 0;
  ym2612_bank_0_queue_bytes = 0;
  DAT_02099230 = 0xc0;
  DAT_023db778 = 0;
  DAT_023db784 = 0;
  DAT_023db77c = 0;
  DAT_023db790 = 0;
  DAT_02099132 = 0xc0;
  DAT_02099232 = 0xc0;
  DAT_02099131 = 0xc0;
  DAT_02099231 = 0xc0;
  DAT_02099130 = 0xc0;
  puVar1 = &ym2612_bank_0_mirror;
  do {
    puVar2 = puVar1;
    puVar2[0xb2] = 0;
    puVar3[0xb2] = 0;
    puVar3 = puVar3 + -1;
    puVar1 = puVar2 + -1;
  } while (puVar2 + -1 != (undefined1 *)0x2098ff9);
  puVar2[0xad] = 0;
  puVar2[0xa8] = 0;
  puVar2[0xa7] = 0;
  puVar2[0xa6] = 0;
  puVar2[0xa5] = 0;
  puVar2[0xa4] = 0;
  puVar2[0xa3] = 0;
  puVar2[0xa2] = 0;
  return;
}


// 0x02005aac  get_ym2612_bank_0_mirror_for_savestate

undefined1 * get_ym2612_bank_0_mirror_for_savestate(void)

{
  return &ym2612_bank_0_mirror;
}


// 0x02005ab8  get_ym2612_bank_1_mirror_for_savestate

undefined1 * get_ym2612_bank_1_mirror_for_savestate(void)

{
  return &ym2612_bank_1_mirror;
}


// 0x02005ac4  get_psg_mirror_for_savestate

undefined * get_psg_mirror_for_savestate(void)

{
  return &DAT_0209937c;
}


// 0x02009cb0  bind_vdp_memory_regions_for_savestate

void bind_vdp_memory_regions_for_savestate(void)

{
  int iVar1;
  
  iVar1 = DAT_023eb348;
  *(undefined1 **)(DAT_023eb348 + 0xc) = &vdp_registers;
  *(undefined2 **)(iVar1 + 0x14) = &vdp_vsram;
  *(undefined1 **)(iVar1 + 0x18) = &vdp_vram;
  *(undefined2 **)(iVar1 + 0x10) = &vdp_cram;
  return;
}


// 0x0200d03c  prepare_savestate_header_and_regions

void prepare_savestate_header_and_regions(void)

{
  DAT_023eb348 = &DAT_023eb314;
  DAT_023eb314 = 0x4a530003;
  DAT_023eb318 = DAT_0b000028;
  DAT_023eb31c = &DAT_023cb634;
  DAT_023eb330 = DAT_0b00002c;
  DAT_023eb338 = get_z80_work_ram_buffer();
  DAT_023eb33c = get_ym2612_bank_0_mirror_for_savestate();
  DAT_023eb340 = get_ym2612_bank_1_mirror_for_savestate();
  DAT_023eb344 = get_psg_mirror_for_savestate();
  bind_vdp_memory_regions_for_savestate();
  DAT_020b4c4c = 1;
  return;
}


// 0x0200d0b8  make_savestate_slot_path

int make_savestate_slot_path(byte param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = newlib_strlen(DAT_02098fc8);
  iVar2 = newlib_malloc_global_reent_wrapper(iVar1 + 3);
  newlib_strncpy(iVar2,DAT_02098fc8,iVar1);
  iVar3 = iVar2 + iVar1;
  *(undefined1 *)(iVar3 + -4) = 0x5f;
  *(undefined1 *)(iVar3 + -2) = 0x2e;
  *(undefined1 *)(iVar3 + -1) = 0x6a;
  *(byte *)(iVar3 + -3) = (param_1 & 3) + 0x30;
  *(undefined1 *)(iVar2 + iVar1) = 0x73;
  *(undefined1 *)(iVar3 + 2) = 0;
  *(undefined1 *)(iVar3 + 1) = 0x74;
  return iVar2;
}


// 0x0200d13c  load_emulator_savestate

void load_emulator_savestate(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_2c;
  
  if (DAT_020b4c4c == 0) {
    prepare_savestate_header_and_regions();
  }
  iVar2 = DAT_023eb330;
  iVar1 = DAT_023eb318;
  local_2c = 0;
  uVar3 = make_savestate_slot_path(param_1);
  iVar4 = newlib_fopen(uVar3,&DAT_0208f074);
  if (iVar4 != 0) {
    arm_veneer_for_disable_arm9_interrupt_sources(3);
    configure_ds_display_windows();
    clear_sound_mirrors_before_state_load();
    newlib_fread(&DAT_023eb314,4,1,iVar4);
    newlib_fread(iVar1,4,8,iVar4);
    newlib_fread(iVar1 + 0x20,4,8,iVar4);
    newlib_fread(iVar1 + 0x40,4,1,iVar4);
    newlib_fread(iVar1 + 0x44,4,1,iVar4);
    newlib_fread(iVar1 + 0x48,4,1,iVar4);
    newlib_fread(iVar1 + 0x4c,4,1,iVar4);
    newlib_fread(iVar1 + 0x50,4,1,iVar4);
    newlib_fread(iVar1 + 0x8c,4,1,iVar4);
    newlib_fread(iVar1 + 0x90,4,1,iVar4);
    newlib_fread(iVar1 + 0x94,4,1,iVar4);
    if (1 < (byte)DAT_023eb314) {
      newlib_fread(iVar1 + 0x98,4,1,iVar4);
    }
    newlib_fread(iVar1 + 0x9c,4,1,iVar4);
    newlib_fread(&local_2c,4,1,iVar4);
    *(undefined1 *)(iVar1 + 0xa0) = local_2c._3_1_;
    *(char *)(iVar1 + 0xa1) = (char)((uint)local_2c >> 0x10);
    *(char *)(iVar1 + 0xa2) = (char)((uint)local_2c >> 8);
    *(char *)(iVar1 + 0xa3) = (char)local_2c;
    newlib_fread(&local_2c,4,1,iVar4);
    *(char *)(iVar1 + 0xa4) = (char)((uint)local_2c >> 8);
    *(char *)(iVar1 + 0xa5) = (char)local_2c;
    newlib_fread(DAT_023eb31c,1,0x10000,iVar4);
    newlib_fread(DAT_023eb320,1,0x18,iVar4);
    newlib_fread(DAT_023eb324,2,0x40,iVar4);
    newlib_fread(DAT_023eb328,2,0x28,iVar4);
    newlib_fread(DAT_023eb32c,1,0x10000,iVar4);
    if (1 < (byte)DAT_023eb314) {
      newlib_fread(DAT_023eb338,1,0x2000,iVar4);
      newlib_fread(iVar2 + 0x404,1,0x5c,iVar4);
      newlib_fread(DAT_023eb33c,1,0x100,iVar4);
      newlib_fread(DAT_023eb340,1,0x100,iVar4);
      newlib_fread(DAT_023eb344,1,0x20,iVar4);
      newlib_fread(&local_2c,4,1,iVar4);
      DAT_02099000 = (undefined1)((uint)local_2c >> 0x10);
      DAT_02099001 = (undefined1)((uint)local_2c >> 8);
      DAT_0208f349 = (undefined1)local_2c;
      newlib_fread(&local_2c,4,1,iVar4);
      restore_z80_bank_latch_from_savestate(local_2c);
      newlib_fread(&local_2c,4,1,iVar4);
      *(undefined1 *)(iVar2 + 0x4a4) = (undefined1)local_2c;
      *(undefined1 *)(iVar2 + 0x4a5) = local_2c._1_1_;
      *(undefined1 *)(iVar2 + 0x4a6) = local_2c._2_1_;
      *(undefined1 *)(iVar2 + 0x4a7) = local_2c._3_1_;
    }
    newlib_fclose(iVar4);
    rebuild_display_from_vdp_state();
    rebase_m68k_program_counter_after_savestate(iVar1);
    if (1 < (byte)DAT_023eb314) {
      rebase_z80_pc_and_sp_into_work_ram(iVar2);
      restart_arm7_audio_and_replay_fm_registers();
    }
    arm_veneer_for_enable_arm9_interrupt_sources(3);
  }
  return;
}


// 0x0200d4c8  write_emulator_savestate

void write_emulator_savestate(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_1c;
  
  if (DAT_020b4c4c == 0) {
    prepare_savestate_header_and_regions();
  }
  iVar2 = DAT_023eb330;
  iVar1 = DAT_023eb318;
  uVar3 = make_savestate_slot_path(param_1);
  DAT_023eb314 = 0x4a530003;
  iVar4 = newlib_fopen(uVar3,&DAT_0208f070);
  if (iVar4 != 0) {
    arm_veneer_for_disable_arm9_interrupt_sources(3);
    encode_m68k_program_counter_for_savestate(iVar1);
    encode_z80_pc_and_sp_as_ram_offsets(iVar2);
    newlib_fwrite(&DAT_023eb314,4,1,iVar4);
    newlib_fwrite(iVar1,4,8,iVar4);
    newlib_fwrite(iVar1 + 0x20,4,8,iVar4);
    newlib_fwrite(iVar1 + 0x40,4,1,iVar4);
    newlib_fwrite(iVar1 + 0x44,4,1,iVar4);
    newlib_fwrite(iVar1 + 0x48,4,1,iVar4);
    newlib_fwrite(iVar1 + 0x4c,4,1,iVar4);
    newlib_fwrite(iVar1 + 0x50,4,1,iVar4);
    newlib_fwrite(iVar1 + 0x8c,4,1,iVar4);
    newlib_fwrite(iVar1 + 0x90,4,1,iVar4);
    newlib_fwrite(iVar1 + 0x94,4,1,iVar4);
    newlib_fwrite(iVar1 + 0x98,4,1,iVar4);
    newlib_fwrite(iVar1 + 0x9c,4,1,iVar4);
    local_1c = (uint)*(byte *)(iVar1 + 0xa1) << 0x10 | (uint)*(byte *)(iVar1 + 0xa0) << 0x18 |
               (uint)*(byte *)(iVar1 + 0xa3) | (uint)*(byte *)(iVar1 + 0xa2) << 8;
    newlib_fwrite(&local_1c,4,1,iVar4);
    local_1c = (uint)CONCAT11(*(undefined1 *)(iVar1 + 0xa4),*(undefined1 *)(iVar1 + 0xa5));
    newlib_fwrite(&local_1c,4,1,iVar4);
    newlib_fwrite(DAT_023eb31c,1,0x10000,iVar4);
    newlib_fwrite(DAT_023eb320,1,0x18,iVar4);
    newlib_fwrite(DAT_023eb324,2,0x40,iVar4);
    newlib_fwrite(DAT_023eb328,2,0x28,iVar4);
    newlib_fwrite(DAT_023eb32c,1,0x10000,iVar4);
    newlib_fwrite(DAT_023eb338,1,0x2000,iVar4);
    newlib_fwrite(iVar2 + 0x404,1,0x5c,iVar4);
    newlib_fwrite(DAT_023eb33c,1,0x100,iVar4);
    newlib_fwrite(DAT_023eb340,1,0x100,iVar4);
    newlib_fwrite(DAT_023eb344,1,0x20,iVar4);
    local_1c = (uint)DAT_0208f349 | (uint)DAT_02099000 << 0x10 | (uint)DAT_02099001 << 8;
    newlib_fwrite(&local_1c,4,1,iVar4);
    local_1c = get_z80_bank_latch_for_savestate();
    newlib_fwrite(&local_1c,4,1,iVar4);
    local_1c = *(uint *)(iVar2 + 0x4a4);
    newlib_fwrite(&local_1c,4,1,iVar4);
    newlib_fclose(iVar4);
    rebase_m68k_program_counter_after_savestate(iVar1);
    rebase_z80_pc_and_sp_into_work_ram(iVar2);
    arm_veneer_for_enable_arm9_interrupt_sources(3);
  }
  return;
}


// 0x0200d82c  probe_savestate_slots

void probe_savestate_slots(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = make_savestate_slot_path(1);
  iVar2 = newlib_fopen(uVar1,&DAT_0208f074);
  if (iVar2 != 0) {
    *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x20;
    newlib_fclose();
  }
  newlib_free_global_reent_wrapper(uVar1);
  uVar1 = make_savestate_slot_path(2);
  iVar2 = newlib_fopen(uVar1,&DAT_0208f074);
  if (iVar2 != 0) {
    *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x40;
    newlib_fclose();
  }
  newlib_free_r(&DAT_0208f3a0,uVar1);
  return;
}

