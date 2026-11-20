/* ARM9 memory writes — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02004c50  write_z80_mapped_byte

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_z80_mapped_byte(uint guest_address,uint write_value)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  uint uStack_44;
  uint uStack_2c;
  
  uVar20 = vdp_dma_source_address;
  uVar17 = vdp_address_increment;
  iVar7 = ym2612_bank_1_register;
  iVar13 = ym2612_bank_0_register;
  uVar9 = ym2612_bank_1_queue_bytes;
  bVar15 = (byte)write_value;
  switch((int)guest_address >> 0xd & 7) {
  case 0:
  case 1:
    (&z80_work_ram_bytes)[guest_address & 0x1fff] = bVar15;
    return;
  case 2:
    uVar17 = write_value & 0xff;
    do {
    } while ((REG_IPC_SYNC & 0xf) == 0);
    switch(guest_address & 3) {
    case 0:
      ym2612_selected_bank = 0;
      ym2612_bank_0_register = uVar17;
      return;
    case 1:
      goto switchD_02005bc0_caseD_1;
    case 2:
      ym2612_selected_bank = 1;
      ym2612_bank_1_register = uVar17;
      return;
    case 3:
      if (ym2612_selected_bank == 0) {
        return;
      }
      if (((&DAT_0209927c)[ym2612_bank_1_register] != '\0') && ((byte)(&ym2612_bank_1_mirror)[ym2612_bank_1_register] == uVar17)
         ) {
        return;
      }
      (&ym2612_bank_1_mirror)[ym2612_bank_1_register] = bVar15;
      if (0x1fd < uVar9) {
        return;
      }
      ym2612_bank_1_queue_bytes = uVar9 + 2;
      *(char *)(uVar9 + ym2612_bank_1_write_buffer) = (char)iVar7;
      *(byte *)(uVar9 + 1 + ym2612_bank_1_write_buffer) = bVar15;
    default:
      return;
    }
  case 3:
    if ((guest_address & 0xff00) == 0x6000) {
      z80_cartridge_bank_base = (write_value & 1) << 0x17 | z80_cartridge_bank_base >> 1 & 0xff8000;
      return;
    }
    if ((guest_address & 0xff00) != 0x7f00) {
      return;
    }
    if (0x17 < (guest_address & 0x1f)) {
      return;
    }
    if ((1 << (guest_address & 0x1f) & 0xaa0000U) == 0) {
      return;
    }
    write_value = write_value & 0xff;
LAB_02005adc:
    do {
    } while ((REG_IPC_SYNC & 0xf) == 0);
    if (psg_queue_bytes < 0x100) {
      *(char *)(psg_queue_bytes + psg_write_buffer) = (char)write_value;
      psg_queue_bytes = psg_queue_bytes + 1;
    }
    if ((write_value & 0x80) == 0) {
      if ((DAT_0209939c & 1) == 0) {
        *(uint *)(&DAT_0209937c + DAT_0209939c * 4) =
             *(uint *)(&DAT_0209937c + DAT_0209939c * 4) & 0xf | (write_value & 0x3f) << 4;
        return;
      }
      return;
    }
    DAT_0209939c = (int)(write_value & 0x70) >> 4;
    *(uint *)(&DAT_0209937c + DAT_0209939c * 4) =
         *(uint *)(&DAT_0209937c + DAT_0209939c * 4) & 0x3f0 | write_value & 0xf;
    return;
  }
  uVar9 = guest_address & 0x7fff | z80_cartridge_bank_base;
  uVar16 = (int)uVar9 >> 0x15 & 7;
  if (uVar16 == 6) {
    if ((uVar9 & 0xe700e0) != 0xc00000) {
      return;
    }
    if (0x17 < (uVar9 & 0x1f)) {
      return;
    }
    uVar16 = 1 << (uVar9 & 0x1f);
    if ((uVar16 & 0xaa0000) != 0) goto LAB_02005adc;
    if ((uVar16 & 0xff) == 0) {
      return;
    }
    uVar16 = write_value & 0xffff;
    bVar15 = (byte)uVar16;
    if ((uVar9 & 0x1c) == 0) {
      if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
         ((vdp_access_code & 0x20) != 0)) {
        execute_vdp_dma_command();
      }
      uVar9 = vdp_address_increment;
      uVar17 = vdp_dma_remaining;
      uVar4 = (undefined1)(uVar16 >> 8);
      if (vdp_dma_fill_pending != '\0') {
        bVar23 = (vdp_address & 1) == 0;
        uVar20 = vdp_address & 0xffff;
        if (bVar23) {
          puVar19 = &vdp_vram + uVar20;
        }
        else {
          puVar19 = (undefined1 *)(vdp_address & 0xfffe);
        }
        uVar16 = vdp_address_increment & 0xffff;
        if (!bVar23) {
          (&vdp_vram)[(int)puVar19] = bVar15;
        }
        uVar17 = uVar17 & 0xffff;
        if (bVar23) {
          (&vdp_vram)[uVar20] = uVar4;
          puVar19[1] = bVar15;
        }
        if (!bVar23) {
          (&vdp_vram)[uVar20] = uVar4;
        }
        uVar18 = uVar20 + uVar16 & 0xffff;
        uVar21 = uVar17;
        if (uVar17 != 0) {
          do {
            uVar21 = uVar21 - 1 & 0xffff;
            (&vdp_vram)[uVar18] = bVar15;
            uVar18 = uVar18 + uVar16 & 0xffff;
          } while (uVar21 != 0);
          uVar20 = vdp_address;
          if (uVar17 == 0xffff && (write_value & 0xff) == 0) {
            vdp_address = uVar18;
            clear_and_initialize_renderer_vram();
            vdp_dma_fill_pending = 0;
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            return;
          }
        }
        vdp_address = uVar18;
        uVar20 = uVar20 & 0xfffe;
        if (uVar9 == 1) {
          uVar17 = uVar17 >> 1;
          uVar16 = 2;
        }
        do {
          if (uVar20 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
            if ((uVar20 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar20)) {
              if ((uVar20 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar20)) {
                bVar23 = false;
              }
              else {
                (*write_ds_background_tilemap_word)(0,uVar20 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar20));
                bVar23 = true;
              }
              if ((vdp_plane_b_name_table_base <= uVar20) && (uVar20 < vdp_plane_b_name_table_end)) {
                (*write_ds_background_tilemap_word)(1,uVar20 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar20));
                bVar23 = true;
              }
              if ((vdp_window_name_table_base <= uVar20) && (uVar20 < vdp_window_name_table_end)) {
                (*write_ds_window_tilemap_word)(uVar20 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar20));
              }
              if (!bVar23) {
                update_cached_ds_pattern_from_vdp_word(uVar20,*(undefined2 *)(&vdp_vram + uVar20));
              }
            }
          }
          else {
            if (vdp_wide_display_mode == '\0') {
              iVar13 = 0x200;
            }
            else {
              iVar13 = 0x280;
            }
            if (iVar13 + vdp_sprite_attribute_table_base <= uVar20) goto LAB_0200adc4;
            DAT_020b4c15 = 1;
          }
          uVar17 = uVar17 - 1 & 0xffff;
          if (uVar17 == 0) {
            vdp_dma_fill_pending = 0;
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            return;
          }
          uVar20 = uVar20 + uVar16 & 0xfffe;
        } while( true );
      }
      uVar17 = vdp_access_code & 0xf;
      uVar1 = (ushort)write_value;
      if (uVar17 == 3) {
        uVar17 = (vdp_address & 0x7e) >> 1;
        (&vdp_cram)[uVar17] = uVar1 & 0xeee;
        uVar1 = (ushort)((write_value & 0xe0) << 2) | (ushort)((write_value & 0xe00) << 3) | 0x8000 |
                (ushort)((write_value & 0xe) << 1);
        if ((uVar17 != 0) && (vdp_scanline < 0xdf)) {
          bVar15 = (&DAT_0208ebb0)[vdp_scanline];
          if (bVar15 == 200) {
            bVar15 = (&DAT_0208ebaf)[vdp_scanline];
          }
          (&scanline_pending_palette_changes)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
          (&DAT_023dc8ca)[uVar17 + (uint)(bVar15 >> 5) * 0x40] = uVar1;
        }
        uVar9 = (uint)vdp_backdrop_color_index;
        (&ds_converted_vdp_palette)[uVar17] = uVar1;
        DAT_0208f354 = 1;
        if (uVar17 == uVar9) {
          _DAT_05000200 = uVar1;
        }
      }
      else if (uVar17 == 5) {
        uVar17 = vdp_address & 0x7f;
        if (0x4f < uVar17) {
          vdp_address = uVar17;
          return;
        }
        uVar9 = vdp_address & 0x7e;
        vdp_address = uVar17;
        *(ushort *)((int)&vdp_vsram + uVar9) = uVar1;
      }
      else if (uVar17 == 1) {
        uVar17 = vdp_address & 0xfffe;
        if ((vdp_address & 1) == 0) {
          if (*(ushort *)(&vdp_vram + uVar17) == uVar16) goto LAB_0200ae88;
          *(ushort *)(&vdp_vram + uVar17) = uVar1;
        }
        else {
          (&vdp_vram)[uVar17] = uVar4;
          (&vdp_vram_odd_byte_base)[uVar17] = bVar15;
          uVar16 = uVar16 >> 8 | (write_value & 0xff) << 8;
        }
        if (vdp_sprite_attribute_table_base <= uVar17) {
          if (vdp_wide_display_mode == '\0') {
            iVar13 = 0x200;
          }
          else {
            iVar13 = 0x280;
          }
          if (uVar17 < iVar13 + vdp_sprite_attribute_table_base) {
            DAT_020b4c15 = 1;
            goto LAB_0200ae88;
          }
        }
        if ((uVar17 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar17)) {
          bVar23 = false;
        }
        else {
          (*write_ds_background_tilemap_word)(0,uVar17 - vdp_plane_a_name_table_base,uVar16);
          bVar23 = true;
        }
        if ((vdp_plane_b_name_table_base <= uVar17) && (uVar17 < vdp_plane_b_name_table_end)) {
          (*write_ds_background_tilemap_word)(1,uVar17 - vdp_plane_b_name_table_base,uVar16);
          bVar23 = true;
        }
        if ((vdp_window_name_table_base <= uVar17) && (uVar17 < vdp_window_name_table_end)) {
          (*write_ds_window_tilemap_word)(uVar17 - vdp_window_name_table_base,uVar16);
        }
        if (!bVar23) {
          update_cached_ds_pattern_from_vdp_word(uVar17,uVar16);
        }
      }
LAB_0200ae88:
      vdp_address = vdp_address + vdp_address_increment;
      return;
    }
    if (vdp_control_word_pending == '\0') {
      uVar9 = write_value & 0xff;
      uVar17 = uVar16 >> 8 & 0x1f;
      if ((write_value & 0xc000) != 0x8000) {
        vdp_control_word_pending = 1;
        vdp_access_code = vdp_access_code & 0x3c | uVar16 >> 0xe;
        vdp_address = vdp_address & 0xc000 | write_value & 0x3fff;
        return;
      }
      vdp_access_code = 0;
      iVar13 = 1 - (uint)vdp_mode_5_bit;
      if (1 < vdp_mode_5_bit) {
        iVar13 = 0;
      }
      if (uVar17 < 0xc) {
        iVar13 = 0;
      }
      (&vdp_registers)[uVar17] = bVar15;
      if (iVar13 == 0) {
        switch(uVar17) {
        case 0:
          vdp_h_interrupt_enabled = (byte)(uVar9 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar9 >> 1) ^ 1) & 1;
          return;
        case 1:
          vdp_mode_5_bit = bVar15 & 4;
          vdp_display_enabled = (byte)(uVar9 >> 6) & 1;
          uVar17 = uVar9 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar9 >> 5) & 1;
          vdp_dma_enabled = (byte)(uVar9 >> 4) & 1;
          vdp_240_line_mode = (char)uVar17;
          if (uVar17 == 0) {
            vdp_active_height_pixels = 0xe0;
            DAT_0b000004 = 0xe0;
          }
          else {
            vdp_active_height_pixels = 0xf0;
            DAT_0b000004 = 0xf0;
          }
          return;
        case 2:
          vdp_plane_a_name_table_base = (write_value & 0x38) * 0x400;
          plane_a_word_change_flags = &vram_word_change_flags + (write_value & 0x38) * 0x200;
          if (((emulator_option_flags & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
            plane_a_tilemap_refresh_pending = 1;
          }
          ram0x023dd374 = vdp_plane_a_name_table_base;
          vdp_plane_a_name_table_end = vdp_plane_a_name_table_base + plane_name_table_span_bytes;
          return;
        case 3:
          vdp_window_name_table_base = (write_value & 0x3e) * 0x400;
          if (vdp_wide_display_mode == '\0') {
            iVar13 = 0x800;
          }
          else {
            iVar13 = 0x1000;
          }
          vdp_window_name_table_end = iVar13 + vdp_window_name_table_base;
          return;
        case 4:
          vdp_plane_b_name_table_base = (write_value & 7) * 0x2000;
          plane_b_word_change_flags = &vram_word_change_flags + (write_value & 7) * 0x1000;
          if (((emulator_option_flags & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
            plane_b_tilemap_refresh_pending = 1;
          }
          DAT_023dd378 = vdp_plane_b_name_table_base;
          vdp_plane_b_name_table_end = vdp_plane_b_name_table_base + plane_name_table_span_bytes;
          return;
        case 5:
          iVar13 = (write_value & 0x7f) * 0x200;
          DAT_0209cbe0 = vdp_sprite_attribute_table_base;
          vdp_sat_host_pointer = &vdp_vram + iVar13;
          vdp_sprite_attribute_table_base = iVar13;
          return;
        case 7:
          DAT_0b003640 = write_value & 0x3f;
          vdp_backdrop_color_index = (char)(write_value & 0x3f);
          return;
        case 10:
          vdp_h_interrupt_reload = (short)uVar9;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar9 >> 3) & 1;
          vdp_vscroll_mode = (byte)(uVar9 >> 2) & 1;
          vdp_hscroll_mode = bVar15 & 3;
          if ((emulator_option_flags & 4) == 0) {
            record_vdp_scanline_state = record_unscaled_scanline_scroll_and_backdrop;
          }
          else {
            switch(bVar15 & 3) {
            case 0:
              record_vdp_scanline_state = (code *)&record_scaled_scanline_hscroll_mode_0;
              return;
            case 1:
              record_vdp_scanline_state = (code *)&record_scaled_scanline_hscroll_mode_1;
              return;
            case 2:
              record_vdp_scanline_state = (code *)&record_scaled_scanline_hscroll_mode_2;
              return;
            case 3:
              record_vdp_scanline_state = (code *)&record_scaled_scanline_hscroll_mode_3;
              return;
            }
          }
          return;
        case 0xc:
          uVar17 = (uint)DAT_020b4bf4;
          vdp_wide_display_mode = (write_value & 0x81) != 0;
          if ((uVar17 != (uVar9 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar17)) {
            DAT_020b4bf4 = 0;
          }
          if ((bool)vdp_wide_display_mode) {
            vdp_window_name_table_end = vdp_window_name_table_base + 0x1000;
            DAT_020b4c0c = 0xf000;
            vdp_sprite_count_limit = 0x50;
            vdp_active_width_tiles = 0x28;
            vdp_active_width_pixels = 0x140;
            vdp_window_map_stride_tiles = 0x40;
          }
          else {
            DAT_020b4c0c = 0xf800;
            vdp_window_name_table_end = vdp_window_name_table_base + 0x800;
            DAT_020b4c14 = 1;
            vdp_sprite_count_limit = 0x40;
            vdp_active_width_tiles = 0x20;
            vdp_active_width_pixels = 0x100;
            vdp_window_map_stride_tiles = 0x20;
          }
          if (vdp_window_x_from_right == '\0') {
            DAT_023dcfa8 = (uint)(frame_active_width_tiles <= DAT_023ddb04);
          }
          else {
            DAT_023dcfa8 = 1 - DAT_023ddb04;
            if (1 < DAT_023ddb04) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0xd:
          vdp_hscroll_table_base = (ushort)((write_value << 0x1a) >> 0x10);
          DAT_023dcdaa = vdp_hscroll_table_base + 0x380;
          return;
        case 0xf:
          vdp_address_increment = uVar9;
          return;
        case 0x10:
          uVar9 = uVar9 >> 4 & 3;
          write_value = write_value & 3;
          uVar17 = uVar9 | write_value << 4;
          if (uVar17 != (vdp_background_layout_code & 0xff)) {
            background_layout_refresh_pending = 1;
          }
          vdp_background_layout_code = uVar17;
          plane_name_table_span_bytes = *(uint *)(&DAT_0208e59c + (uVar9 + write_value * 4) * 4);
          vdp_plane_b_name_table_end = plane_name_table_span_bytes + vdp_plane_b_name_table_base;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[write_value];
          vdp_plane_a_name_table_end = plane_name_table_span_bytes + vdp_plane_a_name_table_base;
          DAT_023dcea6 = (char)write_value;
          DAT_023dd372._0_1_ = (char)uVar9;
          return;
        case 0x11:
          uVar17 = (write_value & 0x1f) * 2;
          vdp_window_x_from_right = (char)(uVar9 >> 7);
          DAT_023ddb04 = (char)uVar17;
          if (uVar9 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(frame_active_width_tiles <= uVar17);
          }
          else {
            DAT_023dcfa8 = (write_value & 0x1f) * -2 + 1;
            if (1 < uVar17) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          vdp_window_y_from_bottom = (char)(uVar9 >> 7);
          vdp_window_y_split_pixels = (write_value & 0x1f) << 3;
          DAT_023ddeb0 = (char)(write_value & 0x1f);
          return;
        case 0x13:
          vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar9;
          return;
        case 0x14:
          vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar9 << 8;
          return;
        case 0x15:
          vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar9 << 1;
          return;
        case 0x16:
          vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar9 << 9;
          return;
        case 0x17:
          vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (write_value & 0x7f) << 0x11;
          vdp_dma_mode = (byte)(uVar9 >> 6);
        }
        return;
      }
      return;
    }
    vdp_access_code = vdp_access_code & 3 | uVar16 >> 2 & 0x3c;
    uVar9 = vdp_address & 0x3fff | (write_value & 3) << 0xe;
    vdp_control_word_pending = 0;
    vdp_address = uVar9;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((uVar16 >> 2 & 0x20) == 0) {
      return;
    }
    uVar16 = vdp_dma_length_register & 0xffff;
    if ((vdp_dma_length_register & 0xffff) == 0) {
      uVar16 = 0xffff;
    }
    vdp_dma_remaining = uVar16;
    switch(vdp_dma_mode & 0xf) {
    case 0:
    case 1:
      uVar9 = vdp_dma_source_address & 0xfffffe;
      puVar10 = (ushort *)get_vdp_dma_backing_pointer(uVar9);
      uVar12 = vdp_address;
      uVar18 = vdp_dma_remaining;
      uVar21 = vdp_scanline;
      uVar14 = vdp_access_code & 0xf;
      uVar16 = vdp_dma_remaining & 0xffff;
      if (uVar14 == 3) {
        bVar15 = (&DAT_0208ebb0)[vdp_scanline];
        uVar9 = uVar9 << 0xf;
        if (bVar15 == 200) {
          bVar15 = (&DAT_0208ebaf)[vdp_scanline];
        }
        uVar18 = (uint)vdp_backdrop_color_index;
        do {
          uVar14 = (uint)*puVar10;
          uVar12 = (vdp_address & 0x7e) >> 1;
          uVar1 = (ushort)((uVar14 & 0xe0) << 2) | (ushort)((uVar14 & 0xe00) << 3) | 0x8000 |
                  (ushort)((uVar14 & 0xe) << 1);
          uVar9 = uVar9 + 0x8000;
          vdp_address = vdp_address + uVar17;
          if ((uVar14 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar12]) {
            (&vdp_cram)[uVar12] = (short)(uVar14 & 0xeee);
            if ((uVar12 != 0) && (uVar21 < 0xdf)) {
              (&DAT_023dc8ca)[uVar12 + (uint)(bVar15 >> 5) * 0x40] = uVar1;
              (&scanline_pending_palette_changes)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
            }
            DAT_0208f354 = 1;
            (&ds_converted_vdp_palette)[uVar12] = uVar1;
            if (uVar12 == uVar18) {
              _DAT_05000200 = uVar1;
            }
          }
          uVar16 = uVar16 - 1 & 0xffff;
          puVar10 = puVar10 + 1;
        } while (uVar16 != 0);
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar20 & 0xfe0000 | uVar9 >> 0xf;
        return;
      }
      if (uVar14 == 5) {
        uVar9 = uVar9 << 0xf;
        do {
          uVar18 = vdp_address & 0x7f;
          uVar21 = vdp_address & 0x7e;
          vdp_address = uVar18;
          if (0x4f < uVar18) break;
          uVar16 = uVar16 - 1 & 0xffff;
          uVar9 = uVar9 + 0x8000;
          *(ushort *)((int)&vdp_vsram + uVar21) = *puVar10;
          puVar10 = puVar10 + 1;
          vdp_address = uVar17 + uVar18;
        } while (uVar16 != 0);
        vdp_dma_length_register = uVar16;
        vdp_dma_remaining = uVar16;
        vdp_dma_source_address = uVar20 & 0xfe0000 | uVar9 >> 0xf;
        return;
      }
      if (uVar14 != 1) {
        vdp_dma_length_register = uVar16;
        vdp_dma_remaining = uVar16;
        vdp_dma_source_address = uVar9;
        return;
      }
      uStack_2c = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        uVar21 = uVar17 & 0xffff;
        uVar9 = uVar9 << 0xf;
        uStack_44 = 0;
        puVar11 = puVar10;
        uVar14 = uStack_2c;
        do {
          uVar1 = *(ushort *)(&vdp_vram + uVar14);
          uVar3 = *puVar11;
          if (uVar3 != uVar1) {
            *(ushort *)(&vdp_vram + uVar14) = uVar3;
            uStack_44 = uStack_44 + 1;
          }
          uVar16 = uVar16 - 1 & 0xffff;
          uVar9 = uVar9 + 0x8000;
          (&vram_word_change_flags)[uVar14 >> 1] = uVar3 != uVar1;
          uVar14 = uVar14 + uVar21 & 0xffff;
          puVar11 = puVar11 + 1;
        } while (uVar16 != 0);
        uVar22 = uVar14;
        if (uVar14 <= uVar12) {
          uVar22 = uVar14 + 0x10000;
        }
        uVar9 = uVar20 & 0xfe0000 | uVar9 >> 0xf;
        if (uStack_44 == 0) {
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          vdp_dma_source_address = uVar9;
          return;
        }
        if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
          bVar23 = true;
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar13 = 0x200;
          }
          else {
            iVar13 = 0x280;
          }
          if (iVar13 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200aa30;
          if (vdp_wide_display_mode == '\0') {
            iVar13 = 0x200;
          }
          else {
            iVar13 = 0x280;
          }
          bVar23 = iVar13 + vdp_sprite_attribute_table_base < uVar14;
          DAT_020b4c15 = 1;
        }
        uVar20 = 0;
        if (((uVar12 != vdp_hscroll_table_base) || (DAT_023dcdaa < uVar14)) && (bVar23)) {
          if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
            if (vdp_plane_a_name_table_base < uVar22) {
              if (vdp_plane_a_name_table_end < uVar22) {
                bVar23 = false;
              }
              else {
                bVar23 = true;
              }
            }
            else {
              bVar23 = false;
            }
          }
          else {
            bVar23 = true;
          }
          if ((uStack_2c < vdp_plane_b_name_table_base) || (vdp_plane_b_name_table_end <= uStack_2c)) {
            if (vdp_plane_b_name_table_base < uVar22) {
              if (vdp_plane_b_name_table_end < uVar22) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
            }
            else {
              bVar6 = false;
            }
          }
          else {
            bVar6 = true;
          }
          if (bVar23) {
            if ((plane_name_table_span_bytes >> 1 <= uVar18) && (plane_a_tilemap_refresh_pending = 1, !bVar6)) {
              vdp_dma_length_register = 0;
              vdp_dma_remaining = 0;
              plane_a_tilemap_refresh_pending = 1;
              vdp_dma_source_address = uVar9;
              return;
            }
            uVar16 = uStack_2c - vdp_plane_a_name_table_base;
            bVar23 = (int)uVar16 < 0;
            puVar11 = puVar10;
            if (bVar23) {
              puVar11 = (ushort *)((int)puVar10 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
              uVar16 = uStack_2c;
            }
            if (bVar23) {
              uVar16 = 0;
            }
            uVar18 = uVar22 - vdp_plane_a_name_table_base;
            if (plane_name_table_span_bytes < uVar22 - vdp_plane_a_name_table_base) {
              uVar18 = plane_name_table_span_bytes;
            }
            (*transfer_vdp_words_to_ds_background_0)(puVar11,uVar16,uVar17,uVar18);
            puVar11 = (ushort *)&vdp_address;
            bVar23 = true;
            uStack_2c = vdp_address & 0xfffe;
          }
          else {
            puVar11 = (ushort *)0x0;
            bVar23 = false;
          }
          if (bVar6) {
            if (plane_name_table_span_bytes >> 1 <= vdp_dma_remaining) {
              vdp_dma_length_register = 0;
              vdp_dma_remaining = 0;
              plane_b_tilemap_refresh_pending = 1;
              vdp_dma_source_address = uVar9;
              return;
            }
            iVar13 = uStack_2c - vdp_plane_b_name_table_base;
            bVar23 = iVar13 < 0;
            if (bVar23) {
              iVar13 = 0;
              puVar11 = (ushort *)((int)puVar10 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
            }
            if (!bVar23) {
              puVar11 = puVar10;
            }
            uVar16 = uVar22 - vdp_plane_b_name_table_base;
            if (plane_name_table_span_bytes < uVar22 - vdp_plane_b_name_table_base) {
              uVar16 = plane_name_table_span_bytes;
            }
            (*transfer_vdp_words_to_ds_background_1)(puVar11,iVar13,uVar17,uVar16);
            bVar23 = true;
            uStack_2c = vdp_address & 0xfffe;
          }
          if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
            (*transfer_vdp_words_to_ds_window)(puVar10,uStack_2c - vdp_window_name_table_base & 0xffff,uVar17,vdp_dma_remaining & 0xffff);
            uStack_2c = vdp_address & 0xfffe;
          }
          if (!bVar23) {
            uVar17 = vdp_dma_remaining & 0xffff;
            if (uStack_44 == uVar17) {
              do {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar10);
                uStack_2c = uStack_2c + uVar21 & 0xffff;
                uVar17 = uVar17 - 1 & 0xffff;
                puVar10 = puVar10 + 1;
              } while (uVar17 != 0);
              uVar20 = 0;
            }
            else {
              do {
                if ((&vram_word_change_flags)[uStack_2c >> 1] != '\0') {
                  update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar10);
                }
                uStack_2c = uStack_2c + uVar21 & 0xffff;
                uVar17 = uVar17 - 1 & 0xffff;
                uVar20 = 0;
                puVar10 = puVar10 + 1;
              } while (uVar17 != 0);
            }
          }
        }
      }
      else {
        uVar17 = uVar17 & 0xffff;
        puVar11 = puVar10;
        uVar21 = uVar16;
        uVar22 = uStack_2c;
        do {
          uVar1 = *puVar11;
          uVar21 = uVar21 - 1 & 0xffff;
          (&vdp_vram)[uVar22] = (char)(uVar1 >> 8);
          uVar9 = uVar9 + 2 & 0x1ffff | uVar20 & 0xfe0000;
          (&vdp_vram_odd_byte_base)[uVar22] = (char)uVar1;
          uVar22 = uVar22 + uVar17 & 0xffff;
          puVar11 = puVar11 + 1;
        } while (uVar21 != 0);
        if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
          bVar23 = true;
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar13 = 0x200;
          }
          else {
            iVar13 = 0x280;
          }
          if (iVar13 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200aa20;
          if (vdp_wide_display_mode == '\0') {
            iVar13 = 0x200;
          }
          else {
            iVar13 = 0x280;
          }
          bVar23 = iVar13 + vdp_sprite_attribute_table_base < uVar22;
          DAT_020b4c15 = 1;
        }
        uVar20 = 0;
        if (((uVar12 != vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar22)) && (bVar23)) {
          if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
            bVar23 = false;
            uVar20 = uVar16;
          }
          else {
            if (plane_name_table_span_bytes >> 1 <= uVar16) {
              reset_background_tile_cache_at_capacity(0);
            }
            uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
            puVar11 = puVar10;
            do {
              (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar16 = uVar16 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar16 != 0);
            bVar23 = true;
            uStack_2c = vdp_address & 0xfffe;
            uVar20 = 0;
          }
          if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < vdp_plane_b_name_table_end)) {
            uVar20 = vdp_dma_remaining & 0xffff;
            if (plane_name_table_span_bytes >> 1 <= uVar20) {
              reset_background_tile_cache_at_capacity(1);
            }
            uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
            puVar11 = puVar10;
            do {
              (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar20 = uVar20 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar20 != 0);
            bVar23 = true;
            uStack_2c = vdp_address & 0xfffe;
            uVar20 = 0;
          }
          if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
            uVar20 = vdp_dma_remaining & 0xffff;
            if (vdp_wide_display_mode == '\0') {
              uVar16 = 0x400;
            }
            else {
              uVar16 = 0x800;
            }
            if (uVar16 <= uVar20) {
              reset_background_tile_cache_at_capacity(2);
            }
            uStack_2c = uStack_2c - vdp_window_name_table_base;
            puVar11 = puVar10;
            do {
              (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar20 = uVar20 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar20 != 0);
            uStack_2c = vdp_address & 0xfffe;
            uVar20 = 0;
          }
          if (!bVar23) {
            uVar16 = vdp_dma_remaining & 0xffff;
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar10 << 8 | (uint)(*puVar10 >> 8));
              uStack_2c = uStack_2c + uVar17 & 0xffff;
              uVar16 = uVar16 - 1 & 0xffff;
              uVar20 = 0;
              puVar10 = puVar10 + 1;
            } while (uVar16 != 0);
          }
        }
      }
      vdp_address = uVar22 & 0xffff;
      vdp_dma_length_register = uVar20;
      vdp_dma_remaining = uVar20;
      vdp_dma_source_address = uVar9;
      break;
    case 2:
      vdp_dma_fill_pending = '\x01';
      break;
    case 3:
      uVar20 = (vdp_dma_source_address & 0x1ffff) >> 1;
      uVar18 = uVar20 + uVar16;
      uVar21 = vdp_address_increment & 0xffff;
      do {
        uVar12 = uVar20 ^ 1;
        uVar20 = uVar20 + 1 & 0xffff;
        (&vdp_vram)[vdp_address ^ 1] = (&vdp_vram)[uVar12];
        vdp_address = vdp_address + uVar21 & 0xffff;
      } while (uVar20 != (uVar18 & 0xffff));
      if (uVar17 == 1) {
        uVar16 = uVar16 >> 1;
        uVar21 = 2;
      }
      do {
        uVar9 = uVar9 & 0xfffe;
        if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
          if ((uVar9 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar9)) {
            if ((uVar9 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar9)) {
              bVar23 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar9 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
              bVar23 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar9) && (uVar9 < vdp_plane_b_name_table_end)) {
              (*write_ds_background_tilemap_word)(1,uVar9 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
              bVar23 = true;
            }
            if ((vdp_window_name_table_base <= uVar9) && (uVar9 < vdp_window_name_table_end)) {
              (*write_ds_window_tilemap_word)(uVar9 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            }
            if (!bVar23) {
              update_cached_ds_pattern_from_vdp_word(uVar9,*(undefined2 *)(&vdp_vram + uVar9));
            }
          }
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar13 = 0x200;
          }
          else {
            iVar13 = 0x280;
          }
          if (iVar13 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200a3f0;
          DAT_020b4c15 = 1;
        }
        uVar16 = uVar16 - 1 & 0xffff;
        if (uVar16 == 0) {
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar9 = uVar9 + uVar21;
      } while( true );
    }
    return;
  }
  if (uVar16 == 7) {
    (&genesis_work_ram_bytes)[(guest_address & 0x7fff | z80_cartridge_bank_base & 0xffff) ^ 1] = bVar15;
    return;
  }
  if (uVar16 != 5) {
    return;
  }
  if ((int)uVar9 < 0xa10000) {
    return;
  }
  uVar17 = (int)uVar9 >> 8 & 0xff;
  if (uVar17 == 0x11) {
    if ((uVar9 & 1) == 0) {
      z80_bus_request_asserted = (byte)(write_value & 1);
      DAT_0b0000a8 = 1;
      DAT_0208f349 = z80_bus_request_asserted & z80_reset_released ^ 1;
      if ((((write_value & 1) == 0) && (z80_reset_released == 1)) && ((emulator_option_flags & 2) == 0)) {
        run_z80_if_enabled_and_bus_released(0x20);
      }
      DAT_02099004 = 0;
      return;
    }
    return;
  }
  if (uVar17 == 0x12) {
    if ((uVar9 & 1) == 0) {
      z80_reset_released = (byte)(write_value & 1);
      DAT_0b0000a8 = 1;
      DAT_0208f349 = z80_reset_released & z80_bus_request_asserted ^ 1;
      if ((write_value & 1) == 0) {
        reset_fm_and_clear_queued_sound_writes();
        reset_z80_core_state();
      }
      DAT_02099004 = 0;
      return;
    }
    return;
  }
  if (uVar17 != 0) {
    return;
  }
  if (0xa1001f < (int)uVar9) {
    return;
  }
  switch((int)uVar9 >> 1 & 0xe) {
  case 2:
    puVar8 = controller_port_1_state;
    break;
  case 4:
    puVar8 = controller_port_2_state;
    break;
  default:
    return;
  case 8:
    puVar8 = controller_port_1_state;
    goto LAB_02003820;
  case 10:
    puVar8 = controller_port_2_state;
LAB_02003820:
    *(byte *)((int)puVar8 + 0x1a) = bVar15;
    return;
  }
  *(undefined1 *)((int)puVar8 + 0x1f) = *(undefined1 *)((int)puVar8 + 0x1e);
  *(byte *)((int)puVar8 + 0x1e) = (byte)((write_value & 0xff) >> 6) & 1;
  *(byte *)((int)puVar8 + 0x19) = bVar15;
  if ((char)puVar8[6] != '\0') {
    uVar17 = read_m68k_cycle_counter();
    puVar8[1] = uVar17;
    uVar9 = uVar17 - puVar8[2];
    *puVar8 = uVar9;
    if (0x1fff < uVar9) {
      puVar8[3] = 0;
    }
    if (0x1fff < uVar9) {
      puVar8[2] = uVar17;
    }
    if (*(short *)((int)puVar8 + 0x1e) == 0x100) {
      puVar8[3] = puVar8[3] + 1;
    }
    return;
  }
  return;
switchD_02005bc0_caseD_1:
  if (ym2612_bank_0_register == 0x2a) {
    if (dac_queue_bytes < 0x400) {
      DAT_0209904c = write_value & 0x7f | DAT_0209904c;
      *(byte *)(dac_queue_bytes + dac_write_buffer) = bVar15;
      dac_queue_bytes = dac_queue_bytes + 1;
      return;
    }
    return;
  }
  if (ym2612_selected_bank != 0) {
    return;
  }
  if (((&DAT_0209927c)[ym2612_bank_0_register] != '\0') && ((byte)(&ym2612_bank_0_mirror)[ym2612_bank_0_register] == uVar17)) {
    return;
  }
  (&ym2612_bank_0_mirror)[ym2612_bank_0_register] = bVar15;
  iVar7 = z80_context_pointer;
  switch(iVar13) {
  case 0x24:
    uVar17 = DAT_023db784 & 3 | uVar17 << 2;
    if (DAT_023db784 == uVar17) {
      return;
    }
    break;
  case 0x25:
    uVar17 = DAT_023db784 & 0x3fc | write_value & 3;
    if (DAT_023db784 == uVar17) {
      return;
    }
    break;
  case 0x26:
    if (DAT_023db790 != uVar17) {
      iVar13 = (uint)(ushort)(&DAT_023dbf98)[uVar17] << 5;
      DAT_023db788 = iVar13;
      DAT_023db790 = uVar17;
      *(undefined1 *)(z80_context_pointer + 0x48f) = 0;
      *(char *)(iVar7 + 0x48d) = (char)((uint)iVar13 >> 8);
      *(char *)(iVar7 + 0x48e) = (char)((uint)iVar13 >> 0x10);
      *(char *)(iVar7 + 0x48c) = (char)iVar13;
      iVar13 = z80_context_pointer;
      *(undefined1 *)(z80_context_pointer + 0x490) = (undefined1)DAT_023db788;
      *(undefined1 *)(iVar13 + 0x491) = DAT_023db788._1_1_;
      *(undefined1 *)(iVar13 + 0x492) = DAT_023db788._2_1_;
      *(undefined1 *)(iVar13 + 0x493) = DAT_023db788._3_1_;
      return;
    }
    return;
  case 0x27:
    DAT_023db778 = uVar17;
    if ((write_value & 0x20) != 0) {
      DAT_023db794 = DAT_023db794 & 0xfffffffd;
      puVar8 = (uint *)(z80_context_pointer + 0x480);
      uVar17 = *puVar8 & 0xfffffffd;
      *(char *)(z80_context_pointer + 0x483) = (char)(uVar17 >> 0x18);
      *(byte *)(iVar7 + 0x480) = (byte)*puVar8 & 0xfd;
      *(char *)(iVar7 + 0x481) = (char)(uVar17 >> 8);
      *(char *)(iVar7 + 0x482) = (char)(uVar17 >> 0x10);
    }
    iVar7 = z80_context_pointer;
    if ((write_value & 0x10) != 0) {
      DAT_023db794 = DAT_023db794 & 0xfffffffe;
      puVar8 = (uint *)(z80_context_pointer + 0x480);
      uVar17 = *puVar8 & 0xfffffffe;
      *(char *)(z80_context_pointer + 0x483) = (char)(uVar17 >> 0x18);
      *(byte *)(iVar7 + 0x480) = (byte)*puVar8 & 0xfe;
      *(char *)(iVar7 + 0x481) = (char)(uVar17 >> 8);
      *(char *)(iVar7 + 0x482) = (char)(uVar17 >> 0x10);
    }
    iVar7 = z80_context_pointer;
    bVar2 = *(byte *)(z80_context_pointer + 0x480);
    *(undefined1 *)(z80_context_pointer + 0x481) = 0;
    *(undefined1 *)(iVar7 + 0x483) = 0;
    *(undefined1 *)(iVar7 + 0x482) = 0;
    *(byte *)(iVar7 + 0x480) = bVar2 & 3;
    iVar7 = z80_context_pointer;
    uVar5 = *(undefined4 *)(z80_context_pointer + 0x480);
    *(char *)(z80_context_pointer + 0x483) = (char)((uint)uVar5 >> 0x18);
    *(byte *)(iVar7 + 0x481) = (byte)((uint)uVar5 >> 8) | bVar15;
    *(char *)(iVar7 + 0x482) = (char)((uint)uVar5 >> 0x10);
    *(char *)(iVar7 + 0x480) = (char)uVar5;
  default:
    if (ym2612_bank_0_queue_bytes < 0x1fe) {
      *(char *)(ym2612_bank_0_queue_bytes + DAT_023db644) = (char)iVar13;
      *(byte *)(ym2612_bank_0_queue_bytes + 1 + DAT_023db644) = bVar15;
      ym2612_bank_0_queue_bytes = ym2612_bank_0_queue_bytes + 2;
      return;
    }
    return;
  }
  iVar13 = (uint)(ushort)(&DAT_023db798)[uVar17] << 1;
  DAT_023db77c = iVar13;
  DAT_023db784 = uVar17;
  *(undefined1 *)(z80_context_pointer + 0x487) = 0;
  *(char *)(iVar7 + 0x485) = (char)((uint)iVar13 >> 8);
  *(char *)(iVar7 + 0x486) = (char)((uint)iVar13 >> 0x10);
  *(char *)(iVar7 + 0x484) = (char)iVar13;
  iVar13 = z80_context_pointer;
  *(undefined1 *)(z80_context_pointer + 0x488) = (undefined1)DAT_023db77c;
  *(undefined1 *)(iVar13 + 0x489) = DAT_023db77c._1_1_;
  *(undefined1 *)(iVar13 + 0x48a) = DAT_023db77c._2_1_;
  *(undefined1 *)(iVar13 + 0x48b) = DAT_023db77c._3_1_;
  return;
}


// 0x02004ce4  write_z80_mapped_little_endian_word

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_z80_mapped_little_endian_word(int guest_address,uint write_value)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint uStack_44;
  uint uStack_2c;
  
  write_z80_mapped_byte(guest_address,write_value & 0xff);
  uVar20 = vdp_dma_source_address;
  uVar17 = vdp_address_increment;
  iVar6 = ym2612_bank_1_register;
  iVar19 = ym2612_bank_0_register;
  uVar8 = ym2612_bank_1_queue_bytes;
  write_value = write_value & 0xff00;
  uVar9 = guest_address + 1;
  uVar14 = write_value >> 8;
  bVar15 = (byte)(write_value >> 8);
  switch((int)uVar9 >> 0xd & 7) {
  case 0:
  case 1:
    (&z80_work_ram_bytes)[uVar9 & 0x1fff] = bVar15;
    return;
  case 2:
    do {
    } while ((REG_IPC_SYNC & 0xf) == 0);
    switch(uVar9 & 3) {
    case 0:
      ym2612_selected_bank = 0;
      ym2612_bank_0_register = uVar14;
      return;
    case 1:
      goto switchD_02005bc0_caseD_1;
    case 2:
      ym2612_selected_bank = 1;
      ym2612_bank_1_register = uVar14;
      return;
    case 3:
      if (ym2612_selected_bank == 0) {
        return;
      }
      if (((&DAT_0209927c)[ym2612_bank_1_register] != '\0') && ((byte)(&ym2612_bank_1_mirror)[ym2612_bank_1_register] == uVar14)
         ) {
        return;
      }
      (&ym2612_bank_1_mirror)[ym2612_bank_1_register] = bVar15;
      if (0x1fd < uVar8) {
        return;
      }
      ym2612_bank_1_queue_bytes = uVar8 + 2;
      *(char *)(uVar8 + ym2612_bank_1_write_buffer) = (char)iVar6;
      *(byte *)(uVar8 + 1 + ym2612_bank_1_write_buffer) = bVar15;
    default:
      return;
    }
  case 3:
    if ((uVar9 & 0xff00) == 0x6000) {
      z80_cartridge_bank_base = (uVar14 & 1) << 0x17 | z80_cartridge_bank_base >> 1 & 0xff8000;
      return;
    }
    if ((uVar9 & 0xff00) != 0x7f00) {
      return;
    }
    if (0x17 < (uVar9 & 0x1f)) {
      return;
    }
    if ((1 << (uVar9 & 0x1f) & 0xaa0000U) == 0) {
      return;
    }
LAB_02005adc:
    do {
    } while ((REG_IPC_SYNC & 0xf) == 0);
    if (psg_queue_bytes < 0x100) {
      *(byte *)(psg_queue_bytes + psg_write_buffer) = bVar15;
      psg_queue_bytes = psg_queue_bytes + 1;
    }
    if ((uVar14 & 0x80) == 0) {
      if ((DAT_0209939c & 1) == 0) {
        *(uint *)(&DAT_0209937c + DAT_0209939c * 4) =
             *(uint *)(&DAT_0209937c + DAT_0209939c * 4) & 0xf | (uVar14 & 0x3f) << 4;
        return;
      }
      return;
    }
    DAT_0209939c = (int)(uVar14 & 0x70) >> 4;
    *(uint *)(&DAT_0209937c + DAT_0209939c * 4) =
         *(uint *)(&DAT_0209937c + DAT_0209939c * 4) & 0x3f0 | uVar14 & 0xf;
    return;
  }
  uVar8 = uVar9 & 0x7fff | z80_cartridge_bank_base;
  uVar16 = (int)uVar8 >> 0x15 & 7;
  if (uVar16 == 6) {
    if ((uVar8 & 0xe700e0) != 0xc00000) {
      return;
    }
    if (0x17 < (uVar8 & 0x1f)) {
      return;
    }
    uVar9 = 1 << (uVar8 & 0x1f);
    if ((uVar9 & 0xaa0000) != 0) goto LAB_02005adc;
    if ((uVar9 & 0xff) == 0) {
      return;
    }
    if ((uVar8 & 0x1c) == 0) {
      if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
         ((vdp_access_code & 0x20) != 0)) {
        execute_vdp_dma_command();
      }
      uVar8 = vdp_address_increment;
      uVar17 = vdp_dma_remaining;
      if (vdp_dma_fill_pending != '\0') {
        bVar22 = (vdp_address & 1) == 0;
        uVar20 = vdp_address & 0xffff;
        if (bVar22) {
          puVar18 = &vdp_vram + uVar20;
        }
        else {
          puVar18 = (undefined1 *)(vdp_address & 0xfffe);
        }
        uVar9 = vdp_address_increment & 0xffff;
        if (!bVar22) {
          (&vdp_vram)[(int)puVar18] = bVar15;
        }
        uVar17 = uVar17 & 0xffff;
        if (bVar22) {
          (&vdp_vram)[uVar20] = 0;
          puVar18[1] = bVar15;
        }
        if (!bVar22) {
          (&vdp_vram)[uVar20] = 0;
        }
        uVar12 = uVar20 + uVar9 & 0xffff;
        uVar16 = uVar17;
        if (uVar17 != 0) {
          do {
            uVar16 = uVar16 - 1 & 0xffff;
            (&vdp_vram)[uVar12] = bVar15;
            uVar12 = uVar12 + uVar9 & 0xffff;
          } while (uVar16 != 0);
          uVar20 = vdp_address;
          if (uVar17 == 0xffff && uVar14 == 0) {
            vdp_address = uVar12;
            clear_and_initialize_renderer_vram();
            vdp_dma_fill_pending = 0;
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            return;
          }
        }
        vdp_address = uVar12;
        uVar20 = uVar20 & 0xfffe;
        if (uVar8 == 1) {
          uVar17 = uVar17 >> 1;
          uVar9 = 2;
        }
        do {
          if (uVar20 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
            if ((uVar20 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar20)) {
              if ((uVar20 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar20)) {
                bVar22 = false;
              }
              else {
                (*write_ds_background_tilemap_word)(0,uVar20 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar20));
                bVar22 = true;
              }
              if ((vdp_plane_b_name_table_base <= uVar20) && (uVar20 < vdp_plane_b_name_table_end)) {
                (*write_ds_background_tilemap_word)(1,uVar20 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar20));
                bVar22 = true;
              }
              if ((vdp_window_name_table_base <= uVar20) && (uVar20 < vdp_window_name_table_end)) {
                (*write_ds_window_tilemap_word)(uVar20 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar20));
              }
              if (!bVar22) {
                update_cached_ds_pattern_from_vdp_word(uVar20,*(undefined2 *)(&vdp_vram + uVar20));
              }
            }
          }
          else {
            if (vdp_wide_display_mode == '\0') {
              iVar19 = 0x200;
            }
            else {
              iVar19 = 0x280;
            }
            if (iVar19 + vdp_sprite_attribute_table_base <= uVar20) goto LAB_0200adc4;
            DAT_020b4c15 = 1;
          }
          uVar17 = uVar17 - 1 & 0xffff;
          if (uVar17 == 0) {
            vdp_dma_fill_pending = 0;
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            return;
          }
          uVar20 = uVar20 + uVar9 & 0xfffe;
        } while( true );
      }
      uVar17 = vdp_access_code & 0xf;
      uVar1 = (ushort)(write_value >> 8);
      if (uVar17 == 3) {
        uVar17 = (vdp_address & 0x7e) >> 1;
        (&vdp_cram)[uVar17] = uVar1 & 0xeee;
        uVar1 = (ushort)((uVar14 & 0xe0) << 2) | 0x8000 | (ushort)((uVar14 & 0xe) << 1);
        if ((uVar17 != 0) && (vdp_scanline < 0xdf)) {
          bVar15 = (&DAT_0208ebb0)[vdp_scanline];
          if (bVar15 == 200) {
            bVar15 = (&DAT_0208ebaf)[vdp_scanline];
          }
          (&scanline_pending_palette_changes)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
          (&DAT_023dc8ca)[uVar17 + (uint)(bVar15 >> 5) * 0x40] = uVar1;
        }
        uVar14 = (uint)vdp_backdrop_color_index;
        (&ds_converted_vdp_palette)[uVar17] = uVar1;
        DAT_0208f354 = 1;
        if (uVar17 == uVar14) {
          _DAT_05000200 = uVar1;
        }
      }
      else if (uVar17 == 5) {
        uVar17 = vdp_address & 0x7f;
        if (0x4f < uVar17) {
          vdp_address = uVar17;
          return;
        }
        uVar14 = vdp_address & 0x7e;
        vdp_address = uVar17;
        *(ushort *)((int)&vdp_vsram + uVar14) = uVar1;
      }
      else if (uVar17 == 1) {
        uVar17 = vdp_address & 0xfffe;
        if ((vdp_address & 1) == 0) {
          if (*(ushort *)(&vdp_vram + uVar17) == uVar14) goto LAB_0200ae88;
          *(ushort *)(&vdp_vram + uVar17) = uVar1;
        }
        else {
          (&vdp_vram)[uVar17] = 0;
          (&vdp_vram_odd_byte_base)[uVar17] = bVar15;
          uVar14 = uVar14 << 8;
        }
        if (vdp_sprite_attribute_table_base <= uVar17) {
          if (vdp_wide_display_mode == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          if (uVar17 < iVar19 + vdp_sprite_attribute_table_base) {
            DAT_020b4c15 = 1;
            goto LAB_0200ae88;
          }
        }
        if ((uVar17 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar17)) {
          bVar22 = false;
        }
        else {
          (*write_ds_background_tilemap_word)(0,uVar17 - vdp_plane_a_name_table_base,uVar14);
          bVar22 = true;
        }
        if ((vdp_plane_b_name_table_base <= uVar17) && (uVar17 < vdp_plane_b_name_table_end)) {
          (*write_ds_background_tilemap_word)(1,uVar17 - vdp_plane_b_name_table_base,uVar14);
          bVar22 = true;
        }
        if ((vdp_window_name_table_base <= uVar17) && (uVar17 < vdp_window_name_table_end)) {
          (*write_ds_window_tilemap_word)(uVar17 - vdp_window_name_table_base,uVar14);
        }
        if (!bVar22) {
          update_cached_ds_pattern_from_vdp_word(uVar17,uVar14);
        }
      }
LAB_0200ae88:
      vdp_address = vdp_address + vdp_address_increment;
      return;
    }
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000 | uVar14;
      return;
    }
    vdp_access_code = vdp_access_code & 3 | write_value >> 10 & 0x3c;
    uVar14 = vdp_address & 0x3fff | (uVar14 & 3) << 0xe;
    vdp_control_word_pending = 0;
    vdp_address = uVar14;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((write_value >> 10 & 0x20) == 0) {
      return;
    }
    uVar8 = vdp_dma_length_register & 0xffff;
    if ((vdp_dma_length_register & 0xffff) == 0) {
      uVar8 = 0xffff;
    }
    vdp_dma_remaining = uVar8;
    switch(vdp_dma_mode & 0xf) {
    case 0:
    case 1:
      uVar14 = vdp_dma_source_address & 0xfffffe;
      puVar10 = (ushort *)get_vdp_dma_backing_pointer(uVar14);
      uVar12 = vdp_address;
      uVar16 = vdp_dma_remaining;
      uVar9 = vdp_scanline;
      uVar13 = vdp_access_code & 0xf;
      uVar8 = vdp_dma_remaining & 0xffff;
      if (uVar13 == 3) {
        bVar15 = (&DAT_0208ebb0)[vdp_scanline];
        uVar14 = uVar14 << 0xf;
        if (bVar15 == 200) {
          bVar15 = (&DAT_0208ebaf)[vdp_scanline];
        }
        uVar16 = (uint)vdp_backdrop_color_index;
        do {
          uVar13 = (uint)*puVar10;
          uVar12 = (vdp_address & 0x7e) >> 1;
          uVar1 = (ushort)((uVar13 & 0xe0) << 2) | (ushort)((uVar13 & 0xe00) << 3) | 0x8000 |
                  (ushort)((uVar13 & 0xe) << 1);
          uVar14 = uVar14 + 0x8000;
          vdp_address = vdp_address + uVar17;
          if ((uVar13 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar12]) {
            (&vdp_cram)[uVar12] = (short)(uVar13 & 0xeee);
            if ((uVar12 != 0) && (uVar9 < 0xdf)) {
              (&DAT_023dc8ca)[uVar12 + (uint)(bVar15 >> 5) * 0x40] = uVar1;
              (&scanline_pending_palette_changes)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
            }
            DAT_0208f354 = 1;
            (&ds_converted_vdp_palette)[uVar12] = uVar1;
            if (uVar12 == uVar16) {
              _DAT_05000200 = uVar1;
            }
          }
          uVar8 = uVar8 - 1 & 0xffff;
          puVar10 = puVar10 + 1;
        } while (uVar8 != 0);
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar20 & 0xfe0000 | uVar14 >> 0xf;
        return;
      }
      if (uVar13 == 5) {
        uVar14 = uVar14 << 0xf;
        do {
          uVar16 = vdp_address & 0x7f;
          uVar9 = vdp_address & 0x7e;
          vdp_address = uVar16;
          if (0x4f < uVar16) break;
          uVar8 = uVar8 - 1 & 0xffff;
          uVar14 = uVar14 + 0x8000;
          *(ushort *)((int)&vdp_vsram + uVar9) = *puVar10;
          puVar10 = puVar10 + 1;
          vdp_address = uVar17 + uVar16;
        } while (uVar8 != 0);
        vdp_dma_length_register = uVar8;
        vdp_dma_remaining = uVar8;
        vdp_dma_source_address = uVar20 & 0xfe0000 | uVar14 >> 0xf;
        return;
      }
      if (uVar13 != 1) {
        vdp_dma_length_register = uVar8;
        vdp_dma_remaining = uVar8;
        vdp_dma_source_address = uVar14;
        return;
      }
      uStack_2c = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        uVar9 = uVar17 & 0xffff;
        uVar14 = uVar14 << 0xf;
        uStack_44 = 0;
        puVar11 = puVar10;
        uVar13 = uStack_2c;
        do {
          uVar1 = *(ushort *)(&vdp_vram + uVar13);
          uVar3 = *puVar11;
          if (uVar3 != uVar1) {
            *(ushort *)(&vdp_vram + uVar13) = uVar3;
            uStack_44 = uStack_44 + 1;
          }
          uVar8 = uVar8 - 1 & 0xffff;
          uVar14 = uVar14 + 0x8000;
          (&vram_word_change_flags)[uVar13 >> 1] = uVar3 != uVar1;
          uVar13 = uVar13 + uVar9 & 0xffff;
          puVar11 = puVar11 + 1;
        } while (uVar8 != 0);
        uVar21 = uVar13;
        if (uVar13 <= uVar12) {
          uVar21 = uVar13 + 0x10000;
        }
        uVar14 = uVar20 & 0xfe0000 | uVar14 >> 0xf;
        if (uStack_44 == 0) {
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          vdp_dma_source_address = uVar14;
          return;
        }
        if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
          bVar22 = true;
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          if (iVar19 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200aa30;
          if (vdp_wide_display_mode == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          bVar22 = iVar19 + vdp_sprite_attribute_table_base < uVar13;
          DAT_020b4c15 = 1;
        }
        uVar20 = 0;
        if (((uVar12 != vdp_hscroll_table_base) || (DAT_023dcdaa < uVar13)) && (bVar22)) {
          if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
            if (vdp_plane_a_name_table_base < uVar21) {
              if (vdp_plane_a_name_table_end < uVar21) {
                bVar22 = false;
              }
              else {
                bVar22 = true;
              }
            }
            else {
              bVar22 = false;
            }
          }
          else {
            bVar22 = true;
          }
          if ((uStack_2c < vdp_plane_b_name_table_base) || (vdp_plane_b_name_table_end <= uStack_2c)) {
            if (vdp_plane_b_name_table_base < uVar21) {
              if (vdp_plane_b_name_table_end < uVar21) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
            }
            else {
              bVar5 = false;
            }
          }
          else {
            bVar5 = true;
          }
          if (bVar22) {
            if ((plane_name_table_span_bytes >> 1 <= uVar16) && (plane_a_tilemap_refresh_pending = 1, !bVar5)) {
              vdp_dma_length_register = 0;
              vdp_dma_remaining = 0;
              plane_a_tilemap_refresh_pending = 1;
              vdp_dma_source_address = uVar14;
              return;
            }
            uVar8 = uStack_2c - vdp_plane_a_name_table_base;
            bVar22 = (int)uVar8 < 0;
            puVar11 = puVar10;
            if (bVar22) {
              puVar11 = (ushort *)((int)puVar10 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
              uVar8 = uStack_2c;
            }
            if (bVar22) {
              uVar8 = 0;
            }
            uVar16 = uVar21 - vdp_plane_a_name_table_base;
            if (plane_name_table_span_bytes < uVar21 - vdp_plane_a_name_table_base) {
              uVar16 = plane_name_table_span_bytes;
            }
            (*transfer_vdp_words_to_ds_background_0)(puVar11,uVar8,uVar17,uVar16);
            puVar11 = (ushort *)&vdp_address;
            bVar22 = true;
            uStack_2c = vdp_address & 0xfffe;
          }
          else {
            puVar11 = (ushort *)0x0;
            bVar22 = false;
          }
          if (bVar5) {
            if (plane_name_table_span_bytes >> 1 <= vdp_dma_remaining) {
              vdp_dma_length_register = 0;
              vdp_dma_remaining = 0;
              plane_b_tilemap_refresh_pending = 1;
              vdp_dma_source_address = uVar14;
              return;
            }
            iVar19 = uStack_2c - vdp_plane_b_name_table_base;
            bVar22 = iVar19 < 0;
            if (bVar22) {
              iVar19 = 0;
              puVar11 = (ushort *)((int)puVar10 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
            }
            if (!bVar22) {
              puVar11 = puVar10;
            }
            uVar8 = uVar21 - vdp_plane_b_name_table_base;
            if (plane_name_table_span_bytes < uVar21 - vdp_plane_b_name_table_base) {
              uVar8 = plane_name_table_span_bytes;
            }
            (*transfer_vdp_words_to_ds_background_1)(puVar11,iVar19,uVar17,uVar8);
            bVar22 = true;
            uStack_2c = vdp_address & 0xfffe;
          }
          if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
            (*transfer_vdp_words_to_ds_window)(puVar10,uStack_2c - vdp_window_name_table_base & 0xffff,uVar17,vdp_dma_remaining & 0xffff);
            uStack_2c = vdp_address & 0xfffe;
          }
          if (!bVar22) {
            uVar17 = vdp_dma_remaining & 0xffff;
            if (uStack_44 == uVar17) {
              do {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar10);
                uStack_2c = uStack_2c + uVar9 & 0xffff;
                uVar17 = uVar17 - 1 & 0xffff;
                puVar10 = puVar10 + 1;
              } while (uVar17 != 0);
              uVar20 = 0;
            }
            else {
              do {
                if ((&vram_word_change_flags)[uStack_2c >> 1] != '\0') {
                  update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar10);
                }
                uStack_2c = uStack_2c + uVar9 & 0xffff;
                uVar17 = uVar17 - 1 & 0xffff;
                uVar20 = 0;
                puVar10 = puVar10 + 1;
              } while (uVar17 != 0);
            }
          }
        }
      }
      else {
        uVar17 = uVar17 & 0xffff;
        puVar11 = puVar10;
        uVar9 = uVar8;
        uVar21 = uStack_2c;
        do {
          uVar1 = *puVar11;
          uVar9 = uVar9 - 1 & 0xffff;
          (&vdp_vram)[uVar21] = (char)(uVar1 >> 8);
          uVar14 = uVar14 + 2 & 0x1ffff | uVar20 & 0xfe0000;
          (&vdp_vram_odd_byte_base)[uVar21] = (char)uVar1;
          uVar21 = uVar21 + uVar17 & 0xffff;
          puVar11 = puVar11 + 1;
        } while (uVar9 != 0);
        if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
          bVar22 = true;
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          if (iVar19 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200aa20;
          if (vdp_wide_display_mode == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          bVar22 = iVar19 + vdp_sprite_attribute_table_base < uVar21;
          DAT_020b4c15 = 1;
        }
        uVar20 = 0;
        if (((uVar12 != vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar21)) && (bVar22)) {
          if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
            bVar22 = false;
            uVar20 = uVar8;
          }
          else {
            if (plane_name_table_span_bytes >> 1 <= uVar8) {
              reset_background_tile_cache_at_capacity(0);
            }
            uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
            puVar11 = puVar10;
            do {
              (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar8 != 0);
            bVar22 = true;
            uStack_2c = vdp_address & 0xfffe;
            uVar20 = 0;
          }
          if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < vdp_plane_b_name_table_end)) {
            uVar8 = vdp_dma_remaining & 0xffff;
            if (plane_name_table_span_bytes >> 1 <= uVar8) {
              reset_background_tile_cache_at_capacity(1);
            }
            uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
            puVar11 = puVar10;
            do {
              (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar8 != 0);
            bVar22 = true;
            uStack_2c = vdp_address & 0xfffe;
            uVar20 = 0;
          }
          if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
            uVar8 = vdp_dma_remaining & 0xffff;
            if (vdp_wide_display_mode == '\0') {
              uVar20 = 0x400;
            }
            else {
              uVar20 = 0x800;
            }
            if (uVar20 <= uVar8) {
              reset_background_tile_cache_at_capacity(2);
            }
            uStack_2c = uStack_2c - vdp_window_name_table_base;
            puVar11 = puVar10;
            do {
              (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar8 != 0);
            uStack_2c = vdp_address & 0xfffe;
            uVar20 = 0;
          }
          if (!bVar22) {
            uVar8 = vdp_dma_remaining & 0xffff;
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar10 << 8 | (uint)(*puVar10 >> 8));
              uStack_2c = uStack_2c + uVar17 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar20 = 0;
              puVar10 = puVar10 + 1;
            } while (uVar8 != 0);
          }
        }
      }
      vdp_address = uVar21 & 0xffff;
      vdp_dma_length_register = uVar20;
      vdp_dma_remaining = uVar20;
      vdp_dma_source_address = uVar14;
      break;
    case 2:
      vdp_dma_fill_pending = '\x01';
      break;
    case 3:
      uVar20 = (vdp_dma_source_address & 0x1ffff) >> 1;
      uVar16 = uVar20 + uVar8;
      uVar9 = vdp_address_increment & 0xffff;
      do {
        uVar12 = uVar20 ^ 1;
        uVar20 = uVar20 + 1 & 0xffff;
        (&vdp_vram)[vdp_address ^ 1] = (&vdp_vram)[uVar12];
        vdp_address = vdp_address + uVar9 & 0xffff;
      } while (uVar20 != (uVar16 & 0xffff));
      if (uVar17 == 1) {
        uVar8 = uVar8 >> 1;
        uVar9 = 2;
      }
      do {
        uVar14 = uVar14 & 0xfffe;
        if (uVar14 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
          if ((uVar14 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar14)) {
            if ((uVar14 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar14)) {
              bVar22 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar14 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar14));
              bVar22 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar14) && (uVar14 < vdp_plane_b_name_table_end)) {
              (*write_ds_background_tilemap_word)(1,uVar14 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar14));
              bVar22 = true;
            }
            if ((vdp_window_name_table_base <= uVar14) && (uVar14 < vdp_window_name_table_end)) {
              (*write_ds_window_tilemap_word)(uVar14 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar14));
            }
            if (!bVar22) {
              update_cached_ds_pattern_from_vdp_word(uVar14,*(undefined2 *)(&vdp_vram + uVar14));
            }
          }
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          if (iVar19 + vdp_sprite_attribute_table_base <= uVar14) goto LAB_0200a3f0;
          DAT_020b4c15 = 1;
        }
        uVar8 = uVar8 - 1 & 0xffff;
        if (uVar8 == 0) {
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar14 = uVar14 + uVar9;
      } while( true );
    }
    return;
  }
  if (uVar16 == 7) {
    (&genesis_work_ram_bytes)[(uVar9 & 0x7fff | z80_cartridge_bank_base & 0xffff) ^ 1] = bVar15;
    return;
  }
  if (uVar16 != 5) {
    return;
  }
  if ((int)uVar8 < 0xa10000) {
    return;
  }
  uVar17 = (int)uVar8 >> 8 & 0xff;
  if (uVar17 == 0x11) {
    if ((uVar8 & 1) == 0) {
      z80_bus_request_asserted = (byte)(uVar14 & 1);
      DAT_0b0000a8 = 1;
      DAT_0208f349 = z80_bus_request_asserted & z80_reset_released ^ 1;
      if ((((uVar14 & 1) == 0) && (z80_reset_released == 1)) && ((emulator_option_flags & 2) == 0)) {
        run_z80_if_enabled_and_bus_released(0x20);
      }
      DAT_02099004 = 0;
      return;
    }
    return;
  }
  if (uVar17 == 0x12) {
    if ((uVar8 & 1) == 0) {
      z80_reset_released = (byte)(uVar14 & 1);
      DAT_0b0000a8 = 1;
      DAT_0208f349 = z80_reset_released & z80_bus_request_asserted ^ 1;
      if ((uVar14 & 1) == 0) {
        reset_fm_and_clear_queued_sound_writes();
        reset_z80_core_state();
      }
      DAT_02099004 = 0;
      return;
    }
    return;
  }
  if (uVar17 != 0) {
    return;
  }
  if (0xa1001f < (int)uVar8) {
    return;
  }
  switch((int)uVar8 >> 1 & 0xe) {
  case 2:
    puVar7 = controller_port_1_state;
    break;
  case 4:
    puVar7 = controller_port_2_state;
    break;
  default:
    return;
  case 8:
    puVar7 = controller_port_1_state;
    goto LAB_02003820;
  case 10:
    puVar7 = controller_port_2_state;
LAB_02003820:
    *(byte *)((int)puVar7 + 0x1a) = bVar15;
    return;
  }
  *(undefined1 *)((int)puVar7 + 0x1f) = *(undefined1 *)((int)puVar7 + 0x1e);
  *(byte *)((int)puVar7 + 0x1e) = (byte)(write_value >> 0xe) & 1;
  *(byte *)((int)puVar7 + 0x19) = bVar15;
  if ((char)puVar7[6] != '\0') {
    uVar17 = read_m68k_cycle_counter();
    puVar7[1] = uVar17;
    uVar14 = uVar17 - puVar7[2];
    *puVar7 = uVar14;
    if (0x1fff < uVar14) {
      puVar7[3] = 0;
    }
    if (0x1fff < uVar14) {
      puVar7[2] = uVar17;
    }
    if (*(short *)((int)puVar7 + 0x1e) == 0x100) {
      puVar7[3] = puVar7[3] + 1;
    }
    return;
  }
  return;
switchD_02005bc0_caseD_1:
  if (ym2612_bank_0_register == 0x2a) {
    if (dac_queue_bytes < 0x400) {
      DAT_0209904c = uVar14 & 0x7f | DAT_0209904c;
      *(byte *)(dac_queue_bytes + dac_write_buffer) = bVar15;
      dac_queue_bytes = dac_queue_bytes + 1;
      return;
    }
    return;
  }
  if (ym2612_selected_bank != 0) {
    return;
  }
  if (((&DAT_0209927c)[ym2612_bank_0_register] != '\0') && ((byte)(&ym2612_bank_0_mirror)[ym2612_bank_0_register] == uVar14)) {
    return;
  }
  (&ym2612_bank_0_mirror)[ym2612_bank_0_register] = bVar15;
  iVar6 = z80_context_pointer;
  switch(iVar19) {
  case 0x24:
    uVar17 = DAT_023db784 & 3 | uVar14 << 2;
    if (DAT_023db784 == uVar17) {
      return;
    }
    break;
  case 0x25:
    uVar17 = DAT_023db784 & 0x3fc | uVar14 & 3;
    if (DAT_023db784 == uVar17) {
      return;
    }
    break;
  case 0x26:
    if (DAT_023db790 != uVar14) {
      iVar19 = (uint)(ushort)(&DAT_023dbf98)[uVar14] << 5;
      DAT_023db788 = iVar19;
      DAT_023db790 = uVar14;
      *(undefined1 *)(z80_context_pointer + 0x48f) = 0;
      *(char *)(iVar6 + 0x48d) = (char)((uint)iVar19 >> 8);
      *(char *)(iVar6 + 0x48e) = (char)((uint)iVar19 >> 0x10);
      *(char *)(iVar6 + 0x48c) = (char)iVar19;
      iVar19 = z80_context_pointer;
      *(undefined1 *)(z80_context_pointer + 0x490) = (undefined1)DAT_023db788;
      *(undefined1 *)(iVar19 + 0x491) = DAT_023db788._1_1_;
      *(undefined1 *)(iVar19 + 0x492) = DAT_023db788._2_1_;
      *(undefined1 *)(iVar19 + 0x493) = DAT_023db788._3_1_;
      return;
    }
    return;
  case 0x27:
    DAT_023db778 = uVar14;
    if ((uVar14 & 0x20) != 0) {
      DAT_023db794 = DAT_023db794 & 0xfffffffd;
      puVar7 = (uint *)(z80_context_pointer + 0x480);
      uVar17 = *puVar7 & 0xfffffffd;
      *(char *)(z80_context_pointer + 0x483) = (char)(uVar17 >> 0x18);
      *(byte *)(iVar6 + 0x480) = (byte)*puVar7 & 0xfd;
      *(char *)(iVar6 + 0x481) = (char)(uVar17 >> 8);
      *(char *)(iVar6 + 0x482) = (char)(uVar17 >> 0x10);
    }
    iVar6 = z80_context_pointer;
    if ((uVar14 & 0x10) != 0) {
      DAT_023db794 = DAT_023db794 & 0xfffffffe;
      puVar7 = (uint *)(z80_context_pointer + 0x480);
      uVar17 = *puVar7 & 0xfffffffe;
      *(char *)(z80_context_pointer + 0x483) = (char)(uVar17 >> 0x18);
      *(byte *)(iVar6 + 0x480) = (byte)*puVar7 & 0xfe;
      *(char *)(iVar6 + 0x481) = (char)(uVar17 >> 8);
      *(char *)(iVar6 + 0x482) = (char)(uVar17 >> 0x10);
    }
    iVar6 = z80_context_pointer;
    bVar2 = *(byte *)(z80_context_pointer + 0x480);
    *(undefined1 *)(z80_context_pointer + 0x481) = 0;
    *(undefined1 *)(iVar6 + 0x483) = 0;
    *(undefined1 *)(iVar6 + 0x482) = 0;
    *(byte *)(iVar6 + 0x480) = bVar2 & 3;
    iVar6 = z80_context_pointer;
    uVar4 = *(undefined4 *)(z80_context_pointer + 0x480);
    *(char *)(z80_context_pointer + 0x483) = (char)((uint)uVar4 >> 0x18);
    *(byte *)(iVar6 + 0x481) = (byte)((uint)uVar4 >> 8) | bVar15;
    *(char *)(iVar6 + 0x482) = (char)((uint)uVar4 >> 0x10);
    *(char *)(iVar6 + 0x480) = (char)uVar4;
  default:
    if (ym2612_bank_0_queue_bytes < 0x1fe) {
      *(char *)(ym2612_bank_0_queue_bytes + DAT_023db644) = (char)iVar19;
      *(byte *)(ym2612_bank_0_queue_bytes + 1 + DAT_023db644) = bVar15;
      ym2612_bank_0_queue_bytes = ym2612_bank_0_queue_bytes + 2;
      return;
    }
    return;
  }
  iVar19 = (uint)(ushort)(&DAT_023db798)[uVar17] << 1;
  DAT_023db77c = iVar19;
  DAT_023db784 = uVar17;
  *(undefined1 *)(z80_context_pointer + 0x487) = 0;
  *(char *)(iVar6 + 0x485) = (char)((uint)iVar19 >> 8);
  *(char *)(iVar6 + 0x486) = (char)((uint)iVar19 >> 0x10);
  *(char *)(iVar6 + 0x484) = (char)iVar19;
  iVar19 = z80_context_pointer;
  *(undefined1 *)(z80_context_pointer + 0x488) = (undefined1)DAT_023db77c;
  *(undefined1 *)(iVar19 + 0x489) = DAT_023db77c._1_1_;
  *(undefined1 *)(iVar19 + 0x48a) = DAT_023db77c._2_1_;
  *(undefined1 *)(iVar19 + 0x48b) = DAT_023db77c._3_1_;
  return;
}

