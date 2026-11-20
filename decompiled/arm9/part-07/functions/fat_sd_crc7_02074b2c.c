// Analysis annotation
// Role — fat sd crc7
// Basis — library match
// Matches symbol _SD_CRC7 in libfat-nds 20070127 (io_sd_common.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_02074b2c
// address: 0x2074b2c
// body: available
// range: 0x2074b2c-0x2074b85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_02074b2c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    uVar1 = 1;
  }
  else {
    iVar4 = 0;
    uVar1 = 0;
    do {
      uVar2 = (uint)*(byte *)(iVar4 + param_1);
      iVar3 = 0;
      while( true ) {
        uVar1 = (uVar1 & 0x7f) * 2;
        if ((uVar2 & 0x80) != (uVar1 & 0x80)) {
          uVar1 = uVar1 ^ 9;
        }
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) break;
        uVar2 = (uVar2 & 0x7f) << 1;
      }
      iVar4 = iVar4 + 1;
    } while (param_2 != iVar4);
    uVar1 = (uVar1 & 0x7f) << 1 | 1;
  }
  return uVar1;
}

