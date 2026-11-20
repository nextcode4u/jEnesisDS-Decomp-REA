// Analysis annotation
// Role — m68k roxl long
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include roxl long (64). Example
// opcode words are 0xE1B0, 0xE1B1, 0xE1B2, 0xE1B3, 0xE1B4.

// rea decompile_all
// name: m68k_dispatch_02031f30
// address: 0x2031f30
// body: available
// range: 0x2031f30-0x2031fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02031f30(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if (((bVar1 & 0x3f) != 0) && (uVar3 = (uint)(byte)(&DAT_02016a30)[bVar1 & 0x3f], uVar3 != 0)) {
    if ((unaff_r7 & 0x10) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1 << (uVar3 - 1 & 0xff);
    }
    *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         uVar2 << uVar3 | uVar2 >> (0x21 - uVar3 & 0xff) | uVar4;
                    /* WARNING: Could not recover jumptable at 0x02031f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

