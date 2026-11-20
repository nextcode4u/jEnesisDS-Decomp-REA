/* ARM7 registers and setup — grouped REA pseudocode.
 * Register writes, chip reset, and table and channel initialization.
 */

// 0x037f8e1c  write_ym2612_channel_or_operator_register

undefined4 FUN_037f8e1c(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar8 = param_1 & 3;
  if (uVar8 == 3) goto switchD_037f90e4_default;
  if (0xff < (int)param_1) {
    uVar8 = uVar8 + 3;
  }
  uVar11 = (int)param_1 >> 2 & 3;
  uVar4 = param_1 & 0xf0;
  iVar6 = uVar8 * 0xd8;
  puVar9 = &DAT_03807308 + uVar8 * 0x36 + uVar11 * 0xc;
  if (uVar4 == 0x60) {
    param_2 = param_2 & 0x1f;
    if (param_2 != 0) {
      iVar6 = param_2 << 1;
    }
    else {
      iVar6 = 0;
    }
    if (param_2 != 0) {
      iVar6 = iVar6 + 0x20;
    }
    iVar3 = iVar6 + (uint)*(byte *)((int)puVar9 + 0x15);
    puVar9[9] = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[iVar3] * 4) |
                (uint)(byte)(&DAT_03806b28)[iVar3] << 0x18;
    *(char *)((int)puVar9 + 5) = (char)iVar6;
    return 1;
  }
  if (uVar4 < 0x61) {
    if (uVar4 == 0x40) {
      *(short *)(puVar9 + 6) = (short)((param_2 & 0x7f) << 3);
      return 1;
    }
    if (uVar4 == 0x50) {
      if ((param_2 & 0x1f) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (param_2 & 0x1f) * 2 + 0x20;
      }
      uVar11 = 3 - ((int)param_2 >> 6);
      uVar7 = uVar11 & 0xff;
      bVar12 = *(byte *)(puVar9 + 5) != uVar7;
      *(char *)(puVar9 + 5) = (char)uVar11;
      if (bVar12) {
        uVar7 = 0xffffffff;
      }
      *(char *)(puVar9 + 1) = (char)uVar4;
      if (!bVar12) {
        uVar8 = (uint)*(byte *)(puVar9 + 1) + (uint)*(byte *)((int)puVar9 + 0x15);
        if (uVar8 < 0x5e) {
          uVar4 = (uint)(byte)(&DAT_03806b28)[uVar8];
          uVar11 = (uint)(byte)(&DAT_03806ba8)[uVar8];
        }
        else {
          uVar11 = 0x11;
        }
        if (uVar8 < 0x5e) {
          uVar4 = uVar4 << 0x18;
        }
        else {
          uVar4 = 0;
        }
        puVar9[8] = uVar4 | *(uint *)(&DAT_03806c28 + uVar11 * 4);
        return 1;
      }
      (&DAT_03807318)[uVar8 * 0x36] = uVar7;
      return 1;
    }
    if (uVar4 == 0x30) {
      uVar4 = param_2 & 0xf;
      iVar6 = 0x30;
      if (uVar4 != 0) {
        iVar6 = uVar4 << 1;
      }
      if (uVar4 == 0) {
        iVar6 = 1;
      }
      *puVar9 = &DAT_03806ed4 + (param_2 & 0x70) * 8;
      (&DAT_03807318)[uVar8 * 0x36] = 0xffffffff;
      puVar9[2] = iVar6;
      return 1;
    }
    goto switchD_037f90e4_default;
  }
  if (uVar4 == 0x80) {
    iVar6 = (param_2 & 0xf) * 4 + 0x22;
    iVar3 = iVar6 + (uint)*(byte *)((int)puVar9 + 0x15);
    uVar10 = *(undefined4 *)(&DAT_03806c74 + ((int)param_2 >> 4) * 4);
    puVar9[0xb] = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[iVar3] * 4) |
                  (uint)(byte)(&DAT_03806b28)[iVar3] << 0x18;
    puVar9[7] = uVar10;
    *(char *)((int)puVar9 + 7) = (char)iVar6;
    return 1;
  }
  if (uVar4 < 0x81) {
    if (uVar4 == 0x70) {
      param_2 = param_2 & 0x1f;
      if (param_2 != 0) {
        iVar6 = param_2 << 1;
      }
      else {
        iVar6 = 0;
      }
      if (param_2 != 0) {
        iVar6 = iVar6 + 0x20;
      }
      iVar3 = iVar6 + (uint)*(byte *)((int)puVar9 + 0x15);
      puVar9[10] = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[iVar3] * 4) |
                   (uint)(byte)(&DAT_03806b28)[iVar3] << 0x18;
      *(char *)((int)puVar9 + 6) = (char)iVar6;
      return 1;
    }
    goto switchD_037f90e4_default;
  }
  bVar1 = (byte)param_2;
  if (uVar4 != 0xa0) {
    if (uVar4 == 0xb0) {
      if (uVar11 == 0) {
        uVar8 = (int)param_2 >> 3 & 7;
        cVar5 = (char)uVar8;
        if (uVar8 != 0) {
          cVar5 = cVar5 + '\x06';
        }
        (&DAT_038073c8)[iVar6] = bVar1 & 7;
        (&DAT_038073c9)[iVar6] = cVar5;
        return 1;
      }
      if (uVar11 == 1) {
        iVar6 = (int)(param_2 & 0xc0) >> 6;
        DAT_038072f4 = DAT_038072f4 & ~(3 << uVar8 * 2) | iVar6 << uVar8 * 2;
        if (*(int *)(&DAT_04000400 + uVar8 * 0x10) < 0) {
          uVar4 = *(uint *)(&DAT_03806b18 + iVar6 * 4) | 0xa8000000 |
                  *(int *)(&DAT_03806b08 + iVar6 * 4) << 0x10;
          *(uint *)(&DAT_04000400 + uVar8 * 0x10) = uVar4;
          *(uint *)(&DAT_04000400 + (uVar8 + 6) * 0x10) = uVar4;
          return 1;
        }
        goto LAB_037f90d8;
      }
    }
    goto switchD_037f90e4_default;
  }
  switch(uVar11) {
  case 0:
    param_2 = param_2 + (DAT_03806ebb & 7) * 0x100;
    uVar4 = (&DAT_03807820)[param_2 * 2];
    bVar2 = DAT_03806ebb >> 3;
    bVar1 = (&DAT_03806af8)[param_2 >> 7];
    uVar10 = 1;
    (&DAT_03807318)[uVar8 * 0x36] = 0xffffffff;
    (&DAT_038073d4)[iVar6] = bVar1 | bVar2 << 2;
    (&DAT_038073d8)[uVar8 * 0x36] = uVar4 >> (7 - bVar2 & 0xff);
    break;
  case 1:
    DAT_03806ebb = bVar1 & 0x3f;
    uVar10 = 0;
    break;
  case 2:
    if ((int)param_1 < 0x100) {
      param_2 = param_2 + (DAT_038072e4 & 7) * 0x100;
      uVar4 = (&DAT_03807820)[param_2 * 2];
      bVar1 = DAT_038072e4 >> 3;
      (&DAT_038072e5)[uVar8] = (&DAT_03806af8)[param_2 >> 7] | bVar1 << 2;
      *(uint *)(&DAT_038072e8 + uVar8 * 4) = param_2;
      (&DAT_038072d8)[uVar8] = uVar4 >> (7 - bVar1 & 0xff);
      DAT_038074c8 = 0xffffffff;
      return 1;
    }
LAB_037f90d8:
    uVar10 = 1;
    break;
  case 3:
    if ((int)param_1 < 0x100) {
      DAT_038072e4 = bVar1 & 0x3f;
      return 0;
    }
  default:
switchD_037f90e4_default:
    uVar10 = 0;
  }
  return uVar10;
}


// 0x037f9238  reset_ym2612_registers

void FUN_037f9238(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar4;
  
  puVar7 = &DAT_03807308;
  DAT_038072fc = 0;
  DAT_038072f8 = 0;
  DAT_03807304 = 0;
  DAT_03806eb9 = 0;
  DAT_03806eba = 0;
  DAT_03806ebc = 0;
  DAT_03806ec0 = 0;
  DAT_03806ec8 = 0;
  DAT_03806ecc = 0;
  puVar1 = &DAT_03807768;
  do {
    puVar1[-0xe4] = 0;
    iVar3 = 0;
    puVar5 = puVar7;
    do {
      iVar4 = iVar3;
      iVar3 = iVar4 + 1;
      *(undefined1 *)((int)puVar5 + 0x17) = 0;
      *(undefined2 *)((int)puVar5 + 0x1a) = 0x3ff;
      puVar5 = puVar5 + 0xc;
    } while (iVar3 != 4);
    puVar7 = puVar7 + 0x36;
    puVar1 = puVar1 + 0x36;
  } while (puVar7 != &DAT_03807818);
  FUN_037f8e1c(0xb6,iVar4 + 0xbd);
  FUN_037f8e1c(0x1b6,0xc0);
  FUN_037f8e1c(0xb5,0xc0);
  FUN_037f8e1c(0x1b5,0xc0);
  FUN_037f8e1c(0xb4,0xc0);
  FUN_037f8e1c(0x1b4,0xc0);
  uVar6 = 0xb2;
  do {
    FUN_037f8e1c(uVar6,0);
    uVar2 = uVar6 | 0x100;
    uVar6 = uVar6 - 1;
    FUN_037f8e1c(uVar2,0);
  } while (uVar6 != 0x2f);
  FUN_037f8e1c(0x26,0);
  FUN_037f8e1c(0x25,0);
  FUN_037f8e1c(0x24,0);
  FUN_037f8e1c(0x23,0);
  FUN_037f8e1c(0x22,0);
  FUN_037f8e1c(0x21,0);
  FUN_037f8e1c(0x20,0);
  DAT_03807818 = 0;
  return;
}


// 0x037f9394  apply_ym2612_bank1_writes

void FUN_037f9394(byte *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = param_1;
  if (param_2 != 0) {
    do {
      pbVar2 = pbVar1 + 2;
      FUN_037f8e1c(*pbVar1 | 0x100,pbVar1[1]);
      pbVar1 = pbVar2;
    } while ((uint)((int)pbVar2 - (int)param_1) < param_2);
  }
  return;
}


// 0x037f93e8  initialize_ym2612_tables_and_channels

void FUN_037f93e8(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_2c;
  
  iVar7 = 0;
  piVar9 = &DAT_03806e88;
  DAT_03806ea0 = param_3;
  do {
    piVar10 = piVar9 + 1;
    *piVar9 = iVar7;
    iVar7 = iVar7 + param_3;
    piVar9 = piVar10;
  } while (piVar10 != &DAT_03806ea0);
  FUN_03802648(&DAT_03807308,0,0x978);
  DAT_03806ea8 = param_1;
  DAT_03806eac = param_2;
  if (param_2 == 0) {
    uVar12 = 0;
    DAT_03807300 = 0;
  }
  else {
    uVar12 = FUN_03801eb0(param_1);
    uVar13 = FUN_03801eb0(param_2);
    uVar13 = FUN_03801f8c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0,0x40620000);
    uVar12 = FUN_0380221c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                          (int)((ulonglong)uVar13 >> 0x20));
    FUN_03801f8c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x40f00000);
    DAT_03807300 = FUN_03802484();
  }
  local_2c = 0;
  do {
    iVar7 = 0;
    piVar9 = (int *)(&DAT_038070d4 + local_2c * 0x80);
    piVar10 = (int *)(&DAT_03806ed4 + local_2c * 0x80);
    do {
      DAT_03806eb4 = (undefined4)((ulonglong)uVar12 >> 0x20);
      DAT_03806eb0 = (undefined4)uVar12;
      cVar1 = (&DAT_03806cb4)[iVar7 + local_2c * 0x20];
      uVar12 = FUN_03801eb0((int)cVar1);
      iVar7 = iVar7 + 1;
      if (cVar1 < 0) {
        uVar12 = FUN_03801b7c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),0,0x40700000);
      }
      uVar13 = FUN_03801f8c(0,0x40500000,DAT_03806eb0,DAT_03806eb4);
      FUN_03801f8c((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                   (int)((ulonglong)uVar13 >> 0x20));
      iVar4 = FUN_03802428();
      *piVar10 = iVar4;
      *piVar9 = -iVar4;
      uVar12 = CONCAT44(DAT_03806eb4,DAT_03806eb0);
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar7 != 0x20);
    local_2c = local_2c + 1;
  } while (local_2c != 4);
  uVar12 = FUN_03801f8c(0,0x40a00000,DAT_03806eb0,DAT_03806eb4);
  iVar7 = 0;
  puVar2 = &DAT_03807820;
  do {
    uVar13 = FUN_03801eb0(iVar7);
    FUN_03801f8c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                 (int)((ulonglong)uVar12 >> 0x20));
    uVar5 = FUN_03802484();
    iVar7 = iVar7 + 1;
    *puVar2 = uVar5;
    puVar2 = puVar2 + 1;
  } while (iVar7 != 0x1000);
  puVar11 = &DAT_03807308;
  DAT_038072fc = 0;
  DAT_038072f8 = 0;
  DAT_03807304 = 0;
  DAT_03806eb9 = 0;
  DAT_03806eba = 0;
  DAT_03806ebc = 0;
  DAT_03806ec0 = 0;
  DAT_03806ec8 = 0;
  DAT_03806ecc = 0;
  puVar2 = &DAT_03807768;
  do {
    puVar2[-0xe4] = 0;
    iVar7 = 0;
    puVar6 = puVar11;
    do {
      iVar4 = iVar7;
      iVar7 = iVar4 + 1;
      *(undefined1 *)((int)puVar6 + 0x17) = 0;
      *(undefined2 *)((int)puVar6 + 0x1a) = 0x3ff;
      puVar6 = puVar6 + 0xc;
    } while (iVar7 != 4);
    puVar11 = puVar11 + 0x36;
    puVar2 = puVar2 + 0x36;
  } while (puVar11 != &DAT_03807818);
  FUN_037f8e1c(0xb6,iVar4 + 0xbd);
  FUN_037f8e1c(0x1b6,0xc0);
  FUN_037f8e1c(0xb5,0xc0);
  FUN_037f8e1c(0x1b5,0xc0);
  FUN_037f8e1c(0xb4,0xc0);
  FUN_037f8e1c(0x1b4,0xc0);
  uVar8 = 0xb2;
  do {
    FUN_037f8e1c(uVar8,0);
    uVar3 = uVar8 | 0x100;
    uVar8 = uVar8 - 1;
    FUN_037f8e1c(uVar3,0);
  } while (uVar8 != 0x2f);
  FUN_037f8e1c(0x26,0);
  FUN_037f8e1c(0x25,0);
  FUN_037f8e1c(0x24,0);
  FUN_037f8e1c(0x23,0);
  FUN_037f8e1c(0x22,0);
  FUN_037f8e1c(0x21,0);
  FUN_037f8e1c(0x20,0);
  DAT_03807818 = 0;
  return;
}


// 0x037f9afc  apply_ym2612_bank0_writes

void FUN_037f9afc(byte *param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = param_1;
  if (param_2 != 0) {
    do {
      bVar2 = *pbVar4;
      bVar3 = pbVar4[1];
      uVar5 = (uint)bVar3;
      if ((bVar2 & 0xf0) == 0x20) {
        switch(bVar2) {
        case 0x24:
          uVar5 = DAT_03806ebc & 3 | uVar5 << 2;
          if (DAT_03806ebc != uVar5) {
            DAT_03806ec0 = (0x400 - uVar5) * 0x12;
            DAT_03806ec4 = 0;
            DAT_03806ebc = uVar5;
          }
          break;
        case 0x25:
          uVar5 = DAT_03806ebc & 0x3fc | uVar5 & 3;
          if (DAT_03806ebc != uVar5) {
            DAT_03806ec0 = (0x400 - uVar5) * 0x12;
            DAT_03806ec4 = 0;
            DAT_03806ebc = uVar5;
          }
          break;
        case 0x26:
          if (uVar5 != DAT_03806ec8) {
            DAT_03806ecc = (0x100 - uVar5) * 0x120;
            DAT_03806ed0 = 0;
            DAT_03806ec8 = bVar3;
          }
          break;
        case 0x27:
          if ((bVar3 & 0x20) != 0) {
            DAT_03806eb9 = DAT_03806eb9 & 0xfd;
          }
          DAT_03806eba = bVar3;
          if ((bVar3 & 0x10) != 0) {
            DAT_03806eb9 = DAT_03806eb9 & 0xfe;
          }
          break;
        case 0x28:
          uVar5 = uVar5 & 3;
          if (uVar5 != 3) {
            if ((bVar3 & 4) != 0) {
              uVar5 = uVar5 + 3;
            }
            iVar1 = uVar5 * 0xd8;
            if ((bVar3 & 0x10) == 0) {
              if (((&DAT_0380731e)[iVar1] != '\0') &&
                 ((&DAT_0380731e)[iVar1] = bVar3 & 0x10, 1 < (byte)(&DAT_0380731f)[iVar1])) {
                (&DAT_0380731f)[iVar1] = 1;
              }
            }
            else if ((&DAT_0380731e)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_03807314 + iVar1) = 0;
              (&DAT_0380731e)[iVar1] = 1;
              (&DAT_0380731f)[iVar1] = 4;
            }
            if ((bVar3 & 0x20) == 0) {
              if (((&DAT_0380737e)[iVar1] != '\0') &&
                 ((&DAT_0380737e)[iVar1] = bVar3 & 0x20, 1 < (byte)(&DAT_0380737f)[iVar1])) {
                (&DAT_0380737f)[iVar1] = 1;
              }
            }
            else if ((&DAT_0380737e)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_03807374 + iVar1) = 0;
              (&DAT_0380737f)[iVar1] = 4;
              (&DAT_0380737e)[iVar1] = 1;
            }
            if ((bVar3 & 0x40) == 0) {
              if (((&DAT_0380734e)[iVar1] != '\0') &&
                 ((&DAT_0380734e)[iVar1] = bVar3 & 0x40, 1 < (byte)(&DAT_0380734f)[iVar1])) {
                (&DAT_0380734f)[iVar1] = 1;
              }
            }
            else if ((&DAT_0380734e)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_03807344 + iVar1) = 0;
              (&DAT_0380734f)[iVar1] = 4;
              (&DAT_0380734e)[iVar1] = 1;
            }
            if ((bVar3 & 0x80) == 0) {
              if (((&DAT_038073ae)[iVar1] != '\0') &&
                 ((&DAT_038073ae)[iVar1] = bVar3 & 0x80, 1 < (byte)(&DAT_038073af)[iVar1])) {
                (&DAT_038073af)[iVar1] = 1;
              }
            }
            else if ((&DAT_038073ae)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_038073a4 + iVar1) = 0;
              (&DAT_038073af)[iVar1] = 4;
              (&DAT_038073ae)[iVar1] = 1;
            }
          }
          break;
        case 0x2b:
          DAT_03807818 = uVar5 & 0x80;
        }
      }
      else {
        FUN_037f8e1c(bVar2,uVar5);
      }
      pbVar4 = pbVar4 + 2;
    } while ((uint)((int)pbVar4 - (int)param_1) < param_2);
  }
  return;
}


// 0x037fbf44  reset_fm_register_state

void FUN_037fbf44(void)

{
  FUN_037f9238();
  return;
}

