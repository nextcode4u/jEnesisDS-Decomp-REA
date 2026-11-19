// rea decompile_all
// name: m68k_dispatch_0202f1dc
// address: 0x202f1dc
// body: available
// range: 0x202f1dc-0x202f563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202f1dc(void)

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
        FUN_010041d0(uVar6,unaff_r6[0xf]);
      }
      if ((uVar1 & 2) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[0xe]);
      }
      if ((uVar1 & 4) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[0xd]);
      }
      if ((uVar1 & 8) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[0xc]);
      }
      if ((uVar1 & 0x10) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[0xb]);
      }
      if ((uVar1 & 0x20) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[10]);
      }
      if ((uVar1 & 0x40) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[9]);
      }
      if ((uVar1 & 0x80) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[8]);
      }
    }
    if ((uVar1 & 0x100) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[7]);
    }
    if ((uVar1 & 0x200) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[6]);
    }
    if ((uVar1 & 0x400) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[5]);
    }
    if ((uVar1 & 0x800) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[4]);
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[3]);
    }
    if ((uVar1 & 0x2000) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[2]);
    }
    if ((uVar1 & 0x4000) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[1]);
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,*unaff_r6);
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

