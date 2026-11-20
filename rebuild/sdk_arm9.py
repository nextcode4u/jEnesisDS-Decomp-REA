"""Stage the matched ARM9 Slot-1, video, and runtime code."""
from hashlib import sha256
from pathlib import Path
import shutil
from struct import pack_into

from r20 import compile_c, run, tool
from sdk_source import LIBNDS_APR_2006, LIBNDS_OCT_2007, snapshot


SOURCE = Path(__file__).resolve().parent
# Archive members whose complete ARM .text matches at the listed addresses.
R20_ARM9_ARCHIVES = (
    ("arm-eabi/lib/libc.a", (
        (0x02080F24, 0x02081034, "lib_a-fclose.o"),
        (0x02081034, 0x020811EC, "lib_a-fflush.o"),
        (0x020811EC, 0x020814A8, "lib_a-findfp.o"),
        (0x020814A8, 0x020815A4, "lib_a-fopen.o"),
        (0x020815A4, 0x020817CC, "lib_a-fread.o"),
        (0x020817CC, 0x02081B8C, "lib_a-freer.o"),
        (0x02081B8C, 0x0208201C, "lib_a-fseek.o"),
        (0x0208201C, 0x02082064, "lib_a-fstatr.o"),
        (0x02082064, 0x02082140, "lib_a-ftell.o"),
        (0x02082140, 0x0208225C, "lib_a-fwalk.o"),
        (0x0208225C, 0x02082324, "lib_a-fwrite.o"),
        (0x020823F8, 0x02082560, "lib_a-makebuf.o"),
        (0x02082560, 0x02082590, "lib_a-malign.o"),
        (0x02082590, 0x020826FC, "lib_a-malignr.o"),
        (0x020826FC, 0x0208274C, "lib_a-malloc.o"),
        (0x0208274C, 0x02082EC0, "lib_a-mallocr.o"),
        (0x02082EC0, 0x02082F5C, "lib_a-memcpy.o"),
        (0x02082F5C, 0x02083058, "lib_a-memmove.o"),
        (0x02083058, 0x020830F0, "lib_a-memset.o"),
        (0x020830F0, 0x020830F8, "lib_a-mlock.o"),
        (0x020830F8, 0x02083144, "lib_a-openr.o"),
        (0x02083144, 0x020832E8, "lib_a-reent.o"),
        (0x020832E8, 0x020834C8, "lib_a-refill.o"),
        (0x020834C8, 0x02083510, "lib_a-sbrkr.o"),
        (0x02083510, 0x02083638, "lib_a-stdio.o"),
        (0x02083638, 0x020836D4, "lib_a-strcasecmp.o"),
        (0x020836D4, 0x020837EC, "lib_a-strchr.o"),
        (0x020837EC, 0x020838BC, "lib_a-strcmp.o"),
        (0x020838BC, 0x0208395C, "lib_a-strcpy.o"),
        (0x0208395C, 0x02083A04, "lib_a-strlcat.o"),
        (0x02083A04, 0x02083A6C, "lib_a-strlcpy.o"),
        (0x02083A6C, 0x02083AFC, "lib_a-strlen.o"),
        (0x02083AFC, 0x02083BB4, "lib_a-strncasecmp.o"),
        (0x02083BB4, 0x02083C80, "lib_a-strncat.o"),
        (0x02083C80, 0x02083DBC, "lib_a-strncmp.o"),
        (0x02083DBC, 0x02083ED0, "lib_a-strncpy.o"),
        (0x02083ED0, 0x02083F18, "lib_a-strnlen.o"),
        (0x02083F18, 0x02083F68, "lib_a-strpbrk.o"),
        (0x02083F68, 0x02083FB8, "lib_a-strrchr.o"),
        (0x02083FB8, 0x02083FFC, "lib_a-strupr.o"),
        (0x02083FFC, 0x02084048, "lib_a-writer.o"),
        (0x02084048, 0x0208408C, "lib_a-closer.o"),
        (0x0208408C, 0x02084130, "lib_a-flags.o"),
        (0x02084130, 0x02084574, "lib_a-fvwrite.o"),
        (0x02084574, 0x020845C0, "lib_a-lseekr.o"),
        (0x020845C0, 0x020846C0, "lib_a-memchr.o"),
        (0x020846C0, 0x0208470C, "lib_a-readr.o"),
        (0x0208470C, 0x02084D28, "lib_a-reallocr.o"),
        (0x02084D28, 0x02084E34, "lib_a-wsetup.o"),
    )),
    ("arm-eabi/lib/libsysbase.a", (
        (0x02084E34, 0x02084FC0, "iosupport.o"),
        (0x02084FC0, 0x0208502C, "close.o"),
        (0x0208502C, 0x020850A0, "fstat.o"),
        (0x020850A0, 0x020850A8, "isatty.o"),
        (0x020850A8, 0x020850FC, "lseek.o"),
        (0x020850FC, 0x020851CC, "open.o"),
        (0x020851CC, 0x0208523C, "read.o"),
        (0x0208523C, 0x020852BC, "sbrk.o"),
        (0x020852BC, 0x0208532C, "write.o"),
        (0x0208532C, 0x0208568C, "chdir.o"),
        (0x0208568C, 0x02085898, "dir.o"),
    )),
    ("lib/gcc/arm-eabi/4.1.1/libgcc.a", (
        (0x020805DC, 0x02080618, "_call_via_rX.o"),
        (0x02080618, 0x02080A34, "_addsubdf3.o"),
        (0x02080A34, 0x02080ED0, "_muldivdf3.o"),
        (0x02080ED0, 0x02080F24, "_fixunsdfsi.o"),
    )),
)
ARM9_NEWLIB_BSS = 0x020B4CA8
ARM9_SYSBASE_BSS = 0x020B4CDC
ARM9_SDK_EXTERNALS = {"__end__": 0x023EB350}
IMPURE_OBJECT_SHA256 = "bc46d64d6a8d9ca8f59bccacd7ad6cf22125ffc41a402f60730e42c4738ab15d"
ARM9_ARCHIVE_DATA = {
    "arm-eabi/lib/libc.a": ("lib_a-ctype_.o", "lib_a-impure.o"),
    "arm-eabi/lib/libsysbase.a": ("malloc_vars.o",),
}
ARM9_SDK_REGIONS = (
    (0x0208EE84, 0x0208EF85, "lib_a-ctype_.o(.rodata)"),
    (0x0208EF88, 0x0208EF8C, "lib_a-impure.o(.rodata)"),
    (0x0208EF8C, 0x0208EFD8, "iosupport.o(.rodata)"),
    (0x0208EFD8, 0x0208EFE4, "chdir.o(.rodata)"),
    (0x0208F324, 0x0208F328, "lib_a-impure.o(.rodata.str1.4)"),
    (0x0208F328, 0x0208F330, "iosupport.o(.rodata.str1.4)"),
    (0x0208F394, 0x0208F398, "lib_a-ctype_.o(.data)"),
    (0x0208F398, 0x0208F7B0, "lib_a-impure.o(.data)"),
    (0x0208FBC0, 0x0208FC04, "iosupport.o(.data)"),
    (0x0208FC04, 0x02090004, "chdir.o(.data)"),
    (0x0208F7B0, 0x0208FBC0, "lib_a-mallocr.o(.data)"),
    (0x0207FC70, 0x0207FC98, "arm9-touch.o(.text)"),
    (0x0207FC98, 0x0207FDA8, "arm9-video.o(.text)"),
    (0x0207FDA8, 0x02080094, "arm9-card.o(.text)"),
    (0x02080298, 0x02080308, "arm9-dcache.o(.text)"),
    (0x02085988, 0x02085990, "arm9-memcpy-veneer.o(.text)"),
    (0x0208EE7C, 0x0208EE84, "arm9-card.o(.rodata)"),
    *((start, end, f"{member}(.text)")
      for _, regions in R20_ARM9_ARCHIVES for start, end, member in regions),
)



def place_impure_string_padding(path):
    """Reproduce the two fill bytes after the pooled newlib locale name."""
    member = bytearray(path.read_bytes())
    if sha256(member).hexdigest() != IMPURE_OBJECT_SHA256:
        raise ValueError("Expected lib_a-impure.o from devkitARM r20")
    # The release's merged string pool pads "C\0" with 0xff to four
    # bytes. This is inside the input object's .rodata.str1.4 section.
    pool_header = 0x61c
    pack_into("<I", member, pool_header + 8, 2)  # SHF_ALLOC only.
    pack_into("<I", member, pool_header + 36, 0)
    member[0x456:0x458] = b"\xff\xff"
    path.write_bytes(member)


def stage_arm9_sdk(work, compiler, r20, libnds):
    prefix = r20 / "bin/arm-eabi-"
    april, october = work / "arm9-sdk-april", work / "arm9-sdk-october"
    snapshot(libnds, LIBNDS_APR_2006, april, ("include", "source/common/card.c", "source/arm9/touch.c"))
    snapshot(libnds, LIBNDS_OCT_2007, october,
             ("include", "source/arm9/video.c", "source/arm9/dcache.s"))
    card = compile_c(compiler, april, Path("source/common/card.c"), 9, "-O2", "-mthumb")
    run(april, tool(prefix, "objcopy"), "--redefine-sym", "memcpy=arm9_thumb_memcpy",
        card.name, "arm9-card.o")
    shutil.copyfile(april / "arm9-card.o", work / "arm9-card.o")
    touch = compile_c(compiler, april, Path("source/arm9/touch.c"), 9, "-O2", "-mthumb")
    shutil.copyfile(touch, work / "arm9-touch.o")
    video = compile_c(compiler, october, Path("source/arm9/video.c"), 9, "-O2", "-mthumb")
    shutil.copyfile(video, work / "arm9-video.o")
    run(october, *compiler, "-DARM9", "-mcpu=arm946e-s", "-x", "assembler-with-cpp",
        "-c", "source/arm9/dcache.s", "-o", "arm9-dcache.o")
    shutil.copyfile(october / "arm9-dcache.o", work / "arm9-dcache.o")

    veneer = "arm9_memcpy_veneer.s"
    shutil.copyfile(SOURCE / veneer, work / veneer)
    run(work, tool(prefix, "as"), "-mcpu=arm946e-s", "-mthumb-interwork",
        "-o", "arm9-memcpy-veneer.o", veneer)
    objects = ["arm9-card.o", "arm9-touch.o", "arm9-video.o", "arm9-dcache.o", "arm9-memcpy-veneer.o"]
    for path, regions in R20_ARM9_ARCHIVES:
        archive = Path(path).name
        members = [member for _, _, member in regions]
        members.extend(ARM9_ARCHIVE_DATA.get(path, ()))
        shutil.copyfile(r20 / path, work / archive)
        run(work, tool(prefix, "ar"), "x", archive, *members)
        objects.extend(members)
    place_impure_string_padding(work / "lib_a-impure.o")
    return objects
