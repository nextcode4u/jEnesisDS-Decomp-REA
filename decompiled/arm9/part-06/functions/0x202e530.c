// rea decompile_all
// name: m68k_dispatch_0202e530
// address: 0x202e530
// body: available
// range: 0x202e530-0x202e57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202e530(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r7;
  int iVar4;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar5;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  if ((uVar1 & 0xc0) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar3 = 0xffc00000;
  }
  else {
    uVar3 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
  puVar5 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar4 = unaff_r7 + -0xc0000;
  if (iVar4 == 0 || unaff_r7 < 0xc0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar4;
    *(ushort **)(unaff_r6 + 0x44) = puVar5;
    return iVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202e578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(unaff_r9 + (uint)*puVar5 * 4))();
  return iVar4;
}

