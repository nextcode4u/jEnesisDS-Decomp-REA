// Analysis annotation
// Role — m68k move word
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include move word (8). Example
// opcode words are 0x46E0, 0x46E1, 0x46E2, 0x46E3, 0x46E4.

// rea decompile_all
// name: m68k_dispatch_0202db74
// address: 0x202db74
// body: available
// range: 0x202db74-0x202dbe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_0202db74(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int iVar9;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar10;
  
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) == 0) {
    iVar9 = unaff_r7 - 0x220000;
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar10 = *(int *)(unaff_r6 + 0x54);
    if ((uVar3 & 0x2000) == 0) {
      iVar6 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar6 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar6 - 6U & 0xffff));
    *puVar7 = (ushort)uVar3 | (ushort)iVar9 & 0x1f;
    uVar3 = (int)unaff_r10 - iVar10 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar3 >> 0x10);
    puVar7[2] = (ushort)uVar3;
    iVar10 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar10 + 0x20);
    uVar2 = *(undefined2 *)(iVar10 + 0x22);
    if ((uVar1 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar10;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
    if (0 < iVar9 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar9 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar9;
    }
  }
  else {
    piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
    *piVar4 = *piVar4 + -2;
    uVar3 = FUN_010040c4();
    uVar8 = unaff_r7 & 0xffffffe0 | uVar3 & 0x1f;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xa700;
    if ((uVar3 & 0x2000) == 0) {
      uVar5 = *(undefined4 *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
      *(undefined4 *)(unaff_r6 + 0x3c) = uVar5;
    }
    iVar9 = uVar8 - 0x120000;
    if (iVar9 != 0 && 0x11ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x0202dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar9 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar9;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar9;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar9 >> 0x10;
}

