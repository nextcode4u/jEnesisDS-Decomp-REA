/* ARM9 emulator — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02000868  run_frame_h_int_off

void run_frame_h_int_off(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = DAT_0b000018;
  iVar2 = DAT_0b000014;
  uVar1 = DAT_0b000004;
  iVar5 = DAT_0b000000;
  begin_vdp_frame_and_refresh_backgrounds();
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar6 = uVar4 + 0x10;
      update_vdp_line_cycles_and_queue_m68k_interrupts(0x24);
      for (; uVar4 < uVar6; uVar4 = uVar4 + 1) {
        DAT_0b00000c = uVar4;
        tick_vdp_horizontal_interrupt_counter(uVar4);
        (*record_vdp_scanline_state)(uVar4);
      }
      (*DAT_0b000040)(iVar2 << 4);
      if ((((emulator_option_flags & 2) == 0) && (z80_reset_released == '\x01')) && (z80_bus_request_asserted == '\0')) {
        run_z80_cycle_budget(&z80_context,iVar3 << 4);
      }
      uVar4 = uVar6;
    } while (uVar6 < uVar1);
  }
  DAT_0b00000c = uVar6;
  begin_vdp_vertical_blanking(uVar6);
  update_vdp_line_cycles_and_queue_m68k_interrupts(0);
  DAT_0b000080 = 4;
  DAT_0b00007c = 8;
  (*DAT_0b000040)(0x4a);
  queue_m68k_interrupt_level(6);
  set_or_clear_z80_pending_interrupt_bits(&z80_context,1,1);
  DAT_0b000080 = 0;
  (*DAT_0b000040)(iVar2 + -0x4a);
  iVar5 = (iVar5 - uVar6) + -1;
  (*DAT_0b000040)(iVar5 * iVar2);
  if ((((emulator_option_flags & 2) == 0) && (z80_reset_released == '\x01')) && (z80_bus_request_asserted == '\0')) {
    run_z80_cycle_budget(&z80_context,iVar5 * iVar3);
  }
  submit_arm7_dac_sample_buffer();
  DAT_0b000008 = DAT_0b000008 + 1;
  return;
}


// 0x02000a2c  run_frame_h_int_on

void run_frame_h_int_on(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  begin_vdp_frame_and_refresh_backgrounds();
  uVar2 = DAT_0b000010;
  uVar4 = DAT_0b000004;
  uVar1 = DAT_0b000000;
  tick_vdp_horizontal_interrupt_counter();
  DAT_0b000080 = 4;
  update_vdp_timing_and_run_m68k_configured(0x22);
  DAT_0b000080 = 0;
  (*record_vdp_scanline_state)(0);
  update_vdp_timing_and_run_m68k_scanline(uVar2);
  accrue_z80_cycles_for_scanline(0);
  set_or_clear_z80_pending_interrupt_bits(&z80_context,1,0);
  if (uVar4 < 2) {
    uVar5 = 2;
    uVar4 = (uint)(uVar4 < 2);
  }
  else {
    uVar5 = 1;
    do {
      tick_vdp_horizontal_interrupt_counter(uVar5);
      DAT_0b000080 = 4;
      update_vdp_timing_and_run_m68k_configured(0x22);
      DAT_0b000080 = 0;
      (*record_vdp_scanline_state)(uVar5);
      update_vdp_timing_and_run_m68k_scanline(uVar2);
      uVar3 = uVar5 + 1;
      accrue_z80_cycles_for_scanline(uVar5);
      uVar5 = uVar3;
    } while (uVar4 != uVar3);
    uVar5 = uVar4 + 1;
  }
  begin_vdp_vertical_blanking(uVar4);
  DAT_0b00007c = 8;
  DAT_0b000080 = 4;
  update_vdp_timing_and_run_m68k_scanline(0x4a);
  set_or_clear_z80_pending_interrupt_bits(&z80_context,1,1);
  DAT_0b000080 = 0;
  update_vdp_timing_and_run_m68k_scanline(uVar2);
  accrue_z80_cycles_for_scanline(uVar4);
  if (uVar5 < uVar1) {
    do {
      reload_vdp_counter_during_vertical_blanking(uVar5);
      DAT_0b000080 = 4;
      update_vdp_timing_and_run_m68k_configured(0x22);
      DAT_0b000080 = 0;
      update_vdp_timing_and_run_m68k_scanline(uVar2);
      accrue_z80_cycles_for_scanline(uVar5);
      DAT_0b000080 = 4;
      uVar5 = uVar5 + 1;
      update_vdp_timing_and_run_m68k_scanline(0x26);
      DAT_0b000080 = 0;
    } while (uVar1 != uVar5);
  }
  run_remaining_z80_cycles();
  submit_arm7_dac_sample_buffer();
  DAT_0b000008 = DAT_0b000008 + 1;
  return;
}


// 0x02000c08  reset_emulation_for_cartridge

void reset_emulation_for_cartridge(void)

{
  DAT_0b000000 = 0x106;
  if (DAT_0b000020 == 0) {
    DAT_0b000000 = 0x138;
  }
  DAT_0b000004 = 0xe0;
  DAT_0b000014 = 0x1e7;
  DAT_0b000018 = 0xe3;
  DAT_0b000010 = 0x19d;
  DAT_0b00000c = 0;
  DAT_0b000008 = 0;
  DAT_0b000024 = 0;
  DAT_0b0000a8 = 0;
  reset_m68k_registers_and_load_vectors(&m68k_context);
  reset_z80_cpu_registers_and_latches(&z80_context);
  if ((emulator_option_flags & 1) == 0) {
    set_controller_six_button_mode(controller_port_1_state,0);
    set_controller_six_button_mode(controller_port_2_state,0);
  }
  else {
    set_controller_six_button_mode(controller_port_1_state);
    set_controller_six_button_mode(controller_port_2_state,1);
  }
  reset_genesis_controller_port(controller_port_1_state);
  reset_genesis_controller_port(controller_port_2_state);
  reset_bus_tables_work_ram_and_z80_bus_lines();
  clear_z80_work_ram();
  reset_vdp_memory_and_renderer_state();
  request_arm7_audio_stop();
  swiWaitForVBlank();
  swiWaitForVBlank();
  clear_audio_queues_and_reset_or_stop_arm7_audio(1);
  swiWaitForVBlank();
  swiWaitForVBlank();
  request_arm7_audio_start();
  if ((emulator_option_flags & 4) == 0) {
    record_vdp_scanline_state = record_unscaled_scanline_scroll_and_backdrop;
  }
  else {
    switch(vdp_hscroll_mode) {
    case 0:
      record_vdp_scanline_state = (code *)&record_scaled_scanline_hscroll_mode_0;
      return;
    case 1:
      record_vdp_scanline_state = (code *)&record_scaled_scanline_hscroll_mode_1;
      return;
    case 2:
      record_vdp_scanline_state = (code *)&record_scaled_scanline_hscroll_mode_2;
      return;
    case 3:
      record_vdp_scanline_state = (code *)&record_scaled_scanline_hscroll_mode_3;
      return;
    }
  }
  return;
}


// 0x02000dac  initialize_emulator_state_and_shared_audio

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_emulator_state_and_shared_audio(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  bool bVar10;
  undefined8 uVar11;
  
  install_m68k_callbacks_and_instrumented_opcode_entries(&m68k_context,0x2003b34,0x2003b60,0x2003b8c,0x2003cf8,&LAB_02003d24,0x2003d50,
               0x2003d98,&LAB_02009214,&LAB_02003c88);
  initialize_z80_state_and_dispatch_pointers(&z80_context);
  uVar4 = get_z80_work_ram_buffer();
  DAT_0b000559 = (undefined1)((uint)uVar4 >> 8);
  DAT_0b00055a = (undefined1)((uint)uVar4 >> 0x10);
  DAT_0b00055b = (undefined1)((uint)uVar4 >> 0x18);
  DAT_0b000558 = (undefined1)uVar4;
  uVar4 = get_cartridge_rom_buffer();
  DAT_0b000609 = (undefined1)((uint)uVar4 >> 8);
  DAT_0b00060a = (undefined1)((uint)uVar4 >> 0x10);
  DAT_0b00060b = (undefined1)((uint)uVar4 >> 0x18);
  DAT_0b000608 = (undefined1)uVar4;
  uVar4 = get_z80_bank_latch_address();
  DAT_0b000600 = 0x78;
  DAT_0b000605 = (undefined1)((uint)uVar4 >> 8);
  DAT_0b000606 = (undefined1)((uint)uVar4 >> 0x10);
  DAT_0b000601 = 0xb7;
  DAT_0b000602 = 0x3d;
  DAT_0b000604 = (undefined1)uVar4;
  DAT_0b000607 = (undefined1)((uint)uVar4 >> 0x18);
  DAT_0b000603 = 2;
  initialize_cartridge_and_work_ram_mapping();
  reset_bus_tables_work_ram_and_z80_bus_lines();
  clear_z80_work_ram();
  if (controller_port_1_state == 0) {
    controller_port_1_state = allocate_genesis_controller_port();
  }
  if (controller_port_2_state == 0) {
    controller_port_2_state = allocate_genesis_controller_port();
  }
  z80_context_pointer = &z80_context;
  m68k_context_pointer = &m68k_context;
  configure_frame_timing_callbacks();
  if (DAT_02099070 == 0) {
    initialize_arm9_fifo_receive_interrupt(1);
    set_arm9_fifo_receive_callback(&LAB_020059a4);
    uVar5 = memalign(0x20,0x400);
    dac_write_buffer = uVar5 | 0x400000;
    uVar5 = memalign(0x20,0x400);
    DAT_023db644 = uVar5 | 0x400000;
    uVar5 = memalign(0x20,0x400);
    ym2612_bank_1_write_buffer = uVar5 | 0x400000;
    uVar5 = memalign(0x20,0x100);
    DAT_023db648 = dac_write_buffer | 0x400000;
    DAT_023db66c = DAT_023db644 | 0x400000;
    DAT_023db634 = ym2612_bank_1_write_buffer | 0x400000;
    psg_write_buffer = uVar5 | 0x400000;
    DAT_023db64c = 0;
    DAT_023db768 = 0;
    DAT_023db638 = 0;
    DAT_023dc19c = 0;
    DAT_023db660 = 0;
    DAT_023db664 = DAT_023db650;
    DAT_023db668 = DAT_023db654;
    DAT_023db670 = 0;
    DAT_023db674 = DAT_023db76c;
    DAT_023db678 = DAT_023db770;
    DAT_023db680 = 0;
    DAT_023db684 = DAT_023db63c;
    DAT_023db688 = DAT_023db640;
    DAT_023db690 = 0;
    DAT_023db694 = DAT_023dc1a0;
    DAT_023db698 = DAT_023dc1a4;
    shared_audio_descriptor = &DAT_023db65c;
    DAT_023db75c = 4;
    puVar1 = &DAT_0209927c;
    DAT_023db65c = DAT_023db648;
    DAT_023db67c = DAT_023db634;
    DAT_023db68c = psg_write_buffer;
    DAT_023db764 = DAT_023db66c;
    DAT_023dc198 = psg_write_buffer;
    do {
      puVar6 = puVar1;
      *puVar6 = 1;
      puVar1 = puVar6 + 1;
    } while (puVar6 + 1 != &DAT_0209937c);
    puVar8 = &DAT_023db778;
    DAT_02099070 = 1;
    puVar6[-0x56] = 0;
    puVar6[-0xdb] = 0;
    puVar6[-0xda] = 0;
    puVar6[-0xd9] = 0;
    puVar6[-0xd8] = 0;
    puVar6[-0xd5] = 0;
    puVar6[-0x5f] = 0;
    puVar6[-0x5e] = 0;
    puVar6[-0x5d] = 0;
    puVar6[-0x5c] = 0;
    puVar6[-0x5b] = 0;
    puVar6[-0x5a] = 0;
    puVar6[-0x59] = 0;
    puVar6[-0x58] = 0;
    puVar6[-0x57] = 0;
    iVar2 = 0;
    do {
      iVar7 = iVar2;
      uVar11 = __floatsidf(iVar7);
      if (iVar7 < 0) {
        uVar11 = __adddf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x41f00000);
      }
      uVar11 = __subdf3(0,0x40900000,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xc669057d,0x40401ba2);
      uVar3 = __fixunsdfsi();
      *(undefined2 *)(puVar8 + 8) = uVar3;
      puVar8 = (undefined4 *)((int)puVar8 + 2);
      iVar2 = iVar7 + 1;
    } while (iVar7 + 1 != 0x400);
    iVar7 = iVar7 + -0x3ff;
    puVar9 = &DAT_023dbf98;
    do {
      uVar11 = __floatsidf(iVar7);
      bVar10 = iVar7 < 0;
      iVar7 = iVar7 + 1;
      if (bVar10) {
        uVar11 = __adddf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0,0x41f00000);
      }
      uVar11 = __subdf3(0,0x40700000,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0xc669057d,0x40401ba2);
      uVar3 = __fixunsdfsi();
      *puVar9 = uVar3;
      puVar9 = puVar9 + 1;
    } while (iVar7 != 0x100);
  }
  return;
}


// 0x020011e4  run_emulator_and_file_menu

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_emulator_and_file_menu(void)

{
  int iVar1;
  undefined4 uVar2;
  
  initialize_default_emulator_options();
  initialize_ds_display_and_overlay();
  do {
  } while ((ds_ipc_sync & 0xf) == 0);
  arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
  swiWaitForVBlank();
  swiWaitForVBlank();
  iVar1 = run_rom_browser_event_loop((undefined1)DAT_02098fb0);
joined_r0x02001238:
  if (iVar1 == 1) {
    clear_text_overlay_tilemap();
    draw_current_rom_information();
  }
  else {
    if (iVar1 == 2) {
      draw_current_rom_information();
      set_arm7_audio_muted(0);
      goto LAB_0200126c;
    }
    write_popup_text_tiles("Error accessing file system...shutting down!\n");
    draw_current_rom_information();
  }
  initialize_emulator_state_and_shared_audio();
switchD_020012ec_caseD_3:
  reset_emulation_for_cartridge();
  DAT_02098fa4 = 0;
  DAT_02098fa0 = 0;
  configure_gameplay_display_interrupts();
LAB_0200126c:
  DAT_02098fb0 = 1;
  DAT_02098fa8 = 0;
LAB_02001288:
  DAT_02098fac = DAT_02098fac + 1;
  if (DAT_02098fac == 8) {
    if ((*(char *)(loaded_cartridge_metadata + 0x261) != '\0') && (*(char *)(loaded_cartridge_metadata + 0x263) != '\0')) {
      if (0x78 < (uint)(DAT_0b000008 - DAT_02098fb4)) {
        flush_cartridge_save_ram();
      }
      DAT_02098fb4 = DAT_0b000008;
    }
    do {
      DAT_02098fac = 0;
      uVar2 = read_gameplay_menu_and_touch_actions();
      switch(uVar2) {
      case 1:
        swiWaitForVBlank();
        arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
        draw_current_rom_information();
        display_fps_count(DAT_02098fc0);
        write_text_at_tile_position("-= PAUSED =-",0xe,10);
        clear_text_rows_from(0x10);
        write_text_at_tile_position("Continue with [SELECT]",0x10,5);
        write_text_at_tile_position("   or TOUCH BOTTOM",0x11,5);
        write_text_at_tile_position("Use [D-Pad] to adjust screen",0x13,2);
        DAT_02098fa8 = 1;
        break;
      case 2:
        goto switchD_020012ec_caseD_2;
      case 3:
        goto switchD_020012ec_caseD_3;
      default:
        if (DAT_02098fa8 == 0) goto LAB_020013bc;
        break;
      case 6:
        DAT_02098fa8 = 1;
        set_arm7_audio_muted(1);
        arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
        swiWaitForVBlank();
        swiWaitForVBlank();
        iVar1 = run_rom_browser_event_loop((undefined1)DAT_02098fb0);
        goto joined_r0x02001238;
      case 8:
        DAT_02098fa8 = 1;
        set_arm7_audio_muted(1);
        run_configuration_menu((undefined1)DAT_02098fb0);
        set_arm7_audio_muted(0);
        DAT_02098fa8 = 0;
        goto LAB_020013bc;
      case 9:
        DAT_02098fa8 = 1;
        set_arm7_audio_muted(1);
        display_savestate_slot_status(1);
        set_arm7_audio_muted(0);
        DAT_02098fa8 = 0;
        goto LAB_020013bc;
      case 10:
        DAT_02098fa8 = 1;
        set_arm7_audio_muted(1);
        display_savestate_slot_status(2);
        set_arm7_audio_muted(0);
        DAT_02098fa8 = 0;
        goto LAB_020013bc;
      }
      adjust_paused_viewport();
      swiWaitForVBlank();
      set_arm7_audio_muted(1);
      swiWaitForVBlank();
      swiWaitForVBlank();
      (*DAT_0b00003c)();
    } while( true );
  }
  goto LAB_020013bc;
switchD_020012ec_caseD_2:
  clear_text_overlay_tilemap();
  arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
  draw_current_rom_information();
  set_arm7_audio_muted(0);
  DAT_02098fa8 = 0;
LAB_020013bc:
  (*DAT_0b000038)();
  update_genesis_controller_state();
  if (((emulator_option_flags & 0x40) != 0) && (DAT_02098fa4 < DAT_02098fa0)) {
    swiWaitForVBlank();
  }
  (*DAT_0b00003c)();
  DAT_02098fbc = DAT_02098fbc + 1;
  DAT_02098fa0 = DAT_02098fa0 + 1;
  goto LAB_02001288;
}


// 0x02002068  initialize_default_emulator_options

void initialize_default_emulator_options(void)

{
  emulator_option_flags = emulator_option_flags & 0xfffccfff | 0x205c;
  return;
}


// 0x02002150  adjust_paused_viewport

void adjust_paused_viewport(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  scanKeys();
  uVar2 = keysHeld();
  if ((uVar2 & 1) == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = 4;
  }
  if ((uVar2 & 0x20) != 0) {
    adjust_horizontal_viewport_offset(iVar3);
  }
  if ((uVar2 & 0x10) != 0) {
    adjust_horizontal_viewport_offset(-iVar3);
  }
  if ((uVar2 & 0x40) != 0) {
    adjust_vertical_viewport_offset(iVar3);
  }
  iVar1 = requested_viewport_offset_y;
  if ((uVar2 & 0x80) != 0) {
    requested_viewport_offset_y = requested_viewport_offset_y - iVar3;
    if (requested_viewport_offset_y < -0x18) {
      requested_viewport_offset_y = -0x18;
    }
    else if (0x18 < requested_viewport_offset_y) {
      requested_viewport_offset_y = 0x18;
    }
    viewport_update_pending = (uint)(iVar1 != requested_viewport_offset_y);
    return;
  }
  return;
}


// 0x020021cc  update_genesis_controller_state

void update_genesis_controller_state(void)

{
  int previous_viewport_x;
  uint ds_keys;
  
  scanKeys();
  ds_keys = keysHeld();
  *(byte *)(controller_port_1_state + 0x20) = ((byte)(ds_keys >> 0xb) ^ 1) & 1;
  *(byte *)(controller_port_1_state + 0x21) = ((byte)(ds_keys >> 1) ^ 1) & 1;
  *(byte *)(controller_port_1_state + 0x22) = (byte)ds_keys & 1 ^ 1;
  *(byte *)(controller_port_1_state + 0x24) = ((byte)(ds_keys >> 7) ^ 1) & 1;
  *(byte *)(controller_port_1_state + 0x23) = ((byte)(ds_keys >> 6) ^ 1) & 1;
  *(bool *)(controller_port_1_state + 0x25) = (ds_keys & 0x20) == 0;
  *(bool *)(controller_port_1_state + 0x26) = (ds_keys & 0x10) == 0;
  if ((emulator_option_flags & 1) == 0) {
    *(byte *)(controller_port_1_state + 0x2a) = ((byte)(ds_keys >> 3) ^ 1) & 1;
    if ((ds_keys & 0x400) == 0) {
      if ((ds_keys & 0x200) == 0) {
        if ((ds_keys & 0x100) != 0) {
          adjust_horizontal_viewport_offset(0xfffffffc);
        }
      }
      else {
        adjust_horizontal_viewport_offset(4);
      }
    }
    else {
      center_viewport();
    }
  }
  else {
    *(byte *)(controller_port_1_state + 0x27) = ((byte)(ds_keys >> 10) ^ 1) & 1;
    if ((ds_keys & 0x308) == 0x308) {
      *(undefined1 *)(controller_port_1_state + 0x2b) = 0;
      return;
    }
    *(undefined1 *)(controller_port_1_state + 0x2b) = 1;
    *(byte *)(controller_port_1_state + 0x2a) = ((byte)(ds_keys >> 3) ^ 1) & 1;
    *(byte *)(controller_port_1_state + 0x29) = ((byte)(ds_keys >> 9) ^ 1) & 1;
    *(byte *)(controller_port_1_state + 0x28) = ((byte)(ds_keys >> 8) ^ 1) & 1;
  }
  if ((emulator_option_flags & 0x200) != 0) {
    if ((ds_keys & 0x400) != 0) {
      DAT_02098ff8 = 0;
      center_viewport();
    }
    if ((ds_keys & 0x20) != 0) {
      if (-0x200 < DAT_02098ff8) {
        DAT_02098ff8 = DAT_02098ff8 + -0x40;
      }
      if (DAT_02098ff8 < 0) {
        adjust_horizontal_viewport_offset(DAT_02098ff8 >> 8);
      }
    }
    previous_viewport_x = requested_viewport_offset_x;
    if ((ds_keys & 0x10) != 0) {
      if (DAT_02098ff8 < 0x200) {
        DAT_02098ff8 = DAT_02098ff8 + 0x40;
      }
      if (0 < DAT_02098ff8) {
        requested_viewport_offset_x = requested_viewport_offset_x + (DAT_02098ff8 >> 8);
        if (requested_viewport_offset_x < -0x20) {
          requested_viewport_offset_x = -0x20;
        }
        else if (0x20 < requested_viewport_offset_x) {
          requested_viewport_offset_x = 0x20;
        }
        viewport_update_pending = (uint)(previous_viewport_x != requested_viewport_offset_x);
        return;
      }
    }
  }
  return;
}


// 0x020054d4  reset_m68k_registers_and_load_vectors

void reset_m68k_registers_and_load_vectors(int m68k_state)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 vector_or_memory_base;
  int *pc_mapping;
  int iVar6;
  uint guest_pc_or_offset;
  int iVar8;
  uint guest_pc_page_bits;
  
  iVar6 = 0;
  do {
    *(undefined1 *)(m68k_state + iVar6 * 4) = 0;
    iVar8 = m68k_state + iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar8 + 0x20) = 0;
    *(undefined1 *)(iVar8 + 1) = 0;
    *(undefined1 *)(iVar8 + 2) = 0;
    *(undefined1 *)(iVar8 + 3) = 0;
    *(undefined1 *)(iVar8 + 0x23) = 0;
    *(undefined1 *)(iVar8 + 0x21) = 0;
    *(undefined1 *)(iVar8 + 0x22) = 0;
  } while (iVar6 != 8);
  vector_or_memory_base = (**(code **)(m68k_state + 0x70))(0);
  uVar1 = (undefined1)((uint)vector_or_memory_base >> 0x18);
  *(undefined1 *)(m68k_state + 0x3f) = uVar1;
  *(undefined1 *)(m68k_state + 0x4b) = uVar1;
  *(char *)(m68k_state + 0x3c) = (char)vector_or_memory_base;
  uVar1 = (undefined1)((uint)vector_or_memory_base >> 8);
  *(undefined1 *)(m68k_state + 0x3d) = uVar1;
  uVar2 = (undefined1)((uint)vector_or_memory_base >> 0x10);
  *(undefined1 *)(m68k_state + 0x3e) = uVar2;
  *(char *)(m68k_state + 0x48) = (char)vector_or_memory_base;
  *(undefined1 *)(m68k_state + 0x49) = uVar1;
  *(undefined1 *)(m68k_state + 0x4a) = uVar2;
  vector_or_memory_base = (**(code **)(m68k_state + 0x70))(4);
  *(char *)(m68k_state + 0x45) = (char)((uint)vector_or_memory_base >> 8);
  *(char *)(m68k_state + 0x46) = (char)((uint)vector_or_memory_base >> 0x10);
  *(char *)(m68k_state + 0x47) = (char)((uint)vector_or_memory_base >> 0x18);
  *(undefined1 *)(m68k_state + 0x51) = 0x27;
  *(char *)(m68k_state + 0x44) = (char)vector_or_memory_base;
  *(undefined1 *)(m68k_state + 0x40) = 0;
  *(undefined1 *)(m68k_state + 0x41) = 0;
  *(undefined1 *)(m68k_state + 0x42) = 0;
  *(undefined1 *)(m68k_state + 0x43) = 0;
  *(undefined1 *)(m68k_state + 0x4c) = 0;
  *(undefined1 *)(m68k_state + 0x4d) = 0;
  *(undefined1 *)(m68k_state + 0x4e) = 0;
  *(undefined1 *)(m68k_state + 0x4f) = 0;
  *(undefined1 *)(m68k_state + 0x50) = 0;
  *(undefined1 *)(m68k_state + 0x52) = 0;
  *(undefined1 *)(m68k_state + 0x53) = 0;
  *(undefined1 *)(m68k_state + 0xa0) = 0;
  *(undefined1 *)(m68k_state + 0xa1) = 0;
  *(undefined1 *)(m68k_state + 0xa7) = 0;
  *(undefined1 *)(m68k_state + 0xa2) = 0;
  *(undefined1 *)(m68k_state + 0xa3) = 0;
  *(undefined1 *)(m68k_state + 0xa4) = 0;
  *(undefined1 *)(m68k_state + 0x94) = 0;
  *(undefined1 *)(m68k_state + 0x95) = 0;
  *(undefined1 *)(m68k_state + 0x96) = 0;
  *(undefined1 *)(m68k_state + 0x97) = 0;
  vector_or_memory_base = get_cartridge_rom_buffer();
  *(char *)(m68k_state + 0x61) = (char)((uint)vector_or_memory_base >> 8);
  *(char *)(m68k_state + 0x62) = (char)((uint)vector_or_memory_base >> 0x10);
  *(char *)(m68k_state + 99) = (char)((uint)vector_or_memory_base >> 0x18);
  *(char *)(m68k_state + 0x60) = (char)vector_or_memory_base;
  vector_or_memory_base = get_genesis_work_ram_buffer();
  uVar3 = (undefined1)((uint)vector_or_memory_base >> 0x10);
  *(char *)(m68k_state + 0x58) = (char)vector_or_memory_base;
  uVar1 = (undefined1)((uint)vector_or_memory_base >> 8);
  *(undefined1 *)(m68k_state + 0x59) = uVar1;
  *(undefined1 *)(m68k_state + 0x5a) = uVar3;
  uVar2 = (undefined1)((uint)vector_or_memory_base >> 0x18);
  *(undefined1 *)(m68k_state + 0x5b) = uVar2;
  *(char *)(m68k_state + 100) = (char)vector_or_memory_base;
  *(undefined1 *)(m68k_state + 0x65) = uVar1;
  *(undefined1 *)(m68k_state + 0x66) = uVar3;
  *(undefined1 *)(m68k_state + 0x67) = uVar2;
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
  iVar6 = guest_pc_or_offset + *pc_mapping;
  *(char *)(m68k_state + 0x47) = (char)((uint)iVar6 >> 0x18);
  *(char *)(m68k_state + 0x45) = (char)((uint)iVar6 >> 8);
  *(char *)(m68k_state + 0x46) = (char)((uint)iVar6 >> 0x10);
  *(char *)(m68k_state + 0x44) = (char)iVar6;
  DAT_02099040 = 0;
  DAT_0209903c = 0;
  return;
}


// 0x02005780  install_m68k_callbacks_and_instrumented_opcode_entries

void install_m68k_callbacks_and_instrumented_opcode_entries(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,int param_9,undefined4 param_10)

{
  uint uVar1;
  
  if (((param_3 != 0 && param_2 != 0) && (param_5 != 0 && param_4 != 0)) &&
     (param_7 != 0 && param_6 != 0)) {
    *(char *)(param_1 + 0x85) = (char)((uint)param_9 >> 8);
    *(char *)(param_1 + 0x87) = (char)((uint)param_9 >> 0x18);
    *(char *)(param_1 + 0x86) = (char)((uint)param_9 >> 0x10);
    *(char *)(param_1 + 0x8a) = (char)((uint)param_10 >> 0x10);
    *(char *)(param_1 + 0x89) = (char)((uint)param_10 >> 8);
    *(char *)(param_1 + 0x8b) = (char)((uint)param_10 >> 0x18);
    *(char *)(param_1 + 0x69) = (char)((uint)param_2 >> 8);
    *(char *)(param_1 + 0x6a) = (char)((uint)param_2 >> 0x10);
    *(char *)(param_1 + 0x6b) = (char)((uint)param_2 >> 0x18);
    *(char *)(param_1 + 0x6d) = (char)((uint)param_3 >> 8);
    *(char *)(param_1 + 0x6e) = (char)((uint)param_3 >> 0x10);
    *(char *)(param_1 + 0x6f) = (char)((uint)param_3 >> 0x18);
    *(char *)(param_1 + 0x71) = (char)((uint)param_4 >> 8);
    *(char *)(param_1 + 0x72) = (char)((uint)param_4 >> 0x10);
    *(char *)(param_1 + 0x73) = (char)((uint)param_4 >> 0x18);
    *(char *)(param_1 + 0x75) = (char)((uint)param_5 >> 8);
    *(char *)(param_1 + 0x76) = (char)((uint)param_5 >> 0x10);
    *(char *)(param_1 + 0x77) = (char)((uint)param_5 >> 0x18);
    *(char *)(param_1 + 0x79) = (char)((uint)param_6 >> 8);
    *(bool *)(param_1 + 0xa5) = param_9 != 0;
    *(char *)(param_1 + 0x83) = (char)((uint)param_8 >> 0x18);
    *(char *)(param_1 + 0x7a) = (char)((uint)param_6 >> 0x10);
    *(char *)(param_1 + 0x7d) = (char)((uint)param_7 >> 8);
    *(char *)(param_1 + 0x7b) = (char)((uint)param_6 >> 0x18);
    *(char *)(param_1 + 0x7f) = (char)((uint)param_7 >> 0x18);
    *(char *)(param_1 + 0x7e) = (char)((uint)param_7 >> 0x10);
    *(char *)(param_1 + 0x84) = (char)param_9;
    *(char *)(param_1 + 0x88) = (char)param_10;
    *(char *)(param_1 + 0x68) = (char)param_2;
    *(char *)(param_1 + 0x6c) = (char)param_3;
    *(char *)(param_1 + 0x70) = (char)param_4;
    *(char *)(param_1 + 0x74) = (char)param_5;
    *(char *)(param_1 + 0x78) = (char)param_6;
    *(char *)(param_1 + 0x81) = (char)((uint)param_8 >> 8);
    *(char *)(param_1 + 0x82) = (char)((uint)param_8 >> 0x10);
    *(char *)(param_1 + 0x7c) = (char)param_7;
    *(char *)(param_1 + 0x80) = (char)param_8;
                    /* WARNING: Read-only address (ram,0x0204b020) is written */
    m68k_dispatch[0x60fe] = (dword)&DAT_01003c4c;
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa600] = (dword)&DAT_01003364;
      m68k_dispatch[uVar1 | 0xf600] = (dword)&DAT_0100334c;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa700] = (dword)&DAT_010033f8;
      m68k_dispatch[uVar1 | 0xf700] = (dword)&DAT_010033e0;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa500] = (dword)&DAT_010032d0;
      m68k_dispatch[uVar1 | 0xf500] = (dword)&DAT_010032b8;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa300] = (dword)&DAT_010031a8;
      m68k_dispatch[uVar1 | 0xf300] = (dword)&DAT_01003190;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xa400] = (dword)&DAT_0100323c;
      m68k_dispatch[uVar1 | 0xf400] = (dword)&DAT_01003224;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xaa00] = (dword)&DAT_01003544;
      m68k_dispatch[uVar1 | 64000] = (dword)&DAT_0100352c;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    uVar1 = 0x80;
    do {
      m68k_dispatch[uVar1 | 0xac00] = (dword)&DAT_01003640;
      m68k_dispatch[uVar1 | 0xfc00] = (dword)&DAT_01003624;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0x100);
    return;
  }
  m68k_dispatch[0x60fe] = 0x1003c34;
  return;
}

