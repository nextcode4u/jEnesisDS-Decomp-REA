// rea decompile_all
// name: FUN_020054d4
// address: 0x20054d4
// body: available
// range: 0x20054d4-0x2005773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020054d4(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar6 = 0;
  do {
    *(undefined1 *)(param_1 + iVar6 * 4) = 0;
    iVar8 = param_1 + iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar8 + 0x20) = 0;
    *(undefined1 *)(iVar8 + 1) = 0;
    *(undefined1 *)(iVar8 + 2) = 0;
    *(undefined1 *)(iVar8 + 3) = 0;
    *(undefined1 *)(iVar8 + 0x23) = 0;
    *(undefined1 *)(iVar8 + 0x21) = 0;
    *(undefined1 *)(iVar8 + 0x22) = 0;
  } while (iVar6 != 8);
  uVar4 = (**(code **)(param_1 + 0x70))(0);
  uVar1 = (undefined1)((uint)uVar4 >> 0x18);
  *(undefined1 *)(param_1 + 0x3f) = uVar1;
  *(undefined1 *)(param_1 + 0x4b) = uVar1;
  *(char *)(param_1 + 0x3c) = (char)uVar4;
  uVar1 = (undefined1)((uint)uVar4 >> 8);
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  uVar2 = (undefined1)((uint)uVar4 >> 0x10);
  *(undefined1 *)(param_1 + 0x3e) = uVar2;
  *(char *)(param_1 + 0x48) = (char)uVar4;
  *(undefined1 *)(param_1 + 0x49) = uVar1;
  *(undefined1 *)(param_1 + 0x4a) = uVar2;
  uVar4 = (**(code **)(param_1 + 0x70))(4);
  *(char *)(param_1 + 0x45) = (char)((uint)uVar4 >> 8);
  *(char *)(param_1 + 0x46) = (char)((uint)uVar4 >> 0x10);
  *(char *)(param_1 + 0x47) = (char)((uint)uVar4 >> 0x18);
  *(undefined1 *)(param_1 + 0x51) = 0x27;
  *(char *)(param_1 + 0x44) = (char)uVar4;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  uVar4 = FUN_02003ca4();
  *(char *)(param_1 + 0x61) = (char)((uint)uVar4 >> 8);
  *(char *)(param_1 + 0x62) = (char)((uint)uVar4 >> 0x10);
  *(char *)(param_1 + 99) = (char)((uint)uVar4 >> 0x18);
  *(char *)(param_1 + 0x60) = (char)uVar4;
  uVar4 = FUN_02003cb0();
  uVar3 = (undefined1)((uint)uVar4 >> 0x10);
  *(char *)(param_1 + 0x58) = (char)uVar4;
  uVar1 = (undefined1)((uint)uVar4 >> 8);
  *(undefined1 *)(param_1 + 0x59) = uVar1;
  *(undefined1 *)(param_1 + 0x5a) = uVar3;
  uVar2 = (undefined1)((uint)uVar4 >> 0x18);
  *(undefined1 *)(param_1 + 0x5b) = uVar2;
  *(char *)(param_1 + 100) = (char)uVar4;
  *(undefined1 *)(param_1 + 0x65) = uVar1;
  *(undefined1 *)(param_1 + 0x66) = uVar3;
  *(undefined1 *)(param_1 + 0x67) = uVar2;
  piVar5 = (int *)(**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x44));
  DAT_02099044 = piVar5;
  *(char *)(param_1 + 0x54) = (char)*piVar5;
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)((int)piVar5 + 1);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)((int)piVar5 + 2);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)((int)piVar5 + 3);
  uVar7 = CONCAT13(*(undefined1 *)(param_1 + 0x47),
                   CONCAT12(*(undefined1 *)(param_1 + 0x46),
                            CONCAT11(*(undefined1 *)(param_1 + 0x45),*(undefined1 *)(param_1 + 0x44)
                                    )));
  uVar9 = uVar7 & ~piVar5[1];
  *(char *)(param_1 + 0x9e) = (char)(uVar9 >> 0x10);
  *(char *)(param_1 + 0x9c) = (char)uVar9;
  *(char *)(param_1 + 0x9d) = (char)(uVar9 >> 8);
  *(char *)(param_1 + 0x9f) = (char)(uVar9 >> 0x18);
  uVar7 = uVar7 & piVar5[1];
  *(char *)(param_1 + 0x46) = (char)(uVar7 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)uVar7;
  *(char *)(param_1 + 0x45) = (char)(uVar7 >> 8);
  *(char *)(param_1 + 0x47) = (char)(uVar7 >> 0x18);
  iVar6 = uVar7 + *piVar5;
  *(char *)(param_1 + 0x47) = (char)((uint)iVar6 >> 0x18);
  *(char *)(param_1 + 0x45) = (char)((uint)iVar6 >> 8);
  *(char *)(param_1 + 0x46) = (char)((uint)iVar6 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)iVar6;
  DAT_02099040 = 0;
  DAT_0209903c = 0;
  return;
}

