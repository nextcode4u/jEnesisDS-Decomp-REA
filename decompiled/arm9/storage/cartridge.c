/* ARM9 cartridge — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020002e4  set_genesis_region_and_version_register

void set_genesis_region_and_version_register(uint param_1)

{
  DAT_0b000020 = (uint)(param_1 == 0 || param_1 == 0x80);
  genesis_version_register = param_1 | 0x21;
  return;
}


// 0x02001530  compute_genesis_rom_checksum

short compute_genesis_rom_checksum(int param_1,uint param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  if (0x200 < param_2) {
    sVar1 = 0;
    uVar3 = 0x200;
    do {
      if ((uVar3 & 1) == 0) {
        uVar2 = (ushort)*(byte *)(param_1 + uVar3) * 0x100;
      }
      else {
        uVar2 = (ushort)*(byte *)(uVar3 + param_1);
      }
      uVar3 = uVar3 + 1;
      sVar1 = sVar1 + uVar2;
    } while (uVar3 != param_2);
    return sVar1;
  }
  return 0;
}


// 0x020016d4  parse_cartridge_header

undefined4 parse_cartridge_header(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  newlib_memset(DAT_02098fc8 + 0x200,0,0x20);
  newlib_memset(DAT_02098fc8 + 0x220,0,0x20);
  iVar3 = DAT_02098fc8;
  iVar5 = 0x120;
  iVar2 = 0;
  *(undefined1 *)(DAT_02098fc8 + 0x262) = 0;
  *(undefined4 *)(iVar3 + 0x240) = 0;
  *(undefined4 *)(iVar3 + 0x244) = 0;
  *(undefined4 *)(iVar3 + 0x24c) = 0;
  *(undefined4 *)(iVar3 + 0x250) = 0;
  *(undefined4 *)(iVar3 + 0x248) = 0;
  *(undefined1 *)(iVar3 + 0x261) = 0;
  *(undefined4 *)(iVar3 + 0x25c) = 0;
  cVar8 = '\0';
  do {
    while( true ) {
      cVar1 = *(char *)(iVar5 + param_1);
      iVar5 = iVar5 + 1;
      if ((cVar8 != ' ') || (cVar1 != ' ')) break;
      cVar8 = cVar1;
      if (iVar5 == 0x150) goto LAB_02001784;
    }
    *(char *)(iVar2 + DAT_02098fc8 + 0x200) = cVar1;
    iVar2 = iVar2 + 1;
    cVar8 = cVar1;
  } while (iVar5 != 0x150);
LAB_02001784:
  iVar3 = 0;
  cVar8 = '\0';
  do {
    while( true ) {
      cVar1 = *(char *)(iVar5 + param_1);
      iVar5 = iVar5 + 1;
      if ((cVar8 != ' ') || (cVar1 != ' ')) break;
      cVar8 = cVar1;
      if (iVar5 == 0x180) goto LAB_020017cc;
    }
    *(char *)(iVar3 + DAT_02098fc8 + 0x220) = cVar1;
    iVar3 = iVar3 + 1;
    cVar8 = cVar1;
  } while (iVar5 != 0x180);
LAB_020017cc:
  iVar3 = DAT_02098fc8;
  *(uint *)(DAT_02098fc8 + 0x240) =
       (uint)CONCAT11(*(undefined1 *)(param_1 + 0x18e),*(undefined1 *)(param_1 + 399));
  iVar2 = DAT_02098fc8;
  if ((*(char *)(param_1 + 0x1b0) == 'R') && (*(char *)(param_1 + 0x1b1) == 'A')) {
    uVar6 = (uint)*(byte *)(param_1 + 0x1b5) << 0x10 | (uint)*(byte *)(param_1 + 0x1b4) << 0x18 |
            (uint)*(byte *)(param_1 + 0x1b7) | (uint)*(byte *)(param_1 + 0x1b6) << 8;
    uVar4 = (uint)*(byte *)(param_1 + 0x1b9) << 0x10 | (uint)*(byte *)(param_1 + 0x1b8) << 0x18 |
            (uint)*(byte *)(param_1 + 0x1bb) | (uint)*(byte *)(param_1 + 0x1ba) << 8;
    if (uVar6 < uVar4) {
      if ((*(byte *)(param_1 + 0x1b7) & 1) != 0) {
        uVar6 = uVar6 - 1;
      }
      if ((*(byte *)(param_1 + 0x1bb) & 1) == 0) {
        uVar4 = uVar4 + 1;
      }
      uVar7 = (uVar4 - uVar6) + 1;
      *(uint *)(iVar3 + 0x250) = uVar4;
      *(uint *)(iVar3 + 0x24c) = uVar6;
      *(undefined1 *)(iVar3 + 0x261) = 1;
      *(undefined1 *)(iVar3 + 0x262) = 0;
      *(uint *)(iVar3 + 0x248) = uVar7;
      *(undefined1 *)(iVar3 + 0x265) = 0;
      if (uVar7 == 0) {
        return 1;
      }
      if (0xffff < uVar7) {
        *(undefined1 *)(iVar3 + 0x262) = 0;
        *(undefined1 *)(iVar3 + 0x261) = 0;
        return 1;
      }
    }
    else {
      if (uVar6 != 0x200001 || uVar6 != uVar4) {
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
    *(undefined1 *)(DAT_02098fc8 + 0x265) = 1;
    return 1;
  }
  uVar4 = 0;
  uVar6 = 0;
  *(undefined1 *)(DAT_02098fc8 + 0x262) = 0;
  *(undefined1 *)(iVar2 + 0x261) = 0;
LAB_02001804:
  iVar3 = DAT_02098fc8;
  *(uint *)(DAT_02098fc8 + 0x250) = uVar4;
  *(undefined1 *)(iVar3 + 0x265) = 0;
  *(uint *)(iVar3 + 0x24c) = uVar6;
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

undefined4 load_genesis_rom_from_stream(int param_1,undefined4 param_2)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  char cVar12;
  
  newlib_memset(&cartridge_rom_bytes,0,0x306800);
  if (DAT_02098fc8 == 0) {
    DAT_02098fc8 = newlib_malloc_global_reent_wrapper(0x268);
  }
  newlib_strncpy(DAT_02098fc8,param_2,0x100);
  *(undefined4 *)(DAT_02098fc8 + 600) = 0;
  if (param_1 != 0) {
    newlib_fseek(param_1,0,2);
    uVar6 = newlib_ftell(param_1);
    newlib_fseek(param_1,0,0);
    if (0x306800 < uVar6) {
      *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 6;
      return 0;
    }
    if (uVar6 != 0) {
      iVar7 = rom_header_lacks_sega_signature(param_1);
      if (iVar7 == 0) {
        newlib_fread(&cartridge_rom_bytes,1,uVar6,param_1);
        *(undefined1 *)(DAT_02098fc8 + 0x260) = 0;
      }
      else {
        uVar6 = uVar6 - 0x200;
        newlib_fseek(param_1,0x200,0);
        newlib_fread(&cartridge_rom_bytes,1,uVar6,param_1);
        deinterleave_smd_rom_blocks(&cartridge_rom_bytes,uVar6);
        *(undefined1 *)(DAT_02098fc8 + 0x260) = 1;
      }
      parse_cartridge_header(&cartridge_rom_bytes,uVar6);
      if (((emulator_option_flags & 0x20) != 0) &&
         (iVar8 = compute_genesis_rom_checksum(&cartridge_rom_bytes,uVar6), iVar7 = DAT_02098fc8,
         iVar8 != *(int *)(DAT_02098fc8 + 0x240))) {
        *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x10;
        *(int *)(iVar7 + 0x240) = iVar8;
        DAT_020b4e7b = (undefined1)iVar8;
        DAT_020b4e7a = (undefined1)((uint)iVar8 >> 8);
      }
      uVar10 = emulator_option_flags >> 0x10 & 3;
      if (uVar10 == 1) {
        cVar12 = 'J';
      }
      else if (uVar10 == 2) {
        cVar12 = 'E';
      }
      else {
        cVar12 = 'U';
      }
      puVar9 = &cartridge_rom_bytes;
      cVar4 = 'U';
      bVar3 = 0;
      do {
        cVar5 = puVar9[0x1f0];
        bVar2 = (bool)(bVar3 ^ 1);
        puVar9 = puVar9 + 1;
        if (cVar12 == cVar5) break;
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
        *(undefined1 *)(DAT_02098fc8 + 0x254) = 0;
        set_genesis_region_and_version_register();
        uVar11 = 1;
        break;
      default:
        *(undefined1 *)(DAT_02098fc8 + 0x254) = 2;
        set_genesis_region_and_version_register(0xc0);
        uVar11 = 1;
        break;
      case '4':
      case '5':
      case 'F':
      case 'U':
        uVar11 = 1;
        *(undefined1 *)(DAT_02098fc8 + 0x254) = 1;
        set_genesis_region_and_version_register(0x80);
      }
      goto LAB_02001dd4;
    }
  }
  uVar11 = 0;
  uVar6 = 0;
LAB_02001dd4:
  iVar7 = DAT_02098fc8;
  puVar1 = (uint *)(DAT_02098fc8 + 600);
  *(uint *)(DAT_02098fc8 + 0x244) = uVar6;
  *(uint *)(iVar7 + 600) = *puVar1 | 1;
  probe_savestate_slots();
  swap_adjacent_bytes_in_backing_buffer(&cartridge_rom_bytes,uVar6);
  return uVar11;
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
      rom_stream = newlib_fopen(entry_or_filename,&DAT_0208f074);
      rom_loaded = load_genesis_rom_from_stream(rom_stream,entry_or_filename);
      newlib_fclose(rom_stream);
      if (*(char *)(DAT_02098fc8 + 0x265) != '\0') {
        configure_cartridge_save_ram(DAT_02098fc8,*(undefined4 *)(DAT_02098fc8 + 0x248),
                     *(undefined4 *)(DAT_02098fc8 + 0x244));
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
  puVar8 = &DAT_023ddec0;
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
      local_39[iVar3] = (&DAT_023ddec0)[uVar11];
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
        (&DAT_023ddec0)[uVar9] = (char)iVar4;
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
  
  puVar5 = &DAT_023ddec0;
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
        (&DAT_023ddec0)[uVar7] = (char)uVar2;
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
      uVar1 = (&DAT_023ddec0)[(uVar2 | (uVar3 & 0xf0) << 4) + iVar6 & 0xfff];
      write_bounded_stream_byte(uVar1,DAT_023eb2f8);
      iVar6 = iVar6 + 1;
      (&DAT_023ddec0)[uVar7] = uVar1;
      uVar7 = uVar7 + 1 & 0xfff;
    } while (iVar6 <= (int)((uVar3 & 0xf) + 2));
  } while( true );
}

