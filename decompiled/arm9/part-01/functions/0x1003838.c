// rea decompile_all
// name: m68k_dispatch_01003838
// address: 0x1003838
// body: available
// range: 0x1003838-0x1003877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int m68k_dispatch_01003838(void)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  iVar3 = *(ushort *)(unaff_r6 + 4) - 1;
  uVar2 = (undefined2)iVar3;
  if (iVar3 < 0) {
    *(undefined2 *)(unaff_r6 + 4) = uVar2;
    puVar4 = (ushort *)(unaff_r10 + 1);
    iVar3 = unaff_r7 + -0xe0000;
    if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  else {
    sVar1 = *unaff_r10;
    *(undefined2 *)(unaff_r6 + 4) = uVar2;
    puVar4 = (ushort *)((int)unaff_r10 + (int)sVar1);
    iVar3 = unaff_r7 + -0xa0000;
    if (iVar3 != 0 && 0x9ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0100385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar4;
  return iVar3 >> 0x10;
}

