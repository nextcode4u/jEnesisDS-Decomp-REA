// Analysis annotation
// Role — graphics iterate and store values
// Basis — pseudocode clue
// The pseudocode shows an iteration that stores values through a pointer. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_02008174
// address: 0x2008174
// body: available
// range: 0x2008174-0x200825f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02008174(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = DAT_023dde90;
  do {
    while( true ) {
      uVar5 = param_2 >> 1;
      uVar1 = *param_1;
      if (*(char *)(iVar2 + (uVar5 & 0xffff)) != '\0') break;
LAB_02008198:
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar3 = FUN_020074b8(uVar1 & 0x7ff,1);
    uVar4 = uVar5 & 0x7f;
    uVar5 = uVar4 + ((uVar5 & 0xffff) >> 7) * 0x20;
    if (0x1f < uVar4) {
      uVar5 = uVar5 + 0x3e0;
    }
    if (0x3f < uVar4) {
      uVar5 = (uVar5 + 0x400) * 0x10000;
    }
    uVar3 = (uVar3 | (ushort)((uVar1 & 0x7800) >> 1)) ^ 0x400;
    if (0x3f < uVar4) {
      uVar5 = uVar5 >> 0x10;
    }
    if ((uVar1 & 0x8000) != 0) {
      *(ushort *)(uVar5 * 2 + 0x6006000) = uVar3;
      *(undefined2 *)(uVar5 * 2 + 0x6002000) = 0x3ff;
      goto LAB_02008198;
    }
    *(ushort *)(uVar5 * 2 + 0x6002000) = uVar3;
    param_2 = param_2 + param_3;
    *(undefined2 *)(uVar5 * 2 + 0x6006000) = 0x3ff;
    param_1 = param_1 + 1;
    if (param_4 <= param_2) {
      return;
    }
  } while( true );
}

