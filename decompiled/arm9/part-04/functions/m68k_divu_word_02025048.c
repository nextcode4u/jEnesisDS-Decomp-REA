// Analysis annotation
// Role — m68k divu word
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include divu word (64). Example
// opcode words are 0x80C0, 0x80C1, 0x80C2, 0x80C3, 0x80C4.

// rea decompile_all
// name: m68k_dispatch_02025048
// address: 0x2025048
// body: available
// range: 0x2025048-0x20250e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_dispatch_02025048(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar3 = (uint)*(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if (uVar3 == 0) {
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar3 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xff00 | 0x2000;
    puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar6 = (ushort)uVar3 | (ushort)unaff_r7 & 0x1f;
    uVar3 = (int)unaff_r10 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar3 >> 0x10);
    puVar6[2] = (ushort)uVar3;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar4;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = uVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar3 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar3 = uVar3 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar3 = uVar3 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar3 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x020250c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar4;
      }
    }
    else {
      uVar3 = unaff_r7 | 2;
      unaff_r7 = uVar3 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x020250dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar4;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}

