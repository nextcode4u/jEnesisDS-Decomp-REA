// Analysis annotation
// Role — write display control and display palette
// Basis — pseudocode clue
// Pseudocode writes 0x04000000 (display control), 0x05000000 (display palette).

// rea decompile_all
// name: FUN_020083ec
// address: 0x20083ec
// body: available
// range: 0x20083ec-0x200856f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020083ec(int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  short *psVar3;
  
  param_1 = param_1 + DAT_020993a8 + 1;
  _DAT_05000000 = (&DAT_023dcbca)[param_1];
  if ((&DAT_023dceb4)[param_1] != '\0') {
    _DAT_04000000 = _DAT_04000000 & 0xe0ff;
    return;
  }
  _DAT_04000014 =
       (undefined2)(((uint)(ushort)(&DAT_023dd924)[param_1] + DAT_020993a4) * 0x10000 >> 0x10);
  _DAT_0400001c = _DAT_04000014;
  _DAT_04000016 =
       (undefined2)((DAT_020993a8 + (uint)(ushort)(&DAT_023dd564)[param_1]) * 0x10000 >> 0x10);
  _DAT_0400001e = _DAT_04000016;
  if ((&DAT_023dc7b0)[param_1] == '\x01') {
    puVar1 = &DAT_023dc5ac;
  }
  else {
    puVar1 = &DAT_023dc6a4;
  }
  _DAT_04000008 = (undefined2)puVar1[1];
  _DAT_0400000c = (undefined2)*puVar1;
  _DAT_04000010 =
       (undefined2)((DAT_020993a4 + (uint)(ushort)(&DAT_023dd744)[param_1]) * 0x10000 >> 0x10);
  _DAT_04000018 = _DAT_04000010;
  _DAT_04000012 =
       (undefined2)((DAT_020993a8 + (uint)(ushort)(&DAT_023dd384)[param_1]) * 0x10000 >> 0x10);
  _DAT_0400001a = _DAT_04000012;
  _DAT_04000000 = _DAT_04000000 | 0x1f00;
  if ((&DAT_023dc5bc)[param_1] == DAT_023dc5b4) {
    _DAT_04000048 = 0xf;
  }
  else {
    _DAT_04000048 = 0x1f;
  }
  psVar3 = (short *)(&DAT_023ddb0c)[param_1];
  if (psVar3 != (short *)0x0) {
    psVar2 = (short *)&DAT_05000002;
    do {
      psVar3 = psVar3 + 1;
      if (*psVar3 != -0x8000) {
        *psVar2 = *psVar3;
        *psVar3 = -0x8000;
      }
      psVar2 = psVar2 + 1;
    } while (psVar2 != (short *)0x5000080);
    (&DAT_023ddb0c)[param_1] = 0;
    return;
  }
  return;
}

