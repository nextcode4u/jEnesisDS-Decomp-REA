// Analysis annotation
// Role — veneer to newlib strrchr
// Basis — control flow
// Ghidra identifies a thunk to 0x02083F68, annotated as newlib strrchr.

// rea decompile_all
// name: thunk_FUN_02083f68
// address: 0x20859a0
// body: available
// range: 0x20859a0-0x20859a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int thunk_FUN_02083f68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_020836d4();
  }
  else {
    iVar1 = 0;
    while (iVar2 = FUN_020836d4(param_1,param_2), iVar2 != 0) {
      param_1 = iVar2 + 1;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}

