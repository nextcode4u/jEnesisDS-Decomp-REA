// rea decompile_all
// name: FUN_02084d28
// address: 0x2084d28
// body: available
// range: 0x2084d28-0x2084e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02084d28(int *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  FUN_02081258(&DAT_0208f3a0);
  uVar2 = *(ushort *)(param_1 + 3);
  uVar3 = (uint)uVar2;
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x10) == 0) {
      return 0xffffffff;
    }
    if ((uVar2 & 4) == 0) {
      iVar1 = param_1[5];
    }
    else {
      if ((int *)param_1[0xd] != (int *)0x0) {
        if ((int *)param_1[0xd] != param_1 + 0x11) {
          FUN_020818d4(&DAT_0208f3a0);
          uVar2 = *(ushort *)(param_1 + 3);
        }
        param_1[0xd] = uVar3 & 8;
      }
      *(ushort *)(param_1 + 3) = uVar2 & 0xffdb;
      iVar1 = param_1[5];
      uVar2 = *(ushort *)(param_1 + 3);
      *param_1 = iVar1;
      param_1[1] = 0;
    }
    *(ushort *)(param_1 + 3) = uVar2 | 8;
    uVar3 = (uint)*(ushort *)(param_1 + 3);
  }
  else {
    iVar1 = param_1[5];
  }
  if ((iVar1 == 0) && ((uVar3 & 0x280) != 0x200)) {
    FUN_020823f8(param_1);
    uVar3 = (uint)*(ushort *)(param_1 + 3);
  }
  if ((uVar3 & 1) == 0) {
    iVar1 = 0;
    if ((uVar3 & 2) == 0) {
      iVar1 = param_1[6];
    }
    param_1[2] = iVar1;
  }
  else {
    param_1[7] = -param_1[6];
    param_1[2] = 0;
  }
  return 0;
}

