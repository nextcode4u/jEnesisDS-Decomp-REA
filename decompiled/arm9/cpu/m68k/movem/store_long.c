/* ARM9 store long — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0202f1dc  m68k_movem_long

int m68k_movem_long_0202f1dc(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar8;
  uint unaff_r11;
  bool bVar9;
  
  puVar8 = unaff_r10 + 1;
  uVar1 = *unaff_r10;
  puVar4 = unaff_r6 + 8;
  uVar6 = puVar4[unaff_r11 & 7];
  if ((uVar6 & 0xe00000) == 0xe00000) {
    iVar2 = uVar6 << 0x10;
    puVar5 = (undefined2 *)(unaff_r8 + (uVar6 & 0xffff));
    if (iVar2 == 0) {
      puVar5 = puVar5 + 0x8000;
    }
    uVar6 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        iVar2 = unaff_r6[0xf];
      }
      uVar6 = (uint)bVar9;
      if (bVar9) {
        puVar5[-1] = (short)iVar2;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)iVar2 >> 0x10);
      }
      if ((uVar1 & 2) != 0) {
        uVar3 = unaff_r6[0xe];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 4) != 0) {
        uVar3 = unaff_r6[0xd];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 8) != 0) {
        uVar3 = unaff_r6[0xc];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 0x10) != 0) {
        uVar3 = unaff_r6[0xb];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 0x20) != 0) {
        uVar3 = unaff_r6[10];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 0x40) != 0) {
        uVar3 = unaff_r6[9];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 0x80) != 0) {
        uVar3 = *puVar4;
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
    }
    if ((uVar1 & 0x100) != 0) {
      uVar3 = unaff_r6[7];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x200) != 0) {
      uVar3 = unaff_r6[6];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x400) != 0) {
      uVar3 = unaff_r6[5];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x800) != 0) {
      uVar3 = unaff_r6[4];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar3 = unaff_r6[3];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x2000) != 0) {
      uVar3 = unaff_r6[2];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x4000) != 0) {
      uVar3 = unaff_r6[1];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar3 = *unaff_r6;
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5[-2] = (short)((uint)uVar3 >> 0x10);
    }
    puVar4[unaff_r11 & 7] = puVar4[unaff_r11 & 7] + uVar6 * -4;
    iVar7 = unaff_r7 + uVar6 * -0x80000;
    iVar2 = iVar7 + -0x80000;
    if (iVar2 != 0 && 0x7ffff < iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar2;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      if ((uVar1 & 1) != 0) {
        uVar6 = uVar6 - 4;
        write_m68k_bus_long_via_table(uVar6,unaff_r6[0xf]);
      }
      if ((uVar1 & 2) != 0) {
        uVar6 = uVar6 - 4;
        write_m68k_bus_long_via_table(uVar6,unaff_r6[0xe]);
      }
      if ((uVar1 & 4) != 0) {
        uVar6 = uVar6 - 4;
        write_m68k_bus_long_via_table(uVar6,unaff_r6[0xd]);
      }
      if ((uVar1 & 8) != 0) {
        uVar6 = uVar6 - 4;
        write_m68k_bus_long_via_table(uVar6,unaff_r6[0xc]);
      }
      if ((uVar1 & 0x10) != 0) {
        uVar6 = uVar6 - 4;
        write_m68k_bus_long_via_table(uVar6,unaff_r6[0xb]);
      }
      if ((uVar1 & 0x20) != 0) {
        uVar6 = uVar6 - 4;
        write_m68k_bus_long_via_table(uVar6,unaff_r6[10]);
      }
      if ((uVar1 & 0x40) != 0) {
        uVar6 = uVar6 - 4;
        write_m68k_bus_long_via_table(uVar6,unaff_r6[9]);
      }
      if ((uVar1 & 0x80) != 0) {
        uVar6 = uVar6 - 4;
        write_m68k_bus_long_via_table(uVar6,unaff_r6[8]);
      }
    }
    if ((uVar1 & 0x100) != 0) {
      uVar6 = uVar6 - 4;
      write_m68k_bus_long_via_table(uVar6,unaff_r6[7]);
    }
    if ((uVar1 & 0x200) != 0) {
      uVar6 = uVar6 - 4;
      write_m68k_bus_long_via_table(uVar6,unaff_r6[6]);
    }
    if ((uVar1 & 0x400) != 0) {
      uVar6 = uVar6 - 4;
      write_m68k_bus_long_via_table(uVar6,unaff_r6[5]);
    }
    if ((uVar1 & 0x800) != 0) {
      uVar6 = uVar6 - 4;
      write_m68k_bus_long_via_table(uVar6,unaff_r6[4]);
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar6 = uVar6 - 4;
      write_m68k_bus_long_via_table(uVar6,unaff_r6[3]);
    }
    if ((uVar1 & 0x2000) != 0) {
      uVar6 = uVar6 - 4;
      write_m68k_bus_long_via_table(uVar6,unaff_r6[2]);
    }
    if ((uVar1 & 0x4000) != 0) {
      uVar6 = uVar6 - 4;
      write_m68k_bus_long_via_table(uVar6,unaff_r6[1]);
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar6 = uVar6 - 4;
      write_m68k_bus_long_via_table(uVar6,*unaff_r6);
    }
    unaff_r6[(unaff_r11 & 7) + 8] = uVar6;
    iVar2 = unaff_r7 + -0x80000;
    if (iVar2 != 0 && 0x7ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0202f560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar2;
    }
  }
  unaff_r6[0x13] = iVar2;
  unaff_r6[0x11] = puVar8;
  return iVar2 >> 0x10;
}


// 0x0202f564  m68k_movem_long

int m68k_movem_long_0202f564(void)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar8;
  uint unaff_r11;
  bool bVar9;
  undefined1 uVar10;
  
  puVar8 = unaff_r10 + 1;
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  uVar2 = (unaff_r6 + 8)[unaff_r11 & 7];
  iVar7 = unaff_r7 + -0x80000;
  if ((uVar2 & 0xe00000) == 0xe00000) {
    iVar5 = uVar2 << 0x10;
    puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    uVar2 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        iVar5 = *unaff_r6;
      }
      uVar2 = (uint)bVar9;
      if (bVar9) {
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 2) != 0) {
        iVar5 = unaff_r6[1];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 4) != 0) {
        iVar5 = unaff_r6[2];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 8) != 0) {
        iVar5 = unaff_r6[3];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar5 = unaff_r6[4];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar5 = unaff_r6[5];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar5 = unaff_r6[6];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar5 = unaff_r6[7];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar5 = unaff_r6[8];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar5 = unaff_r6[9];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar5 = unaff_r6[10];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar5 = unaff_r6[0xb];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar5 = unaff_r6[0xc];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar5 = unaff_r6[0xd];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar5 = unaff_r6[0xe];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar5 = unaff_r6[0xf];
      uVar2 = uVar2 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3[1] = (short)iVar5;
    }
    iVar5 = iVar7 + uVar2 * -0x80000;
    if (iVar5 != 0 && (int)(uVar2 * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar10 = (uVar1 & 1) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,*unaff_r6);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 2) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[1]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 4) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[2]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 8) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[3]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[4]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[5]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[6]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[7]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar10 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[8]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[9]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[10]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xf]);
    }
    if (!(bool)uVar10) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar5 = iVar7 + (uVar6 >> 0x10) * -0x80000;
    if (iVar5 != 0 && (int)((uVar6 >> 0x10) * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  unaff_r6[0x13] = iVar5;
  unaff_r6[0x11] = (int)puVar8;
  return iVar5 >> 0x10;
}


// 0x0202f57c  m68k_movem_long

int m68k_movem_long_0202f57c(void)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar8;
  uint unaff_r11;
  bool bVar9;
  undefined1 uVar10;
  
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  puVar8 = unaff_r10 + 2;
  iVar7 = unaff_r7 + -0xc0000;
  uVar2 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(short)unaff_r10[1];
  if ((uVar2 & 0xe00000) == 0xe00000) {
    iVar5 = uVar2 * 0x10000;
    puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    uVar2 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        iVar5 = *unaff_r6;
      }
      uVar2 = (uint)bVar9;
      if (bVar9) {
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 2) != 0) {
        iVar5 = unaff_r6[1];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 4) != 0) {
        iVar5 = unaff_r6[2];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 8) != 0) {
        iVar5 = unaff_r6[3];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar5 = unaff_r6[4];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar5 = unaff_r6[5];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar5 = unaff_r6[6];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar5 = unaff_r6[7];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar5 = unaff_r6[8];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar5 = unaff_r6[9];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar5 = unaff_r6[10];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar5 = unaff_r6[0xb];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar5 = unaff_r6[0xc];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar5 = unaff_r6[0xd];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar5 = unaff_r6[0xe];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar5 = unaff_r6[0xf];
      uVar2 = uVar2 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3[1] = (short)iVar5;
    }
    iVar5 = iVar7 + uVar2 * -0x80000;
    if (iVar5 != 0 && (int)(uVar2 * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar10 = (uVar1 & 1) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,*unaff_r6);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 2) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[1]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 4) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[2]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 8) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[3]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[4]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[5]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[6]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[7]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar10 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[8]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[9]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[10]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xf]);
    }
    if (!(bool)uVar10) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar5 = iVar7 + (uVar6 >> 0x10) * -0x80000;
    if (iVar5 != 0 && (int)((uVar6 >> 0x10) * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  unaff_r6[0x13] = iVar5;
  unaff_r6[0x11] = (int)puVar8;
  return iVar5 >> 0x10;
}


// 0x0202f59c  m68k_movem_long

int m68k_movem_long_0202f59c(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  int *unaff_r6;
  int unaff_r7;
  int iVar9;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar10;
  uint unaff_r11;
  bool bVar11;
  undefined1 uVar12;
  
  uVar1 = *unaff_r10;
  uVar8 = (uint)uVar1;
  puVar10 = unaff_r10 + 2;
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
  iVar9 = unaff_r7 + -0xe0000;
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(char)uVar2 + iVar4;
  if ((uVar3 & 0xe00000) == 0xe00000) {
    iVar4 = uVar3 * 0x10000;
    puVar6 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    uVar8 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar11 = (uVar1 & 1) != 0;
      if (bVar11) {
        iVar4 = *unaff_r6;
      }
      uVar8 = (uint)bVar11;
      if (bVar11) {
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 2) != 0) {
        iVar4 = unaff_r6[1];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 4) != 0) {
        iVar4 = unaff_r6[2];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 8) != 0) {
        iVar4 = unaff_r6[3];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar4 = unaff_r6[4];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar4 = unaff_r6[5];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar4 = unaff_r6[6];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar4 = unaff_r6[7];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar4 = unaff_r6[8];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar4 = unaff_r6[9];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar4 = unaff_r6[10];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar4 = unaff_r6[0xb];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar4 = unaff_r6[0xc];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar4 = unaff_r6[0xd];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar4 = unaff_r6[0xe];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar4 = unaff_r6[0xf];
      uVar8 = uVar8 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6[1] = (short)iVar4;
    }
    iVar4 = iVar9 + uVar8 * -0x80000;
    if (iVar4 != 0 && (int)(uVar8 * 0x80000) <= iVar9) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar10 * 4))();
      return iVar4;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar12 = (uVar1 & 1) == 0;
      if (!(bool)uVar12) {
        write_m68k_bus_long(uVar3,*unaff_r6);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 2) == 0;
      if (!(bool)uVar12) {
        write_m68k_bus_long(uVar3,unaff_r6[1]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 4) == 0;
      if (!(bool)uVar12) {
        write_m68k_bus_long(uVar3,unaff_r6[2]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 8) == 0;
      if (!(bool)uVar12) {
        write_m68k_bus_long(uVar3,unaff_r6[3]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x10) == 0;
      if (!(bool)uVar12) {
        write_m68k_bus_long(uVar3,unaff_r6[4]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x20) == 0;
      if (!(bool)uVar12) {
        write_m68k_bus_long(uVar3,unaff_r6[5]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x40) == 0;
      if (!(bool)uVar12) {
        write_m68k_bus_long(uVar3,unaff_r6[6]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x80) == 0;
      if (!(bool)uVar12) {
        write_m68k_bus_long(uVar3,unaff_r6[7]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
    }
    uVar12 = (uVar8 & 0x100) == 0;
    if (!(bool)uVar12) {
      write_m68k_bus_long(uVar3,unaff_r6[8]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x200) == 0;
    if (!(bool)uVar12) {
      write_m68k_bus_long(uVar3,unaff_r6[9]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x400) == 0;
    if (!(bool)uVar12) {
      write_m68k_bus_long(uVar3,unaff_r6[10]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x800) == 0;
    if (!(bool)uVar12) {
      write_m68k_bus_long(uVar3,unaff_r6[0xb]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x1000) == 0;
    if (!(bool)uVar12) {
      write_m68k_bus_long(uVar3,unaff_r6[0xc]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x2000) == 0;
    if (!(bool)uVar12) {
      write_m68k_bus_long(uVar3,unaff_r6[0xd]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x4000) == 0;
    if (!(bool)uVar12) {
      write_m68k_bus_long(uVar3,unaff_r6[0xe]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x8000) == 0;
    if (!(bool)uVar12) {
      write_m68k_bus_long(uVar3,unaff_r6[0xf]);
    }
    if (!(bool)uVar12) {
      uVar8 = uVar8 + 0x10000;
    }
    iVar4 = iVar9 + (uVar8 >> 0x10) * -0x80000;
    if (iVar4 != 0 && (int)((uVar8 >> 0x10) * 0x80000) <= iVar9) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar10 * 4))();
      return iVar4;
    }
  }
  unaff_r6[0x13] = iVar4;
  unaff_r6[0x11] = (int)puVar10;
  return iVar4 >> 0x10;
}


// 0x0202f5e4  m68k_movem_long

int m68k_movem_long_0202f5e4(void)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r6;
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
  iVar7 = unaff_r7 + -0xc0000;
  puVar8 = unaff_r10 + 2;
  uVar2 = (uint)(short)unaff_r10[1];
  if ((uVar2 & 0xe00000) == 0xe00000) {
    iVar5 = uVar2 << 0x10;
    puVar3 = (undefined2 *)(unaff_r8 + (uint)unaff_r10[1]);
    uVar2 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        iVar5 = *unaff_r6;
      }
      uVar2 = (uint)bVar9;
      if (bVar9) {
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 2) != 0) {
        iVar5 = unaff_r6[1];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 4) != 0) {
        iVar5 = unaff_r6[2];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 8) != 0) {
        iVar5 = unaff_r6[3];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar5 = unaff_r6[4];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar5 = unaff_r6[5];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar5 = unaff_r6[6];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar5 = unaff_r6[7];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar5 = unaff_r6[8];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar5 = unaff_r6[9];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar5 = unaff_r6[10];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar5 = unaff_r6[0xb];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar5 = unaff_r6[0xc];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar5 = unaff_r6[0xd];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar5 = unaff_r6[0xe];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar5 = unaff_r6[0xf];
      uVar2 = uVar2 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3[1] = (short)iVar5;
    }
    iVar5 = iVar7 + uVar2 * -0x80000;
    if (iVar5 != 0 && (int)(uVar2 * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar10 = (uVar1 & 1) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,*unaff_r6);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 2) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[1]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 4) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[2]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 8) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[3]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[4]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[5]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[6]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar10) {
        write_m68k_bus_long(uVar2,unaff_r6[7]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar10 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[8]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[9]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[10]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar10) {
      write_m68k_bus_long(uVar2,unaff_r6[0xf]);
    }
    if (!(bool)uVar10) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar5 = iVar7 + (uVar6 >> 0x10) * -0x80000;
    if (iVar5 != 0 && (int)((uVar6 >> 0x10) * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  unaff_r6[0x13] = iVar5;
  unaff_r6[0x11] = (int)puVar8;
  return iVar5 >> 0x10;
}


// 0x0202f5f8  m68k_movem_long

int m68k_movem_long_0202f5f8(void)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int *unaff_r6;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar7;
  bool bVar8;
  undefined1 uVar9;
  
  uVar1 = *unaff_r10;
  uVar5 = (uint)uVar1;
  iVar6 = unaff_r7 + -0x100000;
  puVar7 = unaff_r10 + 3;
  iVar2 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xe0) == 0xe0) {
    iVar2 = iVar2 << 0x10;
    puVar3 = (undefined2 *)(unaff_r8 + (uint)unaff_r10[2]);
    uVar5 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar8 = (uVar1 & 1) != 0;
      if (bVar8) {
        iVar2 = *unaff_r6;
      }
      uVar5 = (uint)bVar8;
      if (bVar8) {
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 2) != 0) {
        iVar2 = unaff_r6[1];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 4) != 0) {
        iVar2 = unaff_r6[2];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 8) != 0) {
        iVar2 = unaff_r6[3];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar2 = unaff_r6[4];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar2 = unaff_r6[5];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar2 = unaff_r6[6];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar2 = unaff_r6[7];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar2 = unaff_r6[8];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar2 = unaff_r6[9];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar2 = unaff_r6[10];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar2 = unaff_r6[0xb];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar2 = unaff_r6[0xc];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar2 = unaff_r6[0xd];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar2 = unaff_r6[0xe];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar2 = unaff_r6[0xf];
      uVar5 = uVar5 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3[1] = (short)iVar2;
    }
    iVar2 = iVar6 + uVar5 * -0x80000;
    if (iVar2 != 0 && (int)(uVar5 * 0x80000) <= iVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar2;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar9 = (uVar1 & 1) == 0;
      if (!(bool)uVar9) {
        write_m68k_bus_long(iVar2,*unaff_r6);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 2) == 0;
      if (!(bool)uVar9) {
        write_m68k_bus_long(iVar2,unaff_r6[1]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 4) == 0;
      if (!(bool)uVar9) {
        write_m68k_bus_long(iVar2,unaff_r6[2]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 8) == 0;
      if (!(bool)uVar9) {
        write_m68k_bus_long(iVar2,unaff_r6[3]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x10) == 0;
      if (!(bool)uVar9) {
        write_m68k_bus_long(iVar2,unaff_r6[4]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x20) == 0;
      if (!(bool)uVar9) {
        write_m68k_bus_long(iVar2,unaff_r6[5]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x40) == 0;
      if (!(bool)uVar9) {
        write_m68k_bus_long(iVar2,unaff_r6[6]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x80) == 0;
      if (!(bool)uVar9) {
        write_m68k_bus_long(iVar2,unaff_r6[7]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
    }
    uVar9 = (uVar5 & 0x100) == 0;
    if (!(bool)uVar9) {
      write_m68k_bus_long(iVar2,unaff_r6[8]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x200) == 0;
    if (!(bool)uVar9) {
      write_m68k_bus_long(iVar2,unaff_r6[9]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x400) == 0;
    if (!(bool)uVar9) {
      write_m68k_bus_long(iVar2,unaff_r6[10]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x800) == 0;
    if (!(bool)uVar9) {
      write_m68k_bus_long(iVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x1000) == 0;
    if (!(bool)uVar9) {
      write_m68k_bus_long(iVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x2000) == 0;
    if (!(bool)uVar9) {
      write_m68k_bus_long(iVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x4000) == 0;
    if (!(bool)uVar9) {
      write_m68k_bus_long(iVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x8000) == 0;
    if (!(bool)uVar9) {
      write_m68k_bus_long(iVar2,unaff_r6[0xf]);
    }
    if (!(bool)uVar9) {
      uVar5 = uVar5 + 0x10000;
    }
    iVar2 = iVar6 + (uVar5 >> 0x10) * -0x80000;
    if (iVar2 != 0 && (int)((uVar5 >> 0x10) * 0x80000) <= iVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar2;
    }
  }
  unaff_r6[0x13] = iVar2;
  unaff_r6[0x11] = (int)puVar7;
  return iVar2 >> 0x10;
}

