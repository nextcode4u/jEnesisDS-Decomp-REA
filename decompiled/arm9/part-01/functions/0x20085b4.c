// rea decompile_all
// name: FUN_020085b4
// address: 0x20085b4
// body: available
// range: 0x20085b4-0x20086c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020085b4(ushort *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  ushort uVar4;
  uint uVar3;
  
  sVar1 = (param_1[3] & 0x1ff) - (short)DAT_020993a4;
  uVar4 = sVar1 - 0x80;
  uVar3 = ((*param_1 & 0xffff01ff) - DAT_020993a8) - 0x80 & 0xffff;
  if (((DAT_023cb610 & 4) != 0) && ((uVar3 - 1) * 0x10000 < 0xee0001)) {
    uVar3 = uVar3 - (byte)(&DAT_023dcdb4)[uVar3] & 0xffff;
  }
  uVar2 = (ushort)uVar3;
  if (((param_1[1] >> 10 & 3) == 2) && ((param_1[2] & 0x800) != 0)) {
    uVar4 = sVar1 - 0x88;
  }
  if (((param_1[1] >> 8 & 3) == 2) && ((param_1[2] & 0x1000) != 0)) {
    uVar2 = uVar2 - 8;
  }
  (&DAT_023dc1a8)[param_2 * 4] = (&DAT_023dc1a8)[param_2 * 4] & 0xff00;
  (&DAT_023dc1aa)[param_2 * 4] = (&DAT_023dc1aa)[param_2 * 4] & 0xfe00;
  (&DAT_023dc1a8)[param_2 * 4] = (&DAT_023dc1a8)[param_2 * 4] | uVar2 & 0xff;
  (&DAT_023dc1aa)[param_2 * 4] = (&DAT_023dc1aa)[param_2 * 4] | uVar4 & 0x1ff;
  return;
}

