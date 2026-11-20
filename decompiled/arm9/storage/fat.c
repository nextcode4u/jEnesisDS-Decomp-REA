/* ARM9 fat — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x02072c5c  helper_calls_fat_fat_partition_unsafeunmount

void FUN_02072c5c(void)

{
  FUN_02072db4();
  return;
}


// 0x02072c68  helper_calls_fat_fat_partition_unmount

void FUN_02072c68(void)

{
  FUN_02072e14();
  return;
}


// 0x02072c74  helper_calls_fat_fat_partition_mountcustominterface

void FUN_02072c74(void)

{
  FUN_020730f0();
  return;
}


// 0x02072c80  helper_calls_fat_fat_partition_mount

void FUN_02072c80(void)

{
  FUN_02073150();
  return;
}


// 0x02072c8c  helper_calls_fat_fat_partition_mount

undefined4 FUN_02072c8c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02073150(1,param_1);
  iVar2 = FUN_02073150(2,param_1);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      return 0;
    }
    FUN_02072cec(2);
  }
  else {
    FUN_02072cec(1);
  }
  thunk_FUN_02084e4c("");
  if (param_2 != 0) {
    thunk_FUN_0208553c(&DAT_0208f2f8);
  }
  return 1;
}


// 0x02072cec  fat_fat_partition_setdefaultinterface

undefined4 FUN_02072cec(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 - 1U & 0xff) < 3) && ((&DAT_020b4c5c)[param_1] != 0)) {
    uVar1 = 1;
    DAT_020b4c5c = (&DAT_020b4c5c)[param_1];
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x02072d10  fat_fat_partition_setdefaultpartition

undefined4 FUN_02072d10(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) ||
     (((param_1 != DAT_020b4c60 && (param_1 != DAT_020b4c64)) && (param_1 != DAT_020b4c68)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    DAT_020b4c5c = param_1;
  }
  return uVar1;
}


// 0x02072d38  fat_fat_partition_getpartitionfrompath

undefined4 FUN_02072d38(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = thunk_FUN_02083a6c(&DAT_0208f300);
  iVar2 = thunk_FUN_020836d4(param_1,0x3a);
  if (iVar2 != 0) {
    iVar2 = thunk_FUN_02083c80(&DAT_0208f300,param_1,iVar1);
    if (iVar2 != 0) {
      return 0;
    }
    uVar3 = (uint)*(byte *)(param_1 + iVar1);
    if (uVar3 != 0x3a) {
      if (-1 < (int)((uint)(byte)(&DAT_0208ee85)[uVar3] << 0x1d)) {
        return 0;
      }
      if (*(char *)(param_1 + iVar1 + 1) != ':') {
        return 0;
      }
      uVar3 = uVar3 - 0x30;
      if (3 < uVar3) {
        return 0;
      }
      goto LAB_02072d56;
    }
  }
  uVar3 = 0;
LAB_02072d56:
  return (&DAT_020b4c5c)[uVar3];
}


// 0x02072d9c  fat_fat_partition_destructor

void FUN_02072d9c(int *param_1)

{
  FUN_0207d0a8(param_1[1]);
  (**(code **)(*param_1 + 0x1c))();
  thunk_FUN_020826fc(param_1);
  return;
}


// 0x02072db4  fat_fat_partition_unsafeunmount

undefined4 FUN_02072db4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (&DAT_020b4c5c)[param_1];
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (iVar2 == DAT_020b4c5c) {
      DAT_020b4c5c = 0;
    }
    if (iVar2 == DAT_020b4c60) {
      DAT_020b4c60 = 0;
    }
    if (iVar2 == DAT_020b4c64) {
      DAT_020b4c64 = 0;
    }
    if (iVar2 == DAT_020b4c68) {
      DAT_020b4c68 = 0;
    }
    FUN_0207cf90(*(undefined4 *)(iVar2 + 4));
    FUN_02072d9c(iVar2);
    uVar1 = 1;
  }
  return uVar1;
}


// 0x02072e14  fat_fat_partition_unmount

undefined4 FUN_02072e14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (&DAT_020b4c5c)[param_1];
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 0)) {
    uVar2 = 0;
  }
  else {
    if (iVar1 == DAT_020b4c5c) {
      DAT_020b4c5c = 0;
    }
    if (iVar1 == DAT_020b4c60) {
      DAT_020b4c60 = 0;
    }
    if (iVar1 == DAT_020b4c64) {
      DAT_020b4c64 = 0;
    }
    if (iVar1 == DAT_020b4c68) {
      DAT_020b4c68 = 0;
    }
    FUN_02072d9c();
    uVar2 = 1;
  }
  return uVar2;
}


// 0x02072e70  fat_fat_partition_constructor

/* WARNING: Removing unreachable block (ram,0x02072fb2) */

int * FUN_02072e70(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char acStack_220 [8];
  ushort uStack_218;
  byte bStack_216;
  ushort local_215;
  byte local_213;
  ushort local_212;
  byte local_210;
  ushort local_20f;
  ushort local_20d;
  ushort local_20a;
  ushort uStack_200;
  byte bStack_1fe;
  byte bStack_1fd;
  ushort uStack_1fc;
  byte bStack_1fa;
  byte bStack_1f9;
  byte bStack_1f8;
  ushort uStack_1f4;
  byte bStack_1f2;
  byte bStack_1f1;
  char cStack_1ea;
  char cStack_1e9;
  char cStack_1e8;
  char cStack_1ce;
  char cStack_1cd;
  char cStack_1cc;
  char acStack_62 [8];
  ushort local_5a;
  byte local_58 [56];
  
  thunk_FUN_02083058(acStack_220,0,0x200);
  cVar1 = (**(code **)(param_1 + 0x10))(0,1,acStack_220);
  if (cVar1 == '\0') {
    return (int *)0x0;
  }
  if (local_58[0x36] != 'U') {
    return (int *)0x0;
  }
  if (local_58[0x37] != -0x56) {
    return (int *)0x0;
  }
  if ((((cStack_1ea == 'F') && (cStack_1e9 == 'A')) && (cStack_1e8 == 'T')) ||
     (((cStack_1ce == 'F' && (cStack_1cd == 'A')) && (cStack_1cc == 'T')))) {
LAB_02072f20:
    uVar5 = 0;
  }
  else {
    iVar3 = 0x1be;
    do {
      if (acStack_220[iVar3] == -0x80) {
        if (iVar3 == 0x1fe) goto LAB_02072f20;
        goto LAB_02073062;
      }
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != 0x1fe);
    if (acStack_62[4] == '\0') {
      if (local_58[10] == '\0') {
        if (local_58[0x1a] == '\0') {
          if (local_58[0x2a] == '\0') goto LAB_02072f20;
          iVar3 = 0x1ee;
        }
        else {
          iVar3 = 0x1de;
        }
      }
      else {
        iVar3 = 0x1ce;
      }
    }
    else {
      iVar3 = 0x1be;
    }
LAB_02073062:
    uVar5 = (uint)*(ushort *)((int)&uStack_218 + iVar3) |
            (uint)(&bStack_216)[iVar3] << 0x10 | (uint)*(byte *)((int)&local_215 + iVar3) << 0x18;
  }
  cVar1 = (**(code **)(param_1 + 0x10))(uVar5,1,acStack_220);
  if ((cVar1 == '\0') || (piVar2 = (int *)thunk_FUN_02082724(0x44), piVar2 == (int *)0x0)) {
    return (int *)0x0;
  }
  *piVar2 = param_1;
  piVar2[0xc] = (uint)local_20a;
  if (local_20a == 0) {
    piVar2[0xc] = (uint)uStack_1fc | (uint)bStack_1fa << 0x10 | (uint)bStack_1f9 << 0x18;
  }
  piVar2[6] = (uint)local_20d;
  if (local_20d == 0) {
    piVar2[6] = (uint)uStack_200 | (uint)bStack_1fe << 0x10 | (uint)bStack_1fd << 0x18;
  }
  piVar2[8] = 0x200;
  iVar3 = (int)((uint)local_215 * (uint)local_213) >> 9;
  piVar2[9] = iVar3;
  piVar2[10] = iVar3 << 9;
  iVar6 = uVar5 + local_212;
  piVar2[0xb] = iVar6;
  iVar4 = piVar2[0xc];
  iVar3 = iVar6 + (uint)local_210 * iVar4;
  piVar2[4] = iVar3;
  iVar3 = iVar3 + (uint)(local_20f >> 4);
  piVar2[7] = iVar3;
  piVar2[3] = (piVar2[6] - iVar3) * 0x200;
  uVar5 = thunk_FUN_02080380();
  piVar2[0xd] = uVar5;
  piVar2[0xe] = 2;
  if (uVar5 < 0xff5) {
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  else {
    if (0xfff4 < uVar5) {
      *(undefined1 *)((int)piVar2 + 9) = 3;
      piVar2[5] = (uint)uStack_1f4 | (uint)bStack_1f2 << 0x10 | (uint)bStack_1f1 << 0x18;
      if (-1 < (int)((uint)bStack_1f8 * 0x1000000)) {
        piVar2[0xb] = (bStack_1f8 & 0xf) * iVar4 + iVar6;
      }
      goto LAB_0207300e;
    }
    *(undefined1 *)((int)piVar2 + 9) = 2;
  }
  piVar2[5] = 0;
LAB_0207300e:
  iVar3 = FUN_0207d0c4(param_2,*piVar2);
  piVar2[1] = iVar3;
  piVar2[0xf] = piVar2[5];
  *(byte *)(piVar2 + 2) = ~(byte)(*(uint *)(param_1 + 4) >> 1) & 1;
  piVar2[0x10] = 0;
  return piVar2;
}


// 0x020730f0  fat_fat_partition_mountcustominterface

undefined4 FUN_020730f0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((DAT_020b4c68 == (int *)0x0) && (param_1 != 0)) {
    piVar3 = &DAT_020b4c5c;
    do {
      piVar4 = piVar3;
      piVar3 = (int *)*piVar4;
      if ((piVar3 != (int *)0x0) && (param_1 == *piVar3)) {
        DAT_020b4c68 = piVar3;
        return 1;
      }
      piVar3 = piVar4 + 1;
    } while (piVar4 + 1 != &DAT_020b4c6c);
    iVar2 = FUN_02072e70(param_1,param_2);
    *piVar4 = iVar2;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x02073150  fat_fat_partition_mount

bool FUN_02073150(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if ((&DAT_020b4c5c)[param_1] == 0) {
    if (param_1 == 1) {
      iVar1 = FUN_020731f8();
    }
    else {
      if (param_1 != 2) {
        return false;
      }
      iVar1 = FUN_020731bc();
    }
    if (iVar1 != 0) {
      piVar2 = &DAT_020b4c5c;
      while ((piVar3 = piVar2, piVar2 = (int *)*piVar3, piVar2 == (int *)0x0 || (iVar1 != *piVar2)))
      {
        piVar2 = piVar3 + 1;
        if (piVar3 + 1 == &DAT_020b4c6c) {
          iVar1 = FUN_02072e70(iVar1,param_2);
          piVar3[param_1 + -3] = iVar1;
          return iVar1 != 0;
        }
      }
      (&DAT_020b4c5c)[param_1] = piVar2;
      return true;
    }
  }
  return false;
}


// 0x020731bc  fat_fat_disc_gbaslotfindinterface

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020731bc(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = &DAT_0208f364;
  _DAT_04000204 = _DAT_04000204 & 0xff7f;
  iVar3 = 0;
  puVar4 = &DAT_0208f364;
  while ((-1 < *(int *)(*piVar2 + 4) << 0x1b || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 == 0)))
  {
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    piVar2 = piVar2 + 1;
    if (iVar3 == 8) {
      return 0;
    }
  }
  return *puVar4;
}


// 0x020731f8  fat_fat_disc_dsslotfindinterface

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020731f8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = &DAT_0208f364;
  _DAT_04000204 = _DAT_04000204 & 0xf7ff;
  iVar3 = 0;
  puVar4 = &DAT_0208f364;
  while ((-1 < *(int *)(*piVar2 + 4) << 0x1a || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 == 0)))
  {
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    piVar2 = piVar2 + 1;
    if (iVar3 == 8) {
      return 0;
    }
  }
  return *puVar4;
}


// 0x02073238  fat_fat_disc_findinterface

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073238(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar2 = &DAT_0208f364;
  _DAT_04000204 = _DAT_04000204 & 0xf77f;
  iVar3 = 0;
  puVar4 = &DAT_0208f364;
  do {
    iVar1 = (**(code **)(*piVar2 + 8))();
    if (iVar1 != 0) {
      return *puVar4;
    }
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 8);
  return 0;
}


// 0x02073274  helper_calls_fat_m3_changemode

void FUN_02073274(void)

{
  FUN_0207ebf4(0x400003);
  FUN_0207eba0(&DAT_0208ed0c);
  return;
}


// 0x02073290  fat_m3sd_sendcommand

/* WARNING: Removing unreachable block (ram,0x020732d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073290(short param_1,undefined4 param_2)

{
  int iVar1;
  
  _DAT_09800000 = 8;
  _DAT_09200000 = param_1 + 0x40;
  _DAT_09400000 = (short)((uint)param_2 >> 0x10);
  _DAT_09600000 = (short)param_2;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 != 20000);
  _DAT_08800000 = 9;
  return 0;
}


// 0x020732f0  fat_m3sd_getbyte

/* WARNING: Removing unreachable block (ram,0x02073316) */
/* WARNING: Removing unreachable block (ram,0x02073322) */
/* WARNING: Removing unreachable block (ram,0x02073328) */
/* WARNING: Removing unreachable block (ram,0x0207332e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_020732f0(void)

{
  int iVar1;
  
  _DAT_08800000 = 2;
  _DAT_09800000 = 2;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 != 20000);
  return 0xff;
}


// 0x02073344  fat_m3sd_getresponse

undefined4 FUN_02073344(byte *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = 0;
  do {
    iVar1 = FUN_020732f0();
    if (iVar1 != 0xff) break;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x100);
  if (param_1 == (byte *)0x0) {
LAB_020733e4:
    uVar2 = 1;
  }
  else {
    if (iVar1 != 0xff) {
      if (param_2 != 0) {
        iVar5 = 0;
        do {
          param_1[iVar5] = (byte)iVar1;
          iVar1 = FUN_020732f0();
          iVar5 = iVar5 + 1;
        } while (param_2 != iVar5);
      }
      FUN_020732f0();
      FUN_020732f0();
      if ((*param_1 & 0x80) == 0) {
        uVar4 = 0;
        uVar3 = 8;
LAB_020733b6:
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          param_2 = 0;
        }
        else {
          iVar5 = 0;
          pbVar6 = param_1;
          do {
            iVar5 = iVar5 + 1;
            *pbVar6 = *pbVar6 << (uVar4 & 0xff) | (byte)((int)(uint)pbVar6[1] >> (uVar3 & 0xff));
            pbVar6 = pbVar6 + 1;
          } while (iVar5 != param_2);
        }
        param_1[param_2] = param_1[param_2] << (uVar4 & 0xff) | (byte)(iVar1 >> (uVar3 & 0xff));
        goto LAB_020733e4;
      }
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        if (((uint)*param_1 << (uVar4 & 0xff) & 0x80) == 0) {
          uVar3 = 8 - uVar4;
          goto LAB_020733b6;
        }
      } while (uVar4 != 7);
    }
    uVar2 = 0;
  }
  return uVar2;
}


// 0x0207340c  fat_m3sd_cmd_17byte_response

void FUN_0207340c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_02073290(param_2,param_3);
  FUN_02073344(param_1,0x11);
  return;
}


// 0x02073424  fat_m3sd_readdata

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073424(undefined2 *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = 0;
  do {
    if ((_DAT_09800000 & 0x40) != 0) {
      _DAT_08800000 = 8;
      _DAT_09800000 = 4;
      if ((int)param_1 << 0x1f < 0) {
        iVar2 = 0;
        do {
          uVar1 = _DAT_08800000;
          iVar2 = iVar2 + 2;
          *(char *)param_1 = (char)_DAT_08800000;
          *(char *)((int)param_1 + 1) = (char)((ushort)uVar1 >> 8);
          param_1 = param_1 + 1;
        } while (iVar2 != 0x200);
      }
      else {
        puVar3 = param_1 + 0x100;
        do {
          *param_1 = _DAT_08800000;
          param_1 = param_1 + 1;
        } while (puVar3 != param_1);
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 20000);
  _DAT_08800000 = 9;
  return 0;
}


// 0x020734b4  fat_m3sd_clkout

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020734b4(void)

{
  _DAT_08800000 = 0xc;
  return;
}


// 0x020734c4  fat_m3sd_clkin

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020734c4(void)

{
  _DAT_08800000 = 8;
  return;
}


// 0x020734d4  fat_m3sd_isinserted

bool FUN_020734d4(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char local_e [6];
  
  iVar2 = FUN_02073290(0xd,0);
  if ((iVar2 == 0) || (cVar1 = FUN_02073344(local_e,6), cVar1 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = local_e[0] == '\r';
  }
  return bVar3;
}


// 0x02073510  fat_m3sd_readsectors

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02073510(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1e [6];
  
  if (param_2 == 1) {
    iVar1 = FUN_02073290(0x11,param_1 << 9);
    if (iVar1 != 0) {
      iVar1 = FUN_02073424(param_3);
      return iVar1 != 0;
    }
  }
  else {
    iVar1 = FUN_02073290(0x12,param_1 << 9);
    if (iVar1 != 0) {
      if (param_2 == 0) {
LAB_02073584:
        FUN_02073290(0xc,0);
        FUN_02073344(auStack_1e,6);
        return true;
      }
      iVar1 = 0;
      while (iVar2 = FUN_02073424(param_3), iVar2 != 0) {
        iVar1 = iVar1 + 1;
        _DAT_09800000 = 8;
        if (param_2 == iVar1) goto LAB_02073584;
        param_3 = param_3 + 0x200;
      }
    }
  }
  return false;
}


// 0x020735b0  fat_m3sd_initcard

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020735b0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 99;
  do {
    _DAT_09000000 = 0xff;
    _DAT_08800000 = 3;
    iVar1 = 0;
    _DAT_09800000 = 1;
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 != 20000);
    bVar3 = iVar2 != 0;
    iVar2 = iVar2 + -1;
  } while (bVar3);
  iVar2 = FUN_02073290(0,0);
  if (iVar2 != 0) {
    iVar2 = 99;
    do {
      FUN_020732f0();
      bVar3 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar3);
    DAT_020b4c6c = 0;
    FUN_02074c84(&LAB_020733f4_1,0x207340d,1);
  }
  return;
}


// 0x02073638  fat_m3sd_clearstatus

void FUN_02073638(void)

{
  FUN_020735b0();
  return;
}


// 0x02073644  fat_m3sd_startup

void FUN_02073644(void)

{
  FUN_0207ebf4(0x400003);
  FUN_020735b0();
  return;
}


// 0x0207365c  fat_m3sd_writesectors

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


// 0x020737b8  helper_calls_fat_cf_startup

void FUN_020737b8(void)

{
  FUN_0207eba0(&DAT_0208ed70);
  return;
}


// 0x020737cc  fat_njsd_reset

/* WARNING: Removing unreachable block (ram,0x02073810) */
/* WARNING: Removing unreachable block (ram,0x02073820) */
/* WARNING: Removing unreachable block (ram,0x02073816) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_020737cc(void)

{
  int iVar1;
  
  DAT_040001a1 = 0x80;
  DAT_040001a8 = 0x20;
  DAT_040001a9 = 0;
  DAT_040001aa = 0;
  DAT_040001ab = 0;
  DAT_040001ac = 0;
  DAT_040001ad = 0;
  DAT_040001ae = 0;
  DAT_040001af = 0;
  iVar1 = 10000;
  _DAT_040001a4 = 0xa0406000;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}


// 0x0207383c  fat_njsd_sendcmdr

/* WARNING: Removing unreachable block (ram,0x020738e6) */
/* WARNING: Removing unreachable block (ram,0x0207394c) */
/* WARNING: Removing unreachable block (ram,0x02073906) */
/* WARNING: Removing unreachable block (ram,0x0207390e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0207383c(int param_1,undefined1 *param_2,uint param_3,byte param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined1 uVar2;
  
  DAT_040001a1 = 0x80;
  uVar6 = param_3 & 3;
  if (uVar6 < 2) {
    DAT_040001a8 = (byte)(param_3 << 1) | (byte)(param_1 << 2) | 0xf1;
  }
  else {
    if (uVar6 == 2) {
      cVar5 = '\x1e';
    }
    else {
      cVar5 = '\x0e';
    }
    DAT_040001a8 = (byte)(param_1 << 2) | -cVar5;
  }
  DAT_040001a9 = (byte)param_3 & 0x40 | (byte)(((param_3 & 0x1f) >> 2) << 3);
  DAT_040001aa = param_4 | 0x40;
  DAT_040001ab = (undefined1)((uint)param_5 >> 0x18);
  DAT_040001ac = (undefined1)((uint)param_5 >> 0x10);
  DAT_040001ad = (undefined1)((uint)param_5 >> 8);
  DAT_040001ae = (undefined1)param_5;
  DAT_040001af = 0;
  if (uVar6 < 2) {
    _DAT_040001a4 = DAT_020b4c74 | 0x1000000;
    _DAT_04000214 = 0x100000;
    iVar4 = 0;
    do {
      uVar3 = _DAT_04100010;
      if ((int)(_DAT_040001a4 << 8) < 0) {
        if (param_2 != (undefined1 *)0x0) {
          uVar1 = (undefined1)_DAT_04100010;
          uVar2 = (undefined1)((uint)_DAT_04100010 >> 8);
          if (iVar4 == 4) {
            param_2[1] = uVar2;
            param_2[2] = (char)((uint)uVar3 >> 0x10);
            *param_2 = uVar1;
            param_2[3] = (char)((uint)uVar3 >> 0x18);
          }
          else if (iVar4 == 5) {
            param_2[4] = uVar1;
            param_2[5] = uVar2;
          }
        }
        iVar4 = iVar4 + 1;
      }
    } while ((int)_DAT_040001a4 < 0);
  }
  else {
    _DAT_040001a4 = DAT_020b4c74;
    do {
    } while ((int)DAT_020b4c74 < 0);
    _DAT_04000214 = 0x100000;
  }
  return 1;
}


// 0x020739cc  fat_njsd_sendclk

/* WARNING: Removing unreachable block (ram,0x02073a3e) */
/* WARNING: Removing unreachable block (ram,0x02073a5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020739cc(byte param_1,char param_2)

{
  int iVar1;
  
  DAT_040001aa = param_2 + -1;
  DAT_040001a8 = (param_1 & 3) << 2 | 0xe0;
  DAT_040001a9 = 0;
  DAT_040001ab = 0;
  DAT_040001ac = 0;
  DAT_040001ad = 0;
  DAT_040001ae = 0;
  DAT_040001af = 0;
  iVar1 = 100000;
  _DAT_040001a4 = DAT_020b4c74;
  do {
    if (-1 < DAT_020b4c74) {
      if (iVar1 < 1) {
        _DAT_040001a4 = DAT_020b4c74;
        DAT_040001a9 = 0;
        DAT_040001ab = 0;
        DAT_040001ac = 0;
        DAT_040001ad = 0;
        DAT_040001ae = 0;
        DAT_040001af = 0;
        _DAT_04000214 = 0x100000;
        return 0;
      }
      _DAT_040001a4 = DAT_020b4c74;
      DAT_040001a9 = 0;
      DAT_040001ab = 0;
      DAT_040001ac = 0;
      DAT_040001ad = 0;
      DAT_040001ae = 0;
      DAT_040001af = 0;
      _DAT_04000214 = 0x100000;
      return 1;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  _DAT_04000214 = 0x100000;
  return 0;
}


// 0x02073a84  fat_njsd_sendcmdn

/* WARNING: Removing unreachable block (ram,0x02073b16) */
/* WARNING: Removing unreachable block (ram,0x02073b32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073a84(byte param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  
  DAT_040001a1 = 0x80;
  DAT_040001a8 = (param_1 & 3) << 2 | 0xf0;
  DAT_040001a9 = 0;
  DAT_040001aa = param_2 | 0x40;
  DAT_040001ab = (undefined1)((uint)param_3 >> 0x18);
  DAT_040001ac = (undefined1)((uint)param_3 >> 0x10);
  DAT_040001ad = (undefined1)((uint)param_3 >> 8);
  DAT_040001ae = (undefined1)param_3;
  DAT_040001af = 0;
  iVar1 = 100000;
  _DAT_040001a4 = DAT_020b4c74;
  do {
    if (-1 < DAT_020b4c74) {
      if (iVar1 < 1) {
        DAT_040001a1 = 0x80;
        _DAT_040001a4 = DAT_020b4c74;
        DAT_040001a9 = 0;
        DAT_040001af = 0;
        _DAT_04000214 = 0x100000;
        return 0;
      }
      DAT_040001a1 = 0x80;
      _DAT_040001a4 = DAT_020b4c74;
      DAT_040001a9 = 0;
      DAT_040001af = 0;
      _DAT_04000214 = 0x100000;
      return 1;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  _DAT_04000214 = 0x100000;
  return 0;
}


// 0x02073b64  fat_njsd_cmd_6byte_response

void FUN_02073b64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0207383c(0,param_1,0,param_2,param_3);
  return;
}


// 0x02073b7c  fat_njsd_cmd_17byte_response

void FUN_02073b7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0207383c(0,param_1,1,param_2,param_3);
  return;
}


// 0x02073b94  fat_njsd_isinserted

bool FUN_02073b94(void)

{
  char local_10 [8];
  
  FUN_0207383c(0,local_10,0,0xd,0);
  return local_10[0] == '\r';
}


// 0x02073bc0  fat_njsd_clearstatus

void FUN_02073bc0(void)

{
  FUN_020737cc();
  return;
}


// 0x02073bcc  fat_njsd_shutdown

void FUN_02073bcc(void)

{
  FUN_02073bc0();
  return;
}


// 0x02073bd8  fat_njsd_writesectors

/* WARNING: Removing unreachable block (ram,0x02073d5c) */
/* WARNING: Removing unreachable block (ram,0x02073dee) */
/* WARNING: Removing unreachable block (ram,0x02073d62) */
/* WARNING: Removing unreachable block (ram,0x02073dc8) */
/* WARNING: Removing unreachable block (ram,0x02073d66) */
/* WARNING: Removing unreachable block (ram,0x02073c56) */
/* WARNING: Removing unreachable block (ram,0x02073c5a) */
/* WARNING: Removing unreachable block (ram,0x02073c5c) */
/* WARNING: Removing unreachable block (ram,0x02073cce) */
/* WARNING: Removing unreachable block (ram,0x02073cd0) */
/* WARNING: Removing unreachable block (ram,0x02073cd6) */
/* WARNING: Removing unreachable block (ram,0x02073c6a) */
/* WARNING: Removing unreachable block (ram,0x02073c7a) */
/* WARNING: Removing unreachable block (ram,0x02073c78) */
/* WARNING: Removing unreachable block (ram,0x02073c8e) */
/* WARNING: Removing unreachable block (ram,0x02073cc8) */
/* WARNING: Removing unreachable block (ram,0x02073ce2) */
/* WARNING: Removing unreachable block (ram,0x02073d3c) */
/* WARNING: Removing unreachable block (ram,0x02073d36) */
/* WARNING: Removing unreachable block (ram,0x02073dfe) */
/* WARNING: Removing unreachable block (ram,0x02073d42) */
/* WARNING: Removing unreachable block (ram,0x02073d48) */
/* WARNING: Removing unreachable block (ram,0x02073d56) */
/* WARNING: Removing unreachable block (ram,0x02073d68) */
/* WARNING: Removing unreachable block (ram,0x02073d6e) */
/* WARNING: Removing unreachable block (ram,0x02073da0) */
/* WARNING: Removing unreachable block (ram,0x02073d8a) */
/* WARNING: Removing unreachable block (ram,0x02073da8) */
/* WARNING: Removing unreachable block (ram,0x02073db6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073bd8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_36 [18];
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    FUN_02074b88(param_3,0x200,local_36);
    iVar2 = 100000;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    DAT_040001af = 0;
    DAT_040001ae = 0;
    DAT_040001ad = 0;
    DAT_040001ac = 0;
    DAT_040001ab = 0;
    DAT_040001aa = 0;
    DAT_040001a9 = 0;
    DAT_040001a8 = 0x80;
    _DAT_040001a4 = 0xa0406000;
    DAT_040001a1 = 0x80;
    uVar1 = 0;
  }
  return uVar1;
}


// 0x02073e68  fat_njsd_startup

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02073e68(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  DAT_020b4c74 = 0xa0406000;
  _DAT_04000214 = 0x100000;
  FUN_0208024c();
  iVar2 = FUN_020737cc();
  if (((iVar2 == 0) || (iVar2 = FUN_020739cc(0,0x100), iVar2 == 0)) ||
     (iVar2 = FUN_02073a84(0,0,0), iVar2 == 0)) {
    bVar3 = false;
  }
  else {
    FUN_020739cc(0,8);
    FUN_020739cc(0,0x100);
    FUN_02073a84(0,0,0);
    FUN_020739cc(0,8);
    cVar1 = FUN_02074c84(0x2073b65,0x2073b7d,1,&DAT_020b4c70);
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}


// 0x02073f04  fat_njsd_readsectors

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02073f04(int param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_228 [516];
  
  uVar1 = _DAT_04000208;
  if (param_2 != 0) {
    _DAT_04000208 = 0;
    if (param_2 < 2) {
      FUN_0207383c(2,0,3,0x11,param_1 << 9);
      if ((param_3 & 3) == 0) {
        FUN_0207fdcc(0xa1406000,param_3,0x200,&DAT_0208edb4);
      }
      else {
        FUN_0207fdcc(0xa1406000,auStack_228,0x200,&DAT_0208edb4);
        thunk_FUN_02082ec0(param_3,auStack_228,0x200);
      }
      _DAT_04000208 = uVar1;
      return 1;
    }
    FUN_0207383c(2,0,2,0x12,param_1 << 9);
    if (param_2 != 2) {
      iVar3 = 0;
      uVar4 = param_3;
      do {
        if ((param_3 & 3) == 0) {
          FUN_0207fdcc(0xa1406000,uVar4,0x200,&DAT_0208edb4);
        }
        else {
          FUN_0207fdcc(0xa1406000,auStack_228,0x200,&DAT_0208edb4);
          thunk_FUN_02082ec0(uVar4,auStack_228,0x200);
        }
        iVar2 = 1000000;
        while ((_DAT_04000214 & 0x100000) == 0) {
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            _DAT_04000208 = uVar1;
            _DAT_04000214 = 0x100000;
            return 0;
          }
        }
        _DAT_04000214 = 0x100000;
        if (iVar2 < 1) {
          _DAT_04000208 = uVar1;
          _DAT_04000214 = 0x100000;
          return 0;
        }
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 + 0x200;
      } while (param_2 - 2 != iVar3);
    }
    if ((param_3 & 3) == 0) {
      FUN_0207fdcc(0xa1406000,param_3 + param_2 * 0x200 + -0x400,0x200,&DAT_0208edbc);
    }
    else {
      FUN_0207fdcc(0xa1406000,auStack_228,0x200,&DAT_0208edbc);
      thunk_FUN_02082ec0(param_3 + param_2 * 0x200 + -0x400,auStack_228,0x200);
    }
    iVar3 = 1000000;
    do {
      if ((_DAT_04000214 & 0x100000) != 0) {
        _DAT_04000214 = 0x100000;
        if (0 < iVar3) {
          if ((param_3 & 3) != 0) {
            FUN_0207fdcc(0xa1406000,auStack_228,0x200,&DAT_0208edb4);
            thunk_FUN_02082ec0(param_3 + param_2 * 0x200 + -0x200,auStack_228,0x200);
            _DAT_04000208 = uVar1;
            return 1;
          }
          FUN_0207fdcc(0xa1406000,param_3 + param_2 * 0x200 + -0x200,0x200,&DAT_0208edb4);
          _DAT_04000208 = uVar1;
          return 1;
        }
        break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    _DAT_04000214 = 0x100000;
  }
  _DAT_04000208 = uVar1;
  return 0;
}


// 0x020740f8  fat_neo_sendmmccommand

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020740f8(void)

{
  do {
  } while ((_DAT_040001a0 & 0x80) != 0);
  do {
  } while ((_DAT_040001a0 & 0x80) != 0);
  do {
  } while ((_DAT_040001a0 & 0x80) != 0);
  do {
  } while ((_DAT_040001a0 & 0x80) != 0);
  do {
  } while ((_DAT_040001a0 & 0x80) != 0);
  do {
  } while ((_DAT_040001a0 & 0x80) != 0);
  do {
  } while ((_DAT_040001a0 & 0x80) != 0);
  DAT_040001a2 = 0xff;
  do {
  } while ((_DAT_040001a0 & 0x80) != 0);
  return;
}


// 0x020741ac  fat_neo_checkmmcresponse

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020741ac(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    DAT_040001a2 = 0xff;
    do {
    } while ((_DAT_040001a0 & 0x80) != 0);
    if ((param_2 & 0xff) == param_1) break;
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x100) {
      return 0;
    }
  }
  DAT_040001a2 = 0xff;
  return 1;
}


// 0x020741e8  fat_neo_selectmmc

/* WARNING: Removing unreachable block (ram,0x02074202) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020741e8(undefined1 param_1)

{
  DAT_0208f389 = param_1;
  FUN_0207fda8();
  do {
  } while( true );
}


// 0x02074214  fat_neo_enablemmc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02074214(int param_1)

{
  if (param_1 == 0) {
    _DAT_040001a0 = 0;
    FUN_020741e8();
    FUN_020741e8(0);
  }
  else {
    FUN_020741e8(1);
    FUN_020741e8(1);
    _DAT_040001a0 = (byte)DAT_0208f384 | 0xa040;
  }
  return;
}


// 0x02074258  fat_nmmc_clearstatus

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02074258(void)

{
  int iVar1;
  int iVar2;
  
  FUN_02074214(1);
  iVar1 = 0;
  do {
    DAT_040001a2 = 0xff;
    do {
    } while ((_DAT_040001a0 & 0x80) != 0);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  FUN_020740f8(0,0,0x80,0xff);
  iVar1 = FUN_020741ac(1,0xff);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      FUN_020740f8(1,0);
      iVar2 = FUN_020741ac(0,1);
      if (iVar2 == 1) {
        FUN_02074214(0);
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x100);
  }
  FUN_02074214(0);
  return 0;
}


// 0x020742d4  fat_nmmc_shutdown

void FUN_020742d4(void)

{
  FUN_02074258();
  return;
}


// 0x020742e0  fat_nmmc_isinserted

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020742e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_02074214(1);
  FUN_020740f8(9,0);
  iVar1 = FUN_020741ac(0,0xff);
  if ((iVar1 == 0) || (iVar1 = FUN_020741ac(0xfe,0xff), iVar1 == 0)) {
    FUN_02074214();
    uVar2 = 0;
  }
  else {
    iVar1 = 0;
    do {
      DAT_040001a2 = 0xff;
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x1c);
    uVar2 = 1;
  }
  return uVar2;
}


// 0x0207433c  fat_nmmc_readsectors

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0207433c(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  FUN_02074214(1);
  if (param_2 == 0) {
LAB_02074400:
    FUN_02074214(0);
    uVar3 = 1;
  }
  else {
    param_1 = param_1 << 9;
    while( true ) {
      param_2 = param_2 + -1;
      FUN_020740f8(0x11,param_1);
      iVar1 = FUN_020741ac(0,0xff);
      if ((iVar1 == 0) || (iVar1 = FUN_020741ac(0xfe,0xff), iVar1 == 0)) break;
      iVar1 = 0;
      puVar2 = param_3;
      do {
        do {
        } while ((_DAT_040001a0 & 0x80) != 0);
        iVar1 = iVar1 + 1;
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      } while (iVar1 != 0x200);
      param_3 = param_3 + 0x200;
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      DAT_040001a2 = 0xff;
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      if (param_2 == 0) goto LAB_02074400;
      param_1 = param_1 + 0x200;
    }
    FUN_02074214();
    uVar3 = 0;
  }
  return uVar3;
}


// 0x02074414  fat_nmmc_writesectors

/* WARNING: Removing unreachable block (ram,0x020744ca) */
/* WARNING: Removing unreachable block (ram,0x020744d6) */
/* WARNING: Removing unreachable block (ram,0x020744dc) */
/* WARNING: Removing unreachable block (ram,0x020744e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02074414(int param_1,int param_2)

{
  int iVar1;
  
  FUN_02074214(1);
  FUN_020740f8(0x19,param_1 * 0x200);
  iVar1 = FUN_020741ac(0,0xff);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      iVar1 = 0;
      do {
        do {
        } while ((_DAT_040001a0 & 0x80) != 0);
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x200);
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      iVar1 = 0;
      do {
        DAT_040001a2 = 0xff;
        do {
        } while ((_DAT_040001a0 & 0x80) != 0);
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x10);
      FUN_02074214(0,&DAT_040001a0,0x80,0xff);
      return 1;
    }
    do {
    } while ((_DAT_040001a0 & 0x80) != 0);
    iVar1 = 0;
    do {
      do {
      } while ((_DAT_040001a0 & 0x80) != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x200);
    do {
    } while ((_DAT_040001a0 & 0x80) != 0);
    do {
    } while ((_DAT_040001a0 & 0x80) != 0);
    DAT_040001a2 = 0xff;
    do {
    } while ((_DAT_040001a0 & 0x80) != 0);
  }
  FUN_02074214(0);
  return 0;
}


// 0x020745b4  fat_nmmc_startup

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020745b4(void)

{
  int iVar1;
  
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  do {
  } while ((DAT_0208f384 & 0x80) != 0);
  DAT_040001a2 = 0xe;
  do {
    _DAT_040001a0 = (byte)DAT_0208f384 & 0x80;
  } while ((DAT_0208f384 & 0x80) != 0);
  if ((((byte)DAT_0208f384 & 0x80) == 0x31) && (iVar1 = FUN_02074258(), iVar1 != 0)) {
    FUN_02074214(1);
    FUN_020740f8(0x10,0x200);
    iVar1 = FUN_020741ac(0,0xff);
    if (iVar1 != 0) {
      FUN_020740f8(9,0);
      iVar1 = FUN_020741ac(0,0xff);
      if ((iVar1 != 0) && (iVar1 = FUN_020741ac(0xfe,0xff), iVar1 != 0)) {
        iVar1 = 0;
        do {
          do {
          } while ((_DAT_040001a0 & 0x80) != 0);
          iVar1 = iVar1 + 1;
        } while (iVar1 != 3);
        do {
        } while ((_DAT_040001a0 & 0x80) != 0);
        iVar1 = 0;
        do {
          DAT_040001a2 = 0xff;
          do {
            DAT_0208f384 = _DAT_040001a0 & 0x80;
          } while ((_DAT_040001a0 & 0x80) != 0);
          iVar1 = iVar1 + 1;
        } while (iVar1 != 0x18);
        FUN_02074214(0);
        return 1;
      }
    }
    FUN_02074214(0);
  }
  return 0;
}


// 0x0207478c  helper_calls_fat_cf_startup

void FUN_0207478c(void)

{
  FUN_0207ec90(3);
  FUN_0207eba0(&DAT_0208ee04);
  return;
}


// 0x020747a4  fat_scsd_getresponse

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020747a4(undefined1 *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = 500000;
  do {
    if ((_DAT_09800000 & 1) == 0) break;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (param_1 != (undefined1 *)0x0) {
    if (iVar3 == 0) {
      return 0;
    }
    uVar1 = param_2 * 8 - 1;
    uVar2 = 0;
    while (uVar1 != 0) {
      while( true ) {
        uVar1 = uVar1 - 1;
        uVar2 = uVar2 << 1 | _DAT_09800000 & 1;
        if ((uVar1 & 7) != 0) break;
        *param_1 = (char)uVar2;
        param_1 = param_1 + 1;
        uVar2 = 0;
        if (uVar1 == 0) goto LAB_020747ee;
      }
    }
LAB_020747ee:
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
  }
  return 1;
}


// 0x02074808  fat_scsd_sendclocks

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02074808(int param_1)

{
  bool bVar1;
  
  do {
    bVar1 = param_1 != 0;
    param_1 = param_1 + -1;
  } while (bVar1);
  return;
}


// 0x02074818  fat_scsd_readdata

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02074818(undefined2 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = 500000;
  do {
    if ((_DAT_09100000 & 0x100) == 0) {
      if (iVar3 == 0) {
        return 0;
      }
      if ((int)param_1 << 0x1f < 0) {
        iVar3 = 0;
        do {
          uVar1 = _DAT_09100000;
          iVar3 = iVar3 + 2;
          *(char *)param_1 = (char)(_DAT_09100000 >> 0x10);
          *(char *)((int)param_1 + 1) = (char)(uVar1 >> 0x18);
          param_1 = param_1 + 1;
        } while (iVar3 != 0x200);
      }
      else {
        puVar2 = param_1 + 0x100;
        do {
          *param_1 = (short)(_DAT_09100000 >> 0x10);
          param_1 = param_1 + 1;
        } while (param_1 != puVar2);
      }
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 != 8);
      return 1;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}


// 0x020748ac  fat_scsd_shutdown

undefined4 FUN_020748ac(void)

{
  FUN_0207ec90(1);
  return 1;
}


// 0x020748bc  fat_scsd_sendcommand

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


// 0x0207492c  fat_scsd_readsectors

undefined4 FUN_0207492c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_16 [6];
  
  if (param_2 == 1) {
    iVar1 = FUN_020748bc(0x11,param_1 << 9);
    if ((iVar1 != 0) && (iVar1 = FUN_02074818(param_3), iVar1 != 0)) {
LAB_02074992:
      FUN_02074808(0x10);
      return 1;
    }
  }
  else {
    iVar1 = FUN_020748bc(0x12,param_1 << 9);
    if (iVar1 != 0) {
      if (param_2 == 0) {
LAB_02074980:
        FUN_020748bc(0xc,0);
        FUN_020747a4(auStack_16,6);
        goto LAB_02074992;
      }
      iVar1 = 0;
      while (iVar2 = FUN_02074818(param_3), iVar2 != 0) {
        iVar1 = iVar1 + 1;
        if (param_2 == iVar1) goto LAB_02074980;
        param_3 = param_3 + 0x200;
      }
    }
  }
  return 0;
}


// 0x0207499c  fat_scsd_isinserted

bool FUN_0207499c(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char local_e [6];
  
  iVar2 = FUN_020748bc(0xd,0);
  if ((iVar2 == 0) || (cVar1 = FUN_020747a4(local_e,6), cVar1 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = local_e[0] == '\r';
  }
  return bVar3;
}


// 0x020749d8  fat_scsd_initcard

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020749d8(void)

{
  int iVar1;
  
  _DAT_09440000 = 0;
  FUN_02074808(100);
  iVar1 = FUN_020748bc(0,0);
  if (iVar1 != 0) {
    FUN_02074808(100);
    DAT_020b4c78 = 0;
    FUN_02074c84(0x2074a51,0x2074a39,1);
  }
  return;
}


// 0x02074a18  fat_scsd_clearstatus

void FUN_02074a18(void)

{
  FUN_020749d8();
  return;
}


// 0x02074a24  fat_scsd_startup

void FUN_02074a24(void)

{
  FUN_0207ec90(3);
  FUN_020749d8();
  return;
}


// 0x02074a38  fat_scsd_cmd_17byte_response

void FUN_02074a38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_020748bc(param_2,param_3);
  FUN_020747a4(param_1,0x11);
  return;
}


// 0x02074a50  fat_scsd_cmd_6byte_response

void FUN_02074a50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_020748bc(param_2,param_3);
  FUN_020747a4(param_1,6);
  return;
}


// 0x02074a68  fat_scsd_writesectors

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


// 0x02074b2c  fat_sd_crc7

uint FUN_02074b2c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    uVar1 = 1;
  }
  else {
    iVar4 = 0;
    uVar1 = 0;
    do {
      uVar2 = (uint)*(byte *)(iVar4 + param_1);
      iVar3 = 0;
      while( true ) {
        uVar1 = (uVar1 & 0x7f) * 2;
        if ((uVar2 & 0x80) != (uVar1 & 0x80)) {
          uVar1 = uVar1 ^ 9;
        }
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) break;
        uVar2 = (uVar2 & 0x7f) << 1;
      }
      iVar4 = iVar4 + 1;
    } while (param_2 != iVar4);
    uVar1 = (uVar1 & 0x7f) << 1 | 1;
  }
  return uVar1;
}


// 0x02074b88  fat_sd_crc16

void FUN_02074b88(byte *param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_2 = param_2 << 3;
  uVar2 = 0;
  uVar1 = 0x80808080;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar6 = 0;
  do {
    if ((int)(uVar1 << 0x18) < 0) {
      uVar6 = (uint)*param_1;
      param_1 = param_1 + 1;
    }
    uVar5 = uVar5 << 1;
    if ((uVar5 & 0x10000) != 0) {
      uVar5 = uVar5 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x18) != 0) {
      uVar5 = uVar5 ^ 0x1021;
    }
    uVar4 = uVar4 << 1;
    if ((uVar4 & 0x10000) != 0) {
      uVar4 = uVar4 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x19) != 0) {
      uVar4 = uVar4 ^ 0x1021;
    }
    uVar3 = uVar3 << 1;
    if ((uVar3 & 0x10000) != 0) {
      uVar3 = uVar3 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x1a) != 0) {
      uVar3 = uVar3 ^ 0x1021;
    }
    uVar2 = uVar2 << 1;
    if ((uVar2 & 0x10000) != 0) {
      uVar2 = uVar2 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x1b) != 0) {
      uVar2 = uVar2 ^ 0x1021;
    }
    param_2 = param_2 + -4;
    uVar1 = uVar1 >> 4 | uVar1 << 0x1c;
  } while (param_2 != 0);
  uVar6 = 0x10;
  while( true ) {
    uVar1 = uVar1 << 4;
    if ((uVar5 & 0x8000) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((uVar4 & 0x8000) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((uVar3 & 0x8000) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((uVar2 & 0x8000) != 0) {
      uVar1 = uVar1 | 1;
    }
    uVar6 = uVar6 - 1;
    if ((uVar6 & 1) == 0) {
      *param_3 = (char)uVar1;
      param_3 = param_3 + 1;
    }
    if (uVar6 == 0) break;
    uVar5 = uVar5 << 1;
    uVar4 = uVar4 << 1;
    uVar3 = uVar3 << 1;
    uVar2 = uVar2 << 1;
  }
  return;
}


// 0x02074c84  fat_sd_initcard

undefined4 FUN_02074c84(code *param_1,code *param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  
  thunk_FUN_02083058(&local_31,0,0x11);
  iVar2 = 0;
  while( true ) {
    (*param_1)(&local_31,0x37,0);
    if (local_31 != '7') {
      return 0;
    }
    iVar1 = (*param_1)(&local_31,0x29,0x30000);
    if ((iVar1 != 0) && ((char)local_30 < '\0')) break;
    iVar2 = iVar2 + 1;
    if (iVar2 == 1000) {
      return 0;
    }
  }
  (*param_2)(&local_31,2,0);
  iVar2 = 0;
  do {
    (*param_1)(&local_31,3,0);
    uVar3 = (uint)local_30 * 0x1000000 | (uint)local_2f << 0x10;
    *param_4 = uVar3;
    if ((local_2e & 0x1e) != 6) {
      (*param_2)(&local_31,9,uVar3);
      (*param_1)(&local_31,7,*param_4);
      if (param_3 != 0) {
        (*param_1)(&local_31,0x37,*param_4);
        (*param_1)(&local_31,6,2);
      }
      (*param_1)(&local_31,0x10,0x200);
      iVar2 = 0;
      while ((iVar1 = (*param_1)(&local_31,0xd,*param_4), iVar1 == 0 && ((local_2e & 0x1f) != 9))) {
        iVar2 = iVar2 + 1;
        if (iVar2 == 0x100) {
          return 0;
        }
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1000);
  return 0;
}


// 0x0207cdc0  helper_for_fat_scsd_writesectors

/* WARNING: Removing unreachable block (ram,0x0207ce54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0207cdc0(ushort *param_1,ushort *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x200;
  iVar3 = 0x10000;
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return 0;
    }
  } while ((_DAT_09000000 & 0x100) == 0);
  if (((uint)param_1 & 1) == 0) goto LAB_0207ce18;
  do {
    pbVar1 = (byte *)((int)param_1 + 1);
    param_1 = param_1 + 1;
    _DAT_09000004 = (uint)*pbVar1;
    _DAT_09000000 = 0;
    iVar4 = iVar4 + -2;
    puVar2 = param_2;
  } while (iVar4 != 0);
  while (puVar2 != (ushort *)0x0) {
    param_2 = (ushort *)0x0;
    iVar4 = 8;
    param_1 = puVar2;
LAB_0207ce18:
    do {
      _DAT_09000000 = (uint)*param_1 * 0x100001;
      _DAT_09000004 = _DAT_09000000 >> 8;
      iVar4 = iVar4 + -2;
      param_1 = param_1 + 1;
      puVar2 = param_2;
    } while (iVar4 != 0);
  }
  _DAT_09000000 = CONCAT22(DAT_09000000_2,0xff);
  return 1;
}


// 0x0207ce80  fat_fat_cache_getsector

int FUN_0207ce80(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = (int *)param_1[2];
  if (param_1[1] == 0) {
    iVar5 = 0;
    iVar2 = 0;
    iVar9 = iVar5;
LAB_0207ceec:
    piVar8 = (int *)((int)piVar8 + iVar5);
    if ((*piVar8 != -1) && ((char)piVar8[2] == '\x01')) {
      cVar1 = (**(code **)(*param_1 + 0x14))(*piVar8,1,iVar2 + param_1[3]);
      if (cVar1 == '\0') {
        return -1;
      }
      *(undefined1 *)(piVar8 + 2) = 0;
    }
    cVar1 = (**(code **)(*param_1 + 0x10))(param_2,1,iVar2 + param_1[3]);
    if (cVar1 == '\0') {
      return -1;
    }
    *piVar8 = param_2;
    piVar8[1] = piVar8[1] + 1;
    return iVar9;
  }
  iVar5 = *piVar8;
  piVar4 = piVar8;
  if (param_2 == iVar5) {
    iVar2 = 0;
  }
  else {
    iVar9 = 0;
    uVar7 = 0xffffffff;
    iVar2 = 0;
    iVar3 = 0xc;
    do {
      if (iVar5 == -1) {
        uVar6 = piVar4[1];
LAB_0207ceb2:
        uVar7 = uVar6;
        iVar9 = iVar2;
      }
      else {
        uVar6 = piVar4[1];
        if (uVar6 < uVar7) goto LAB_0207ceb2;
      }
      iVar2 = iVar2 + 1;
      if (param_1[1] == iVar2) {
        iVar5 = iVar9 * 0xc;
        iVar2 = iVar9 << 9;
        goto LAB_0207ceec;
      }
      piVar4 = (int *)((int)piVar8 + iVar3);
      iVar5 = *piVar4;
      iVar3 = iVar3 + 0xc;
    } while (param_2 != iVar5);
  }
  piVar4[1] = piVar4[1] + 1;
  return iVar2;
}


// 0x0207cf44  fat_fat_cache_flush

undefined4 FUN_0207cf44(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[1] != 0) {
    iVar2 = param_1[2];
    uVar4 = 0;
    iVar3 = 0;
    do {
      if (*(char *)((undefined4 *)(iVar3 + iVar2) + 2) != '\0') {
        cVar1 = (**(code **)(*param_1 + 0x14))
                          (*(undefined4 *)(iVar3 + iVar2),1,uVar4 * 0x200 + param_1[3]);
        if (cVar1 == '\0') {
          return 0xff;
        }
        iVar2 = param_1[2];
      }
      *(undefined4 *)(iVar3 + iVar2 + 4) = 0;
      *(undefined1 *)(iVar3 + iVar2 + 8) = 0;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar4 < (uint)param_1[1]);
  }
  return 1;
}


// 0x0207cf90  fat_fat_cache_invalidate

void FUN_0207cf90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    iVar1 = 0;
    do {
      puVar2 = (undefined4 *)(iVar3 + iVar1 * 0xc);
      iVar1 = iVar1 + 1;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
    } while (iVar4 != iVar1);
  }
  return;
}


// 0x0207cfbc  fat_fat_cache_erasewritepartialsector

undefined4 FUN_0207cfbc(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (((uint)(param_5 + param_4) < 0x201) && (iVar1 = FUN_0207ce80(param_1,param_3), iVar1 != -1)) {
    thunk_FUN_02083058(iVar1 * 0x200 + *(int *)(param_1 + 0xc),0,0x200);
    thunk_FUN_02082ec0(iVar1 * 0x200 + *(int *)(param_1 + 0xc) + param_4,param_2,param_5);
    *(undefined1 *)(iVar1 * 0xc + *(int *)(param_1 + 8) + 8) = 1;
    return 1;
  }
  return 0;
}


// 0x0207d020  fat_fat_cache_writepartialsector

undefined4 FUN_0207d020(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((uint)(param_4 + param_5) < 0x201) && (iVar2 = FUN_0207ce80(param_1,param_3), iVar2 != -1)) {
    thunk_FUN_02082ec0(iVar2 * 0x200 + *(int *)(param_1 + 0xc) + param_4,param_2,param_5);
    uVar1 = 1;
    *(undefined1 *)(iVar2 * 0xc + *(int *)(param_1 + 8) + 8) = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0207d06c  fat_fat_cache_readpartialsector

undefined4 FUN_0207d06c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((uint)(param_4 + param_5) < 0x201) && (iVar2 = FUN_0207ce80(param_1,param_3), iVar2 != -1)) {
    thunk_FUN_02082ec0(param_2,iVar2 * 0x200 + *(int *)(param_1 + 0xc) + param_4,param_5);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0207d0a8  fat_fat_cache_destructor

void FUN_0207d0a8(int param_1)

{
  FUN_0207cf44();
  thunk_FUN_020826fc(*(undefined4 *)(param_1 + 0xc));
  thunk_FUN_020826fc(*(undefined4 *)(param_1 + 8));
  thunk_FUN_020826fc(param_1);
  return;
}


// 0x0207d0c4  fat_fat_cache_constructor

undefined4 * FUN_0207d0c4(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 < 2) {
    param_1 = 2;
  }
  puVar1 = (undefined4 *)thunk_FUN_02082724(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_1;
    puVar2 = (undefined4 *)thunk_FUN_02082724(param_1 * 0xc);
    if (puVar2 == (undefined4 *)0x0) {
      thunk_FUN_020826fc(puVar1);
      return (undefined4 *)0x0;
    }
    if (param_1 != 0) {
      uVar5 = 0;
      puVar3 = puVar2;
      do {
        uVar5 = uVar5 + 1;
        *puVar3 = 0xffffffff;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        puVar3 = puVar3 + 3;
      } while (param_1 != uVar5);
    }
    puVar1[2] = puVar2;
    iVar4 = thunk_FUN_02082724(param_1 << 9);
    puVar1[3] = iVar4;
    if (iVar4 != 0) {
      return puVar1;
    }
    thunk_FUN_020826fc(puVar1[2]);
    thunk_FUN_020826fc(puVar1);
  }
  return (undefined4 *)0x0;
}


// 0x0207d15c  fat_fat_dirnext_r

undefined4 FUN_0207d15c(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (*(char *)(puVar3 + 0x50) == '\0') {
    uVar2 = 0xffffffff;
    *param_1 = 9;
  }
  else if (*(char *)((int)puVar3 + 0x141) == '\0') {
    uVar2 = 0xffffffff;
    *param_1 = 2;
  }
  else {
    thunk_FUN_02083dbc(param_3,puVar3 + 0xf,0x100);
    if (param_4 != 0) {
      FUN_0207f4f0(*puVar3,puVar3 + 1,param_4);
    }
    uVar1 = FUN_0207ee00(*puVar3,puVar3 + 1);
    *(undefined1 *)((int)puVar3 + 0x141) = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}


// 0x0207d1c4  fat_fat_dirreset_r

undefined4 FUN_0207d1c4(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (*(char *)(puVar3 + 0x50) == '\0') {
    *param_1 = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = FUN_0207efc4(*puVar3,puVar3 + 1,puVar3[0x4f]);
    *(undefined1 *)((int)puVar3 + 0x141) = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}


// 0x0207d1f8  fat_fat_stat_r

undefined4 FUN_0207d1f8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_150 [312];
  
  iVar1 = FUN_02072d38(param_2);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
    *param_1 = 0x13;
  }
  else {
    iVar2 = thunk_FUN_020836d4(param_2,0x3a);
    if (iVar2 != 0) {
      param_2 = iVar2 + 1;
      iVar2 = thunk_FUN_020836d4(param_2,0x3a);
      if (iVar2 != 0) {
        *param_1 = 0x16;
        return 0xffffffff;
      }
    }
    iVar2 = FUN_0207f07c(iVar1,auStack_150,param_2,0);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
      *param_1 = 2;
    }
    else {
      FUN_0207f4f0(iVar1,auStack_150,param_3);
      uVar3 = 0;
    }
  }
  return uVar3;
}


// 0x0207d428  fat_fat_diropen_r

int * FUN_0207d428(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_150 [11];
  byte local_145;
  
  piVar4 = *(int **)(param_2 + 4);
  iVar2 = FUN_02072d38(param_3);
  *piVar4 = iVar2;
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
    *param_1 = 0x13;
  }
  else {
    iVar3 = thunk_FUN_020836d4(param_3,0x3a);
    if (iVar3 != 0) {
      param_3 = iVar3 + 1;
      iVar3 = thunk_FUN_020836d4(param_3,0x3a);
      if (iVar3 != 0) {
        *param_1 = 0x16;
        return (int *)0x0;
      }
    }
    iVar2 = FUN_0207f07c(iVar2,auStack_150,param_3,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      piVar4 = (int *)0x0;
    }
    else if ((int)((uint)local_145 << 0x1b) < 0) {
      iVar2 = FUN_0207ed1c(auStack_150);
      piVar4[0x4f] = iVar2;
      uVar1 = FUN_0207efc4(*piVar4,piVar4 + 1,iVar2);
      *(undefined1 *)((int)piVar4 + 0x141) = uVar1;
      *(undefined1 *)(piVar4 + 0x50) = 1;
    }
    else {
      piVar4 = (int *)0x0;
      *param_1 = 0x14;
    }
  }
  return piVar4;
}


// 0x0207d64c  fat_fat_mkdir_r

undefined4 FUN_0207d64c(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_180 [11];
  byte local_175;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  undefined1 local_170;
  undefined1 local_16f;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 auStack_148 [256];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = FUN_02072d38(param_2);
  if (iVar3 == 0) {
    *param_1 = 0x13;
    return 0xffffffff;
  }
  iVar4 = thunk_FUN_020836d4(param_2,0x3a);
  if (iVar4 != 0) {
    param_2 = iVar4 + 1;
    iVar4 = thunk_FUN_020836d4(param_2,0x3a);
    if (iVar4 != 0) {
      *param_1 = 0x16;
      return 0xffffffff;
    }
  }
  iVar4 = FUN_0207f07c(iVar3,auStack_180,param_2,0);
  if (iVar4 == 0) {
    if (*(char *)(iVar3 + 8) != '\0') {
      *param_1 = 0x1e;
      return 0xffffffff;
    }
    iVar4 = thunk_FUN_02083f68(param_2,0x2f);
    if (iVar4 == 0) {
      uVar7 = *(undefined4 *)(iVar3 + 0x3c);
    }
    else {
      iVar5 = FUN_0207f07c(iVar3,auStack_180,param_2,iVar4);
      if ((iVar5 == 0) || (-1 < (int)((uint)local_175 << 0x1b))) {
        *param_1 = 0x14;
        return 0xffffffff;
      }
      uVar7 = FUN_0207ed1c(auStack_180);
      param_2 = iVar4 + 1;
    }
    thunk_FUN_02083dbc(auStack_148,param_2,0xff);
    thunk_FUN_02083058(auStack_180,0,0x20);
    local_173 = 0;
    uVar2 = FUN_0207e808();
    local_172 = (undefined1)uVar2;
    local_171 = (undefined1)((ushort)uVar2 >> 8);
    uVar2 = FUN_0207e854();
    local_170 = (undefined1)uVar2;
    local_16f = (undefined1)((ushort)uVar2 >> 8);
    local_175 = 0x10;
    uVar6 = FUN_0207e7a0(iVar3,0);
    if (uVar6 != 0) {
      uVar1 = (undefined1)(uVar6 >> 8);
      local_16c = (undefined1)(uVar6 >> 0x10);
      local_16b = (undefined1)(uVar6 >> 0x18);
      local_166 = (char)uVar6;
      local_165 = uVar1;
      iVar4 = FUN_0207f5bc(iVar3,auStack_180,uVar7);
      if (iVar4 != 0) {
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        thunk_FUN_02083058(&local_48,0x20,0xb);
        local_48 = CONCAT31(local_48._1_3_,0x2e);
        local_40 = CONCAT13(0x10,(undefined3)local_40);
        local_30._0_3_ = CONCAT12((char)uVar6,(undefined2)local_30);
        local_30 = CONCAT13(uVar1,(undefined3)local_30);
        local_34._0_2_ = (undefined2)(uVar6 >> 0x10);
        if (uVar6 < 2) {
          iVar4 = *(int *)(iVar3 + 0x10);
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x24) * (uVar6 - 2) + *(int *)(iVar3 + 0x1c);
        }
        FUN_0207cfbc(*(undefined4 *)(iVar3 + 4),&local_48,iVar4,0,0x20);
        local_48._0_2_ = CONCAT11(0x2e,(undefined1)local_48);
        local_30._0_3_ = CONCAT12((char)uVar7,(undefined2)local_30);
        local_30 = CONCAT13((char)((uint)uVar7 >> 8),(undefined3)local_30);
        local_34._0_2_ = (undefined2)((uint)uVar7 >> 0x10);
        if (uVar6 < 2) {
          iVar4 = *(int *)(iVar3 + 0x10);
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x24) * (uVar6 - 2) + *(int *)(iVar3 + 0x1c);
        }
        FUN_0207d020(*(undefined4 *)(iVar3 + 4),&local_48,iVar4,0x20,0x20);
        iVar3 = FUN_0207cf44(*(undefined4 *)(iVar3 + 4));
        if (iVar3 == 0) {
          *param_1 = 5;
          return 0xffffffff;
        }
        return 0;
      }
    }
    *param_1 = 0x1c;
    return 0xffffffff;
  }
  *param_1 = 0x11;
  return 0xffffffff;
}


// 0x0207d848  fat_fat_fstat_r

undefined4 FUN_0207d848(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [260];
  
  if ((param_2 == (undefined4 *)0x0) || (*(char *)((int)param_2 + 0x27) == '\0')) {
    *param_1 = 9;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_2[10];
    local_138 = param_2[0xb];
    uStack_134 = param_2[0xc];
    uStack_130 = param_2[0xd];
    local_12c = param_2[0xe];
    uStack_128 = param_2[0xf];
    uStack_124 = param_2[0x10];
    iVar2 = FUN_0207f320(uVar1,auStack_158,auStack_120,param_2 + 0x11);
    if (iVar2 == 0) {
      uVar1 = 0xffffffff;
      *param_1 = 5;
    }
    else {
      FUN_0207f4f0(uVar1,auStack_158,param_3);
      uVar1 = 0;
      *(undefined4 *)(param_3 + 4) = param_2[1];
      *(undefined4 *)(param_3 + 0x18) = *param_2;
    }
  }
  return uVar1;
}


// 0x0207dac8  fat_fat_open_r

uint * FUN_0207dac8(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  undefined1 auStack_160 [11];
  byte local_155;
  undefined1 local_153;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f;
  ushort local_144;
  byte local_142;
  byte local_141;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint local_134;
  uint uStack_130;
  uint uStack_12c;
  undefined1 auStack_128 [260];
  
  uVar2 = FUN_02072d38(param_3);
  if (uVar2 == 0) {
    *param_1 = 0x13;
    return (uint *)0xffffffff;
  }
  iVar3 = thunk_FUN_020836d4(param_3,0x3a);
  if (iVar3 != 0) {
    param_3 = iVar3 + 1;
    iVar3 = thunk_FUN_020836d4(param_3,0x3a);
    if (iVar3 != 0) {
      *param_1 = 0x16;
      return (uint *)0xffffffff;
    }
  }
  uVar6 = param_4 & 3;
  if (uVar6 == 0) {
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)((int)param_2 + 0x25) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  else if (uVar6 == 1) {
    *(undefined1 *)(param_2 + 9) = 0;
    *(undefined1 *)((int)param_2 + 0x25) = 1;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  else {
    if (uVar6 != 2) {
      *param_1 = 0xd;
      return (uint *)0xffffffff;
    }
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)((int)param_2 + 0x25) = 1;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  if ((*(char *)((int)param_2 + 0x25) != '\0') && (*(char *)(uVar2 + 8) != '\0')) {
    *param_1 = 0x1e;
    return (uint *)0xffffffff;
  }
  iVar3 = FUN_0207f07c(uVar2,auStack_160,param_3,0);
  if ((param_4 & 0xa00) == 0xa00) {
    if (iVar3 != 0) {
      *param_1 = 0x11;
      return (uint *)0xffffffff;
    }
LAB_0207dc46:
    if (-1 < (int)(param_4 << 0x16)) {
      *param_1 = 2;
      return (uint *)0xffffffff;
    }
    if (*(char *)(uVar2 + 8) != '\0') {
      *param_1 = 0x1e;
      return (uint *)0xffffffff;
    }
    iVar3 = thunk_FUN_02083f68(param_3,0x2f);
    if (iVar3 == 0) {
      uVar5 = *(undefined4 *)(uVar2 + 0x3c);
    }
    else {
      iVar4 = FUN_0207f07c(uVar2,auStack_160,param_3,iVar3);
      if ((iVar4 == 0) || (-1 < (int)((uint)local_155 << 0x1b))) {
        *param_1 = 0x14;
        return (uint *)0xffffffff;
      }
      uVar5 = FUN_0207ed1c(auStack_160);
      param_3 = iVar3 + 1;
    }
    thunk_FUN_02083dbc(auStack_128,param_3,0xff);
    thunk_FUN_02083058(auStack_160,0,0x20);
    local_153 = 0;
    uVar1 = FUN_0207e808();
    local_152 = (undefined1)uVar1;
    local_151 = (undefined1)((ushort)uVar1 >> 8);
    uVar1 = FUN_0207e854();
    local_150 = (undefined1)uVar1;
    local_14f = (undefined1)((ushort)uVar1 >> 8);
    iVar3 = FUN_0207f5bc(uVar2,auStack_160,uVar5);
    if (iVar3 == 0) {
      *param_1 = 0x1c;
      return (uint *)0xffffffff;
    }
  }
  else {
    if (iVar3 == 0) goto LAB_0207dc46;
    if ((int)((uint)local_155 << 0x1b) < 0) {
      *param_1 = 0x15;
      return (uint *)0xffffffff;
    }
  }
  *param_2 = (uint)local_144 | (uint)local_142 << 0x10 | (uint)local_141 << 0x18;
  if ((*(char *)((int)param_2 + 0x25) != '\0') && ((int)((uint)local_155 << 0x1f) < 0)) {
    *param_1 = 0x1e;
    return (uint *)0xffffffff;
  }
  param_2[10] = uVar2;
  uVar6 = FUN_0207ed1c(auStack_160);
  param_2[1] = uVar6;
  if (((int)(param_4 << 0x15) < 0) && (*(char *)((int)param_2 + 0x25) != '\0')) {
    if (uVar6 != 0) {
      FUN_0207e6cc(uVar2,uVar6);
      param_2[1] = 0;
      *param_2 = 0;
      goto LAB_0207dba0;
    }
  }
  else {
LAB_0207dba0:
    if (param_2[1] != 0) goto LAB_0207dbb0;
  }
  uVar6 = FUN_0207e71c(uVar2,0);
  param_2[1] = uVar6;
LAB_0207dbb0:
  param_2[0xb] = local_140;
  param_2[0xc] = uStack_13c;
  param_2[0xd] = uStack_138;
  param_2[0xe] = local_134;
  param_2[0xf] = uStack_130;
  param_2[0x10] = uStack_12c;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = param_2[1];
  uVar6 = FUN_0207e558(uVar2,param_2[1],param_2 + 0x11);
  uVar7 = *param_2;
  param_2[6] = uVar6;
  thunk_FUN_0208047c(uVar7,*(undefined4 *)(uVar2 + 0x28));
  param_2[7] = extraout_r1 >> 9;
  param_2[8] = uVar7 & 0x1ff;
  if ((uVar7 != 0) && (thunk_FUN_0208047c(uVar7,*(undefined4 *)(uVar2 + 0x28)), extraout_r1_00 == 0)
     ) {
    uVar6 = *(uint *)(uVar2 + 0x24);
    param_2[8] = 0;
    param_2[7] = uVar6;
  }
  if ((int)(param_4 << 0x1c) < 0) {
    *(undefined1 *)((int)param_2 + 0x26) = 1;
  }
  *(undefined1 *)((int)param_2 + 0x27) = 1;
  *(int *)(uVar2 + 0x40) = *(int *)(uVar2 + 0x40) + 1;
  return param_2;
}


// 0x0207dd80  fat_fat_read_r

int FUN_0207dd80(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint local_30;
  uint local_2c;
  
  if (((param_2 == (uint *)0x0) || (*(char *)((int)param_2 + 0x27) == '\0')) ||
     ((char)param_2[9] == '\0')) {
    *param_1 = 9;
    return 0;
  }
  if (*param_2 <= param_2[2]) {
    return 0;
  }
  local_2c = param_4;
  if (*param_2 < param_2[2] + param_4) {
    *param_1 = 0x8b;
    local_2c = *param_2 - param_2[2];
  }
  uVar8 = param_2[4];
  uVar5 = param_2[3];
  piVar9 = (int *)param_2[10];
  local_30 = param_2[5];
  iVar6 = piVar9[1];
  uVar3 = 0x200 - local_30;
  if (local_2c < 0x200 - local_30) {
    uVar3 = local_2c;
  }
  uVar10 = local_2c;
  if ((int)uVar3 < 0x200) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = piVar9[9] * (uVar5 - 2) + piVar9[7];
    }
    FUN_0207d06c(iVar6,param_3,iVar2 + uVar8,local_30,uVar3);
    local_30 = local_30 + uVar3;
    param_3 = param_3 + uVar3;
    uVar10 = local_2c - uVar3;
    if (0x1ff < (int)local_30) {
      uVar8 = uVar8 + 1;
      local_30 = 0;
    }
  }
  uVar3 = piVar9[9];
  uVar7 = uVar3 - uVar8;
  if (uVar10 <= uVar7 * 0x200) {
    uVar7 = uVar10 >> 9;
  }
  if (0 < (int)uVar7) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = uVar3 * (uVar5 - 2) + piVar9[7];
    }
    (**(code **)(*piVar9 + 0x10))(iVar2 + uVar8,uVar7,param_3);
    uVar3 = piVar9[9];
    param_3 = param_3 + uVar7 * 0x200;
    uVar10 = uVar10 + uVar7 * -0x200;
    uVar8 = uVar8 + uVar7;
  }
  if (uVar3 <= uVar8) {
    uVar3 = FUN_0207e470(piVar9,uVar5);
    if ((uVar10 != 0) || (uVar3 != 0xfffffff)) {
      if (uVar3 == 0) {
        *param_1 = 5;
        bVar1 = false;
      }
      else {
        uVar8 = 0;
        bVar1 = true;
        uVar5 = uVar3;
      }
      goto LAB_0207de44;
    }
    uVar8 = piVar9[9];
  }
  bVar1 = true;
LAB_0207de44:
  while (((uint)piVar9[10] <= uVar10 && (bVar1))) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
      iVar4 = piVar9[9];
    }
    else {
      iVar4 = piVar9[9];
      iVar2 = (uVar5 - 2) * iVar4 + piVar9[7];
    }
    (**(code **)(*piVar9 + 0x10))(iVar2,iVar4,param_3);
    iVar2 = piVar9[10];
    uVar10 = uVar10 - iVar2;
    uVar3 = FUN_0207e470(piVar9,uVar5);
    if ((uVar10 == 0) && (uVar3 == 0xfffffff)) {
      uVar8 = piVar9[9];
      param_3 = param_3 + iVar2;
    }
    else if (uVar3 == 0) {
      *param_1 = 5;
      param_3 = param_3 + iVar2;
      bVar1 = false;
    }
    else {
      uVar8 = 0;
      param_3 = param_3 + iVar2;
      uVar5 = uVar3;
    }
  }
  uVar3 = uVar10 >> 9;
  if ((uVar3 != 0) && (bVar1)) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = piVar9[9] * (uVar5 - 2) + piVar9[7];
    }
    (**(code **)(*piVar9 + 0x10))(iVar2,uVar3,param_3);
    param_3 = param_3 + uVar3 * 0x200;
    uVar10 = uVar10 + uVar3 * -0x200;
    uVar8 = uVar8 + uVar3;
  }
  if ((uVar10 != 0) && (bVar1)) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = piVar9[9] * (uVar5 - 2) + piVar9[7];
    }
    FUN_0207d06c(iVar6,param_3,iVar2 + uVar8,0,uVar10);
    local_30 = local_30 + uVar10;
    uVar10 = 0;
  }
  param_2[3] = uVar5;
  param_2[4] = uVar8;
  param_2[5] = local_30;
  param_2[2] = param_2[2] + (local_2c - uVar10);
  return local_2c - uVar10;
}


// 0x0207dfc8  fat_fat_write_r

int FUN_0207dfc8(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint local_22c;
  undefined1 auStack_228 [516];
  
  if (((param_2 == (uint *)0x0) || (*(char *)((int)param_2 + 0x27) == '\0')) ||
     (*(char *)((int)param_2 + 0x25) == '\0')) {
    *param_1 = 9;
    iVar8 = -1;
  }
  else {
    piVar11 = (int *)param_2[10];
    iVar8 = piVar11[1];
    if (*(char *)((int)param_2 + 0x26) == '\0') {
      uVar2 = *param_2;
      uVar6 = param_2[2];
      if (uVar2 < param_2[2]) {
        thunk_FUN_02083058(auStack_228,0,0x200);
        uVar12 = *param_2 & 0x1ff;
        thunk_FUN_0208047c(*param_2,piVar11[10]);
        uVar6 = extraout_r1 >> 9;
        uVar2 = FUN_0207e558(piVar11,param_2[1]);
        uVar10 = param_2[2] - *param_2;
        uVar4 = uVar10 + uVar12;
        if (uVar4 < 0x200) {
          if (uVar2 < 2) {
            iVar7 = piVar11[4];
          }
          else {
            iVar7 = piVar11[9] * (uVar2 - 2) + piVar11[7];
          }
          FUN_0207d020(iVar8,auStack_228,iVar7 + uVar6,uVar12,uVar10);
          uVar5 = uVar2;
          uVar12 = uVar4;
        }
        else {
          if (uVar12 != 0) {
            if (uVar2 < 2) {
              iVar7 = piVar11[4];
            }
            else {
              iVar7 = piVar11[9] * (uVar2 - 2) + piVar11[7];
            }
            FUN_0207d020(iVar8,auStack_228,iVar7 + uVar6,uVar12,0x200 - uVar12);
            uVar10 = uVar4 - 0x200;
            uVar12 = 0;
            uVar6 = uVar6 + 1;
          }
          for (; 0x1ff < uVar10; uVar10 = uVar10 - 0x200) {
            if (uVar6 < (uint)piVar11[9]) {
              uVar4 = uVar6 + 1;
            }
            else {
              uVar5 = FUN_0207e470(piVar11,uVar2);
              if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
                 (uVar5 = FUN_0207e71c(piVar11,uVar2), uVar5 == 0)) {
                *param_1 = 0x1c;
                return 0;
              }
              uVar6 = 0;
              uVar4 = 1;
              uVar2 = uVar5;
            }
            if (uVar2 < 2) {
              iVar7 = piVar11[4];
            }
            else {
              iVar7 = piVar11[9] * (uVar2 - 2) + piVar11[7];
            }
            (**(code **)(*piVar11 + 0x14))(iVar7 + uVar6,1,auStack_228);
            uVar6 = uVar4;
          }
          uVar5 = uVar2;
          if ((uint)piVar11[9] <= uVar6) {
            uVar5 = FUN_0207e470(piVar11,uVar2);
            if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
               (uVar5 = FUN_0207e71c(piVar11,uVar2), uVar5 == 0)) {
              *param_1 = 0x1c;
              return 0;
            }
            uVar6 = 0;
          }
          if (uVar10 != 0) {
            if (uVar5 < 2) {
              iVar7 = piVar11[4];
            }
            else {
              iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
            }
            FUN_0207d020(iVar8,auStack_228,iVar7 + uVar6,0,uVar10);
            uVar12 = uVar10;
          }
        }
        param_2[5] = uVar12;
        uVar2 = param_2[2];
        param_2[3] = uVar5;
        param_2[4] = uVar6;
        *param_2 = uVar2;
        uVar6 = uVar2;
      }
      local_22c = param_2[5];
      uVar12 = param_2[3];
      uVar4 = param_2[4];
      if (uVar2 < param_4 + uVar6) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      local_22c = param_2[8];
      uVar12 = param_2[6];
      uVar4 = param_2[7];
      bVar1 = true;
    }
    if (uVar4 < (uint)piVar11[9]) {
      uVar6 = 1;
    }
    else {
      uVar2 = FUN_0207e470(piVar11,uVar12);
      if (((uVar2 == 0xfffffff) || (uVar2 == 0)) &&
         (uVar2 = FUN_0207e71c(piVar11,uVar12), uVar2 == 0)) {
        *param_1 = 0x1c;
        uVar4 = 0;
        uVar6 = uVar4;
      }
      else {
        uVar6 = 1;
        uVar4 = 0;
        uVar12 = uVar2;
      }
    }
    uVar2 = 0x200 - local_22c;
    if (param_4 < 0x200 - local_22c) {
      uVar2 = param_4;
    }
    uVar10 = param_4;
    if (((int)uVar2 < 0x200) && (uVar6 != 0)) {
      if (uVar12 < 2) {
        iVar7 = piVar11[4];
      }
      else {
        iVar7 = piVar11[9] * (uVar12 - 2) + piVar11[7];
      }
      FUN_0207d020(iVar8,param_3,iVar7 + uVar4,local_22c,uVar2);
      local_22c = local_22c + uVar2;
      param_3 = param_3 + uVar2;
      uVar10 = param_4 - uVar2;
      if (0x1ff < (int)local_22c) {
        uVar4 = uVar4 + 1;
        local_22c = 0;
      }
    }
    uVar2 = piVar11[9];
    uVar5 = uVar2 - uVar4;
    if (uVar10 <= uVar5 * 0x200) {
      uVar5 = uVar10 >> 9;
    }
    if ((0 < (int)uVar5) && (uVar6 != 0)) {
      if (uVar12 < 2) {
        iVar7 = piVar11[4];
      }
      else {
        iVar7 = uVar2 * (uVar12 - 2) + piVar11[7];
      }
      (**(code **)(*piVar11 + 0x14))(iVar7 + uVar4,uVar5,param_3);
      uVar2 = piVar11[9];
      param_3 = param_3 + uVar5 * 0x200;
      uVar10 = uVar10 + uVar5 * -0x200;
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar4 < uVar2) || (uVar6 == 0)) || (uVar10 == 0)) {
      uVar2 = piVar11[10];
    }
    else {
      uVar5 = FUN_0207e470(piVar11,uVar12);
      if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
         (uVar5 = FUN_0207e71c(piVar11,uVar12), uVar5 == 0)) {
        *param_1 = 0x1c;
        uVar6 = 0;
        uVar2 = piVar11[10];
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar2 = piVar11[10];
        uVar12 = uVar5;
      }
    }
    uVar5 = uVar12;
    if (uVar2 <= uVar10) {
      do {
        uVar5 = uVar12;
        if (uVar6 == 0) break;
        if (uVar12 < 2) {
          iVar7 = piVar11[4];
          iVar3 = piVar11[9];
        }
        else {
          iVar3 = piVar11[9];
          iVar7 = (uVar12 - 2) * iVar3 + piVar11[7];
        }
        (**(code **)(*piVar11 + 0x14))(iVar7,iVar3,param_3);
        uVar2 = piVar11[10];
        uVar10 = uVar10 - uVar2;
        if (uVar10 == 0) {
          uVar4 = piVar11[9];
          uVar9 = uVar2;
        }
        else {
          uVar5 = FUN_0207e470(piVar11,uVar12);
          if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
             (uVar5 = FUN_0207e71c(piVar11,uVar12), uVar5 == 0)) {
            *param_1 = 0x1c;
            uVar6 = 0;
            uVar9 = piVar11[10];
            uVar5 = uVar12;
          }
          else {
            uVar9 = piVar11[10];
          }
        }
        param_3 = param_3 + uVar2;
        uVar12 = uVar5;
      } while (uVar9 <= uVar10);
    }
    uVar2 = uVar10 >> 9;
    if ((uVar2 != 0) && (uVar6 != 0)) {
      if (uVar5 < 2) {
        iVar7 = piVar11[4];
      }
      else {
        iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
      }
      (**(code **)(*piVar11 + 0x14))(iVar7,uVar2,param_3);
      param_3 = param_3 + uVar2 * 0x200;
      uVar10 = uVar10 + uVar2 * -0x200;
      uVar4 = uVar4 + uVar2;
    }
    if ((uVar10 != 0) && (uVar6 != 0)) {
      if (bVar1) {
        if (uVar5 < 2) {
          iVar7 = piVar11[4];
        }
        else {
          iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
        }
        FUN_0207cfbc(iVar8,param_3,iVar7 + uVar4,0,uVar10);
      }
      else {
        if (uVar5 < 2) {
          iVar7 = piVar11[4];
        }
        else {
          iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
        }
        FUN_0207d020(iVar8,param_3,iVar7 + uVar4,0,uVar10);
      }
      local_22c = local_22c + uVar10;
      uVar10 = 0;
    }
    iVar8 = param_4 - uVar10;
    if (*(char *)((int)param_2 + 0x26) == '\0') {
      param_2[5] = local_22c;
      param_2[3] = uVar5;
      param_2[4] = uVar4;
      uVar6 = param_2[2] + iVar8;
      param_2[2] = uVar6;
      if (*param_2 < uVar6) {
        *param_2 = uVar6;
      }
    }
    else {
      param_2[7] = uVar4;
      param_2[8] = local_22c;
      param_2[6] = uVar5;
      *param_2 = *param_2 + iVar8;
    }
  }
  return iVar8;
}


// 0x0207e470  fat_fat_fat_nextcluster

void FUN_0207e470(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_1c;
  
  cVar1 = *(char *)(param_1 + 9);
  local_1c = 0;
  if (cVar1 == '\x01') {
    iVar3 = (param_2 * 3 >> 10) + *(int *)(param_1 + 0x2c);
    uVar2 = param_2 * 3 >> 1 & 0x1ff;
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),&local_1c,iVar3,uVar2,1);
    uVar2 = uVar2 + 1;
    if (0x1ff < uVar2) {
      iVar3 = iVar3 + 1;
      uVar2 = 0;
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),(int)&local_1c + 1,iVar3,uVar2,1);
  }
  else if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      FUN_0207d06c(*(undefined4 *)(param_1 + 4),&local_1c,
                   ((param_2 & 0x7fffffff) >> 8) + *(int *)(param_1 + 0x2c),(param_2 & 0xff) << 1,2)
      ;
    }
    else if (cVar1 == '\x03') {
      FUN_0207d06c(*(undefined4 *)(param_1 + 4),&local_1c,
                   ((param_2 & 0x3fffffff) >> 7) + *(int *)(param_1 + 0x2c),(param_2 & 0x7f) << 2,4)
      ;
    }
  }
  return;
}


// 0x0207e558  fat_fat_fat_lastcluster

undefined4 FUN_0207e558(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  while ((iVar1 = FUN_0207e470(param_1,param_2), iVar1 != 0 &&
         (iVar1 = FUN_0207e470(param_1,param_2), iVar1 != 0xfffffff))) {
    param_2 = FUN_0207e470(param_1,param_2);
  }
  return param_2;
}


// 0x0207e590  fat_fat_fat_writefatentry

undefined4 FUN_0207e590(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_2c;
  byte local_21;
  
  if ((1 < param_2) && (param_2 <= *(uint *)(param_1 + 0x34))) {
    cVar1 = *(char *)(param_1 + 9);
    local_2c = param_3;
    if (cVar1 == '\x02') {
      FUN_0207d020(*(undefined4 *)(param_1 + 4),&local_2c,
                   ((param_2 & 0x7fffffff) >> 8) + *(int *)(param_1 + 0x2c),(param_2 & 0xff) << 1,2)
      ;
      return 1;
    }
    if (cVar1 == '\x03') {
      FUN_0207d020(*(undefined4 *)(param_1 + 4),&local_2c,
                   ((param_2 & 0x3fffffff) >> 7) + *(int *)(param_1 + 0x2c),(param_2 & 0x7f) << 2,4)
      ;
      return 1;
    }
    if (cVar1 == '\x01') {
      iVar2 = (param_2 * 3 >> 10) + *(int *)(param_1 + 0x2c);
      uVar3 = param_2 * 3 >> 1 & 0x1ff;
      if ((param_2 & 1) == 0) {
        FUN_0207d020(*(undefined4 *)(param_1 + 4),&local_2c,iVar2,uVar3,1);
        uVar3 = uVar3 + 1;
        if (0x1ff < uVar3) {
          iVar2 = iVar2 + 1;
          uVar3 = 0;
        }
        FUN_0207d06c(*(undefined4 *)(param_1 + 4),&local_21,iVar2,uVar3,1);
        local_2c = (local_2c & 0xfff) >> 8 | local_21 & 0xf0;
        FUN_0207d020(*(undefined4 *)(param_1 + 4),&local_2c,iVar2,uVar3,1);
        return 1;
      }
      FUN_0207d06c(*(undefined4 *)(param_1 + 4),&local_21,iVar2,uVar3,1);
      local_2c = local_2c << 4 | local_21 & 0xf;
      FUN_0207d020(*(undefined4 *)(param_1 + 4),&local_2c,iVar2,uVar3,1);
      uVar3 = uVar3 + 1;
      if (0x1ff < uVar3) {
        iVar2 = iVar2 + 1;
        uVar3 = 0;
      }
      FUN_0207d020(*(undefined4 *)(param_1 + 4),(int)&local_2c + 1,iVar2,uVar3,1);
      return 1;
    }
  }
  return 0;
}


// 0x0207e6cc  fat_fat_fat_clearlinks

undefined4 FUN_0207e6cc(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_2 < 2) || (*(uint *)(param_1 + 0x34) < param_2)) {
    uVar2 = 0;
  }
  else {
    if (param_2 < *(uint *)(param_1 + 0x38)) {
      *(uint *)(param_1 + 0x38) = param_2;
    }
    if (param_2 != 0xfffffff) {
      do {
        uVar1 = FUN_0207e470(param_1,param_2);
        FUN_0207e590(param_1,param_2,0);
        if (uVar1 == 0xfffffff) break;
        param_2 = uVar1;
      } while (uVar1 != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}


// 0x0207e71c  fat_fat_fat_linkfreecluster

uint FUN_0207e71c(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x34);
  if (uVar4 < param_2) {
LAB_0207e72c:
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0207e470();
    if ((uVar2 < 2) || (uVar4 < uVar2)) {
      uVar2 = *(uint *)(param_1 + 0x38);
      if (uVar2 < 2) {
        uVar2 = 2;
      }
      bVar1 = false;
      while (iVar3 = FUN_0207e470(param_1,uVar2), iVar3 != 0) {
        while (uVar2 = uVar2 + 1, uVar4 < uVar2) {
          if (bVar1) {
            *(uint *)(param_1 + 0x38) = uVar2;
            goto LAB_0207e72c;
          }
          uVar2 = 2;
          bVar1 = true;
          iVar3 = FUN_0207e470(param_1,2);
          if (iVar3 == 0) goto LAB_0207e76e;
        }
      }
LAB_0207e76e:
      *(uint *)(param_1 + 0x38) = uVar2;
      if ((1 < param_2) && (param_2 < uVar4)) {
        FUN_0207e590(param_1,param_2,uVar2);
      }
      FUN_0207e590(param_1,uVar2,0xfffffff);
    }
  }
  return uVar2;
}


// 0x0207e7a0  fat_fat_fat_linkfreeclustercleared

uint FUN_0207e7a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_218 [512];
  
  uVar1 = FUN_0207e71c();
  if (uVar1 != 0) {
    thunk_FUN_02083058(auStack_218,0,0x200);
    uVar3 = param_1[9];
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (uVar1 < 2) {
          iVar2 = param_1[4];
        }
        else {
          iVar2 = (uVar1 - 2) * uVar3 + param_1[7];
        }
        (**(code **)(*param_1 + 0x14))(iVar2 + uVar4,1,auStack_218);
        uVar3 = param_1[9];
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  return uVar1;
}


// 0x0207e808  fat_fat_filetime_gettimefromrtc

uint FUN_0207e808(void)

{
  uint uVar1;
  
  if (DAT_027ff01b < 0x28) {
    uVar1 = (uint)DAT_027ff01b;
  }
  else {
    uVar1 = DAT_027ff01b - 0x28;
  }
  if (((uVar1 < 0x18) && (DAT_027ff01c < 0x3c)) && (DAT_027ff01d < 0x3c)) {
    uVar1 = (uVar1 & 0x1f) * 0x800 |
            (DAT_027ff01c & 0x3f) << 5 | (int)(uint)DAT_027ff01d >> 1 & 0x1fU;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0207e854  fat_fat_filetime_getdatefromrtc

uint FUN_0207e854(void)

{
  uint uVar1;
  
  if (((DAT_027ff017 - 6 < 0x5e) && (DAT_027ff018 - 1 < 0xc)) && (DAT_027ff019 - 1 < 0x1f)) {
    uVar1 = (DAT_027ff017 + 0x14 & 0x7f) * 0x200 | (DAT_027ff018 & 0xf) << 5 | DAT_027ff019 & 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0207e898  fat_fat_filetime_to_time_t

int FUN_0207e898(uint param_1,uint param_2)

{
  return ((param_2 & 0x1ff) >> 5) * 0x28206f + (param_2 & 0x1f) * 0x15180 +
         ((param_1 & 0x7ff) >> 5) * 0x3c + (param_1 & 0x1f) * 2 + (param_1 >> 0xb) * 0xe10 +
         (param_2 >> 9) * 0x1e1853e;
}


// 0x0207e8e4  fat_cf_isinserted

bool FUN_0207e8e4(void)

{
  ushort *puVar1;
  
  puVar1 = DAT_020b4c80;
  *DAT_020b4c80 = 0x50;
  return (*puVar1 & 0xff) == 0x50;
}


// 0x0207e904  fat_cf_clearstatus

bool FUN_0207e904(void)

{
  bool bVar1;
  int iVar2;
  
  if ((int)((uint)*DAT_020b4c84 << 0x18) < 0) {
    iVar2 = 0;
    do {
      if (-1 < (int)((uint)*DAT_020b4c84 << 0x18)) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10000000);
  }
  if ((*DAT_020b4c80 & 0x50) == 0) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      if ((*DAT_020b4c80 & 0x50) != 0) {
        return iVar2 < 10000000;
      }
    } while (iVar2 != 10000000);
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// 0x0207e96c  fat_cf_readsectors

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


// 0x0207ea78  fat_cf_writesectors

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


// 0x0207eb94  fat_cf_shutdown

void FUN_0207eb94(void)

{
  FUN_0207e904();
  return;
}


// 0x0207eba0  fat_cf_startup

bool FUN_0207eba0(undefined4 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  bool bVar3;
  
  DAT_020b4c7c = *param_1;
  DAT_020b4c80 = param_1[1];
  DAT_020b4c84 = param_1[2];
  DAT_020b4c88 = param_1[3];
  DAT_020b4c8c = param_1[4];
  puVar2 = (ushort *)param_1[5];
  DAT_020b4c94 = param_1[6];
  DAT_020b4c98 = param_1[7];
  DAT_020b4c9c = param_1[8];
  uVar1 = *puVar2;
  DAT_020b4c90 = puVar2;
  *puVar2 = ~uVar1 & 0xff;
  if ((~uVar1 & 0xff) == *puVar2) {
    *puVar2 = 0xaa55;
    bVar3 = *puVar2 != 0xaa55;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// 0x0207ebf0  fat_m3_readhalfword

undefined2 FUN_0207ebf0(undefined2 *param_1)

{
  return *param_1;
}


// 0x0207ebf4  fat_m3_changemode

void FUN_0207ebf4(uint param_1)

{
  FUN_0207ebf0(0x8e00002);
  FUN_0207ebf0(0x800000e);
  FUN_0207ebf0(0x8801ffc);
  FUN_0207ebf0(0x800104a);
  FUN_0207ebf0(0x8800612);
  FUN_0207ebf0(0x8000000);
  FUN_0207ebf0(0x8801b66);
  FUN_0207ebf0(param_1 * 2 + 0x8000000);
  FUN_0207ebf0(0x800080e);
  FUN_0207ebf0(0x8000000);
  if ((param_1 & 0xf) == 4) {
    FUN_0207ebf0(0x80001e4);
    FUN_0207ebf0(0x80001e4);
    FUN_0207ebf0(0x8000188);
    FUN_0207ebf0(0x8000188);
  }
  else {
    FUN_0207ebf0(&DAT_09000000);
  }
  return;
}


// 0x0207ec90  helper_for_fat_scsd_shutdown

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0207ec90(undefined2 param_1)

{
  _DAT_09fffffe = param_1;
  return;
}


// 0x0207eca8  fat_fat_directory_entrygetalias

bool FUN_0207eca8(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  *param_2 = '\0';
  if (*param_1 != -0x1b) {
    if (*param_1 == '.') {
      *param_2 = '.';
      if (param_1[1] == '.') {
        param_2[1] = '.';
        param_2[2] = '\0';
      }
      else {
        param_2[1] = '\0';
      }
    }
    else {
      iVar2 = 0;
      do {
        iVar1 = iVar2;
        if (param_1[iVar2] == ' ') goto LAB_0207ecce;
        iVar1 = iVar2 + 1;
        param_2[iVar2] = param_1[iVar2];
        iVar2 = iVar1;
      } while (iVar1 != 8);
      iVar2 = 8;
LAB_0207ecce:
      pcVar4 = param_1 + 8;
      if (param_1[8] != ' ') {
        param_2[iVar2] = '.';
        pcVar3 = param_2 + iVar1;
        iVar2 = iVar1 + 1;
        do {
          pcVar3 = pcVar3 + 1;
          if (*pcVar4 == ' ') break;
          iVar2 = iVar2 + 1;
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (iVar2 != iVar1 + 4);
      }
      param_2[iVar2] = '\0';
    }
  }
  return *param_2 != '\0';
}


// 0x0207ed1c  fat_fat_directory_entrygetcluster

undefined4 FUN_0207ed1c(int param_1)

{
  return CONCAT22(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x1a));
}


// 0x0207ed34  fat_fat_directory_getrootentry

undefined4 FUN_0207ed34(int param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  thunk_FUN_02083058(param_2 + 0x38,0,0x100,param_2 + 0x2c);
  param_2[0x38] = 0x2e;
  thunk_FUN_02083058(param_2,0,0x20);
  thunk_FUN_02083058(param_2,0x20,0xb);
  *param_2 = 0x2e;
  param_2[0xb] = 0x10;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  param_2[0x1a] = (char)uVar2;
  param_2[0x1b] = (char)((uint)uVar2 >> 8);
  uVar1 = *(undefined2 *)(param_1 + 0x16);
  param_2[0x14] = (char)uVar1;
  param_2[0x15] = (char)((ushort)uVar1 >> 8);
  return 1;
}


// 0x0207ed90  fat_fat_directory_incrementdirentryposition

undefined4 FUN_0207ed90(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_2;
  iVar3 = param_2[2] + 1;
  iVar2 = param_2[1];
  iVar1 = iVar4;
  if (iVar3 != 0x10) goto LAB_0207eda6;
  iVar2 = iVar2 + 1;
  if (iVar2 == *(int *)(param_1 + 0x24)) {
    if (iVar4 != 0) {
      iVar1 = FUN_0207e470(param_1,iVar4);
      if (iVar1 == 0xfffffff) {
        if (param_3 == 0) {
          return 0;
        }
        iVar1 = FUN_0207e7a0(param_1,iVar4);
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar2 = 0;
      iVar3 = 0;
      goto LAB_0207eda6;
    }
LAB_0207edc6:
    if (iVar2 == *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x10)) {
      return 0;
    }
  }
  else if (iVar4 == 0) goto LAB_0207edc6;
  iVar3 = 0;
LAB_0207eda6:
  *param_2 = iVar1;
  param_2[1] = iVar2;
  param_2[2] = iVar3;
  return 1;
}


// 0x0207ee00  fat_fat_directory_getnextentry

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0207ee00(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint local_64;
  byte local_60 [11];
  byte local_55;
  byte local_53;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [4];
  
  uVar5 = *(uint *)(param_2 + 0x2c);
  iStack_3c = *(int *)(param_2 + 0x30);
  iStack_38 = *(int *)(param_2 + 0x34);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  puVar6 = (undefined1 *)(param_2 + 0x38);
  local_64 = 0;
  bVar1 = false;
  local_40 = uVar5;
  local_34 = uVar5;
  local_30 = iStack_3c;
  local_2c = iStack_38;
  do {
    iVar3 = FUN_0207ed90(param_1,&local_34,0);
    if (local_34 < 2) {
      iVar11 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar11 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_60,iVar11 + local_30,local_2c << 5,0x20);
    uVar2 = local_34;
    if (local_55 == 0xf) {
      if ((int)((uint)local_60[0] * 0x1000000) < 0) {
        bVar1 = false;
LAB_0207ef50:
        if (local_53 == local_64) {
          local_64 = (uint)local_53;
          if (bVar1) goto LAB_0207ef1e;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        if ((local_60[0] & 0x40) == 0) goto LAB_0207ef50;
        local_40 = local_34;
        iStack_3c = local_30;
        iStack_38 = local_2c;
        puVar6[(local_60[0] & 0xffffffbf) * 0xd] = 0;
        bVar1 = true;
        uVar5 = local_34;
LAB_0207ef1e:
        local_64 = (uint)local_53;
        piVar7 = &DAT_0208ee48;
        pbVar9 = puVar6 + (local_60[0] & 0xffffffbf) * 0xd + -0xd;
        do {
          iVar11 = *piVar7;
          piVar7 = piVar7 + 1;
          *pbVar9 = local_60[iVar11];
          pbVar9 = pbVar9 + 1;
        } while (piVar7 != (int *)&DAT_0208ee7c);
      }
    }
    else if (-1 < (int)((uint)local_55 << 0x1c)) {
      uVar10 = (uint)local_60[0];
      if (uVar10 == 0) goto LAB_0207eed6;
      if ((uVar10 != 0xe5) && (0x20 < uVar10)) {
        if (!bVar1) goto LAB_0207ef80;
        iVar11 = 1;
        do {
          if ((uVar10 & 1) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = 0x80;
          }
          pbVar9 = local_60 + iVar11;
          iVar11 = iVar11 + 1;
          uVar10 = iVar8 + (uVar10 >> 1) + (uint)*pbVar9 & 0xff;
        } while (iVar11 != 0xb);
        local_40 = uVar5;
        if (uVar10 != local_64) {
          *puVar6 = 0;
LAB_0207ef80:
          local_40 = local_34;
          iStack_3c = local_30;
          iStack_38 = local_2c;
          FUN_0207eca8(local_60,puVar6,&local_34,auStack_28);
          local_40 = uVar2;
        }
        if (iVar3 == 0) {
LAB_0207eed6:
          uVar4 = 0;
        }
        else {
          *(uint *)(param_2 + 0x20) = local_40;
          *(int *)(param_2 + 0x24) = iStack_3c;
          *(int *)(param_2 + 0x28) = iStack_38;
          *(uint *)(param_2 + 0x2c) = local_34;
          *(int *)(param_2 + 0x30) = local_30;
          *(int *)(param_2 + 0x34) = local_2c;
          thunk_FUN_02082ec0(param_2,local_60,0x20,auStack_28);
          uVar4 = 1;
        }
        return uVar4;
      }
    }
    if (iVar3 == 0) goto LAB_0207eed6;
  } while( true );
}


// 0x0207efc4  fat_fat_directory_getfirstentry

void FUN_0207efc4(undefined4 param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  FUN_0207ee00(param_1,param_2,param_2 + 0x38,param_2 + 0x2c);
  return;
}


// 0x0207efe4  fat_fat_directory_entryexists

undefined4 FUN_0207efe4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_168 [56];
  undefined1 auStack_130 [259];
  undefined1 auStack_2d [17];
  
  uVar1 = thunk_FUN_02083ed0(param_2,0x100);
  if ((uVar1 < 0x100) && (iVar2 = FUN_0207efc4(param_1,auStack_168,param_3), iVar2 != 0)) {
    do {
      uVar3 = thunk_FUN_02083ed0(auStack_130,0x100);
      if ((uVar1 == uVar3) && (iVar2 = thunk_FUN_02083638(auStack_130,param_2), iVar2 == 0)) {
        return 1;
      }
      FUN_0207eca8(auStack_168,auStack_2d);
      uVar3 = thunk_FUN_02083ed0(auStack_2d,0xd);
      if ((uVar1 == uVar3) && (iVar2 = thunk_FUN_02083638(auStack_2d,param_2), iVar2 == 0)) {
        return 1;
      }
      iVar2 = FUN_0207ee00(param_1,auStack_168);
    } while (iVar2 != 0);
  }
  return 0;
}


// 0x0207f07c  fat_fat_directory_entryfrompath

undefined4 FUN_0207f07c(int param_1,int param_2,char *param_3,char *param_4)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *local_3c;
  undefined1 auStack_35 [17];
  
  local_3c = param_4;
  if (param_4 == (char *)0x0) {
    local_3c = (char *)thunk_FUN_020836d4(param_3,0);
  }
  if (*param_3 == '/') {
    iVar6 = *(int *)(param_1 + 0x14);
    do {
      param_3 = param_3 + 1;
    } while (*param_3 == '/');
    if (local_3c <= param_3) {
      FUN_0207ed34(param_1,param_2);
      bVar1 = true;
      goto LAB_0207f0a6;
    }
    bVar1 = false;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x3c);
    bVar1 = false;
LAB_0207f0a6:
    if (iVar6 != *(int *)(param_1 + 0x14)) goto LAB_0207f0ae;
  }
  iVar4 = thunk_FUN_02083afc(&DAT_0208f224,param_3,2);
  if (iVar4 == 0) {
    FUN_0207ed34(param_1,param_2);
    return 1;
  }
LAB_0207f0ae:
  if (!bVar1) {
    do {
      do {
        pcVar2 = (char *)thunk_FUN_020836d4(param_3,0x2f);
        if (pcVar2 == (char *)0x0) {
          uVar5 = thunk_FUN_02083a6c(param_3);
        }
        else {
          uVar5 = (int)pcVar2 - (int)param_3;
        }
        if ((0x100 < uVar5) || (iVar6 = FUN_0207efc4(param_1,param_2,iVar6), iVar6 == 0)) {
          return 0;
        }
        do {
          uVar3 = thunk_FUN_02083ed0(param_2 + 0x38,0x100);
          if (uVar5 == uVar3) {
            bVar1 = false;
            iVar4 = thunk_FUN_02083afc(param_2 + 0x38,param_3,uVar5);
            if (iVar4 == 0) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
          FUN_0207eca8(param_2,auStack_35);
          uVar3 = thunk_FUN_02083ed0(auStack_35,0xd);
          if ((uVar5 == uVar3) && (iVar4 = thunk_FUN_02083afc(auStack_35,param_3,uVar5), iVar4 == 0)
             ) {
            bVar1 = true;
LAB_0207f106:
            if ((-1 < (int)((uint)*(byte *)(param_2 + 0xb) << 0x1b)) && (pcVar2 != (char *)0x0)) {
              bVar1 = false;
              goto LAB_0207f116;
            }
          }
          else {
            if (bVar1) goto LAB_0207f106;
LAB_0207f116:
            iVar6 = FUN_0207ee00(param_1,param_2);
          }
          if (iVar6 == 0) {
            return 0;
          }
        } while (!bVar1);
        if (pcVar2 == (char *)0x0) {
          return 1;
        }
        if (local_3c <= pcVar2) {
          return 1;
        }
        if (-1 < (int)((uint)*(byte *)(param_2 + 0xb) << 0x1b)) {
          return 1;
        }
        iVar6 = FUN_0207ed1c(param_2);
        param_3 = pcVar2;
      } while (*pcVar2 != '/');
      do {
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 == '/');
      param_3 = pcVar2;
    } while (pcVar2 < local_3c);
  }
  return 1;
}


// 0x0207f208  fat_fat_directory_chdir

undefined4 FUN_0207f208(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_148 [11];
  byte local_13d;
  
  iVar1 = FUN_0207f07c(param_1,auStack_148,param_2,0);
  if ((iVar1 != 0) && ((int)((uint)local_13d << 0x1b) < 0)) {
    uVar2 = FUN_0207ed1c(auStack_148);
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    return 1;
  }
  return 0;
}


// 0x0207f238  fat_fat_directory_isvalidalias

uint FUN_0207f238(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = thunk_FUN_02083ed0(param_1,0xd);
  if ((0xc < uVar1) || (iVar2 = thunk_FUN_02083f18(param_1,"\\/:;*?\"<>|&+,=[]"), iVar2 != 0)) {
    return 0;
  }
  iVar2 = thunk_FUN_02083ed0(param_1,0xd);
  if (iVar2 != 0) {
    if (*param_1 < 0x20) {
      return 0;
    }
    iVar3 = 0;
    while (iVar3 = iVar3 + 1, iVar2 != iVar3) {
      if (param_1[iVar3] < 0x20) {
        return 0;
      }
    }
  }
  iVar3 = thunk_FUN_020836d4(param_1,0x2e);
  if (iVar3 == 0) {
    uVar1 = 0;
    if (iVar2 - 1U < 8) goto LAB_0207f2b8;
  }
  else {
    iVar2 = thunk_FUN_02083f68(param_1,0x2e);
    if (iVar3 != iVar2) {
      return 0;
    }
    if (7 < (iVar3 - (int)param_1) - 2U) {
      return 0;
    }
    uVar1 = thunk_FUN_02083ed0(iVar3 + 1,0xd);
    if (3 < uVar1) {
      return 0;
    }
    iVar2 = thunk_FUN_02083ed0(iVar3 + 1,0xd);
    uVar1 = 0;
    if (iVar2 != 0) goto LAB_0207f2b8;
  }
  uVar1 = 1;
LAB_0207f2b8:
  return uVar1 ^ 1;
}


// 0x0207f2d4  fat_fat_directory_isvalidlfn

undefined4 FUN_0207f2d4(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = thunk_FUN_02083ed0(param_1,0x100);
  if ((uVar1 < 0x100) && (iVar2 = thunk_FUN_02083f18(param_1,"\\/:*?\"<>|"), iVar2 == 0)) {
    iVar2 = thunk_FUN_02083ed0(param_1,0x100);
    if (iVar2 == 0) {
      return 1;
    }
    if (0x1f < *param_1) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        if (iVar2 == iVar3) {
          return 1;
        }
      } while (0x1f < param_1[iVar3]);
    }
  }
  return 0;
}


// 0x0207f320  fat_fat_directory_entryfromposition

bool FUN_0207f320(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  byte local_54 [32];
  uint local_34;
  int local_30;
  int local_2c;
  
  local_34 = *(uint *)(param_2 + 0x20);
  local_30 = *(int *)(param_2 + 0x24);
  local_2c = *(int *)(param_2 + 0x28);
  iVar3 = *(int *)(param_2 + 0x30);
  iVar1 = *(int *)(param_2 + 0x34);
  uVar5 = *(uint *)(param_2 + 0x2c);
  thunk_FUN_02083058(param_2 + 0x38,0,0x100);
  while( true ) {
    if (local_34 < 2) {
      iVar6 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_54,iVar6 + local_30,local_2c << 5,0x20);
    if (((local_34 == uVar5) && (local_30 == iVar3)) && (local_2c == iVar1)) {
      thunk_FUN_02082ec0(param_2,local_54,0x20);
      bVar7 = true;
    }
    else {
      pbVar2 = (byte *)(param_2 + (local_54[0] & 0xffffffbf) * 0xd + 0x2b);
      piVar4 = &DAT_0208ee48;
      do {
        iVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        *pbVar2 = local_54[iVar6];
        pbVar2 = pbVar2 + 1;
      } while (piVar4 != (int *)&DAT_0208ee7c);
      bVar7 = false;
    }
    iVar6 = FUN_0207ed90(param_1,&local_34,0);
    if (iVar6 == 0) break;
    if (bVar7) {
      if (((local_34 == uVar5) && (local_30 == iVar3)) && (local_2c == iVar1)) {
        iVar1 = FUN_0207eca8(param_2,param_2 + 0x38);
        bVar7 = iVar1 != 0;
      }
      else {
        bVar7 = true;
      }
      return bVar7;
    }
  }
  return false;
}


// 0x0207f430  fat_fat_directory_removeentry

undefined4 FUN_0207f430(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_4c [32];
  uint local_2c;
  int local_28;
  int local_24;
  
  local_2c = *(uint *)(param_2 + 0x20);
  local_28 = *(int *)(param_2 + 0x24);
  local_24 = *(int *)(param_2 + 0x28);
  iVar2 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x30);
  uVar3 = *(uint *)(param_2 + 0x2c);
  while( true ) {
    if (local_2c < 2) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x24) * (local_2c - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_4c,iVar5 + local_28,local_24 << 5,0x20);
    local_4c[0] = 0xe5;
    if (local_2c < 2) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x24) * (local_2c - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d020(*(undefined4 *)(param_1 + 4),local_4c,iVar5 + local_28,local_24 << 5,0x20);
    if ((local_2c == uVar3) && (local_28 == iVar4)) {
      if (iVar2 == local_24) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    iVar5 = FUN_0207ed90(param_1,&local_2c,0);
    if (iVar5 == 0) break;
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}


// 0x0207f4f0  fat_fat_directory_entrystat

void FUN_0207f4f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_3 = *(undefined4 *)*param_1;
  uVar1 = FUN_0207ed1c(param_2);
  param_3[1] = uVar1;
  if ((int)((uint)*(byte *)(param_2 + 0xb) << 0x1b) < 0) {
    uVar2 = 0x4124;
  }
  else {
    uVar2 = 0x8124;
  }
  if ((int)((uint)*(byte *)(param_2 + 0xb) << 0x1f) < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x92;
  }
  param_3[2] = uVar3 | uVar2;
  *(undefined2 *)(param_3 + 3) = 1;
  *(undefined2 *)((int)param_3 + 0xe) = 1;
  *(undefined2 *)(param_3 + 4) = 2;
  param_3[5] = *param_3;
  param_3[6] = (uint)*(ushort *)(param_2 + 0x1c) |
               (uint)*(byte *)(param_2 + 0x1e) << 0x10 | (uint)*(byte *)(param_2 + 0x1f) << 0x18;
  uVar1 = FUN_0207e898(0,*(undefined2 *)(param_2 + 0x12));
  param_3[7] = uVar1;
  param_3[8] = 0;
  uVar1 = FUN_0207e898(*(undefined2 *)(param_2 + 0x16),*(undefined2 *)(param_2 + 0x18));
  param_3[10] = 0;
  param_3[9] = uVar1;
  uVar1 = FUN_0207e898(*(undefined2 *)(param_2 + 0xe),*(undefined2 *)(param_2 + 0x10));
  param_3[0xb] = uVar1;
  param_3[0xc] = 0;
  param_3[0xd] = 0x200;
  iVar4 = param_3[6] + 0x1ff;
  if (iVar4 < 0) {
    iVar4 = param_3[6] + 0x3fe;
  }
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0xe] = iVar4 >> 9;
  return;
}


// 0x0207f5bc  fat_fat_directory_addentry

undefined4 FUN_0207f5bc(int param_1,byte *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int *piVar5;
  char extraout_r1;
  char extraout_r1_00;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  byte *pbVar12;
  int local_a8;
  uint local_a4;
  byte local_99 [11];
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_7f;
  undefined1 local_7e;
  byte local_79 [32];
  byte local_59 [8];
  byte local_51;
  byte local_50 [4];
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  int local_30;
  int local_2c;
  
  pbVar12 = param_2 + 0x38;
  iVar2 = thunk_FUN_02083ed0(pbVar12,0x100);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_0207f2d4(pbVar12);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = thunk_FUN_02083a6c(pbVar12);
  iVar7 = iVar2 + -1;
  if ((0 < iVar7) && (param_2[iVar2 + 0x37] == 0x20)) {
    pbVar3 = param_2 + iVar2 + 0x37;
    do {
      iVar7 = iVar7 + -1;
      *pbVar3 = 0;
      if (iVar7 < 1) break;
      pbVar8 = pbVar3 + -1;
      pbVar3 = pbVar3 + -1;
    } while (*pbVar8 == 0x20);
  }
  iVar2 = thunk_FUN_02083a6c(pbVar12);
  for (iVar7 = 0; (iVar7 != iVar2 && (param_2[iVar7 + 0x38] == 0x20)); iVar7 = iVar7 + 1) {
  }
  if (0 < iVar7) {
    uVar4 = thunk_FUN_02083a6c(pbVar12 + iVar7);
    thunk_FUN_02082f5c(pbVar12,pbVar12 + iVar7,uVar4);
  }
  iVar2 = thunk_FUN_02083a6c(pbVar12);
  thunk_FUN_02083058(pbVar12 + iVar2,0,0x100 - iVar2);
  iVar2 = FUN_0207efe4(param_1,pbVar12,param_3);
  if (iVar2 != 0) {
    return 0;
  }
  thunk_FUN_02083058(param_2,0x20,0xb);
  iVar2 = thunk_FUN_02083c80(pbVar12,&DAT_0208f224,0x100);
  local_4c = param_3;
  local_40 = param_3;
  if (iVar2 == 0) {
    *param_2 = 0x2e;
  }
  else {
    iVar2 = thunk_FUN_02083c80(pbVar12,&DAT_0208f254,0x100);
    if (iVar2 != 0) {
      iVar2 = FUN_0207f238(pbVar12);
      if (iVar2 != 0) {
        thunk_FUN_02083fb8(pbVar12);
        iVar2 = 0;
        do {
          pbVar3 = param_2 + iVar2;
          bVar6 = pbVar3[0x38];
          pbVar12 = pbVar3;
          iVar7 = iVar2;
          if ((bVar6 == 0x2e) || (bVar6 == 0)) goto joined_r0x0207faf0;
          iVar2 = iVar2 + 1;
          *pbVar3 = bVar6;
        } while (iVar2 != 8);
        iVar7 = 8;
        pbVar3 = param_2 + 8;
        goto LAB_0207f944;
      }
      iVar2 = thunk_FUN_02083ed0(pbVar12,0x100);
      pbVar3 = (byte *)thunk_FUN_02083f68(pbVar12,0x2e);
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)thunk_FUN_020836d4(pbVar12,0);
      }
      iVar9 = 0;
      for (iVar7 = 0; pbVar12 + iVar7 < pbVar3; iVar7 = iVar7 + 1) {
        if (((&DAT_0208ee85)[param_2[iVar7 + 0x38]] & 7) != 0) {
          local_59[iVar9] = param_2[iVar7 + 0x38];
          iVar9 = iVar9 + 1;
        }
        if (5 < iVar9) break;
      }
      if (iVar9 < 8) {
        pbVar3 = local_59 + iVar9;
        do {
          *pbVar3 = 0x5f;
          pbVar3 = pbVar3 + 1;
        } while (pbVar3 != &local_51);
        iVar9 = 8;
      }
      pbVar12 = (byte *)thunk_FUN_02083f68(pbVar12,0x2e);
      if (pbVar12 == (byte *)0x0) {
        local_51 = 0;
        local_50[0] = local_51;
        local_50[1] = local_51;
        local_50[2] = local_51;
        local_50[3] = local_51;
      }
      else {
        local_51 = 0x2e;
        if (iVar9 < 0xc) {
          pbVar3 = pbVar12 + 1;
          local_59[iVar9] = *pbVar12;
          iVar9 = iVar9 + 1;
          if (pbVar3 != (byte *)0x0) {
            pbVar12 = local_59 + iVar9;
            do {
              if (iVar9 == 0xc) break;
              bVar6 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              *pbVar12 = bVar6;
              iVar9 = iVar9 + 1;
              pbVar12 = pbVar12 + 1;
            } while (pbVar3 != (byte *)0x0);
          }
        }
        local_59[iVar9] = 0;
      }
      local_59[5] = 0x7e;
      iVar7 = 0;
      while( true ) {
        iVar7 = iVar7 + 1;
        uVar4 = thunk_FUN_02080494(iVar7,10);
        thunk_FUN_020805c0(uVar4,10);
        local_59[6] = extraout_r1 + '0';
        thunk_FUN_020805c0(iVar7,10);
        local_59[7] = extraout_r1_00 + '0';
        iVar9 = FUN_0207efe4(param_1,local_59,param_3);
        if (iVar9 == 0) break;
        if (iVar7 == 100) {
          return 0;
        }
      }
      if (iVar7 == 100) {
        return 0;
      }
      thunk_FUN_02083fb8(local_59);
      thunk_FUN_02082ec0(param_2,local_59,8);
      thunk_FUN_02082ec0(param_2 + 8,local_50,3);
      iVar7 = 0;
      do {
        if (param_2[iVar7] < 0x20) {
          param_2[iVar7] = 0x20;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 10);
      local_a4 = (uint)*param_2;
      iVar7 = 1;
      do {
        if ((int)(local_a4 << 0x1f) < 0) {
          iVar9 = 0x80;
        }
        else {
          iVar9 = 0;
        }
        pbVar12 = param_2 + iVar7;
        iVar7 = iVar7 + 1;
        local_a4 = iVar9 + (local_a4 >> 1) + (uint)*pbVar12 & 0xff;
      } while (iVar7 != 0xb);
      local_a8 = thunk_FUN_02080380(iVar2 + 0xc,0xd);
      local_a8 = local_a8 + 1;
      local_44 = 0;
      local_48 = 0;
      iStack_3c = 0;
      iStack_38 = 0;
      if (local_a8 == 0) goto LAB_0207f7b0;
      goto LAB_0207f6c4;
    }
    *param_2 = 0x2e;
    param_2[1] = 0x2e;
  }
LAB_0207f6a6:
  local_a8 = 1;
  local_a4 = 0;
LAB_0207f6c4:
  iStack_38 = 0;
  iStack_3c = 0;
  local_44 = 0;
  local_48 = 0;
  iVar7 = 1;
  iVar2 = local_a8;
  do {
    if (local_4c < 2) {
      iVar9 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x24) * (local_4c - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_79,iVar9 + local_48,local_44 << 5,0x20);
    puVar10 = (uint *)(uint)local_79[0];
    if (puVar10 == (uint *)0x0) {
      local_40 = local_4c;
      iStack_3c = local_48;
      iStack_38 = local_44;
      iVar9 = iVar2 + -1;
      bVar1 = true;
    }
    else {
      iVar9 = local_a8;
      if (puVar10 == (uint *)0xe5) {
        if (local_a8 == iVar2) {
          local_40 = local_4c;
          iStack_3c = local_48;
          iStack_38 = local_44;
          puVar10 = &local_40;
        }
        iVar9 = iVar2 + -1;
        if (iVar9 == 0) {
          bVar1 = false;
          goto LAB_0207f6dc;
        }
      }
      iVar7 = FUN_0207ed90(param_1,&local_4c,1,puVar10);
      bVar1 = false;
    }
LAB_0207f6dc:
    if (iVar7 == 0) {
      return 0;
    }
    if (bVar1) {
      *(uint *)(param_2 + 0x20) = local_40;
      *(int *)(param_2 + 0x24) = iStack_3c;
      *(int *)(param_2 + 0x28) = iStack_38;
      iVar9 = iVar9 + 1;
      thunk_FUN_02083058(local_79,0,0x20);
      if (iVar9 != 0) {
        while( true ) {
          *(uint *)(param_2 + 0x2c) = local_4c;
          *(int *)(param_2 + 0x30) = local_48;
          *(int *)(param_2 + 0x34) = local_44;
          iVar2 = FUN_0207ed90(param_1,&local_4c,1,&local_40);
          iVar9 = iVar9 + -1;
          if (local_4c < 2) {
            iVar7 = *(int *)(param_1 + 0x10);
          }
          else {
            iVar7 = *(int *)(param_1 + 0x24) * (local_4c - 2) + *(int *)(param_1 + 0x1c);
          }
          FUN_0207d020(*(undefined4 *)(param_1 + 4),local_79,iVar7 + local_48,local_44 << 5,0x20);
          if (iVar9 == 0) break;
          if (iVar2 == 0) {
            return 0;
          }
        }
        if (iVar2 == 0) {
          return 0;
        }
      }
      goto LAB_0207f7c6;
    }
    iVar2 = iVar9;
  } while (iVar9 != 0);
LAB_0207f7b0:
  *(uint *)(param_2 + 0x20) = local_40;
  *(int *)(param_2 + 0x24) = iStack_3c;
  *(int *)(param_2 + 0x28) = iStack_38;
  *(uint *)(param_2 + 0x2c) = local_4c;
  *(int *)(param_2 + 0x30) = local_48;
  *(int *)(param_2 + 0x34) = local_44;
LAB_0207f7c6:
  local_34 = *(uint *)(param_2 + 0x20);
  local_30 = *(int *)(param_2 + 0x24);
  local_2c = *(int *)(param_2 + 0x28);
  if (0 < local_a8) {
    iVar7 = local_a8 * 0xd + -0x1a;
    iVar2 = local_a8;
    do {
      if (iVar2 == 1) {
        if (local_34 < 2) {
          iVar9 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
        }
        FUN_0207d020(*(undefined4 *)(param_1 + 4),param_2,iVar9 + local_30,local_2c << 5,0x20);
      }
      else {
        if (iVar2 == local_a8) {
          local_99[0] = 0x40;
        }
        else {
          local_99[0] = 0;
        }
        local_99[0] = (char)iVar2 - 1U | local_99[0];
        pbVar12 = param_2 + iVar7 + 0x38;
        iVar9 = 0;
        piVar5 = &DAT_0208ee48;
        do {
          while (*pbVar12 == 0) {
            if ((iVar9 < 2) || (pbVar12[-1] != 0)) {
              iVar11 = *piVar5;
              local_99[iVar11] = 0;
              local_99[iVar11 + 1] = 0;
            }
            else {
              iVar11 = *piVar5;
              local_99[iVar11] = 0xff;
              local_99[iVar11 + 1] = 0xff;
            }
            iVar9 = iVar9 + 1;
            pbVar12 = pbVar12 + 1;
            piVar5 = piVar5 + 1;
            if (iVar9 == 0xd) goto LAB_0207f84c;
          }
          iVar11 = *piVar5;
          iVar9 = iVar9 + 1;
          local_99[iVar11] = *pbVar12;
          local_99[iVar11 + 1] = 0;
          pbVar12 = pbVar12 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar9 != 0xd);
LAB_0207f84c:
        local_8c = (undefined1)local_a4;
        local_8e = 0xf;
        local_8d = 0;
        local_7f = 0;
        local_7e = 0;
        if (local_34 < 2) {
          iVar9 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
        }
        FUN_0207d020(*(undefined4 *)(param_1 + 4),local_99,iVar9 + local_30,local_2c << 5,0x20);
      }
      iVar9 = FUN_0207ed90(param_1,&local_34,0);
      if (iVar9 == 0) {
        return 1;
      }
      iVar2 = iVar2 + -1;
      iVar7 = iVar7 + -0xd;
    } while (iVar2 != 0);
  }
  return 1;
joined_r0x0207faf0:
  for (; iVar7 < 8; iVar7 = iVar7 + 1) {
    *pbVar12 = 0x20;
    pbVar12 = pbVar12 + 1;
  }
LAB_0207f944:
  if ((pbVar3[0x38] != 0x2e) || (bVar6 = pbVar3[0x39], bVar6 == 0)) {
LAB_0207f950:
    if (iVar7 < 0xb) {
      pbVar12 = param_2 + iVar7;
      do {
        iVar7 = iVar7 + 1;
        *pbVar12 = 0x20;
        pbVar12 = pbVar12 + 1;
      } while (iVar7 != 0xb);
    }
    goto LAB_0207f6a6;
  }
  if (iVar7 < 0xb) {
    pbVar12 = param_2 + iVar7;
    pbVar3 = param_2 + iVar2 + 0x3a;
    do {
      *pbVar12 = bVar6;
      bVar6 = *pbVar3;
      iVar7 = iVar7 + 1;
      if (bVar6 == 0) goto LAB_0207f950;
      pbVar12 = pbVar12 + 1;
      pbVar3 = pbVar3 + 1;
    } while (iVar7 != 0xb);
  }
  local_a8 = 1;
  local_a4 = 0;
  goto LAB_0207f6c4;
}


// 0x0207fda8  helper_for_fat_neo_selectmmc

void FUN_0207fda8(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  
  DAT_040001a1 = 0xc0;
  iVar3 = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + iVar3);
    iVar2 = -iVar3;
    iVar3 = iVar3 + 1;
    (&DAT_040001af)[iVar2] = *puVar1;
  } while (iVar3 != 8);
  return;
}


// 0x0207fdcc  helper_for_fat_njsd_readsectors

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0207fdcc(uint param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  FUN_0207fda8(param_4);
  puVar1 = param_2 + param_3;
  _DAT_040001a4 = param_1;
  do {
    if ((_DAT_040001a4 & 0x800000) != 0) {
      if (param_2 < puVar1) {
        *param_2 = _DAT_04100010;
      }
      param_2 = param_2 + 1;
    }
  } while ((int)_DAT_040001a4 < 0);
  return;
}


// 0x02083ed0  helper_for_fat_fat_directory_entryexists

int FUN_02083ed0(char *param_1,int param_2)

{
  char *pcVar1;
  
  if ((param_2 == 0) || (*param_1 == '\0')) {
    return 0;
  }
  pcVar1 = param_1;
  do {
    pcVar1 = pcVar1 + 1;
    if (pcVar1 == param_1 + param_2) break;
  } while (*pcVar1 != '\0');
  return (int)pcVar1 - (int)param_1;
}


// 0x02083fb8  helper_for_fat_fat_directory_addentry

void FUN_02083fb8(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  while (bVar1 != 0) {
    if (((&DAT_0208ee85)[bVar1] & 2) != 0) {
      *param_1 = bVar1 - 0x20;
    }
    param_1 = param_1 + 1;
    bVar1 = *param_1;
  }
  return;
}

