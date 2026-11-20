/* ARM7 dac — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x037f93d8  helper_for_service_dac_buffer

undefined4 FUN_037f93d8(void)

{
  return DAT_03807818;
}


// 0x037fbc10  reset_dac_sample_cursor

void FUN_037fbc10(undefined4 param_1)

{
  DAT_0380b878 = 0;
  DAT_0380b87c = 0;
  DAT_0380b880 = FUN_038018d8(DAT_0380b8a0 << 0x10,param_1);
  DAT_0380b8a0 = 0;
  return;
}


// 0x037fbc68  render_unsigned_dac_to_pcm16

void FUN_037fbc68(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_0380b880;
  if (param_2 != 0) {
    sVar3 = (*(byte *)((int)&DAT_0380b8a4 + DAT_0380b878) - 0x80) * 0x40;
    iVar5 = 0;
    iVar4 = DAT_0380b878;
    do {
      DAT_0380b87c = DAT_0380b87c + iVar2;
      iVar1 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *(short *)(iVar1 + param_1) = sVar3;
      DAT_0380b878 = iVar4;
      if (0xffff < DAT_0380b87c) {
        DAT_0380b878 = iVar4 + 1;
        sVar3 = (*(byte *)((int)&DAT_0380b8a4 + iVar4 + 1) - 0x80) * 0x40;
        DAT_0380b87c = DAT_0380b87c - 0x10000;
      }
      iVar4 = DAT_0380b878;
    } while (param_2 != iVar5);
  }
  return;
}


// 0x037fbda8  service_dac_buffer

void FUN_037fbda8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  if ((DAT_0380b8a0 == 0) || (iVar2 = FUN_037f93d8(), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (0xfff < param_1) {
    param_1 = 0x1000;
  }
  FUN_037fbc10(param_1);
  iVar2 = param_1 * 2;
  if (DAT_0380bdd4 < DAT_0380bdd0 + param_1) {
    iVar2 = (int)DAT_0380bdd4 - (int)DAT_0380bdd0 >> 1;
    if (bVar1) {
      FUN_037fbc68(DAT_0380bdd0,iVar2);
      param_1 = param_1 - iVar2;
      DAT_0380bdd0 = DAT_0380bdcc;
      iVar2 = param_1 * 2;
    }
    else {
      iVar3 = iVar2;
      if (0 < iVar2) {
        do {
          iVar3 = iVar3 + -1;
          *DAT_0380bdd0 = 0;
          DAT_0380bdd0 = DAT_0380bdd0 + 1;
        } while (iVar3 != 0);
      }
      param_1 = param_1 - iVar2;
      DAT_0380bdd0 = DAT_0380bdcc;
      iVar2 = param_1 * 2;
    }
  }
  if (bVar1) {
    FUN_037fbc68(DAT_0380bdd0,param_1);
  }
  else {
    puVar4 = DAT_0380bdd0;
    if (0 < param_1) {
      do {
        param_1 = param_1 + -1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (param_1 != 0);
    }
  }
  DAT_0380bdd0 = (undefined2 *)((int)DAT_0380bdd0 + iVar2);
  return;
}

