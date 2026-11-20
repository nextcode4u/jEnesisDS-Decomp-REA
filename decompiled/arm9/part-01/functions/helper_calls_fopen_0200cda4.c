// Analysis annotation
// Role — helper calls fopen
// Basis — call context
// Calls newlib fopen at 0x02081588. This file's full role is still open.

// rea decompile_all
// name: FUN_0200cda4
// address: 0x200cda4
// body: available
// range: 0x200cda4-0x200cf13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02080f50) */

uint FUN_0200cda4(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar11;
  undefined1 *puVar10;
  
  if (((param_2 != 0 && param_1 != 0) && (param_4 != 0 && param_3 != 0)) && (param_5 < param_4)) {
    DAT_023ddebc = &DAT_023deed4;
    DAT_023eb2f8 = &DAT_023eb2fc;
    iVar6 = FUN_02081588(param_3,&DAT_0208f074);
    param_3 = 0;
    if (iVar6 != 0) {
      FUN_02081ff0(iVar6,0,2);
      piVar2 = DAT_023ddebc;
      iVar7 = FUN_0208212c(iVar6);
      piVar2[2] = iVar7;
      FUN_02081ff0(iVar6,0,0);
      if ((param_4 < (uint)DAT_023ddebc[2]) || ((uint)DAT_023ddebc[2] < param_5)) {
        if (iVar6 == 0) {
          uVar8 = 0;
        }
        else {
          FUN_02081248();
          FUN_02081258(&DAT_0208f3a0);
          uVar8 = 0;
          if (*(short *)(iVar6 + 0xc) != 0) {
            uVar8 = FUN_02081034(iVar6);
            if ((*(code **)(iVar6 + 0x30) != (code *)0x0) &&
               (iVar7 = (**(code **)(iVar6 + 0x30))(*(undefined4 *)(iVar6 + 0x20)), iVar7 < 0)) {
              uVar8 = 0xffffffff;
            }
            if ((*(ushort *)(iVar6 + 0xc) & 0x80) != 0) {
              FUN_020818d4(&DAT_0208f3a0,*(undefined4 *)(iVar6 + 0x14));
            }
            if (*(int *)(iVar6 + 0x34) != 0) {
              if (*(int *)(iVar6 + 0x34) != iVar6 + 0x44) {
                FUN_020818d4(&DAT_0208f3a0);
              }
              *(undefined4 *)(iVar6 + 0x34) = 0;
            }
            if (*(int *)(iVar6 + 0x48) != 0) {
              FUN_020818d4(&DAT_0208f3a0);
              *(undefined4 *)(iVar6 + 0x48) = 0;
            }
            *(undefined2 *)(iVar6 + 0xc) = 0;
          }
          FUN_0208124c();
        }
        return uVar8;
      }
      FUN_02081788(param_1,1,param_4,iVar6);
      FUN_02081020(iVar6);
      piVar3 = DAT_023eb2f8;
      piVar2 = DAT_023ddebc;
      DAT_023eb2f8[2] = param_4;
      piVar2[1] = param_1;
      *piVar2 = param_1;
      piVar2[3] = 0;
      *piVar3 = param_2;
      piVar3[3] = 0;
      piVar3[1] = param_2;
      if (param_5 != 0) {
        FUN_02082ec0(param_2,piVar2[1],param_5);
        piVar3 = DAT_023eb2f8;
        piVar2 = DAT_023ddebc;
        iVar6 = *DAT_023ddebc;
        DAT_023ddebc[3] = DAT_023ddebc[3] + param_5;
        *piVar2 = iVar6 + param_5;
        piVar3[3] = piVar3[3] + param_5;
        *piVar3 = *piVar3 + param_5;
      }
      puVar10 = &DAT_023ddec0;
      do {
        puVar9 = puVar10 + 1;
        *puVar10 = 0x20;
        puVar10 = puVar9;
      } while (puVar9 != &DAT_023deeae);
      uVar11 = 0xfee;
      uVar8 = 0;
      do {
        uVar8 = uVar8 >> 1;
        if ((uVar8 & 0x100) == 0) goto LAB_0200cc00;
        while ((uVar8 & 1) != 0) {
          while( true ) {
            uVar4 = FUN_0200c82c(DAT_023ddebc);
            if (uVar4 == 0xffffffff) {
              return 0xffffffff;
            }
            FUN_0200c858(uVar4 & 0xff,DAT_023eb2f8);
            uVar8 = uVar8 >> 1;
            (&DAT_023ddec0)[uVar11] = (char)uVar4;
            uVar11 = uVar11 + 1 & 0xfff;
            if ((uVar8 & 0x100) != 0) break;
LAB_0200cc00:
            uVar4 = FUN_0200c82c(DAT_023ddebc);
            if (uVar4 == 0xffffffff) {
              return 0xffffffff;
            }
            uVar8 = uVar4 | 0xff00;
            if ((uVar4 & 1) == 0) goto LAB_0200cc20;
          }
        }
LAB_0200cc20:
        iVar6 = 0;
        uVar5 = FUN_0200c82c(DAT_023ddebc);
        uVar4 = uVar5;
        if ((uVar5 == 0xffffffff) || (uVar4 = FUN_0200c82c(DAT_023ddebc), uVar4 == 0xffffffff)) {
          return uVar4;
        }
        do {
          uVar1 = (&DAT_023ddec0)[(uVar5 | (uVar4 & 0xf0) << 4) + iVar6 & 0xfff];
          FUN_0200c858(uVar1,DAT_023eb2f8);
          iVar6 = iVar6 + 1;
          (&DAT_023ddec0)[uVar11] = uVar1;
          uVar11 = uVar11 + 1 & 0xfff;
        } while (iVar6 <= (int)((uVar4 & 0xf) + 2));
      } while( true );
    }
  }
  return param_3;
}

