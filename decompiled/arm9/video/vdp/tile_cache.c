/* ARM9 tile cache — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020074b8  map_genesis_pattern_to_ds_tile

uint map_genesis_pattern_to_ds_tile(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = param_1 + param_2 * 0x800;
  uVar1 = (&DAT_020993cc)[iVar5];
  if ((uVar1 & 0x8000) == 0) {
    uVar3 = (uint)(ushort)(&DAT_0209c3cc)[param_2];
    if (0x3fe < uVar3) {
      uVar3 = 1;
      (&DAT_0209c3d4)[param_2] = 1;
      (&DAT_0209c3cc)[param_2] = 1;
    }
    uVar7 = uVar3 | uVar1 | 0x8000;
    uVar1 = (ushort)uVar7;
    (&DAT_0209c3cc)[param_2] = (short)uVar3 + 1;
    (&DAT_020993cc)[iVar5] = uVar1 & 0xdfff;
    iVar2 = DAT_0b003648;
    if ((uVar7 & 0x4000) != 0) {
      iVar4 = *(int *)(&DAT_0208e590 + param_2 * 4);
      (&DAT_020993cc)[iVar5] = uVar1 & 0x9fff;
      uVar7 = 0;
      do {
        iVar5 = uVar7 * 2;
        uVar6 = uVar7 ^ 1;
        uVar7 = uVar7 + 1;
        *(undefined2 *)(uVar6 * 2 + iVar4 + uVar3 * 0x20) =
             *(undefined2 *)(iVar5 + iVar2 + param_1 * 0x20);
      } while (uVar7 != 0x10);
    }
  }
  else {
    uVar3 = uVar1 & 0x3ff;
  }
  return uVar3;
}


// 0x020075ac  read_background_tile_cache_refresh_flag

undefined4 read_background_tile_cache_refresh_flag(int param_1)

{
  return (&DAT_0209c3d4)[param_1];
}


// 0x020075bc  mark_background_tile_cache_for_refresh

void mark_background_tile_cache_for_refresh(int param_1)

{
  (&DAT_0209c3d4)[param_1] = 1;
  return;
}


// 0x020075d0  reset_background_tile_cache_at_capacity

void reset_background_tile_cache_at_capacity(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  if ((ushort)(&DAT_0209c3cc)[param_1] < 0x2ff) {
    return;
  }
  (&DAT_0209c3cc)[param_1] = 1;
  puVar1 = &DAT_020993cc + param_1 * 0x800;
  iVar2 = 1;
  do {
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = 0x6000;
  } while (iVar2 != 0x800);
  (&DAT_0209c3d4)[param_1] = 0;
  return;
}


// 0x02007630  rebuild_background_tilemap_from_vdp_words

void rebuild_background_tilemap_from_vdp_words(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  (&DAT_0209c3cc)[param_3] = 0x3fe;
  reset_background_tile_cache_at_capacity(param_3);
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 2;
      (*write_ds_background_tilemap_word)(param_3,uVar1,*param_1);
      uVar1 = uVar2;
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
  }
  if ((emulator_option_flags & 8) == 0) {
    (&DAT_0209c3d4)[param_3] = 0;
  }
  return;
}


// 0x020076d0  update_cached_ds_pattern_from_vdp_word

void update_cached_ds_pattern_from_vdp_word(uint param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  uVar2 = param_1 >> 5;
  uVar3 = (&DAT_020993cc)[uVar2];
  puVar4 = &DAT_0209c3e0;
  bVar5 = (uVar3 & 0x8000) != 0;
  (&DAT_0209c3e0)[uVar2] = 1;
  if (bVar5) {
    puVar4 = &DAT_06020000;
  }
  if (bVar5) {
    *(undefined2 *)(puVar4 + ((param_1 & 0x1f | (uVar3 & 0x3ff) << 5) >> 1 ^ 1) * 2) = param_2;
  }
  else {
    (&DAT_020993cc)[uVar2] = uVar3 | 0x4000;
  }
  uVar3 = (&DAT_0209a3cc)[uVar2];
  puVar4 = (undefined1 *)(uVar3 & 0x3ff);
  uVar1 = (int)puVar4 << 5;
  bVar5 = (uVar3 & 0x8000) != 0;
  if (bVar5) {
    puVar4 = &DAT_06028000;
  }
  if (bVar5) {
    *(undefined2 *)(puVar4 + ((param_1 & 0x1f | uVar1) >> 1 ^ 1) * 2) = param_2;
  }
  if (!bVar5) {
    (&DAT_0209a3cc)[uVar2] = uVar3 | 0x4000;
  }
  uVar3 = (&DAT_0209b3cc)[uVar2];
  bVar5 = (uVar3 & 0x8000) != 0;
  puVar4 = (undefined1 *)(uVar3 | 0x4000);
  if (bVar5) {
    puVar4 = &DAT_06030000;
  }
  if (bVar5) {
    *(undefined2 *)(puVar4 + ((param_1 & 0x1f | (uVar3 & 0x3ff) << 5) >> 1 ^ 1) * 2) = param_2;
  }
  else {
    (&DAT_0209b3cc)[uVar2] = (ushort)puVar4;
  }
  return;
}

