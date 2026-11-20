/* ARM7 psg — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x037f8504  apply_psg_latch_and_data_bytes

void FUN_037f8504(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = 0;
  do {
    bVar1 = *(byte *)(iVar3 + param_1);
    uVar2 = (uint)bVar1;
    if ((bVar1 & 0x80) == 0) {
      if (((DAT_03806dcc & 1) == 0) && ((int)DAT_03806dcc < 5)) {
        (&DAT_03806dd8)[DAT_03806dcc] = (&DAT_03806dd8)[DAT_03806dcc] & 0xf | (uVar2 & 0x3f) << 4;
      }
      else {
        (&DAT_03806dd8)[DAT_03806dcc] = uVar2 & 0xf;
      }
    }
    else {
      DAT_03806dcc = bVar1 >> 4 & 7;
      (&DAT_03806dd8)[DAT_03806dcc] = (&DAT_03806dd8)[DAT_03806dcc] & 0x3f0 | uVar2 & 0xf;
    }
    switch(DAT_03806dcc) {
    case 0:
    case 2:
    case 4:
      if ((&DAT_03806dd8)[DAT_03806dcc] == 0) {
        (&DAT_03806dd8)[DAT_03806dcc] = 1;
      }
    default:
      iVar3 = iVar3 + 1;
      if (param_2 == iVar3) {
        return;
      }
      break;
    case 6:
      DAT_03806dd4 = 0x10 << (DAT_03806df0 & 3);
      iVar3 = iVar3 + 1;
      DAT_03806dd0 = 0x8000;
      if (param_2 == iVar3) {
        DAT_03806dd0 = 0x8000;
        return;
      }
    }
  } while( true );
}


// 0x037f86f4  render_psg_samples

void FUN_037f86f4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar4 = DAT_03806dd4;
  iVar3 = DAT_03806dbc;
  if (0 < param_2) {
    iVar6 = 0;
    do {
      DAT_03806dc4 = (int)(DAT_03806dc0 + iVar3) >> 0xc;
      DAT_03806dc0 = DAT_03806dc0 + iVar3 & 0xfff;
      if (DAT_03806dd8 < 7) {
        DAT_03806e18 = *(int *)(&DAT_03806d4c + DAT_03806ddc * 4);
        if (6 < DAT_03806de0) goto LAB_037f8750;
LAB_037f8838:
        DAT_03806e1c = *(int *)(&DAT_03806d4c + DAT_03806de4 * 4);
        if (6 < DAT_03806de8) goto LAB_037f8778;
LAB_037f8854:
        DAT_03806e20 = *(int *)(&DAT_03806d4c + DAT_03806dec * 4);
      }
      else {
        DAT_03806df8 = DAT_03806df8 - DAT_03806dc4;
        if (DAT_03806df8 < 1) {
          DAT_03806e18 = DAT_03806e08 * *(int *)(&DAT_03806d4c + DAT_03806ddc * 4);
          DAT_03806e08 = -DAT_03806e08;
          do {
            DAT_03806df8 = DAT_03806df8 + DAT_03806dd8;
          } while (DAT_03806df8 < 1);
        }
        if (DAT_03806de0 < 7) goto LAB_037f8838;
LAB_037f8750:
        DAT_03806dfc = DAT_03806dfc - DAT_03806dc4;
        if (DAT_03806dfc < 1) {
          DAT_03806e1c = DAT_03806e0c * *(int *)(&DAT_03806d4c + DAT_03806de4 * 4);
          DAT_03806e0c = -DAT_03806e0c;
          do {
            DAT_03806dfc = DAT_03806dfc + DAT_03806de0;
          } while (DAT_03806dfc < 1);
        }
        if (DAT_03806de8 < 7) goto LAB_037f8854;
LAB_037f8778:
        DAT_03806e00 = DAT_03806e00 - DAT_03806dc4;
        if (DAT_03806e00 < 1) {
          DAT_03806e20 = DAT_03806e10 * *(int *)(&DAT_03806d4c + DAT_03806dec * 4);
          iVar1 = -DAT_03806e10;
          if (DAT_03806dd4 == 0x80) {
            DAT_03806e14 = DAT_03806e10 * -2;
          }
          do {
            DAT_03806e00 = DAT_03806e00 + DAT_03806de8;
            DAT_03806e10 = iVar1;
          } while (DAT_03806e00 < 1);
        }
      }
      if ((iVar4 == 0x80) || (DAT_03806e04 = DAT_03806e04 - DAT_03806dc4, 0 < DAT_03806e04)) {
LAB_037f87b4:
        if (DAT_03806e14 == 2) goto LAB_037f8888;
      }
      else {
        bVar7 = DAT_03806e14 != -1;
        DAT_03806e04 = DAT_03806e04 + iVar4;
        DAT_03806e14 = -DAT_03806e14;
        if (bVar7) goto LAB_037f87b4;
LAB_037f8888:
        uVar5 = DAT_03806dd0;
        if ((DAT_03806df0 & 4) != 0) {
          uVar5 = DAT_03806dd0 ^ (int)DAT_03806dd0 >> 3;
        }
        DAT_03806e14 = 1;
        uVar2 = (int)DAT_03806dd0 >> 1;
        DAT_03806dd0 = (uVar5 & 1) << 0xf | uVar2;
        DAT_03806e24 = 0;
        if ((uVar2 & 1) != 0) {
          DAT_03806e24 = *(int *)(&DAT_03806d4c + DAT_03806df4 * 4) << 1;
        }
      }
      iVar1 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      *(short *)(iVar1 + param_1) =
           (short)((DAT_03806e18 + DAT_03806e1c + DAT_03806e20 + DAT_03806e24) * 0x10000 >> 0x11);
    } while (param_2 != iVar6);
  }
  return;
}


// 0x037f89bc  reset_psg_channel_state

void FUN_037f89bc(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_03806dbc;
  puVar2 = puVar1;
  do {
    puVar1[7] = 1;
    puVar1[8] = 0xf;
    puVar1 = puVar1 + 2;
    puVar2[0xf] = 0;
    puVar2[0x13] = 1;
    puVar2[0x1b] = 0x20;
    puVar2[0x17] = 0;
    puVar2 = puVar2 + 1;
  } while (puVar1 != &DAT_03806ddc);
  DAT_03806dd4 = 0x10;
  DAT_03806dc0 = 0;
  DAT_03806dd0 = 0x8000;
  DAT_03806dcc = 0;
  return;
}


// 0x037f8a30  initialize_psg_clock_and_state

void FUN_037f8a30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_03806dbc = FUN_038019ec(param_1 << 8,param_3);
  FUN_037f89bc(param_1,param_2,param_3);
  DAT_03806db8 = param_4;
  return;
}

