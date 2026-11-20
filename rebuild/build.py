#!/usr/bin/env python3
"""Reassemble the jEnesisDS startup code and link it with the preserved payload."""
import argparse
from hashlib import sha256
import os
from pathlib import Path
import shutil
import struct
from tempfile import TemporaryDirectory

from banner import render_banner
from r20 import EXPECTED_ROM_SHA256, check_match, compiler_command, run, tool
from recovered import (check_codec_image, prepare_reference_arm7, prepare_reference_arm9,
                       stage_c_runtime_sections, with_libnds_headers)

SOURCE = Path(__file__).resolve().parent
WORKSPACE = SOURCE.parent
DEFAULT_PREFIX = Path.home() / ".cache/jenesisds-decomp/devkitarm-r20/bin/arm-eabi-"


def package_reference_rom(rom, arm9, arm7):
    arm9_offset = struct.unpack_from("<I", rom, 0x20)[0]
    arm7_offset = struct.unpack_from("<I", rom, 0x30)[0]
    fnt_offset, fnt_size = struct.unpack_from("<2I", rom, 0x40)
    banner_offset = struct.unpack_from("<I", rom, 0x68)[0]
    # The only directory is the root. Its name list begins immediately after
    # the directory record and has no files or subdirectories.
    fnt = struct.pack("<IHHB", 8, 0, 1, 0)
    if len(fnt) != fnt_size:
        raise ValueError("Unexpected name table size")
    return (
        rom[:arm9_offset] + arm9 +
        bytes(arm7_offset - arm9_offset - len(arm9)) + arm7 +
        bytes(fnt_offset - arm7_offset - len(arm7)) + fnt +
        bytes(banner_offset - fnt_offset - len(fnt)) + render_banner()
    )


def package_r20_rom(work, r20):
    (work / "banner.bin").write_bytes(render_banner())
    packager = tool(r20 / "bin/ndstool", "")
    run(work, packager, "-c", "packed.nds", "-9", "arm9.bin", "-7", "arm7.bin",
        "-t", "banner.bin", "-h", "0x200",
        "-r9", "0x02000000", "-e9", "0x02000000",
        "-r7", "0x037f8000", "-e7", "0x037f8000")
    return (work / "packed.nds").read_bytes()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--tool-prefix", type=Path, default=DEFAULT_PREFIX,
        help="Absolute path prefix ending in arm-eabi- for devkitARM r20 binutils",
    )
    parser.add_argument("--rom", type=Path, default=WORKSPACE / "input/jEnesisDS.nds")
    parser.add_argument("--r20-root", type=Path, help="Compile and link the matched ARM7 and ARM9 regions")
    parser.add_argument("--libnds-repo", type=Path, help="Link matched code from period libnds sources")
    parser.add_argument("--replace-codec", action="store_true",
                        help="Link behavior-matched LZSS encoder and file routines")
    args = parser.parse_args()
    if (args.libnds_repo or args.replace_codec) and not args.r20_root:
        parser.error("the SDK and codec variants require --r20-root")
    r20 = args.r20_root.expanduser().resolve() if args.r20_root else None
    prefix = r20 / "bin/arm-eabi-" if r20 else args.tool_prefix.expanduser().absolute()
    libfat = None
    if args.libnds_repo:
        libfat_root = Path(os.environ.get("LIBFAT") or r20.parent / "libfat").expanduser()
        libfat = libfat_root.resolve() / "lib/libfat.a"
        if not libfat.is_file():
            parser.error(f"Cannot find period libfat archive at {libfat}. Set LIBFAT to its installation.")
    assembler, linker, objcopy = (tool(prefix, name) for name in ("as", "ld", "objcopy"))

    rom = args.rom.read_bytes()
    if sha256(rom).hexdigest() != EXPECTED_ROM_SHA256:
        raise ValueError("Expected the original jEnesisDS 0.7.4 ROM")
    arm9_offset, _, arm9_base, arm9_size = struct.unpack_from("<4I", rom, 0x20)
    arm7_offset, _, arm7_base, arm7_size = struct.unpack_from("<4I", rom, 0x30)
    arm9 = rom[arm9_offset:arm9_offset + arm9_size]
    arm7 = rom[arm7_offset:arm7_offset + arm7_size]

    with TemporaryDirectory(prefix=".rebuild-", dir=WORKSPACE) as scratch:
        work = Path(scratch)
        for name in ("arm9.s", "arm7.s", "startup.inc", "arm9.ld", "arm7.ld"):
            shutil.copyfile(SOURCE / name, work / name)

        # Startup bytes are excluded from the code and data passed to the assembler.
        options = {7: [], 9: []}
        objects = {7: [], 9: []}
        if r20:
            compiler = compiler_command(r20)
            shutil.copytree(SOURCE / "source", work, dirs_exist_ok=True)
            runtime = stage_c_runtime_sections(work, r20, objcopy)
            objects[7] = prepare_reference_arm7(
                work, compiler, arm7, arm7_base, runtime, r20, args.libnds_repo)
            objects[9] = prepare_reference_arm9(
                work, with_libnds_headers(compiler, r20), arm9, arm9_base, runtime, r20, args.libnds_repo,
                libfat=libfat, replace_codec=args.replace_codec)
        else:
            (work / "arm9-main.bin").write_bytes(arm9[0x220:0x90004])
            (work / "arm7-main.bin").write_bytes(arm7[0xd0:])
            (work / "arm9-itcm.bin").write_bytes(arm9[0x936f0:])
        for processor, cpu in ((9, "arm946e-s"), (7, "arm7tdmi")):
            core = f"arm{processor}"
            if r20:
                gap = f"{core}-rom-gaps"
                run(work, assembler, f"-mcpu={cpu}", "-o", f"{gap}.o", f"{gap}.s")
                objects[processor].insert(0, f"{gap}.o")
                options[processor].extend(["--defsym", "use_recovered_c=1"])
            run(work, assembler, f"-mcpu={cpu}", *options[processor], "-o", f"{core}.o", f"{core}.s")
            run(work, linker, "-T", f"{core}.ld", "-Map", f"{core}.map",
                "-o", f"{core}.elf", f"{core}.o", *objects[processor])
            run(work, objcopy, "-O", "binary", f"{core}.elf", f"{core}.bin")

        rebuilt9 = (work / "arm9.bin").read_bytes()
        rebuilt7 = (work / "arm7.bin").read_bytes()
        if args.replace_codec:
            check_codec_image(arm9, rebuilt9, arm9_base)
        else:
            check_match(arm9, rebuilt9, "ARM9 image")
        check_match(arm7, rebuilt7, "ARM7 image")
        if r20:
            rebuilt_rom = package_r20_rom(work, r20)
        else:
            rebuilt_rom = package_reference_rom(rom, rebuilt9, rebuilt7)
        if not args.replace_codec:
            check_match(rom, rebuilt_rom, "NDS ROM")

        output = WORKSPACE / "build"
        if r20:
            name = "reference-c"
            if args.libnds_repo:
                name += "-sdk"
            if args.replace_codec:
                name += "-codec"
            output /= name
        output.mkdir(parents=True, exist_ok=True)
        for name in ("arm9.elf", "arm9.map", "arm7.elf", "arm7.map"):
            shutil.copyfile(work / name, output / name)
        result = "jEnesisDS-codec-test.nds" if args.replace_codec else "jEnesisDS-0.7.4-rebuilt.nds"
        (work / result).write_bytes(rebuilt_rom)
        (work / result).replace(output / result)
        print(f"{sha256(rebuilt_rom).hexdigest()}  {(output / result).relative_to(WORKSPACE)}")


if __name__ == "__main__":
    main()
