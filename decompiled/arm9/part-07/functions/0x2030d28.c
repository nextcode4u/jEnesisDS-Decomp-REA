// rea decompile_all
// name: m68k_dispatch_02030d28
// address: 0x2030d28
// body: available
// range: 0x2030d28-0x2030e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_02030d28(void)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar5 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar5;
  iVar4 = unaff_r8;
  if ((uVar1 & 0xc00000) == 0) {
    iVar4 = *(int *)(unaff_r6 + 0x60);
  }
  if ((unaff_r11 & 7) == 7) {
    uVar1 = uVar1 - 2;
  }
  else {
    uVar1 = uVar1 - 1;
  }
  *puVar5 = uVar1;
  if ((uVar1 & 0xc00000) == 0) {
    uVar1 = uVar1 & 0x3fffff;
  }
  else {
    uVar1 = uVar1 & 0xffff;
  }
  uVar1 = (uint)*(byte *)(iVar4 + uVar1 ^ 1);
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (puVar5 == (uint *)0xe00) {
    uVar2 = *puVar5 - 2;
  }
  else {
    uVar2 = *puVar5 - 1;
  }
  *puVar5 = uVar2;
  pbVar3 = (byte *)(unaff_r8 + (uVar2 & 0xffff) ^ 1);
  uVar2 = (uint)*pbVar3;
  uVar6 = (uVar2 & 0xf) + (uVar1 & 0xf);
  if ((unaff_r7 & 0x10) != 0) {
    uVar6 = uVar6 + 1;
  }
  if (9 < uVar6) {
    uVar6 = uVar6 + 6;
  }
  uVar1 = uVar6 + (uVar1 & 0xf0) + (uVar2 & 0xf0);
  if (0x99 < uVar1) {
    uVar1 = uVar1 - 0xa0;
  }
  *pbVar3 = (byte)uVar1;
                    /* WARNING: Could not recover jumptable at 0x02030e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

