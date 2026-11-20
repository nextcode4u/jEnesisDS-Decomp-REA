/* ARM9 cluster chains — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0207e470  fat_fat_fat_nextcluster

void fat_fat_fat_nextcluster(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_1c;
  
  cVar1 = *(char *)(param_1 + 9);
  local_1c = 0;
  if (cVar1 == '\x01') {
    iVar3 = (param_2 * 3 >> 10) + *(int *)(param_1 + 0x2c);
    uVar2 = param_2 * 3 >> 1 & 0x1ff;
    fat_fat_cache_readpartialsector(*(undefined4 *)(param_1 + 4),&local_1c,iVar3,uVar2,1);
    uVar2 = uVar2 + 1;
    if (0x1ff < uVar2) {
      iVar3 = iVar3 + 1;
      uVar2 = 0;
    }
    fat_fat_cache_readpartialsector(*(undefined4 *)(param_1 + 4),(int)&local_1c + 1,iVar3,uVar2,1);
  }
  else if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      fat_fat_cache_readpartialsector(*(undefined4 *)(param_1 + 4),&local_1c,
                   ((param_2 & 0x7fffffff) >> 8) + *(int *)(param_1 + 0x2c),(param_2 & 0xff) << 1,2)
      ;
    }
    else if (cVar1 == '\x03') {
      fat_fat_cache_readpartialsector(*(undefined4 *)(param_1 + 4),&local_1c,
                   ((param_2 & 0x3fffffff) >> 7) + *(int *)(param_1 + 0x2c),(param_2 & 0x7f) << 2,4)
      ;
    }
  }
  return;
}


// 0x0207e558  fat_fat_fat_lastcluster

undefined4 fat_fat_fat_lastcluster(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  while ((iVar1 = fat_fat_fat_nextcluster(param_1,param_2), iVar1 != 0 &&
         (iVar1 = fat_fat_fat_nextcluster(param_1,param_2), iVar1 != 0xfffffff))) {
    param_2 = fat_fat_fat_nextcluster(param_1,param_2);
  }
  return param_2;
}


// 0x0207e590  fat_fat_fat_writefatentry

undefined4 fat_fat_fat_writefatentry(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_2c;
  byte local_21;
  
  if ((1 < param_2) && (param_2 <= *(uint *)(param_1 + 0x34))) {
    cVar1 = *(char *)(param_1 + 9);
    local_2c = param_3;
    if (cVar1 == '\x02') {
      fat_fat_cache_writepartialsector(*(undefined4 *)(param_1 + 4),&local_2c,
                   ((param_2 & 0x7fffffff) >> 8) + *(int *)(param_1 + 0x2c),(param_2 & 0xff) << 1,2)
      ;
      return 1;
    }
    if (cVar1 == '\x03') {
      fat_fat_cache_writepartialsector(*(undefined4 *)(param_1 + 4),&local_2c,
                   ((param_2 & 0x3fffffff) >> 7) + *(int *)(param_1 + 0x2c),(param_2 & 0x7f) << 2,4)
      ;
      return 1;
    }
    if (cVar1 == '\x01') {
      iVar2 = (param_2 * 3 >> 10) + *(int *)(param_1 + 0x2c);
      uVar3 = param_2 * 3 >> 1 & 0x1ff;
      if ((param_2 & 1) == 0) {
        fat_fat_cache_writepartialsector(*(undefined4 *)(param_1 + 4),&local_2c,iVar2,uVar3,1);
        uVar3 = uVar3 + 1;
        if (0x1ff < uVar3) {
          iVar2 = iVar2 + 1;
          uVar3 = 0;
        }
        fat_fat_cache_readpartialsector(*(undefined4 *)(param_1 + 4),&local_21,iVar2,uVar3,1);
        local_2c = (local_2c & 0xfff) >> 8 | local_21 & 0xf0;
        fat_fat_cache_writepartialsector(*(undefined4 *)(param_1 + 4),&local_2c,iVar2,uVar3,1);
        return 1;
      }
      fat_fat_cache_readpartialsector(*(undefined4 *)(param_1 + 4),&local_21,iVar2,uVar3,1);
      local_2c = local_2c << 4 | local_21 & 0xf;
      fat_fat_cache_writepartialsector(*(undefined4 *)(param_1 + 4),&local_2c,iVar2,uVar3,1);
      uVar3 = uVar3 + 1;
      if (0x1ff < uVar3) {
        iVar2 = iVar2 + 1;
        uVar3 = 0;
      }
      fat_fat_cache_writepartialsector(*(undefined4 *)(param_1 + 4),(int)&local_2c + 1,iVar2,uVar3,1);
      return 1;
    }
  }
  return 0;
}


// 0x0207e6cc  fat_fat_fat_clearlinks

undefined4 fat_fat_fat_clearlinks(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_2 < 2) || (*(uint *)(param_1 + 0x34) < param_2)) {
    uVar2 = 0;
  }
  else {
    if (param_2 < *(uint *)(param_1 + 0x38)) {
      *(uint *)(param_1 + 0x38) = param_2;
    }
    if (param_2 != 0xfffffff) {
      do {
        uVar1 = fat_fat_fat_nextcluster(param_1,param_2);
        fat_fat_fat_writefatentry(param_1,param_2,0);
        if (uVar1 == 0xfffffff) break;
        param_2 = uVar1;
      } while (uVar1 != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}


// 0x0207e71c  fat_fat_fat_linkfreecluster

uint fat_fat_fat_linkfreecluster(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x34);
  if (uVar4 < param_2) {
LAB_0207e72c:
    uVar2 = 0;
  }
  else {
    uVar2 = fat_fat_fat_nextcluster();
    if ((uVar2 < 2) || (uVar4 < uVar2)) {
      uVar2 = *(uint *)(param_1 + 0x38);
      if (uVar2 < 2) {
        uVar2 = 2;
      }
      bVar1 = false;
      while (iVar3 = fat_fat_fat_nextcluster(param_1,uVar2), iVar3 != 0) {
        while (uVar2 = uVar2 + 1, uVar4 < uVar2) {
          if (bVar1) {
            *(uint *)(param_1 + 0x38) = uVar2;
            goto LAB_0207e72c;
          }
          uVar2 = 2;
          bVar1 = true;
          iVar3 = fat_fat_fat_nextcluster(param_1,2);
          if (iVar3 == 0) goto LAB_0207e76e;
        }
      }
LAB_0207e76e:
      *(uint *)(param_1 + 0x38) = uVar2;
      if ((1 < param_2) && (param_2 < uVar4)) {
        fat_fat_fat_writefatentry(param_1,param_2,uVar2);
      }
      fat_fat_fat_writefatentry(param_1,uVar2,0xfffffff);
    }
  }
  return uVar2;
}


// 0x0207e7a0  fat_fat_fat_linkfreeclustercleared

uint fat_fat_fat_linkfreeclustercleared(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_218 [512];
  
  uVar1 = fat_fat_fat_linkfreecluster();
  if (uVar1 != 0) {
    arm_thumb_veneer_for_newlib_memset(auStack_218,0,0x200);
    uVar3 = param_1[9];
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (uVar1 < 2) {
          iVar2 = param_1[4];
        }
        else {
          iVar2 = (uVar1 - 2) * uVar3 + param_1[7];
        }
        (**(code **)(*param_1 + 0x14))(iVar2 + uVar4,1,auStack_218);
        uVar3 = param_1[9];
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  return uVar1;
}

