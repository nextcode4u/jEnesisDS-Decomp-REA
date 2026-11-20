// Analysis annotation
// Role — m68k move long
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include move long (64). Example
// opcode words are 0x2130, 0x2131, 0x2132, 0x2133, 0x2134.

// rea decompile_all
// name: m68k_dispatch_02019930
// address: 0x2019930
// body: available
// range: 0x2019930-0x201999f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02019930(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar5 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar5 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar5 = (int)*(short *)(iVar5 + uVar3);
  }
  else {
    iVar5 = *(int *)(iVar5 + uVar3);
  }
  uVar3 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar5);
  puVar6 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar4 = *puVar6 - 4;
  *puVar6 = uVar4;
  if ((uVar4 & 0xf00000) < 0xe00000) {
    uVar4 = uVar4 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar4 >> 0x10])(uVar4 + 2,uVar3 & 0xffff);
    (*(code *)(&DAT_0b00121c)[uVar4 >> 0x10])(uVar4,uVar3 >> 0x10);
    return;
  }
  puVar2 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
  *puVar2 = (short)(uVar3 >> 0x10);
  puVar2[1] = (short)uVar3;
  return;
}

