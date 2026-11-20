// Analysis annotation
// Role — apply psg latch and data bytes
// Basis — reviewed
// Decodes latched register writes and following data bytes into the tone, volume, and
// noise state.

// rea decompile_all
// name: FUN_037f8504
// address: 0x37f8504
// body: available
// range: 0x37f8504-0x37f8567 inclusive
// range: 0x37f8584-0x37f860f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_037f8504(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = 0;
  do {
    bVar1 = *(byte *)(iVar3 + param_1);
    uVar2 = (uint)bVar1;
    if ((bVar1 & 0x80) == 0) {
      if (((DAT_03806dcc & 1) == 0) && ((int)DAT_03806dcc < 5)) {
        (&DAT_03806dd8)[DAT_03806dcc] = (&DAT_03806dd8)[DAT_03806dcc] & 0xf | (uVar2 & 0x3f) << 4;
      }
      else {
        (&DAT_03806dd8)[DAT_03806dcc] = uVar2 & 0xf;
      }
    }
    else {
      DAT_03806dcc = bVar1 >> 4 & 7;
      (&DAT_03806dd8)[DAT_03806dcc] = (&DAT_03806dd8)[DAT_03806dcc] & 0x3f0 | uVar2 & 0xf;
    }
    switch(DAT_03806dcc) {
    case 0:
    case 2:
    case 4:
      if ((&DAT_03806dd8)[DAT_03806dcc] == 0) {
        (&DAT_03806dd8)[DAT_03806dcc] = 1;
      }
    default:
      iVar3 = iVar3 + 1;
      if (param_2 == iVar3) {
        return;
      }
      break;
    case 6:
      DAT_03806dd4 = 0x10 << (DAT_03806df0 & 3);
      iVar3 = iVar3 + 1;
      DAT_03806dd0 = 0x8000;
      if (param_2 == iVar3) {
        DAT_03806dd0 = 0x8000;
        return;
      }
    }
  } while( true );
}

