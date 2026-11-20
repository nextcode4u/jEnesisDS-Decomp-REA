/* ARM9 store word — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0202e934  m68k_movem_word

int m68k_dispatch_0202e934(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar9;
  
  uVar1 = *unaff_r10;
  puVar4 = unaff_r6 + 0x10;
  uVar6 = *(uint *)(puVar4 + (unaff_r11 & 7) * 2);
  uVar2 = uVar6 << 0x10;
  puVar5 = (undefined2 *)(unaff_r8 + (uVar6 & 0xffff));
  if (uVar2 == 0) {
    puVar5 = puVar5 + 0x8000;
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar9 = (uVar1 & 1) != 0;
    if (bVar9) {
      uVar2 = (uint)(ushort)unaff_r6[0x1e];
    }
    uVar3 = (uint)bVar9;
    if (bVar9) {
      puVar5 = puVar5 + -1;
      *puVar5 = (short)uVar2;
    }
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x1c];
    }
    if ((uVar1 & 4) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x1a];
    }
    if ((uVar1 & 8) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x18];
    }
    if ((uVar1 & 0x10) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x16];
    }
    if ((uVar1 & 0x20) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x14];
    }
    if ((uVar1 & 0x40) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x12];
    }
    if ((uVar1 & 0x80) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar4;
    }
  }
  if ((uVar1 & 0x100) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[0xe];
  }
  if ((uVar1 & 0x200) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[0xc];
  }
  if ((uVar1 & 0x400) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[10];
  }
  if ((uVar1 & 0x800) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[8];
  }
  if ((uVar1 & 0x1000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[6];
  }
  if ((uVar1 & 0x2000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[4];
  }
  if ((uVar1 & 0x4000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[2];
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5[-1] = *unaff_r6;
  }
  *(uint *)(puVar4 + (unaff_r11 & 7) * 2) = uVar6 + uVar3 * -2;
  iVar7 = unaff_r7 + uVar3 * -0x40000;
  iVar8 = iVar7 + -0x80000;
  if (iVar8 == 0 || iVar7 < 0x80000) {
    *(int *)(unaff_r6 + 0x26) = iVar8;
    *(ushort **)(unaff_r6 + 0x22) = unaff_r10 + 1;
    return iVar8 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202ea78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar7 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar7;
}


// 0x0202ea7c  m68k_movem_word

int m68k_dispatch_0202ea7c(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar9;
  uint unaff_r11;
  bool bVar10;
  undefined1 uVar11;
  
  puVar9 = unaff_r10 + 1;
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  uVar3 = *(uint *)(unaff_r6 + 0x10 + (unaff_r11 & 7) * 2);
  iVar7 = unaff_r7 + -0x80000;
  if ((uVar3 & 0xe00000) == 0xe00000) {
    uVar2 = 0;
    puVar4 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    uVar3 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar10 = (uVar1 & 1) != 0;
      if (bVar10) {
        uVar2 = *unaff_r6;
      }
      uVar3 = (uint)bVar10;
      puVar5 = puVar4;
      if (bVar10) {
        puVar5 = puVar4 + 1;
        *puVar4 = uVar2;
      }
      puVar4 = puVar5;
      if ((uVar1 & 2) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[2];
      }
      puVar5 = puVar4;
      if ((uVar1 & 4) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[4];
      }
      puVar4 = puVar5;
      if ((uVar1 & 8) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[6];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x10) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[8];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x20) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[10];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x40) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[0xc];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x80) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[0xe];
      }
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x100) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x10];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x200) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x12];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x400) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x14];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x800) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x16];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x1000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x18];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x2000) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x1a];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x4000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x1c];
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar3 = uVar3 + 1;
      *puVar5 = unaff_r6[0x1e];
    }
    iVar8 = iVar7 + uVar3 * -0x40000;
    if (iVar8 != 0 && (int)(uVar3 * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar11 = (uVar1 & 1) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,*unaff_r6);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 2) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[2]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 4) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[4]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 8) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[6]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[8]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[10]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xc]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xe]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar11 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x10]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x12]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x14]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x16]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x18]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1a]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1c]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1e]);
    }
    if (!(bool)uVar11) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar8 = iVar7 + (uVar6 >> 0x10) * -0x40000;
    if (iVar8 != 0 && (int)((uVar6 >> 0x10) * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar8;
  *(ushort **)(unaff_r6 + 0x22) = puVar9;
  return iVar8 >> 0x10;
}


// 0x0202ea94  m68k_movem_word

int m68k_dispatch_0202ea94(void)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar9;
  uint unaff_r11;
  bool bVar10;
  undefined1 uVar11;
  
  uVar2 = *unaff_r10;
  uVar6 = (uint)uVar2;
  puVar9 = unaff_r10 + 2;
  iVar7 = unaff_r7 + -0xc0000;
  uVar3 = *(int *)(unaff_r6 + 0x10 + (unaff_r11 & 7) * 2) + (int)(short)unaff_r10[1];
  if ((uVar3 & 0xe00000) == 0xe00000) {
    uVar1 = 0;
    puVar4 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    uVar3 = 0;
    if ((uVar2 & 0xff) != 0) {
      bVar10 = (uVar2 & 1) != 0;
      if (bVar10) {
        uVar1 = *unaff_r6;
      }
      uVar3 = (uint)bVar10;
      puVar5 = puVar4;
      if (bVar10) {
        puVar5 = puVar4 + 1;
        *puVar4 = uVar1;
      }
      puVar4 = puVar5;
      if ((uVar2 & 2) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[2];
      }
      puVar5 = puVar4;
      if ((uVar2 & 4) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[4];
      }
      puVar4 = puVar5;
      if ((uVar2 & 8) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[6];
      }
      puVar5 = puVar4;
      if ((uVar2 & 0x10) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[8];
      }
      puVar4 = puVar5;
      if ((uVar2 & 0x20) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[10];
      }
      puVar5 = puVar4;
      if ((uVar2 & 0x40) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[0xc];
      }
      puVar4 = puVar5;
      if ((uVar2 & 0x80) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[0xe];
      }
    }
    puVar5 = puVar4;
    if ((uVar2 & 0x100) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x10];
    }
    puVar4 = puVar5;
    if ((uVar2 & 0x200) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x12];
    }
    puVar5 = puVar4;
    if ((uVar2 & 0x400) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x14];
    }
    puVar4 = puVar5;
    if ((uVar2 & 0x800) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x16];
    }
    puVar5 = puVar4;
    if ((uVar2 & 0x1000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x18];
    }
    puVar4 = puVar5;
    if ((uVar2 & 0x2000) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x1a];
    }
    puVar5 = puVar4;
    if ((uVar2 & 0x4000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x1c];
    }
    if ((uVar2 & 0x8000) != 0) {
      uVar3 = uVar3 + 1;
      *puVar5 = unaff_r6[0x1e];
    }
    iVar8 = iVar7 + uVar3 * -0x40000;
    if (iVar8 != 0 && (int)(uVar3 * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar2 & 0xff) != 0) {
      uVar11 = (uVar2 & 1) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,*unaff_r6);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 2) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[2]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 4) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[4]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 8) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[6]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[8]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[10]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xc]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xe]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar11 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x10]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x12]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x14]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x16]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x18]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1a]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1c]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1e]);
    }
    if (!(bool)uVar11) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar8 = iVar7 + (uVar6 >> 0x10) * -0x40000;
    if (iVar8 != 0 && (int)((uVar6 >> 0x10) * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar8;
  *(ushort **)(unaff_r6 + 0x22) = puVar9;
  return iVar8 >> 0x10;
}


// 0x0202eab4  m68k_movem_word

int m68k_dispatch_0202eab4(void)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar9;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar10;
  uint unaff_r11;
  bool bVar11;
  undefined1 uVar12;
  
  uVar2 = *unaff_r10;
  uVar8 = (uint)uVar2;
  puVar10 = unaff_r10 + 2;
  uVar3 = unaff_r10[1];
  puVar6 = unaff_r6 + 0x10;
  if ((uVar3 & 0x8000) == 0) {
    puVar6 = unaff_r6;
  }
  uVar4 = (uVar3 & 0x7000) >> 10;
  if ((uVar3 & 0x800) == 0) {
    iVar5 = (int)*(short *)((int)puVar6 + uVar4);
  }
  else {
    iVar5 = *(int *)((int)puVar6 + uVar4);
  }
  iVar9 = unaff_r7 + -0xe0000;
  uVar4 = *(int *)(unaff_r6 + 0x10 + (unaff_r11 & 7) * 2) + (int)(char)uVar3 + iVar5;
  if ((uVar4 & 0xe00000) == 0xe00000) {
    uVar1 = 0;
    puVar6 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
    uVar8 = 0;
    if ((uVar2 & 0xff) != 0) {
      bVar11 = (uVar2 & 1) != 0;
      if (bVar11) {
        uVar1 = *unaff_r6;
      }
      uVar8 = (uint)bVar11;
      puVar7 = puVar6;
      if (bVar11) {
        puVar7 = puVar6 + 1;
        *puVar6 = uVar1;
      }
      puVar6 = puVar7;
      if ((uVar2 & 2) != 0) {
        uVar8 = uVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = unaff_r6[2];
      }
      puVar7 = puVar6;
      if ((uVar2 & 4) != 0) {
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = unaff_r6[4];
      }
      puVar6 = puVar7;
      if ((uVar2 & 8) != 0) {
        uVar8 = uVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = unaff_r6[6];
      }
      puVar7 = puVar6;
      if ((uVar2 & 0x10) != 0) {
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = unaff_r6[8];
      }
      puVar6 = puVar7;
      if ((uVar2 & 0x20) != 0) {
        uVar8 = uVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = unaff_r6[10];
      }
      puVar7 = puVar6;
      if ((uVar2 & 0x40) != 0) {
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = unaff_r6[0xc];
      }
      puVar6 = puVar7;
      if ((uVar2 & 0x80) != 0) {
        uVar8 = uVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = unaff_r6[0xe];
      }
    }
    puVar7 = puVar6;
    if ((uVar2 & 0x100) != 0) {
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = unaff_r6[0x10];
    }
    puVar6 = puVar7;
    if ((uVar2 & 0x200) != 0) {
      uVar8 = uVar8 + 1;
      puVar6 = puVar7 + 1;
      *puVar7 = unaff_r6[0x12];
    }
    puVar7 = puVar6;
    if ((uVar2 & 0x400) != 0) {
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = unaff_r6[0x14];
    }
    puVar6 = puVar7;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = uVar8 + 1;
      puVar6 = puVar7 + 1;
      *puVar7 = unaff_r6[0x16];
    }
    puVar7 = puVar6;
    if ((uVar2 & 0x1000) != 0) {
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = unaff_r6[0x18];
    }
    puVar6 = puVar7;
    if ((uVar2 & 0x2000) != 0) {
      uVar8 = uVar8 + 1;
      puVar6 = puVar7 + 1;
      *puVar7 = unaff_r6[0x1a];
    }
    puVar7 = puVar6;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = unaff_r6[0x1c];
    }
    if ((uVar2 & 0x8000) != 0) {
      uVar8 = uVar8 + 1;
      *puVar7 = unaff_r6[0x1e];
    }
    iVar5 = iVar9 + uVar8 * -0x40000;
    if (iVar5 != 0 && (int)(uVar8 * 0x40000) <= iVar9) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar5 = (**(code **)(unaff_r9 + (uint)*puVar10 * 4))();
      return iVar5;
    }
  }
  else {
    if ((uVar2 & 0xff) != 0) {
      uVar12 = (uVar2 & 1) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,*unaff_r6);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 2) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[2]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 4) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[4]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 8) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[6]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x10) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[8]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x20) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[10]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x40) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[0xc]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x80) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[0xe]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
    }
    uVar12 = (uVar8 & 0x100) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x10]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x200) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x12]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x400) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x14]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x800) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x16]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x1000) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x18]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x2000) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x1a]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x4000) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x1c]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x8000) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x1e]);
    }
    if (!(bool)uVar12) {
      uVar8 = uVar8 + 0x10000;
    }
    iVar5 = iVar9 + (uVar8 >> 0x10) * -0x40000;
    if (iVar5 != 0 && (int)((uVar8 >> 0x10) * 0x40000) <= iVar9) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar5 = (**(code **)(unaff_r9 + (uint)*puVar10 * 4))();
      return iVar5;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar5;
  *(ushort **)(unaff_r6 + 0x22) = puVar10;
  return iVar5 >> 0x10;
}


// 0x0202eafc  m68k_movem_word

int m68k_dispatch_0202eafc(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar9;
  bool bVar10;
  undefined1 uVar11;
  
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  iVar7 = unaff_r7 + -0xc0000;
  puVar9 = unaff_r10 + 2;
  uVar3 = (uint)(short)unaff_r10[1];
  if ((uVar3 & 0xe00000) == 0xe00000) {
    uVar2 = 0;
    puVar4 = (undefined2 *)(unaff_r8 + (uint)unaff_r10[1]);
    uVar3 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar10 = (uVar1 & 1) != 0;
      if (bVar10) {
        uVar2 = *unaff_r6;
      }
      uVar3 = (uint)bVar10;
      puVar5 = puVar4;
      if (bVar10) {
        puVar5 = puVar4 + 1;
        *puVar4 = uVar2;
      }
      puVar4 = puVar5;
      if ((uVar1 & 2) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[2];
      }
      puVar5 = puVar4;
      if ((uVar1 & 4) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[4];
      }
      puVar4 = puVar5;
      if ((uVar1 & 8) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[6];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x10) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[8];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x20) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[10];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x40) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[0xc];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x80) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[0xe];
      }
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x100) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x10];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x200) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x12];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x400) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x14];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x800) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x16];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x1000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x18];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x2000) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x1a];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x4000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x1c];
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar3 = uVar3 + 1;
      *puVar5 = unaff_r6[0x1e];
    }
    iVar8 = iVar7 + uVar3 * -0x40000;
    if (iVar8 != 0 && (int)(uVar3 * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar11 = (uVar1 & 1) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,*unaff_r6);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 2) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[2]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 4) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[4]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 8) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[6]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[8]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[10]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xc]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xe]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar11 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x10]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x12]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x14]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x16]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x18]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1a]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1c]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1e]);
    }
    if (!(bool)uVar11) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar8 = iVar7 + (uVar6 >> 0x10) * -0x40000;
    if (iVar8 != 0 && (int)((uVar6 >> 0x10) * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar8;
  *(ushort **)(unaff_r6 + 0x22) = puVar9;
  return iVar8 >> 0x10;
}


// 0x0202eb10  m68k_movem_word

int m68k_dispatch_0202eb10(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar8;
  bool bVar9;
  undefined1 uVar10;
  
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  iVar7 = unaff_r7 + -0x100000;
  puVar8 = unaff_r10 + 3;
  iVar3 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xe0) == 0xe0) {
    uVar2 = 0;
    puVar4 = (undefined2 *)(unaff_r8 + (uint)unaff_r10[2]);
    uVar6 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        uVar2 = *unaff_r6;
      }
      uVar6 = (uint)bVar9;
      puVar5 = puVar4;
      if (bVar9) {
        puVar5 = puVar4 + 1;
        *puVar4 = uVar2;
      }
      puVar4 = puVar5;
      if ((uVar1 & 2) != 0) {
        uVar6 = uVar6 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[2];
      }
      puVar5 = puVar4;
      if ((uVar1 & 4) != 0) {
        uVar6 = uVar6 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[4];
      }
      puVar4 = puVar5;
      if ((uVar1 & 8) != 0) {
        uVar6 = uVar6 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[6];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[8];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[10];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[0xc];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x80) != 0) {
        uVar6 = uVar6 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[0xe];
      }
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x100) != 0) {
      uVar6 = uVar6 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x10];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x200) != 0) {
      uVar6 = uVar6 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x12];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x400) != 0) {
      uVar6 = uVar6 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x14];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = uVar6 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x16];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x1000) != 0) {
      uVar6 = uVar6 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x18];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x2000) != 0) {
      uVar6 = uVar6 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x1a];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x4000) != 0) {
      uVar6 = uVar6 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x1c];
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar6 = uVar6 + 1;
      *puVar5 = unaff_r6[0x1e];
    }
    iVar3 = iVar7 + uVar6 * -0x40000;
    if (iVar3 != 0 && (int)(uVar6 * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar3;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar10 = (uVar1 & 1) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,*unaff_r6);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 2) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[2]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 4) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[4]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 8) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[6]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[8]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[10]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[0xc]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[0xe]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar10 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x10]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x12]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x14]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x16]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x18]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x1a]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x1c]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x1e]);
    }
    if (!(bool)uVar10) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar3 = iVar7 + (uVar6 >> 0x10) * -0x40000;
    if (iVar3 != 0 && (int)((uVar6 >> 0x10) * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar3;
  *(ushort **)(unaff_r6 + 0x22) = puVar8;
  return iVar3 >> 0x10;
}

