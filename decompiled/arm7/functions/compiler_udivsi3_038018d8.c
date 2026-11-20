// Analysis annotation
// Role — compiler udivsi3
// Basis — library match
// Matches symbol __udivsi3 in devkitARM r20 libgcc.a (_udivsi3.o) after masking relocation
// fields. Aliases at this address include __aeabi_uidiv.

// rea decompile_all
// name: FUN_038018d8
// address: 0x38018d8
// body: available
// range: 0x38018d8-0x38019d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_038018d8(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return param_1;
  }
  if (param_2 == 0) {
    FUN_03801b30();
    return 0;
  }
  if (param_1 <= param_2) {
    return (uint)(param_1 == param_2);
  }
  if ((param_2 & param_2 - 1) == 0) {
    if (param_2 < 0x10000) {
      iVar2 = 0;
    }
    else {
      param_2 = param_2 >> 0x10;
      iVar2 = 0x10;
    }
    if (0xff < param_2) {
      param_2 = param_2 >> 8;
      iVar2 = iVar2 + 8;
    }
    if (0xf < param_2) {
      param_2 = param_2 >> 4;
      iVar2 = iVar2 + 4;
    }
    if (param_2 < 5) {
      uVar3 = iVar2 + (param_2 >> 1);
    }
    else {
      uVar3 = iVar2 + 3;
    }
    return param_1 >> (uVar3 & 0xff);
  }
  if ((param_2 & 0xe0000000) == 0) {
    param_2 = param_2 << 3;
    uVar3 = 8;
  }
  else {
    uVar3 = 1;
  }
  for (; param_2 < 0x10000000 && param_2 < param_1; param_2 = param_2 << 4) {
    uVar3 = uVar3 << 4;
  }
  for (; param_2 < 0x80000000 && param_2 < param_1; param_2 = param_2 << 1) {
    uVar3 = uVar3 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (param_2 <= param_1) {
      param_1 = param_1 - param_2;
      uVar1 = uVar1 | uVar3;
    }
    if (param_2 >> 1 <= param_1) {
      param_1 = param_1 - (param_2 >> 1);
      uVar1 = uVar1 | uVar3 >> 1;
    }
    if (param_2 >> 2 <= param_1) {
      param_1 = param_1 - (param_2 >> 2);
      uVar1 = uVar1 | uVar3 >> 2;
    }
    if (param_2 >> 3 <= param_1) {
      param_1 = param_1 - (param_2 >> 3);
      uVar1 = uVar1 | uVar3 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar3 = uVar3 >> 4;
      bVar4 = uVar3 == 0;
    }
    if (bVar4) break;
    param_2 = param_2 >> 4;
  }
  return uVar1;
}

