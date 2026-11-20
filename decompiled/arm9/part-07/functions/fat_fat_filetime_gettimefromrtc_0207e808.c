// Analysis annotation
// Role — fat fat filetime gettimefromrtc
// Basis — library match
// Matches symbol _FAT_filetime_getTimeFromRTC in libfat-nds 20070127 (filetime.o) after
// masking relocation fields.

// rea decompile_all
// name: FUN_0207e808
// address: 0x207e808
// body: available
// range: 0x207e808-0x207e84d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0207e808(void)

{
  uint uVar1;
  
  if (DAT_027ff01b < 0x28) {
    uVar1 = (uint)DAT_027ff01b;
  }
  else {
    uVar1 = DAT_027ff01b - 0x28;
  }
  if (((uVar1 < 0x18) && (DAT_027ff01c < 0x3c)) && (DAT_027ff01d < 0x3c)) {
    uVar1 = (uVar1 & 0x1f) * 0x800 |
            (DAT_027ff01c & 0x3f) << 5 | (int)(uint)DAT_027ff01d >> 1 & 0x1fU;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

