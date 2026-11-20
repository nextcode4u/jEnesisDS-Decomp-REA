/* ARM9 tilemap writes — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020077b8  write_linear_background_tilemap_entry

void FUN_020077b8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  
  uVar4 = FUN_020074b8(param_3 & 0x7ff,param_1);
  iVar5 = *(int *)(&DAT_0208e578 + param_1 * 8);
  uVar3 = (param_2 & 0x1ffff) >> 1;
  uVar4 = (uVar4 | (ushort)((param_3 & 0x7800) >> 1)) ^ 0x400;
  iVar1 = uVar3 * 2;
  iVar2 = uVar3 * 2;
  if ((param_3 & 0x8000) == 0) {
    *(undefined2 *)(*(int *)(&DAT_0208e57c + param_1 * 8) + iVar2) = 0x3ff;
    *(ushort *)(iVar5 + iVar2) = uVar4;
  }
  else {
    *(ushort *)(*(int *)(&DAT_0208e57c + param_1 * 8) + iVar1) = uVar4;
    *(undefined2 *)(iVar5 + iVar1) = 0x3ff;
  }
  return;
}


// 0x02007830  write_background_tilemap_entry_64_columns

void FUN_02007830(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = FUN_020074b8(param_3 & 0x7ff,param_1);
  uVar3 = param_2 >> 1 & 0x3f;
  uVar5 = uVar3 + (param_2 >> 7) * 0x20 & 0xffff;
  uVar4 = 0;
  uVar1 = (uVar1 | (ushort)((param_3 & 0x7800) >> 1)) ^ 0x400;
  if (0x1f < uVar3) {
    uVar5 = uVar5 + 0x3e0 & 0xffff;
  }
  bVar6 = (param_3 & 0x8000) != 0;
  iVar2 = *(int *)(&DAT_0208e578 + param_1 * 8);
  if (bVar6) {
    uVar4 = 0x3ff;
  }
  if (bVar6) {
    *(ushort *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar5 * 2) = uVar1;
    *(undefined2 *)(iVar2 + uVar5 * 2) = uVar4;
  }
  else {
    *(undefined2 *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar5 * 2) = 0x3ff;
    *(ushort *)(iVar2 + uVar5 * 2) = uVar1;
  }
  return;
}


// 0x020078c8  write_background_tilemap_entry_64_columns_with_vertical_blocks

void FUN_020078c8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar2 = FUN_020074b8(param_3 & 0x7ff,param_1);
  uVar6 = param_2 >> 1 & 0x3f;
  uVar1 = (param_2 & 0x7fffff) >> 7;
  uVar4 = uVar6 + uVar1 * 0x20 & 0xffff;
  if (0x1f < uVar6) {
    uVar4 = uVar4 + 0x3e0 & 0xffff;
  }
  uVar5 = 0;
  uVar2 = (uVar2 | (ushort)((param_3 & 0x7800) >> 1)) ^ 0x400;
  if (0x1f < uVar1) {
    uVar4 = uVar4 + 0x400 & 0xffff;
  }
  bVar7 = (param_3 & 0x8000) != 0;
  iVar3 = *(int *)(&DAT_0208e578 + param_1 * 8);
  if (bVar7) {
    uVar5 = 0x3ff;
  }
  if (bVar7) {
    *(ushort *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar4 * 2) = uVar2;
    *(undefined2 *)(iVar3 + uVar4 * 2) = uVar5;
  }
  else {
    *(undefined2 *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar4 * 2) = 0x3ff;
    *(ushort *)(iVar3 + uVar4 * 2) = uVar2;
  }
  return;
}


// 0x0200797c  write_background_tilemap_entry_128_columns

void FUN_0200797c(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = FUN_020074b8(param_3 & 0x7ff,param_1);
  uVar3 = param_2 >> 1 & 0x7f;
  uVar5 = uVar3 + (param_2 >> 8) * 0x20 & 0xffff;
  if (0x1f < uVar3) {
    uVar5 = uVar5 + 0x3e0 & 0xffff;
  }
  uVar4 = 0;
  uVar1 = (uVar1 | (ushort)((param_3 & 0x7800) >> 1)) ^ 0x400;
  if (0x3f < uVar3) {
    uVar5 = uVar5 + 0x400 & 0xffff;
  }
  bVar6 = (param_3 & 0x8000) != 0;
  iVar2 = *(int *)(&DAT_0208e578 + param_1 * 8);
  if (bVar6) {
    uVar4 = 0x3ff;
  }
  if (bVar6) {
    *(ushort *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar5 * 2) = uVar1;
    *(undefined2 *)(iVar2 + uVar5 * 2) = uVar4;
  }
  else {
    *(undefined2 *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar5 * 2) = 0x3ff;
    *(ushort *)(iVar2 + uVar5 * 2) = uVar1;
  }
  return;
}


// 0x02007a2c  write_linear_window_tilemap_entry

void FUN_02007a2c(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  bool bVar7;
  
  uVar5 = FUN_020074b8(param_2 & 0x7ff,2);
  puVar6 = (undefined1 *)(param_2 & 0x7800);
  uVar3 = (uint)puVar6 >> 1;
  bVar7 = (param_2 & 0x8000) == 0;
  if (bVar7) {
    puVar6 = &DAT_06008000;
  }
  uVar4 = (param_1 & 0x1ffff) >> 1;
  uVar5 = (uVar5 | (ushort)uVar3) ^ 0x400;
  iVar1 = uVar4 * 2;
  iVar2 = uVar4 * 2;
  if (bVar7) {
    *(ushort *)(puVar6 + iVar2) = uVar5;
    *(undefined2 *)(puVar6 + iVar2 + 0x2000) = 0x3ff;
  }
  else {
    *(undefined2 *)(&DAT_06008000 + iVar1) = 0x3ff;
    *(ushort *)(iVar1 + 0x600a000) = uVar5;
  }
  return;
}


// 0x02007aac  write_window_tilemap_entry_64_columns

void FUN_02007aac(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = FUN_020074b8(param_2 & 0x7ff,2);
  uVar2 = param_1 >> 1 & 0x3f;
  uVar4 = uVar2 + (param_1 >> 7) * 0x20 & 0xffff;
  puVar3 = (undefined1 *)((uVar4 + 0x3e0) * 0x10000);
  if (0x1f < uVar2) {
    uVar4 = uVar4 + 0x3e0 & 0xffff;
  }
  bVar5 = (param_2 & 0x8000) == 0;
  if (bVar5) {
    puVar3 = &DAT_06008000;
  }
  uVar1 = (uVar1 | (ushort)((param_2 & 0x7800) >> 1)) ^ 0x400;
  if (bVar5) {
    *(ushort *)(puVar3 + uVar4 * 2) = uVar1;
    *(undefined2 *)(puVar3 + uVar4 * 2 + 0x2000) = 0x3ff;
  }
  else {
    *(undefined2 *)(&DAT_06008000 + uVar4 * 2) = 0x3ff;
    *(ushort *)(uVar4 * 2 + 0x600a000) = uVar1;
  }
  return;
}

