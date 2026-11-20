/* ARM9 port reads — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02009274  read_vdp_horizontal_and_vertical_counters

undefined2 read_vdp_horizontal_and_vertical_counters(void)

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
  return CONCAT11((&DAT_0208e5e0)[vdp_scanline],uVar1);
}


// 0x020092e0  read_vdp_status_and_clear_read_side_effects

uint read_vdp_status_and_clear_read_side_effects(void)

{
  uint status_word;
  
  DAT_0b0000a0 = 1 - DAT_0b000020;
  if (1 < DAT_0b000020) {
    DAT_0b0000a0 = 0;
  }
  status_word = (DAT_0b000084 | DAT_0b000088 | DAT_0b000094 | DAT_0b00007c | DAT_0b00009c |
          DAT_0b00008c | DAT_0b000090 | DAT_0b000098 | DAT_0b000080 | DAT_0b0000a0) & 0xffff;
  if (DAT_0b00362f == '\0') {
    status_word = status_word | 8;
  }
  vdp_control_word_pending = 0;
  DAT_0b000090 = 0;
  DAT_0b00008c = 0;
  DAT_0b000094 = 0;
  return status_word;
}


// 0x02009380  read_vdp_data_word_and_advance_address

undefined2 read_vdp_data_word_and_advance_address(void)

{
  undefined2 data_word;
  uint memory_code_or_offset;
  
  data_word = 0;
  memory_code_or_offset = vdp_access_code & 0xf;
  vdp_control_word_pending = 0;
  if (memory_code_or_offset == 4) {
    memory_code_or_offset = vdp_address & 0x7e;
    vdp_address = vdp_address + vdp_address_increment;
    return *(undefined2 *)((int)&vdp_vsram + memory_code_or_offset);
  }
  if (memory_code_or_offset == 8) {
    memory_code_or_offset = vdp_address & 0x7e;
    vdp_address = vdp_address + vdp_address_increment;
    return *(undefined2 *)((int)&vdp_cram + memory_code_or_offset);
  }
  if (memory_code_or_offset == 0) {
    data_word = *(undefined2 *)(&vdp_vram + (vdp_address & 0xfffe));
  }
  vdp_address = vdp_address + vdp_address_increment;
  return data_word;
}


// 0x0200944c  read_vdp_word_port

undefined4 read_vdp_word_port(uint port_address)

{
  uint port_offset_bit;
  undefined4 port_word;
  
  port_word = 0x4e71;
  if ((port_address & 0x1e) < 0xf) {
    port_offset_bit = 1 << (port_address & 0x1e);
    if ((port_offset_bit & 0x5500) == 0) {
      if ((port_offset_bit & 0x50) == 0) {
        if ((port_offset_bit & 5) != 0) {
          port_word = read_vdp_data_word_and_advance_address();
        }
      }
      else {
        port_word = read_vdp_status_and_clear_read_side_effects();
      }
    }
    else {
      port_word = read_vdp_horizontal_and_vertical_counters();
    }
  }
  return port_word;
}


// 0x020094b4  read_vdp_byte_port

uint read_vdp_byte_port(uint param_1)

{
  uint uVar1;
  
  switch(param_1) {
  case 0:
  case 2:
    uVar1 = read_vdp_data_word_and_advance_address();
    uVar1 = uVar1 >> 8 & 0xff;
    break;
  case 1:
  case 3:
    uVar1 = read_vdp_data_word_and_advance_address();
    uVar1 = uVar1 & 0xff;
    break;
  case 4:
  case 6:
    uVar1 = read_vdp_status_and_clear_read_side_effects();
    uVar1 = uVar1 >> 8 & 0xff;
    break;
  case 5:
  case 7:
    uVar1 = read_vdp_status_and_clear_read_side_effects();
    uVar1 = uVar1 & 0xff;
    break;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    uVar1 = read_vdp_horizontal_and_vertical_counters();
    uVar1 = uVar1 >> 8 & 0xff;
    break;
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    uVar1 = read_vdp_horizontal_and_vertical_counters();
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

