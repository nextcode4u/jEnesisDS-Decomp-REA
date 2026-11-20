/* ARM9 load long — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0202f960  m68k_movem_long

int m68k_movem_long_0202f960(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  puVar3 = unaff_r6 + 8;
  uVar6 = puVar3[unaff_r11 & 7];
  if ((uVar6 & 0xc00000) == 0) {
    puVar4 = (undefined2 *)(unaff_r6[0x18] + (uVar6 & 0x3fffff));
  }
  else {
    puVar4 = (undefined2 *)(unaff_r8 + (uVar6 & 0xffff));
  }
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      *unaff_r6 = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 2) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[1] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 4) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[2] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 8) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[3] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[4] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[5] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[6] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[7] = CONCAT22(uVar2,*puVar5);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    *puVar3 = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[9] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[10] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x8000) != 0) {
    unaff_r7 = unaff_r7 + -0x80000;
    uVar6 = uVar6 + 4;
    unaff_r6[0xf] = CONCAT22(*puVar4,puVar4[1]);
  }
  puVar3[unaff_r11 & 7] = uVar6;
  iVar7 = unaff_r7 + -0xc0000;
  if (iVar7 == 0 || unaff_r7 < 0xc0000) {
    unaff_r6[0x13] = iVar7;
    unaff_r6[0x11] = unaff_r10 + 1;
    return iVar7 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar7 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar7;
}


// 0x0202fb6c  m68k_movem_long

int m68k_movem_long_0202fb6c(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar8;
  
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7];
  uVar1 = *unaff_r10;
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 << 10;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0xc0000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0xc0000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 1);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar5;
}


// 0x0202fb84  m68k_movem_long

int m68k_movem_long_0202fb84(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(short)unaff_r10[1];
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 * 0x400;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0x100000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x100000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 2);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar5;
}


// 0x0202fba4  m68k_movem_long

int m68k_movem_long_0202fba4(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar9;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  puVar6 = unaff_r6 + 8;
  if ((uVar2 & 0x8000) == 0) {
    puVar6 = unaff_r6;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar5 = (int)*(short *)((int)puVar6 + uVar3);
  }
  else {
    iVar5 = *(int *)((int)puVar6 + uVar3);
  }
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(char)uVar2 + iVar5;
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 * 0x400;
    puVar7 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar7 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar9 = (uVar1 & 1) != 0;
    if (bVar9) {
      puVar8 = puVar7 + 1;
      uVar4 = (uint)*puVar7;
      puVar7 = puVar7 + 2;
      unaff_r4 = (uint)*puVar8;
    }
    uVar3 = (uint)bVar9;
    if (bVar9) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 4) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 8) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar8);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar7,puVar7[1]);
  }
  uVar4 = unaff_r7 + -0x120000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x120000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 2);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar5;
}


// 0x0202fbec  m68k_movem_long

int m68k_movem_long_0202fbec(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar3 = (uint)(short)unaff_r10[1];
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 << 10;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uint)unaff_r10[1]);
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0x100000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x100000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 2);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar5;
}


// 0x0202fc00  m68k_movem_long

int m68k_movem_long_0202fc00(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar3 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xc0) == 0) {
    uVar4 = uVar3 << 10;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uint)unaff_r10[2]);
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0x140000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x140000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 3);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[3] * 4))();
  return iVar5;
}


// 0x0202fc1c  m68k_movem_long

int m68k_movem_long_0202fc1c(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar3 = ((int)(unaff_r10 + 1) - unaff_r6[0x15] | unaff_r6[0x27]) + (int)(short)unaff_r10[1];
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 * 0x400;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0x100000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x100000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 2);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar5;
}


// 0x0202fc44  m68k_movem_long

int m68k_movem_long_0202fc44(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar9;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  puVar6 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    puVar6 = unaff_r6 + 8;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar5 = (int)*(short *)((int)puVar6 + uVar3);
  }
  else {
    iVar5 = *(int *)((int)puVar6 + uVar3);
  }
  uVar3 = ((int)(unaff_r10 + 1) - unaff_r6[0x15] | unaff_r6[0x27]) + (int)(char)uVar2 + iVar5;
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 * 0x400;
    puVar7 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar7 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar9 = (uVar1 & 1) != 0;
    if (bVar9) {
      puVar8 = puVar7 + 1;
      uVar4 = (uint)*puVar7;
      puVar7 = puVar7 + 2;
      unaff_r4 = (uint)*puVar8;
    }
    uVar3 = (uint)bVar9;
    if (bVar9) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 4) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 8) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar8);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar7,puVar7[1]);
  }
  uVar4 = unaff_r7 + -0x120000 + uVar3 * -0x80000;
  if (uVar4 != 0 && (int)(uVar3 * 0x80000) <= unaff_r7 + -0x120000) {
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
    return iVar5;
  }
  unaff_r6[0x13] = uVar4;
  unaff_r6[0x11] = (uint)(unaff_r10 + 2);
  return (int)uVar4 >> 0x10;
}

