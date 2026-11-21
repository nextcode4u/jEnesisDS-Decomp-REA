#ifndef JENESIS_CARTRIDGE_H
#define JENESIS_CARTRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// ARM9 can load a guest word directly when its bytes are stored in host order.
// Host fixtures default to raw bytes. The native-memory check exercises ARM9's layout.
#if (defined(__NDS__) || defined(JENESIS_NATIVE_WORDS)) && \
    __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#define M68K_NATIVE_WORDS 1
#else
#define M68K_NATIVE_WORDS 0
#endif

static inline uint8_t cartridge_byte(const uint8_t *data, unsigned offset)
{
    return data[offset ^ M68K_NATIVE_WORDS];
}

static inline uint16_t cartridge_aligned_word(const uint8_t *data, unsigned offset)
{
    if (M68K_NATIVE_WORDS) {
        uint16_t word;
        __builtin_memcpy(&word, __builtin_assume_aligned(data + offset, 2), sizeof(word));
        return word;
    }
    return (uint16_t)data[offset] << 8 | data[offset + 1];
}

enum { CARTRIDGE_SRAM_CAPACITY = 0x10000 };

enum cartridge_format {
    CARTRIDGE_BINARY,
    CARTRIDGE_SMD,
};

struct cartridge {
    uint8_t *data;
    size_t size;
    enum cartridge_format format;
    char international_title[49];
    char region[17];
    uint16_t header_checksum;
    uint16_t computed_checksum;
    uint32_t sram_start, sram_size;
};

/* The output must be empty. On failure it stays empty and the result is a
 * static error message. On success, release the cartridge with unload. */
const char *cartridge_load(struct cartridge *output, const char *path);
void cartridge_unload(struct cartridge *cart);

#endif
