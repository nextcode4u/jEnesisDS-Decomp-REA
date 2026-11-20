// Analysis annotation
// Role — m68k addq byte
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include addq byte (64). Example
// opcode words are 0x5020, 0x5021, 0x5022, 0x5023, 0x5024.

// rea decompile_all
// name: m68k_dispatch_0201e514
// address: 0x201e514
// body: available
// range: 0x201e514-0x201e573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0201e514(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = unaff_r11 & 7;
  iVar2 = *(int *)(unaff_r6 + 0x20 + uVar1 * 4);
  if (uVar1 == 7) {
    uVar3 = iVar2 - 2;
  }
  else {
    uVar3 = iVar2 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar1 * 4) = uVar3;
  iVar2 = FUN_0100408c(uVar3);
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(char *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
       (char)(iVar2 * 0x1000000 + uVar1 * 0x1000000 >> 0x18);
  return;
}

