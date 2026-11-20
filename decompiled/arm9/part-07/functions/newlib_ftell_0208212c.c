// Analysis annotation
// Role — newlib ftell
// Basis — library match
// Matches symbol ftell in devkitARM r20 libc.a (lib_a-ftell.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_0208212c
// address: 0x208212c
// body: available
// range: 0x2082064-0x208213b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0208212c(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  FUN_02081258();
  if (param_1[0xb] == 0) {
    iVar2 = -1;
    DAT_0208f3a0 = 0x1d;
  }
  else {
    FUN_02081034(param_1);
    uVar1 = *(ushort *)(param_1 + 3);
    if ((uVar1 & 0x1000) == 0) {
      iVar2 = (*(code *)param_1[0xb])(param_1[8],uVar1 & 0x1000,1);
      if (iVar2 == -1) {
        return -1;
      }
      uVar1 = *(ushort *)(param_1 + 3);
    }
    else {
      iVar2 = param_1[0x15];
    }
    if ((uVar1 & 4) == 0) {
      if (((uVar1 & 8) != 0) && (*param_1 != 0)) {
        iVar2 = iVar2 + (*param_1 - param_1[5]);
      }
    }
    else {
      iVar3 = 0;
      if (param_1[0xd] != 0) {
        iVar3 = param_1[0x10];
      }
      iVar2 = iVar2 - param_1[1];
      if (param_1[0xd] != 0) {
        iVar2 = iVar2 - iVar3;
      }
    }
  }
  return iVar2;
}

