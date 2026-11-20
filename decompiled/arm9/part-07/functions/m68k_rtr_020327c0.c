// Analysis annotation
// Role — m68k rtr
// Basis — dispatch table
// Reached by 1 M68000 opcode-table slot. Decoded forms include rtr (1). Example opcode
// words are 0x4E77.

// rea decompile_all
// name: m68k_dispatch_020327c0
// address: 0x20327c0
// body: available
// range: 0x20327c0-0x203282f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_020327c0(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  uint unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  
  uVar4 = *(uint *)(unaff_r6 + 0x3c);
  *(uint *)(unaff_r6 + 0x3c) = uVar4 + 6;
  puVar3 = (ushort *)(unaff_r8 + (uVar4 & 0xffff));
  uVar4 = unaff_r7 & 0xffffffe0 | *puVar3 & 0x1f;
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  if ((uVar1 & 0xc0) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar5 = 0xffc00000;
  }
  else {
    uVar5 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar5;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar3 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar5));
  iVar6 = uVar4 - 0x140000;
  if (iVar6 == 0 || (int)uVar4 < 0x140000) {
    *(int *)(unaff_r6 + 0x4c) = iVar6;
    *(ushort **)(unaff_r6 + 0x44) = puVar3;
    return iVar6 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0203282c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
  return iVar6;
}

