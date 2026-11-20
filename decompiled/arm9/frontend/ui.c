/* ARM9 ui — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020023e0  write_popup_text_tiles

void write_popup_text_tiles(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = DAT_020b4c54;
  if (param_1 == (char *)0x0) {
    return;
  }
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar4 = DAT_020b4c58 + 0x182;
  uVar3 = 0;
  do {
    *(ushort *)(uVar3 * 2 + iVar4) = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
    uVar3 = uVar3 + 1;
    cVar1 = param_1[uVar3];
  } while (uVar3 < 0xff && cVar1 != '\0');
  return;
}


// 0x020025a4  arm_tail_branch_to_load_subscreen_palette_tiles_and_map

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 arm_tail_branch_to_load_subscreen_palette_tiles_and_map(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)&DAT_05000400;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[-0x17bc8ac];
    puVar1 = puVar2;
  } while (puVar2 != (undefined2 *)&DAT_050005e0);
  _DAT_050005fe = 0x35f;
  arm_veneer_for_nds_swicopy(&DAT_020874a8,0x6208000,0x2700);
  software_interrupt(0xb);
  return 0x620100002089ba8;
}


// 0x0200276c  draw_loading_message

/* WARNING: Removing unreachable block (ram,0x0200da4c) */

void draw_loading_message(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
  clear_text_rows_from(3);
  newlib_strncpy(&DAT_023cb4f0,param_1,0x1d);
  DAT_023cb50c = 0;
  write_text_at_tile_position("Loading:",6,1);
  uVar2 = DAT_020b4c54;
  if (DAT_023cb4f0 == '\0') {
    return;
  }
  if (DAT_020b4c50 != 0) {
    iVar5 = DAT_020b4c58 + 0x1c2;
    uVar3 = 0;
    cVar1 = DAT_023cb4f0;
    do {
      *(ushort *)(uVar3 * 2 + iVar5) = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
      uVar4 = uVar3 + 1;
      cVar1 = *(char *)(uVar3 + 0x23cb4f1);
      uVar3 = uVar4;
    } while (uVar4 < 0xff && cVar1 != '\0');
    return;
  }
  return;
}


// 0x020027d0  draw_current_rom_information

void draw_current_rom_information(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  cVar1 = *(char *)(DAT_02098fc8 + 0x254);
  arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
  clear_text_rows_from(3);
  iVar2 = DAT_02098fc8;
  iVar3 = newlib_strrchr(DAT_02098fc8,0x2f);
  iVar5 = iVar3 + 1;
  if (iVar3 == 0) {
    iVar5 = iVar2;
  }
  newlib_strncpy(&DAT_023cb4f0,iVar5,0x1d);
  DAT_023cb50c = 0;
  write_text_at_tile_position("Now Playing:",6,1);
  write_text_at_tile_position(&DAT_023cb4f0,7,1);
  write_text_at_tile_position("Rom Size:",9,1);
  format_hexadecimal_value(*(undefined4 *)(DAT_02098fc8 + 0x244),9,0xf);
  write_text_at_tile_position("Rom Checksum:",10,1);
  write_hexadecimal_value_to_overlay(*(undefined4 *)(DAT_02098fc8 + 0x240),10,0xf);
  write_text_at_tile_position("Rom Type:",0xb,1);
  puVar4 = &DAT_0208f0f0;
  if (*(char *)(DAT_02098fc8 + 0x260) == '\0') {
    puVar4 = &DAT_0208f0f4;
  }
  write_text_at_tile_position(puVar4,0xb,0xf);
  write_text_at_tile_position("______________________________",0xd,1);
  write_text_at_tile_position("   [SELECT]:Open File Menu",0x10,1);
  write_text_at_tile_position("    TOUCH screen to pause",0x11,1);
  draw_rom_browser_row_highlight(7);
  copy_rom_information_overlay_tiles();
  draw_rom_region_indicator(cVar1);
  if (*(char *)(DAT_02098fc8 + 0x261) != '\0') {
    draw_cartridge_sram_indicator();
  }
  draw_rom_video_standard_indicator(cVar1 == '\x02');
  draw_state_slots_label();
  draw_savestate_slot_presence_indicator(0,*(uint *)(DAT_02098fc8 + 600) & 0x20);
  sRam0620156e = 0x84;
  if ((*(uint *)(DAT_02098fc8 + 600) & 0x40) == 0) {
    sRam0620156e = 0x87;
  }
  sRam062015b2 = sRam0620156e + 0x11;
  sRam06201570 = sRam0620156e + 1;
  sRam06201572 = sRam0620156e + 2;
  sRam062015ae = sRam0620156e + 0xf;
  sRam062015b0 = sRam0620156e + 0x10;
  return;
}


// 0x02002b2c  move_settings_highlight_down

void move_settings_highlight_down(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  restore_overlay_tilemap_row(DAT_02098fe8 + 8);
  iVar1 = DAT_02098fe8 + 9;
  DAT_02098fe8 = DAT_02098fe8 + 1;
  iVar1 = iVar1 * 0x40;
  *(undefined2 *)(iVar1 + 0x6201000) = 0x4b;
  *(undefined2 *)(iVar1 + 0x620103e) = 1099;
  iVar2 = 0;
  do {
    iVar3 = iVar1 + iVar2;
    iVar2 = iVar2 + 2;
    *(undefined2 *)(iVar3 + 0x6201002) = 0x4c;
  } while (iVar2 != 0x3c);
  return;
}


// 0x02002b5c  move_settings_highlight_up

void move_settings_highlight_up(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  restore_overlay_tilemap_row(DAT_02098fe8 + 8);
  iVar1 = DAT_02098fe8 + 7;
  DAT_02098fe8 = DAT_02098fe8 + -1;
  iVar1 = iVar1 * 0x40;
  *(undefined2 *)(iVar1 + 0x6201000) = 0x4b;
  *(undefined2 *)(iVar1 + 0x620103e) = 1099;
  iVar2 = 0;
  do {
    iVar3 = iVar1 + iVar2;
    iVar2 = iVar2 + 2;
    *(undefined2 *)(iVar3 + 0x6201002) = 0x4c;
  } while (iVar2 != 0x3c);
  return;
}


// 0x02002b8c  select_next_rom_browser_page

void select_next_rom_browser_page(void)

{
  undefined4 extraout_r1;
  int iVar1;
  int iVar2;
  
  restore_overlay_tilemap_row(DAT_0208f344);
  DAT_02098fe4 = 0;
  DAT_0208f344 = 4;
  compiler_aeabi_uidivmod(DAT_02098fe0 + 1,DAT_02098fd8);
  uRam06201100 = 0x4b;
  uRam0620113e = 1099;
  iVar1 = 0;
  DAT_02098fe0 = extraout_r1;
  do {
    iVar2 = iVar1 + 2;
    *(undefined2 *)(iVar1 + 0x6201102) = 0x4c;
    iVar1 = iVar2;
  } while (iVar2 != 0x3c);
  return;
}


// 0x02002be8  move_rom_browser_highlight_down

void move_rom_browser_highlight_down(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  restore_overlay_tilemap_row(DAT_0208f344);
  DAT_0208f344 = DAT_0208f344 + 1;
  DAT_02098fe4 = DAT_0208f344 - 4;
  iVar1 = (uint)DAT_0208f344 * 0x40;
  *(undefined2 *)(iVar1 + 0x6201000) = 0x4b;
  *(undefined2 *)(iVar1 + 0x620103e) = 1099;
  iVar2 = 0;
  do {
    iVar3 = iVar1 + iVar2;
    iVar2 = iVar2 + 2;
    *(undefined2 *)(iVar3 + 0x6201002) = 0x4c;
  } while (iVar2 != 0x3c);
  return;
}


// 0x02002c28  move_rom_browser_highlight_up

void move_rom_browser_highlight_up(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  restore_overlay_tilemap_row(DAT_0208f344);
  DAT_0208f344 = DAT_0208f344 - 1;
  DAT_02098fe4 = DAT_0208f344 - 4;
  iVar1 = (uint)DAT_0208f344 * 0x40;
  *(undefined2 *)(iVar1 + 0x6201000) = 0x4b;
  *(undefined2 *)(iVar1 + 0x620103e) = 1099;
  iVar2 = 0;
  do {
    iVar3 = iVar1 + iVar2;
    iVar2 = iVar2 + 2;
    *(undefined2 *)(iVar3 + 0x6201002) = 0x4c;
  } while (iVar2 != 0x3c);
  return;
}


// 0x020067d4  draw_rom_region_indicator

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_rom_region_indicator(int param_1)

{
  if (param_1 == 1) {
    _DAT_062015bc = 0x5f;
    _DAT_06201578 = 0x4f;
    _DAT_0620157a = 0x50;
    _DAT_0620157c = 0x51;
    _DAT_062015b8 = 0x5d;
    _DAT_062015ba = 0x5e;
    return;
  }
  if (param_1 == 0) {
    _DAT_062015bc = 0x62;
    _DAT_06201578 = 0x52;
    _DAT_0620157a = 0x53;
    _DAT_0620157c = 0x54;
    _DAT_062015b8 = 0x60;
    _DAT_062015ba = 0x61;
    return;
  }
  if (param_1 != 2) {
    return;
  }
  _DAT_062015bc = 0x65;
  _DAT_06201578 = 0x55;
  _DAT_0620157a = 0x56;
  _DAT_0620157c = 0x57;
  _DAT_062015b8 = 99;
  _DAT_062015ba = 100;
  return;
}


// 0x02006890  draw_cartridge_sram_indicator

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_cartridge_sram_indicator(void)

{
  _DAT_062015b6 = 0x5c;
  _DAT_06201576 = 0x4e;
  return;
}


// 0x020068ac  draw_rom_video_standard_indicator

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_rom_video_standard_indicator(int param_1)

{
  if (param_1 != 0) {
    _DAT_0620158c = 0x69;
    _DAT_0620154a = 0x5a;
    _DAT_0620154c = 0x5b;
    _DAT_0620158a = 0x68;
    return;
  }
  _DAT_0620158c = 0x67;
  _DAT_0620154a = 0x58;
  _DAT_0620154c = 0x59;
  _DAT_0620158a = 0x66;
  return;
}


// 0x020069a8  draw_state_slots_label

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void draw_state_slots_label(void)

{
  _DAT_062015a6 = 0x9b;
  _DAT_06201562 = 0x8a;
  _DAT_06201564 = 0x8b;
  _DAT_06201566 = 0x8c;
  _DAT_062015a2 = 0x99;
  _DAT_062015a4 = 0x9a;
  return;
}


// 0x020069e4  draw_savestate_slot_presence_indicator

void draw_savestate_slot_presence_indicator(uint param_1,int param_2)

{
  int iVar1;
  short sVar2;
  
  iVar1 = (param_1 & 1) * 6;
  sVar2 = (short)iVar1 + 0x7e;
  if (param_2 == 0) {
    sVar2 = (short)iVar1 + 0x81;
  }
  *(short *)(iVar1 + 0x6201568) = sVar2;
  *(short *)(iVar1 + 0x62015ac) = sVar2 + 0x11;
  *(short *)(iVar1 + 0x620156a) = sVar2 + 1;
  *(short *)(iVar1 + 0x620156c) = sVar2 + 2;
  *(short *)(iVar1 + 0x62015a8) = sVar2 + 0xf;
  *(short *)(iVar1 + 0x62015aa) = sVar2 + 0x10;
  return;
}


// 0x02006b78  copy_rom_information_overlay_tiles

undefined8 copy_rom_information_overlay_tiles(void)

{
  software_interrupt(0xb);
  return 0x62015400208a0e8;
}


// 0x02006b90  restore_overlay_tilemap_row

undefined8 restore_overlay_tilemap_row(int param_1)

{
  software_interrupt(0xb);
  return CONCAT44(param_1 * 0x40 + 0x6201000,&DAT_02089ba8 + param_1 * 0x40);
}


// 0x02006bb0  load_subscreen_palette_tiles_and_map

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 load_subscreen_palette_tiles_and_map(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)&DAT_05000400;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[-0x17bc8ac];
    puVar1 = puVar2;
  } while (puVar2 != (undefined2 *)&DAT_050005e0);
  _DAT_050005fe = 0x35f;
  arm_veneer_for_nds_swicopy(&DAT_020874a8,0x6208000,0x2700);
  software_interrupt(0xb);
  return 0x620100002089ba8;
}


// 0x0200d8c4  clear_text_overlay_tilemap

void clear_text_overlay_tilemap(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_020b4c58;
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar2 = 0;
  do {
    *(undefined2 *)(iVar2 + iVar1) = 0;
    iVar2 = iVar2 + 2;
  } while (iVar2 != 0x600);
  return;
}


// 0x0200d900  initialize_text_overlay_tiles

/* WARNING: Removing unreachable block (ram,0x0200d8d0) */

void initialize_text_overlay_tiles(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = (uint)(param_3 == 0 || param_1 == 0);
  if (param_3 != 0 && param_1 != 0) {
    DAT_020b4c54 = (param_5 & 0xf) << 0xc;
    uVar6 = uVar2;
    DAT_020b4c58 = param_3;
    if (param_4 * 0x20 != 0) {
      do {
        uVar5 = (uint)*(ushort *)(uVar2 + param_1);
        if ((*(ushort *)(uVar2 + param_1) & 0xff00) != 0) {
          uVar5 = (param_5 & 0xf) << 0xc | uVar5;
        }
        uVar3 = (ushort)uVar5;
        uVar6 = uVar6 + 1;
        if ((uVar5 & 0xff) != 0) {
          uVar3 = uVar3 | (ushort)(param_5 << 4);
        }
        *(ushort *)(uVar2 + param_2) = uVar3;
        uVar2 = uVar2 + 2;
      } while (param_4 * 0x20 != uVar6);
    }
    iVar1 = DAT_020b4c58;
    DAT_020b4c50 = 1;
    iVar4 = 0;
    do {
      *(undefined2 *)(iVar4 + iVar1) = 0;
      iVar4 = iVar4 + 2;
    } while (iVar4 != 0x600);
    return;
  }
  return;
}


// 0x0200d9ec  clear_text_rows_from

void clear_text_rows_from(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar1 = (0x18 - param_1) * 0x20;
  iVar3 = DAT_020b4c58 + param_1 * 0x40;
  if (iVar1 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    iVar2 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    *(undefined2 *)(iVar2 + iVar3) = 0;
  } while (iVar4 != iVar1);
  return;
}


// 0x0200da3c  write_text_at_tile_position

void write_text_at_tile_position(char *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = DAT_020b4c54;
  if (param_1 == (char *)0x0) {
    return;
  }
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar4 = DAT_020b4c58 + (param_3 + param_2 * 0x20) * 2;
  uVar3 = 0;
  do {
    *(ushort *)(uVar3 * 2 + iVar4) = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
    uVar3 = uVar3 + 1;
    cVar1 = param_1[uVar3];
  } while (uVar3 < 0xff && cVar1 != '\0');
  return;
}


// 0x0200dae0  write_clipped_text_row

void write_clipped_text_row(char *param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar2 = DAT_020b4c54;
  if (param_1 == (char *)0x0) {
    return;
  }
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_020b4c50 == 0) {
    return;
  }
  if (0x1f < param_3) {
    return;
  }
  iVar4 = 0;
  puVar3 = (ushort *)(DAT_020b4c58 + param_2 * 0x40 + param_3 * 2);
  do {
    *puVar3 = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
    iVar4 = iVar4 + 1;
    cVar1 = param_1[iVar4];
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  } while (param_3 < 0x20 && cVar1 != '\0');
  return;
}


// 0x0200db8c  format_hexadecimal_value

void format_hexadecimal_value(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  
  uVar1 = DAT_020b4c54;
  if (DAT_020b4c50 == 0) {
    return;
  }
  uVar2 = param_1 / 10;
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      uVar2 = uVar2 / 10;
      iVar3 = iVar3 + 1;
    } while (uVar2 != 0);
    if (iVar3 < 0) {
      return;
    }
  }
  puVar4 = (ushort *)(DAT_020b4c58 + (param_3 + param_2 * 0x20) * 2 + iVar3 * 2);
  do {
    iVar3 = iVar3 + -1;
    *puVar4 = (ushort)uVar1 | (byte)"0123456789ABCDEF"[param_1 % 10] - 0x20 & 0xff;
    param_1 = param_1 / 10;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar3);
  return;
}


// 0x0200dc64  write_hexadecimal_value_to_overlay

void write_hexadecimal_value_to_overlay(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar1 = DAT_020b4c54;
  if (DAT_020b4c50 == 0) {
    return;
  }
  uVar2 = param_1 >> 4;
  if (uVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      uVar2 = uVar2 >> 4;
      iVar4 = iVar4 + 1;
    } while (uVar2 != 0);
    if (iVar4 < 0) {
      return;
    }
  }
  puVar3 = (ushort *)(DAT_020b4c58 + (param_3 + param_2 * 0x20) * 2 + iVar4 * 2);
  do {
    iVar4 = iVar4 + -1;
    *puVar3 = (ushort)uVar1 | (byte)"0123456789ABCDEF"[param_1 & 0xf] - 0x20 & 0xff;
    param_1 = param_1 >> 4;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar4);
  return;
}

