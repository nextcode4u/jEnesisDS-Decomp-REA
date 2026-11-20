/* ARM7 peripherals — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x037f80fc  rtcReset_arm_veneer

undefined4 rtcReset(void)

{
  undefined4 in_lr;
  undefined1 uStack_13;
  byte bStack_12;
  byte abStack_11 [5];
  
  uStack_13 = 0x61;
  rtcTransaction(&uStack_13,1,abStack_11,1);
  if ((abStack_11[0] & 0xc0) != 0) {
    uStack_13 = 0x60;
    bStack_12 = abStack_11[0] | 1;
    rtcTransaction(&uStack_13,2,0,0);
  }
  return in_lr;
}


// 0x037f8138  touchReadXY_arm_veneer

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 touchReadXY(short *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 in_lr;
  
  if (DAT_0380bb0c == '\0') {
    uVar12 = (uint)DAT_027ffce2;
    uVar13 = (uint)DAT_027ffcdc;
    uVar1 = CONCAT11(DAT_027ffcdf,DAT_027ffcde);
    uVar2 = CONCAT11(DAT_027ffcd9,DAT_027ffcd8);
    iVar11 = __divsi3((uVar12 - uVar13) * 0x80000,(uint)uVar1 - (uint)uVar2);
    uVar14 = (uint)DAT_027ffce3;
    uVar15 = (uint)DAT_027ffcdd;
    uVar3 = CONCAT11(DAT_027ffce1,DAT_027ffce0);
    uVar4 = CONCAT11(DAT_027ffcdb,DAT_027ffcda);
    DAT_0380bb10 = iVar11;
    DAT_0380bb14 = __divsi3((uVar14 - uVar15) * 0x80000,(uint)uVar3 - (uint)uVar4);
    DAT_0380bb18 = (int)(((uint)uVar2 + (uint)uVar1) * iVar11 + (uVar13 + uVar12) * -0x80000) / 2;
    DAT_0380bb1c = (int)(DAT_0380bb14 * ((uint)uVar4 + (uint)uVar3) + (uVar15 + uVar14) * -0x80000)
                   / 2;
    DAT_0380bb0c = '\x01';
  }
  sVar5 = readTouchValue(0xd0,5,0x1e);
  sVar6 = readTouchValue(0x90,5,0x1e);
  iVar16 = (sVar5 * DAT_0380bb10 - DAT_0380bb18) + DAT_0380bb10 / 2;
  iVar11 = (sVar6 * DAT_0380bb14 - DAT_0380bb1c) + DAT_0380bb14 / 2;
  sVar9 = (short)(iVar11 >> 0x13);
  sVar7 = readTouchValue(0xb4,5,0x1e);
  sVar10 = (short)(iVar16 >> 0x13);
  sVar8 = readTouchValue(0xc4,5,0x1e);
  if ((iVar16 >> 0x13) * 0x10000 < 0) {
    sVar10 = 0;
  }
  if ((iVar11 >> 0x13) * 0x10000 < 0) {
    sVar9 = 0;
  }
  if (0xbf < sVar9) {
    sVar9 = 0xbf;
  }
  param_1[3] = sVar9;
  if (0xff < sVar10) {
    sVar10 = 0xff;
  }
  param_1[2] = sVar10;
  param_1[5] = sVar8;
  param_1[4] = sVar7;
  param_1[1] = sVar6;
  *param_1 = sVar5;
  return CONCAT44(in_lr,param_1);
}


// 0x03801060  BCDToInteger

undefined4 BCDToInteger(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      *(byte *)(iVar1 + param_1) =
           (*(byte *)(iVar1 + param_1) & 0xf) + (*(byte *)(iVar1 + param_1) >> 4) * '\n';
      iVar1 = iVar1 + 1;
    } while (param_2 != iVar1);
  }
  return in_lr;
}


// 0x0380108c  integerToBCD

undefined4 integerToBCD(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  int local_20;
  undefined1 local_1c [4];
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      swiDivMod(*(undefined1 *)(iVar1 + param_1),10,&local_20,local_1c);
      *(byte *)(iVar1 + param_1) = (byte)(local_20 << 4) | local_1c[0];
      iVar1 = iVar1 + 1;
    } while (param_2 != iVar1);
  }
  return in_lr;
}


// 0x038010c8  rtcTransaction

undefined4 rtcTransaction(byte *param_1,int param_2,undefined1 *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  RTC_CR8 = 0x73;
  swiDelay(0x30);
  RTC_CR8 = 0x77;
  swiDelay(0x30);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar2 = (uint)*param_1;
    param_1 = param_1 + 1;
    iVar3 = 0;
    do {
      bVar1 = (byte)(uVar2 >> 7);
      RTC_CR8 = bVar1 | 0x74;
      swiDelay(0x30);
      RTC_CR8 = bVar1 | 0x76;
      swiDelay(0x30);
      iVar3 = iVar3 + 1;
      uVar2 = (uVar2 & 0x7f) << 1;
    } while (iVar3 != 8);
  }
  if (param_4 != 0) {
    while( true ) {
      uVar2 = 0;
      uVar4 = 0;
      do {
        RTC_CR8 = 100;
        swiDelay(0x30);
        RTC_CR8 = 0x66;
        swiDelay(0x30);
        if ((RTC_CR8 & 1) != 0) {
          uVar4 = 1 << (uVar2 & 0xff) & 0xffU | uVar4;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != 8);
      *param_3 = (char)uVar4;
      param_4 = param_4 + -1;
      if (param_4 == 0) break;
      param_3 = param_3 + 1;
    }
  }
  RTC_CR8 = 0x62;
  swiDelay(0x30);
  return in_lr;
}


// 0x03801200  rtcReset

undefined4 rtcReset(void)

{
  undefined4 in_lr;
  undefined1 local_13;
  byte local_12;
  byte local_11 [5];
  
  local_13 = 0x61;
  rtcTransaction(&local_13,1,local_11,1);
  if ((local_11[0] & 0xc0) != 0) {
    local_13 = 0x60;
    local_12 = local_11[0] | 1;
    rtcTransaction(&local_13,2,0,0);
  }
  return in_lr;
}


// 0x03801244  touchRead

/* WARNING: Removing unreachable block (ram,0x03801284) */
/* WARNING: Removing unreachable block (ram,0x03801288) */
/* WARNING: Removing unreachable block (ram,0x038012c8) */
/* WARNING: Removing unreachable block (ram,0x038012cc) */
/* WARNING: Removing unreachable block (ram,0x038012a2) */
/* WARNING: Removing unreachable block (ram,0x038012a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong touchRead(void)

{
  undefined2 uVar1;
  uint in_lr;
  
  uVar1 = REG_IME;
  REG_IME = 0;
  if ((int)((uint)REG_SPICNT << 0x18) < 0) {
    do {
      swiDelay(1);
    } while ((REG_SPICNT & 0x80) != 0);
  }
  REG_SPIDATA = 0;
  REG_SPICNT = 0x8201;
  REG_IME = uVar1;
  return (ulonglong)in_lr << 0x20;
}


// 0x03801310  readTouchValue

undefined8 readTouchValue(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = touchRead(param_1 | 1);
  if (param_2 < 1) {
    iVar2 = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar2 = touchRead(param_1 | 1);
      iVar3 = iVar1 - iVar2;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
    } while ((param_3 < iVar3) && (iVar4 = iVar4 + 1, param_2 != iVar4));
  }
  if (iVar4 == param_3) {
    iVar2 = 0;
  }
  return CONCAT44(in_lr,iVar2);
}


// 0x03801360  touchReadXY

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 touchReadXY(short *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 in_lr;
  
  if (DAT_0380bb0c == '\0') {
    uVar12 = (uint)DAT_027ffce2;
    uVar13 = (uint)DAT_027ffcdc;
    uVar1 = CONCAT11(DAT_027ffcdf,DAT_027ffcde);
    uVar2 = CONCAT11(DAT_027ffcd9,DAT_027ffcd8);
    iVar11 = __divsi3((uVar12 - uVar13) * 0x80000,(uint)uVar1 - (uint)uVar2);
    uVar14 = (uint)DAT_027ffce3;
    uVar15 = (uint)DAT_027ffcdd;
    uVar3 = CONCAT11(DAT_027ffce1,DAT_027ffce0);
    uVar4 = CONCAT11(DAT_027ffcdb,DAT_027ffcda);
    DAT_0380bb10 = iVar11;
    DAT_0380bb14 = __divsi3((uVar14 - uVar15) * 0x80000,(uint)uVar3 - (uint)uVar4);
    DAT_0380bb18 = (int)(((uint)uVar2 + (uint)uVar1) * iVar11 + (uVar13 + uVar12) * -0x80000) / 2;
    DAT_0380bb1c = (int)(DAT_0380bb14 * ((uint)uVar4 + (uint)uVar3) + (uVar15 + uVar14) * -0x80000)
                   / 2;
    DAT_0380bb0c = '\x01';
  }
  sVar5 = readTouchValue(0xd0,5,0x1e);
  sVar6 = readTouchValue(0x90,5,0x1e);
  iVar16 = (sVar5 * DAT_0380bb10 - DAT_0380bb18) + DAT_0380bb10 / 2;
  iVar11 = (sVar6 * DAT_0380bb14 - DAT_0380bb1c) + DAT_0380bb14 / 2;
  sVar9 = (short)(iVar11 >> 0x13);
  sVar7 = readTouchValue(0xb4,5,0x1e);
  sVar10 = (short)(iVar16 >> 0x13);
  sVar8 = readTouchValue(0xc4,5,0x1e);
  if ((iVar16 >> 0x13) * 0x10000 < 0) {
    sVar10 = 0;
  }
  if ((iVar11 >> 0x13) * 0x10000 < 0) {
    sVar9 = 0;
  }
  if (0xbf < sVar9) {
    sVar9 = 0xbf;
  }
  param_1[3] = sVar9;
  if (0xff < sVar10) {
    sVar10 = 0xff;
  }
  param_1[2] = sVar10;
  param_1[5] = sVar8;
  param_1[4] = sVar7;
  param_1[1] = sVar6;
  *param_1 = sVar5;
  return CONCAT44(in_lr,param_1);
}


// 0x0380152c  touchReadTemperature

undefined8 touchReadTemperature(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = touchRead(0x84);
  *param_1 = iVar1;
  iVar1 = touchRead(0xf4);
  *param_2 = iVar1;
  return CONCAT44(in_lr,(iVar1 - *param_1) * 0x212a + -0x111000);
}

