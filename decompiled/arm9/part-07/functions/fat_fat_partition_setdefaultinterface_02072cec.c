// Analysis annotation
// Role — fat fat partition setdefaultinterface
// Basis — library match
// Matches symbol _FAT_partition_setDefaultInterface in libfat-nds 20070127 (partition.o)
// after masking relocation fields.

// rea decompile_all
// name: FUN_02072cec
// address: 0x2072cec
// body: available
// range: 0x2072cec-0x2072d0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02072cec(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 - 1U & 0xff) < 3) && ((&DAT_020b4c5c)[param_1] != 0)) {
    uVar1 = 1;
    DAT_020b4c5c = (&DAT_020b4c5c)[param_1];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

