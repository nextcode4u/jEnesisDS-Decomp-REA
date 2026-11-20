/* ARM9 tile copies 2 across — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x01004300  copy_sprite_tiles_2x1

void copy_sprite_tiles_2x1(uint *source_pattern_words,uint *destination_obj_tile_words)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = source_pattern_words[9];
  uVar2 = source_pattern_words[10];
  uVar3 = source_pattern_words[0xb];
  uVar4 = source_pattern_words[0xc];
  uVar5 = source_pattern_words[0xd];
  uVar6 = source_pattern_words[0xe];
  uVar7 = source_pattern_words[0xf];
  *destination_obj_tile_words = source_pattern_words[8] >> 0x10 | source_pattern_words[8] << 0x10;
  destination_obj_tile_words[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[1];
  uVar2 = source_pattern_words[2];
  uVar3 = source_pattern_words[3];
  uVar4 = source_pattern_words[4];
  uVar5 = source_pattern_words[5];
  uVar6 = source_pattern_words[6];
  uVar7 = source_pattern_words[7];
  destination_obj_tile_words[8] = *source_pattern_words >> 0x10 | *source_pattern_words << 0x10;
  destination_obj_tile_words[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01004530  copy_sprite_tiles_2x2

void copy_sprite_tiles_2x2(uint *source_pattern_words,uint *destination_obj_tile_words)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = source_pattern_words[0x11];
  uVar2 = source_pattern_words[0x12];
  uVar3 = source_pattern_words[0x13];
  uVar4 = source_pattern_words[0x14];
  uVar5 = source_pattern_words[0x15];
  uVar6 = source_pattern_words[0x16];
  uVar7 = source_pattern_words[0x17];
  *destination_obj_tile_words = source_pattern_words[0x10] >> 0x10 | source_pattern_words[0x10] << 0x10;
  destination_obj_tile_words[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[1];
  uVar2 = source_pattern_words[2];
  uVar3 = source_pattern_words[3];
  uVar4 = source_pattern_words[4];
  uVar5 = source_pattern_words[5];
  uVar6 = source_pattern_words[6];
  uVar7 = source_pattern_words[7];
  destination_obj_tile_words[8] = *source_pattern_words >> 0x10 | *source_pattern_words << 0x10;
  destination_obj_tile_words[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x19];
  uVar2 = source_pattern_words[0x1a];
  uVar3 = source_pattern_words[0x1b];
  uVar4 = source_pattern_words[0x1c];
  uVar5 = source_pattern_words[0x1d];
  uVar6 = source_pattern_words[0x1e];
  uVar7 = source_pattern_words[0x1f];
  destination_obj_tile_words[0x10] = source_pattern_words[0x18] >> 0x10 | source_pattern_words[0x18] << 0x10;
  destination_obj_tile_words[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[9];
  uVar2 = source_pattern_words[10];
  uVar3 = source_pattern_words[0xb];
  uVar4 = source_pattern_words[0xc];
  uVar5 = source_pattern_words[0xd];
  uVar6 = source_pattern_words[0xe];
  uVar7 = source_pattern_words[0xf];
  destination_obj_tile_words[0x18] = source_pattern_words[8] >> 0x10 | source_pattern_words[8] << 0x10;
  destination_obj_tile_words[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01004970  copy_sprite_tiles_2x3

void copy_sprite_tiles_2x3(uint *source_pattern_words,uint *destination_obj_tile_words)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = source_pattern_words[0x19];
  uVar2 = source_pattern_words[0x1a];
  uVar3 = source_pattern_words[0x1b];
  uVar4 = source_pattern_words[0x1c];
  uVar5 = source_pattern_words[0x1d];
  uVar6 = source_pattern_words[0x1e];
  uVar7 = source_pattern_words[0x1f];
  *destination_obj_tile_words = source_pattern_words[0x18] >> 0x10 | source_pattern_words[0x18] << 0x10;
  destination_obj_tile_words[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[1];
  uVar2 = source_pattern_words[2];
  uVar3 = source_pattern_words[3];
  uVar4 = source_pattern_words[4];
  uVar5 = source_pattern_words[5];
  uVar6 = source_pattern_words[6];
  uVar7 = source_pattern_words[7];
  destination_obj_tile_words[8] = *source_pattern_words >> 0x10 | *source_pattern_words << 0x10;
  destination_obj_tile_words[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x21];
  uVar2 = source_pattern_words[0x22];
  uVar3 = source_pattern_words[0x23];
  uVar4 = source_pattern_words[0x24];
  uVar5 = source_pattern_words[0x25];
  uVar6 = source_pattern_words[0x26];
  uVar7 = source_pattern_words[0x27];
  destination_obj_tile_words[0x10] = source_pattern_words[0x20] >> 0x10 | source_pattern_words[0x20] << 0x10;
  destination_obj_tile_words[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[9];
  uVar2 = source_pattern_words[10];
  uVar3 = source_pattern_words[0xb];
  uVar4 = source_pattern_words[0xc];
  uVar5 = source_pattern_words[0xd];
  uVar6 = source_pattern_words[0xe];
  uVar7 = source_pattern_words[0xf];
  destination_obj_tile_words[0x18] = source_pattern_words[8] >> 0x10 | source_pattern_words[8] << 0x10;
  destination_obj_tile_words[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x29];
  uVar2 = source_pattern_words[0x2a];
  uVar3 = source_pattern_words[0x2b];
  uVar4 = source_pattern_words[0x2c];
  uVar5 = source_pattern_words[0x2d];
  uVar6 = source_pattern_words[0x2e];
  uVar7 = source_pattern_words[0x2f];
  destination_obj_tile_words[0x20] = source_pattern_words[0x28] >> 0x10 | source_pattern_words[0x28] << 0x10;
  destination_obj_tile_words[0x21] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x22] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x23] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x24] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x25] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x26] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x27] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x11];
  uVar2 = source_pattern_words[0x12];
  uVar3 = source_pattern_words[0x13];
  uVar4 = source_pattern_words[0x14];
  uVar5 = source_pattern_words[0x15];
  uVar6 = source_pattern_words[0x16];
  uVar7 = source_pattern_words[0x17];
  destination_obj_tile_words[0x28] = source_pattern_words[0x10] >> 0x10 | source_pattern_words[0x10] << 0x10;
  destination_obj_tile_words[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  destination_obj_tile_words[0x30] = 0;
  destination_obj_tile_words[0x31] = 0;
  destination_obj_tile_words[0x32] = 0;
  destination_obj_tile_words[0x33] = 0;
  destination_obj_tile_words[0x34] = 0;
  destination_obj_tile_words[0x35] = 0;
  destination_obj_tile_words[0x36] = 0;
  destination_obj_tile_words[0x37] = 0;
  destination_obj_tile_words[0x38] = 0;
  destination_obj_tile_words[0x39] = 0;
  destination_obj_tile_words[0x3a] = 0;
  destination_obj_tile_words[0x3b] = 0;
  destination_obj_tile_words[0x3c] = 0;
  destination_obj_tile_words[0x3d] = 0;
  destination_obj_tile_words[0x3e] = 0;
  destination_obj_tile_words[0x3f] = 0;
  return;
}


// 0x01004ff0  copy_sprite_tiles_2x4

void copy_sprite_tiles_2x4(uint *source_pattern_words,uint *destination_obj_tile_words)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = source_pattern_words[0x21];
  uVar2 = source_pattern_words[0x22];
  uVar3 = source_pattern_words[0x23];
  uVar4 = source_pattern_words[0x24];
  uVar5 = source_pattern_words[0x25];
  uVar6 = source_pattern_words[0x26];
  uVar7 = source_pattern_words[0x27];
  *destination_obj_tile_words = source_pattern_words[0x20] >> 0x10 | source_pattern_words[0x20] << 0x10;
  destination_obj_tile_words[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[1];
  uVar2 = source_pattern_words[2];
  uVar3 = source_pattern_words[3];
  uVar4 = source_pattern_words[4];
  uVar5 = source_pattern_words[5];
  uVar6 = source_pattern_words[6];
  uVar7 = source_pattern_words[7];
  destination_obj_tile_words[8] = *source_pattern_words >> 0x10 | *source_pattern_words << 0x10;
  destination_obj_tile_words[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x29];
  uVar2 = source_pattern_words[0x2a];
  uVar3 = source_pattern_words[0x2b];
  uVar4 = source_pattern_words[0x2c];
  uVar5 = source_pattern_words[0x2d];
  uVar6 = source_pattern_words[0x2e];
  uVar7 = source_pattern_words[0x2f];
  destination_obj_tile_words[0x10] = source_pattern_words[0x28] >> 0x10 | source_pattern_words[0x28] << 0x10;
  destination_obj_tile_words[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[9];
  uVar2 = source_pattern_words[10];
  uVar3 = source_pattern_words[0xb];
  uVar4 = source_pattern_words[0xc];
  uVar5 = source_pattern_words[0xd];
  uVar6 = source_pattern_words[0xe];
  uVar7 = source_pattern_words[0xf];
  destination_obj_tile_words[0x18] = source_pattern_words[8] >> 0x10 | source_pattern_words[8] << 0x10;
  destination_obj_tile_words[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x31];
  uVar2 = source_pattern_words[0x32];
  uVar3 = source_pattern_words[0x33];
  uVar4 = source_pattern_words[0x34];
  uVar5 = source_pattern_words[0x35];
  uVar6 = source_pattern_words[0x36];
  uVar7 = source_pattern_words[0x37];
  destination_obj_tile_words[0x20] = source_pattern_words[0x30] >> 0x10 | source_pattern_words[0x30] << 0x10;
  destination_obj_tile_words[0x21] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x22] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x23] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x24] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x25] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x26] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x27] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x11];
  uVar2 = source_pattern_words[0x12];
  uVar3 = source_pattern_words[0x13];
  uVar4 = source_pattern_words[0x14];
  uVar5 = source_pattern_words[0x15];
  uVar6 = source_pattern_words[0x16];
  uVar7 = source_pattern_words[0x17];
  destination_obj_tile_words[0x28] = source_pattern_words[0x10] >> 0x10 | source_pattern_words[0x10] << 0x10;
  destination_obj_tile_words[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x39];
  uVar2 = source_pattern_words[0x3a];
  uVar3 = source_pattern_words[0x3b];
  uVar4 = source_pattern_words[0x3c];
  uVar5 = source_pattern_words[0x3d];
  uVar6 = source_pattern_words[0x3e];
  uVar7 = source_pattern_words[0x3f];
  destination_obj_tile_words[0x30] = source_pattern_words[0x38] >> 0x10 | source_pattern_words[0x38] << 0x10;
  destination_obj_tile_words[0x31] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x32] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x33] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x34] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x35] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x36] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x37] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = source_pattern_words[0x19];
  uVar2 = source_pattern_words[0x1a];
  uVar3 = source_pattern_words[0x1b];
  uVar4 = source_pattern_words[0x1c];
  uVar5 = source_pattern_words[0x1d];
  uVar6 = source_pattern_words[0x1e];
  uVar7 = source_pattern_words[0x1f];
  destination_obj_tile_words[0x38] = source_pattern_words[0x18] >> 0x10 | source_pattern_words[0x18] << 0x10;
  destination_obj_tile_words[0x39] = uVar1 >> 0x10 | uVar1 << 0x10;
  destination_obj_tile_words[0x3a] = uVar2 >> 0x10 | uVar2 << 0x10;
  destination_obj_tile_words[0x3b] = uVar3 >> 0x10 | uVar3 << 0x10;
  destination_obj_tile_words[0x3c] = uVar4 >> 0x10 | uVar4 << 0x10;
  destination_obj_tile_words[0x3d] = uVar5 >> 0x10 | uVar5 << 0x10;
  destination_obj_tile_words[0x3e] = uVar6 >> 0x10 | uVar6 << 0x10;
  destination_obj_tile_words[0x3f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}

