/* ARM9 display updates — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020090a0  copy_prepared_palette_to_main_bg_and_obj

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_prepared_palette_to_main_bg_and_obj(void)

{
  clean_and_invalidate_arm9_data_cache_range(&ds_converted_vdp_palette,0x80);
  ds_dma3_source = &ds_converted_vdp_palette;
  ds_dma3_destination = &DAT_05000200;
  ds_dma3_control = 0x80000040;
  return;
}


// 0x02009cf0  rebuild_display_from_vdp_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rebuild_display_from_vdp_state(void)

{
  undefined1 *puVar1;
  ushort ds_color;
  uint palette_index;
  int palette_byte_offset;
  uint genesis_color;
  undefined4 unaff_r4;
  uint backdrop_index;
  undefined4 in_lr;
  bool bVar7;
  
  backdrop_index = 0;
  do {
    palette_index = backdrop_index & 0xff;
    puVar1 = &vdp_registers + backdrop_index;
    backdrop_index = backdrop_index + 1;
    write_vdp_register_and_update_render_state(palette_index,*puVar1);
  } while (backdrop_index != 0x18);
  palette_index = 0;
  backdrop_index = (uint)vdp_backdrop_color_index;
  palette_byte_offset = 0;
  do {
    genesis_color = (uint)*(ushort *)((int)&vdp_cram + palette_byte_offset);
    ds_color = (ushort)((genesis_color & 0xe0) << 2) | (ushort)((genesis_color & 0xe00) << 3) | 0x8000 |
            (ushort)((genesis_color & 0xe) << 1);
    *(ushort *)((int)&ds_converted_vdp_palette + palette_byte_offset) = ds_color;
    if (palette_index != 0) {
      *(ushort *)(&DAT_05000000 + palette_byte_offset) = ds_color;
    }
    bVar7 = backdrop_index == palette_index;
    palette_index = palette_index + 1;
    *(ushort *)(&DAT_05000200 + palette_byte_offset) = ds_color;
    if (bVar7) {
      _DAT_05000200 = ds_color;
    }
    palette_byte_offset = palette_byte_offset + 2;
  } while (palette_index != 0x40);
  if (vdp_wide_display_mode == '\0') {
    select_window_tilemap_layout();
    rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_window_name_table_base,0x800,2);
  }
  else {
    select_window_tilemap_layout(1);
    rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_window_name_table_base,0x1000,2);
  }
  select_background_tilemap_layout(vdp_background_layout_code);
  rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_a_name_table_base,plane_name_table_span_bytes,0);
  rebuild_background_tilemap_from_vdp_words(&vdp_vram + vdp_plane_b_name_table_base,plane_name_table_span_bytes,1);
  sprite_cache_rebuild_pending = 1;
  build_ds_sprite_attributes_from_genesis_sprite_table(vdp_vram_base_pointer,previous_oam_sprite_count,&previous_oam_sprite_count,1,unaff_r4,in_lr);
  sprite_cache_rebuild_pending = 0;
  return;
}

