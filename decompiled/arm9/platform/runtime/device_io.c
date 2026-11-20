/* ARM9 device io — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0208201c  newlib_reentrant_device_seek

void FUN_0208201c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_0208502c(param_2,param_3);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x020830f8  newlib_reentrant_device_open

void FUN_020830f8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_020850fc(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x020834c8  newlib_reentrant_adjust_heap_break

void FUN_020834c8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_0208523c(param_2);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x02083ffc  newlib_reentrant_device_write

void FUN_02083ffc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_020852bc(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x02084048  newlib_reentrant_device_close

void FUN_02084048(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_02084fc0(param_2);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x02084574  newlib_reentrant_device_read

void FUN_02084574(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_020850a8(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x020846c0  newlib_reentrant_device_stat

void FUN_020846c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  DAT_023eb34c = 0;
  iVar1 = FUN_020851cc(param_2,param_3,param_4);
  if ((iVar1 == -1) && (DAT_023eb34c != 0)) {
    *param_1 = DAT_023eb34c;
  }
  return;
}


// 0x02084e34  set_default_device_slot

void FUN_02084e34(int param_1)

{
  if (param_1 - 3U < 0xe) {
    DAT_0208fc00 = param_1;
  }
  return;
}


// 0x02084e4c  register_named_device

int FUN_02084e4c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = &DAT_0208fbc0;
  uVar5 = *param_1;
  iVar1 = 3;
  while( true ) {
    iVar4 = iVar1;
    uVar3 = *(undefined4 *)puVar6[3];
    iVar1 = FUN_020837ec(uVar3,uVar5);
    puVar6 = puVar6 + 1;
    if (iVar1 == 0) {
      iVar1 = FUN_02083a6c(uVar3);
      iVar2 = FUN_02083a6c(uVar5);
      if (iVar1 == iVar2) break;
    }
    iVar1 = FUN_020837ec(uVar3,"stdnull");
    if (iVar1 == 0) break;
    iVar1 = iVar4 + 1;
    if (iVar4 + 1 == 0x10) {
      return iVar4 + -0x10;
    }
  }
  (&DAT_0208fbc0)[iVar4] = param_1;
  return iVar4;
}


// 0x02084ee0  select_device_for_path_prefix

int FUN_02084ee0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = &DAT_0208fbc0;
  iVar5 = 0;
  do {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)*piVar4;
      iVar1 = FUN_02083a6c(uVar3);
      iVar2 = FUN_02083c80(uVar3,param_1,iVar1);
      if (iVar2 == 0) {
        if ((*(byte *)(param_1 + iVar1) == 0x3a) ||
           ((*(byte *)(param_1 + iVar1) - 0x30 < 10 && (*(char *)(param_1 + iVar1 + 1) == ':')))) {
          if (iVar5 == -1) {
            return DAT_0208fc00;
          }
          return iVar5;
        }
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
    if (iVar5 == 0x10) {
      return DAT_0208fc00;
    }
  } while( true );
}


// 0x02084f84  unregister_device_by_path_prefix

int FUN_02084f84(void)

{
  int iVar1;
  
  iVar1 = FUN_02084ee0();
  if (iVar1 != -1) {
    (&DAT_0208fbc0)[iVar1] = &DAT_0208ef8c;
    iVar1 = 0;
  }
  return iVar1;
}


// 0x02084fc0  close_device_descriptor

int * FUN_02084fc0(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_1 != (int *)0xffffffff) {
    piVar1 = (int *)0xffffffff;
    if (*(code **)((&DAT_0208fbc0)[*param_1] + 0xc) != (code *)0x0) {
      piVar1 = (int *)(**(code **)((&DAT_0208fbc0)[*param_1] + 0xc))(&DAT_0208f3a0,param_1[1]);
    }
    FUN_020826fc(param_1);
  }
  return piVar1;
}


// 0x0208502c  seek_device_descriptor

undefined4 * FUN_0208502c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  pcVar2 = DAT_0208f3a0;
  if (param_1 != (undefined4 *)0xffffffff) {
    puVar3 = param_1;
    if (2 < (int)param_1) {
      puVar3 = (undefined4 *)*param_1;
    }
    pcVar2 = *(code **)((&DAT_0208fbc0)[(int)puVar3] + 0x1c);
    uVar1 = 0xffffffff;
    if (2 < (int)param_1) {
      uVar1 = param_1[1];
    }
    bVar4 = pcVar2 == (code *)0x0;
    if (bVar4) {
      pcVar2 = (code *)&SUB_00000058;
    }
    param_1 = (undefined4 *)0xffffffff;
    if (!bVar4) {
      param_1 = (undefined4 *)(*pcVar2)(&DAT_0208f3a0,uVar1,param_2);
      pcVar2 = DAT_0208f3a0;
    }
  }
  DAT_0208f3a0 = pcVar2;
  return param_1;
}


// 0x020850a8  read_from_device_descriptor

undefined4 FUN_020850a8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 != (int *)0xffffffff) {
    if (*(code **)((&DAT_0208fbc0)[*param_1] + 0x18) != (code *)0x0) {
      uVar1 = (**(code **)((&DAT_0208fbc0)[*param_1] + 0x18))(0,param_1[1],param_2,param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// 0x020850fc  open_device_path

int * FUN_020850fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = FUN_02084ee0();
  if ((iVar2 == -1) || (*(int *)((&DAT_0208fbc0)[iVar2] + 8) == 0)) {
    DAT_0208f3a0 = 0x58;
    piVar4 = (int *)0xffffffff;
    uVar1 = DAT_0208f3a0;
  }
  else {
    piVar3 = (int *)FUN_02082724(*(int *)((&DAT_0208fbc0)[iVar2] + 4) + 8);
    if (piVar3 == (int *)0x0) {
      param_2 = 0x3f;
    }
    piVar4 = (int *)0xffffffff;
    uVar1 = param_2;
    if (piVar3 != (int *)0x0) {
      iVar5 = (&DAT_0208fbc0)[iVar2];
      *piVar3 = iVar2;
      piVar3[1] = (int)(piVar3 + 2);
      iVar2 = (**(code **)(iVar5 + 8))(&DAT_0208f3a0,piVar3 + 2,param_1,param_2,param_3);
      piVar4 = piVar3;
      uVar1 = DAT_0208f3a0;
      if (iVar2 == -1) {
        FUN_020826fc(piVar3);
        piVar4 = (int *)0xffffffff;
        uVar1 = DAT_0208f3a0;
      }
    }
  }
  DAT_0208f3a0 = uVar1;
  return piVar4;
}


// 0x020851cc  query_device_descriptor_stat

undefined4 FUN_020851cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0xffffffff) {
    puVar2 = param_1;
    if (2 < (int)param_1) {
      puVar2 = (undefined4 *)*param_1;
    }
    uVar1 = 0xffffffff;
    if (2 < (int)param_1) {
      uVar1 = param_1[1];
    }
    if (*(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x14) != (code *)0x0) {
      uVar1 = (**(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x14))
                        (&DAT_0208f3a0,uVar1,param_2,param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// 0x0208523c  adjust_newlib_heap_break

undefined1 * FUN_0208523c(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (DAT_020b4cdc == (undefined1 *)0x0) {
    if (DAT_020b4ce4 == (undefined1 *)0x0) {
      DAT_020b4cdc = (undefined1 *)0x23eb350;
    }
    else {
      DAT_020b4cdc = DAT_020b4ce4;
    }
  }
  puVar3 = DAT_020b4ce0;
  if (DAT_020b4ce0 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)register0x00000054;
  }
  puVar1 = DAT_020b4cdc;
  puVar2 = DAT_020b4cdc + param_1;
  if (puVar3 < DAT_020b4cdc + param_1) {
    DAT_0208f3a0 = 0xc;
    puVar1 = (undefined1 *)0xffffffff;
    puVar2 = DAT_020b4cdc;
  }
  DAT_020b4cdc = puVar2;
  return puVar1;
}


// 0x020852bc  write_to_device_descriptor

undefined4 FUN_020852bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0xffffffff) {
    puVar2 = param_1;
    if (2 < (int)param_1) {
      puVar2 = (undefined4 *)*param_1;
    }
    uVar1 = 0xffffffff;
    if (2 < (int)param_1) {
      uVar1 = param_1[1];
    }
    if (*(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x10) != (code *)0x0) {
      uVar1 = (**(code **)((&DAT_0208fbc0)[(int)puVar2] + 0x10))
                        (&DAT_0208f3a0,uVar1,param_2,param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// 0x02085394  normalize_device_directory_path

undefined4 FUN_02085394(undefined4 *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 *puVar6;
  
  iVar2 = FUN_02083ed0(param_2,param_4);
  if (param_4 <= iVar2) {
LAB_02085504:
    *param_1 = 0x5b;
    return 0xffffffff;
  }
  puVar6 = (undefined1 *)(param_2 + iVar2);
  cVar1 = puVar6[-1];
  if (cVar1 != '/') {
    *(undefined1 *)(param_2 + iVar2) = 0x2f;
  }
  cVar5 = *param_3;
  if (cVar1 != '/') {
    puVar6 = puVar6 + 1;
  }
  if (cVar5 == '/') {
    iVar3 = FUN_020836d4(param_2,0x2f);
    puVar6 = (undefined1 *)(iVar3 + 1);
    goto LAB_02085460;
  }
  do {
    iVar3 = FUN_020836d4(param_3,0x2f);
    if (iVar3 == 0) {
      iVar3 = FUN_020836d4(param_3,0);
    }
    else {
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 - (int)param_3;
    if (iVar3 == 0) {
      if (puVar6[-1] == '/') {
        return 0;
      }
      *puVar6 = 0x2f;
      return 0;
    }
    if (cVar5 == '.') {
      if (param_3[1] != '\0' && param_3[1] != '/') {
        iVar4 = FUN_02083c80(param_3,&DAT_0208efe0,2);
        goto joined_r0x02085494;
      }
    }
    else {
      iVar4 = FUN_02083c80(param_3,&DAT_0208efe0,2);
joined_r0x02085494:
      if ((iVar4 == 0) && (param_3[2] == '\0' || param_3[2] == '/')) {
        if (puVar6[-1] == '/') {
          puVar6[-1] = 0;
        }
        iVar2 = FUN_02083f68(param_2,0x2f);
        if (iVar2 == 0) {
          *param_1 = 2;
          return 0xffffffff;
        }
        puVar6 = (undefined1 *)(iVar2 + 1);
        iVar2 = iVar2 - param_2;
      }
      else {
        iVar2 = iVar2 + iVar3;
        if (param_4 <= iVar2) goto LAB_02085504;
        FUN_02083dbc(puVar6,param_3,iVar3);
        puVar6 = puVar6 + iVar3;
      }
    }
    *puVar6 = 0;
    param_3 = param_3 + iVar3;
    cVar5 = *param_3;
LAB_02085460:
    while (cVar5 == '/') {
      param_3 = param_3 + 1;
      cVar5 = *param_3;
    }
  } while( true );
}


// 0x0208553c  change_working_directory_on_device

undefined4 FUN_0208553c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_410 [1024];
  
  uVar1 = FUN_02083ed0(param_1,0x401);
  if (uVar1 < 0x400) {
    iVar2 = FUN_020836d4(param_1,0x3a);
    if (iVar2 == 0) {
      FUN_02083dbc(auStack_410,&DAT_0208fc04,0x400);
    }
    else {
      FUN_02083dbc(auStack_410,param_1,0x400);
      param_1 = FUN_020836d4(param_1,0x3a);
      param_1 = param_1 + 1;
    }
    iVar2 = FUN_020836d4(auStack_410,0x3a);
    if (*(char *)(iVar2 + 1) == '/') {
      iVar2 = FUN_02085394(&DAT_0208f3a0,auStack_410,param_1,0x400);
      if (iVar2 != -1) {
        iVar2 = FUN_02084ee0(auStack_410);
        if ((iVar2 < 0) || (*(code **)((&DAT_0208fbc0)[iVar2] + 0x2c) == (code *)0x0)) {
          DAT_0208f3a0 = 0x13;
          return 0xffffffff;
        }
        iVar3 = (**(code **)((&DAT_0208fbc0)[iVar2] + 0x2c))(&DAT_0208f3a0,auStack_410);
        if (iVar3 != -1) {
          FUN_02084e34(iVar2);
          FUN_02083dbc(&DAT_0208fc04,auStack_410,0x400);
          return 0;
        }
      }
    }
    else {
      DAT_0208f3a0 = 2;
    }
  }
  else {
    DAT_0208f3a0 = 0x5b;
  }
  return 0xffffffff;
}


// 0x020856f0  devoptab_read_next_directory_entry

undefined4 FUN_020856f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  uVar2 = 0xffffffff;
  uVar1 = DAT_0208f3a0;
  if (param_1 != (int *)0x0) {
    pcVar3 = *(code **)((&DAT_0208fbc0)[*param_1] + 0x44);
    if (pcVar3 == (code *)0x0) {
      param_3 = 0x58;
    }
    uVar2 = 0xffffffff;
    uVar1 = param_3;
    if (pcVar3 != (code *)0x0) {
      uVar2 = (*pcVar3)(&DAT_0208f3a0,param_1,param_2);
      uVar1 = DAT_0208f3a0;
    }
  }
  DAT_0208f3a0 = uVar1;
  return uVar2;
}


// 0x02085760  devoptab_close_directory

undefined4 FUN_02085760(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    pcVar1 = *(code **)((&DAT_0208fbc0)[*param_1] + 0x48);
    bVar3 = pcVar1 == (code *)0x0;
    if (bVar3) {
      pcVar1 = (code *)&SUB_00000058;
    }
    uVar2 = 0xffffffff;
    if (!bVar3) {
      uVar2 = (*pcVar1)(&DAT_0208f3a0,param_1);
      pcVar1 = DAT_0208f3a0;
    }
    DAT_0208f3a0 = pcVar1;
    FUN_020826fc(param_1);
  }
  return uVar2;
}


// 0x020857d4  devoptab_open_directory

int * FUN_020857d4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_02084ee0();
  if ((iVar1 == -1) || (*(int *)((&DAT_0208fbc0)[iVar1] + 0x3c) == 0)) {
    piVar2 = (int *)0x0;
    DAT_0208f3a0 = 0x58;
  }
  else {
    piVar2 = (int *)FUN_02082724(*(int *)((&DAT_0208fbc0)[iVar1] + 0x38) + 8);
    if (piVar2 == (int *)0x0) {
      DAT_0208f3a0 = 0x3f;
    }
    else {
      piVar2[1] = (int)(piVar2 + 2);
      *piVar2 = iVar1;
      iVar1 = (**(code **)((&DAT_0208fbc0)[iVar1] + 0x3c))(&DAT_0208f3a0,piVar2,param_1);
      if (iVar1 == 0) {
        FUN_020826fc(piVar2);
        piVar2 = (int *)0x0;
      }
    }
  }
  return piVar2;
}

