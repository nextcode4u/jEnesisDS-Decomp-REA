"""Place unchanged libfat-nds 20070127 objects at the release's ARM9 addresses."""
from pathlib import Path
import shutil

from r20 import run, tool


# The SDK supplied these members. The directory object's pooled strings still
# need reconstruction. The default DLDI area already builds from recovered C.
LIBFAT_TEXT = (
    (0x02072C50, 0x02072CEC, "libfat"),
    (0x02072CEC, 0x020731BC, "partition"),
    (0x020731BC, 0x02073274, "disc"),
    (0x02073274, 0x02073290, "io_m3cf"),
    (0x02073290, 0x020737B8, "io_m3sd"),
    (0x020737B8, 0x020737CC, "io_mpcf"),
    (0x020737CC, 0x020740F8, "io_njsd"),
    (0x020740F8, 0x0207478C, "io_nmmc"),
    (0x0207478C, 0x020747A4, "io_sccf"),
    (0x020747A4, 0x02074B2C, "io_scsd"),
    (0x02074B2C, 0x02074D84, "io_sd_common"),
    (0x0207CDC0, 0x0207CE80, "io_scsd_s"),
    (0x0207CE80, 0x0207D140, "cache"),
    (0x0207D140, 0x0207D848, "fatdir"),
    (0x0207D848, 0x0207E470, "fatfile"),
    (0x0207E470, 0x0207E808, "file_allocation_table"),
    (0x0207E808, 0x0207E8E4, "filetime"),
    (0x0207E8E4, 0x0207EBF0, "io_cf_common"),
    (0x0207EBF0, 0x0207EC90, "io_m3_common"),
    (0x0207EC90, 0x0207ECA8, "io_sc_common"),
)
LIBFAT_REGIONS = (
    *((start, end, f"fat-{member}.o(.text)") for start, end, member in LIBFAT_TEXT),
    (0x0208ECA0, 0x0208ECEC, "fat-libfat.o(.rodata)"),
    (0x0208ECEC, 0x0208ED30, "fat-io_m3cf.o(.rodata)"),
    (0x0208ED30, 0x0208ED50, "fat-io_m3sd.o(.rodata)"),
    (0x0208ED50, 0x0208ED94, "fat-io_mpcf.o(.rodata)"),
    (0x0208ED94, 0x0208EDC4, "fat-io_njsd.o(.rodata)"),
    (0x0208EDC4, 0x0208EDE4, "fat-io_nmmc.o(.rodata)"),
    (0x0208EDE4, 0x0208EE28, "fat-io_sccf.o(.rodata)"),
    (0x0208EE28, 0x0208EE48, "fat-io_scsd.o(.rodata)"),
    (0x0208F2F8, 0x0208F304, "fat-libfat.o(.rodata.str1.4) fat-partition.o(.rodata.str1.4)"),
    (0x0208F360, 0x0208F364, "fat-partition.o(.data)"),
    (0x0208F364, 0x0208F384, "fat-disc.o(.data)"),
    (0x0208F384, 0x0208F390, "fat-io_nmmc.o(.data)"),
)
LIBFAT_BSS = (
    (0x020B4C5C, "partition"),
    (0x020B4C6C, "io_m3sd"),
    (0x020B4C70, "io_njsd"),
    (0x020B4C78, "io_scsd"),
    (0x020B4C7C, "io_cf_common"),
)
LIBFAT_DATA_SYMBOLS = {"_io_dldi": 0x02074E20, "__ctype_ptr": 0x0208F394}

# The original used Thumb entry points, including veneers for ARM routines.
# Rename these imports inside the extracted archive members so the recovered
# ARM code can also link to the distinct ARM entry points.
THUMB_IMPORTS = {
    "_FAT_directory_addEntry": 0x0207F5BC,
    "_FAT_directory_chdir": 0x0207F208,
    "_FAT_directory_entryFromPath": 0x0207F07C,
    "_FAT_directory_entryFromPosition": 0x0207F320,
    "_FAT_directory_entryGetCluster": 0x0207ED1C,
    "_FAT_directory_entryStat": 0x0207F4F0,
    "_FAT_directory_getFirstEntry": 0x0207EFC4,
    "_FAT_directory_getNextEntry": 0x0207EE00,
    "_FAT_directory_removeEntry": 0x0207F430,
    "_SCSD_writeData_s": 0x02085990,
    "AddDevice": 0x02085940,
    "__aeabi_idiv": 0x020859E0,
    "__aeabi_idivmod": 0x020859E8,
    "__aeabi_uidiv": 0x02085980,
    "__aeabi_uidivmod": 0x020859A8,
    "cardPolledTransfer": 0x0207FDCC,
    "cardWriteCommand": 0x0207FDA8,
    "chdir": 0x02085948,
    "free": 0x02085968,
    "irqDisable": 0x0208024C,
    "malloc": 0x02085978,
    "memcpy": 0x02085988,
    "memmove": 0x020859D0,
    "memset": 0x02085970,
    "strcasecmp": 0x020859B8,
    "strchr": 0x02085958,
    "strlen": 0x02085950,
    "strncasecmp": 0x020859C0,
    "strncmp": 0x02085960,
    "strncpy": 0x02085998,
    "strnlen": 0x020859B0,
    "strpbrk": 0x020859C8,
    "strrchr": 0x020859A0,
    "strupr": 0x020859D8,
}


def stage_libfat(work, r20, archive):
    prefix = r20 / "bin/arm-eabi-"
    staging = work / "archive-libfat"
    staging.mkdir()
    shutil.copyfile(archive, staging / "libfat.a")
    members = [f"{member}.o" for _, _, member in LIBFAT_TEXT]
    run(staging, tool(prefix, "ar"), "x", "libfat.a", *members)

    aliases = [".thumb"]
    renames = []
    for name, address in THUMB_IMPORTS.items():
        alias = f"libfat_thumb_{name}"
        renames.append(f"{name} {alias}")
        aliases.extend((f".global {alias}", f".thumb_set {alias}, {address:#x}"))
    (work / "libfat-thumb-imports.s").write_text("\n".join(aliases) + "\n")
    run(work, tool(prefix, "as"), "-mcpu=arm946e-s", "-o",
        "libfat-thumb-imports.o", "libfat-thumb-imports.s")

    (staging / "thumb-imports.txt").write_text("\n".join(renames) + "\n")
    for member in members:
        # This object defines the ARM entry. Keep its public symbol.
        if member == "io_scsd_s.o":
            shutil.copyfile(staging / member, work / f"fat-{member}")
            continue
        run(staging, tool(prefix, "objcopy"), "--redefine-syms=thumb-imports.txt",
            member, f"fat-{member}")
        shutil.copyfile(staging / f"fat-{member}", work / f"fat-{member}")
    return [*(f"fat-{member}" for member in members), "libfat-thumb-imports.o"]
