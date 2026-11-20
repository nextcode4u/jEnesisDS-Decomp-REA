/* ARM9 bus dispatch — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02003af0  initialize_cartridge_and_work_ram_mapping

void FUN_02003af0(void)

{
  DAT_023cb628 = 0x3fffff;
  DAT_023cb630 = 0xffff;
  DAT_023cb624 = &DAT_020b4cec;
  DAT_023cb62c = &DAT_023cb634;
  return;
}


// 0x02003ca4  get_cartridge_rom_buffer

undefined * FUN_02003ca4(void)

{
  return &DAT_020b4cec;
}


// 0x02003cb0  get_genesis_work_ram_buffer

undefined * FUN_02003cb0(void)

{
  return &DAT_023cb634;
}


// 0x02003cc8  get_vdp_dma_backing_pointer

undefined * FUN_02003cc8(uint param_1)

{
  undefined *puVar1;
  bool bVar2;
  
  bVar2 = (param_1 & 0xc00000) == 0;
  puVar1 = &DAT_023cb634 + (param_1 & 0xffff);
  if (bVar2) {
    puVar1 = &DAT_020b4cec;
  }
  if (bVar2) {
    puVar1 = puVar1 + (param_1 & 0xffffff);
  }
  return puVar1;
}


// 0x02003f30  select_m68k_byte_read_handler

code * FUN_02003f30(uint param_1)

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
    return FUN_02004378;
  case 10:
    pcVar1 = FUN_02004a1c;
    if ((param_1 & 0xf) != 0) {
      pcVar1 = FUN_02004adc;
      if ((param_1 & 0xf) != 1) {
        pcVar1 = FUN_02004378;
      }
    }
    break;
  case 0xc:
  case 0xd:
    return FUN_02004aa8;
  case 0xe:
  case 0xf:
    return (code *)&LAB_02003df8;
  }
  return pcVar1;
}


// 0x0200402c  select_m68k_word_read_handler

code * FUN_0200402c(uint param_1)

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
    return FUN_020043a4;
  case 10:
    pcVar1 = (code *)&LAB_0200497c;
    if ((param_1 & 0xf) != 0) {
      pcVar1 = (code *)&UNK_02004908;
      if ((param_1 & 0xf) != 1) {
        pcVar1 = FUN_020043a4;
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

void FUN_0200412c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = 0;
  puVar3 = &DAT_0b000a1c;
  puVar4 = &DAT_0b00061c;
  do {
    uVar1 = FUN_02003f30(iVar2);
    *puVar4 = uVar1;
    uVar1 = FUN_0200402c(iVar2);
    iVar2 = iVar2 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != 0x40);
  return;
}


// 0x0200416c  select_m68k_byte_write_handler

undefined * FUN_0200416c(uint param_1)

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

undefined * FUN_02004230(uint param_1)

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

void FUN_020042f0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    uVar1 = FUN_02003f30(iVar2);
    *(undefined4 *)((int)&DAT_0b00061c + iVar3) = uVar1;
    uVar1 = FUN_0200402c(iVar2);
    *(undefined4 *)((int)&DAT_0b000a1c + iVar3) = uVar1;
    uVar1 = FUN_0200416c(iVar2);
    *(undefined4 *)((int)&DAT_0b000e1c + iVar3) = uVar1;
    uVar1 = FUN_02004230(iVar2);
    iVar2 = iVar2 + 1;
    *(undefined4 *)((int)&DAT_0b00121c + iVar3) = uVar1;
    iVar3 = iVar3 + 4;
  } while (iVar2 != 0x100);
  return;
}


// 0x02004368  read_default_m68k_bus_byte

undefined4 FUN_02004368(uint param_1)

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

void FUN_02004378(void)

{
  FUN_02004368();
  return;
}


// 0x0200438c  read_default_m68k_bus_word

undefined4 FUN_0200438c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x4e71;
  if (param_1 != 0) {
    uVar1 = 0x4e00;
  }
  return uVar1;
}


// 0x020043a4  default_m68k_word_read_entry

void FUN_020043a4(void)

{
  FUN_0200438c(1);
  return;
}


// 0x02004aa8  read_vdp_byte_from_m68k

void FUN_02004aa8(uint param_1)

{
  if ((param_1 & 0xe700e0) == 0xc00000) {
    FUN_020094b4(param_1 & 0x1f);
  }
  else {
    FUN_020043bc();
  }
  return;
}


// 0x02004adc  read_m68k_io_or_mapper_byte

uint FUN_02004adc(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 0xa10020) {
    uVar1 = FUN_020003f4(param_1 & 0xff);
    uVar1 = uVar1 & 0xff;
  }
  else if (param_1 == 0xa11100) {
    uVar1 = FUN_020043cc();
  }
  else if (param_1 == 0xa130f1) {
    uVar1 = DAT_0208f34a & 1;
  }
  else if (param_1 - 0xa130f3 < 0xd) {
    uVar1 = (uint)(byte)(&DAT_02099014)[((param_1 & 0xf) >> 1) * 4];
  }
  else {
    uVar1 = FUN_02004368();
  }
  return uVar1;
}

