/* ARM9 cf — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020737b8  _MPCF_startup

void _MPCF_startup(void)

{
  _CF_startup(&mpcf_ata_register_map);
  return;
}


// 0x0207478c  _SCCF_startup

void _SCCF_startup(void)

{
  write_supercard_mode_register(3);
  _CF_startup(&sccf_ata_register_map);
  return;
}


// 0x0207e8e4  _CF_isInserted

bool _CF_isInserted(void)

{
  ushort *puVar1;
  
  puVar1 = DAT_020b4c80;
  *DAT_020b4c80 = 0x50;
  return (*puVar1 & 0xff) == 0x50;
}


// 0x0207e904  _CF_clearStatus

bool _CF_clearStatus(void)

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


// 0x0207e96c  _CF_readSectors

undefined4 _CF_readSectors(undefined4 param_1,uint param_2,undefined2 *param_3)

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


// 0x0207ea78  _CF_writeSectors

undefined4 _CF_writeSectors(undefined4 param_1,uint param_2,undefined2 *param_3)

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


// 0x0207eb94  _CF_shutdown

void _CF_shutdown(void)

{
  _CF_clearStatus();
  return;
}


// 0x0207eba0  _CF_startup

bool _CF_startup(undefined4 *param_1)

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

