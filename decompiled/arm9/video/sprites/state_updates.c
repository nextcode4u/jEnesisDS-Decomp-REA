/* ARM9 state updates — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020085b4  update_ds_sprite_position_from_genesis_attributes

void update_ds_sprite_position_from_genesis_attributes(ushort *genesis_sprite_words,int ds_sprite_index)

{
  short viewport_relative_x;
  ushort ds_sprite_y;
  ushort ds_sprite_x;
  uint uVar3;
  
  viewport_relative_x = (genesis_sprite_words[3] & 0x1ff) - (short)viewport_offset_x;
  ds_sprite_x = viewport_relative_x - 0x80;
  uVar3 = ((*genesis_sprite_words & 0xffff01ff) - viewport_offset_y) - 0x80 & 0xffff;
  if (((emulator_option_flags & 4) != 0) && ((uVar3 - 1) * 0x10000 < 0xee0001)) {
    uVar3 = uVar3 - (byte)(&sprite_y_scale_adjustments)[uVar3] & 0xffff;
  }
  ds_sprite_y = (ushort)uVar3;
  if (((genesis_sprite_words[1] >> 10 & 3) == 2) && ((genesis_sprite_words[2] & 0x800) != 0)) {
    ds_sprite_x = viewport_relative_x - 0x88;
  }
  if (((genesis_sprite_words[1] >> 8 & 3) == 2) && ((genesis_sprite_words[2] & 0x1000) != 0)) {
    ds_sprite_y = ds_sprite_y - 8;
  }
  (&ds_oam_staging_attr0)[ds_sprite_index * 4] = (&ds_oam_staging_attr0)[ds_sprite_index * 4] & 0xff00;
  (&ds_oam_staging_attr1)[ds_sprite_index * 4] = (&ds_oam_staging_attr1)[ds_sprite_index * 4] & 0xfe00;
  (&ds_oam_staging_attr0)[ds_sprite_index * 4] = (&ds_oam_staging_attr0)[ds_sprite_index * 4] | ds_sprite_y & 0xff;
  (&ds_oam_staging_attr1)[ds_sprite_index * 4] = (&ds_oam_staging_attr1)[ds_sprite_index * 4] | ds_sprite_x & 0x1ff;
  return;
}


// 0x02008914  copy_sprite_attribute_buffer_to_ds_oam

/* WARNING: Removing unreachable block (ram,0x02008974) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void copy_sprite_attribute_buffer_to_ds_oam(uint sprite_count)

{
  int attribute_bytes;
  
  if (previous_oam_sprite_count <= sprite_count) {
    previous_oam_sprite_count = sprite_count;
  }
  attribute_bytes = previous_oam_sprite_count << 3;
  previous_oam_sprite_count = sprite_count;
  DC_FlushRange(&ds_oam_staging_attr0,attribute_bytes);
  do {
  } while( true );
}


// 0x02008984  build_ds_sprite_attributes_from_genesis_sprite_table

void build_ds_sprite_attributes_from_genesis_sprite_table(undefined4 genesis_vram_base,uint sprite_limit)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *next_dirty_flag;
  undefined2 *stale_oam_attr0_cursor;
  undefined *puVar12;
  ushort uVar13;
  uint uVar14;
  ushort *genesis_sprite_words;
  ushort *cached_sprite_words;
  uint ds_sprite_index;
  ushort *oam_attr1_cursor;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 *dirty_flag_cursor;
  
  ds_sprite_index = 0;
  oam_attr1_cursor = &ds_oam_staging_attr1;
  cVar4 = sprite_line_mask_generation + '\x01';
  if ((char)(sprite_line_mask_generation + '\x01') == '\0') {
    cVar4 = sprite_line_mask_generation + '\x02';
  }
  sprite_line_mask_generation = cVar4;
  uVar14 = 0;
  do {
    genesis_sprite_words = (ushort *)(vdp_sat_host_pointer + uVar14 * 8);
    uVar3 = genesis_sprite_words[1];
    uVar20 = (uint)uVar3;
    uVar2 = genesis_sprite_words[2] & 0x7ff;
    cached_sprite_words = &sprite_cache_word_0 + uVar14 * 6;
    uVar19 = uVar2 + (byte)(&UNK_0208e528)[(uVar3 >> 8 & 3) + (uVar3 >> 8 & 0xc)];
    if (sprite_cache_rebuild_pending == 0) {
      if ((uVar20 & 0x7f) != ((ushort)(&sprite_cache_size_and_link)[uVar14 * 6] & 0x7f)) {
        sprite_cache_rebuild_pending = 1;
      }
      if (ds_sprite_index != (ushort)(&sprite_cache_oam_slot)[uVar14 * 6]) goto LAB_02008a40;
      if (uVar2 < uVar19) {
        if ((&sprite_pattern_dirty_flags)[uVar2] == '\0') {
          pcVar8 = &sprite_pattern_dirty_flags + uVar2;
          do {
            if (pcVar8 == (char *)((int)&DAT_0209c3dc + uVar19 + 3)) goto LAB_02008d14;
            pcVar8 = pcVar8 + 1;
          } while (*pcVar8 == '\0');
        }
        goto LAB_02008a40;
      }
LAB_02008d14:
      if ((*(int *)genesis_sprite_words != *(int *)cached_sprite_words) ||
         (*(int *)(genesis_sprite_words + 2) != *(int *)(&sprite_cache_tile_and_flags + uVar14 * 6))) {
        if (((&sprite_cache_visible_flag)[uVar14 * 6] == 0) ||
           ((uVar20 != (ushort)(&sprite_cache_size_and_link)[uVar14 * 6] ||
            ((uint)(ushort)(&sprite_cache_tile_and_flags)[uVar14 * 6] != (uint)genesis_sprite_words[2])))) goto LAB_02008a40;
        *cached_sprite_words = *genesis_sprite_words;
        (&sprite_cache_x_word)[uVar14 * 6] = genesis_sprite_words[3];
        if ((((int)((genesis_sprite_words[3] & 0x1ff) - 0x80) < (int)(uint)frame_active_width_pixels) &&
            ((((genesis_sprite_words[3] & 0xffff01ff) + ((genesis_sprite_words[1] >> 10 & 3) + 1) * 8) - 0x80 & 0x8000) == 0))
           && (((int)((*genesis_sprite_words & 0x1ff) - 0x80) < (int)(uint)frame_active_height_pixels &&
               ((((*genesis_sprite_words & 0xffff01ff) + ((genesis_sprite_words[1] >> 8 & 3) + 1) * 8) - 0x80 & 0x8000) == 0))
              )) {
          update_ds_sprite_position_from_genesis_attributes(genesis_sprite_words,ds_sprite_index);
          uVar20 = (uint)genesis_sprite_words[1];
        }
        else {
          (&sprite_cache_visible_flag)[uVar14 * 6] = 0;
          oam_attr1_cursor[-1] = 0x200;
          uVar20 = (uint)genesis_sprite_words[1];
        }
      }
    }
    else {
LAB_02008a40:
      *cached_sprite_words = *genesis_sprite_words;
      (&sprite_cache_size_and_link)[uVar14 * 6] = genesis_sprite_words[1];
      (&sprite_cache_tile_and_flags)[uVar14 * 6] = genesis_sprite_words[2];
      uVar3 = genesis_sprite_words[3];
      (&sprite_cache_oam_slot)[uVar14 * 6] = (short)ds_sprite_index;
      (&sprite_cache_x_word)[uVar14 * 6] = uVar3;
      uVar2 = emulator_option_flags;
      if ((int)((genesis_sprite_words[3] & 0x1ff) - 0x80) < (int)(uint)frame_active_width_pixels) {
        uVar20 = genesis_sprite_words[1] >> 10 & 3;
        if ((((((genesis_sprite_words[3] & 0xffff01ff) + (uVar20 + 1) * 8) - 0x80 & 0x8000) == 0) &&
            ((int)((*genesis_sprite_words & 0x1ff) - 0x80) < (int)(uint)frame_active_height_pixels)) &&
           (uVar7 = genesis_sprite_words[1] >> 8 & 3,
           (((*genesis_sprite_words & 0xffff01ff) + (uVar7 + 1) * 8) - 0x80 & 0x8000) == 0)) {
          iVar1 = (uVar7 + uVar20 * 4) * 2;
          oam_attr1_cursor[-1] = *(ushort *)(&DAT_0208e538 + iVar1);
          uVar3 = genesis_sprite_words[2];
          if ((uVar3 & 0x8000) == 0) {
            uVar13 = 0x800;
          }
          else {
            uVar13 = 0;
          }
          *oam_attr1_cursor = (ushort)((uVar3 & 0x1800) << 1) ^ 0x1000 | *(ushort *)(&DAT_0208e558 + iVar1);
          oam_attr1_cursor[1] = uVar13 | (ushort)((uVar3 & 0x6000) >> 1) | (ushort)((ds_sprite_index & 0xffff) << 3);
          copy_sprite_tiles_for_sprite_shape(genesis_sprite_words,genesis_vram_base,ds_sprite_index);
          if ((genesis_sprite_words[2] & 0x7ff) < uVar19) {
            dirty_flag_cursor = &sprite_pattern_dirty_flags + (genesis_sprite_words[2] & 0x7ff);
            do {
              next_dirty_flag = dirty_flag_cursor + 1;
              *dirty_flag_cursor = 0;
              dirty_flag_cursor = next_dirty_flag;
            } while (next_dirty_flag != &sprite_pattern_dirty_flags + uVar19);
          }
          (&sprite_cache_visible_flag)[uVar14 * 6] = 1;
          uVar20 = (uint)genesis_sprite_words[1];
          goto LAB_02008b90;
        }
      }
      uVar19 = emulator_option_flags & 0x100;
      (&sprite_cache_visible_flag)[uVar14 * 6] = 0;
      oam_attr1_cursor[-1] = 0x200;
      cVar4 = sprite_line_mask_generation;
      if (((uVar19 != 0) && (ds_sprite_index < 0xc)) &&
         (((genesis_sprite_words[3] & 0x1ff) == 0 && (uVar14 = *genesis_sprite_words & 0x1ff, uVar14 - 0x80 < 0xe0)))) {
        uVar20 = (uint)genesis_sprite_words[1];
        puVar5 = (undefined *)(uint)(byte)(&DAT_0208eb30)[uVar14];
        iVar1 = ((genesis_sprite_words[1] >> 8 & 3) + 1) * 8;
        if (puVar5 == (undefined *)0xc8) {
          puVar5 = (undefined *)(uint)(byte)(&DAT_0208eb2f)[uVar14];
        }
        bVar21 = (uVar2 & 4) != 0;
        puVar12 = puVar5;
        if (bVar21) {
          puVar12 = &DAT_0208eaf0;
        }
        puVar6 = puVar5 + iVar1;
        if (bVar21) {
          puVar6 = puVar6 + -(uint)(byte)puVar12[iVar1];
        }
        if ((undefined *)0xbe < puVar6) {
          puVar6 = (undefined *)0xbf;
        }
        if (puVar6 <= puVar5) goto LAB_02008b90;
        pcVar8 = &sprite_line_mask_tags + (int)puVar5;
        do {
          puVar5 = puVar5 + 1;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
        } while (puVar5 < puVar6);
      }
      uVar20 = (uint)genesis_sprite_words[1];
    }
LAB_02008b90:
    uVar2 = previous_oam_sprite_count;
    ds_sprite_index = ds_sprite_index + 1;
    oam_attr1_cursor = oam_attr1_cursor + 4;
    uVar14 = uVar20 & 0x7f;
    if (sprite_limit <= ds_sprite_index || (uVar20 & 0x7f) == 0) {
      if (ds_sprite_index < previous_oam_sprite_count) {
        stale_oam_attr0_cursor = &ds_oam_staging_attr0 + ds_sprite_index * 4;
        uVar14 = ds_sprite_index;
        do {
          uVar14 = uVar14 + 1;
          *stale_oam_attr0_cursor = 0x200;
          stale_oam_attr0_cursor = stale_oam_attr0_cursor + 4;
        } while (uVar14 < uVar2);
      }
      copy_sprite_attribute_buffer_to_ds_oam(ds_sprite_index);
      sprite_cache_rebuild_pending = 0;
      return;
    }
  } while( true );
}


// 0x02008edc  initialize_ds_sprite_attribute_buffer

/* WARNING: Removing unreachable block (ram,0x02008ed0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_ds_sprite_attribute_buffer(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)&ds_oam_staging_attr0;
  do {
    puVar2 = puVar1;
    *(undefined2 *)puVar2 = 0x200;
    *(undefined2 *)((int)puVar2 + 2) = 0;
    *(undefined2 *)(puVar2 + 1) = 0;
    *(undefined2 *)((int)puVar2 + 6) = 0;
    puVar1 = puVar2 + 2;
  } while (puVar2 + 2 != &write_ds_window_tilemap_word);
  *(undefined2 *)((int)puVar2 + -0x3f2) = 0x100;
  *(undefined2 *)((int)puVar2 + -0x3ba) = 0x122;
  *(undefined2 *)((int)puVar2 + -0x3ea) = 0;
  *(undefined2 *)((int)puVar2 + -0x3e2) = 0;
  *(undefined2 *)((int)puVar2 + -0x3da) = 0x122;
  *(undefined2 *)((int)puVar2 + -0x3ca) = 0;
  *(undefined2 *)((int)puVar2 + -0x3c2) = 0;
  *(undefined2 *)((int)puVar2 + -0x3d2) = 0xff06;
  *(undefined2 *)((int)puVar2 + -0x3b2) = 0x100;
  *(undefined2 *)((int)puVar2 + -0x37a) = 0xfede;
  *(undefined2 *)((int)puVar2 + -0x3aa) = 0;
  *(undefined2 *)((int)puVar2 + -0x3a2) = 0;
  *(undefined2 *)((int)puVar2 + -0x39a) = 0xfede;
  *(undefined2 *)((int)puVar2 + -0x392) = 0xff06;
  *(undefined2 *)((int)puVar2 + -0x38a) = 0;
  *(undefined2 *)((int)puVar2 + -0x382) = 0;
  DC_FlushRange(&ds_oam_staging_attr0,0x400);
  do {
  } while( true );
}

