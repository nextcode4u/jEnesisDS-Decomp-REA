// Analysis annotation
// Role — m68k move long
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include move long (8). Example
// opcode words are 0x213C, 0x233C, 0x253C, 0x273C, 0x293C.

// rea decompile_all
// name: m68k_dispatch_0201bf6c
// address: 0x201bf6c
// body: available
// range: 0x201bf6c-0x201bfab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0201bf6c(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint *puVar5;
  int unaff_r6;
  int unaff_r8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar4 = *puVar5 - 4;
  *puVar5 = uVar4;
  if (0xdfffff < (uVar4 & 0xf00000)) {
    puVar3 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    return;
  }
  uVar4 = uVar4 & 0xffffff;
  (*(code *)(&DAT_0b00121c)[uVar4 >> 0x10])(uVar4 + 2,uVar2);
  (*(code *)(&DAT_0b00121c)[uVar4 >> 0x10])(uVar4,uVar1);
  return;
}

