/* Z80 P/V, S and Z flags indexed by an unsigned byte. */
#include <stdint.h>

#define FOLD_PARITY(value) \
    ((value) ^ ((value) >> 1) ^ ((value) >> 2) ^ ((value) >> 3) \
     ^ ((value) >> 4) ^ ((value) >> 5) ^ ((value) >> 6) ^ ((value) >> 7))
#define PARITY_FLAGS(value) ((FOLD_PARITY(value) & 1u) ? 0 : 0x04)
#define RESULT_FLAGS(value) ((value) & 0x80u) | ((value) == 0 ? 0x40 : 0) | PARITY_FLAGS(value)

#define ROW(base, flags) \
    flags((base) + 0), flags((base) + 1), flags((base) + 2), flags((base) + 3), \
    flags((base) + 4), flags((base) + 5), flags((base) + 6), flags((base) + 7), \
    flags((base) + 8), flags((base) + 9), flags((base) + 10), flags((base) + 11), \
    flags((base) + 12), flags((base) + 13), flags((base) + 14), flags((base) + 15)
#define BYTE_TABLE(flags) \
    ROW(0x00, flags), ROW(0x10, flags), ROW(0x20, flags), ROW(0x30, flags), \
    ROW(0x40, flags), ROW(0x50, flags), ROW(0x60, flags), ROW(0x70, flags), \
    ROW(0x80, flags), ROW(0x90, flags), ROW(0xa0, flags), ROW(0xb0, flags), \
    ROW(0xc0, flags), ROW(0xd0, flags), ROW(0xe0, flags), ROW(0xf0, flags)

const uint8_t z80_parity_flags[256]
    __attribute__((section(".rodata.z80_parity_flags"))) = {BYTE_TABLE(PARITY_FLAGS)};
const uint8_t z80_result_flags[256]
    __attribute__((section(".rodata.z80_result_flags"))) = {BYTE_TABLE(RESULT_FLAGS)};
