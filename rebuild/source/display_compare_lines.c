#include <stdint.h>

/* VCOUNT targets for toggling the display interrupt phases. The last slot
 * accounts for the two alignment bytes before the next read-only object. */
const uint16_t ds_display_compare_lines[4] = {192, 255, 0, UINT16_MAX};
