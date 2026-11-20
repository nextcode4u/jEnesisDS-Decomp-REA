// Analysis annotation
// Role — helper for initialize ds display and overlay
// Basis — call context
// Referenced by initialize ds display and overlay at 0x020011B0. The filename describes
// that caller relationship.

// rea decompile_all
// name: FUN_02006f2c
// address: 0x2006f2c
// body: available
// range: 0x2006f2c-0x2006f5b inclusive
// range: 0x2007024-0x200721f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02006f2c(int param_1)

{
  if (param_1 != 0xff) {
    DAT_020993c4 = 0;
    switch(param_1) {
    case 0:
      DAT_023dc69c = FUN_020077b8;
      DAT_023dc6ac = FUN_02007b4c;
      DAT_023dc6a0 = FUN_02007ed8;
      _DAT_04000008 = 0x820;
      _DAT_0400000a = 0xc29;
      _DAT_0400000c = 0x22;
      DAT_023dc6a4 = 0x22;
      DAT_023dc6a8 = 0x820;
      _DAT_0400000e = 0x42b;
      break;
    case 1:
    case 3:
      DAT_023dc6a8 = 0x8820;
      DAT_023dc69c = FUN_020077b8;
      DAT_023dc6ac = FUN_02007b4c;
      _DAT_04000008 = 0x8820;
      DAT_023dc6a0 = FUN_02007ed8;
      _DAT_0400000a = 0x8c29;
      DAT_023dc6a4 = 0x8022;
      _DAT_0400000c = 0x8022;
      _DAT_0400000e = 0x842b;
      break;
    default:
      DAT_023dc69c = FUN_020077b8;
      DAT_023dc6ac = FUN_02007b4c;
      DAT_023dc6a0 = FUN_02007ed8;
      break;
    case 0x10:
      DAT_023dc69c = FUN_02007830;
      DAT_023dc6ac = FUN_02007c04;
      DAT_023dc6a0 = FUN_02007f94;
      _DAT_04000008 = 0x4820;
      _DAT_0400000a = 0x4c29;
      _DAT_0400000c = 0x4022;
      DAT_023dc6a4 = 0x4022;
      DAT_023dc6a8 = 0x4820;
      _DAT_0400000e = 0x442b;
      break;
    case 0x11:
    case 0x13:
      DAT_023dc6a8 = 0xc820;
      DAT_023dc69c = FUN_020078c8;
      DAT_023dc6ac = FUN_02007ce4;
      DAT_023dc6a0 = FUN_02008078;
      DAT_023dc6a4 = 0xc022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = param_1;
      _DAT_0400000e = 0xc42b;
      _DAT_04000008 = 0xc820;
      _DAT_0400000a = 0xcc29;
      _DAT_0400000c = 0xc022;
      return;
    case 0x30:
    case 0x31:
      DAT_023dc69c = FUN_0200797c;
      DAT_023dc6ac = FUN_02007ddc;
      DAT_023dc6a0 = FUN_02008174;
      DAT_023dc6a8 = 0x4820;
      DAT_020993c4 = 1;
      DAT_023dc6a4 = 0x4022;
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
      DAT_0208f350 = param_1;
      _DAT_04000008 = 0x4820;
      _DAT_0400000a = 0x4c29;
      _DAT_0400000c = 0x4022;
      _DAT_0400000e = 0x442b;
      return;
    }
                    /* WARNING (jumptable): Read-only address (ram,0x0208f350) is written */
                    /* WARNING: Read-only address (ram,0x0208f350) is written */
    DAT_0208f350 = param_1;
    return;
  }
  DAT_0208f350 = 0xff;
  return;
}

