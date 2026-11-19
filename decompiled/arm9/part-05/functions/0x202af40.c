// rea decompile_all
// name: m68k_dispatch_0202af40
// address: 0x202af40
// body: available
// range: 0x202af40-0x202af9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0202af40(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
       (&DAT_020168b0)[(unaff_r11 >> 4 & 0xf0) + (unaff_r7 & 0xf)];
  return;
}

