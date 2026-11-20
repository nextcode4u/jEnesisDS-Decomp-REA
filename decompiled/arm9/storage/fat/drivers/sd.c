/* ARM9 sd — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02074b2c  fat_sd_crc7

uint FUN_02074b2c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    uVar1 = 1;
  }
  else {
    iVar4 = 0;
    uVar1 = 0;
    do {
      uVar2 = (uint)*(byte *)(iVar4 + param_1);
      iVar3 = 0;
      while( true ) {
        uVar1 = (uVar1 & 0x7f) * 2;
        if ((uVar2 & 0x80) != (uVar1 & 0x80)) {
          uVar1 = uVar1 ^ 9;
        }
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) break;
        uVar2 = (uVar2 & 0x7f) << 1;
      }
      iVar4 = iVar4 + 1;
    } while (param_2 != iVar4);
    uVar1 = (uVar1 & 0x7f) << 1 | 1;
  }
  return uVar1;
}


// 0x02074b88  fat_sd_crc16

void FUN_02074b88(byte *param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_2 = param_2 << 3;
  uVar2 = 0;
  uVar1 = 0x80808080;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  uVar6 = 0;
  do {
    if ((int)(uVar1 << 0x18) < 0) {
      uVar6 = (uint)*param_1;
      param_1 = param_1 + 1;
    }
    uVar5 = uVar5 << 1;
    if ((uVar5 & 0x10000) != 0) {
      uVar5 = uVar5 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x18) != 0) {
      uVar5 = uVar5 ^ 0x1021;
    }
    uVar4 = uVar4 << 1;
    if ((uVar4 & 0x10000) != 0) {
      uVar4 = uVar4 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x19) != 0) {
      uVar4 = uVar4 ^ 0x1021;
    }
    uVar3 = uVar3 << 1;
    if ((uVar3 & 0x10000) != 0) {
      uVar3 = uVar3 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x1a) != 0) {
      uVar3 = uVar3 ^ 0x1021;
    }
    uVar2 = uVar2 << 1;
    if ((uVar2 & 0x10000) != 0) {
      uVar2 = uVar2 ^ 0x1021;
    }
    if ((uVar6 & uVar1 >> 0x1b) != 0) {
      uVar2 = uVar2 ^ 0x1021;
    }
    param_2 = param_2 + -4;
    uVar1 = uVar1 >> 4 | uVar1 << 0x1c;
  } while (param_2 != 0);
  uVar6 = 0x10;
  while( true ) {
    uVar1 = uVar1 << 4;
    if ((uVar5 & 0x8000) != 0) {
      uVar1 = uVar1 | 8;
    }
    if ((uVar4 & 0x8000) != 0) {
      uVar1 = uVar1 | 4;
    }
    if ((uVar3 & 0x8000) != 0) {
      uVar1 = uVar1 | 2;
    }
    if ((uVar2 & 0x8000) != 0) {
      uVar1 = uVar1 | 1;
    }
    uVar6 = uVar6 - 1;
    if ((uVar6 & 1) == 0) {
      *param_3 = (char)uVar1;
      param_3 = param_3 + 1;
    }
    if (uVar6 == 0) break;
    uVar5 = uVar5 << 1;
    uVar4 = uVar4 << 1;
    uVar3 = uVar3 << 1;
    uVar2 = uVar2 << 1;
  }
  return;
}


// 0x02074c84  fat_sd_initcard

undefined4 FUN_02074c84(code *param_1,code *param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  
  thunk_FUN_02083058(&local_31,0,0x11);
  iVar2 = 0;
  while( true ) {
    (*param_1)(&local_31,0x37,0);
    if (local_31 != '7') {
      return 0;
    }
    iVar1 = (*param_1)(&local_31,0x29,0x30000);
    if ((iVar1 != 0) && ((char)local_30 < '\0')) break;
    iVar2 = iVar2 + 1;
    if (iVar2 == 1000) {
      return 0;
    }
  }
  (*param_2)(&local_31,2,0);
  iVar2 = 0;
  do {
    (*param_1)(&local_31,3,0);
    uVar3 = (uint)local_30 * 0x1000000 | (uint)local_2f << 0x10;
    *param_4 = uVar3;
    if ((local_2e & 0x1e) != 6) {
      (*param_2)(&local_31,9,uVar3);
      (*param_1)(&local_31,7,*param_4);
      if (param_3 != 0) {
        (*param_1)(&local_31,0x37,*param_4);
        (*param_1)(&local_31,6,2);
      }
      (*param_1)(&local_31,0x10,0x200);
      iVar2 = 0;
      while ((iVar1 = (*param_1)(&local_31,0xd,*param_4), iVar1 == 0 && ((local_2e & 0x1f) != 9))) {
        iVar2 = iVar2 + 1;
        if (iVar2 == 0x100) {
          return 0;
        }
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 1000);
  return 0;
}

