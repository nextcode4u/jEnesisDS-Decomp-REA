/* ARM9 save states — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02002e54  display_savestate_slot_status

undefined4 display_savestate_slot_status(int slot_number)

{
  uint ds_keys;
  uint confirm_pressed;
  uint slot_flag_or_menu_row;
  uint first_available_row;
  
  previous_ds_keys = 0;
  if (slot_number == 1) {
    slot_flag_or_menu_row = *(uint *)(loaded_cartridge_metadata + 600);
    arm_veneer_for_nds_swiwaitforvblank();
    clear_text_rows_from(0xe);
    write_text_at_tile_position("Savestate Slot",0xe,8);
    slot_flag_or_menu_row = slot_flag_or_menu_row >> 5 & 1;
    format_hexadecimal_value(1,0xe,0x17);
    first_available_row = slot_flag_or_menu_row ^ 1;
    if (slot_flag_or_menu_row == 0) goto LAB_02002eac;
  }
  else {
    if ((slot_number != 2) || ((*(uint *)(loaded_cartridge_metadata + 600) & 0x40) == 0)) {
      arm_veneer_for_nds_swiwaitforvblank();
      clear_text_rows_from(0xe);
      write_text_at_tile_position("Savestate Slot",0xe,8);
      format_hexadecimal_value(slot_number,0xe,0x17);
      first_available_row = 1;
      goto LAB_02002eac;
    }
    arm_veneer_for_nds_swiwaitforvblank();
    clear_text_rows_from(0xe);
    write_text_at_tile_position("Savestate Slot",0xe,8);
    format_hexadecimal_value(2,0xe,0x17);
    first_available_row = 0;
  }
  write_text_at_tile_position(&DAT_0208f1bc,0x11,0xe);
LAB_02002eac:
  write_text_at_tile_position(&DAT_0208f1c4,0x12,0xe);
  write_text_at_tile_position("CANCEL",0x13,0xd);
  draw_rom_browser_row_highlight(0x13);
  arm_veneer_for_nds_swiwaitforvblank();
  slot_flag_or_menu_row = 2;
  while( true ) {
    arm_veneer_for_sample_ds_keys_and_update_repeat_state();
    draw_rom_browser_row_highlight(slot_flag_or_menu_row + 0x11);
    ds_keys = arm_veneer_for_read_latched_ds_key_state();
    if ((((ds_keys & 0x40) != 0) && ((previous_ds_keys & 0x40) == 0)) && (first_available_row < slot_flag_or_menu_row)) {
      restore_overlay_tilemap_row(slot_flag_or_menu_row + 0x11);
      slot_flag_or_menu_row = slot_flag_or_menu_row - 1;
    }
    if ((((ds_keys & 0x80) != 0) && ((previous_ds_keys & 0x80) == 0)) && (slot_flag_or_menu_row < 2)) {
      restore_overlay_tilemap_row(slot_flag_or_menu_row + 0x11);
      slot_flag_or_menu_row = slot_flag_or_menu_row + 1;
    }
    if ((ds_keys & 1) == 0) {
      confirm_pressed = 0;
    }
    else {
      confirm_pressed = (previous_ds_keys ^ 1) & 1;
    }
    previous_ds_keys = ds_keys;
    if ((ds_keys & 4) != 0) break;
    arm_veneer_for_nds_swiwaitforvblank();
    arm_veneer_for_nds_swiwaitforvblank();
    arm_veneer_for_nds_swiwaitforvblank();
    if (confirm_pressed != 0) {
      restore_overlay_tilemap_row(slot_flag_or_menu_row + 0x11);
      if (slot_flag_or_menu_row == 0) {
        write_text_at_tile_position("Loading.. DONT switch off!",0xf,1);
        load_emulator_savestate(slot_number);
        DAT_0b000024 = 0;
      }
      else if (slot_flag_or_menu_row == 1) {
        write_text_at_tile_position("Saving... DONT switch off!",0xf);
        if (slot_number == 1) {
          *(uint *)(loaded_cartridge_metadata + 600) = *(uint *)(loaded_cartridge_metadata + 600) | 0x20;
        }
        else if (slot_number == 2) {
          *(uint *)(loaded_cartridge_metadata + 600) = *(uint *)(loaded_cartridge_metadata + 600) | 0x40;
        }
        write_emulator_savestate(slot_number);
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

void encode_z80_pc_and_sp_as_ram_offsets(int z80_state)

{
  int guest_pc;
  int guest_sp;
  
  guest_pc = *(int *)(z80_state + 0x420) - *(int *)(z80_state + 0x400);
  guest_sp = *(int *)(z80_state + 0x424) - *(int *)(z80_state + 0x400);
  *(char *)(z80_state + 0x427) = (char)((uint)guest_sp >> 0x18);
  *(char *)(z80_state + 0x421) = (char)((uint)guest_pc >> 8);
  *(char *)(z80_state + 0x422) = (char)((uint)guest_pc >> 0x10);
  *(char *)(z80_state + 0x423) = (char)((uint)guest_pc >> 0x18);
  *(char *)(z80_state + 0x425) = (char)((uint)guest_sp >> 8);
  *(char *)(z80_state + 0x426) = (char)((uint)guest_sp >> 0x10);
  *(char *)(z80_state + 0x420) = (char)guest_pc;
  *(char *)(z80_state + 0x424) = (char)guest_sp;
  return;
}


// 0x0200500c  rebase_z80_pc_and_sp_into_work_ram

void rebase_z80_pc_and_sp_into_work_ram(int z80_state)

{
  int pc_host_pointer;
  int sp_host_pointer;
  
  pc_host_pointer = *(int *)(z80_state + 0x420) + *(int *)(z80_state + 0x400);
  sp_host_pointer = *(int *)(z80_state + 0x424) + *(int *)(z80_state + 0x400);
  *(char *)(z80_state + 0x427) = (char)((uint)sp_host_pointer >> 0x18);
  *(char *)(z80_state + 0x421) = (char)((uint)pc_host_pointer >> 8);
  *(char *)(z80_state + 0x422) = (char)((uint)pc_host_pointer >> 0x10);
  *(char *)(z80_state + 0x423) = (char)((uint)pc_host_pointer >> 0x18);
  *(char *)(z80_state + 0x425) = (char)((uint)sp_host_pointer >> 8);
  *(char *)(z80_state + 0x426) = (char)((uint)sp_host_pointer >> 0x10);
  *(char *)(z80_state + 0x420) = (char)pc_host_pointer;
  *(char *)(z80_state + 0x424) = (char)sp_host_pointer;
  return;
}


// 0x02005164  rebase_m68k_program_counter_after_savestate

void rebase_m68k_program_counter_after_savestate(int m68k_state)

{
  int *pc_mapping;
  uint guest_pc_or_offset;
  int pc_host_pointer;
  uint guest_pc_page_bits;
  
  pc_mapping = (int *)(**(code **)(m68k_state + 0x88))(*(undefined4 *)(m68k_state + 0x44));
  m68k_pc_mapping_entry = pc_mapping;
  *(char *)(m68k_state + 0x54) = (char)*pc_mapping;
  *(undefined1 *)(m68k_state + 0x55) = *(undefined1 *)((int)pc_mapping + 1);
  *(undefined1 *)(m68k_state + 0x56) = *(undefined1 *)((int)pc_mapping + 2);
  *(undefined1 *)(m68k_state + 0x57) = *(undefined1 *)((int)pc_mapping + 3);
  guest_pc_or_offset = CONCAT13(*(undefined1 *)(m68k_state + 0x47),
                   CONCAT12(*(undefined1 *)(m68k_state + 0x46),
                            CONCAT11(*(undefined1 *)(m68k_state + 0x45),*(undefined1 *)(m68k_state + 0x44)
                                    )));
  guest_pc_page_bits = guest_pc_or_offset & ~pc_mapping[1];
  *(char *)(m68k_state + 0x9e) = (char)(guest_pc_page_bits >> 0x10);
  *(char *)(m68k_state + 0x9c) = (char)guest_pc_page_bits;
  *(char *)(m68k_state + 0x9d) = (char)(guest_pc_page_bits >> 8);
  *(char *)(m68k_state + 0x9f) = (char)(guest_pc_page_bits >> 0x18);
  guest_pc_or_offset = guest_pc_or_offset & pc_mapping[1];
  *(char *)(m68k_state + 0x46) = (char)(guest_pc_or_offset >> 0x10);
  *(char *)(m68k_state + 0x44) = (char)guest_pc_or_offset;
  *(char *)(m68k_state + 0x45) = (char)(guest_pc_or_offset >> 8);
  *(char *)(m68k_state + 0x47) = (char)(guest_pc_or_offset >> 0x18);
  pc_host_pointer = guest_pc_or_offset + *pc_mapping;
  *(char *)(m68k_state + 0x47) = (char)((uint)pc_host_pointer >> 0x18);
  *(char *)(m68k_state + 0x45) = (char)((uint)pc_host_pointer >> 8);
  *(char *)(m68k_state + 0x46) = (char)((uint)pc_host_pointer >> 0x10);
  *(char *)(m68k_state + 0x44) = (char)pc_host_pointer;
  return;
}


// 0x0200526c  encode_m68k_program_counter_for_savestate

void encode_m68k_program_counter_for_savestate(int m68k_state)

{
  uint guest_pc;
  
  guest_pc = *(int *)(m68k_state + 0x44) - *(int *)(m68k_state + 0x54) | *(uint *)(m68k_state + 0x9c);
  *(char *)(m68k_state + 0x47) = (char)(guest_pc >> 0x18);
  *(char *)(m68k_state + 0x45) = (char)(guest_pc >> 8);
  *(char *)(m68k_state + 0x46) = (char)(guest_pc >> 0x10);
  *(char *)(m68k_state + 0x44) = (char)guest_pc;
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
  
  iVar1 = savestate_region_table;
  *(undefined1 **)(savestate_region_table + 0xc) = &vdp_registers;
  *(undefined2 **)(iVar1 + 0x14) = &vdp_vsram;
  *(undefined1 **)(iVar1 + 0x18) = &vdp_vram;
  *(undefined2 **)(iVar1 + 0x10) = &vdp_cram;
  return;
}


// 0x0200d03c  prepare_savestate_header_and_regions

void prepare_savestate_header_and_regions(void)

{
  savestate_region_table = &savestate_header;
  savestate_header = 0x4a530003;
  savestate_m68k_context = m68k_context_pointer;
  savestate_m68k_ram = &genesis_work_ram_bytes;
  savestate_z80_context = z80_context_pointer;
  savestate_z80_ram = get_z80_work_ram_buffer();
  savestate_ym2612_bank_0 = get_ym2612_bank_0_mirror_for_savestate();
  savestate_ym2612_bank_1 = get_ym2612_bank_1_mirror_for_savestate();
  savestate_psg_registers = get_psg_mirror_for_savestate();
  bind_vdp_memory_regions_for_savestate();
  savestate_regions_initialized = 1;
  return;
}


// 0x0200d0b8  make_savestate_slot_path

int make_savestate_slot_path(byte slot_number)

{
  int filename_length;
  int slot_path;
  int original_filename_end;
  
  filename_length = newlib_strlen(loaded_cartridge_metadata);
  slot_path = newlib_malloc_global_reent_wrapper(filename_length + 3);
  newlib_strncpy(slot_path,loaded_cartridge_metadata,filename_length);
  original_filename_end = slot_path + filename_length;
  *(undefined1 *)(original_filename_end + -4) = 0x5f;
  *(undefined1 *)(original_filename_end + -2) = 0x2e;
  *(undefined1 *)(original_filename_end + -1) = 0x6a;
  *(byte *)(original_filename_end + -3) = (slot_number & 3) + 0x30;
  *(undefined1 *)(slot_path + filename_length) = 0x73;
  *(undefined1 *)(original_filename_end + 2) = 0;
  *(undefined1 *)(original_filename_end + 1) = 0x74;
  return slot_path;
}


// 0x0200d13c  load_emulator_savestate

void load_emulator_savestate(undefined4 slot_number)

{
  int m68k_state;
  int z80_state;
  undefined4 slot_path;
  int state_stream;
  undefined4 packed_state_word;
  
  if (savestate_regions_initialized == 0) {
    prepare_savestate_header_and_regions();
  }
  z80_state = savestate_z80_context;
  m68k_state = savestate_m68k_context;
  packed_state_word = 0;
  slot_path = make_savestate_slot_path(slot_number);
  state_stream = newlib_fopen(slot_path,&binary_read_mode);
  if (state_stream != 0) {
    arm_veneer_for_disable_arm9_interrupt_sources(3);
    configure_ds_display_windows();
    clear_sound_mirrors_before_state_load();
    newlib_fread(&savestate_header,4,1,state_stream);
    newlib_fread(m68k_state,4,8,state_stream);
    newlib_fread(m68k_state + 0x20,4,8,state_stream);
    newlib_fread(m68k_state + 0x40,4,1,state_stream);
    newlib_fread(m68k_state + 0x44,4,1,state_stream);
    newlib_fread(m68k_state + 0x48,4,1,state_stream);
    newlib_fread(m68k_state + 0x4c,4,1,state_stream);
    newlib_fread(m68k_state + 0x50,4,1,state_stream);
    newlib_fread(m68k_state + 0x8c,4,1,state_stream);
    newlib_fread(m68k_state + 0x90,4,1,state_stream);
    newlib_fread(m68k_state + 0x94,4,1,state_stream);
    if (1 < (byte)savestate_header) {
      newlib_fread(m68k_state + 0x98,4,1,state_stream);
    }
    newlib_fread(m68k_state + 0x9c,4,1,state_stream);
    newlib_fread(&packed_state_word,4,1,state_stream);
    *(undefined1 *)(m68k_state + 0xa0) = packed_state_word._3_1_;
    *(char *)(m68k_state + 0xa1) = (char)((uint)packed_state_word >> 0x10);
    *(char *)(m68k_state + 0xa2) = (char)((uint)packed_state_word >> 8);
    *(char *)(m68k_state + 0xa3) = (char)packed_state_word;
    newlib_fread(&packed_state_word,4,1,state_stream);
    *(char *)(m68k_state + 0xa4) = (char)((uint)packed_state_word >> 8);
    *(char *)(m68k_state + 0xa5) = (char)packed_state_word;
    newlib_fread(savestate_m68k_ram,1,0x10000,state_stream);
    newlib_fread(savestate_vdp_registers,1,0x18,state_stream);
    newlib_fread(savestate_cram,2,0x40,state_stream);
    newlib_fread(savestate_vsram,2,0x28,state_stream);
    newlib_fread(savestate_vram,1,0x10000,state_stream);
    if (1 < (byte)savestate_header) {
      newlib_fread(savestate_z80_ram,1,0x2000,state_stream);
      newlib_fread(z80_state + 0x404,1,0x5c,state_stream);
      newlib_fread(savestate_ym2612_bank_0,1,0x100,state_stream);
      newlib_fread(savestate_ym2612_bank_1,1,0x100,state_stream);
      newlib_fread(savestate_psg_registers,1,0x20,state_stream);
      newlib_fread(&packed_state_word,4,1,state_stream);
      z80_bus_request_asserted = (undefined1)((uint)packed_state_word >> 0x10);
      z80_reset_released = (undefined1)((uint)packed_state_word >> 8);
      DAT_0208f349 = (undefined1)packed_state_word;
      newlib_fread(&packed_state_word,4,1,state_stream);
      restore_z80_bank_latch_from_savestate(packed_state_word);
      newlib_fread(&packed_state_word,4,1,state_stream);
      *(undefined1 *)(z80_state + 0x4a4) = (undefined1)packed_state_word;
      *(undefined1 *)(z80_state + 0x4a5) = packed_state_word._1_1_;
      *(undefined1 *)(z80_state + 0x4a6) = packed_state_word._2_1_;
      *(undefined1 *)(z80_state + 0x4a7) = packed_state_word._3_1_;
    }
    newlib_fclose(state_stream);
    rebuild_display_from_vdp_state();
    rebase_m68k_program_counter_after_savestate(m68k_state);
    if (1 < (byte)savestate_header) {
      rebase_z80_pc_and_sp_into_work_ram(z80_state);
      restart_arm7_audio_and_replay_fm_registers();
    }
    arm_veneer_for_enable_arm9_interrupt_sources(3);
  }
  return;
}


// 0x0200d4c8  write_emulator_savestate

void write_emulator_savestate(undefined4 slot_number)

{
  int m68k_state;
  int z80_state;
  undefined4 slot_path;
  int state_stream;
  uint packed_state_word;
  
  if (savestate_regions_initialized == 0) {
    prepare_savestate_header_and_regions();
  }
  z80_state = savestate_z80_context;
  m68k_state = savestate_m68k_context;
  slot_path = make_savestate_slot_path(slot_number);
  savestate_header = 0x4a530003;
  state_stream = newlib_fopen(slot_path,&binary_write_mode);
  if (state_stream != 0) {
    arm_veneer_for_disable_arm9_interrupt_sources(3);
    encode_m68k_program_counter_for_savestate(m68k_state);
    encode_z80_pc_and_sp_as_ram_offsets(z80_state);
    newlib_fwrite(&savestate_header,4,1,state_stream);
    newlib_fwrite(m68k_state,4,8,state_stream);
    newlib_fwrite(m68k_state + 0x20,4,8,state_stream);
    newlib_fwrite(m68k_state + 0x40,4,1,state_stream);
    newlib_fwrite(m68k_state + 0x44,4,1,state_stream);
    newlib_fwrite(m68k_state + 0x48,4,1,state_stream);
    newlib_fwrite(m68k_state + 0x4c,4,1,state_stream);
    newlib_fwrite(m68k_state + 0x50,4,1,state_stream);
    newlib_fwrite(m68k_state + 0x8c,4,1,state_stream);
    newlib_fwrite(m68k_state + 0x90,4,1,state_stream);
    newlib_fwrite(m68k_state + 0x94,4,1,state_stream);
    newlib_fwrite(m68k_state + 0x98,4,1,state_stream);
    newlib_fwrite(m68k_state + 0x9c,4,1,state_stream);
    packed_state_word = (uint)*(byte *)(m68k_state + 0xa1) << 0x10 | (uint)*(byte *)(m68k_state + 0xa0) << 0x18 |
               (uint)*(byte *)(m68k_state + 0xa3) | (uint)*(byte *)(m68k_state + 0xa2) << 8;
    newlib_fwrite(&packed_state_word,4,1,state_stream);
    packed_state_word = (uint)CONCAT11(*(undefined1 *)(m68k_state + 0xa4),*(undefined1 *)(m68k_state + 0xa5));
    newlib_fwrite(&packed_state_word,4,1,state_stream);
    newlib_fwrite(savestate_m68k_ram,1,0x10000,state_stream);
    newlib_fwrite(savestate_vdp_registers,1,0x18,state_stream);
    newlib_fwrite(savestate_cram,2,0x40,state_stream);
    newlib_fwrite(savestate_vsram,2,0x28,state_stream);
    newlib_fwrite(savestate_vram,1,0x10000,state_stream);
    newlib_fwrite(savestate_z80_ram,1,0x2000,state_stream);
    newlib_fwrite(z80_state + 0x404,1,0x5c,state_stream);
    newlib_fwrite(savestate_ym2612_bank_0,1,0x100,state_stream);
    newlib_fwrite(savestate_ym2612_bank_1,1,0x100,state_stream);
    newlib_fwrite(savestate_psg_registers,1,0x20,state_stream);
    packed_state_word = (uint)DAT_0208f349 | (uint)z80_bus_request_asserted << 0x10 | (uint)z80_reset_released << 8;
    newlib_fwrite(&packed_state_word,4,1,state_stream);
    packed_state_word = get_z80_bank_latch_for_savestate();
    newlib_fwrite(&packed_state_word,4,1,state_stream);
    packed_state_word = *(uint *)(z80_state + 0x4a4);
    newlib_fwrite(&packed_state_word,4,1,state_stream);
    newlib_fclose(state_stream);
    rebase_m68k_program_counter_after_savestate(m68k_state);
    rebase_z80_pc_and_sp_into_work_ram(z80_state);
    arm_veneer_for_enable_arm9_interrupt_sources(3);
  }
  return;
}


// 0x0200d82c  probe_savestate_slots

void probe_savestate_slots(void)

{
  undefined4 slot_path;
  int state_stream;
  
  slot_path = make_savestate_slot_path(1);
  state_stream = newlib_fopen(slot_path,&binary_read_mode);
  if (state_stream != 0) {
    *(uint *)(loaded_cartridge_metadata + 600) = *(uint *)(loaded_cartridge_metadata + 600) | 0x20;
    newlib_fclose();
  }
  newlib_free_global_reent_wrapper(slot_path);
  slot_path = make_savestate_slot_path(2);
  state_stream = newlib_fopen(slot_path,&binary_read_mode);
  if (state_stream != 0) {
    *(uint *)(loaded_cartridge_metadata + 600) = *(uint *)(loaded_cartridge_metadata + 600) | 0x40;
    newlib_fclose();
  }
  newlib_free_r(&DAT_0208f3a0,slot_path);
  return;
}

