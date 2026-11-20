/* ARM9 runtime — grouped REA pseudocode.
 * Compiler support, C runtime, and standard library routines.
 */

// 0x020004f0  helper_calls_compiler_udivsi3

void FUN_020004f0(void)

{
  undefined4 uVar1;
  
  if (DAT_0b000008 != 0) {
    uVar1 = FUN_02005144(&DAT_0b0000ac);
    FUN_02080380(uVar1,DAT_0b000008 * DAT_0b000000);
    return;
  }
  return;
}


// 0x02004bf0  helper_calls_memset

void FUN_02004bf0(void)

{
  DAT_0209900e = 0;
  FUN_020042f0();
  FUN_02083058(&DAT_023cb634,0,0x10000);
  DAT_02099008 = 0;
  DAT_0208f34a = 1;
  DAT_02099010 = 0;
  DAT_02099001 = 0;
  DAT_02099000 = 0;
  DAT_0208f349 = 1;
  return;
}


// 0x020050a8  helper_calls_memset

void FUN_020050a8(int param_1)

{
  FUN_02083058(param_1,0,0x4c4);
  *(undefined ***)(param_1 + 0x494) = &switchD_0200e01c::switchdataD_020154b0;
  *(undefined ***)(param_1 + 0x498) = &z80_dispatch;
  *(undefined ***)(param_1 + 0x49c) = &PTR_z80_dispatch_01002e00_02015430;
  *(undefined ***)(param_1 + 0x4a0) = &PTR_z80_dispatch_01002ea8_02015470;
  return;
}


// 0x0200ccb4  helper_calls_memcpy

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


// 0x0200cda4  helper_calls_fopen

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


// 0x02080380  compiler_udivsi3

uint FUN_02080380(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return param_1;
  }
  if (param_2 == 0) {
    FUN_020805d8();
    return 0;
  }
  if (param_1 <= param_2) {
    return (uint)(param_1 == param_2);
  }
  if ((param_2 & param_2 - 1) == 0) {
    if (param_2 < 0x10000) {
      iVar2 = 0;
    }
    else {
      param_2 = param_2 >> 0x10;
      iVar2 = 0x10;
    }
    if (0xff < param_2) {
      param_2 = param_2 >> 8;
      iVar2 = iVar2 + 8;
    }
    if (0xf < param_2) {
      param_2 = param_2 >> 4;
      iVar2 = iVar2 + 4;
    }
    if (param_2 < 5) {
      uVar3 = iVar2 + (param_2 >> 1);
    }
    else {
      uVar3 = iVar2 + 3;
    }
    return param_1 >> (uVar3 & 0xff);
  }
  if ((param_2 & 0xe0000000) == 0) {
    param_2 = param_2 << 3;
    uVar3 = 8;
  }
  else {
    uVar3 = 1;
  }
  for (; param_2 < 0x10000000 && param_2 < param_1; param_2 = param_2 << 4) {
    uVar3 = uVar3 << 4;
  }
  for (; param_2 < 0x80000000 && param_2 < param_1; param_2 = param_2 << 1) {
    uVar3 = uVar3 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (param_2 <= param_1) {
      param_1 = param_1 - param_2;
      uVar1 = uVar1 | uVar3;
    }
    if (param_2 >> 1 <= param_1) {
      param_1 = param_1 - (param_2 >> 1);
      uVar1 = uVar1 | uVar3 >> 1;
    }
    if (param_2 >> 2 <= param_1) {
      param_1 = param_1 - (param_2 >> 2);
      uVar1 = uVar1 | uVar3 >> 2;
    }
    if (param_2 >> 3 <= param_1) {
      param_1 = param_1 - (param_2 >> 3);
      uVar1 = uVar1 | uVar3 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar3 = uVar3 >> 4;
      bVar4 = uVar3 == 0;
    }
    if (bVar4) break;
    param_2 = param_2 >> 4;
  }
  return uVar1;
}


// 0x0208047c  compiler_aeabi_uidivmod

void FUN_0208047c(void)

{
  FUN_02080380();
  return;
}


// 0x02080494  compiler_divsi3

uint FUN_02080494(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = param_1 ^ param_2;
  if (param_2 == 0) {
    FUN_020805d8();
    return 0;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  if (uVar4 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (uVar5 <= uVar4) {
    if (uVar5 < uVar4) {
      param_1 = 0;
    }
    if (uVar5 == uVar4) {
      param_1 = (int)uVar6 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar4 & uVar4 - 1) == 0) {
    if (uVar4 < 0x10000) {
      iVar3 = 0;
    }
    else {
      uVar4 = uVar4 >> 0x10;
      iVar3 = 0x10;
    }
    if (0xff < uVar4) {
      uVar4 = uVar4 >> 8;
      iVar3 = iVar3 + 8;
    }
    if (0xf < uVar4) {
      uVar4 = uVar4 >> 4;
      iVar3 = iVar3 + 4;
    }
    if (uVar4 < 5) {
      uVar4 = iVar3 + (uVar4 >> 1);
    }
    else {
      uVar4 = iVar3 + 3;
    }
    uVar5 = uVar5 >> (uVar4 & 0xff);
    if ((int)uVar6 < 0) {
      uVar5 = -uVar5;
    }
    return uVar5;
  }
  if ((uVar4 & 0xe0000000) == 0) {
    uVar4 = uVar4 << 3;
    uVar2 = 8;
  }
  else {
    uVar2 = 1;
  }
  for (; uVar4 < 0x10000000 && uVar4 < uVar5; uVar4 = uVar4 << 4) {
    uVar2 = uVar2 << 4;
  }
  for (; uVar4 < 0x80000000 && uVar4 < uVar5; uVar4 = uVar4 << 1) {
    uVar2 = uVar2 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (uVar4 <= uVar5) {
      uVar5 = uVar5 - uVar4;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar4 >> 1 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar4 >> 2 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar4 >> 3 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar7 = uVar5 == 0;
    if (!bVar7) {
      uVar2 = uVar2 >> 4;
      bVar7 = uVar2 == 0;
    }
    if (bVar7) break;
    uVar4 = uVar4 >> 4;
  }
  if ((int)uVar6 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


// 0x020805c0  compiler_aeabi_idivmod

void FUN_020805c0(void)

{
  FUN_02080494();
  return;
}


// 0x020805d8  helper_for_compiler_udivsi3

void FUN_020805d8(void)

{
  return;
}


// 0x02080620  compiler_subdf3

ulonglong FUN_02080620(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar7 = param_4 ^ 0x80000000;
  uVar10 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar9 = (int)uVar10 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar10 == uVar5 && param_1 == param_3 || uVar10 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar9 == -1) || iVar1 == -1) {
    if (iVar9 == -1 || iVar1 == -1) {
      uVar10 = param_3;
      uVar5 = uVar7;
      if (iVar9 == -1) {
        uVar10 = param_1;
        uVar5 = param_2;
      }
      if (iVar9 != -1 || iVar1 != -1) {
        param_3 = uVar10;
        uVar7 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar10 == 0 && bVar14;
      if (uVar10 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (uVar7 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != uVar7) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar10);
    }
    if (uVar10 != uVar5 || param_1 != param_3) {
      if (uVar10 == 0) {
        param_1 = param_3;
        param_2 = uVar7;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar7) {
      return 0;
    }
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar10 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar10 = uVar10 | 0x80000000;
      }
      return CONCAT44(uVar10,param_1 << 1);
    }
    if (uVar10 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_020808f0:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar10 = (param_2 & 0x7fffffff) >> 0x14;
  uVar5 = (param_4 & 0x7fffffff) >> 0x14;
  uVar12 = uVar5 - uVar10;
  bVar14 = uVar12 != 0;
  if (uVar5 < uVar10) {
    uVar12 = -uVar12;
  }
  uVar11 = param_1;
  uVar8 = param_2;
  if (bVar14 && uVar10 <= uVar5) {
    uVar10 = uVar10 + uVar12;
    uVar11 = param_3;
    uVar8 = uVar7;
    param_3 = param_1;
    uVar7 = param_2;
  }
  if (0x36 < uVar12) {
    return CONCAT44(uVar8,uVar11);
  }
  uVar5 = uVar8 & 0xfffff | 0x100000;
  if ((uVar8 & 0x80000000) != 0) {
    bVar14 = uVar11 != 0;
    uVar11 = -uVar11;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar8 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar8 = -(uVar8 + bVar14);
  }
  if (uVar10 == uVar12) {
    uVar8 = uVar8 ^ 0x100000;
    if (uVar10 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar10 = 1;
    }
    else {
      uVar12 = uVar12 - 1;
    }
  }
  uVar7 = -uVar12 + 0x20;
  if ((int)uVar12 < 0x21) {
    uVar13 = param_3 << (uVar7 & 0xff);
    param_3 = param_3 >> (uVar12 & 0xff);
    uVar4 = uVar11 + param_3;
    uVar6 = uVar8 << (uVar7 & 0xff);
    uVar7 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar11,param_3) + ((int)uVar8 >> (uVar12 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar13 = uVar8 << (-uVar12 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar13 = uVar13 | 2;
    }
    uVar12 = (int)uVar8 >> (uVar12 - 0x20 & 0xff);
    uVar7 = uVar11 + uVar12;
    uVar5 = uVar5 + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar11,uVar12);
  }
  param_2 = uVar5 & 0x80000000;
  uVar12 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar13 == 0;
    uVar13 = -uVar13;
    uVar12 = -uVar7;
    uVar7 = -(uVar7 + !bVar14);
    uVar12 = -(uVar5 + (bVar14 <= uVar12));
  }
  if (0xfffff < uVar12) {
    uVar11 = uVar10 - 1;
    if (0x1fffff < uVar12) {
      bVar2 = (byte)uVar12;
      uVar12 = uVar12 >> 1;
      bVar3 = (byte)uVar7;
      uVar7 = (uint)(bVar2 & 1) << 0x1f | uVar7 >> 1;
      uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
      uVar11 = uVar10;
      if (0xffbfffff < uVar10 * 0x200000) goto LAB_020808f0;
    }
LAB_02080740:
    bVar14 = 0x7fffffff < uVar13;
    if (uVar13 == 0x80000000) {
      bVar14 = (bool)((byte)uVar7 & 1);
    }
    return CONCAT44(uVar12 + uVar11 * 0x100000 + (uint)CARRY4(uVar7,(uint)bVar14) | param_2,
                    uVar7 + bVar14);
  }
  bVar2 = (byte)(uVar13 >> 0x1f);
  uVar13 = uVar13 << 1;
  uVar11 = uVar7 * 2;
  bVar14 = CARRY4(uVar7,uVar7);
  uVar7 = uVar7 * 2 + (uint)bVar2;
  uVar12 = uVar12 * 2 + (uint)(bVar14 || CARRY4(uVar11,(uint)bVar2));
  uVar11 = uVar10 - 2;
  if ((uVar12 & 0x100000) != 0) goto LAB_02080740;
  if (uVar12 == 0) {
    iVar9 = 0x34;
    uVar10 = 0;
  }
  else {
    iVar9 = 0x14;
    uVar10 = uVar7;
    uVar7 = uVar12;
  }
  uVar12 = uVar7;
  if (0xffff < uVar7) {
    uVar12 = uVar7 >> 0x10;
    iVar9 = iVar9 + -0x10;
  }
  if (0xff < uVar12) {
    uVar12 = uVar12 >> 8;
    iVar9 = iVar9 + -8;
  }
  if (0xf < uVar12) {
    uVar12 = uVar12 >> 4;
    iVar9 = iVar9 + -4;
  }
  if (uVar12 < 4) {
    iVar9 = iVar9 - (uVar12 >> 1);
  }
  else {
    iVar9 = iVar9 + -2;
  }
  uVar4 = iVar9 - (uVar12 >> 3);
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = uVar4 - 0x20;
  bVar14 = uVar6 == 0;
  uVar12 = uVar6;
  uVar8 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar8 = uVar4 - 0x14;
    bVar14 = uVar8 == 0;
    uVar12 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar10 = uVar7 << (uVar4 & 0xff);
      uVar7 = uVar7 >> (0xc - uVar8 & 0xff);
      goto LAB_020807f8;
    }
  }
  if (bVar14 || (int)uVar8 < 0 != bVar15) {
    uVar13 = 0x20 - uVar12;
  }
  uVar7 = uVar7 << (uVar12 & 0xff);
  if (bVar14 || (int)uVar8 < 0 != bVar15) {
    uVar7 = uVar7 | uVar10 >> (uVar13 & 0xff);
    uVar10 = uVar10 << (uVar12 & 0xff);
  }
LAB_020807f8:
  if ((int)uVar4 <= (int)uVar11) {
    return CONCAT44(uVar7 + (uVar11 - uVar4) * 0x100000 | param_2,uVar10);
  }
  uVar12 = ~(uVar11 - uVar4);
  if ((int)uVar12 < 0x1f) {
    if (uVar12 - 0x13 != 0 && -0xd < (int)(uVar12 - 0x1f)) {
      uVar12 = 0xc - (uVar12 - 0x13);
      return CONCAT44(uVar5,uVar10 >> (0x20 - uVar12 & 0xff) | uVar7 << (uVar12 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar12 = uVar12 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar12 & 0xff),
                    uVar10 >> (uVar12 & 0xff) | uVar7 << (0x20 - uVar12 & 0xff));
  }
  return CONCAT44(uVar5,uVar7 >> (uVar12 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


// 0x02080624  compiler_adddf3

ulonglong FUN_02080624(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar9 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar8 = (int)uVar9 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
    if (iVar8 == -1 || iVar1 == -1) {
      uVar9 = param_3;
      uVar5 = param_4;
      if (iVar8 == -1) {
        uVar9 = param_1;
        uVar5 = param_2;
      }
      if (iVar8 != -1 || iVar1 != -1) {
        param_3 = uVar9;
        param_4 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar9 == 0 && bVar14;
      if (uVar9 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != param_4) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar9);
    }
    if (uVar9 != uVar5 || param_1 != param_3) {
      if (uVar9 == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if ((param_2 & 0x7fffffff) >> 0x14 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar9 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar9 = uVar9 | 0x80000000;
      }
      return CONCAT44(uVar9,param_1 << 1);
    }
    if (uVar9 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_020808f0:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = (param_2 & 0x7fffffff) >> 0x14;
  uVar5 = (param_4 & 0x7fffffff) >> 0x14;
  uVar11 = uVar5 - uVar9;
  bVar14 = uVar11 != 0;
  if (uVar5 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar7 = param_2;
  if (bVar14 && uVar9 <= uVar5) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar7 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar7,uVar10);
  }
  uVar5 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar7 = param_4 & 0xfffff | 0x100000;
  if ((param_4 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar7 = -(uVar7 + bVar14);
  }
  if (uVar9 == uVar11) {
    uVar7 = uVar7 ^ 0x100000;
    if (uVar9 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar9 = 1;
    }
    else {
      uVar11 = uVar11 - 1;
    }
  }
  uVar13 = -uVar11 + 0x20;
  if ((int)uVar11 < 0x21) {
    uVar12 = param_3 << (uVar13 & 0xff);
    param_3 = param_3 >> (uVar11 & 0xff);
    uVar4 = uVar10 + param_3;
    uVar6 = uVar7 << (uVar13 & 0xff);
    uVar13 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
    uVar13 = uVar10 + uVar11;
    uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
  }
  param_2 = uVar5 & 0x80000000;
  uVar11 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar13;
    uVar13 = -(uVar13 + !bVar14);
    uVar11 = -(uVar5 + (bVar14 <= uVar11));
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      bVar2 = (byte)uVar11;
      uVar11 = uVar11 >> 1;
      bVar3 = (byte)uVar13;
      uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
      uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_020808f0;
    }
LAB_02080740:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (bool)((byte)uVar13 & 1);
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
                    uVar13 + bVar14);
  }
  bVar2 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar10 = uVar13 * 2;
  bVar14 = CARRY4(uVar13,uVar13);
  uVar13 = uVar13 * 2 + (uint)bVar2;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
  uVar10 = uVar9 - 2;
  if ((uVar11 & 0x100000) != 0) goto LAB_02080740;
  if (uVar11 == 0) {
    iVar8 = 0x34;
    uVar9 = 0;
  }
  else {
    iVar8 = 0x14;
    uVar9 = uVar13;
    uVar13 = uVar11;
  }
  uVar11 = uVar13;
  if (0xffff < uVar13) {
    uVar11 = uVar13 >> 0x10;
    iVar8 = iVar8 + -0x10;
  }
  if (0xff < uVar11) {
    uVar11 = uVar11 >> 8;
    iVar8 = iVar8 + -8;
  }
  if (0xf < uVar11) {
    uVar11 = uVar11 >> 4;
    iVar8 = iVar8 + -4;
  }
  if (uVar11 < 4) {
    iVar8 = iVar8 - (uVar11 >> 1);
  }
  else {
    iVar8 = iVar8 + -2;
  }
  uVar4 = iVar8 - (uVar11 >> 3);
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = uVar4 - 0x20;
  bVar14 = uVar6 == 0;
  uVar11 = uVar6;
  uVar7 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar7 = uVar4 - 0x14;
    bVar14 = uVar7 == 0;
    uVar11 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar9 = uVar13 << (uVar4 & 0xff);
      uVar13 = uVar13 >> (0xc - uVar7 & 0xff);
      goto LAB_020807f8;
    }
  }
  if (bVar14 || (int)uVar7 < 0 != bVar15) {
    uVar12 = 0x20 - uVar11;
  }
  uVar13 = uVar13 << (uVar11 & 0xff);
  if (bVar14 || (int)uVar7 < 0 != bVar15) {
    uVar13 = uVar13 | uVar9 >> (uVar12 & 0xff);
    uVar9 = uVar9 << (uVar11 & 0xff);
  }
LAB_020807f8:
  if ((int)uVar4 <= (int)uVar10) {
    return CONCAT44(uVar13 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
  }
  uVar11 = ~(uVar10 - uVar4);
  if ((int)uVar11 < 0x1f) {
    if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
      uVar11 = 0xc - (uVar11 - 0x13);
      return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar13 << (uVar11 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar11 = uVar11 + 1;
    return CONCAT44(param_2 | uVar13 >> (uVar11 & 0xff),
                    uVar9 >> (uVar11 & 0xff) | uVar13 << (0x20 - uVar11 & 0xff));
  }
  return CONCAT44(uVar5,uVar13 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}


// 0x02080958  compiler_floatsidf

/* WARNING: Removing unreachable block (ram,0x02080778) */

ulonglong FUN_02080958(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_r12;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar8 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar8 < 0) {
    uVar2 = -param_1;
  }
  iVar5 = 0x34;
  uVar1 = 0;
  uVar7 = uVar2;
  if (0xffff < uVar2) {
    uVar7 = uVar2 >> 0x10;
    iVar5 = 0x24;
  }
  if (0xff < uVar7) {
    uVar7 = uVar7 >> 8;
    iVar5 = iVar5 + -8;
  }
  if (0xf < uVar7) {
    uVar7 = uVar7 >> 4;
    iVar5 = iVar5 + -4;
  }
  if (uVar7 < 4) {
    iVar5 = iVar5 - (uVar7 >> 1);
  }
  else {
    iVar5 = iVar5 + -2;
  }
  uVar6 = iVar5 - (uVar7 >> 3);
  bVar10 = SBORROW4(uVar6,0x20);
  uVar3 = uVar6 - 0x20;
  bVar9 = uVar3 == 0;
  uVar7 = uVar3;
  uVar4 = uVar3;
  if ((int)uVar6 < 0x20) {
    bVar10 = SCARRY4(uVar3,0xc);
    uVar4 = uVar6 - 0x14;
    bVar9 = uVar4 == 0;
    uVar7 = uVar6;
    if (!bVar9 && -0xd < (int)uVar3) {
      uVar1 = uVar2 << (uVar6 & 0xff);
      uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
      goto LAB_020807f8;
    }
  }
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    in_r12 = 0x20 - uVar7;
  }
  uVar2 = uVar2 << (uVar7 & 0xff);
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar7 & 0xff);
  }
LAB_020807f8:
  if ((int)uVar6 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
  }
  uVar7 = ~(0x432 - uVar6);
  if (0x1e < (int)uVar7) {
    return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
    uVar7 = uVar7 + 1;
    return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
                    uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
  }
  uVar8 = 0xc - (uVar7 - 0x13);
  return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
         0x80000000ffffffff;
}


// 0x02080a34  compiler_muldf3

ulonglong FUN_02080a34(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r5;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  
  uVar14 = CONCAT44(param_2,param_1);
  uVar10 = 0x7ff;
  uVar6 = param_2 >> 0x14 & 0x7ff;
  bVar11 = uVar6 == 0;
  if (!bVar11) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar11 = unaff_r5 == 0;
  }
  if (!bVar11) {
    bVar11 = uVar6 == 0x7ff;
  }
  if (!bVar11) {
    bVar11 = unaff_r5 == 0x7ff;
  }
  if (bVar11) {
    uVar14 = FUN_02080c2c();
  }
  uVar4 = (uint)(uVar14 >> 0x20);
  iVar7 = uVar6 + unaff_r5;
  uVar9 = uVar4 ^ param_4;
  uVar4 = uVar4 & ~(uVar10 << 0x15);
  param_4 = param_4 & ~(uVar10 << 0x15);
  uVar6 = uVar4 | 0x100000;
  uVar5 = param_4 | 0x100000;
  if ((uint)uVar14 == 0 && (uVar4 & 0xfffff) == 0 || param_3 == 0 && (param_4 & 0xfffff) == 0) {
    param_3 = (uint)uVar14 | param_3;
    uVar5 = (uVar9 & 0x80000000 | uVar6) ^ uVar5;
    uVar6 = uVar10 >> 1;
    bVar13 = SBORROW4(iVar7,uVar6);
    uVar8 = iVar7 - uVar6;
    bVar11 = uVar8 == 0;
    uVar4 = uVar8;
    if (!bVar11 && (int)uVar6 <= iVar7) {
      bVar13 = SBORROW4(uVar10,uVar8);
      uVar4 = uVar10 - uVar8;
      bVar11 = uVar10 == uVar8;
    }
    if (!bVar11 && (int)uVar4 < 0 == bVar13) {
      return CONCAT44(uVar5 | uVar8 * 0x100000,param_3);
    }
    uVar5 = uVar5 | 0x100000;
    uVar6 = 0;
    bVar13 = SBORROW4(uVar8,1);
    uVar8 = uVar8 - 1;
    bVar11 = uVar8 == 0;
    uVar10 = uVar8;
  }
  else {
    uVar2 = (ulonglong)param_3 * (uVar14 & 0xffffffff);
    uVar14 = (ulonglong)uVar5 * (uVar14 & 0xffffffff) +
             (ulonglong)param_3 * (ulonglong)uVar6 + (uVar2 >> 0x20);
    uVar4 = (uint)uVar14;
    lVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 + (uVar14 >> 0x20);
    uVar6 = (uint)lVar1;
    uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((int)uVar2 != 0) {
      uVar4 = uVar4 | 1;
    }
    uVar8 = (iVar7 + -0xff) - ((uVar10 < 0x200) + 0x300);
    if (uVar10 < 0x200) {
      bVar3 = (byte)(uVar4 >> 0x1f);
      uVar4 = uVar4 << 1;
      lVar1 = CONCAT44(uVar10 * 2 + (uint)(CARRY4(uVar6,uVar6) || CARRY4(uVar6 * 2,(uint)bVar3)),
                       uVar6 * 2 + (uint)bVar3);
    }
    uVar5 = uVar9 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
    param_3 = (uint)lVar1 << 0xb | uVar4 >> 0x15;
    uVar6 = uVar4 * 0x800;
    bVar12 = 0xfc < uVar8;
    bVar13 = SBORROW4(uVar8,0xfd);
    uVar9 = uVar8 - 0xfd;
    bVar11 = uVar9 == 0;
    uVar10 = uVar9;
    if (bVar12 && !bVar11) {
      bVar12 = 0x6ff < uVar9;
      bVar13 = SBORROW4(uVar9,0x700);
      uVar10 = uVar8 - 0x7fd;
      bVar11 = uVar9 == 0x700;
    }
    if (!bVar12 || bVar11) {
      bVar11 = 0x7fffffff < uVar6;
      if (uVar6 == 0x80000000) {
        bVar11 = (bool)((byte)(uVar4 >> 0x15) & 1);
      }
      return CONCAT44(uVar5 + uVar8 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar11),param_3 + bVar11
                     );
    }
  }
  if (!bVar11 && (int)uVar10 < 0 == bVar13) {
    return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  if (-0x36 < (int)uVar8) {
    uVar10 = -uVar8;
    uVar4 = uVar10 - 0x20;
    if (0x1f < (int)uVar10) {
      uVar9 = param_3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
      uVar10 = (uVar5 >> (uVar4 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar4 & 0xff))) -
               ((int)uVar9 >> 0x1f);
      if ((uVar6 == 0 && param_3 << (0x20 - uVar4 & 0xff) == 0) && (uVar9 & 0x7fffffff) == 0) {
        uVar10 = uVar10 & ~(uVar9 >> 0x1f);
      }
      return CONCAT44(uVar5,uVar10) & 0x80000000ffffffff;
    }
    if (uVar10 - 0x14 != 0 && -0xd < (int)uVar4) {
      uVar4 = 0xc - (uVar10 - 0x14);
      uVar10 = param_3 << (uVar4 & 0xff);
      uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
      uVar9 = uVar4 + -((int)uVar10 >> 0x1f);
      if (uVar6 == 0 && (uVar10 & 0x7fffffff) == 0) {
        uVar9 = uVar9 & ~(uVar10 >> 0x1f);
      }
      return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar10 >> 0x1f)),uVar9);
    }
    uVar4 = param_3 << (uVar8 + 0x20 & 0xff);
    uVar9 = param_3 >> (uVar10 & 0xff) | uVar5 << (uVar8 + 0x20 & 0xff);
    uVar8 = uVar9 + -((int)uVar4 >> 0x1f);
    if (uVar6 == 0 && (uVar4 & 0x7fffffff) == 0) {
      uVar8 = uVar8 & ~(uVar4 >> 0x1f);
    }
    return CONCAT44((uVar5 & 0x80000000) + ((uVar5 & 0x7fffffff) >> (uVar10 & 0xff)) +
                    (uint)CARRY4(uVar9,-((int)uVar4 >> 0x1f)),uVar8);
  }
  return (ulonglong)(uVar5 & 0x80000000) << 0x20;
}


// 0x02080c2c  helper_for_compiler_muldf3

ulonglong FUN_02080c2c(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  uint uVar5;
  uint in_r12;
  
  uVar4 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 != in_r12 && uVar4 != in_r12) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
    {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    if (unaff_r4 == 0) {
      uVar5 = param_2 & 0x80000000;
      do {
        iVar2 = param_1 >> 0x1f;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 - iVar2;
      } while ((param_2 & 0x100000) == 0);
      param_2 = param_2 | uVar5;
      if (uVar4 != 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    do {
      iVar2 = param_3 >> 0x1f;
      param_3 = param_3 << 1;
      param_4 = param_4 * 2 - iVar2;
    } while ((param_4 & 0x100000) == 0);
    return CONCAT44(param_2,param_1);
  }
  bVar1 = (param_2 & 0x7fffffff) != 0;
  uVar5 = param_4;
  iVar2 = param_3;
  if (param_1 != 0 || bVar1) {
    uVar5 = param_2;
    iVar2 = param_1;
  }
  uVar3 = uVar5;
  if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
      ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
     ((uVar4 != in_r12 ||
      (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
    return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}


// 0x02080cc4  compiler_divdf3

ulonglong FUN_02080cc4(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r5;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  
  uVar16 = CONCAT44(param_2,param_1);
  uVar11 = 0x7ff;
  uVar6 = param_2 >> 0x14 & 0x7ff;
  bVar13 = uVar6 == 0;
  if (!bVar13) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar13 = unaff_r5 == 0;
  }
  if (!bVar13) {
    bVar13 = uVar6 == 0x7ff;
  }
  if (!bVar13) {
    bVar13 = unaff_r5 == 0x7ff;
  }
  if (bVar13) {
    uVar16 = FUN_02080e60();
  }
  uVar8 = (uint)((ulonglong)uVar16 >> 0x20);
  uVar2 = (uint)uVar16;
  iVar7 = uVar6 - unaff_r5;
  if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
    uVar6 = (uVar8 ^ param_4) & 0x80000000 | uVar8 & 0xfffff;
    bVar14 = SCARRY4(iVar7,uVar11 >> 1);
    uVar8 = iVar7 + (uVar11 >> 1);
    bVar13 = (int)uVar8 < 0;
    bVar15 = uVar8 == 0;
    if (!bVar15 && bVar13 == bVar14) {
      bVar14 = SBORROW4(uVar11,uVar8);
      bVar13 = (int)(uVar11 - uVar8) < 0;
      bVar15 = uVar11 == uVar8;
    }
    if (!bVar15 && bVar13 == bVar14) {
      return CONCAT44(uVar6 | uVar8 * 0x100000,uVar2);
    }
    uVar6 = uVar6 | 0x100000;
    uVar4 = 0;
    bVar15 = SBORROW4(uVar8,1);
    uVar8 = uVar8 - 1;
    bVar13 = uVar8 == 0;
    uVar11 = uVar8;
  }
  else {
    uVar4 = (param_4 & 0xfffff) << 8 | 0x10000000 | param_3 >> 0x18;
    uVar11 = param_3 << 8;
    uVar9 = (uVar8 & 0xfffff) << 8 | 0x10000000 | uVar2 >> 0x18;
    uVar2 = uVar2 * 0x100;
    uVar6 = (uVar8 ^ param_4) & 0x80000000;
    bVar13 = uVar4 <= uVar9;
    if (uVar9 == uVar4) {
      bVar13 = uVar11 <= uVar2;
    }
    iVar7 = iVar7 + (uint)bVar13;
    uVar8 = iVar7 + 0x3fd;
    if (!bVar13) {
      uVar4 = uVar4 >> 1;
      uVar11 = (uint)((byte)(param_3 >> 0x18) & 1) << 0x1f | (param_3 & 0xffffff) << 7;
    }
    uVar10 = uVar2 - uVar11;
    uVar9 = uVar9 - (uVar4 + (uVar2 < uVar11));
    uVar5 = uVar4 >> 1;
    uVar3 = (uint)((byte)uVar4 & 1) << 0x1f | uVar11 >> 1;
    uVar2 = 0x100000;
    uVar11 = 0x80000;
    while( true ) {
      bVar13 = uVar3 <= uVar10;
      if (uVar5 < uVar9 || uVar9 - uVar5 < (uint)bVar13) {
        uVar10 = uVar10 - uVar3;
        uVar2 = uVar2 | uVar11;
        uVar9 = uVar9 - (uVar5 + !bVar13);
      }
      uVar4 = uVar5 >> 1;
      uVar3 = (uint)((byte)uVar5 & 1) << 0x1f | uVar3 >> 1;
      bVar13 = uVar3 <= uVar10;
      if (uVar4 < uVar9 || uVar9 - uVar4 < (uint)bVar13) {
        uVar10 = uVar10 - uVar3;
        uVar2 = uVar2 | uVar11 >> 1;
        uVar9 = uVar9 - (uVar4 + !bVar13);
      }
      uVar12 = uVar5 >> 2;
      uVar1 = (uint)((byte)uVar4 & 1) << 0x1f | uVar3 >> 1;
      bVar13 = uVar1 <= uVar10;
      if (uVar12 < uVar9 || uVar9 - uVar12 < (uint)bVar13) {
        uVar10 = uVar10 - uVar1;
        uVar2 = uVar2 | uVar11 >> 2;
        uVar9 = uVar9 - (uVar12 + !bVar13);
      }
      uVar5 = uVar5 >> 3;
      uVar3 = (uint)((byte)uVar12 & 1) << 0x1f | uVar1 >> 1;
      bVar13 = uVar3 <= uVar10;
      if (uVar5 < uVar9 || uVar9 - uVar5 < (uint)bVar13) {
        uVar10 = uVar10 - uVar3;
        uVar2 = uVar2 | uVar11 >> 3;
        uVar9 = uVar9 - (uVar5 + !bVar13);
      }
      uVar4 = uVar9 | uVar10;
      if (uVar4 == 0) break;
      uVar9 = uVar9 << 4 | uVar10 >> 0x1c;
      uVar10 = uVar10 << 4;
      uVar5 = uVar5 << 3 | uVar3 >> 0x1d;
      uVar3 = (uVar1 >> 1) << 3;
      uVar11 = uVar11 >> 4;
      if (uVar11 == 0) {
        if ((uVar6 & 0x100000) != 0) goto LAB_02080e04;
        uVar6 = uVar6 | uVar2;
        uVar2 = 0;
        uVar11 = 0x80000000;
      }
    }
    if ((uVar6 & 0x100000) == 0) {
      uVar6 = uVar6 | uVar2;
      uVar2 = 0;
    }
LAB_02080e04:
    bVar14 = 0xfc < uVar8;
    bVar15 = SBORROW4(uVar8,0xfd);
    uVar12 = iVar7 + 0x300;
    bVar13 = uVar12 == 0;
    uVar11 = uVar12;
    if (bVar14 && !bVar13) {
      bVar14 = 0x6ff < uVar12;
      bVar15 = SBORROW4(uVar12,0x700);
      uVar11 = iVar7 - 0x400;
      bVar13 = uVar12 == 0x700;
    }
    if (!bVar14 || bVar13) {
      bVar13 = uVar5 <= uVar9;
      if (uVar9 == uVar5) {
        bVar13 = uVar3 <= uVar10;
      }
      if (uVar9 == uVar5 && uVar10 == uVar3) {
        bVar13 = (bool)((byte)uVar2 & 1);
      }
      return CONCAT44(uVar6 + uVar8 * 0x100000 + (uint)CARRY4(uVar2,(uint)bVar13),uVar2 + bVar13);
    }
  }
  if (!bVar13 && (int)uVar11 < 0 == bVar15) {
    return (ulonglong)(uVar6 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  if ((int)uVar8 < -0x35) {
    return (ulonglong)(uVar6 & 0x80000000) << 0x20;
  }
  uVar11 = -uVar8;
  uVar9 = uVar11 - 0x20;
  if (0x1f < (int)uVar11) {
    uVar8 = uVar2 >> (uVar9 & 0xff) | uVar6 << (0x20 - uVar9 & 0xff);
    uVar11 = (uVar6 >> (uVar9 & 0xff) & ~((uVar6 & 0x80000000) >> (uVar9 & 0xff))) -
             ((int)uVar8 >> 0x1f);
    if ((uVar4 == 0 && uVar2 << (0x20 - uVar9 & 0xff) == 0) && (uVar8 & 0x7fffffff) == 0) {
      uVar11 = uVar11 & ~(uVar8 >> 0x1f);
    }
    return CONCAT44(uVar6,uVar11) & 0x80000000ffffffff;
  }
  if (uVar11 - 0x14 != 0 && -0xd < (int)uVar9) {
    uVar8 = 0xc - (uVar11 - 0x14);
    uVar11 = uVar2 << (uVar8 & 0xff);
    uVar2 = uVar2 >> (0x20 - uVar8 & 0xff) | uVar6 << (uVar8 & 0xff);
    uVar8 = uVar2 + -((int)uVar11 >> 0x1f);
    if (uVar4 == 0 && (uVar11 & 0x7fffffff) == 0) {
      uVar8 = uVar8 & ~(uVar11 >> 0x1f);
    }
    return CONCAT44((uVar6 & 0x80000000) + (uint)CARRY4(uVar2,-((int)uVar11 >> 0x1f)),uVar8);
  }
  uVar9 = uVar2 << (uVar8 + 0x20 & 0xff);
  uVar2 = uVar2 >> (uVar11 & 0xff) | uVar6 << (uVar8 + 0x20 & 0xff);
  uVar8 = uVar2 + -((int)uVar9 >> 0x1f);
  if (uVar4 == 0 && (uVar9 & 0x7fffffff) == 0) {
    uVar8 = uVar8 & ~(uVar9 >> 0x1f);
  }
  return CONCAT44((uVar6 & 0x80000000) + ((uVar6 & 0x7fffffff) >> (uVar11 & 0xff)) +
                  (uint)CARRY4(uVar2,-((int)uVar9 >> 0x1f)),uVar8);
}


// 0x02080e60  helper_for_compiler_divdf3

ulonglong FUN_02080e60(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint unaff_r4;
  uint uVar2;
  uint uVar3;
  uint in_r12;
  
  uVar2 = in_r12 & param_4 >> 0x14;
  uVar3 = param_2;
  if (unaff_r4 != in_r12 || uVar2 != in_r12) {
    if (unaff_r4 == in_r12) {
      if ((param_1 == 0 && (param_2 & 0xfffff) == 0) &&
         (param_1 = param_3, uVar3 = param_4, uVar2 != in_r12)) {
LAB_02080c98:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
      }
    }
    else if (uVar2 == in_r12) {
      param_1 = param_3;
      uVar3 = param_4;
      if (param_3 == 0 && (param_4 & 0xfffff) == 0) {
LAB_02080c48:
        return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
      }
    }
    else {
      if ((param_1 != 0 || (param_2 & 0x7fffffff) != 0) &&
          (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) {
        if (unaff_r4 == 0) {
          uVar3 = param_2 & 0x80000000;
          do {
            iVar1 = param_1 >> 0x1f;
            param_1 = param_1 << 1;
            param_2 = param_2 * 2 - iVar1;
          } while ((param_2 & 0x100000) == 0);
          param_2 = param_2 | uVar3;
          if (uVar2 != 0) {
            return CONCAT44(param_2,param_1);
          }
        }
        do {
          iVar1 = param_3 >> 0x1f;
          param_3 = param_3 << 1;
          param_4 = param_4 * 2 - iVar1;
        } while ((param_4 & 0x100000) == 0);
        return CONCAT44(param_2,param_1);
      }
      if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) goto LAB_02080c98;
      if (param_3 != 0 || (param_4 & 0x7fffffff) != 0) goto LAB_02080c48;
    }
  }
  return CONCAT44(uVar3,param_1) | 0x7ff8000000000000;
}


// 0x02080ed0  compiler_fixunsdfsi

uint FUN_02080ed0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (SUB41(param_2 >> 0x1f,0)) {
    return 0;
  }
  iVar1 = param_2 * 2 + 0x200000;
  if (param_2 * 2 < 0xffe00000) {
    if (-1 < iVar1) {
      return 0;
    }
    uVar2 = -(iVar1 >> 0x15) - 0x3e1;
    if (-1 < (int)uVar2) {
      return (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar2 & 0xff);
    }
  }
  else if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    return 0;
  }
  return 0xffffffff;
}


// 0x02081020  newlib_fclose

/* WARNING: Removing unreachable block (ram,0x02080f50) */

undefined4 FUN_02081020(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_02081248();
    FUN_02081258(&DAT_0208f3a0);
    uVar1 = 0;
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar1 = FUN_02081034(param_1);
      if ((*(code **)(param_1 + 0x30) != (code *)0x0) &&
         (iVar2 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x20)), iVar2 < 0)) {
        uVar1 = 0xffffffff;
      }
      if ((*(ushort *)(param_1 + 0xc) & 0x80) != 0) {
        FUN_020818d4(&DAT_0208f3a0,*(undefined4 *)(param_1 + 0x14));
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        if (*(int *)(param_1 + 0x34) != param_1 + 0x44) {
          FUN_020818d4(&DAT_0208f3a0);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_020818d4(&DAT_0208f3a0);
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      *(undefined2 *)(param_1 + 0xc) = 0;
    }
    FUN_0208124c();
  }
  return uVar1;
}


// 0x02081034  newlib_fflush

undefined4 FUN_02081034(int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_020821cc(&DAT_0208f3a0,FUN_02081034);
    return uVar2;
  }
  FUN_02081258();
  uVar1 = *(ushort *)(param_1 + 3);
  if ((uVar1 & 8) == 0) {
    *(ushort *)(param_1 + 3) = uVar1 | 0x800;
    if ((param_1[1] < 1) && (param_1[0x10] < 1)) {
      return 0;
    }
    pcVar6 = (code *)param_1[0xb];
    if (pcVar6 != (code *)0x0) {
      if ((uVar1 & 0x1000) == 0) {
        iVar5 = (*pcVar6)(param_1[8],uVar1 & 0x1000,1);
        if (iVar5 == -1) {
          return 0;
        }
      }
      else {
        iVar5 = param_1[0x15];
      }
      if ((*(ushort *)(param_1 + 3) & 4) != 0) {
        iVar4 = 0;
        if (param_1[0xd] != 0) {
          iVar4 = param_1[0x10];
        }
        iVar5 = iVar5 - param_1[1];
        if (param_1[0xd] != 0) {
          iVar5 = iVar5 - iVar4;
        }
      }
      iVar4 = (*pcVar6)(param_1[8],iVar5,0);
      if (iVar4 != -1) {
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xf7ff;
        *param_1 = param_1[5];
        param_1[1] = 0;
        if ((*(ushort *)(param_1 + 3) & 0x1000) != 0) {
          param_1[0x15] = iVar5;
          return 0;
        }
      }
    }
  }
  else {
    iVar5 = param_1[5];
    if (iVar5 != 0) {
      iVar4 = *param_1 - iVar5;
      *param_1 = iVar5;
      if ((uVar1 & 3) == 0) {
        iVar3 = param_1[6];
      }
      else {
        iVar3 = 0;
      }
      param_1[2] = iVar3;
      while (0 < iVar4) {
        iVar3 = (*(code *)param_1[10])(param_1[8],iVar5,iVar4);
        iVar5 = iVar5 + iVar3;
        iVar4 = iVar4 - iVar3;
        if (iVar3 < 1) {
          *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x40;
          return 0xffffffff;
        }
      }
    }
  }
  return 0;
}


// 0x020811ec  newlib_std

void FUN_020811ec(undefined4 *param_1,undefined2 param_2,undefined4 param_3)

{
  param_1[0xc] = &LAB_02083510;
  param_1[4] = param_3;
  param_1[9] = &LAB_020835f0;
  *(undefined2 *)(param_1 + 3) = param_2;
  param_1[7] = 0;
  param_1[10] = FUN_02083584;
  param_1[0xb] = &LAB_02083538;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = param_1;
  return;
}


// 0x02081248  newlib_sfp_lock_acquire

void FUN_02081248(void)

{
  return;
}


// 0x0208124c  newlib_sfp_lock_release

void FUN_0208124c(void)

{
  return;
}


// 0x02081258  newlib_sinit

void FUN_02081258(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    return;
  }
  *(code **)(param_1 + 0x3c) = FUN_02081340;
  *(undefined4 *)(param_1 + 0x2e4) = 3;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(int *)(param_1 + 0x2e8) = param_1 + 0x2ec;
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_020811ec(*(undefined4 *)(param_1 + 4),4,0,param_1);
  FUN_020811ec(*(undefined4 *)(param_1 + 8),9,1,param_1);
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  puVar1[0xc] = &LAB_02083510;
  puVar1[4] = 2;
  puVar1[9] = &LAB_020835f0;
  *(undefined2 *)(puVar1 + 3) = 10;
  puVar1[7] = 0;
  puVar1[10] = FUN_02083584;
  puVar1[0xb] = &LAB_02083538;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = puVar1;
  return;
}


// 0x020812e8  newlib_fp_unlock_all

void FUN_020812e8(void)

{
  FUN_020821cc(&DAT_0208f3a0,&LAB_020812e0);
  return;
}


// 0x02081314  newlib_fp_lock_all

void FUN_02081314(void)

{
  FUN_020821cc(&DAT_0208f3a0,&LAB_020812d8);
  return;
}


// 0x02081340  newlib_cleanup_r

void FUN_02081340(undefined4 param_1)

{
  FUN_020821cc(param_1,FUN_02081020);
  return;
}


// 0x02081370  newlib_sfmoreglue

undefined4 * FUN_02081370(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0208274c(param_1,param_2 * 0x60 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = 0;
    puVar1[2] = puVar1 + 3;
    FUN_02083058(puVar1 + 3,0,param_2 * 0x60);
  }
  return puVar1;
}


// 0x020813c0  newlib_sfp

undefined4 * FUN_020813c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  FUN_02081258(&DAT_0208f3a0);
  puVar1 = &DAT_0208f680;
  do {
    do {
      puVar3 = puVar1;
      iVar2 = puVar3[1];
      puVar1 = (undefined4 *)puVar3[2];
      if (-1 < iVar2 + -1) {
        do {
          if (*(short *)(puVar1 + 3) == 0) {
            puVar1[0x13] = 0;
            *puVar1 = 0;
            puVar1[2] = 0;
            puVar1[1] = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[0xd] = 0;
            puVar1[0xe] = 0;
            puVar1[0x12] = 0;
            puVar1[4] = 0xffffffff;
            *(undefined2 *)(puVar1 + 3) = 1;
            return puVar1;
          }
          bVar4 = iVar2 != 1;
          puVar1 = puVar1 + 0x18;
          iVar2 = iVar2 + -1;
        } while (bVar4);
      }
      puVar1 = (undefined4 *)*puVar3;
    } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
    puVar1 = (undefined4 *)FUN_02081370(param_1,4);
    *puVar3 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  *param_1 = 0xc;
  return (undefined4 *)0x0;
}


// 0x02081588  newlib_fopen

int FUN_02081588(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_1c [2];
  
  iVar1 = FUN_0208408c(&DAT_0208f3a0,param_2,local_1c);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = FUN_020813c0(&DAT_0208f3a0), iVar2 != 0)) {
    iVar3 = FUN_020830f8(&DAT_0208f3a0,param_1,local_1c[0],0x1b6);
    if (iVar3 < 0) {
      FUN_02081248();
      *(undefined2 *)(iVar2 + 0xc) = 0;
      FUN_0208124c();
      iVar2 = 0;
    }
    else {
      *(short *)(iVar2 + 0xc) = (short)iVar1;
      *(int *)(iVar2 + 0x10) = iVar3;
      *(undefined1 **)(iVar2 + 0x24) = &LAB_020835f0;
      *(code **)(iVar2 + 0x28) = FUN_02083584;
      *(undefined1 **)(iVar2 + 0x2c) = &LAB_02083538;
      *(undefined1 **)(iVar2 + 0x30) = &LAB_02083510;
      *(int *)(iVar2 + 0x20) = iVar2;
      if ((*(ushort *)(iVar2 + 0xc) & 0x100) != 0) {
        FUN_02081b8c(&DAT_0208f3a0,iVar2,0,2);
      }
    }
  }
  return iVar2;
}


// 0x020815a4  newlib_fread_r

int FUN_020815a4(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_34;
  
  uVar2 = param_3 * param_4;
  if (uVar2 == 0) {
    local_34 = 0;
  }
  else {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
      FUN_02081258();
    }
    uVar8 = param_5[1];
    if ((int)uVar8 < 0) {
      uVar8 = 0;
      param_5[1] = 0;
    }
    uVar4 = uVar2;
    local_34 = param_4;
    if ((*(ushort *)(param_5 + 3) & 2) == 0) {
      while (uVar8 < uVar4) {
        FUN_02082ec0(param_2,*param_5,uVar8);
        *param_5 = *param_5 + uVar8;
        iVar9 = FUN_02083320(param_1,param_5);
        param_2 = param_2 + uVar8;
        uVar4 = uVar4 - uVar8;
        if (iVar9 != 0) {
          iVar9 = FUN_02080380(uVar2 - uVar4,param_3);
          return iVar9;
        }
        uVar8 = param_5[1];
      }
      FUN_02082ec0(param_2,*param_5,uVar4);
      *param_5 = *param_5 + uVar4;
      param_5[1] = param_5[1] - uVar4;
    }
    else {
      if (uVar8 <= uVar2) {
        uVar4 = uVar8;
      }
      FUN_02082ec0(param_2,*param_5,uVar4);
      *param_5 = *param_5 + uVar4;
      param_5[1] = param_5[1] - uVar4;
      iVar9 = uVar2 - uVar4;
      if ((int *)param_5[0xd] != (int *)0x0 && uVar2 != uVar4) {
        if ((int *)param_5[0xd] != param_5 + 0x11) {
          FUN_020818d4(&DAT_0208f3a0);
        }
        param_5[0xd] = 0;
      }
      if (uVar2 - uVar4 != 0) {
        param_2 = param_2 + uVar4;
        do {
          iVar6 = param_5[5];
          iVar7 = *param_5;
          iVar5 = param_5[6];
          param_5[5] = param_2;
          *param_5 = param_2;
          param_5[6] = iVar9;
          iVar1 = FUN_02083320(param_1,param_5);
          iVar3 = param_5[1];
          param_5[5] = iVar6;
          param_5[6] = iVar5;
          *param_5 = iVar7;
          param_5[1] = 0;
          param_2 = param_2 + iVar3;
          iVar9 = iVar9 - iVar3;
          if (iVar1 != 0) {
            iVar9 = FUN_02080380(uVar2 - iVar9,param_3);
            return iVar9;
          }
        } while (iVar9 != 0);
      }
    }
  }
  return local_34;
}


// 0x02081788  newlib_fread

void FUN_02081788(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_020815a4(&DAT_0208f3a0,param_1,param_2,param_3,param_4);
  return;
}


// 0x020817cc  newlib_malloc_trim_r

undefined4 FUN_020817cc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_020830f0();
  uVar3 = *(uint *)(DAT_0208f7b8 + 4) & 0xfffffffc;
  iVar2 = ((uVar3 - param_2) + 0xfef >> 0xc) - 1;
  if (0xfff < iVar2 * 0x1000) {
    iVar1 = FUN_020834c8(param_1,0);
    if (iVar1 == uVar3 + DAT_0208f7b8) {
      iVar1 = FUN_020834c8(param_1,iVar2 * -0x1000);
      if (iVar1 != -1) {
        *(uint *)(DAT_0208f7b8 + 4) = uVar3 + iVar2 * -0x1000 | 1;
        DAT_020b4cb4 = DAT_020b4cb4 + iVar2 * -0x1000;
        FUN_020830f4(param_1);
        return 1;
      }
      iVar2 = FUN_020834c8(param_1,0);
      if (0xf < iVar2 - DAT_0208f7b8) {
        DAT_020b4cb4 = iVar2 - DAT_0208fbbc;
        *(uint *)(DAT_0208f7b8 + 4) = iVar2 - DAT_0208f7b8 | 1;
      }
    }
  }
  FUN_020830f4(param_1);
  return 0;
}


// 0x020818d4  newlib_free_r

void FUN_020818d4(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  
  if (param_2 == 0) {
    return;
  }
  FUN_020830f0();
  iVar11 = param_2 + -8;
  uVar2 = *(uint *)(param_2 + -4);
  uVar4 = uVar2 & 0xfffffffe;
  iVar9 = iVar11 + uVar4;
  uVar8 = *(uint *)(iVar9 + 4) & 0xfffffffc;
  if (iVar9 == DAT_0208f7b8) {
    uVar4 = uVar4 + uVar8;
    if ((uVar2 & 1) == 0) {
      iVar9 = *(int *)(param_2 + -8);
      iVar11 = iVar11 - iVar9;
      iVar6 = *(int *)(iVar11 + 0xc);
      iVar7 = *(int *)(iVar11 + 8);
      *(int *)(iVar6 + 8) = iVar7;
      *(int *)(iVar7 + 0xc) = iVar6;
      uVar4 = uVar4 + iVar9;
    }
    DAT_0208f7b8 = iVar11;
    *(uint *)(iVar11 + 4) = uVar4 | 1;
    if (0x1ffff < uVar4) {
      FUN_020817cc(param_1,DAT_020b4ca8);
    }
    goto LAB_0208194c;
  }
  *(uint *)(iVar9 + 4) = uVar8;
  if ((uVar2 & 1) == 0) {
    iVar6 = *(int *)(param_2 + -8);
    iVar11 = iVar11 - iVar6;
    puVar5 = *(undefined4 **)(iVar11 + 8);
    if (puVar5 != &DAT_0208f7b8) {
      iVar7 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar7 + 8) = puVar5;
      puVar5[3] = iVar7;
    }
    uVar4 = uVar4 + iVar6;
    bVar1 = puVar5 == &DAT_0208f7b8;
    if ((*(uint *)(iVar9 + uVar8 + 4) & 1) != 0) goto LAB_02081938;
LAB_02081960:
    uVar4 = uVar4 + uVar8;
    if (bVar1) {
      puVar5 = *(undefined4 **)(iVar9 + 8);
    }
    else {
      puVar5 = *(undefined4 **)(iVar9 + 8);
      if (puVar5 == &DAT_0208f7b8) {
        DAT_0208f7c0 = iVar11;
        DAT_0208f7c4 = iVar11;
        *(uint *)(uVar4 + iVar11) = uVar4;
        *(uint *)(iVar11 + 4) = uVar4 | 1;
        *(int **)(iVar11 + 8) = &DAT_0208f7b8;
        *(int **)(iVar11 + 0xc) = &DAT_0208f7b8;
        goto LAB_0208194c;
      }
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    *(undefined4 **)(iVar9 + 8) = puVar5;
    puVar5[3] = iVar9;
    *(uint *)(iVar11 + 4) = uVar4 | 1;
    *(uint *)(uVar4 + iVar11) = uVar4;
    if (bVar1) goto LAB_0208194c;
  }
  else {
    bVar1 = false;
    if ((*(uint *)(iVar9 + uVar8 + 4) & 1) == 0) goto LAB_02081960;
LAB_02081938:
    *(uint *)(iVar11 + 4) = uVar4 | 1;
    *(uint *)(uVar4 + iVar11) = uVar4;
    if (bVar1) goto LAB_0208194c;
  }
  if (uVar4 < 0x200) {
    DAT_0208f7b4 = DAT_0208f7b4 | 1 << (uVar4 >> 5 & 0xff);
    uVar4 = uVar4 & 0xfffffff8;
    iVar9 = *(int *)((int)&DAT_0208f7b8 + uVar4);
    *(undefined **)(iVar11 + 0xc) = &DAT_0208f7b0 + uVar4;
    *(int *)(iVar11 + 8) = iVar9;
    *(int *)(iVar9 + 0xc) = iVar11;
    *(int *)((int)&DAT_0208f7b8 + uVar4) = iVar11;
  }
  else {
    uVar2 = uVar4 >> 9;
    if (uVar2 == 0) {
      uVar2 = uVar4 >> 3;
      iVar9 = uVar2 << 3;
    }
    else if (uVar2 < 5) {
      uVar2 = (uVar4 >> 6) + 0x38;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x15) {
      uVar2 = uVar2 + 0x5b;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x55) {
      uVar2 = (uVar4 >> 0xc) + 0x6e;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x155) {
      uVar2 = (uVar4 >> 0xf) + 0x77;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x555) {
      uVar2 = (uVar4 >> 0x12) + 0x7c;
      iVar9 = uVar2 * 8;
    }
    else {
      uVar2 = 0x7e;
      iVar9 = 0x3f0;
    }
    puVar10 = &DAT_0208f7b0 + iVar9;
    puVar3 = *(undefined **)((int)&DAT_0208f7b8 + iVar9);
    if (puVar10 == puVar3) {
      DAT_0208f7b4 = DAT_0208f7b4 | 1 << ((int)uVar2 >> 2 & 0xffU);
    }
    else {
      do {
        if ((*(uint *)(puVar3 + 4) & 0xfffffffc) <= uVar4) break;
        puVar3 = *(undefined **)(puVar3 + 8);
      } while (puVar10 != puVar3);
      puVar10 = *(undefined **)(puVar3 + 0xc);
    }
    *(undefined **)(iVar11 + 0xc) = puVar10;
    *(undefined **)(iVar11 + 8) = puVar3;
    *(int *)(puVar3 + 0xc) = iVar11;
    *(int *)(puVar10 + 8) = iVar11;
  }
LAB_0208194c:
  FUN_020830f4(param_1);
  return;
}


// 0x02081b8c  newlib_fseek_r

undefined4 FUN_02081b8c(undefined4 *param_1,int *param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint local_74;
  undefined1 auStack_6c [8];
  uint local_64;
  int local_54;
  
  if ((param_1 == (undefined4 *)0x0) || (param_1[0xe] != 0)) {
    uVar7 = *(ushort *)(param_2 + 3);
  }
  else {
    FUN_02081258();
    uVar7 = *(ushort *)(param_2 + 3);
  }
  if ((uVar7 & 0x108) == 0x108) {
    FUN_02081034(param_2);
  }
  pcVar6 = (code *)param_2[0xb];
  if (pcVar6 == (code *)0x0) {
    *param_1 = 0x1d;
    return 0xffffffff;
  }
  if (param_4 == 1) {
    FUN_02081034(param_2);
    uVar7 = *(ushort *)(param_2 + 3);
    if ((uVar7 & 0x1000) == 0) {
      iVar3 = (*pcVar6)(param_2[8],uVar7 & 0x1000,1);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      uVar7 = *(ushort *)(param_2 + 3);
    }
    else {
      iVar3 = param_2[0x15];
    }
    if ((uVar7 & 4) == 0) {
      if (((uVar7 & 8) == 0) || (*param_2 == 0)) goto LAB_02081e38;
      iVar9 = param_2[5];
      iVar3 = iVar3 + (*param_2 - iVar9);
    }
    else {
      iVar3 = iVar3 - param_2[1];
      if (param_2[0xd] == 0) {
LAB_02081e38:
        iVar9 = param_2[5];
      }
      else {
        iVar9 = param_2[5];
        iVar3 = iVar3 - param_2[0x10];
      }
    }
    param_4 = 0;
    local_74 = param_3 + iVar3;
    bVar1 = true;
  }
  else {
    if ((param_4 != 2) && (param_4 != 0)) {
      *param_1 = 0x16;
      return 0xffffffff;
    }
    iVar3 = 0;
    iVar9 = param_2[5];
    bVar1 = false;
    local_74 = param_3;
  }
  if (iVar9 == 0) {
    FUN_020823f8(param_2);
  }
  uVar7 = *(ushort *)(param_2 + 3);
  if ((uVar7 & 0x81a) != 0) goto LAB_02081c58;
  if ((uVar7 & 0x400) == 0) {
    if ((pcVar6 == (code *)&LAB_02083538) && (-1 < param_2[4])) {
      iVar9 = FUN_0208201c(param_1,param_2[4],auStack_6c);
      if ((iVar9 == 0) && ((local_64 & 0xf000) == 0x8000)) {
        param_2[0x14] = 0x400;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x400;
        goto LAB_02081cb4;
      }
      uVar7 = *(ushort *)(param_2 + 3);
    }
    *(ushort *)(param_2 + 3) = uVar7 | 0x800;
    goto LAB_02081c58;
  }
LAB_02081cb4:
  uVar4 = local_74;
  if (param_4 != 0) {
    iVar9 = FUN_0208201c(param_1,param_2[4],auStack_6c);
    if (iVar9 != 0) goto LAB_02081c58;
    uVar4 = local_74 + local_54;
  }
  if (bVar1) {
    piVar5 = (int *)param_2[0xd];
    if (piVar5 != (int *)0x0) {
      uVar8 = (uint)*(ushort *)(param_2 + 3);
      iVar9 = param_2[1];
      iVar2 = param_2[0x10];
      goto LAB_02081cf4;
    }
    uVar8 = (uint)*(ushort *)(param_2 + 3);
    iVar9 = param_2[1];
LAB_02081f24:
    iVar10 = param_2[5];
    iVar2 = (*param_2 - iVar10) + iVar9;
    iVar3 = iVar3 - (*param_2 - iVar10);
  }
  else {
    uVar7 = *(ushort *)(param_2 + 3);
    uVar8 = (uint)uVar7;
    if ((uVar7 & 0x1000) == 0) {
      uVar11 = (*pcVar6)(param_2[8],uVar8 & 0x1000,1);
      if ((int)uVar11 == -1) goto LAB_02081c58;
      uVar8 = (uint)*(ushort *)(param_2 + 3);
    }
    else {
      uVar11 = (ulonglong)CONCAT24(uVar7,param_2[0x15]) & 0x1000ffffffff;
    }
    iVar2 = (int)(uVar11 >> 0x20);
    piVar5 = (int *)param_2[0xd];
    iVar9 = param_2[1];
    if (piVar5 != (int *)0x0) {
      iVar2 = param_2[0x10];
    }
    iVar3 = (int)uVar11 - iVar9;
    if (piVar5 == (int *)0x0) goto LAB_02081f24;
    iVar3 = iVar3 - iVar2;
LAB_02081cf4:
    iVar10 = param_2[5];
    iVar2 = (param_2[0xf] - iVar10) + iVar2;
    iVar3 = (iVar3 + iVar9) - (param_2[0xf] - iVar10);
  }
  uVar7 = (ushort)uVar8;
  if ((int)uVar4 < iVar3) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uVar8 >> 0xd ^ 1) & 1;
  }
  if ((uVar8 != 0) && (uVar4 < (uint)(iVar2 + iVar3))) {
    *param_2 = iVar10 + (uVar4 - iVar3);
    param_2[1] = iVar2 - (uVar4 - iVar3);
    if (piVar5 != (int *)0x0) {
      if (piVar5 != param_2 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0,piVar5);
        uVar7 = *(ushort *)(param_2 + 3);
      }
      param_2[0xd] = 0;
    }
    *(ushort *)(param_2 + 3) = uVar7 & 0xffdf;
    return 0;
  }
  iVar9 = param_2[0x14];
  iVar3 = (*pcVar6)(param_2[8],uVar4 & -iVar9,0);
  if (iVar3 != -1) {
    *param_2 = param_2[5];
    param_2[1] = 0;
    if ((int *)param_2[0xd] != (int *)0x0) {
      if ((int *)param_2[0xd] != param_2 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0);
      }
      param_2[0xd] = 0;
    }
    uVar4 = uVar4 - (uVar4 & -iVar9);
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xffdf;
    if (uVar4 == 0) {
      return 0;
    }
    iVar3 = FUN_02083320(param_1,param_2);
    if ((iVar3 == 0) && (uVar4 <= (uint)param_2[1])) {
      *param_2 = *param_2 + uVar4;
      param_2[1] = param_2[1] - uVar4;
      return 0;
    }
  }
LAB_02081c58:
  iVar3 = FUN_02081034(param_2);
  if ((iVar3 == 0) && (iVar3 = (*pcVar6)(param_2[8],local_74,param_4), iVar3 != -1)) {
    if ((int *)param_2[0xd] != (int *)0x0) {
      if ((int *)param_2[0xd] != param_2 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0);
      }
      param_2[0xd] = 0;
    }
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xf7df;
    *param_2 = param_2[5];
    param_2[1] = 0;
    return 0;
  }
  return 0xffffffff;
}


// 0x02081ff0  newlib_fseek

/* WARNING: Removing unreachable block (ram,0x02081bb4) */

undefined4 FUN_02081ff0(int *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uStack_74;
  undefined1 auStack_6c [8];
  uint uStack_64;
  int iStack_54;
  
  FUN_02081258();
  if ((*(ushort *)(param_1 + 3) & 0x108) == 0x108) {
    FUN_02081034(param_1);
  }
  pcVar6 = (code *)param_1[0xb];
  if (pcVar6 == (code *)0x0) {
    DAT_0208f3a0 = 0x1d;
    return 0xffffffff;
  }
  if (param_3 == 1) {
    FUN_02081034(param_1);
    uVar7 = *(ushort *)(param_1 + 3);
    if ((uVar7 & 0x1000) == 0) {
      iVar3 = (*pcVar6)(param_1[8],uVar7 & 0x1000,1);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      uVar7 = *(ushort *)(param_1 + 3);
    }
    else {
      iVar3 = param_1[0x15];
    }
    if ((uVar7 & 4) == 0) {
      if (((uVar7 & 8) == 0) || (*param_1 == 0)) goto LAB_02081e38;
      iVar9 = param_1[5];
      iVar3 = iVar3 + (*param_1 - iVar9);
    }
    else {
      iVar3 = iVar3 - param_1[1];
      if (param_1[0xd] == 0) {
LAB_02081e38:
        iVar9 = param_1[5];
      }
      else {
        iVar9 = param_1[5];
        iVar3 = iVar3 - param_1[0x10];
      }
    }
    param_3 = 0;
    uStack_74 = param_2 + iVar3;
    bVar1 = true;
  }
  else {
    if ((param_3 != 2) && (param_3 != 0)) {
      DAT_0208f3a0 = 0x16;
      return 0xffffffff;
    }
    iVar3 = 0;
    iVar9 = param_1[5];
    bVar1 = false;
    uStack_74 = param_2;
  }
  if (iVar9 == 0) {
    FUN_020823f8(param_1);
  }
  uVar7 = *(ushort *)(param_1 + 3);
  if ((uVar7 & 0x81a) != 0) goto LAB_02081c58;
  if ((uVar7 & 0x400) == 0) {
    if ((pcVar6 == (code *)&LAB_02083538) && (-1 < param_1[4])) {
      iVar9 = FUN_0208201c(&DAT_0208f3a0,param_1[4],auStack_6c);
      if ((iVar9 == 0) && ((uStack_64 & 0xf000) == 0x8000)) {
        param_1[0x14] = 0x400;
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x400;
        goto LAB_02081cb4;
      }
      uVar7 = *(ushort *)(param_1 + 3);
    }
    *(ushort *)(param_1 + 3) = uVar7 | 0x800;
    goto LAB_02081c58;
  }
LAB_02081cb4:
  uVar4 = uStack_74;
  if (param_3 != 0) {
    iVar9 = FUN_0208201c(&DAT_0208f3a0,param_1[4],auStack_6c);
    if (iVar9 != 0) goto LAB_02081c58;
    uVar4 = uStack_74 + iStack_54;
  }
  if (bVar1) {
    piVar5 = (int *)param_1[0xd];
    if (piVar5 != (int *)0x0) {
      uVar8 = (uint)*(ushort *)(param_1 + 3);
      iVar9 = param_1[1];
      iVar2 = param_1[0x10];
      goto LAB_02081cf4;
    }
    uVar8 = (uint)*(ushort *)(param_1 + 3);
    iVar9 = param_1[1];
LAB_02081f24:
    iVar10 = param_1[5];
    iVar2 = (*param_1 - iVar10) + iVar9;
    iVar3 = iVar3 - (*param_1 - iVar10);
  }
  else {
    uVar7 = *(ushort *)(param_1 + 3);
    uVar8 = (uint)uVar7;
    if ((uVar7 & 0x1000) == 0) {
      uVar11 = (*pcVar6)(param_1[8],uVar8 & 0x1000,1);
      if ((int)uVar11 == -1) goto LAB_02081c58;
      uVar8 = (uint)*(ushort *)(param_1 + 3);
    }
    else {
      uVar11 = (ulonglong)CONCAT24(uVar7,param_1[0x15]) & 0x1000ffffffff;
    }
    iVar2 = (int)(uVar11 >> 0x20);
    piVar5 = (int *)param_1[0xd];
    iVar9 = param_1[1];
    if (piVar5 != (int *)0x0) {
      iVar2 = param_1[0x10];
    }
    iVar3 = (int)uVar11 - iVar9;
    if (piVar5 == (int *)0x0) goto LAB_02081f24;
    iVar3 = iVar3 - iVar2;
LAB_02081cf4:
    iVar10 = param_1[5];
    iVar2 = (param_1[0xf] - iVar10) + iVar2;
    iVar3 = (iVar3 + iVar9) - (param_1[0xf] - iVar10);
  }
  uVar7 = (ushort)uVar8;
  if ((int)uVar4 < iVar3) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uVar8 >> 0xd ^ 1) & 1;
  }
  if ((uVar8 != 0) && (uVar4 < (uint)(iVar2 + iVar3))) {
    *param_1 = iVar10 + (uVar4 - iVar3);
    param_1[1] = iVar2 - (uVar4 - iVar3);
    if (piVar5 != (int *)0x0) {
      if (piVar5 != param_1 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0,piVar5);
        uVar7 = *(ushort *)(param_1 + 3);
      }
      param_1[0xd] = 0;
    }
    *(ushort *)(param_1 + 3) = uVar7 & 0xffdf;
    return 0;
  }
  iVar9 = param_1[0x14];
  iVar3 = (*pcVar6)(param_1[8],uVar4 & -iVar9,0);
  if (iVar3 != -1) {
    *param_1 = param_1[5];
    param_1[1] = 0;
    if ((int *)param_1[0xd] != (int *)0x0) {
      if ((int *)param_1[0xd] != param_1 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0);
      }
      param_1[0xd] = 0;
    }
    uVar4 = uVar4 - (uVar4 & -iVar9);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xffdf;
    if (uVar4 == 0) {
      return 0;
    }
    iVar3 = FUN_02083320(&DAT_0208f3a0,param_1);
    if ((iVar3 == 0) && (uVar4 <= (uint)param_1[1])) {
      *param_1 = *param_1 + uVar4;
      param_1[1] = param_1[1] - uVar4;
      return 0;
    }
  }
LAB_02081c58:
  iVar3 = FUN_02081034(param_1);
  if ((iVar3 == 0) && (iVar3 = (*pcVar6)(param_1[8],uStack_74,param_3), iVar3 != -1)) {
    if ((int *)param_1[0xd] != (int *)0x0) {
      if ((int *)param_1[0xd] != param_1 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0);
      }
      param_1[0xd] = 0;
    }
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xf7df;
    *param_1 = param_1[5];
    param_1[1] = 0;
    return 0;
  }
  return 0xffffffff;
}


// 0x0208201c  helper_for_newlib_fseek_r

void FUN_0208201c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_0208502c(param_2,param_3);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x0208212c  newlib_ftell

int FUN_0208212c(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  FUN_02081258();
  if (param_1[0xb] == 0) {
    iVar2 = -1;
    DAT_0208f3a0 = 0x1d;
  }
  else {
    FUN_02081034(param_1);
    uVar1 = *(ushort *)(param_1 + 3);
    if ((uVar1 & 0x1000) == 0) {
      iVar2 = (*(code *)param_1[0xb])(param_1[8],uVar1 & 0x1000,1);
      if (iVar2 == -1) {
        return -1;
      }
      uVar1 = *(ushort *)(param_1 + 3);
    }
    else {
      iVar2 = param_1[0x15];
    }
    if ((uVar1 & 4) == 0) {
      if (((uVar1 & 8) != 0) && (*param_1 != 0)) {
        iVar2 = iVar2 + (*param_1 - param_1[5]);
      }
    }
    else {
      iVar3 = 0;
      if (param_1[0xd] != 0) {
        iVar3 = param_1[0x10];
      }
      iVar2 = iVar2 - param_1[1];
      if (param_1[0xd] != 0) {
        iVar2 = iVar2 - iVar3;
      }
    }
  }
  return iVar2;
}


// 0x02082140  newlib_fwalk_reent

uint FUN_02082140(int param_1,code *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  FUN_02081248();
  piVar5 = (int *)(param_1 + 0x2e0);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      iVar4 = piVar5[1];
      iVar2 = piVar5[2];
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          if ((*(short *)(iVar2 + 0xc) != 0) && (*(int *)(iVar2 + 0x10) != -1)) {
            uVar1 = (*param_2)(param_1,iVar2);
            uVar6 = uVar6 | uVar1;
          }
          iVar2 = iVar2 + 0x60;
        } while (iVar4 != iVar3);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  FUN_0208124c();
  return uVar6;
}


// 0x020821cc  newlib_fwalk

uint FUN_020821cc(int param_1,code *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  FUN_02081248();
  piVar5 = (int *)(param_1 + 0x2e0);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      iVar4 = piVar5[1];
      iVar2 = piVar5[2];
      if (-1 < iVar4 + -1) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          if ((*(short *)(iVar2 + 0xc) != 0) && (*(int *)(iVar2 + 0x10) != -1)) {
            uVar1 = (*param_2)(iVar2);
            uVar6 = uVar6 | uVar1;
          }
          iVar2 = iVar2 + 0x60;
        } while (iVar4 != iVar3);
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  FUN_0208124c();
  return uVar6;
}


// 0x0208225c  newlib_fwrite_r

int FUN_0208225c(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  iVar2 = param_3 * param_4;
  puStack_2c = &local_20;
  uStack_28 = 1;
  local_24 = iVar2;
  local_20 = param_2;
  local_1c = iVar2;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
    FUN_02081258();
  }
  iVar1 = FUN_02084130(param_1,param_5,&puStack_2c);
  if (iVar1 != 0) {
    param_4 = FUN_02080380(iVar2 - local_24,param_3);
  }
  return param_4;
}


// 0x020822e0  newlib_fwrite

void FUN_020822e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0208225c(&DAT_0208f3a0,param_1,param_2,param_3,param_4);
  return;
}


// 0x020823f8  newlib_smakebuf

void FUN_020823f8(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_5c [8];
  uint local_54;
  
  uVar1 = *(ushort *)(param_1 + 3);
  if ((uVar1 & 2) != 0) {
    param_1[6] = 1;
    param_1[5] = (int)param_1 + 0x47;
    *param_1 = (int)param_1 + 0x47;
    return;
  }
  if (-1 < param_1[4]) {
    iVar2 = FUN_0208201c(&DAT_0208f3a0,param_1[4],auStack_5c);
    if (-1 < iVar2) {
      bVar4 = (local_54 & 0xf000) == 0x2000;
      if (((local_54 & 0xf000) == 0x8000) && ((undefined1 *)param_1[0xb] == &LAB_02083538)) {
        iVar2 = 0x400;
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x400;
        param_1[0x14] = 0x400;
      }
      else {
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x800;
        iVar2 = 0x400;
      }
      goto LAB_02082478;
    }
    uVar1 = *(ushort *)(param_1 + 3);
  }
  if ((uVar1 & 0x80) == 0) {
    iVar2 = 0x400;
  }
  else {
    iVar2 = 0x40;
  }
  bVar4 = false;
  *(ushort *)(param_1 + 3) = uVar1 | 0x800;
LAB_02082478:
  iVar3 = FUN_0208274c(&DAT_0208f3a0,iVar2);
  if (iVar3 == 0) {
    param_1[6] = 1;
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 2;
    param_1[5] = (int)param_1 + 0x47;
    *param_1 = (int)param_1 + 0x47;
  }
  else {
    DAT_0208f3dc = FUN_02081340;
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x80;
    param_1[5] = iVar3;
    param_1[6] = iVar2;
    *param_1 = iVar3;
    if ((bVar4) && (iVar2 = FUN_020850a0(param_1[4]), iVar2 != 0)) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 1;
    }
  }
  return;
}


// 0x02082560  helper_calls_memalign_r

void FUN_02082560(undefined4 param_1,undefined4 param_2)

{
  FUN_02082590(&DAT_0208f3a0,param_1,param_2);
  return;
}


// 0x02082590  newlib_memalign_r

int FUN_02082590(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 < 9) {
    iVar1 = FUN_0208274c();
  }
  else {
    uVar4 = param_3 + 0xb;
    if (param_2 < 0x10) {
      param_2 = 0x10;
    }
    if (uVar4 < 0x17) {
      uVar6 = 0x10;
      uVar4 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffff8;
      uVar4 = uVar4 >> 0x1f;
    }
    if (uVar6 < param_3) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      iVar2 = FUN_0208274c(param_1,param_2 + uVar6 + 0x10);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_020830f0(param_1);
        FUN_0208047c(iVar2,param_2);
        iVar1 = iVar2 + -8;
        if (extraout_r1 != 0) {
          iVar5 = ((iVar2 + param_2) - 1 & -param_2) - 8;
          uVar4 = iVar5 - iVar1;
          if ((int)uVar4 < 0x10) {
            uVar4 = (iVar5 + param_2) - iVar1;
            iVar5 = iVar5 + param_2;
          }
          iVar1 = iVar5;
          uVar3 = (*(uint *)(iVar2 + -4) & 0xfffffffc) - uVar4;
          *(uint *)(iVar1 + 4) = uVar3 | 1;
          iVar5 = iVar1 + uVar3;
          *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 1;
          *(uint *)(iVar2 + -4) = uVar4 | *(uint *)(iVar2 + -4) & 1;
          FUN_020818d4(param_1,iVar2);
        }
        uVar4 = (*(uint *)(iVar1 + 4) & 0xfffffffc) - uVar6;
        if (0xf < (int)uVar4) {
          *(uint *)(uVar6 + iVar1 + 4) = uVar4 | 1;
          *(uint *)(iVar1 + 4) = uVar6 | *(uint *)(iVar1 + 4) & 1;
          FUN_020818d4(param_1,uVar6 + iVar1 + 8);
        }
        FUN_020830f4(param_1);
        iVar1 = iVar1 + 8;
      }
    }
    else {
      iVar1 = 0;
      *param_1 = 0xc;
    }
  }
  return iVar1;
}


// 0x020826fc  helper_calls_free_r

void FUN_020826fc(undefined4 param_1)

{
  FUN_020818d4(&DAT_0208f3a0,param_1);
  return;
}


// 0x02082724  helper_calls_malloc_r

void FUN_02082724(undefined4 param_1)

{
  FUN_0208274c(&DAT_0208f3a0,param_1);
  return;
}


// 0x0208274c  newlib_malloc_r

/* WARNING: Type propagation algorithm not settling */

int * FUN_0208274c(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  
  uVar8 = param_2 + 0xb;
  if (uVar8 < 0x17) {
    uVar14 = 0x10;
    uVar8 = 0;
  }
  else {
    uVar14 = uVar8 & 0xfffffff8;
    uVar8 = uVar8 >> 0x1f;
  }
  if (uVar14 < param_2) {
    uVar8 = 1;
  }
  if (uVar8 != 0) {
    *param_1 = 0xc;
    return (int *)0x0;
  }
  FUN_020830f0(param_1);
  puVar15 = DAT_0208f7c0;
  if (uVar14 < 0x1f8) {
    uVar8 = uVar14 >> 3;
    puVar12 = (undefined *)(&DAT_0208f7bc)[uVar8 * 2];
    if ((&DAT_0208f7b0 + uVar8 * 8 != puVar12) ||
       (puVar11 = puVar12 + 8, puVar12 = *(undefined **)(puVar12 + 0x14), puVar11 != puVar12)) {
      uVar14 = *(uint *)(puVar12 + 4);
      uVar8 = *(uint *)(puVar12 + (uVar14 & 0xfffffffc) + 4);
      iVar1 = *(int *)(puVar12 + 0xc);
      iVar4 = *(int *)(puVar12 + 8);
      *(int *)(iVar1 + 8) = iVar4;
      *(int *)(iVar4 + 0xc) = iVar1;
      *(uint *)(puVar12 + (uVar14 & 0xfffffffc) + 4) = uVar8 | 1;
      FUN_020830f4(param_1);
      return (int *)(puVar12 + 8);
    }
    uVar8 = uVar8 + 2;
  }
  else {
    uVar8 = uVar14 >> 9;
    if (uVar8 == 0) {
      uVar8 = uVar14 >> 3;
      iVar1 = uVar8 << 3;
    }
    else if (uVar8 < 5) {
      uVar8 = (uVar14 >> 6) + 0x38;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x15) {
      uVar8 = uVar8 + 0x5b;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x55) {
      uVar8 = (uVar14 >> 0xc) + 0x6e;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x155) {
      uVar8 = (uVar14 >> 0xf) + 0x77;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x555) {
      uVar8 = (uVar14 >> 0x12) + 0x7c;
      iVar1 = uVar8 * 8;
    }
    else {
      uVar8 = 0x7e;
      iVar1 = 0x3f0;
    }
    for (puVar12 = *(undefined **)((int)&DAT_0208f7bc + iVar1); &DAT_0208f7b0 + iVar1 != puVar12;
        puVar12 = *(undefined **)(puVar12 + 0xc)) {
      uVar2 = *(uint *)(puVar12 + 4) & 0xfffffffc;
      if (0xf < (int)(uVar2 - uVar14)) {
        uVar8 = uVar8 - 1;
        break;
      }
      if (-1 < (int)(uVar2 - uVar14)) {
        iVar1 = *(int *)(puVar12 + 0xc);
        iVar4 = *(int *)(puVar12 + 8);
        *(uint *)(puVar12 + uVar2 + 4) = *(uint *)(puVar12 + uVar2 + 4) | 1;
        *(int *)(iVar1 + 8) = iVar4;
        *(int *)(iVar4 + 0xc) = iVar1;
        FUN_020830f4(param_1);
        return (int *)(puVar12 + 8);
      }
    }
    uVar8 = uVar8 + 1;
  }
  uVar2 = DAT_0208f7b4;
  if ((undefined **)DAT_0208f7c0 != &DAT_0208f7b8) {
    uVar9 = DAT_0208f7c0[1];
    uVar7 = uVar9 & 0xfffffffc;
    uVar2 = uVar7 - uVar14;
    if (0xf < (int)uVar2) {
      iVar1 = (int)DAT_0208f7c0 + uVar14;
      *(uint *)(iVar1 + uVar2) = uVar2;
      DAT_0208f7c0[1] = uVar14 | 1;
      DAT_0208f7c0 = (undefined4 *)iVar1;
      DAT_0208f7c4 = (undefined4 *)iVar1;
      *(uint *)(iVar1 + 4) = uVar2 | 1;
      *(undefined ***)(iVar1 + 8) = &DAT_0208f7b8;
      *(undefined ***)(iVar1 + 0xc) = &DAT_0208f7b8;
      FUN_020830f4(param_1);
      return puVar15 + 2;
    }
    DAT_0208f7c4 = &DAT_0208f7b8;
    DAT_0208f7c0 = &DAT_0208f7b8;
    if (-1 < (int)uVar2) {
      *(uint *)((int)puVar15 + uVar7 + 4) = *(uint *)((int)puVar15 + uVar7 + 4) | 1;
      FUN_020830f4(param_1);
      return puVar15 + 2;
    }
    if (uVar7 < 0x200) {
      uVar2 = DAT_0208f7b4 | 1 << (uVar9 >> 5 & 0xff);
      uVar9 = uVar9 & 0xfffffff8;
      iVar1 = *(int *)((int)&DAT_0208f7b8 + uVar9);
      puVar15[3] = &DAT_0208f7b0 + uVar9;
      puVar15[2] = iVar1;
      DAT_0208f7b4 = uVar2;
      *(undefined4 **)(iVar1 + 0xc) = puVar15;
      *(undefined4 **)((int)&DAT_0208f7b8 + uVar9) = puVar15;
    }
    else {
      uVar2 = uVar9 >> 9;
      if (uVar2 == 0) {
        uVar9 = uVar9 >> 3;
        iVar1 = uVar9 << 3;
      }
      else if (uVar2 < 5) {
        uVar9 = (uVar9 >> 6) + 0x38;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x15) {
        uVar9 = uVar2 + 0x5b;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x55) {
        uVar9 = (uVar9 >> 0xc) + 0x6e;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x155) {
        uVar9 = (uVar9 >> 0xf) + 0x77;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x555) {
        uVar9 = (uVar9 >> 0x12) + 0x7c;
        iVar1 = uVar9 * 8;
      }
      else {
        uVar9 = 0x7e;
        iVar1 = 0x3f0;
      }
      puVar11 = &DAT_0208f7b0 + iVar1;
      puVar12 = *(undefined **)((int)&DAT_0208f7b8 + iVar1);
      if (puVar11 == puVar12) {
        DAT_0208f7b4 = DAT_0208f7b4 | 1 << (uVar9 >> 2 & 0xff);
      }
      else {
        do {
          if ((*(uint *)(puVar12 + 4) & 0xfffffffc) <= uVar7) break;
          puVar12 = *(undefined **)(puVar12 + 8);
        } while (puVar11 != puVar12);
        puVar11 = *(undefined **)(puVar12 + 0xc);
      }
      puVar15[3] = puVar11;
      puVar15[2] = puVar12;
      *(undefined4 **)(puVar12 + 0xc) = puVar15;
      *(undefined4 **)(puVar11 + 8) = puVar15;
      uVar2 = DAT_0208f7b4;
    }
  }
  puVar12 = DAT_0208f7b8;
  uVar9 = uVar8 + 3;
  if (-1 < (int)uVar8) {
    uVar9 = uVar8;
  }
  uVar9 = 1 << ((int)uVar9 >> 2 & 0xffU);
  if (uVar9 <= uVar2) {
    if ((uVar9 & uVar2) == 0) {
      uVar8 = uVar8 & 0xfffffffc;
      do {
        uVar9 = uVar9 << 1;
        uVar8 = uVar8 + 4;
      } while ((uVar2 & uVar9) == 0);
    }
    do {
      puVar15 = (undefined4 *)(&DAT_0208f7b0 + uVar8 * 8);
      puVar5 = puVar15;
      uVar7 = uVar8;
      while( true ) {
        for (puVar13 = (undefined4 *)puVar5[3]; puVar5 != puVar13;
            puVar13 = (undefined4 *)puVar13[3]) {
          uVar10 = puVar13[1] & 0xfffffffc;
          uVar16 = uVar10 - uVar14;
          if (0xf < (int)uVar16) {
            puVar12 = (undefined *)((int)puVar13 + uVar14);
            iVar1 = puVar13[3];
            puVar13[1] = uVar14 | 1;
            iVar4 = puVar13[2];
            *(int *)(iVar1 + 8) = iVar4;
            *(int *)(iVar4 + 0xc) = iVar1;
            DAT_0208f7c0 = (undefined4 *)puVar12;
            DAT_0208f7c4 = (undefined4 *)puVar12;
            *(uint *)(puVar12 + uVar16) = uVar16;
            *(uint *)(puVar12 + 4) = uVar16 | 1;
            *(undefined ***)(puVar12 + 8) = &DAT_0208f7b8;
            *(undefined ***)(puVar12 + 0xc) = &DAT_0208f7b8;
            FUN_020830f4(param_1);
            return puVar13 + 2;
          }
          if (-1 < (int)uVar16) {
            uVar8 = *(uint *)((int)puVar13 + uVar10 + 4);
            iVar1 = puVar13[3];
            iVar4 = puVar13[2];
            *(int *)(iVar1 + 8) = iVar4;
            *(int *)(iVar4 + 0xc) = iVar1;
            *(uint *)((int)puVar13 + uVar10 + 4) = uVar8 | 1;
            FUN_020830f4(param_1);
            return puVar13 + 2;
          }
        }
        uVar7 = uVar7 + 1;
        if ((uVar7 & 3) == 0) break;
        puVar5 = puVar5 + 2;
      }
      do {
        uVar10 = uVar8 & 3;
        puVar5 = puVar15 + -2;
        uVar8 = uVar8 - 1;
        if (uVar10 == 0) {
          uVar2 = uVar2 & ~uVar9;
          DAT_0208f7b4 = uVar2;
          break;
        }
        puVar13 = (undefined4 *)*puVar15;
        puVar15 = puVar5;
      } while (puVar13 == puVar5);
      uVar9 = uVar9 * 2;
      if ((uVar2 < uVar9) || (uVar8 = uVar7, uVar9 == 0)) break;
      for (; (uVar9 & uVar2) == 0; uVar9 = uVar9 << 1) {
        uVar8 = uVar8 + 4;
      }
    } while( true );
  }
  uVar2 = *(uint *)(DAT_0208f7b8 + 4) & 0xfffffffc;
  uVar8 = uVar2 - uVar14;
  puVar11 = DAT_0208f7b8;
  if (uVar14 <= uVar2 && 0xf < (int)uVar8) goto LAB_02082bdc;
  uVar8 = uVar14 + DAT_020b4ca8 + 0x10;
  if (DAT_0208fbbc != (undefined *)0xffffffff) {
    uVar8 = uVar8 + 0xfff & 0xfffff000;
  }
  puVar3 = (undefined *)FUN_020834c8(param_1,uVar8);
  puVar11 = DAT_0208f7b8;
  if (puVar3 != (undefined *)0xffffffff) {
    puVar6 = puVar12 + uVar2;
    if (puVar3 < puVar6) {
      if (puVar12 != &DAT_0208f7b0) goto LAB_02082ba4;
LAB_02082cbc:
      DAT_020b4cb4 = DAT_020b4cb4 + uVar8;
      puVar11 = puVar3;
      if (DAT_0208fbbc != (undefined *)0xffffffff) {
        DAT_020b4cb4 = puVar3 + ((int)DAT_020b4cb4 - (int)puVar6);
        puVar11 = DAT_0208fbbc;
      }
      DAT_0208fbbc = puVar11;
      if (((uint)puVar3 & 7) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 8 - ((uint)puVar3 & 7);
        puVar3 = puVar3 + iVar1;
      }
      iVar1 = iVar1 + (0x1000 - ((uint)(puVar3 + uVar8) & 0xfff));
      iVar4 = FUN_020834c8(param_1,iVar1);
      if (iVar4 == -1) {
        iVar1 = 0;
        uVar8 = 1;
      }
      else {
        uVar8 = (iVar4 - (int)puVar3) + iVar1 | 1;
      }
      DAT_020b4cb4 = DAT_020b4cb4 + iVar1;
      *(uint *)(puVar3 + 4) = uVar8;
      puVar11 = puVar3;
      DAT_0208f7b8 = puVar3;
      if (puVar12 != &DAT_0208f7b0) {
        if (uVar2 < 0x10) {
          *(undefined4 *)(puVar3 + 4) = 1;
          goto LAB_02082ba4;
        }
        uVar8 = uVar2 - 0xc & 0xfffffff8;
        *(undefined4 *)(puVar12 + uVar8 + 8) = 5;
        *(undefined4 *)(puVar12 + uVar8 + 4) = 5;
        *(uint *)(puVar12 + 4) = uVar8 | *(uint *)(puVar12 + 4) & 1;
        if (0xf < uVar8) {
          FUN_020818d4(param_1,puVar12 + 8);
          puVar11 = DAT_0208f7b8;
        }
      }
    }
    else {
      if ((puVar6 != puVar3) || (((uint)puVar3 & 0xfff) != 0)) goto LAB_02082cbc;
      DAT_020b4cb4 = DAT_020b4cb4 + uVar8;
      *(uint *)(DAT_0208f7b8 + 4) = uVar8 + uVar2 | 1;
    }
    if (DAT_020b4cac < DAT_020b4cb4) {
      DAT_020b4cac = DAT_020b4cb4;
    }
    if (DAT_020b4cb0 < DAT_020b4cb4) {
      DAT_020b4cb0 = DAT_020b4cb4;
    }
  }
LAB_02082ba4:
  uVar8 = (*(uint *)(puVar11 + 4) & 0xfffffffc) - uVar14;
  if ((*(uint *)(puVar11 + 4) & 0xfffffffc) < uVar14 || (int)uVar8 < 0x10) {
    FUN_020830f4(param_1);
    return (int *)0x0;
  }
LAB_02082bdc:
  DAT_0208f7b8 = puVar11 + uVar14;
  *(uint *)(puVar11 + 4) = uVar14 | 1;
  *(uint *)(DAT_0208f7b8 + 4) = uVar8 | 1;
  FUN_020830f4(param_1);
  return (int *)(puVar11 + 8);
}


// 0x02082ec0  newlib_memcpy

void FUN_02082ec0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_3 = param_3 - 0x10;
      param_1[3] = param_2[3];
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(uVar1 + (int)param_1) = *(undefined1 *)param_2;
      uVar1 = uVar1 + 1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (uVar1 != param_3);
  }
  return;
}


// 0x02082f5c  newlib_memmove

undefined4 * FUN_02082f5c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  if ((param_2 < param_1) && (puVar3 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar3)) {
    if (param_3 != 0) {
      puVar1 = (undefined1 *)((int)param_1 + param_3);
      puVar4 = puVar1 + -param_3;
      do {
        puVar3 = (undefined4 *)((int)puVar3 + -1);
        puVar1 = puVar1 + -1;
        *puVar1 = *(undefined1 *)puVar3;
      } while (puVar4 != puVar1);
    }
  }
  else {
    puVar3 = param_1;
    if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
      do {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        puVar3[2] = param_2[2];
        param_3 = param_3 - 0x10;
        puVar3[3] = param_2[3];
        param_2 = param_2 + 4;
        puVar3 = puVar3 + 4;
      } while (0xf < param_3);
      for (; 3 < param_3; param_3 = param_3 - 4) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        *(undefined1 *)(uVar2 + (int)puVar3) = *(undefined1 *)param_2;
        uVar2 = uVar2 + 1;
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (uVar2 != param_3);
    }
  }
  return param_1;
}


// 0x02083058  newlib_memset

void FUN_02083058(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_3 < 4) || (((uint)param_1 & 3) != 0)) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    if (param_3 < 0x10) goto LAB_020830d0;
    do {
      param_3 = param_3 - 0x10;
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
LAB_020830d0:
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
    if (param_3 == 0) {
      return;
    }
  }
  uVar1 = 0;
  do {
    *(undefined1 *)(uVar1 + (int)param_1) = param_2;
    uVar1 = uVar1 + 1;
  } while (uVar1 != param_3);
  return;
}


// 0x020830f0  helper_for_newlib_malloc_trim_r

void FUN_020830f0(void)

{
  return;
}


// 0x020830f4  helper_for_newlib_malloc_trim_r

void FUN_020830f4(void)

{
  return;
}


// 0x020830f8  helper_for_newlib_fopen

void FUN_020830f8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_020850fc(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x02083144  newlib_wrapup_reent

void FUN_02083144(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_0208f3a0;
  }
  for (piVar4 = (int *)param_1[0x52]; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    iVar3 = piVar4[1];
    if (-1 < iVar3 + -1) {
      puVar2 = piVar4 + iVar3 + 2;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + -1;
        (*(code *)*puVar2)();
      } while (iVar1 != iVar3);
    }
  }
  if ((code *)param_1[0xf] != (code *)0x0) {
    (*(code *)param_1[0xf])(param_1);
  }
  return;
}


// 0x020831c0  newlib_cleanup_glue

void FUN_020831c0(undefined4 param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_020831c0();
  }
  FUN_020818d4(param_1,param_2);
  return;
}


// 0x02083320  newlib_srefill_r

uint FUN_02083320(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  FUN_02081258(&DAT_0208f3a0);
  uVar2 = *(ushort *)(param_2 + 3);
  uVar3 = uVar2 & 0x20;
  param_2[1] = 0;
  if ((uVar2 & 0x20) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x10) == 0) {
        *param_1 = 9;
        *(ushort *)(param_2 + 3) = uVar2 | 0x40;
        return 0xffffffff;
      }
      if ((uVar2 & 8) != 0) {
        iVar1 = FUN_02081034(param_2);
        if (iVar1 != 0) goto LAB_0208345c;
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) & 0xfff7;
        uVar2 = *(ushort *)(param_2 + 3);
        param_2[7] = uVar3;
        param_2[2] = uVar3;
      }
      *(ushort *)(param_2 + 3) = uVar2 | 4;
    }
    else if ((undefined4 *)param_2[0xd] != (undefined4 *)0x0) {
      if ((undefined4 *)param_2[0xd] != param_2 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0);
      }
      param_2[0xd] = uVar3;
      param_2[1] = param_2[0x10];
      if (param_2[0x10] != 0) {
        *param_2 = param_2[0xf];
        return uVar3;
      }
    }
    if (param_2[5] == 0) {
      FUN_020823f8(param_2);
    }
    if ((*(ushort *)(param_2 + 3) & 3) != 0) {
      FUN_020821cc(&DAT_0208f3a0,&LAB_020832e8);
    }
    *param_2 = param_2[5];
    iVar1 = (*(code *)param_2[9])(param_2[8]);
    uVar2 = *(ushort *)(param_2 + 3);
    param_2[1] = iVar1;
    *(ushort *)(param_2 + 3) = uVar2 & 0xdfff;
    if (iVar1 < 1) {
      if (iVar1 == 0) {
        *(ushort *)(param_2 + 3) = uVar2 & 0xdfff | 0x20;
        uVar3 = 0xffffffff;
      }
      else {
        *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
        param_2[1] = 0;
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
LAB_0208345c:
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


// 0x020834c8  helper_for_newlib_malloc_trim_r

void FUN_020834c8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_0208523c(param_2);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x02083584  newlib_swrite

void FUN_02083584(int param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xc);
  if ((uVar1 & 0x100) != 0) {
    FUN_02084574(&DAT_0208f3a0,*(undefined4 *)(param_1 + 0x10),0,2);
    uVar1 = *(ushort *)(param_1 + 0xc);
  }
  *(ushort *)(param_1 + 0xc) = uVar1 & 0xefff;
  FUN_02083ffc(&DAT_0208f3a0,*(undefined4 *)(param_1 + 0x10),param_2,param_3);
  return;
}


// 0x02083638  newlib_strcasecmp

int FUN_02083638(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    uVar2 = (uint)*param_2;
  }
  else {
    do {
      uVar2 = (uint)*param_2;
      uVar4 = uVar1;
      if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
        uVar4 = uVar1 + 0x20;
      }
      uVar3 = uVar2;
      if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
        uVar3 = uVar2 + 0x20;
      }
      param_2 = param_2 + 1;
      if (uVar4 != uVar3) goto LAB_02083694;
      param_1 = param_1 + 1;
      uVar1 = (uint)*param_1;
    } while (uVar1 != 0);
    uVar2 = (uint)*param_2;
  }
LAB_02083694:
  if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
    uVar1 = uVar1 + 0x20;
  }
  if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
    uVar2 = uVar2 + 0x20;
  }
  return uVar1 - uVar2;
}


// 0x020836d4  newlib_strchr

uint * FUN_020836d4(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  if (((uint)param_1 & 3) == 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      uVar4 = param_2 | uVar4 << 8;
    } while (iVar3 != 4);
    uVar2 = *param_1;
    if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) == 0) {
      for (uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4); uVar2 == 0;
          uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4)) {
        param_1 = param_1 + 1;
        uVar2 = *param_1;
        if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) != 0) break;
      }
    }
  }
  bVar1 = (byte)*param_1;
  while( true ) {
    if (bVar1 == 0) {
      if (param_2 != 0) {
        param_1 = (uint *)0x0;
      }
      return param_1;
    }
    if (param_2 == bVar1) break;
    param_1 = (uint *)((int)param_1 + 1);
    bVar1 = *(byte *)param_1;
  }
  return param_1;
}


// 0x020837ec  newlib_strcmp

int FUN_020837ec(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (((((uint)param_1 | (uint)param_2) & 3) == 0) && (uVar2 = *param_1, uVar2 == *param_2)) {
    uVar2 = uVar2 + 0xfefefeff & 0x80808080 & ~uVar2;
    while( true ) {
      if (uVar2 != 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      uVar2 = *param_1;
      param_2 = param_2 + 1;
      if (uVar2 != *param_2) break;
      uVar2 = uVar2 + 0xfefefeff & 0x80808080 & ~uVar2;
    }
  }
  bVar1 = (byte)*param_1;
  while( true ) {
    uVar2 = (uint)bVar1;
    if (uVar2 == 0) {
      return -(uint)(byte)*param_2;
    }
    if ((byte)*param_2 != uVar2) break;
    param_1 = (uint *)((int)param_1 + 1);
    bVar1 = *(byte *)param_1;
    param_2 = (uint *)((int)param_2 + 1);
  }
  return uVar2 - (byte)*param_2;
}


// 0x020838bc  newlib_strcpy

void FUN_020838bc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((((uint)param_2 | (uint)param_1) & 3) == 0) {
    uVar2 = *param_2;
    uVar1 = uVar2 + 0xfefefeff & ~uVar2;
    while ((uVar1 & 0x80808080) == 0) {
      *param_1 = uVar2;
      param_2 = param_2 + 1;
      uVar2 = *param_2;
      param_1 = param_1 + 1;
      uVar1 = uVar2 + 0xfefefeff & ~uVar2;
    }
  }
  do {
    uVar2 = *param_2;
    *(char *)param_1 = (char)uVar2;
    param_2 = (uint *)((int)param_2 + 1);
    param_1 = (uint *)((int)param_1 + 1);
  } while ((char)uVar2 != '\0');
  return;
}


// 0x0208395c  newlib_strlcat

int FUN_0208395c(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if ((param_3 == 0) || (*param_1 == '\0')) {
    iVar3 = 0;
  }
  else {
    pcVar4 = param_1;
    do {
      pcVar4 = pcVar4 + 1;
      if (pcVar4 == param_1 + param_3) break;
    } while (*pcVar4 != '\0');
    iVar3 = (int)pcVar4 - (int)param_1;
    param_1 = pcVar4;
  }
  param_3 = param_3 - iVar3;
  if (param_3 == 0) {
    iVar1 = FUN_02083a6c(param_2);
  }
  else {
    cVar2 = *param_2;
    pcVar4 = param_2;
    pcVar5 = param_1;
    if (cVar2 == '\0') {
      iVar1 = 0;
    }
    else {
      do {
        param_1 = pcVar5;
        if (param_3 != 1) {
          param_1 = pcVar5 + 1;
          *pcVar5 = cVar2;
        }
        pcVar4 = pcVar4 + 1;
        cVar2 = *pcVar4;
        if (param_3 != 1) {
          param_3 = param_3 + -1;
        }
        pcVar5 = param_1;
      } while (cVar2 != '\0');
      iVar1 = (int)pcVar4 - (int)param_2;
    }
    *param_1 = '\0';
  }
  return iVar1 + iVar3;
}


// 0x02083a04  newlib_strlcpy

char * FUN_02083a04(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_2;
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      pcVar2 = pcVar3;
      pcVar4 = param_1;
      if (param_3 == 0) goto LAB_02083a40;
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar4 = param_1 + 1;
      *param_1 = cVar1;
      param_1 = pcVar4;
      pcVar3 = pcVar2;
    } while (cVar1 != '\0');
    if (param_3 != 0) goto LAB_02083a54;
LAB_02083a40:
    *pcVar4 = '\0';
    pcVar3 = pcVar2;
  }
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
LAB_02083a54:
  return pcVar2 + (-1 - (int)param_2);
}


// 0x02083a6c  newlib_strlen

int FUN_02083a6c(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar3 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    while (uVar3 == 0) {
      puVar2 = puVar2 + 1;
      uVar3 = *puVar2 + 0xfefefeff & 0x80808080 & ~*puVar2;
    }
  }
  cVar1 = (char)*puVar2;
  while (cVar1 != '\0') {
    puVar2 = (uint *)((int)puVar2 + 1);
    cVar1 = *(char *)puVar2;
  }
  return (int)puVar2 - (int)param_1;
}


// 0x02083afc  newlib_strncasecmp

int FUN_02083afc(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      uVar5 = (uint)*param_1;
      uVar4 = (uint)*param_2;
      uVar2 = uVar5;
      if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
        uVar2 = uVar5 + 0x20;
      }
      uVar3 = uVar4;
      if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
        uVar3 = uVar4 + 0x20;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((((uVar2 != uVar3) || (param_3 == 1)) || (uVar5 == 0)) || (uVar4 == 0)) goto LAB_02083b74;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar5 = (uint)*param_1;
    uVar4 = (uint)*param_2;
LAB_02083b74:
    if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
      uVar5 = uVar5 + 0x20;
    }
    if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
      uVar4 = uVar4 + 0x20;
    }
    iVar1 = uVar5 - uVar4;
  }
  return iVar1;
}


// 0x02083bb4  newlib_strncat

void FUN_02083bb4(uint *param_1,char *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  
  if (((uint)param_1 & 3) == 0) {
    uVar2 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    while (uVar2 == 0) {
      param_1 = param_1 + 1;
      uVar2 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    }
  }
  cVar1 = (char)*param_1;
  while (cVar1 != '\0') {
    param_1 = (uint *)((int)param_1 + 1);
    cVar1 = *(char *)param_1;
  }
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    param_3 = param_3 + -1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *(char *)param_1 = cVar1;
    if (cVar1 == '\0') break;
    if (param_3 == 0) {
      *(char *)((int)param_1 + 1) = '\0';
    }
    param_1 = (uint *)((int)param_1 + 1);
  }
  return;
}


// 0x02083c80  newlib_strncmp

int FUN_02083c80(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((((((uint)param_1 | (uint)param_2) & 3) == 0) && (3 < param_3)) &&
     (uVar1 = *param_1, uVar1 == *param_2)) {
    param_3 = param_3 - 4;
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    while( true ) {
      if (uVar1 != 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      uVar1 = *param_1;
      if (uVar1 != *param_2) break;
      param_3 = param_3 - 4;
      if (param_3 == 0) {
        return 0;
      }
      uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    }
  }
  if (param_3 != 0) {
    uVar2 = (uint)(byte)*param_1;
    uVar1 = (uint)(byte)*param_2;
    if (uVar1 != uVar2) goto LAB_02083db4;
    if (param_3 == 1) {
      return 0;
    }
    while( true ) {
      if (uVar1 == 0) {
        return 0;
      }
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      if (param_3 == 1) break;
      uVar1 = (uint)*(byte *)param_2;
      uVar2 = (uint)*(byte *)param_1;
      if (uVar1 != uVar2) goto LAB_02083db4;
      bVar3 = param_3 == 2;
      param_3 = param_3 - 1;
      if (bVar3) {
        return 0;
      }
    }
  }
  uVar2 = (uint)(byte)*param_1;
  uVar1 = (uint)(byte)*param_2;
LAB_02083db4:
  return uVar2 - uVar1;
}


// 0x02083dbc  newlib_strncpy

uint * FUN_02083dbc(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  bool bVar9;
  
  puVar7 = param_1;
  if ((3 < param_3 && (((uint)param_2 | (uint)param_1) & 3) == 0) && (3 < param_3)) {
    uVar4 = *param_2;
    puVar3 = param_1;
    while (puVar7 = puVar3, (uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) == 0) {
      param_3 = param_3 - 4;
      puVar7 = puVar3 + 1;
      *puVar3 = uVar4;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      puVar3 = puVar7;
      uVar4 = *param_2;
    }
  }
  if (param_3 != 0) {
    uVar4 = *param_2;
    iVar5 = param_3 - 1;
    pcVar8 = (char *)((int)puVar7 + 1);
    *(char *)puVar7 = (char)uVar4;
    if ((char)uVar4 != '\0') {
      pcVar2 = (char *)((int)puVar7 + 2);
      do {
        pcVar8 = pcVar2;
        bVar9 = iVar5 == 0;
        iVar5 = iVar5 + -1;
        if (bVar9) {
          return param_1;
        }
        param_2 = (uint *)((int)param_2 + 1);
        cVar1 = *(char *)param_2;
        pcVar8[-1] = cVar1;
        pcVar2 = pcVar8 + 1;
      } while (cVar1 != '\0');
    }
    if (iVar5 != 0) {
      iVar6 = 0;
      do {
        pcVar8[iVar6] = '\0';
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
    }
  }
  return param_1;
}


// 0x02083f18  newlib_strpbrk

char * FUN_02083f18(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar3 = param_2;
  if (cVar2 == '\0') {
    return (char *)0x0;
  }
  do {
    while( true ) {
      cVar1 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar3 = pcVar3 + 1;
      if (cVar1 == cVar2) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    pcVar3 = param_2;
  } while (cVar2 != '\0');
  return (char *)0x0;
}


// 0x02083f68  newlib_strrchr

int FUN_02083f68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_020836d4();
  }
  else {
    iVar1 = 0;
    while (iVar2 = FUN_020836d4(param_1,param_2), iVar2 != 0) {
      param_1 = iVar2 + 1;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


// 0x02083ffc  helper_for_newlib_swrite

void FUN_02083ffc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_020852bc(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x02084048  runtime_access_shared_state

void FUN_02084048(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_02084fc0(param_2);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x0208408c  newlib_sflags

undefined4 FUN_0208408c(undefined4 *param_1,char *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  cVar1 = *param_2;
  if (cVar1 == 'r') {
    uVar3 = 0;
    uVar4 = 4;
    uVar2 = 0;
  }
  else if (cVar1 == 'w') {
    uVar4 = 8;
    uVar3 = 1;
    uVar2 = 0x600;
  }
  else {
    if (cVar1 != 'a') {
      *param_1 = 0x16;
      return 0;
    }
    uVar4 = 0x108;
    uVar3 = 1;
    uVar2 = 0x208;
  }
  if ((param_2[1] == '\0') || ((param_2[1] != '+' && (param_2[2] != '+')))) {
    *param_3 = uVar3 | uVar2;
  }
  else {
    uVar4 = 0x10;
    *param_3 = uVar2 | 2;
  }
  return uVar4;
}


// 0x02084130  newlib_sfvwrite_r

undefined4 FUN_02084130(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  if (param_3[2] != 0) {
    uVar2 = (ushort)param_2[3];
    if (((uVar2 & 8) == 0) || (param_2[5] == 0)) {
      iVar7 = FUN_02084d28(param_2);
      if (iVar7 != 0) {
        *(ushort *)(param_2 + 3) = (ushort)param_2[3] | 0x40;
        *param_1 = 9;
        return 0xffffffff;
      }
      uVar2 = (ushort)param_2[3];
    }
    uVar4 = (uint)uVar2;
    bVar14 = (uVar2 & 2) != 0;
    if (bVar14) {
      param_1 = (undefined4 *)0x0;
    }
    puVar12 = (uint *)*param_3;
    puVar10 = param_1;
    if (bVar14) {
      do {
        while (param_1 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)*puVar12;
          puVar1 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          param_1 = (undefined4 *)*puVar1;
        }
        iVar7 = (*(code *)param_2[10])(param_2[8],puVar10);
        param_1 = (undefined4 *)((int)param_1 - iVar7);
        if (iVar7 < 1) {
LAB_020844a8:
          *(ushort *)(param_2 + 3) = (ushort)param_2[3] | 0x40;
          return 0xffffffff;
        }
        iVar6 = param_3[2];
        param_3[2] = iVar6 - iVar7;
        puVar10 = (undefined4 *)((int)puVar10 + iVar7);
      } while (iVar6 - iVar7 != 0);
    }
    else {
      uVar5 = uVar4 & 1;
      uVar11 = uVar5;
      if ((uVar2 & 1) != 0) {
        uVar11 = 0;
        uVar5 = uVar11;
        uVar4 = uVar11;
        do {
          while (bVar14 = false, uVar11 == 0) {
            uVar5 = *puVar12;
            puVar1 = puVar12 + 1;
            puVar12 = puVar12 + 2;
            uVar11 = *puVar1;
          }
          do {
            if (!bVar14) {
              iVar7 = FUN_020845c0(uVar5,10,uVar11);
              uVar4 = uVar11;
              if (iVar7 != 0) {
                uVar4 = iVar7 - uVar5;
              }
              bVar14 = true;
              uVar4 = uVar4 + 1;
            }
            uVar13 = param_2[6];
            uVar3 = *param_2;
            uVar9 = uVar11;
            if (uVar4 <= uVar11) {
              uVar9 = uVar4;
            }
            uVar8 = uVar13 + param_2[2];
            if ((int)uVar8 < (int)uVar9 && param_2[5] < uVar3) {
              FUN_02082f5c(uVar3,uVar5,uVar8);
              *param_2 = *param_2 + uVar8;
              iVar7 = FUN_02081034(param_2);
              if (iVar7 != 0) goto LAB_020844a8;
            }
            else if ((int)uVar9 < (int)uVar13) {
              FUN_02082f5c(uVar3,uVar5,uVar9);
              param_2[2] = param_2[2] - uVar9;
              *param_2 = *param_2 + uVar9;
              uVar8 = uVar9;
            }
            else {
              uVar8 = (*(code *)param_2[10])(param_2[8],uVar5,uVar13);
              if ((int)uVar8 < 1) goto LAB_020844a8;
            }
            uVar4 = uVar4 - uVar8;
            if (uVar4 == 0) {
              iVar7 = FUN_02081034(param_2);
              if (iVar7 != 0) goto LAB_020844a8;
              bVar14 = false;
            }
            iVar7 = param_3[2];
            param_3[2] = iVar7 - uVar8;
            if (iVar7 - uVar8 == 0) {
              return 0;
            }
            uVar11 = uVar11 - uVar8;
            uVar5 = uVar5 + uVar8;
          } while (uVar11 != 0);
          uVar5 = *puVar12;
          uVar11 = puVar12[1];
          puVar12 = puVar12 + 2;
        } while( true );
      }
      while( true ) {
        while (uVar5 == 0) {
          uVar11 = *puVar12;
          puVar1 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          uVar5 = *puVar1;
        }
        uVar9 = param_2[2];
        if ((uVar4 & 0x200) == 0) {
          uVar4 = *param_2;
          bVar15 = param_2[5] <= uVar4;
          bVar14 = uVar4 == param_2[5];
          if (bVar15 && !bVar14) {
            bVar15 = uVar9 <= uVar5;
            bVar14 = uVar5 == uVar9;
          }
          if (bVar15 && !bVar14) {
            FUN_02082f5c(uVar4,uVar11,uVar9);
            *param_2 = *param_2 + uVar9;
            iVar7 = FUN_02081034(param_2);
            if (iVar7 != 0) goto LAB_020844a8;
          }
          else if (uVar5 < param_2[6]) {
            FUN_02082f5c(uVar4,uVar11,uVar5);
            param_2[2] = param_2[2] - uVar5;
            *param_2 = *param_2 + uVar5;
            uVar9 = uVar5;
          }
          else {
            uVar9 = (*(code *)param_2[10])(param_2[8],uVar11);
            if ((int)uVar9 < 1) goto LAB_020844a8;
          }
        }
        else {
          uVar3 = uVar5;
          if ((uVar9 <= uVar5) && (uVar3 = uVar9, (uVar4 & 0x80) != 0)) {
            iVar7 = *param_2 - param_2[5];
            uVar4 = (int)(param_2[6] * 3) / 2;
            uVar9 = uVar5 + iVar7 + 1;
            if (uVar4 < uVar9) {
              uVar4 = uVar9;
            }
            uVar9 = FUN_0208470c(&DAT_0208f3a0,param_2[5],uVar4);
            if (uVar9 == 0) {
              FUN_020818d4(&DAT_0208f3a0,param_2[5]);
              goto LAB_020844a8;
            }
            *param_2 = uVar9 + iVar7;
            param_2[2] = uVar4 - iVar7;
            param_2[5] = uVar9;
            param_2[6] = uVar4;
            uVar3 = uVar5;
          }
          FUN_02082f5c(*param_2,uVar11,uVar3);
          param_2[2] = param_2[2] - uVar3;
          *param_2 = *param_2 + uVar3;
          uVar9 = uVar5;
        }
        iVar7 = param_3[2];
        param_3[2] = iVar7 - uVar9;
        if (iVar7 - uVar9 == 0) break;
        uVar5 = uVar5 - uVar9;
        uVar4 = (uint)(ushort)param_2[3];
        uVar11 = uVar11 + uVar9;
      }
    }
  }
  return 0;
}


// 0x02084574  helper_for_newlib_swrite

void FUN_02084574(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_020850a8(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x020845c0  newlib_memchr

uint * FUN_020845c0(uint *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  param_2 = param_2 & 0xff;
  if ((3 < param_3) && (((uint)param_1 & 3) == 0)) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      uVar3 = param_2 + uVar3 * 0x100;
    } while (iVar2 != 4);
    do {
      param_3 = param_3 - 4;
      if (((*param_1 ^ uVar3) + 0xfefefeff & 0x80808080 & ~(*param_1 ^ uVar3)) != 0) {
        if (param_2 == (byte)*param_1) {
          return param_1;
        }
        if (param_2 == *(byte *)((int)param_1 + 1)) {
          return (uint *)((int)param_1 + 1);
        }
        if (param_2 == *(byte *)((int)param_1 + 2)) {
          return (uint *)((int)param_1 + 2);
        }
        if (param_2 == *(byte *)((int)param_1 + 3)) {
          return (uint *)((int)param_1 + 3);
        }
      }
      param_1 = param_1 + 1;
    } while (3 < param_3);
  }
  if (param_3 == 0) {
LAB_02084610:
    param_1 = (uint *)0x0;
  }
  else {
    bVar1 = (byte)*param_1;
    while (param_2 != bVar1) {
      bVar4 = param_3 == 1;
      param_3 = param_3 - 1;
      if (bVar4) goto LAB_02084610;
      param_1 = (uint *)((int)param_1 + 1);
      bVar1 = *(byte *)param_1;
    }
  }
  return param_1;
}


// 0x020846c0  runtime_access_shared_state

void FUN_020846c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_020851cc(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x0208470c  newlib_realloc_r

int * FUN_0208470c(undefined4 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_0208274c(param_1,param_3);
    return piVar2;
  }
  FUN_020830f0();
  uVar3 = param_3 + 0xb;
  if (uVar3 < 0x17) {
    uVar8 = 0x10;
    uVar3 = 0;
  }
  else {
    uVar8 = uVar3 & 0xfffffff8;
    uVar3 = uVar3 >> 0x1f;
  }
  if (uVar8 < param_3) {
    uVar3 = 1;
  }
  piVar2 = param_2 + -2;
  if (uVar3 != 0) {
    *param_1 = 0xc;
    return (int *)0x0;
  }
  uVar3 = param_2[-1] & 0xfffffffc;
  if ((int)uVar3 < (int)uVar8) {
    iVar1 = (int)piVar2 + uVar3;
    if (iVar1 == DAT_0208f7b8) {
      uVar9 = *(uint *)(iVar1 + 4) & 0xfffffffc;
      if ((int)(uVar8 + 0x10) <= (int)(uVar3 + uVar9)) {
        DAT_0208f7b8 = (int)piVar2 + uVar8;
        *(uint *)(DAT_0208f7b8 + 4) = (uVar3 + uVar9) - uVar8 | 1;
        param_2[-1] = uVar8 | param_2[-1] & 1U;
        FUN_020830f4(param_1);
        return param_2;
      }
    }
    else if ((*(uint *)((*(uint *)(iVar1 + 4) & 0xfffffffe) + iVar1 + 4) & 1) == 0) {
      uVar9 = *(uint *)(iVar1 + 4) & 0xfffffffc;
      if ((int)uVar8 <= (int)(uVar3 + uVar9)) {
        iVar5 = *(int *)(iVar1 + 8);
        iVar1 = *(int *)(iVar1 + 0xc);
        *(int *)(iVar1 + 8) = iVar5;
        *(int *)(iVar5 + 0xc) = iVar1;
        uVar3 = uVar3 + uVar9;
        goto LAB_020848a4;
      }
    }
    else {
      uVar9 = 0;
      iVar1 = 0;
    }
    if ((param_2[-1] & 1U) == 0) {
      piVar6 = (int *)((int)piVar2 - *piVar2);
      uVar4 = piVar6[1] & 0xfffffffc;
      if (iVar1 != 0) {
        if (iVar1 == DAT_0208f7b8) {
          iVar1 = uVar9 + uVar3 + uVar4;
          if ((int)(uVar8 + 0x10) <= iVar1) {
            uVar3 = uVar3 - 4;
            iVar5 = piVar6[3];
            iVar7 = piVar6[2];
            *(int *)(iVar5 + 8) = iVar7;
            *(int *)(iVar7 + 0xc) = iVar5;
            piVar2 = piVar6 + 2;
            if (uVar3 < 0x25) {
              piVar10 = param_2;
              piVar11 = piVar2;
              if (0x13 < uVar3) {
                piVar6[2] = *param_2;
                piVar6[3] = param_2[1];
                piVar11 = piVar6 + 4;
                piVar10 = param_2 + 2;
                if (0x1b < uVar3) {
                  piVar6[4] = param_2[2];
                  piVar6[5] = param_2[3];
                  piVar11 = piVar6 + 6;
                  piVar10 = param_2 + 4;
                  if (uVar3 == 0x24) {
                    piVar6[6] = param_2[4];
                    piVar11 = piVar6 + 8;
                    piVar10 = param_2 + 6;
                    piVar6[7] = param_2[5];
                  }
                }
              }
              *piVar11 = *piVar10;
              piVar11[1] = piVar10[1];
              piVar11[2] = piVar10[2];
            }
            else {
              FUN_02082f5c(piVar2,param_2,uVar3);
            }
            DAT_0208f7b8 = (int)piVar6 + uVar8;
            *(uint *)(DAT_0208f7b8 + 4) = iVar1 - uVar8 | 1;
            piVar6[1] = uVar8 | piVar6[1] & 1U;
            FUN_020830f4(param_1);
            return piVar2;
          }
        }
        else {
          uVar9 = uVar9 + uVar3 + uVar4;
          if ((int)uVar8 <= (int)uVar9) {
            iVar5 = *(int *)(iVar1 + 8);
            iVar1 = *(int *)(iVar1 + 0xc);
            *(int *)(iVar1 + 8) = iVar5;
            *(int *)(iVar5 + 0xc) = iVar1;
            uVar4 = uVar3 - 4;
            iVar1 = piVar6[3];
            iVar5 = piVar6[2];
            *(int *)(iVar1 + 8) = iVar5;
            *(int *)(iVar5 + 0xc) = iVar1;
            piVar2 = piVar6 + 2;
            uVar3 = uVar9;
            if (uVar4 < 0x25) {
              piVar10 = param_2;
              piVar11 = piVar2;
              if (0x13 < uVar4) {
                piVar6[2] = *param_2;
                piVar6[3] = param_2[1];
                piVar11 = piVar6 + 4;
                piVar10 = param_2 + 2;
                if (0x1b < uVar4) {
                  piVar6[4] = param_2[2];
                  piVar6[5] = param_2[3];
                  piVar11 = piVar6 + 6;
                  piVar10 = param_2 + 4;
                  if (uVar4 == 0x24) {
                    piVar6[6] = param_2[4];
                    piVar11 = piVar6 + 8;
                    piVar10 = param_2 + 6;
                    piVar6[7] = param_2[5];
                  }
                }
              }
              *piVar11 = *piVar10;
              piVar11[1] = piVar10[1];
              piVar11[2] = piVar10[2];
              param_2 = piVar2;
              piVar2 = piVar6;
            }
            else {
              FUN_02082f5c(piVar2,param_2,uVar4);
              param_2 = piVar2;
              piVar2 = piVar6;
            }
            goto LAB_020848a4;
          }
        }
      }
      uVar4 = uVar3 + uVar4;
      if ((int)uVar8 <= (int)uVar4) {
        uVar9 = uVar3 - 4;
        iVar1 = piVar6[3];
        iVar5 = piVar6[2];
        *(int *)(iVar1 + 8) = iVar5;
        *(int *)(iVar5 + 0xc) = iVar1;
        piVar2 = piVar6 + 2;
        uVar3 = uVar4;
        if (uVar9 < 0x25) {
          piVar10 = param_2;
          piVar11 = piVar2;
          if (0x13 < uVar9) {
            piVar6[2] = *param_2;
            piVar6[3] = param_2[1];
            piVar11 = piVar6 + 4;
            piVar10 = param_2 + 2;
            if (0x1b < uVar9) {
              piVar6[4] = param_2[2];
              piVar6[5] = param_2[3];
              piVar11 = piVar6 + 6;
              piVar10 = param_2 + 4;
              if (uVar9 == 0x24) {
                piVar6[6] = param_2[4];
                piVar11 = piVar6 + 8;
                piVar10 = param_2 + 6;
                piVar6[7] = param_2[5];
              }
            }
          }
          *piVar11 = *piVar10;
          piVar11[1] = piVar10[1];
          piVar11[2] = piVar10[2];
          param_2 = piVar2;
          piVar2 = piVar6;
        }
        else {
          FUN_02082f5c(piVar2,param_2,uVar9);
          param_2 = piVar2;
          piVar2 = piVar6;
        }
        goto LAB_020848a4;
      }
    }
    piVar6 = (int *)FUN_0208274c(param_1,param_3);
    if (piVar6 != (int *)0x0) {
      if (piVar6 + -2 == (int *)((int)piVar2 + (param_2[-1] & 0xfffffffeU))) {
        uVar3 = uVar3 + (piVar6[-1] & 0xfffffffcU);
        goto LAB_020848a4;
      }
      uVar3 = uVar3 - 4;
      if (uVar3 < 0x25) {
        piVar2 = param_2;
        piVar10 = piVar6;
        if (0x13 < uVar3) {
          *piVar6 = *param_2;
          piVar6[1] = param_2[1];
          piVar10 = piVar6 + 2;
          piVar2 = param_2 + 2;
          if (0x1b < uVar3) {
            piVar6[2] = param_2[2];
            piVar6[3] = param_2[3];
            piVar2 = param_2 + 4;
            piVar10 = piVar6 + 4;
            if (uVar3 == 0x24) {
              piVar6[4] = param_2[4];
              piVar2 = param_2 + 6;
              piVar6[5] = param_2[5];
              piVar10 = piVar6 + 6;
            }
          }
        }
        *piVar10 = *piVar2;
        piVar10[1] = piVar2[1];
        piVar10[2] = piVar2[2];
      }
      else {
        FUN_02082f5c(piVar6,param_2,uVar3);
      }
      FUN_020818d4(param_1,param_2);
    }
    FUN_020830f4(param_1);
  }
  else {
LAB_020848a4:
    uVar9 = uVar3 - uVar8;
    if (uVar9 < 0x10) {
      piVar2[1] = uVar3 | piVar2[1] & 1U;
      *(uint *)((int)piVar2 + uVar3 + 4) = *(uint *)((int)piVar2 + uVar3 + 4) | 1;
    }
    else {
      piVar2[1] = uVar8 | piVar2[1] & 1U;
      *(uint *)((int)piVar2 + uVar8 + 4) = uVar9 | 1;
      *(uint *)((int)piVar2 + uVar9 + uVar8 + 4) = *(uint *)((int)piVar2 + uVar9 + uVar8 + 4) | 1;
      FUN_020818d4(param_1,(int)piVar2 + uVar8 + 8);
    }
    FUN_020830f4(param_1);
    piVar6 = param_2;
  }
  return piVar6;
}


// 0x02084d28  newlib_swsetup

undefined4 FUN_02084d28(int *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  FUN_02081258(&DAT_0208f3a0);
  uVar2 = *(ushort *)(param_1 + 3);
  uVar3 = (uint)uVar2;
  if ((uVar2 & 8) == 0) {
    if ((uVar2 & 0x10) == 0) {
      return 0xffffffff;
    }
    if ((uVar2 & 4) == 0) {
      iVar1 = param_1[5];
    }
    else {
      if ((int *)param_1[0xd] != (int *)0x0) {
        if ((int *)param_1[0xd] != param_1 + 0x11) {
          FUN_020818d4(&DAT_0208f3a0);
          uVar2 = *(ushort *)(param_1 + 3);
        }
        param_1[0xd] = uVar3 & 8;
      }
      *(ushort *)(param_1 + 3) = uVar2 & 0xffdb;
      iVar1 = param_1[5];
      uVar2 = *(ushort *)(param_1 + 3);
      *param_1 = iVar1;
      param_1[1] = 0;
    }
    *(ushort *)(param_1 + 3) = uVar2 | 8;
    uVar3 = (uint)*(ushort *)(param_1 + 3);
  }
  else {
    iVar1 = param_1[5];
  }
  if ((iVar1 == 0) && ((uVar3 & 0x280) != 0x200)) {
    FUN_020823f8(param_1);
    uVar3 = (uint)*(ushort *)(param_1 + 3);
  }
  if ((uVar3 & 1) == 0) {
    iVar1 = 0;
    if ((uVar3 & 2) == 0) {
      iVar1 = param_1[6];
    }
    param_1[2] = iVar1;
  }
  else {
    param_1[7] = -param_1[6];
    param_1[2] = 0;
  }
  return 0;
}


// 0x02084e34  runtime_access_shared_state

void FUN_02084e34(int param_1)

{
  if (param_1 - 3U < 0xe) {
    DAT_0208fc00 = param_1;
  }
  return;
}


// 0x02084e4c  helper_calls_strcmp

int FUN_02084e4c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = &DAT_0208fbc0;
  uVar5 = *param_1;
  iVar1 = 3;
  while( true ) {
    iVar4 = iVar1;
    uVar3 = *(undefined4 *)puVar6[3];
    iVar1 = FUN_020837ec(uVar3,uVar5);
    puVar6 = puVar6 + 1;
    if (iVar1 == 0) {
      iVar1 = FUN_02083a6c(uVar3);
      iVar2 = FUN_02083a6c(uVar5);
      if (iVar1 == iVar2) break;
    }
    iVar1 = FUN_020837ec(uVar3,"stdnull");
    if (iVar1 == 0) break;
    iVar1 = iVar4 + 1;
    if (iVar4 + 1 == 0x10) {
      return iVar4 + -0x10;
    }
  }
  (&DAT_0208fbc0)[iVar4] = param_1;
  return iVar4;
}


// 0x02084ee0  helper_calls_strlen

int FUN_02084ee0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = &DAT_0208fbc0;
  iVar5 = 0;
  do {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)*piVar4;
      iVar1 = FUN_02083a6c(uVar3);
      iVar2 = FUN_02083c80(uVar3,param_1,iVar1);
      if (iVar2 == 0) {
        if ((*(byte *)(param_1 + iVar1) == 0x3a) ||
           ((*(byte *)(param_1 + iVar1) - 0x30 < 10 && (*(char *)(param_1 + iVar1 + 1) == ':')))) {
          if (iVar5 == -1) {
            return DAT_0208fc00;
          }
          return iVar5;
        }
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
    if (iVar5 == 0x10) {
      return DAT_0208fc00;
    }
  } while( true );
}


// 0x02084f84  runtime_access_shared_state

int FUN_02084f84(void)

{
  int iVar1;
  
  iVar1 = FUN_02084ee0();
  if (iVar1 != -1) {
    (&DAT_0208fbc0)[iVar1] = &DAT_0208ef8c;
    iVar1 = 0;
  }
  return iVar1;
}


// 0x02084fc0  runtime_access_shared_state

int * FUN_02084fc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 != (int *)0xffffffff) {
    piVar1 = (int *)0xffffffff;
    if (*(code **)((&DAT_0208fbc0)[*param_1] + 0xc) != (code *)0x0) {
      piVar1 = (int *)(**(code **)((&DAT_0208fbc0)[*param_1] + 0xc))(&DAT_0208f3a0,param_1[1]);
    }
    FUN_020826fc(param_1);
  }
  return piVar1;
}


// 0x0208502c  runtime_access_shared_state

undefined4 * FUN_0208502c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  pcVar2 = DAT_0208f3a0;
  if (param_1 != (undefined4 *)0xffffffff) {
    puVar3 = param_1;
    if (2 < (int)param_1) {
      puVar3 = (undefined4 *)*param_1;
    }
    pcVar2 = *(code **)((&DAT_0208fbc0)[(int)puVar3] + 0x1c);
    uVar1 = 0xffffffff;
    if (2 < (int)param_1) {
      uVar1 = param_1[1];
    }
    bVar4 = pcVar2 == (code *)0x0;
    if (bVar4) {
      pcVar2 = (code *)&SUB_00000058;
    }
    param_1 = (undefined4 *)0xffffffff;
    if (!bVar4) {
      param_1 = (undefined4 *)(*pcVar2)(&DAT_0208f3a0,uVar1,param_2);
      pcVar2 = DAT_0208f3a0;
    }
  }
  DAT_0208f3a0 = pcVar2;
  return param_1;
}


// 0x020850a0  helper_for_newlib_smakebuf

undefined4 FUN_020850a0(void)

{
  return 0;
}


// 0x020850a8  runtime_access_shared_state

undefined4 FUN_020850a8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 != (int *)0xffffffff) {
    if (*(code **)((&DAT_0208fbc0)[*param_1] + 0x18) != (code *)0x0) {
      uVar1 = (**(code **)((&DAT_0208fbc0)[*param_1] + 0x18))(0,param_1[1],param_2,param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// 0x020850fc  runtime_access_shared_state

int * FUN_020850fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = FUN_02084ee0();
  if ((iVar2 == -1) || (*(int *)((&DAT_0208fbc0)[iVar2] + 8) == 0)) {
    DAT_0208f3a0 = 0x58;
    piVar4 = (int *)0xffffffff;
    uVar1 = DAT_0208f3a0;
  }
  else {
    piVar3 = (int *)FUN_02082724(*(int *)((&DAT_0208fbc0)[iVar2] + 4) + 8);
    if (piVar3 == (int *)0x0) {
      param_2 = 0x3f;
    }
    piVar4 = (int *)0xffffffff;
    uVar1 = param_2;
    if (piVar3 != (int *)0x0) {
      iVar5 = (&DAT_0208fbc0)[iVar2];
      *piVar3 = iVar2;
      piVar3[1] = (int)(piVar3 + 2);
      iVar2 = (**(code **)(iVar5 + 8))(&DAT_0208f3a0,piVar3 + 2,param_1,param_2,param_3);
      piVar4 = piVar3;
      uVar1 = DAT_0208f3a0;
      if (iVar2 == -1) {
        FUN_020826fc(piVar3);
        piVar4 = (int *)0xffffffff;
        uVar1 = DAT_0208f3a0;
      }
    }
  }
  DAT_0208f3a0 = uVar1;
  return piVar4;
}


// 0x020851cc  runtime_access_shared_state

undefined4 FUN_020851cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0xffffffff) {
    puVar2 = param_1;
    if (2 < (int)param_1) {
      puVar2 = (undefined4 *)*param_1;
    }
    uVar1 = 0xffffffff;
    if (2 < (int)param_1) {
      uVar1 = param_1[1];
    }
    if (*(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x14) != (code *)0x0) {
      uVar1 = (**(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x14))
                        (&DAT_0208f3a0,uVar1,param_2,param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// 0x0208523c  runtime_access_shared_state

undefined1 * FUN_0208523c(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (DAT_020b4cdc == (undefined1 *)0x0) {
    if (DAT_020b4ce4 == (undefined1 *)0x0) {
      DAT_020b4cdc = (undefined1 *)0x23eb350;
    }
    else {
      DAT_020b4cdc = DAT_020b4ce4;
    }
  }
  puVar3 = DAT_020b4ce0;
  if (DAT_020b4ce0 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)register0x00000054;
  }
  puVar1 = DAT_020b4cdc;
  puVar2 = DAT_020b4cdc + param_1;
  if (puVar3 < DAT_020b4cdc + param_1) {
    DAT_0208f3a0 = 0xc;
    puVar1 = (undefined1 *)0xffffffff;
    puVar2 = DAT_020b4cdc;
  }
  DAT_020b4cdc = puVar2;
  return puVar1;
}


// 0x020852bc  runtime_access_shared_state

undefined4 FUN_020852bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0xffffffff) {
    puVar2 = param_1;
    if (2 < (int)param_1) {
      puVar2 = (undefined4 *)*param_1;
    }
    uVar1 = 0xffffffff;
    if (2 < (int)param_1) {
      uVar1 = param_1[1];
    }
    if (*(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x10) != (code *)0x0) {
      uVar1 = (**(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x10))
                        (&DAT_0208f3a0,uVar1,param_2,param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// 0x02085394  helper_calls_strchr

undefined4 FUN_02085394(undefined4 *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 *puVar6;
  
  iVar2 = FUN_02083ed0(param_2,param_4);
  if (param_4 <= iVar2) {
LAB_02085504:
    *param_1 = 0x5b;
    return 0xffffffff;
  }
  puVar6 = (undefined1 *)(param_2 + iVar2);
  cVar1 = puVar6[-1];
  if (cVar1 != '/') {
    *(undefined1 *)(param_2 + iVar2) = 0x2f;
  }
  cVar5 = *param_3;
  if (cVar1 != '/') {
    puVar6 = puVar6 + 1;
  }
  if (cVar5 == '/') {
    iVar3 = FUN_020836d4(param_2,0x2f);
    puVar6 = (undefined1 *)(iVar3 + 1);
    goto LAB_02085460;
  }
  do {
    iVar3 = FUN_020836d4(param_3,0x2f);
    if (iVar3 == 0) {
      iVar3 = FUN_020836d4(param_3,0);
    }
    else {
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 - (int)param_3;
    if (iVar3 == 0) {
      if (puVar6[-1] == '/') {
        return 0;
      }
      *puVar6 = 0x2f;
      return 0;
    }
    if (cVar5 == '.') {
      if (param_3[1] != '\0' && param_3[1] != '/') {
        iVar4 = FUN_02083c80(param_3,&DAT_0208efe0,2);
        goto joined_r0x02085494;
      }
    }
    else {
      iVar4 = FUN_02083c80(param_3,&DAT_0208efe0,2);
joined_r0x02085494:
      if ((iVar4 == 0) && (param_3[2] == '\0' || param_3[2] == '/')) {
        if (puVar6[-1] == '/') {
          puVar6[-1] = 0;
        }
        iVar2 = FUN_02083f68(param_2,0x2f);
        if (iVar2 == 0) {
          *param_1 = 2;
          return 0xffffffff;
        }
        puVar6 = (undefined1 *)(iVar2 + 1);
        iVar2 = iVar2 - param_2;
      }
      else {
        iVar2 = iVar2 + iVar3;
        if (param_4 <= iVar2) goto LAB_02085504;
        FUN_02083dbc(puVar6,param_3,iVar3);
        puVar6 = puVar6 + iVar3;
      }
    }
    *puVar6 = 0;
    param_3 = param_3 + iVar3;
    cVar5 = *param_3;
LAB_02085460:
    while (cVar5 == '/') {
      param_3 = param_3 + 1;
      cVar5 = *param_3;
    }
  } while( true );
}


// 0x0208553c  helper_calls_strchr

undefined4 FUN_0208553c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_410 [1024];
  
  uVar1 = FUN_02083ed0(param_1,0x401);
  if (uVar1 < 0x400) {
    iVar2 = FUN_020836d4(param_1,0x3a);
    if (iVar2 == 0) {
      FUN_02083dbc(auStack_410,&DAT_0208fc04,0x400);
    }
    else {
      FUN_02083dbc(auStack_410,param_1,0x400);
      param_1 = FUN_020836d4(param_1,0x3a);
      param_1 = param_1 + 1;
    }
    iVar2 = FUN_020836d4(auStack_410,0x3a);
    if (*(char *)(iVar2 + 1) == '/') {
      iVar2 = FUN_02085394(&DAT_0208f3a0,auStack_410,param_1,0x400);
      if (iVar2 != -1) {
        iVar2 = FUN_02084ee0(auStack_410);
        if ((iVar2 < 0) || (*(code **)((&DAT_0208fbc0)[iVar2] + 0x2c) == (code *)0x0)) {
          DAT_0208f3a0 = 0x13;
          return 0xffffffff;
        }
        iVar3 = (**(code **)((&DAT_0208fbc0)[iVar2] + 0x2c))(&DAT_0208f3a0,auStack_410);
        if (iVar3 != -1) {
          FUN_02084e34(iVar2);
          FUN_02083dbc(&DAT_0208fc04,auStack_410,0x400);
          return 0;
        }
      }
    }
    else {
      DAT_0208f3a0 = 2;
    }
  }
  else {
    DAT_0208f3a0 = 0x5b;
  }
  return 0xffffffff;
}


// 0x02085950  veneer_to_newlib_strlen

int thunk_FUN_02083a6c(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar3 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    while (uVar3 == 0) {
      puVar2 = puVar2 + 1;
      uVar3 = *puVar2 + 0xfefefeff & 0x80808080 & ~*puVar2;
    }
  }
  cVar1 = (char)*puVar2;
  while (cVar1 != '\0') {
    puVar2 = (uint *)((int)puVar2 + 1);
    cVar1 = *(char *)puVar2;
  }
  return (int)puVar2 - (int)param_1;
}


// 0x02085954  veneer_to_newlib_strlen

int thunk_FUN_02083a6c(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar3 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    while (uVar3 == 0) {
      puVar2 = puVar2 + 1;
      uVar3 = *puVar2 + 0xfefefeff & 0x80808080 & ~*puVar2;
    }
  }
  cVar1 = (char)*puVar2;
  while (cVar1 != '\0') {
    puVar2 = (uint *)((int)puVar2 + 1);
    cVar1 = *(char *)puVar2;
  }
  return (int)puVar2 - (int)param_1;
}


// 0x02085958  veneer_to_newlib_strchr

uint * thunk_FUN_020836d4(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  if (((uint)param_1 & 3) == 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      uVar4 = param_2 | uVar4 << 8;
    } while (iVar3 != 4);
    uVar2 = *param_1;
    if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) == 0) {
      for (uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4); uVar2 == 0;
          uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4)) {
        param_1 = param_1 + 1;
        uVar2 = *param_1;
        if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) != 0) break;
      }
    }
  }
  bVar1 = (byte)*param_1;
  while( true ) {
    if (bVar1 == 0) {
      if (param_2 != 0) {
        param_1 = (uint *)0x0;
      }
      return param_1;
    }
    if (param_2 == bVar1) break;
    param_1 = (uint *)((int)param_1 + 1);
    bVar1 = *(byte *)param_1;
  }
  return param_1;
}


// 0x0208595c  veneer_to_newlib_strchr

uint * thunk_FUN_020836d4(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  if (((uint)param_1 & 3) == 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      uVar4 = param_2 | uVar4 << 8;
    } while (iVar3 != 4);
    uVar2 = *param_1;
    if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) == 0) {
      for (uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4); uVar2 == 0;
          uVar2 = (uVar2 ^ uVar4) + 0xfefefeff & 0x80808080 & ~(uVar2 ^ uVar4)) {
        param_1 = param_1 + 1;
        uVar2 = *param_1;
        if ((uVar2 + 0xfefefeff & 0x80808080 & ~uVar2) != 0) break;
      }
    }
  }
  bVar1 = (byte)*param_1;
  while( true ) {
    if (bVar1 == 0) {
      if (param_2 != 0) {
        param_1 = (uint *)0x0;
      }
      return param_1;
    }
    if (param_2 == bVar1) break;
    param_1 = (uint *)((int)param_1 + 1);
    bVar1 = *(byte *)param_1;
  }
  return param_1;
}


// 0x02085960  veneer_to_newlib_strncmp

int thunk_FUN_02083c80(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((((((uint)param_1 | (uint)param_2) & 3) == 0) && (3 < param_3)) &&
     (uVar1 = *param_1, uVar1 == *param_2)) {
    param_3 = param_3 - 4;
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    while( true ) {
      if (uVar1 != 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      uVar1 = *param_1;
      if (uVar1 != *param_2) break;
      param_3 = param_3 - 4;
      if (param_3 == 0) {
        return 0;
      }
      uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    }
  }
  if (param_3 != 0) {
    uVar2 = (uint)(byte)*param_1;
    uVar1 = (uint)(byte)*param_2;
    if (uVar1 != uVar2) goto LAB_02083db4;
    if (param_3 == 1) {
      return 0;
    }
    while( true ) {
      if (uVar1 == 0) {
        return 0;
      }
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      if (param_3 == 1) break;
      uVar1 = (uint)*(byte *)param_2;
      uVar2 = (uint)*(byte *)param_1;
      if (uVar1 != uVar2) goto LAB_02083db4;
      bVar3 = param_3 == 2;
      param_3 = param_3 - 1;
      if (bVar3) {
        return 0;
      }
    }
  }
  uVar2 = (uint)(byte)*param_1;
  uVar1 = (uint)(byte)*param_2;
LAB_02083db4:
  return uVar2 - uVar1;
}


// 0x02085964  veneer_to_newlib_strncmp

int thunk_FUN_02083c80(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((((((uint)param_1 | (uint)param_2) & 3) == 0) && (3 < param_3)) &&
     (uVar1 = *param_1, uVar1 == *param_2)) {
    param_3 = param_3 - 4;
    if (param_3 == 0) {
      return 0;
    }
    uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    while( true ) {
      if (uVar1 != 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      uVar1 = *param_1;
      if (uVar1 != *param_2) break;
      param_3 = param_3 - 4;
      if (param_3 == 0) {
        return 0;
      }
      uVar1 = uVar1 + 0xfefefeff & 0x80808080 & ~uVar1;
    }
  }
  if (param_3 != 0) {
    uVar2 = (uint)(byte)*param_1;
    uVar1 = (uint)(byte)*param_2;
    if (uVar1 != uVar2) goto LAB_02083db4;
    if (param_3 == 1) {
      return 0;
    }
    while( true ) {
      if (uVar1 == 0) {
        return 0;
      }
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      if (param_3 == 1) break;
      uVar1 = (uint)*(byte *)param_2;
      uVar2 = (uint)*(byte *)param_1;
      if (uVar1 != uVar2) goto LAB_02083db4;
      bVar3 = param_3 == 2;
      param_3 = param_3 - 1;
      if (bVar3) {
        return 0;
      }
    }
  }
  uVar2 = (uint)(byte)*param_1;
  uVar1 = (uint)(byte)*param_2;
LAB_02083db4:
  return uVar2 - uVar1;
}


// 0x02085970  veneer_to_newlib_memset

void thunk_FUN_02083058(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_3 < 4) || (((uint)param_1 & 3) != 0)) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    if (param_3 < 0x10) goto LAB_020830d0;
    do {
      param_3 = param_3 - 0x10;
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
LAB_020830d0:
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
    if (param_3 == 0) {
      return;
    }
  }
  uVar1 = 0;
  do {
    *(undefined1 *)(uVar1 + (int)param_1) = param_2;
    uVar1 = uVar1 + 1;
  } while (uVar1 != param_3);
  return;
}


// 0x02085974  veneer_to_newlib_memset

void thunk_FUN_02083058(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_3 < 4) || (((uint)param_1 & 3) != 0)) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    if (param_3 < 0x10) goto LAB_020830d0;
    do {
      param_3 = param_3 - 0x10;
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
LAB_020830d0:
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
    if (param_3 == 0) {
      return;
    }
  }
  uVar1 = 0;
  do {
    *(undefined1 *)(uVar1 + (int)param_1) = param_2;
    uVar1 = uVar1 + 1;
  } while (uVar1 != param_3);
  return;
}


// 0x02085980  veneer_to_compiler_udivsi3

uint thunk_FUN_02080380(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return param_1;
  }
  if (param_2 == 0) {
    FUN_020805d8();
    return 0;
  }
  if (param_1 <= param_2) {
    return (uint)(param_1 == param_2);
  }
  if ((param_2 & param_2 - 1) == 0) {
    if (param_2 < 0x10000) {
      iVar2 = 0;
    }
    else {
      param_2 = param_2 >> 0x10;
      iVar2 = 0x10;
    }
    if (0xff < param_2) {
      param_2 = param_2 >> 8;
      iVar2 = iVar2 + 8;
    }
    if (0xf < param_2) {
      param_2 = param_2 >> 4;
      iVar2 = iVar2 + 4;
    }
    if (param_2 < 5) {
      uVar3 = iVar2 + (param_2 >> 1);
    }
    else {
      uVar3 = iVar2 + 3;
    }
    return param_1 >> (uVar3 & 0xff);
  }
  if ((param_2 & 0xe0000000) == 0) {
    param_2 = param_2 << 3;
    uVar3 = 8;
  }
  else {
    uVar3 = 1;
  }
  for (; param_2 < 0x10000000 && param_2 < param_1; param_2 = param_2 << 4) {
    uVar3 = uVar3 << 4;
  }
  for (; param_2 < 0x80000000 && param_2 < param_1; param_2 = param_2 << 1) {
    uVar3 = uVar3 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (param_2 <= param_1) {
      param_1 = param_1 - param_2;
      uVar1 = uVar1 | uVar3;
    }
    if (param_2 >> 1 <= param_1) {
      param_1 = param_1 - (param_2 >> 1);
      uVar1 = uVar1 | uVar3 >> 1;
    }
    if (param_2 >> 2 <= param_1) {
      param_1 = param_1 - (param_2 >> 2);
      uVar1 = uVar1 | uVar3 >> 2;
    }
    if (param_2 >> 3 <= param_1) {
      param_1 = param_1 - (param_2 >> 3);
      uVar1 = uVar1 | uVar3 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar3 = uVar3 >> 4;
      bVar4 = uVar3 == 0;
    }
    if (bVar4) break;
    param_2 = param_2 >> 4;
  }
  return uVar1;
}


// 0x02085984  veneer_to_compiler_udivsi3

uint thunk_FUN_02080380(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return param_1;
  }
  if (param_2 == 0) {
    FUN_020805d8();
    return 0;
  }
  if (param_1 <= param_2) {
    return (uint)(param_1 == param_2);
  }
  if ((param_2 & param_2 - 1) == 0) {
    if (param_2 < 0x10000) {
      iVar2 = 0;
    }
    else {
      param_2 = param_2 >> 0x10;
      iVar2 = 0x10;
    }
    if (0xff < param_2) {
      param_2 = param_2 >> 8;
      iVar2 = iVar2 + 8;
    }
    if (0xf < param_2) {
      param_2 = param_2 >> 4;
      iVar2 = iVar2 + 4;
    }
    if (param_2 < 5) {
      uVar3 = iVar2 + (param_2 >> 1);
    }
    else {
      uVar3 = iVar2 + 3;
    }
    return param_1 >> (uVar3 & 0xff);
  }
  if ((param_2 & 0xe0000000) == 0) {
    param_2 = param_2 << 3;
    uVar3 = 8;
  }
  else {
    uVar3 = 1;
  }
  for (; param_2 < 0x10000000 && param_2 < param_1; param_2 = param_2 << 4) {
    uVar3 = uVar3 << 4;
  }
  for (; param_2 < 0x80000000 && param_2 < param_1; param_2 = param_2 << 1) {
    uVar3 = uVar3 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (param_2 <= param_1) {
      param_1 = param_1 - param_2;
      uVar1 = uVar1 | uVar3;
    }
    if (param_2 >> 1 <= param_1) {
      param_1 = param_1 - (param_2 >> 1);
      uVar1 = uVar1 | uVar3 >> 1;
    }
    if (param_2 >> 2 <= param_1) {
      param_1 = param_1 - (param_2 >> 2);
      uVar1 = uVar1 | uVar3 >> 2;
    }
    if (param_2 >> 3 <= param_1) {
      param_1 = param_1 - (param_2 >> 3);
      uVar1 = uVar1 | uVar3 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar3 = uVar3 >> 4;
      bVar4 = uVar3 == 0;
    }
    if (bVar4) break;
    param_2 = param_2 >> 4;
  }
  return uVar1;
}


// 0x02085988  veneer_to_newlib_memcpy

void thunk_FUN_02082ec0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_3 = param_3 - 0x10;
      param_1[3] = param_2[3];
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(uVar1 + (int)param_1) = *(undefined1 *)param_2;
      uVar1 = uVar1 + 1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (uVar1 != param_3);
  }
  return;
}


// 0x0208598c  veneer_to_newlib_memcpy

void thunk_FUN_02082ec0(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_3 = param_3 - 0x10;
      param_1[3] = param_2[3];
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(uVar1 + (int)param_1) = *(undefined1 *)param_2;
      uVar1 = uVar1 + 1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (uVar1 != param_3);
  }
  return;
}


// 0x02085998  veneer_to_newlib_strncpy

uint * thunk_FUN_02083dbc(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  bool bVar9;
  
  puVar7 = param_1;
  if ((3 < param_3 && (((uint)param_2 | (uint)param_1) & 3) == 0) && (3 < param_3)) {
    uVar4 = *param_2;
    puVar3 = param_1;
    while (puVar7 = puVar3, (uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) == 0) {
      param_3 = param_3 - 4;
      puVar7 = puVar3 + 1;
      *puVar3 = uVar4;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      puVar3 = puVar7;
      uVar4 = *param_2;
    }
  }
  if (param_3 != 0) {
    uVar4 = *param_2;
    iVar5 = param_3 - 1;
    pcVar8 = (char *)((int)puVar7 + 1);
    *(char *)puVar7 = (char)uVar4;
    if ((char)uVar4 != '\0') {
      pcVar2 = (char *)((int)puVar7 + 2);
      do {
        pcVar8 = pcVar2;
        bVar9 = iVar5 == 0;
        iVar5 = iVar5 + -1;
        if (bVar9) {
          return param_1;
        }
        param_2 = (uint *)((int)param_2 + 1);
        cVar1 = *(char *)param_2;
        pcVar8[-1] = cVar1;
        pcVar2 = pcVar8 + 1;
      } while (cVar1 != '\0');
    }
    if (iVar5 != 0) {
      iVar6 = 0;
      do {
        pcVar8[iVar6] = '\0';
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
    }
  }
  return param_1;
}


// 0x0208599c  veneer_to_newlib_strncpy

uint * thunk_FUN_02083dbc(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  bool bVar9;
  
  puVar7 = param_1;
  if ((3 < param_3 && (((uint)param_2 | (uint)param_1) & 3) == 0) && (3 < param_3)) {
    uVar4 = *param_2;
    puVar3 = param_1;
    while (puVar7 = puVar3, (uVar4 + 0xfefefeff & ~uVar4 & 0x80808080) == 0) {
      param_3 = param_3 - 4;
      puVar7 = puVar3 + 1;
      *puVar3 = uVar4;
      param_2 = param_2 + 1;
      if (param_3 < 4) break;
      puVar3 = puVar7;
      uVar4 = *param_2;
    }
  }
  if (param_3 != 0) {
    uVar4 = *param_2;
    iVar5 = param_3 - 1;
    pcVar8 = (char *)((int)puVar7 + 1);
    *(char *)puVar7 = (char)uVar4;
    if ((char)uVar4 != '\0') {
      pcVar2 = (char *)((int)puVar7 + 2);
      do {
        pcVar8 = pcVar2;
        bVar9 = iVar5 == 0;
        iVar5 = iVar5 + -1;
        if (bVar9) {
          return param_1;
        }
        param_2 = (uint *)((int)param_2 + 1);
        cVar1 = *(char *)param_2;
        pcVar8[-1] = cVar1;
        pcVar2 = pcVar8 + 1;
      } while (cVar1 != '\0');
    }
    if (iVar5 != 0) {
      iVar6 = 0;
      do {
        pcVar8[iVar6] = '\0';
        iVar6 = iVar6 + 1;
      } while (iVar5 != iVar6);
    }
  }
  return param_1;
}


// 0x020859a0  veneer_to_newlib_strrchr

int thunk_FUN_02083f68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_020836d4();
  }
  else {
    iVar1 = 0;
    while (iVar2 = FUN_020836d4(param_1,param_2), iVar2 != 0) {
      param_1 = iVar2 + 1;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


// 0x020859a4  veneer_to_newlib_strrchr

int thunk_FUN_02083f68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_020836d4();
  }
  else {
    iVar1 = 0;
    while (iVar2 = FUN_020836d4(param_1,param_2), iVar2 != 0) {
      param_1 = iVar2 + 1;
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


// 0x020859a8  veneer_to_compiler_aeabi_uidivmod

void thunk_FUN_0208047c(void)

{
  FUN_02080380();
  return;
}


// 0x020859ac  veneer_to_compiler_aeabi_uidivmod

void thunk_FUN_0208047c(void)

{
  FUN_02080380();
  return;
}


// 0x020859b8  veneer_to_newlib_strcasecmp

int thunk_FUN_02083638(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    uVar2 = (uint)*param_2;
  }
  else {
    do {
      uVar2 = (uint)*param_2;
      uVar4 = uVar1;
      if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
        uVar4 = uVar1 + 0x20;
      }
      uVar3 = uVar2;
      if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
        uVar3 = uVar2 + 0x20;
      }
      param_2 = param_2 + 1;
      if (uVar4 != uVar3) goto LAB_02083694;
      param_1 = param_1 + 1;
      uVar1 = (uint)*param_1;
    } while (uVar1 != 0);
    uVar2 = (uint)*param_2;
  }
LAB_02083694:
  if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
    uVar1 = uVar1 + 0x20;
  }
  if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
    uVar2 = uVar2 + 0x20;
  }
  return uVar1 - uVar2;
}


// 0x020859bc  veneer_to_newlib_strcasecmp

int thunk_FUN_02083638(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    uVar2 = (uint)*param_2;
  }
  else {
    do {
      uVar2 = (uint)*param_2;
      uVar4 = uVar1;
      if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
        uVar4 = uVar1 + 0x20;
      }
      uVar3 = uVar2;
      if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
        uVar3 = uVar2 + 0x20;
      }
      param_2 = param_2 + 1;
      if (uVar4 != uVar3) goto LAB_02083694;
      param_1 = param_1 + 1;
      uVar1 = (uint)*param_1;
    } while (uVar1 != 0);
    uVar2 = (uint)*param_2;
  }
LAB_02083694:
  if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
    uVar1 = uVar1 + 0x20;
  }
  if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
    uVar2 = uVar2 + 0x20;
  }
  return uVar1 - uVar2;
}


// 0x020859c0  veneer_to_newlib_strncasecmp

int thunk_FUN_02083afc(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      uVar5 = (uint)*param_1;
      uVar4 = (uint)*param_2;
      uVar2 = uVar5;
      if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
        uVar2 = uVar5 + 0x20;
      }
      uVar3 = uVar4;
      if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
        uVar3 = uVar4 + 0x20;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((((uVar2 != uVar3) || (param_3 == 1)) || (uVar5 == 0)) || (uVar4 == 0)) goto LAB_02083b74;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar5 = (uint)*param_1;
    uVar4 = (uint)*param_2;
LAB_02083b74:
    if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
      uVar5 = uVar5 + 0x20;
    }
    if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
      uVar4 = uVar4 + 0x20;
    }
    iVar1 = uVar5 - uVar4;
  }
  return iVar1;
}


// 0x020859c4  veneer_to_newlib_strncasecmp

int thunk_FUN_02083afc(byte *param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    do {
      uVar5 = (uint)*param_1;
      uVar4 = (uint)*param_2;
      uVar2 = uVar5;
      if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
        uVar2 = uVar5 + 0x20;
      }
      uVar3 = uVar4;
      if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
        uVar3 = uVar4 + 0x20;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if ((((uVar2 != uVar3) || (param_3 == 1)) || (uVar5 == 0)) || (uVar4 == 0)) goto LAB_02083b74;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    uVar5 = (uint)*param_1;
    uVar4 = (uint)*param_2;
LAB_02083b74:
    if (((&DAT_0208ee85)[uVar5] & 1) != 0) {
      uVar5 = uVar5 + 0x20;
    }
    if (((&DAT_0208ee85)[uVar4] & 1) != 0) {
      uVar4 = uVar4 + 0x20;
    }
    iVar1 = uVar5 - uVar4;
  }
  return iVar1;
}


// 0x020859c8  veneer_to_newlib_strpbrk

char * thunk_FUN_02083f18(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar3 = param_2;
  if (cVar2 == '\0') {
    return (char *)0x0;
  }
  do {
    while( true ) {
      cVar1 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar3 = pcVar3 + 1;
      if (cVar1 == cVar2) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    pcVar3 = param_2;
  } while (cVar2 != '\0');
  return (char *)0x0;
}


// 0x020859cc  veneer_to_newlib_strpbrk

char * thunk_FUN_02083f18(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  pcVar3 = param_2;
  if (cVar2 == '\0') {
    return (char *)0x0;
  }
  do {
    while( true ) {
      cVar1 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar3 = pcVar3 + 1;
      if (cVar1 == cVar2) {
        return param_1;
      }
    }
    param_1 = param_1 + 1;
    cVar2 = *param_1;
    pcVar3 = param_2;
  } while (cVar2 != '\0');
  return (char *)0x0;
}


// 0x020859d0  veneer_to_newlib_memmove

undefined4 * thunk_FUN_02082f5c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  if ((param_2 < param_1) && (puVar3 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar3)) {
    if (param_3 != 0) {
      puVar1 = (undefined1 *)((int)param_1 + param_3);
      puVar4 = puVar1 + -param_3;
      do {
        puVar3 = (undefined4 *)((int)puVar3 + -1);
        puVar1 = puVar1 + -1;
        *puVar1 = *(undefined1 *)puVar3;
      } while (puVar4 != puVar1);
    }
  }
  else {
    puVar3 = param_1;
    if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
      do {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        puVar3[2] = param_2[2];
        param_3 = param_3 - 0x10;
        puVar3[3] = param_2[3];
        param_2 = param_2 + 4;
        puVar3 = puVar3 + 4;
      } while (0xf < param_3);
      for (; 3 < param_3; param_3 = param_3 - 4) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        *(undefined1 *)(uVar2 + (int)puVar3) = *(undefined1 *)param_2;
        uVar2 = uVar2 + 1;
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (uVar2 != param_3);
    }
  }
  return param_1;
}


// 0x020859d4  veneer_to_newlib_memmove

undefined4 * thunk_FUN_02082f5c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  if ((param_2 < param_1) && (puVar3 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar3)) {
    if (param_3 != 0) {
      puVar1 = (undefined1 *)((int)param_1 + param_3);
      puVar4 = puVar1 + -param_3;
      do {
        puVar3 = (undefined4 *)((int)puVar3 + -1);
        puVar1 = puVar1 + -1;
        *puVar1 = *(undefined1 *)puVar3;
      } while (puVar4 != puVar1);
    }
  }
  else {
    puVar3 = param_1;
    if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
      do {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        puVar3[2] = param_2[2];
        param_3 = param_3 - 0x10;
        puVar3[3] = param_2[3];
        param_2 = param_2 + 4;
        puVar3 = puVar3 + 4;
      } while (0xf < param_3);
      for (; 3 < param_3; param_3 = param_3 - 4) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        *(undefined1 *)(uVar2 + (int)puVar3) = *(undefined1 *)param_2;
        uVar2 = uVar2 + 1;
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (uVar2 != param_3);
    }
  }
  return param_1;
}


// 0x020859e0  veneer_to_compiler_divsi3

uint thunk_FUN_02080494(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = param_1 ^ param_2;
  if (param_2 == 0) {
    FUN_020805d8();
    return 0;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  if (uVar4 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (uVar5 <= uVar4) {
    if (uVar5 < uVar4) {
      param_1 = 0;
    }
    if (uVar5 == uVar4) {
      param_1 = (int)uVar6 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar4 & uVar4 - 1) == 0) {
    if (uVar4 < 0x10000) {
      iVar3 = 0;
    }
    else {
      uVar4 = uVar4 >> 0x10;
      iVar3 = 0x10;
    }
    if (0xff < uVar4) {
      uVar4 = uVar4 >> 8;
      iVar3 = iVar3 + 8;
    }
    if (0xf < uVar4) {
      uVar4 = uVar4 >> 4;
      iVar3 = iVar3 + 4;
    }
    if (uVar4 < 5) {
      uVar4 = iVar3 + (uVar4 >> 1);
    }
    else {
      uVar4 = iVar3 + 3;
    }
    uVar5 = uVar5 >> (uVar4 & 0xff);
    if ((int)uVar6 < 0) {
      uVar5 = -uVar5;
    }
    return uVar5;
  }
  if ((uVar4 & 0xe0000000) == 0) {
    uVar4 = uVar4 << 3;
    uVar2 = 8;
  }
  else {
    uVar2 = 1;
  }
  for (; uVar4 < 0x10000000 && uVar4 < uVar5; uVar4 = uVar4 << 4) {
    uVar2 = uVar2 << 4;
  }
  for (; uVar4 < 0x80000000 && uVar4 < uVar5; uVar4 = uVar4 << 1) {
    uVar2 = uVar2 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (uVar4 <= uVar5) {
      uVar5 = uVar5 - uVar4;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar4 >> 1 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar4 >> 2 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar4 >> 3 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar7 = uVar5 == 0;
    if (!bVar7) {
      uVar2 = uVar2 >> 4;
      bVar7 = uVar2 == 0;
    }
    if (bVar7) break;
    uVar4 = uVar4 >> 4;
  }
  if ((int)uVar6 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


// 0x020859e4  veneer_to_compiler_divsi3

uint thunk_FUN_02080494(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = param_1 ^ param_2;
  if (param_2 == 0) {
    FUN_020805d8();
    return 0;
  }
  uVar4 = param_2;
  if ((int)param_2 < 0) {
    uVar4 = -param_2;
  }
  if (uVar4 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar5 = param_1;
  if ((int)param_1 < 0) {
    uVar5 = -param_1;
  }
  if (uVar5 <= uVar4) {
    if (uVar5 < uVar4) {
      param_1 = 0;
    }
    if (uVar5 == uVar4) {
      param_1 = (int)uVar6 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar4 & uVar4 - 1) == 0) {
    if (uVar4 < 0x10000) {
      iVar3 = 0;
    }
    else {
      uVar4 = uVar4 >> 0x10;
      iVar3 = 0x10;
    }
    if (0xff < uVar4) {
      uVar4 = uVar4 >> 8;
      iVar3 = iVar3 + 8;
    }
    if (0xf < uVar4) {
      uVar4 = uVar4 >> 4;
      iVar3 = iVar3 + 4;
    }
    if (uVar4 < 5) {
      uVar4 = iVar3 + (uVar4 >> 1);
    }
    else {
      uVar4 = iVar3 + 3;
    }
    uVar5 = uVar5 >> (uVar4 & 0xff);
    if ((int)uVar6 < 0) {
      uVar5 = -uVar5;
    }
    return uVar5;
  }
  if ((uVar4 & 0xe0000000) == 0) {
    uVar4 = uVar4 << 3;
    uVar2 = 8;
  }
  else {
    uVar2 = 1;
  }
  for (; uVar4 < 0x10000000 && uVar4 < uVar5; uVar4 = uVar4 << 4) {
    uVar2 = uVar2 << 4;
  }
  for (; uVar4 < 0x80000000 && uVar4 < uVar5; uVar4 = uVar4 << 1) {
    uVar2 = uVar2 << 1;
  }
  uVar1 = 0;
  while( true ) {
    if (uVar4 <= uVar5) {
      uVar5 = uVar5 - uVar4;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar4 >> 1 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar4 >> 2 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar4 >> 3 <= uVar5) {
      uVar5 = uVar5 - (uVar4 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar7 = uVar5 == 0;
    if (!bVar7) {
      uVar2 = uVar2 >> 4;
      bVar7 = uVar2 == 0;
    }
    if (bVar7) break;
    uVar4 = uVar4 >> 4;
  }
  if ((int)uVar6 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


// 0x020859e8  veneer_to_compiler_aeabi_idivmod

void thunk_FUN_020805c0(void)

{
  FUN_02080494();
  return;
}


// 0x020859ec  veneer_to_compiler_aeabi_idivmod

void thunk_FUN_020805c0(void)

{
  FUN_02080494();
  return;
}

