/* ARM9 cartridge — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020002e4  set_genesis_region_and_version_register

void set_genesis_region_and_version_register(uint region_bits)

{
  DAT_0b000020 = (uint)(region_bits == 0 || region_bits == 0x80);
  genesis_version_register = region_bits | 0x21;
  return;
}


// 0x02001530  compute_genesis_rom_checksum

short compute_genesis_rom_checksum(int rom_bytes,uint rom_size)

{
  short checksum;
  ushort byte_contribution;
  uint rom_offset;
  
  if (0x200 < rom_size) {
    checksum = 0;
    rom_offset = 0x200;
    do {
      if ((rom_offset & 1) == 0) {
        byte_contribution = (ushort)*(byte *)(rom_bytes + rom_offset) * 0x100;
      }
      else {
        byte_contribution = (ushort)*(byte *)(rom_offset + rom_bytes);
      }
      rom_offset = rom_offset + 1;
      checksum = checksum + byte_contribution;
    } while (rom_offset != rom_size);
    return checksum;
  }
  return 0;
}


// 0x020016d4  parse_cartridge_header

undefined4 parse_cartridge_header(int rom_header_bytes)

{
  char title_character;
  int iVar2;
  int iVar3;
  uint sram_end_address;
  int title_source_offset;
  uint sram_start_address;
  uint sram_byte_count;
  char previous_title_character;
  
  if (rom_header_bytes == 0) {
    return 0;
  }
  newlib_memset(loaded_cartridge_metadata + 0x200,0,0x20);
  newlib_memset(loaded_cartridge_metadata + 0x220,0,0x20);
  iVar3 = loaded_cartridge_metadata;
  title_source_offset = 0x120;
  iVar2 = 0;
  *(undefined1 *)(loaded_cartridge_metadata + 0x262) = 0;
  *(undefined4 *)(iVar3 + 0x240) = 0;
  *(undefined4 *)(iVar3 + 0x244) = 0;
  *(undefined4 *)(iVar3 + 0x24c) = 0;
  *(undefined4 *)(iVar3 + 0x250) = 0;
  *(undefined4 *)(iVar3 + 0x248) = 0;
  *(undefined1 *)(iVar3 + 0x261) = 0;
  *(undefined4 *)(iVar3 + 0x25c) = 0;
  previous_title_character = '\0';
  do {
    while( true ) {
      title_character = *(char *)(title_source_offset + rom_header_bytes);
      title_source_offset = title_source_offset + 1;
      if ((previous_title_character != ' ') || (title_character != ' ')) break;
      previous_title_character = title_character;
      if (title_source_offset == 0x150) goto LAB_02001784;
    }
    *(char *)(iVar2 + loaded_cartridge_metadata + 0x200) = title_character;
    iVar2 = iVar2 + 1;
    previous_title_character = title_character;
  } while (title_source_offset != 0x150);
LAB_02001784:
  iVar3 = 0;
  previous_title_character = '\0';
  do {
    while( true ) {
      title_character = *(char *)(title_source_offset + rom_header_bytes);
      title_source_offset = title_source_offset + 1;
      if ((previous_title_character != ' ') || (title_character != ' ')) break;
      previous_title_character = title_character;
      if (title_source_offset == 0x180) goto LAB_020017cc;
    }
    *(char *)(iVar3 + loaded_cartridge_metadata + 0x220) = title_character;
    iVar3 = iVar3 + 1;
    previous_title_character = title_character;
  } while (title_source_offset != 0x180);
LAB_020017cc:
  iVar3 = loaded_cartridge_metadata;
  *(uint *)(loaded_cartridge_metadata + 0x240) =
       (uint)CONCAT11(*(undefined1 *)(rom_header_bytes + 0x18e),*(undefined1 *)(rom_header_bytes + 399));
  iVar2 = loaded_cartridge_metadata;
  if ((*(char *)(rom_header_bytes + 0x1b0) == 'R') && (*(char *)(rom_header_bytes + 0x1b1) == 'A')) {
    sram_start_address = (uint)*(byte *)(rom_header_bytes + 0x1b5) << 0x10 | (uint)*(byte *)(rom_header_bytes + 0x1b4) << 0x18 |
            (uint)*(byte *)(rom_header_bytes + 0x1b7) | (uint)*(byte *)(rom_header_bytes + 0x1b6) << 8;
    sram_end_address = (uint)*(byte *)(rom_header_bytes + 0x1b9) << 0x10 | (uint)*(byte *)(rom_header_bytes + 0x1b8) << 0x18 |
            (uint)*(byte *)(rom_header_bytes + 0x1bb) | (uint)*(byte *)(rom_header_bytes + 0x1ba) << 8;
    if (sram_start_address < sram_end_address) {
      if ((*(byte *)(rom_header_bytes + 0x1b7) & 1) != 0) {
        sram_start_address = sram_start_address - 1;
      }
      if ((*(byte *)(rom_header_bytes + 0x1bb) & 1) == 0) {
        sram_end_address = sram_end_address + 1;
      }
      sram_byte_count = (sram_end_address - sram_start_address) + 1;
      *(uint *)(iVar3 + 0x250) = sram_end_address;
      *(uint *)(iVar3 + 0x24c) = sram_start_address;
      *(undefined1 *)(iVar3 + 0x261) = 1;
      *(undefined1 *)(iVar3 + 0x262) = 0;
      *(uint *)(iVar3 + 0x248) = sram_byte_count;
      *(undefined1 *)(iVar3 + 0x265) = 0;
      if (sram_byte_count == 0) {
        return 1;
      }
      if (0xffff < sram_byte_count) {
        *(undefined1 *)(iVar3 + 0x262) = 0;
        *(undefined1 *)(iVar3 + 0x261) = 0;
        return 1;
      }
    }
    else {
      if (sram_start_address != 0x200001 || sram_start_address != sram_end_address) {
        *(undefined1 *)(iVar3 + 0x262) = 0;
        *(undefined1 *)(iVar3 + 0x261) = 0;
        goto LAB_02001804;
      }
      *(undefined1 *)(iVar3 + 0x265) = 0;
      *(undefined4 *)(iVar3 + 0x248) = 0x80;
      *(undefined1 *)(iVar3 + 0x262) = 1;
      *(undefined4 *)(iVar3 + 0x24c) = 0x200000;
      *(undefined4 *)(iVar3 + 0x250) = 0x2000ff;
      *(undefined1 *)(iVar3 + 0x261) = 1;
    }
    *(undefined1 *)(loaded_cartridge_metadata + 0x265) = 1;
    return 1;
  }
  sram_end_address = 0;
  sram_start_address = 0;
  *(undefined1 *)(loaded_cartridge_metadata + 0x262) = 0;
  *(undefined1 *)(iVar2 + 0x261) = 0;
LAB_02001804:
  iVar3 = loaded_cartridge_metadata;
  *(uint *)(loaded_cartridge_metadata + 0x250) = sram_end_address;
  *(undefined1 *)(iVar3 + 0x265) = 0;
  *(uint *)(iVar3 + 0x24c) = sram_start_address;
  *(undefined4 *)(iVar3 + 0x248) = 0;
  return 1;
}


// 0x02001b08  rom_header_lacks_sega_signature

bool rom_header_lacks_sega_signature(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char local_11;
  
  local_11 = '\0';
  newlib_fseek(param_1,0x100,0);
  newlib_fread(&local_11,1,1,param_1);
  if ((local_11 == ' ') &&
     (uVar1 = *(ushort *)(param_1 + 0xc) & 0x20, (*(ushort *)(param_1 + 0xc) & 0x20) == 0)) {
    do {
      uVar3 = uVar1;
      newlib_fread(&local_11,1,1,param_1);
      if (local_11 != ' ') break;
      uVar1 = uVar3 + 1;
    } while ((*(ushort *)(param_1 + 0xc) & 0x20) == 0);
    iVar2 = uVar3 + 0x101;
  }
  else {
    iVar2 = 0x100;
  }
  newlib_fseek(param_1,iVar2,0);
  newlib_fread(&local_11,1,1,param_1);
  cVar4 = local_11 == 'S';
  newlib_fread(&local_11,1,1,param_1);
  if (local_11 == 'E') {
    cVar4 = cVar4 + '\x01';
  }
  newlib_fread(&local_11,1,1,param_1);
  if (local_11 == 'G') {
    cVar4 = cVar4 + '\x01';
  }
  newlib_fread(&local_11,1,1,param_1);
  if (local_11 == 'A') {
    cVar4 = cVar4 + '\x01';
  }
  newlib_fseek(param_1,0,0);
  return cVar4 != '\x04';
}


// 0x02001c4c  deinterleave_smd_rom_blocks

void deinterleave_smd_rom_blocks(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == 0 || param_2 < 0x200) {
    return;
  }
  DAT_023bb4ec = newlib_malloc_global_reent_wrapper(0x4000);
  if (param_2 >> 0xe != 0) {
    uVar3 = 1;
    uVar2 = 0;
    uVar5 = 0;
    iVar4 = param_1;
    do {
      newlib_memcpy(DAT_023bb4ec,iVar4);
      uVar1 = 0;
      do {
        while (uVar1 < 0x2000) {
          if (uVar3 < param_2) {
            *(undefined1 *)(param_1 + uVar3) = *(undefined1 *)(uVar1 + DAT_023bb4ec);
            uVar3 = uVar3 + 2;
          }
          uVar1 = uVar1 + 1;
          if (uVar1 == 0x4000) goto LAB_02001d14;
        }
        if (uVar2 < param_2) {
          *(undefined1 *)(param_1 + uVar2) = *(undefined1 *)(DAT_023bb4ec + uVar1);
          uVar2 = uVar2 + 2;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 != 0x4000);
LAB_02001d14:
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x4000;
    } while (param_2 >> 0xe != uVar5);
  }
  newlib_free_r(&DAT_0208f3a0,DAT_023bb4ec);
  return;
}


// 0x02001d40  load_genesis_rom_from_stream

undefined4 load_genesis_rom_from_stream(int rom_stream,undefined4 rom_path)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint rom_size;
  int iVar7;
  int computed_checksum;
  undefined *puVar9;
  uint region_preference;
  undefined4 load_succeeded;
  char preferred_region_code;
  
  newlib_memset(&cartridge_rom_bytes,0,0x306800);
  if (loaded_cartridge_metadata == 0) {
    loaded_cartridge_metadata = newlib_malloc_global_reent_wrapper(0x268);
  }
  newlib_strncpy(loaded_cartridge_metadata,rom_path,0x100);
  *(undefined4 *)(loaded_cartridge_metadata + 600) = 0;
  if (rom_stream != 0) {
    newlib_fseek(rom_stream,0,2);
    rom_size = newlib_ftell(rom_stream);
    newlib_fseek(rom_stream,0,0);
    if (0x306800 < rom_size) {
      *(uint *)(loaded_cartridge_metadata + 600) = *(uint *)(loaded_cartridge_metadata + 600) | 6;
      return 0;
    }
    if (rom_size != 0) {
      iVar7 = rom_header_lacks_sega_signature(rom_stream);
      if (iVar7 == 0) {
        newlib_fread(&cartridge_rom_bytes,1,rom_size,rom_stream);
        *(undefined1 *)(loaded_cartridge_metadata + 0x260) = 0;
      }
      else {
        rom_size = rom_size - 0x200;
        newlib_fseek(rom_stream,0x200,0);
        newlib_fread(&cartridge_rom_bytes,1,rom_size,rom_stream);
        deinterleave_smd_rom_blocks(&cartridge_rom_bytes,rom_size);
        *(undefined1 *)(loaded_cartridge_metadata + 0x260) = 1;
      }
      parse_cartridge_header(&cartridge_rom_bytes,rom_size);
      if (((emulator_option_flags & 0x20) != 0) &&
         (computed_checksum = compute_genesis_rom_checksum(&cartridge_rom_bytes,rom_size), iVar7 = loaded_cartridge_metadata,
         computed_checksum != *(int *)(loaded_cartridge_metadata + 0x240))) {
        *(uint *)(loaded_cartridge_metadata + 600) = *(uint *)(loaded_cartridge_metadata + 600) | 0x10;
        *(int *)(iVar7 + 0x240) = computed_checksum;
        DAT_020b4e7b = (undefined1)computed_checksum;
        DAT_020b4e7a = (undefined1)((uint)computed_checksum >> 8);
      }
      region_preference = emulator_option_flags >> 0x10 & 3;
      if (region_preference == 1) {
        preferred_region_code = 'J';
      }
      else if (region_preference == 2) {
        preferred_region_code = 'E';
      }
      else {
        preferred_region_code = 'U';
      }
      puVar9 = &cartridge_rom_bytes;
      cVar4 = 'U';
      bVar3 = 0;
      do {
        cVar5 = puVar9[0x1f0];
        bVar2 = (bool)(bVar3 ^ 1);
        puVar9 = puVar9 + 1;
        if (preferred_region_code == cVar5) break;
        if (cVar5 == ' ') {
          bVar2 = false;
        }
        if (bVar2) {
          bVar3 = 1;
          cVar4 = cVar5;
        }
        cVar5 = cVar4;
      } while (puVar9 != (undefined *)0x20b4cef);
      switch(cVar5) {
      case '1':
      case 'J':
        *(undefined1 *)(loaded_cartridge_metadata + 0x254) = 0;
        set_genesis_region_and_version_register();
        load_succeeded = 1;
        break;
      default:
        *(undefined1 *)(loaded_cartridge_metadata + 0x254) = 2;
        set_genesis_region_and_version_register(0xc0);
        load_succeeded = 1;
        break;
      case '4':
      case '5':
      case 'F':
      case 'U':
        load_succeeded = 1;
        *(undefined1 *)(loaded_cartridge_metadata + 0x254) = 1;
        set_genesis_region_and_version_register(0x80);
      }
      goto LAB_02001dd4;
    }
  }
  load_succeeded = 0;
  rom_size = 0;
LAB_02001dd4:
  iVar7 = loaded_cartridge_metadata;
  puVar1 = (uint *)(loaded_cartridge_metadata + 600);
  *(uint *)(loaded_cartridge_metadata + 0x244) = rom_size;
  *(uint *)(iVar7 + 600) = *puVar1 | 1;
  probe_savestate_slots();
  swap_adjacent_bytes_in_backing_buffer(&cartridge_rom_bytes,rom_size);
  return load_succeeded;
}


// 0x020033a4  open_rom_from_browser_selection

undefined1 open_rom_from_browser_selection(uint selected_row)

{
  undefined1 rom_loaded;
  int *entry_or_filename;
  undefined4 rom_stream;
  uint row_index;
  
  if (selected_row < DAT_02098fd4) {
    entry_or_filename = DAT_02098ff0;
    if (selected_row != 0 && DAT_02098ff0 != (int *)0x0) {
      row_index = 0;
      do {
        entry_or_filename = (int *)*entry_or_filename;
        row_index = row_index + 1;
      } while ((entry_or_filename == (int *)0x0 || row_index <= selected_row) &&
               (entry_or_filename != (int *)0x0 && selected_row != row_index));
    }
    if (entry_or_filename == (int *)0x0) {
      return 0;
    }
    if (entry_or_filename[2] != 2) {
      entry_or_filename = entry_or_filename + 3;
      arm_veneer_for_nds_swiwaitforvblank();
      draw_loading_message(entry_or_filename);
      rom_stream = newlib_fopen(entry_or_filename,&binary_read_mode);
      rom_loaded = load_genesis_rom_from_stream(rom_stream,entry_or_filename);
      newlib_fclose(rom_stream);
      if (*(char *)(loaded_cartridge_metadata + 0x265) != '\0') {
        configure_cartridge_save_ram(loaded_cartridge_metadata,*(undefined4 *)(loaded_cartridge_metadata + 0x248),
                     *(undefined4 *)(loaded_cartridge_metadata + 0x244));
      }
      DAT_02098ff8 = 0;
      return rom_loaded;
    }
    change_working_directory_on_device(entry_or_filename + 3);
    enumerate_rom_browser_directory();
  }
  return 0;
}


// 0x0200c82c  read_bounded_stream_byte

uint read_bounded_stream_byte(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = (byte *)param_1[3];
  pbVar1 = pbVar3 + 1;
  bVar4 = pbVar3 < (byte *)param_1[2];
  if (bVar4) {
    pbVar3 = (byte *)*param_1;
    param_1[3] = pbVar1;
  }
  uVar2 = 0xffffffff;
  if (bVar4) {
    uVar2 = (uint)*pbVar3;
    *param_1 = pbVar3 + 1;
  }
  return uVar2;
}


// 0x0200c858  write_bounded_stream_byte

void write_bounded_stream_byte(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  if ((uint)param_2[3] < (uint)param_2[2]) {
    puVar1 = (undefined1 *)*param_2;
    param_2[3] = param_2[3] + 1;
    *puVar1 = param_1;
    *param_2 = puVar1 + 1;
  }
  return;
}


// 0x0200c87c  encode_lzss_stream

void encode_lzss_stream(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte local_39 [21];
  
  initialize_lzss_match_trees();
  puVar8 = &lzss_ring_buffer;
  do {
    puVar7 = puVar8 + 1;
    *puVar8 = 0x20;
    puVar8 = puVar7;
  } while (puVar7 != &DAT_023deeae);
  iVar13 = 0;
  do {
    iVar3 = read_bounded_stream_byte(DAT_023ddebc);
    if (iVar3 == -1) {
      if (iVar13 == 0) {
        DAT_020b4c40 = iVar13;
        return;
      }
      iVar3 = 0xfed;
      DAT_020b4c40 = iVar13;
      goto LAB_0200c8e0;
    }
    iVar12 = iVar13 + 1;
    (&DAT_023deeae)[iVar13] = (char)iVar3;
    iVar13 = iVar12;
  } while (iVar12 != 0x12);
  iVar3 = 0xfed;
  DAT_020b4c40 = 0x12;
LAB_0200c8e0:
  do {
    insert_lzss_match_tree_node(iVar3);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0xfdb);
  iVar3 = 1;
  uVar11 = 0xfee;
  local_39[0] = 0;
  uVar9 = 0;
  insert_lzss_match_tree_node(0xfee);
  bVar6 = 1;
  do {
    if (iVar13 < DAT_023eb310) {
      DAT_023eb310 = iVar13;
    }
    if (DAT_023eb310 < 3) {
      local_39[0] = bVar6 | local_39[0];
      local_39[iVar3] = (&lzss_ring_buffer)[uVar11];
      DAT_023eb310 = 1;
      iVar12 = iVar3;
    }
    else {
      iVar12 = iVar3 + 1;
      local_39[iVar3] = (byte)DAT_023eb30c;
      local_39[iVar3 + 1] = (byte)(DAT_023eb30c >> 4) & 0xf0 | (char)DAT_023eb310 - 3U;
    }
    iVar3 = iVar12 + 1;
    bVar2 = bVar6 & 0x7f;
    bVar6 = bVar6 * '\x02';
    if (bVar2 == 0) {
      if (0 < iVar3) {
        iVar12 = 0;
        do {
          pbVar1 = local_39 + iVar12;
          iVar12 = iVar12 + 1;
          write_bounded_stream_byte(*pbVar1,DAT_023eb2f8);
        } while (iVar3 != iVar12);
      }
      local_39[0] = 0;
      DAT_020b4c44 = DAT_020b4c44 + iVar3;
      iVar3 = 1;
      bVar6 = 1;
    }
    iVar12 = DAT_023eb310;
    if (DAT_023eb310 < 1) {
      iVar10 = 0;
      iVar5 = iVar10;
    }
    else {
      iVar10 = 0;
      do {
        iVar4 = read_bounded_stream_byte(DAT_023ddebc);
        iVar5 = iVar10;
        if (iVar4 == -1) break;
        remove_lzss_match_tree_node(uVar9);
        puVar8 = (undefined1 *)(uVar11 + 1);
        if (uVar9 < 0x11) {
          puVar8 = &DAT_023deec0 + uVar9;
        }
        uVar11 = uVar11 + 1 & 0xfff;
        (&lzss_ring_buffer)[uVar9] = (char)iVar4;
        if (uVar9 < 0x11) {
          *puVar8 = (char)iVar4;
        }
        iVar10 = iVar10 + 1;
        insert_lzss_match_tree_node(uVar11);
        uVar9 = uVar9 + 1 & 0xfff;
        iVar5 = iVar12;
      } while (iVar12 != iVar10);
    }
    DAT_020b4c40 = iVar5 + DAT_020b4c40;
    while (iVar10 < iVar12) {
      remove_lzss_match_tree_node(uVar9);
      uVar11 = uVar11 + 1 & 0xfff;
      iVar13 = iVar13 + -1;
      if (iVar13 != 0) {
        insert_lzss_match_tree_node(uVar11);
      }
      uVar9 = uVar9 + 1 & 0xfff;
      iVar10 = iVar10 + 1;
    }
    if (iVar13 < 1) {
      if (1 < iVar3) {
        iVar13 = 0;
        do {
          pbVar1 = local_39 + iVar13;
          iVar13 = iVar13 + 1;
          write_bounded_stream_byte(*pbVar1,DAT_023eb2f8);
        } while (iVar13 != iVar3);
        DAT_020b4c44 = DAT_020b4c44 + iVar3;
      }
      return;
    }
  } while( true );
}


// 0x0200cb78  decode_lzss_stream

void decode_lzss_stream(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar5;
  
  puVar5 = &lzss_ring_buffer;
  do {
    puVar4 = puVar5 + 1;
    *puVar5 = 0x20;
    puVar5 = puVar4;
  } while (puVar4 != &DAT_023deeae);
  uVar7 = 0xfee;
  uVar8 = 0;
  do {
    uVar8 = uVar8 >> 1;
    if ((uVar8 & 0x100) == 0) goto LAB_0200cc00;
    while ((uVar8 & 1) != 0) {
      while( true ) {
        uVar2 = read_bounded_stream_byte(DAT_023ddebc);
        if (uVar2 == 0xffffffff) {
          return;
        }
        write_bounded_stream_byte(uVar2 & 0xff,DAT_023eb2f8);
        uVar8 = uVar8 >> 1;
        (&lzss_ring_buffer)[uVar7] = (char)uVar2;
        uVar7 = uVar7 + 1 & 0xfff;
        if ((uVar8 & 0x100) != 0) break;
LAB_0200cc00:
        uVar2 = read_bounded_stream_byte(DAT_023ddebc);
        if (uVar2 == 0xffffffff) {
          return;
        }
        uVar8 = uVar2 | 0xff00;
        if ((uVar2 & 1) == 0) goto LAB_0200cc20;
      }
    }
LAB_0200cc20:
    iVar6 = 0;
    uVar2 = read_bounded_stream_byte(DAT_023ddebc);
    if ((uVar2 == 0xffffffff) || (uVar3 = read_bounded_stream_byte(DAT_023ddebc), uVar3 == 0xffffffff)) {
      return;
    }
    do {
      uVar1 = (&lzss_ring_buffer)[(uVar2 | (uVar3 & 0xf0) << 4) + iVar6 & 0xfff];
      write_bounded_stream_byte(uVar1,DAT_023eb2f8);
      iVar6 = iVar6 + 1;
      (&lzss_ring_buffer)[uVar7] = uVar1;
      uVar7 = uVar7 + 1 & 0xfff;
    } while (iVar6 <= (int)((uVar3 & 0xf) + 2));
  } while( true );
}

