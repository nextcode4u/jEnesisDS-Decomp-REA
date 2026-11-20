// Analysis annotation
// Role — fat sd crc16
// Basis — library match
// Matches symbol _SD_CRC16 in libfat-nds 20070127 (io_sd_common.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02074b88
// address: 0x2074b88
// body: available
// range: 0x2074b88-0x2074c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02074b88(byte *param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_2 = param_2 << 3;
  uVar2 = 0;
  uVar1 = 0x80808080;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar6 = 0;
  do {
    if ((int)(uVar1 << 0x18) < 0) {
      uVar6 = (uint)*param_1;
      param_1 = param_1 + 1;
    }
    uVar5 = uVar5 << 1;
    if ((uVar5 & 0x10000) != 0) {
      uVar5 = uVar5 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x18) != 0) {
      uVar5 = uVar5 ^ 0x1021;
    }
    uVar4 = uVar4 << 1;
    if ((uVar4 & 0x10000) != 0) {
      uVar4 = uVar4 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x19) != 0) {
      uVar4 = uVar4 ^ 0x1021;
    }
    uVar3 = uVar3 << 1;
    if ((uVar3 & 0x10000) != 0) {
      uVar3 = uVar3 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x1a) != 0) {
      uVar3 = uVar3 ^ 0x1021;
    }
    uVar2 = uVar2 << 1;
    if ((uVar2 & 0x10000) != 0) {
      uVar2 = uVar2 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x1b) != 0) {
      uVar2 = uVar2 ^ 0x1021;
    }
    param_2 = param_2 + -4;
    uVar1 = uVar1 >> 4 | uVar1 << 0x1c;
  } while (param_2 != 0);
  uVar6 = 0x10;
  while( true ) {
    uVar1 = uVar1 << 4;
    if ((uVar5 & 0x8000) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((uVar4 & 0x8000) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((uVar3 & 0x8000) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((uVar2 & 0x8000) != 0) {
      uVar1 = uVar1 | 1;
    }
    uVar6 = uVar6 - 1;
    if ((uVar6 & 1) == 0) {
      *param_3 = (char)uVar1;
      param_3 = param_3 + 1;
    }
    if (uVar6 == 0) break;
    uVar5 = uVar5 << 1;
    uVar4 = uVar4 << 1;
    uVar3 = uVar3 << 1;
    uVar2 = uVar2 << 1;
  }
  return;
}

