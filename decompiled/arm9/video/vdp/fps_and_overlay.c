/* ARM9 fps and overlay — grouped REA pseudocode.
 * Frame-rate digits and palette adjustments for the display overlay.
 */

// 0x020023dc  display_fps_count

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void display_fps_count(uint param_1)

{
  _DAT_06201542 = (short)(((param_1 / 100) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201544 = (short)(((param_1 / 10) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201546 = (short)((param_1 % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201586 = _DAT_06201546 + 10;
  _DAT_06201582 = _DAT_06201542 + 10;
  _DAT_06201584 = _DAT_06201544 + 10;
  return;
}


// 0x02006730  adjust_overlay_tile_palette_indices

void adjust_overlay_tile_palette_indices(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = &DAT_020887e8;
  do {
    pcVar3 = pcVar2;
    *pcVar3 = *pcVar3 + -0x40;
    pcVar2 = pcVar3 + 1;
  } while (pcVar3 + 1 !=
           "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03"
          );
  pcVar2 = 
  "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03"
  ;
  do {
    pcVar1 = pcVar2;
    pcVar2 = pcVar1 + 1;
    *pcVar1 = *pcVar1 + -0x20;
  } while (pcVar2 != pcVar3 + 0x501);
  do {
    pcVar3 = pcVar2 + 1;
    *pcVar2 = *pcVar2 + -0x50;
    pcVar2 = pcVar3;
  } while (pcVar3 != pcVar1 + 0x781);
  return;
}


// 0x02006908  set_fps_overlay_digits

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_fps_overlay_digits(uint param_1)

{
  _DAT_06201542 = (short)(((param_1 / 100) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201544 = (short)(((param_1 / 10) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201546 = (short)((param_1 % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201586 = _DAT_06201546 + 10;
  _DAT_06201582 = _DAT_06201542 + 10;
  _DAT_06201584 = _DAT_06201544 + 10;
  return;
}

