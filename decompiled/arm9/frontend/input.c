/* ARM9 input — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020003f4  read_genesis_io_register_byte

uint read_genesis_io_register_byte(uint io_address)

{
  byte pin_4_in;
  byte pin_2_in;
  byte pin_3_in;
  byte pin_5_in;
  byte pin_0_in;
  byte pin_1_in;
  int port_state;
  
  switch(io_address & 0xfe) {
  case 0:
    return genesis_version_register;
  case 2:
    port_state = controller_port_1_state;
    break;
  case 4:
    port_state = controller_port_2_state;
    break;
  case 6:
    return 0x7f;
  case 8:
    port_state = controller_port_1_state;
    goto LAB_02003a48;
  case 10:
    port_state = controller_port_2_state;
LAB_02003a48:
    return (uint)*(byte *)(port_state + 0x1a);
  default:
    return 0;
  case 0xe:
  case 0x14:
  case 0x1a:
    return 0xff;
  }
  if (*(char *)(port_state + 0x1e) != '\0') {
    if (*(char *)(port_state + 0x18) != '\0') {
      if (*(int *)(port_state + 0xc) == 3) {
        pin_4_in = *(byte *)(port_state + 0x21);
        pin_2_in = *(byte *)(port_state + 0x27);
        pin_3_in = *(byte *)(port_state + 0x2b);
        pin_5_in = *(byte *)(port_state + 0x22);
        pin_0_in = *(byte *)(port_state + 0x28);
        pin_1_in = *(byte *)(port_state + 0x29);
      }
      else {
        pin_4_in = *(byte *)(port_state + 0x21);
        pin_2_in = *(byte *)(port_state + 0x25);
        pin_3_in = *(byte *)(port_state + 0x26);
        pin_5_in = *(byte *)(port_state + 0x22);
        pin_0_in = *(byte *)(port_state + 0x23);
        pin_1_in = *(byte *)(port_state + 0x24);
      }
      controller_port_read_latch = (uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
                     ((uint)pin_4_in << 4 | (uint)pin_5_in << 5 | (uint)pin_1_in << 1 |
                     (uint)pin_2_in << 2 | (uint)pin_3_in << 3 | (uint)pin_0_in) &
                     ~(uint)*(byte *)(port_state + 0x1a);
      return controller_port_read_latch;
    }
    return (uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
           ((uint)*(byte *)(port_state + 0x21) << 4 | (uint)*(byte *)(port_state + 0x22) << 5 |
            (uint)*(byte *)(port_state + 0x24) << 1 |
           (uint)*(byte *)(port_state + 0x25) << 2 | (uint)*(byte *)(port_state + 0x26) << 3 |
           (uint)*(byte *)(port_state + 0x23)) & ~(uint)*(byte *)(port_state + 0x1a);
  }
  if (*(char *)(port_state + 0x18) != '\0') {
    if (*(int *)(port_state + 0xc) == 3) {
      controller_port_read_latch = ((uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
                     ((uint)*(byte *)(port_state + 0x20) << 4 | (uint)*(byte *)(port_state + 0x2a) << 5) &
                     ~(uint)*(byte *)(port_state + 0x1a)) & 0xf0;
    }
    else if (*(int *)(port_state + 0xc) == 4) {
      controller_port_read_latch = ((uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
                     ((uint)*(byte *)(port_state + 0x20) << 4 | (uint)*(byte *)(port_state + 0x2a) << 5) &
                     ~(uint)*(byte *)(port_state + 0x1a)) & 0xf0 | 0xf;
    }
    else {
      controller_port_read_latch = (uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
                     ((uint)*(byte *)(port_state + 0x20) << 4 | (uint)*(byte *)(port_state + 0x2a) << 5 |
                      (uint)*(byte *)(port_state + 0x23) | (uint)*(byte *)(port_state + 0x24) << 1) &
                     ~(uint)*(byte *)(port_state + 0x1a) & 0xff;
    }
    return controller_port_read_latch;
  }
  return (uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
         ((uint)*(byte *)(port_state + 0x20) << 4 | (uint)*(byte *)(port_state + 0x2a) << 5 |
          (uint)*(byte *)(port_state + 0x23) | (uint)*(byte *)(port_state + 0x24) << 1) &
         ~(uint)*(byte *)(port_state + 0x1a) & 0xff;
}


// 0x020004c8  read_genesis_io_as_u8

undefined1 read_genesis_io_as_u8(void)

{
  undefined1 uVar1;
  
  uVar1 = read_genesis_io_register_byte();
  return uVar1;
}


// 0x020025a8  read_gameplay_menu_and_touch_actions

char read_gameplay_menu_and_touch_actions(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_28 [16];
  
  bVar6 = DAT_0208f347 == '\x01';
  arm_veneer_for_sample_ds_keys_and_update_repeat_state();
  uVar2 = arm_veneer_for_read_latched_ds_key_state();
  arm_veneer_for_read_shared_arm7_touch_sample(auStack_28);
  newlib_memcpy(&DAT_023cb618,auStack_28,0xc);
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
      arm_tail_branch_to_load_subscreen_palette_tiles_and_map(uVar2);
      return DAT_0208f347;
    }
    arm_tail_branch_to_load_subscreen_palette_tiles_and_map(uVar2);
    return '\x01';
  }
  if (((uVar2 & 4) == 0) || ((previous_ds_keys & 4) != 0)) {
    cVar1 = '\0';
  }
  else {
    if (bVar6) {
      DAT_0208f347 = '\x02';
    }
    else {
      DAT_0208f347 = '\x06';
    }
    arm_veneer_for_nds_swiwaitforvblank();
    arm_veneer_for_nds_swiwaitforvblank();
    arm_veneer_for_nds_swiwaitforvblank();
    arm_veneer_for_nds_swiwaitforvblank();
    arm_tail_branch_to_load_subscreen_palette_tiles_and_map();
    cVar1 = DAT_0208f347;
  }
  previous_ds_keys = uVar2;
  return cVar1;
}


// 0x0207fb70  read_latched_ds_key_state

undefined2 read_latched_ds_key_state(void)

{
  return DAT_020b4ca0;
}


// 0x0207fb90  sample_ds_keys_and_update_repeat_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sample_ds_keys_and_update_repeat_state(void)

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
    DAT_020b4ca4 = read_newly_pressed_ds_keys();
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

undefined2 * read_shared_arm7_touch_sample(undefined2 *param_1)

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

