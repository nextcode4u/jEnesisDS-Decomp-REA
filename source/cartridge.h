#ifndef JENESIS_CARTRIDGE_H
#define JENESIS_CARTRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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
};

/* The output must be empty. On failure it stays empty and the result is a
 * static error message. On success, release the cartridge with unload. */
const char *cartridge_load(struct cartridge *output, const char *path);
void cartridge_unload(struct cartridge *cart);

#endif
