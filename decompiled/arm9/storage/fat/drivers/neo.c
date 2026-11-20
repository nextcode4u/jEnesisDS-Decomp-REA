/* ARM9 neo — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020740f8  fat_neo_sendmmccommand

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fat_neo_sendmmccommand(void)

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

undefined4 fat_neo_checkmmcresponse(uint param_1,uint param_2)

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

void fat_neo_selectmmc(undefined1 param_1)

{
  DAT_0208f389 = param_1;
  load_slot1_card_command_registers();
  do {
  } while( true );
}


// 0x02074214  fat_neo_enablemmc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fat_neo_enablemmc(int param_1)

{
  if (param_1 == 0) {
    _DAT_040001a0 = 0;
    fat_neo_selectmmc();
    fat_neo_selectmmc(0);
  }
  else {
    fat_neo_selectmmc(1);
    fat_neo_selectmmc(1);
    _DAT_040001a0 = (byte)DAT_0208f384 | 0xa040;
  }
  return;
}


// 0x02074258  fat_nmmc_clearstatus

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fat_nmmc_clearstatus(void)

{
  int iVar1;
  int iVar2;
  
  fat_neo_enablemmc(1);
  iVar1 = 0;
  do {
    DAT_040001a2 = 0xff;
    do {
    } while ((_DAT_040001a0 & 0x80) != 0);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 10);
  fat_neo_sendmmccommand(0,0,0x80,0xff);
  iVar1 = fat_neo_checkmmcresponse(1,0xff);
  if (iVar1 != 0) {
    iVar1 = 0;
    do {
      fat_neo_sendmmccommand(1,0);
      iVar2 = fat_neo_checkmmcresponse(0,1);
      if (iVar2 == 1) {
        fat_neo_enablemmc(0);
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x100);
  }
  fat_neo_enablemmc(0);
  return 0;
}


// 0x020742d4  fat_nmmc_shutdown

void fat_nmmc_shutdown(void)

{
  fat_nmmc_clearstatus();
  return;
}


// 0x020742e0  fat_nmmc_isinserted

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fat_nmmc_isinserted(void)

{
  int iVar1;
  undefined4 uVar2;
  
  fat_neo_enablemmc(1);
  fat_neo_sendmmccommand(9,0);
  iVar1 = fat_neo_checkmmcresponse(0,0xff);
  if ((iVar1 == 0) || (iVar1 = fat_neo_checkmmcresponse(0xfe,0xff), iVar1 == 0)) {
    fat_neo_enablemmc();
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

undefined4 fat_nmmc_readsectors(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  fat_neo_enablemmc(1);
  if (param_2 == 0) {
LAB_02074400:
    fat_neo_enablemmc(0);
    uVar3 = 1;
  }
  else {
    param_1 = param_1 << 9;
    while( true ) {
      param_2 = param_2 + -1;
      fat_neo_sendmmccommand(0x11,param_1);
      iVar1 = fat_neo_checkmmcresponse(0,0xff);
      if ((iVar1 == 0) || (iVar1 = fat_neo_checkmmcresponse(0xfe,0xff), iVar1 == 0)) break;
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
    fat_neo_enablemmc();
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

undefined4 fat_nmmc_writesectors(int param_1,int param_2)

{
  int iVar1;
  
  fat_neo_enablemmc(1);
  fat_neo_sendmmccommand(0x19,param_1 * 0x200);
  iVar1 = fat_neo_checkmmcresponse(0,0xff);
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
      fat_neo_enablemmc(0,&DAT_040001a0,0x80,0xff);
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
  fat_neo_enablemmc(0);
  return 0;
}


// 0x020745b4  fat_nmmc_startup

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fat_nmmc_startup(void)

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
  if ((((byte)DAT_0208f384 & 0x80) == 0x31) && (iVar1 = fat_nmmc_clearstatus(), iVar1 != 0)) {
    fat_neo_enablemmc(1);
    fat_neo_sendmmccommand(0x10,0x200);
    iVar1 = fat_neo_checkmmcresponse(0,0xff);
    if (iVar1 != 0) {
      fat_neo_sendmmccommand(9,0);
      iVar1 = fat_neo_checkmmcresponse(0,0xff);
      if ((iVar1 != 0) && (iVar1 = fat_neo_checkmmcresponse(0xfe,0xff), iVar1 != 0)) {
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
        fat_neo_enablemmc(0);
        return 1;
      }
    }
    fat_neo_enablemmc(0);
  }
  return 0;
}

