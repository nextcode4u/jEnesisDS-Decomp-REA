// Analysis annotation
// Role — transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators.

// rea decompile_all
// name: FUN_02000bfc
// address: 0x2000bfc
// body: available
// range: 0x2000bfc-0x2000c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000bfc(void)

{
  uRam0b00057d = (undefined1)((uint3)_DAT_0b000558 >> 8);
  uRam0b00057e = (undefined1)((uint3)_DAT_0b000558 >> 0x10);
  uRam0b000561 = 0;
  uRam0b000562 = 0;
  uRam0b000563 = 0;
  uRam0b00057c = (char)_DAT_0b000558;
  uRam0b00057f = DAT_0b00055b;
  uRam0b000590 = 0;
  uRam0b000591 = 0;
  uRam0b000592 = 0;
  uRam0b000593 = 0;
  uRam0b000594 = 0;
  uRam0b000595 = 0;
  uRam0b000596 = 0;
  uRam0b000597 = 0;
  uRam0b00059c = 0;
  uRam0b00059d = 0;
  uRam0b00059e = 0;
  uRam0b00059f = 0;
  uRam0b0005fc = 0;
  uRam0b0005fd = 0;
  uRam0b0005fe = 0;
  uRam0b0005ff = 0;
  uRam0b000578 = (char)_DAT_0b000558;
  uRam0b000579 = uRam0b00057d;
  uRam0b00057a = uRam0b00057e;
  uRam0b00057b = DAT_0b00055b;
  uRam0b0005cc = 0;
  uRam0b0005db = 0;
  uRam0b0005cd = 0;
  uRam0b0005ce = 0;
  uRam0b0005cf = 0;
  uRam0b0005dc = 0;
  uRam0b0005dd = 0;
  uRam0b0005de = 0;
  uRam0b0005df = 0;
  uRam0b0005e0 = 0;
  uRam0b0005e1 = 0;
  uRam0b0005e2 = 0;
  uRam0b0005e3 = 0;
  uRam0b0005e4 = 0;
  uRam0b0005e5 = 0;
  uRam0b0005e6 = 0;
  uRam0b0005e7 = 0;
  uRam0b0005e8 = 0;
  uRam0b0005e9 = 0;
  uRam0b0005ea = 0;
  uRam0b0005eb = 0;
  uRam0b0005d4 = 0;
  uRam0b0005d5 = 0;
  uRam0b0005d6 = 0;
  uRam0b0005d7 = 0;
  uRam0b0005d8 = 0;
  uRam0b0005d9 = 0;
  uRam0b0005da = 0;
  return;
}

