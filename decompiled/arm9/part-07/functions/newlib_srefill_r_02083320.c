// Analysis annotation
// Role — newlib srefill r
// Basis — library match
// Matches symbol __srefill_r in devkitARM r20 libc.a (lib_a-refill.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02083320
// address: 0x2083320
// body: available
// range: 0x2083320-0x20834bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_02083320(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  FUN_02081258(&DAT_0208f3a0);
  uVar2 = *(ushort *)(param_2 + 3);
  uVar3 = uVar2 & 0x20;
  param_2[1] = 0;
  if ((uVar2 & 0x20) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x10) == 0) {
        *param_1 = 9;
        *(ushort *)(param_2 + 3) = uVar2 | 0x40;
        return 0xffffffff;
      }
      if ((uVar2 & 8) != 0) {
        iVar1 = FUN_02081034(param_2);
        if (iVar1 != 0) goto LAB_0208345c;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfff7;
        uVar2 = *(ushort *)(param_2 + 3);
        param_2[7] = uVar3;
        param_2[2] = uVar3;
      }
      *(ushort *)(param_2 + 3) = uVar2 | 4;
    }
    else if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
      if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0);
      }
      param_2[0xd] = uVar3;
      param_2[1] = param_2[0x10];
      if (param_2[0x10] != 0) {
        *param_2 = param_2[0xf];
        return uVar3;
      }
    }
    if (param_2[5] == 0) {
      FUN_020823f8(param_2);
    }
    if ((*(ushort *)(param_2 + 3) & 3) != 0) {
      FUN_020821cc(&DAT_0208f3a0,&LAB_020832e8);
    }
    *param_2 = param_2[5];
    iVar1 = (*(code *)param_2[9])(param_2[8]);
    uVar2 = *(ushort *)(param_2 + 3);
    param_2[1] = iVar1;
    *(ushort *)(param_2 + 3) = uVar2 & 0xdfff;
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        *(ushort *)(param_2 + 3) = uVar2 & 0xdfff | 0x20;
        uVar3 = 0xffffffff;
      }
      else {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
        param_2[1] = 0;
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
LAB_0208345c:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

