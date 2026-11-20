#include "cartridge.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {
    ROM_HEADER_SIZE = 0x200,
    SYSTEM_NAME = 0x100,
    INTERNATIONAL_TITLE = 0x150,
    CHECKSUM = 0x18e,
    SRAM = 0x1b0,
    REGION = 0x1f0,
    SMD_HEADER_SIZE = 0x200,
    SMD_BLOCK_SIZE = 0x4000,
    MAX_FILE_SIZE = 0x306800,
};

static bool has_sega_header(const uint8_t *bytes)
{
    const uint8_t *name = bytes + SYSTEM_NAME;
    const uint8_t *end = name + 16;
    while (name < end && *name == ' ')
        ++name;
    return end - name >= 4 && memcmp(name, "SEGA", 4) == 0;
}

static bool read_smd(FILE *file, uint8_t *destination, size_t size)
{
    uint8_t *block = malloc(SMD_BLOCK_SIZE);
    if (!block)
        return false;
    bool ok = true;
    for (size_t offset = 0; offset < size; offset += SMD_BLOCK_SIZE) {
        if (fread(block, 1, SMD_BLOCK_SIZE, file) != SMD_BLOCK_SIZE) {
            ok = false;
            break;
        }
        for (size_t i = 0; i < SMD_BLOCK_SIZE / 2; ++i) {
            destination[offset + 2 * i] = block[SMD_BLOCK_SIZE / 2 + i];
            destination[offset + 2 * i + 1] = block[i];
        }
    }
    free(block);
    return ok;
}

static void copy_header_text(char *dest, const uint8_t *source, size_t width)
{
    bool space = false;
    size_t length = 0;
    for (size_t i = 0; i < width; ++i) {
        if (source[i] <= ' ' || source[i] > '~') {
            space = length > 0;
        } else {
            if (space)
                dest[length++] = ' ';
            dest[length++] = (char)source[i];
            space = false;
        }
    }
    dest[length] = '\0';
}

static uint16_t rom_checksum(const uint8_t *data, size_t size)
{
    uint32_t sum = 0;
    for (size_t i = ROM_HEADER_SIZE; i + 1 < size; i += 2)
        sum += ((uint16_t)data[i] << 8) | data[i + 1];
    if (size % 2)
        sum += (uint16_t)data[size - 1] << 8;
    return (uint16_t)sum;
}

static uint32_t read_be32(const uint8_t *data)
{
    return (uint32_t)data[0] << 24 | (uint32_t)data[1] << 16 |
           (uint32_t)data[2] << 8 | data[3];
}

static void read_sram_header(struct cartridge *cart)
{
    const uint8_t *header = cart->data + SRAM;
    if (header[0] != 'R' || header[1] != 'A' || header[2] == 0xe8)
        return;
    uint32_t start = read_be32(header + 4);
    uint32_t end = read_be32(header + 8);
    // The original .srm format stores full bus words, including the unused lane.
    if (start >= end || end >= 0x400000)
        return;
    start &= ~1U;
    end |= 1;
    if (end - start >= CARTRIDGE_SRAM_CAPACITY)
        return;
    cart->sram_start = start;
    cart->sram_size = end - start + 1;
}

static const char *load_stream(struct cartridge *cart, FILE *file)
{
    if (fseek(file, 0, SEEK_END) != 0)
        return "Cannot seek to end of ROM";
    long length = ftell(file);
    if (length < ROM_HEADER_SIZE || length > MAX_FILE_SIZE)
        return "Unsupported ROM size";
    uint8_t header[ROM_HEADER_SIZE];
    if (fseek(file, 0, SEEK_SET) != 0 ||
        fread(header, 1, sizeof(header), file) != sizeof(header))
        return "Cannot read ROM header";

    cart->size = (size_t)length;
    if (has_sega_header(header)) {
        cart->format = CARTRIDGE_BINARY;
        if (fseek(file, 0, SEEK_SET) != 0)
            return "Cannot rewind ROM";
    } else {
        cart->format = CARTRIDGE_SMD;
        cart->size -= SMD_HEADER_SIZE;
        if (cart->size == 0 || cart->size % SMD_BLOCK_SIZE != 0)
            return "Invalid BIN or SMD header";
    }

    cart->data = malloc(cart->size);
    if (!cart->data)
        return "Not enough memory for ROM";
    if (cart->format == CARTRIDGE_SMD) {
        if (!read_smd(file, cart->data, cart->size))
            return "Cannot unpack SMD ROM";
    } else if (fread(cart->data, 1, cart->size, file) != cart->size) {
        return "Cannot read complete ROM";
    }
    if (!has_sega_header(cart->data))
        return "Missing SEGA header";

    copy_header_text(cart->international_title, cart->data + INTERNATIONAL_TITLE, 48);
    copy_header_text(cart->region, cart->data + REGION, 16);
    cart->header_checksum = ((uint16_t)cart->data[CHECKSUM] << 8) |
                            cart->data[CHECKSUM + 1];
    cart->computed_checksum = rom_checksum(cart->data, cart->size);
    read_sram_header(cart);
    return NULL;
}

const char *cartridge_load(struct cartridge *output, const char *path)
{
    FILE *file = fopen(path, "rb");
    if (!file)
        return "Cannot open ROM";
    struct cartridge cart = {0};
    const char *error = load_stream(&cart, file);
    fclose(file);
    if (error)
        cartridge_unload(&cart);
    else
        *output = cart;
    return error;
}

void cartridge_unload(struct cartridge *cart)
{
    free(cart->data);
    *cart = (struct cartridge){0};
}
