/* ARM9 bus dispatch — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02003af0  initialize_cartridge_and_work_ram_mapping

void initialize_cartridge_and_work_ram_mapping(void)

{
  DAT_023cb628 = 0x3fffff;
  DAT_023cb630 = 0xffff;
  DAT_023cb624 = &cartridge_rom_bytes;
  DAT_023cb62c = &genesis_work_ram_bytes;
  return;
}


// 0x02003ca4  get_cartridge_rom_buffer

undefined * get_cartridge_rom_buffer(void)

{
  return &cartridge_rom_bytes;
}


// 0x02003cb0  get_genesis_work_ram_buffer

undefined * get_genesis_work_ram_buffer(void)

{
  return &genesis_work_ram_bytes;
}


// 0x02003cc8  get_vdp_dma_backing_pointer

undefined * get_vdp_dma_backing_pointer(uint source_address)

{
  undefined *source_pointer;
  bool source_in_cartridge;
  
  source_in_cartridge = (source_address & 0xc00000) == 0;
  source_pointer = &genesis_work_ram_bytes + (source_address & 0xffff);
  if (source_in_cartridge) {
    source_pointer = &cartridge_rom_bytes;
  }
  if (source_in_cartridge) {
    source_pointer = source_pointer + (source_address & 0xffffff);
  }
  return source_pointer;
}


// 0x02003f30  select_m68k_byte_read_handler

code * select_m68k_byte_read_handler(uint param_1)

{
  code *pcVar1;
  
  switch(param_1 >> 4 & 0xf) {
  case 0:
  case 1:
  case 3:
    pcVar1 = (code *)&LAB_02003df0;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003de8;
    }
    return pcVar1;
  case 2:
    pcVar1 = (code *)&LAB_02003df0;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003de0;
    }
    break;
  default:
    return default_m68k_byte_read_entry;
  case 10:
    pcVar1 = read_z80_window_from_m68k;
    if ((param_1 & 0xf) != 0) {
      pcVar1 = read_m68k_io_or_mapper_byte;
      if ((param_1 & 0xf) != 1) {
        pcVar1 = default_m68k_byte_read_entry;
      }
    }
    break;
  case 0xc:
  case 0xd:
    return read_vdp_byte_from_m68k;
  case 0xe:
  case 0xf:
    return (code *)&LAB_02003df8;
  }
  return pcVar1;
}


// 0x0200402c  select_m68k_word_read_handler

code * select_m68k_word_read_handler(uint param_1)

{
  code *pcVar1;
  
  switch((param_1 & 0xffffff) >> 4 & 0xf) {
  case 0:
  case 1:
  case 3:
    pcVar1 = (code *)&LAB_02003e20;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003e08;
    }
    return pcVar1;
  case 2:
    pcVar1 = (code *)&LAB_02003e20;
    if (DAT_0209900e == '\0') {
      pcVar1 = (code *)&LAB_02003e00;
    }
    break;
  default:
    return default_m68k_word_read_entry;
  case 10:
    pcVar1 = (code *)&LAB_0200497c;
    if ((param_1 & 0xf) != 0) {
      pcVar1 = (code *)&UNK_02004908;
      if ((param_1 & 0xf) != 1) {
        pcVar1 = default_m68k_word_read_entry;
      }
    }
    break;
  case 0xc:
  case 0xd:
    return (code *)&LAB_020048d4;
  case 0xe:
  case 0xf:
    return (code *)&LAB_02003e28;
  }
  return pcVar1;
}


// 0x0200412c  refresh_m68k_cartridge_read_pages

void refresh_m68k_cartridge_read_pages(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  puVar3 = &m68k_word_read_handlers;
  puVar4 = &m68k_byte_read_handlers;
  do {
    uVar1 = select_m68k_byte_read_handler(iVar2);
    *puVar4 = uVar1;
    uVar1 = select_m68k_word_read_handler(iVar2);
    iVar2 = iVar2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != 0x40);
  return;
}


// 0x0200416c  select_m68k_byte_write_handler

undefined * select_m68k_byte_write_handler(uint param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  switch((param_1 & 0xffffff) >> 4 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
    puVar1 = &LAB_02003e38;
    break;
  default:
    return &DAT_02003e30;
  case 10:
    puVar1 = &DAT_02004784;
    if ((param_1 & 0xf) != 0) {
      puVar2 = &DAT_020047f0;
      if ((param_1 & 0xf) != 1) {
        puVar2 = &DAT_02003e30;
      }
      return puVar2;
    }
    break;
  case 0xc:
  case 0xd:
    return &DAT_020044a4;
  case 0xe:
  case 0xf:
    return &LAB_02003eb8;
  }
  return puVar1;
}


// 0x02004230  select_m68k_word_write_handler

undefined * select_m68k_word_write_handler(uint param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  switch(param_1 >> 4 & 0xf) {
  case 0:
  case 1:
  case 2:
  case 3:
    puVar1 = &LAB_02003ed4;
    break;
  default:
    return &DAT_02003e34;
  case 10:
    puVar1 = &DAT_02004714;
    if ((param_1 & 0xf) != 0) {
      puVar2 = &DAT_020046c0;
      if ((param_1 & 0xf) != 1) {
        puVar2 = &DAT_02003e34;
      }
      return puVar2;
    }
    break;
  case 0xc:
  case 0xd:
    return &DAT_02004484;
  case 0xe:
  case 0xf:
    return (undefined *)0x1000000;
  }
  return puVar1;
}


// 0x020042f0  initialize_m68k_bus_dispatch_tables

void initialize_m68k_bus_dispatch_tables(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    uVar1 = select_m68k_byte_read_handler(iVar2);
    *(undefined4 *)((int)&m68k_byte_read_handlers + iVar3) = uVar1;
    uVar1 = select_m68k_word_read_handler(iVar2);
    *(undefined4 *)((int)&m68k_word_read_handlers + iVar3) = uVar1;
    uVar1 = select_m68k_byte_write_handler(iVar2);
    *(undefined4 *)((int)&m68k_byte_write_handlers + iVar3) = uVar1;
    uVar1 = select_m68k_word_write_handler(iVar2);
    iVar2 = iVar2 + 1;
    *(undefined4 *)((int)&m68k_word_write_handlers + iVar3) = uVar1;
    iVar3 = iVar3 + 4;
  } while (iVar2 != 0x100);
  return;
}


// 0x02004368  read_default_m68k_bus_byte

undefined4 read_default_m68k_bus_byte(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 & 1) == 0) {
    uVar1 = 0x71;
  }
  else {
    uVar1 = 0x4e;
  }
  return uVar1;
}


// 0x02004378  default_m68k_byte_read_entry

void default_m68k_byte_read_entry(void)

{
  read_default_m68k_bus_byte();
  return;
}


// 0x0200438c  read_default_m68k_bus_word

undefined4 read_default_m68k_bus_word(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x4e71;
  if (param_1 != 0) {
    uVar1 = 0x4e00;
  }
  return uVar1;
}


// 0x020043a4  default_m68k_word_read_entry

void default_m68k_word_read_entry(void)

{
  read_default_m68k_bus_word(1);
  return;
}


// 0x02004aa8  read_vdp_byte_from_m68k

void read_vdp_byte_from_m68k(uint param_1)

{
  if ((param_1 & 0xe700e0) == 0xc00000) {
    read_vdp_byte_port(param_1 & 0x1f);
  }
  else {
    return_zero_for_unhandled_z80_vdp_access();
  }
  return;
}


// 0x02004adc  read_m68k_io_or_mapper_byte

uint read_m68k_io_or_mapper_byte(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0xa10020) {
    uVar1 = read_genesis_io_register_byte(param_1 & 0xff);
    uVar1 = uVar1 & 0xff;
  }
  else if (param_1 == 0xa11100) {
    uVar1 = read_z80_bus_request_status();
  }
  else if (param_1 == 0xa130f1) {
    uVar1 = DAT_0208f34a & 1;
  }
  else if (param_1 - 0xa130f3 < 0xd) {
    uVar1 = (uint)(byte)(&DAT_02099014)[((param_1 & 0xf) >> 1) * 4];
  }
  else {
    uVar1 = read_default_m68k_bus_byte();
  }
  return uVar1;
}


// 0x02004bf0  reset_bus_tables_work_ram_and_z80_bus_lines

void reset_bus_tables_work_ram_and_z80_bus_lines(void)

{
  DAT_0209900e = 0;
  initialize_m68k_bus_dispatch_tables();
  memset(&genesis_work_ram_bytes,0,0x10000);
  z80_cartridge_bank_base = 0;
  DAT_0208f34a = 1;
  DAT_02099010 = 0;
  z80_reset_released = 0;
  z80_bus_request_asserted = 0;
  DAT_0208f349 = 1;
  return;
}

