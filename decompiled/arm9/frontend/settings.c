/* ARM9 settings — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x02000d10  helper_for_run_configuration_menu

void FUN_02000d10(void)

{
  uint uVar1;
  
  DAT_0b00003c = &DAT_02006a58;
  FUN_020075bc(0);
  FUN_020075bc(1);
  FUN_02009570();
  FUN_02006a44();
  uVar1 = DAT_023cb610 >> 0xc & 3;
  if (uVar1 == 1) {
    DAT_0b000040 = FUN_02000568;
    DAT_0b000038 = FUN_02000a2c;
    return;
  }
  if (uVar1 != 0) {
    if (uVar1 == 2) {
      DAT_0b000038 = (code *)&DAT_02000bbc;
    }
    return;
  }
  DAT_0b000040 = (code *)&DAT_02000558;
  DAT_0b000038 = FUN_02000868;
  return;
}


// 0x020020c4  advance_configuration_value

void FUN_020020c4(int param_1)

{
  uint uVar1;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
  case 1:
    DAT_023cb610 = *(uint *)(param_1 + 8) ^ DAT_023cb610;
    return;
  case 2:
  case 3:
    uVar1 = *(uint *)(param_1 + 8);
    DAT_023cb610 = DAT_023cb610 & ~(3 << (uVar1 & 0xff)) |
                   ((DAT_023cb610 >> (uVar1 & 0xff) & 3) + 1) % 3 << (uVar1 & 0xff);
  }
  return;
}


// 0x020023ec  draw_on_off_option_text

void FUN_020023ec(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  param_2 = param_2 + 8;
  switch(param_1[1]) {
  case 0:
    FUN_0200da3c(*param_1,param_2,1);
    pcVar3 = "on   ";
    pcVar4 = "off  ";
    uVar5 = param_1[2] & DAT_023cb610;
    break;
  case 1:
    FUN_0200da3c(*param_1,param_2,1);
    pcVar3 = "HW   ";
    pcVar4 = "SW   ";
    uVar5 = param_1[2] & DAT_023cb610;
    break;
  case 2:
    FUN_0200da3c(*param_1,param_2,1);
    uVar5 = DAT_023cb610 >> (param_1[2] & 0xff) & 3;
    if (uVar5 == 0) {
      pcVar3 = "off  ";
    }
    else if (uVar5 == 1) {
      pcVar3 = "on   ";
    }
    else {
      pcVar3 = "auto ";
    }
    goto code_r0x0200da3c;
  case 3:
    FUN_0200da3c(*param_1,param_2,1);
    uVar5 = DAT_023cb610 >> (param_1[2] & 0xff) & 3;
    if (uVar5 == 0) {
      pcVar3 = "USA";
    }
    else if (uVar5 == 1) {
      pcVar3 = "JAP";
    }
    else {
      pcVar3 = "EUR";
    }
    goto code_r0x0200da3c;
  default:
    return;
  }
  if (uVar5 == 0) {
    pcVar3 = pcVar4;
  }
code_r0x0200da3c:
  uVar2 = DAT_020b4c54;
  if (pcVar3 == (char *)0x0) {
    return;
  }
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar6 = DAT_020b4c58 + (param_2 * 0x20 + 0x16) * 2;
  uVar5 = 0;
  do {
    *(ushort *)(uVar5 * 2 + iVar6) = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
    uVar5 = uVar5 + 1;
    cVar1 = pcVar3[uVar5];
  } while (uVar5 < 0xff && cVar1 != '\0');
  return;
}


// 0x02002c68  run_configuration_menu

undefined4 FUN_02002c68(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar1 = DAT_023cb610;
  FUN_0200d8c4();
  thunk_FUN_02006bb0();
  FUN_0200da3c("Configuration",5,1);
  FUN_0200da3c("______________________________",6,1);
  if (param_1 == 0) {
    FUN_0200da3c("[A]:     Change Option",0x15,1);
    FUN_0200da3c("[SELECT]:Continue",0x16,1);
  }
  else {
    FUN_0200da3c("[A]:     Change Option",0x15,1);
    FUN_0200da3c("[SELECT]:Continue Game",0x16,1);
  }
  DAT_02098fd0 = 0;
  while( true ) {
    thunk_FUN_0207fb90();
    puVar5 = &DAT_02085a10;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      FUN_020023ec(puVar5,iVar3);
      puVar5 = puVar5 + 0xc;
      iVar3 = iVar4;
    } while (iVar4 != 10);
    FUN_02006784(DAT_02098fe8 + 8);
    uVar2 = thunk_FUN_0207fb70();
    if (((uVar2 & 0x40) == 0) || ((DAT_02098fd0 & 0x40) != 0)) {
      if (((uVar2 & 0x80) != 0) && (((DAT_02098fd0 & 0x80) == 0 && (DAT_02098fe8 < 9)))) {
        FUN_02002b2c();
      }
    }
    else if (DAT_02098fe8 != 0) {
      FUN_02002b5c();
    }
    if (((uVar2 & 1) != 0) && ((DAT_02098fd0 & 1) == 0)) {
      FUN_020020c4(&DAT_02085a10 + DAT_02098fe8 * 0xc);
    }
    DAT_02098fd0 = uVar2;
    if ((uVar2 & 4) != 0) break;
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
  }
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_02006b90(DAT_02098fe8 + 8);
  thunk_FUN_0208031c();
  if (iVar1 != DAT_023cb610) {
    FUN_02000d10();
  }
  thunk_FUN_0208031c();
  DAT_02098fd0 = 0;
  if (param_1 != 0) {
    FUN_0200d8c4();
    thunk_FUN_02006bb0();
    FUN_020027d0();
  }
  return 1;
}

