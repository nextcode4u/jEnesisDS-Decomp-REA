/* ARM9 display setup — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02000f3c  advance_ds_display_compare_irq_phase

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void advance_ds_display_compare_irq_phase(void)

{
  if (DAT_020b4ce8 == 1) {
    apply_prepared_scanline_display_state(0);
    DAT_020b4ce8 = 2;
  }
  else if (DAT_020b4ce8 == 2) {
    irqEnable(2);
    DAT_020b4ce8 = 0;
  }
  else if (DAT_020b4ce8 == 0) {
    irqDisable(2);
    DAT_020b4ce8 = 1;
  }
  REG_DISPSTAT =
       REG_DISPSTAT & 0x7f | (&DAT_02085a08)[DAT_020b4ce8] << 8 |
       (ushort)(((ushort)(&DAT_02085a08)[DAT_020b4ce8] & 0x100) >> 1);
  return;
}


// 0x0200106c  configure_gameplay_display_interrupts

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_gameplay_display_interrupts(void)

{
  if (DAT_02098fc4 == 0) {
    irqInit();
  }
  else if (DAT_02098fc4 == 1) {
    irqDisable(1);
    irqClear(1);
  }
  DAT_02098fc4 = 2;
  irqSet(2,&LAB_02000f1c);
  REG_DISPSTAT = REG_DISPSTAT & 0x7f | 0xc000;
  DAT_020b4ce8 = 0;
  irqSet(4,advance_ds_display_compare_irq_phase);
  irqSet(1,&LAB_02000fdc);
  REG_DISPSTAT = REG_DISPSTAT | 0x38;
  REG_IE = REG_IE | 7;
  REG_IME = 1;
  return;
}


// 0x02001118  configure_menu_vblank_interrupt

/* WARNING: Removing unreachable block (ram,0x02080216) */
/* WARNING: Removing unreachable block (ram,0x02080228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_menu_vblank_interrupt(void)

{
  if (DAT_02098fc4 == 0) {
    irqInit();
  }
  else if (DAT_02098fc4 == 2) {
    irqDisable(2);
    irqClear(2);
  }
  DAT_02098fc4 = 1;
  irqSet(1,&DAT_02000f18);
  REG_DISPSTAT = REG_DISPSTAT | 8;
  REG_IE = REG_IE | 1;
  REG_IME = 1;
  return;
}


// 0x02006d20  show_startup_graphics_and_run_scanline_transition

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void show_startup_graphics_and_run_scanline_transition(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar7;
  uint uVar8;
  int iVar6;
  
  swiWaitForVBlank();
  DISPLAY_CR = 0x10801;
  vramSetMainBanks(1,9,4,2);
  BG3_CR = 0x42c8;
  BG3_XDX = 0x100;
  BG3_YDY = 0x100;
  BG3_CX = 0;
  BG3_CY = 0;
  BLEND_CR = 200;
  SUB_DISPLAY_CR = 0x10100;
  puVar2 = &DAT_0208a1a8;
  puVar3 = (undefined2 *)&DAT_05000000;
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar4;
  } while (puVar4 != (undefined2 *)&DAT_05000200);
  swiCopy(&DAT_0208a3a8,&DAT_06008000,16000);
  swiCopy(&DAT_0208e228,&DAT_06001000,0x300);
  iVar5 = 0;
  do {
    iVar6 = iVar5;
    iVar5 = iVar6 + 1;
    swiWaitForVBlank();
  } while (iVar5 != 0x78);
  uVar7 = iVar6 - 0x77;
  uVar8 = uVar7;
  while( true ) {
    do {
      uVar1 = REG_VCOUNT & 0x1ff;
    } while ((REG_VCOUNT & 0x1ff) != 0);
    do {
      if ((uVar8 & 1) == 0) {
        BG3_CX = 0;
      }
      else {
        iVar5 = uVar1 - 0x60;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar5 = (iVar5 / 10) * (iVar5 / 10);
        if ((uVar1 & 1) == 0) {
          BG3_CX = (-iVar5 - uVar7) * 0x80;
        }
        else {
          BG3_CX = (iVar5 + uVar7) * 0x80;
        }
      }
      do {
      } while (uVar1 == (REG_VCOUNT & 0x1ff));
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0xc0);
    BLEND_Y = (undefined2)uVar8;
    if (0x1f < uVar8 + 1) break;
    uVar7 = uVar7 + 3;
    uVar8 = uVar8 + 1;
  }
  swiWaitForVBlank();
  puVar2 = (undefined2 *)&DAT_05000000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)&DAT_05000200);
  puVar2 = (undefined2 *)&DAT_06008000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x600be80);
  puVar2 = (undefined2 *)&DAT_06001000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x6001300);
  BLEND_Y = 0;
  BLEND_CR = 0;
  return;
}


// 0x02006f2c  select_background_tilemap_layout

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_background_tilemap_layout(int layout_code)

{
  if (layout_code != 0xff) {
    DAT_020993c4 = 0;
    switch(layout_code) {
    case 0:
      write_ds_background_tilemap_word = write_linear_background_tilemap_entry;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_linear;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_linear;
      BG0_CR = 0x820;
      BG1_CR = 0xc29;
      BG2_CR = 0x22;
      DAT_023dc6a4 = 0x22;
      DAT_023dc6a8 = 0x820;
      BG3_CR = 0x42b;
      break;
    case 1:
    case 3:
      DAT_023dc6a8 = 0x8820;
      write_ds_background_tilemap_word = write_linear_background_tilemap_entry;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_linear;
      BG0_CR = 0x8820;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_linear;
      BG1_CR = 0x8c29;
      DAT_023dc6a4 = 0x8022;
      BG2_CR = 0x8022;
      BG3_CR = 0x842b;
      break;
    default:
      write_ds_background_tilemap_word = write_linear_background_tilemap_entry;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_linear;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_linear;
      break;
    case 0x10:
      write_ds_background_tilemap_word = write_background_tilemap_entry_64_columns;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_64_columns;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_64_columns;
      BG0_CR = 0x4820;
      BG1_CR = 0x4c29;
      BG2_CR = 0x4022;
      DAT_023dc6a4 = 0x4022;
      DAT_023dc6a8 = 0x4820;
      BG3_CR = 0x442b;
      break;
    case 0x11:
    case 0x13:
      DAT_023dc6a8 = 0xc820;
      write_ds_background_tilemap_word = write_background_tilemap_entry_64_columns_with_vertical_blocks;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_64_columns_with_vertical_blocks;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_64_columns_with_vertical_blocks;
      DAT_023dc6a4 = 0xc022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = layout_code;
      BG3_CR = 0xc42b;
      BG0_CR = 0xc820;
      BG1_CR = 0xcc29;
      BG2_CR = 0xc022;
      return;
    case 0x30:
    case 0x31:
      write_ds_background_tilemap_word = write_background_tilemap_entry_128_columns;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_128_columns;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_128_columns;
      DAT_023dc6a8 = 0x4820;
      DAT_020993c4 = 1;
      DAT_023dc6a4 = 0x4022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = layout_code;
      BG0_CR = 0x4820;
      BG1_CR = 0x4c29;
      BG2_CR = 0x4022;
      BG3_CR = 0x442b;
      return;
    }
                    /* WARNING (jumptable): Read-only address (ram,0x0208f350) is written */
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
    DAT_0208f350 = layout_code;
    return;
  }
  DAT_0208f350 = 0xff;
  return;
}


// 0x020072a8  select_window_tilemap_layout

void select_window_tilemap_layout(int wide_window)

{
  if (DAT_0208f34c != wide_window) {
    if (wide_window != 0) {
      DAT_023dc5b0 = 0x5430;
      write_ds_window_tilemap_word = write_window_tilemap_entry_64_columns;
      transfer_vdp_words_to_ds_window = transfer_vdp_words_to_window_tilemap_64_columns;
      DAT_023dc5ac = 0x5032;
      DAT_0208f34c = wide_window;
      return;
    }
    DAT_023dc5b0 = 0x1430;
    write_ds_window_tilemap_word = write_linear_window_tilemap_entry;
    transfer_vdp_words_to_ds_window = transfer_vdp_words_to_window_tilemap_linear;
    DAT_023dc5ac = 0x1032;
  }
  DAT_0208f34c = wide_window;
  return;
}


// 0x02007420  clear_and_initialize_renderer_vram

void clear_and_initialize_renderer_vram(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)&DAT_06000000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x600c000);
  puVar2 = (undefined2 *)&DAT_06020000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)&DAT_06030000);
  puVar2 = (undefined2 *)&DAT_06028000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6038000);
  puVar2 = (undefined2 *)&DAT_06030000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6040000);
  puVar2 = (undefined2 *)&DAT_06400000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6410000);
  return;
}


// 0x020083ec  apply_prepared_scanline_display_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void apply_prepared_scanline_display_state(int scanline)

{
  undefined4 *background_control;
  short *ds_bg_palette_cursor;
  short *queued_colors;
  
  scanline = scanline + viewport_offset_y + 1;
  _DAT_05000000 = (&scanline_backdrop_color)[scanline];
  if ((&scanline_display_blanked)[scanline] != '\0') {
    DISPLAY_CR = DISPLAY_CR & 0xe0ff;
    return;
  }
  BG1_X0 =
       (undefined2)(((uint)(ushort)(&scanline_plane_b_hscroll)[scanline] + viewport_offset_x) * 0x10000 >> 0x10);
  BG3_X0 = BG1_X0;
  BG1_Y0 =
       (undefined2)((viewport_offset_y + (uint)(ushort)(&scanline_plane_b_vscroll)[scanline]) * 0x10000 >> 0x10);
  BG3_Y0 = BG1_Y0;
  if ((&scanline_window_selected)[scanline] == '\x01') {
    background_control = &DAT_023dc5ac;
  }
  else {
    background_control = &DAT_023dc6a4;
  }
  BG0_CR = (undefined2)background_control[1];
  BG2_CR = (undefined2)*background_control;
  BG0_X0 =
       (undefined2)((viewport_offset_x + (uint)(ushort)(&scanline_plane_a_hscroll)[scanline]) * 0x10000 >> 0x10);
  BG2_X0 = BG0_X0;
  BG0_Y0 =
       (undefined2)((viewport_offset_y + (uint)(ushort)(&scanline_plane_a_vscroll)[scanline]) * 0x10000 >> 0x10);
  BG2_Y0 = BG0_Y0;
  DISPLAY_CR = DISPLAY_CR | 0x1f00;
  if ((&sprite_line_mask_tags)[scanline] == sprite_line_mask_generation) {
    WIN_IN = 0xf;
  }
  else {
    WIN_IN = 0x1f;
  }
  queued_colors = (short *)(&scanline_pending_palette_changes)[scanline];
  if (queued_colors != (short *)0x0) {
    ds_bg_palette_cursor = (short *)&DAT_05000002;
    do {
      queued_colors = queued_colors + 1;
      if (*queued_colors != -0x8000) {
        *ds_bg_palette_cursor = *queued_colors;
        *queued_colors = -0x8000;
      }
      ds_bg_palette_cursor = ds_bg_palette_cursor + 1;
    } while (ds_bg_palette_cursor != (short *)0x5000080);
    (&scanline_pending_palette_changes)[scanline] = 0;
    return;
  }
  return;
}


// 0x02008f7c  configure_ds_display_windows

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 configure_ds_display_windows(void)

{
  undefined4 *puVar1;
  undefined2 *puVar3;
  undefined4 *puVar2;
  
  select_background_tilemap_layout(0);
  select_window_tilemap_layout(0);
  puVar3 = &background_pattern_tile_map;
  clear_and_initialize_renderer_vram();
  WIN0_X0 = 0;
  WIN0_X1 = 0xff;
  WIN0_Y0 = 0;
  WIN0_Y1 = 0xc4;
  WIN_IN = 0x1f;
  WIN_OUT = 0x1f;
  do {
    puVar3[1] = 0x2000;
    puVar3[0x801] = 0x2000;
    puVar3[0x1001] = 0x2000;
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined2 *)0x209a3ca);
  puVar2 = (undefined4 *)&sprite_line_mask_tags;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != &write_ds_background_tilemap_word);
  window_pattern_tile_map = 0x8000;
  previous_oam_sprite_count = 0x50;
  plane_b_pattern_tile_map = 0x8000;
  DAT_0209c3d0 = 1;
  background_next_ds_tile = 1;
  DAT_0209c3ce = 1;
  DAT_0209c3dc = 0;
  background_pattern_tile_map = 0x8000;
  background_cache_refresh_flags = 0;
  DAT_0209c3d8 = 0;
  puVar2 = (undefined4 *)&sprite_pattern_dirty_flags;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 1;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_0209cbe0);
  sprite_line_mask_generation = 1;
  coproc_moveto_Domain_Access_Control(7);
  return 7;
}


// 0x0200b6a8  reset_vdp_memory_and_renderer_state

void reset_vdp_memory_and_renderer_state(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  undefined2 *puVar12;
  
  puVar5 = &vdp_vram;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != &vram_word_change_flags);
  puVar4 = (undefined4 *)&vram_word_change_flags;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &vdp_scanline);
  puVar8 = &vdp_cram;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)&scanline_window_selected);
  puVar8 = &vdp_vsram;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)0xb0036ec);
  vdp_sprite_attribute_table_base = 0;
  vdp_plane_a_name_table_base = 0;
  vdp_plane_b_name_table_base = 0;
  vdp_window_name_table_base = 0;
  puVar4 = (undefined4 *)&vdp_registers;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &ipc_received_command);
  puVar1 = &DAT_023dc8ca;
  puVar12 = &DAT_023dc94a;
  puVar3 = &DAT_023dcaca;
  puVar8 = &ds_converted_vdp_palette;
  do {
    puVar1 = puVar1 + 1;
    puVar12[-0x40] = 0x8000;
    *puVar12 = 0x8000;
    puVar12[0x40] = 0x8000;
    *puVar8 = 0x8000;
    puVar3[-0x40] = 0x8000;
    *puVar3 = 0x8000;
    puVar3[0x40] = 0x8000;
    puVar12 = puVar12 + 1;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
  } while (puVar1 != &DAT_023dc94a);
  puVar4 = &scanline_pending_palette_changes;
  do {
    puVar7 = puVar4 + 1;
    *puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &plane_a_word_change_flags);
  plane_b_word_change_flags = 0;
  plane_a_word_change_flags = 0;
  puVar5 = &DAT_023dde95;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != (undefined1 *)0x23dde9d);
  DAT_0b000084 = 0x200;
  DAT_020b4c14 = 0;
  DAT_0b000098 = 0x10;
  vdp_control_word_pending = 0;
  DAT_020b4bf4 = 0;
  DAT_020b4bf0 = 0;
  DAT_020b4bf1 = 0;
  vdp_h_interrupt_enabled = 0;
  DAT_0b00362c = 0;
  vdp_window_x_from_right = 0;
  DAT_0b000074 = &vdp_vram;
  DAT_0b0000a0 = 0;
  DAT_0b000044 = 0;
  DAT_0b000054 = 0;
  DAT_0b000064 = 0;
  DAT_0b000048 = 0;
  DAT_0b000058 = 0;
  DAT_0b000068 = 0;
  DAT_0b00004c = 0;
  DAT_0b00005c = 0;
  DAT_0b00006c = 0;
  DAT_0b000050 = 0;
  DAT_0b000060 = 0;
  DAT_0b000070 = 0;
  DAT_0b000078 = 0;
  DAT_0b00007c = 0;
  DAT_0b000080 = 0;
  DAT_0b000088 = 0;
  DAT_0b00008c = 0;
  DAT_0b000090 = 0;
  DAT_0b000094 = 0;
  DAT_0b00009c = 0;
  vdp_window_y_from_bottom = 0;
  vdp_wide_display_mode = 0;
  vdp_address_increment = 2;
  vdp_240_line_mode = 0;
  vdp_dma_enabled = 0;
  vdp_display_enabled = 0;
  vdp_dma_mode = 0;
  DAT_020b4c04 = 0;
  vdp_hscroll_mode = 0;
  vdp_vscroll_mode = 0;
  DAT_023ddeb0 = 0;
  DAT_023ddb04 = 0;
  vdp_dma_length_register = 0;
  vdp_address = 0;
  vdp_dma_source_address = 0;
  DAT_023dcea6 = 0;
  DAT_023dd372._0_1_ = 0;
  DAT_023dcdaa = 0;
  vdp_hscroll_table_base = 0;
  vdp_h_interrupt_reload = 0;
  vdp_backdrop_color_index = 0;
  DAT_020b4bf6 = 0;
  DAT_020b4c08 = 0;
  vdp_access_code = 0;
  vdp_sprite_count_limit = 0;
  vdp_active_width_pixels = 0x140;
  frame_active_width_pixels = 0x140;
  vdp_active_height_pixels = 0xf0;
  frame_active_height_pixels = 0xf0;
  vdp_window_map_stride_tiles = 0;
  frame_window_map_stride_tiles = 0;
  DAT_023dcfa8 = 0;
  frame_active_width_tiles = 0;
  DAT_023ddb08 = 0;
  DAT_020b4c07 = 0;
  vdp_dma_remaining = 0;
  vdp_mode_5_bit = 0;
  vram_word_change_flags_base = &vram_word_change_flags;
  vdp_sat_host_pointer = &vdp_vram;
  vdp_vram_base_pointer = &vdp_vram;
  DAT_023dc8c4 = 0;
  configure_ds_display_windows();
  puVar1 = &scanline_plane_a_hscroll;
  puVar3 = &scanline_plane_a_vscroll;
  plane_name_table_span_bytes = 0x800;
  plane_b_tilemap_refresh_pending = 0;
  plane_a_tilemap_refresh_pending = 0;
  vdp_background_layout_code = 0;
  puVar8 = &scanline_backdrop_color;
  puVar5 = &scanline_display_blanked;
  do {
    *puVar1 = 0;
    puVar12 = puVar1 + 0xf0;
    puVar1 = puVar1 + 1;
    *puVar3 = 0;
    *puVar12 = 0;
    puVar3[0xf0] = 0;
    *puVar5 = 0;
    *puVar8 = 0;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  } while (puVar1 != &scanline_plane_b_hscroll);
  iVar9 = 0;
  do {
    *(undefined4 *)((int)&DAT_023dd372 + iVar9 + 2) = 0;
    *(undefined4 *)((int)&vdp_plane_a_name_table_end + iVar9) = 0;
    iVar9 = iVar9 + 4;
  } while (iVar9 != 0x10);
  uVar2 = 0;
  cVar11 = '\0';
  sprite_y_scale_adjustments = 0;
  do {
    cVar11 = cVar11 + '\x01';
    pcVar10 = &sprite_y_scale_adjustments + uVar2;
    do {
      uVar2 = uVar2 + 1;
      if (0xef < uVar2) {
        return;
      }
      pcVar10 = pcVar10 + 1;
      *pcVar10 = cVar11;
    } while (uVar2 % 7 != 0);
  } while( true );
}

