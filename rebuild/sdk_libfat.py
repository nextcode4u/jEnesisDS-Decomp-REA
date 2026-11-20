"""Place libfat-nds 20070127 objects at the release's ARM9 addresses."""
from hashlib import sha256
from pathlib import Path
import shutil
from struct import pack_into, unpack_from

from r20 import run, tool


# The default DLDI area builds from recovered C.
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
    (0x0207ECA8, 0x0207FB70, "directory"),
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
    (0x0208EE48, 0x0208EE7C, "fat-directory.o(.rodata)"),
    (0x0208F224, 0x0208F228, "LONG(0x2e);"),
    (0x0208F254, 0x0208F258, "LONG(0x2e2e);"),
    (0x0208F2F8, 0x0208F304, "fat-libfat.o(.rodata.str1.4) fat-partition.o(.rodata.str1.4)"),
    (0x0208F304, 0x0208F322, "fat-directory.o(.rodata.str1.4)"),
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


DIRECTORY_OBJECT_SHA256 = "85bc05a796a25157bfcc1386738060afd53a6adb6e0adbd88bcdeac53ba9ef70"
DIRECTORY_STRING_POOL = 0x0208F304


def place_directory_strings(path):
    """Retarget only the directory object's string relocations to the shared pool."""
    data = bytearray(path.read_bytes())
    if sha256(data).hexdigest() != DIRECTORY_OBJECT_SHA256:
        raise ValueError("Expected directory.o from libfat-nds 20070127")
    section_headers, = unpack_from("<I", data, 32)
    stride, count, strings = unpack_from("<HHH", data, 46)
    string_table, = unpack_from("<I", data, section_headers + stride * strings + 16)
    sections = {}
    for index in range(count):
        header = section_headers + stride * index
        name, = unpack_from("<I", data, header)
        name += string_table
        sections[bytes(data[name:data.index(0, name)])] = header
    text, = unpack_from("<I", data, sections[b".text"] + 16)
    pool = sections[b".rodata.str1.4"]
    pool_start, = unpack_from("<I", data, pool + 16)
    # "." and ".." were pooled with frontend strings. Keep the two directory
    # character sets from the archive and link the other literals to those
    # shared locations. The offsets below are R_ARM_ABS32 addends in .text.
    string_targets = {
        0x55C: 0x0208F224,
        0x628: DIRECTORY_STRING_POOL,
        0x674: DIRECTORY_STRING_POOL + 20,
        0xCE8: 0x0208F224,
        0xCF0: 0x0208F254,
    }
    for offset, address in string_targets.items():
        pack_into("<i", data, text + offset, address - DIRECTORY_STRING_POOL)
    string_data = data[pool_start + 4:pool_start + 34]
    data[pool_start:pool_start + len(string_data)] = string_data
    pack_into("<I", data, pool + 8, 2)  # SHF_ALLOC only. Do not pool it again.
    pack_into("<I", data, pool + 20, len(string_data))
    pack_into("<I", data, pool + 36, 0)
    path.write_bytes(data)


def stage_libfat(work, r20, archive):
    prefix = r20 / "bin/arm-eabi-"
    staging = work / "archive-libfat"
    staging.mkdir()
    shutil.copyfile(archive, staging / "libfat.a")
    members = [f"{member}.o" for _, _, member in LIBFAT_TEXT]
    run(staging, tool(prefix, "ar"), "x", "libfat.a", *members)
    place_directory_strings(staging / "directory.o")

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
