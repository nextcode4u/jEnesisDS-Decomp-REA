// rea decompile_all
// name: m68k_dispatch_0202f5f8
// address: 0x202f5f8
// body: available
// range: 0x202f5f8-0x202f95f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202f5f8(void)

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
        FUN_01004194(iVar2,*unaff_r6);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 2) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[1]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 4) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[2]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 8) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[3]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x10) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[4]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x20) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[5]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x40) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[6]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x80) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[7]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
    }
    uVar9 = (uVar5 & 0x100) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[8]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x200) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[9]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x400) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[10]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x800) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x1000) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x2000) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x4000) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x8000) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xf]);
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

