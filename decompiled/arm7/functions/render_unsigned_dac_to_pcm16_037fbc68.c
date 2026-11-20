// Analysis annotation
// Role — render unsigned dac to pcm16
// Basis — reviewed
// Converts unsigned 8-bit DAC bytes into signed 16-bit output using a fixed-point sample
// cursor.

// rea decompile_all
// name: FUN_037fbc68
// address: 0x37fbc68
// body: available
// range: 0x37fbc68-0x37fbcf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_037fbc68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_0380b880;
  if (param_2 != 0) {
    sVar3 = (*(byte *)((int)&DAT_0380b8a4 + DAT_0380b878) - 0x80) * 0x40;
    iVar5 = 0;
    iVar4 = DAT_0380b878;
    do {
      DAT_0380b87c = DAT_0380b87c + iVar2;
      iVar1 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *(short *)(iVar1 + param_1) = sVar3;
      DAT_0380b878 = iVar4;
      if (0xffff < DAT_0380b87c) {
        DAT_0380b878 = iVar4 + 1;
        sVar3 = (*(byte *)((int)&DAT_0380b8a4 + iVar4 + 1) - 0x80) * 0x40;
        DAT_0380b87c = DAT_0380b87c - 0x10000;
      }
      iVar4 = DAT_0380b878;
    } while (param_2 != iVar5);
  }
  return;
}

