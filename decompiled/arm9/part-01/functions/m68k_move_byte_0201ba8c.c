// Analysis annotation
// Role — m68k move byte
// Basis — dispatch table
// Reached by 1 M68000 opcode-table slot. Decoded forms include move byte (1). Example
// opcode words are 0x11FB.

// rea decompile_all
// name: m68k_dispatch_0201ba8c
// address: 0x201ba8c
// body: available
// range: 0x201ba8c-0x201baf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0201ba8c(void)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  
  piVar1 = (int *)(unaff_r6 + 0x54);
  puVar2 = (uint *)(unaff_r6 + 0x9c);
  uVar3 = *unaff_r10;
  if ((uVar3 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar5 = (uVar3 & 0x7000) >> 10;
  if ((uVar3 & 0x800) == 0) {
    iVar6 = (int)*(short *)(unaff_r6 + uVar5);
  }
  else {
    iVar6 = *(int *)(unaff_r6 + uVar5);
  }
  uVar4 = FUN_0100408c(((int)unaff_r10 - *piVar1 | *puVar2) + (int)(char)uVar3 + iVar6);
  uVar5 = (uint)(short)unaff_r10[1];
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = uVar4;
  return;
}

