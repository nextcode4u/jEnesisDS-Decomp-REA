#include "savestate.h"
#include "megadrive.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { FNV_PRIME = 16777619 };
static const uint32_t fnv_start = UINT32_C(2166136261);
static const uint8_t magic[4] = {'J', 'S', 'C', 2};

struct state_io {
    FILE *file;
    uint32_t hash;
    bool writing;
    bool ok;
};

static uint32_t hash_bytes(uint32_t hash, const uint8_t *bytes, size_t size)
{
    for (size_t i = 0; i < size; ++i)
        hash = (hash ^ bytes[i]) * FNV_PRIME;
    return hash;
}

uint32_t savestate_identity(const struct megadrive *md)
{
    return hash_bytes(fnv_start, md->rom, md->rom_size);
}

static void transfer(struct state_io *io, uint8_t *bytes, size_t size)
{
    if (!io->ok)
        return;
    size_t transferred = io->writing ? fwrite(bytes, 1, size, io->file) :
                                       fread(bytes, 1, size, io->file);
    io->ok = transferred == size;
    if (io->ok)
        io->hash = hash_bytes(io->hash, bytes, size);
}

static uint32_t transfer_u32(struct state_io *io, uint32_t value)
{
    uint8_t bytes[4] = {value, value >> 8, value >> 16, value >> 24};
    transfer(io, bytes, sizeof(bytes));
    return bytes[0] | (uint32_t)bytes[1] << 8 | (uint32_t)bytes[2] << 16 | (uint32_t)bytes[3] << 24;
}

static void transfer_state(struct state_io *io, struct megadrive *md, unsigned version)
{
    // Keep the on-disk format independent of pointers, padding, and host byte order.
#define SCALAR(field) do { (field) = transfer_u32(io, (field)); } while (0)
#define ARRAY_BYTES(field) transfer(io, (uint8_t *)(field), sizeof(field))
    for (unsigned i = 0; i < 8; ++i) {
        SCALAR(md->cpu.d[i]);
        SCALAR(md->cpu.a[i]);
    }
    SCALAR(md->cpu.pc);
    SCALAR(md->cpu.inactive_sp);
    SCALAR(md->cpu.sr);
    SCALAR(md->cpu.instruction_address);
    SCALAR(md->cpu.opcode);
    SCALAR(md->cpu.stopped);
    ARRAY_BYTES(md->ram);
    ARRAY_BYTES(md->z80_ram);
    SCALAR(md->z80_bus_requested);
    SCALAR(md->z80_reset);
    ARRAY_BYTES(md->port_data);
    ARRAY_BYTES(md->port_direction);
    SCALAR(md->pad1_pressed);
    ARRAY_BYTES(md->vram);
    for (unsigned i = 0; i < 64; ++i)
        SCALAR(md->cram[i]);
    for (unsigned i = 0; i < 40; ++i)
        SCALAR(md->vsram[i]);
    ARRAY_BYTES(md->vdp_registers);
    SCALAR(md->vdp_address);
    SCALAR(md->vdp_code);
    SCALAR(md->vdp_command_pending);
    SCALAR(md->vdp_fill_pending);
    SCALAR(md->vblank);
    SCALAR(md->psg_latch);
    for (unsigned i = 0; i < 8; ++i)
        SCALAR(md->psg_registers[i]);
    ARRAY_BYTES(md->ym_address);
    ARRAY_BYTES(md->ym_registers);
    SCALAR(md->ym_busy_cycles);
    SCALAR(md->version);
    SCALAR(md->frame_cycles);
    SCALAR(md->cycle_carry);
    if (version >= 2)
        SCALAR(md->hint_pending);
    else
        md->hint_pending = false;
#undef SCALAR
#undef ARRAY_BYTES
}

static bool transfer_file(FILE *file, uint32_t identity, struct megadrive *md, bool writing)
{
    struct state_io io = {file, fnv_start, writing, true};
    uint8_t header[sizeof(magic)];
    memcpy(header, magic, sizeof(header));
    transfer(&io, header, sizeof(header));
    uint32_t rom_size = transfer_u32(&io, md->rom_size);
    uint32_t stored_identity = transfer_u32(&io, identity);
    if (!io.ok || memcmp(header, magic, sizeof(header) - 1) ||
        (header[3] != 1 && header[3] != magic[3]) ||
        rom_size != md->rom_size || stored_identity != identity)
        return false;
    transfer_state(&io, md, header[3]);
    uint32_t expected = io.hash;
    uint32_t checksum = transfer_u32(&io, expected);
    return io.ok && checksum == expected && (writing || (fgetc(file) == EOF && !ferror(file)));
}

static char *with_suffix(const char *path, const char *suffix)
{
    size_t length = strlen(path) + strlen(suffix) + 1;
    char *result = malloc(length);
    if (result)
        snprintf(result, length, "%s%s", path, suffix);
    return result;
}

static bool file_exists(const char *path)
{
    FILE *file = fopen(path, "rb");
    if (!file)
        return false;
    fclose(file);
    return true;
}

bool savestate_exists(const char *path)
{
    if (file_exists(path))
        return true;
    char *backup = with_suffix(path, ".bak");
    bool exists = backup && file_exists(backup);
    free(backup);
    return exists;
}

bool savestate_save(const char *path, uint32_t identity, struct megadrive *md)
{
    char *temp = with_suffix(path, ".tmp");
    if (!temp)
        return false;
    FILE *file = fopen(temp, "wb");
    bool ok = file && transfer_file(file, identity, md, true);
    if (file && fclose(file))
        ok = false;
    if (ok && rename(temp, path)) {
        // FatFs can reject replacement. Keep the old file until promotion succeeds.
        char *backup = with_suffix(path, ".bak");
        ok = false;
        if (backup && file_exists(path)) {
            remove(backup);
            if (rename(path, backup) == 0) {
                ok = rename(temp, path) == 0;
                if (ok)
                    remove(backup);
                else
                    rename(backup, path);
            }
        }
        free(backup);
    }
    if (!ok)
        remove(temp);
    free(temp);
    return ok;
}

static bool load_file(const char *path, uint32_t identity, struct megadrive *md)
{
    FILE *file = fopen(path, "rb");
    if (!file)
        return false;
    bool ok = transfer_file(file, identity, md, false);
    fclose(file);
    return ok;
}

bool savestate_load(const char *path, uint32_t identity, struct megadrive *md)
{
    struct megadrive *loaded = calloc(1, sizeof(*loaded));
    if (!loaded)
        return false;
    loaded->rom = md->rom;
    loaded->rom_size = md->rom_size;
    bool ok = load_file(path, identity, loaded);
    if (!ok) {
        char *backup = with_suffix(path, ".bak");
        ok = backup && load_file(backup, identity, loaded);
        free(backup);
    }
    if (ok && loaded->psg_latch < 8 &&
        (loaded->frame_cycles == 3420 * 262 / 7 || loaded->frame_cycles == 3420 * 313 / 7) &&
        loaded->cycle_carry < loaded->frame_cycles) {
        loaded->video_revision = md->video_revision + 1;
        *md = *loaded;
    } else {
        ok = false;
    }
    free(loaded);
    return ok;
}
