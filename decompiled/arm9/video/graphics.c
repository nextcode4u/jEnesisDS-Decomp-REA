/* ARM9 graphics — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02006a44  invalidate_viewport_mode_cache

void invalidate_viewport_mode_cache(void)

{
  DAT_020993a0 = 0xff;
  return;
}


// 0x02007358  adjust_horizontal_viewport_offset

void adjust_horizontal_viewport_offset(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_020993b0;
  DAT_020993b0 = DAT_020993b0 + param_1;
  if (DAT_020993b0 < -0x20) {
    DAT_020993b0 = -0x20;
  }
  else if (0x20 < DAT_020993b0) {
    DAT_020993b0 = 0x20;
  }
  DAT_020993ac = (uint)(iVar1 != DAT_020993b0);
  return;
}


// 0x020073a4  adjust_vertical_viewport_offset

void adjust_vertical_viewport_offset(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_020993b4;
  DAT_020993b4 = DAT_020993b4 + param_1;
  if (DAT_020993b4 < -0x18) {
    DAT_020993b4 = -0x18;
  }
  else if (0x18 < DAT_020993b4) {
    DAT_020993b4 = 0x18;
  }
  DAT_020993ac = (uint)(iVar1 != DAT_020993b4);
  return;
}


// 0x020073f0  center_viewport

void center_viewport(void)

{
  DAT_020993ac = 1;
  DAT_020993b4 = 0;
  DAT_020993b0 = 0;
  return;
}


// 0x020086d8  copy_sprite_tiles_for_sprite_shape

void copy_sprite_tiles_for_sprite_shape(ushort *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar4;
  uint uVar5;
  uint uVar3;
  
  uVar5 = ((param_1[3] & 0xffff01ff) - DAT_020993a4) - 0x80;
  uVar4 = (ushort)uVar5;
  uVar3 = ((*param_1 & 0xffff01ff) - DAT_020993a8) - 0x80 & 0xffff;
  if (((DAT_023cb610 & 4) != 0) && ((uVar3 - 1) * 0x10000 < 0xee0001)) {
    uVar3 = uVar3 - (byte)(&DAT_023dcdb4)[uVar3] & 0xffff;
  }
  uVar2 = (ushort)uVar3;
  switch(param_1[1] >> 8 & 0xc | (param_1[1] & 0x3ff) >> 8) {
  case 0:
    copy_sprite_tiles_1x1();
    break;
  case 1:
    copy_sprite_tiles_1x2();
    break;
  case 2:
    copy_sprite_tiles_1x3();
    if ((param_1[2] & 0x1000) == 0) break;
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
    uVar1 = param_1[2];
    goto joined_r0x02008820;
  case 7:
    copy_sprite_tiles_2x4();
    break;
  case 8:
    copy_sprite_tiles_3x1();
    uVar1 = param_1[2];
    goto joined_r0x02008894;
  case 9:
    copy_sprite_tiles_3x2();
    uVar1 = param_1[2];
joined_r0x02008894:
    if ((uVar1 & 0x800) != 0) {
LAB_02008854:
      uVar4 = (ushort)(((uVar5 & 0xffff) - 8) * 0x10000 >> 0x10);
    }
    break;
  case 10:
    copy_sprite_tiles_3x3();
    uVar1 = param_1[2];
    if ((uVar1 & 0x1000) != 0) {
      uVar2 = uVar2 - 8;
    }
    goto joined_r0x02008850;
  case 0xb:
    copy_sprite_tiles_3x4();
    uVar1 = param_1[2];
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
    uVar1 = param_1[2];
joined_r0x02008820:
    if ((uVar1 & 0x1000) != 0) {
LAB_02008824:
      uVar2 = uVar2 - 8;
    }
    break;
  case 0xf:
    copy_sprite_tiles_4x4(param_2 + (param_1[2] & 0x7ff) * 0x20,&DAT_06400000 + param_3 * 0x200);
  }
  (&DAT_023dc1a8)[param_3 * 4] = (&DAT_023dc1a8)[param_3 * 4] | uVar2 & 0xff;
  (&DAT_023dc1aa)[param_3 * 4] = (&DAT_023dc1aa)[param_3 * 4] | uVar4 & 0x1ff;
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
  if ((DAT_023cb610 & 4) == 0) {
    DAT_023dcea8 = record_unscaled_scanline_scroll_and_backdrop;
  }
  else {
    switch(DAT_023dcdb0) {
    case 0:
      DAT_023dcea8 = (code *)&LAB_0200bbd0;
      return;
    case 1:
      DAT_023dcea8 = (code *)&LAB_0200c0cc;
      return;
    case 2:
      DAT_023dcea8 = (code *)&LAB_0200bf18;
      return;
    case 3:
      DAT_023dcea8 = (code *)&LAB_0200bd6c;
      return;
    }
  }
  return;
}


// 0x02009614  write_vdp_register_and_update_render_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_vdp_register_and_update_render_state(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 1 - (uint)vdp_mode_5_bit;
  if (1 < vdp_mode_5_bit) {
    iVar2 = 0;
  }
  if (param_1 < 0xc) {
    iVar2 = 0;
  }
  bVar1 = (byte)param_2;
  (&vdp_registers)[param_1] = bVar1;
  if (iVar2 == 0) {
    switch(param_1) {
    case 0:
      vdp_h_interrupt_enabled = (byte)(param_2 >> 4) & 1;
      DAT_020b4bf1 = ((byte)(param_2 >> 1) ^ 1) & 1;
      return;
    case 1:
      vdp_mode_5_bit = bVar1 & 4;
      DAT_0b00362f = (byte)(param_2 >> 6) & 1;
      uVar3 = param_2 >> 3 & 1;
      DAT_0b00362c = (byte)(param_2 >> 5) & 1;
      vdp_dma_enabled = (byte)(param_2 >> 4) & 1;
      DAT_023ddb06 = (char)uVar3;
      if (uVar3 == 0) {
        DAT_023dd370 = 0xe0;
        DAT_0b000004 = 0xe0;
      }
      else {
        DAT_023dd370 = 0xf0;
        DAT_0b000004 = 0xf0;
      }
      return;
    case 2:
      vdp_plane_a_name_table_base = (param_2 & 0x38) * 0x400;
      DAT_023dde8c = &DAT_020acbec + (param_2 & 0x38) * 0x200;
      if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
        DAT_023dc8a4 = 1;
      }
      ram0x023dd374 = vdp_plane_a_name_table_base;
      DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
      return;
    case 3:
      vdp_window_name_table_base = (param_2 & 0x3e) * 0x400;
      if (DAT_023ddb05 == '\0') {
        iVar2 = 0x800;
      }
      else {
        iVar2 = 0x1000;
      }
      DAT_023dc8bc = iVar2 + vdp_window_name_table_base;
      return;
    case 4:
      vdp_plane_b_name_table_base = (param_2 & 7) * 0x2000;
      DAT_023dde90 = &DAT_020acbec + (param_2 & 7) * 0x1000;
      if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
        DAT_023dc8a8 = 1;
      }
      DAT_023dd378 = vdp_plane_b_name_table_base;
      DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
      return;
    case 5:
      iVar2 = (param_2 & 0x7f) * 0x200;
      DAT_0209cbe0 = vdp_sprite_attribute_table_base;
      DAT_023dcdac = &vdp_vram + iVar2;
      vdp_sprite_attribute_table_base = iVar2;
      return;
    case 7:
      DAT_0b003640 = param_2 & 0x3f;
      vdp_backdrop_color_index = (char)(param_2 & 0x3f);
      return;
    case 10:
      vdp_h_interrupt_reload = (short)param_2;
      return;
    case 0xb:
      DAT_020b4bf0 = (byte)(param_2 >> 3) & 1;
      DAT_023dcfac = (byte)(param_2 >> 2) & 1;
      DAT_023dcdb0 = bVar1 & 3;
      if ((DAT_023cb610 & 4) == 0) {
        DAT_023dcea8 = record_unscaled_scanline_scroll_and_backdrop;
      }
      else {
        switch(bVar1 & 3) {
        case 0:
          DAT_023dcea8 = (code *)&LAB_0200bbd0;
          return;
        case 1:
          DAT_023dcea8 = (code *)&LAB_0200c0cc;
          return;
        case 2:
          DAT_023dcea8 = (code *)&LAB_0200bf18;
          return;
        case 3:
          DAT_023dcea8 = (code *)&LAB_0200bd6c;
          return;
        }
      }
      return;
    case 0xc:
      uVar3 = (uint)DAT_020b4bf4;
      DAT_023ddb05 = (param_2 & 0x81) != 0;
      if ((uVar3 != (param_2 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar3)) {
        DAT_020b4bf4 = 0;
      }
      if ((bool)DAT_023ddb05) {
        DAT_023dc8bc = vdp_window_name_table_base + 0x1000;
        DAT_020b4c0c = 0xf000;
        DAT_020b4c0a = 0x50;
        DAT_023ddeb2 = 0x28;
        DAT_023dc8ae = 0x140;
        DAT_023dc8c8 = 0x40;
      }
      else {
        DAT_020b4c0c = 0xf800;
        DAT_023dc8bc = vdp_window_name_table_base + 0x800;
        DAT_020b4c14 = 1;
        DAT_020b4c0a = 0x40;
        DAT_023ddeb2 = 0x20;
        DAT_023dc8ae = 0x100;
        DAT_023dc8c8 = 0x20;
      }
      if (DAT_023ddeb4 == '\0') {
        DAT_023dcfa8 = (uint)(DAT_023dceac <= DAT_023ddb04);
      }
      else {
        DAT_023dcfa8 = 1 - DAT_023ddb04;
        if (1 < DAT_023ddb04) {
          DAT_023dcfa8 = 0;
        }
      }
      return;
    case 0xd:
      DAT_023dcea4 = (short)((param_2 << 0x1a) >> 0x10);
      DAT_023dcdaa = DAT_023dcea4 + 0x380;
      return;
    case 0xf:
      vdp_address_increment = param_2;
      return;
    case 0x10:
      uVar4 = param_2 >> 4 & 3;
      param_2 = param_2 & 3;
      uVar3 = uVar4 | param_2 << 4;
      if (uVar3 != (DAT_023dcfa4 & 0xff)) {
        DAT_0208f358 = 1;
      }
      DAT_023dcfa4 = uVar3;
      DAT_023dc8a0 = *(int *)(&DAT_0208e59c + (uVar4 + param_2 * 4) * 4);
      DAT_023dc8b8 = DAT_023dc8a0 + vdp_plane_b_name_table_base;
      DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[param_2];
      DAT_023dc8b4 = DAT_023dc8a0 + vdp_plane_a_name_table_base;
      DAT_023dcea6 = (char)param_2;
      DAT_023dd372._0_1_ = (char)uVar4;
      return;
    case 0x11:
      uVar3 = (param_2 & 0x1f) * 2;
      DAT_023ddeb4 = (char)(param_2 >> 7);
      DAT_023ddb04 = (char)uVar3;
      if (param_2 >> 7 == 0) {
        DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar3);
      }
      else {
        DAT_023dcfa8 = (param_2 & 0x1f) * -2 + 1;
        if (1 < uVar3) {
          DAT_023dcfa8 = 0;
        }
      }
      return;
    case 0x12:
      DAT_023dde94 = (char)(param_2 >> 7);
      DAT_020b4c10 = (param_2 & 0x1f) << 3;
      DAT_023ddeb0 = (char)(param_2 & 0x1f);
      return;
    case 0x13:
      vdp_dma_length_register = vdp_dma_length_register & 0xff00 | param_2;
      return;
    case 0x14:
      vdp_dma_length_register = vdp_dma_length_register & 0xff | param_2 << 8;
      return;
    case 0x15:
      vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | param_2 << 1;
      return;
    case 0x16:
      vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | param_2 << 9;
      return;
    case 0x17:
      vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (param_2 & 0x7f) << 0x11;
      vdp_dma_mode = (undefined1)(param_2 >> 6);
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
    DAT_0b00014d = 1;
    DAT_0b00014c = 6;
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
  if ((DAT_023dc8b0 != DAT_023dc8c8) || (iVar1 = read_background_tile_cache_refresh_flag(2), iVar1 != 0)) {
    if (DAT_023ddb05 == '\0') {
      select_window_tilemap_layout();
      rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_window_name_table_base,0x800,2);
    }
    else {
      select_window_tilemap_layout(1);
      rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_window_name_table_base,0x1000,2);
    }
  }
  DAT_023dceac = DAT_023ddeb2;
  DAT_023dc8b2 = DAT_023dc8ae;
  DAT_023dc8ac = DAT_023dd370;
  DAT_023dc8b0 = DAT_023dc8c8;
  if (DAT_0208f358 == 0) {
    iVar1 = read_background_tile_cache_refresh_flag(0);
    if ((iVar1 != 0) || (DAT_023dc8a4 != 0)) {
      rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_a_name_table_base,DAT_023dc8a0,0);
      DAT_023dc8a4 = 0;
    }
    iVar1 = read_background_tile_cache_refresh_flag(1);
    if ((iVar1 != 0) || (DAT_023dc8a8 != 0)) {
      rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_b_name_table_base,DAT_023dc8a0,1);
      DAT_023dc8a8 = 0;
    }
  }
  else {
    DAT_0208f358 = 0;
    select_background_tilemap_layout(DAT_023dcfa4);
    rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_a_name_table_base,DAT_023dc8a0,0);
    rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_b_name_table_base,DAT_023dc8a0,1);
  }
  DAT_020b4c15 = 1;
  build_ds_sprite_attributes_from_genesis_sprite_table(&vdp_vram,(int)DAT_020b4c0a);
  DAT_020b4c15 = 0;
  return;
}


// 0x0200c280  record_unscaled_scanline_scroll_and_backdrop

void record_unscaled_scanline_scroll_and_backdrop(uint param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = DAT_0b00362f == '\0';
  (&DAT_023dcbca)[param_1] = (&ds_converted_vdp_palette)[vdp_backdrop_color_index];
  if (bVar4) {
    (&DAT_023dceb4)[param_1] = 1;
    return;
  }
  bVar4 = DAT_023dde94 == '\0';
  (&DAT_023dceb4)[param_1] = 0;
  cVar1 = DAT_023dcfac;
  if (bVar4) {
    if (DAT_020b4c10 <= param_1) {
LAB_0200c3a8:
      if (DAT_023dcfa8 == 0) {
        uVar3 = (uint)DAT_023dcea4;
        if (DAT_023dcdb0 == '\x02') {
          uVar3 = uVar3 + (param_1 & 0xfffffff8) * 4;
        }
        else if (DAT_023dcdb0 == '\x03') {
          uVar3 = uVar3 + param_1 * 4;
        }
        else if (DAT_023dcdb0 == '\x01') {
          uVar3 = uVar3 + (param_1 & 7) * 4;
        }
        bVar4 = DAT_023dcfac == '\0';
        (&DAT_023dd744)[param_1] = -(*(ushort *)(&vdp_vram + (uVar3 & 0xfffffffe)) & 0x3fff);
        if ((bVar4) || (uVar2 = 0, cVar1 == '\x01')) {
          uVar2 = vdp_vsram;
        }
        (&DAT_023dc7b0)[param_1] = 0;
        (&DAT_023dd384)[param_1] = uVar2;
        goto LAB_0200c31c;
      }
    }
  }
  else if (param_1 < DAT_020b4c10) goto LAB_0200c3a8;
  (&DAT_023dc7b0)[param_1] = 1;
  (&DAT_023dd744)[param_1] = 0;
  (&DAT_023dd384)[param_1] = 0;
LAB_0200c31c:
  cVar1 = DAT_023dcfac;
  uVar3 = DAT_023dcea4 + 2;
  if (DAT_023dcdb0 == '\x02') {
    uVar3 = uVar3 + (param_1 & 0xfffffff8) * 4;
  }
  else if (DAT_023dcdb0 == '\x03') {
    uVar3 = uVar3 + param_1 * 4;
  }
  else if (DAT_023dcdb0 == '\x01') {
    uVar3 = uVar3 + (param_1 & 7) * 4;
  }
  bVar4 = DAT_023dcfac != '\0';
  (&DAT_023dd924)[param_1] = -(*(ushort *)(&vdp_vram + (uVar3 & 0xfffffffe)) & 0x3fff);
  if ((bVar4) && (cVar1 != '\x01')) {
    (&DAT_023dd564)[param_1] = 0;
    return;
  }
  (&DAT_023dd564)[param_1] = DAT_0b00364e;
  return;
}

