/* ARM9 tile cache — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020074b8  map_genesis_pattern_to_ds_tile

uint map_genesis_pattern_to_ds_tile(int genesis_pattern_index,int background_plane)

{
  ushort cache_entry;
  int iVar2;
  uint ds_tile_index;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = genesis_pattern_index + background_plane * 0x800;
  cache_entry = (&background_pattern_tile_map)[iVar5];
  if ((cache_entry & 0x8000) == 0) {
    ds_tile_index = (uint)(ushort)(&background_next_ds_tile)[background_plane];
    if (0x3fe < ds_tile_index) {
      ds_tile_index = 1;
      (&background_cache_refresh_flags)[background_plane] = 1;
      (&background_next_ds_tile)[background_plane] = 1;
    }
    uVar7 = ds_tile_index | cache_entry | 0x8000;
    cache_entry = (ushort)uVar7;
    (&background_next_ds_tile)[background_plane] = (short)ds_tile_index + 1;
    (&background_pattern_tile_map)[iVar5] = cache_entry & 0xdfff;
    iVar2 = vdp_vram_base_pointer;
    if ((uVar7 & 0x4000) != 0) {
      iVar4 = *(int *)(&DAT_0208e590 + background_plane * 4);
      (&background_pattern_tile_map)[iVar5] = cache_entry & 0x9fff;
      uVar7 = 0;
      do {
        iVar5 = uVar7 * 2;
        uVar6 = uVar7 ^ 1;
        uVar7 = uVar7 + 1;
        *(undefined2 *)(uVar6 * 2 + iVar4 + ds_tile_index * 0x20) =
             *(undefined2 *)(iVar5 + iVar2 + genesis_pattern_index * 0x20);
      } while (uVar7 != 0x10);
    }
  }
  else {
    ds_tile_index = cache_entry & 0x3ff;
  }
  return ds_tile_index;
}


// 0x020075ac  read_background_tile_cache_refresh_flag

undefined4 read_background_tile_cache_refresh_flag(int background_plane)

{
  return (&background_cache_refresh_flags)[background_plane];
}


// 0x020075bc  mark_background_tile_cache_for_refresh

void mark_background_tile_cache_for_refresh(int background_plane)

{
  (&background_cache_refresh_flags)[background_plane] = 1;
  return;
}


// 0x020075d0  reset_background_tile_cache_at_capacity

void reset_background_tile_cache_at_capacity(int background_plane)

{
  undefined2 *puVar1;
  int iVar2;
  
  if ((ushort)(&background_next_ds_tile)[background_plane] < 0x2ff) {
    return;
  }
  (&background_next_ds_tile)[background_plane] = 1;
  puVar1 = &background_pattern_tile_map + background_plane * 0x800;
  iVar2 = 1;
  do {
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = 0x6000;
  } while (iVar2 != 0x800);
  (&background_cache_refresh_flags)[background_plane] = 0;
  return;
}


// 0x02007630  rebuild_background_tilemap_from_vdp_words

void rebuild_background_tilemap_from_vdp_words(undefined2 *name_table_words,uint table_byte_count,int background_plane)

{
  uint entry_byte_offset;
  uint next_entry_offset;
  
  (&background_next_ds_tile)[background_plane] = 0x3fe;
  reset_background_tile_cache_at_capacity(background_plane);
  if (table_byte_count != 0) {
    entry_byte_offset = 0;
    do {
      next_entry_offset = entry_byte_offset + 2;
      (*write_ds_background_tilemap_word)(background_plane,entry_byte_offset,*name_table_words);
      entry_byte_offset = next_entry_offset;
      name_table_words = name_table_words + 1;
    } while (next_entry_offset < table_byte_count);
  }
  if ((emulator_option_flags & 8) == 0) {
    (&background_cache_refresh_flags)[background_plane] = 0;
  }
  return;
}


// 0x020076d0  update_cached_ds_pattern_from_vdp_word

void update_cached_ds_pattern_from_vdp_word(uint vram_byte_address,undefined2 pattern_word)

{
  uint uVar1;
  uint genesis_pattern_index;
  ushort cache_entry;
  undefined1 *puVar4;
  bool ds_tile_resident;
  
  genesis_pattern_index = vram_byte_address >> 5;
  cache_entry = (&background_pattern_tile_map)[genesis_pattern_index];
  puVar4 = &sprite_pattern_dirty_flags;
  ds_tile_resident = (cache_entry & 0x8000) != 0;
  (&sprite_pattern_dirty_flags)[genesis_pattern_index] = 1;
  if (ds_tile_resident) {
    puVar4 = &DAT_06020000;
  }
  if (ds_tile_resident) {
    *(undefined2 *)(puVar4 + ((vram_byte_address & 0x1f | (cache_entry & 0x3ff) << 5) >> 1 ^ 1) * 2) = pattern_word;
  }
  else {
    (&background_pattern_tile_map)[genesis_pattern_index] = cache_entry | 0x4000;
  }
  cache_entry = (&plane_b_pattern_tile_map)[genesis_pattern_index];
  puVar4 = (undefined1 *)(cache_entry & 0x3ff);
  uVar1 = (int)puVar4 << 5;
  ds_tile_resident = (cache_entry & 0x8000) != 0;
  if (ds_tile_resident) {
    puVar4 = &DAT_06028000;
  }
  if (ds_tile_resident) {
    *(undefined2 *)(puVar4 + ((vram_byte_address & 0x1f | uVar1) >> 1 ^ 1) * 2) = pattern_word;
  }
  if (!ds_tile_resident) {
    (&plane_b_pattern_tile_map)[genesis_pattern_index] = cache_entry | 0x4000;
  }
  cache_entry = (&window_pattern_tile_map)[genesis_pattern_index];
  ds_tile_resident = (cache_entry & 0x8000) != 0;
  puVar4 = (undefined1 *)(cache_entry | 0x4000);
  if (ds_tile_resident) {
    puVar4 = &DAT_06030000;
  }
  if (ds_tile_resident) {
    *(undefined2 *)(puVar4 + ((vram_byte_address & 0x1f | (cache_entry & 0x3ff) << 5) >> 1 ^ 1) * 2) = pattern_word;
  }
  else {
    (&window_pattern_tile_map)[genesis_pattern_index] = (ushort)puVar4;
  }
  return;
}

