// rea decompile_all
// name: FUN_020061a8
// address: 0x20061a8
// body: available
// range: 0x20061a8-0x2006217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_020061a8(void)

{
  ushort uVar1;
  bool bVar2;
  
  do {
  } while ((_DAT_04000180 & 0xf) == 0);
  if (DAT_0209904c == 0) {
    *(undefined4 *)(_DAT_027ff028 + 4) = 0;
  }
  else {
    *(undefined4 *)(_DAT_027ff028 + 4) = DAT_02099048;
  }
  DAT_0209904c = 0;
  DAT_02099048 = 0;
  FUN_020802c4(_DAT_027ff028,0x104);
  bVar2 = (_DAT_04000184 & 2) != 0;
  uVar1 = _DAT_04000184;
  if (bVar2) {
    uVar1 = 0x8408;
  }
  if (!bVar2) {
    _DAT_04000188 = 0x10000000;
    uVar1 = _DAT_04000184;
  }
  _DAT_04000184 = uVar1;
  return !bVar2;
}

