// Analysis annotation
// Role — m68k movep long
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include movep long (64). Example
// opcode words are 0x01C8, 0x01C9, 0x01CA, 0x01CB, 0x01CC.

// rea decompile_all
// name: m68k_dispatch_0202ff38
// address: 0x202ff38
// body: available
// range: 0x202ff38-0x202ff97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0202ff38(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  FUN_01004144(iVar2,uVar1 >> 0x18);
  FUN_01004144(iVar2 + 2,uVar1 >> 0x10 & 0xff);
  FUN_01004144(iVar2 + 4,uVar1 >> 8 & 0xff);
  FUN_01004144(iVar2 + 6,uVar1 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x0202ff94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}

