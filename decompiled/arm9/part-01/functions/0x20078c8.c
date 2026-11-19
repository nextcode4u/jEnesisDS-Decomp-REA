// rea decompile_all
// name: FUN_020078c8
// address: 0x20078c8
// body: available
// range: 0x20078c8-0x2007977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020078c8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar2 = FUN_020074b8(param_3 & 0x7ff,param_1);
  uVar6 = param_2 >> 1 & 0x3f;
  uVar1 = (param_2 & 0x7fffff) >> 7;
  uVar4 = uVar6 + uVar1 * 0x20 & 0xffff;
  if (0x1f < uVar6) {
    uVar4 = uVar4 + 0x3e0 & 0xffff;
  }
  uVar5 = 0;
  uVar2 = (uVar2 | (ushort)((param_3 & 0x7800) >> 1)) ^ 0x400;
  if (0x1f < uVar1) {
    uVar4 = uVar4 + 0x400 & 0xffff;
  }
  bVar7 = (param_3 & 0x8000) != 0;
  iVar3 = *(int *)(&DAT_0208e578 + param_1 * 8);
  if (bVar7) {
    uVar5 = 0x3ff;
  }
  if (bVar7) {
    *(ushort *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar4 * 2) = uVar2;
    *(undefined2 *)(iVar3 + uVar4 * 2) = uVar5;
  }
  else {
    *(undefined2 *)(*(int *)(&DAT_0208e57c + param_1 * 8) + uVar4 * 2) = 0x3ff;
    *(ushort *)(iVar3 + uVar4 * 2) = uVar2;
  }
  return;
}

