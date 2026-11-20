// Analysis annotation
// Role — helper calls memset
// Basis — call context
// Calls newlib memset at 0x02083058. This file's full role is still open.

// rea decompile_all
// name: FUN_020050a8
// address: 0x20050a8
// body: available
// range: 0x20050a8-0x20050c7 inclusive
// range: 0x200df20-0x200df4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020050a8(int param_1)

{
  FUN_02083058(param_1,0,0x4c4);
  *(undefined ***)(param_1 + 0x494) = &switchD_0200e01c::switchdataD_020154b0;
  *(undefined ***)(param_1 + 0x498) = &z80_dispatch;
  *(undefined ***)(param_1 + 0x49c) = &PTR_z80_dispatch_01002e00_02015430;
  *(undefined ***)(param_1 + 0x4a0) = &PTR_z80_dispatch_01002ea8_02015470;
  return;
}

