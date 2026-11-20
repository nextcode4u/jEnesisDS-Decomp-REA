/* ARM9 neo — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020740f8  _Neo_SendMMCCommand

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Neo_SendMMCCommand(void)

{
  do {
  } while ((CARD_CR1 & 0x80) != 0);
  do {
  } while ((CARD_CR1 & 0x80) != 0);
  do {
  } while ((CARD_CR1 & 0x80) != 0);
  do {
  } while ((CARD_CR1 & 0x80) != 0);
  do {
  } while ((CARD_CR1 & 0x80) != 0);
  do {
  } while ((CARD_CR1 & 0x80) != 0);
  do {
  } while ((CARD_CR1 & 0x80) != 0);
  CARD_EEPDATA = 0xff;
  do {
  } while ((CARD_CR1 & 0x80) != 0);
  return;
}


// 0x020741ac  _Neo_CheckMMCResponse

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _Neo_CheckMMCResponse(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    CARD_EEPDATA = 0xff;
    do {
    } while ((CARD_CR1 & 0x80) != 0);
    if ((param_2 & 0xff) == param_1) break;
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x100) {
      return 0;
    }
  }
  CARD_EEPDATA = 0xff;
  return 1;
}


// 0x020741e8  _Neo_SelectMMC

/* WARNING: Removing unreachable block (ram,0x02074202) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Neo_SelectMMC(undefined1 param_1)

{
  DAT_0208f389 = param_1;
  cardWriteCommand();
  do {
  } while( true );
}


// 0x02074214  _Neo_EnableMMC

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Neo_EnableMMC(int param_1)

{
  if (param_1 == 0) {
    CARD_CR1 = 0;
    _Neo_SelectMMC();
    _Neo_SelectMMC(0);
  }
  else {
    _Neo_SelectMMC(1);
    _Neo_SelectMMC(1);
    CARD_CR1 = (byte)DAT_0208f384 | 0xa040;
  }
  return;
}


// 0x02074258  _NMMC_clearStatus

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _NMMC_clearStatus(void)

{
  int iVar1;
  int iVar2;
  
  _Neo_EnableMMC(1);
  iVar1 = 0;
  do {
    CARD_EEPDATA = 0xff;
    do {
    } while ((CARD_CR1 & 0x80) != 0);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  _Neo_SendMMCCommand(0,0,0x80,0xff);
  iVar1 = _Neo_CheckMMCResponse(1,0xff);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      _Neo_SendMMCCommand(1,0);
      iVar2 = _Neo_CheckMMCResponse(0,1);
      if (iVar2 == 1) {
        _Neo_EnableMMC(0);
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x100);
  }
  _Neo_EnableMMC(0);
  return 0;
}


// 0x020742d4  _NMMC_shutdown

void _NMMC_shutdown(void)

{
  _NMMC_clearStatus();
  return;
}


// 0x020742e0  _NMMC_isInserted

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _NMMC_isInserted(void)

{
  int iVar1;
  undefined4 uVar2;
  
  _Neo_EnableMMC(1);
  _Neo_SendMMCCommand(9,0);
  iVar1 = _Neo_CheckMMCResponse(0,0xff);
  if ((iVar1 == 0) || (iVar1 = _Neo_CheckMMCResponse(0xfe,0xff), iVar1 == 0)) {
    _Neo_EnableMMC();
    uVar2 = 0;
  }
  else {
    iVar1 = 0;
    do {
      CARD_EEPDATA = 0xff;
      do {
      } while ((CARD_CR1 & 0x80) != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x1c);
    uVar2 = 1;
  }
  return uVar2;
}


// 0x0207433c  _NMMC_readSectors

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _NMMC_readSectors(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  _Neo_EnableMMC(1);
  if (param_2 == 0) {
LAB_02074400:
    _Neo_EnableMMC(0);
    uVar3 = 1;
  }
  else {
    param_1 = param_1 << 9;
    while( true ) {
      param_2 = param_2 + -1;
      _Neo_SendMMCCommand(0x11,param_1);
      iVar1 = _Neo_CheckMMCResponse(0,0xff);
      if ((iVar1 == 0) || (iVar1 = _Neo_CheckMMCResponse(0xfe,0xff), iVar1 == 0)) break;
      iVar1 = 0;
      puVar2 = param_3;
      do {
        do {
        } while ((CARD_CR1 & 0x80) != 0);
        iVar1 = iVar1 + 1;
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      } while (iVar1 != 0x200);
      param_3 = param_3 + 0x200;
      do {
      } while ((CARD_CR1 & 0x80) != 0);
      CARD_EEPDATA = 0xff;
      do {
      } while ((CARD_CR1 & 0x80) != 0);
      if (param_2 == 0) goto LAB_02074400;
      param_1 = param_1 + 0x200;
    }
    _Neo_EnableMMC();
    uVar3 = 0;
  }
  return uVar3;
}


// 0x02074414  _NMMC_writeSectors

/* WARNING: Removing unreachable block (ram,0x020744ca) */
/* WARNING: Removing unreachable block (ram,0x020744d6) */
/* WARNING: Removing unreachable block (ram,0x020744dc) */
/* WARNING: Removing unreachable block (ram,0x020744e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _NMMC_writeSectors(int param_1,int param_2)

{
  int iVar1;
  
  _Neo_EnableMMC(1);
  _Neo_SendMMCCommand(0x19,param_1 * 0x200);
  iVar1 = _Neo_CheckMMCResponse(0,0xff);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      do {
      } while ((CARD_CR1 & 0x80) != 0);
      iVar1 = 0;
      do {
        do {
        } while ((CARD_CR1 & 0x80) != 0);
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x200);
      do {
      } while ((CARD_CR1 & 0x80) != 0);
      do {
      } while ((CARD_CR1 & 0x80) != 0);
      do {
      } while ((CARD_CR1 & 0x80) != 0);
      do {
      } while ((CARD_CR1 & 0x80) != 0);
      iVar1 = 0;
      do {
        CARD_EEPDATA = 0xff;
        do {
        } while ((CARD_CR1 & 0x80) != 0);
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x10);
      _Neo_EnableMMC(0,&card_control_port,0x80,0xff);
      return 1;
    }
    do {
    } while ((CARD_CR1 & 0x80) != 0);
    iVar1 = 0;
    do {
      do {
      } while ((CARD_CR1 & 0x80) != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x200);
    do {
    } while ((CARD_CR1 & 0x80) != 0);
    do {
    } while ((CARD_CR1 & 0x80) != 0);
    CARD_EEPDATA = 0xff;
    do {
    } while ((CARD_CR1 & 0x80) != 0);
  }
  _Neo_EnableMMC(0);
  return 0;
}


// 0x020745b4  _NMMC_startUp

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _NMMC_startUp(void)

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
  CARD_EEPDATA = 0xe;
  do {
    CARD_CR1 = (byte)DAT_0208f384 & 0x80;
  } while ((DAT_0208f384 & 0x80) != 0);
  if ((((byte)DAT_0208f384 & 0x80) == 0x31) && (iVar1 = _NMMC_clearStatus(), iVar1 != 0)) {
    _Neo_EnableMMC(1);
    _Neo_SendMMCCommand(0x10,0x200);
    iVar1 = _Neo_CheckMMCResponse(0,0xff);
    if (iVar1 != 0) {
      _Neo_SendMMCCommand(9,0);
      iVar1 = _Neo_CheckMMCResponse(0,0xff);
      if ((iVar1 != 0) && (iVar1 = _Neo_CheckMMCResponse(0xfe,0xff), iVar1 != 0)) {
        iVar1 = 0;
        do {
          do {
          } while ((CARD_CR1 & 0x80) != 0);
          iVar1 = iVar1 + 1;
        } while (iVar1 != 3);
        do {
        } while ((CARD_CR1 & 0x80) != 0);
        iVar1 = 0;
        do {
          CARD_EEPDATA = 0xff;
          do {
            DAT_0208f384 = CARD_CR1 & 0x80;
          } while ((CARD_CR1 & 0x80) != 0);
          iVar1 = iVar1 + 1;
        } while (iVar1 != 0x18);
        _Neo_EnableMMC(0);
        return 1;
      }
    }
    _Neo_EnableMMC(0);
  }
  return 0;
}

