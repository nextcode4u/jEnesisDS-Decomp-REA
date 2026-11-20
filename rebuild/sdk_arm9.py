"""Stage the matched ARM9 Slot-1, video, and runtime code."""
from pathlib import Path
import shutil

from r20 import compile_c, run, tool
from sdk_source import LIBNDS_APR_2006, LIBNDS_OCT_2007, snapshot


SOURCE = Path(__file__).resolve().parent
ARM9_SDK_REGIONS = (
    (0x0207FC98, 0x0207FDA8, "arm9-video.o(.text)"),
    (0x0207FDA8, 0x02080094, "arm9-card.o(.text)"),
    (0x02080298, 0x02080308, "arm9-dcache.o(.text)"),
    (0x02082EC0, 0x02082F5C, "lib_a-memcpy.o(.text)"),
    (0x02085988, 0x02085990, "arm9-memcpy-veneer.o(.text)"),
    (0x0208EE7C, 0x0208EE84, "arm9-card.o(.rodata)"),
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
    shutil.copyfile(r20 / "arm-eabi/lib/libc.a", work / "libc.a")
    run(work, tool(prefix, "ar"), "x", "libc.a", "lib_a-memcpy.o")
    return ("arm9-card.o", "arm9-video.o", "arm9-dcache.o", "arm9-memcpy-veneer.o", "lib_a-memcpy.o")
