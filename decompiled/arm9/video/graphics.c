/* ARM9 graphics — grouped REA pseudocode.
 * Viewport offsets and routines that convert graphics data for the DS.
 */

// 0x02007358  adjust_horizontal_viewport_offset

void FUN_02007358(int param_1)

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

void FUN_020073a4(int param_1)

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

void FUN_020073f0(void)

{
  DAT_020993ac = 1;
  DAT_020993b4 = 0;
  DAT_020993b0 = 0;
  return;
}


// 0x020074b8  graphics_iterate_and_store_values

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


// 0x020075ac  graphics_return_computed_value

undefined4 FUN_020075ac(int param_1)

{
  return (&DAT_0209c3d4)[param_1];
}


// 0x020075bc  graphics_access_shared_state

void FUN_020075bc(int param_1)

{
  (&DAT_0209c3d4)[param_1] = 1;
  return;
}


// 0x020075d0  graphics_loop_over_state

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


// 0x02007630  graphics_loop_over_state

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


// 0x020076d0  graphics_transform_bit_fields

void FUN_020076d0(uint param_1,undefined2 param_2)

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


// 0x020077b8  graphics_transform_bit_fields

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


// 0x02007830  graphics_transform_bit_fields

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


// 0x020078c8  graphics_transform_bit_fields

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


// 0x0200797c  graphics_transform_bit_fields

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


// 0x02007a2c  graphics_transform_bit_fields

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


// 0x02007aac  graphics_transform_bit_fields

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


// 0x02007b4c  graphics_iterate_and_store_values

void FUN_02007b4c(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = DAT_023dde8c;
  do {
    while( true ) {
      uVar1 = (param_2 & 0x1ffff) >> 1;
      uVar2 = *param_1;
      if (*(char *)(iVar3 + uVar1) != '\0') break;
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar4 = FUN_020074b8(uVar2 & 0x7ff);
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
    param_2 = param_2 + param_3;
    if (bVar7) {
      *(undefined2 *)(iVar6 + iVar5) = 0x3ff;
    }
    else {
      *(undefined2 *)(iVar5 + iVar6) = 0x3ff;
    }
    param_1 = param_1 + 1;
  } while (param_2 < param_4);
  return;
}


// 0x02007c04  graphics_iterate_and_store_values

void FUN_02007c04(ushort *param_1,uint param_2,int param_3,uint param_4)

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
  
  iVar3 = DAT_023dde8c;
  do {
    while( true ) {
      uVar1 = param_2 >> 1;
      uVar2 = *param_1;
      if (*(char *)(iVar3 + (uVar1 & 0xffff)) != '\0') break;
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar4 = FUN_020074b8(uVar2 & 0x7ff);
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
    param_2 = param_2 + param_3;
    if (bVar9) {
      *(short *)(iVar8 + iVar7) = (short)iVar6;
    }
    else {
      *(short *)(iVar6 + iVar8) = (short)iVar7;
    }
    param_1 = param_1 + 1;
  } while (param_2 < param_4);
  return;
}


// 0x02007ce4  graphics_iterate_and_store_values

void FUN_02007ce4(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = DAT_023dde8c;
  do {
    while( true ) {
      uVar1 = param_2 >> 1;
      uVar4 = *param_1;
      if (*(char *)(iVar5 + (uVar1 & 0xffff)) != '\0') break;
LAB_02007d08:
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar6 = FUN_020074b8(uVar4 & 0x7ff,0);
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
    param_2 = param_2 + param_3;
    *(undefined2 *)(uVar7 * 2 + 0x6004000) = 0x3ff;
    param_1 = param_1 + 1;
    if (param_4 <= param_2) {
      return;
    }
  } while( true );
}


// 0x02007ddc  graphics_iterate_and_store_values

void FUN_02007ddc(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = DAT_023dde8c;
  do {
    while( true ) {
      uVar6 = param_2 >> 1;
      uVar1 = *param_1;
      if (*(char *)(iVar2 + (uVar6 & 0xffff)) != '\0') break;
LAB_02007e00:
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    *(undefined1 *)(iVar2 + (uVar6 & 0xffff)) = 0;
    uVar3 = FUN_020074b8(uVar1 & 0x7ff,0);
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
    param_2 = param_2 + param_3;
    *(ushort *)(uVar5 * 2 + 0x6000000) = uVar3;
    *(undefined2 *)(uVar5 * 2 + 0x6004000) = 0x3ff;
    param_1 = param_1 + 1;
    if (param_4 <= param_2) {
      return;
    }
  } while( true );
}


// 0x02007ed8  graphics_iterate_and_store_values

void FUN_02007ed8(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = DAT_023dde90;
  do {
    while( true ) {
      uVar1 = (param_2 & 0x1ffff) >> 1;
      uVar2 = *param_1;
      if (*(char *)(iVar3 + uVar1) != '\0') break;
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar4 = FUN_020074b8(uVar2 & 0x7ff,1);
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
    param_2 = param_2 + param_3;
    if (bVar7) {
      *(undefined2 *)(iVar6 + iVar5) = 0x3ff;
    }
    else {
      *(undefined2 *)(iVar5 + iVar6) = 0x3ff;
    }
    param_1 = param_1 + 1;
  } while (param_2 < param_4);
  return;
}


// 0x02007f94  graphics_iterate_and_store_values

void FUN_02007f94(ushort *param_1,uint param_2,int param_3,uint param_4)

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
  
  iVar3 = DAT_023dde90;
  do {
    while( true ) {
      uVar1 = param_2 >> 1;
      uVar2 = *param_1;
      if (*(char *)(iVar3 + (uVar1 & 0xffff)) != '\0') break;
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar4 = FUN_020074b8(uVar2 & 0x7ff);
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
    param_2 = param_2 + param_3;
    if (bVar9) {
      *(short *)(iVar6 + iVar8) = (short)iVar7;
    }
    else {
      *(short *)(iVar8 + iVar7) = (short)iVar6;
    }
    param_1 = param_1 + 1;
  } while (param_2 < param_4);
  return;
}


// 0x02008078  graphics_iterate_and_store_values

void FUN_02008078(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = DAT_023dde90;
  do {
    while( true ) {
      uVar1 = param_2 >> 1;
      uVar4 = *param_1;
      if (*(char *)(iVar5 + (uVar1 & 0xffff)) != '\0') break;
LAB_0200809c:
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar6 = FUN_020074b8(uVar4 & 0x7ff,1);
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
    param_2 = param_2 + param_3;
    *(undefined2 *)(uVar7 * 2 + 0x6006000) = 0x3ff;
    param_1 = param_1 + 1;
    if (param_4 <= param_2) {
      return;
    }
  } while( true );
}


// 0x02008174  graphics_iterate_and_store_values

void FUN_02008174(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = DAT_023dde90;
  do {
    while( true ) {
      uVar5 = param_2 >> 1;
      uVar1 = *param_1;
      if (*(char *)(iVar2 + (uVar5 & 0xffff)) != '\0') break;
LAB_02008198:
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar3 = FUN_020074b8(uVar1 & 0x7ff,1);
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
    param_2 = param_2 + param_3;
    *(undefined2 *)(uVar5 * 2 + 0x6006000) = 0x3ff;
    param_1 = param_1 + 1;
    if (param_4 <= param_2) {
      return;
    }
  } while( true );
}


// 0x02008270  graphics_iterate_and_store_values

void FUN_02008270(ushort *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  
  if (param_2 < 0x1001) {
    iVar6 = param_2 + param_3;
    do {
      uVar4 = *param_1;
      uVar5 = FUN_020074b8(uVar4 & 0x7ff,2);
      uVar3 = (param_2 & 0x1ffff) >> 1;
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
      iVar6 = iVar6 + param_3;
      param_4 = param_4 + -1;
      param_2 = param_2 + param_3;
    } while ((param_4 != 0) && (param_1 = param_1 + 1, (uint)(iVar6 - param_3) < 0x1001));
  }
  return;
}


// 0x02008320  graphics_iterate_and_store_values

void FUN_02008320(ushort *param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < 0x1001) {
    iVar5 = param_2 + param_3;
    do {
      uVar1 = *param_1;
      uVar2 = FUN_020074b8(uVar1 & 0x7ff,2);
      uVar3 = param_2 >> 1 & 0x3f;
      uVar4 = uVar3 + ((param_2 >> 1 & 0xffff) >> 6) * 0x20;
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
      iVar5 = iVar5 + param_3;
      param_4 = param_4 + -1;
      param_2 = param_2 + param_3;
    } while ((param_4 != 0) && (param_1 = param_1 + 1, (uint)(iVar5 - param_3) < 0x1001));
  }
  return;
}


// 0x020085b4  graphics_transform_bit_fields

void FUN_020085b4(ushort *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar4;
  uint uVar3;
  
  sVar1 = (param_1[3] & 0x1ff) - (short)DAT_020993a4;
  uVar4 = sVar1 - 0x80;
  uVar3 = ((*param_1 & 0xffff01ff) - DAT_020993a8) - 0x80 & 0xffff;
  if (((DAT_023cb610 & 4) != 0) && ((uVar3 - 1) * 0x10000 < 0xee0001)) {
    uVar3 = uVar3 - (byte)(&DAT_023dcdb4)[uVar3] & 0xffff;
  }
  uVar2 = (ushort)uVar3;
  if (((param_1[1] >> 10 & 3) == 2) && ((param_1[2] & 0x800) != 0)) {
    uVar4 = sVar1 - 0x88;
  }
  if (((param_1[1] >> 8 & 3) == 2) && ((param_1[2] & 0x1000) != 0)) {
    uVar2 = uVar2 - 8;
  }
  (&DAT_023dc1a8)[param_2 * 4] = (&DAT_023dc1a8)[param_2 * 4] & 0xff00;
  (&DAT_023dc1aa)[param_2 * 4] = (&DAT_023dc1aa)[param_2 * 4] & 0xfe00;
  (&DAT_023dc1a8)[param_2 * 4] = (&DAT_023dc1a8)[param_2 * 4] | uVar2 & 0xff;
  (&DAT_023dc1aa)[param_2 * 4] = (&DAT_023dc1aa)[param_2 * 4] | uVar4 & 0x1ff;
  return;
}


// 0x020086d8  graphics_dispatch_selector_cases

void FUN_020086d8(ushort *param_1,int param_2,int param_3)

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
    FUN_010042c0();
    break;
  case 1:
    FUN_010044d0();
    break;
  case 2:
    FUN_010048c0();
    if ((param_1[2] & 0x1000) == 0) break;
    goto LAB_02008824;
  case 3:
    FUN_01004f30();
    break;
  case 4:
    FUN_01004300();
    break;
  case 5:
    FUN_01004530();
    break;
  case 6:
    FUN_01004970();
    uVar1 = param_1[2];
    goto joined_r0x02008820;
  case 7:
    FUN_01004ff0();
    break;
  case 8:
    FUN_01004360();
    uVar1 = param_1[2];
    goto joined_r0x02008894;
  case 9:
    FUN_010045f0();
    uVar1 = param_1[2];
joined_r0x02008894:
    if ((uVar1 & 0x800) != 0) {
LAB_02008854:
      uVar4 = (ushort)(((uVar5 & 0xffff) - 8) * 0x10000 >> 0x10);
    }
    break;
  case 10:
    FUN_01004ab0();
    uVar1 = param_1[2];
    if ((uVar1 & 0x1000) != 0) {
      uVar2 = uVar2 - 8;
    }
    goto joined_r0x02008850;
  case 0xb:
    FUN_01005160();
    uVar1 = param_1[2];
joined_r0x02008850:
    if ((uVar1 & 0x800) == 0) break;
    goto LAB_02008854;
  case 0xc:
    FUN_01004410();
    break;
  case 0xd:
    FUN_01004750();
    break;
  case 0xe:
    FUN_01004ce0();
    uVar1 = param_1[2];
joined_r0x02008820:
    if ((uVar1 & 0x1000) != 0) {
LAB_02008824:
      uVar2 = uVar2 - 8;
    }
    break;
  case 0xf:
    FUN_01005410(param_2 + (param_1[2] & 0x7ff) * 0x20,&DAT_06400000 + param_3 * 0x200);
  }
  (&DAT_023dc1a8)[param_3 * 4] = (&DAT_023dc1a8)[param_3 * 4] | uVar2 & 0xff;
  (&DAT_023dc1aa)[param_3 * 4] = (&DAT_023dc1aa)[param_3 * 4] | uVar4 & 0x1ff;
  return;
}


// 0x02008914  graphics_loop_over_state

/* WARNING: Removing unreachable block (ram,0x02008974) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02008914(uint param_1)

{
  int iVar1;
  
  if (DAT_020993c0 <= param_1) {
    DAT_020993c0 = param_1;
  }
  iVar1 = DAT_020993c0 << 3;
  DAT_020993c0 = param_1;
  FUN_020802c4(&DAT_023dc1a8,iVar1);
  do {
  } while( true );
}


// 0x02008984  graphics_loop_over_state

void FUN_02008984(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined2 *puVar11;
  undefined *puVar12;
  ushort uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 *puVar10;
  
  uVar17 = 0;
  puVar18 = &DAT_023dc1aa;
  cVar4 = DAT_023dc5b4 + '\x01';
  if ((char)(DAT_023dc5b4 + '\x01') == '\0') {
    cVar4 = DAT_023dc5b4 + '\x02';
  }
  DAT_023dc5b4 = cVar4;
  uVar14 = 0;
  do {
    puVar15 = (ushort *)(DAT_023dcdac + uVar14 * 8);
    uVar3 = puVar15[1];
    uVar20 = (uint)uVar3;
    uVar2 = puVar15[2] & 0x7ff;
    puVar16 = &DAT_023dcfb0 + uVar14 * 6;
    uVar19 = uVar2 + (byte)(&UNK_0208e528)[(uVar3 >> 8 & 3) + (uVar3 >> 8 & 0xc)];
    if (DAT_020993bc == 0) {
      if ((uVar20 & 0x7f) != ((ushort)(&DAT_023dcfb2)[uVar14 * 6] & 0x7f)) {
        DAT_020993bc = 1;
      }
      if (uVar17 != (ushort)(&DAT_023dcfb8)[uVar14 * 6]) goto LAB_02008a40;
      if (uVar2 < uVar19) {
        if ((&DAT_0209c3e0)[uVar2] == '\0') {
          pcVar8 = &DAT_0209c3e0 + uVar2;
          do {
            if (pcVar8 == (char *)((int)&DAT_0209c3dc + uVar19 + 3)) goto LAB_02008d14;
            pcVar8 = pcVar8 + 1;
          } while (*pcVar8 == '\0');
        }
        goto LAB_02008a40;
      }
LAB_02008d14:
      if ((*(int *)puVar15 != *(int *)puVar16) ||
         (*(int *)(puVar15 + 2) != *(int *)(&DAT_023dcfb4 + uVar14 * 6))) {
        if (((&DAT_023dcfba)[uVar14 * 6] == 0) ||
           ((uVar20 != (ushort)(&DAT_023dcfb2)[uVar14 * 6] ||
            ((uint)(ushort)(&DAT_023dcfb4)[uVar14 * 6] != (uint)puVar15[2])))) goto LAB_02008a40;
        *puVar16 = *puVar15;
        (&DAT_023dcfb6)[uVar14 * 6] = puVar15[3];
        if ((((int)((puVar15[3] & 0x1ff) - 0x80) < (int)(uint)DAT_023dc8b2) &&
            ((((puVar15[3] & 0xffff01ff) + ((puVar15[1] >> 10 & 3) + 1) * 8) - 0x80 & 0x8000) == 0))
           && (((int)((*puVar15 & 0x1ff) - 0x80) < (int)(uint)DAT_023dc8ac &&
               ((((*puVar15 & 0xffff01ff) + ((puVar15[1] >> 8 & 3) + 1) * 8) - 0x80 & 0x8000) == 0))
              )) {
          FUN_020085b4(puVar15,uVar17);
          uVar20 = (uint)puVar15[1];
        }
        else {
          (&DAT_023dcfba)[uVar14 * 6] = 0;
          puVar18[-1] = 0x200;
          uVar20 = (uint)puVar15[1];
        }
      }
    }
    else {
LAB_02008a40:
      *puVar16 = *puVar15;
      (&DAT_023dcfb2)[uVar14 * 6] = puVar15[1];
      (&DAT_023dcfb4)[uVar14 * 6] = puVar15[2];
      uVar3 = puVar15[3];
      (&DAT_023dcfb8)[uVar14 * 6] = (short)uVar17;
      (&DAT_023dcfb6)[uVar14 * 6] = uVar3;
      uVar2 = DAT_023cb610;
      if ((int)((puVar15[3] & 0x1ff) - 0x80) < (int)(uint)DAT_023dc8b2) {
        uVar20 = puVar15[1] >> 10 & 3;
        if ((((((puVar15[3] & 0xffff01ff) + (uVar20 + 1) * 8) - 0x80 & 0x8000) == 0) &&
            ((int)((*puVar15 & 0x1ff) - 0x80) < (int)(uint)DAT_023dc8ac)) &&
           (uVar7 = puVar15[1] >> 8 & 3,
           (((*puVar15 & 0xffff01ff) + (uVar7 + 1) * 8) - 0x80 & 0x8000) == 0)) {
          iVar1 = (uVar7 + uVar20 * 4) * 2;
          puVar18[-1] = *(ushort *)(&DAT_0208e538 + iVar1);
          uVar3 = puVar15[2];
          if ((uVar3 & 0x8000) == 0) {
            uVar13 = 0x800;
          }
          else {
            uVar13 = 0;
          }
          *puVar18 = (ushort)((uVar3 & 0x1800) << 1) ^ 0x1000 | *(ushort *)(&DAT_0208e558 + iVar1);
          puVar18[1] = uVar13 | (ushort)((uVar3 & 0x6000) >> 1) | (ushort)((uVar17 & 0xffff) << 3);
          FUN_020086d8(puVar15,param_1,uVar17);
          if ((puVar15[2] & 0x7ff) < uVar19) {
            puVar10 = &DAT_0209c3e0 + (puVar15[2] & 0x7ff);
            do {
              puVar9 = puVar10 + 1;
              *puVar10 = 0;
              puVar10 = puVar9;
            } while (puVar9 != &DAT_0209c3e0 + uVar19);
          }
          (&DAT_023dcfba)[uVar14 * 6] = 1;
          uVar20 = (uint)puVar15[1];
          goto LAB_02008b90;
        }
      }
      uVar19 = DAT_023cb610 & 0x100;
      (&DAT_023dcfba)[uVar14 * 6] = 0;
      puVar18[-1] = 0x200;
      cVar4 = DAT_023dc5b4;
      if (((uVar19 != 0) && (uVar17 < 0xc)) &&
         (((puVar15[3] & 0x1ff) == 0 && (uVar14 = *puVar15 & 0x1ff, uVar14 - 0x80 < 0xe0)))) {
        uVar20 = (uint)puVar15[1];
        puVar5 = (undefined *)(uint)(byte)(&DAT_0208eb30)[uVar14];
        iVar1 = ((puVar15[1] >> 8 & 3) + 1) * 8;
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
        pcVar8 = &DAT_023dc5bc + (int)puVar5;
        do {
          puVar5 = puVar5 + 1;
          *pcVar8 = cVar4;
          pcVar8 = pcVar8 + 1;
        } while (puVar5 < puVar6);
      }
      uVar20 = (uint)puVar15[1];
    }
LAB_02008b90:
    uVar2 = DAT_020993c0;
    uVar17 = uVar17 + 1;
    puVar18 = puVar18 + 4;
    uVar14 = uVar20 & 0x7f;
    if (param_2 <= uVar17 || (uVar20 & 0x7f) == 0) {
      if (uVar17 < DAT_020993c0) {
        puVar11 = &DAT_023dc1a8 + uVar17 * 4;
        uVar14 = uVar17;
        do {
          uVar14 = uVar14 + 1;
          *puVar11 = 0x200;
          puVar11 = puVar11 + 4;
        } while (uVar14 < uVar2);
      }
      FUN_02008914(uVar17);
      DAT_020993bc = 0;
      return;
    }
  } while( true );
}


// 0x020090e8  graphics_access_shared_state

void FUN_020090e8(undefined4 param_1)

{
  DAT_020b4bec = param_1;
  DAT_0b003620 = DAT_0b003620 + -1;
  DAT_0b003628 = 0;
  if (-1 < DAT_0b003620) {
    return;
  }
  DAT_0b003620 = (int)DAT_020b4bf8;
  DAT_0b00362d = 1;
  return;
}


// 0x02009144  graphics_access_shared_state

void FUN_02009144(int param_1)

{
  DAT_0b003620 = DAT_0b003620 + -1;
  DAT_0b003628 = 0;
  DAT_020b4bec = param_1;
  if (DAT_0b003620 < 0) {
    DAT_0b003620 = (int)DAT_020b4bf8;
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


// 0x020091ec  graphics_access_shared_state

void FUN_020091ec(undefined4 param_1)

{
  DAT_020b4bec = param_1;
  DAT_0b003620 = (int)DAT_020b4bf8;
  return;
}


// 0x02009274  graphics_access_shared_state

undefined2 FUN_02009274(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = DAT_0b000014;
  if (DAT_0b003624 <= DAT_0b000014) {
    uVar2 = DAT_0b003624;
  }
  if (DAT_023ddb05 == '\0') {
    uVar1 = (&DAT_0208e720)[uVar2];
  }
  else {
    uVar1 = (&DAT_0208e908)[uVar2];
  }
  return CONCAT11((&DAT_0208e5e0)[DAT_020b4bec],uVar1);
}


// 0x020092e0  graphics_transform_bit_fields

uint FUN_020092e0(void)

{
  uint uVar1;
  
  DAT_0b0000a0 = 1 - DAT_0b000020;
  if (1 < DAT_0b000020) {
    DAT_0b0000a0 = 0;
  }
  uVar1 = (DAT_0b000084 | DAT_0b000088 | DAT_0b000094 | DAT_0b00007c | DAT_0b00009c |
          DAT_0b00008c | DAT_0b000090 | DAT_0b000098 | DAT_0b000080 | DAT_0b0000a0) & 0xffff;
  if (DAT_0b00362f == '\0') {
    uVar1 = uVar1 | 8;
  }
  DAT_020b4bf5 = 0;
  DAT_0b000090 = 0;
  DAT_0b00008c = 0;
  DAT_0b000094 = 0;
  return uVar1;
}


// 0x02009380  graphics_transform_bit_fields

undefined2 FUN_02009380(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = DAT_0b00363c & 0xf;
  DAT_020b4bf5 = 0;
  if (uVar2 == 4) {
    uVar2 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return *(undefined2 *)((int)&DAT_0b00364c + uVar2);
  }
  if (uVar2 == 8) {
    uVar2 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return *(undefined2 *)((int)&DAT_023dc6b0 + uVar2);
  }
  if (uVar2 == 0) {
    uVar1 = *(undefined2 *)(&DAT_0209cbec + (DAT_0b003638 & 0xfffe));
  }
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return uVar1;
}


// 0x0200944c  graphics_transform_bit_fields

undefined4 FUN_0200944c(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x4e71;
  if ((param_1 & 0x1e) < 0xf) {
    uVar1 = 1 << (param_1 & 0x1e);
    if ((uVar1 & 0x5500) == 0) {
      if ((uVar1 & 0x50) == 0) {
        if ((uVar1 & 5) != 0) {
          uVar2 = FUN_02009380();
        }
      }
      else {
        uVar2 = FUN_020092e0();
      }
    }
    else {
      uVar2 = FUN_02009274();
    }
  }
  return uVar2;
}


// 0x020094b4  graphics_dispatch_selector_cases

uint FUN_020094b4(uint param_1)

{
  uint uVar1;
  
  switch(param_1) {
  case 0:
  case 2:
    uVar1 = FUN_02009380();
    uVar1 = uVar1 >> 8 & 0xff;
    break;
  case 1:
  case 3:
    uVar1 = FUN_02009380();
    uVar1 = uVar1 & 0xff;
    break;
  case 4:
  case 6:
    uVar1 = FUN_020092e0();
    uVar1 = uVar1 >> 8 & 0xff;
    break;
  case 5:
  case 7:
    uVar1 = FUN_020092e0();
    uVar1 = uVar1 & 0xff;
    break;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    uVar1 = FUN_02009274();
    uVar1 = uVar1 >> 8 & 0xff;
    break;
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    uVar1 = FUN_02009274();
    uVar1 = uVar1 & 0xff;
    break;
  default:
    if ((param_1 & 1) == 0) {
      uVar1 = 0x4e;
    }
    else {
      uVar1 = 0x71;
    }
  }
  return uVar1;
}


// 0x02009570  graphics_dispatch_selector_cases

void FUN_02009570(void)

{
  if ((DAT_023cb610 & 4) == 0) {
    DAT_023dcea8 = FUN_0200c280;
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


// 0x02009614  graphics_dispatch_selector_cases

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02009614(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = 1 - (uint)DAT_020b4c06;
  if (1 < DAT_020b4c06) {
    iVar2 = 0;
  }
  if (param_1 < 0xc) {
    iVar2 = 0;
  }
  bVar1 = (byte)param_2;
  (&DAT_020b4c18)[param_1] = bVar1;
  if (iVar2 == 0) {
    switch(param_1) {
    case 0:
      DAT_0b003644 = (byte)(param_2 >> 4) & 1;
      DAT_020b4bf1 = ((byte)(param_2 >> 1) ^ 1) & 1;
      return;
    case 1:
      DAT_020b4c06 = bVar1 & 4;
      DAT_0b00362f = (byte)(param_2 >> 6) & 1;
      uVar3 = param_2 >> 3 & 1;
      DAT_0b00362c = (byte)(param_2 >> 5) & 1;
      DAT_020b4bf2 = (byte)(param_2 >> 4) & 1;
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
      DAT_023ddea0 = (param_2 & 0x38) * 0x400;
      DAT_023dde8c = &DAT_020acbec + (param_2 & 0x38) * 0x200;
      if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
        DAT_023dc8a4 = 1;
      }
      ram0x023dd374 = DAT_023ddea0;
      DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
      return;
    case 3:
      DAT_023ddea8 = (param_2 & 0x3e) * 0x400;
      if (DAT_023ddb05 == '\0') {
        iVar2 = 0x800;
      }
      else {
        iVar2 = 0x1000;
      }
      DAT_023dc8bc = iVar2 + DAT_023ddea8;
      return;
    case 4:
      DAT_023ddea4 = (param_2 & 7) * 0x2000;
      DAT_023dde90 = &DAT_020acbec + (param_2 & 7) * 0x1000;
      if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
        DAT_023dc8a8 = 1;
      }
      DAT_023dd378 = DAT_023ddea4;
      DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
      return;
    case 5:
      iVar2 = (param_2 & 0x7f) * 0x200;
      DAT_0209cbe0 = DAT_023ddeac;
      DAT_023dcdac = &DAT_0209cbec + iVar2;
      DAT_023ddeac = iVar2;
      return;
    case 7:
      DAT_0b003640 = param_2 & 0x3f;
      DAT_020b4bf7 = (char)(param_2 & 0x3f);
      return;
    case 10:
      DAT_020b4bf8 = (short)param_2;
      return;
    case 0xb:
      DAT_020b4bf0 = (byte)(param_2 >> 3) & 1;
      DAT_023dcfac = (byte)(param_2 >> 2) & 1;
      DAT_023dcdb0 = bVar1 & 3;
      if ((DAT_023cb610 & 4) == 0) {
        DAT_023dcea8 = FUN_0200c280;
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
        DAT_023dc8bc = DAT_023ddea8 + 0x1000;
        DAT_020b4c0c = 0xf000;
        DAT_020b4c0a = 0x50;
        DAT_023ddeb2 = 0x28;
        DAT_023dc8ae = 0x140;
        DAT_023dc8c8 = 0x40;
      }
      else {
        DAT_020b4c0c = 0xf800;
        DAT_023dc8bc = DAT_023ddea8 + 0x800;
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
      DAT_0b003630 = param_2;
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
      DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
      DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[param_2];
      DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
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
      DAT_020b4bfc = DAT_020b4bfc & 0xff00 | param_2;
      return;
    case 0x14:
      DAT_020b4bfc = DAT_020b4bfc & 0xff | param_2 << 8;
      return;
    case 0x15:
      DAT_0b003634 = DAT_0b003634 & 0xfffe00 | param_2 << 1;
      return;
    case 0x16:
      DAT_0b003634 = DAT_0b003634 & 0xfe01ff | param_2 << 9;
      return;
    case 0x17:
      DAT_0b003634 = DAT_0b003634 & 0x1ffff | (param_2 & 0x7f) << 0x11;
      DAT_020b4c05 = (undefined1)(param_2 >> 6);
    }
    return;
  }
  return;
}


// 0x0200b284  graphics_transform_bit_fields

/* WARNING: Removing unreachable block (ram,0x020050e0) */
/* WARNING: Removing unreachable block (ram,0x020050e4) */

void FUN_0200b284(uint param_1)

{
  int iVar1;
  
  DAT_0b003624 = param_1;
  if ((((DAT_0b003644 != '\0') && (DAT_0b00362d != '\0')) && (DAT_0b003628 == 0)) &&
     (0x22 < param_1)) {
    FUN_020004e0(4);
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


// 0x0200b438  graphics_transform_bit_fields

void FUN_0200b438(void)

{
  int iVar1;
  
  DAT_0b003620 = (int)DAT_020b4bf8;
  DAT_0b000098 = DAT_0b000098 ^ 0x10;
  DAT_0b003624 = 0;
  DAT_0b00361c = 0;
  DAT_0b00007c = 0;
  DAT_0b00008c = 0;
  DAT_0b000090 = 0;
  DAT_0b000094 = 0;
  if ((DAT_023dc8b0 != DAT_023dc8c8) || (iVar1 = FUN_020075ac(2), iVar1 != 0)) {
    if (DAT_023ddb05 == '\0') {
      FUN_020072a8();
      FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x800,2);
    }
    else {
      FUN_020072a8(1);
      FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x1000,2);
    }
  }
  DAT_023dceac = DAT_023ddeb2;
  DAT_023dc8b2 = DAT_023dc8ae;
  DAT_023dc8ac = DAT_023dd370;
  DAT_023dc8b0 = DAT_023dc8c8;
  if (DAT_0208f358 == 0) {
    iVar1 = FUN_020075ac(0);
    if ((iVar1 != 0) || (DAT_023dc8a4 != 0)) {
      FUN_02007630(&DAT_0209cbec + DAT_023ddea0,DAT_023dc8a0,0);
      DAT_023dc8a4 = 0;
    }
    iVar1 = FUN_020075ac(1);
    if ((iVar1 != 0) || (DAT_023dc8a8 != 0)) {
      FUN_02007630(&DAT_0209cbec + DAT_023ddea4,DAT_023dc8a0,1);
      DAT_023dc8a8 = 0;
    }
  }
  else {
    DAT_0208f358 = 0;
    FUN_02006f2c(DAT_023dcfa4);
    FUN_02007630(&DAT_0209cbec + DAT_023ddea0,DAT_023dc8a0,0);
    FUN_02007630(&DAT_0209cbec + DAT_023ddea4,DAT_023dc8a0,1);
  }
  DAT_020b4c15 = 1;
  FUN_02008984(&DAT_0209cbec,(int)DAT_020b4c0a);
  DAT_020b4c15 = 0;
  return;
}


// 0x0200c280  graphics_transform_bit_fields

void FUN_0200c280(uint param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = DAT_0b00362f == '\0';
  (&DAT_023dcbca)[param_1] = (&DAT_023dc730)[DAT_020b4bf7];
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
        (&DAT_023dd744)[param_1] = -(*(ushort *)(&DAT_0209cbec + (uVar3 & 0xfffffffe)) & 0x3fff);
        if ((bVar4) || (uVar2 = 0, cVar1 == '\x01')) {
          uVar2 = DAT_0b00364c;
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
  (&DAT_023dd924)[param_1] = -(*(ushort *)(&DAT_0209cbec + (uVar3 & 0xfffffffe)) & 0x3fff);
  if ((bVar4) && (cVar1 != '\x01')) {
    (&DAT_023dd564)[param_1] = 0;
    return;
  }
  (&DAT_023dd564)[param_1] = DAT_0b00364e;
  return;
}

