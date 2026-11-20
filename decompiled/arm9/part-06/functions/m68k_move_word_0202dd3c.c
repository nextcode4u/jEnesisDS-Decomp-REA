// Analysis annotation
// Role — m68k move word
// Basis — dispatch table
// Reached by 1 M68000 opcode-table slot. Decoded forms include move word (1). Example
// opcode words are 0x46F9.

// rea decompile_all
// name: m68k_dispatch_0202dd3c
// address: 0x202dd3c
// body: available
// range: 0x202dd3c-0x202dd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_0202dd3c(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  int iVar9;
  
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) == 0) {
    iVar8 = unaff_r7 - 0x220000;
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar9 = *(int *)(unaff_r6 + 0x54);
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
    *puVar6 = (ushort)uVar3 | (ushort)iVar8 & 0x1f;
    uVar3 = (int)unaff_r10 - iVar9 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar3 >> 0x10);
    puVar6[2] = (ushort)uVar3;
    iVar9 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar9 + 0x20);
    uVar2 = *(undefined2 *)(iVar9 + 0x22);
    if ((uVar1 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar9;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar6 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
    if (0 < iVar8 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar8 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
      return iVar8;
    }
  }
  else {
    puVar6 = unaff_r10 + 2;
    uVar3 = FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
    uVar7 = unaff_r7 & 0xffffffe0 | uVar3 & 0x1f;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xa700;
    if ((uVar3 & 0x2000) == 0) {
      uVar4 = *(undefined4 *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
      *(undefined4 *)(unaff_r6 + 0x3c) = uVar4;
    }
    iVar8 = uVar7 - 0x180000;
    if (iVar8 != 0 && 0x17ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202dd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar8 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
      return iVar8;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar8;
  *(ushort **)(unaff_r6 + 0x44) = puVar6;
  return iVar8 >> 0x10;
}

