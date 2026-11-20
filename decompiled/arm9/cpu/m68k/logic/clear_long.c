/* ARM9 clear long — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02024600  m68k_clr_long

void m68k_clr_long_02024600(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined4 *)(unaff_r6 + (unaff_r11 & 7) * 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x0202461c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024668  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_clr_long_02024668(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_r6;
  uint uVar10;
  int unaff_r8;
  uint unaff_r11;
  bool bVar11;
  
  uVar2 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_address = 0;
      vdp_access_code = 0;
      if (vdp_dma_enabled != '\0') {
        return;
      }
      return;
    }
    write_vdp_control_port_word(0);
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff;
    vdp_access_code = vdp_access_code & 3;
    if (vdp_dma_enabled != '\0') {
      return;
    }
    return;
  }
  write_vdp_data_port_word(0);
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar4 = vdp_address_increment;
  uVar2 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar11 = (vdp_address & 1) == 0;
    uVar9 = vdp_address & 0xffff;
    if (bVar11) {
      puVar6 = &vdp_vram + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar10 = vdp_address_increment & 0xffff;
    if (!bVar11) {
      (&vdp_vram)[(int)puVar6] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar11) {
      (&vdp_vram)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&vdp_vram)[uVar9] = 0;
    }
    uVar3 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&vdp_vram)[uVar3] = 0;
        uVar3 = uVar3 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = vdp_address;
      if (uVar2 == 0xffff) {
        vdp_address = uVar3;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar3;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar9 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar11 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar9 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar11 = true;
          }
          if ((vdp_window_name_table_base <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar9 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
          }
          if (!bVar11) {
            update_cached_ds_pattern_from_vdp_word(uVar9,*(undefined2 *)(&vdp_vram + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar2 = vdp_access_code & 0xf;
  if (uVar2 == 3) {
    uVar2 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar2] = 0;
    if ((uVar2 != 0) && (vdp_scanline < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = vdp_address & 0x7f;
    if (0x4f < uVar2) {
      vdp_address = uVar2;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar2;
    *(undefined2 *)((int)&vdp_vsram + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(short *)(&vdp_vram + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&vdp_vram + uVar2) = 0;
    }
    else {
      (&vdp_vram)[uVar2] = 0;
      (&vdp_vram_odd_byte_base)[uVar2] = 0;
    }
    if (vdp_sprite_attribute_table_base <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar2 < iVar8 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar2)) {
      bVar11 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar2 - vdp_plane_a_name_table_base,0);
      bVar11 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*write_ds_background_tilemap_word)(1,uVar2 - vdp_plane_b_name_table_base,0);
      bVar11 = true;
    }
    if ((vdp_window_name_table_base <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*write_ds_window_tilemap_word)(uVar2 - vdp_window_name_table_base,0);
    }
    if (!bVar11) {
      update_cached_ds_pattern_from_vdp_word(uVar2,0);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x020246f4  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_clr_long_020246f4(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r6;
  uint uVar11;
  int unaff_r8;
  uint unaff_r11;
  bool bVar12;
  
  puVar5 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar5;
  *puVar5 = uVar2 + 4;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_address = 0;
      vdp_access_code = 0;
      if (vdp_dma_enabled != '\0') {
        return;
      }
      return;
    }
    write_vdp_control_port_word(0);
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff;
    vdp_access_code = vdp_access_code & 3;
    if (vdp_dma_enabled != '\0') {
      return;
    }
    return;
  }
  write_vdp_data_port_word(0);
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar4 = vdp_address_increment;
  uVar2 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar12 = (vdp_address & 1) == 0;
    uVar10 = vdp_address & 0xffff;
    if (bVar12) {
      puVar7 = &vdp_vram + uVar10;
    }
    else {
      puVar7 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar11 = vdp_address_increment & 0xffff;
    if (!bVar12) {
      (&vdp_vram)[(int)puVar7] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar12) {
      (&vdp_vram)[uVar10] = 0;
      puVar7[1] = 0;
    }
    if (!bVar12) {
      (&vdp_vram)[uVar10] = 0;
    }
    uVar3 = uVar10 + uVar11 & 0xffff;
    uVar8 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar8 = uVar8 - 1 & 0xffff;
        (&vdp_vram)[uVar3] = 0;
        uVar3 = uVar3 + uVar11 & 0xffff;
      } while (uVar8 != 0);
      uVar10 = vdp_address;
      if (uVar2 == 0xffff) {
        vdp_address = uVar3;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar3;
    uVar10 = uVar10 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar11 = 2;
    }
    do {
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar10 < DAT_023dcea4) || (DAT_023dcdaa <= uVar10)) {
          if ((uVar10 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar10)) {
            bVar12 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar10 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
            bVar12 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar10) && (uVar10 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar10 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
            bVar12 = true;
          }
          if ((vdp_window_name_table_base <= uVar10) && (uVar10 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar10 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
          }
          if (!bVar12) {
            update_cached_ds_pattern_from_vdp_word(uVar10,*(undefined2 *)(&vdp_vram + uVar10));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        if (iVar9 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar10 = uVar10 + uVar11 & 0xfffe;
    } while( true );
  }
  uVar2 = vdp_access_code & 0xf;
  if (uVar2 == 3) {
    uVar2 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar2] = 0;
    if ((uVar2 != 0) && (vdp_scanline < 0xdf)) {
      bVar6 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar6 == 200) {
        bVar6 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&DAT_023ddb0c)[bVar6] = &DAT_023dc8ca + (uint)(bVar6 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar6 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = vdp_address & 0x7f;
    if (0x4f < uVar2) {
      vdp_address = uVar2;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar2;
    *(undefined2 *)((int)&vdp_vsram + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(short *)(&vdp_vram + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&vdp_vram + uVar2) = 0;
    }
    else {
      (&vdp_vram)[uVar2] = 0;
      (&vdp_vram_odd_byte_base)[uVar2] = 0;
    }
    if (vdp_sprite_attribute_table_base <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar9 = 0x200;
      }
      else {
        iVar9 = 0x280;
      }
      if (uVar2 < iVar9 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar2)) {
      bVar12 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar2 - vdp_plane_a_name_table_base,0);
      bVar12 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*write_ds_background_tilemap_word)(1,uVar2 - vdp_plane_b_name_table_base,0);
      bVar12 = true;
    }
    if ((vdp_window_name_table_base <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*write_ds_window_tilemap_word)(uVar2 - vdp_window_name_table_base,0);
    }
    if (!bVar12) {
      update_cached_ds_pattern_from_vdp_word(uVar2,0);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x0202478c  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_clr_long_0202478c(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r6;
  uint uVar11;
  int unaff_r8;
  uint unaff_r11;
  bool bVar12;
  
  puVar5 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar5 - 4;
  *puVar5 = uVar2;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_address = 0;
      vdp_access_code = 0;
      if (vdp_dma_enabled != '\0') {
        return;
      }
      return;
    }
    write_vdp_control_port_word(0);
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff;
    vdp_access_code = vdp_access_code & 3;
    if (vdp_dma_enabled != '\0') {
      return;
    }
    return;
  }
  write_vdp_data_port_word(0);
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar4 = vdp_address_increment;
  uVar2 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar12 = (vdp_address & 1) == 0;
    uVar10 = vdp_address & 0xffff;
    if (bVar12) {
      puVar7 = &vdp_vram + uVar10;
    }
    else {
      puVar7 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar11 = vdp_address_increment & 0xffff;
    if (!bVar12) {
      (&vdp_vram)[(int)puVar7] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar12) {
      (&vdp_vram)[uVar10] = 0;
      puVar7[1] = 0;
    }
    if (!bVar12) {
      (&vdp_vram)[uVar10] = 0;
    }
    uVar3 = uVar10 + uVar11 & 0xffff;
    uVar8 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar8 = uVar8 - 1 & 0xffff;
        (&vdp_vram)[uVar3] = 0;
        uVar3 = uVar3 + uVar11 & 0xffff;
      } while (uVar8 != 0);
      uVar10 = vdp_address;
      if (uVar2 == 0xffff) {
        vdp_address = uVar3;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar3;
    uVar10 = uVar10 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar11 = 2;
    }
    do {
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar10 < DAT_023dcea4) || (DAT_023dcdaa <= uVar10)) {
          if ((uVar10 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar10)) {
            bVar12 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar10 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
            bVar12 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar10) && (uVar10 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar10 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
            bVar12 = true;
          }
          if ((vdp_window_name_table_base <= uVar10) && (uVar10 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar10 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
          }
          if (!bVar12) {
            update_cached_ds_pattern_from_vdp_word(uVar10,*(undefined2 *)(&vdp_vram + uVar10));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        if (iVar9 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar10 = uVar10 + uVar11 & 0xfffe;
    } while( true );
  }
  uVar2 = vdp_access_code & 0xf;
  if (uVar2 == 3) {
    uVar2 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar2] = 0;
    if ((uVar2 != 0) && (vdp_scanline < 0xdf)) {
      bVar6 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar6 == 200) {
        bVar6 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&DAT_023ddb0c)[bVar6] = &DAT_023dc8ca + (uint)(bVar6 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar6 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = vdp_address & 0x7f;
    if (0x4f < uVar2) {
      vdp_address = uVar2;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar2;
    *(undefined2 *)((int)&vdp_vsram + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(short *)(&vdp_vram + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&vdp_vram + uVar2) = 0;
    }
    else {
      (&vdp_vram)[uVar2] = 0;
      (&vdp_vram_odd_byte_base)[uVar2] = 0;
    }
    if (vdp_sprite_attribute_table_base <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar9 = 0x200;
      }
      else {
        iVar9 = 0x280;
      }
      if (uVar2 < iVar9 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar2)) {
      bVar12 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar2 - vdp_plane_a_name_table_base,0);
      bVar12 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*write_ds_background_tilemap_word)(1,uVar2 - vdp_plane_b_name_table_base,0);
      bVar12 = true;
    }
    if ((vdp_window_name_table_base <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*write_ds_window_tilemap_word)(uVar2 - vdp_window_name_table_base,0);
    }
    if (!bVar12) {
      update_cached_ds_pattern_from_vdp_word(uVar2,0);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x02024814  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_clr_long_02024814(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_r6;
  uint uVar10;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar11;
  
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_address = 0;
      vdp_access_code = 0;
      if (vdp_dma_enabled != '\0') {
        return;
      }
      return;
    }
    write_vdp_control_port_word(0);
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff;
    vdp_access_code = vdp_access_code & 3;
    if (vdp_dma_enabled != '\0') {
      return;
    }
    return;
  }
  write_vdp_data_port_word(0);
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar4 = vdp_address_increment;
  uVar2 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar11 = (vdp_address & 1) == 0;
    uVar9 = vdp_address & 0xffff;
    if (bVar11) {
      puVar6 = &vdp_vram + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar10 = vdp_address_increment & 0xffff;
    if (!bVar11) {
      (&vdp_vram)[(int)puVar6] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar11) {
      (&vdp_vram)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&vdp_vram)[uVar9] = 0;
    }
    uVar3 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&vdp_vram)[uVar3] = 0;
        uVar3 = uVar3 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = vdp_address;
      if (uVar2 == 0xffff) {
        vdp_address = uVar3;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar3;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar9 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar11 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar9 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar11 = true;
          }
          if ((vdp_window_name_table_base <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar9 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
          }
          if (!bVar11) {
            update_cached_ds_pattern_from_vdp_word(uVar9,*(undefined2 *)(&vdp_vram + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar2 = vdp_access_code & 0xf;
  if (uVar2 == 3) {
    uVar2 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar2] = 0;
    if ((uVar2 != 0) && (vdp_scanline < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = vdp_address & 0x7f;
    if (0x4f < uVar2) {
      vdp_address = uVar2;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar2;
    *(undefined2 *)((int)&vdp_vsram + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(short *)(&vdp_vram + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&vdp_vram + uVar2) = 0;
    }
    else {
      (&vdp_vram)[uVar2] = 0;
      (&vdp_vram_odd_byte_base)[uVar2] = 0;
    }
    if (vdp_sprite_attribute_table_base <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar2 < iVar8 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar2)) {
      bVar11 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar2 - vdp_plane_a_name_table_base,0);
      bVar11 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*write_ds_background_tilemap_word)(1,uVar2 - vdp_plane_b_name_table_base,0);
      bVar11 = true;
    }
    if ((vdp_window_name_table_base <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*write_ds_window_tilemap_word)(uVar2 - vdp_window_name_table_base,0);
    }
    if (!bVar11) {
      update_cached_ds_pattern_from_vdp_word(uVar2,0);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x020248e0  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_clr_long_020248e0(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r6;
  uint uVar11;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar12;
  
  uVar1 = *unaff_r10;
  iVar9 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar9 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar9 = (int)*(short *)(iVar9 + uVar3);
  }
  else {
    iVar9 = *(int *)(iVar9 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar9;
  if (0xdfffff < (uVar3 & 0xf00000)) {
    puVar2 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    *puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  if ((uVar3 & 0xf00000) < 0xc00000) {
    uVar3 = uVar3 & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar3 >> 0x10])(uVar3,0);
    (*(code *)(&m68k_word_write_handlers)[uVar3 >> 0x10])(uVar3 + 2,0);
    return;
  }
  if ((uVar3 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_address = 0;
      vdp_access_code = 0;
      if (vdp_dma_enabled != '\0') {
        return;
      }
      return;
    }
    write_vdp_control_port_word(0);
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff;
    vdp_access_code = vdp_access_code & 3;
    if (vdp_dma_enabled != '\0') {
      return;
    }
    return;
  }
  write_vdp_data_port_word(0);
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar5 = vdp_address_increment;
  uVar3 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar12 = (vdp_address & 1) == 0;
    uVar10 = vdp_address & 0xffff;
    if (bVar12) {
      puVar7 = &vdp_vram + uVar10;
    }
    else {
      puVar7 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar11 = vdp_address_increment & 0xffff;
    if (!bVar12) {
      (&vdp_vram)[(int)puVar7] = 0;
    }
    uVar3 = uVar3 & 0xffff;
    if (bVar12) {
      (&vdp_vram)[uVar10] = 0;
      puVar7[1] = 0;
    }
    if (!bVar12) {
      (&vdp_vram)[uVar10] = 0;
    }
    uVar4 = uVar10 + uVar11 & 0xffff;
    uVar8 = uVar3;
    if (uVar3 != 0) {
      do {
        uVar8 = uVar8 - 1 & 0xffff;
        (&vdp_vram)[uVar4] = 0;
        uVar4 = uVar4 + uVar11 & 0xffff;
      } while (uVar8 != 0);
      uVar10 = vdp_address;
      if (uVar3 == 0xffff) {
        vdp_address = uVar4;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar4;
    uVar10 = uVar10 & 0xfffe;
    if (uVar5 == 1) {
      uVar3 = uVar3 >> 1;
      uVar11 = 2;
    }
    do {
      if (uVar10 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar10 < DAT_023dcea4) || (DAT_023dcdaa <= uVar10)) {
          if ((uVar10 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar10)) {
            bVar12 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar10 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
            bVar12 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar10) && (uVar10 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar10 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
            bVar12 = true;
          }
          if ((vdp_window_name_table_base <= uVar10) && (uVar10 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar10 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar10));
          }
          if (!bVar12) {
            update_cached_ds_pattern_from_vdp_word(uVar10,*(undefined2 *)(&vdp_vram + uVar10));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        if (iVar9 + vdp_sprite_attribute_table_base <= uVar10) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar3 = uVar3 - 1 & 0xffff;
      if (uVar3 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar10 = uVar10 + uVar11 & 0xfffe;
    } while( true );
  }
  uVar3 = vdp_access_code & 0xf;
  if (uVar3 == 3) {
    uVar3 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar3] = 0;
    if ((uVar3 != 0) && (vdp_scanline < 0xdf)) {
      bVar6 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar6 == 200) {
        bVar6 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&DAT_023ddb0c)[bVar6] = &DAT_023dc8ca + (uint)(bVar6 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar3 + (uint)(bVar6 >> 5) * 0x40] = 0x8000;
    }
    uVar5 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar3] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar3 == uVar5) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar3 == 5) {
    uVar3 = vdp_address & 0x7f;
    if (0x4f < uVar3) {
      vdp_address = uVar3;
      return;
    }
    uVar5 = vdp_address & 0x7e;
    vdp_address = uVar3;
    *(undefined2 *)((int)&vdp_vsram + uVar5) = 0;
  }
  else if (uVar3 == 1) {
    uVar3 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(short *)(&vdp_vram + uVar3) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&vdp_vram + uVar3) = 0;
    }
    else {
      (&vdp_vram)[uVar3] = 0;
      (&vdp_vram_odd_byte_base)[uVar3] = 0;
    }
    if (vdp_sprite_attribute_table_base <= uVar3) {
      if (DAT_023ddb05 == '\0') {
        iVar9 = 0x200;
      }
      else {
        iVar9 = 0x280;
      }
      if (uVar3 < iVar9 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar3 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar3)) {
      bVar12 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar3 - vdp_plane_a_name_table_base,0);
      bVar12 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar3) && (uVar3 < DAT_023dc8b8)) {
      (*write_ds_background_tilemap_word)(1,uVar3 - vdp_plane_b_name_table_base,0);
      bVar12 = true;
    }
    if ((vdp_window_name_table_base <= uVar3) && (uVar3 < DAT_023dc8bc)) {
      (*write_ds_window_tilemap_word)(uVar3 - vdp_window_name_table_base,0);
    }
    if (!bVar12) {
      update_cached_ds_pattern_from_vdp_word(uVar3,0);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x02024968  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_clr_long_02024968(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r8;
  ushort *unaff_r10;
  bool bVar11;
  
  uVar2 = (uint)(short)*unaff_r10;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uint)*unaff_r10);
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_address = 0;
      vdp_access_code = 0;
      if (vdp_dma_enabled != '\0') {
        return;
      }
      return;
    }
    write_vdp_control_port_word(0);
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff;
    vdp_access_code = vdp_access_code & 3;
    if (vdp_dma_enabled != '\0') {
      return;
    }
    return;
  }
  write_vdp_data_port_word(0);
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar4 = vdp_address_increment;
  uVar2 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar11 = (vdp_address & 1) == 0;
    uVar9 = vdp_address & 0xffff;
    if (bVar11) {
      puVar6 = &vdp_vram + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar10 = vdp_address_increment & 0xffff;
    if (!bVar11) {
      (&vdp_vram)[(int)puVar6] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar11) {
      (&vdp_vram)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&vdp_vram)[uVar9] = 0;
    }
    uVar3 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&vdp_vram)[uVar3] = 0;
        uVar3 = uVar3 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = vdp_address;
      if (uVar2 == 0xffff) {
        vdp_address = uVar3;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar3;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar9 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar11 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar9 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar11 = true;
          }
          if ((vdp_window_name_table_base <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar9 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
          }
          if (!bVar11) {
            update_cached_ds_pattern_from_vdp_word(uVar9,*(undefined2 *)(&vdp_vram + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar2 = vdp_access_code & 0xf;
  if (uVar2 == 3) {
    uVar2 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar2] = 0;
    if ((uVar2 != 0) && (vdp_scanline < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = vdp_address & 0x7f;
    if (0x4f < uVar2) {
      vdp_address = uVar2;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar2;
    *(undefined2 *)((int)&vdp_vsram + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(short *)(&vdp_vram + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&vdp_vram + uVar2) = 0;
    }
    else {
      (&vdp_vram)[uVar2] = 0;
      (&vdp_vram_odd_byte_base)[uVar2] = 0;
    }
    if (vdp_sprite_attribute_table_base <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar2 < iVar8 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar2)) {
      bVar11 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar2 - vdp_plane_a_name_table_base,0);
      bVar11 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*write_ds_background_tilemap_word)(1,uVar2 - vdp_plane_b_name_table_base,0);
      bVar11 = true;
    }
    if ((vdp_window_name_table_base <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*write_ds_window_tilemap_word)(uVar2 - vdp_window_name_table_base,0);
    }
    if (!bVar11) {
      update_cached_ds_pattern_from_vdp_word(uVar2,0);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x020249cc  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_clr_long_020249cc(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r8;
  ushort *unaff_r10;
  bool bVar11;
  
  uVar1 = unaff_r10[1];
  uVar3 = (*unaff_r10 & 0xf0) * 0x10000;
  if (0xdfffff < uVar3) {
    *(undefined2 *)(unaff_r8 + (uint)uVar1) = 0;
    ((undefined2 *)(unaff_r8 + (uint)uVar1))[1] = 0;
    return;
  }
  if (uVar3 < 0xc00000) {
    uVar3 = CONCAT22(*unaff_r10,uVar1) & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar3 >> 0x10])(uVar3,0);
    (*(code *)(&m68k_word_write_handlers)[uVar3 >> 0x10])(uVar3 + 2,0);
    return;
  }
  if ((uVar1 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_address = 0;
      vdp_access_code = 0;
      if (vdp_dma_enabled != '\0') {
        return;
      }
      return;
    }
    write_vdp_control_port_word(0);
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff;
    vdp_access_code = vdp_access_code & 3;
    if (vdp_dma_enabled != '\0') {
      return;
    }
    return;
  }
  write_vdp_data_port_word(0);
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar4 = vdp_address_increment;
  uVar3 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar11 = (vdp_address & 1) == 0;
    uVar9 = vdp_address & 0xffff;
    if (bVar11) {
      puVar6 = &vdp_vram + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar10 = vdp_address_increment & 0xffff;
    if (!bVar11) {
      (&vdp_vram)[(int)puVar6] = 0;
    }
    uVar3 = uVar3 & 0xffff;
    if (bVar11) {
      (&vdp_vram)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&vdp_vram)[uVar9] = 0;
    }
    uVar2 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar3;
    if (uVar3 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&vdp_vram)[uVar2] = 0;
        uVar2 = uVar2 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = vdp_address;
      if (uVar3 == 0xffff) {
        vdp_address = uVar2;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar2;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar3 = uVar3 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar9 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar11 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*write_ds_background_tilemap_word)(1,uVar9 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
            bVar11 = true;
          }
          if ((vdp_window_name_table_base <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*write_ds_window_tilemap_word)(uVar9 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar9));
          }
          if (!bVar11) {
            update_cached_ds_pattern_from_vdp_word(uVar9,*(undefined2 *)(&vdp_vram + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + vdp_sprite_attribute_table_base <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar3 = uVar3 - 1 & 0xffff;
      if (uVar3 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar3 = vdp_access_code & 0xf;
  if (uVar3 == 3) {
    uVar3 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar3] = 0;
    if ((uVar3 != 0) && (vdp_scanline < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar3 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar3] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar3 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar3 == 5) {
    uVar3 = vdp_address & 0x7f;
    if (0x4f < uVar3) {
      vdp_address = uVar3;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar3;
    *(undefined2 *)((int)&vdp_vsram + uVar4) = 0;
  }
  else if (uVar3 == 1) {
    uVar3 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(short *)(&vdp_vram + uVar3) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&vdp_vram + uVar3) = 0;
    }
    else {
      (&vdp_vram)[uVar3] = 0;
      (&vdp_vram_odd_byte_base)[uVar3] = 0;
    }
    if (vdp_sprite_attribute_table_base <= uVar3) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar3 < iVar8 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar3 < vdp_plane_a_name_table_base) || (DAT_023dc8b4 <= uVar3)) {
      bVar11 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar3 - vdp_plane_a_name_table_base,0);
      bVar11 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar3) && (uVar3 < DAT_023dc8b8)) {
      (*write_ds_background_tilemap_word)(1,uVar3 - vdp_plane_b_name_table_base,0);
      bVar11 = true;
    }
    if ((vdp_window_name_table_base <= uVar3) && (uVar3 < DAT_023dc8bc)) {
      (*write_ds_window_tilemap_word)(uVar3 - vdp_window_name_table_base,0);
    }
    if (!bVar11) {
      update_cached_ds_pattern_from_vdp_word(uVar3,0);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}

