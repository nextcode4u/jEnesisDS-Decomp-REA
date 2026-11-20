/* ARM9 port reads — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02009274  read_vdp_horizontal_and_vertical_counters

undefined2 FUN_02009274(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = DAT_0b000014;
  if (DAT_0b003624 <= DAT_0b000014) {
    uVar2 = DAT_0b003624;
  }
  if (DAT_023ddb05 == '\0') {
    uVar1 = (&DAT_0208e720)[uVar2];
  }
  else {
    uVar1 = (&DAT_0208e908)[uVar2];
  }
  return CONCAT11((&DAT_0208e5e0)[DAT_020b4bec],uVar1);
}


// 0x020092e0  read_vdp_status_and_clear_read_side_effects

uint FUN_020092e0(void)

{
  uint uVar1;
  
  DAT_0b0000a0 = 1 - DAT_0b000020;
  if (1 < DAT_0b000020) {
    DAT_0b0000a0 = 0;
  }
  uVar1 = (DAT_0b000084 | DAT_0b000088 | DAT_0b000094 | DAT_0b00007c | DAT_0b00009c |
          DAT_0b00008c | DAT_0b000090 | DAT_0b000098 | DAT_0b000080 | DAT_0b0000a0) & 0xffff;
  if (DAT_0b00362f == '\0') {
    uVar1 = uVar1 | 8;
  }
  DAT_020b4bf5 = 0;
  DAT_0b000090 = 0;
  DAT_0b00008c = 0;
  DAT_0b000094 = 0;
  return uVar1;
}


// 0x02009380  read_vdp_data_word_and_advance_address

undefined2 FUN_02009380(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = DAT_0b00363c & 0xf;
  DAT_020b4bf5 = 0;
  if (uVar2 == 4) {
    uVar2 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return *(undefined2 *)((int)&DAT_0b00364c + uVar2);
  }
  if (uVar2 == 8) {
    uVar2 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return *(undefined2 *)((int)&DAT_023dc6b0 + uVar2);
  }
  if (uVar2 == 0) {
    uVar1 = *(undefined2 *)(&DAT_0209cbec + (DAT_0b003638 & 0xfffe));
  }
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return uVar1;
}


// 0x0200944c  read_vdp_word_port

undefined4 FUN_0200944c(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x4e71;
  if ((param_1 & 0x1e) < 0xf) {
    uVar1 = 1 << (param_1 & 0x1e);
    if ((uVar1 & 0x5500) == 0) {
      if ((uVar1 & 0x50) == 0) {
        if ((uVar1 & 5) != 0) {
          uVar2 = FUN_02009380();
        }
      }
      else {
        uVar2 = FUN_020092e0();
      }
    }
    else {
      uVar2 = FUN_02009274();
    }
  }
  return uVar2;
}


// 0x020094b4  read_vdp_byte_port

uint FUN_020094b4(uint param_1)

{
  uint uVar1;
  
  switch(param_1) {
  case 0:
  case 2:
    uVar1 = FUN_02009380();
    uVar1 = uVar1 >> 8 & 0xff;
    break;
  case 1:
  case 3:
    uVar1 = FUN_02009380();
    uVar1 = uVar1 & 0xff;
    break;
  case 4:
  case 6:
    uVar1 = FUN_020092e0();
    uVar1 = uVar1 >> 8 & 0xff;
    break;
  case 5:
  case 7:
    uVar1 = FUN_020092e0();
    uVar1 = uVar1 & 0xff;
    break;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    uVar1 = FUN_02009274();
    uVar1 = uVar1 >> 8 & 0xff;
    break;
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    uVar1 = FUN_02009274();
    uVar1 = uVar1 & 0xff;
    break;
  default:
    if ((param_1 & 1) == 0) {
      uVar1 = 0x4e;
    }
    else {
      uVar1 = 0x71;
    }
  }
  return uVar1;
}

