// Analysis annotation
// Role — fat sd initcard
// Basis — library match
// Matches symbol _SD_InitCard in libfat-nds 20070127 (io_sd_common.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02074c84
// address: 0x2074c84
// body: available
// range: 0x2074c84-0x2074d81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02074c84(code *param_1,code *param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  
  thunk_FUN_02083058(&local_31,0,0x11);
  iVar2 = 0;
  while( true ) {
    (*param_1)(&local_31,0x37,0);
    if (local_31 != '7') {
      return 0;
    }
    iVar1 = (*param_1)(&local_31,0x29,0x30000);
    if ((iVar1 != 0) && ((char)local_30 < '\0')) break;
    iVar2 = iVar2 + 1;
    if (iVar2 == 1000) {
      return 0;
    }
  }
  (*param_2)(&local_31,2,0);
  iVar2 = 0;
  do {
    (*param_1)(&local_31,3,0);
    uVar3 = (uint)local_30 * 0x1000000 | (uint)local_2f << 0x10;
    *param_4 = uVar3;
    if ((local_2e & 0x1e) != 6) {
      (*param_2)(&local_31,9,uVar3);
      (*param_1)(&local_31,7,*param_4);
      if (param_3 != 0) {
        (*param_1)(&local_31,0x37,*param_4);
        (*param_1)(&local_31,6,2);
      }
      (*param_1)(&local_31,0x10,0x200);
      iVar2 = 0;
      while ((iVar1 = (*param_1)(&local_31,0xd,*param_4), iVar1 == 0 && ((local_2e & 0x1f) != 9))) {
        iVar2 = iVar2 + 1;
        if (iVar2 == 0x100) {
          return 0;
        }
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1000);
  return 0;
}

