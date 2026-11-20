/* ARM9 to displacement or indexed — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02019a10  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_word_02019a10(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  bool bVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  int unaff_r6;
  int unaff_r8;
  uint uVar18;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar2 = *unaff_r10;
  iVar10 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar10 = unaff_r6;
  }
  uVar12 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar10 = (int)*(short *)(iVar10 + uVar12);
  }
  else {
    iVar10 = *(int *)(iVar10 + uVar12);
  }
  uVar7 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar10);
  uVar17 = vdp_dma_source_address;
  uVar12 = vdp_address_increment;
  uVar16 = uVar7 & 0xffff;
  uVar8 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(short)unaff_r10[1];
  uVar2 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar8 & 0xffff)) = uVar2;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar13 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar17 = vdp_address_increment;
    uVar12 = vdp_dma_remaining;
    uVar3 = (undefined1)(uVar16 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar19 = (vdp_address & 1) == 0;
      uVar16 = vdp_address & 0xffff;
      if (bVar19) {
        puVar15 = &vdp_vram + uVar16;
      }
      else {
        puVar15 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar8 = vdp_address_increment & 0xffff;
      if (!bVar19) {
        (&vdp_vram)[(int)puVar15] = bVar13;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar19) {
        (&vdp_vram)[uVar16] = uVar3;
        puVar15[1] = bVar13;
      }
      if (!bVar19) {
        (&vdp_vram)[uVar16] = uVar3;
      }
      uVar9 = uVar16 + uVar8 & 0xffff;
      uVar14 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar14 = uVar14 - 1 & 0xffff;
          (&vdp_vram)[uVar9] = bVar13;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar14 != 0);
        uVar16 = vdp_address;
        if (uVar12 == 0xffff && (uVar7 & 0xff) == 0) {
          vdp_address = uVar9;
          clear_and_initialize_renderer_vram();
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
      }
      vdp_address = uVar9;
      uVar16 = uVar16 & 0xfffe;
      if (uVar17 == 1) {
        uVar12 = uVar12 >> 1;
        uVar8 = 2;
      }
      do {
        if (uVar16 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar16 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar16)) {
            if ((uVar16 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar16)) {
              bVar19 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar16 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
              bVar19 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar16) && (uVar16 < vdp_plane_b_name_table_end)) {
              (*write_ds_background_tilemap_word)(1,uVar16 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
              bVar19 = true;
            }
            if ((vdp_window_name_table_base <= uVar16) && (uVar16 < vdp_window_name_table_end)) {
              (*write_ds_window_tilemap_word)(uVar16 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
            }
            if (!bVar19) {
              update_cached_ds_pattern_from_vdp_word(uVar16,*(undefined2 *)(&vdp_vram + uVar16));
            }
          }
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar10 = 0x200;
          }
          else {
            iVar10 = 0x280;
          }
          if (iVar10 + vdp_sprite_attribute_table_base <= uVar16) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar16 = uVar16 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar12 = vdp_access_code & 0xf;
    if (uVar12 == 3) {
      uVar12 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar12] = uVar2 & 0xeee;
      uVar2 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar12 != 0) && (vdp_scanline < 0xdf)) {
        bVar13 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar13 == 200) {
          bVar13 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&scanline_pending_palette_changes)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar12 + (uint)(bVar13 >> 5) * 0x40] = uVar2;
      }
      uVar16 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar12] = uVar2;
      DAT_0208f354 = 1;
      if (uVar12 == uVar16) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar12 == 5) {
      uVar12 = vdp_address & 0x7f;
      if (0x4f < uVar12) {
        vdp_address = uVar12;
        return;
      }
      uVar16 = vdp_address & 0x7e;
      vdp_address = uVar12;
      *(ushort *)((int)&vdp_vsram + uVar16) = uVar2;
    }
    else if (uVar12 == 1) {
      uVar12 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar12) == uVar16) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar12) = uVar2;
      }
      else {
        (&vdp_vram)[uVar12] = uVar3;
        (&vdp_vram_odd_byte_base)[uVar12] = bVar13;
        uVar16 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar12) {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (uVar12 < iVar10 + vdp_sprite_attribute_table_base) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar12 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar12)) {
        bVar19 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,uVar16);
        bVar19 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < vdp_plane_b_name_table_end)) {
        (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,uVar16);
        bVar19 = true;
      }
      if ((vdp_window_name_table_base <= uVar12) && (uVar12 < vdp_window_name_table_end)) {
        (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,uVar16);
      }
      if (!bVar19) {
        update_cached_ds_pattern_from_vdp_word(uVar12,uVar16);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  uVar16 = (uVar7 & 0xffff) >> 2;
  if (vdp_control_word_pending == '\0') {
    uVar16 = uVar7 & 0xff;
    uVar12 = (uVar7 & 0xffff) >> 8 & 0x1f;
    if ((uVar7 & 0xc000) != 0x8000) {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c | (uVar7 & 0xffff) >> 0xe;
      vdp_address = vdp_address & 0xc000 | uVar7 & 0x3fff;
      return;
    }
    vdp_access_code = 0;
    iVar10 = 1 - (uint)vdp_mode_5_bit;
    if (1 < vdp_mode_5_bit) {
      iVar10 = 0;
    }
    if (uVar12 < 0xc) {
      iVar10 = 0;
    }
    (&vdp_registers)[uVar12] = bVar13;
    if (iVar10 == 0) {
      switch(uVar12) {
      case 0:
        vdp_h_interrupt_enabled = (byte)(uVar16 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar16 >> 1) ^ 1) & 1;
        return;
      case 1:
        vdp_mode_5_bit = bVar13 & 4;
        vdp_display_enabled = (byte)(uVar16 >> 6) & 1;
        uVar12 = uVar16 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar16 >> 5) & 1;
        vdp_dma_enabled = (byte)(uVar16 >> 4) & 1;
        vdp_240_line_mode = (char)uVar12;
        if (uVar12 == 0) {
          vdp_active_height_pixels = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          vdp_active_height_pixels = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        vdp_plane_a_name_table_base = (uVar7 & 0x38) * 0x400;
        plane_a_word_change_flags = &vram_word_change_flags + (uVar7 & 0x38) * 0x200;
        if (((emulator_option_flags & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
          plane_a_tilemap_refresh_pending = 1;
        }
        ram0x023dd374 = vdp_plane_a_name_table_base;
        vdp_plane_a_name_table_end = vdp_plane_a_name_table_base + plane_name_table_span_bytes;
        return;
      case 3:
        vdp_window_name_table_base = (uVar7 & 0x3e) * 0x400;
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x800;
        }
        else {
          iVar10 = 0x1000;
        }
        vdp_window_name_table_end = iVar10 + vdp_window_name_table_base;
        return;
      case 4:
        vdp_plane_b_name_table_base = (uVar7 & 7) * 0x2000;
        plane_b_word_change_flags = &vram_word_change_flags + (uVar7 & 7) * 0x1000;
        if (((emulator_option_flags & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
          plane_b_tilemap_refresh_pending = 1;
        }
        DAT_023dd378 = vdp_plane_b_name_table_base;
        vdp_plane_b_name_table_end = vdp_plane_b_name_table_base + plane_name_table_span_bytes;
        return;
      case 5:
        iVar10 = (uVar7 & 0x7f) * 0x200;
        DAT_0209cbe0 = vdp_sprite_attribute_table_base;
        vdp_sat_host_pointer = &vdp_vram + iVar10;
        vdp_sprite_attribute_table_base = iVar10;
        return;
      case 7:
        DAT_0b003640 = uVar7 & 0x3f;
        vdp_backdrop_color_index = (char)(uVar7 & 0x3f);
        return;
      case 10:
        vdp_h_interrupt_reload = (short)uVar16;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar16 >> 3) & 1;
        vdp_vscroll_mode = (byte)(uVar16 >> 2) & 1;
        vdp_hscroll_mode = bVar13 & 3;
        if ((emulator_option_flags & 4) == 0) {
          record_vdp_scanline_state = record_unscaled_scanline_scroll_and_backdrop;
        }
        else {
          switch(bVar13 & 3) {
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
        uVar12 = (uint)DAT_020b4bf4;
        vdp_wide_display_mode = (uVar7 & 0x81) != 0;
        if ((uVar12 != (uVar16 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar12)) {
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
        vdp_hscroll_table_base = (ushort)((uVar7 << 0x1a) >> 0x10);
        DAT_023dcdaa = vdp_hscroll_table_base + 0x380;
        return;
      case 0xf:
        vdp_address_increment = uVar16;
        return;
      case 0x10:
        uVar16 = uVar16 >> 4 & 3;
        uVar7 = uVar7 & 3;
        uVar12 = uVar16 | uVar7 << 4;
        if (uVar12 != (vdp_background_layout_code & 0xff)) {
          background_layout_refresh_pending = 1;
        }
        vdp_background_layout_code = uVar12;
        plane_name_table_span_bytes = *(uint *)(&DAT_0208e59c + (uVar16 + uVar7 * 4) * 4);
        vdp_plane_b_name_table_end = plane_name_table_span_bytes + vdp_plane_b_name_table_base;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
        vdp_plane_a_name_table_end = plane_name_table_span_bytes + vdp_plane_a_name_table_base;
        DAT_023dcea6 = (char)uVar7;
        DAT_023dd372._0_1_ = (char)uVar16;
        return;
      case 0x11:
        uVar12 = (uVar7 & 0x1f) * 2;
        vdp_window_x_from_right = (char)(uVar16 >> 7);
        DAT_023ddb04 = (char)uVar12;
        if (uVar16 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(frame_active_width_tiles <= uVar12);
        }
        else {
          DAT_023dcfa8 = (uVar7 & 0x1f) * -2 + 1;
          if (1 < uVar12) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        vdp_window_y_from_bottom = (char)(uVar16 >> 7);
        vdp_window_y_split_pixels = (uVar7 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar7 & 0x1f);
        return;
      case 0x13:
        vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar16;
        return;
      case 0x14:
        vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar16 << 8;
        return;
      case 0x15:
        vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar16 << 1;
        return;
      case 0x16:
        vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar16 << 9;
        return;
      case 0x17:
        vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar7 & 0x7f) << 0x11;
        vdp_dma_mode = (byte)(uVar16 >> 6);
      }
      return;
    }
    return;
  }
  vdp_access_code = vdp_access_code & 3 | uVar16 & 0x3c;
  uVar7 = vdp_address & 0x3fff | (uVar7 & 3) << 0xe;
  vdp_control_word_pending = 0;
  vdp_address = uVar7;
  if (vdp_dma_enabled == '\0') {
    return;
  }
  if ((uVar16 & 0x20) == 0) {
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
    uVar16 = vdp_dma_source_address & 0xfffffe;
    puVar5 = (ushort *)get_vdp_dma_backing_pointer(uVar16);
    uVar9 = vdp_address;
    uVar14 = vdp_dma_remaining;
    uVar8 = vdp_scanline;
    uVar11 = vdp_access_code & 0xf;
    uVar7 = vdp_dma_remaining & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[vdp_scanline];
      uVar16 = uVar16 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar14 = (uint)vdp_backdrop_color_index;
      do {
        uVar11 = (uint)*puVar5;
        uVar9 = (vdp_address & 0x7e) >> 1;
        uVar2 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        vdp_address = vdp_address + uVar12;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar9]) {
          (&vdp_cram)[uVar9] = (short)(uVar11 & 0xeee);
          if ((uVar9 != 0) && (uVar8 < 0xdf)) {
            (&DAT_023dc8ca)[uVar9 + (uint)(bVar13 >> 5) * 0x40] = uVar2;
            (&scanline_pending_palette_changes)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar9] = uVar2;
          if (uVar9 == uVar14) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar14 = vdp_address & 0x7f;
        uVar8 = vdp_address & 0x7e;
        vdp_address = uVar14;
        if (0x4f < uVar14) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        vdp_address = uVar12 + uVar14;
      } while (uVar7 != 0);
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar16;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar8 = uVar12 & 0xffff;
      uVar16 = uVar16 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar11 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&vdp_vram + uVar11);
        uVar1 = *puVar6;
        if (uVar1 != uVar2) {
          *(ushort *)(&vdp_vram + uVar11) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        (&vram_word_change_flags)[uVar11 >> 1] = uVar1 != uVar2;
        uVar11 = uVar11 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar18 = uVar11;
      if (uVar11 <= uVar9) {
        uVar18 = uVar11 + 0x10000;
      }
      uVar16 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar16;
        return;
      }
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar19 = true;
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa30;
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar19 = iVar10 + vdp_sprite_attribute_table_base < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != vdp_hscroll_table_base) || (DAT_023dcdaa < uVar11)) && (bVar19)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
          if (vdp_plane_a_name_table_base < uVar18) {
            if (vdp_plane_a_name_table_end < uVar18) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
          }
          else {
            bVar19 = false;
          }
        }
        else {
          bVar19 = true;
        }
        if ((uStack_2c < vdp_plane_b_name_table_base) || (vdp_plane_b_name_table_end <= uStack_2c)) {
          if (vdp_plane_b_name_table_base < uVar18) {
            if (vdp_plane_b_name_table_end < uVar18) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
          else {
            bVar4 = false;
          }
        }
        else {
          bVar4 = true;
        }
        if (bVar19) {
          if ((plane_name_table_span_bytes >> 1 <= uVar14) && (plane_a_tilemap_refresh_pending = 1, !bVar4)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            plane_a_tilemap_refresh_pending = 1;
            vdp_dma_source_address = uVar16;
            return;
          }
          uVar7 = uStack_2c - vdp_plane_a_name_table_base;
          bVar19 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar19) {
            uVar7 = 0;
          }
          uVar14 = uVar18 - vdp_plane_a_name_table_base;
          if (plane_name_table_span_bytes < uVar18 - vdp_plane_a_name_table_base) {
            uVar14 = plane_name_table_span_bytes;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar6,uVar7,uVar12,uVar14);
          puVar6 = (ushort *)&vdp_address;
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar6 = (ushort *)0x0;
          bVar19 = false;
        }
        if (bVar4) {
          if (plane_name_table_span_bytes >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            plane_b_tilemap_refresh_pending = 1;
            vdp_dma_source_address = uVar16;
            return;
          }
          iVar10 = uStack_2c - vdp_plane_b_name_table_base;
          bVar19 = iVar10 < 0;
          if (bVar19) {
            iVar10 = 0;
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar19) {
            puVar6 = puVar5;
          }
          uVar7 = uVar18 - vdp_plane_b_name_table_base;
          if (plane_name_table_span_bytes < uVar18 - vdp_plane_b_name_table_base) {
            uVar7 = plane_name_table_span_bytes;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar6,iVar10,uVar12,uVar7);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
          (*transfer_vdp_words_to_ds_window)(puVar5,uStack_2c - vdp_window_name_table_base & 0xffff,uVar12,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar19) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar12) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar12 = uVar12 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar12 != 0);
            uVar17 = 0;
          }
          else {
            do {
              if ((&vram_word_change_flags)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar12 = uVar12 - 1 & 0xffff;
              uVar17 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar12 != 0);
          }
        }
      }
    }
    else {
      uVar12 = uVar12 & 0xffff;
      puVar6 = puVar5;
      uVar8 = uVar7;
      uVar18 = uStack_2c;
      do {
        uVar2 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&vdp_vram)[uVar18] = (char)(uVar2 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar18] = (char)uVar2;
        uVar18 = uVar18 + uVar12 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar19 = true;
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa20;
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar19 = iVar10 + vdp_sprite_attribute_table_base < uVar18;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar7;
        }
        else {
          if (plane_name_table_span_bytes >> 1 <= uVar7) {
            reset_background_tile_cache_at_capacity(0);
          }
          uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar7 = uVar7 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar7 != 0);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar17 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < vdp_plane_b_name_table_end)) {
          uVar17 = vdp_dma_remaining & 0xffff;
          if (plane_name_table_span_bytes >> 1 <= uVar17) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar17 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
          uVar17 = vdp_dma_remaining & 0xffff;
          if (vdp_wide_display_mode == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar17) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar7 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar12 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    vdp_address = uVar18 & 0xffff;
    vdp_dma_length_register = uVar17;
    vdp_dma_remaining = uVar17;
    vdp_dma_source_address = uVar16;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar17 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar14 = uVar17 + uVar16;
    uVar8 = vdp_address_increment & 0xffff;
    do {
      uVar9 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&vdp_vram)[vdp_address ^ 1] = (&vdp_vram)[uVar9];
      vdp_address = vdp_address + uVar8 & 0xffff;
    } while (uVar17 != (uVar14 & 0xffff));
    if (uVar12 == 1) {
      uVar16 = uVar16 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar7 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar7)) {
            bVar19 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar7 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar19 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar7) && (uVar7 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar7 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar19 = true;
          }
          if ((vdp_window_name_table_base <= uVar7) && (uVar7 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar7 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
          }
          if (!bVar19) {
            update_cached_ds_pattern_from_vdp_word(uVar7,*(undefined2 *)(&vdp_vram + uVar7));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}


// 0x02019b80  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_word_02019b80(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  bool bVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  int unaff_r6;
  int unaff_r8;
  uint uVar18;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar2 = *unaff_r10;
  iVar10 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar10 = unaff_r6;
  }
  uVar12 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar10 = (int)*(short *)(iVar10 + uVar12);
  }
  else {
    iVar10 = *(int *)(iVar10 + uVar12);
  }
  uVar7 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar10);
  uVar17 = vdp_dma_source_address;
  uVar12 = vdp_address_increment;
  uVar16 = uVar7 & 0xffff;
  uVar2 = unaff_r10[1];
  iVar10 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar10 = unaff_r6;
  }
  uVar8 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar10 = (int)*(short *)(iVar10 + uVar8);
  }
  else {
    iVar10 = *(int *)(iVar10 + uVar8);
  }
  uVar8 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar2 + iVar10;
  uVar2 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar8 & 0xffff)) = uVar2;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar13 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar17 = vdp_address_increment;
    uVar12 = vdp_dma_remaining;
    uVar3 = (undefined1)(uVar16 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar19 = (vdp_address & 1) == 0;
      uVar16 = vdp_address & 0xffff;
      if (bVar19) {
        puVar15 = &vdp_vram + uVar16;
      }
      else {
        puVar15 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar8 = vdp_address_increment & 0xffff;
      if (!bVar19) {
        (&vdp_vram)[(int)puVar15] = bVar13;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar19) {
        (&vdp_vram)[uVar16] = uVar3;
        puVar15[1] = bVar13;
      }
      if (!bVar19) {
        (&vdp_vram)[uVar16] = uVar3;
      }
      uVar9 = uVar16 + uVar8 & 0xffff;
      uVar14 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar14 = uVar14 - 1 & 0xffff;
          (&vdp_vram)[uVar9] = bVar13;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar14 != 0);
        uVar16 = vdp_address;
        if (uVar12 == 0xffff && (uVar7 & 0xff) == 0) {
          vdp_address = uVar9;
          clear_and_initialize_renderer_vram();
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
      }
      vdp_address = uVar9;
      uVar16 = uVar16 & 0xfffe;
      if (uVar17 == 1) {
        uVar12 = uVar12 >> 1;
        uVar8 = 2;
      }
      do {
        if (uVar16 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar16 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar16)) {
            if ((uVar16 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar16)) {
              bVar19 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar16 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
              bVar19 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar16) && (uVar16 < vdp_plane_b_name_table_end)) {
              (*write_ds_background_tilemap_word)(1,uVar16 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
              bVar19 = true;
            }
            if ((vdp_window_name_table_base <= uVar16) && (uVar16 < vdp_window_name_table_end)) {
              (*write_ds_window_tilemap_word)(uVar16 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
            }
            if (!bVar19) {
              update_cached_ds_pattern_from_vdp_word(uVar16,*(undefined2 *)(&vdp_vram + uVar16));
            }
          }
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar10 = 0x200;
          }
          else {
            iVar10 = 0x280;
          }
          if (iVar10 + vdp_sprite_attribute_table_base <= uVar16) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar16 = uVar16 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar12 = vdp_access_code & 0xf;
    if (uVar12 == 3) {
      uVar12 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar12] = uVar2 & 0xeee;
      uVar2 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar12 != 0) && (vdp_scanline < 0xdf)) {
        bVar13 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar13 == 200) {
          bVar13 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&scanline_pending_palette_changes)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar12 + (uint)(bVar13 >> 5) * 0x40] = uVar2;
      }
      uVar16 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar12] = uVar2;
      DAT_0208f354 = 1;
      if (uVar12 == uVar16) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar12 == 5) {
      uVar12 = vdp_address & 0x7f;
      if (0x4f < uVar12) {
        vdp_address = uVar12;
        return;
      }
      uVar16 = vdp_address & 0x7e;
      vdp_address = uVar12;
      *(ushort *)((int)&vdp_vsram + uVar16) = uVar2;
    }
    else if (uVar12 == 1) {
      uVar12 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar12) == uVar16) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar12) = uVar2;
      }
      else {
        (&vdp_vram)[uVar12] = uVar3;
        (&vdp_vram_odd_byte_base)[uVar12] = bVar13;
        uVar16 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar12) {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (uVar12 < iVar10 + vdp_sprite_attribute_table_base) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar12 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar12)) {
        bVar19 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,uVar16);
        bVar19 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < vdp_plane_b_name_table_end)) {
        (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,uVar16);
        bVar19 = true;
      }
      if ((vdp_window_name_table_base <= uVar12) && (uVar12 < vdp_window_name_table_end)) {
        (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,uVar16);
      }
      if (!bVar19) {
        update_cached_ds_pattern_from_vdp_word(uVar12,uVar16);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  uVar16 = (uVar7 & 0xffff) >> 2;
  if (vdp_control_word_pending == '\0') {
    uVar16 = uVar7 & 0xff;
    uVar12 = (uVar7 & 0xffff) >> 8 & 0x1f;
    if ((uVar7 & 0xc000) != 0x8000) {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c | (uVar7 & 0xffff) >> 0xe;
      vdp_address = vdp_address & 0xc000 | uVar7 & 0x3fff;
      return;
    }
    vdp_access_code = 0;
    iVar10 = 1 - (uint)vdp_mode_5_bit;
    if (1 < vdp_mode_5_bit) {
      iVar10 = 0;
    }
    if (uVar12 < 0xc) {
      iVar10 = 0;
    }
    (&vdp_registers)[uVar12] = bVar13;
    if (iVar10 == 0) {
      switch(uVar12) {
      case 0:
        vdp_h_interrupt_enabled = (byte)(uVar16 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar16 >> 1) ^ 1) & 1;
        return;
      case 1:
        vdp_mode_5_bit = bVar13 & 4;
        vdp_display_enabled = (byte)(uVar16 >> 6) & 1;
        uVar12 = uVar16 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar16 >> 5) & 1;
        vdp_dma_enabled = (byte)(uVar16 >> 4) & 1;
        vdp_240_line_mode = (char)uVar12;
        if (uVar12 == 0) {
          vdp_active_height_pixels = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          vdp_active_height_pixels = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        vdp_plane_a_name_table_base = (uVar7 & 0x38) * 0x400;
        plane_a_word_change_flags = &vram_word_change_flags + (uVar7 & 0x38) * 0x200;
        if (((emulator_option_flags & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
          plane_a_tilemap_refresh_pending = 1;
        }
        ram0x023dd374 = vdp_plane_a_name_table_base;
        vdp_plane_a_name_table_end = vdp_plane_a_name_table_base + plane_name_table_span_bytes;
        return;
      case 3:
        vdp_window_name_table_base = (uVar7 & 0x3e) * 0x400;
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x800;
        }
        else {
          iVar10 = 0x1000;
        }
        vdp_window_name_table_end = iVar10 + vdp_window_name_table_base;
        return;
      case 4:
        vdp_plane_b_name_table_base = (uVar7 & 7) * 0x2000;
        plane_b_word_change_flags = &vram_word_change_flags + (uVar7 & 7) * 0x1000;
        if (((emulator_option_flags & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
          plane_b_tilemap_refresh_pending = 1;
        }
        DAT_023dd378 = vdp_plane_b_name_table_base;
        vdp_plane_b_name_table_end = vdp_plane_b_name_table_base + plane_name_table_span_bytes;
        return;
      case 5:
        iVar10 = (uVar7 & 0x7f) * 0x200;
        DAT_0209cbe0 = vdp_sprite_attribute_table_base;
        vdp_sat_host_pointer = &vdp_vram + iVar10;
        vdp_sprite_attribute_table_base = iVar10;
        return;
      case 7:
        DAT_0b003640 = uVar7 & 0x3f;
        vdp_backdrop_color_index = (char)(uVar7 & 0x3f);
        return;
      case 10:
        vdp_h_interrupt_reload = (short)uVar16;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar16 >> 3) & 1;
        vdp_vscroll_mode = (byte)(uVar16 >> 2) & 1;
        vdp_hscroll_mode = bVar13 & 3;
        if ((emulator_option_flags & 4) == 0) {
          record_vdp_scanline_state = record_unscaled_scanline_scroll_and_backdrop;
        }
        else {
          switch(bVar13 & 3) {
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
        uVar12 = (uint)DAT_020b4bf4;
        vdp_wide_display_mode = (uVar7 & 0x81) != 0;
        if ((uVar12 != (uVar16 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar12)) {
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
        vdp_hscroll_table_base = (ushort)((uVar7 << 0x1a) >> 0x10);
        DAT_023dcdaa = vdp_hscroll_table_base + 0x380;
        return;
      case 0xf:
        vdp_address_increment = uVar16;
        return;
      case 0x10:
        uVar16 = uVar16 >> 4 & 3;
        uVar7 = uVar7 & 3;
        uVar12 = uVar16 | uVar7 << 4;
        if (uVar12 != (vdp_background_layout_code & 0xff)) {
          background_layout_refresh_pending = 1;
        }
        vdp_background_layout_code = uVar12;
        plane_name_table_span_bytes = *(uint *)(&DAT_0208e59c + (uVar16 + uVar7 * 4) * 4);
        vdp_plane_b_name_table_end = plane_name_table_span_bytes + vdp_plane_b_name_table_base;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
        vdp_plane_a_name_table_end = plane_name_table_span_bytes + vdp_plane_a_name_table_base;
        DAT_023dcea6 = (char)uVar7;
        DAT_023dd372._0_1_ = (char)uVar16;
        return;
      case 0x11:
        uVar12 = (uVar7 & 0x1f) * 2;
        vdp_window_x_from_right = (char)(uVar16 >> 7);
        DAT_023ddb04 = (char)uVar12;
        if (uVar16 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(frame_active_width_tiles <= uVar12);
        }
        else {
          DAT_023dcfa8 = (uVar7 & 0x1f) * -2 + 1;
          if (1 < uVar12) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        vdp_window_y_from_bottom = (char)(uVar16 >> 7);
        vdp_window_y_split_pixels = (uVar7 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar7 & 0x1f);
        return;
      case 0x13:
        vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar16;
        return;
      case 0x14:
        vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar16 << 8;
        return;
      case 0x15:
        vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar16 << 1;
        return;
      case 0x16:
        vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar16 << 9;
        return;
      case 0x17:
        vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar7 & 0x7f) << 0x11;
        vdp_dma_mode = (byte)(uVar16 >> 6);
      }
      return;
    }
    return;
  }
  vdp_access_code = vdp_access_code & 3 | uVar16 & 0x3c;
  uVar7 = vdp_address & 0x3fff | (uVar7 & 3) << 0xe;
  vdp_control_word_pending = 0;
  vdp_address = uVar7;
  if (vdp_dma_enabled == '\0') {
    return;
  }
  if ((uVar16 & 0x20) == 0) {
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
    uVar16 = vdp_dma_source_address & 0xfffffe;
    puVar5 = (ushort *)get_vdp_dma_backing_pointer(uVar16);
    uVar9 = vdp_address;
    uVar14 = vdp_dma_remaining;
    uVar8 = vdp_scanline;
    uVar11 = vdp_access_code & 0xf;
    uVar7 = vdp_dma_remaining & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[vdp_scanline];
      uVar16 = uVar16 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar14 = (uint)vdp_backdrop_color_index;
      do {
        uVar11 = (uint)*puVar5;
        uVar9 = (vdp_address & 0x7e) >> 1;
        uVar2 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        vdp_address = vdp_address + uVar12;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar9]) {
          (&vdp_cram)[uVar9] = (short)(uVar11 & 0xeee);
          if ((uVar9 != 0) && (uVar8 < 0xdf)) {
            (&DAT_023dc8ca)[uVar9 + (uint)(bVar13 >> 5) * 0x40] = uVar2;
            (&scanline_pending_palette_changes)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar9] = uVar2;
          if (uVar9 == uVar14) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar14 = vdp_address & 0x7f;
        uVar8 = vdp_address & 0x7e;
        vdp_address = uVar14;
        if (0x4f < uVar14) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        vdp_address = uVar12 + uVar14;
      } while (uVar7 != 0);
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar16;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar8 = uVar12 & 0xffff;
      uVar16 = uVar16 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar11 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&vdp_vram + uVar11);
        uVar1 = *puVar6;
        if (uVar1 != uVar2) {
          *(ushort *)(&vdp_vram + uVar11) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        (&vram_word_change_flags)[uVar11 >> 1] = uVar1 != uVar2;
        uVar11 = uVar11 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar18 = uVar11;
      if (uVar11 <= uVar9) {
        uVar18 = uVar11 + 0x10000;
      }
      uVar16 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar16;
        return;
      }
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar19 = true;
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa30;
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar19 = iVar10 + vdp_sprite_attribute_table_base < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != vdp_hscroll_table_base) || (DAT_023dcdaa < uVar11)) && (bVar19)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
          if (vdp_plane_a_name_table_base < uVar18) {
            if (vdp_plane_a_name_table_end < uVar18) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
          }
          else {
            bVar19 = false;
          }
        }
        else {
          bVar19 = true;
        }
        if ((uStack_2c < vdp_plane_b_name_table_base) || (vdp_plane_b_name_table_end <= uStack_2c)) {
          if (vdp_plane_b_name_table_base < uVar18) {
            if (vdp_plane_b_name_table_end < uVar18) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
          else {
            bVar4 = false;
          }
        }
        else {
          bVar4 = true;
        }
        if (bVar19) {
          if ((plane_name_table_span_bytes >> 1 <= uVar14) && (plane_a_tilemap_refresh_pending = 1, !bVar4)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            plane_a_tilemap_refresh_pending = 1;
            vdp_dma_source_address = uVar16;
            return;
          }
          uVar7 = uStack_2c - vdp_plane_a_name_table_base;
          bVar19 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar19) {
            uVar7 = 0;
          }
          uVar14 = uVar18 - vdp_plane_a_name_table_base;
          if (plane_name_table_span_bytes < uVar18 - vdp_plane_a_name_table_base) {
            uVar14 = plane_name_table_span_bytes;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar6,uVar7,uVar12,uVar14);
          puVar6 = (ushort *)&vdp_address;
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar6 = (ushort *)0x0;
          bVar19 = false;
        }
        if (bVar4) {
          if (plane_name_table_span_bytes >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            plane_b_tilemap_refresh_pending = 1;
            vdp_dma_source_address = uVar16;
            return;
          }
          iVar10 = uStack_2c - vdp_plane_b_name_table_base;
          bVar19 = iVar10 < 0;
          if (bVar19) {
            iVar10 = 0;
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar19) {
            puVar6 = puVar5;
          }
          uVar7 = uVar18 - vdp_plane_b_name_table_base;
          if (plane_name_table_span_bytes < uVar18 - vdp_plane_b_name_table_base) {
            uVar7 = plane_name_table_span_bytes;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar6,iVar10,uVar12,uVar7);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
          (*transfer_vdp_words_to_ds_window)(puVar5,uStack_2c - vdp_window_name_table_base & 0xffff,uVar12,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar19) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar12) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar12 = uVar12 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar12 != 0);
            uVar17 = 0;
          }
          else {
            do {
              if ((&vram_word_change_flags)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar12 = uVar12 - 1 & 0xffff;
              uVar17 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar12 != 0);
          }
        }
      }
    }
    else {
      uVar12 = uVar12 & 0xffff;
      puVar6 = puVar5;
      uVar8 = uVar7;
      uVar18 = uStack_2c;
      do {
        uVar2 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&vdp_vram)[uVar18] = (char)(uVar2 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar18] = (char)uVar2;
        uVar18 = uVar18 + uVar12 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar19 = true;
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa20;
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar19 = iVar10 + vdp_sprite_attribute_table_base < uVar18;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar7;
        }
        else {
          if (plane_name_table_span_bytes >> 1 <= uVar7) {
            reset_background_tile_cache_at_capacity(0);
          }
          uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar7 = uVar7 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar7 != 0);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar17 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < vdp_plane_b_name_table_end)) {
          uVar17 = vdp_dma_remaining & 0xffff;
          if (plane_name_table_span_bytes >> 1 <= uVar17) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar17 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
          uVar17 = vdp_dma_remaining & 0xffff;
          if (vdp_wide_display_mode == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar17) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar7 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar12 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    vdp_address = uVar18 & 0xffff;
    vdp_dma_length_register = uVar17;
    vdp_dma_remaining = uVar17;
    vdp_dma_source_address = uVar16;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar17 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar14 = uVar17 + uVar16;
    uVar8 = vdp_address_increment & 0xffff;
    do {
      uVar9 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&vdp_vram)[vdp_address ^ 1] = (&vdp_vram)[uVar9];
      vdp_address = vdp_address + uVar8 & 0xffff;
    } while (uVar17 != (uVar14 & 0xffff));
    if (uVar12 == 1) {
      uVar16 = uVar16 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar7 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar7)) {
            bVar19 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar7 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar19 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar7) && (uVar7 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar7 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar19 = true;
          }
          if ((vdp_window_name_table_base <= uVar7) && (uVar7 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar7 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
          }
          if (!bVar19) {
            update_cached_ds_pattern_from_vdp_word(uVar7,*(undefined2 *)(&vdp_vram + uVar7));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}

