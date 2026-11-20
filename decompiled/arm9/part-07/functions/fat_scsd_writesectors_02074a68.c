// Analysis annotation
// Role — fat scsd writesectors
// Basis — library match
// Matches symbol _SCSD_writeSectors in libfat-nds 20070127 (io_scsd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02074a68
// address: 0x2074a68
// body: available
// range: 0x2074a68-0x2074b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02074a68(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_36 [8];
  undefined1 auStack_2e [3];
  byte local_2b;
  
  param_1 = param_1 << 9;
  while( true ) {
    bVar3 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar3) {
      return 1;
    }
    FUN_02074b88(param_3,0x200,auStack_36);
    FUN_020748bc(0x18,param_1);
    cVar1 = FUN_020747a4(auStack_2e,6);
    if ((cVar1 == '\0') || (iVar2 = thunk_FUN_0207cdc0(param_3,auStack_36), iVar2 == 0)) break;
    FUN_02074808(0x10);
    local_2b = 0;
    FUN_020748bc(0xd,DAT_020b4c78);
    FUN_020747a4(auStack_2e,6);
    iVar2 = 2999;
    while ((local_2b & 0x1f) != 9) {
      FUN_020748bc(0xd,DAT_020b4c78);
      iVar2 = iVar2 + -1;
      FUN_020747a4(auStack_2e,6);
      if (iVar2 == 0) {
        return 0;
      }
    }
    param_1 = param_1 + 0x200;
    param_3 = param_3 + 0x200;
  }
  return 0;
}

