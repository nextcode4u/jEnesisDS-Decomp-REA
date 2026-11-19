// rea decompile_all
// name: FUN_02000568
// address: 0x2000568
// body: available
// range: 0x2000568-0x2000583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000568(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  bool bVar8;
  bool bVar9;
  
  FUN_0200b284();
  iVar2 = DAT_0b000110;
  iVar4 = DAT_0b0000f4;
  puVar3 = _DAT_0b0000f0;
  _DAT_0b000140 = _DAT_0b000140 + param_1;
  if (DAT_0b00014d != '\0') {
    uVar5 = (uint)DAT_0b00014c;
    uVar6 = DAT_0b0000fc >> 8 & 7;
    bVar9 = SBORROW4(uVar5,6);
    iVar1 = uVar5 - 6;
    bVar8 = uVar5 == 6;
    if (uVar5 < 7) {
      bVar9 = SBORROW4(uVar5,uVar6);
      iVar1 = uVar5 - uVar6;
      bVar8 = uVar5 == uVar6;
    }
    if (!bVar8 && iVar1 < 0 == bVar9) {
      uVar6 = DAT_0b0000fc | DAT_0b0000f8;
      if ((uVar6 & 0x2000) == 0) {
        DAT_0b0000f4 = DAT_0b0000e8;
        DAT_0b0000e8 = iVar4;
      }
      DAT_0b0000e8 = DAT_0b0000e8 - 6;
      DAT_0b0000fc = uVar5 << 8 | 0x2000;
      puVar7 = (undefined2 *)(DAT_0b000110 + (DAT_0b0000e8 & 0xffff));
      *puVar7 = (short)uVar6;
      _DAT_0b000148 = (int)puVar3 - _DAT_0b000100 | _DAT_0b000148;
      puVar7[1] = (short)(_DAT_0b000148 >> 0x10);
      puVar7[2] = (short)_DAT_0b000148;
      _DAT_0b000148 = *(int *)(DAT_0b00010c + (uVar5 + 0x18) * 4) << 0x10;
      if ((_DAT_0b000148 & 0xc00000) == 0) {
        uVar5 = 0xffc00000;
        iVar2 = DAT_0b00010c;
      }
      else {
        uVar5 = 0xffff0000;
      }
      _DAT_0b000148 = _DAT_0b000148 & uVar5;
      DAT_0b00014d = 0;
      DAT_0b00014e = 0;
      DAT_0b00014f = 0;
      _DAT_0b000100 = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0100306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0b000130)();
      return;
    }
  }
  if (DAT_0b00014e == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01003080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_010030ac + (uint)*_DAT_0b0000f0 * 4))();
    return;
  }
  DAT_0b0000f8 = DAT_0b0000f8 & 0x1f | 0xfffa0000;
  return;
}

