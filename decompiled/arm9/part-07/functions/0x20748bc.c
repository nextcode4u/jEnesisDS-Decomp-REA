// rea decompile_all
// name: FUN_020748bc
// address: 0x20748bc
// body: available
// range: 0x20748bc-0x2074925 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020748bc(byte param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  byte local_16 [6];
  byte abStack_10 [4];
  
  pbVar3 = local_16;
  local_16[0] = param_1 | 0x40;
  local_16[1] = (byte)((uint)param_2 >> 0x18);
  local_16[2] = (byte)((uint)param_2 >> 0x10);
  local_16[4] = (byte)param_2;
  local_16[3] = (byte)((uint)param_2 >> 8);
  local_16[5] = FUN_02074b2c(pbVar3,5);
  iVar4 = 500000;
  do {
    if ((_DAT_09800000 & 1) != 0) {
      if (iVar4 == 0) {
        return 0;
      }
      do {
        bVar1 = *pbVar3;
        iVar4 = 7;
        pbVar3 = pbVar3 + 1;
        uVar2 = (ushort)bVar1;
        do {
          _DAT_09800000 = uVar2;
          bVar5 = iVar4 != 0;
          iVar4 = iVar4 + -1;
          uVar2 = _DAT_09800000 << 1;
        } while (bVar5);
      } while (abStack_10 != pbVar3);
      return 1;
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

