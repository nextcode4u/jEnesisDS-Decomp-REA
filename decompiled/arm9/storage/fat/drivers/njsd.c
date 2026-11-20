/* ARM9 njsd — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

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

