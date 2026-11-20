#ifndef JENESIS_VDP_DS_H
#define JENESIS_VDP_DS_H

#include <stdbool.h>

struct megadrive;

void vdp_ds_init(void);
bool vdp_ds_prepare(const struct megadrive *md);
void vdp_ds_present(void);
void vdp_ds_frame_start(void);
void vdp_ds_hide(void);

#endif
