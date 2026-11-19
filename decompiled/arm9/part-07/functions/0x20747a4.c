// rea decompile_all
// name: FUN_020747a4
// address: 0x20747a4
// body: available
// range: 0x20747a4-0x2074803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020747a4(undefined1 *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = 500000;
  do {
    if ((_DAT_09800000 & 1) == 0) break;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (param_1 != (undefined1 *)0x0) {
    if (iVar3 == 0) {
      return 0;
    }
    uVar1 = param_2 * 8 - 1;
    uVar2 = 0;
    while (uVar1 != 0) {
      while( true ) {
        uVar1 = uVar1 - 1;
        uVar2 = uVar2 << 1 | _DAT_09800000 & 1;
        if ((uVar1 & 7) != 0) break;
        *param_1 = (char)uVar2;
        param_1 = param_1 + 1;
        uVar2 = 0;
        if (uVar1 == 0) goto LAB_020747ee;
      }
    }
LAB_020747ee:
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
  }
  return 1;
}

