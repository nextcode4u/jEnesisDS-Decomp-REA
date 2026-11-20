"""Stage the matched ARM9 Slot-1, video, and runtime code."""
from pathlib import Path
import shutil

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
        (0x02084048, 0x0208408C, "lib_a-closer.o"),
        (0x0208408C, 0x02084130, "lib_a-flags.o"),
        (0x02084130, 0x02084574, "lib_a-fvwrite.o"),
        (0x020845C0, 0x020846C0, "lib_a-memchr.o"),
        (0x0208470C, 0x02084D28, "lib_a-reallocr.o"),
        (0x02084D28, 0x02084E34, "lib_a-wsetup.o"),
    )),
    ("lib/gcc/arm-eabi/4.1.1/libgcc.a", (
        (0x020805DC, 0x02080618, "_call_via_rX.o"),
        (0x02080618, 0x02080A34, "_addsubdf3.o"),
        (0x02080A34, 0x02080ED0, "_muldivdf3.o"),
        (0x02080ED0, 0x02080F24, "_fixunsdfsi.o"),
    )),
)
ARM9_NEWLIB_BSS = 0x020B4CA8
ARM9_SDK_EXTERNALS = {
    "__ctype_ptr": 0x0208F394,
    "__malloc_lock": 0x020830F0,
    "__malloc_unlock": 0x020830F4,
    "_close": 0x02084FC0,
    "_fstat": 0x0208502C,
    "_global_impure_ptr": 0x0208EF88,
    "_impure_ptr": 0x0208F398,
    "_lseek_r": 0x02084574,
    "_open_r": 0x020830F8,
    "_read_r": 0x020846C0,
    "_sbrk": 0x0208523C,
    "_write_r": 0x02083FFC,
    "isatty": 0x020850A0,
}
ARM9_SDK_REGIONS = (
    (0x0208F7B0, 0x0208FBC0, "lib_a-mallocr.o(.data)"),
    (0x0207FC98, 0x0207FDA8, "arm9-video.o(.text)"),
    (0x0207FDA8, 0x02080094, "arm9-card.o(.text)"),
    (0x02080298, 0x02080308, "arm9-dcache.o(.text)"),
    (0x02085988, 0x02085990, "arm9-memcpy-veneer.o(.text)"),
    (0x0208EE7C, 0x0208EE84, "arm9-card.o(.rodata)"),
    *((start, end, f"{member}(.text)")
      for _, regions in R20_ARM9_ARCHIVES for start, end, member in regions),
)


def stage_arm9_sdk(work, compiler, r20, libnds):
    prefix = r20 / "bin/arm-eabi-"
    april, october = work / "arm9-sdk-april", work / "arm9-sdk-october"
    snapshot(libnds, LIBNDS_APR_2006, april, ("include", "source/common/card.c"))
    snapshot(libnds, LIBNDS_OCT_2007, october,
             ("include", "source/arm9/video.c", "source/arm9/dcache.s"))
    card = compile_c(compiler, april, Path("source/common/card.c"), 9, "-O2", "-mthumb")
    run(april, tool(prefix, "objcopy"), "--redefine-sym", "memcpy=arm9_thumb_memcpy",
        card.name, "arm9-card.o")
    shutil.copyfile(april / "arm9-card.o", work / "arm9-card.o")
    video = compile_c(compiler, october, Path("source/arm9/video.c"), 9, "-O2", "-mthumb")
    shutil.copyfile(video, work / "arm9-video.o")
    run(october, *compiler, "-DARM9", "-mcpu=arm946e-s", "-x", "assembler-with-cpp",
        "-c", "source/arm9/dcache.s", "-o", "arm9-dcache.o")
    shutil.copyfile(october / "arm9-dcache.o", work / "arm9-dcache.o")

    veneer = "arm9_memcpy_veneer.s"
    shutil.copyfile(SOURCE / veneer, work / veneer)
    run(work, tool(prefix, "as"), "-mcpu=arm946e-s", "-mthumb-interwork",
        "-o", "arm9-memcpy-veneer.o", veneer)
    objects = ["arm9-card.o", "arm9-video.o", "arm9-dcache.o", "arm9-memcpy-veneer.o"]
    for path, regions in R20_ARM9_ARCHIVES:
        archive = Path(path).name
        members = [member for _, _, member in regions]
        shutil.copyfile(r20 / path, work / archive)
        run(work, tool(prefix, "ar"), "x", archive, *members)
        objects.extend(members)
    return objects
