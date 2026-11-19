// rea decompile_all
// name: m68k_dispatch_0201a6dc
// address: 0x201a6dc
// body: available
// range: 0x201a6dc-0x201a71f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0201a6dc(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int unaff_r6;
  int unaff_r8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar2 = FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
  puVar4 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar4 - 4;
  *puVar4 = uVar3;
  if (0xdfffff < (uVar3 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    *puVar1 = (short)(uVar2 >> 0x10);
    puVar1[1] = (short)uVar2;
    return;
  }
  uVar3 = uVar3 & 0xffffff;
  (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3 + 2,uVar2 & 0xffff);
  (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3,uVar2 >> 0x10);
  return;
}

