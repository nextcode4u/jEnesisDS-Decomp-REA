// rea decompile_all
// name: FUN_020851cc
// address: 0x20851cc
// body: available
// range: 0x20851cc-0x2085233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_020851cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0xffffffff) {
    puVar2 = param_1;
    if (2 < (int)param_1) {
      puVar2 = (undefined4 *)*param_1;
    }
    uVar1 = 0xffffffff;
    if (2 < (int)param_1) {
      uVar1 = param_1[1];
    }
    if (*(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x14) != (code *)0x0) {
      uVar1 = (**(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x14))
                        (&DAT_0208f3a0,uVar1,param_2,param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}

