/* ARM9 directory entries — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0207d15c  fat_fat_dirnext_r

undefined4 FUN_0207d15c(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (*(char *)(puVar3 + 0x50) == '\0') {
    uVar2 = 0xffffffff;
    *param_1 = 9;
  }
  else if (*(char *)((int)puVar3 + 0x141) == '\0') {
    uVar2 = 0xffffffff;
    *param_1 = 2;
  }
  else {
    thunk_FUN_02083dbc(param_3,puVar3 + 0xf,0x100);
    if (param_4 != 0) {
      FUN_0207f4f0(*puVar3,puVar3 + 1,param_4);
    }
    uVar1 = FUN_0207ee00(*puVar3,puVar3 + 1);
    *(undefined1 *)((int)puVar3 + 0x141) = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}


// 0x0207d1c4  fat_fat_dirreset_r

undefined4 FUN_0207d1c4(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (*(char *)(puVar3 + 0x50) == '\0') {
    *param_1 = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = FUN_0207efc4(*puVar3,puVar3 + 1,puVar3[0x4f]);
    *(undefined1 *)((int)puVar3 + 0x141) = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}


// 0x0207d428  fat_fat_diropen_r

int * FUN_0207d428(undefined4 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_150 [11];
  byte local_145;
  
  piVar4 = *(int **)(param_2 + 4);
  iVar2 = FUN_02072d38(param_3);
  *piVar4 = iVar2;
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
    *param_1 = 0x13;
  }
  else {
    iVar3 = thunk_FUN_020836d4(param_3,0x3a);
    if (iVar3 != 0) {
      param_3 = iVar3 + 1;
      iVar3 = thunk_FUN_020836d4(param_3,0x3a);
      if (iVar3 != 0) {
        *param_1 = 0x16;
        return (int *)0x0;
      }
    }
    iVar2 = FUN_0207f07c(iVar2,auStack_150,param_3,0);
    if (iVar2 == 0) {
      *param_1 = 2;
      piVar4 = (int *)0x0;
    }
    else if ((int)((uint)local_145 << 0x1b) < 0) {
      iVar2 = FUN_0207ed1c(auStack_150);
      piVar4[0x4f] = iVar2;
      uVar1 = FUN_0207efc4(*piVar4,piVar4 + 1,iVar2);
      *(undefined1 *)((int)piVar4 + 0x141) = uVar1;
      *(undefined1 *)(piVar4 + 0x50) = 1;
    }
    else {
      piVar4 = (int *)0x0;
      *param_1 = 0x14;
    }
  }
  return piVar4;
}


// 0x0207d64c  fat_fat_mkdir_r

undefined4 FUN_0207d64c(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_180 [11];
  byte local_175;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  undefined1 local_170;
  undefined1 local_16f;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 auStack_148 [256];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = FUN_02072d38(param_2);
  if (iVar3 == 0) {
    *param_1 = 0x13;
    return 0xffffffff;
  }
  iVar4 = thunk_FUN_020836d4(param_2,0x3a);
  if (iVar4 != 0) {
    param_2 = iVar4 + 1;
    iVar4 = thunk_FUN_020836d4(param_2,0x3a);
    if (iVar4 != 0) {
      *param_1 = 0x16;
      return 0xffffffff;
    }
  }
  iVar4 = FUN_0207f07c(iVar3,auStack_180,param_2,0);
  if (iVar4 == 0) {
    if (*(char *)(iVar3 + 8) != '\0') {
      *param_1 = 0x1e;
      return 0xffffffff;
    }
    iVar4 = thunk_FUN_02083f68(param_2,0x2f);
    if (iVar4 == 0) {
      uVar7 = *(undefined4 *)(iVar3 + 0x3c);
    }
    else {
      iVar5 = FUN_0207f07c(iVar3,auStack_180,param_2,iVar4);
      if ((iVar5 == 0) || (-1 < (int)((uint)local_175 << 0x1b))) {
        *param_1 = 0x14;
        return 0xffffffff;
      }
      uVar7 = FUN_0207ed1c(auStack_180);
      param_2 = iVar4 + 1;
    }
    thunk_FUN_02083dbc(auStack_148,param_2,0xff);
    thunk_FUN_02083058(auStack_180,0,0x20);
    local_173 = 0;
    uVar2 = FUN_0207e808();
    local_172 = (undefined1)uVar2;
    local_171 = (undefined1)((ushort)uVar2 >> 8);
    uVar2 = FUN_0207e854();
    local_170 = (undefined1)uVar2;
    local_16f = (undefined1)((ushort)uVar2 >> 8);
    local_175 = 0x10;
    uVar6 = FUN_0207e7a0(iVar3,0);
    if (uVar6 != 0) {
      uVar1 = (undefined1)(uVar6 >> 8);
      local_16c = (undefined1)(uVar6 >> 0x10);
      local_16b = (undefined1)(uVar6 >> 0x18);
      local_166 = (char)uVar6;
      local_165 = uVar1;
      iVar4 = FUN_0207f5bc(iVar3,auStack_180,uVar7);
      if (iVar4 != 0) {
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        thunk_FUN_02083058(&local_48,0x20,0xb);
        local_48 = CONCAT31(local_48._1_3_,0x2e);
        local_40 = CONCAT13(0x10,(undefined3)local_40);
        local_30._0_3_ = CONCAT12((char)uVar6,(undefined2)local_30);
        local_30 = CONCAT13(uVar1,(undefined3)local_30);
        local_34._0_2_ = (undefined2)(uVar6 >> 0x10);
        if (uVar6 < 2) {
          iVar4 = *(int *)(iVar3 + 0x10);
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x24) * (uVar6 - 2) + *(int *)(iVar3 + 0x1c);
        }
        FUN_0207cfbc(*(undefined4 *)(iVar3 + 4),&local_48,iVar4,0,0x20);
        local_48._0_2_ = CONCAT11(0x2e,(undefined1)local_48);
        local_30._0_3_ = CONCAT12((char)uVar7,(undefined2)local_30);
        local_30 = CONCAT13((char)((uint)uVar7 >> 8),(undefined3)local_30);
        local_34._0_2_ = (undefined2)((uint)uVar7 >> 0x10);
        if (uVar6 < 2) {
          iVar4 = *(int *)(iVar3 + 0x10);
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x24) * (uVar6 - 2) + *(int *)(iVar3 + 0x1c);
        }
        FUN_0207d020(*(undefined4 *)(iVar3 + 4),&local_48,iVar4,0x20,0x20);
        iVar3 = FUN_0207cf44(*(undefined4 *)(iVar3 + 4));
        if (iVar3 == 0) {
          *param_1 = 5;
          return 0xffffffff;
        }
        return 0;
      }
    }
    *param_1 = 0x1c;
    return 0xffffffff;
  }
  *param_1 = 0x11;
  return 0xffffffff;
}


// 0x0207eca8  fat_fat_directory_entrygetalias

bool FUN_0207eca8(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  *param_2 = '\0';
  if (*param_1 != -0x1b) {
    if (*param_1 == '.') {
      *param_2 = '.';
      if (param_1[1] == '.') {
        param_2[1] = '.';
        param_2[2] = '\0';
      }
      else {
        param_2[1] = '\0';
      }
    }
    else {
      iVar2 = 0;
      do {
        iVar1 = iVar2;
        if (param_1[iVar2] == ' ') goto LAB_0207ecce;
        iVar1 = iVar2 + 1;
        param_2[iVar2] = param_1[iVar2];
        iVar2 = iVar1;
      } while (iVar1 != 8);
      iVar2 = 8;
LAB_0207ecce:
      pcVar4 = param_1 + 8;
      if (param_1[8] != ' ') {
        param_2[iVar2] = '.';
        pcVar3 = param_2 + iVar1;
        iVar2 = iVar1 + 1;
        do {
          pcVar3 = pcVar3 + 1;
          if (*pcVar4 == ' ') break;
          iVar2 = iVar2 + 1;
          *pcVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (iVar2 != iVar1 + 4);
      }
      param_2[iVar2] = '\0';
    }
  }
  return *param_2 != '\0';
}


// 0x0207ed1c  fat_fat_directory_entrygetcluster

undefined4 FUN_0207ed1c(int param_1)

{
  return CONCAT22(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x1a));
}


// 0x0207ed34  fat_fat_directory_getrootentry

undefined4 FUN_0207ed34(int param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  thunk_FUN_02083058(param_2 + 0x38,0,0x100,param_2 + 0x2c);
  param_2[0x38] = 0x2e;
  thunk_FUN_02083058(param_2,0,0x20);
  thunk_FUN_02083058(param_2,0x20,0xb);
  *param_2 = 0x2e;
  param_2[0xb] = 0x10;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  param_2[0x1a] = (char)uVar2;
  param_2[0x1b] = (char)((uint)uVar2 >> 8);
  uVar1 = *(undefined2 *)(param_1 + 0x16);
  param_2[0x14] = (char)uVar1;
  param_2[0x15] = (char)((ushort)uVar1 >> 8);
  return 1;
}


// 0x0207ed90  fat_fat_directory_incrementdirentryposition

undefined4 FUN_0207ed90(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_2;
  iVar3 = param_2[2] + 1;
  iVar2 = param_2[1];
  iVar1 = iVar4;
  if (iVar3 != 0x10) goto LAB_0207eda6;
  iVar2 = iVar2 + 1;
  if (iVar2 == *(int *)(param_1 + 0x24)) {
    if (iVar4 != 0) {
      iVar1 = FUN_0207e470(param_1,iVar4);
      if (iVar1 == 0xfffffff) {
        if (param_3 == 0) {
          return 0;
        }
        iVar1 = FUN_0207e7a0(param_1,iVar4);
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar2 = 0;
      iVar3 = 0;
      goto LAB_0207eda6;
    }
LAB_0207edc6:
    if (iVar2 == *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x10)) {
      return 0;
    }
  }
  else if (iVar4 == 0) goto LAB_0207edc6;
  iVar3 = 0;
LAB_0207eda6:
  *param_2 = iVar1;
  param_2[1] = iVar2;
  param_2[2] = iVar3;
  return 1;
}


// 0x0207ee00  fat_fat_directory_getnextentry

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0207ee00(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint local_64;
  byte local_60 [11];
  byte local_55;
  byte local_53;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [4];
  
  uVar5 = *(uint *)(param_2 + 0x2c);
  iStack_3c = *(int *)(param_2 + 0x30);
  iStack_38 = *(int *)(param_2 + 0x34);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  puVar6 = (undefined1 *)(param_2 + 0x38);
  local_64 = 0;
  bVar1 = false;
  local_40 = uVar5;
  local_34 = uVar5;
  local_30 = iStack_3c;
  local_2c = iStack_38;
  do {
    iVar3 = FUN_0207ed90(param_1,&local_34,0);
    if (local_34 < 2) {
      iVar11 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar11 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_60,iVar11 + local_30,local_2c << 5,0x20);
    uVar2 = local_34;
    if (local_55 == 0xf) {
      if ((int)((uint)local_60[0] * 0x1000000) < 0) {
        bVar1 = false;
LAB_0207ef50:
        if (local_53 == local_64) {
          local_64 = (uint)local_53;
          if (bVar1) goto LAB_0207ef1e;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        if ((local_60[0] & 0x40) == 0) goto LAB_0207ef50;
        local_40 = local_34;
        iStack_3c = local_30;
        iStack_38 = local_2c;
        puVar6[(local_60[0] & 0xffffffbf) * 0xd] = 0;
        bVar1 = true;
        uVar5 = local_34;
LAB_0207ef1e:
        local_64 = (uint)local_53;
        piVar7 = &DAT_0208ee48;
        pbVar9 = puVar6 + (local_60[0] & 0xffffffbf) * 0xd + -0xd;
        do {
          iVar11 = *piVar7;
          piVar7 = piVar7 + 1;
          *pbVar9 = local_60[iVar11];
          pbVar9 = pbVar9 + 1;
        } while (piVar7 != (int *)&DAT_0208ee7c);
      }
    }
    else if (-1 < (int)((uint)local_55 << 0x1c)) {
      uVar10 = (uint)local_60[0];
      if (uVar10 == 0) goto LAB_0207eed6;
      if ((uVar10 != 0xe5) && (0x20 < uVar10)) {
        if (!bVar1) goto LAB_0207ef80;
        iVar11 = 1;
        do {
          if ((uVar10 & 1) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = 0x80;
          }
          pbVar9 = local_60 + iVar11;
          iVar11 = iVar11 + 1;
          uVar10 = iVar8 + (uVar10 >> 1) + (uint)*pbVar9 & 0xff;
        } while (iVar11 != 0xb);
        local_40 = uVar5;
        if (uVar10 != local_64) {
          *puVar6 = 0;
LAB_0207ef80:
          local_40 = local_34;
          iStack_3c = local_30;
          iStack_38 = local_2c;
          FUN_0207eca8(local_60,puVar6,&local_34,auStack_28);
          local_40 = uVar2;
        }
        if (iVar3 == 0) {
LAB_0207eed6:
          uVar4 = 0;
        }
        else {
          *(uint *)(param_2 + 0x20) = local_40;
          *(int *)(param_2 + 0x24) = iStack_3c;
          *(int *)(param_2 + 0x28) = iStack_38;
          *(uint *)(param_2 + 0x2c) = local_34;
          *(int *)(param_2 + 0x30) = local_30;
          *(int *)(param_2 + 0x34) = local_2c;
          thunk_FUN_02082ec0(param_2,local_60,0x20,auStack_28);
          uVar4 = 1;
        }
        return uVar4;
      }
    }
    if (iVar3 == 0) goto LAB_0207eed6;
  } while( true );
}


// 0x0207efc4  fat_fat_directory_getfirstentry

void FUN_0207efc4(undefined4 param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  FUN_0207ee00(param_1,param_2,param_2 + 0x38,param_2 + 0x2c);
  return;
}


// 0x0207efe4  fat_fat_directory_entryexists

undefined4 FUN_0207efe4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_168 [56];
  undefined1 auStack_130 [259];
  undefined1 auStack_2d [17];
  
  uVar1 = thunk_FUN_02083ed0(param_2,0x100);
  if ((uVar1 < 0x100) && (iVar2 = FUN_0207efc4(param_1,auStack_168,param_3), iVar2 != 0)) {
    do {
      uVar3 = thunk_FUN_02083ed0(auStack_130,0x100);
      if ((uVar1 == uVar3) && (iVar2 = thunk_FUN_02083638(auStack_130,param_2), iVar2 == 0)) {
        return 1;
      }
      FUN_0207eca8(auStack_168,auStack_2d);
      uVar3 = thunk_FUN_02083ed0(auStack_2d,0xd);
      if ((uVar1 == uVar3) && (iVar2 = thunk_FUN_02083638(auStack_2d,param_2), iVar2 == 0)) {
        return 1;
      }
      iVar2 = FUN_0207ee00(param_1,auStack_168);
    } while (iVar2 != 0);
  }
  return 0;
}


// 0x0207f07c  fat_fat_directory_entryfrompath

undefined4 FUN_0207f07c(int param_1,int param_2,char *param_3,char *param_4)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *local_3c;
  undefined1 auStack_35 [17];
  
  local_3c = param_4;
  if (param_4 == (char *)0x0) {
    local_3c = (char *)thunk_FUN_020836d4(param_3,0);
  }
  if (*param_3 == '/') {
    iVar6 = *(int *)(param_1 + 0x14);
    do {
      param_3 = param_3 + 1;
    } while (*param_3 == '/');
    if (local_3c <= param_3) {
      FUN_0207ed34(param_1,param_2);
      bVar1 = true;
      goto LAB_0207f0a6;
    }
    bVar1 = false;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x3c);
    bVar1 = false;
LAB_0207f0a6:
    if (iVar6 != *(int *)(param_1 + 0x14)) goto LAB_0207f0ae;
  }
  iVar4 = thunk_FUN_02083afc(&DAT_0208f224,param_3,2);
  if (iVar4 == 0) {
    FUN_0207ed34(param_1,param_2);
    return 1;
  }
LAB_0207f0ae:
  if (!bVar1) {
    do {
      do {
        pcVar2 = (char *)thunk_FUN_020836d4(param_3,0x2f);
        if (pcVar2 == (char *)0x0) {
          uVar5 = thunk_FUN_02083a6c(param_3);
        }
        else {
          uVar5 = (int)pcVar2 - (int)param_3;
        }
        if ((0x100 < uVar5) || (iVar6 = FUN_0207efc4(param_1,param_2,iVar6), iVar6 == 0)) {
          return 0;
        }
        do {
          uVar3 = thunk_FUN_02083ed0(param_2 + 0x38,0x100);
          if (uVar5 == uVar3) {
            bVar1 = false;
            iVar4 = thunk_FUN_02083afc(param_2 + 0x38,param_3,uVar5);
            if (iVar4 == 0) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
          FUN_0207eca8(param_2,auStack_35);
          uVar3 = thunk_FUN_02083ed0(auStack_35,0xd);
          if ((uVar5 == uVar3) && (iVar4 = thunk_FUN_02083afc(auStack_35,param_3,uVar5), iVar4 == 0)
             ) {
            bVar1 = true;
LAB_0207f106:
            if ((-1 < (int)((uint)*(byte *)(param_2 + 0xb) << 0x1b)) && (pcVar2 != (char *)0x0)) {
              bVar1 = false;
              goto LAB_0207f116;
            }
          }
          else {
            if (bVar1) goto LAB_0207f106;
LAB_0207f116:
            iVar6 = FUN_0207ee00(param_1,param_2);
          }
          if (iVar6 == 0) {
            return 0;
          }
        } while (!bVar1);
        if (pcVar2 == (char *)0x0) {
          return 1;
        }
        if (local_3c <= pcVar2) {
          return 1;
        }
        if (-1 < (int)((uint)*(byte *)(param_2 + 0xb) << 0x1b)) {
          return 1;
        }
        iVar6 = FUN_0207ed1c(param_2);
        param_3 = pcVar2;
      } while (*pcVar2 != '/');
      do {
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 == '/');
      param_3 = pcVar2;
    } while (pcVar2 < local_3c);
  }
  return 1;
}


// 0x0207f208  fat_fat_directory_chdir

undefined4 FUN_0207f208(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_148 [11];
  byte local_13d;
  
  iVar1 = FUN_0207f07c(param_1,auStack_148,param_2,0);
  if ((iVar1 != 0) && ((int)((uint)local_13d << 0x1b) < 0)) {
    uVar2 = FUN_0207ed1c(auStack_148);
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    return 1;
  }
  return 0;
}


// 0x0207f238  fat_fat_directory_isvalidalias

uint FUN_0207f238(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = thunk_FUN_02083ed0(param_1,0xd);
  if ((0xc < uVar1) || (iVar2 = thunk_FUN_02083f18(param_1,"\\/:;*?\"<>|&+,=[]"), iVar2 != 0)) {
    return 0;
  }
  iVar2 = thunk_FUN_02083ed0(param_1,0xd);
  if (iVar2 != 0) {
    if (*param_1 < 0x20) {
      return 0;
    }
    iVar3 = 0;
    while (iVar3 = iVar3 + 1, iVar2 != iVar3) {
      if (param_1[iVar3] < 0x20) {
        return 0;
      }
    }
  }
  iVar3 = thunk_FUN_020836d4(param_1,0x2e);
  if (iVar3 == 0) {
    uVar1 = 0;
    if (iVar2 - 1U < 8) goto LAB_0207f2b8;
  }
  else {
    iVar2 = thunk_FUN_02083f68(param_1,0x2e);
    if (iVar3 != iVar2) {
      return 0;
    }
    if (7 < (iVar3 - (int)param_1) - 2U) {
      return 0;
    }
    uVar1 = thunk_FUN_02083ed0(iVar3 + 1,0xd);
    if (3 < uVar1) {
      return 0;
    }
    iVar2 = thunk_FUN_02083ed0(iVar3 + 1,0xd);
    uVar1 = 0;
    if (iVar2 != 0) goto LAB_0207f2b8;
  }
  uVar1 = 1;
LAB_0207f2b8:
  return uVar1 ^ 1;
}


// 0x0207f2d4  fat_fat_directory_isvalidlfn

undefined4 FUN_0207f2d4(byte *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = thunk_FUN_02083ed0(param_1,0x100);
  if ((uVar1 < 0x100) && (iVar2 = thunk_FUN_02083f18(param_1,"\\/:*?\"<>|"), iVar2 == 0)) {
    iVar2 = thunk_FUN_02083ed0(param_1,0x100);
    if (iVar2 == 0) {
      return 1;
    }
    if (0x1f < *param_1) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        if (iVar2 == iVar3) {
          return 1;
        }
      } while (0x1f < param_1[iVar3]);
    }
  }
  return 0;
}


// 0x0207f320  fat_fat_directory_entryfromposition

bool FUN_0207f320(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  byte local_54 [32];
  uint local_34;
  int local_30;
  int local_2c;
  
  local_34 = *(uint *)(param_2 + 0x20);
  local_30 = *(int *)(param_2 + 0x24);
  local_2c = *(int *)(param_2 + 0x28);
  iVar3 = *(int *)(param_2 + 0x30);
  iVar1 = *(int *)(param_2 + 0x34);
  uVar5 = *(uint *)(param_2 + 0x2c);
  thunk_FUN_02083058(param_2 + 0x38,0,0x100);
  while( true ) {
    if (local_34 < 2) {
      iVar6 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_54,iVar6 + local_30,local_2c << 5,0x20);
    if (((local_34 == uVar5) && (local_30 == iVar3)) && (local_2c == iVar1)) {
      thunk_FUN_02082ec0(param_2,local_54,0x20);
      bVar7 = true;
    }
    else {
      pbVar2 = (byte *)(param_2 + (local_54[0] & 0xffffffbf) * 0xd + 0x2b);
      piVar4 = &DAT_0208ee48;
      do {
        iVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        *pbVar2 = local_54[iVar6];
        pbVar2 = pbVar2 + 1;
      } while (piVar4 != (int *)&DAT_0208ee7c);
      bVar7 = false;
    }
    iVar6 = FUN_0207ed90(param_1,&local_34,0);
    if (iVar6 == 0) break;
    if (bVar7) {
      if (((local_34 == uVar5) && (local_30 == iVar3)) && (local_2c == iVar1)) {
        iVar1 = FUN_0207eca8(param_2,param_2 + 0x38);
        bVar7 = iVar1 != 0;
      }
      else {
        bVar7 = true;
      }
      return bVar7;
    }
  }
  return false;
}


// 0x0207f430  fat_fat_directory_removeentry

undefined4 FUN_0207f430(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_4c [32];
  uint local_2c;
  int local_28;
  int local_24;
  
  local_2c = *(uint *)(param_2 + 0x20);
  local_28 = *(int *)(param_2 + 0x24);
  local_24 = *(int *)(param_2 + 0x28);
  iVar2 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x30);
  uVar3 = *(uint *)(param_2 + 0x2c);
  while( true ) {
    if (local_2c < 2) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x24) * (local_2c - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_4c,iVar5 + local_28,local_24 << 5,0x20);
    local_4c[0] = 0xe5;
    if (local_2c < 2) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x24) * (local_2c - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d020(*(undefined4 *)(param_1 + 4),local_4c,iVar5 + local_28,local_24 << 5,0x20);
    if ((local_2c == uVar3) && (local_28 == iVar4)) {
      if (iVar2 == local_24) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    iVar5 = FUN_0207ed90(param_1,&local_2c,0);
    if (iVar5 == 0) break;
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}


// 0x0207f4f0  fat_fat_directory_entrystat

void FUN_0207f4f0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_3 = *(undefined4 *)*param_1;
  uVar1 = FUN_0207ed1c(param_2);
  param_3[1] = uVar1;
  if ((int)((uint)*(byte *)(param_2 + 0xb) << 0x1b) < 0) {
    uVar2 = 0x4124;
  }
  else {
    uVar2 = 0x8124;
  }
  if ((int)((uint)*(byte *)(param_2 + 0xb) << 0x1f) < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x92;
  }
  param_3[2] = uVar3 | uVar2;
  *(undefined2 *)(param_3 + 3) = 1;
  *(undefined2 *)((int)param_3 + 0xe) = 1;
  *(undefined2 *)(param_3 + 4) = 2;
  param_3[5] = *param_3;
  param_3[6] = (uint)*(ushort *)(param_2 + 0x1c) |
               (uint)*(byte *)(param_2 + 0x1e) << 0x10 | (uint)*(byte *)(param_2 + 0x1f) << 0x18;
  uVar1 = FUN_0207e898(0,*(undefined2 *)(param_2 + 0x12));
  param_3[7] = uVar1;
  param_3[8] = 0;
  uVar1 = FUN_0207e898(*(undefined2 *)(param_2 + 0x16),*(undefined2 *)(param_2 + 0x18));
  param_3[10] = 0;
  param_3[9] = uVar1;
  uVar1 = FUN_0207e898(*(undefined2 *)(param_2 + 0xe),*(undefined2 *)(param_2 + 0x10));
  param_3[0xb] = uVar1;
  param_3[0xc] = 0;
  param_3[0xd] = 0x200;
  iVar4 = param_3[6] + 0x1ff;
  if (iVar4 < 0) {
    iVar4 = param_3[6] + 0x3fe;
  }
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0xe] = iVar4 >> 9;
  return;
}


// 0x0207f5bc  fat_fat_directory_addentry

undefined4 FUN_0207f5bc(int param_1,byte *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int *piVar5;
  char extraout_r1;
  char extraout_r1_00;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  byte *pbVar12;
  int local_a8;
  uint local_a4;
  byte local_99 [11];
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_7f;
  undefined1 local_7e;
  byte local_79 [32];
  byte local_59 [8];
  byte local_51;
  byte local_50 [4];
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  int local_30;
  int local_2c;
  
  pbVar12 = param_2 + 0x38;
  iVar2 = thunk_FUN_02083ed0(pbVar12,0x100);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_0207f2d4(pbVar12);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = thunk_FUN_02083a6c(pbVar12);
  iVar7 = iVar2 + -1;
  if ((0 < iVar7) && (param_2[iVar2 + 0x37] == 0x20)) {
    pbVar3 = param_2 + iVar2 + 0x37;
    do {
      iVar7 = iVar7 + -1;
      *pbVar3 = 0;
      if (iVar7 < 1) break;
      pbVar8 = pbVar3 + -1;
      pbVar3 = pbVar3 + -1;
    } while (*pbVar8 == 0x20);
  }
  iVar2 = thunk_FUN_02083a6c(pbVar12);
  for (iVar7 = 0; (iVar7 != iVar2 && (param_2[iVar7 + 0x38] == 0x20)); iVar7 = iVar7 + 1) {
  }
  if (0 < iVar7) {
    uVar4 = thunk_FUN_02083a6c(pbVar12 + iVar7);
    thunk_FUN_02082f5c(pbVar12,pbVar12 + iVar7,uVar4);
  }
  iVar2 = thunk_FUN_02083a6c(pbVar12);
  thunk_FUN_02083058(pbVar12 + iVar2,0,0x100 - iVar2);
  iVar2 = FUN_0207efe4(param_1,pbVar12,param_3);
  if (iVar2 != 0) {
    return 0;
  }
  thunk_FUN_02083058(param_2,0x20,0xb);
  iVar2 = thunk_FUN_02083c80(pbVar12,&DAT_0208f224,0x100);
  local_4c = param_3;
  local_40 = param_3;
  if (iVar2 == 0) {
    *param_2 = 0x2e;
  }
  else {
    iVar2 = thunk_FUN_02083c80(pbVar12,&DAT_0208f254,0x100);
    if (iVar2 != 0) {
      iVar2 = FUN_0207f238(pbVar12);
      if (iVar2 != 0) {
        thunk_FUN_02083fb8(pbVar12);
        iVar2 = 0;
        do {
          pbVar3 = param_2 + iVar2;
          bVar6 = pbVar3[0x38];
          pbVar12 = pbVar3;
          iVar7 = iVar2;
          if ((bVar6 == 0x2e) || (bVar6 == 0)) goto joined_r0x0207faf0;
          iVar2 = iVar2 + 1;
          *pbVar3 = bVar6;
        } while (iVar2 != 8);
        iVar7 = 8;
        pbVar3 = param_2 + 8;
        goto LAB_0207f944;
      }
      iVar2 = thunk_FUN_02083ed0(pbVar12,0x100);
      pbVar3 = (byte *)thunk_FUN_02083f68(pbVar12,0x2e);
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)thunk_FUN_020836d4(pbVar12,0);
      }
      iVar9 = 0;
      for (iVar7 = 0; pbVar12 + iVar7 < pbVar3; iVar7 = iVar7 + 1) {
        if (((&DAT_0208ee85)[param_2[iVar7 + 0x38]] & 7) != 0) {
          local_59[iVar9] = param_2[iVar7 + 0x38];
          iVar9 = iVar9 + 1;
        }
        if (5 < iVar9) break;
      }
      if (iVar9 < 8) {
        pbVar3 = local_59 + iVar9;
        do {
          *pbVar3 = 0x5f;
          pbVar3 = pbVar3 + 1;
        } while (pbVar3 != &local_51);
        iVar9 = 8;
      }
      pbVar12 = (byte *)thunk_FUN_02083f68(pbVar12,0x2e);
      if (pbVar12 == (byte *)0x0) {
        local_51 = 0;
        local_50[0] = local_51;
        local_50[1] = local_51;
        local_50[2] = local_51;
        local_50[3] = local_51;
      }
      else {
        local_51 = 0x2e;
        if (iVar9 < 0xc) {
          pbVar3 = pbVar12 + 1;
          local_59[iVar9] = *pbVar12;
          iVar9 = iVar9 + 1;
          if (pbVar3 != (byte *)0x0) {
            pbVar12 = local_59 + iVar9;
            do {
              if (iVar9 == 0xc) break;
              bVar6 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              *pbVar12 = bVar6;
              iVar9 = iVar9 + 1;
              pbVar12 = pbVar12 + 1;
            } while (pbVar3 != (byte *)0x0);
          }
        }
        local_59[iVar9] = 0;
      }
      local_59[5] = 0x7e;
      iVar7 = 0;
      while( true ) {
        iVar7 = iVar7 + 1;
        uVar4 = thunk_FUN_02080494(iVar7,10);
        thunk_FUN_020805c0(uVar4,10);
        local_59[6] = extraout_r1 + '0';
        thunk_FUN_020805c0(iVar7,10);
        local_59[7] = extraout_r1_00 + '0';
        iVar9 = FUN_0207efe4(param_1,local_59,param_3);
        if (iVar9 == 0) break;
        if (iVar7 == 100) {
          return 0;
        }
      }
      if (iVar7 == 100) {
        return 0;
      }
      thunk_FUN_02083fb8(local_59);
      thunk_FUN_02082ec0(param_2,local_59,8);
      thunk_FUN_02082ec0(param_2 + 8,local_50,3);
      iVar7 = 0;
      do {
        if (param_2[iVar7] < 0x20) {
          param_2[iVar7] = 0x20;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 10);
      local_a4 = (uint)*param_2;
      iVar7 = 1;
      do {
        if ((int)(local_a4 << 0x1f) < 0) {
          iVar9 = 0x80;
        }
        else {
          iVar9 = 0;
        }
        pbVar12 = param_2 + iVar7;
        iVar7 = iVar7 + 1;
        local_a4 = iVar9 + (local_a4 >> 1) + (uint)*pbVar12 & 0xff;
      } while (iVar7 != 0xb);
      local_a8 = thunk_FUN_02080380(iVar2 + 0xc,0xd);
      local_a8 = local_a8 + 1;
      local_44 = 0;
      local_48 = 0;
      iStack_3c = 0;
      iStack_38 = 0;
      if (local_a8 == 0) goto LAB_0207f7b0;
      goto LAB_0207f6c4;
    }
    *param_2 = 0x2e;
    param_2[1] = 0x2e;
  }
LAB_0207f6a6:
  local_a8 = 1;
  local_a4 = 0;
LAB_0207f6c4:
  iStack_38 = 0;
  iStack_3c = 0;
  local_44 = 0;
  local_48 = 0;
  iVar7 = 1;
  iVar2 = local_a8;
  do {
    if (local_4c < 2) {
      iVar9 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x24) * (local_4c - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_79,iVar9 + local_48,local_44 << 5,0x20);
    puVar10 = (uint *)(uint)local_79[0];
    if (puVar10 == (uint *)0x0) {
      local_40 = local_4c;
      iStack_3c = local_48;
      iStack_38 = local_44;
      iVar9 = iVar2 + -1;
      bVar1 = true;
    }
    else {
      iVar9 = local_a8;
      if (puVar10 == (uint *)0xe5) {
        if (local_a8 == iVar2) {
          local_40 = local_4c;
          iStack_3c = local_48;
          iStack_38 = local_44;
          puVar10 = &local_40;
        }
        iVar9 = iVar2 + -1;
        if (iVar9 == 0) {
          bVar1 = false;
          goto LAB_0207f6dc;
        }
      }
      iVar7 = FUN_0207ed90(param_1,&local_4c,1,puVar10);
      bVar1 = false;
    }
LAB_0207f6dc:
    if (iVar7 == 0) {
      return 0;
    }
    if (bVar1) {
      *(uint *)(param_2 + 0x20) = local_40;
      *(int *)(param_2 + 0x24) = iStack_3c;
      *(int *)(param_2 + 0x28) = iStack_38;
      iVar9 = iVar9 + 1;
      thunk_FUN_02083058(local_79,0,0x20);
      if (iVar9 != 0) {
        while( true ) {
          *(uint *)(param_2 + 0x2c) = local_4c;
          *(int *)(param_2 + 0x30) = local_48;
          *(int *)(param_2 + 0x34) = local_44;
          iVar2 = FUN_0207ed90(param_1,&local_4c,1,&local_40);
          iVar9 = iVar9 + -1;
          if (local_4c < 2) {
            iVar7 = *(int *)(param_1 + 0x10);
          }
          else {
            iVar7 = *(int *)(param_1 + 0x24) * (local_4c - 2) + *(int *)(param_1 + 0x1c);
          }
          FUN_0207d020(*(undefined4 *)(param_1 + 4),local_79,iVar7 + local_48,local_44 << 5,0x20);
          if (iVar9 == 0) break;
          if (iVar2 == 0) {
            return 0;
          }
        }
        if (iVar2 == 0) {
          return 0;
        }
      }
      goto LAB_0207f7c6;
    }
    iVar2 = iVar9;
  } while (iVar9 != 0);
LAB_0207f7b0:
  *(uint *)(param_2 + 0x20) = local_40;
  *(int *)(param_2 + 0x24) = iStack_3c;
  *(int *)(param_2 + 0x28) = iStack_38;
  *(uint *)(param_2 + 0x2c) = local_4c;
  *(int *)(param_2 + 0x30) = local_48;
  *(int *)(param_2 + 0x34) = local_44;
LAB_0207f7c6:
  local_34 = *(uint *)(param_2 + 0x20);
  local_30 = *(int *)(param_2 + 0x24);
  local_2c = *(int *)(param_2 + 0x28);
  if (0 < local_a8) {
    iVar7 = local_a8 * 0xd + -0x1a;
    iVar2 = local_a8;
    do {
      if (iVar2 == 1) {
        if (local_34 < 2) {
          iVar9 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
        }
        FUN_0207d020(*(undefined4 *)(param_1 + 4),param_2,iVar9 + local_30,local_2c << 5,0x20);
      }
      else {
        if (iVar2 == local_a8) {
          local_99[0] = 0x40;
        }
        else {
          local_99[0] = 0;
        }
        local_99[0] = (char)iVar2 - 1U | local_99[0];
        pbVar12 = param_2 + iVar7 + 0x38;
        iVar9 = 0;
        piVar5 = &DAT_0208ee48;
        do {
          while (*pbVar12 == 0) {
            if ((iVar9 < 2) || (pbVar12[-1] != 0)) {
              iVar11 = *piVar5;
              local_99[iVar11] = 0;
              local_99[iVar11 + 1] = 0;
            }
            else {
              iVar11 = *piVar5;
              local_99[iVar11] = 0xff;
              local_99[iVar11 + 1] = 0xff;
            }
            iVar9 = iVar9 + 1;
            pbVar12 = pbVar12 + 1;
            piVar5 = piVar5 + 1;
            if (iVar9 == 0xd) goto LAB_0207f84c;
          }
          iVar11 = *piVar5;
          iVar9 = iVar9 + 1;
          local_99[iVar11] = *pbVar12;
          local_99[iVar11 + 1] = 0;
          pbVar12 = pbVar12 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar9 != 0xd);
LAB_0207f84c:
        local_8c = (undefined1)local_a4;
        local_8e = 0xf;
        local_8d = 0;
        local_7f = 0;
        local_7e = 0;
        if (local_34 < 2) {
          iVar9 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
        }
        FUN_0207d020(*(undefined4 *)(param_1 + 4),local_99,iVar9 + local_30,local_2c << 5,0x20);
      }
      iVar9 = FUN_0207ed90(param_1,&local_34,0);
      if (iVar9 == 0) {
        return 1;
      }
      iVar2 = iVar2 + -1;
      iVar7 = iVar7 + -0xd;
    } while (iVar2 != 0);
  }
  return 1;
joined_r0x0207faf0:
  for (; iVar7 < 8; iVar7 = iVar7 + 1) {
    *pbVar12 = 0x20;
    pbVar12 = pbVar12 + 1;
  }
LAB_0207f944:
  if ((pbVar3[0x38] != 0x2e) || (bVar6 = pbVar3[0x39], bVar6 == 0)) {
LAB_0207f950:
    if (iVar7 < 0xb) {
      pbVar12 = param_2 + iVar7;
      do {
        iVar7 = iVar7 + 1;
        *pbVar12 = 0x20;
        pbVar12 = pbVar12 + 1;
      } while (iVar7 != 0xb);
    }
    goto LAB_0207f6a6;
  }
  if (iVar7 < 0xb) {
    pbVar12 = param_2 + iVar7;
    pbVar3 = param_2 + iVar2 + 0x3a;
    do {
      *pbVar12 = bVar6;
      bVar6 = *pbVar3;
      iVar7 = iVar7 + 1;
      if (bVar6 == 0) goto LAB_0207f950;
      pbVar12 = pbVar12 + 1;
      pbVar3 = pbVar3 + 1;
    } while (iVar7 != 0xb);
  }
  local_a8 = 1;
  local_a4 = 0;
  goto LAB_0207f6c4;
}

