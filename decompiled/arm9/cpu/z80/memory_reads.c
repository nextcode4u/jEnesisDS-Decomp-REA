/* ARM9 memory reads — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02004d14  read_z80_mapped_byte

byte read_z80_mapped_byte(uint guest_address)

{
  switch((int)guest_address >> 0xd & 7) {
  case 0:
  case 1:
    return (&z80_work_ram_bytes)[guest_address & 0x1fff];
  case 2:
    return *(byte *)(z80_context_pointer + 0x480) & 3;
  case 3:
    return 0;
  default:
    return (&cartridge_rom_bytes)[(guest_address & 0x7fff | z80_cartridge_bank_base & 0x3fffff) ^ 1];
  }
}


// 0x02004d68  read_z80_mapped_little_endian_word

uint read_z80_mapped_little_endian_word(int guest_address)

{
  uint low_byte;
  int high_byte;
  
  low_byte = read_z80_mapped_byte();
  high_byte = read_z80_mapped_byte(guest_address + 1);
  return low_byte & 0xff | high_byte << 8;
}

