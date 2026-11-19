// rea decompile_all
// name: FUN_0207eba0
// address: 0x207eba0
// body: available
// range: 0x207eba0-0x207ebe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0207eba0(undefined4 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  bool bVar3;
  
  DAT_020b4c7c = *param_1;
  DAT_020b4c80 = param_1[1];
  DAT_020b4c84 = param_1[2];
  DAT_020b4c88 = param_1[3];
  DAT_020b4c8c = param_1[4];
  puVar2 = (ushort *)param_1[5];
  DAT_020b4c94 = param_1[6];
  DAT_020b4c98 = param_1[7];
  DAT_020b4c9c = param_1[8];
  uVar1 = *puVar2;
  DAT_020b4c90 = puVar2;
  *puVar2 = ~uVar1 & 0xff;
  if ((~uVar1 & 0xff) == *puVar2) {
    *puVar2 = 0xaa55;
    bVar3 = *puVar2 != 0xaa55;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

