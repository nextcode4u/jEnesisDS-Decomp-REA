// Analysis annotation
// Role — z80 ed ld i a
// Basis — dispatch table
// Z80 table entries include ED 0x47 (ld i a).

// rea decompile_all
// name: z80_dispatch_0201038c
// address: 0x201038c
// body: available
// range: 0x201038c-0x201039f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 z80_dispatch_0201038c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_r5;
  int iVar2;
  byte *unaff_r11;
  int in_r12;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  int in_stack_00000028;
  uint in_stack_00000044;
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
  iVar2 = unaff_r5 + -0x90000;
                    /* WARNING: Could not recover jumptable at 0x02010398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar2 != 0 && 0x8ffff < unaff_r5) {
    uVar6 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
    return uVar6;
  }
  bVar3 = false;
  if (0 < in_stack_00000028) {
    in_stack_00000028 = 0;
    bVar3 = SCARRY4(iVar2,iVar1 * 0x10000);
    iVar2 = iVar2 + iVar1 * 0x10000;
    iVar1 = iVar2;
  }
  if (iVar1 == 0 || iVar1 < 0 != bVar3) {
    if ((in_stack_00000080 & 0x300) == 0) {
      if (in_stack_00000078 < in_stack_00000074) {
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
        return uVar6;
      }
    }
    else {
      if ((in_stack_00000080 & 0x100) != 0) {
        if (in_stack_00000084 < 1) {
          in_stack_00000084 = in_stack_00000078;
        }
        bVar5 = SBORROW4(in_stack_00000088,in_stack_00000078);
        in_stack_00000088 = in_stack_00000088 - in_stack_00000078;
        bVar3 = in_stack_00000088 < 0;
        bVar4 = in_stack_00000088 == 0;
        do {
          if (bVar4 || bVar3 != bVar5) {
            bVar5 = SCARRY4(in_stack_00000088,in_stack_00000084);
            in_stack_00000088 = in_stack_00000088 + in_stack_00000084;
            bVar3 = in_stack_00000088 < 0;
            bVar4 = in_stack_00000088 == 0;
          }
        } while (bVar3 != bVar5);
      }
      if ((in_stack_00000080 & 0x200) != 0) {
        if (in_stack_0000008c < 1) {
          in_stack_0000008c = in_stack_00000078;
        }
        bVar5 = SBORROW4(in_stack_00000090,in_stack_00000078);
        in_stack_00000090 = in_stack_00000090 - in_stack_00000078;
        bVar3 = in_stack_00000090 < 0;
        bVar4 = in_stack_00000090 == 0;
        do {
          if (bVar4 || bVar3 != bVar5) {
            bVar5 = SCARRY4(in_stack_00000090,in_stack_0000008c);
            in_stack_00000090 = in_stack_00000090 + in_stack_0000008c;
            bVar3 = in_stack_00000090 < 0;
            bVar4 = in_stack_00000090 == 0;
          }
        } while (bVar3 != bVar5);
      }
      if (in_stack_00000078 < in_stack_00000074) {
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (**(code **)(in_stack_00000094 + (uint)*unaff_r11 * 4))();
        return uVar6;
      }
    }
    return CONCAT44(&stack0x00000028,iVar2 >> 0x10);
  }
  if ((in_stack_000000a4 != 0) && ((in_stack_00000044 & 8) != 0)) {
    if (*unaff_r11 == 0x76) {
      unaff_r11 = unaff_r11 + 1;
    }
    if ((in_stack_00000044 & 3) == 2) {
      *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
    }
    else {
      *(char *)(in_r12 + -1) = (char)((uint)((int)unaff_r11 - param_4) >> 8);
      *(char *)(in_r12 + -2) = (char)((int)unaff_r11 - param_4);
      unaff_r11 = (byte *)(param_4 + 0x38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_3 + (uint)*unaff_r11 * 4))();
  return uVar6;
}

