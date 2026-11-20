// Analysis annotation
// Role — newlib memalign r
// Basis — library match
// Matches symbol _memalign_r in devkitARM r20 libc.a (lib_a-malignr.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02082590
// address: 0x2082590
// body: available
// range: 0x2082590-0x20826fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_02082590(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (param_2 < 9) {
    iVar1 = FUN_0208274c();
  }
  else {
    uVar4 = param_3 + 0xb;
    if (param_2 < 0x10) {
      param_2 = 0x10;
    }
    if (uVar4 < 0x17) {
      uVar6 = 0x10;
      uVar4 = 0;
    }
    else {
      uVar6 = uVar4 & 0xfffffff8;
      uVar4 = uVar4 >> 0x1f;
    }
    if (uVar6 < param_3) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      iVar2 = FUN_0208274c(param_1,param_2 + uVar6 + 0x10);
      if (iVar2 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_020830f0(param_1);
        FUN_0208047c(iVar2,param_2);
        iVar1 = iVar2 + -8;
        if (extraout_r1 != 0) {
          iVar5 = ((iVar2 + param_2) - 1 & -param_2) - 8;
          uVar4 = iVar5 - iVar1;
          if ((int)uVar4 < 0x10) {
            uVar4 = (iVar5 + param_2) - iVar1;
            iVar5 = iVar5 + param_2;
          }
          iVar1 = iVar5;
          uVar3 = (*(uint *)(iVar2 + -4) & 0xfffffffc) - uVar4;
          *(uint *)(iVar1 + 4) = uVar3 | 1;
          iVar5 = iVar1 + uVar3;
          *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 1;
          *(uint *)(iVar2 + -4) = uVar4 | *(uint *)(iVar2 + -4) & 1;
          FUN_020818d4(param_1,iVar2);
        }
        uVar4 = (*(uint *)(iVar1 + 4) & 0xfffffffc) - uVar6;
        if (0xf < (int)uVar4) {
          *(uint *)(uVar6 + iVar1 + 4) = uVar4 | 1;
          *(uint *)(iVar1 + 4) = uVar6 | *(uint *)(iVar1 + 4) & 1;
          FUN_020818d4(param_1,uVar6 + iVar1 + 8);
        }
        FUN_020830f4(param_1);
        iVar1 = iVar1 + 8;
      }
    }
    else {
      iVar1 = 0;
      *param_1 = 0xc;
    }
  }
  return iVar1;
}

