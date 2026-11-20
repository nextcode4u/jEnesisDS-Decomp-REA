/* ARM9 to indirect — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02019614  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_word_02019614(void)

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
  uVar8 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
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
          if ((uVar16 < DAT_023dcea4) || (DAT_023dcdaa <= uVar16)) {
            if ((uVar16 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar16)) {
              bVar19 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar16 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
              bVar19 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar16) && (uVar16 < DAT_023dc8b8)) {
              (*write_ds_background_tilemap_word)(1,uVar16 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
              bVar19 = true;
            }
            if ((vdp_window_name_table_base <= uVar16) && (uVar16 < DAT_023dc8bc)) {
              (*write_ds_window_tilemap_word)(uVar16 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar16));
            }
            if (!bVar19) {
              update_cached_ds_pattern_from_vdp_word(uVar16,*(undefined2 *)(&vdp_vram + uVar16));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
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
        (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
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
        if (DAT_023ddb05 == '\0') {
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
      if ((uVar12 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar12)) {
        bVar19 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,uVar16);
        bVar19 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,uVar16);
        bVar19 = true;
      }
      if ((vdp_window_name_table_base <= uVar12) && (uVar12 < DAT_023dc8bc)) {
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
        DAT_0b00362f = (byte)(uVar16 >> 6) & 1;
        uVar12 = uVar16 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar16 >> 5) & 1;
        vdp_dma_enabled = (byte)(uVar16 >> 4) & 1;
        DAT_023ddb06 = (char)uVar12;
        if (uVar12 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        vdp_plane_a_name_table_base = (uVar7 & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (uVar7 & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = vdp_plane_a_name_table_base;
        DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
        return;
      case 3:
        vdp_window_name_table_base = (uVar7 & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x800;
        }
        else {
          iVar10 = 0x1000;
        }
        DAT_023dc8bc = iVar10 + vdp_window_name_table_base;
        return;
      case 4:
        vdp_plane_b_name_table_base = (uVar7 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (uVar7 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = vdp_plane_b_name_table_base;
        DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
        return;
      case 5:
        iVar10 = (uVar7 & 0x7f) * 0x200;
        DAT_0209cbe0 = vdp_sprite_attribute_table_base;
        DAT_023dcdac = &vdp_vram + iVar10;
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
        DAT_023dcfac = (byte)(uVar16 >> 2) & 1;
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
        uVar12 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar7 & 0x81) != 0;
        if ((uVar12 != (uVar16 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar12)) {
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
        DAT_023dcea4 = (ushort)((uVar7 << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        vdp_address_increment = uVar16;
        return;
      case 0x10:
        uVar16 = uVar16 >> 4 & 3;
        uVar7 = uVar7 & 3;
        uVar12 = uVar16 | uVar7 << 4;
        if (uVar12 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar12;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar16 + uVar7 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + vdp_plane_b_name_table_base;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
        DAT_023dc8b4 = DAT_023dc8a0 + vdp_plane_a_name_table_base;
        DAT_023dcea6 = (char)uVar7;
        DAT_023dd372._0_1_ = (char)uVar16;
        return;
      case 0x11:
        uVar12 = (uVar7 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar16 >> 7);
        DAT_023ddb04 = (char)uVar12;
        if (uVar16 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar12);
        }
        else {
          DAT_023dcfa8 = (uVar7 & 0x1f) * -2 + 1;
          if (1 < uVar12) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar16 >> 7);
        DAT_020b4c10 = (uVar7 & 0x1f) << 3;
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
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
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
        (&DAT_020acbec)[uVar11 >> 1] = uVar1 != uVar2;
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
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar19 = iVar10 + vdp_sprite_attribute_table_base < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar19)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          if (vdp_plane_a_name_table_base < uVar18) {
            if (DAT_023dc8b4 < uVar18) {
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
        if ((uStack_2c < vdp_plane_b_name_table_base) || (DAT_023dc8b8 <= uStack_2c)) {
          if (vdp_plane_b_name_table_base < uVar18) {
            if (DAT_023dc8b8 < uVar18) {
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
          if ((DAT_023dc8a0 >> 1 <= uVar14) && (DAT_023dc8a4 = 1, !bVar4)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a4 = 1;
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
          if (DAT_023dc8a0 < uVar18 - vdp_plane_a_name_table_base) {
            uVar14 = DAT_023dc8a0;
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
          if (DAT_023dc8a0 >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a8 = 1;
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
          if (DAT_023dc8a0 < uVar18 - vdp_plane_b_name_table_base) {
            uVar7 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar6,iVar10,uVar12,uVar7);
          bVar19 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
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
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
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
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar19 = iVar10 + vdp_sprite_attribute_table_base < uVar18;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar7;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar7) {
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
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar17 = vdp_dma_remaining & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar17) {
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
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar17 = vdp_dma_remaining & 0xffff;
          if (DAT_023ddb05 == '\0') {
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
        if ((uVar7 < DAT_023dcea4) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar7)) {
            bVar19 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar7 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar19 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar7) && (uVar7 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar7 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar19 = true;
          }
          if ((vdp_window_name_table_base <= uVar7) && (uVar7 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar7 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
          }
          if (!bVar19) {
            update_cached_ds_pattern_from_vdp_word(uVar7,*(undefined2 *)(&vdp_vram + uVar7));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
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


// 0x0201975c  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_word_0201975c(void)

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
  uint *puVar13;
  byte bVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int unaff_r6;
  int unaff_r8;
  uint uVar19;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar20;
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
  uVar17 = uVar7 & 0xffff;
  puVar13 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar8 = *puVar13;
  *puVar13 = uVar8 + 2;
  uVar18 = vdp_dma_source_address;
  uVar12 = vdp_address_increment;
  uVar2 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar8 & 0xffff)) = uVar2;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar14 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar18 = vdp_address_increment;
    uVar12 = vdp_dma_remaining;
    uVar3 = (undefined1)(uVar17 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar20 = (vdp_address & 1) == 0;
      uVar17 = vdp_address & 0xffff;
      if (bVar20) {
        puVar16 = &vdp_vram + uVar17;
      }
      else {
        puVar16 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar8 = vdp_address_increment & 0xffff;
      if (!bVar20) {
        (&vdp_vram)[(int)puVar16] = bVar14;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar20) {
        (&vdp_vram)[uVar17] = uVar3;
        puVar16[1] = bVar14;
      }
      if (!bVar20) {
        (&vdp_vram)[uVar17] = uVar3;
      }
      uVar9 = uVar17 + uVar8 & 0xffff;
      uVar15 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar15 = uVar15 - 1 & 0xffff;
          (&vdp_vram)[uVar9] = bVar14;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar15 != 0);
        uVar17 = vdp_address;
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
      uVar17 = uVar17 & 0xfffe;
      if (uVar18 == 1) {
        uVar12 = uVar12 >> 1;
        uVar8 = 2;
      }
      do {
        if (uVar17 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar17 < DAT_023dcea4) || (DAT_023dcdaa <= uVar17)) {
            if ((uVar17 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar17)) {
              bVar20 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar17 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar17));
              bVar20 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar17) && (uVar17 < DAT_023dc8b8)) {
              (*write_ds_background_tilemap_word)(1,uVar17 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar17));
              bVar20 = true;
            }
            if ((vdp_window_name_table_base <= uVar17) && (uVar17 < DAT_023dc8bc)) {
              (*write_ds_window_tilemap_word)(uVar17 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar17));
            }
            if (!bVar20) {
              update_cached_ds_pattern_from_vdp_word(uVar17,*(undefined2 *)(&vdp_vram + uVar17));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar10 = 0x200;
          }
          else {
            iVar10 = 0x280;
          }
          if (iVar10 + vdp_sprite_attribute_table_base <= uVar17) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar17 = uVar17 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar12 = vdp_access_code & 0xf;
    if (uVar12 == 3) {
      uVar12 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar12] = uVar2 & 0xeee;
      uVar2 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar12 != 0) && (vdp_scanline < 0xdf)) {
        bVar14 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar14 == 200) {
          bVar14 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar12 + (uint)(bVar14 >> 5) * 0x40] = uVar2;
      }
      uVar17 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar12] = uVar2;
      DAT_0208f354 = 1;
      if (uVar12 == uVar17) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar12 == 5) {
      uVar12 = vdp_address & 0x7f;
      if (0x4f < uVar12) {
        vdp_address = uVar12;
        return;
      }
      uVar17 = vdp_address & 0x7e;
      vdp_address = uVar12;
      *(ushort *)((int)&vdp_vsram + uVar17) = uVar2;
    }
    else if (uVar12 == 1) {
      uVar12 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar12) == uVar17) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar12) = uVar2;
      }
      else {
        (&vdp_vram)[uVar12] = uVar3;
        (&vdp_vram_odd_byte_base)[uVar12] = bVar14;
        uVar17 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar12) {
        if (DAT_023ddb05 == '\0') {
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
      if ((uVar12 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar12)) {
        bVar20 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,uVar17);
        bVar20 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,uVar17);
        bVar20 = true;
      }
      if ((vdp_window_name_table_base <= uVar12) && (uVar12 < DAT_023dc8bc)) {
        (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,uVar17);
      }
      if (!bVar20) {
        update_cached_ds_pattern_from_vdp_word(uVar12,uVar17);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  uVar17 = (uVar7 & 0xffff) >> 2;
  if (vdp_control_word_pending == '\0') {
    uVar17 = uVar7 & 0xff;
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
    (&vdp_registers)[uVar12] = bVar14;
    if (iVar10 == 0) {
      switch(uVar12) {
      case 0:
        vdp_h_interrupt_enabled = (byte)(uVar17 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar17 >> 1) ^ 1) & 1;
        return;
      case 1:
        vdp_mode_5_bit = bVar14 & 4;
        DAT_0b00362f = (byte)(uVar17 >> 6) & 1;
        uVar12 = uVar17 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar17 >> 5) & 1;
        vdp_dma_enabled = (byte)(uVar17 >> 4) & 1;
        DAT_023ddb06 = (char)uVar12;
        if (uVar12 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        vdp_plane_a_name_table_base = (uVar7 & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (uVar7 & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = vdp_plane_a_name_table_base;
        DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
        return;
      case 3:
        vdp_window_name_table_base = (uVar7 & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x800;
        }
        else {
          iVar10 = 0x1000;
        }
        DAT_023dc8bc = iVar10 + vdp_window_name_table_base;
        return;
      case 4:
        vdp_plane_b_name_table_base = (uVar7 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (uVar7 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = vdp_plane_b_name_table_base;
        DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
        return;
      case 5:
        iVar10 = (uVar7 & 0x7f) * 0x200;
        DAT_0209cbe0 = vdp_sprite_attribute_table_base;
        DAT_023dcdac = &vdp_vram + iVar10;
        vdp_sprite_attribute_table_base = iVar10;
        return;
      case 7:
        DAT_0b003640 = uVar7 & 0x3f;
        vdp_backdrop_color_index = (char)(uVar7 & 0x3f);
        return;
      case 10:
        vdp_h_interrupt_reload = (short)uVar17;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar17 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar17 >> 2) & 1;
        DAT_023dcdb0 = bVar14 & 3;
        if ((DAT_023cb610 & 4) == 0) {
          DAT_023dcea8 = record_unscaled_scanline_scroll_and_backdrop;
        }
        else {
          switch(bVar14 & 3) {
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
        uVar12 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar7 & 0x81) != 0;
        if ((uVar12 != (uVar17 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar12)) {
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
        DAT_023dcea4 = (ushort)((uVar7 << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        vdp_address_increment = uVar17;
        return;
      case 0x10:
        uVar17 = uVar17 >> 4 & 3;
        uVar7 = uVar7 & 3;
        uVar12 = uVar17 | uVar7 << 4;
        if (uVar12 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar12;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar17 + uVar7 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + vdp_plane_b_name_table_base;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
        DAT_023dc8b4 = DAT_023dc8a0 + vdp_plane_a_name_table_base;
        DAT_023dcea6 = (char)uVar7;
        DAT_023dd372._0_1_ = (char)uVar17;
        return;
      case 0x11:
        uVar12 = (uVar7 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar17 >> 7);
        DAT_023ddb04 = (char)uVar12;
        if (uVar17 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar12);
        }
        else {
          DAT_023dcfa8 = (uVar7 & 0x1f) * -2 + 1;
          if (1 < uVar12) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar17 >> 7);
        DAT_020b4c10 = (uVar7 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar7 & 0x1f);
        return;
      case 0x13:
        vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar17;
        return;
      case 0x14:
        vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar17 << 8;
        return;
      case 0x15:
        vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar17 << 1;
        return;
      case 0x16:
        vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar17 << 9;
        return;
      case 0x17:
        vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar7 & 0x7f) << 0x11;
        vdp_dma_mode = (byte)(uVar17 >> 6);
      }
      return;
    }
    return;
  }
  vdp_access_code = vdp_access_code & 3 | uVar17 & 0x3c;
  uVar7 = vdp_address & 0x3fff | (uVar7 & 3) << 0xe;
  vdp_control_word_pending = 0;
  vdp_address = uVar7;
  if (vdp_dma_enabled == '\0') {
    return;
  }
  if ((uVar17 & 0x20) == 0) {
    return;
  }
  uVar17 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar17 = 0xffff;
  }
  vdp_dma_remaining = uVar17;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar17 = vdp_dma_source_address & 0xfffffe;
    puVar5 = (ushort *)get_vdp_dma_backing_pointer(uVar17);
    uVar9 = vdp_address;
    uVar15 = vdp_dma_remaining;
    uVar8 = vdp_scanline;
    uVar11 = vdp_access_code & 0xf;
    uVar7 = vdp_dma_remaining & 0xffff;
    if (uVar11 == 3) {
      bVar14 = (&DAT_0208ebb0)[vdp_scanline];
      uVar17 = uVar17 << 0xf;
      if (bVar14 == 200) {
        bVar14 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar15 = (uint)vdp_backdrop_color_index;
      do {
        uVar11 = (uint)*puVar5;
        uVar9 = (vdp_address & 0x7e) >> 1;
        uVar2 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar17 = uVar17 + 0x8000;
        vdp_address = vdp_address + uVar12;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar9]) {
          (&vdp_cram)[uVar9] = (short)(uVar11 & 0xeee);
          if ((uVar9 != 0) && (uVar8 < 0xdf)) {
            (&DAT_023dc8ca)[uVar9 + (uint)(bVar14 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar9] = uVar2;
          if (uVar9 == uVar15) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar18 & 0xfe0000 | uVar17 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar17 = uVar17 << 0xf;
      do {
        uVar15 = vdp_address & 0x7f;
        uVar8 = vdp_address & 0x7e;
        vdp_address = uVar15;
        if (0x4f < uVar15) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar17 = uVar17 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        vdp_address = uVar12 + uVar15;
      } while (uVar7 != 0);
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar18 & 0xfe0000 | uVar17 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar17;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar8 = uVar12 & 0xffff;
      uVar17 = uVar17 << 0xf;
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
        uVar17 = uVar17 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar1 != uVar2;
        uVar11 = uVar11 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar19 = uVar11;
      if (uVar11 <= uVar9) {
        uVar19 = uVar11 + 0x10000;
      }
      uVar17 = uVar18 & 0xfe0000 | uVar17 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar17;
        return;
      }
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar20 = iVar10 + vdp_sprite_attribute_table_base < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar18 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar20)) {
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
          if ((DAT_023dc8a0 >> 1 <= uVar15) && (DAT_023dc8a4 = 1, !bVar4)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a4 = 1;
            vdp_dma_source_address = uVar17;
            return;
          }
          uVar7 = uStack_2c - vdp_plane_a_name_table_base;
          bVar20 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar20) {
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar20) {
            uVar7 = 0;
          }
          uVar15 = uVar19 - vdp_plane_a_name_table_base;
          if (DAT_023dc8a0 < uVar19 - vdp_plane_a_name_table_base) {
            uVar15 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar6,uVar7,uVar12,uVar15);
          puVar6 = (ushort *)&vdp_address;
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar6 = (ushort *)0x0;
          bVar20 = false;
        }
        if (bVar4) {
          if (DAT_023dc8a0 >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a8 = 1;
            vdp_dma_source_address = uVar17;
            return;
          }
          iVar10 = uStack_2c - vdp_plane_b_name_table_base;
          bVar20 = iVar10 < 0;
          if (bVar20) {
            iVar10 = 0;
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar6 = puVar5;
          }
          uVar7 = uVar19 - vdp_plane_b_name_table_base;
          if (DAT_023dc8a0 < uVar19 - vdp_plane_b_name_table_base) {
            uVar7 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar6,iVar10,uVar12,uVar7);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*transfer_vdp_words_to_ds_window)(puVar5,uStack_2c - vdp_window_name_table_base & 0xffff,uVar12,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar20) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar12) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar12 = uVar12 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar12 != 0);
            uVar18 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar12 = uVar12 - 1 & 0xffff;
              uVar18 = 0;
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
      uVar19 = uStack_2c;
      do {
        uVar2 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&vdp_vram)[uVar19] = (char)(uVar2 >> 8);
        uVar17 = uVar17 + 2 & 0x1ffff | uVar18 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar19] = (char)uVar2;
        uVar19 = uVar19 + uVar12 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar20 = iVar10 + vdp_sprite_attribute_table_base < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar18 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar18 = uVar7;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar7) {
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
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar18 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar18 = vdp_dma_remaining & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar18) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar18 != 0);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar18 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar18 = vdp_dma_remaining & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar18) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar18 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar18 = 0;
        }
        if (!bVar20) {
          uVar7 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar12 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar18 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    vdp_address = uVar19 & 0xffff;
    vdp_dma_length_register = uVar18;
    vdp_dma_remaining = uVar18;
    vdp_dma_source_address = uVar17;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar18 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar15 = uVar18 + uVar17;
    uVar8 = vdp_address_increment & 0xffff;
    do {
      uVar9 = uVar18 ^ 1;
      uVar18 = uVar18 + 1 & 0xffff;
      (&vdp_vram)[vdp_address ^ 1] = (&vdp_vram)[uVar9];
      vdp_address = vdp_address + uVar8 & 0xffff;
    } while (uVar18 != (uVar15 & 0xffff));
    if (uVar12 == 1) {
      uVar17 = uVar17 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar7 < DAT_023dcea4) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar7)) {
            bVar20 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar7 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar20 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar7) && (uVar7 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar7 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar20 = true;
          }
          if ((vdp_window_name_table_base <= uVar7) && (uVar7 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar7 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
          }
          if (!bVar20) {
            update_cached_ds_pattern_from_vdp_word(uVar7,*(undefined2 *)(&vdp_vram + uVar7));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar17 = uVar17 - 1 & 0xffff;
      if (uVar17 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}


// 0x020198bc  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_word_020198bc(void)

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
  uint *puVar13;
  byte bVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int unaff_r6;
  int unaff_r8;
  uint uVar19;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar20;
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
  uVar17 = uVar7 & 0xffff;
  puVar13 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar8 = *puVar13 - 2;
  *puVar13 = uVar8;
  uVar18 = vdp_dma_source_address;
  uVar12 = vdp_address_increment;
  uVar2 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar8 & 0xffff)) = uVar2;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar14 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
       ((vdp_access_code & 0x20) != 0)) {
      execute_vdp_dma_command();
    }
    uVar18 = vdp_address_increment;
    uVar12 = vdp_dma_remaining;
    uVar3 = (undefined1)(uVar17 >> 8);
    if (vdp_dma_fill_pending != '\0') {
      bVar20 = (vdp_address & 1) == 0;
      uVar17 = vdp_address & 0xffff;
      if (bVar20) {
        puVar16 = &vdp_vram + uVar17;
      }
      else {
        puVar16 = (undefined1 *)(vdp_address & 0xfffe);
      }
      uVar8 = vdp_address_increment & 0xffff;
      if (!bVar20) {
        (&vdp_vram)[(int)puVar16] = bVar14;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar20) {
        (&vdp_vram)[uVar17] = uVar3;
        puVar16[1] = bVar14;
      }
      if (!bVar20) {
        (&vdp_vram)[uVar17] = uVar3;
      }
      uVar9 = uVar17 + uVar8 & 0xffff;
      uVar15 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar15 = uVar15 - 1 & 0xffff;
          (&vdp_vram)[uVar9] = bVar14;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar15 != 0);
        uVar17 = vdp_address;
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
      uVar17 = uVar17 & 0xfffe;
      if (uVar18 == 1) {
        uVar12 = uVar12 >> 1;
        uVar8 = 2;
      }
      do {
        if (uVar17 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
          if ((uVar17 < DAT_023dcea4) || (DAT_023dcdaa <= uVar17)) {
            if ((uVar17 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar17)) {
              bVar20 = false;
            }
            else {
              (*write_ds_background_tilemap_word)(0,uVar17 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar17));
              bVar20 = true;
            }
            if ((vdp_plane_b_name_table_base <= uVar17) && (uVar17 < DAT_023dc8b8)) {
              (*write_ds_background_tilemap_word)(1,uVar17 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar17));
              bVar20 = true;
            }
            if ((vdp_window_name_table_base <= uVar17) && (uVar17 < DAT_023dc8bc)) {
              (*write_ds_window_tilemap_word)(uVar17 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar17));
            }
            if (!bVar20) {
              update_cached_ds_pattern_from_vdp_word(uVar17,*(undefined2 *)(&vdp_vram + uVar17));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar10 = 0x200;
          }
          else {
            iVar10 = 0x280;
          }
          if (iVar10 + vdp_sprite_attribute_table_base <= uVar17) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          vdp_dma_fill_pending = 0;
          vdp_dma_length_register = 0;
          vdp_dma_remaining = 0;
          return;
        }
        uVar17 = uVar17 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar12 = vdp_access_code & 0xf;
    if (uVar12 == 3) {
      uVar12 = (vdp_address & 0x7e) >> 1;
      (&vdp_cram)[uVar12] = uVar2 & 0xeee;
      uVar2 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar12 != 0) && (vdp_scanline < 0xdf)) {
        bVar14 = (&DAT_0208ebb0)[vdp_scanline];
        if (bVar14 == 200) {
          bVar14 = (&DAT_0208ebaf)[vdp_scanline];
        }
        (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar12 + (uint)(bVar14 >> 5) * 0x40] = uVar2;
      }
      uVar17 = (uint)vdp_backdrop_color_index;
      (&ds_converted_vdp_palette)[uVar12] = uVar2;
      DAT_0208f354 = 1;
      if (uVar12 == uVar17) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar12 == 5) {
      uVar12 = vdp_address & 0x7f;
      if (0x4f < uVar12) {
        vdp_address = uVar12;
        return;
      }
      uVar17 = vdp_address & 0x7e;
      vdp_address = uVar12;
      *(ushort *)((int)&vdp_vsram + uVar17) = uVar2;
    }
    else if (uVar12 == 1) {
      uVar12 = vdp_address & 0xfffe;
      if ((vdp_address & 1) == 0) {
        if (*(ushort *)(&vdp_vram + uVar12) == uVar17) goto LAB_0200ae88;
        *(ushort *)(&vdp_vram + uVar12) = uVar2;
      }
      else {
        (&vdp_vram)[uVar12] = uVar3;
        (&vdp_vram_odd_byte_base)[uVar12] = bVar14;
        uVar17 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (vdp_sprite_attribute_table_base <= uVar12) {
        if (DAT_023ddb05 == '\0') {
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
      if ((uVar12 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar12)) {
        bVar20 = false;
      }
      else {
        (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,uVar17);
        bVar20 = true;
      }
      if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,uVar17);
        bVar20 = true;
      }
      if ((vdp_window_name_table_base <= uVar12) && (uVar12 < DAT_023dc8bc)) {
        (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,uVar17);
      }
      if (!bVar20) {
        update_cached_ds_pattern_from_vdp_word(uVar12,uVar17);
      }
    }
LAB_0200ae88:
    vdp_address = vdp_address + vdp_address_increment;
    return;
  }
  uVar17 = (uVar7 & 0xffff) >> 2;
  if (vdp_control_word_pending == '\0') {
    uVar17 = uVar7 & 0xff;
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
    (&vdp_registers)[uVar12] = bVar14;
    if (iVar10 == 0) {
      switch(uVar12) {
      case 0:
        vdp_h_interrupt_enabled = (byte)(uVar17 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar17 >> 1) ^ 1) & 1;
        return;
      case 1:
        vdp_mode_5_bit = bVar14 & 4;
        DAT_0b00362f = (byte)(uVar17 >> 6) & 1;
        uVar12 = uVar17 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar17 >> 5) & 1;
        vdp_dma_enabled = (byte)(uVar17 >> 4) & 1;
        DAT_023ddb06 = (char)uVar12;
        if (uVar12 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        vdp_plane_a_name_table_base = (uVar7 & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (uVar7 & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = vdp_plane_a_name_table_base;
        DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
        return;
      case 3:
        vdp_window_name_table_base = (uVar7 & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x800;
        }
        else {
          iVar10 = 0x1000;
        }
        DAT_023dc8bc = iVar10 + vdp_window_name_table_base;
        return;
      case 4:
        vdp_plane_b_name_table_base = (uVar7 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (uVar7 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = vdp_plane_b_name_table_base;
        DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
        return;
      case 5:
        iVar10 = (uVar7 & 0x7f) * 0x200;
        DAT_0209cbe0 = vdp_sprite_attribute_table_base;
        DAT_023dcdac = &vdp_vram + iVar10;
        vdp_sprite_attribute_table_base = iVar10;
        return;
      case 7:
        DAT_0b003640 = uVar7 & 0x3f;
        vdp_backdrop_color_index = (char)(uVar7 & 0x3f);
        return;
      case 10:
        vdp_h_interrupt_reload = (short)uVar17;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar17 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar17 >> 2) & 1;
        DAT_023dcdb0 = bVar14 & 3;
        if ((DAT_023cb610 & 4) == 0) {
          DAT_023dcea8 = record_unscaled_scanline_scroll_and_backdrop;
        }
        else {
          switch(bVar14 & 3) {
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
        uVar12 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar7 & 0x81) != 0;
        if ((uVar12 != (uVar17 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar12)) {
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
        DAT_023dcea4 = (ushort)((uVar7 << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        vdp_address_increment = uVar17;
        return;
      case 0x10:
        uVar17 = uVar17 >> 4 & 3;
        uVar7 = uVar7 & 3;
        uVar12 = uVar17 | uVar7 << 4;
        if (uVar12 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar12;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar17 + uVar7 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + vdp_plane_b_name_table_base;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
        DAT_023dc8b4 = DAT_023dc8a0 + vdp_plane_a_name_table_base;
        DAT_023dcea6 = (char)uVar7;
        DAT_023dd372._0_1_ = (char)uVar17;
        return;
      case 0x11:
        uVar12 = (uVar7 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar17 >> 7);
        DAT_023ddb04 = (char)uVar12;
        if (uVar17 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar12);
        }
        else {
          DAT_023dcfa8 = (uVar7 & 0x1f) * -2 + 1;
          if (1 < uVar12) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar17 >> 7);
        DAT_020b4c10 = (uVar7 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar7 & 0x1f);
        return;
      case 0x13:
        vdp_dma_length_register = vdp_dma_length_register & 0xff00 | uVar17;
        return;
      case 0x14:
        vdp_dma_length_register = vdp_dma_length_register & 0xff | uVar17 << 8;
        return;
      case 0x15:
        vdp_dma_source_address = vdp_dma_source_address & 0xfffe00 | uVar17 << 1;
        return;
      case 0x16:
        vdp_dma_source_address = vdp_dma_source_address & 0xfe01ff | uVar17 << 9;
        return;
      case 0x17:
        vdp_dma_source_address = vdp_dma_source_address & 0x1ffff | (uVar7 & 0x7f) << 0x11;
        vdp_dma_mode = (byte)(uVar17 >> 6);
      }
      return;
    }
    return;
  }
  vdp_access_code = vdp_access_code & 3 | uVar17 & 0x3c;
  uVar7 = vdp_address & 0x3fff | (uVar7 & 3) << 0xe;
  vdp_control_word_pending = 0;
  vdp_address = uVar7;
  if (vdp_dma_enabled == '\0') {
    return;
  }
  if ((uVar17 & 0x20) == 0) {
    return;
  }
  uVar17 = vdp_dma_length_register & 0xffff;
  if ((vdp_dma_length_register & 0xffff) == 0) {
    uVar17 = 0xffff;
  }
  vdp_dma_remaining = uVar17;
  switch(vdp_dma_mode & 0xf) {
  case 0:
  case 1:
    uVar17 = vdp_dma_source_address & 0xfffffe;
    puVar5 = (ushort *)get_vdp_dma_backing_pointer(uVar17);
    uVar9 = vdp_address;
    uVar15 = vdp_dma_remaining;
    uVar8 = vdp_scanline;
    uVar11 = vdp_access_code & 0xf;
    uVar7 = vdp_dma_remaining & 0xffff;
    if (uVar11 == 3) {
      bVar14 = (&DAT_0208ebb0)[vdp_scanline];
      uVar17 = uVar17 << 0xf;
      if (bVar14 == 200) {
        bVar14 = (&DAT_0208ebaf)[vdp_scanline];
      }
      uVar15 = (uint)vdp_backdrop_color_index;
      do {
        uVar11 = (uint)*puVar5;
        uVar9 = (vdp_address & 0x7e) >> 1;
        uVar2 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar17 = uVar17 + 0x8000;
        vdp_address = vdp_address + uVar12;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&vdp_cram)[uVar9]) {
          (&vdp_cram)[uVar9] = (short)(uVar11 & 0xeee);
          if ((uVar9 != 0) && (uVar8 < 0xdf)) {
            (&DAT_023dc8ca)[uVar9 + (uint)(bVar14 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&ds_converted_vdp_palette)[uVar9] = uVar2;
          if (uVar9 == uVar15) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      vdp_dma_length_register = 0;
      vdp_dma_remaining = 0;
      vdp_dma_source_address = uVar18 & 0xfe0000 | uVar17 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar17 = uVar17 << 0xf;
      do {
        uVar15 = vdp_address & 0x7f;
        uVar8 = vdp_address & 0x7e;
        vdp_address = uVar15;
        if (0x4f < uVar15) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar17 = uVar17 + 0x8000;
        *(ushort *)((int)&vdp_vsram + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        vdp_address = uVar12 + uVar15;
      } while (uVar7 != 0);
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar18 & 0xfe0000 | uVar17 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
      vdp_dma_length_register = uVar7;
      vdp_dma_remaining = uVar7;
      vdp_dma_source_address = uVar17;
      return;
    }
    uStack_2c = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      uVar8 = uVar12 & 0xffff;
      uVar17 = uVar17 << 0xf;
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
        uVar17 = uVar17 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar1 != uVar2;
        uVar11 = uVar11 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar19 = uVar11;
      if (uVar11 <= uVar9) {
        uVar19 = uVar11 + 0x10000;
      }
      uVar17 = uVar18 & 0xfe0000 | uVar17 >> 0xf;
      if (uStack_44 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        vdp_dma_source_address = uVar17;
        return;
      }
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa30:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar20 = iVar10 + vdp_sprite_attribute_table_base < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar18 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar20)) {
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
          if ((DAT_023dc8a0 >> 1 <= uVar15) && (DAT_023dc8a4 = 1, !bVar4)) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a4 = 1;
            vdp_dma_source_address = uVar17;
            return;
          }
          uVar7 = uStack_2c - vdp_plane_a_name_table_base;
          bVar20 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar20) {
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_a_name_table_base - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar20) {
            uVar7 = 0;
          }
          uVar15 = uVar19 - vdp_plane_a_name_table_base;
          if (DAT_023dc8a0 < uVar19 - vdp_plane_a_name_table_base) {
            uVar15 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_0)(puVar6,uVar7,uVar12,uVar15);
          puVar6 = (ushort *)&vdp_address;
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        else {
          puVar6 = (ushort *)0x0;
          bVar20 = false;
        }
        if (bVar4) {
          if (DAT_023dc8a0 >> 1 <= vdp_dma_remaining) {
            vdp_dma_length_register = 0;
            vdp_dma_remaining = 0;
            DAT_023dc8a8 = 1;
            vdp_dma_source_address = uVar17;
            return;
          }
          iVar10 = uStack_2c - vdp_plane_b_name_table_base;
          bVar20 = iVar10 < 0;
          if (bVar20) {
            iVar10 = 0;
            puVar6 = (ushort *)((int)puVar5 + (vdp_plane_b_name_table_base - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar6 = puVar5;
          }
          uVar7 = uVar19 - vdp_plane_b_name_table_base;
          if (DAT_023dc8a0 < uVar19 - vdp_plane_b_name_table_base) {
            uVar7 = DAT_023dc8a0;
          }
          (*transfer_vdp_words_to_ds_background_1)(puVar6,iVar10,uVar12,uVar7);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*transfer_vdp_words_to_ds_window)(puVar5,uStack_2c - vdp_window_name_table_base & 0xffff,uVar12,vdp_dma_remaining & 0xffff);
          uStack_2c = vdp_address & 0xfffe;
        }
        if (!bVar20) {
          uVar12 = vdp_dma_remaining & 0xffff;
          if (uStack_44 == uVar12) {
            do {
              update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar12 = uVar12 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar12 != 0);
            uVar18 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                update_cached_ds_pattern_from_vdp_word(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar12 = uVar12 - 1 & 0xffff;
              uVar18 = 0;
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
      uVar19 = uStack_2c;
      do {
        uVar2 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&vdp_vram)[uVar19] = (char)(uVar2 >> 8);
        uVar17 = uVar17 + 2 & 0x1ffff | uVar18 & 0xfe0000;
        (&vdp_vram_odd_byte_base)[uVar19] = (char)uVar2;
        uVar19 = uVar19 + uVar12 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200aa20:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar20 = iVar10 + vdp_sprite_attribute_table_base < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar18 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar18 = uVar7;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar7) {
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
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar18 = 0;
        }
        if ((vdp_plane_b_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar18 = vdp_dma_remaining & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar18) {
            reset_background_tile_cache_at_capacity(1);
          }
          uStack_2c = uStack_2c - vdp_plane_b_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_background_tilemap_word)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar18 != 0);
          bVar20 = true;
          uStack_2c = vdp_address & 0xfffe;
          uVar18 = 0;
        }
        if ((vdp_window_name_table_base <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar18 = vdp_dma_remaining & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar18) {
            reset_background_tile_cache_at_capacity(2);
          }
          uStack_2c = uStack_2c - vdp_window_name_table_base;
          puVar6 = puVar5;
          do {
            (*write_ds_window_tilemap_word)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar12;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar18 != 0);
          uStack_2c = vdp_address & 0xfffe;
          uVar18 = 0;
        }
        if (!bVar20) {
          uVar7 = vdp_dma_remaining & 0xffff;
          do {
            update_cached_ds_pattern_from_vdp_word(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar12 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar18 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    vdp_address = uVar19 & 0xffff;
    vdp_dma_length_register = uVar18;
    vdp_dma_remaining = uVar18;
    vdp_dma_source_address = uVar17;
    break;
  case 2:
    vdp_dma_fill_pending = '\x01';
    break;
  case 3:
    uVar18 = (vdp_dma_source_address & 0x1ffff) >> 1;
    uVar15 = uVar18 + uVar17;
    uVar8 = vdp_address_increment & 0xffff;
    do {
      uVar9 = uVar18 ^ 1;
      uVar18 = uVar18 + 1 & 0xffff;
      (&vdp_vram)[vdp_address ^ 1] = (&vdp_vram)[uVar9];
      vdp_address = vdp_address + uVar8 & 0xffff;
    } while (uVar18 != (uVar15 & 0xffff));
    if (uVar12 == 1) {
      uVar17 = uVar17 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < vdp_sprite_attribute_table_base) {
LAB_0200a3f0:
        if ((uVar7 < DAT_023dcea4) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar7)) {
            bVar20 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar7 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar20 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar7) && (uVar7 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar7 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
            bVar20 = true;
          }
          if ((vdp_window_name_table_base <= uVar7) && (uVar7 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar7 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar7));
          }
          if (!bVar20) {
            update_cached_ds_pattern_from_vdp_word(uVar7,*(undefined2 *)(&vdp_vram + uVar7));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar17 = uVar17 - 1 & 0xffff;
      if (uVar17 == 0) {
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}


// 0x0202dc50  m68k_move_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_move_word_0202dc50(void)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar9;
  
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) == 0) {
    iVar4 = unaff_r7 - 0x220000;
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar9 = *(int *)(unaff_r6 + 0x54);
    if ((uVar3 & 0x2000) == 0) {
      iVar6 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar6 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar6 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar6 - 6U & 0xffff));
    *puVar7 = (ushort)uVar3 | (ushort)iVar4 & 0x1f;
    uVar3 = (int)unaff_r10 - iVar9 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar3 >> 0x10);
    puVar7[2] = (ushort)uVar3;
    iVar9 = *(int *)(unaff_r6 + 0x60);
    uVar2 = *(ushort *)(iVar9 + 0x20);
    uVar1 = *(undefined2 *)(iVar9 + 0x22);
    if ((uVar2 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar9;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar3));
    if (0 < iVar4 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar4;
    }
  }
  else {
    puVar7 = unaff_r10 + 1;
    uVar2 = *unaff_r10;
    iVar4 = unaff_r6 + 0x20;
    if ((uVar2 & 0x8000) == 0) {
      iVar4 = unaff_r6;
    }
    uVar3 = (uVar2 & 0x7000) >> 10;
    if ((uVar2 & 0x800) == 0) {
      iVar4 = (int)*(short *)(iVar4 + uVar3);
    }
    else {
      iVar4 = *(int *)(iVar4 + uVar3);
    }
    uVar3 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4)
    ;
    uVar8 = unaff_r7 & 0xffffffe0 | uVar3 & 0x1f;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xa700;
    if ((uVar3 & 0x2000) == 0) {
      uVar5 = *(undefined4 *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
      *(undefined4 *)(unaff_r6 + 0x3c) = uVar5;
    }
    iVar4 = uVar8 - 0x160000;
    if (iVar4 != 0 && 0x15ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x0202dccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar4;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar4;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return iVar4 >> 0x10;
}


// 0x0202dfe8  m68k_move_word

/* WARNING: Removing unreachable block (ram,0x02009e3c) */
/* WARNING: Removing unreachable block (ram,0x02009e58) */
/* WARNING: Removing unreachable block (ram,0x02009e5c) */
/* WARNING: Removing unreachable block (ram,0x02009e74) */
/* WARNING: Removing unreachable block (ram,0x02009e70) */
/* WARNING: Removing unreachable block (ram,0x0200a30c) */
/* WARNING: Removing unreachable block (ram,0x0200a360) */
/* WARNING: Removing unreachable block (ram,0x0200a390) */
/* WARNING: Removing unreachable block (ram,0x0200a3a8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ac) */
/* WARNING: Removing unreachable block (ram,0x0200a3b0) */
/* WARNING: Removing unreachable block (ram,0x0200a3b4) */
/* WARNING: Removing unreachable block (ram,0x0200a3c4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d0) */
/* WARNING: Removing unreachable block (ram,0x0200a3d4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d8) */
/* WARNING: Removing unreachable block (ram,0x0200a3e0) */
/* WARNING: Removing unreachable block (ram,0x0200a3e4) */
/* WARNING: Removing unreachable block (ram,0x0200a3e8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ec) */
/* WARNING: Removing unreachable block (ram,0x0200a3f0) */
/* WARNING: Removing unreachable block (ram,0x0200a400) */
/* WARNING: Removing unreachable block (ram,0x0200a410) */
/* WARNING: Removing unreachable block (ram,0x0200a420) */
/* WARNING: Removing unreachable block (ram,0x0200a42c) */
/* WARNING: Removing unreachable block (ram,0x0200a4c4) */
/* WARNING: Removing unreachable block (ram,0x0200a430) */
/* WARNING: Removing unreachable block (ram,0x0200a440) */
/* WARNING: Removing unreachable block (ram,0x0200a640) */
/* WARNING: Removing unreachable block (ram,0x0200a44c) */
/* WARNING: Removing unreachable block (ram,0x0200a45c) */
/* WARNING: Removing unreachable block (ram,0x0200a628) */
/* WARNING: Removing unreachable block (ram,0x0200a468) */
/* WARNING: Removing unreachable block (ram,0x0200a490) */
/* WARNING: Removing unreachable block (ram,0x0200a470) */
/* WARNING: Removing unreachable block (ram,0x0200a4ac) */
/* WARNING: Removing unreachable block (ram,0x0200a480) */
/* WARNING: Removing unreachable block (ram,0x0200a2fc) */
/* WARNING: Removing unreachable block (ram,0x02009f04) */
/* WARNING: Removing unreachable block (ram,0x0200a4e0) */
/* WARNING: Removing unreachable block (ram,0x0200a4fc) */
/* WARNING: Removing unreachable block (ram,0x0200a500) */
/* WARNING: Removing unreachable block (ram,0x0200a504) */
/* WARNING: Removing unreachable block (ram,0x0200a53c) */
/* WARNING: Removing unreachable block (ram,0x0200a58c) */
/* WARNING: Removing unreachable block (ram,0x0200a5a4) */
/* WARNING: Removing unreachable block (ram,0x0200a5c0) */
/* WARNING: Removing unreachable block (ram,0x0200a5d8) */
/* WARNING: Removing unreachable block (ram,0x0200a5e8) */
/* WARNING: Removing unreachable block (ram,0x0200a5ec) */
/* WARNING: Removing unreachable block (ram,0x0200a5f0) */
/* WARNING: Removing unreachable block (ram,0x0200a5f4) */
/* WARNING: Removing unreachable block (ram,0x0200a5f8) */
/* WARNING: Removing unreachable block (ram,0x0200a608) */
/* WARNING: Removing unreachable block (ram,0x02009f50) */
/* WARNING: Removing unreachable block (ram,0x02009e88) */
/* WARNING: Removing unreachable block (ram,0x02009e98) */
/* WARNING: Removing unreachable block (ram,0x02009eb0) */
/* WARNING: Removing unreachable block (ram,0x02009ed0) */
/* WARNING: Removing unreachable block (ram,0x02009f58) */
/* WARNING: Removing unreachable block (ram,0x02009f60) */
/* WARNING: Removing unreachable block (ram,0x0200a65c) */
/* WARNING: Removing unreachable block (ram,0x0200a688) */
/* WARNING: Removing unreachable block (ram,0x0200a698) */
/* WARNING: Removing unreachable block (ram,0x0200a69c) */
/* WARNING: Removing unreachable block (ram,0x0200a6a0) */
/* WARNING: Removing unreachable block (ram,0x0200a6a4) */
/* WARNING: Removing unreachable block (ram,0x0200a6a8) */
/* WARNING: Removing unreachable block (ram,0x0200a6b8) */
/* WARNING: Removing unreachable block (ram,0x0200a6bc) */
/* WARNING: Removing unreachable block (ram,0x0200a6dc) */
/* WARNING: Removing unreachable block (ram,0x0200a6e8) */
/* WARNING: Removing unreachable block (ram,0x0200a6ec) */
/* WARNING: Removing unreachable block (ram,0x0200a6f0) */
/* WARNING: Removing unreachable block (ram,0x0200a6fc) */
/* WARNING: Removing unreachable block (ram,0x0200a70c) */
/* WARNING: Removing unreachable block (ram,0x0200a718) */
/* WARNING: Removing unreachable block (ram,0x0200a71c) */
/* WARNING: Removing unreachable block (ram,0x0200a720) */
/* WARNING: Removing unreachable block (ram,0x0200aa30) */
/* WARNING: Removing unreachable block (ram,0x0200a72c) */
/* WARNING: Removing unreachable block (ram,0x0200a730) */
/* WARNING: Removing unreachable block (ram,0x0200a734) */
/* WARNING: Removing unreachable block (ram,0x0200a738) */
/* WARNING: Removing unreachable block (ram,0x0200a740) */
/* WARNING: Removing unreachable block (ram,0x0200a744) */
/* WARNING: Removing unreachable block (ram,0x0200a748) */
/* WARNING: Removing unreachable block (ram,0x0200a754) */
/* WARNING: Removing unreachable block (ram,0x0200aa54) */
/* WARNING: Removing unreachable block (ram,0x0200aa64) */
/* WARNING: Removing unreachable block (ram,0x0200a764) */
/* WARNING: Removing unreachable block (ram,0x0200a76c) */
/* WARNING: Removing unreachable block (ram,0x0200a780) */
/* WARNING: Removing unreachable block (ram,0x0200a78c) */
/* WARNING: Removing unreachable block (ram,0x0200a790) */
/* WARNING: Removing unreachable block (ram,0x0200a794) */
/* WARNING: Removing unreachable block (ram,0x0200a798) */
/* WARNING: Removing unreachable block (ram,0x0200a79c) */
/* WARNING: Removing unreachable block (ram,0x0200a7a0) */
/* WARNING: Removing unreachable block (ram,0x0200a7ac) */
/* WARNING: Removing unreachable block (ram,0x0200a7b0) */
/* WARNING: Removing unreachable block (ram,0x0200a7b4) */
/* WARNING: Removing unreachable block (ram,0x0200a7c8) */
/* WARNING: Removing unreachable block (ram,0x0200a7d8) */
/* WARNING: Removing unreachable block (ram,0x0200a7dc) */
/* WARNING: Removing unreachable block (ram,0x0200a7e0) */
/* WARNING: Removing unreachable block (ram,0x0200a7e4) */
/* WARNING: Removing unreachable block (ram,0x0200a7e8) */
/* WARNING: Removing unreachable block (ram,0x0200a7ec) */
/* WARNING: Removing unreachable block (ram,0x0200a7f8) */
/* WARNING: Removing unreachable block (ram,0x0200a7fc) */
/* WARNING: Removing unreachable block (ram,0x0200a800) */
/* WARNING: Removing unreachable block (ram,0x0200a804) */
/* WARNING: Removing unreachable block (ram,0x0200a808) */
/* WARNING: Removing unreachable block (ram,0x0200a80c) */
/* WARNING: Removing unreachable block (ram,0x0200a81c) */
/* WARNING: Removing unreachable block (ram,0x0200aa28) */
/* WARNING: Removing unreachable block (ram,0x0200a830) */
/* WARNING: Removing unreachable block (ram,0x0200a83c) */
/* WARNING: Removing unreachable block (ram,0x0200a840) */
/* WARNING: Removing unreachable block (ram,0x0200a844) */
/* WARNING: Removing unreachable block (ram,0x0200a848) */
/* WARNING: Removing unreachable block (ram,0x0200a84c) */
/* WARNING: Removing unreachable block (ram,0x0200a850) */
/* WARNING: Removing unreachable block (ram,0x0200a854) */
/* WARNING: Removing unreachable block (ram,0x0200a858) */
/* WARNING: Removing unreachable block (ram,0x0200a860) */
/* WARNING: Removing unreachable block (ram,0x0200a864) */
/* WARNING: Removing unreachable block (ram,0x0200a884) */
/* WARNING: Removing unreachable block (ram,0x0200a88c) */
/* WARNING: Removing unreachable block (ram,0x0200a8a0) */
/* WARNING: Removing unreachable block (ram,0x0200a8a4) */
/* WARNING: Removing unreachable block (ram,0x0200a8a8) */
/* WARNING: Removing unreachable block (ram,0x0200a8ac) */
/* WARNING: Removing unreachable block (ram,0x0200a8b0) */
/* WARNING: Removing unreachable block (ram,0x0200a8b4) */
/* WARNING: Removing unreachable block (ram,0x0200a8c8) */
/* WARNING: Removing unreachable block (ram,0x0200a8cc) */
/* WARNING: Removing unreachable block (ram,0x0200a8d0) */
/* WARNING: Removing unreachable block (ram,0x0200a8d4) */
/* WARNING: Removing unreachable block (ram,0x0200a8d8) */
/* WARNING: Removing unreachable block (ram,0x0200a8dc) */
/* WARNING: Removing unreachable block (ram,0x0200a8e0) */
/* WARNING: Removing unreachable block (ram,0x0200a8e4) */
/* WARNING: Removing unreachable block (ram,0x0200a8ec) */
/* WARNING: Removing unreachable block (ram,0x0200a8f0) */
/* WARNING: Removing unreachable block (ram,0x0200a910) */
/* WARNING: Removing unreachable block (ram,0x0200a924) */
/* WARNING: Removing unreachable block (ram,0x0200a934) */
/* WARNING: Removing unreachable block (ram,0x0200a978) */
/* WARNING: Removing unreachable block (ram,0x0200a980) */
/* WARNING: Removing unreachable block (ram,0x0200a9c8) */
/* WARNING: Removing unreachable block (ram,0x0200a9e0) */
/* WARNING: Removing unreachable block (ram,0x0200a9a0) */
/* WARNING: Removing unreachable block (ram,0x0200a99c) */
/* WARNING: Removing unreachable block (ram,0x0200a9e8) */
/* WARNING: Removing unreachable block (ram,0x0200aa1c) */
/* WARNING: Removing unreachable block (ram,0x02009f7c) */
/* WARNING: Removing unreachable block (ram,0x02009fa0) */
/* WARNING: Removing unreachable block (ram,0x02009fe4) */
/* WARNING: Removing unreachable block (ram,0x02009ff8) */
/* WARNING: Removing unreachable block (ram,0x0200a004) */
/* WARNING: Removing unreachable block (ram,0x0200a008) */
/* WARNING: Removing unreachable block (ram,0x0200a00c) */
/* WARNING: Removing unreachable block (ram,0x0200aa20) */
/* WARNING: Removing unreachable block (ram,0x0200a018) */
/* WARNING: Removing unreachable block (ram,0x0200a01c) */
/* WARNING: Removing unreachable block (ram,0x0200a020) */
/* WARNING: Removing unreachable block (ram,0x0200a024) */
/* WARNING: Removing unreachable block (ram,0x0200a02c) */
/* WARNING: Removing unreachable block (ram,0x0200a030) */
/* WARNING: Removing unreachable block (ram,0x0200a034) */
/* WARNING: Removing unreachable block (ram,0x0200a040) */
/* WARNING: Removing unreachable block (ram,0x0200aa40) */
/* WARNING: Removing unreachable block (ram,0x0200aa50) */
/* WARNING: Removing unreachable block (ram,0x0200a050) */
/* WARNING: Removing unreachable block (ram,0x0200a058) */
/* WARNING: Removing unreachable block (ram,0x0200a06c) */
/* WARNING: Removing unreachable block (ram,0x0200aa38) */
/* WARNING: Removing unreachable block (ram,0x0200a07c) */
/* WARNING: Removing unreachable block (ram,0x0200a08c) */
/* WARNING: Removing unreachable block (ram,0x0200a09c) */
/* WARNING: Removing unreachable block (ram,0x0200a0b4) */
/* WARNING: Removing unreachable block (ram,0x0200a0f0) */
/* WARNING: Removing unreachable block (ram,0x0200a108) */
/* WARNING: Removing unreachable block (ram,0x0200a11c) */
/* WARNING: Removing unreachable block (ram,0x0200a12c) */
/* WARNING: Removing unreachable block (ram,0x0200a14c) */
/* WARNING: Removing unreachable block (ram,0x0200a15c) */
/* WARNING: Removing unreachable block (ram,0x0200a174) */
/* WARNING: Removing unreachable block (ram,0x0200a1b0) */
/* WARNING: Removing unreachable block (ram,0x0200a1c8) */
/* WARNING: Removing unreachable block (ram,0x0200a1dc) */
/* WARNING: Removing unreachable block (ram,0x0200a1ec) */
/* WARNING: Removing unreachable block (ram,0x0200a208) */
/* WARNING: Removing unreachable block (ram,0x0200a20c) */
/* WARNING: Removing unreachable block (ram,0x0200a210) */
/* WARNING: Removing unreachable block (ram,0x0200a218) */
/* WARNING: Removing unreachable block (ram,0x0200a220) */
/* WARNING: Removing unreachable block (ram,0x0200a240) */
/* WARNING: Removing unreachable block (ram,0x0200a278) */
/* WARNING: Removing unreachable block (ram,0x0200a28c) */
/* WARNING: Removing unreachable block (ram,0x0200a290) */
/* WARNING: Removing unreachable block (ram,0x0200a294) */
/* WARNING: Removing unreachable block (ram,0x0200a298) */
/* WARNING: Removing unreachable block (ram,0x0200a2a8) */
/* WARNING: Removing unreachable block (ram,0x0200a2e4) */
/* WARNING: Removing unreachable block (ram,0x02009ee0) */
/* WARNING: Removing unreachable block (ram,0x02009ee4) */
/* WARNING: Removing unreachable block (ram,0x02009efc) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_move_word_0202dfe8(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 *puVar11;
  int iVar12;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar13;
  
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  uVar4 = unaff_r7 & 0x1f;
  uVar8 = uVar7 & 0xa700;
  uVar9 = uVar8 | uVar4;
  uVar1 = *unaff_r10;
  iVar12 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar12 = unaff_r6;
  }
  uVar5 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar12 = (int)*(short *)(iVar12 + uVar5);
  }
  else {
    iVar12 = *(int *)(iVar12 + uVar5);
  }
  uVar5 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar12;
  uVar1 = (ushort)uVar9;
  if (0xdfffff < (uVar5 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar5 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar5 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  bVar10 = (byte)uVar4;
  if ((uVar5 & 0x1c) != 0) {
    if (vdp_control_word_pending != '\0') {
      vdp_control_word_pending = 0;
      vdp_address = vdp_address & 0x3fff | (unaff_r7 & 3) << 0xe;
      vdp_access_code = vdp_access_code & 3 | (unaff_r7 & 0x10) >> 2;
      if (vdp_dma_enabled == '\0') {
        return;
      }
      return;
    }
    uVar9 = uVar8 >> 8 & 0x1f;
    if ((uVar7 & 0x8000) == 0x8000) {
      vdp_access_code = 0;
      iVar12 = 1 - (uint)vdp_mode_5_bit;
      if (1 < vdp_mode_5_bit) {
        iVar12 = 0;
      }
      if (uVar9 < 0xc) {
        iVar12 = 0;
      }
      (&vdp_registers)[uVar9] = bVar10;
      if (iVar12 != 0) {
        return;
      }
      switch(uVar9) {
      case 0:
        vdp_h_interrupt_enabled = (char)(uVar4 >> 4);
        DAT_020b4bf1 = ((byte)(uVar4 >> 1) ^ 1) & 1;
        return;
      case 1:
        vdp_mode_5_bit = bVar10 & 4;
        DAT_0b00362f = 0;
        uVar9 = uVar4 >> 3 & 1;
        DAT_0b00362c = 0;
        vdp_dma_enabled = (char)(uVar4 >> 4);
        DAT_023ddb06 = (char)uVar9;
        if (uVar9 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        vdp_plane_a_name_table_base = (unaff_r7 & 0x18) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (unaff_r7 & 0x18) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_a_name_table_base != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = vdp_plane_a_name_table_base;
        DAT_023dc8b4 = vdp_plane_a_name_table_base + DAT_023dc8a0;
        return;
      case 3:
        vdp_window_name_table_base = (unaff_r7 & 0x1e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x800;
        }
        else {
          iVar12 = 0x1000;
        }
        DAT_023dc8bc = iVar12 + vdp_window_name_table_base;
        return;
      case 4:
        vdp_plane_b_name_table_base = (unaff_r7 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (unaff_r7 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (vdp_plane_b_name_table_base != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = vdp_plane_b_name_table_base;
        DAT_023dc8b8 = vdp_plane_b_name_table_base + DAT_023dc8a0;
        return;
      case 5:
        DAT_0209cbe0 = vdp_sprite_attribute_table_base;
        DAT_023dcdac = &vdp_vram + uVar4 * 0x200;
        vdp_sprite_attribute_table_base = uVar4 * 0x200;
        return;
      default:
        return;
      case 7:
        DAT_0b003640 = uVar4;
        vdp_backdrop_color_index = bVar10;
        return;
      }
    }
    vdp_control_word_pending = 1;
    vdp_access_code = vdp_access_code & 0x3c | uVar8 >> 0xe;
    vdp_address = vdp_address & 0xc000 | uVar7 & 0x2700 | uVar4;
    return;
  }
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar3 = vdp_address_increment;
  uVar5 = vdp_dma_remaining;
  uVar2 = (undefined1)(uVar8 >> 8);
  if (vdp_dma_fill_pending != '\0') {
    bVar13 = (vdp_address & 1) == 0;
    uVar9 = vdp_address & 0xffff;
    if (bVar13) {
      puVar11 = &vdp_vram + uVar9;
    }
    else {
      puVar11 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar7 = vdp_address_increment & 0xffff;
    if (!bVar13) {
      (&vdp_vram)[(int)puVar11] = bVar10;
    }
    uVar5 = uVar5 & 0xffff;
    if (bVar13) {
      (&vdp_vram)[uVar9] = uVar2;
      puVar11[1] = bVar10;
    }
    if (!bVar13) {
      (&vdp_vram)[uVar9] = uVar2;
    }
    uVar6 = uVar9 + uVar7 & 0xffff;
    uVar8 = uVar5;
    if (uVar5 != 0) {
      do {
        uVar8 = uVar8 - 1 & 0xffff;
        (&vdp_vram)[uVar6] = bVar10;
        uVar6 = uVar6 + uVar7 & 0xffff;
      } while (uVar8 != 0);
      uVar9 = vdp_address;
      if (uVar5 == 0xffff && uVar4 == 0) {
        vdp_address = uVar6;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar6;
    uVar9 = uVar9 & 0xfffe;
    if (uVar3 == 1) {
      uVar5 = uVar5 >> 1;
      uVar7 = 2;
    }
    do {
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar9)) {
            bVar13 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar9 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar13 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar9 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar13 = true;
          }
          if ((vdp_window_name_table_base <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar9 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
          }
          if (!bVar13) {
            update_cached_ds_pattern_from_vdp_word(uVar9,*(undefined2 *)(&vdp_vram + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        if (iVar12 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar5 = uVar5 - 1 & 0xffff;
      if (uVar5 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar9 = uVar9 + uVar7 & 0xfffe;
    } while( true );
  }
  uVar5 = vdp_access_code & 0xf;
  if (uVar5 == 3) {
    uVar9 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar9] = uVar1 & 0xeee;
    uVar1 = (ushort)((uVar7 & 0x600) << 3) | 0x8000 | (ushort)((unaff_r7 & 0xe) << 1);
    if ((uVar9 != 0) && (vdp_scanline < 0xdf)) {
      bVar10 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar10 == 200) {
        bVar10 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&DAT_023ddb0c)[bVar10] = &DAT_023dc8ca + (uint)(bVar10 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar9 + (uint)(bVar10 >> 5) * 0x40] = uVar1;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar9] = uVar1;
    DAT_0208f354 = 1;
    if (uVar9 == uVar4) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar5 == 5) {
    uVar9 = vdp_address & 0x7f;
    if (0x4f < uVar9) {
      vdp_address = uVar9;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar9;
    *(ushort *)((int)&vdp_vsram + uVar4) = uVar1;
  }
  else if (uVar5 == 1) {
    uVar7 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(ushort *)(&vdp_vram + uVar7) == uVar9) goto LAB_0200ae88;
      *(ushort *)(&vdp_vram + uVar7) = uVar1;
    }
    else {
      (&vdp_vram)[uVar7] = uVar2;
      (&vdp_vram_odd_byte_base)[uVar7] = bVar10;
      uVar9 = uVar8 >> 8 | uVar4 << 8;
    }
    if (vdp_sprite_attribute_table_base <= uVar7) {
      if (DAT_023ddb05 == '\0') {
        iVar12 = 0x200;
      }
      else {
        iVar12 = 0x280;
      }
      if (uVar7 < iVar12 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar7 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar7)) {
      bVar13 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar7 - vdp_plane_a_name_table_base,uVar9);
      bVar13 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar7) && (uVar7 < DAT_023dc8b8)) {
      (*write_ds_background_tilemap_word)(1,uVar7 - vdp_plane_b_name_table_base,uVar9);
      bVar13 = true;
    }
    if ((vdp_window_name_table_base <= uVar7) && (uVar7 < DAT_023dc8bc)) {
      (*write_ds_window_tilemap_word)(uVar7 - vdp_window_name_table_base,uVar9);
    }
    if (!bVar13) {
      update_cached_ds_pattern_from_vdp_word(uVar7,uVar9);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x0202e168  m68k_move_word

void m68k_move_word_0202e168(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x0202e1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))(uVar2 & 0x1f);
  return;
}

