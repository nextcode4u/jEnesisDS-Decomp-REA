// Analysis annotation
// Role — m68k movem long
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include movem long (8). Example
// opcode words are 0x48F0, 0x48F1, 0x48F2, 0x48F3, 0x48F4.

// rea decompile_all
// name: m68k_dispatch_0202f59c
// address: 0x202f59c
// body: available
// range: 0x202f59c-0x202f5e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202f59c(void)

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
        FUN_01004194(uVar3,*unaff_r6);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 2) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[1]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 4) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[2]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 8) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[3]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x10) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[4]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x20) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[5]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x40) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[6]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x80) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[7]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
    }
    uVar12 = (uVar8 & 0x100) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[8]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x200) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[9]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x400) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[10]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x800) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xb]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x1000) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xc]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x2000) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xd]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x4000) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xe]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x8000) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xf]);
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

