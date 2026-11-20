// Analysis annotation
// Role — fat cf writesectors
// Basis — library match
// Matches symbol _CF_writeSectors in libfat-nds 20070127 (io_cf_common.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0207ea78
// address: 0x207ea78
// body: available
// range: 0x207ea78-0x207eb85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207ea78(undefined4 param_1,uint param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  ushort *puVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  bool bVar8;
  
  if ((int)((uint)*DAT_020b4c84 << 0x18) < 0) {
    iVar5 = 0;
    do {
      if (-1 < (int)((uint)*DAT_020b4c84 << 0x18)) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 10000000);
  }
  if ((*DAT_020b4c80 & 0x50) == 0) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      if ((*DAT_020b4c80 & 0x50) != 0) {
        if (iVar5 < 10000000) goto LAB_0207eac6;
        break;
      }
    } while (iVar5 != 10000000);
LAB_0207eb5a:
    uVar3 = 0;
  }
  else {
LAB_0207eac6:
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
    puVar2 = DAT_020b4c84;
    *DAT_020b4c9c = (byte)((uint)param_1 >> 0x18) & 0xf | 0xe0;
    *puVar2 = 0x30;
    puVar2 = DAT_020b4c80;
    puVar1 = DAT_020b4c7c;
    puVar7 = param_3;
    while (bVar8 = param_2 != 0, param_2 = param_2 - 1, bVar8) {
      if ((*puVar2 & 0xff) != 0x58) {
        iVar5 = 0;
        while (iVar5 = iVar5 + 1, (*puVar2 & 0xff) != 0x58) {
          if (iVar5 == 10000000) goto LAB_0207eb5a;
        }
        if (9999999 < iVar5) goto LAB_0207eb5a;
      }
      if ((int)param_3 << 0x1f < 0) {
        iVar5 = 0xff;
        puVar4 = param_3;
        do {
          uVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar1 = uVar6;
          bVar8 = iVar5 != 0;
          iVar5 = iVar5 + -1;
        } while (bVar8);
        param_3 = param_3 + 0x100;
      }
      else {
        iVar5 = 0xff;
        puVar4 = puVar7;
        do {
          uVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar1 = uVar6;
          bVar8 = iVar5 != 0;
          iVar5 = iVar5 + -1;
        } while (bVar8);
        puVar7 = puVar7 + 0x100;
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

