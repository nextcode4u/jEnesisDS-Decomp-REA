// rea decompile_all
// name: m68k_dispatch_0202f57c
// address: 0x202f57c
// body: available
// range: 0x202f57c-0x202f59b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202f57c(void)

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
        FUN_01004194(uVar2,*unaff_r6);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 2) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[1]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 4) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[2]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 8) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[3]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[4]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[5]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[6]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[7]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar10 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[8]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[9]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[10]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xf]);
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

