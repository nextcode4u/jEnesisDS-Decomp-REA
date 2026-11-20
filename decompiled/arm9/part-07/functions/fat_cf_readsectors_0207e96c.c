// Analysis annotation
// Role — fat cf readsectors
// Basis — library match
// Matches symbol _CF_readSectors in libfat-nds 20070127 (io_cf_common.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0207e96c
// address: 0x207e96c
// body: available
// range: 0x207e96c-0x207ea6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207e96c(undefined4 param_1,uint param_2,undefined2 *param_3)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  bool bVar8;
  
  if ((int)((uint)*DAT_020b4c84 << 0x18) < 0) {
    iVar3 = 0;
    do {
      if (-1 < (int)((uint)*DAT_020b4c84 << 0x18)) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 10000000);
  }
  if ((*DAT_020b4c80 & 0x50) == 0) {
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
      if ((*DAT_020b4c80 & 0x50) != 0) {
        if (iVar3 < 10000000) goto LAB_0207e9b8;
        break;
      }
    } while (iVar3 != 10000000);
LAB_0207ea42:
    uVar2 = 0;
  }
  else {
LAB_0207e9b8:
    if (param_2 < 0x100) {
      uVar6 = (undefined2)param_2;
    }
    else {
      uVar6 = 0;
    }
    *DAT_020b4c8c = uVar6;
    *DAT_020b4c90 = (ushort)param_1 & 0xff;
    *DAT_020b4c94 = (ushort)((uint)param_1 >> 8) & 0xff;
    *DAT_020b4c98 = (ushort)((uint)param_1 >> 0x10) & 0xff;
    puVar1 = DAT_020b4c84;
    *DAT_020b4c9c = (byte)((uint)param_1 >> 0x18) & 0xf | 0xe0;
    *puVar1 = 0x20;
    puVar7 = param_3;
    while (puVar4 = DAT_020b4c7c, bVar8 = param_2 != 0, param_2 = param_2 - 1, bVar8) {
      if ((*DAT_020b4c80 & 0xff) != 0x58) {
        iVar3 = 0;
        while (iVar3 = iVar3 + 1, (*DAT_020b4c80 & 0xff) != 0x58) {
          if (iVar3 == 10000000) goto LAB_0207ea42;
        }
        if (9999999 < iVar3) goto LAB_0207ea42;
      }
      if ((int)param_3 << 0x1f < 0) {
        iVar3 = 0xff;
        puVar4 = param_3;
        do {
          uVar6 = *DAT_020b4c7c;
          *(char *)puVar4 = (char)uVar6;
          *(char *)((int)puVar4 + 1) = (char)((ushort)uVar6 >> 8);
          puVar4 = puVar4 + 1;
          bVar8 = iVar3 != 0;
          iVar3 = iVar3 + -1;
        } while (bVar8);
        param_3 = param_3 + 0x100;
      }
      else {
        iVar3 = 0xff;
        puVar5 = puVar7;
        do {
          *puVar5 = *puVar4;
          puVar5 = puVar5 + 1;
          bVar8 = iVar3 != 0;
          iVar3 = iVar3 + -1;
        } while (bVar8);
        puVar7 = puVar7 + 0x100;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

