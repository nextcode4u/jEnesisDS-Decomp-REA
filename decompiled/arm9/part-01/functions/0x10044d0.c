// rea decompile_all
// name: FUN_010044d0
// address: 0x10044d0
// body: available
// range: 0x10044d0-0x100452f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_010044d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *param_2 = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[8] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}

