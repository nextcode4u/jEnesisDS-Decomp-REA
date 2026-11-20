#!/usr/bin/env python3
"""Assemble recovered native code without a ROM, then optionally compare it."""
import argparse
from pathlib import Path
import shutil
import subprocess
from tempfile import TemporaryDirectory

from check_c import rom_images
from native import NATIVE_REGIONS, assemble_native, native_imports, selector
from r20 import check_match, run, tool
from recovered import SOURCE


def build_regions(r20, output):
    prefix = r20 / "bin/arm-eabi-"
    linker, objcopy = (tool(prefix, name) for name in ("ld", "objcopy"))
    output.parent.mkdir(parents=True, exist_ok=True)
    with TemporaryDirectory(prefix="r20-native-", dir=output.parent) as temporary:
        work = Path(temporary)
        shutil.copytree(SOURCE / "source/native", work / "native")
        for cpu, regions in NATIVE_REGIONS.items():
            objects = assemble_native(work, prefix, cpu)
            layout = [
                f"    {region.section} {region.start:#x} : {{ {selector(region)} }}"
                for region in regions
            ]
            script = work / f"arm{cpu}.ld"
            script.write_text("SECTIONS {\n" + "\n".join(layout) + "\n}\n" + native_imports(work, cpu))
            elf = f"arm{cpu}.elf"
            run(work, linker, "-T", script.name, "-o", elf, *objects)
            for region in regions:
                binary = work / f"{region.name}.bin"
                run(work, objcopy, "-O", "binary", "-j", region.section, elf, binary.name)
                size = binary.stat().st_size
                if size != region.end - region.start:
                    raise ValueError(f"{region.name} assembles to {size} bytes, expected {region.end - region.start}")
                print(f"{region.name}: built {size:,} bytes")
        output.mkdir(exist_ok=True)
        for path in (*work.glob("*.elf"), *work.glob("*.bin")):
            shutil.copyfile(path, output / path.name)


def compare_regions(rom, output):
    images = rom_images(rom)
    for cpu, regions in NATIVE_REGIONS.items():
        base, image = images[cpu]
        for region in regions:
            begin = region.rom_address - base
            original = image[begin:begin + region.end - region.start]
            actual = (output / f"{region.name}.bin").read_bytes()
            check_match(original, actual, region.name)
            print(f"{region.name}: {len(actual):,} matching bytes")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--r20-root", type=Path)
    parser.add_argument("--build-dir", type=Path, default=Path("build"))
    parser.add_argument("--rom", type=Path)
    args = parser.parse_args()
    if (args.r20_root is None) == (args.rom is None):
        parser.error("supply --r20-root to build or --rom to compare a previous build")
    try:
        output = args.build_dir.resolve() / "recovered-native"
        if args.r20_root is not None:
            build_regions(args.r20_root.expanduser().resolve(), output)
        else:
            compare_regions(args.rom, output)
    except (OSError, ValueError, subprocess.CalledProcessError) as error:
        parser.exit(1, f"{error}\n")


if __name__ == "__main__":
    main()
