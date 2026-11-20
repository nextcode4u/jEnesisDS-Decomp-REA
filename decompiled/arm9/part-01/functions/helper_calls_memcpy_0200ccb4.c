// Analysis annotation
// Role — helper calls memcpy
// Basis — call context
// Calls newlib memcpy at 0x02082EC0. This file's full role is still open.

// rea decompile_all
// name: FUN_0200ccb4
// address: 0x200ccb4
// body: available
// range: 0x200ccb4-0x200cd93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200ccb4(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar7;
  
  if (((param_2 != 0 && param_1 != 0) && (param_4 != 0 && param_3 != 0)) && (param_5 < param_3)) {
    DAT_023ddebc = &DAT_023deed4;
    DAT_023eb2f8 = &DAT_023eb2fc;
    DAT_023deedc = param_3;
    if (param_3 <= param_4) {
      DAT_023eb308 = 0;
      DAT_023deee0 = 0;
      DAT_023deed4 = param_1;
      DAT_023deed8 = param_1;
      DAT_023eb2fc = param_2;
      DAT_023eb300 = param_2;
      DAT_023eb304 = param_4;
      if (param_5 != 0) {
        FUN_02082ec0(param_2,param_1);
        piVar3 = DAT_023eb2f8;
        piVar2 = DAT_023ddebc;
        iVar8 = *DAT_023ddebc;
        DAT_023ddebc[3] = DAT_023ddebc[3] + param_5;
        *piVar2 = iVar8 + param_5;
        piVar3[3] = piVar3[3] + param_5;
        *piVar3 = *piVar3 + param_5;
      }
      puVar7 = &DAT_023ddec0;
      do {
        puVar6 = puVar7 + 1;
        *puVar7 = 0x20;
        puVar7 = puVar6;
      } while (puVar6 != &DAT_023deeae);
      uVar9 = 0xfee;
      uVar10 = 0;
      do {
        uVar10 = uVar10 >> 1;
        if ((uVar10 & 0x100) == 0) goto LAB_0200cc00;
        while ((uVar10 & 1) != 0) {
          while( true ) {
            uVar4 = FUN_0200c82c(DAT_023ddebc);
            if (uVar4 == 0xffffffff) {
              return;
            }
            FUN_0200c858(uVar4 & 0xff,DAT_023eb2f8);
            uVar10 = uVar10 >> 1;
            (&DAT_023ddec0)[uVar9] = (char)uVar4;
            uVar9 = uVar9 + 1 & 0xfff;
            if ((uVar10 & 0x100) != 0) break;
LAB_0200cc00:
            uVar4 = FUN_0200c82c(DAT_023ddebc);
            if (uVar4 == 0xffffffff) {
              return;
            }
            uVar10 = uVar4 | 0xff00;
            if ((uVar4 & 1) == 0) goto LAB_0200cc20;
          }
        }
LAB_0200cc20:
        iVar8 = 0;
        uVar4 = FUN_0200c82c(DAT_023ddebc);
        if ((uVar4 == 0xffffffff) || (uVar5 = FUN_0200c82c(DAT_023ddebc), uVar5 == 0xffffffff)) {
          return;
        }
        do {
          uVar1 = (&DAT_023ddec0)[(uVar4 | (uVar5 & 0xf0) << 4) + iVar8 & 0xfff];
          FUN_0200c858(uVar1,DAT_023eb2f8);
          iVar8 = iVar8 + 1;
          (&DAT_023ddec0)[uVar9] = uVar1;
          uVar9 = uVar9 + 1 & 0xfff;
        } while (iVar8 <= (int)((uVar5 & 0xf) + 2));
      } while( true );
    }
  }
  return;
}

