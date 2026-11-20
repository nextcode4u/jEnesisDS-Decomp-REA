// Analysis annotation
// Role — m68k sbcd
// Basis — dispatch table
// Reached by 384 M68000 opcode-table slots. Decoded forms include unrecognized opcode
// (320), sbcd (64). Example opcode words are 0x8008, 0x8009, 0x800A, 0x800B, 0x800C.

// rea decompile_all
// name: m68k_dispatch_02030e90
// address: 0x2030e90
// body: available
// range: 0x2030e90-0x2030f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02030e90(void)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar6 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar6;
  iVar5 = unaff_r8;
  if ((uVar2 & 0xc00000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x60);
  }
  if ((unaff_r11 & 7) == 7) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar6 = uVar2;
  if ((uVar2 & 0xc00000) == 0) {
    uVar2 = uVar2 & 0x3fffff;
  }
  else {
    uVar2 = uVar2 & 0xffff;
  }
  uVar1 = (ushort)*(byte *)(iVar5 + uVar2 ^ 1);
  puVar6 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar6;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar6 = uVar2;
  pbVar4 = (byte *)(unaff_r8 + (uVar2 & 0xffff) ^ 1);
  uVar3 = (ushort)*pbVar4;
  uVar7 = (uVar3 & 0xf) - (uVar1 & 0xf);
  if ((unaff_r7 & 0x10) != 0) {
    uVar7 = uVar7 - 1;
  }
  if (9 < (uVar7 & 0xff)) {
    uVar7 = uVar7 - 6;
  }
  uVar7 = uVar7 + ((uVar3 & 0xf0) - (uVar1 & 0xf0));
  if (0x99 < uVar7) {
    uVar7 = uVar7 + 0xa0;
  }
  *pbVar4 = (byte)uVar7;
                    /* WARNING: Could not recover jumptable at 0x02030f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

