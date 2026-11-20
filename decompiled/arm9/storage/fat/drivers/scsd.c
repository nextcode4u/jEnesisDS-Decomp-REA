/* ARM9 scsd — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020747a4  _SCSD_getResponse

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _SCSD_getResponse(undefined1 *param_1,int param_2)

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


// 0x02074808  _SCSD_sendClocks

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SCSD_sendClocks(int param_1)

{
  bool bVar1;
  
  do {
    bVar1 = param_1 != 0;
    param_1 = param_1 + -1;
  } while (bVar1);
  return;
}


// 0x02074818  _SCSD_readData

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _SCSD_readData(undefined2 *param_1)

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


// 0x020748ac  _SCSD_shutdown

undefined4 _SCSD_shutdown(void)

{
  write_supercard_mode_register(1);
  return 1;
}


// 0x020748bc  _SCSD_sendCommand

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _SCSD_sendCommand(byte param_1,undefined4 param_2)

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
  local_16[5] = _SD_CRC7(pbVar3,5);
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


// 0x0207492c  _SCSD_readSectors

undefined4 _SCSD_readSectors(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_16 [6];
  
  if (param_2 == 1) {
    iVar1 = _SCSD_sendCommand(0x11,param_1 << 9);
    if ((iVar1 != 0) && (iVar1 = _SCSD_readData(param_3), iVar1 != 0)) {
LAB_02074992:
      _SCSD_sendClocks(0x10);
      return 1;
    }
  }
  else {
    iVar1 = _SCSD_sendCommand(0x12,param_1 << 9);
    if (iVar1 != 0) {
      if (param_2 == 0) {
LAB_02074980:
        _SCSD_sendCommand(0xc,0);
        _SCSD_getResponse(auStack_16,6);
        goto LAB_02074992;
      }
      iVar1 = 0;
      while (iVar2 = _SCSD_readData(param_3), iVar2 != 0) {
        iVar1 = iVar1 + 1;
        if (param_2 == iVar1) goto LAB_02074980;
        param_3 = param_3 + 0x200;
      }
    }
  }
  return 0;
}


// 0x0207499c  _SCSD_isInserted

bool _SCSD_isInserted(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char local_e [6];
  
  iVar2 = _SCSD_sendCommand(0xd,0);
  if ((iVar2 == 0) || (cVar1 = _SCSD_getResponse(local_e,6), cVar1 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = local_e[0] == '\r';
  }
  return bVar3;
}


// 0x020749d8  _SCSD_initCard

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SCSD_initCard(void)

{
  int iVar1;
  
  _DAT_09440000 = 0;
  _SCSD_sendClocks(100);
  iVar1 = _SCSD_sendCommand(0,0);
  if (iVar1 != 0) {
    _SCSD_sendClocks(100);
    DAT_020b4c78 = 0;
    _SD_InitCard(0x2074a51,0x2074a39,1);
  }
  return;
}


// 0x02074a18  _SCSD_clearStatus

void _SCSD_clearStatus(void)

{
  _SCSD_initCard();
  return;
}


// 0x02074a24  _SCSD_startUp

void _SCSD_startUp(void)

{
  write_supercard_mode_register(3);
  _SCSD_initCard();
  return;
}


// 0x02074a38  _SCSD_cmd_17byte_response

void _SCSD_cmd_17byte_response(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _SCSD_sendCommand(param_2,param_3);
  _SCSD_getResponse(param_1,0x11);
  return;
}


// 0x02074a50  _SCSD_cmd_6byte_response

void _SCSD_cmd_6byte_response(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _SCSD_sendCommand(param_2,param_3);
  _SCSD_getResponse(param_1,6);
  return;
}


// 0x02074a68  _SCSD_writeSectors

undefined4 _SCSD_writeSectors(int param_1,int param_2,int param_3)

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
    _SD_CRC16(param_3,0x200,auStack_36);
    _SCSD_sendCommand(0x18,param_1);
    cVar1 = _SCSD_getResponse(auStack_2e,6);
    if ((cVar1 == '\0') || (iVar2 = arm_thumb_veneer_for_scsd_write_sector_data_and_crc(param_3,auStack_36), iVar2 == 0)) break;
    _SCSD_sendClocks(0x10);
    local_2b = 0;
    _SCSD_sendCommand(0xd,DAT_020b4c78);
    _SCSD_getResponse(auStack_2e,6);
    iVar2 = 2999;
    while ((local_2b & 0x1f) != 9) {
      _SCSD_sendCommand(0xd,DAT_020b4c78);
      iVar2 = iVar2 + -1;
      _SCSD_getResponse(auStack_2e,6);
      if (iVar2 == 0) {
        return 0;
      }
    }
    param_1 = param_1 + 0x200;
    param_3 = param_3 + 0x200;
  }
  return 0;
}


// 0x0207cdc0  scsd_write_sector_data_and_crc

/* WARNING: Removing unreachable block (ram,0x0207ce54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 scsd_write_sector_data_and_crc(ushort *param_1,ushort *param_2)

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


// 0x0207ec90  write_supercard_mode_register

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_supercard_mode_register(undefined2 param_1)

{
  _DAT_09fffffe = param_1;
  return;
}

