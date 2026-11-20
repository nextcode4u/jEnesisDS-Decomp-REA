/* ARM9 save ram — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0200157c  swap_adjacent_bytes_in_backing_buffer

uint swap_adjacent_bytes_in_backing_buffer(undefined1 *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (param_1 == (undefined1 *)0x0 || param_2 < 2) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 & 0xfffffffe;
    puVar2 = param_1;
    if (param_2 != 0) {
      do {
        uVar1 = puVar2[1];
        puVar2[1] = *puVar2;
        *puVar2 = uVar1;
        puVar2 = puVar2 + 2;
      } while ((uint)((int)puVar2 - (int)param_1) < param_2);
    }
  }
  return param_2;
}


// 0x0200163c  flush_cartridge_save_ram

void flush_cartridge_save_ram(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  bool bVar5;
  
  uVar3 = *(undefined4 *)(loaded_cartridge_metadata + 0x248);
  bVar5 = *(char *)(loaded_cartridge_metadata + 0x264) != '\0';
  puVar2 = (undefined *)0x0;
  if (bVar5) {
    param_3 = *(int *)(loaded_cartridge_metadata + 0x24c);
    puVar2 = &cartridge_rom_bytes;
  }
  puVar4 = &DAT_023bb4f0;
  if (bVar5) {
    puVar4 = puVar2 + param_3;
  }
  iVar1 = newlib_fopen(loaded_cartridge_metadata + 0x100,&binary_write_mode);
  if (iVar1 != 0) {
    swap_adjacent_bytes_in_backing_buffer(puVar4,uVar3);
    newlib_fwrite(puVar4,1,uVar3,iVar1);
    swap_adjacent_bytes_in_backing_buffer(puVar4,uVar3);
    newlib_fclose(iVar1);
  }
  *(undefined1 *)(loaded_cartridge_metadata + 0x263) = 0;
  return;
}


// 0x02001948  configure_cartridge_save_ram

undefined4 configure_cartridge_save_ram(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = newlib_strlen();
  iVar2 = loaded_cartridge_metadata;
  if (*(uint *)(loaded_cartridge_metadata + 0x250) < 0x306800) {
    newlib_memset(&DAT_023bb4f0,0,0x10000);
    iVar2 = loaded_cartridge_metadata;
    uVar4 = *(uint *)(loaded_cartridge_metadata + 0x24c);
    *(undefined4 *)(loaded_cartridge_metadata + 0x25c) = 0;
    *(undefined1 *)(iVar2 + 0x263) = 0;
    *(undefined1 *)(iVar2 + 0x264) = 1;
    if (uVar4 < param_3) {
      *(undefined4 *)(iVar2 + 0x25c) = 1;
      newlib_memcpy(&DAT_023bb4f0,&cartridge_rom_bytes + uVar4,param_2);
      iVar2 = loaded_cartridge_metadata;
    }
    newlib_strncpy(iVar2 + 0x100,param_1,0x100);
    iVar5 = loaded_cartridge_metadata + 0x100;
    iVar1 = iVar5 + iVar1;
    *(undefined1 *)(iVar1 + -1) = 0x6d;
    *(undefined1 *)(iVar1 + -4) = 0x2e;
    *(undefined1 *)(iVar1 + -2) = 0x72;
    *(undefined1 *)(iVar1 + -3) = 0x73;
    iVar2 = newlib_fopen(iVar5,&binary_read_mode);
    if (iVar2 != 0) {
      newlib_fseek(iVar2,0);
      uVar4 = newlib_ftell(iVar2);
      newlib_fseek(iVar2,0,0);
      if (param_2 < uVar4) {
        uVar4 = param_2;
      }
      newlib_fread(&cartridge_rom_bytes + *(int *)(loaded_cartridge_metadata + 0x24c),1,uVar4,iVar2);
      swap_adjacent_bytes_in_backing_buffer(&cartridge_rom_bytes + *(int *)(loaded_cartridge_metadata + 0x24c),uVar4);
      newlib_fclose(iVar2);
      return 0;
    }
    uVar3 = newlib_fopen(iVar5,&binary_write_mode,2);
    newlib_fwrite(&DAT_023bb4f0,1,param_2,uVar3);
    newlib_fclose(uVar3);
    newlib_memset(&cartridge_rom_bytes + *(int *)(loaded_cartridge_metadata + 0x24c),0,param_2);
  }
  else {
    *(undefined4 *)(loaded_cartridge_metadata + 0x24c) = 0;
    *(undefined1 *)(iVar2 + 0x261) = 0;
    *(undefined4 *)(iVar2 + 0x250) = 0;
  }
  return 0;
}

