/* ARM9 save ram — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0200157c  swap_adjacent_bytes_in_backing_buffer

uint swap_adjacent_bytes_in_backing_buffer(undefined1 *buffer,uint byte_count)

{
  undefined1 saved_second_byte;
  undefined1 *pair_cursor;
  
  if (buffer == (undefined1 *)0x0 || byte_count < 2) {
    byte_count = 0;
  }
  else {
    byte_count = byte_count & 0xfffffffe;
    pair_cursor = buffer;
    if (byte_count != 0) {
      do {
        saved_second_byte = pair_cursor[1];
        pair_cursor[1] = *pair_cursor;
        *pair_cursor = saved_second_byte;
        pair_cursor = pair_cursor + 2;
      } while ((uint)((int)pair_cursor - (int)buffer) < byte_count);
    }
  }
  return byte_count;
}


// 0x0200163c  flush_cartridge_save_ram

void flush_cartridge_save_ram(undefined4 param_1,undefined4 param_2,int param_3)

{
  int save_stream;
  undefined *puVar2;
  undefined4 sram_byte_count;
  undefined *sram_source;
  bool use_rom_backing;
  
  sram_byte_count = *(undefined4 *)(loaded_cartridge_metadata + 0x248);
  use_rom_backing = *(char *)(loaded_cartridge_metadata + 0x264) != '\0';
  puVar2 = (undefined *)0x0;
  if (use_rom_backing) {
    param_3 = *(int *)(loaded_cartridge_metadata + 0x24c);
    puVar2 = &cartridge_rom_bytes;
  }
  sram_source = &cartridge_sram_buffer;
  if (use_rom_backing) {
    sram_source = puVar2 + param_3;
  }
  save_stream = newlib_fopen(loaded_cartridge_metadata + 0x100,&binary_write_mode);
  if (save_stream != 0) {
    swap_adjacent_bytes_in_backing_buffer(sram_source,sram_byte_count);
    newlib_fwrite(sram_source,1,sram_byte_count,save_stream);
    swap_adjacent_bytes_in_backing_buffer(sram_source,sram_byte_count);
    newlib_fclose(save_stream);
  }
  *(undefined1 *)(loaded_cartridge_metadata + 0x263) = 0;
  return;
}


// 0x02001948  configure_cartridge_save_ram

undefined4 configure_cartridge_save_ram(undefined4 rom_path,uint sram_byte_count,uint rom_size)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int sram_path;
  
  iVar1 = newlib_strlen();
  iVar2 = loaded_cartridge_metadata;
  if (*(uint *)(loaded_cartridge_metadata + 0x250) < 0x306800) {
    newlib_memset(&cartridge_sram_buffer,0,0x10000);
    iVar2 = loaded_cartridge_metadata;
    uVar4 = *(uint *)(loaded_cartridge_metadata + 0x24c);
    *(undefined4 *)(loaded_cartridge_metadata + 0x25c) = 0;
    *(undefined1 *)(iVar2 + 0x263) = 0;
    *(undefined1 *)(iVar2 + 0x264) = 1;
    if (uVar4 < rom_size) {
      *(undefined4 *)(iVar2 + 0x25c) = 1;
      newlib_memcpy(&cartridge_sram_buffer,&cartridge_rom_bytes + uVar4,sram_byte_count);
      iVar2 = loaded_cartridge_metadata;
    }
    newlib_strncpy(iVar2 + 0x100,rom_path,0x100);
    sram_path = loaded_cartridge_metadata + 0x100;
    iVar1 = sram_path + iVar1;
    *(undefined1 *)(iVar1 + -1) = 0x6d;
    *(undefined1 *)(iVar1 + -4) = 0x2e;
    *(undefined1 *)(iVar1 + -2) = 0x72;
    *(undefined1 *)(iVar1 + -3) = 0x73;
    iVar2 = newlib_fopen(sram_path,&binary_read_mode);
    if (iVar2 != 0) {
      newlib_fseek(iVar2,0);
      uVar4 = newlib_ftell(iVar2);
      newlib_fseek(iVar2,0,0);
      if (sram_byte_count < uVar4) {
        uVar4 = sram_byte_count;
      }
      newlib_fread(&cartridge_rom_bytes + *(int *)(loaded_cartridge_metadata + 0x24c),1,uVar4,iVar2);
      swap_adjacent_bytes_in_backing_buffer(&cartridge_rom_bytes + *(int *)(loaded_cartridge_metadata + 0x24c),uVar4);
      newlib_fclose(iVar2);
      return 0;
    }
    uVar3 = newlib_fopen(sram_path,&binary_write_mode,2);
    newlib_fwrite(&cartridge_sram_buffer,1,sram_byte_count,uVar3);
    newlib_fclose(uVar3);
    newlib_memset(&cartridge_rom_bytes + *(int *)(loaded_cartridge_metadata + 0x24c),0,sram_byte_count);
  }
  else {
    *(undefined4 *)(loaded_cartridge_metadata + 0x24c) = 0;
    *(undefined1 *)(iVar2 + 0x261) = 0;
    *(undefined4 *)(iVar2 + 0x250) = 0;
  }
  return 0;
}

