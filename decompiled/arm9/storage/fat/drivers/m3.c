/* ARM9 m3 — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02073274  _M3CF_startup

void _M3CF_startup(void)

{
  _M3_changeMode(0x400003);
  _CF_startup(&m3cf_ata_register_map);
  return;
}


// 0x02073290  _M3SD_sendCommand

/* WARNING: Removing unreachable block (ram,0x020732d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _M3SD_sendCommand(short param_1,undefined4 param_2)

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


// 0x020732f0  _M3SD_getByte

/* WARNING: Removing unreachable block (ram,0x02073316) */
/* WARNING: Removing unreachable block (ram,0x02073322) */
/* WARNING: Removing unreachable block (ram,0x02073328) */
/* WARNING: Removing unreachable block (ram,0x0207332e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 _M3SD_getByte(void)

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


// 0x02073344  _M3SD_getResponse

undefined4 _M3SD_getResponse(byte *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = 0;
  do {
    iVar1 = _M3SD_getByte();
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
          iVar1 = _M3SD_getByte();
          iVar5 = iVar5 + 1;
        } while (param_2 != iVar5);
      }
      _M3SD_getByte();
      _M3SD_getByte();
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


// 0x0207340c  _M3SD_cmd_17byte_response

void _M3SD_cmd_17byte_response(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _M3SD_sendCommand(param_2,param_3);
  _M3SD_getResponse(param_1,0x11);
  return;
}


// 0x02073424  _M3SD_readData

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _M3SD_readData(undefined2 *param_1)

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


// 0x020734b4  _M3SD_clkout

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _M3SD_clkout(void)

{
  _DAT_08800000 = 0xc;
  return;
}


// 0x020734c4  _M3SD_clkin

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _M3SD_clkin(void)

{
  _DAT_08800000 = 8;
  return;
}


// 0x020734d4  _M3SD_isInserted

bool _M3SD_isInserted(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  char local_e [6];
  
  iVar2 = _M3SD_sendCommand(0xd,0);
  if ((iVar2 == 0) || (cVar1 = _M3SD_getResponse(local_e,6), cVar1 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = local_e[0] == '\r';
  }
  return bVar3;
}


// 0x02073510  _M3SD_readSectors

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool _M3SD_readSectors(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_1e [6];
  
  if (param_2 == 1) {
    iVar1 = _M3SD_sendCommand(0x11,param_1 << 9);
    if (iVar1 != 0) {
      iVar1 = _M3SD_readData(param_3);
      return iVar1 != 0;
    }
  }
  else {
    iVar1 = _M3SD_sendCommand(0x12,param_1 << 9);
    if (iVar1 != 0) {
      if (param_2 == 0) {
LAB_02073584:
        _M3SD_sendCommand(0xc,0);
        _M3SD_getResponse(auStack_1e,6);
        return true;
      }
      iVar1 = 0;
      while (iVar2 = _M3SD_readData(param_3), iVar2 != 0) {
        iVar1 = iVar1 + 1;
        _DAT_09800000 = 8;
        if (param_2 == iVar1) goto LAB_02073584;
        param_3 = param_3 + 0x200;
      }
    }
  }
  return false;
}


// 0x020735b0  _M3SD_initCard

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _M3SD_initCard(void)

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
  iVar2 = _M3SD_sendCommand(0,0);
  if (iVar2 != 0) {
    iVar2 = 99;
    do {
      _M3SD_getByte();
      bVar3 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar3);
    DAT_020b4c6c = 0;
    _SD_InitCard(&LAB_020733f4_1,0x207340d,1);
  }
  return;
}


// 0x02073638  _M3SD_clearStatus

void _M3SD_clearStatus(void)

{
  _M3SD_initCard();
  return;
}


// 0x02073644  _M3SD_startUp

void _M3SD_startUp(void)

{
  _M3_changeMode(0x400003);
  _M3SD_initCard();
  return;
}


// 0x0207365c  _M3SD_writeSectors

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _M3SD_writeSectors(int param_1,int param_2,byte *param_3)

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
  _SD_CRC16(param_3,0x200,local_36);
  while( true ) {
    bVar5 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar5) {
      return 1;
    }
    _M3SD_sendCommand(0x18,local_3c);
    cVar2 = _M3SD_getResponse(abStack_2e,6);
    if (cVar2 == '\0') break;
    _DAT_08800000 = 4;
    _DAT_09800000 = 0;
    do {
      _M3SD_clkin();
    } while ((_DAT_09000000 & 0x100) == 0);
    _DAT_09000000 = 0;
    _M3SD_clkout();
    iVar4 = 0;
    pbVar3 = param_3;
    do {
      bVar1 = *pbVar3;
      iVar4 = iVar4 + 1;
      _DAT_09000000 = (ushort)(bVar1 >> 4);
      _M3SD_clkout();
      _DAT_09000000 = (ushort)bVar1;
      pbVar3 = pbVar3 + 1;
      _M3SD_clkout();
    } while (iVar4 != 0x200);
    pbVar3 = local_36;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      _DAT_09000000 = (ushort)(bVar1 >> 4);
      _M3SD_clkout();
      _DAT_09000000 = (ushort)bVar1;
      _M3SD_clkout();
    } while (abStack_2e != pbVar3);
    iVar4 = 0;
    do {
      _DAT_09000000 = 0xff;
      iVar4 = iVar4 + 1;
      _M3SD_clkout();
    } while (iVar4 != 0x20);
    do {
      _M3SD_clkin();
    } while ((_DAT_09000000 & 0x100) == 0);
    if (param_2 != 0) {
      local_3c = local_3c + 0x200;
      param_3 = param_3 + 0x200;
      _SD_CRC16(param_3,0x200,local_36);
    }
    local_2b = 0;
    _M3SD_sendCommand(0xd,DAT_020b4c6c);
    _M3SD_getResponse(abStack_2e,6);
    iVar4 = 2999;
    while ((local_2b & 0x1f) != 9) {
      _M3SD_sendCommand(0xd,DAT_020b4c6c);
      iVar4 = iVar4 + -1;
      _M3SD_getResponse(abStack_2e,6);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  return 0;
}


// 0x0207ebf0  _M3_readHalfword

undefined2 _M3_readHalfword(undefined2 *param_1)

{
  return *param_1;
}


// 0x0207ebf4  _M3_changeMode

void _M3_changeMode(uint param_1)

{
  _M3_readHalfword(0x8e00002);
  _M3_readHalfword(0x800000e);
  _M3_readHalfword(0x8801ffc);
  _M3_readHalfword(0x800104a);
  _M3_readHalfword(0x8800612);
  _M3_readHalfword(0x8000000);
  _M3_readHalfword(0x8801b66);
  _M3_readHalfword(param_1 * 2 + 0x8000000);
  _M3_readHalfword(0x800080e);
  _M3_readHalfword(0x8000000);
  if ((param_1 & 0xf) == 4) {
    _M3_readHalfword(0x80001e4);
    _M3_readHalfword(0x80001e4);
    _M3_readHalfword(0x8000188);
    _M3_readHalfword(0x8000188);
  }
  else {
    _M3_readHalfword(&DAT_09000000);
  }
  return;
}

