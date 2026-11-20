/* Default libfat DLDI interface. Flashcart tools patch this reserved area. */
typedef int (*DldiCallback)(void);

typedef struct {
    unsigned magic;
    char signature[8];
    unsigned char version;
    unsigned char driver_size_log2;
    unsigned char fixup_flags;
    unsigned char allocated_size_log2;
    char name[48];
    const void *image_start;
    const void *image_end;
    const void *glue_start;
    const void *glue_end;
    const void *got_start;
    const void *got_end;
    const void *bss_start;
    const void *bss_end;
    char device_type[4];
    unsigned features;
    DldiCallback startup;
    DldiCallback is_inserted;
    DldiCallback read_sectors;
    DldiCallback write_sectors;
    DldiCallback clear_status;
    DldiCallback shutdown;
} DldiHeader;

extern const unsigned char dldi_reservation_end[];

static int dldi_no_device(void)
{
    return 0;
}

const DldiHeader dldi_placeholder = {
    .magic = 0xbf8da5ed,
    .signature = " Chishm",
    .version = 1,
    .driver_size_log2 = 15,
    .allocated_size_log2 = 15,
    .name = "Default (No interface)",
    .image_start = &dldi_placeholder,
    .image_end = dldi_reservation_end,
    .device_type = "DLDI",
    .startup = dldi_no_device,
    .is_inserted = dldi_no_device,
    .read_sectors = dldi_no_device,
    .write_sectors = dldi_no_device,
    .clear_status = dldi_no_device,
    .shutdown = dldi_no_device,
};
