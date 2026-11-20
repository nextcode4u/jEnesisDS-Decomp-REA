// Analysis annotation
// Role — graphics iterate and store values
// Basis — pseudocode clue
// The pseudocode shows an iteration that stores values through a pointer. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_02008270
// address: 0x2008270
// body: available
// range: 0x2008270-0x2008317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02008270(ushort *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  
  if (param_2 < 0x1001) {
    iVar6 = param_2 + param_3;
    do {
      uVar4 = *param_1;
      uVar5 = FUN_020074b8(uVar4 & 0x7ff,2);
      uVar3 = (param_2 & 0x1ffff) >> 1;
      iVar1 = uVar3 * 2;
      uVar5 = (uVar5 | (ushort)((uVar4 & 0x7800) >> 1)) ^ 0x400;
      iVar2 = uVar3 * 2;
      if ((uVar4 & 0x8000) == 0) {
        *(ushort *)(&DAT_06008000 + iVar2) = uVar5;
        *(undefined2 *)(iVar2 + 0x600a000) = 0x3ff;
      }
      else {
        *(ushort *)(iVar1 + 0x600a000) = uVar5;
        *(undefined2 *)(&DAT_06008000 + iVar1) = 0x3ff;
      }
      iVar6 = iVar6 + param_3;
      param_4 = param_4 + -1;
      param_2 = param_2 + param_3;
    } while ((param_4 != 0) && (param_1 = param_1 + 1, (uint)(iVar6 - param_3) < 0x1001));
  }
  return;
}

