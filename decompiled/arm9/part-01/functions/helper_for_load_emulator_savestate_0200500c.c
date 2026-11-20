// Analysis annotation
// Role — helper for load emulator savestate
// Basis — call context
// Referenced by load emulator savestate at 0x0200D13C. The filename describes that caller
// relationship.

// rea decompile_all
// name: FUN_0200500c
// address: 0x200500c
// body: available
// range: 0x200500c-0x20050a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200500c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x420) + *(int *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x424) + *(int *)(param_1 + 0x400);
  *(char *)(param_1 + 0x427) = (char)((uint)iVar2 >> 0x18);
  *(char *)(param_1 + 0x421) = (char)((uint)iVar1 >> 8);
  *(char *)(param_1 + 0x422) = (char)((uint)iVar1 >> 0x10);
  *(char *)(param_1 + 0x423) = (char)((uint)iVar1 >> 0x18);
  *(char *)(param_1 + 0x425) = (char)((uint)iVar2 >> 8);
  *(char *)(param_1 + 0x426) = (char)((uint)iVar2 >> 0x10);
  *(char *)(param_1 + 0x420) = (char)iVar1;
  *(char *)(param_1 + 0x424) = (char)iVar2;
  return;
}

