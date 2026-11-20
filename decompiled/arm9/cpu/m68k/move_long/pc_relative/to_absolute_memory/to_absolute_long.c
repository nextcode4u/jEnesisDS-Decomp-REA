/* ARM9 to absolute long — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0201b194  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_long_0201b194(void)

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
  uint uVar10;
  byte bVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  int unaff_r6;
  uint uVar16;
  uint uVar17;
  int unaff_r8;
  uint uVar18;
  short *unaff_r10;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = read_m68k_bus_long(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar2 = unaff_r10[2];
  uVar15 = ((ushort)unaff_r10[1] & 0xf0) * 0x10000;
  uVar1 = (ushort)uVar7;
  if (0xdfffff < uVar15) {
    *(undefined2 *)(unaff_r8 + (uint)uVar2) = (short)(uVar7 >> 0x10);
    ((undefined2 *)(unaff_r8 + (uint)uVar2))[1] = uVar1;
    return;
  }
  if (uVar15 < 0xc00000) {
    uVar15 = CONCAT22(unaff_r10[1],uVar2) & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar15 >> 0x10])(uVar15,uVar7 >> 0x10);
    (*(code *)(&m68k_word_write_handlers)[uVar15 >> 0x10])(uVar15 + 2,uVar7 & 0xffff);
    return;
  }
  bVar11 = (byte)uVar7;
  if ((uVar2 & 0x1c) == 0) {
    write_vdp_data_port_word(uVar7 >> 0x10);
    uVar15 = uVar7 & 0xffff;
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar16 = vdp_address_increment;
    uVar10 = vdp_dma_remaining;
    uVar3 = (undefined1)(uVar15 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar19 = (vdp_address & 1) == 0;
      uVar15 = vdp_address & 0xffff;
      if (bVar19) {
        puVar13 = &vdp_vram + uVar15;
      }
      else {
        puVar13 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar17 = vdp_address_increment & 0xffff;
      if (!bVar19) {
        (&vdp_vram)[(int)puVar13] = bVar11;
      }
      uVar10 = uVar10 & 0xffff;
      if (bVar19) {
        (&vdp_vram)[uVar15] = uVar3;
        puVar13[1] = bVar11;
      }
      if (!bVar19) {
        (&vdp_vram)[uVar15] = uVar3;
      }
      uVar8 = uVar15 + uVar17 & 0xffff;
      uVar12 = uVar10;
      if (uVar10 != 0) {
        do {
          uVar12 = uVar12 - 1 & 0xffff;
          (&vdp_vram)[uVar8] = bVar11;
          uVar8 = uVar8 + uVar17 & 0xffff;
        } while (uVar12 != 0);
        uVar15 = vdp_address;
        if (uVar10 == 0xffff && (uVar7 & 0xff) == 0) {
          vdp_address = uVar8;
          clear_and_initialize_renderer_vram();
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
      }
      vdp_address = uVar8;
      uVar15 = uVar15 & 0xfffe;
      if (uVar16 == 1) {
        uVar10 = uVar10 >> 1;
        uVar17 = 2;
      }
      do {
        if (uVar15 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar15 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar15)) {
            if ((uVar15 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar15)) {
              bVar19 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar15 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar15));
              bVar19 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar15) && (uVar15 < vdp_plane_b_name_table_end)) {
              (*write_ds_background_tilemap_word)(1,uVar15 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar15));
              bVar19 = true;
            }
            if ((vdp_window_name_table_base <= uVar15) && (uVar15 < vdp_window_name_table_end)) {
              (*write_ds_window_tilemap_word)(uVar15 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar15));
            }
            if (!bVar19) {
              update_cached_ds_pattern_from_vdp_word(uVar15,*(undefined2 *)(&vdp_vram + uVar15));
            }
          }
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar14 = 0x200;
          }
          else {
            iVar14 = 0x280;
          }
          if (iVar14 + vdp_sprite_attribute_table_base <= uVar15) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar10 = uVar10 - 1 & 0xffff;
        if (uVar10 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar15 = uVar15 + uVar17 & 0xfffe;
      } while( true );
    }
    uVar10 = vdp_access_code & 0xf;
    if (uVar10 == 3) {
      uVar15 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar15] = uVar1 & 0xeee;
      uVar2 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar15 != 0) && (vdp_scanline < 0xdf)) {
        bVar11 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar11 == 200) {
          bVar11 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&scanline_pending_palette_changes)[bVar11] = &DAT_023dc8ca + (uint)(bVar11 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar15 + (uint)(bVar11 >> 5) * 0x40] = uVar2;
      }
      uVar7 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar15] = uVar2;
      DAT_0208f354 = 1;
      if (uVar15 == uVar7) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar10 == 5) {
      uVar15 = vdp_address & 0x7f;
      if (0x4f < uVar15) {
        vdp_address = uVar15;
        return;
      }
      uVar7 = vdp_address & 0x7e;
      vdp_address = uVar15;
      *(ushort *)((int)&vdp_vsram + uVar7) = uVar1;
    }
    else if (uVar10 == 1) {
      uVar10 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar10) == uVar15) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar10) = uVar1;
      }
      else {
        (&vdp_vram)[uVar10] = uVar3;
        (&vdp_vram_odd_byte_base)[uVar10] = bVar11;
        uVar15 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar10) {
        if (vdp_wide_display_mode == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (uVar10 < iVar14 + vdp_sprite_attribute_table_base) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar10 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar10)) {
        bVar19 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar10 - vdp_plane_a_name_table_base,uVar15);
        bVar19 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar10) && (uVar10 < vdp_plane_b_name_table_end)) {
        (*write_ds_background_tilemap_word)(1,uVar10 - vdp_plane_b_name_table_base,uVar15);
        bVar19 = true;
      }
      if ((vdp_window_name_table_base <= uVar10) && (uVar10 < vdp_window_name_table_end)) {
        (*write_ds_window_tilemap_word)(uVar10 - vdp_window_name_table_base,uVar15);
      }
      if (!bVar19) {
        update_cached_ds_pattern_from_vdp_word(uVar10,uVar15);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  if (vdp_control_word_pending == '\0') {
    uVar10 = uVar7 >> 2 & 0x3c | uVar7 >> 0x1e;
    uVar15 = (uVar7 & 3) << 0xe | (uVar7 & 0x3fffffff) >> 0x10;
    if ((uVar7 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    vdp_address = uVar15;
    vdp_access_code = uVar10;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((uVar7 >> 2 & 0x20) == 0) {
      return;
    }
  }
  else {
LAB_0200ac58:
    write_vdp_control_port_word(uVar7 >> 0x10);
    uVar15 = (uVar7 & 0xffff) >> 2;
    if (vdp_control_word_pending == '\0') {
      uVar10 = uVar7 & 0xff;
      uVar15 = (uVar7 & 0xffff) >> 8 & 0x1f;
      if ((uVar7 & 0xc000) != 0x8000) {
        vdp_control_word_pending = 1;
        vdp_access_code = vdp_access_code & 0x3c | (uVar7 & 0xffff) >> 0xe;
        vdp_address = vdp_address & 0xc000 | uVar7 & 0x3fff;
        return;
      }
      vdp_access_code = 0;
      iVar14 = 1 - (uint)vdp_mode_5_bit;
      if (1 < vdp_mode_5_bit) {
        iVar14 = 0;
      }
      if (uVar15 < 0xc) {
        iVar14 = 0;
      }
      (&vdp_registers)[uVar15] = bVar11;
      if (iVar14 == 0) {
        switch(uVar15) {
        case 0:
          vdp_h_interrupt_enabled = (byte)(uVar10 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar10 >> 1) ^ 1) & 1;
          return;
        case 1:
          vdp_mode_5_bit = bVar11 & 4;
          vdp_display_enabled = (byte)(uVar10 >> 6) & 1;
          uVar15 = uVar10 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar10 >> 5) & 1;
          vdp_dma_enabled = (byte)(uVar10 >> 4) & 1;
          vdp_240_line_mode = (char)uVar15;
          if (uVar15 == 0) {
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
            iVar14 = 0x800;
          }
          else {
            iVar14 = 0x1000;
          }
          vdp_window_name_table_end = iVar14 + vdp_window_name_table_base;
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
          iVar14 = (uVar7 & 0x7f) * 0x200;
          DAT_0209cbe0 = vdp_sprite_attribute_table_base;
          vdp_sat_host_pointer = &vdp_vram + iVar14;
          vdp_sprite_attribute_table_base = iVar14;
          return;
        case 7:
          DAT_0b003640 = uVar7 & 0x3f;
          vdp_backdrop_color_index = (char)(uVar7 & 0x3f);
          return;
        case 10:
          vdp_h_interrupt_reload = (short)uVar10;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar10 >> 3) & 1;
          vdp_vscroll_mode = (byte)(uVar10 >> 2) & 1;
          vdp_hscroll_mode = bVar11 & 3;
          if ((emulator_option_flags & 4) == 0) {
            record_vdp_scanline_state = record_unscaled_scanline_scroll_and_backdrop;
          }
          else {
            switch(bVar11 & 3) {
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
          uVar15 = (uint)DAT_020b4bf4;
          vdp_wide_display_mode = (uVar7 & 0x81) != 0;
          if ((uVar15 != (uVar10 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar15)) {
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
          vdp_address_increment = uVar10;
          return;
        case 0x10:
          uVar10 = uVar10 >> 4 & 3;
          uVar7 = uVar7 & 3;
          uVar15 = uVar10 | uVar7 << 4;
          if (uVar15 != (vdp_background_layout_code & 0xff)) {
            background_layout_refresh_pending = 1;
          }
          vdp_background_layout_code = uVar15;
          plane_name_table_span_bytes = *(uint *)(&DAT_0208e59c + (uVar10 + uVar7 * 4) * 4);
          vdp_plane_b_name_table_end = plane_name_table_span_bytes + vdp_plane_b_name_table_base;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
          vdp_plane_a_name_table_end = plane_name_table_span_bytes + vdp_plane_a_name_table_base;
          DAT_023dcea6 = (char)uVar7;
          DAT_023dd372._0_1_ = (char)uVar10;
          return;
        case 0x11:
          uVar15 = (uVar7 & 0x1f) * 2;
          vdp_window_x_from_right = (char)(uVar10 >> 7);
          DAT_023ddb04 = (char)uVar15;
          if (uVar10 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(frame_active_width_tiles <= uVar15);
          }
          else {
            DAT_023dcfa8 = (uVar7 & 0x1f) * -2 + 1;
            if (1 < uVar15) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          vdp_window_y_from_bottom = (char)(uVar10 >> 7);
          vdp_window_y_split_pixels = (uVar7 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar7 & 0x1f);
          return;
        case 0x13:
          vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar10;
          return;
        case 0x14:
          vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar10 << 8;
          return;
        case 0x15:
          vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar10 << 1;
          return;
        case 0x16:
          vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar10 << 9;
          return;
        case 0x17:
          vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar7 & 0x7f) << 0x11;
          vdp_dma_mode = (byte)(uVar10 >> 6);
        }
        return;
      }
      return;
    }
    vdp_access_code = vdp_access_code & 3 | uVar15 & 0x3c;
    vdp_address = vdp_address & 0x3fff | (uVar7 & 3) << 0xe;
    vdp_control_word_pending = '\0';
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((uVar15 & 0x20) == 0) {
      return;
    }
  }
  uVar10 = vdp_dma_source_address;
  uVar15 = vdp_address_increment;
  uVar7 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar7 = 0xffff;
  }
  vdp_dma_remaining = uVar7;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar7 = vdp_dma_source_address & 0xfffffe;
    puVar5 = (ushort *)get_vdp_dma_backing_pointer(uVar7);
    uVar8 = vdp_address;
    uVar12 = vdp_dma_remaining;
    uVar17 = vdp_scanline;
    uVar9 = vdp_access_code & 0xf;
    uVar16 = vdp_dma_remaining & 0xffff;
    if (uVar9 == 3) {
      bVar11 = (&DAT_0208ebb0)[vdp_scanline];
      uVar7 = uVar7 << 0xf;
      if (bVar11 == 200) {
        bVar11 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar12 = (uint)vdp_backdrop_color_index;
      do {
        uVar9 = (uint)*puVar5;
        uVar8 = (vdp_address & 0x7e) >> 1;
        uVar2 = (ushort)((uVar9 & 0xe0) << 2) | (ushort)((uVar9 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar9 & 0xe) << 1);
        uVar7 = uVar7 + 0x8000;
        vdp_address = vdp_address + uVar15;
        if ((uVar9 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar8]) {
          (&vdp_cram)[uVar8] = (short)(uVar9 & 0xeee);
          if ((uVar8 != 0) && (uVar17 < 0xdf)) {
            (&DAT_023dc8ca)[uVar8 + (uint)(bVar11 >> 5) * 0x40] = uVar2;
            (&scanline_pending_palette_changes)[bVar11] = &DAT_023dc8ca + (uint)(bVar11 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar8] = uVar2;
          if (uVar8 == uVar12) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar16 = uVar16 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar16 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar10 & 0xfe0000 | uVar7 >> 0xf;
      return;
    }
    if (uVar9 == 5) {
      uVar7 = uVar7 << 0xf;
      do {
        uVar12 = vdp_address & 0x7f;
        uVar17 = vdp_address & 0x7e;
        vdp_address = uVar12;
        if (0x4f < uVar12) break;
        uVar16 = uVar16 - 1 & 0xffff;
        uVar7 = uVar7 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar17) = *puVar5;
        puVar5 = puVar5 + 1;
        vdp_address = uVar15 + uVar12;
      } while (uVar16 != 0);
      vdp_dma_length_register = uVar16;
      vdp_dma_remaining = uVar16;
      vdp_dma_source_address = uVar10 & 0xfe0000 | uVar7 >> 0xf;
      return;
    }
    if (uVar9 != 1) {
      vdp_dma_length_register = uVar16;
      vdp_dma_remaining = uVar16;
      vdp_dma_source_address = uVar7;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar17 = uVar15 & 0xffff;
      uVar7 = uVar7 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar9 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&vdp_vram + uVar9);
        uVar1 = *puVar6;
        if (uVar1 != uVar2) {
          *(ushort *)(&vdp_vram + uVar9) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar16 = uVar16 - 1 & 0xffff;
        uVar7 = uVar7 + 0x8000;
        (&vram_word_change_flags)[uVar9 >> 1] = uVar1 != uVar2;
        uVar9 = uVar9 + uVar17 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar16 != 0);
      uVar18 = uVar9;
      if (uVar9 <= uVar8) {
        uVar18 = uVar9 + 0x10000;
      }
      uVar7 = uVar10 & 0xfe0000 | uVar7 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar7;
        return;
      }
      if (uVar8 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar19 = true;
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (iVar14 + vdp_sprite_attribute_table_base <= uVar8) goto LAB_0200aa30;
        if (vdp_wide_display_mode == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        bVar19 = iVar14 + vdp_sprite_attribute_table_base < uVar9;
        DAT_020b4c15 = 1;
      }
      uVar10 = 0;
      if (((uVar8 != vdp_hscroll_table_base) || (DAT_023dcdaa < uVar9)) && (bVar19)) {
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
          if ((plane_name_table_span_bytes >> 1 <= uVar12) && (plane_a_tilemap_refresh_pending = 1, !bVar4)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            plane_a_tilemap_refresh_pending = 1;
            vdp_dma_source_address = uVar7;
            return;
          }
          uVar16 = uStack_2c - vdp_plane_a_name_table_base;
          bVar19 = (int)uVar16 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar16 = uStack_2c;
          }
          if (bVar19) {
            uVar16 = 0;
          }
          uVar12 = uVar18 - vdp_plane_a_name_table_base;
          if (plane_name_table_span_bytes < uVar18 - vdp_plane_a_name_table_base) {
            uVar12 = plane_name_table_span_bytes;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar6,uVar16,uVar15,uVar12);
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
            vdp_dma_source_address = uVar7;
            return;
          }
          iVar14 = uStack_2c - vdp_plane_b_name_table_base;
          bVar19 = iVar14 < 0;
          if (bVar19) {
            iVar14 = 0;
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar19) {
            puVar6 = puVar5;
          }
          uVar16 = uVar18 - vdp_plane_b_name_table_base;
          if (plane_name_table_span_bytes < uVar18 - vdp_plane_b_name_table_base) {
            uVar16 = plane_name_table_span_bytes;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar6,iVar14,uVar15,uVar16);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
          (*transfer_vdp_words_to_ds_window)(puVar5,uStack_2c - vdp_window_name_table_base & 0xffff,uVar15,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar19) {
          uVar15 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar15) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar17 & 0xffff;
              uVar15 = uVar15 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar15 != 0);
            uVar10 = 0;
          }
          else {
            do {
              if ((&vram_word_change_flags)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar17 & 0xffff;
              uVar15 = uVar15 - 1 & 0xffff;
              uVar10 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar15 != 0);
          }
        }
      }
    }
    else {
      uVar15 = uVar15 & 0xffff;
      puVar6 = puVar5;
      uVar17 = uVar16;
      uVar18 = uStack_2c;
      do {
        uVar2 = *puVar6;
        uVar17 = uVar17 - 1 & 0xffff;
        (&vdp_vram)[uVar18] = (char)(uVar2 >> 8);
        uVar7 = uVar7 + 2 & 0x1ffff | uVar10 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar18] = (char)uVar2;
        uVar18 = uVar18 + uVar15 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      if (uVar8 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar19 = true;
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (iVar14 + vdp_sprite_attribute_table_base <= uVar8) goto LAB_0200aa20;
        if (vdp_wide_display_mode == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        bVar19 = iVar14 + vdp_sprite_attribute_table_base < uVar18;
        DAT_020b4c15 = 1;
      }
      uVar10 = 0;
      if (((uVar8 != vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
          bVar19 = false;
          uVar10 = uVar16;
        }
        else {
          if (plane_name_table_span_bytes >> 1 <= uVar16) {
            reset_background_tile_cache_at_capacity(0);
          }
          uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar15;
            uVar16 = uVar16 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar16 != 0);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar10 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < vdp_plane_b_name_table_end)) {
          uVar10 = vdp_dma_remaining & 0xffff;
          if (plane_name_table_span_bytes >> 1 <= uVar10) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar15;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar10 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
          uVar10 = vdp_dma_remaining & 0xffff;
          if (vdp_wide_display_mode == '\0') {
            uVar16 = 0x400;
          }
          else {
            uVar16 = 0x800;
          }
          if (uVar16 <= uVar10) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar15;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar10 = 0;
        }
        if (!bVar19) {
          uVar16 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar15 & 0xffff;
            uVar16 = uVar16 - 1 & 0xffff;
            uVar10 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar16 != 0);
        }
      }
    }
    vdp_address = uVar18 & 0xffff;
    vdp_dma_length_register = uVar10;
    vdp_dma_remaining = uVar10;
    vdp_dma_source_address = uVar7;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar10 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar12 = uVar10 + uVar7;
    uVar16 = vdp_address_increment & 0xffff;
    uVar17 = vdp_address;
    do {
      uVar8 = uVar10 ^ 1;
      uVar10 = uVar10 + 1 & 0xffff;
      (&vdp_vram)[uVar17 ^ 1] = (&vdp_vram)[uVar8];
      uVar17 = uVar17 + uVar16 & 0xffff;
    } while (uVar10 != (uVar12 & 0xffff));
    uVar10 = vdp_address;
    if (uVar15 == 1) {
      uVar7 = uVar7 >> 1;
      uVar16 = 2;
    }
    do {
      vdp_address = uVar17;
      uVar10 = uVar10 & 0xfffe;
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar10 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar10)) {
          if ((uVar10 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar10)) {
            bVar19 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar10 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
            bVar19 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar10) && (uVar10 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar10 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
            bVar19 = true;
          }
          if ((vdp_window_name_table_base <= uVar10) && (uVar10 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar10 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
          }
          if (!bVar19) {
            update_cached_ds_pattern_from_vdp_word(uVar10,*(undefined2 *)(&vdp_vram + uVar10));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (iVar14 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar7 = uVar7 - 1 & 0xffff;
      if (uVar7 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar10 = uVar10 + uVar16;
      uVar17 = vdp_address;
    } while( true );
  }
  return;
}


// 0x0201bca0  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_long_0201bca0(void)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  bool bVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  int unaff_r6;
  uint uVar18;
  uint uVar19;
  int unaff_r8;
  uint uVar20;
  ushort *unaff_r10;
  bool bVar21;
  uint uStack_44;
  uint uStack_2c;
  
  piVar1 = (int *)(unaff_r6 + 0x54);
  puVar2 = (uint *)(unaff_r6 + 0x9c);
  uVar4 = *unaff_r10;
  if ((uVar4 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar17 = (uVar4 & 0x7000) >> 10;
  if ((uVar4 & 0x800) == 0) {
    iVar11 = (int)*(short *)(unaff_r6 + uVar17);
  }
  else {
    iVar11 = *(int *)(unaff_r6 + uVar17);
  }
  uVar9 = read_m68k_bus_long(((int)unaff_r10 - *piVar1 | *puVar2) + (int)(char)uVar4 + iVar11);
  uVar4 = unaff_r10[2];
  uVar17 = (unaff_r10[1] & 0xf0) * 0x10000;
  uVar3 = (ushort)uVar9;
  if (0xdfffff < uVar17) {
    *(undefined2 *)(unaff_r8 + (uint)uVar4) = (short)(uVar9 >> 0x10);
    ((undefined2 *)(unaff_r8 + (uint)uVar4))[1] = uVar3;
    return;
  }
  if (uVar17 < 0xc00000) {
    uVar17 = CONCAT22(unaff_r10[1],uVar4) & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar17 >> 0x10])(uVar17,uVar9 >> 0x10);
    (*(code *)(&m68k_word_write_handlers)[uVar17 >> 0x10])(uVar17 + 2,uVar9 & 0xffff);
    return;
  }
  bVar14 = (byte)uVar9;
  if ((uVar4 & 0x1c) == 0) {
    write_vdp_data_port_word(uVar9 >> 0x10);
    uVar17 = uVar9 & 0xffff;
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar18 = vdp_address_increment;
    uVar13 = vdp_dma_remaining;
    uVar5 = (undefined1)(uVar17 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar21 = (vdp_address & 1) == 0;
      uVar17 = vdp_address & 0xffff;
      if (bVar21) {
        puVar16 = &vdp_vram + uVar17;
      }
      else {
        puVar16 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar19 = vdp_address_increment & 0xffff;
      if (!bVar21) {
        (&vdp_vram)[(int)puVar16] = bVar14;
      }
      uVar13 = uVar13 & 0xffff;
      if (bVar21) {
        (&vdp_vram)[uVar17] = uVar5;
        puVar16[1] = bVar14;
      }
      if (!bVar21) {
        (&vdp_vram)[uVar17] = uVar5;
      }
      uVar10 = uVar17 + uVar19 & 0xffff;
      uVar15 = uVar13;
      if (uVar13 != 0) {
        do {
          uVar15 = uVar15 - 1 & 0xffff;
          (&vdp_vram)[uVar10] = bVar14;
          uVar10 = uVar10 + uVar19 & 0xffff;
        } while (uVar15 != 0);
        uVar17 = vdp_address;
        if (uVar13 == 0xffff && (uVar9 & 0xff) == 0) {
          vdp_address = uVar10;
          clear_and_initialize_renderer_vram();
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
      }
      vdp_address = uVar10;
      uVar17 = uVar17 & 0xfffe;
      if (uVar18 == 1) {
        uVar13 = uVar13 >> 1;
        uVar19 = 2;
      }
      do {
        if (uVar17 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar17 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar17)) {
            if ((uVar17 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar17)) {
              bVar21 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar17 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar17));
              bVar21 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar17) && (uVar17 < vdp_plane_b_name_table_end)) {
              (*write_ds_background_tilemap_word)(1,uVar17 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar17));
              bVar21 = true;
            }
            if ((vdp_window_name_table_base <= uVar17) && (uVar17 < vdp_window_name_table_end)) {
              (*write_ds_window_tilemap_word)(uVar17 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar17));
            }
            if (!bVar21) {
              update_cached_ds_pattern_from_vdp_word(uVar17,*(undefined2 *)(&vdp_vram + uVar17));
            }
          }
        }
        else {
          if (vdp_wide_display_mode == '\0') {
            iVar11 = 0x200;
          }
          else {
            iVar11 = 0x280;
          }
          if (iVar11 + vdp_sprite_attribute_table_base <= uVar17) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar13 = uVar13 - 1 & 0xffff;
        if (uVar13 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar17 = uVar17 + uVar19 & 0xfffe;
      } while( true );
    }
    uVar13 = vdp_access_code & 0xf;
    if (uVar13 == 3) {
      uVar17 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar17] = uVar3 & 0xeee;
      uVar4 = (ushort)((uVar9 & 0xe0) << 2) | (ushort)((uVar9 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar9 & 0xe) << 1);
      if ((uVar17 != 0) && (vdp_scanline < 0xdf)) {
        bVar14 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar14 == 200) {
          bVar14 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&scanline_pending_palette_changes)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar17 + (uint)(bVar14 >> 5) * 0x40] = uVar4;
      }
      uVar9 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar17] = uVar4;
      DAT_0208f354 = 1;
      if (uVar17 == uVar9) {
        _DAT_05000200 = uVar4;
      }
    }
    else if (uVar13 == 5) {
      uVar17 = vdp_address & 0x7f;
      if (0x4f < uVar17) {
        vdp_address = uVar17;
        return;
      }
      uVar9 = vdp_address & 0x7e;
      vdp_address = uVar17;
      *(ushort *)((int)&vdp_vsram + uVar9) = uVar3;
    }
    else if (uVar13 == 1) {
      uVar13 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar13) == uVar17) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar13) = uVar3;
      }
      else {
        (&vdp_vram)[uVar13] = uVar5;
        (&vdp_vram_odd_byte_base)[uVar13] = bVar14;
        uVar17 = (uVar9 & 0xffff) >> 8 | (uVar9 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar13) {
        if (vdp_wide_display_mode == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (uVar13 < iVar11 + vdp_sprite_attribute_table_base) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar13 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar13)) {
        bVar21 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar13 - vdp_plane_a_name_table_base,uVar17);
        bVar21 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar13) && (uVar13 < vdp_plane_b_name_table_end)) {
        (*write_ds_background_tilemap_word)(1,uVar13 - vdp_plane_b_name_table_base,uVar17);
        bVar21 = true;
      }
      if ((vdp_window_name_table_base <= uVar13) && (uVar13 < vdp_window_name_table_end)) {
        (*write_ds_window_tilemap_word)(uVar13 - vdp_window_name_table_base,uVar17);
      }
      if (!bVar21) {
        update_cached_ds_pattern_from_vdp_word(uVar13,uVar17);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  if (vdp_control_word_pending == '\0') {
    uVar13 = uVar9 >> 2 & 0x3c | uVar9 >> 0x1e;
    uVar17 = (uVar9 & 3) << 0xe | (uVar9 & 0x3fffffff) >> 0x10;
    if ((uVar9 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    vdp_address = uVar17;
    vdp_access_code = uVar13;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((uVar9 >> 2 & 0x20) == 0) {
      return;
    }
  }
  else {
LAB_0200ac58:
    write_vdp_control_port_word(uVar9 >> 0x10);
    uVar17 = (uVar9 & 0xffff) >> 2;
    if (vdp_control_word_pending == '\0') {
      uVar13 = uVar9 & 0xff;
      uVar17 = (uVar9 & 0xffff) >> 8 & 0x1f;
      if ((uVar9 & 0xc000) != 0x8000) {
        vdp_control_word_pending = 1;
        vdp_access_code = vdp_access_code & 0x3c | (uVar9 & 0xffff) >> 0xe;
        vdp_address = vdp_address & 0xc000 | uVar9 & 0x3fff;
        return;
      }
      vdp_access_code = 0;
      iVar11 = 1 - (uint)vdp_mode_5_bit;
      if (1 < vdp_mode_5_bit) {
        iVar11 = 0;
      }
      if (uVar17 < 0xc) {
        iVar11 = 0;
      }
      (&vdp_registers)[uVar17] = bVar14;
      if (iVar11 == 0) {
        switch(uVar17) {
        case 0:
          vdp_h_interrupt_enabled = (byte)(uVar13 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar13 >> 1) ^ 1) & 1;
          return;
        case 1:
          vdp_mode_5_bit = bVar14 & 4;
          vdp_display_enabled = (byte)(uVar13 >> 6) & 1;
          uVar17 = uVar13 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar13 >> 5) & 1;
          vdp_dma_enabled = (byte)(uVar13 >> 4) & 1;
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
          vdp_plane_a_name_table_base = (uVar9 & 0x38) * 0x400;
          plane_a_word_change_flags = &vram_word_change_flags + (uVar9 & 0x38) * 0x200;
          if (((emulator_option_flags & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
            plane_a_tilemap_refresh_pending = 1;
          }
          ram0x023dd374 = vdp_plane_a_name_table_base;
          vdp_plane_a_name_table_end = vdp_plane_a_name_table_base + plane_name_table_span_bytes;
          return;
        case 3:
          vdp_window_name_table_base = (uVar9 & 0x3e) * 0x400;
          if (vdp_wide_display_mode == '\0') {
            iVar11 = 0x800;
          }
          else {
            iVar11 = 0x1000;
          }
          vdp_window_name_table_end = iVar11 + vdp_window_name_table_base;
          return;
        case 4:
          vdp_plane_b_name_table_base = (uVar9 & 7) * 0x2000;
          plane_b_word_change_flags = &vram_word_change_flags + (uVar9 & 7) * 0x1000;
          if (((emulator_option_flags & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
            plane_b_tilemap_refresh_pending = 1;
          }
          DAT_023dd378 = vdp_plane_b_name_table_base;
          vdp_plane_b_name_table_end = vdp_plane_b_name_table_base + plane_name_table_span_bytes;
          return;
        case 5:
          iVar11 = (uVar9 & 0x7f) * 0x200;
          DAT_0209cbe0 = vdp_sprite_attribute_table_base;
          vdp_sat_host_pointer = &vdp_vram + iVar11;
          vdp_sprite_attribute_table_base = iVar11;
          return;
        case 7:
          DAT_0b003640 = uVar9 & 0x3f;
          vdp_backdrop_color_index = (char)(uVar9 & 0x3f);
          return;
        case 10:
          vdp_h_interrupt_reload = (short)uVar13;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar13 >> 3) & 1;
          vdp_vscroll_mode = (byte)(uVar13 >> 2) & 1;
          vdp_hscroll_mode = bVar14 & 3;
          if ((emulator_option_flags & 4) == 0) {
            record_vdp_scanline_state = record_unscaled_scanline_scroll_and_backdrop;
          }
          else {
            switch(bVar14 & 3) {
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
          vdp_wide_display_mode = (uVar9 & 0x81) != 0;
          if ((uVar17 != (uVar13 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar17)) {
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
          vdp_hscroll_table_base = (ushort)((uVar9 << 0x1a) >> 0x10);
          DAT_023dcdaa = vdp_hscroll_table_base + 0x380;
          return;
        case 0xf:
          vdp_address_increment = uVar13;
          return;
        case 0x10:
          uVar13 = uVar13 >> 4 & 3;
          uVar9 = uVar9 & 3;
          uVar17 = uVar13 | uVar9 << 4;
          if (uVar17 != (vdp_background_layout_code & 0xff)) {
            background_layout_refresh_pending = 1;
          }
          vdp_background_layout_code = uVar17;
          plane_name_table_span_bytes = *(uint *)(&DAT_0208e59c + (uVar13 + uVar9 * 4) * 4);
          vdp_plane_b_name_table_end = plane_name_table_span_bytes + vdp_plane_b_name_table_base;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar9];
          vdp_plane_a_name_table_end = plane_name_table_span_bytes + vdp_plane_a_name_table_base;
          DAT_023dcea6 = (char)uVar9;
          DAT_023dd372._0_1_ = (char)uVar13;
          return;
        case 0x11:
          uVar17 = (uVar9 & 0x1f) * 2;
          vdp_window_x_from_right = (char)(uVar13 >> 7);
          DAT_023ddb04 = (char)uVar17;
          if (uVar13 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(frame_active_width_tiles <= uVar17);
          }
          else {
            DAT_023dcfa8 = (uVar9 & 0x1f) * -2 + 1;
            if (1 < uVar17) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          vdp_window_y_from_bottom = (char)(uVar13 >> 7);
          vdp_window_y_split_pixels = (uVar9 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar9 & 0x1f);
          return;
        case 0x13:
          vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar13;
          return;
        case 0x14:
          vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar13 << 8;
          return;
        case 0x15:
          vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar13 << 1;
          return;
        case 0x16:
          vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar13 << 9;
          return;
        case 0x17:
          vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar9 & 0x7f) << 0x11;
          vdp_dma_mode = (byte)(uVar13 >> 6);
        }
        return;
      }
      return;
    }
    vdp_access_code = vdp_access_code & 3 | uVar17 & 0x3c;
    vdp_address = vdp_address & 0x3fff | (uVar9 & 3) << 0xe;
    vdp_control_word_pending = '\0';
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((uVar17 & 0x20) == 0) {
      return;
    }
  }
  uVar13 = vdp_dma_source_address;
  uVar17 = vdp_address_increment;
  uVar9 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar9 = 0xffff;
  }
  vdp_dma_remaining = uVar9;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar9 = vdp_dma_source_address & 0xfffffe;
    puVar7 = (ushort *)get_vdp_dma_backing_pointer(uVar9);
    uVar10 = vdp_address;
    uVar15 = vdp_dma_remaining;
    uVar19 = vdp_scanline;
    uVar12 = vdp_access_code & 0xf;
    uVar18 = vdp_dma_remaining & 0xffff;
    if (uVar12 == 3) {
      bVar14 = (&DAT_0208ebb0)[vdp_scanline];
      uVar9 = uVar9 << 0xf;
      if (bVar14 == 200) {
        bVar14 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar15 = (uint)vdp_backdrop_color_index;
      do {
        uVar12 = (uint)*puVar7;
        uVar10 = (vdp_address & 0x7e) >> 1;
        uVar4 = (ushort)((uVar12 & 0xe0) << 2) | (ushort)((uVar12 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar12 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        vdp_address = vdp_address + uVar17;
        if ((uVar12 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar10]) {
          (&vdp_cram)[uVar10] = (short)(uVar12 & 0xeee);
          if ((uVar10 != 0) && (uVar19 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar14 >> 5) * 0x40] = uVar4;
            (&scanline_pending_palette_changes)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar10] = uVar4;
          if (uVar10 == uVar15) {
            _DAT_05000200 = uVar4;
          }
        }
        uVar18 = uVar18 - 1 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar12 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar15 = vdp_address & 0x7f;
        uVar19 = vdp_address & 0x7e;
        vdp_address = uVar15;
        if (0x4f < uVar15) break;
        uVar18 = uVar18 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar19) = *puVar7;
        puVar7 = puVar7 + 1;
        vdp_address = uVar17 + uVar15;
      } while (uVar18 != 0);
      vdp_dma_length_register = uVar18;
      vdp_dma_remaining = uVar18;
      vdp_dma_source_address = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar12 != 1) {
      vdp_dma_length_register = uVar18;
      vdp_dma_remaining = uVar18;
      vdp_dma_source_address = uVar9;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar19 = uVar17 & 0xffff;
      uVar9 = uVar9 << 0xf;
      uStack_44 = 0;
      puVar8 = puVar7;
      uVar12 = uStack_2c;
      do {
        uVar4 = *(ushort *)(&vdp_vram + uVar12);
        uVar3 = *puVar8;
        if (uVar3 != uVar4) {
          *(ushort *)(&vdp_vram + uVar12) = uVar3;
          uStack_44 = uStack_44 + 1;
        }
        uVar18 = uVar18 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&vram_word_change_flags)[uVar12 >> 1] = uVar3 != uVar4;
        uVar12 = uVar12 + uVar19 & 0xffff;
        puVar8 = puVar8 + 1;
      } while (uVar18 != 0);
      uVar20 = uVar12;
      if (uVar12 <= uVar10) {
        uVar20 = uVar12 + 0x10000;
      }
      uVar9 = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar9;
        return;
      }
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar21 = true;
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200aa30;
        if (vdp_wide_display_mode == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        bVar21 = iVar11 + vdp_sprite_attribute_table_base < uVar12;
        DAT_020b4c15 = 1;
      }
      uVar13 = 0;
      if (((uVar10 != vdp_hscroll_table_base) || (DAT_023dcdaa < uVar12)) && (bVar21)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
          if (vdp_plane_a_name_table_base < uVar20) {
            if (vdp_plane_a_name_table_end < uVar20) {
              bVar21 = false;
            }
            else {
              bVar21 = true;
            }
          }
          else {
            bVar21 = false;
          }
        }
        else {
          bVar21 = true;
        }
        if ((uStack_2c < vdp_plane_b_name_table_base) || (vdp_plane_b_name_table_end <= uStack_2c)) {
          if (vdp_plane_b_name_table_base < uVar20) {
            if (vdp_plane_b_name_table_end < uVar20) {
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
        if (bVar21) {
          if ((plane_name_table_span_bytes >> 1 <= uVar15) && (plane_a_tilemap_refresh_pending = 1, !bVar6)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            plane_a_tilemap_refresh_pending = 1;
            vdp_dma_source_address = uVar9;
            return;
          }
          uVar18 = uStack_2c - vdp_plane_a_name_table_base;
          bVar21 = (int)uVar18 < 0;
          puVar8 = puVar7;
          if (bVar21) {
            puVar8 = (ushort *)((int)puVar7 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar18 = uStack_2c;
          }
          if (bVar21) {
            uVar18 = 0;
          }
          uVar15 = uVar20 - vdp_plane_a_name_table_base;
          if (plane_name_table_span_bytes < uVar20 - vdp_plane_a_name_table_base) {
            uVar15 = plane_name_table_span_bytes;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar8,uVar18,uVar17,uVar15);
          puVar8 = (ushort *)&vdp_address;
          bVar21 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar8 = (ushort *)0x0;
          bVar21 = false;
        }
        if (bVar6) {
          if (plane_name_table_span_bytes >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            plane_b_tilemap_refresh_pending = 1;
            vdp_dma_source_address = uVar9;
            return;
          }
          iVar11 = uStack_2c - vdp_plane_b_name_table_base;
          bVar21 = iVar11 < 0;
          if (bVar21) {
            iVar11 = 0;
            puVar8 = (ushort *)((int)puVar7 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar21) {
            puVar8 = puVar7;
          }
          uVar18 = uVar20 - vdp_plane_b_name_table_base;
          if (plane_name_table_span_bytes < uVar20 - vdp_plane_b_name_table_base) {
            uVar18 = plane_name_table_span_bytes;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar8,iVar11,uVar17,uVar18);
          bVar21 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
          (*transfer_vdp_words_to_ds_window)(puVar7,uStack_2c - vdp_window_name_table_base & 0xffff,uVar17,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar21) {
          uVar17 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar17) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar7);
              uStack_2c = uStack_2c + uVar19 & 0xffff;
              uVar17 = uVar17 - 1 & 0xffff;
              puVar7 = puVar7 + 1;
            } while (uVar17 != 0);
            uVar13 = 0;
          }
          else {
            do {
              if ((&vram_word_change_flags)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar7);
              }
              uStack_2c = uStack_2c + uVar19 & 0xffff;
              uVar17 = uVar17 - 1 & 0xffff;
              uVar13 = 0;
              puVar7 = puVar7 + 1;
            } while (uVar17 != 0);
          }
        }
      }
    }
    else {
      uVar17 = uVar17 & 0xffff;
      puVar8 = puVar7;
      uVar19 = uVar18;
      uVar20 = uStack_2c;
      do {
        uVar4 = *puVar8;
        uVar19 = uVar19 - 1 & 0xffff;
        (&vdp_vram)[uVar20] = (char)(uVar4 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar13 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar20] = (char)uVar4;
        uVar20 = uVar20 + uVar17 & 0xffff;
        puVar8 = puVar8 + 1;
      } while (uVar19 != 0);
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar21 = true;
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200aa20;
        if (vdp_wide_display_mode == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        bVar21 = iVar11 + vdp_sprite_attribute_table_base < uVar20;
        DAT_020b4c15 = 1;
      }
      uVar13 = 0;
      if (((uVar10 != vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar20)) && (bVar21)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uStack_2c)) {
          bVar21 = false;
          uVar13 = uVar18;
        }
        else {
          if (plane_name_table_span_bytes >> 1 <= uVar18) {
            reset_background_tile_cache_at_capacity(0);
          }
          uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
          puVar8 = puVar7;
          do {
            (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar17;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar18 != 0);
          bVar21 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar13 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < vdp_plane_b_name_table_end)) {
          uVar13 = vdp_dma_remaining & 0xffff;
          if (plane_name_table_span_bytes >> 1 <= uVar13) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar8 = puVar7;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar17;
            uVar13 = uVar13 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar13 != 0);
          bVar21 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar13 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < vdp_window_name_table_end)) {
          uVar13 = vdp_dma_remaining & 0xffff;
          if (vdp_wide_display_mode == '\0') {
            uVar18 = 0x400;
          }
          else {
            uVar18 = 0x800;
          }
          if (uVar18 <= uVar13) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar8 = puVar7;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar17;
            uVar13 = uVar13 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar13 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar13 = 0;
        }
        if (!bVar21) {
          uVar18 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = uStack_2c + uVar17 & 0xffff;
            uVar18 = uVar18 - 1 & 0xffff;
            uVar13 = 0;
            puVar7 = puVar7 + 1;
          } while (uVar18 != 0);
        }
      }
    }
    vdp_address = uVar20 & 0xffff;
    vdp_dma_length_register = uVar13;
    vdp_dma_remaining = uVar13;
    vdp_dma_source_address = uVar9;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar13 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar15 = uVar13 + uVar9;
    uVar18 = vdp_address_increment & 0xffff;
    uVar19 = vdp_address;
    do {
      uVar10 = uVar13 ^ 1;
      uVar13 = uVar13 + 1 & 0xffff;
      (&vdp_vram)[uVar19 ^ 1] = (&vdp_vram)[uVar10];
      uVar19 = uVar19 + uVar18 & 0xffff;
    } while (uVar13 != (uVar15 & 0xffff));
    uVar13 = vdp_address;
    if (uVar17 == 1) {
      uVar9 = uVar9 >> 1;
      uVar18 = 2;
    }
    do {
      vdp_address = uVar19;
      uVar13 = uVar13 & 0xfffe;
      if (uVar13 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar13 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar13)) {
          if ((uVar13 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar13)) {
            bVar21 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar13 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar13));
            bVar21 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar13) && (uVar13 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar13 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar13));
            bVar21 = true;
          }
          if ((vdp_window_name_table_base <= uVar13) && (uVar13 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar13 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar13));
          }
          if (!bVar21) {
            update_cached_ds_pattern_from_vdp_word(uVar13,*(undefined2 *)(&vdp_vram + uVar13));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + vdp_sprite_attribute_table_base <= uVar13) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar9 = uVar9 - 1 & 0xffff;
      if (uVar9 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar13 = uVar13 + uVar18;
      uVar19 = vdp_address;
    } while( true );
  }
  return;
}

