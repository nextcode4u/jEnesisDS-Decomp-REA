// Analysis annotation
// Role — m68k negx word
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include negx word (8). Example
// opcode words are 0x4058, 0x4059, 0x405A, 0x405B, 0x405C.

// rea decompile_all
// name: m68k_dispatch_02023f54
// address: 0x2023f54
// body: available
// range: 0x2023f54-0x2023faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02023f54(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ushort *puVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar3;
  *puVar3 = uVar1 + 2;
  puVar4 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  iVar2 = (uint)*puVar4 * 0x10000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  *puVar4 = (ushort)((uint)-iVar2 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02023fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

