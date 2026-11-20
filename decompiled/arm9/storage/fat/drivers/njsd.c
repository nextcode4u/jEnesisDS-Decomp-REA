/* ARM9 njsd — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020737cc  _NJSD_reset

/* WARNING: Removing unreachable block (ram,0x02073810) */
/* WARNING: Removing unreachable block (ram,0x02073820) */
/* WARNING: Removing unreachable block (ram,0x02073816) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 _NJSD_reset(void)

{
  int iVar1;
  
  CARD_CR1H = 0x80;
  CARD_COMMAND[0] = 0x20;
  CARD_COMMAND[1] = 0;
  CARD_COMMAND[2] = 0;
  CARD_COMMAND[3] = 0;
  CARD_COMMAND[4] = 0;
  CARD_COMMAND[5] = 0;
  CARD_COMMAND[6] = 0;
  CARD_COMMAND[7] = 0;
  iVar1 = 10000;
  CARD_CR2 = 0xa0406000;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}


// 0x0207383c  _NJSD_sendCMDR

/* WARNING: Removing unreachable block (ram,0x020738e6) */
/* WARNING: Removing unreachable block (ram,0x0207394c) */
/* WARNING: Removing unreachable block (ram,0x02073906) */
/* WARNING: Removing unreachable block (ram,0x0207390e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_NJSD_sendCMDR(int param_1,undefined1 *param_2,uint param_3,byte param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined1 uVar2;
  
  CARD_CR1H = 0x80;
  uVar6 = param_3 & 3;
  if (uVar6 < 2) {
    CARD_COMMAND[0] = (byte)(param_3 << 1) | (byte)(param_1 << 2) | 0xf1;
  }
  else {
    if (uVar6 == 2) {
      cVar5 = '\x1e';
    }
    else {
      cVar5 = '\x0e';
    }
    CARD_COMMAND[0] = (byte)(param_1 << 2) | -cVar5;
  }
  CARD_COMMAND[1] = (byte)param_3 & 0x40 | (byte)(((param_3 & 0x1f) >> 2) << 3);
  CARD_COMMAND[2] = param_4 | 0x40;
  CARD_COMMAND[3] = (undefined1)((uint)param_5 >> 0x18);
  CARD_COMMAND[4] = (undefined1)((uint)param_5 >> 0x10);
  CARD_COMMAND[5] = (undefined1)((uint)param_5 >> 8);
  CARD_COMMAND[6] = (undefined1)param_5;
  CARD_COMMAND[7] = 0;
  if (uVar6 < 2) {
    CARD_CR2 = DAT_020b4c74 | 0x1000000;
    REG_IF = 0x100000;
    iVar4 = 0;
    do {
      uVar3 = CARD_DATA_RD;
      if ((int)(CARD_CR2 << 8) < 0) {
        if (param_2 != (undefined1 *)0x0) {
          uVar1 = (undefined1)CARD_DATA_RD;
          uVar2 = (undefined1)((uint)CARD_DATA_RD >> 8);
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
    } while ((int)CARD_CR2 < 0);
  }
  else {
    CARD_CR2 = DAT_020b4c74;
    do {
    } while ((int)DAT_020b4c74 < 0);
    REG_IF = 0x100000;
  }
  return 1;
}


// 0x020739cc  _NJSD_sendCLK

/* WARNING: Removing unreachable block (ram,0x02073a3e) */
/* WARNING: Removing unreachable block (ram,0x02073a5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _NJSD_sendCLK(byte param_1,char param_2)

{
  int iVar1;
  
  CARD_COMMAND[2] = param_2 + -1;
  CARD_COMMAND[0] = (param_1 & 3) << 2 | 0xe0;
  CARD_COMMAND[1] = 0;
  CARD_COMMAND[3] = 0;
  CARD_COMMAND[4] = 0;
  CARD_COMMAND[5] = 0;
  CARD_COMMAND[6] = 0;
  CARD_COMMAND[7] = 0;
  iVar1 = 100000;
  CARD_CR2 = DAT_020b4c74;
  do {
    if (-1 < DAT_020b4c74) {
      if (iVar1 < 1) {
        CARD_CR2 = DAT_020b4c74;
        CARD_COMMAND[1] = 0;
        CARD_COMMAND[3] = 0;
        CARD_COMMAND[4] = 0;
        CARD_COMMAND[5] = 0;
        CARD_COMMAND[6] = 0;
        CARD_COMMAND[7] = 0;
        REG_IF = 0x100000;
        return 0;
      }
      CARD_CR2 = DAT_020b4c74;
      CARD_COMMAND[1] = 0;
      CARD_COMMAND[3] = 0;
      CARD_COMMAND[4] = 0;
      CARD_COMMAND[5] = 0;
      CARD_COMMAND[6] = 0;
      CARD_COMMAND[7] = 0;
      REG_IF = 0x100000;
      return 1;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  REG_IF = 0x100000;
  return 0;
}


// 0x02073a84  _NJSD_sendCMDN

/* WARNING: Removing unreachable block (ram,0x02073b16) */
/* WARNING: Removing unreachable block (ram,0x02073b32) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _NJSD_sendCMDN(byte param_1,byte param_2,undefined4 param_3)

{
  int iVar1;
  
  CARD_CR1H = 0x80;
  CARD_COMMAND[0] = (param_1 & 3) << 2 | 0xf0;
  CARD_COMMAND[1] = 0;
  CARD_COMMAND[2] = param_2 | 0x40;
  CARD_COMMAND[3] = (undefined1)((uint)param_3 >> 0x18);
  CARD_COMMAND[4] = (undefined1)((uint)param_3 >> 0x10);
  CARD_COMMAND[5] = (undefined1)((uint)param_3 >> 8);
  CARD_COMMAND[6] = (undefined1)param_3;
  CARD_COMMAND[7] = 0;
  iVar1 = 100000;
  CARD_CR2 = DAT_020b4c74;
  do {
    if (-1 < DAT_020b4c74) {
      if (iVar1 < 1) {
        CARD_CR1H = 0x80;
        CARD_CR2 = DAT_020b4c74;
        CARD_COMMAND[1] = 0;
        CARD_COMMAND[7] = 0;
        REG_IF = 0x100000;
        return 0;
      }
      CARD_CR1H = 0x80;
      CARD_CR2 = DAT_020b4c74;
      CARD_COMMAND[1] = 0;
      CARD_COMMAND[7] = 0;
      REG_IF = 0x100000;
      return 1;
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  REG_IF = 0x100000;
  return 0;
}


// 0x02073b64  _NJSD_cmd_6byte_response

void _NJSD_cmd_6byte_response(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _NJSD_sendCMDR(0,param_1,0,param_2,param_3);
  return;
}


// 0x02073b7c  _NJSD_cmd_17byte_response

void _NJSD_cmd_17byte_response(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _NJSD_sendCMDR(0,param_1,1,param_2,param_3);
  return;
}


// 0x02073b94  _NJSD_isInserted

bool _NJSD_isInserted(void)

{
  char local_10 [8];
  
  _NJSD_sendCMDR(0,local_10,0,0xd,0);
  return local_10[0] == '\r';
}


// 0x02073bc0  _NJSD_clearStatus

void _NJSD_clearStatus(void)

{
  _NJSD_reset();
  return;
}


// 0x02073bcc  _NJSD_shutdown

void _NJSD_shutdown(void)

{
  _NJSD_clearStatus();
  return;
}


// 0x02073bd8  _NJSD_writeSectors

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

undefined4 _NJSD_writeSectors(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_36 [18];
  
  if (param_2 == 0) {
    uVar1 = 1;
  }
  else {
    _SD_CRC16(param_3,0x200,local_36);
    iVar2 = 100000;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    CARD_COMMAND[7] = 0;
    CARD_COMMAND[6] = 0;
    CARD_COMMAND[5] = 0;
    CARD_COMMAND[4] = 0;
    CARD_COMMAND[3] = 0;
    CARD_COMMAND[2] = 0;
    CARD_COMMAND[1] = 0;
    CARD_COMMAND[0] = 0x80;
    CARD_CR2 = 0xa0406000;
    CARD_CR1H = 0x80;
    uVar1 = 0;
  }
  return uVar1;
}


// 0x02073e68  _NJSD_startup

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool _NJSD_startup(void)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  DAT_020b4c74 = 0xa0406000;
  REG_IF = 0x100000;
  irqDisable();
  iVar2 = _NJSD_reset();
  if (((iVar2 == 0) || (iVar2 = _NJSD_sendCLK(0,0x100), iVar2 == 0)) ||
     (iVar2 = _NJSD_sendCMDN(0,0,0), iVar2 == 0)) {
    bVar3 = false;
  }
  else {
    _NJSD_sendCLK(0,8);
    _NJSD_sendCLK(0,0x100);
    _NJSD_sendCMDN(0,0,0);
    _NJSD_sendCLK(0,8);
    cVar1 = _SD_InitCard(0x2073b65,0x2073b7d,1,&DAT_020b4c70);
    bVar3 = cVar1 != '\0';
  }
  return bVar3;
}


// 0x02073f04  _NJSD_readSectors

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _NJSD_readSectors(int param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_228 [516];
  
  uVar1 = REG_IME;
  if (param_2 != 0) {
    REG_IME = 0;
    if (param_2 < 2) {
      _NJSD_sendCMDR(2,0,3,0x11,param_1 << 9);
      if ((param_3 & 3) == 0) {
        cardPolledTransfer(0xa1406000,param_3,0x200,&DAT_0208edb4);
      }
      else {
        cardPolledTransfer(0xa1406000,auStack_228,0x200,&DAT_0208edb4);
        memcpy(param_3,auStack_228,0x200);
      }
      REG_IME = uVar1;
      return 1;
    }
    _NJSD_sendCMDR(2,0,2,0x12,param_1 << 9);
    if (param_2 != 2) {
      iVar3 = 0;
      uVar4 = param_3;
      do {
        if ((param_3 & 3) == 0) {
          cardPolledTransfer(0xa1406000,uVar4,0x200,&DAT_0208edb4);
        }
        else {
          cardPolledTransfer(0xa1406000,auStack_228,0x200,&DAT_0208edb4);
          memcpy(uVar4,auStack_228,0x200);
        }
        iVar2 = 1000000;
        while ((REG_IF & 0x100000) == 0) {
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            REG_IME = uVar1;
            REG_IF = 0x100000;
            return 0;
          }
        }
        REG_IF = 0x100000;
        if (iVar2 < 1) {
          REG_IME = uVar1;
          REG_IF = 0x100000;
          return 0;
        }
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 + 0x200;
      } while (param_2 - 2 != iVar3);
    }
    if ((param_3 & 3) == 0) {
      cardPolledTransfer(0xa1406000,param_3 + param_2 * 0x200 + -0x400,0x200,&DAT_0208edbc);
    }
    else {
      cardPolledTransfer(0xa1406000,auStack_228,0x200,&DAT_0208edbc);
      memcpy(param_3 + param_2 * 0x200 + -0x400,auStack_228,0x200);
    }
    iVar3 = 1000000;
    do {
      if ((REG_IF & 0x100000) != 0) {
        REG_IF = 0x100000;
        if (0 < iVar3) {
          if ((param_3 & 3) != 0) {
            cardPolledTransfer(0xa1406000,auStack_228,0x200,&DAT_0208edb4);
            memcpy(param_3 + param_2 * 0x200 + -0x200,auStack_228,0x200);
            REG_IME = uVar1;
            return 1;
          }
          cardPolledTransfer(0xa1406000,param_3 + param_2 * 0x200 + -0x200,0x200,&DAT_0208edb4);
          REG_IME = uVar1;
          return 1;
        }
        break;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    REG_IF = 0x100000;
  }
  REG_IME = uVar1;
  return 0;
}

