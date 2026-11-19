// rea decompile_all
// name: thunk_FUN_02083c80
// address: 0x2085960
// body: available
// range: 0x2085960-0x2085961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int thunk_FUN_02083c80(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((((((uint)param_1 | (uint)param_2) & 3) == 0) && (3 < param_3)) &&
     (uVar1 = *param_1, uVar1 == *param_2)) {
    param_3 = param_3 - 4;
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    while( true ) {
      if (uVar1 != 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      uVar1 = *param_1;
      if (uVar1 != *param_2) break;
      param_3 = param_3 - 4;
      if (param_3 == 0) {
        return 0;
      }
      uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    }
  }
  if (param_3 != 0) {
    uVar2 = (uint)(byte)*param_1;
    uVar1 = (uint)(byte)*param_2;
    if (uVar1 != uVar2) goto LAB_02083db4;
    if (param_3 == 1) {
      return 0;
    }
    while( true ) {
      if (uVar1 == 0) {
        return 0;
      }
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      if (param_3 == 1) break;
      uVar1 = (uint)*(byte *)param_2;
      uVar2 = (uint)*(byte *)param_1;
      if (uVar1 != uVar2) goto LAB_02083db4;
      bVar3 = param_3 == 2;
      param_3 = param_3 - 1;
      if (bVar3) {
        return 0;
      }
    }
  }
  uVar2 = (uint)(byte)*param_1;
  uVar1 = (uint)(byte)*param_2;
LAB_02083db4:
  return uVar2 - uVar1;
}

