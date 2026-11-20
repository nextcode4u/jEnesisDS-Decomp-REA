// Analysis annotation
// Role — prepare savestate header and regions
// Basis — reviewed
// Initializes the save-state header and records pointers to the emulated state blocks.

// rea decompile_all
// name: FUN_0200d03c
// address: 0x200d03c
// body: available
// range: 0x200d03c-0x200d09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200d03c(void)

{
  DAT_023eb348 = &DAT_023eb314;
  DAT_023eb314 = 0x4a530003;
  DAT_023eb318 = DAT_0b000028;
  DAT_023eb31c = &DAT_023cb634;
  DAT_023eb330 = DAT_0b00002c;
  DAT_023eb338 = FUN_02004c18();
  DAT_023eb33c = FUN_02005aac();
  DAT_023eb340 = FUN_02005ab8();
  DAT_023eb344 = FUN_02005ac4();
  FUN_02009cb0();
  DAT_020b4c4c = 1;
  return;
}

