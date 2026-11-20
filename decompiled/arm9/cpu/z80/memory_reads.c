/* ARM9 memory reads — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02004d14  read_z80_mapped_byte

byte read_z80_mapped_byte(uint param_1)

{
  switch((int)param_1 >> 0xd & 7) {
  case 0:
  case 1:
    return (&DAT_0b00161c)[param_1 & 0x1fff];
  case 2:
    return *(byte *)(DAT_0b00002c + 0x480) & 3;
  case 3:
    return 0;
  default:
    return (&DAT_020b4cec)[(param_1 & 0x7fff | z80_cartridge_bank_base & 0x3fffff) ^ 1];
  }
}


// 0x02004d68  read_z80_mapped_little_endian_word

uint read_z80_mapped_little_endian_word(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = read_z80_mapped_byte();
  iVar2 = read_z80_mapped_byte(param_1 + 1);
  return uVar1 & 0xff | iVar2 << 8;
}

