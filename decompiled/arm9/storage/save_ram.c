/* ARM9 save ram — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x0200157c  helper_for_flush_cartridge_save_ram

uint FUN_0200157c(undefined1 *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_1 == (undefined1 *)0x0 || param_2 < 2) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 & 0xfffffffe;
    puVar2 = param_1;
    if (param_2 != 0) {
      do {
        uVar1 = puVar2[1];
        puVar2[1] = *puVar2;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 2;
      } while ((uint)((int)puVar2 - (int)param_1) < param_2);
    }
  }
  return param_2;
}


// 0x0200163c  flush_cartridge_save_ram

void FUN_0200163c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  bool bVar5;
  
  uVar3 = *(undefined4 *)(DAT_02098fc8 + 0x248);
  bVar5 = *(char *)(DAT_02098fc8 + 0x264) != '\0';
  puVar2 = (undefined *)0x0;
  if (bVar5) {
    param_3 = *(int *)(DAT_02098fc8 + 0x24c);
    puVar2 = &DAT_020b4cec;
  }
  puVar4 = &DAT_023bb4f0;
  if (bVar5) {
    puVar4 = puVar2 + param_3;
  }
  iVar1 = FUN_02081588(DAT_02098fc8 + 0x100,&DAT_0208f070);
  if (iVar1 != 0) {
    FUN_0200157c(puVar4,uVar3);
    FUN_020822e0(puVar4,1,uVar3,iVar1);
    FUN_0200157c(puVar4,uVar3);
    FUN_02081020(iVar1);
  }
  *(undefined1 *)(DAT_02098fc8 + 0x263) = 0;
  return;
}


// 0x02001948  configure_cartridge_save_ram

undefined4 FUN_02001948(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_02083a6c();
  iVar2 = DAT_02098fc8;
  if (*(uint *)(DAT_02098fc8 + 0x250) < 0x306800) {
    FUN_02083058(&DAT_023bb4f0,0,0x10000);
    iVar2 = DAT_02098fc8;
    uVar4 = *(uint *)(DAT_02098fc8 + 0x24c);
    *(undefined4 *)(DAT_02098fc8 + 0x25c) = 0;
    *(undefined1 *)(iVar2 + 0x263) = 0;
    *(undefined1 *)(iVar2 + 0x264) = 1;
    if (uVar4 < param_3) {
      *(undefined4 *)(iVar2 + 0x25c) = 1;
      FUN_02082ec0(&DAT_023bb4f0,&DAT_020b4cec + uVar4,param_2);
      iVar2 = DAT_02098fc8;
    }
    FUN_02083dbc(iVar2 + 0x100,param_1,0x100);
    iVar5 = DAT_02098fc8 + 0x100;
    iVar1 = iVar5 + iVar1;
    *(undefined1 *)(iVar1 + -1) = 0x6d;
    *(undefined1 *)(iVar1 + -4) = 0x2e;
    *(undefined1 *)(iVar1 + -2) = 0x72;
    *(undefined1 *)(iVar1 + -3) = 0x73;
    iVar2 = FUN_02081588(iVar5,&DAT_0208f074);
    if (iVar2 != 0) {
      FUN_02081ff0(iVar2,0);
      uVar4 = FUN_0208212c(iVar2);
      FUN_02081ff0(iVar2,0,0);
      if (param_2 < uVar4) {
        uVar4 = param_2;
      }
      FUN_02081788(&DAT_020b4cec + *(int *)(DAT_02098fc8 + 0x24c),1,uVar4,iVar2);
      FUN_0200157c(&DAT_020b4cec + *(int *)(DAT_02098fc8 + 0x24c),uVar4);
      FUN_02081020(iVar2);
      return 0;
    }
    uVar3 = FUN_02081588(iVar5,&DAT_0208f070,2);
    FUN_020822e0(&DAT_023bb4f0,1,param_2,uVar3);
    FUN_02081020(uVar3);
    FUN_02083058(&DAT_020b4cec + *(int *)(DAT_02098fc8 + 0x24c),0,param_2);
  }
  else {
    *(undefined4 *)(DAT_02098fc8 + 0x24c) = 0;
    *(undefined1 *)(iVar2 + 0x261) = 0;
    *(undefined4 *)(iVar2 + 0x250) = 0;
  }
  return 0;
}

