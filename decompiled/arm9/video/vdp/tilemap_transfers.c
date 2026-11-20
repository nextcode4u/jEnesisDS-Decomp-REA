/* ARM9 tilemap transfers — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02007b4c  transfer_vdp_words_to_background_0_tilemap_linear

void transfer_vdp_words_to_background_0_tilemap_linear(ushort *source_name_words,uint destination_byte_offset,int destination_step,uint destination_offset_limit)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = plane_a_word_change_flags;
  do {
    while( true ) {
      uVar1 = (destination_byte_offset & 0x1ffff) >> 1;
      uVar2 = *source_name_words;
      if (*(char *)(iVar3 + uVar1) != '\0') break;
      destination_byte_offset = destination_byte_offset + destination_step;
      source_name_words = source_name_words + 1;
      if (destination_offset_limit <= destination_byte_offset) {
        return;
      }
    }
    uVar4 = map_genesis_pattern_to_ds_tile(uVar2 & 0x7ff);
    bVar7 = (uVar2 & 0x8000) == 0;
    iVar6 = uVar1 << 1;
    uVar2 = (uVar4 | (ushort)((uVar2 & 0x7800) >> 1)) ^ 0x400;
    if (!bVar7) {
      iVar6 = 0x6004000;
    }
    iVar5 = uVar1 * 2;
    if (bVar7) {
      *(ushort *)(iVar6 + 0x6000000) = uVar2;
      iVar5 = 0x6004000;
    }
    else {
      *(ushort *)(iVar5 + iVar6) = uVar2;
      iVar6 = iVar6 + -0x4000;
    }
    destination_byte_offset = destination_byte_offset + destination_step;
    if (bVar7) {
      *(undefined2 *)(iVar6 + iVar5) = 0x3ff;
    }
    else {
      *(undefined2 *)(iVar5 + iVar6) = 0x3ff;
    }
    source_name_words = source_name_words + 1;
  } while (destination_byte_offset < destination_offset_limit);
  return;
}


// 0x02007c04  transfer_vdp_words_to_background_0_tilemap_64_columns

void transfer_vdp_words_to_background_0_tilemap_64_columns(ushort *source_name_words,uint destination_byte_offset,int destination_step,uint destination_offset_limit)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar3 = plane_a_word_change_flags;
  do {
    while( true ) {
      uVar1 = destination_byte_offset >> 1;
      uVar2 = *source_name_words;
      if (*(char *)(iVar3 + (uVar1 & 0xffff)) != '\0') break;
      destination_byte_offset = destination_byte_offset + destination_step;
      source_name_words = source_name_words + 1;
      if (destination_offset_limit <= destination_byte_offset) {
        return;
      }
    }
    uVar4 = map_genesis_pattern_to_ds_tile(uVar2 & 0x7ff);
    uVar5 = (uVar1 & 0x3f) + ((uVar1 & 0xffff) >> 6) * 0x20;
    if (0x1f < (uVar1 & 0x3f)) {
      uVar5 = uVar5 + 0x3e0 & 0xffff;
    }
    bVar9 = (uVar2 & 0x8000) != 0;
    iVar8 = uVar5 * 2;
    uVar2 = (uVar4 | (ushort)((uVar2 & 0x7800) >> 1)) ^ 0x400;
    iVar6 = uVar5 * 2;
    if (bVar9) {
      *(ushort *)(iVar8 + 0x6004000) = uVar2;
      iVar6 = 0x3ff;
      iVar7 = 0x6000000;
    }
    else {
      *(ushort *)(iVar6 + 0x6000000) = uVar2;
      iVar7 = 0x3ff;
      iVar8 = 0x6004000;
    }
    destination_byte_offset = destination_byte_offset + destination_step;
    if (bVar9) {
      *(short *)(iVar8 + iVar7) = (short)iVar6;
    }
    else {
      *(short *)(iVar6 + iVar8) = (short)iVar7;
    }
    source_name_words = source_name_words + 1;
  } while (destination_byte_offset < destination_offset_limit);
  return;
}


// 0x02007ce4  transfer_vdp_words_to_background_0_tilemap_64_columns_with_vertical_blocks

void transfer_vdp_words_to_background_0_tilemap_64_columns_with_vertical_blocks(ushort *source_name_words,uint destination_byte_offset,int destination_step,uint destination_offset_limit)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = plane_a_word_change_flags;
  do {
    while( true ) {
      uVar1 = destination_byte_offset >> 1;
      uVar4 = *source_name_words;
      if (*(char *)(iVar5 + (uVar1 & 0xffff)) != '\0') break;
LAB_02007d08:
      destination_byte_offset = destination_byte_offset + destination_step;
      source_name_words = source_name_words + 1;
      if (destination_offset_limit <= destination_byte_offset) {
        return;
      }
    }
    uVar6 = map_genesis_pattern_to_ds_tile(uVar4 & 0x7ff,0);
    uVar2 = (uVar1 & 0xffff) >> 6;
    uVar8 = uVar4 & 0x7800;
    uVar7 = (uVar1 & 0x3f) + uVar2 * 0x20;
    uVar3 = uVar8 >> 1;
    if (0x1f < (uVar1 & 0x3f)) {
      uVar8 = (uVar7 + 0x3e0) * 0x10000;
      uVar7 = uVar7 + 0x3e0 & 0xffff;
    }
    if (0x1f < uVar2) {
      uVar8 = (uVar7 + 0x400) * 0x10000;
    }
    uVar6 = (uVar6 | (ushort)uVar3) ^ 0x400;
    if (0x1f < uVar2) {
      uVar7 = uVar8 >> 0x10;
    }
    if ((uVar4 & 0x8000) != 0) {
      *(ushort *)(uVar7 * 2 + 0x6004000) = uVar6;
      *(undefined2 *)(uVar7 * 2 + 0x6000000) = 0x3ff;
      goto LAB_02007d08;
    }
    *(ushort *)(uVar7 * 2 + 0x6000000) = uVar6;
    destination_byte_offset = destination_byte_offset + destination_step;
    *(undefined2 *)(uVar7 * 2 + 0x6004000) = 0x3ff;
    source_name_words = source_name_words + 1;
    if (destination_offset_limit <= destination_byte_offset) {
      return;
    }
  } while( true );
}


// 0x02007ddc  transfer_vdp_words_to_background_0_tilemap_128_columns

void transfer_vdp_words_to_background_0_tilemap_128_columns(ushort *source_name_words,uint destination_byte_offset,int destination_step,uint destination_offset_limit)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = plane_a_word_change_flags;
  do {
    while( true ) {
      uVar6 = destination_byte_offset >> 1;
      uVar1 = *source_name_words;
      if (*(char *)(iVar2 + (uVar6 & 0xffff)) != '\0') break;
LAB_02007e00:
      destination_byte_offset = destination_byte_offset + destination_step;
      source_name_words = source_name_words + 1;
      if (destination_offset_limit <= destination_byte_offset) {
        return;
      }
    }
    *(undefined1 *)(iVar2 + (uVar6 & 0xffff)) = 0;
    uVar3 = map_genesis_pattern_to_ds_tile(uVar1 & 0x7ff,0);
    uVar4 = uVar6 & 0x7f;
    uVar6 = (uVar6 & 0xffff) >> 7;
    uVar5 = uVar4 + uVar6 * 0x20;
    if (0x1f < uVar4) {
      uVar5 = uVar5 + 0x3e0;
      uVar6 = uVar5 * 0x10000;
    }
    if (0x3f < uVar4) {
      uVar6 = (uVar5 + 0x400) * 0x10000;
    }
    uVar3 = (uVar3 | (ushort)((uVar1 & 0x7800) >> 1)) ^ 0x400;
    if (0x3f < uVar4) {
      uVar5 = uVar6 >> 0x10;
    }
    if ((uVar1 & 0x8000) != 0) {
      *(undefined2 *)(uVar5 * 2 + 0x6000000) = 0x3ff;
      *(ushort *)(uVar5 * 2 + 0x6004000) = uVar3;
      goto LAB_02007e00;
    }
    destination_byte_offset = destination_byte_offset + destination_step;
    *(ushort *)(uVar5 * 2 + 0x6000000) = uVar3;
    *(undefined2 *)(uVar5 * 2 + 0x6004000) = 0x3ff;
    source_name_words = source_name_words + 1;
    if (destination_offset_limit <= destination_byte_offset) {
      return;
    }
  } while( true );
}


// 0x02007ed8  transfer_vdp_words_to_background_1_tilemap_linear

void transfer_vdp_words_to_background_1_tilemap_linear(ushort *source_name_words,uint destination_byte_offset,int destination_step,uint destination_offset_limit)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = plane_b_word_change_flags;
  do {
    while( true ) {
      uVar1 = (destination_byte_offset & 0x1ffff) >> 1;
      uVar2 = *source_name_words;
      if (*(char *)(iVar3 + uVar1) != '\0') break;
      destination_byte_offset = destination_byte_offset + destination_step;
      source_name_words = source_name_words + 1;
      if (destination_offset_limit <= destination_byte_offset) {
        return;
      }
    }
    uVar4 = map_genesis_pattern_to_ds_tile(uVar2 & 0x7ff,1);
    bVar7 = (uVar2 & 0x8000) == 0;
    iVar5 = uVar1 << 1;
    iVar6 = uVar1 << 1;
    if (bVar7) {
      iVar5 = 0x6002000;
    }
    else {
      iVar6 = 0x6006000;
    }
    uVar2 = (uVar4 | (ushort)((uVar2 & 0x7800) >> 1)) ^ 0x400;
    if (bVar7) {
      *(ushort *)(iVar6 + iVar5) = uVar2;
      iVar5 = iVar5 + 0x4000;
    }
    else {
      *(ushort *)(iVar5 + iVar6) = uVar2;
      iVar6 = iVar6 + -0x4000;
    }
    destination_byte_offset = destination_byte_offset + destination_step;
    if (bVar7) {
      *(undefined2 *)(iVar6 + iVar5) = 0x3ff;
    }
    else {
      *(undefined2 *)(iVar5 + iVar6) = 0x3ff;
    }
    source_name_words = source_name_words + 1;
  } while (destination_byte_offset < destination_offset_limit);
  return;
}


// 0x02007f94  transfer_vdp_words_to_background_1_tilemap_64_columns

void transfer_vdp_words_to_background_1_tilemap_64_columns(ushort *source_name_words,uint destination_byte_offset,int destination_step,uint destination_offset_limit)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar3 = plane_b_word_change_flags;
  do {
    while( true ) {
      uVar1 = destination_byte_offset >> 1;
      uVar2 = *source_name_words;
      if (*(char *)(iVar3 + (uVar1 & 0xffff)) != '\0') break;
      destination_byte_offset = destination_byte_offset + destination_step;
      source_name_words = source_name_words + 1;
      if (destination_offset_limit <= destination_byte_offset) {
        return;
      }
    }
    uVar4 = map_genesis_pattern_to_ds_tile(uVar2 & 0x7ff);
    uVar5 = (uVar1 & 0x3f) + ((uVar1 & 0xffff) >> 6) * 0x20;
    iVar7 = (uVar5 + 0x3e0) * 0x10000;
    if (0x1f < (uVar1 & 0x3f)) {
      uVar5 = uVar5 + 0x3e0 & 0xffff;
    }
    bVar9 = (uVar2 & 0x8000) == 0;
    iVar8 = uVar5 * 2;
    if (bVar9) {
      iVar7 = 0x6002000;
    }
    iVar6 = uVar5 * 2;
    uVar2 = (uVar4 | (ushort)((uVar2 & 0x7800) >> 1)) ^ 0x400;
    if (bVar9) {
      *(ushort *)(iVar6 + iVar7) = uVar2;
      iVar7 = 0x3ff;
      iVar8 = 0x6006000;
    }
    else {
      *(ushort *)(iVar8 + 0x6006000) = uVar2;
      iVar6 = 0x3ff;
      iVar7 = 0x6002000;
    }
    destination_byte_offset = destination_byte_offset + destination_step;
    if (bVar9) {
      *(short *)(iVar6 + iVar8) = (short)iVar7;
    }
    else {
      *(short *)(iVar8 + iVar7) = (short)iVar6;
    }
    source_name_words = source_name_words + 1;
  } while (destination_byte_offset < destination_offset_limit);
  return;
}


// 0x02008078  transfer_vdp_words_to_background_1_tilemap_64_columns_with_vertical_blocks

void transfer_vdp_words_to_background_1_tilemap_64_columns_with_vertical_blocks(ushort *source_name_words,uint destination_byte_offset,int destination_step,uint destination_offset_limit)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = plane_b_word_change_flags;
  do {
    while( true ) {
      uVar1 = destination_byte_offset >> 1;
      uVar4 = *source_name_words;
      if (*(char *)(iVar5 + (uVar1 & 0xffff)) != '\0') break;
LAB_0200809c:
      destination_byte_offset = destination_byte_offset + destination_step;
      source_name_words = source_name_words + 1;
      if (destination_offset_limit <= destination_byte_offset) {
        return;
      }
    }
    uVar6 = map_genesis_pattern_to_ds_tile(uVar4 & 0x7ff,1);
    uVar2 = (uVar1 & 0xffff) >> 6;
    uVar8 = uVar4 & 0x7800;
    uVar7 = (uVar1 & 0x3f) + uVar2 * 0x20;
    uVar3 = uVar8 >> 1;
    if (0x1f < (uVar1 & 0x3f)) {
      uVar8 = (uVar7 + 0x3e0) * 0x10000;
      uVar7 = uVar7 + 0x3e0 & 0xffff;
    }
    if (0x1f < uVar2) {
      uVar8 = (uVar7 + 0x400) * 0x10000;
    }
    uVar6 = (uVar6 | (ushort)uVar3) ^ 0x400;
    if (0x1f < uVar2) {
      uVar7 = uVar8 >> 0x10;
    }
    if ((uVar4 & 0x8000) != 0) {
      *(ushort *)(uVar7 * 2 + 0x6006000) = uVar6;
      *(undefined2 *)(uVar7 * 2 + 0x6002000) = 0x3ff;
      goto LAB_0200809c;
    }
    *(ushort *)(uVar7 * 2 + 0x6002000) = uVar6;
    destination_byte_offset = destination_byte_offset + destination_step;
    *(undefined2 *)(uVar7 * 2 + 0x6006000) = 0x3ff;
    source_name_words = source_name_words + 1;
    if (destination_offset_limit <= destination_byte_offset) {
      return;
    }
  } while( true );
}


// 0x02008174  transfer_vdp_words_to_background_1_tilemap_128_columns

void transfer_vdp_words_to_background_1_tilemap_128_columns(ushort *source_name_words,uint destination_byte_offset,int destination_step,uint destination_offset_limit)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = plane_b_word_change_flags;
  do {
    while( true ) {
      uVar5 = destination_byte_offset >> 1;
      uVar1 = *source_name_words;
      if (*(char *)(iVar2 + (uVar5 & 0xffff)) != '\0') break;
LAB_02008198:
      destination_byte_offset = destination_byte_offset + destination_step;
      source_name_words = source_name_words + 1;
      if (destination_offset_limit <= destination_byte_offset) {
        return;
      }
    }
    uVar3 = map_genesis_pattern_to_ds_tile(uVar1 & 0x7ff,1);
    uVar4 = uVar5 & 0x7f;
    uVar5 = uVar4 + ((uVar5 & 0xffff) >> 7) * 0x20;
    if (0x1f < uVar4) {
      uVar5 = uVar5 + 0x3e0;
    }
    if (0x3f < uVar4) {
      uVar5 = (uVar5 + 0x400) * 0x10000;
    }
    uVar3 = (uVar3 | (ushort)((uVar1 & 0x7800) >> 1)) ^ 0x400;
    if (0x3f < uVar4) {
      uVar5 = uVar5 >> 0x10;
    }
    if ((uVar1 & 0x8000) != 0) {
      *(ushort *)(uVar5 * 2 + 0x6006000) = uVar3;
      *(undefined2 *)(uVar5 * 2 + 0x6002000) = 0x3ff;
      goto LAB_02008198;
    }
    *(ushort *)(uVar5 * 2 + 0x6002000) = uVar3;
    destination_byte_offset = destination_byte_offset + destination_step;
    *(undefined2 *)(uVar5 * 2 + 0x6006000) = 0x3ff;
    source_name_words = source_name_words + 1;
    if (destination_offset_limit <= destination_byte_offset) {
      return;
    }
  } while( true );
}


// 0x02008270  transfer_vdp_words_to_window_tilemap_linear

void transfer_vdp_words_to_window_tilemap_linear(ushort *source_name_words,uint destination_byte_offset,int destination_step,int entries_remaining)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  
  if (destination_byte_offset < 0x1001) {
    iVar6 = destination_byte_offset + destination_step;
    do {
      uVar4 = *source_name_words;
      uVar5 = map_genesis_pattern_to_ds_tile(uVar4 & 0x7ff,2);
      uVar3 = (destination_byte_offset & 0x1ffff) >> 1;
      iVar1 = uVar3 * 2;
      uVar5 = (uVar5 | (ushort)((uVar4 & 0x7800) >> 1)) ^ 0x400;
      iVar2 = uVar3 * 2;
      if ((uVar4 & 0x8000) == 0) {
        *(ushort *)(&DAT_06008000 + iVar2) = uVar5;
        *(undefined2 *)(iVar2 + 0x600a000) = 0x3ff;
      }
      else {
        *(ushort *)(iVar1 + 0x600a000) = uVar5;
        *(undefined2 *)(&DAT_06008000 + iVar1) = 0x3ff;
      }
      iVar6 = iVar6 + destination_step;
      entries_remaining = entries_remaining + -1;
      destination_byte_offset = destination_byte_offset + destination_step;
    } while ((entries_remaining != 0) && (source_name_words = source_name_words + 1, (uint)(iVar6 - destination_step) < 0x1001));
  }
  return;
}


// 0x02008320  transfer_vdp_words_to_window_tilemap_64_columns

void transfer_vdp_words_to_window_tilemap_64_columns(ushort *source_name_words,uint destination_byte_offset,int destination_step,int entries_remaining)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (destination_byte_offset < 0x1001) {
    iVar5 = destination_byte_offset + destination_step;
    do {
      uVar1 = *source_name_words;
      uVar2 = map_genesis_pattern_to_ds_tile(uVar1 & 0x7ff,2);
      uVar3 = destination_byte_offset >> 1 & 0x3f;
      uVar4 = uVar3 + ((destination_byte_offset >> 1 & 0xffff) >> 6) * 0x20;
      if (0x1f < uVar3) {
        uVar4 = uVar4 + 0x3e0 & 0xffff;
      }
      uVar2 = (uVar2 | (ushort)((uVar1 & 0x7800) >> 1)) ^ 0x400;
      if ((uVar1 & 0x8000) == 0) {
        *(ushort *)(&DAT_06008000 + uVar4 * 2) = uVar2;
        *(undefined2 *)(uVar4 * 2 + 0x600a000) = 0x3ff;
      }
      else {
        *(ushort *)(uVar4 * 2 + 0x600a000) = uVar2;
        *(undefined2 *)(&DAT_06008000 + uVar4 * 2) = 0x3ff;
      }
      iVar5 = iVar5 + destination_step;
      entries_remaining = entries_remaining + -1;
      destination_byte_offset = destination_byte_offset + destination_step;
    } while ((entries_remaining != 0) && (source_name_words = source_name_words + 1, (uint)(iVar5 - destination_step) < 0x1001));
  }
  return;
}

