// Analysis annotation
// Role — m68k abcd byte
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include abcd byte (64). Example
// opcode words are 0xC100, 0xC101, 0xC102, 0xC103, 0xC104.

// rea decompile_all
// name: m68k_dispatch_02030cac
// address: 0x2030cac
// body: available
// range: 0x2030cac-0x2030d27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02030cac(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = (uVar2 & 0xf) + (uVar1 & 0xf);
  if ((unaff_r7 & 0x10) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (9 < uVar3) {
    uVar3 = uVar3 + 6;
  }
  uVar1 = uVar3 + (uVar1 & 0xf0) + (uVar2 & 0xf0);
  if (0x99 < uVar1) {
    uVar1 = uVar1 - 0xa0;
  }
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x02030d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

