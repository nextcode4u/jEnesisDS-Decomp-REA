/* ARM9 file api — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0207d1f8  fat_fat_stat_r

undefined4 fat_fat_stat_r(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_150 [312];
  
  iVar1 = fat_fat_partition_getpartitionfrompath(param_2);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
    *param_1 = 0x13;
  }
  else {
    iVar2 = arm_thumb_veneer_for_newlib_strchr(param_2,0x3a);
    if (iVar2 != 0) {
      param_2 = iVar2 + 1;
      iVar2 = arm_thumb_veneer_for_newlib_strchr(param_2,0x3a);
      if (iVar2 != 0) {
        *param_1 = 0x16;
        return 0xffffffff;
      }
    }
    iVar2 = fat_fat_directory_entryfrompath(iVar1,auStack_150,param_2,0);
    if (iVar2 == 0) {
      uVar3 = 0xffffffff;
      *param_1 = 2;
    }
    else {
      fat_fat_directory_entrystat(iVar1,auStack_150,param_3);
      uVar3 = 0;
    }
  }
  return uVar3;
}


// 0x0207d848  fat_fat_fstat_r

undefined4 fat_fat_fstat_r(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [260];
  
  if ((param_2 == (undefined4 *)0x0) || (*(char *)((int)param_2 + 0x27) == '\0')) {
    *param_1 = 9;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = param_2[10];
    local_138 = param_2[0xb];
    uStack_134 = param_2[0xc];
    uStack_130 = param_2[0xd];
    local_12c = param_2[0xe];
    uStack_128 = param_2[0xf];
    uStack_124 = param_2[0x10];
    iVar2 = fat_fat_directory_entryfromposition(uVar1,auStack_158,auStack_120,param_2 + 0x11);
    if (iVar2 == 0) {
      uVar1 = 0xffffffff;
      *param_1 = 5;
    }
    else {
      fat_fat_directory_entrystat(uVar1,auStack_158,param_3);
      uVar1 = 0;
      *(undefined4 *)(param_3 + 4) = param_2[1];
      *(undefined4 *)(param_3 + 0x18) = *param_2;
    }
  }
  return uVar1;
}


// 0x0207dac8  fat_fat_open_r

uint * fat_fat_open_r(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  undefined1 auStack_160 [11];
  byte local_155;
  undefined1 local_153;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f;
  ushort local_144;
  byte local_142;
  byte local_141;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint local_134;
  uint uStack_130;
  uint uStack_12c;
  undefined1 auStack_128 [260];
  
  uVar2 = fat_fat_partition_getpartitionfrompath(param_3);
  if (uVar2 == 0) {
    *param_1 = 0x13;
    return (uint *)0xffffffff;
  }
  iVar3 = arm_thumb_veneer_for_newlib_strchr(param_3,0x3a);
  if (iVar3 != 0) {
    param_3 = iVar3 + 1;
    iVar3 = arm_thumb_veneer_for_newlib_strchr(param_3,0x3a);
    if (iVar3 != 0) {
      *param_1 = 0x16;
      return (uint *)0xffffffff;
    }
  }
  uVar6 = param_4 & 3;
  if (uVar6 == 0) {
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)((int)param_2 + 0x25) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  else if (uVar6 == 1) {
    *(undefined1 *)(param_2 + 9) = 0;
    *(undefined1 *)((int)param_2 + 0x25) = 1;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  else {
    if (uVar6 != 2) {
      *param_1 = 0xd;
      return (uint *)0xffffffff;
    }
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)((int)param_2 + 0x25) = 1;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  if ((*(char *)((int)param_2 + 0x25) != '\0') && (*(char *)(uVar2 + 8) != '\0')) {
    *param_1 = 0x1e;
    return (uint *)0xffffffff;
  }
  iVar3 = fat_fat_directory_entryfrompath(uVar2,auStack_160,param_3,0);
  if ((param_4 & 0xa00) == 0xa00) {
    if (iVar3 != 0) {
      *param_1 = 0x11;
      return (uint *)0xffffffff;
    }
LAB_0207dc46:
    if (-1 < (int)(param_4 << 0x16)) {
      *param_1 = 2;
      return (uint *)0xffffffff;
    }
    if (*(char *)(uVar2 + 8) != '\0') {
      *param_1 = 0x1e;
      return (uint *)0xffffffff;
    }
    iVar3 = arm_thumb_veneer_for_newlib_strrchr(param_3,0x2f);
    if (iVar3 == 0) {
      uVar5 = *(undefined4 *)(uVar2 + 0x3c);
    }
    else {
      iVar4 = fat_fat_directory_entryfrompath(uVar2,auStack_160,param_3,iVar3);
      if ((iVar4 == 0) || (-1 < (int)((uint)local_155 << 0x1b))) {
        *param_1 = 0x14;
        return (uint *)0xffffffff;
      }
      uVar5 = fat_fat_directory_entrygetcluster(auStack_160);
      param_3 = iVar3 + 1;
    }
    arm_thumb_veneer_for_newlib_strncpy(auStack_128,param_3,0xff);
    arm_thumb_veneer_for_newlib_memset(auStack_160,0,0x20);
    local_153 = 0;
    uVar1 = fat_fat_filetime_gettimefromrtc();
    local_152 = (undefined1)uVar1;
    local_151 = (undefined1)((ushort)uVar1 >> 8);
    uVar1 = fat_fat_filetime_getdatefromrtc();
    local_150 = (undefined1)uVar1;
    local_14f = (undefined1)((ushort)uVar1 >> 8);
    iVar3 = fat_fat_directory_addentry(uVar2,auStack_160,uVar5);
    if (iVar3 == 0) {
      *param_1 = 0x1c;
      return (uint *)0xffffffff;
    }
  }
  else {
    if (iVar3 == 0) goto LAB_0207dc46;
    if ((int)((uint)local_155 << 0x1b) < 0) {
      *param_1 = 0x15;
      return (uint *)0xffffffff;
    }
  }
  *param_2 = (uint)local_144 | (uint)local_142 << 0x10 | (uint)local_141 << 0x18;
  if ((*(char *)((int)param_2 + 0x25) != '\0') && ((int)((uint)local_155 << 0x1f) < 0)) {
    *param_1 = 0x1e;
    return (uint *)0xffffffff;
  }
  param_2[10] = uVar2;
  uVar6 = fat_fat_directory_entrygetcluster(auStack_160);
  param_2[1] = uVar6;
  if (((int)(param_4 << 0x15) < 0) && (*(char *)((int)param_2 + 0x25) != '\0')) {
    if (uVar6 != 0) {
      fat_fat_fat_clearlinks(uVar2,uVar6);
      param_2[1] = 0;
      *param_2 = 0;
      goto LAB_0207dba0;
    }
  }
  else {
LAB_0207dba0:
    if (param_2[1] != 0) goto LAB_0207dbb0;
  }
  uVar6 = fat_fat_fat_linkfreecluster(uVar2,0);
  param_2[1] = uVar6;
LAB_0207dbb0:
  param_2[0xb] = local_140;
  param_2[0xc] = uStack_13c;
  param_2[0xd] = uStack_138;
  param_2[0xe] = local_134;
  param_2[0xf] = uStack_130;
  param_2[0x10] = uStack_12c;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = param_2[1];
  uVar6 = fat_fat_fat_lastcluster(uVar2,param_2[1],param_2 + 0x11);
  uVar7 = *param_2;
  param_2[6] = uVar6;
  arm_thumb_veneer_for_compiler_aeabi_uidivmod(uVar7,*(undefined4 *)(uVar2 + 0x28));
  param_2[7] = extraout_r1 >> 9;
  param_2[8] = uVar7 & 0x1ff;
  if ((uVar7 != 0) && (arm_thumb_veneer_for_compiler_aeabi_uidivmod(uVar7,*(undefined4 *)(uVar2 + 0x28)), extraout_r1_00 == 0)
     ) {
    uVar6 = *(uint *)(uVar2 + 0x24);
    param_2[8] = 0;
    param_2[7] = uVar6;
  }
  if ((int)(param_4 << 0x1c) < 0) {
    *(undefined1 *)((int)param_2 + 0x26) = 1;
  }
  *(undefined1 *)((int)param_2 + 0x27) = 1;
  *(int *)(uVar2 + 0x40) = *(int *)(uVar2 + 0x40) + 1;
  return param_2;
}


// 0x0207dd80  fat_fat_read_r

int fat_fat_read_r(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint local_30;
  uint local_2c;
  
  if (((param_2 == (uint *)0x0) || (*(char *)((int)param_2 + 0x27) == '\0')) ||
     ((char)param_2[9] == '\0')) {
    *param_1 = 9;
    return 0;
  }
  if (*param_2 <= param_2[2]) {
    return 0;
  }
  local_2c = param_4;
  if (*param_2 < param_2[2] + param_4) {
    *param_1 = 0x8b;
    local_2c = *param_2 - param_2[2];
  }
  uVar8 = param_2[4];
  uVar5 = param_2[3];
  piVar9 = (int *)param_2[10];
  local_30 = param_2[5];
  iVar6 = piVar9[1];
  uVar3 = 0x200 - local_30;
  if (local_2c < 0x200 - local_30) {
    uVar3 = local_2c;
  }
  uVar10 = local_2c;
  if ((int)uVar3 < 0x200) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = piVar9[9] * (uVar5 - 2) + piVar9[7];
    }
    fat_fat_cache_readpartialsector(iVar6,param_3,iVar2 + uVar8,local_30,uVar3);
    local_30 = local_30 + uVar3;
    param_3 = param_3 + uVar3;
    uVar10 = local_2c - uVar3;
    if (0x1ff < (int)local_30) {
      uVar8 = uVar8 + 1;
      local_30 = 0;
    }
  }
  uVar3 = piVar9[9];
  uVar7 = uVar3 - uVar8;
  if (uVar10 <= uVar7 * 0x200) {
    uVar7 = uVar10 >> 9;
  }
  if (0 < (int)uVar7) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = uVar3 * (uVar5 - 2) + piVar9[7];
    }
    (**(code **)(*piVar9 + 0x10))(iVar2 + uVar8,uVar7,param_3);
    uVar3 = piVar9[9];
    param_3 = param_3 + uVar7 * 0x200;
    uVar10 = uVar10 + uVar7 * -0x200;
    uVar8 = uVar8 + uVar7;
  }
  if (uVar3 <= uVar8) {
    uVar3 = fat_fat_fat_nextcluster(piVar9,uVar5);
    if ((uVar10 != 0) || (uVar3 != 0xfffffff)) {
      if (uVar3 == 0) {
        *param_1 = 5;
        bVar1 = false;
      }
      else {
        uVar8 = 0;
        bVar1 = true;
        uVar5 = uVar3;
      }
      goto LAB_0207de44;
    }
    uVar8 = piVar9[9];
  }
  bVar1 = true;
LAB_0207de44:
  while (((uint)piVar9[10] <= uVar10 && (bVar1))) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
      iVar4 = piVar9[9];
    }
    else {
      iVar4 = piVar9[9];
      iVar2 = (uVar5 - 2) * iVar4 + piVar9[7];
    }
    (**(code **)(*piVar9 + 0x10))(iVar2,iVar4,param_3);
    iVar2 = piVar9[10];
    uVar10 = uVar10 - iVar2;
    uVar3 = fat_fat_fat_nextcluster(piVar9,uVar5);
    if ((uVar10 == 0) && (uVar3 == 0xfffffff)) {
      uVar8 = piVar9[9];
      param_3 = param_3 + iVar2;
    }
    else if (uVar3 == 0) {
      *param_1 = 5;
      param_3 = param_3 + iVar2;
      bVar1 = false;
    }
    else {
      uVar8 = 0;
      param_3 = param_3 + iVar2;
      uVar5 = uVar3;
    }
  }
  uVar3 = uVar10 >> 9;
  if ((uVar3 != 0) && (bVar1)) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = piVar9[9] * (uVar5 - 2) + piVar9[7];
    }
    (**(code **)(*piVar9 + 0x10))(iVar2,uVar3,param_3);
    param_3 = param_3 + uVar3 * 0x200;
    uVar10 = uVar10 + uVar3 * -0x200;
    uVar8 = uVar8 + uVar3;
  }
  if ((uVar10 != 0) && (bVar1)) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = piVar9[9] * (uVar5 - 2) + piVar9[7];
    }
    fat_fat_cache_readpartialsector(iVar6,param_3,iVar2 + uVar8,0,uVar10);
    local_30 = local_30 + uVar10;
    uVar10 = 0;
  }
  param_2[3] = uVar5;
  param_2[4] = uVar8;
  param_2[5] = local_30;
  param_2[2] = param_2[2] + (local_2c - uVar10);
  return local_2c - uVar10;
}


// 0x0207dfc8  fat_fat_write_r

int fat_fat_write_r(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint local_22c;
  undefined1 auStack_228 [516];
  
  if (((param_2 == (uint *)0x0) || (*(char *)((int)param_2 + 0x27) == '\0')) ||
     (*(char *)((int)param_2 + 0x25) == '\0')) {
    *param_1 = 9;
    iVar8 = -1;
  }
  else {
    piVar11 = (int *)param_2[10];
    iVar8 = piVar11[1];
    if (*(char *)((int)param_2 + 0x26) == '\0') {
      uVar2 = *param_2;
      uVar6 = param_2[2];
      if (uVar2 < param_2[2]) {
        arm_thumb_veneer_for_newlib_memset(auStack_228,0,0x200);
        uVar12 = *param_2 & 0x1ff;
        arm_thumb_veneer_for_compiler_aeabi_uidivmod(*param_2,piVar11[10]);
        uVar6 = extraout_r1 >> 9;
        uVar2 = fat_fat_fat_lastcluster(piVar11,param_2[1]);
        uVar10 = param_2[2] - *param_2;
        uVar4 = uVar10 + uVar12;
        if (uVar4 < 0x200) {
          if (uVar2 < 2) {
            iVar7 = piVar11[4];
          }
          else {
            iVar7 = piVar11[9] * (uVar2 - 2) + piVar11[7];
          }
          fat_fat_cache_writepartialsector(iVar8,auStack_228,iVar7 + uVar6,uVar12,uVar10);
          uVar5 = uVar2;
          uVar12 = uVar4;
        }
        else {
          if (uVar12 != 0) {
            if (uVar2 < 2) {
              iVar7 = piVar11[4];
            }
            else {
              iVar7 = piVar11[9] * (uVar2 - 2) + piVar11[7];
            }
            fat_fat_cache_writepartialsector(iVar8,auStack_228,iVar7 + uVar6,uVar12,0x200 - uVar12);
            uVar10 = uVar4 - 0x200;
            uVar12 = 0;
            uVar6 = uVar6 + 1;
          }
          for (; 0x1ff < uVar10; uVar10 = uVar10 - 0x200) {
            if (uVar6 < (uint)piVar11[9]) {
              uVar4 = uVar6 + 1;
            }
            else {
              uVar5 = fat_fat_fat_nextcluster(piVar11,uVar2);
              if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
                 (uVar5 = fat_fat_fat_linkfreecluster(piVar11,uVar2), uVar5 == 0)) {
                *param_1 = 0x1c;
                return 0;
              }
              uVar6 = 0;
              uVar4 = 1;
              uVar2 = uVar5;
            }
            if (uVar2 < 2) {
              iVar7 = piVar11[4];
            }
            else {
              iVar7 = piVar11[9] * (uVar2 - 2) + piVar11[7];
            }
            (**(code **)(*piVar11 + 0x14))(iVar7 + uVar6,1,auStack_228);
            uVar6 = uVar4;
          }
          uVar5 = uVar2;
          if ((uint)piVar11[9] <= uVar6) {
            uVar5 = fat_fat_fat_nextcluster(piVar11,uVar2);
            if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
               (uVar5 = fat_fat_fat_linkfreecluster(piVar11,uVar2), uVar5 == 0)) {
              *param_1 = 0x1c;
              return 0;
            }
            uVar6 = 0;
          }
          if (uVar10 != 0) {
            if (uVar5 < 2) {
              iVar7 = piVar11[4];
            }
            else {
              iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
            }
            fat_fat_cache_writepartialsector(iVar8,auStack_228,iVar7 + uVar6,0,uVar10);
            uVar12 = uVar10;
          }
        }
        param_2[5] = uVar12;
        uVar2 = param_2[2];
        param_2[3] = uVar5;
        param_2[4] = uVar6;
        *param_2 = uVar2;
        uVar6 = uVar2;
      }
      local_22c = param_2[5];
      uVar12 = param_2[3];
      uVar4 = param_2[4];
      if (uVar2 < param_4 + uVar6) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      local_22c = param_2[8];
      uVar12 = param_2[6];
      uVar4 = param_2[7];
      bVar1 = true;
    }
    if (uVar4 < (uint)piVar11[9]) {
      uVar6 = 1;
    }
    else {
      uVar2 = fat_fat_fat_nextcluster(piVar11,uVar12);
      if (((uVar2 == 0xfffffff) || (uVar2 == 0)) &&
         (uVar2 = fat_fat_fat_linkfreecluster(piVar11,uVar12), uVar2 == 0)) {
        *param_1 = 0x1c;
        uVar4 = 0;
        uVar6 = uVar4;
      }
      else {
        uVar6 = 1;
        uVar4 = 0;
        uVar12 = uVar2;
      }
    }
    uVar2 = 0x200 - local_22c;
    if (param_4 < 0x200 - local_22c) {
      uVar2 = param_4;
    }
    uVar10 = param_4;
    if (((int)uVar2 < 0x200) && (uVar6 != 0)) {
      if (uVar12 < 2) {
        iVar7 = piVar11[4];
      }
      else {
        iVar7 = piVar11[9] * (uVar12 - 2) + piVar11[7];
      }
      fat_fat_cache_writepartialsector(iVar8,param_3,iVar7 + uVar4,local_22c,uVar2);
      local_22c = local_22c + uVar2;
      param_3 = param_3 + uVar2;
      uVar10 = param_4 - uVar2;
      if (0x1ff < (int)local_22c) {
        uVar4 = uVar4 + 1;
        local_22c = 0;
      }
    }
    uVar2 = piVar11[9];
    uVar5 = uVar2 - uVar4;
    if (uVar10 <= uVar5 * 0x200) {
      uVar5 = uVar10 >> 9;
    }
    if ((0 < (int)uVar5) && (uVar6 != 0)) {
      if (uVar12 < 2) {
        iVar7 = piVar11[4];
      }
      else {
        iVar7 = uVar2 * (uVar12 - 2) + piVar11[7];
      }
      (**(code **)(*piVar11 + 0x14))(iVar7 + uVar4,uVar5,param_3);
      uVar2 = piVar11[9];
      param_3 = param_3 + uVar5 * 0x200;
      uVar10 = uVar10 + uVar5 * -0x200;
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar4 < uVar2) || (uVar6 == 0)) || (uVar10 == 0)) {
      uVar2 = piVar11[10];
    }
    else {
      uVar5 = fat_fat_fat_nextcluster(piVar11,uVar12);
      if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
         (uVar5 = fat_fat_fat_linkfreecluster(piVar11,uVar12), uVar5 == 0)) {
        *param_1 = 0x1c;
        uVar6 = 0;
        uVar2 = piVar11[10];
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar2 = piVar11[10];
        uVar12 = uVar5;
      }
    }
    uVar5 = uVar12;
    if (uVar2 <= uVar10) {
      do {
        uVar5 = uVar12;
        if (uVar6 == 0) break;
        if (uVar12 < 2) {
          iVar7 = piVar11[4];
          iVar3 = piVar11[9];
        }
        else {
          iVar3 = piVar11[9];
          iVar7 = (uVar12 - 2) * iVar3 + piVar11[7];
        }
        (**(code **)(*piVar11 + 0x14))(iVar7,iVar3,param_3);
        uVar2 = piVar11[10];
        uVar10 = uVar10 - uVar2;
        if (uVar10 == 0) {
          uVar4 = piVar11[9];
          uVar9 = uVar2;
        }
        else {
          uVar5 = fat_fat_fat_nextcluster(piVar11,uVar12);
          if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
             (uVar5 = fat_fat_fat_linkfreecluster(piVar11,uVar12), uVar5 == 0)) {
            *param_1 = 0x1c;
            uVar6 = 0;
            uVar9 = piVar11[10];
            uVar5 = uVar12;
          }
          else {
            uVar9 = piVar11[10];
          }
        }
        param_3 = param_3 + uVar2;
        uVar12 = uVar5;
      } while (uVar9 <= uVar10);
    }
    uVar2 = uVar10 >> 9;
    if ((uVar2 != 0) && (uVar6 != 0)) {
      if (uVar5 < 2) {
        iVar7 = piVar11[4];
      }
      else {
        iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
      }
      (**(code **)(*piVar11 + 0x14))(iVar7,uVar2,param_3);
      param_3 = param_3 + uVar2 * 0x200;
      uVar10 = uVar10 + uVar2 * -0x200;
      uVar4 = uVar4 + uVar2;
    }
    if ((uVar10 != 0) && (uVar6 != 0)) {
      if (bVar1) {
        if (uVar5 < 2) {
          iVar7 = piVar11[4];
        }
        else {
          iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
        }
        fat_fat_cache_erasewritepartialsector(iVar8,param_3,iVar7 + uVar4,0,uVar10);
      }
      else {
        if (uVar5 < 2) {
          iVar7 = piVar11[4];
        }
        else {
          iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
        }
        fat_fat_cache_writepartialsector(iVar8,param_3,iVar7 + uVar4,0,uVar10);
      }
      local_22c = local_22c + uVar10;
      uVar10 = 0;
    }
    iVar8 = param_4 - uVar10;
    if (*(char *)((int)param_2 + 0x26) == '\0') {
      param_2[5] = local_22c;
      param_2[3] = uVar5;
      param_2[4] = uVar4;
      uVar6 = param_2[2] + iVar8;
      param_2[2] = uVar6;
      if (*param_2 < uVar6) {
        *param_2 = uVar6;
      }
    }
    else {
      param_2[7] = uVar4;
      param_2[8] = local_22c;
      param_2[6] = uVar5;
      *param_2 = *param_2 + iVar8;
    }
  }
  return iVar8;
}


// 0x0207e808  fat_fat_filetime_gettimefromrtc

uint fat_fat_filetime_gettimefromrtc(void)

{
  uint uVar1;
  
  if (DAT_027ff01b < 0x28) {
    uVar1 = (uint)DAT_027ff01b;
  }
  else {
    uVar1 = DAT_027ff01b - 0x28;
  }
  if (((uVar1 < 0x18) && (DAT_027ff01c < 0x3c)) && (DAT_027ff01d < 0x3c)) {
    uVar1 = (uVar1 & 0x1f) * 0x800 |
            (DAT_027ff01c & 0x3f) << 5 | (int)(uint)DAT_027ff01d >> 1 & 0x1fU;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0207e854  fat_fat_filetime_getdatefromrtc

uint fat_fat_filetime_getdatefromrtc(void)

{
  uint uVar1;
  
  if (((DAT_027ff017 - 6 < 0x5e) && (DAT_027ff018 - 1 < 0xc)) && (DAT_027ff019 - 1 < 0x1f)) {
    uVar1 = (DAT_027ff017 + 0x14 & 0x7f) * 0x200 | (DAT_027ff018 & 0xf) << 5 | DAT_027ff019 & 0x1f;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0207e898  fat_fat_filetime_to_time_t

int fat_fat_filetime_to_time_t(uint param_1,uint param_2)

{
  return ((param_2 & 0x1ff) >> 5) * 0x28206f + (param_2 & 0x1f) * 0x15180 +
         ((param_1 & 0x7ff) >> 5) * 0x3c + (param_1 & 0x1f) * 2 + (param_1 >> 0xb) * 0xe10 +
         (param_2 >> 9) * 0x1e1853e;
}

