// Analysis annotation
// Role — helper for newlib fopen
// Basis — call context
// Referenced by newlib fopen at 0x02081588. The filename describes that caller
// relationship.

// rea decompile_all
// name: FUN_020830f8
// address: 0x20830f8
// body: available
// range: 0x20830f8-0x208313f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020830f8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_020850fc(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}

