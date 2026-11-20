/* Genesis region selection and version register in ARM9 DTCM. */
typedef struct {
    unsigned other_fields[7];
    unsigned version_register;
    unsigned ntsc;
} GenesisRegionState;

extern GenesisRegionState genesis_region;

void set_genesis_region_and_version_register(unsigned region_bits)
{
    unsigned ntsc = region_bits == 0x80 || region_bits == 0;
    region_bits |= 0x21;
    genesis_region.version_register = region_bits;
    genesis_region.ntsc = ntsc;
}
