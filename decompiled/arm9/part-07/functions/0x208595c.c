// rea decompile_all
// name: thunk_FUN_020836d4
// address: 0x208595c
// body: available
// range: 0x208595c-0x208595f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * thunk_FUN_020836d4(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  if (((uint)param_1 & 3) == 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      uVar4 = param_2 | uVar4 << 8;
    } while (iVar3 != 4);
    uVar2 = *param_1;
    if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) == 0) {
      for (uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4); uVar2 == 0;
          uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4)) {
        param_1 = param_1 + 1;
        uVar2 = *param_1;
        if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) != 0) break;
      }
    }
  }
  bVar1 = (byte)*param_1;
  while( true ) {
    if (bVar1 == 0) {
      if (param_2 != 0) {
        param_1 = (uint *)0x0;
      }
      return param_1;
    }
    if (param_2 == bVar1) break;
    param_1 = (uint *)((int)param_1 + 1);
    bVar1 = *(byte *)param_1;
  }
  return param_1;
}

