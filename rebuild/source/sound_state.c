/* Sound register mirrors used by the save-state writer. */
extern unsigned char ym2612_bank_0_mirror[];
extern unsigned char ym2612_bank_1_mirror[];
extern unsigned char psg_register_mirror[];

unsigned char *get_ym2612_bank_0_mirror_for_savestate(void)
{
    return ym2612_bank_0_mirror;
}

unsigned char *get_ym2612_bank_1_mirror_for_savestate(void)
{
    return ym2612_bank_1_mirror;
}

unsigned char *get_psg_mirror_for_savestate(void)
{
    return psg_register_mirror;
}
