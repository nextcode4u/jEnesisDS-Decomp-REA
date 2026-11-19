// rea decompile_all
// name: m68k_dispatch_020223a4
// address: 0x20223a4
// body: available
// range: 0x20223a4-0x2022417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_020223a4(void)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  
  piVar2 = (int *)(unaff_r6 + 0x54);
  puVar3 = (uint *)(unaff_r6 + 0x9c);
  uVar4 = *unaff_r10;
  if ((uVar4 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar4 & 0x7000) >> 10;
  if ((uVar4 & 0x800) == 0) {
    iVar5 = (int)*(short *)(unaff_r6 + uVar1);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + uVar1);
  }
  FUN_0100408c(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x02022414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}

