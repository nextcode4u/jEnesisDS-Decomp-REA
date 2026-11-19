// rea decompile_all
// name: m68k_dispatch_020304fc
// address: 0x20304fc
// body: available
// range: 0x20304fc-0x20305e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_020304fc(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint *puVar6;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar6 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar3 = *puVar6;
  iVar4 = unaff_r8;
  if ((uVar3 & 0xc00000) == 0) {
    iVar4 = *(int *)(unaff_r6 + 0x60);
  }
  uVar3 = uVar3 - 4;
  *puVar6 = uVar3;
  if ((uVar3 & 0xc00000) == 0) {
    uVar3 = uVar3 & 0x3fffff;
  }
  else {
    uVar3 = uVar3 & 0xffff;
  }
  uVar1 = *(undefined2 *)(iVar4 + uVar3);
  uVar2 = ((undefined2 *)(iVar4 + uVar3))[1];
  puVar6 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar6 - 4;
  *puVar6 = uVar3;
  puVar5 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  iVar4 = CONCAT22(uVar1,uVar2);
  if ((unaff_r7 & 0x10) != 0) {
    iVar4 = iVar4 + 1 + CONCAT22(*puVar5,puVar5[1]);
    *puVar5 = (short)((uint)iVar4 >> 0x10);
    puVar5[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x020305e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  iVar4 = iVar4 + CONCAT22(*puVar5,puVar5[1]);
  *puVar5 = (short)((uint)iVar4 >> 0x10);
  puVar5[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x0203059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

