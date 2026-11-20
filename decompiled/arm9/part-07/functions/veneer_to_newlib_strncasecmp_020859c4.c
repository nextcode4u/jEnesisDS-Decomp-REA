// Analysis annotation
// Role — veneer to newlib strncasecmp
// Basis — control flow
// Ghidra identifies a thunk to 0x02083AFC, annotated as newlib strncasecmp.

// rea decompile_all
// name: thunk_FUN_02083afc
// address: 0x20859c4
// body: available
// range: 0x20859c4-0x20859c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int thunk_FUN_02083afc(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      uVar5 = (uint)*param_1;
      uVar4 = (uint)*param_2;
      uVar2 = uVar5;
      if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
        uVar2 = uVar5 + 0x20;
      }
      uVar3 = uVar4;
      if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
        uVar3 = uVar4 + 0x20;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((((uVar2 != uVar3) || (param_3 == 1)) || (uVar5 == 0)) || (uVar4 == 0)) goto LAB_02083b74;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar5 = (uint)*param_1;
    uVar4 = (uint)*param_2;
LAB_02083b74:
    if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
      uVar5 = uVar5 + 0x20;
    }
    if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
      uVar4 = uVar4 + 0x20;
    }
    iVar1 = uVar5 - uVar4;
  }
  return iVar1;
}

