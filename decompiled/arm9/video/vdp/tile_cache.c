/* ARM9 tile cache — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020074b8  map_genesis_pattern_to_ds_tile

uint FUN_020074b8(int param_1,int param_2)

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

undefined4 FUN_020075ac(int param_1)

{
  return (&DAT_0209c3d4)[param_1];
}


// 0x020075bc  mark_background_tile_cache_for_refresh

void FUN_020075bc(int param_1)

{
  (&DAT_0209c3d4)[param_1] = 1;
  return;
}


// 0x020075d0  reset_background_tile_cache_at_capacity

void FUN_020075d0(int param_1)

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

void FUN_02007630(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  (&DAT_0209c3cc)[param_3] = 0x3fe;
  FUN_020075d0(param_3);
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 + 2;
      (*DAT_023dc69c)(param_3,uVar1,*param_1);
      uVar1 = uVar2;
      param_1 = param_1 + 1;
    } while (uVar2 < param_2);
  }
  if ((DAT_023cb610 & 8) == 0) {
    (&DAT_0209c3d4)[param_3] = 0;
  }
  return;
}

