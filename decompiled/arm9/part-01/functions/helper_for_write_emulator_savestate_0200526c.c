// Analysis annotation
// Role — helper for write emulator savestate
// Basis — call context
// Referenced by write emulator savestate at 0x0200D4C8. The filename describes that caller
// relationship.

// rea decompile_all
// name: FUN_0200526c
// address: 0x200526c
// body: available
// range: 0x200526c-0x20052eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200526c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x54) | *(uint *)(param_1 + 0x9c);
  *(char *)(param_1 + 0x47) = (char)(uVar1 >> 0x18);
  *(char *)(param_1 + 0x45) = (char)(uVar1 >> 8);
  *(char *)(param_1 + 0x46) = (char)(uVar1 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)uVar1;
  return;
}

