// rea decompile_all
// name: FUN_0207f4f0
// address: 0x207f4f0
// body: available
// range: 0x207f4f0-0x207f5a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0207f4f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_3 = *(undefined4 *)*param_1;
  uVar1 = FUN_0207ed1c(param_2);
  param_3[1] = uVar1;
  if ((int)((uint)*(byte *)(param_2 + 0xb) << 0x1b) < 0) {
    uVar2 = 0x4124;
  }
  else {
    uVar2 = 0x8124;
  }
  if ((int)((uint)*(byte *)(param_2 + 0xb) << 0x1f) < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x92;
  }
  param_3[2] = uVar3 | uVar2;
  *(undefined2 *)(param_3 + 3) = 1;
  *(undefined2 *)((int)param_3 + 0xe) = 1;
  *(undefined2 *)(param_3 + 4) = 2;
  param_3[5] = *param_3;
  param_3[6] = (uint)*(ushort *)(param_2 + 0x1c) |
               (uint)*(byte *)(param_2 + 0x1e) << 0x10 | (uint)*(byte *)(param_2 + 0x1f) << 0x18;
  uVar1 = FUN_0207e898(0,*(undefined2 *)(param_2 + 0x12));
  param_3[7] = uVar1;
  param_3[8] = 0;
  uVar1 = FUN_0207e898(*(undefined2 *)(param_2 + 0x16),*(undefined2 *)(param_2 + 0x18));
  param_3[10] = 0;
  param_3[9] = uVar1;
  uVar1 = FUN_0207e898(*(undefined2 *)(param_2 + 0xe),*(undefined2 *)(param_2 + 0x10));
  param_3[0xb] = uVar1;
  param_3[0xc] = 0;
  param_3[0xd] = 0x200;
  iVar4 = param_3[6] + 0x1ff;
  if (iVar4 < 0) {
    iVar4 = param_3[6] + 0x3fe;
  }
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0xe] = iVar4 >> 9;
  return;
}

