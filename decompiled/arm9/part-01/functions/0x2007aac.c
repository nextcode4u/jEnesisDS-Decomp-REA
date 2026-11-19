// rea decompile_all
// name: FUN_02007aac
// address: 0x2007aac
// body: available
// range: 0x2007aac-0x2007b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02007aac(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  
  uVar1 = FUN_020074b8(param_2 & 0x7ff,2);
  uVar2 = param_1 >> 1 & 0x3f;
  uVar4 = uVar2 + (param_1 >> 7) * 0x20 & 0xffff;
  puVar3 = (undefined1 *)((uVar4 + 0x3e0) * 0x10000);
  if (0x1f < uVar2) {
    uVar4 = uVar4 + 0x3e0 & 0xffff;
  }
  bVar5 = (param_2 & 0x8000) == 0;
  if (bVar5) {
    puVar3 = &DAT_06008000;
  }
  uVar1 = (uVar1 | (ushort)((param_2 & 0x7800) >> 1)) ^ 0x400;
  if (bVar5) {
    *(ushort *)(puVar3 + uVar4 * 2) = uVar1;
    *(undefined2 *)(puVar3 + uVar4 * 2 + 0x2000) = 0x3ff;
  }
  else {
    *(undefined2 *)(&DAT_06008000 + uVar4 * 2) = 0x3ff;
    *(ushort *)(uVar4 * 2 + 0x600a000) = uVar1;
  }
  return;
}

