// Analysis annotation
// Role — veneer to calibrate touch coordinates
// Basis — control flow
// Ghidra identifies a thunk to 0x03801360, annotated as calibrate touch coordinates.

// rea decompile_all
// name: thunk_FUN_03801360
// address: 0x37f8138
// body: available
// range: 0x37f8138-0x37f813f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 thunk_FUN_03801360(short *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 in_lr;
  
  if (DAT_0380bb0c == '\0') {
    uVar12 = (uint)DAT_027ffce2;
    uVar13 = (uint)DAT_027ffcdc;
    uVar1 = CONCAT11(DAT_027ffcdf,DAT_027ffcde);
    uVar2 = CONCAT11(DAT_027ffcd9,DAT_027ffcd8);
    iVar11 = thunk_FUN_038019ec((uVar12 - uVar13) * 0x80000,(uint)uVar1 - (uint)uVar2);
    uVar14 = (uint)DAT_027ffce3;
    uVar15 = (uint)DAT_027ffcdd;
    uVar3 = CONCAT11(DAT_027ffce1,DAT_027ffce0);
    uVar4 = CONCAT11(DAT_027ffcdb,DAT_027ffcda);
    DAT_0380bb10 = iVar11;
    DAT_0380bb14 = thunk_FUN_038019ec((uVar14 - uVar15) * 0x80000,(uint)uVar3 - (uint)uVar4);
    DAT_0380bb18 = (int)(((uint)uVar2 + (uint)uVar1) * iVar11 + (uVar13 + uVar12) * -0x80000) / 2;
    DAT_0380bb1c = (int)(DAT_0380bb14 * ((uint)uVar4 + (uint)uVar3) + (uVar15 + uVar14) * -0x80000)
                   / 2;
    DAT_0380bb0c = '\x01';
  }
  sVar5 = FUN_03801310(0xd0,5,0x1e);
  sVar6 = FUN_03801310(0x90,5,0x1e);
  iVar16 = (sVar5 * DAT_0380bb10 - DAT_0380bb18) + DAT_0380bb10 / 2;
  iVar11 = (sVar6 * DAT_0380bb14 - DAT_0380bb1c) + DAT_0380bb14 / 2;
  sVar9 = (short)(iVar11 >> 0x13);
  sVar7 = FUN_03801310(0xb4,5,0x1e);
  sVar10 = (short)(iVar16 >> 0x13);
  sVar8 = FUN_03801310(0xc4,5,0x1e);
  if ((iVar16 >> 0x13) * 0x10000 < 0) {
    sVar10 = 0;
  }
  if ((iVar11 >> 0x13) * 0x10000 < 0) {
    sVar9 = 0;
  }
  if (0xbf < sVar9) {
    sVar9 = 0xbf;
  }
  param_1[3] = sVar9;
  if (0xff < sVar10) {
    sVar10 = 0xff;
  }
  param_1[2] = sVar10;
  param_1[5] = sVar8;
  param_1[4] = sVar7;
  param_1[1] = sVar6;
  *param_1 = sVar5;
  return CONCAT44(in_lr,param_1);
}

