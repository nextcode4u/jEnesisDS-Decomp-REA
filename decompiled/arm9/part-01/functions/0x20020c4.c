// rea decompile_all
// name: FUN_020020c4
// address: 0x20020c4
// body: available
// range: 0x20020c4-0x20020d7 inclusive
// range: 0x20020e8-0x2002147 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020020c4(int param_1)

{
  uint uVar1;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
  case 1:
    DAT_023cb610 = *(uint *)(param_1 + 8) ^ DAT_023cb610;
    return;
  case 2:
  case 3:
    uVar1 = *(uint *)(param_1 + 8);
    DAT_023cb610 = DAT_023cb610 & ~(3 << (uVar1 & 0xff)) |
                   ((DAT_023cb610 >> (uVar1 & 0xff) & 3) + 1) % 3 << (uVar1 & 0xff);
  }
  return;
}

