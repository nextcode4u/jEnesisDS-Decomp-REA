// rea decompile_all
// name: m68k_dispatch_0202ea94
// address: 0x202ea94
// body: available
// range: 0x202ea94-0x202eab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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

