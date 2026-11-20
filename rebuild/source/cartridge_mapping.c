/* Initialize the cartridge and work RAM backing pointers and address masks. */
typedef struct {
    unsigned char *backing;
    unsigned mask;
} M68kMemoryPage;

extern volatile M68kMemoryPage cartridge_mapping;
extern volatile M68kMemoryPage genesis_work_ram_mapping;

extern unsigned char cartridge_rom_bytes[];
extern unsigned char genesis_work_ram_bytes[];

void initialize_cartridge_and_work_ram_mapping(void)
{
    cartridge_mapping.mask = 0x3fffff;
    genesis_work_ram_mapping.mask = 0xffff;
    cartridge_mapping.backing = cartridge_rom_bytes;
    genesis_work_ram_mapping.backing = genesis_work_ram_bytes;
}
