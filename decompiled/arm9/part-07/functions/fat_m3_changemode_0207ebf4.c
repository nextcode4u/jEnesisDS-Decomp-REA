// Analysis annotation
// Role — fat m3 changemode
// Basis — library match
// Matches symbol _M3_changeMode in libfat-nds 20070127 (io_m3_common.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0207ebf4
// address: 0x207ebf4
// body: available
// range: 0x207ebf4-0x207ec69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0207ebf4(uint param_1)

{
  FUN_0207ebf0(0x8e00002);
  FUN_0207ebf0(0x800000e);
  FUN_0207ebf0(0x8801ffc);
  FUN_0207ebf0(0x800104a);
  FUN_0207ebf0(0x8800612);
  FUN_0207ebf0(0x8000000);
  FUN_0207ebf0(0x8801b66);
  FUN_0207ebf0(param_1 * 2 + 0x8000000);
  FUN_0207ebf0(0x800080e);
  FUN_0207ebf0(0x8000000);
  if ((param_1 & 0xf) == 4) {
    FUN_0207ebf0(0x80001e4);
    FUN_0207ebf0(0x80001e4);
    FUN_0207ebf0(0x8000188);
    FUN_0207ebf0(0x8000188);
  }
  else {
    FUN_0207ebf0(&DAT_09000000);
  }
  return;
}

