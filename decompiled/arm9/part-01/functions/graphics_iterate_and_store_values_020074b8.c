// Analysis annotation
// Role — graphics iterate and store values
// Basis — pseudocode clue
// The pseudocode shows an iteration that stores values through a pointer. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_020074b8
// address: 0x20074b8
// body: available
// range: 0x20074b8-0x200758f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_020074b8(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = param_1 + param_2 * 0x800;
  uVar1 = (&DAT_020993cc)[iVar5];
  if ((uVar1 & 0x8000) == 0) {
    uVar3 = (uint)(ushort)(&DAT_0209c3cc)[param_2];
    if (0x3fe < uVar3) {
      uVar3 = 1;
      (&DAT_0209c3d4)[param_2] = 1;
      (&DAT_0209c3cc)[param_2] = 1;
    }
    uVar7 = uVar3 | uVar1 | 0x8000;
    uVar1 = (ushort)uVar7;
    (&DAT_0209c3cc)[param_2] = (short)uVar3 + 1;
    (&DAT_020993cc)[iVar5] = uVar1 & 0xdfff;
    iVar2 = DAT_0b003648;
    if ((uVar7 & 0x4000) != 0) {
      iVar4 = *(int *)(&DAT_0208e590 + param_2 * 4);
      (&DAT_020993cc)[iVar5] = uVar1 & 0x9fff;
      uVar7 = 0;
      do {
        iVar5 = uVar7 * 2;
        uVar6 = uVar7 ^ 1;
        uVar7 = uVar7 + 1;
        *(undefined2 *)(uVar6 * 2 + iVar4 + uVar3 * 0x20) =
             *(undefined2 *)(iVar5 + iVar2 + param_1 * 0x20);
      } while (uVar7 != 0x10);
    }
  }
  else {
    uVar3 = uVar1 & 0x3ff;
  }
  return uVar3;
}

