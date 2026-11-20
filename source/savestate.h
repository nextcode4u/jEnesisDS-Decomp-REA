#ifndef JENESIS_SAVESTATE_H
#define JENESIS_SAVESTATE_H

#include <stdbool.h>
#include <stdint.h>

struct megadrive;

uint32_t savestate_identity(const struct megadrive *md);
bool savestate_exists(const char *path);
bool savestate_save(const char *path, uint32_t identity, struct megadrive *md);
bool savestate_load(const char *path, uint32_t identity, struct megadrive *md);

void saveram_load(const char *path, struct megadrive *md);
bool saveram_flush(const char *path, struct megadrive *md);

#endif
