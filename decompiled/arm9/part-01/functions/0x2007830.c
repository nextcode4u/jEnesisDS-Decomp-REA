// rea decompile_all
// name: FUN_02007830
// address: 0x2007830
// body: available
// range: 0x2007830-0x20078c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02007830(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = FUN_020074b8(param_3 & 0x7ff,param_1);
  uVar3 = param_2 >> 1 & 0x3f;
  uVar5 = uVar3 + (param_2 >> 7) * 0x20 & 0xffff;
  uVar4 = 0;
  uVar1 = (uVar1 | (ushort)((param_3 & 0x7800) >> 1)) ^ 0x400;
  if (0x1f < uVar3) {
    uVar5 = uVar5 + 0x3e0 & 0xffff;
  }
  bVar6 = (param_3 & 0x8000) != 0;
  iVar2 = *(int *)(&DAT_0208e578 + param_1 * 8);
  if (bVar6) {
    uVar4 = 0x3ff;
  }
  if (bVar6) {
    *(ushort *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar5 * 2) = uVar1;
    *(undefined2 *)(iVar2 + uVar5 * 2) = uVar4;
  }
  else {
    *(undefined2 *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar5 * 2) = 0x3ff;
    *(ushort *)(iVar2 + uVar5 * 2) = uVar1;
  }
  return;
}

