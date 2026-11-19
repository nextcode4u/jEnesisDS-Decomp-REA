// rea decompile_all
// name: m68k_dispatch_0202c090
// address: 0x202c090
// body: available
// range: 0x202c090-0x202c0e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0202c090(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar3 = unaff_r11 & 7;
  uVar4 = *(uint *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    iVar2 = uVar4 + 2;
  }
  else {
    iVar2 = uVar4 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar3 * 4) = iVar2;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}

