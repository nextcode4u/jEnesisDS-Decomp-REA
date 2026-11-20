// Analysis annotation
// Role — fat m3sd writesectors
// Basis — library match
// Matches symbol _M3SD_writeSectors in libfat-nds 20070127 (io_m3sd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0207365c
// address: 0x207365c
// body: available
// range: 0x207365c-0x20737af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0207365c(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  int local_3c;
  byte local_36 [8];
  byte abStack_2e [3];
  byte local_2b;
  
  local_3c = param_1 << 9;
  FUN_02074b88(param_3,0x200,local_36);
  while( true ) {
    bVar5 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar5) {
      return 1;
    }
    FUN_02073290(0x18,local_3c);
    cVar2 = FUN_02073344(abStack_2e,6);
    if (cVar2 == '\0') break;
    _DAT_08800000 = 4;
    _DAT_09800000 = 0;
    do {
      FUN_020734c4();
    } while ((_DAT_09000000 & 0x100) == 0);
    _DAT_09000000 = 0;
    FUN_020734b4();
    iVar4 = 0;
    pbVar3 = param_3;
    do {
      bVar1 = *pbVar3;
      iVar4 = iVar4 + 1;
      _DAT_09000000 = (ushort)(bVar1 >> 4);
      FUN_020734b4();
      _DAT_09000000 = (ushort)bVar1;
      pbVar3 = pbVar3 + 1;
      FUN_020734b4();
    } while (iVar4 != 0x200);
    pbVar3 = local_36;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      _DAT_09000000 = (ushort)(bVar1 >> 4);
      FUN_020734b4();
      _DAT_09000000 = (ushort)bVar1;
      FUN_020734b4();
    } while (abStack_2e != pbVar3);
    iVar4 = 0;
    do {
      _DAT_09000000 = 0xff;
      iVar4 = iVar4 + 1;
      FUN_020734b4();
    } while (iVar4 != 0x20);
    do {
      FUN_020734c4();
    } while ((_DAT_09000000 & 0x100) == 0);
    if (param_2 != 0) {
      local_3c = local_3c + 0x200;
      param_3 = param_3 + 0x200;
      FUN_02074b88(param_3,0x200,local_36);
    }
    local_2b = 0;
    FUN_02073290(0xd,DAT_020b4c6c);
    FUN_02073344(abStack_2e,6);
    iVar4 = 2999;
    while ((local_2b & 0x1f) != 9) {
      FUN_02073290(0xd,DAT_020b4c6c);
      iVar4 = iVar4 + -1;
      FUN_02073344(abStack_2e,6);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  return 0;
}

