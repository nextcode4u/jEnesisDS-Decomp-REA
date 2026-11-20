/* ARM9 settings — grouped REA pseudocode.
 * Configuration menu and selection of the frame timing callbacks.
 */

// 0x02000d10  configure_frame_timing_callbacks

void configure_frame_timing_callbacks(void)

{
  uint uVar1;
  
  DAT_0b00003c = &DAT_02006a58;
  mark_background_tile_cache_for_refresh(0);
  mark_background_tile_cache_for_refresh(1);
  select_vdp_scanline_render_callback();
  invalidate_viewport_mode_cache();
  uVar1 = emulator_option_flags >> 0xc & 3;
  if (uVar1 == 1) {
    DAT_0b000040 = update_vdp_timing_and_run_m68k_configured;
    DAT_0b000038 = run_frame_h_int_on;
    return;
  }
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      DAT_0b000038 = (code *)&DAT_02000bbc;
    }
    return;
  }
  DAT_0b000040 = (code *)&DAT_02000558;
  DAT_0b000038 = run_frame_h_int_off;
  return;
}


// 0x020020c4  advance_configuration_value

void advance_configuration_value(int param_1)

{
  uint uVar1;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
  case 1:
    emulator_option_flags = *(uint *)(param_1 + 8) ^ emulator_option_flags;
    return;
  case 2:
  case 3:
    uVar1 = *(uint *)(param_1 + 8);
    emulator_option_flags = emulator_option_flags & ~(3 << (uVar1 & 0xff)) |
                   ((emulator_option_flags >> (uVar1 & 0xff) & 3) + 1) % 3 << (uVar1 & 0xff);
  }
  return;
}


// 0x020023ec  draw_on_off_option_text

void draw_on_off_option_text(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  param_2 = param_2 + 8;
  switch(param_1[1]) {
  case 0:
    write_text_at_tile_position(*param_1,param_2,1);
    pcVar3 = "on   ";
    pcVar4 = "off  ";
    uVar5 = param_1[2] & emulator_option_flags;
    break;
  case 1:
    write_text_at_tile_position(*param_1,param_2,1);
    pcVar3 = "HW   ";
    pcVar4 = "SW   ";
    uVar5 = param_1[2] & emulator_option_flags;
    break;
  case 2:
    write_text_at_tile_position(*param_1,param_2,1);
    uVar5 = emulator_option_flags >> (param_1[2] & 0xff) & 3;
    if (uVar5 == 0) {
      pcVar3 = "off  ";
    }
    else if (uVar5 == 1) {
      pcVar3 = "on   ";
    }
    else {
      pcVar3 = "auto ";
    }
    goto code_r0x0200da3c;
  case 3:
    write_text_at_tile_position(*param_1,param_2,1);
    uVar5 = emulator_option_flags >> (param_1[2] & 0xff) & 3;
    if (uVar5 == 0) {
      pcVar3 = "USA";
    }
    else if (uVar5 == 1) {
      pcVar3 = "JAP";
    }
    else {
      pcVar3 = "EUR";
    }
    goto code_r0x0200da3c;
  default:
    return;
  }
  if (uVar5 == 0) {
    pcVar3 = pcVar4;
  }
code_r0x0200da3c:
  uVar2 = DAT_020b4c54;
  if (pcVar3 == (char *)0x0) {
    return;
  }
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar6 = DAT_020b4c58 + (param_2 * 0x20 + 0x16) * 2;
  uVar5 = 0;
  do {
    *(ushort *)(uVar5 * 2 + iVar6) = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
    uVar5 = uVar5 + 1;
    cVar1 = pcVar3[uVar5];
  } while (uVar5 < 0xff && cVar1 != '\0');
  return;
}


// 0x02002c68  run_configuration_menu

undefined4 run_configuration_menu(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar1 = emulator_option_flags;
  clear_text_overlay_tilemap();
  arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
  write_text_at_tile_position("Configuration",5,1);
  write_text_at_tile_position("______________________________",6,1);
  if (param_1 == 0) {
    write_text_at_tile_position("[A]:     Change Option",0x15,1);
    write_text_at_tile_position("[SELECT]:Continue",0x16,1);
  }
  else {
    write_text_at_tile_position("[A]:     Change Option",0x15,1);
    write_text_at_tile_position("[SELECT]:Continue Game",0x16,1);
  }
  previous_ds_keys = 0;
  while( true ) {
    arm_veneer_for_sample_ds_keys_and_update_repeat_state();
    puVar5 = &DAT_02085a10;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      draw_on_off_option_text(puVar5,iVar3);
      puVar5 = puVar5 + 0xc;
      iVar3 = iVar4;
    } while (iVar4 != 10);
    draw_rom_browser_row_highlight(DAT_02098fe8 + 8);
    uVar2 = arm_veneer_for_read_latched_ds_key_state();
    if (((uVar2 & 0x40) == 0) || ((previous_ds_keys & 0x40) != 0)) {
      if (((uVar2 & 0x80) != 0) && (((previous_ds_keys & 0x80) == 0 && (DAT_02098fe8 < 9)))) {
        move_settings_highlight_down();
      }
    }
    else if (DAT_02098fe8 != 0) {
      move_settings_highlight_up();
    }
    if (((uVar2 & 1) != 0) && ((previous_ds_keys & 1) == 0)) {
      advance_configuration_value(&DAT_02085a10 + DAT_02098fe8 * 0xc);
    }
    previous_ds_keys = uVar2;
    if ((uVar2 & 4) != 0) break;
    arm_veneer_for_nds_swiwaitforvblank();
    arm_veneer_for_nds_swiwaitforvblank();
  }
  arm_veneer_for_nds_swiwaitforvblank();
  arm_veneer_for_nds_swiwaitforvblank();
  arm_veneer_for_nds_swiwaitforvblank();
  restore_overlay_tilemap_row(DAT_02098fe8 + 8);
  arm_veneer_for_nds_swiwaitforvblank();
  if (iVar1 != emulator_option_flags) {
    configure_frame_timing_callbacks();
  }
  arm_veneer_for_nds_swiwaitforvblank();
  previous_ds_keys = 0;
  if (param_1 != 0) {
    clear_text_overlay_tilemap();
    arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
    draw_current_rom_information();
  }
  return 1;
}

