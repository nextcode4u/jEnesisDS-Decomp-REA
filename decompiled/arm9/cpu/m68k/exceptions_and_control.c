/* ARM9 exceptions and control — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x01003b20  m68k_rts

int m68k_rts(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar6;
  uint unaff_r11;
  
  uVar4 = *(uint *)(unaff_r6 + 0x3c);
  *(uint *)(unaff_r6 + 0x3c) = uVar4 + 4;
  puVar3 = (ushort *)(unaff_r8 + (uVar4 & 0xffff));
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  if ((uVar1 & 0xc0) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar4 = 0xffc00000;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar4;
  puVar6 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar4));
  iVar5 = unaff_r7 + -0x100000;
  puVar3 = puVar6;
  if (iVar5 != 0 && 0xfffff < unaff_r7) {
    puVar3 = puVar6 + 1;
    unaff_r11 = (uint)*puVar6;
  }
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
                    /* WARNING: Could not recover jumptable at 0x01003b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 == 0 || unaff_r7 < 0x100000) {
    *(int *)(unaff_r6 + 0x4c) = iVar5;
    *(ushort **)(unaff_r6 + 0x44) = puVar3;
    return iVar5 >> 0x10;
  }
  iVar5 = (**(code **)(unaff_r9 + unaff_r11 * 4))();
  return iVar5;
}


// 0x01003b80  m68k_rte

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */

int m68k_rte(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int unaff_r6;
  int unaff_r7;
  uint uVar10;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  char in_OV;
  
  uVar10 = unaff_r7 - 0x140000;
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) == 0) {
    uVar8 = *(uint *)(unaff_r6 + 0x50);
    iVar7 = *(int *)(unaff_r6 + 0x54);
    if ((uVar8 & 0x2000) == 0) {
      iVar9 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar9 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar9 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar8 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar9 - 6U & 0xffff));
    *puVar5 = (ushort)uVar8 | (ushort)uVar10 & 0x1f;
    uVar8 = unaff_r10 - iVar7 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar8 >> 0x10);
    puVar5[2] = (ushort)uVar8;
    iVar7 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar7 + 0x20);
    uVar4 = *(undefined2 *)(iVar7 + 0x22);
    if ((uVar1 & 0xc0) == 0) {
      uVar8 = 0xffc00000;
      unaff_r8 = iVar7;
    }
    else {
      uVar8 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar8;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar5 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar4) & ~uVar8));
    if (0 < (int)uVar10 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar5 * 4))();
      return iVar7;
    }
  }
  else {
    iVar7 = *(uint *)(unaff_r6 + 0x3c) + 6;
    puVar5 = (ushort *)(unaff_r8 + (*(uint *)(unaff_r6 + 0x3c) & 0xffff));
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar10 = uVar10 & 0xffffffe0 | uVar1 & 0x1f;
    uVar3 = puVar5[2];
    *(uint *)(unaff_r6 + 0x50) = uVar1 & 0xa700;
    if ((uVar1 & 0x2000) == 0) {
      uVar6 = *(undefined4 *)(unaff_r6 + 0x48);
      *(int *)(unaff_r6 + 0x48) = iVar7;
      *(undefined4 *)(unaff_r6 + 0x3c) = uVar6;
    }
    else {
      *(int *)(unaff_r6 + 0x3c) = iVar7;
    }
    if ((uVar2 & 0xc0) == 0) {
      unaff_r8 = *(int *)(unaff_r6 + 0x60);
      uVar8 = 0xffc00000;
    }
    else {
      uVar8 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar8;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar5 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar3) & ~uVar8));
    if ((int)uVar10 >> 0x10 != 0 && (int)uVar10 >> 0x10 < 0 == (bool)in_OV) {
                    /* WARNING: Could not recover jumptable at 0x01003c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar5 * 4))();
      return iVar7;
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = uVar10;
  *(ushort **)(unaff_r6 + 0x44) = puVar5;
  return (int)uVar10 >> 0x10;
}


// 0x01003d00  m68k_nop

void m68k_nop(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x01003d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x01003e74  m68k_jsr

int m68k_jsr_01003e74(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar6;
  
  uVar1 = (uint)*unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  uVar2 = (int)unaff_r10 + (2 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  puVar4 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  *puVar4 = (short)(uVar2 >> 0x10);
  puVar4[1] = (short)uVar2;
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar6 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar5 = unaff_r7 + -0x120000;
  if (iVar5 == 0 || unaff_r7 < 0x120000) {
    *(int *)(unaff_r6 + 0x4c) = iVar5;
    *(ushort **)(unaff_r6 + 0x44) = puVar6;
    return iVar5 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
  return iVar5;
}


// 0x01003ee8  m68k_jsr

int m68k_jsr_01003ee8(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int unaff_r6;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar7;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  uVar4 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar4;
  uVar3 = (int)unaff_r10 + (4 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  puVar5 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
  *puVar5 = (short)(uVar3 >> 0x10);
  puVar5[1] = (short)uVar3;
  if ((uVar1 & 0xc0) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar3 = 0xffc00000;
  }
  else {
    uVar3 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
  puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar6 = unaff_r7 + -0x140000;
  if (iVar6 == 0 || unaff_r7 < 0x140000) {
    *(int *)(unaff_r6 + 0x4c) = iVar6;
    *(ushort **)(unaff_r6 + 0x44) = puVar7;
    return iVar6 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
  return iVar6;
}


// 0x0202d604  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d604(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar7;
  
  iVar3 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar6 = unaff_r7 & 0xfffffff8;
  if (iVar3 == 0) {
    uVar6 = uVar6 | 4;
  }
  if (iVar3 < 0) {
    uVar6 = uVar6 | 8;
  }
  else {
    if (iVar3 <= (int)(uint)*(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4)) {
      iVar3 = uVar6 - 0xa0000;
      if (iVar3 != 0 && 0x9ffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202d648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar6 = uVar6 & 0xfffffff7;
  }
  iVar3 = uVar6 - 0x2c0000;
  uVar6 = *(uint *)(unaff_r6 + 0x50);
  iVar7 = *(int *)(unaff_r6 + 0x54);
  if ((uVar6 & 0x2000) == 0) {
    iVar4 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar4 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
  puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
  *puVar5 = (ushort)uVar6 | (ushort)iVar3 & 0x1f;
  uVar6 = (int)unaff_r10 - iVar7 | *(uint *)(unaff_r6 + 0x9c);
  puVar5[1] = (ushort)(uVar6 >> 0x10);
  puVar5[2] = (ushort)uVar6;
  iVar7 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar7 + 0x18);
  uVar2 = *(undefined2 *)(iVar7 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar6 = 0xffc00000;
    unaff_r8 = iVar7;
  }
  else {
    uVar6 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar3 >> 0x10;
}


// 0x0202d658  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d658(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar3 = read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  iVar4 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar7 = unaff_r7 & 0xfffffff8;
  if (iVar4 == 0) {
    uVar7 = uVar7 | 4;
  }
  if (iVar4 < 0) {
    uVar7 = uVar7 | 8;
  }
  else {
    if (iVar4 <= iVar3) {
      iVar3 = uVar7 - 0xe0000;
      if (iVar3 != 0 && 0xdffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202d6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar7 = uVar7 & 0xfffffff7;
  }
  iVar3 = uVar7 - 0x300000;
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  iVar4 = *(int *)(unaff_r6 + 0x54);
  if ((uVar7 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar7 | (ushort)iVar3 & 0x1f;
  uVar7 = (int)unaff_r10 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar7 >> 0x10);
  puVar6[2] = (ushort)uVar7;
  iVar4 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar4 + 0x18);
  uVar2 = *(undefined2 *)(iVar4 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar7 = 0xffc00000;
    unaff_r8 = iVar4;
  }
  else {
    uVar7 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar3 >> 0x10;
}


// 0x0202d6b0  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d6b0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar4 = *piVar4 + 2;
  iVar3 = read_m68k_bus_word();
  iVar5 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar8 = unaff_r7 & 0xfffffff8;
  if (iVar5 == 0) {
    uVar8 = uVar8 | 4;
  }
  if (iVar5 < 0) {
    uVar8 = uVar8 | 8;
  }
  else {
    if (iVar5 <= iVar3) {
      iVar3 = uVar8 - 0xe0000;
      if (iVar3 != 0 && 0xdffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x0202d704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar8 = uVar8 & 0xfffffff7;
  }
  iVar3 = uVar8 - 0x300000;
  uVar8 = *(uint *)(unaff_r6 + 0x50);
  iVar5 = *(int *)(unaff_r6 + 0x54);
  if ((uVar8 & 0x2000) == 0) {
    iVar6 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar6 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar6 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar8 & 0xff00 | 0x2000;
  puVar7 = (ushort *)(unaff_r8 + (iVar6 - 6U & 0xffff));
  *puVar7 = (ushort)uVar8 | (ushort)iVar3 & 0x1f;
  uVar8 = (int)unaff_r10 - iVar5 | *(uint *)(unaff_r6 + 0x9c);
  puVar7[1] = (ushort)(uVar8 >> 0x10);
  puVar7[2] = (ushort)uVar8;
  iVar5 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar5 + 0x18);
  uVar2 = *(undefined2 *)(iVar5 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar8 = 0xffc00000;
    unaff_r8 = iVar5;
  }
  else {
    uVar8 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar8;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar8));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar3 >> 0x10;
}


// 0x0202d714  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d714(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar4 = *piVar4 + -2;
  iVar3 = read_m68k_bus_word();
  iVar5 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar8 = unaff_r7 & 0xfffffff8;
  if (iVar5 == 0) {
    uVar8 = uVar8 | 4;
  }
  if (iVar5 < 0) {
    uVar8 = uVar8 | 8;
  }
  else {
    if (iVar5 <= iVar3) {
      iVar3 = uVar8 - 0x100000;
      if (iVar3 != 0 && 0xfffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x0202d768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar8 = uVar8 & 0xfffffff7;
  }
  iVar3 = uVar8 - 0x320000;
  uVar8 = *(uint *)(unaff_r6 + 0x50);
  iVar5 = *(int *)(unaff_r6 + 0x54);
  if ((uVar8 & 0x2000) == 0) {
    iVar6 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar6 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar6 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar8 & 0xff00 | 0x2000;
  puVar7 = (ushort *)(unaff_r8 + (iVar6 - 6U & 0xffff));
  *puVar7 = (ushort)uVar8 | (ushort)iVar3 & 0x1f;
  uVar8 = (int)unaff_r10 - iVar5 | *(uint *)(unaff_r6 + 0x9c);
  puVar7[1] = (ushort)(uVar8 >> 0x10);
  puVar7[2] = (ushort)uVar8;
  iVar5 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar5 + 0x18);
  uVar2 = *(undefined2 *)(iVar5 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar8 = 0xffc00000;
    unaff_r8 = iVar5;
  }
  else {
    uVar8 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar8;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar8));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar3 >> 0x10;
}


// 0x0202d778  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d778(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar8;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar8 = (ushort *)(unaff_r10 + 1);
  iVar3 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  iVar4 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar7 = unaff_r7 & 0xfffffff8;
  if (iVar4 == 0) {
    uVar7 = uVar7 | 4;
  }
  if (iVar4 < 0) {
    uVar7 = uVar7 | 8;
  }
  else {
    if (iVar4 <= iVar3) {
      iVar3 = uVar7 - 0x120000;
      if (iVar3 != 0 && 0x11ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202d7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar7 = uVar7 & 0xfffffff7;
  }
  iVar3 = uVar7 - 0x340000;
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  iVar4 = *(int *)(unaff_r6 + 0x54);
  if ((uVar7 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar7 | (ushort)iVar3 & 0x1f;
  uVar7 = (int)puVar8 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar7 >> 0x10);
  puVar6[2] = (ushort)uVar7;
  iVar4 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar4 + 0x18);
  uVar2 = *(undefined2 *)(iVar4 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar7 = 0xffc00000;
    unaff_r8 = iVar4;
  }
  else {
    uVar7 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar8 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar8;
  return iVar3 >> 0x10;
}


// 0x0202d7d8  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d7d8(void)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar8 = unaff_r10 + 1;
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar7 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar7);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar7);
  }
  iVar3 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
  iVar4 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar7 = unaff_r7 & 0xfffffff8;
  if (iVar4 == 0) {
    uVar7 = uVar7 | 4;
  }
  if (iVar4 < 0) {
    uVar7 = uVar7 | 8;
  }
  else {
    if (iVar4 <= iVar3) {
      iVar3 = uVar7 - 0x140000;
      if (iVar3 != 0 && 0x13ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202d84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar7 = uVar7 & 0xfffffff7;
  }
  iVar3 = uVar7 - 0x360000;
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  iVar4 = *(int *)(unaff_r6 + 0x54);
  if ((uVar7 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar7 | (ushort)iVar3 & 0x1f;
  uVar7 = (int)puVar8 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar7 >> 0x10);
  puVar6[2] = (ushort)uVar7;
  iVar4 = *(int *)(unaff_r6 + 0x60);
  uVar2 = *(ushort *)(iVar4 + 0x18);
  uVar1 = *(undefined2 *)(iVar4 + 0x1a);
  if ((uVar2 & 0xc0) == 0) {
    uVar7 = 0xffc00000;
    unaff_r8 = iVar4;
  }
  else {
    uVar7 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar7;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar8 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar7));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar8;
  return iVar3 >> 0x10;
}


// 0x0202d85c  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d85c(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar8;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar8 = (ushort *)(unaff_r10 + 1);
  iVar3 = read_m68k_bus_word((int)*unaff_r10);
  iVar4 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar7 = unaff_r7 & 0xfffffff8;
  if (iVar4 == 0) {
    uVar7 = uVar7 | 4;
  }
  if (iVar4 < 0) {
    uVar7 = uVar7 | 8;
  }
  else {
    if (iVar4 <= iVar3) {
      iVar3 = uVar7 - 0x120000;
      if (iVar3 != 0 && 0x11ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202d89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar7 = uVar7 & 0xfffffff7;
  }
  iVar3 = uVar7 - 0x340000;
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  iVar4 = *(int *)(unaff_r6 + 0x54);
  if ((uVar7 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar7 | (ushort)iVar3 & 0x1f;
  uVar7 = (int)puVar8 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar7 >> 0x10);
  puVar6[2] = (ushort)uVar7;
  iVar4 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar4 + 0x18);
  uVar2 = *(undefined2 *)(iVar4 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar7 = 0xffc00000;
    unaff_r8 = iVar4;
  }
  else {
    uVar7 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar8 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar8;
  return iVar3 >> 0x10;
}


// 0x0202d8ac  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d8ac(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar8 = unaff_r10 + 2;
  iVar3 = read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
  iVar4 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar7 = unaff_r7 & 0xfffffff8;
  if (iVar4 == 0) {
    uVar7 = uVar7 | 4;
  }
  if (iVar4 < 0) {
    uVar7 = uVar7 | 8;
  }
  else {
    if (iVar4 <= iVar3) {
      iVar3 = uVar7 - 0x160000;
      if (iVar3 != 0 && 0x15ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202d8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar7 = uVar7 & 0xfffffff7;
  }
  iVar3 = uVar7 - 0x380000;
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  iVar4 = *(int *)(unaff_r6 + 0x54);
  if ((uVar7 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar7 | (ushort)iVar3 & 0x1f;
  uVar7 = (int)puVar8 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar7 >> 0x10);
  puVar6[2] = (ushort)uVar7;
  iVar4 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar4 + 0x18);
  uVar2 = *(undefined2 *)(iVar4 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar7 = 0xffc00000;
    unaff_r8 = iVar4;
  }
  else {
    uVar7 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar8 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar8;
  return iVar3 >> 0x10;
}


// 0x0202d904  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d904(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar8;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar8 = (ushort *)(unaff_r10 + 1);
  iVar3 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  iVar4 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar7 = unaff_r7 & 0xfffffff8;
  if (iVar4 == 0) {
    uVar7 = uVar7 | 4;
  }
  if (iVar4 < 0) {
    uVar7 = uVar7 | 8;
  }
  else {
    if (iVar4 <= iVar3) {
      iVar3 = uVar7 - 0x120000;
      if (iVar3 != 0 && 0x11ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202d958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar7 = uVar7 & 0xfffffff7;
  }
  iVar3 = uVar7 - 0x340000;
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  iVar4 = *(int *)(unaff_r6 + 0x54);
  if ((uVar7 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar7 | (ushort)iVar3 & 0x1f;
  uVar7 = (int)puVar8 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar7 >> 0x10);
  puVar6[2] = (ushort)uVar7;
  iVar4 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar4 + 0x18);
  uVar2 = *(undefined2 *)(iVar4 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar7 = 0xffc00000;
    unaff_r8 = iVar4;
  }
  else {
    uVar7 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar8 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar8;
  return iVar3 >> 0x10;
}


// 0x0202d968  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d968(void)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar8 = unaff_r10 + 1;
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar7 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar7);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar7);
  }
  iVar3 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar3);
  iVar4 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar7 = unaff_r7 & 0xfffffff8;
  if (iVar4 == 0) {
    uVar7 = uVar7 | 4;
  }
  if (iVar4 < 0) {
    uVar7 = uVar7 | 8;
  }
  else {
    if (iVar4 <= iVar3) {
      iVar3 = uVar7 - 0x140000;
      if (iVar3 != 0 && 0x13ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202d9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar7 = uVar7 & 0xfffffff7;
  }
  iVar3 = uVar7 - 0x360000;
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  iVar4 = *(int *)(unaff_r6 + 0x54);
  if ((uVar7 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar7 | (ushort)iVar3 & 0x1f;
  uVar7 = (int)puVar8 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar7 >> 0x10);
  puVar6[2] = (ushort)uVar7;
  iVar4 = *(int *)(unaff_r6 + 0x60);
  uVar2 = *(ushort *)(iVar4 + 0x18);
  uVar1 = *(undefined2 *)(iVar4 + 0x1a);
  if ((uVar2 & 0xc0) == 0) {
    uVar7 = 0xffc00000;
    unaff_r8 = iVar4;
  }
  else {
    uVar7 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar7;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar8 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar7));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar8;
  return iVar3 >> 0x10;
}


// 0x0202d9f4  m68k_chk_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_chk_word_0202d9f4(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar7;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar8;
  
  puVar7 = unaff_r10 + 1;
  iVar3 = (int)*(short *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar6 = unaff_r7 & 0xfffffff8;
  if (iVar3 == 0) {
    uVar6 = uVar6 | 4;
  }
  if (iVar3 < 0) {
    uVar6 = uVar6 | 8;
  }
  else {
    if (iVar3 <= (int)(uint)*unaff_r10) {
      iVar3 = uVar6 - 0xe0000;
      if (iVar3 != 0 && 0xdffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
      goto LAB_01003084;
    }
    uVar6 = uVar6 & 0xfffffff7;
  }
  iVar3 = uVar6 - 0x300000;
  uVar6 = *(uint *)(unaff_r6 + 0x50);
  iVar8 = *(int *)(unaff_r6 + 0x54);
  if ((uVar6 & 0x2000) == 0) {
    iVar4 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar4 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
  puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
  *puVar5 = (ushort)uVar6 | (ushort)iVar3 & 0x1f;
  uVar6 = (int)puVar7 - iVar8 | *(uint *)(unaff_r6 + 0x9c);
  puVar5[1] = (ushort)(uVar6 >> 0x10);
  puVar5[2] = (ushort)uVar6;
  iVar8 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar8 + 0x18);
  uVar2 = *(undefined2 *)(iVar8 + 0x1a);
  if ((uVar1 & 0xc0) == 0) {
    uVar6 = 0xffc00000;
    unaff_r8 = iVar8;
  }
  else {
    uVar6 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
  if (0 < iVar3 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return iVar3 >> 0x10;
}


// 0x0202e3d4  m68k_jmp

int m68k_jmp_0202e3d4(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r7;
  int iVar3;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar4;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar4 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0x80000;
  if (iVar3 == 0 || unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar4;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
  return iVar3;
}


// 0x0202e420  m68k_jmp

int m68k_jmp_0202e420(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r7;
  int iVar3;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar4 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0xa0000;
  if (iVar3 == 0 || unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar4;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
  return iVar3;
}


// 0x0202e474  m68k_jmp

int m68k_jmp_0202e474(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar5;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar4 = 0xffc00000;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar2 & uVar4;
  puVar5 = (ushort *)(unaff_r8 + (uVar2 & ~uVar4));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0xe0000;
  if (iVar3 == 0 || unaff_r7 < 0xe0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar5;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar5 * 4))();
  return iVar3;
}


// 0x0202e4ec  m68k_jmp

int m68k_jmp_0202e4ec(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r7;
  int iVar3;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  uVar1 = (uint)*unaff_r10;
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar4 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0xa0000;
  if (iVar3 == 0 || unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar4;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
  return iVar3;
}


// 0x0202e530  m68k_jmp

int m68k_jmp_0202e530(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r7;
  int iVar4;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar5;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  if ((uVar1 & 0xc0) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar3 = 0xffc00000;
  }
  else {
    uVar3 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
  puVar5 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar4 = unaff_r7 + -0xc0000;
  if (iVar4 == 0 || unaff_r7 < 0xc0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar4;
    *(ushort **)(unaff_r6 + 0x44) = puVar5;
    return iVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(unaff_r9 + (uint)*puVar5 * 4))();
  return iVar4;
}


// 0x0202e57c  m68k_jmp

int m68k_jmp_0202e57c(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r7;
  int iVar3;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  uVar1 = ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
          (int)*unaff_r10;
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar4 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0xa0000;
  if (iVar3 == 0 || unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar4;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
  return iVar3;
}


// 0x0202e5d4  m68k_jmp

int m68k_jmp_0202e5d4(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar5;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
          (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar4 = 0xffc00000;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar2 & uVar4;
  puVar5 = (ushort *)(unaff_r8 + (uVar2 & ~uVar4));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0xe0000;
  if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0202e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar5 * 4))();
    return iVar3;
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar5;
  return iVar3 >> 0x10;
}


// 0x0202e654  m68k_jsr

int m68k_jsr_0202e654(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  ushort *puVar6;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  uVar2 = unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c);
  puVar4 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  *puVar4 = (short)(uVar2 >> 0x10);
  puVar4[1] = (short)uVar2;
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar6 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar5 = unaff_r7 + -0x100000;
  if (iVar5 == 0 || unaff_r7 < 0x100000) {
    *(int *)(unaff_r6 + 0x4c) = iVar5;
    *(ushort **)(unaff_r6 + 0x44) = puVar6;
    return iVar5 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
  return iVar5;
}


// 0x0202e6d0  m68k_jsr

int m68k_jsr_0202e6d0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar6;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  uVar2 = (int)unaff_r10 + (2 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  puVar4 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  *puVar4 = (short)(uVar2 >> 0x10);
  puVar4[1] = (short)uVar2;
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar6 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar5 = unaff_r7 + -0x120000;
  if (iVar5 == 0 || unaff_r7 < 0x120000) {
    *(int *)(unaff_r6 + 0x4c) = iVar5;
    *(ushort **)(unaff_r6 + 0x44) = puVar6;
    return iVar5 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
  return iVar5;
}


// 0x0202e754  m68k_jsr

int m68k_jsr_0202e754(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar7;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  uVar5 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar5;
  uVar4 = (int)unaff_r10 + (2 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  puVar6 = (undefined2 *)(unaff_r8 + (uVar5 & 0xffff));
  *puVar6 = (short)(uVar4 >> 0x10);
  puVar6[1] = (short)uVar4;
  if ((uVar2 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar4 = 0xffc00000;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar2 & uVar4;
  puVar7 = (ushort *)(unaff_r8 + (uVar2 & ~uVar4));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0x160000;
  if (iVar3 == 0 || unaff_r7 < 0x160000) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar7;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
  return iVar3;
}


// 0x0202e7fc  m68k_jsr

int m68k_jsr_0202e7fc(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar6;
  
  uVar1 = ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
          (int)*unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  uVar2 = (int)unaff_r10 + (2 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  puVar4 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  *puVar4 = (short)(uVar2 >> 0x10);
  puVar4[1] = (short)uVar2;
  if ((uVar1 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar2 = 0xffc00000;
  }
  else {
    uVar2 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar1 & uVar2;
  puVar6 = (ushort *)(unaff_r8 + (uVar1 & ~uVar2));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar5 = unaff_r7 + -0x120000;
  if (iVar5 == 0 || unaff_r7 < 0x120000) {
    *(int *)(unaff_r6 + 0x4c) = iVar5;
    *(ushort **)(unaff_r6 + 0x44) = puVar6;
    return iVar5 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
  return iVar5;
}


// 0x0202e884  m68k_jsr

int m68k_jsr_0202e884(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar7;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
          (int)(char)uVar1 + iVar3;
  uVar5 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar5;
  uVar4 = (int)unaff_r10 + (2 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  puVar6 = (undefined2 *)(unaff_r8 + (uVar5 & 0xffff));
  *puVar6 = (short)(uVar4 >> 0x10);
  puVar6[1] = (short)uVar4;
  if ((uVar2 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar4 = 0xffc00000;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar2 & uVar4;
  puVar7 = (ushort *)(unaff_r8 + (uVar2 & ~uVar4));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0x160000;
  if (iVar3 != 0 && 0x15ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0202e930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
    return iVar3;
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return iVar3 >> 0x10;
}


// 0x0203000c  m68k_link_word

void m68k_link_word(void)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar4 = *(int *)(unaff_r6 + 0x3c) - 4;
  uVar2 = *puVar3;
  puVar5 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
  sVar1 = *unaff_r10;
  *puVar5 = (short)(uVar2 >> 0x10);
  puVar5[1] = (short)uVar2;
  *puVar3 = uVar4;
  *(uint *)(unaff_r6 + 0x3c) = uVar4 + (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x02030050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02030054  m68k_unlk

void m68k_unlk(void)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar1;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
  *puVar1 = CONCAT22(*puVar3,puVar3[1]);
  *(uint *)(unaff_r6 + 0x3c) = uVar2 + 4;
                    /* WARNING: Could not recover jumptable at 0x0203008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020327c0  m68k_rtr

int m68k_rtr(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  uint unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  
  uVar4 = *(uint *)(unaff_r6 + 0x3c);
  *(uint *)(unaff_r6 + 0x3c) = uVar4 + 6;
  puVar3 = (ushort *)(unaff_r8 + (uVar4 & 0xffff));
  uVar4 = unaff_r7 & 0xffffffe0 | *puVar3 & 0x1f;
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  if ((uVar1 & 0xc0) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar5 = 0xffc00000;
  }
  else {
    uVar5 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar5;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar3 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar5));
  iVar6 = uVar4 - 0x140000;
  if (iVar6 == 0 || (int)uVar4 < 0x140000) {
    *(int *)(unaff_r6 + 0x4c) = iVar6;
    *(ushort **)(unaff_r6 + 0x44) = puVar3;
    return iVar6 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0203282c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
  return iVar6;
}


// 0x02032944  m68k_reset

int m68k_reset(void)

{
  int unaff_r6;
  int unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  
  iVar1 = unaff_r7 + -0x40000;
  if (iVar1 == 0 || unaff_r7 < 0x40000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x02032950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x02032954  m68k_stop

int m68k_stop(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int unaff_r6;
  int unaff_r7;
  uint uVar9;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  int iVar10;
  
  uVar2 = *unaff_r10;
  uVar5 = *(uint *)(unaff_r6 + 0x50);
  uVar8 = uVar2 & 0xa700;
  *(uint *)(unaff_r6 + 0x50) = uVar8;
  uVar3 = uVar2 & 0x1f;
  uVar9 = unaff_r7 - 0x40000U & 0xffffffe0 | uVar3;
  if (((uVar5 ^ 0x2000 | uVar8) & 0x2000) == 0) {
    iVar4 = 8;
  }
  else {
    if ((uVar2 & 0x8000) == 0) {
      *(undefined1 *)(unaff_r6 + 0xa2) = 1;
      *(uint *)(unaff_r6 + 0x4c) = uVar3 | 0xfffa0000;
      *(ushort **)(unaff_r6 + 0x44) = unaff_r10 + 1;
      return -6;
    }
    iVar4 = 9;
  }
  uVar5 = *(uint *)(unaff_r6 + 0x50);
  iVar10 = *(int *)(unaff_r6 + 0x54);
  if ((uVar5 & 0x2000) == 0) {
    iVar6 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar6 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar6 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar5 & 0xff00 | 0x2000;
  puVar7 = (ushort *)(unaff_r8 + (iVar6 - 6U & 0xffff));
  *puVar7 = (ushort)uVar5 | (ushort)uVar3;
  uVar3 = (int)(unaff_r10 + 1) - iVar10 | *(uint *)(unaff_r6 + 0x9c);
  puVar7[1] = (ushort)(uVar3 >> 0x10);
  puVar7[2] = (ushort)uVar3;
  puVar7 = (ushort *)(*(int *)(unaff_r6 + 0x60) + iVar4 * 4);
  uVar2 = *puVar7;
  uVar1 = puVar7[1];
  if ((uVar2 & 0xc0) == 0) {
    uVar3 = 0xffc00000;
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
  }
  else {
    uVar3 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar3;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar3));
  if ((iVar4 == 9) && (*(char *)(unaff_r6 + 0xa2) != '\0')) {
    *(undefined1 *)(unaff_r6 + 0xa2) = 0;
  }
  iVar10 = (int)uVar9 >> 0x10;
  if (iVar10 == 0 || iVar10 < 0 != SBORROW4(iVar4,9)) {
    *(uint *)(unaff_r6 + 0x4c) = uVar9;
    *(ushort **)(unaff_r6 + 0x44) = puVar7;
    return iVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
  return iVar4;
}


// 0x020329f0  m68k_trap

int m68k_trap(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int iVar8;
  
  iVar3 = (unaff_r11 & 0xf) + 0x20;
  iVar7 = unaff_r7 + -0x220000;
  uVar4 = *(uint *)(unaff_r6 + 0x50);
  iVar8 = *(int *)(unaff_r6 + 0x54);
  if ((uVar4 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar4 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar4 | (ushort)iVar7 & 0x1f;
  uVar4 = unaff_r10 - iVar8 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar4 >> 0x10);
  puVar6[2] = (ushort)uVar4;
  puVar6 = (ushort *)(*(int *)(unaff_r6 + 0x60) + iVar3 * 4);
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  if ((uVar1 & 0xc0) == 0) {
    uVar4 = 0xffc00000;
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar4;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar6 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar4));
  if ((iVar3 == 9) && (*(char *)(unaff_r6 + 0xa2) != '\0')) {
    *(undefined1 *)(unaff_r6 + 0xa2) = 0;
  }
  iVar8 = iVar7 >> 0x10;
  if (iVar8 == 0 || iVar8 < 0 != SBORROW4(iVar3,9)) {
    *(int *)(unaff_r6 + 0x4c) = iVar7;
    *(ushort **)(unaff_r6 + 0x44) = puVar6;
    return iVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
  return iVar3;
}


// 0x02032a00  m68k_trapv

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */

int m68k_trapv(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  int iVar7;
  
  if ((unaff_r7 & 2) == 0) {
    iVar6 = unaff_r7 - 0x40000;
    if (iVar6 != 0 && 0x3ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar6 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar6;
    }
  }
  else {
    iVar6 = unaff_r7 - 0x220000;
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar7 = *(int *)(unaff_r6 + 0x54);
    if ((uVar3 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar5 = (ushort)uVar3 | (ushort)iVar6 & 0x1f;
    uVar3 = (int)unaff_r10 - iVar7 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar3 >> 0x10);
    puVar5[2] = (ushort)uVar3;
    iVar7 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar7 + 0x1c);
    uVar2 = *(undefined2 *)(iVar7 + 0x1e);
    if ((uVar1 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar7;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
    if (0 < iVar6 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar6 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar6;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar6;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar6 >> 0x10;
}

