/* ARM9 display setup — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02000f3c  advance_ds_display_compare_irq_phase

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void advance_ds_display_compare_irq_phase(void)

{
  if (DAT_020b4ce8 == 1) {
    apply_prepared_scanline_display_state(0);
    DAT_020b4ce8 = 2;
  }
  else if (DAT_020b4ce8 == 2) {
    arm_veneer_for_enable_arm9_interrupt_sources(2);
    DAT_020b4ce8 = 0;
  }
  else if (DAT_020b4ce8 == 0) {
    arm_veneer_for_disable_arm9_interrupt_sources(2);
    DAT_020b4ce8 = 1;
  }
  _DAT_04000004 =
       _DAT_04000004 & 0x7f | (&DAT_02085a08)[DAT_020b4ce8] << 8 |
       (ushort)(((ushort)(&DAT_02085a08)[DAT_020b4ce8] & 0x100) >> 1);
  return;
}


// 0x0200106c  configure_gameplay_display_interrupts

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_gameplay_display_interrupts(void)

{
  if (DAT_02098fc4 == 0) {
    arm_veneer_for_initialize_arm9_interrupt_table();
  }
  else if (DAT_02098fc4 == 1) {
    arm_veneer_for_disable_arm9_interrupt_sources(1);
    arm_veneer_for_remove_arm9_interrupt_handler(1);
  }
  DAT_02098fc4 = 2;
  arm_veneer_for_install_arm9_interrupt_handler(2,&LAB_02000f1c);
  _DAT_04000004 = _DAT_04000004 & 0x7f | 0xc000;
  DAT_020b4ce8 = 0;
  arm_veneer_for_install_arm9_interrupt_handler(4,advance_ds_display_compare_irq_phase);
  arm_veneer_for_install_arm9_interrupt_handler(1,&LAB_02000fdc);
  _DAT_04000004 = _DAT_04000004 | 0x38;
  _DAT_04000210 = _DAT_04000210 | 7;
  _DAT_04000208 = 1;
  return;
}


// 0x02001118  configure_menu_vblank_interrupt

/* WARNING: Removing unreachable block (ram,0x02080216) */
/* WARNING: Removing unreachable block (ram,0x02080228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_menu_vblank_interrupt(void)

{
  if (DAT_02098fc4 == 0) {
    arm_veneer_for_initialize_arm9_interrupt_table();
  }
  else if (DAT_02098fc4 == 2) {
    arm_veneer_for_disable_arm9_interrupt_sources(2);
    arm_veneer_for_remove_arm9_interrupt_handler(2);
  }
  DAT_02098fc4 = 1;
  arm_veneer_for_install_arm9_interrupt_handler(1,&DAT_02000f18);
  _DAT_04000004 = _DAT_04000004 | 8;
  _DAT_04000210 = _DAT_04000210 | 1;
  _DAT_04000208 = 1;
  return;
}


// 0x02006d20  show_startup_graphics_and_run_scanline_transition

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void show_startup_graphics_and_run_scanline_transition(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar7;
  uint uVar8;
  int iVar6;
  
  arm_veneer_for_nds_swiwaitforvblank();
  _DAT_04000000 = 0x10801;
  arm_veneer_for_nds_vramsetmainbanks(1,9,4,2);
  _DAT_0400000e = 0x42c8;
  _DAT_04000030 = 0x100;
  _DAT_04000036 = 0x100;
  _DAT_04000038 = 0;
  _DAT_0400003c = 0;
  _DAT_04000050 = 200;
  _DAT_04001000 = 0x10100;
  puVar2 = &DAT_0208a1a8;
  puVar3 = (undefined2 *)&DAT_05000000;
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar4;
  } while (puVar4 != (undefined2 *)&DAT_05000200);
  arm_veneer_for_nds_swicopy(&DAT_0208a3a8,&DAT_06008000,16000);
  arm_veneer_for_nds_swicopy(&DAT_0208e228,&DAT_06001000,0x300);
  iVar5 = 0;
  do {
    iVar6 = iVar5;
    iVar5 = iVar6 + 1;
    arm_veneer_for_nds_swiwaitforvblank();
  } while (iVar5 != 0x78);
  uVar7 = iVar6 - 0x77;
  uVar8 = uVar7;
  while( true ) {
    do {
      uVar1 = _DAT_04000006 & 0x1ff;
    } while ((_DAT_04000006 & 0x1ff) != 0);
    do {
      if ((uVar8 & 1) == 0) {
        _DAT_04000038 = 0;
      }
      else {
        iVar5 = uVar1 - 0x60;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar5 = (iVar5 / 10) * (iVar5 / 10);
        if ((uVar1 & 1) == 0) {
          _DAT_04000038 = (-iVar5 - uVar7) * 0x80;
        }
        else {
          _DAT_04000038 = (iVar5 + uVar7) * 0x80;
        }
      }
      do {
      } while (uVar1 == (_DAT_04000006 & 0x1ff));
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0xc0);
    _DAT_04000054 = (undefined2)uVar8;
    if (0x1f < uVar8 + 1) break;
    uVar7 = uVar7 + 3;
    uVar8 = uVar8 + 1;
  }
  arm_veneer_for_nds_swiwaitforvblank();
  puVar2 = (undefined2 *)&DAT_05000000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)&DAT_05000200);
  puVar2 = (undefined2 *)&DAT_06008000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x600be80);
  puVar2 = (undefined2 *)&DAT_06001000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x6001300);
  _DAT_04000054 = 0;
  _DAT_04000050 = 0;
  return;
}


// 0x02006f2c  select_background_tilemap_layout

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void select_background_tilemap_layout(int layout_code)

{
  if (layout_code != 0xff) {
    DAT_020993c4 = 0;
    switch(layout_code) {
    case 0:
      write_ds_background_tilemap_word = write_linear_background_tilemap_entry;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_linear;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_linear;
      _DAT_04000008 = 0x820;
      _DAT_0400000a = 0xc29;
      _DAT_0400000c = 0x22;
      DAT_023dc6a4 = 0x22;
      DAT_023dc6a8 = 0x820;
      _DAT_0400000e = 0x42b;
      break;
    case 1:
    case 3:
      DAT_023dc6a8 = 0x8820;
      write_ds_background_tilemap_word = write_linear_background_tilemap_entry;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_linear;
      _DAT_04000008 = 0x8820;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_linear;
      _DAT_0400000a = 0x8c29;
      DAT_023dc6a4 = 0x8022;
      _DAT_0400000c = 0x8022;
      _DAT_0400000e = 0x842b;
      break;
    default:
      write_ds_background_tilemap_word = write_linear_background_tilemap_entry;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_linear;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_linear;
      break;
    case 0x10:
      write_ds_background_tilemap_word = write_background_tilemap_entry_64_columns;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_64_columns;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_64_columns;
      _DAT_04000008 = 0x4820;
      _DAT_0400000a = 0x4c29;
      _DAT_0400000c = 0x4022;
      DAT_023dc6a4 = 0x4022;
      DAT_023dc6a8 = 0x4820;
      _DAT_0400000e = 0x442b;
      break;
    case 0x11:
    case 0x13:
      DAT_023dc6a8 = 0xc820;
      write_ds_background_tilemap_word = write_background_tilemap_entry_64_columns_with_vertical_blocks;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_64_columns_with_vertical_blocks;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_64_columns_with_vertical_blocks;
      DAT_023dc6a4 = 0xc022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = layout_code;
      _DAT_0400000e = 0xc42b;
      _DAT_04000008 = 0xc820;
      _DAT_0400000a = 0xcc29;
      _DAT_0400000c = 0xc022;
      return;
    case 0x30:
    case 0x31:
      write_ds_background_tilemap_word = write_background_tilemap_entry_128_columns;
      transfer_vdp_words_to_ds_background_0 = transfer_vdp_words_to_background_0_tilemap_128_columns;
      transfer_vdp_words_to_ds_background_1 = transfer_vdp_words_to_background_1_tilemap_128_columns;
      DAT_023dc6a8 = 0x4820;
      DAT_020993c4 = 1;
      DAT_023dc6a4 = 0x4022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = layout_code;
      _DAT_04000008 = 0x4820;
      _DAT_0400000a = 0x4c29;
      _DAT_0400000c = 0x4022;
      _DAT_0400000e = 0x442b;
      return;
    }
                    /* WARNING (jumptable): Read-only address (ram,0x0208f350) is written */
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
    DAT_0208f350 = layout_code;
    return;
  }
  DAT_0208f350 = 0xff;
  return;
}


// 0x020072a8  select_window_tilemap_layout

void select_window_tilemap_layout(int wide_window)

{
  if (DAT_0208f34c != wide_window) {
    if (wide_window != 0) {
      DAT_023dc5b0 = 0x5430;
      write_ds_window_tilemap_word = write_window_tilemap_entry_64_columns;
      transfer_vdp_words_to_ds_window = transfer_vdp_words_to_window_tilemap_64_columns;
      DAT_023dc5ac = 0x5032;
      DAT_0208f34c = wide_window;
      return;
    }
    DAT_023dc5b0 = 0x1430;
    write_ds_window_tilemap_word = write_linear_window_tilemap_entry;
    transfer_vdp_words_to_ds_window = transfer_vdp_words_to_window_tilemap_linear;
    DAT_023dc5ac = 0x1032;
  }
  DAT_0208f34c = wide_window;
  return;
}


// 0x02007420  clear_and_initialize_renderer_vram

void clear_and_initialize_renderer_vram(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)&DAT_06000000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x600c000);
  puVar2 = (undefined2 *)&DAT_06020000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)&DAT_06030000);
  puVar2 = (undefined2 *)&DAT_06028000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6038000);
  puVar2 = (undefined2 *)&DAT_06030000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6040000);
  puVar2 = (undefined2 *)&DAT_06400000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6410000);
  return;
}


// 0x020083ec  apply_prepared_scanline_display_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void apply_prepared_scanline_display_state(int scanline)

{
  undefined4 *background_control;
  short *ds_bg_palette_cursor;
  short *queued_colors;
  
  scanline = scanline + DAT_020993a8 + 1;
  _DAT_05000000 = (&DAT_023dcbca)[scanline];
  if ((&DAT_023dceb4)[scanline] != '\0') {
    _DAT_04000000 = _DAT_04000000 & 0xe0ff;
    return;
  }
  _DAT_04000014 =
       (undefined2)(((uint)(ushort)(&DAT_023dd924)[scanline] + DAT_020993a4) * 0x10000 >> 0x10);
  _DAT_0400001c = _DAT_04000014;
  _DAT_04000016 =
       (undefined2)((DAT_020993a8 + (uint)(ushort)(&DAT_023dd564)[scanline]) * 0x10000 >> 0x10);
  _DAT_0400001e = _DAT_04000016;
  if ((&DAT_023dc7b0)[scanline] == '\x01') {
    background_control = &DAT_023dc5ac;
  }
  else {
    background_control = &DAT_023dc6a4;
  }
  _DAT_04000008 = (undefined2)background_control[1];
  _DAT_0400000c = (undefined2)*background_control;
  _DAT_04000010 =
       (undefined2)((DAT_020993a4 + (uint)(ushort)(&DAT_023dd744)[scanline]) * 0x10000 >> 0x10);
  _DAT_04000018 = _DAT_04000010;
  _DAT_04000012 =
       (undefined2)((DAT_020993a8 + (uint)(ushort)(&DAT_023dd384)[scanline]) * 0x10000 >> 0x10);
  _DAT_0400001a = _DAT_04000012;
  _DAT_04000000 = _DAT_04000000 | 0x1f00;
  if ((&DAT_023dc5bc)[scanline] == DAT_023dc5b4) {
    _DAT_04000048 = 0xf;
  }
  else {
    _DAT_04000048 = 0x1f;
  }
  queued_colors = (short *)(&DAT_023ddb0c)[scanline];
  if (queued_colors != (short *)0x0) {
    ds_bg_palette_cursor = (short *)&DAT_05000002;
    do {
      queued_colors = queued_colors + 1;
      if (*queued_colors != -0x8000) {
        *ds_bg_palette_cursor = *queued_colors;
        *queued_colors = -0x8000;
      }
      ds_bg_palette_cursor = ds_bg_palette_cursor + 1;
    } while (ds_bg_palette_cursor != (short *)0x5000080);
    (&DAT_023ddb0c)[scanline] = 0;
    return;
  }
  return;
}


// 0x02008f7c  configure_ds_display_windows

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 configure_ds_display_windows(void)

{
  undefined4 *puVar1;
  undefined2 *puVar3;
  undefined4 *puVar2;
  
  select_background_tilemap_layout(0);
  select_window_tilemap_layout(0);
  puVar3 = &DAT_020993cc;
  clear_and_initialize_renderer_vram();
  DAT_04000041 = 0;
  DAT_04000040 = 0xff;
  DAT_04000045 = 0;
  DAT_04000044 = 0xc4;
  _DAT_04000048 = 0x1f;
  _DAT_0400004a = 0x1f;
  do {
    puVar3[1] = 0x2000;
    puVar3[0x801] = 0x2000;
    puVar3[0x1001] = 0x2000;
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined2 *)0x209a3ca);
  puVar2 = (undefined4 *)&DAT_023dc5bc;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != &write_ds_background_tilemap_word);
  DAT_0209b3cc = 0x8000;
  DAT_020993c0 = 0x50;
  DAT_0209a3cc = 0x8000;
  DAT_0209c3d0 = 1;
  DAT_0209c3cc = 1;
  DAT_0209c3ce = 1;
  DAT_0209c3dc = 0;
  DAT_020993cc = 0x8000;
  DAT_0209c3d4 = 0;
  DAT_0209c3d8 = 0;
  puVar2 = (undefined4 *)&DAT_0209c3e0;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 1;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_0209cbe0);
  DAT_023dc5b4 = 1;
  coproc_moveto_Domain_Access_Control(7);
  return 7;
}


// 0x0200b6a8  reset_vdp_memory_and_renderer_state

void reset_vdp_memory_and_renderer_state(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  undefined2 *puVar12;
  
  puVar5 = &vdp_vram;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != &DAT_020acbec);
  puVar4 = (undefined4 *)&DAT_020acbec;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &vdp_scanline);
  puVar8 = &vdp_cram;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)&DAT_023dc7b0);
  puVar8 = &vdp_vsram;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)0xb0036ec);
  vdp_sprite_attribute_table_base = 0;
  vdp_plane_a_name_table_base = 0;
  vdp_plane_b_name_table_base = 0;
  vdp_window_name_table_base = 0;
  puVar4 = (undefined4 *)&vdp_registers;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &ipc_received_command);
  puVar1 = &DAT_023dc8ca;
  puVar12 = &DAT_023dc94a;
  puVar3 = &DAT_023dcaca;
  puVar8 = &ds_converted_vdp_palette;
  do {
    puVar1 = puVar1 + 1;
    puVar12[-0x40] = 0x8000;
    *puVar12 = 0x8000;
    puVar12[0x40] = 0x8000;
    *puVar8 = 0x8000;
    puVar3[-0x40] = 0x8000;
    *puVar3 = 0x8000;
    puVar3[0x40] = 0x8000;
    puVar12 = puVar12 + 1;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
  } while (puVar1 != &DAT_023dc94a);
  puVar4 = &DAT_023ddb0c;
  do {
    puVar7 = puVar4 + 1;
    *puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_023dde8c);
  DAT_023dde90 = 0;
  DAT_023dde8c = 0;
  puVar5 = &DAT_023dde95;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != (undefined1 *)0x23dde9d);
  DAT_0b000084 = 0x200;
  DAT_020b4c14 = 0;
  DAT_0b000098 = 0x10;
  vdp_control_word_pending = 0;
  DAT_020b4bf4 = 0;
  DAT_020b4bf0 = 0;
  DAT_020b4bf1 = 0;
  vdp_h_interrupt_enabled = 0;
  DAT_0b00362c = 0;
  DAT_023ddeb4 = 0;
  DAT_0b000074 = &vdp_vram;
  DAT_0b0000a0 = 0;
  DAT_0b000044 = 0;
  DAT_0b000054 = 0;
  DAT_0b000064 = 0;
  DAT_0b000048 = 0;
  DAT_0b000058 = 0;
  DAT_0b000068 = 0;
  DAT_0b00004c = 0;
  DAT_0b00005c = 0;
  DAT_0b00006c = 0;
  DAT_0b000050 = 0;
  DAT_0b000060 = 0;
  DAT_0b000070 = 0;
  DAT_0b000078 = 0;
  DAT_0b00007c = 0;
  DAT_0b000080 = 0;
  DAT_0b000088 = 0;
  DAT_0b00008c = 0;
  DAT_0b000090 = 0;
  DAT_0b000094 = 0;
  DAT_0b00009c = 0;
  DAT_023dde94 = 0;
  DAT_023ddb05 = 0;
  vdp_address_increment = 2;
  DAT_023ddb06 = 0;
  vdp_dma_enabled = 0;
  DAT_0b00362f = 0;
  vdp_dma_mode = 0;
  DAT_020b4c04 = 0;
  DAT_023dcdb0 = 0;
  DAT_023dcfac = 0;
  DAT_023ddeb0 = 0;
  DAT_023ddb04 = 0;
  vdp_dma_length_register = 0;
  vdp_address = 0;
  vdp_dma_source_address = 0;
  DAT_023dcea6 = 0;
  DAT_023dd372._0_1_ = 0;
  DAT_023dcdaa = 0;
  DAT_023dcea4 = 0;
  vdp_h_interrupt_reload = 0;
  vdp_backdrop_color_index = 0;
  DAT_020b4bf6 = 0;
  DAT_020b4c08 = 0;
  vdp_access_code = 0;
  DAT_020b4c0a = 0;
  DAT_023dc8ae = 0x140;
  DAT_023dc8b2 = 0x140;
  DAT_023dd370 = 0xf0;
  DAT_023dc8ac = 0xf0;
  DAT_023dc8c8 = 0;
  DAT_023dc8b0 = 0;
  DAT_023dcfa8 = 0;
  DAT_023dceac = 0;
  DAT_023ddb08 = 0;
  DAT_020b4c07 = 0;
  vdp_dma_remaining = 0;
  vdp_mode_5_bit = 0;
  DAT_023dceb0 = &DAT_020acbec;
  DAT_023dcdac = &vdp_vram;
  DAT_0b003648 = &vdp_vram;
  DAT_023dc8c4 = 0;
  configure_ds_display_windows();
  puVar1 = &DAT_023dd744;
  puVar3 = &DAT_023dd384;
  DAT_023dc8a0 = 0x800;
  DAT_023dc8a8 = 0;
  DAT_023dc8a4 = 0;
  DAT_023dcfa4 = 0;
  puVar8 = &DAT_023dcbca;
  puVar5 = &DAT_023dceb4;
  do {
    *puVar1 = 0;
    puVar12 = puVar1 + 0xf0;
    puVar1 = puVar1 + 1;
    *puVar3 = 0;
    *puVar12 = 0;
    puVar3[0xf0] = 0;
    *puVar5 = 0;
    *puVar8 = 0;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  } while (puVar1 != &DAT_023dd924);
  iVar9 = 0;
  do {
    *(undefined4 *)((int)&DAT_023dd372 + iVar9 + 2) = 0;
    *(undefined4 *)((int)&DAT_023dc8b4 + iVar9) = 0;
    iVar9 = iVar9 + 4;
  } while (iVar9 != 0x10);
  uVar2 = 0;
  cVar11 = '\0';
  DAT_023dcdb4 = 0;
  do {
    cVar11 = cVar11 + '\x01';
    pcVar10 = &DAT_023dcdb4 + uVar2;
    do {
      uVar2 = uVar2 + 1;
      if (0xef < uVar2) {
        return;
      }
      pcVar10 = pcVar10 + 1;
      *pcVar10 = cVar11;
    } while (uVar2 % 7 != 0);
  } while( true );
}

