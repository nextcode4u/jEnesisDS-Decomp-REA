/* ARM9 save states — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x02002e54  display_savestate_slot_status

undefined4 FUN_02002e54(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  DAT_02098fd0 = 0;
  if (param_1 == 1) {
    uVar3 = *(uint *)(DAT_02098fc8 + 600);
    thunk_FUN_0208031c();
    FUN_0200d9ec(0xe);
    FUN_0200da3c("Savestate Slot",0xe,8);
    uVar3 = uVar3 >> 5 & 1;
    FUN_0200db8c(1,0xe,0x17);
    uVar4 = uVar3 ^ 1;
    if (uVar3 == 0) goto LAB_02002eac;
  }
  else {
    if ((param_1 != 2) || ((*(uint *)(DAT_02098fc8 + 600) & 0x40) == 0)) {
      thunk_FUN_0208031c();
      FUN_0200d9ec(0xe);
      FUN_0200da3c("Savestate Slot",0xe,8);
      FUN_0200db8c(param_1,0xe,0x17);
      uVar4 = 1;
      goto LAB_02002eac;
    }
    thunk_FUN_0208031c();
    FUN_0200d9ec(0xe);
    FUN_0200da3c("Savestate Slot",0xe,8);
    FUN_0200db8c(2,0xe,0x17);
    uVar4 = 0;
  }
  FUN_0200da3c(&DAT_0208f1bc,0x11,0xe);
LAB_02002eac:
  FUN_0200da3c(&DAT_0208f1c4,0x12,0xe);
  FUN_0200da3c("CANCEL",0x13,0xd);
  FUN_02006784(0x13);
  thunk_FUN_0208031c();
  uVar3 = 2;
  while( true ) {
    thunk_FUN_0207fb90();
    FUN_02006784(uVar3 + 0x11);
    uVar1 = thunk_FUN_0207fb70();
    if ((((uVar1 & 0x40) != 0) && ((DAT_02098fd0 & 0x40) == 0)) && (uVar4 < uVar3)) {
      FUN_02006b90(uVar3 + 0x11);
      uVar3 = uVar3 - 1;
    }
    if ((((uVar1 & 0x80) != 0) && ((DAT_02098fd0 & 0x80) == 0)) && (uVar3 < 2)) {
      FUN_02006b90(uVar3 + 0x11);
      uVar3 = uVar3 + 1;
    }
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (DAT_02098fd0 ^ 1) & 1;
    }
    DAT_02098fd0 = uVar1;
    if ((uVar1 & 4) != 0) break;
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    if (uVar2 != 0) {
      FUN_02006b90(uVar3 + 0x11);
      if (uVar3 == 0) {
        FUN_0200da3c("Loading.. DONT switch off!",0xf,1);
        FUN_0200d13c(param_1);
        DAT_0b000024 = 0;
      }
      else if (uVar3 == 1) {
        FUN_0200da3c("Saving... DONT switch off!",0xf);
        if (param_1 == 1) {
          *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x20;
        }
        else if (param_1 == 2) {
          *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x40;
        }
        FUN_0200d4c8(param_1);
      }
LAB_02002fac:
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      thunk_FUN_02006bb0();
      thunk_FUN_0208031c();
      FUN_020027d0();
      thunk_FUN_0208031c();
      thunk_FUN_0208031c();
      return 1;
    }
  }
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_02006b90(0x13);
  goto LAB_02002fac;
}


// 0x02004438  helper_for_write_emulator_savestate

undefined4 FUN_02004438(void)

{
  return DAT_02099008;
}


// 0x02004448  helper_for_load_emulator_savestate

void FUN_02004448(undefined4 param_1)

{
  DAT_02099008 = param_1;
  return;
}


// 0x02004c18  helper_for_prepare_savestate_header_and_regions

undefined * FUN_02004c18(void)

{
  return &DAT_0b00161c;
}


// 0x02004f70  helper_for_write_emulator_savestate

void FUN_02004f70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x420) - *(int *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x424) - *(int *)(param_1 + 0x400);
  *(char *)(param_1 + 0x427) = (char)((uint)iVar2 >> 0x18);
  *(char *)(param_1 + 0x421) = (char)((uint)iVar1 >> 8);
  *(char *)(param_1 + 0x422) = (char)((uint)iVar1 >> 0x10);
  *(char *)(param_1 + 0x423) = (char)((uint)iVar1 >> 0x18);
  *(char *)(param_1 + 0x425) = (char)((uint)iVar2 >> 8);
  *(char *)(param_1 + 0x426) = (char)((uint)iVar2 >> 0x10);
  *(char *)(param_1 + 0x420) = (char)iVar1;
  *(char *)(param_1 + 0x424) = (char)iVar2;
  return;
}


// 0x0200500c  helper_for_load_emulator_savestate

void FUN_0200500c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x420) + *(int *)(param_1 + 0x400);
  iVar2 = *(int *)(param_1 + 0x424) + *(int *)(param_1 + 0x400);
  *(char *)(param_1 + 0x427) = (char)((uint)iVar2 >> 0x18);
  *(char *)(param_1 + 0x421) = (char)((uint)iVar1 >> 8);
  *(char *)(param_1 + 0x422) = (char)((uint)iVar1 >> 0x10);
  *(char *)(param_1 + 0x423) = (char)((uint)iVar1 >> 0x18);
  *(char *)(param_1 + 0x425) = (char)((uint)iVar2 >> 8);
  *(char *)(param_1 + 0x426) = (char)((uint)iVar2 >> 0x10);
  *(char *)(param_1 + 0x420) = (char)iVar1;
  *(char *)(param_1 + 0x424) = (char)iVar2;
  return;
}


// 0x02005164  helper_for_load_emulator_savestate

void FUN_02005164(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)(**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x44));
  DAT_02099044 = piVar1;
  *(char *)(param_1 + 0x54) = (char)*piVar1;
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)((int)piVar1 + 1);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)((int)piVar1 + 2);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)((int)piVar1 + 3);
  uVar2 = CONCAT13(*(undefined1 *)(param_1 + 0x47),
                   CONCAT12(*(undefined1 *)(param_1 + 0x46),
                            CONCAT11(*(undefined1 *)(param_1 + 0x45),*(undefined1 *)(param_1 + 0x44)
                                    )));
  uVar4 = uVar2 & ~piVar1[1];
  *(char *)(param_1 + 0x9e) = (char)(uVar4 >> 0x10);
  *(char *)(param_1 + 0x9c) = (char)uVar4;
  *(char *)(param_1 + 0x9d) = (char)(uVar4 >> 8);
  *(char *)(param_1 + 0x9f) = (char)(uVar4 >> 0x18);
  uVar2 = uVar2 & piVar1[1];
  *(char *)(param_1 + 0x46) = (char)(uVar2 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)uVar2;
  *(char *)(param_1 + 0x45) = (char)(uVar2 >> 8);
  *(char *)(param_1 + 0x47) = (char)(uVar2 >> 0x18);
  iVar3 = uVar2 + *piVar1;
  *(char *)(param_1 + 0x47) = (char)((uint)iVar3 >> 0x18);
  *(char *)(param_1 + 0x45) = (char)((uint)iVar3 >> 8);
  *(char *)(param_1 + 0x46) = (char)((uint)iVar3 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)iVar3;
  return;
}


// 0x0200526c  helper_for_write_emulator_savestate

void FUN_0200526c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x54) | *(uint *)(param_1 + 0x9c);
  *(char *)(param_1 + 0x47) = (char)(uVar1 >> 0x18);
  *(char *)(param_1 + 0x45) = (char)(uVar1 >> 8);
  *(char *)(param_1 + 0x46) = (char)(uVar1 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)uVar1;
  return;
}


// 0x020059f0  helper_for_load_emulator_savestate

void FUN_020059f0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  DAT_02099048 = 0;
  puVar3 = &DAT_0209917c;
  DAT_02099054 = 0;
  DAT_023db788 = 0;
  DAT_02099050 = 0;
  DAT_02099230 = 0xc0;
  DAT_023db778 = 0;
  DAT_023db784 = 0;
  DAT_023db77c = 0;
  DAT_023db790 = 0;
  DAT_02099132 = 0xc0;
  DAT_02099232 = 0xc0;
  DAT_02099131 = 0xc0;
  DAT_02099231 = 0xc0;
  DAT_02099130 = 0xc0;
  puVar1 = &DAT_0209907c;
  do {
    puVar2 = puVar1;
    puVar2[0xb2] = 0;
    puVar3[0xb2] = 0;
    puVar3 = puVar3 + -1;
    puVar1 = puVar2 + -1;
  } while (puVar2 + -1 != (undefined1 *)0x2098ff9);
  puVar2[0xad] = 0;
  puVar2[0xa8] = 0;
  puVar2[0xa7] = 0;
  puVar2[0xa6] = 0;
  puVar2[0xa5] = 0;
  puVar2[0xa4] = 0;
  puVar2[0xa3] = 0;
  puVar2[0xa2] = 0;
  return;
}


// 0x02005aac  helper_for_prepare_savestate_header_and_regions

undefined1 * FUN_02005aac(void)

{
  return &DAT_0209907c;
}


// 0x02005ab8  helper_for_prepare_savestate_header_and_regions

undefined1 * FUN_02005ab8(void)

{
  return &DAT_0209917c;
}


// 0x02005ac4  helper_for_prepare_savestate_header_and_regions

undefined * FUN_02005ac4(void)

{
  return &DAT_0209937c;
}


// 0x02009cb0  helper_for_prepare_savestate_header_and_regions

void FUN_02009cb0(void)

{
  int iVar1;
  
  iVar1 = DAT_023eb348;
  *(undefined1 **)(DAT_023eb348 + 0xc) = &DAT_020b4c18;
  *(undefined2 **)(iVar1 + 0x14) = &DAT_0b00364c;
  *(undefined1 **)(iVar1 + 0x18) = &DAT_0209cbec;
  *(undefined2 **)(iVar1 + 0x10) = &DAT_023dc6b0;
  return;
}


// 0x0200d03c  prepare_savestate_header_and_regions

void FUN_0200d03c(void)

{
  DAT_023eb348 = &DAT_023eb314;
  DAT_023eb314 = 0x4a530003;
  DAT_023eb318 = DAT_0b000028;
  DAT_023eb31c = &DAT_023cb634;
  DAT_023eb330 = DAT_0b00002c;
  DAT_023eb338 = FUN_02004c18();
  DAT_023eb33c = FUN_02005aac();
  DAT_023eb340 = FUN_02005ab8();
  DAT_023eb344 = FUN_02005ac4();
  FUN_02009cb0();
  DAT_020b4c4c = 1;
  return;
}


// 0x0200d0b8  make_savestate_slot_path

int FUN_0200d0b8(byte param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_02083a6c(DAT_02098fc8);
  iVar2 = FUN_02082724(iVar1 + 3);
  FUN_02083dbc(iVar2,DAT_02098fc8,iVar1);
  iVar3 = iVar2 + iVar1;
  *(undefined1 *)(iVar3 + -4) = 0x5f;
  *(undefined1 *)(iVar3 + -2) = 0x2e;
  *(undefined1 *)(iVar3 + -1) = 0x6a;
  *(byte *)(iVar3 + -3) = (param_1 & 3) + 0x30;
  *(undefined1 *)(iVar2 + iVar1) = 0x73;
  *(undefined1 *)(iVar3 + 2) = 0;
  *(undefined1 *)(iVar3 + 1) = 0x74;
  return iVar2;
}


// 0x0200d13c  load_emulator_savestate

void FUN_0200d13c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_2c;
  
  if (DAT_020b4c4c == 0) {
    FUN_0200d03c();
  }
  iVar2 = DAT_023eb330;
  iVar1 = DAT_023eb318;
  local_2c = 0;
  uVar3 = FUN_0200d0b8(param_1);
  iVar4 = FUN_02081588(uVar3,&DAT_0208f074);
  if (iVar4 != 0) {
    thunk_FUN_0208024c(3);
    FUN_02008f7c();
    FUN_020059f0();
    FUN_02081788(&DAT_023eb314,4,1,iVar4);
    FUN_02081788(iVar1,4,8,iVar4);
    FUN_02081788(iVar1 + 0x20,4,8,iVar4);
    FUN_02081788(iVar1 + 0x40,4,1,iVar4);
    FUN_02081788(iVar1 + 0x44,4,1,iVar4);
    FUN_02081788(iVar1 + 0x48,4,1,iVar4);
    FUN_02081788(iVar1 + 0x4c,4,1,iVar4);
    FUN_02081788(iVar1 + 0x50,4,1,iVar4);
    FUN_02081788(iVar1 + 0x8c,4,1,iVar4);
    FUN_02081788(iVar1 + 0x90,4,1,iVar4);
    FUN_02081788(iVar1 + 0x94,4,1,iVar4);
    if (1 < (byte)DAT_023eb314) {
      FUN_02081788(iVar1 + 0x98,4,1,iVar4);
    }
    FUN_02081788(iVar1 + 0x9c,4,1,iVar4);
    FUN_02081788(&local_2c,4,1,iVar4);
    *(undefined1 *)(iVar1 + 0xa0) = local_2c._3_1_;
    *(char *)(iVar1 + 0xa1) = (char)((uint)local_2c >> 0x10);
    *(char *)(iVar1 + 0xa2) = (char)((uint)local_2c >> 8);
    *(char *)(iVar1 + 0xa3) = (char)local_2c;
    FUN_02081788(&local_2c,4,1,iVar4);
    *(char *)(iVar1 + 0xa4) = (char)((uint)local_2c >> 8);
    *(char *)(iVar1 + 0xa5) = (char)local_2c;
    FUN_02081788(DAT_023eb31c,1,0x10000,iVar4);
    FUN_02081788(DAT_023eb320,1,0x18,iVar4);
    FUN_02081788(DAT_023eb324,2,0x40,iVar4);
    FUN_02081788(DAT_023eb328,2,0x28,iVar4);
    FUN_02081788(DAT_023eb32c,1,0x10000,iVar4);
    if (1 < (byte)DAT_023eb314) {
      FUN_02081788(DAT_023eb338,1,0x2000,iVar4);
      FUN_02081788(iVar2 + 0x404,1,0x5c,iVar4);
      FUN_02081788(DAT_023eb33c,1,0x100,iVar4);
      FUN_02081788(DAT_023eb340,1,0x100,iVar4);
      FUN_02081788(DAT_023eb344,1,0x20,iVar4);
      FUN_02081788(&local_2c,4,1,iVar4);
      DAT_02099000 = (undefined1)((uint)local_2c >> 0x10);
      DAT_02099001 = (undefined1)((uint)local_2c >> 8);
      DAT_0208f349 = (undefined1)local_2c;
      FUN_02081788(&local_2c,4,1,iVar4);
      FUN_02004448(local_2c);
      FUN_02081788(&local_2c,4,1,iVar4);
      *(undefined1 *)(iVar2 + 0x4a4) = (undefined1)local_2c;
      *(undefined1 *)(iVar2 + 0x4a5) = local_2c._1_1_;
      *(undefined1 *)(iVar2 + 0x4a6) = local_2c._2_1_;
      *(undefined1 *)(iVar2 + 0x4a7) = local_2c._3_1_;
    }
    FUN_02081020(iVar4);
    FUN_02009cf0();
    FUN_02005164(iVar1);
    if (1 < (byte)DAT_023eb314) {
      FUN_0200500c(iVar2);
      FUN_020063e8();
    }
    thunk_FUN_020801fc(3);
  }
  return;
}


// 0x0200d4c8  write_emulator_savestate

void FUN_0200d4c8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_1c;
  
  if (DAT_020b4c4c == 0) {
    FUN_0200d03c();
  }
  iVar2 = DAT_023eb330;
  iVar1 = DAT_023eb318;
  uVar3 = FUN_0200d0b8(param_1);
  DAT_023eb314 = 0x4a530003;
  iVar4 = FUN_02081588(uVar3,&DAT_0208f070);
  if (iVar4 != 0) {
    thunk_FUN_0208024c(3);
    FUN_0200526c(iVar1);
    FUN_02004f70(iVar2);
    FUN_020822e0(&DAT_023eb314,4,1,iVar4);
    FUN_020822e0(iVar1,4,8,iVar4);
    FUN_020822e0(iVar1 + 0x20,4,8,iVar4);
    FUN_020822e0(iVar1 + 0x40,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x44,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x48,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x4c,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x50,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x8c,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x90,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x94,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x98,4,1,iVar4);
    FUN_020822e0(iVar1 + 0x9c,4,1,iVar4);
    local_1c = (uint)*(byte *)(iVar1 + 0xa1) << 0x10 | (uint)*(byte *)(iVar1 + 0xa0) << 0x18 |
               (uint)*(byte *)(iVar1 + 0xa3) | (uint)*(byte *)(iVar1 + 0xa2) << 8;
    FUN_020822e0(&local_1c,4,1,iVar4);
    local_1c = (uint)CONCAT11(*(undefined1 *)(iVar1 + 0xa4),*(undefined1 *)(iVar1 + 0xa5));
    FUN_020822e0(&local_1c,4,1,iVar4);
    FUN_020822e0(DAT_023eb31c,1,0x10000,iVar4);
    FUN_020822e0(DAT_023eb320,1,0x18,iVar4);
    FUN_020822e0(DAT_023eb324,2,0x40,iVar4);
    FUN_020822e0(DAT_023eb328,2,0x28,iVar4);
    FUN_020822e0(DAT_023eb32c,1,0x10000,iVar4);
    FUN_020822e0(DAT_023eb338,1,0x2000,iVar4);
    FUN_020822e0(iVar2 + 0x404,1,0x5c,iVar4);
    FUN_020822e0(DAT_023eb33c,1,0x100,iVar4);
    FUN_020822e0(DAT_023eb340,1,0x100,iVar4);
    FUN_020822e0(DAT_023eb344,1,0x20,iVar4);
    local_1c = (uint)DAT_0208f349 | (uint)DAT_02099000 << 0x10 | (uint)DAT_02099001 << 8;
    FUN_020822e0(&local_1c,4,1,iVar4);
    local_1c = FUN_02004438();
    FUN_020822e0(&local_1c,4,1,iVar4);
    local_1c = *(uint *)(iVar2 + 0x4a4);
    FUN_020822e0(&local_1c,4,1,iVar4);
    FUN_02081020(iVar4);
    FUN_02005164(iVar1);
    FUN_0200500c(iVar2);
    thunk_FUN_020801fc(3);
  }
  return;
}


// 0x0200d82c  probe_savestate_slots

void FUN_0200d82c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0200d0b8(1);
  iVar2 = FUN_02081588(uVar1,&DAT_0208f074);
  if (iVar2 != 0) {
    *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x20;
    FUN_02081020();
  }
  FUN_020826fc(uVar1);
  uVar1 = FUN_0200d0b8(2);
  iVar2 = FUN_02081588(uVar1,&DAT_0208f074);
  if (iVar2 != 0) {
    *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x40;
    FUN_02081020();
  }
  FUN_020818d4(&DAT_0208f3a0,uVar1);
  return;
}

