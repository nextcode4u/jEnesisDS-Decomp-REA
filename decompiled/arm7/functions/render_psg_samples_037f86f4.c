// Analysis annotation
// Role — render psg samples
// Basis — reviewed
// Advances the tone and noise channels and writes the resulting PSG samples into the
// output buffer.

// rea decompile_all
// name: FUN_037f86f4
// address: 0x37f86f4
// body: available
// range: 0x37f86f4-0x37f89b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_037f86f4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar4 = DAT_03806dd4;
  iVar3 = DAT_03806dbc;
  if (0 < param_2) {
    iVar6 = 0;
    do {
      DAT_03806dc4 = (int)(DAT_03806dc0 + iVar3) >> 0xc;
      DAT_03806dc0 = DAT_03806dc0 + iVar3 & 0xfff;
      if (DAT_03806dd8 < 7) {
        DAT_03806e18 = *(int *)(&DAT_03806d4c + DAT_03806ddc * 4);
        if (6 < DAT_03806de0) goto LAB_037f8750;
LAB_037f8838:
        DAT_03806e1c = *(int *)(&DAT_03806d4c + DAT_03806de4 * 4);
        if (6 < DAT_03806de8) goto LAB_037f8778;
LAB_037f8854:
        DAT_03806e20 = *(int *)(&DAT_03806d4c + DAT_03806dec * 4);
      }
      else {
        DAT_03806df8 = DAT_03806df8 - DAT_03806dc4;
        if (DAT_03806df8 < 1) {
          DAT_03806e18 = DAT_03806e08 * *(int *)(&DAT_03806d4c + DAT_03806ddc * 4);
          DAT_03806e08 = -DAT_03806e08;
          do {
            DAT_03806df8 = DAT_03806df8 + DAT_03806dd8;
          } while (DAT_03806df8 < 1);
        }
        if (DAT_03806de0 < 7) goto LAB_037f8838;
LAB_037f8750:
        DAT_03806dfc = DAT_03806dfc - DAT_03806dc4;
        if (DAT_03806dfc < 1) {
          DAT_03806e1c = DAT_03806e0c * *(int *)(&DAT_03806d4c + DAT_03806de4 * 4);
          DAT_03806e0c = -DAT_03806e0c;
          do {
            DAT_03806dfc = DAT_03806dfc + DAT_03806de0;
          } while (DAT_03806dfc < 1);
        }
        if (DAT_03806de8 < 7) goto LAB_037f8854;
LAB_037f8778:
        DAT_03806e00 = DAT_03806e00 - DAT_03806dc4;
        if (DAT_03806e00 < 1) {
          DAT_03806e20 = DAT_03806e10 * *(int *)(&DAT_03806d4c + DAT_03806dec * 4);
          iVar1 = -DAT_03806e10;
          if (DAT_03806dd4 == 0x80) {
            DAT_03806e14 = DAT_03806e10 * -2;
          }
          do {
            DAT_03806e00 = DAT_03806e00 + DAT_03806de8;
            DAT_03806e10 = iVar1;
          } while (DAT_03806e00 < 1);
        }
      }
      if ((iVar4 == 0x80) || (DAT_03806e04 = DAT_03806e04 - DAT_03806dc4, 0 < DAT_03806e04)) {
LAB_037f87b4:
        if (DAT_03806e14 == 2) goto LAB_037f8888;
      }
      else {
        bVar7 = DAT_03806e14 != -1;
        DAT_03806e04 = DAT_03806e04 + iVar4;
        DAT_03806e14 = -DAT_03806e14;
        if (bVar7) goto LAB_037f87b4;
LAB_037f8888:
        uVar5 = DAT_03806dd0;
        if ((DAT_03806df0 & 4) != 0) {
          uVar5 = DAT_03806dd0 ^ (int)DAT_03806dd0 >> 3;
        }
        DAT_03806e14 = 1;
        uVar2 = (int)DAT_03806dd0 >> 1;
        DAT_03806dd0 = (uVar5 & 1) << 0xf | uVar2;
        DAT_03806e24 = 0;
        if ((uVar2 & 1) != 0) {
          DAT_03806e24 = *(int *)(&DAT_03806d4c + DAT_03806df4 * 4) << 1;
        }
      }
      iVar1 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      *(short *)(iVar1 + param_1) =
           (short)((DAT_03806e18 + DAT_03806e1c + DAT_03806e20 + DAT_03806e24) * 0x10000 >> 0x11);
    } while (param_2 != iVar6);
  }
  return;
}

