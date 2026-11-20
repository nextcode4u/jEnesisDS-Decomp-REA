// Analysis annotation
// Role — fat m3sd readdata
// Basis — library match
// Matches symbol _M3SD_readData in libfat-nds 20070127 (io_m3sd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02073424
// address: 0x2073424
// body: available
// range: 0x2073424-0x20734af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073424(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = 0;
  do {
    if ((_DAT_09800000 & 0x40) != 0) {
      _DAT_08800000 = 8;
      _DAT_09800000 = 4;
      if ((int)param_1 << 0x1f < 0) {
        iVar2 = 0;
        do {
          uVar1 = _DAT_08800000;
          iVar2 = iVar2 + 2;
          *(char *)param_1 = (char)_DAT_08800000;
          *(char *)((int)param_1 + 1) = (char)((ushort)uVar1 >> 8);
          param_1 = param_1 + 1;
        } while (iVar2 != 0x200);
      }
      else {
        puVar3 = param_1 + 0x100;
        do {
          *param_1 = _DAT_08800000;
          param_1 = param_1 + 1;
        } while (puVar3 != param_1);
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 20000);
  _DAT_08800000 = 9;
  return 0;
}

