// Analysis annotation
// Role — graphics iterate and store values
// Basis — pseudocode clue
// The pseudocode shows an iteration that stores values through a pointer. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_02007ce4
// address: 0x2007ce4
// body: available
// range: 0x2007ce4-0x2007dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02007ce4(ushort *param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar5 = DAT_023dde8c;
  do {
    while( true ) {
      uVar1 = param_2 >> 1;
      uVar4 = *param_1;
      if (*(char *)(iVar5 + (uVar1 & 0xffff)) != '\0') break;
LAB_02007d08:
      param_2 = param_2 + param_3;
      param_1 = param_1 + 1;
      if (param_4 <= param_2) {
        return;
      }
    }
    uVar6 = FUN_020074b8(uVar4 & 0x7ff,0);
    uVar2 = (uVar1 & 0xffff) >> 6;
    uVar8 = uVar4 & 0x7800;
    uVar7 = (uVar1 & 0x3f) + uVar2 * 0x20;
    uVar3 = uVar8 >> 1;
    if (0x1f < (uVar1 & 0x3f)) {
      uVar8 = (uVar7 + 0x3e0) * 0x10000;
      uVar7 = uVar7 + 0x3e0 & 0xffff;
    }
    if (0x1f < uVar2) {
      uVar8 = (uVar7 + 0x400) * 0x10000;
    }
    uVar6 = (uVar6 | (ushort)uVar3) ^ 0x400;
    if (0x1f < uVar2) {
      uVar7 = uVar8 >> 0x10;
    }
    if ((uVar4 & 0x8000) != 0) {
      *(ushort *)(uVar7 * 2 + 0x6004000) = uVar6;
      *(undefined2 *)(uVar7 * 2 + 0x6000000) = 0x3ff;
      goto LAB_02007d08;
    }
    *(ushort *)(uVar7 * 2 + 0x6000000) = uVar6;
    param_2 = param_2 + param_3;
    *(undefined2 *)(uVar7 * 2 + 0x6004000) = 0x3ff;
    param_1 = param_1 + 1;
    if (param_4 <= param_2) {
      return;
    }
  } while( true );
}

