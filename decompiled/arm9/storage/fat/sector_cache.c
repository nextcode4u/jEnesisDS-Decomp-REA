/* ARM9 sector cache — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0207ce80  _FAT_cache_getSector

int _FAT_cache_getSector(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = (int *)param_1[2];
  if (param_1[1] == 0) {
    iVar5 = 0;
    iVar2 = 0;
    iVar9 = iVar5;
LAB_0207ceec:
    piVar8 = (int *)((int)piVar8 + iVar5);
    if ((*piVar8 != -1) && ((char)piVar8[2] == '\x01')) {
      cVar1 = (**(code **)(*param_1 + 0x14))(*piVar8,1,iVar2 + param_1[3]);
      if (cVar1 == '\0') {
        return -1;
      }
      *(undefined1 *)(piVar8 + 2) = 0;
    }
    cVar1 = (**(code **)(*param_1 + 0x10))(param_2,1,iVar2 + param_1[3]);
    if (cVar1 == '\0') {
      return -1;
    }
    *piVar8 = param_2;
    piVar8[1] = piVar8[1] + 1;
    return iVar9;
  }
  iVar5 = *piVar8;
  piVar4 = piVar8;
  if (param_2 == iVar5) {
    iVar2 = 0;
  }
  else {
    iVar9 = 0;
    uVar7 = 0xffffffff;
    iVar2 = 0;
    iVar3 = 0xc;
    do {
      if (iVar5 == -1) {
        uVar6 = piVar4[1];
LAB_0207ceb2:
        uVar7 = uVar6;
        iVar9 = iVar2;
      }
      else {
        uVar6 = piVar4[1];
        if (uVar6 < uVar7) goto LAB_0207ceb2;
      }
      iVar2 = iVar2 + 1;
      if (param_1[1] == iVar2) {
        iVar5 = iVar9 * 0xc;
        iVar2 = iVar9 << 9;
        goto LAB_0207ceec;
      }
      piVar4 = (int *)((int)piVar8 + iVar3);
      iVar5 = *piVar4;
      iVar3 = iVar3 + 0xc;
    } while (param_2 != iVar5);
  }
  piVar4[1] = piVar4[1] + 1;
  return iVar2;
}


// 0x0207cf44  _FAT_cache_flush

undefined4 _FAT_cache_flush(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[1] != 0) {
    iVar2 = param_1[2];
    uVar4 = 0;
    iVar3 = 0;
    do {
      if (*(char *)((undefined4 *)(iVar3 + iVar2) + 2) != '\0') {
        cVar1 = (**(code **)(*param_1 + 0x14))
                          (*(undefined4 *)(iVar3 + iVar2),1,uVar4 * 0x200 + param_1[3]);
        if (cVar1 == '\0') {
          return 0xff;
        }
        iVar2 = param_1[2];
      }
      *(undefined4 *)(iVar3 + iVar2 + 4) = 0;
      *(undefined1 *)(iVar3 + iVar2 + 8) = 0;
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (uVar4 < (uint)param_1[1]);
  }
  return 1;
}


// 0x0207cf90  _FAT_cache_invalidate

void _FAT_cache_invalidate(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    iVar1 = 0;
    do {
      puVar2 = (undefined4 *)(iVar3 + iVar1 * 0xc);
      iVar1 = iVar1 + 1;
      *puVar2 = 0xffffffff;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
    } while (iVar4 != iVar1);
  }
  return;
}


// 0x0207cfbc  _FAT_cache_eraseWritePartialSector

undefined4 _FAT_cache_eraseWritePartialSector(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (((uint)(param_5 + param_4) < 0x201) && (iVar1 = _FAT_cache_getSector(param_1,param_3), iVar1 != -1)) {
    memset(iVar1 * 0x200 + *(int *)(param_1 + 0xc),0,0x200);
    memcpy(iVar1 * 0x200 + *(int *)(param_1 + 0xc) + param_4,param_2,param_5);
    *(undefined1 *)(iVar1 * 0xc + *(int *)(param_1 + 8) + 8) = 1;
    return 1;
  }
  return 0;
}


// 0x0207d020  _FAT_cache_writePartialSector

undefined4 _FAT_cache_writePartialSector(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((uint)(param_4 + param_5) < 0x201) && (iVar2 = _FAT_cache_getSector(param_1,param_3), iVar2 != -1)) {
    memcpy(iVar2 * 0x200 + *(int *)(param_1 + 0xc) + param_4,param_2,param_5);
    uVar1 = 1;
    *(undefined1 *)(iVar2 * 0xc + *(int *)(param_1 + 8) + 8) = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0207d06c  _FAT_cache_readPartialSector

undefined4 _FAT_cache_readPartialSector(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((uint)(param_4 + param_5) < 0x201) && (iVar2 = _FAT_cache_getSector(param_1,param_3), iVar2 != -1)) {
    memcpy(param_2,iVar2 * 0x200 + *(int *)(param_1 + 0xc) + param_4,param_5);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0207d0a8  _FAT_cache_destructor

void _FAT_cache_destructor(int param_1)

{
  _FAT_cache_flush();
  free(*(undefined4 *)(param_1 + 0xc));
  free(*(undefined4 *)(param_1 + 8));
  free(param_1);
  return;
}


// 0x0207d0c4  _FAT_cache_constructor

undefined4 * _FAT_cache_constructor(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 < 2) {
    param_1 = 2;
  }
  puVar1 = (undefined4 *)malloc(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_1;
    puVar2 = (undefined4 *)malloc(param_1 * 0xc);
    if (puVar2 == (undefined4 *)0x0) {
      free(puVar1);
      return (undefined4 *)0x0;
    }
    if (param_1 != 0) {
      uVar5 = 0;
      puVar3 = puVar2;
      do {
        uVar5 = uVar5 + 1;
        *puVar3 = 0xffffffff;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        puVar3 = puVar3 + 3;
      } while (param_1 != uVar5);
    }
    puVar1[2] = puVar2;
    iVar4 = malloc(param_1 << 9);
    puVar1[3] = iVar4;
    if (iVar4 != 0) {
      return puVar1;
    }
    free(puVar1[2]);
    free(puVar1);
  }
  return (undefined4 *)0x0;
}

