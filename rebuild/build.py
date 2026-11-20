#!/usr/bin/env python3
"""Reassemble the jEnesisDS startup code and link it with the preserved payload."""
import argparse
from hashlib import sha256
from pathlib import Path
import shutil
import struct
from tempfile import TemporaryDirectory

from r20 import EXPECTED_ROM_SHA256, check_match, compiler_command, run, tool
from recovered import prepare_reference_arm9

SOURCE = Path(__file__).resolve().parent
WORKSPACE = SOURCE.parent
DEFAULT_PREFIX = Path.home() / ".cache/jenesisds-decomp/devkitarm-r20/bin/arm-eabi-"


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--tool-prefix", type=Path, default=DEFAULT_PREFIX,
        help="Absolute path prefix ending in arm-eabi- for devkitARM r20 binutils",
    )
    parser.add_argument("--rom", type=Path, default=WORKSPACE / "input/jEnesisDS.nds")
    parser.add_argument("--r20-root", type=Path, help="Compile and link the matched ARM9 C regions")
    parser.add_argument("--libnds-repo", type=Path, help="Also build matched keys and IntrMain from libnds history")
    args = parser.parse_args()
    if args.libnds_repo and not args.r20_root:
        parser.error("--libnds-repo requires --r20-root")
    r20 = args.r20_root.expanduser().resolve() if args.r20_root else None
    prefix = r20 / "bin/arm-eabi-" if r20 else args.tool_prefix.expanduser().absolute()
    assembler, linker, objcopy = (tool(prefix, name) for name in ("as", "ld", "objcopy"))

    rom = args.rom.read_bytes()
    if sha256(rom).hexdigest() != EXPECTED_ROM_SHA256:
        raise ValueError("Expected the original jEnesisDS 0.7.4 ROM")
    arm9_offset, _, arm9_base, arm9_size = struct.unpack_from("<4I", rom, 0x20)
    arm7_offset, _, _, arm7_size = struct.unpack_from("<4I", rom, 0x30)
    arm9 = rom[arm9_offset:arm9_offset + arm9_size]
    arm7 = rom[arm7_offset:arm7_offset + arm7_size]

    with TemporaryDirectory(prefix=".rebuild-", dir=WORKSPACE) as scratch:
        work = Path(scratch)
        for name in ("arm9.s", "arm7.s", "startup.inc", "arm9.ld", "arm7.ld"):
            shutil.copyfile(SOURCE / name, work / name)

        # Startup bytes are excluded from the code and data passed to the assembler.
        arm9_options = []
        extra_arm9_objects = []
        if r20:
            compiler = compiler_command(r20)
            extra_arm9_objects = prepare_reference_arm9(work, compiler, arm9, arm9_base, args.libnds_repo)
            run(work, assembler, "-mcpu=arm946e-s", "-o", "arm9-rom-gaps.o", "arm9-rom-gaps.s")
            extra_arm9_objects.insert(0, "arm9-rom-gaps.o")
            arm9_options = ["--defsym", "use_recovered_c=1"]
        else:
            (work / "arm9-main.bin").write_bytes(arm9[0x220:0x90004])
        (work / "arm9-dtcm.bin").write_bytes(arm9[0x90004:0x936f0])
        if args.libnds_repo:
            arm9_options.extend(["--defsym", "use_sdk_irq=1"])
        else:
            (work / "arm9-itcm.bin").write_bytes(arm9[0x936f0:])
        (work / "arm7-main.bin").write_bytes(arm7[0xd0:])

        for core, cpu in (("arm9", "arm946e-s"), ("arm7", "arm7tdmi")):
            options = arm9_options if core == "arm9" else []
            extra_objects = extra_arm9_objects if core == "arm9" else []
            run(work, assembler, f"-mcpu={cpu}", *options, "-o", f"{core}.o", f"{core}.s")
            run(work, linker, "-T", f"{core}.ld", "-Map", f"{core}.map",
                "-o", f"{core}.elf", f"{core}.o", *extra_objects)
            run(work, objcopy, "-O", "binary", f"{core}.elf", f"{core}.bin")

        rebuilt9 = (work / "arm9.bin").read_bytes()
        rebuilt7 = (work / "arm7.bin").read_bytes()
        check_match(arm9, rebuilt9, "ARM9 image")
        check_match(arm7, rebuilt7, "ARM7 image")
        rebuilt_rom = (
            rom[:arm9_offset] + rebuilt9 +
            rom[arm9_offset + arm9_size:arm7_offset] + rebuilt7 +
            rom[arm7_offset + arm7_size:]
        )
        check_match(rom, rebuilt_rom, "NDS ROM")

        output = WORKSPACE / "build"
        if r20:
            output /= "reference-c-sdk" if args.libnds_repo else "reference-c"
        output.mkdir(parents=True, exist_ok=True)
        for name in ("arm9.elf", "arm9.map", "arm7.elf", "arm7.map"):
            shutil.copyfile(work / name, output / name)
        result = "jEnesisDS-0.7.4-rebuilt.nds"
        (work / result).write_bytes(rebuilt_rom)
        (work / result).replace(output / result)
        print(f"{sha256(rebuilt_rom).hexdigest()}  {(output / result).relative_to(WORKSPACE)}")


if __name__ == "__main__":
    main()
