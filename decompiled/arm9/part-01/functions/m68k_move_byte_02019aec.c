// Analysis annotation
// Role — m68k move byte
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include move byte (64). Example
// opcode words are 0x11B0, 0x11B1, 0x11B2, 0x11B3, 0x11B4.

// rea decompile_all
// name: m68k_dispatch_02019aec
// address: 0x2019aec
// body: available
// range: 0x2019aec-0x2019b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02019aec(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar4);
  uVar1 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar4;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}

