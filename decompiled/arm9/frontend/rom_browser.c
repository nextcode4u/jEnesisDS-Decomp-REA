/* ARM9 rom browser — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02002088  select_previous_rom_browser_page

void select_previous_rom_browser_page(void)

{
  if (DAT_02098fe0 == 0) {
    DAT_02098fe0 = DAT_02098fd8;
  }
  DAT_02098fe0 = DAT_02098fe0 + -1;
  DAT_02098fcc = 1;
  return;
}


// 0x02002990  render_rom_directory_page

void render_rom_directory_page(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_35 [29];
  
  DAT_02098fdc = 0;
  if (DAT_02098ff0 != (int *)0x0) {
    piVar3 = DAT_02098ff0;
    if (param_1 * 0x10 != 0) {
      iVar2 = 1;
      do {
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)0x0) {
          DAT_02098fdc = 0;
          return;
        }
        bVar5 = param_1 * 0x10 != iVar2;
        iVar2 = iVar2 + 1;
      } while (bVar5);
    }
    clear_text_rows_from(3);
    iVar2 = 4;
    do {
      if (piVar3[2] == 2) {
        newlib_strlcpy(auStack_35,&DAT_0208f150,0x1d);
        newlib_strncat(auStack_35,piVar3 + 3,0x1b);
        newlib_strlcat(auStack_35,&DAT_0208f154,0x1d);
      }
      else {
        newlib_strlcpy(auStack_35,piVar3 + 3,0x1d);
      }
      iVar4 = iVar2 + 1;
      write_clipped_text_row(auStack_35,iVar2);
      piVar3 = (int *)*piVar3;
      DAT_02098fdc = DAT_02098fdc + 1;
    } while ((piVar3 != (int *)0x0) && (iVar2 = iVar4, iVar4 != 0x14));
    if (DAT_02098fcc != 0) {
      restore_overlay_tilemap_row(DAT_0208f344);
      uVar1 = DAT_02098fdc + 3U & 0xff;
      DAT_02098fe4 = uVar1 - 4;
      DAT_0208f344 = (undefined1)(DAT_02098fdc + 3U);
      draw_rom_browser_row_highlight(uVar1);
      DAT_02098fcc = 0;
    }
    format_hexadecimal_value(param_1 + 1,0x15,0x1a);
    write_text_at_tile_position(&DAT_0208f2fc,0x15,0x1c);
    format_hexadecimal_value(DAT_02098fd8,0x15,0x1e);
  }
  return;
}


// 0x0200311c  free_rom_directory_list

void free_rom_directory_list(void)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_02098ff0 != (int *)0x0) {
    piVar2 = (int *)DAT_02098ff0[1];
    while (piVar1 = piVar2, piVar1 != (int *)0x0) {
      DAT_02098ff0 = piVar1;
      piVar2 = (int *)piVar1[1];
    }
    do {
      piVar2 = (int *)*DAT_02098ff0;
      newlib_free_global_reent_wrapper();
      DAT_02098ff0 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  DAT_02098fd8 = 0;
  DAT_02098ff0 = (int *)0x0;
  DAT_02098ff4 = 0;
  DAT_02098fd4 = 0;
  return;
}


// 0x020031a4  add_rom_browser_entry

void add_rom_browser_entry(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = newlib_strlen();
  if (param_2 != 2) {
    iVar5 = param_1 + iVar2 + -4;
    iVar2 = newlib_strcasecmp(&DAT_0208f20c,iVar5);
    if (((iVar2 != 0) && (iVar2 = newlib_strcasecmp(&DAT_0208f214,iVar5), iVar2 != 0)) &&
       (iVar2 = newlib_strcasecmp(&DAT_0208f21c,iVar5), iVar2 != 0)) {
      return;
    }
  }
  puVar4 = DAT_02098ff4;
  if (DAT_02098ff4 == (undefined4 *)0x0) {
    DAT_02098ff4 = (undefined4 *)newlib_malloc_global_reent_wrapper(0x10c);
    DAT_02098ff4[1] = 0;
  }
  else {
    uVar3 = newlib_malloc_global_reent_wrapper(0x10c);
    *puVar4 = uVar3;
    puVar4 = (undefined4 *)*DAT_02098ff4;
    puVar4[1] = DAT_02098ff4;
    DAT_02098ff4 = puVar4;
  }
  newlib_strcpy(DAT_02098ff4 + 3,param_1);
  puVar1 = DAT_02098ff4;
  puVar4 = DAT_02098ff0;
  DAT_02098ff4[2] = param_2;
  *puVar1 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    DAT_02098ff0 = puVar1;
  }
  DAT_02098fd4 = DAT_02098fd4 + 1;
  return;
}


// 0x020032a8  enumerate_rom_browser_directory

void enumerate_rom_browser_directory(void)

{
  int directory_result;
  undefined4 entry_kind;
  undefined1 entry_stat_prefix [8];
  uint entry_mode;
  
  free_rom_directory_list();
  DAT_023cb614 = devoptab_open_directory(&DAT_0208f224);
  while (directory_result = devoptab_read_next_directory_entry(DAT_023cb614,&DAT_023cb510,entry_stat_prefix), directory_result == 0) {
    while (directory_result = newlib_strcmp(&DAT_023cb510,&DAT_0208f224), directory_result != 0) {
      if ((entry_mode & 0x4000) == 0) {
        entry_kind = 1;
      }
      else {
        entry_kind = 2;
      }
      add_rom_browser_entry(&DAT_023cb510,entry_kind);
      directory_result = devoptab_read_next_directory_entry(DAT_023cb614,&DAT_023cb510,entry_stat_prefix);
      if (directory_result != 0) goto LAB_02003330;
    }
  }
LAB_02003330:
  DAT_02098fd8 = (DAT_02098fd4 - 1U >> 4) + 1;
  DAT_02098fe0 = 0;
  DAT_02098fe4 = 0;
  restore_overlay_tilemap_row(DAT_0208f344);
  DAT_0208f344 = 4;
  devoptab_close_directory(DAT_023cb614);
  return;
}


// 0x020034b0  run_rom_browser_event_loop

undefined4 run_rom_browser_event_loop(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_0208f346 != '\0') {
    iVar5 = arm_veneer_for_mount_browser_fat_storage();
    if (iVar5 == 0) {
      if (DAT_0208f346 != '\0') {
        DAT_0208f344 = 4;
        return 1;
      }
    }
    else {
      DAT_0208f346 = '\0';
    }
  }
  DAT_0208f344 = 4;
  enumerate_rom_browser_directory();
  draw_rom_browser_row_highlight(DAT_0208f344);
  iVar4 = 0;
  render_rom_directory_page(DAT_02098fe0);
  iVar5 = 0;
  if (param_1 != 0) goto LAB_02003610;
LAB_02003504:
  arm_veneer_for_sample_ds_keys_and_update_repeat_state();
  uVar1 = arm_veneer_for_read_latched_ds_key_state();
  if ((uVar1 & 0x80) == 0) goto LAB_02003644;
LAB_02003518:
  uVar3 = (uint)DAT_0208f344;
  if (uVar3 < 0x13) {
    if ((uVar3 < DAT_02098fdc + 3U) && (7 < iVar5 - 1U)) {
      move_rom_browser_highlight_down();
    }
    iVar5 = iVar5 + 1;
  }
  else if (uVar3 == 0x13) {
    if ((DAT_02098fd0 & 0x80) != 0) goto LAB_02003644;
    select_next_rom_browser_page();
    iVar5 = 0;
  }
  if ((uVar1 & 0x40) == 0) goto LAB_02003650;
  do {
    if (DAT_0208f344 < 5) {
      if (DAT_0208f344 != 4) goto LAB_02003568;
      if ((DAT_02098fd0 & 0x40) != 0) goto LAB_02003650;
      select_previous_rom_browser_page();
      iVar4 = 0;
    }
    else if (iVar4 - 1U < 8) {
LAB_02003568:
      iVar4 = iVar4 + 1;
    }
    else {
      move_rom_browser_highlight_up();
      iVar4 = iVar4 + 1;
    }
    while( true ) {
      if (((uVar1 & 0x20) != 0) && ((DAT_02098fd0 & 0x20) == 0)) {
        select_previous_rom_browser_page();
        arm_veneer_for_nds_swiwaitforvblank();
      }
      if (((uVar1 & 0x10) != 0) && ((DAT_02098fd0 & 0x10) == 0)) {
        select_next_rom_browser_page();
        arm_veneer_for_nds_swiwaitforvblank();
      }
      if (((uVar1 & 2) != 0) && ((DAT_02098fd0 & 2) == 0)) {
        change_working_directory_on_device(&DAT_0208f254);
        enumerate_rom_browser_directory();
        restore_overlay_tilemap_row(DAT_0208f344);
        DAT_0208f344 = 4;
        draw_rom_browser_row_highlight(4);
        arm_veneer_for_nds_swiwaitforvblank();
        arm_veneer_for_nds_swiwaitforvblank();
      }
      if ((uVar1 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (DAT_02098fd0 ^ 1) & 1;
      }
      if ((((uVar1 & 4) != 0) && ((DAT_02098fd0 & 4) == 0)) && (param_1 != 0)) {
        restore_overlay_tilemap_row(DAT_0208f344);
        free_rom_directory_list();
        DAT_02098fd0 = uVar1;
        return 2;
      }
      DAT_02098fe4 = DAT_0208f344 - 4;
      if (uVar3 != 0) {
        iVar2 = open_rom_from_browser_selection(DAT_02098fe4 + DAT_02098fe0 * 0x10);
        arm_veneer_for_nds_swiwaitforvblank();
        arm_veneer_for_nds_swiwaitforvblank();
        arm_veneer_for_nds_swiwaitforvblank();
        if (iVar2 != 0) {
          arm_veneer_for_nds_swiwaitforvblank();
          arm_veneer_for_nds_swiwaitforvblank();
          arm_veneer_for_nds_swiwaitforvblank();
          DAT_02098fd0 = uVar1;
          free_rom_directory_list();
          return 1;
        }
        draw_rom_browser_row_highlight(DAT_0208f344);
      }
      arm_veneer_for_nds_swiwaitforvblank();
      arm_veneer_for_nds_swiwaitforvblank();
      arm_veneer_for_nds_swiwaitforvblank();
      DAT_02098fd0 = uVar1;
      render_rom_directory_page(DAT_02098fe0);
      if (param_1 == 0) goto LAB_02003504;
LAB_02003610:
      write_text_at_tile_position("[A]     : Start Game",0x15,1);
      write_text_at_tile_position("[SELECT]: Continue",0x16,1);
      arm_veneer_for_sample_ds_keys_and_update_repeat_state();
      uVar1 = arm_veneer_for_read_latched_ds_key_state();
      if ((uVar1 & 0x80) != 0) goto LAB_02003518;
LAB_02003644:
      iVar5 = 0;
      if ((uVar1 & 0x40) != 0) break;
LAB_02003650:
      iVar4 = 0;
    }
  } while( true );
}


// 0x02006784  draw_rom_browser_row_highlight

void draw_rom_browser_row_highlight(int param_1)

{
  int iVar1;
  int iVar2;
  
  param_1 = param_1 * 0x40;
  *(undefined2 *)(param_1 + 0x6201000) = 0x4b;
  *(undefined2 *)(param_1 + 0x620103e) = 1099;
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 2;
    *(undefined2 *)(iVar2 + 0x6201002) = 0x4c;
  } while (iVar1 != 0x3c);
  return;
}

