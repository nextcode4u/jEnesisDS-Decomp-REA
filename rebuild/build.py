#!/usr/bin/env python3
"""Reassemble the jEnesisDS startup code and link it with the preserved payload."""
import argparse
from hashlib import sha256
from pathlib import Path
import shutil
import struct
import subprocess
from tempfile import TemporaryDirectory

SOURCE = Path(__file__).resolve().parent
WORKSPACE = SOURCE.parent
EXPECTED_ROM_SHA256 = "cc2ab8b1153cd115978a68c1490e6fe0ea578832f877e7cf3169cbd920cf8104"
DEFAULT_PREFIX = Path.home() / ".cache/jenesisds-decomp/devkitarm-r20/bin/arm-eabi-"


def tool(prefix, name):
    for suffix in ("", ".exe"):
        executable = Path(f"{prefix}{name}{suffix}")
        if executable.is_file():
            return str(executable)
    raise FileNotFoundError(f"Could not find {prefix}{name}")


def run(work, executable, *args):
    subprocess.run([executable, *args], cwd=work, check=True)


def check_match(original, rebuilt, label):
    if len(original) != len(rebuilt):
        raise ValueError(f"{label} length {len(rebuilt):#x} != {len(original):#x}")
    if original != rebuilt:
        for offset, (expected, actual) in enumerate(zip(original, rebuilt)):
            if expected != actual:
                raise ValueError(
                    f"{label} differs at {offset:#x}: {actual:#04x} instead of {expected:#04x}"
                )


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--tool-prefix", type=Path, default=DEFAULT_PREFIX,
        help="Absolute path prefix ending in arm-eabi- for devkitARM r20 binutils",
    )
    args = parser.parse_args()
    prefix = args.tool_prefix.expanduser().absolute()
    assembler, linker, objcopy = (tool(prefix, name) for name in ("as", "ld", "objcopy"))

    rom = (WORKSPACE / "input/jEnesisDS.nds").read_bytes()
    if sha256(rom).hexdigest() != EXPECTED_ROM_SHA256:
        raise ValueError("Expected the original jEnesisDS 0.7.4 ROM")
    arm9_offset, _, _, arm9_size = struct.unpack_from("<4I", rom, 0x20)
    arm7_offset, _, _, arm7_size = struct.unpack_from("<4I", rom, 0x30)
    arm9 = rom[arm9_offset:arm9_offset + arm9_size]
    arm7 = rom[arm7_offset:arm7_offset + arm7_size]

    with TemporaryDirectory(prefix=".rebuild-", dir=WORKSPACE) as scratch:
        work = Path(scratch)
        for name in ("arm9.s", "arm7.s", "startup.inc", "arm9.ld", "arm7.ld"):
            shutil.copyfile(SOURCE / name, work / name)

        # Startup bytes are excluded from the code and data passed to the assembler.
        (work / "arm9-main.bin").write_bytes(arm9[0x220:0x90004])
        (work / "arm9-dtcm.bin").write_bytes(arm9[0x90004:0x936f0])
        (work / "arm9-itcm.bin").write_bytes(arm9[0x936f0:])
        (work / "arm7-main.bin").write_bytes(arm7[0xd0:])

        for core, cpu in (("arm9", "arm946e-s"), ("arm7", "arm7tdmi")):
            run(work, assembler, f"-mcpu={cpu}", "-o", f"{core}.o", f"{core}.s")
            run(work, linker, "-T", f"{core}.ld", "-Map", f"{core}.map",
                "-o", f"{core}.elf", f"{core}.o")
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
        output.mkdir(exist_ok=True)
        for name in ("arm9.elf", "arm9.map", "arm7.elf", "arm7.map"):
            shutil.copyfile(work / name, output / name)
        result = "jEnesisDS-0.7.4-rebuilt.nds"
        (work / result).write_bytes(rebuilt_rom)
        (work / result).replace(output / result)
        print(f"{sha256(rebuilt_rom).hexdigest()}  build/{result}")


if __name__ == "__main__":
    main()
