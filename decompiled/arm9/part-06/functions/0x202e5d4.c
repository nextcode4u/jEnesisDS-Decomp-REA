// rea decompile_all
// name: m68k_dispatch_0202e5d4
// address: 0x202e5d4
// body: available
// range: 0x202e5d4-0x202e653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_0202e5d4(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar5;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
          (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xc00000) == 0) {
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
    uVar4 = 0xffc00000;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = uVar2 & uVar4;
  puVar5 = (ushort *)(unaff_r8 + (uVar2 & ~uVar4));
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  iVar3 = unaff_r7 + -0xe0000;
  if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0202e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*puVar5 * 4))();
    return iVar3;
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar5;
  return iVar3 >> 0x10;
}

