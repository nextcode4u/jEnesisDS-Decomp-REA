// Analysis annotation
// Role — fat scsd readdata
// Basis — library match
// Matches symbol _SCSD_readData in libfat-nds 20070127 (io_scsd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02074818
// address: 0x2074818
// body: available
// range: 0x2074818-0x20748a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02074818(undefined2 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = 500000;
  do {
    if ((_DAT_09100000 & 0x100) == 0) {
      if (iVar3 == 0) {
        return 0;
      }
      if ((int)param_1 << 0x1f < 0) {
        iVar3 = 0;
        do {
          uVar1 = _DAT_09100000;
          iVar3 = iVar3 + 2;
          *(char *)param_1 = (char)(_DAT_09100000 >> 0x10);
          *(char *)((int)param_1 + 1) = (char)(uVar1 >> 0x18);
          param_1 = param_1 + 1;
        } while (iVar3 != 0x200);
      }
      else {
        puVar2 = param_1 + 0x100;
        do {
          *param_1 = (short)(_DAT_09100000 >> 0x10);
          param_1 = param_1 + 1;
        } while (param_1 != puVar2);
      }
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 != 8);
      return 1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

