// Analysis annotation
// Role — m68k divs word
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include divs word (64). Example
// opcode words are 0x81F0, 0x81F1, 0x81F2, 0x81F3, 0x81F4.

// rea decompile_all
// name: m68k_dispatch_02025d14
// address: 0x2025d14
// body: available
// range: 0x2025d14-0x2025e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_dispatch_02025d14(void)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar9 = unaff_r10 + 1;
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar6 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar6);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar6);
  }
  sVar3 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4);
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar7 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar9 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar6 >> 0x10);
    puVar7[2] = (ushort)uVar6;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar2 = *(ushort *)(iVar4 + 0x14);
    uVar1 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar2 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar9 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar4;
    }
  }
  else {
    uVar6 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar6 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar8 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar6 >> 7)) = 0;
      unaff_r7 = uVar8 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar8 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar8 = uVar8 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar8 = uVar8 | 8;
        }
        *(uint *)(unaff_r6 + (uVar6 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar8 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
      else {
        uVar6 = unaff_r7 | 2;
        unaff_r7 = uVar6 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar9;
  return (int)unaff_r7 >> 0x10;
}

