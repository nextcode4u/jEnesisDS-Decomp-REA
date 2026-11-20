/* ARM9 runtime support — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
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


// 0x020805d8  helper_for_compiler_udivsi3

void FUN_020805d8(void)

{
  return;
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


// 0x02082560  helper_calls_memalign_r

void FUN_02082560(undefined4 param_1,undefined4 param_2)

{
  FUN_02082590(&DAT_0208f3a0,param_1,param_2);
  return;
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

