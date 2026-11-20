/* ARM9 load word — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0202edf8  m68k_movem_word

int m68k_movem_word_0202edf8(void)

{
  ushort uVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int *unaff_r6;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  piVar2 = unaff_r6 + 8;
  uVar5 = piVar2[unaff_r11 & 7];
  if ((uVar5 & 0xc00000) == 0) {
    psVar3 = (short *)(unaff_r6[0x18] + (uVar5 & 0x3fffff));
  }
  else {
    psVar3 = (short *)(unaff_r8 + (uVar5 & 0xffff));
  }
  if ((uVar1 & 0xff) != 0) {
    psVar4 = psVar3;
    if ((uVar1 & 1) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      *unaff_r6 = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 2) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[1] = (int)*psVar4;
    }
    psVar4 = psVar3;
    if ((uVar1 & 4) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[2] = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 8) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[3] = (int)*psVar4;
    }
    psVar4 = psVar3;
    if ((uVar1 & 0x10) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[4] = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 0x20) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[5] = (int)*psVar4;
    }
    psVar4 = psVar3;
    if ((uVar1 & 0x40) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[6] = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 0x80) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[7] = (int)*psVar4;
    }
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x100) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    *piVar2 = (int)*psVar3;
  }
  psVar3 = psVar4;
  if ((uVar1 & 0x200) != 0) {
    psVar3 = psVar4 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[9] = (int)*psVar4;
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x400) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[10] = (int)*psVar3;
  }
  psVar3 = psVar4;
  if ((uVar1 & 0x800) != 0) {
    psVar3 = psVar4 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xb] = (int)*psVar4;
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x1000) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xc] = (int)*psVar3;
  }
  psVar3 = psVar4;
  if ((uVar1 & 0x2000) != 0) {
    psVar3 = psVar4 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xd] = (int)*psVar4;
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x4000) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xe] = (int)*psVar3;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xf] = (int)*psVar4;
  }
  piVar2[unaff_r11 & 7] = uVar5;
  iVar6 = unaff_r7 + -0xc0000;
  if (iVar6 == 0 || unaff_r7 < 0xc0000) {
    unaff_r6[0x13] = iVar6;
    unaff_r6[0x11] = (int)(unaff_r10 + 1);
    return iVar6 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar6;
}


// 0x0202ef80  m68k_movem_word

int m68k_movem_word_0202ef80(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = (unaff_r6 + 8)[unaff_r11 & 7];
  if ((uVar2 & 0xc00000) == 0) {
    iVar3 = uVar2 << 10;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 << 0x10;
    psVar4 = (short *)(unaff_r8 + (uVar2 & 0xffff));
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0xc0000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0xc0000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 1);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar3;
}


// 0x0202ef98  m68k_movem_word

int m68k_movem_word_0202ef98(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(short)unaff_r10[1];
  if ((uVar2 & 0xc00000) == 0) {
    iVar3 = uVar2 * 0x400;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 * 0x10000;
    psVar4 = (short *)(unaff_r8 + (uVar2 & 0xffff));
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0x100000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0x100000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 2);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar3;
}


// 0x0202efb8  m68k_movem_word

int m68k_movem_word_0202efb8(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  short *psVar7;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  piVar5 = unaff_r6 + 8;
  if ((uVar2 & 0x8000) == 0) {
    piVar5 = unaff_r6;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)((int)piVar5 + uVar3);
  }
  else {
    iVar4 = *(int *)((int)piVar5 + uVar3);
  }
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(char)uVar2 + iVar4;
  if ((uVar3 & 0xc00000) == 0) {
    iVar4 = uVar3 * 0x400;
    psVar6 = (short *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    iVar4 = uVar3 * 0x10000;
    psVar6 = (short *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    psVar7 = psVar6;
    if (bVar8) {
      psVar7 = psVar6 + 1;
      iVar4 = (int)*psVar6;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = iVar4;
    }
    psVar6 = psVar7;
    if ((uVar1 & 2) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 4) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 8) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x10) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x20) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x40) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x80) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = (int)*psVar7;
    }
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x100) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x200) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x400) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x800) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x1000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x2000) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x4000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = (int)*psVar6;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = (int)*psVar7;
  }
  iVar4 = unaff_r7 + -0x120000 + uVar3 * -0x40000;
  if (iVar4 == 0 || unaff_r7 + -0x120000 < (int)(uVar3 * 0x40000)) {
    unaff_r6[0x13] = iVar4;
    unaff_r6[0x11] = (int)(unaff_r10 + 2);
    return iVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar4;
}


// 0x0202f000  m68k_movem_word

int m68k_movem_word_0202f000(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = (uint)(short)unaff_r10[1];
  if ((uVar2 & 0xc00000) == 0) {
    iVar3 = uVar2 << 10;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 << 0x10;
    psVar4 = (short *)(unaff_r8 + (uint)unaff_r10[1]);
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0x100000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0x100000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 2);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar3;
}


// 0x0202f014  m68k_movem_word

int m68k_movem_word_0202f014(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xc0) == 0) {
    iVar3 = uVar2 << 10;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 << 0x10;
    psVar4 = (short *)(unaff_r8 + (uint)unaff_r10[2]);
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0x140000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0x140000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 3);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[3] * 4))();
  return iVar3;
}


// 0x0202f030  m68k_movem_word

int m68k_movem_word_0202f030(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = ((int)(unaff_r10 + 1) - unaff_r6[0x15] | unaff_r6[0x27]) + (int)(short)unaff_r10[1];
  if ((uVar2 & 0xc00000) == 0) {
    iVar3 = uVar2 * 0x400;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 * 0x10000;
    psVar4 = (short *)(unaff_r8 + (uVar2 & 0xffff));
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0x100000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0x100000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 2);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar3;
}


// 0x0202f058  m68k_movem_word

int m68k_movem_word_0202f058(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  short *psVar7;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  piVar5 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    piVar5 = unaff_r6 + 8;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)((int)piVar5 + uVar3);
  }
  else {
    iVar4 = *(int *)((int)piVar5 + uVar3);
  }
  uVar3 = ((int)(unaff_r10 + 1) - unaff_r6[0x15] | unaff_r6[0x27]) + (int)(char)uVar2 + iVar4;
  if ((uVar3 & 0xc00000) == 0) {
    iVar4 = uVar3 * 0x400;
    psVar6 = (short *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    iVar4 = uVar3 * 0x10000;
    psVar6 = (short *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    psVar7 = psVar6;
    if (bVar8) {
      psVar7 = psVar6 + 1;
      iVar4 = (int)*psVar6;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = iVar4;
    }
    psVar6 = psVar7;
    if ((uVar1 & 2) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 4) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 8) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x10) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x20) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x40) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x80) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = (int)*psVar7;
    }
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x100) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x200) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x400) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x800) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x1000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x2000) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x4000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = (int)*psVar6;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = (int)*psVar7;
  }
  iVar4 = unaff_r7 + -0x120000 + uVar3 * -0x40000;
  if (iVar4 != 0 && (int)(uVar3 * 0x40000) <= unaff_r7 + -0x120000) {
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
    return iVar4;
  }
  unaff_r6[0x13] = iVar4;
  unaff_r6[0x11] = (int)(unaff_r10 + 2);
  return iVar4 >> 0x10;
}

