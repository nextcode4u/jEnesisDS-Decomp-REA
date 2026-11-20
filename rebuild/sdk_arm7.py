#!/usr/bin/env python3
"""Build matched ARM7 regions from historical libnds and r20 runtime archives."""
import argparse
from hashlib import sha256
from pathlib import Path
import shutil
from struct import unpack_from
import subprocess
from tempfile import TemporaryDirectory

from r20 import EXPECTED_ROM_SHA256, check_match, compile_c, compiler_command, run, tool
from sdk_source import (LIBNDS_APR_2006, LIBNDS_ITCM_APR_2006, assemble_sdk_irq,
                        snapshot, stage_sdk_bios)


SOURCE = Path(__file__).resolve().parent
ARM7_SDK_REGIONS = (
    (0x037F8144, 0x037F814C, "division veneer", "arm7-division-veneer.o(.text)"),
    (0x03801060, 0x03801560, "clock and touchscreen",
     "arm7-clock.o(.text) arm7-touch.o(.text)"),
    (0x03801780, 0x03801800, "BIOS calls", "arm7-bios.o(.text)"),
    (0x03801800, 0x038018D8, "IRQ dispatcher", "arm7-intr-main.o(.text)"),
    (0x038018D8, 0x03801B34, "libgcc division",
     "_udivsi3.o(.text) _divsi3.o(.text) arm7-div0.o(.text)"),
    (0x03801B34, 0x038024D8, "libgcc interworking and double-precision arithmetic",
     "_call_via_rX.o(.text) _addsubdf3.o(.text) _muldivdf3.o(.text) "
     "_fixdfsi.o(.text) _fixunsdfsi.o(.text)"),
    (0x038025AC, 0x038026E0, "newlib memory operations",
     "lib_a-memcpy.o(.text) lib_a-memset.o(.text)"),
)
ARM7_SDK_EXTERNALS = {"__irq_flags": 0x0380FFF8, "irqTable": 0x0380BE04}
DIVISION_OBJECTS = ("_udivsi3.o", "_divsi3.o", "arm7-div0.o")
LIBGCC_OBJECTS = (*DIVISION_OBJECTS[:2], "_call_via_rX.o", "_addsubdf3.o",
                  "_muldivdf3.o", "_fixdfsi.o", "_fixunsdfsi.o")
NEWLIB_OBJECTS = ("lib_a-memcpy.o", "lib_a-memset.o")
TOUCH_BSS = 0x0380BB0C


def stage_arm7_sdk(work, compiler, r20, libnds):
    prefix = r20 / "bin/arm-eabi-"
    april, irq = work / "arm7-sdk-april", work / "arm7-sdk-irq"
    snapshot(libnds, LIBNDS_APR_2006, april,
             ("include", "source/arm7/clock.c", "source/arm7/touch.c"))
    snapshot(libnds, LIBNDS_ITCM_APR_2006, irq, ("source/common/interruptDispatcher.s",))

    clock = compile_c(compiler, april, Path("source/arm7/clock.c"), 7, "-O2", "-mthumb")
    touch = compile_c(compiler, april, Path("source/arm7/touch.c"), 7, "-O2", "-mthumb")
    shutil.copyfile(clock, work / "arm7-clock.o")
    # The Thumb callers use the old interworking entry while ARM callers
    # resolve __aeabi_idiv directly to the runtime function.
    run(april, tool(prefix, "objcopy"), "--redefine-sym", "__aeabi_idiv=arm7_thumb_divsi3",
        touch.name, "arm7-touch.o")
    shutil.copyfile(april / "arm7-touch.o", work / "arm7-touch.o")

    bios = stage_sdk_bios(work, compiler, libnds, 7)
    shutil.copyfile(assemble_sdk_irq(compiler, irq, 7), work / "arm7-intr-main.o")

    veneer = "arm7_division_veneer.s"
    shutil.copyfile(SOURCE / veneer, work / veneer)
    run(work, tool(prefix, "as"), "-mcpu=arm7tdmi", "-mthumb-interwork",
        "-o", "arm7-division-veneer.o", veneer)
    blank_division = Path("arm7_div0.c")
    shutil.copyfile(SOURCE / "source" / blank_division, work / blank_division)
    div0 = compile_c(compiler, work, blank_division, 7, "-O2", "-marm")
    div0.rename(work / "arm7-div0.o")
    shutil.copyfile(r20 / "lib/gcc/arm-eabi/4.1.1/libgcc.a", work / "libgcc.a")
    shutil.copyfile(r20 / "arm-eabi/lib/libc.a", work / "libc.a")
    ar = tool(prefix, "ar")
    run(work, ar, "x", "libgcc.a", *LIBGCC_OBJECTS)
    run(work, ar, "x", "libc.a", *NEWLIB_OBJECTS)
    return ("arm7-division-veneer.o", "arm7-clock.o", "arm7-touch.o", bios,
            "arm7-intr-main.o", "arm7-div0.o", *LIBGCC_OBJECTS, *NEWLIB_OBJECTS)


def build_regions(work, output, r20, libnds):
    compiler = compiler_command(r20)
    prefix = r20 / "bin/arm-eabi-"
    objects = stage_arm7_sdk(work, compiler, r20, libnds)
    sections = [
        f".region{index} {start:#x} : {{ {selectors} }}"
        for index, (start, _, _, selectors) in enumerate(ARM7_SDK_REGIONS)
    ]
    sections.append(f".bss {TOUCH_BSS:#x} (NOLOAD) : {{ arm7-touch.o(.bss) }}")
    definitions = "".join(f"{name} = {address:#x};\n" for name, address in ARM7_SDK_EXTERNALS.items())
    (work / "arm7-sdk.ld").write_text("SECTIONS {\n" + "\n".join(sections) + "\n}\n" + definitions)
    run(work, tool(prefix, "ld"), "-T", "arm7-sdk.ld", "-Map", "arm7-sdk.map",
        "-o", "arm7-sdk.elf", *objects)
    for index, (start, end, label, _) in enumerate(ARM7_SDK_REGIONS):
        name = f"{start:08x}.bin"
        run(work, tool(prefix, "objcopy"), "-O", "binary", f"--only-section=.region{index}",
            "arm7-sdk.elf", name)
        size = (work / name).stat().st_size
        if size != end - start:
            raise ValueError(f"{label} built {size:#x} bytes, expected {end - start:#x}")
        shutil.copyfile(work / name, output / name)
        print(f"  {start:#010x}–{end - 1:#010x} {label}, {size} bytes")
    for name in ("arm7-sdk.elf", "arm7-sdk.map"):
        shutil.copyfile(work / name, output / name)


def compare_regions(output, rom_path):
    rom = rom_path.read_bytes()
    if sha256(rom).hexdigest() != EXPECTED_ROM_SHA256:
        raise ValueError("Expected the original jEnesisDS 0.7.4 ROM")
    offset, _, base, size = unpack_from("<4I", rom, 0x30)
    for start, end, label, _ in ARM7_SDK_REGIONS:
        if not base <= start < end <= base + size:
            raise ValueError(f"{label} lies outside the ARM7 image")
        check_match(rom[offset + start - base:offset + end - base],
                    (output / f"{start:08x}.bin").read_bytes(), label)
    print("All ARM7 SDK regions match, including relocated calls and calibration addresses.")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--r20-root")
    parser.add_argument("--libnds-repo", type=Path)
    parser.add_argument("--output", required=True, type=Path)
    parser.add_argument("--compare", type=Path, help="Compare the completed output to the original ROM")
    args = parser.parse_args()
    if not args.compare and not (args.r20_root and args.libnds_repo):
        parser.error("building requires the devkitARM r20 directory and the libnds history checkout")
    try:
        output = args.output.resolve()
        if args.compare:
            compare_regions(output, args.compare)
        else:
            output.mkdir(parents=True, exist_ok=True)
            with TemporaryDirectory(prefix="stage-", dir=output) as directory:
                build_regions(Path(directory), output, Path(args.r20_root).expanduser().resolve(),
                              args.libnds_repo.resolve())
    except (OSError, ValueError, subprocess.CalledProcessError) as error:
        parser.exit(1, f"{error}\n")


if __name__ == "__main__":
    main()
