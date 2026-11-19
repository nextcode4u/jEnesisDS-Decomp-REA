// rea decompile_all
// name: m68k_dispatch_0202eab4
// address: 0x202eab4
// body: available
// range: 0x202eab4-0x202eafb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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

