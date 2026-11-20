/* ARM9 rom browser — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02002088  select_previous_rom_browser_page

void FUN_02002088(void)

{
  if (DAT_02098fe0 == 0) {
    DAT_02098fe0 = DAT_02098fd8;
  }
  DAT_02098fe0 = DAT_02098fe0 + -1;
  DAT_02098fcc = 1;
  return;
}


// 0x02002990  render_rom_directory_page

void FUN_02002990(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_35 [29];
  
  DAT_02098fdc = 0;
  if (DAT_02098ff0 != (int *)0x0) {
    piVar3 = DAT_02098ff0;
    if (param_1 * 0x10 != 0) {
      iVar2 = 1;
      do {
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)0x0) {
          DAT_02098fdc = 0;
          return;
        }
        bVar5 = param_1 * 0x10 != iVar2;
        iVar2 = iVar2 + 1;
      } while (bVar5);
    }
    FUN_0200d9ec(3);
    iVar2 = 4;
    do {
      if (piVar3[2] == 2) {
        FUN_02083a04(auStack_35,&DAT_0208f150,0x1d);
        FUN_02083bb4(auStack_35,piVar3 + 3,0x1b);
        FUN_0208395c(auStack_35,&DAT_0208f154,0x1d);
      }
      else {
        FUN_02083a04(auStack_35,piVar3 + 3,0x1d);
      }
      iVar4 = iVar2 + 1;
      FUN_0200dae0(auStack_35,iVar2);
      piVar3 = (int *)*piVar3;
      DAT_02098fdc = DAT_02098fdc + 1;
    } while ((piVar3 != (int *)0x0) && (iVar2 = iVar4, iVar4 != 0x14));
    if (DAT_02098fcc != 0) {
      FUN_02006b90(DAT_0208f344);
      uVar1 = DAT_02098fdc + 3U & 0xff;
      DAT_02098fe4 = uVar1 - 4;
      DAT_0208f344 = (undefined1)(DAT_02098fdc + 3U);
      FUN_02006784(uVar1);
      DAT_02098fcc = 0;
    }
    FUN_0200db8c(param_1 + 1,0x15,0x1a);
    FUN_0200da3c(&DAT_0208f2fc,0x15,0x1c);
    FUN_0200db8c(DAT_02098fd8,0x15,0x1e);
  }
  return;
}


// 0x0200311c  free_rom_directory_list

void FUN_0200311c(void)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_02098ff0 != (int *)0x0) {
    piVar2 = (int *)DAT_02098ff0[1];
    while (piVar1 = piVar2, piVar1 != (int *)0x0) {
      DAT_02098ff0 = piVar1;
      piVar2 = (int *)piVar1[1];
    }
    do {
      piVar2 = (int *)*DAT_02098ff0;
      FUN_020826fc();
      DAT_02098ff0 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  DAT_02098fd8 = 0;
  DAT_02098ff0 = (int *)0x0;
  DAT_02098ff4 = 0;
  DAT_02098fd4 = 0;
  return;
}


// 0x020031a4  add_rom_browser_entry

void FUN_020031a4(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = FUN_02083a6c();
  if (param_2 != 2) {
    iVar5 = param_1 + iVar2 + -4;
    iVar2 = FUN_02083638(&DAT_0208f20c,iVar5);
    if (((iVar2 != 0) && (iVar2 = FUN_02083638(&DAT_0208f214,iVar5), iVar2 != 0)) &&
       (iVar2 = FUN_02083638(&DAT_0208f21c,iVar5), iVar2 != 0)) {
      return;
    }
  }
  puVar4 = DAT_02098ff4;
  if (DAT_02098ff4 == (undefined4 *)0x0) {
    DAT_02098ff4 = (undefined4 *)FUN_02082724(0x10c);
    DAT_02098ff4[1] = 0;
  }
  else {
    uVar3 = FUN_02082724(0x10c);
    *puVar4 = uVar3;
    puVar4 = (undefined4 *)*DAT_02098ff4;
    puVar4[1] = DAT_02098ff4;
    DAT_02098ff4 = puVar4;
  }
  FUN_020838bc(DAT_02098ff4 + 3,param_1);
  puVar1 = DAT_02098ff4;
  puVar4 = DAT_02098ff0;
  DAT_02098ff4[2] = param_2;
  *puVar1 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    DAT_02098ff0 = puVar1;
  }
  DAT_02098fd4 = DAT_02098fd4 + 1;
  return;
}


// 0x020032a8  enumerate_rom_browser_directory

void FUN_020032a8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_54 [8];
  uint local_4c;
  
  FUN_0200311c();
  DAT_023cb614 = FUN_020857d4(&DAT_0208f224);
  while (iVar1 = FUN_020856f0(DAT_023cb614,&DAT_023cb510,auStack_54), iVar1 == 0) {
    while (iVar1 = FUN_020837ec(&DAT_023cb510,&DAT_0208f224), iVar1 != 0) {
      if ((local_4c & 0x4000) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 2;
      }
      FUN_020031a4(&DAT_023cb510,uVar2);
      iVar1 = FUN_020856f0(DAT_023cb614,&DAT_023cb510,auStack_54);
      if (iVar1 != 0) goto LAB_02003330;
    }
  }
LAB_02003330:
  DAT_02098fd8 = (DAT_02098fd4 - 1U >> 4) + 1;
  DAT_02098fe0 = 0;
  DAT_02098fe4 = 0;
  FUN_02006b90(DAT_0208f344);
  DAT_0208f344 = 4;
  FUN_02085760(DAT_023cb614);
  return;
}


// 0x020034b0  run_rom_browser_event_loop

undefined4 FUN_020034b0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_0208f346 != '\0') {
    iVar5 = thunk_FUN_02072cdc();
    if (iVar5 == 0) {
      if (DAT_0208f346 != '\0') {
        DAT_0208f344 = 4;
        return 1;
      }
    }
    else {
      DAT_0208f346 = '\0';
    }
  }
  DAT_0208f344 = 4;
  FUN_020032a8();
  FUN_02006784(DAT_0208f344);
  iVar4 = 0;
  FUN_02002990(DAT_02098fe0);
  iVar5 = 0;
  if (param_1 != 0) goto LAB_02003610;
LAB_02003504:
  thunk_FUN_0207fb90();
  uVar1 = thunk_FUN_0207fb70();
  if ((uVar1 & 0x80) == 0) goto LAB_02003644;
LAB_02003518:
  uVar3 = (uint)DAT_0208f344;
  if (uVar3 < 0x13) {
    if ((uVar3 < DAT_02098fdc + 3U) && (7 < iVar5 - 1U)) {
      FUN_02002be8();
    }
    iVar5 = iVar5 + 1;
  }
  else if (uVar3 == 0x13) {
    if ((DAT_02098fd0 & 0x80) != 0) goto LAB_02003644;
    FUN_02002b8c();
    iVar5 = 0;
  }
  if ((uVar1 & 0x40) == 0) goto LAB_02003650;
  do {
    if (DAT_0208f344 < 5) {
      if (DAT_0208f344 != 4) goto LAB_02003568;
      if ((DAT_02098fd0 & 0x40) != 0) goto LAB_02003650;
      FUN_02002088();
      iVar4 = 0;
    }
    else if (iVar4 - 1U < 8) {
LAB_02003568:
      iVar4 = iVar4 + 1;
    }
    else {
      FUN_02002c28();
      iVar4 = iVar4 + 1;
    }
    while( true ) {
      if (((uVar1 & 0x20) != 0) && ((DAT_02098fd0 & 0x20) == 0)) {
        FUN_02002088();
        thunk_FUN_0208031c();
      }
      if (((uVar1 & 0x10) != 0) && ((DAT_02098fd0 & 0x10) == 0)) {
        FUN_02002b8c();
        thunk_FUN_0208031c();
      }
      if (((uVar1 & 2) != 0) && ((DAT_02098fd0 & 2) == 0)) {
        FUN_0208553c(&DAT_0208f254);
        FUN_020032a8();
        FUN_02006b90(DAT_0208f344);
        DAT_0208f344 = 4;
        FUN_02006784(4);
        thunk_FUN_0208031c();
        thunk_FUN_0208031c();
      }
      if ((uVar1 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (DAT_02098fd0 ^ 1) & 1;
      }
      if ((((uVar1 & 4) != 0) && ((DAT_02098fd0 & 4) == 0)) && (param_1 != 0)) {
        FUN_02006b90(DAT_0208f344);
        FUN_0200311c();
        DAT_02098fd0 = uVar1;
        return 2;
      }
      DAT_02098fe4 = DAT_0208f344 - 4;
      if (uVar3 != 0) {
        iVar2 = FUN_020033a4(DAT_02098fe4 + DAT_02098fe0 * 0x10);
        thunk_FUN_0208031c();
        thunk_FUN_0208031c();
        thunk_FUN_0208031c();
        if (iVar2 != 0) {
          thunk_FUN_0208031c();
          thunk_FUN_0208031c();
          thunk_FUN_0208031c();
          DAT_02098fd0 = uVar1;
          FUN_0200311c();
          return 1;
        }
        FUN_02006784(DAT_0208f344);
      }
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      DAT_02098fd0 = uVar1;
      FUN_02002990(DAT_02098fe0);
      if (param_1 == 0) goto LAB_02003504;
LAB_02003610:
      FUN_0200da3c("[A]     : Start Game",0x15,1);
      FUN_0200da3c("[SELECT]: Continue",0x16,1);
      thunk_FUN_0207fb90();
      uVar1 = thunk_FUN_0207fb70();
      if ((uVar1 & 0x80) != 0) goto LAB_02003518;
LAB_02003644:
      iVar5 = 0;
      if ((uVar1 & 0x40) != 0) break;
LAB_02003650:
      iVar4 = 0;
    }
  } while( true );
}


// 0x02006784  draw_rom_browser_row_highlight

void FUN_02006784(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 * 0x40;
  *(undefined2 *)(param_1 + 0x6201000) = 0x4b;
  *(undefined2 *)(param_1 + 0x620103e) = 1099;
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 2;
    *(undefined2 *)(iVar2 + 0x6201002) = 0x4c;
  } while (iVar1 != 0x3c);
  return;
}

