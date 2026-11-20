// Analysis annotation
// Role — transfer rtc command and response
// Basis — reviewed
// Clocks a command and optional response through the RTC serial interface.

// rea decompile_all
// name: FUN_038010c8
// address: 0x38010c8
// body: available
// range: 0x38010c8-0x38011a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_038010c8(byte *param_1,int param_2,undefined1 *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  DAT_04000138 = 0x73;
  FUN_03801784(0x30);
  DAT_04000138 = 0x77;
  FUN_03801784(0x30);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = (uint)*param_1;
    param_1 = param_1 + 1;
    iVar3 = 0;
    do {
      bVar1 = (byte)(uVar2 >> 7);
      DAT_04000138 = bVar1 | 0x74;
      FUN_03801784(0x30);
      DAT_04000138 = bVar1 | 0x76;
      FUN_03801784(0x30);
      iVar3 = iVar3 + 1;
      uVar2 = (uVar2 & 0x7f) << 1;
    } while (iVar3 != 8);
  }
  if (param_4 != 0) {
    while( true ) {
      uVar2 = 0;
      uVar4 = 0;
      do {
        DAT_04000138 = 100;
        FUN_03801784(0x30);
        DAT_04000138 = 0x66;
        FUN_03801784(0x30);
        if ((DAT_04000138 & 1) != 0) {
          uVar4 = 1 << (uVar2 & 0xff) & 0xffU | uVar4;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != 8);
      *param_3 = (char)uVar4;
      param_4 = param_4 + -1;
      if (param_4 == 0) break;
      param_3 = param_3 + 1;
    }
  }
  DAT_04000138 = 0x62;
  FUN_03801784(0x30);
  return in_lr;
}

