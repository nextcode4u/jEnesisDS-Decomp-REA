/* ARM9 to displacement or indexed — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02017bbc  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_long_02017bbc(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int unaff_r6;
  uint uVar17;
  uint uVar18;
  int unaff_r8;
  uint uVar19;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar8 = read_m68k_bus_long(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar9 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)*unaff_r10;
  uVar1 = (ushort)uVar8;
  if (0xdfffff < (uVar9 & 0xf00000)) {
    puVar5 = (undefined2 *)(unaff_r8 + (uVar9 & 0xffff));
    *puVar5 = (short)(uVar8 >> 0x10);
    puVar5[1] = uVar1;
    return;
  }
  if ((uVar9 & 0xf00000) < 0xc00000) {
    uVar9 = uVar9 & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar9 >> 0x10])(uVar9,uVar8 >> 0x10);
    (*(code *)(&m68k_word_write_handlers)[uVar9 >> 0x10])(uVar9 + 2,uVar8 & 0xffff);
    return;
  }
  bVar13 = (byte)uVar8;
  if ((uVar9 & 0x1c) == 0) {
    write_vdp_data_port_word(uVar8 >> 0x10);
    uVar9 = uVar8 & 0xffff;
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar17 = vdp_address_increment;
    uVar12 = vdp_dma_remaining;
    uVar3 = (undefined1)(uVar9 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar20 = (vdp_address & 1) == 0;
      uVar9 = vdp_address & 0xffff;
      if (bVar20) {
        puVar15 = &vdp_vram + uVar9;
      }
      else {
        puVar15 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar18 = vdp_address_increment & 0xffff;
      if (!bVar20) {
        (&vdp_vram)[(int)puVar15] = bVar13;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar20) {
        (&vdp_vram)[uVar9] = uVar3;
        puVar15[1] = bVar13;
      }
      if (!bVar20) {
        (&vdp_vram)[uVar9] = uVar3;
      }
      uVar10 = uVar9 + uVar18 & 0xffff;
      uVar14 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar14 = uVar14 - 1 & 0xffff;
          (&vdp_vram)[uVar10] = bVar13;
          uVar10 = uVar10 + uVar18 & 0xffff;
        } while (uVar14 != 0);
        uVar9 = vdp_address;
        if (uVar12 == 0xffff && (uVar8 & 0xff) == 0) {
          vdp_address = uVar10;
          clear_and_initialize_renderer_vram();
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
      }
      vdp_address = uVar10;
      uVar9 = uVar9 & 0xfffe;
      if (uVar17 == 1) {
        uVar12 = uVar12 >> 1;
        uVar18 = 2;
      }
      do {
        if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
            if ((uVar9 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar9)) {
              bVar20 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar9 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
              bVar20 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar9) && (uVar9 < DAT_023dc8b8)) {
              (*write_ds_background_tilemap_word)(1,uVar9 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
              bVar20 = true;
            }
            if ((vdp_window_name_table_base <= uVar9) && (uVar9 < DAT_023dc8bc)) {
              (*write_ds_window_tilemap_word)(uVar9 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            }
            if (!bVar20) {
              update_cached_ds_pattern_from_vdp_word(uVar9,*(undefined2 *)(&vdp_vram + uVar9));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar16 = 0x200;
          }
          else {
            iVar16 = 0x280;
          }
          if (iVar16 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar9 = uVar9 + uVar18 & 0xfffe;
      } while( true );
    }
    uVar12 = vdp_access_code & 0xf;
    if (uVar12 == 3) {
      uVar9 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar9] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar8 & 0xe) << 1);
      if ((uVar9 != 0) && (vdp_scanline < 0xdf)) {
        bVar13 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar13 == 200) {
          bVar13 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
      }
      uVar8 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar9] = uVar1;
      DAT_0208f354 = 1;
      if (uVar9 == uVar8) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar12 == 5) {
      uVar8 = vdp_address & 0x7f;
      if (0x4f < uVar8) {
        vdp_address = uVar8;
        return;
      }
      uVar9 = vdp_address & 0x7e;
      vdp_address = uVar8;
      *(ushort *)((int)&vdp_vsram + uVar9) = uVar1;
    }
    else if (uVar12 == 1) {
      uVar12 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar12) == uVar9) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar12) = uVar1;
      }
      else {
        (&vdp_vram)[uVar12] = uVar3;
        (&vdp_vram_odd_byte_base)[uVar12] = bVar13;
        uVar9 = (uVar8 & 0xffff) >> 8 | (uVar8 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar12) {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (uVar12 < iVar16 + vdp_sprite_attribute_table_base) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar12 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar12)) {
        bVar20 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,uVar9);
        bVar20 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,uVar9);
        bVar20 = true;
      }
      if ((vdp_window_name_table_base <= uVar12) && (uVar12 < DAT_023dc8bc)) {
        (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,uVar9);
      }
      if (!bVar20) {
        update_cached_ds_pattern_from_vdp_word(uVar12,uVar9);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  if (vdp_control_word_pending == '\0') {
    uVar12 = uVar8 >> 2 & 0x3c | uVar8 >> 0x1e;
    uVar9 = (uVar8 & 3) << 0xe | (uVar8 & 0x3fffffff) >> 0x10;
    if ((uVar8 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    vdp_address = uVar9;
    vdp_access_code = uVar12;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((uVar8 >> 2 & 0x20) == 0) {
      return;
    }
  }
  else {
LAB_0200ac58:
    write_vdp_control_port_word(uVar8 >> 0x10);
    uVar9 = (uVar8 & 0xffff) >> 2;
    if (vdp_control_word_pending == '\0') {
      uVar12 = uVar8 & 0xff;
      uVar9 = (uVar8 & 0xffff) >> 8 & 0x1f;
      if ((uVar8 & 0xc000) != 0x8000) {
        vdp_control_word_pending = 1;
        vdp_access_code = vdp_access_code & 0x3c | (uVar8 & 0xffff) >> 0xe;
        vdp_address = vdp_address & 0xc000 | uVar8 & 0x3fff;
        return;
      }
      vdp_access_code = 0;
      iVar16 = 1 - (uint)vdp_mode_5_bit;
      if (1 < vdp_mode_5_bit) {
        iVar16 = 0;
      }
      if (uVar9 < 0xc) {
        iVar16 = 0;
      }
      (&vdp_registers)[uVar9] = bVar13;
      if (iVar16 == 0) {
        switch(uVar9) {
        case 0:
          vdp_h_interrupt_enabled = (byte)(uVar12 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar12 >> 1) ^ 1) & 1;
          return;
        case 1:
          vdp_mode_5_bit = bVar13 & 4;
          DAT_0b00362f = (byte)(uVar12 >> 6) & 1;
          uVar8 = uVar12 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar12 >> 5) & 1;
          vdp_dma_enabled = (byte)(uVar12 >> 4) & 1;
          DAT_023ddb06 = (char)uVar8;
          if (uVar8 == 0) {
            DAT_023dd370 = 0xe0;
            DAT_0b000004 = 0xe0;
          }
          else {
            DAT_023dd370 = 0xf0;
            DAT_0b000004 = 0xf0;
          }
          return;
        case 2:
          vdp_plane_a_name_table_base = (uVar8 & 0x38) * 0x400;
          DAT_023dde8c = &DAT_020acbec + (uVar8 & 0x38) * 0x200;
          if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
            DAT_023dc8a4 = 1;
          }
          ram0x023dd374 = vdp_plane_a_name_table_base;
          DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
          return;
        case 3:
          vdp_window_name_table_base = (uVar8 & 0x3e) * 0x400;
          if (DAT_023ddb05 == '\0') {
            iVar16 = 0x800;
          }
          else {
            iVar16 = 0x1000;
          }
          DAT_023dc8bc = iVar16 + vdp_window_name_table_base;
          return;
        case 4:
          vdp_plane_b_name_table_base = (uVar8 & 7) * 0x2000;
          DAT_023dde90 = &DAT_020acbec + (uVar8 & 7) * 0x1000;
          if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
            DAT_023dc8a8 = 1;
          }
          DAT_023dd378 = vdp_plane_b_name_table_base;
          DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
          return;
        case 5:
          iVar16 = (uVar8 & 0x7f) * 0x200;
          DAT_0209cbe0 = vdp_sprite_attribute_table_base;
          DAT_023dcdac = &vdp_vram + iVar16;
          vdp_sprite_attribute_table_base = iVar16;
          return;
        case 7:
          DAT_0b003640 = uVar8 & 0x3f;
          vdp_backdrop_color_index = (char)(uVar8 & 0x3f);
          return;
        case 10:
          vdp_h_interrupt_reload = (short)uVar12;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar12 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar12 >> 2) & 1;
          DAT_023dcdb0 = bVar13 & 3;
          if ((DAT_023cb610 & 4) == 0) {
            DAT_023dcea8 = record_unscaled_scanline_scroll_and_backdrop;
          }
          else {
            switch(bVar13 & 3) {
            case 0:
              DAT_023dcea8 = (code *)&LAB_0200bbd0;
              return;
            case 1:
              DAT_023dcea8 = (code *)&LAB_0200c0cc;
              return;
            case 2:
              DAT_023dcea8 = (code *)&LAB_0200bf18;
              return;
            case 3:
              DAT_023dcea8 = (code *)&LAB_0200bd6c;
              return;
            }
          }
          return;
        case 0xc:
          uVar9 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar8 & 0x81) != 0;
          if ((uVar9 != (uVar12 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar9)) {
            DAT_020b4bf4 = 0;
          }
          if ((bool)DAT_023ddb05) {
            DAT_023dc8bc = vdp_window_name_table_base + 0x1000;
            DAT_020b4c0c = 0xf000;
            DAT_020b4c0a = 0x50;
            DAT_023ddeb2 = 0x28;
            DAT_023dc8ae = 0x140;
            DAT_023dc8c8 = 0x40;
          }
          else {
            DAT_020b4c0c = 0xf800;
            DAT_023dc8bc = vdp_window_name_table_base + 0x800;
            DAT_020b4c14 = 1;
            DAT_020b4c0a = 0x40;
            DAT_023ddeb2 = 0x20;
            DAT_023dc8ae = 0x100;
            DAT_023dc8c8 = 0x20;
          }
          if (DAT_023ddeb4 == '\0') {
            DAT_023dcfa8 = (uint)(DAT_023dceac <= DAT_023ddb04);
          }
          else {
            DAT_023dcfa8 = 1 - DAT_023ddb04;
            if (1 < DAT_023ddb04) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0xd:
          DAT_023dcea4 = (ushort)((uVar8 << 0x1a) >> 0x10);
          DAT_023dcdaa = DAT_023dcea4 + 0x380;
          return;
        case 0xf:
          vdp_address_increment = uVar12;
          return;
        case 0x10:
          uVar12 = uVar12 >> 4 & 3;
          uVar8 = uVar8 & 3;
          uVar9 = uVar12 | uVar8 << 4;
          if (uVar9 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar9;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar12 + uVar8 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + vdp_plane_b_name_table_base;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar8];
          DAT_023dc8b4 = DAT_023dc8a0 + vdp_plane_a_name_table_base;
          DAT_023dcea6 = (char)uVar8;
          DAT_023dd372._0_1_ = (char)uVar12;
          return;
        case 0x11:
          uVar9 = (uVar8 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar12 >> 7);
          DAT_023ddb04 = (char)uVar9;
          if (uVar12 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar9);
          }
          else {
            DAT_023dcfa8 = (uVar8 & 0x1f) * -2 + 1;
            if (1 < uVar9) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          DAT_023dde94 = (char)(uVar12 >> 7);
          DAT_020b4c10 = (uVar8 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar8 & 0x1f);
          return;
        case 0x13:
          vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar12;
          return;
        case 0x14:
          vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar12 << 8;
          return;
        case 0x15:
          vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar12 << 1;
          return;
        case 0x16:
          vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar12 << 9;
          return;
        case 0x17:
          vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar8 & 0x7f) << 0x11;
          vdp_dma_mode = (byte)(uVar12 >> 6);
        }
        return;
      }
      return;
    }
    vdp_access_code = vdp_access_code & 3 | uVar9 & 0x3c;
    vdp_address = vdp_address & 0x3fff | (uVar8 & 3) << 0xe;
    vdp_control_word_pending = '\0';
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((uVar9 & 0x20) == 0) {
      return;
    }
  }
  uVar12 = vdp_dma_source_address;
  uVar8 = vdp_address_increment;
  uVar9 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar9 = 0xffff;
  }
  vdp_dma_remaining = uVar9;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar9 = vdp_dma_source_address & 0xfffffe;
    puVar6 = (ushort *)get_vdp_dma_backing_pointer(uVar9);
    uVar10 = vdp_address;
    uVar14 = vdp_dma_remaining;
    uVar18 = vdp_scanline;
    uVar11 = vdp_access_code & 0xf;
    uVar17 = vdp_dma_remaining & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[vdp_scanline];
      uVar9 = uVar9 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar14 = (uint)vdp_backdrop_color_index;
      do {
        uVar11 = (uint)*puVar6;
        uVar10 = (vdp_address & 0x7e) >> 1;
        uVar1 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        vdp_address = vdp_address + uVar8;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar10]) {
          (&vdp_cram)[uVar10] = (short)(uVar11 & 0xeee);
          if ((uVar10 != 0) && (uVar18 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar10] = uVar1;
          if (uVar10 == uVar14) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar17 = uVar17 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar14 = vdp_address & 0x7f;
        uVar18 = vdp_address & 0x7e;
        vdp_address = uVar14;
        if (0x4f < uVar14) break;
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar18) = *puVar6;
        puVar6 = puVar6 + 1;
        vdp_address = uVar8 + uVar14;
      } while (uVar17 != 0);
      vdp_dma_length_register = uVar17;
      vdp_dma_remaining = uVar17;
      vdp_dma_source_address = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
      vdp_dma_length_register = uVar17;
      vdp_dma_remaining = uVar17;
      vdp_dma_source_address = uVar9;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar18 = uVar8 & 0xffff;
      uVar9 = uVar9 << 0xf;
      uStack_44 = 0;
      puVar7 = puVar6;
      uVar11 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&vdp_vram + uVar11);
        uVar2 = *puVar7;
        if (uVar2 != uVar1) {
          *(ushort *)(&vdp_vram + uVar11) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar2 != uVar1;
        uVar11 = uVar11 + uVar18 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar17 != 0);
      uVar19 = uVar11;
      if (uVar11 <= uVar10) {
        uVar19 = uVar11 + 0x10000;
      }
      uVar9 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar9;
        return;
      }
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + vdp_sprite_attribute_table_base < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar20)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          if (vdp_plane_a_name_table_base < uVar19) {
            if (DAT_023dc8b4 < uVar19) {
              bVar20 = false;
            }
            else {
              bVar20 = true;
            }
          }
          else {
            bVar20 = false;
          }
        }
        else {
          bVar20 = true;
        }
        if ((uStack_2c < vdp_plane_b_name_table_base) || (DAT_023dc8b8 <= uStack_2c)) {
          if (vdp_plane_b_name_table_base < uVar19) {
            if (DAT_023dc8b8 < uVar19) {
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
        if (bVar20) {
          if ((DAT_023dc8a0 >> 1 <= uVar14) && (DAT_023dc8a4 = 1, !bVar4)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a4 = 1;
            vdp_dma_source_address = uVar9;
            return;
          }
          uVar17 = uStack_2c - vdp_plane_a_name_table_base;
          bVar20 = (int)uVar17 < 0;
          puVar7 = puVar6;
          if (bVar20) {
            puVar7 = (ushort *)((int)puVar6 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar17 = uStack_2c;
          }
          if (bVar20) {
            uVar17 = 0;
          }
          uVar14 = uVar19 - vdp_plane_a_name_table_base;
          if (DAT_023dc8a0 < uVar19 - vdp_plane_a_name_table_base) {
            uVar14 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar7,uVar17,uVar8,uVar14);
          puVar7 = (ushort *)&vdp_address;
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar7 = (ushort *)0x0;
          bVar20 = false;
        }
        if (bVar4) {
          if (DAT_023dc8a0 >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a8 = 1;
            vdp_dma_source_address = uVar9;
            return;
          }
          iVar16 = uStack_2c - vdp_plane_b_name_table_base;
          bVar20 = iVar16 < 0;
          if (bVar20) {
            iVar16 = 0;
            puVar7 = (ushort *)((int)puVar6 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar7 = puVar6;
          }
          uVar17 = uVar19 - vdp_plane_b_name_table_base;
          if (DAT_023dc8a0 < uVar19 - vdp_plane_b_name_table_base) {
            uVar17 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar7,iVar16,uVar8,uVar17);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*transfer_vdp_words_to_ds_window)(puVar6,uStack_2c - vdp_window_name_table_base & 0xffff,uVar8,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar20) {
          uVar8 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar8) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar6);
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
            uVar12 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar6);
              }
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar12 = 0;
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
          }
        }
      }
    }
    else {
      uVar8 = uVar8 & 0xffff;
      puVar7 = puVar6;
      uVar18 = uVar17;
      uVar19 = uStack_2c;
      do {
        uVar1 = *puVar7;
        uVar18 = uVar18 - 1 & 0xffff;
        (&vdp_vram)[uVar19] = (char)(uVar1 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar12 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar19] = (char)uVar1;
        uVar19 = uVar19 + uVar8 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + vdp_sprite_attribute_table_base < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar12 = uVar17;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar17) {
            reset_background_tile_cache_at_capacity(0);
          }
          uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
          puVar7 = puVar6;
          do {
            (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar17 != 0);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar12 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar12) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar7 = puVar6;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar12 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar12) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar7 = puVar6;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar12 = 0;
        }
        if (!bVar20) {
          uVar17 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar8 & 0xffff;
            uVar17 = uVar17 - 1 & 0xffff;
            uVar12 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    vdp_address = uVar19 & 0xffff;
    vdp_dma_length_register = uVar12;
    vdp_dma_remaining = uVar12;
    vdp_dma_source_address = uVar9;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar12 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar14 = uVar12 + uVar9;
    uVar17 = vdp_address_increment & 0xffff;
    uVar18 = vdp_address;
    do {
      uVar10 = uVar12 ^ 1;
      uVar12 = uVar12 + 1 & 0xffff;
      (&vdp_vram)[uVar18 ^ 1] = (&vdp_vram)[uVar10];
      uVar18 = uVar18 + uVar17 & 0xffff;
    } while (uVar12 != (uVar14 & 0xffff));
    uVar12 = vdp_address;
    if (uVar8 == 1) {
      uVar9 = uVar9 >> 1;
      uVar17 = 2;
    }
    do {
      vdp_address = uVar18;
      uVar12 = uVar12 & 0xfffe;
      if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar12 < DAT_023dcea4) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar12)) {
            bVar20 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar20 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar20 = true;
          }
          if ((vdp_window_name_table_base <= uVar12) && (uVar12 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
          }
          if (!bVar20) {
            update_cached_ds_pattern_from_vdp_word(uVar12,*(undefined2 *)(&vdp_vram + uVar12));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar9 = uVar9 - 1 & 0xffff;
      if (uVar9 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar12 = uVar12 + uVar17;
      uVar18 = vdp_address;
    } while( true );
  }
  return;
}


// 0x02017ccc  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_long_02017ccc(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int unaff_r6;
  uint uVar17;
  uint uVar18;
  int unaff_r8;
  uint uVar19;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar8 = read_m68k_bus_long(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = *unaff_r10;
  iVar16 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar16 = unaff_r6;
  }
  uVar9 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar16 = (int)*(short *)(iVar16 + uVar9);
  }
  else {
    iVar16 = *(int *)(iVar16 + uVar9);
  }
  uVar9 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar2 + iVar16;
  uVar2 = (ushort)uVar8;
  if (0xdfffff < (uVar9 & 0xf00000)) {
    puVar5 = (undefined2 *)(unaff_r8 + (uVar9 & 0xffff));
    *puVar5 = (short)(uVar8 >> 0x10);
    puVar5[1] = uVar2;
    return;
  }
  if ((uVar9 & 0xf00000) < 0xc00000) {
    uVar9 = uVar9 & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar9 >> 0x10])(uVar9,uVar8 >> 0x10);
    (*(code *)(&m68k_word_write_handlers)[uVar9 >> 0x10])(uVar9 + 2,uVar8 & 0xffff);
    return;
  }
  bVar13 = (byte)uVar8;
  if ((uVar9 & 0x1c) == 0) {
    write_vdp_data_port_word(uVar8 >> 0x10);
    uVar9 = uVar8 & 0xffff;
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar17 = vdp_address_increment;
    uVar12 = vdp_dma_remaining;
    uVar3 = (undefined1)(uVar9 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar20 = (vdp_address & 1) == 0;
      uVar9 = vdp_address & 0xffff;
      if (bVar20) {
        puVar15 = &vdp_vram + uVar9;
      }
      else {
        puVar15 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar18 = vdp_address_increment & 0xffff;
      if (!bVar20) {
        (&vdp_vram)[(int)puVar15] = bVar13;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar20) {
        (&vdp_vram)[uVar9] = uVar3;
        puVar15[1] = bVar13;
      }
      if (!bVar20) {
        (&vdp_vram)[uVar9] = uVar3;
      }
      uVar10 = uVar9 + uVar18 & 0xffff;
      uVar14 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar14 = uVar14 - 1 & 0xffff;
          (&vdp_vram)[uVar10] = bVar13;
          uVar10 = uVar10 + uVar18 & 0xffff;
        } while (uVar14 != 0);
        uVar9 = vdp_address;
        if (uVar12 == 0xffff && (uVar8 & 0xff) == 0) {
          vdp_address = uVar10;
          clear_and_initialize_renderer_vram();
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
      }
      vdp_address = uVar10;
      uVar9 = uVar9 & 0xfffe;
      if (uVar17 == 1) {
        uVar12 = uVar12 >> 1;
        uVar18 = 2;
      }
      do {
        if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
            if ((uVar9 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar9)) {
              bVar20 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar9 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
              bVar20 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar9) && (uVar9 < DAT_023dc8b8)) {
              (*write_ds_background_tilemap_word)(1,uVar9 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
              bVar20 = true;
            }
            if ((vdp_window_name_table_base <= uVar9) && (uVar9 < DAT_023dc8bc)) {
              (*write_ds_window_tilemap_word)(uVar9 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            }
            if (!bVar20) {
              update_cached_ds_pattern_from_vdp_word(uVar9,*(undefined2 *)(&vdp_vram + uVar9));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar16 = 0x200;
          }
          else {
            iVar16 = 0x280;
          }
          if (iVar16 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar9 = uVar9 + uVar18 & 0xfffe;
      } while( true );
    }
    uVar12 = vdp_access_code & 0xf;
    if (uVar12 == 3) {
      uVar9 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar9] = uVar2 & 0xeee;
      uVar2 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar8 & 0xe) << 1);
      if ((uVar9 != 0) && (vdp_scanline < 0xdf)) {
        bVar13 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar13 == 200) {
          bVar13 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar13 >> 5) * 0x40] = uVar2;
      }
      uVar8 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar9] = uVar2;
      DAT_0208f354 = 1;
      if (uVar9 == uVar8) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar12 == 5) {
      uVar8 = vdp_address & 0x7f;
      if (0x4f < uVar8) {
        vdp_address = uVar8;
        return;
      }
      uVar9 = vdp_address & 0x7e;
      vdp_address = uVar8;
      *(ushort *)((int)&vdp_vsram + uVar9) = uVar2;
    }
    else if (uVar12 == 1) {
      uVar12 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar12) == uVar9) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar12) = uVar2;
      }
      else {
        (&vdp_vram)[uVar12] = uVar3;
        (&vdp_vram_odd_byte_base)[uVar12] = bVar13;
        uVar9 = (uVar8 & 0xffff) >> 8 | (uVar8 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar12) {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (uVar12 < iVar16 + vdp_sprite_attribute_table_base) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar12 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar12)) {
        bVar20 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,uVar9);
        bVar20 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,uVar9);
        bVar20 = true;
      }
      if ((vdp_window_name_table_base <= uVar12) && (uVar12 < DAT_023dc8bc)) {
        (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,uVar9);
      }
      if (!bVar20) {
        update_cached_ds_pattern_from_vdp_word(uVar12,uVar9);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  if (vdp_control_word_pending == '\0') {
    uVar12 = uVar8 >> 2 & 0x3c | uVar8 >> 0x1e;
    uVar9 = (uVar8 & 3) << 0xe | (uVar8 & 0x3fffffff) >> 0x10;
    if ((uVar8 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    vdp_address = uVar9;
    vdp_access_code = uVar12;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((uVar8 >> 2 & 0x20) == 0) {
      return;
    }
  }
  else {
LAB_0200ac58:
    write_vdp_control_port_word(uVar8 >> 0x10);
    uVar9 = (uVar8 & 0xffff) >> 2;
    if (vdp_control_word_pending == '\0') {
      uVar12 = uVar8 & 0xff;
      uVar9 = (uVar8 & 0xffff) >> 8 & 0x1f;
      if ((uVar8 & 0xc000) != 0x8000) {
        vdp_control_word_pending = 1;
        vdp_access_code = vdp_access_code & 0x3c | (uVar8 & 0xffff) >> 0xe;
        vdp_address = vdp_address & 0xc000 | uVar8 & 0x3fff;
        return;
      }
      vdp_access_code = 0;
      iVar16 = 1 - (uint)vdp_mode_5_bit;
      if (1 < vdp_mode_5_bit) {
        iVar16 = 0;
      }
      if (uVar9 < 0xc) {
        iVar16 = 0;
      }
      (&vdp_registers)[uVar9] = bVar13;
      if (iVar16 == 0) {
        switch(uVar9) {
        case 0:
          vdp_h_interrupt_enabled = (byte)(uVar12 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar12 >> 1) ^ 1) & 1;
          return;
        case 1:
          vdp_mode_5_bit = bVar13 & 4;
          DAT_0b00362f = (byte)(uVar12 >> 6) & 1;
          uVar8 = uVar12 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar12 >> 5) & 1;
          vdp_dma_enabled = (byte)(uVar12 >> 4) & 1;
          DAT_023ddb06 = (char)uVar8;
          if (uVar8 == 0) {
            DAT_023dd370 = 0xe0;
            DAT_0b000004 = 0xe0;
          }
          else {
            DAT_023dd370 = 0xf0;
            DAT_0b000004 = 0xf0;
          }
          return;
        case 2:
          vdp_plane_a_name_table_base = (uVar8 & 0x38) * 0x400;
          DAT_023dde8c = &DAT_020acbec + (uVar8 & 0x38) * 0x200;
          if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
            DAT_023dc8a4 = 1;
          }
          ram0x023dd374 = vdp_plane_a_name_table_base;
          DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
          return;
        case 3:
          vdp_window_name_table_base = (uVar8 & 0x3e) * 0x400;
          if (DAT_023ddb05 == '\0') {
            iVar16 = 0x800;
          }
          else {
            iVar16 = 0x1000;
          }
          DAT_023dc8bc = iVar16 + vdp_window_name_table_base;
          return;
        case 4:
          vdp_plane_b_name_table_base = (uVar8 & 7) * 0x2000;
          DAT_023dde90 = &DAT_020acbec + (uVar8 & 7) * 0x1000;
          if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
            DAT_023dc8a8 = 1;
          }
          DAT_023dd378 = vdp_plane_b_name_table_base;
          DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
          return;
        case 5:
          iVar16 = (uVar8 & 0x7f) * 0x200;
          DAT_0209cbe0 = vdp_sprite_attribute_table_base;
          DAT_023dcdac = &vdp_vram + iVar16;
          vdp_sprite_attribute_table_base = iVar16;
          return;
        case 7:
          DAT_0b003640 = uVar8 & 0x3f;
          vdp_backdrop_color_index = (char)(uVar8 & 0x3f);
          return;
        case 10:
          vdp_h_interrupt_reload = (short)uVar12;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar12 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar12 >> 2) & 1;
          DAT_023dcdb0 = bVar13 & 3;
          if ((DAT_023cb610 & 4) == 0) {
            DAT_023dcea8 = record_unscaled_scanline_scroll_and_backdrop;
          }
          else {
            switch(bVar13 & 3) {
            case 0:
              DAT_023dcea8 = (code *)&LAB_0200bbd0;
              return;
            case 1:
              DAT_023dcea8 = (code *)&LAB_0200c0cc;
              return;
            case 2:
              DAT_023dcea8 = (code *)&LAB_0200bf18;
              return;
            case 3:
              DAT_023dcea8 = (code *)&LAB_0200bd6c;
              return;
            }
          }
          return;
        case 0xc:
          uVar9 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar8 & 0x81) != 0;
          if ((uVar9 != (uVar12 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar9)) {
            DAT_020b4bf4 = 0;
          }
          if ((bool)DAT_023ddb05) {
            DAT_023dc8bc = vdp_window_name_table_base + 0x1000;
            DAT_020b4c0c = 0xf000;
            DAT_020b4c0a = 0x50;
            DAT_023ddeb2 = 0x28;
            DAT_023dc8ae = 0x140;
            DAT_023dc8c8 = 0x40;
          }
          else {
            DAT_020b4c0c = 0xf800;
            DAT_023dc8bc = vdp_window_name_table_base + 0x800;
            DAT_020b4c14 = 1;
            DAT_020b4c0a = 0x40;
            DAT_023ddeb2 = 0x20;
            DAT_023dc8ae = 0x100;
            DAT_023dc8c8 = 0x20;
          }
          if (DAT_023ddeb4 == '\0') {
            DAT_023dcfa8 = (uint)(DAT_023dceac <= DAT_023ddb04);
          }
          else {
            DAT_023dcfa8 = 1 - DAT_023ddb04;
            if (1 < DAT_023ddb04) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0xd:
          DAT_023dcea4 = (ushort)((uVar8 << 0x1a) >> 0x10);
          DAT_023dcdaa = DAT_023dcea4 + 0x380;
          return;
        case 0xf:
          vdp_address_increment = uVar12;
          return;
        case 0x10:
          uVar12 = uVar12 >> 4 & 3;
          uVar8 = uVar8 & 3;
          uVar9 = uVar12 | uVar8 << 4;
          if (uVar9 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar9;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar12 + uVar8 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + vdp_plane_b_name_table_base;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar8];
          DAT_023dc8b4 = DAT_023dc8a0 + vdp_plane_a_name_table_base;
          DAT_023dcea6 = (char)uVar8;
          DAT_023dd372._0_1_ = (char)uVar12;
          return;
        case 0x11:
          uVar9 = (uVar8 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar12 >> 7);
          DAT_023ddb04 = (char)uVar9;
          if (uVar12 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar9);
          }
          else {
            DAT_023dcfa8 = (uVar8 & 0x1f) * -2 + 1;
            if (1 < uVar9) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          DAT_023dde94 = (char)(uVar12 >> 7);
          DAT_020b4c10 = (uVar8 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar8 & 0x1f);
          return;
        case 0x13:
          vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar12;
          return;
        case 0x14:
          vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar12 << 8;
          return;
        case 0x15:
          vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar12 << 1;
          return;
        case 0x16:
          vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar12 << 9;
          return;
        case 0x17:
          vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar8 & 0x7f) << 0x11;
          vdp_dma_mode = (byte)(uVar12 >> 6);
        }
        return;
      }
      return;
    }
    vdp_access_code = vdp_access_code & 3 | uVar9 & 0x3c;
    vdp_address = vdp_address & 0x3fff | (uVar8 & 3) << 0xe;
    vdp_control_word_pending = '\0';
    if (vdp_dma_enabled == '\0') {
      return;
    }
    if ((uVar9 & 0x20) == 0) {
      return;
    }
  }
  uVar12 = vdp_dma_source_address;
  uVar8 = vdp_address_increment;
  uVar9 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar9 = 0xffff;
  }
  vdp_dma_remaining = uVar9;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar9 = vdp_dma_source_address & 0xfffffe;
    puVar6 = (ushort *)get_vdp_dma_backing_pointer(uVar9);
    uVar10 = vdp_address;
    uVar14 = vdp_dma_remaining;
    uVar18 = vdp_scanline;
    uVar11 = vdp_access_code & 0xf;
    uVar17 = vdp_dma_remaining & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[vdp_scanline];
      uVar9 = uVar9 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar14 = (uint)vdp_backdrop_color_index;
      do {
        uVar11 = (uint)*puVar6;
        uVar10 = (vdp_address & 0x7e) >> 1;
        uVar2 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        vdp_address = vdp_address + uVar8;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar10]) {
          (&vdp_cram)[uVar10] = (short)(uVar11 & 0xeee);
          if ((uVar10 != 0) && (uVar18 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar13 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar10] = uVar2;
          if (uVar10 == uVar14) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar17 = uVar17 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar14 = vdp_address & 0x7f;
        uVar18 = vdp_address & 0x7e;
        vdp_address = uVar14;
        if (0x4f < uVar14) break;
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar18) = *puVar6;
        puVar6 = puVar6 + 1;
        vdp_address = uVar8 + uVar14;
      } while (uVar17 != 0);
      vdp_dma_length_register = uVar17;
      vdp_dma_remaining = uVar17;
      vdp_dma_source_address = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
      vdp_dma_length_register = uVar17;
      vdp_dma_remaining = uVar17;
      vdp_dma_source_address = uVar9;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar18 = uVar8 & 0xffff;
      uVar9 = uVar9 << 0xf;
      uStack_44 = 0;
      puVar7 = puVar6;
      uVar11 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&vdp_vram + uVar11);
        uVar1 = *puVar7;
        if (uVar1 != uVar2) {
          *(ushort *)(&vdp_vram + uVar11) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar1 != uVar2;
        uVar11 = uVar11 + uVar18 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar17 != 0);
      uVar19 = uVar11;
      if (uVar11 <= uVar10) {
        uVar19 = uVar11 + 0x10000;
      }
      uVar9 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar9;
        return;
      }
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + vdp_sprite_attribute_table_base < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar20)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          if (vdp_plane_a_name_table_base < uVar19) {
            if (DAT_023dc8b4 < uVar19) {
              bVar20 = false;
            }
            else {
              bVar20 = true;
            }
          }
          else {
            bVar20 = false;
          }
        }
        else {
          bVar20 = true;
        }
        if ((uStack_2c < vdp_plane_b_name_table_base) || (DAT_023dc8b8 <= uStack_2c)) {
          if (vdp_plane_b_name_table_base < uVar19) {
            if (DAT_023dc8b8 < uVar19) {
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
        if (bVar20) {
          if ((DAT_023dc8a0 >> 1 <= uVar14) && (DAT_023dc8a4 = 1, !bVar4)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a4 = 1;
            vdp_dma_source_address = uVar9;
            return;
          }
          uVar17 = uStack_2c - vdp_plane_a_name_table_base;
          bVar20 = (int)uVar17 < 0;
          puVar7 = puVar6;
          if (bVar20) {
            puVar7 = (ushort *)((int)puVar6 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar17 = uStack_2c;
          }
          if (bVar20) {
            uVar17 = 0;
          }
          uVar14 = uVar19 - vdp_plane_a_name_table_base;
          if (DAT_023dc8a0 < uVar19 - vdp_plane_a_name_table_base) {
            uVar14 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar7,uVar17,uVar8,uVar14);
          puVar7 = (ushort *)&vdp_address;
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar7 = (ushort *)0x0;
          bVar20 = false;
        }
        if (bVar4) {
          if (DAT_023dc8a0 >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a8 = 1;
            vdp_dma_source_address = uVar9;
            return;
          }
          iVar16 = uStack_2c - vdp_plane_b_name_table_base;
          bVar20 = iVar16 < 0;
          if (bVar20) {
            iVar16 = 0;
            puVar7 = (ushort *)((int)puVar6 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar7 = puVar6;
          }
          uVar17 = uVar19 - vdp_plane_b_name_table_base;
          if (DAT_023dc8a0 < uVar19 - vdp_plane_b_name_table_base) {
            uVar17 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar7,iVar16,uVar8,uVar17);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*transfer_vdp_words_to_ds_window)(puVar6,uStack_2c - vdp_window_name_table_base & 0xffff,uVar8,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar20) {
          uVar8 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar8) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar6);
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
            uVar12 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar6);
              }
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar12 = 0;
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
          }
        }
      }
    }
    else {
      uVar8 = uVar8 & 0xffff;
      puVar7 = puVar6;
      uVar18 = uVar17;
      uVar19 = uStack_2c;
      do {
        uVar2 = *puVar7;
        uVar18 = uVar18 - 1 & 0xffff;
        (&vdp_vram)[uVar19] = (char)(uVar2 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar12 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar19] = (char)uVar2;
        uVar19 = uVar19 + uVar8 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + vdp_sprite_attribute_table_base < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar12 = uVar17;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar17) {
            reset_background_tile_cache_at_capacity(0);
          }
          uStack_2c = uStack_2c - vdp_plane_a_name_table_base;
          puVar7 = puVar6;
          do {
            (*write_ds_background_tilemap_word)(0,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar17 != 0);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar12 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar12) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar7 = puVar6;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar12 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar12) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar7 = puVar6;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar12 = 0;
        }
        if (!bVar20) {
          uVar17 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar8 & 0xffff;
            uVar17 = uVar17 - 1 & 0xffff;
            uVar12 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    vdp_address = uVar19 & 0xffff;
    vdp_dma_length_register = uVar12;
    vdp_dma_remaining = uVar12;
    vdp_dma_source_address = uVar9;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar12 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar14 = uVar12 + uVar9;
    uVar17 = vdp_address_increment & 0xffff;
    uVar18 = vdp_address;
    do {
      uVar10 = uVar12 ^ 1;
      uVar12 = uVar12 + 1 & 0xffff;
      (&vdp_vram)[uVar18 ^ 1] = (&vdp_vram)[uVar10];
      uVar18 = uVar18 + uVar17 & 0xffff;
    } while (uVar12 != (uVar14 & 0xffff));
    uVar12 = vdp_address;
    if (uVar8 == 1) {
      uVar9 = uVar9 >> 1;
      uVar17 = 2;
    }
    do {
      vdp_address = uVar18;
      uVar12 = uVar12 & 0xfffe;
      if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar12 < DAT_023dcea4) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar12)) {
            bVar20 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar20 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar20 = true;
          }
          if ((vdp_window_name_table_base <= uVar12) && (uVar12 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
          }
          if (!bVar20) {
            update_cached_ds_pattern_from_vdp_word(uVar12,*(undefined2 *)(&vdp_vram + uVar12));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar9 = uVar9 - 1 & 0xffff;
      if (uVar9 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar12 = uVar12 + uVar17;
      uVar18 = vdp_address;
    } while( true );
  }
  return;
}

