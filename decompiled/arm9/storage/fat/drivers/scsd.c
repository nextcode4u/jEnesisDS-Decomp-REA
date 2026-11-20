/* ARM9 scsd — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

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


// 0x0207ec90  helper_for_fat_scsd_shutdown

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0207ec90(undefined2 param_1)

{
  _DAT_09fffffe = param_1;
  return;
}

