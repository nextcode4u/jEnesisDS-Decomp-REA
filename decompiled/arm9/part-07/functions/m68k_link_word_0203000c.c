// Analysis annotation
// Role — m68k link word
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include link word (8). Example
// opcode words are 0x4E50, 0x4E51, 0x4E52, 0x4E53, 0x4E54.

// rea decompile_all
// name: m68k_dispatch_0203000c
// address: 0x203000c
// body: available
// range: 0x203000c-0x2030053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0203000c(void)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar4 = *(int *)(unaff_r6 + 0x3c) - 4;
  uVar2 = *puVar3;
  puVar5 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
  sVar1 = *unaff_r10;
  *puVar5 = (short)(uVar2 >> 0x10);
  puVar5[1] = (short)uVar2;
  *puVar3 = uVar4;
  *(uint *)(unaff_r6 + 0x3c) = uVar4 + (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x02030050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}

