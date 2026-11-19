// rea decompile_all
// name: m68k_dispatch_01003b20
// address: 0x1003b20
// body: available
// range: 0x1003b20-0x1003b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_01003b20(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r7;
  int iVar5;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar6;
  uint unaff_r11;
  
  uVar4 = *(uint *)(unaff_r6 + 0x3c);
  *(uint *)(unaff_r6 + 0x3c) = uVar4 + 4;
  puVar3 = (ushort *)(unaff_r8 + (uVar4 & 0xffff));
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  if ((uVar1 & 0xc0) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar4 = 0xffc00000;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar4;
  puVar6 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar4));
  iVar5 = unaff_r7 + -0x100000;
  puVar3 = puVar6;
  if (iVar5 != 0 && 0xfffff < unaff_r7) {
    puVar3 = puVar6 + 1;
    unaff_r11 = (uint)*puVar6;
  }
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
                    /* WARNING: Could not recover jumptable at 0x01003b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar5 == 0 || unaff_r7 < 0x100000) {
    *(int *)(unaff_r6 + 0x4c) = iVar5;
    *(ushort **)(unaff_r6 + 0x44) = puVar3;
    return iVar5 >> 0x10;
  }
  iVar5 = (**(code **)(unaff_r9 + unaff_r11 * 4))();
  return iVar5;
}

