/* ARM9 input — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020003f4  read_genesis_io_register_byte

uint FUN_020003f4(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  
  switch(param_1 & 0xfe) {
  case 0:
    return DAT_0b00001c;
  case 2:
    iVar7 = DAT_0b000030;
    break;
  case 4:
    iVar7 = DAT_0b000034;
    break;
  case 6:
    return 0x7f;
  case 8:
    iVar7 = DAT_0b000030;
    goto LAB_02003a48;
  case 10:
    iVar7 = DAT_0b000034;
LAB_02003a48:
    return (uint)*(byte *)(iVar7 + 0x1a);
  default:
    return 0;
  case 0xe:
  case 0x14:
  case 0x1a:
    return 0xff;
  }
  if (*(char *)(iVar7 + 0x1e) != '\0') {
    if (*(char *)(iVar7 + 0x18) != '\0') {
      if (*(int *)(iVar7 + 0xc) == 3) {
        bVar1 = *(byte *)(iVar7 + 0x21);
        bVar2 = *(byte *)(iVar7 + 0x27);
        bVar3 = *(byte *)(iVar7 + 0x2b);
        bVar4 = *(byte *)(iVar7 + 0x22);
        bVar5 = *(byte *)(iVar7 + 0x28);
        bVar6 = *(byte *)(iVar7 + 0x29);
      }
      else {
        bVar1 = *(byte *)(iVar7 + 0x21);
        bVar2 = *(byte *)(iVar7 + 0x25);
        bVar3 = *(byte *)(iVar7 + 0x26);
        bVar4 = *(byte *)(iVar7 + 0x22);
        bVar5 = *(byte *)(iVar7 + 0x23);
        bVar6 = *(byte *)(iVar7 + 0x24);
      }
      DAT_02098ffc = (uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
                     ((uint)bVar1 << 4 | (uint)bVar4 << 5 | (uint)bVar6 << 1 |
                     (uint)bVar2 << 2 | (uint)bVar3 << 3 | (uint)bVar5) &
                     ~(uint)*(byte *)(iVar7 + 0x1a);
      return DAT_02098ffc;
    }
    return (uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
           ((uint)*(byte *)(iVar7 + 0x21) << 4 | (uint)*(byte *)(iVar7 + 0x22) << 5 |
            (uint)*(byte *)(iVar7 + 0x24) << 1 |
           (uint)*(byte *)(iVar7 + 0x25) << 2 | (uint)*(byte *)(iVar7 + 0x26) << 3 |
           (uint)*(byte *)(iVar7 + 0x23)) & ~(uint)*(byte *)(iVar7 + 0x1a);
  }
  if (*(char *)(iVar7 + 0x18) != '\0') {
    if (*(int *)(iVar7 + 0xc) == 3) {
      DAT_02098ffc = ((uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
                     ((uint)*(byte *)(iVar7 + 0x20) << 4 | (uint)*(byte *)(iVar7 + 0x2a) << 5) &
                     ~(uint)*(byte *)(iVar7 + 0x1a)) & 0xf0;
    }
    else if (*(int *)(iVar7 + 0xc) == 4) {
      DAT_02098ffc = ((uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
                     ((uint)*(byte *)(iVar7 + 0x20) << 4 | (uint)*(byte *)(iVar7 + 0x2a) << 5) &
                     ~(uint)*(byte *)(iVar7 + 0x1a)) & 0xf0 | 0xf;
    }
    else {
      DAT_02098ffc = (uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
                     ((uint)*(byte *)(iVar7 + 0x20) << 4 | (uint)*(byte *)(iVar7 + 0x2a) << 5 |
                      (uint)*(byte *)(iVar7 + 0x23) | (uint)*(byte *)(iVar7 + 0x24) << 1) &
                     ~(uint)*(byte *)(iVar7 + 0x1a) & 0xff;
    }
    return DAT_02098ffc;
  }
  return (uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
         ((uint)*(byte *)(iVar7 + 0x20) << 4 | (uint)*(byte *)(iVar7 + 0x2a) << 5 |
          (uint)*(byte *)(iVar7 + 0x23) | (uint)*(byte *)(iVar7 + 0x24) << 1) &
         ~(uint)*(byte *)(iVar7 + 0x1a) & 0xff;
}


// 0x020004c8  read_genesis_io_as_u8

undefined1 FUN_020004c8(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_020003f4();
  return uVar1;
}


// 0x020025a8  read_gameplay_menu_and_touch_actions

char FUN_020025a8(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_28 [16];
  
  bVar6 = DAT_0208f347 == '\x01';
  thunk_FUN_0207fb90();
  uVar2 = thunk_FUN_0207fb70();
  thunk_FUN_0207fc70(auStack_28);
  FUN_02082ec0(&DAT_023cb618,auStack_28,0xc);
  if ((DAT_023cb61e == 0) || (DAT_023cb61c == 0)) {
    DAT_02098fec = '\0';
  }
  else if (DAT_02098fec == '\0') {
    iVar4 = (int)DAT_023cb61e;
    iVar3 = (int)DAT_023cb61c;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    uVar5 = iVar4 >> 3 & 0xff;
    uVar2 = iVar3 >> 3 & 0xff;
    DAT_02098fec = 1;
    DAT_0208f344 = (undefined1)(iVar4 >> 3);
    DAT_0208f345 = (undefined1)(iVar3 >> 3);
    DAT_0208f347 = '\x01';
    if (uVar5 < 3) {
      if (uVar2 != 0) {
        if (uVar2 < 5) {
          DAT_0208f347 = 1;
          DAT_02098fec = 1;
          return '\x06';
        }
        if ((5 < uVar2) && (uVar2 < 0xb)) {
          DAT_0208f347 = 1;
          DAT_02098fec = 1;
          return '\b';
        }
      }
    }
    else if (0x14 < uVar5) {
      if (0x13 < uVar2) {
        if (uVar2 < 0x17) {
          DAT_0208f347 = 1;
          DAT_02098fec = 1;
          return '\t';
        }
        if (uVar2 < 0x1a) {
          DAT_0208f347 = 1;
          DAT_02098fec = 1;
          return '\n';
        }
      }
      if (bVar6) {
        DAT_0208f347 = '\x02';
      }
      thunk_FUN_02006bb0(uVar2);
      return DAT_0208f347;
    }
    thunk_FUN_02006bb0(uVar2);
    return '\x01';
  }
  if (((uVar2 & 4) == 0) || ((DAT_02098fd0 & 4) != 0)) {
    cVar1 = '\0';
  }
  else {
    if (bVar6) {
      DAT_0208f347 = '\x02';
    }
    else {
      DAT_0208f347 = '\x06';
    }
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    thunk_FUN_02006bb0();
    cVar1 = DAT_0208f347;
  }
  DAT_02098fd0 = uVar2;
  return cVar1;
}


// 0x0207fb70  read_latched_ds_key_state

undefined2 FUN_0207fb70(void)

{
  return DAT_020b4ca0;
}


// 0x0207fb90  sample_ds_keys_and_update_repeat_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0207fb90(void)

{
  ushort uVar1;
  bool bVar2;
  
  DAT_020b4ca2 = DAT_020b4ca0;
  uVar1 = (~_DAT_04000130 & 0x3ff | (~_DAT_027ff018 & 3) << 10 | (~_DAT_027ff018 & 0xc0) << 6) ^
          0x2000;
  bVar2 = DAT_020b4ca0 != uVar1;
  DAT_020b4ca0 = uVar1;
  if (bVar2) {
    DAT_0208f392 = '<';
    DAT_020b4ca4 = FUN_0207fb7c();
  }
  DAT_0208f392 = DAT_0208f392 + -1;
  if (DAT_0208f392 == '\0') {
    DAT_0208f392 = '\x1e';
    DAT_020b4ca4 = uVar1;
  }
  return;
}


// 0x0207fc70  read_shared_arm7_touch_sample

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_0207fc70(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  uVar3 = _DAT_027ff00a;
  uVar2 = _DAT_027ff008;
  uVar1 = _DAT_027ff006;
  do {
  } while (DAT_027ff035 != '\0');
  *param_1 = _DAT_027ff004;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  return param_1;
}

