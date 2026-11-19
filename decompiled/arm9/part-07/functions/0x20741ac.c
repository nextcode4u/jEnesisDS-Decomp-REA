// rea decompile_all
// name: FUN_020741ac
// address: 0x20741ac
// body: available
// range: 0x20741ac-0x20741df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020741ac(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    DAT_040001a2 = 0xff;
    do {
    } while ((_DAT_040001a0 & 0x80) != 0);
    if ((param_2 & 0xff) == param_1) break;
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x100) {
      return 0;
    }
  }
  DAT_040001a2 = 0xff;
  return 1;
}

