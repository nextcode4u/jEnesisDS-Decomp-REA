// Analysis annotation
// Role — z80 exchange af
// Basis — dispatch table
// Z80 table entries include base 0x08 (exchange af).

// rea decompile_all
// name: z80_dispatch_01000150
// address: 0x1000150
// body: available
// range: 0x1000150-0x100017f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 z80_dispatch_01000150(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint unaff_r5;
  uint uVar2;
  int iVar3;
  byte *unaff_r11;
  int in_r12;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  int in_stack_00000028;
  uint in_stack_00000044;
  uint in_stack_0000004c;
  int in_stack_00000074;
  int in_stack_00000078;
  uint in_stack_00000080;
  int in_stack_00000084;
  int in_stack_00000088;
  int in_stack_0000008c;
  int in_stack_00000090;
  int in_stack_00000094;
  int in_stack_000000a4;
  
  iVar1 = in_stack_00000028;
  uVar2 = unaff_r5 & 0xffffff28 | in_stack_0000004c & 0xff;
  iVar3 = uVar2 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar3 != 0 && 0x3ffff < (int)uVar2) {
    uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar7;
  }
  bVar4 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar4 = SCARRY4(iVar3,iVar1 * 0x10000);
    iVar3 = iVar3 + iVar1 * 0x10000;
    iVar1 = iVar3;
  }
  if (iVar1 == 0 || iVar1 < 0 != bVar4) {
    if ((in_stack_00000080 & 0x300) == 0) {
      if (in_stack_00000078 < in_stack_00000074) {
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        if (in_stack_00000084 < 1) {
          in_stack_00000084 = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000088,in_stack_00000078);
        in_stack_00000088 = in_stack_00000088 - in_stack_00000078;
        bVar4 = in_stack_00000088 < 0;
        bVar5 = in_stack_00000088 == 0;
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(in_stack_00000088,in_stack_00000084);
            in_stack_00000088 = in_stack_00000088 + in_stack_00000084;
            bVar4 = in_stack_00000088 < 0;
            bVar5 = in_stack_00000088 == 0;
          }
        } while (bVar4 != bVar6);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        if (in_stack_0000008c < 1) {
          in_stack_0000008c = in_stack_00000078;
        }
        bVar6 = SBORROW4(in_stack_00000090,in_stack_00000078);
        in_stack_00000090 = in_stack_00000090 - in_stack_00000078;
        bVar4 = in_stack_00000090 < 0;
        bVar5 = in_stack_00000090 == 0;
        do {
          if (bVar5 || bVar4 != bVar6) {
            bVar6 = SCARRY4(in_stack_00000090,in_stack_0000008c);
            in_stack_00000090 = in_stack_00000090 + in_stack_0000008c;
            bVar4 = in_stack_00000090 < 0;
            bVar5 = in_stack_00000090 == 0;
          }
        } while (bVar4 != bVar6);
      }
      if (in_stack_00000078 < in_stack_00000074) {
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar7;
      }
    }
    return CONCAT44(&stack0x00000028,iVar3 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    if (*unaff_r11 == 0x76) {
      unaff_r11 = unaff_r11 + 1;
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
      in_stack_00000044 = in_stack_00000044 & 0xfffffff3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar7;
}

