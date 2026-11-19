// rea decompile_all
// name: FUN_0208225c
// address: 0x208225c
// body: available
// range: 0x208225c-0x20822df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0208225c(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar2 = param_3 * param_4;
  puStack_2c = &local_20;
  uStack_28 = 1;
  local_24 = iVar2;
  local_20 = param_2;
  local_1c = iVar2;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    FUN_02081258();
  }
  iVar1 = FUN_02084130(param_1,param_5,&puStack_2c);
  if (iVar1 != 0) {
    param_4 = FUN_02080380(iVar2 - local_24,param_3);
  }
  return param_4;
}

