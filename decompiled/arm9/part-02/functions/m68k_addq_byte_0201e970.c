// Analysis annotation
// Role — m68k addq byte
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include addq byte (8). Example
// opcode words are 0x5039, 0x5239, 0x5439, 0x5639, 0x5839.

// rea decompile_all
// name: m68k_dispatch_0201e970
// address: 0x201e970
// body: available
// range: 0x201e970-0x201e9bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0201e970(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar4 = CONCAT22(uVar1,unaff_r10[1]);
  iVar2 = FUN_0100408c(uVar4);
  uVar3 = unaff_r11 >> 9 & 7;
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (0xdf < (uVar1 & 0xf0)) {
    *(char *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
         (char)(iVar2 * 0x1000000 + uVar3 * 0x1000000 >> 0x18);
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
  return;
}

