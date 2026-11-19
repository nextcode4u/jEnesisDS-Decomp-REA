// rea decompile_all
// name: FUN_02007a2c
// address: 0x2007a2c
// body: available
// range: 0x2007a2c-0x2007aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02007a2c(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  undefined1 *puVar6;
  bool bVar7;
  
  uVar5 = FUN_020074b8(param_2 & 0x7ff,2);
  puVar6 = (undefined1 *)(param_2 & 0x7800);
  uVar3 = (uint)puVar6 >> 1;
  bVar7 = (param_2 & 0x8000) == 0;
  if (bVar7) {
    puVar6 = &DAT_06008000;
  }
  uVar4 = (param_1 & 0x1ffff) >> 1;
  uVar5 = (uVar5 | (ushort)uVar3) ^ 0x400;
  iVar1 = uVar4 * 2;
  iVar2 = uVar4 * 2;
  if (bVar7) {
    *(ushort *)(puVar6 + iVar2) = uVar5;
    *(undefined2 *)(puVar6 + iVar2 + 0x2000) = 0x3ff;
  }
  else {
    *(undefined2 *)(&DAT_06008000 + iVar1) = 0x3ff;
    *(ushort *)(iVar1 + 0x600a000) = uVar5;
  }
  return;
}

