// rea decompile_all
// name: FUN_02000d10
// address: 0x2000d10
// body: available
// range: 0x2000d10-0x2000d8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02000d10(void)

{
  uint uVar1;
  
  DAT_0b00003c = &DAT_02006a58;
  FUN_020075bc(0);
  FUN_020075bc(1);
  FUN_02009570();
  FUN_02006a44();
  uVar1 = DAT_023cb610 >> 0xc & 3;
  if (uVar1 == 1) {
    DAT_0b000040 = FUN_02000568;
    DAT_0b000038 = FUN_02000a2c;
    return;
  }
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      DAT_0b000038 = (code *)&DAT_02000bbc;
    }
    return;
  }
  DAT_0b000040 = (code *)&DAT_02000558;
  DAT_0b000038 = FUN_02000868;
  return;
}

