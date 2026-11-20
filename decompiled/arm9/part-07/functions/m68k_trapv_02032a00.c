// Analysis annotation
// Role — m68k trapv
// Basis — dispatch table
// Reached by 1 M68000 opcode-table slot. Decoded forms include trapv (1). Example opcode
// words are 0x4E76.

// rea decompile_all
// name: m68k_dispatch_02032a00
// address: 0x2032a00
// body: available
// range: 0x2032a00-0x2032a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */

int m68k_dispatch_02032a00(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  int iVar7;
  
  if ((unaff_r7 & 2) == 0) {
    iVar6 = unaff_r7 - 0x40000;
    if (iVar6 != 0 && 0x3ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar6 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar6;
    }
  }
  else {
    iVar6 = unaff_r7 - 0x220000;
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar7 = *(int *)(unaff_r6 + 0x54);
    if ((uVar3 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar5 = (ushort)uVar3 | (ushort)iVar6 & 0x1f;
    uVar3 = (int)unaff_r10 - iVar7 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar3 >> 0x10);
    puVar5[2] = (ushort)uVar3;
    iVar7 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar7 + 0x1c);
    uVar2 = *(undefined2 *)(iVar7 + 0x1e);
    if ((uVar1 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar7;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
    if (0 < iVar6 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar6 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar6;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar6;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar6 >> 0x10;
}

