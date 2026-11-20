/* ARM9 graphics — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02006a44  invalidate_viewport_mode_cache

void invalidate_viewport_mode_cache(void)

{
  cached_viewport_mode = 0xff;
  return;
}


// 0x02007358  adjust_horizontal_viewport_offset

void adjust_horizontal_viewport_offset(int param_1)

{
  int iVar1;
  
  iVar1 = requested_viewport_offset_x;
  requested_viewport_offset_x = requested_viewport_offset_x + param_1;
  if (requested_viewport_offset_x < -0x20) {
    requested_viewport_offset_x = -0x20;
  }
  else if (0x20 < requested_viewport_offset_x) {
    requested_viewport_offset_x = 0x20;
  }
  viewport_update_pending = (uint)(iVar1 != requested_viewport_offset_x);
  return;
}


// 0x020073a4  adjust_vertical_viewport_offset

void adjust_vertical_viewport_offset(int param_1)

{
  int iVar1;
  
  iVar1 = requested_viewport_offset_y;
  requested_viewport_offset_y = requested_viewport_offset_y + param_1;
  if (requested_viewport_offset_y < -0x18) {
    requested_viewport_offset_y = -0x18;
  }
  else if (0x18 < requested_viewport_offset_y) {
    requested_viewport_offset_y = 0x18;
  }
  viewport_update_pending = (uint)(iVar1 != requested_viewport_offset_y);
  return;
}


// 0x020073f0  center_viewport

void center_viewport(void)

{
  viewport_update_pending = 1;
  requested_viewport_offset_y = 0;
  requested_viewport_offset_x = 0;
  return;
}


// 0x020086d8  copy_sprite_tiles_for_sprite_shape

void copy_sprite_tiles_for_sprite_shape(ushort *genesis_sprite_words,int genesis_vram_base,int ds_sprite_index)

{
  ushort uVar1;
  ushort ds_sprite_y;
  ushort ds_sprite_x;
  uint uVar5;
  uint uVar3;
  
  uVar5 = ((genesis_sprite_words[3] & 0xffff01ff) - viewport_offset_x) - 0x80;
  ds_sprite_x = (ushort)uVar5;
  uVar3 = ((*genesis_sprite_words & 0xffff01ff) - viewport_offset_y) - 0x80 & 0xffff;
  if (((emulator_option_flags & 4) != 0) && ((uVar3 - 1) * 0x10000 < 0xee0001)) {
    uVar3 = uVar3 - (byte)(&sprite_y_scale_adjustments)[uVar3] & 0xffff;
  }
  ds_sprite_y = (ushort)uVar3;
  switch(genesis_sprite_words[1] >> 8 & 0xc | (genesis_sprite_words[1] & 0x3ff) >> 8) {
  case 0:
    copy_sprite_tiles_1x1();
    break;
  case 1:
    copy_sprite_tiles_1x2();
    break;
  case 2:
    copy_sprite_tiles_1x3();
    if ((genesis_sprite_words[2] & 0x1000) == 0) break;
    goto LAB_02008824;
  case 3:
    copy_sprite_tiles_1x4();
    break;
  case 4:
    copy_sprite_tiles_2x1();
    break;
  case 5:
    copy_sprite_tiles_2x2();
    break;
  case 6:
    copy_sprite_tiles_2x3();
    uVar1 = genesis_sprite_words[2];
    goto joined_r0x02008820;
  case 7:
    copy_sprite_tiles_2x4();
    break;
  case 8:
    copy_sprite_tiles_3x1();
    uVar1 = genesis_sprite_words[2];
    goto joined_r0x02008894;
  case 9:
    copy_sprite_tiles_3x2();
    uVar1 = genesis_sprite_words[2];
joined_r0x02008894:
    if ((uVar1 & 0x800) != 0) {
LAB_02008854:
      ds_sprite_x = (ushort)(((uVar5 & 0xffff) - 8) * 0x10000 >> 0x10);
    }
    break;
  case 10:
    copy_sprite_tiles_3x3();
    uVar1 = genesis_sprite_words[2];
    if ((uVar1 & 0x1000) != 0) {
      ds_sprite_y = ds_sprite_y - 8;
    }
    goto joined_r0x02008850;
  case 0xb:
    copy_sprite_tiles_3x4();
    uVar1 = genesis_sprite_words[2];
joined_r0x02008850:
    if ((uVar1 & 0x800) == 0) break;
    goto LAB_02008854;
  case 0xc:
    copy_sprite_tiles_4x1();
    break;
  case 0xd:
    copy_sprite_tiles_4x2();
    break;
  case 0xe:
    copy_sprite_tiles_4x3();
    uVar1 = genesis_sprite_words[2];
joined_r0x02008820:
    if ((uVar1 & 0x1000) != 0) {
LAB_02008824:
      ds_sprite_y = ds_sprite_y - 8;
    }
    break;
  case 0xf:
    copy_sprite_tiles_4x4(genesis_vram_base + (genesis_sprite_words[2] & 0x7ff) * 0x20,&DAT_06400000 + ds_sprite_index * 0x200);
  }
  (&ds_oam_staging_attr0)[ds_sprite_index * 4] = (&ds_oam_staging_attr0)[ds_sprite_index * 4] | ds_sprite_y & 0xff;
  (&ds_oam_staging_attr1)[ds_sprite_index * 4] = (&ds_oam_staging_attr1)[ds_sprite_index * 4] | ds_sprite_x & 0x1ff;
  return;
}


// 0x020090e8  tick_vdp_horizontal_interrupt_counter

void tick_vdp_horizontal_interrupt_counter(undefined4 param_1)

{
  vdp_scanline = param_1;
  vdp_h_interrupt_counter = vdp_h_interrupt_counter + -1;
  DAT_0b003628 = 0;
  if (-1 < vdp_h_interrupt_counter) {
    return;
  }
  vdp_h_interrupt_counter = (int)vdp_h_interrupt_reload;
  DAT_0b00362d = 1;
  return;
}


// 0x02009144  begin_vdp_vertical_blanking

void begin_vdp_vertical_blanking(int param_1)

{
  vdp_h_interrupt_counter = vdp_h_interrupt_counter + -1;
  DAT_0b003628 = 0;
  vdp_scanline = param_1;
  if (vdp_h_interrupt_counter < 0) {
    vdp_h_interrupt_counter = (int)vdp_h_interrupt_reload;
    DAT_0b00362d = 1;
    if (param_1 != DAT_0b000004) {
      return;
    }
  }
  else if (param_1 != DAT_0b000004) {
    return;
  }
  DAT_0b00008c = 0x80;
  DAT_0b00362e = 1;
  DAT_0b00007c = 8;
  return;
}


// 0x020091ec  reload_vdp_counter_during_vertical_blanking

void reload_vdp_counter_during_vertical_blanking(undefined4 param_1)

{
  vdp_scanline = param_1;
  vdp_h_interrupt_counter = (int)vdp_h_interrupt_reload;
  return;
}


// 0x02009570  select_vdp_scanline_render_callback

void select_vdp_scanline_render_callback(void)

{
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


// 0x02009614  write_vdp_register_and_update_render_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_vdp_register_and_update_render_state(uint register_index,uint register_value)

{
  byte register_byte;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 1 - (uint)vdp_mode_5_bit;
  if (1 < vdp_mode_5_bit) {
    iVar2 = 0;
  }
  if (register_index < 0xc) {
    iVar2 = 0;
  }
  register_byte = (byte)register_value;
  (&vdp_registers)[register_index] = register_byte;
  if (iVar2 == 0) {
    switch(register_index) {
    case 0:
      vdp_h_interrupt_enabled = (byte)(register_value >> 4) & 1;
      DAT_020b4bf1 = ((byte)(register_value >> 1) ^ 1) & 1;
      return;
    case 1:
      vdp_mode_5_bit = register_byte & 4;
      vdp_display_enabled = (byte)(register_value >> 6) & 1;
      uVar3 = register_value >> 3 & 1;
      DAT_0b00362c = (byte)(register_value >> 5) & 1;
      vdp_dma_enabled = (byte)(register_value >> 4) & 1;
      vdp_240_line_mode = (char)uVar3;
      if (uVar3 == 0) {
        vdp_active_height_pixels = 0xe0;
        DAT_0b000004 = 0xe0;
      }
      else {
        vdp_active_height_pixels = 0xf0;
        DAT_0b000004 = 0xf0;
      }
      return;
    case 2:
      vdp_plane_a_name_table_base = (register_value & 0x38) * 0x400;
      plane_a_word_change_flags = &vram_word_change_flags + (register_value & 0x38) * 0x200;
      if (((emulator_option_flags & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
        plane_a_tilemap_refresh_pending = 1;
      }
      ram0x023dd374 = vdp_plane_a_name_table_base;
      vdp_plane_a_name_table_end = vdp_plane_a_name_table_base + plane_name_table_span_bytes;
      return;
    case 3:
      vdp_window_name_table_base = (register_value & 0x3e) * 0x400;
      if (vdp_wide_display_mode == '\0') {
        iVar2 = 0x800;
      }
      else {
        iVar2 = 0x1000;
      }
      vdp_window_name_table_end = iVar2 + vdp_window_name_table_base;
      return;
    case 4:
      vdp_plane_b_name_table_base = (register_value & 7) * 0x2000;
      plane_b_word_change_flags = &vram_word_change_flags + (register_value & 7) * 0x1000;
      if (((emulator_option_flags & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
        plane_b_tilemap_refresh_pending = 1;
      }
      DAT_023dd378 = vdp_plane_b_name_table_base;
      vdp_plane_b_name_table_end = vdp_plane_b_name_table_base + plane_name_table_span_bytes;
      return;
    case 5:
      iVar2 = (register_value & 0x7f) * 0x200;
      DAT_0209cbe0 = vdp_sprite_attribute_table_base;
      vdp_sat_host_pointer = &vdp_vram + iVar2;
      vdp_sprite_attribute_table_base = iVar2;
      return;
    case 7:
      DAT_0b003640 = register_value & 0x3f;
      vdp_backdrop_color_index = (char)(register_value & 0x3f);
      return;
    case 10:
      vdp_h_interrupt_reload = (short)register_value;
      return;
    case 0xb:
      DAT_020b4bf0 = (byte)(register_value >> 3) & 1;
      vdp_vscroll_mode = (byte)(register_value >> 2) & 1;
      vdp_hscroll_mode = register_byte & 3;
      if ((emulator_option_flags & 4) == 0) {
        record_vdp_scanline_state = record_unscaled_scanline_scroll_and_backdrop;
      }
      else {
        switch(register_byte & 3) {
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
    case 0xc:
      uVar3 = (uint)DAT_020b4bf4;
      vdp_wide_display_mode = (register_value & 0x81) != 0;
      if ((uVar3 != (register_value >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar3)) {
        DAT_020b4bf4 = 0;
      }
      if ((bool)vdp_wide_display_mode) {
        vdp_window_name_table_end = vdp_window_name_table_base + 0x1000;
        DAT_020b4c0c = 0xf000;
        vdp_sprite_count_limit = 0x50;
        vdp_active_width_tiles = 0x28;
        vdp_active_width_pixels = 0x140;
        vdp_window_map_stride_tiles = 0x40;
      }
      else {
        DAT_020b4c0c = 0xf800;
        vdp_window_name_table_end = vdp_window_name_table_base + 0x800;
        DAT_020b4c14 = 1;
        vdp_sprite_count_limit = 0x40;
        vdp_active_width_tiles = 0x20;
        vdp_active_width_pixels = 0x100;
        vdp_window_map_stride_tiles = 0x20;
      }
      if (vdp_window_x_from_right == '\0') {
        DAT_023dcfa8 = (uint)(frame_active_width_tiles <= DAT_023ddb04);
      }
      else {
        DAT_023dcfa8 = 1 - DAT_023ddb04;
        if (1 < DAT_023ddb04) {
          DAT_023dcfa8 = 0;
        }
      }
      return;
    case 0xd:
      vdp_hscroll_table_base = (short)((register_value << 0x1a) >> 0x10);
      DAT_023dcdaa = vdp_hscroll_table_base + 0x380;
      return;
    case 0xf:
      vdp_address_increment = register_value;
      return;
    case 0x10:
      uVar4 = register_value >> 4 & 3;
      register_value = register_value & 3;
      uVar3 = uVar4 | register_value << 4;
      if (uVar3 != (vdp_background_layout_code & 0xff)) {
        background_layout_refresh_pending = 1;
      }
      vdp_background_layout_code = uVar3;
      plane_name_table_span_bytes = *(int *)(&DAT_0208e59c + (uVar4 + register_value * 4) * 4);
      vdp_plane_b_name_table_end = plane_name_table_span_bytes + vdp_plane_b_name_table_base;
      DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[register_value];
      vdp_plane_a_name_table_end = plane_name_table_span_bytes + vdp_plane_a_name_table_base;
      DAT_023dcea6 = (char)register_value;
      DAT_023dd372._0_1_ = (char)uVar4;
      return;
    case 0x11:
      uVar3 = (register_value & 0x1f) * 2;
      vdp_window_x_from_right = (char)(register_value >> 7);
      DAT_023ddb04 = (char)uVar3;
      if (register_value >> 7 == 0) {
        DAT_023dcfa8 = (uint)(frame_active_width_tiles <= uVar3);
      }
      else {
        DAT_023dcfa8 = (register_value & 0x1f) * -2 + 1;
        if (1 < uVar3) {
          DAT_023dcfa8 = 0;
        }
      }
      return;
    case 0x12:
      vdp_window_y_from_bottom = (char)(register_value >> 7);
      vdp_window_y_split_pixels = (register_value & 0x1f) << 3;
      DAT_023ddeb0 = (char)(register_value & 0x1f);
      return;
    case 0x13:
      vdp_dma_length_register = vdp_dma_length_register & 0xff00 | register_value;
      return;
    case 0x14:
      vdp_dma_length_register = vdp_dma_length_register & 0xff | register_value << 8;
      return;
    case 0x15:
      vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | register_value << 1;
      return;
    case 0x16:
      vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | register_value << 9;
      return;
    case 0x17:
      vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (register_value & 0x7f) << 0x11;
      vdp_dma_mode = (undefined1)(register_value >> 6);
    }
    return;
  }
  return;
}


// 0x0200b284  update_vdp_line_cycles_and_queue_m68k_interrupts

/* WARNING: Removing unreachable block (ram,0x020050e0) */
/* WARNING: Removing unreachable block (ram,0x020050e4) */

void update_vdp_line_cycles_and_queue_m68k_interrupts(uint param_1)

{
  int iVar1;
  
  DAT_0b003624 = param_1;
  if ((((vdp_h_interrupt_enabled != '\0') && (DAT_0b00362d != '\0')) && (DAT_0b003628 == 0)) &&
     (0x22 < param_1)) {
    queue_m68k_interrupt_level(4);
    DAT_0b003628 = 1;
  }
  if (((DAT_0b00362c != '\0') && (DAT_0b00362e != '\0')) &&
     ((0x8e < DAT_0b003624 || ((DAT_0b00362d == '\0' && (0xc < DAT_0b003624)))))) {
    m68k_irq_pending = 1;
    m68k_pending_irq_level = 6;
    iVar1 = CONCAT13(DAT_0b000143,CONCAT12(DAT_0b000142,CONCAT11(DAT_0b000141,DAT_0b000140))) + -4;
    DAT_0b000143 = (char)((uint)iVar1 >> 0x18);
    DAT_0b000141 = (char)((uint)iVar1 >> 8);
    DAT_0b000142 = (char)((uint)iVar1 >> 0x10);
    DAT_0b000140 = (char)iVar1;
    return;
  }
  return;
}


// 0x0200b438  begin_vdp_frame_and_refresh_backgrounds

void begin_vdp_frame_and_refresh_backgrounds(void)

{
  int iVar1;
  
  vdp_h_interrupt_counter = (int)vdp_h_interrupt_reload;
  DAT_0b000098 = DAT_0b000098 ^ 0x10;
  DAT_0b003624 = 0;
  DAT_0b00361c = 0;
  DAT_0b00007c = 0;
  DAT_0b00008c = 0;
  DAT_0b000090 = 0;
  DAT_0b000094 = 0;
  if ((frame_window_map_stride_tiles != vdp_window_map_stride_tiles) || (iVar1 = read_background_tile_cache_refresh_flag(2), iVar1 != 0)) {
    if (vdp_wide_display_mode == '\0') {
      select_window_tilemap_layout();
      rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_window_name_table_base,0x800,2);
    }
    else {
      select_window_tilemap_layout(1);
      rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_window_name_table_base,0x1000,2);
    }
  }
  frame_active_width_tiles = vdp_active_width_tiles;
  frame_active_width_pixels = vdp_active_width_pixels;
  frame_active_height_pixels = vdp_active_height_pixels;
  frame_window_map_stride_tiles = vdp_window_map_stride_tiles;
  if (background_layout_refresh_pending == 0) {
    iVar1 = read_background_tile_cache_refresh_flag(0);
    if ((iVar1 != 0) || (plane_a_tilemap_refresh_pending != 0)) {
      rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_a_name_table_base,plane_name_table_span_bytes,0);
      plane_a_tilemap_refresh_pending = 0;
    }
    iVar1 = read_background_tile_cache_refresh_flag(1);
    if ((iVar1 != 0) || (plane_b_tilemap_refresh_pending != 0)) {
      rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_b_name_table_base,plane_name_table_span_bytes,1);
      plane_b_tilemap_refresh_pending = 0;
    }
  }
  else {
    background_layout_refresh_pending = 0;
    select_background_tilemap_layout(vdp_background_layout_code);
    rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_a_name_table_base,plane_name_table_span_bytes,0);
    rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_b_name_table_base,plane_name_table_span_bytes,1);
  }
  DAT_020b4c15 = 1;
  build_ds_sprite_attributes_from_genesis_sprite_table(&vdp_vram,(int)vdp_sprite_count_limit);
  DAT_020b4c15 = 0;
  return;
}


// 0x0200c280  record_unscaled_scanline_scroll_and_backdrop

void record_unscaled_scanline_scroll_and_backdrop(uint scanline)

{
  char vscroll_mode_snapshot;
  undefined2 plane_a_vscroll_value;
  uint hscroll_word_address;
  bool bVar4;
  
  bVar4 = vdp_display_enabled == '\0';
  (&scanline_backdrop_color)[scanline] = (&ds_converted_vdp_palette)[vdp_backdrop_color_index];
  if (bVar4) {
    (&scanline_display_blanked)[scanline] = 1;
    return;
  }
  bVar4 = vdp_window_y_from_bottom == '\0';
  (&scanline_display_blanked)[scanline] = 0;
  vscroll_mode_snapshot = vdp_vscroll_mode;
  if (bVar4) {
    if (vdp_window_y_split_pixels <= scanline) {
LAB_0200c3a8:
      if (DAT_023dcfa8 == 0) {
        hscroll_word_address = (uint)vdp_hscroll_table_base;
        if (vdp_hscroll_mode == '\x02') {
          hscroll_word_address = hscroll_word_address + (scanline & 0xfffffff8) * 4;
        }
        else if (vdp_hscroll_mode == '\x03') {
          hscroll_word_address = hscroll_word_address + scanline * 4;
        }
        else if (vdp_hscroll_mode == '\x01') {
          hscroll_word_address = hscroll_word_address + (scanline & 7) * 4;
        }
        bVar4 = vdp_vscroll_mode == '\0';
        (&scanline_plane_a_hscroll)[scanline] = -(*(ushort *)(&vdp_vram + (hscroll_word_address & 0xfffffffe)) & 0x3fff);
        if ((bVar4) || (plane_a_vscroll_value = 0, vscroll_mode_snapshot == '\x01')) {
          plane_a_vscroll_value = vdp_vsram;
        }
        (&scanline_window_selected)[scanline] = 0;
        (&scanline_plane_a_vscroll)[scanline] = plane_a_vscroll_value;
        goto LAB_0200c31c;
      }
    }
  }
  else if (scanline < vdp_window_y_split_pixels) goto LAB_0200c3a8;
  (&scanline_window_selected)[scanline] = 1;
  (&scanline_plane_a_hscroll)[scanline] = 0;
  (&scanline_plane_a_vscroll)[scanline] = 0;
LAB_0200c31c:
  vscroll_mode_snapshot = vdp_vscroll_mode;
  hscroll_word_address = vdp_hscroll_table_base + 2;
  if (vdp_hscroll_mode == '\x02') {
    hscroll_word_address = hscroll_word_address + (scanline & 0xfffffff8) * 4;
  }
  else if (vdp_hscroll_mode == '\x03') {
    hscroll_word_address = hscroll_word_address + scanline * 4;
  }
  else if (vdp_hscroll_mode == '\x01') {
    hscroll_word_address = hscroll_word_address + (scanline & 7) * 4;
  }
  bVar4 = vdp_vscroll_mode != '\0';
  (&scanline_plane_b_hscroll)[scanline] = -(*(ushort *)(&vdp_vram + (hscroll_word_address & 0xfffffffe)) & 0x3fff);
  if ((bVar4) && (vscroll_mode_snapshot != '\x01')) {
    (&scanline_plane_b_vscroll)[scanline] = 0;
    return;
  }
  (&scanline_plane_b_vscroll)[scanline] = vdp_vsram_second_word;
  return;
}

