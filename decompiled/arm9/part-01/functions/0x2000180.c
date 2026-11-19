// rea decompile_all
// name: FUN_02000180
// address: 0x2000180
// body: available
// range: 0x2000180-0x20001a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02000180(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r4;
  
  uVar2 = (unaff_r4 - (int)param_3) + 3U & 0xfffffffc;
  if (uVar2 == 0) {
    return;
  }
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_3 = uVar1;
    param_3 = param_3 + 1;
    uVar2 = uVar2 - 4;
  } while (uVar2 != 0);
  return;
}

