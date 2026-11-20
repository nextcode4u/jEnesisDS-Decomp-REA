#!/usr/bin/env python3
"""Build the complete ARM7 load image from source and the period SDK."""
import argparse
from pathlib import Path
import shutil
import subprocess
from tempfile import TemporaryDirectory

from check_c import rom_images
from native import ARM7_BASE, ARM7_IMAGE_SIZE
from r20 import check_match, compiler_command, run, tool
from recovered import SOURCE, prepare_reference_arm7, stage_c_runtime_sections


def build_arm7(r20, libnds, output):
    compiler = compiler_command(r20)
    prefix = r20 / "bin/arm-eabi-"
    assembler, linker, objcopy = (tool(prefix, name) for name in ("as", "ld", "objcopy"))
    output.parent.mkdir(parents=True, exist_ok=True)
    with TemporaryDirectory(prefix="arm7-source-", dir=output.parent) as temporary:
        work = Path(temporary)
        shutil.copytree(SOURCE / "source", work, dirs_exist_ok=True)
        for name in ("arm7.s", "arm7.ld", "startup.inc"):
            shutil.copyfile(SOURCE / name, work / name)
        runtime = stage_c_runtime_sections(work, r20, objcopy)
        objects = prepare_reference_arm7(work, compiler, None, ARM7_BASE, runtime, r20, libnds)
        run(work, assembler, "-mcpu=arm7tdmi", "--defsym", "use_recovered_c=1",
            "-o", "arm7.o", "arm7.s")
        run(work, linker, "-T", "arm7.ld", "-Map", "arm7.map", "-o", "arm7.elf",
            "arm7.o", *objects)
        run(work, objcopy, "-O", "binary", "arm7.elf", "arm7.bin")
        binary = work / "arm7.bin"
        if binary.stat().st_size != ARM7_IMAGE_SIZE:
            raise ValueError(f"Unexpected ARM7 image size: {binary.stat().st_size:#x}")
        output.mkdir(exist_ok=True)
        for name in ("arm7.bin", "arm7.elf", "arm7.map"):
            shutil.copyfile(work / name, output / name)
        print(f"Built the {ARM7_IMAGE_SIZE:,}-byte ARM7 image in {output}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--r20-root", type=Path)
    parser.add_argument("--libnds-repo", type=Path)
    parser.add_argument("--build-dir", type=Path, default=Path("build"))
    parser.add_argument("--rom", type=Path)
    args = parser.parse_args()
    if args.rom is None and (args.r20_root is None or args.libnds_repo is None):
        parser.error("building requires --r20-root and --libnds-repo")
    if args.rom is not None and (args.r20_root is not None or args.libnds_repo is not None):
        parser.error("supply only --rom and optional --build-dir for comparison")
    output = args.build_dir.resolve() / "arm7-image"
    try:
        if args.rom is None:
            build_arm7(args.r20_root.expanduser().resolve(), args.libnds_repo.resolve(), output)
        else:
            _, original = rom_images(args.rom)[7]
            actual = (output / "arm7.bin").read_bytes()
            check_match(original, actual, "complete ARM7 image")
            print(f"Complete ARM7 image: {len(actual):,} matching bytes")
    except (OSError, ValueError, subprocess.CalledProcessError) as error:
        parser.exit(1, f"{error}\n")


if __name__ == "__main__":
    main()
