#!/usr/bin/env python3
"""Build the recovered Nintendo DS emulator with BlocksDS."""
import argparse
from hashlib import sha256
import os
from pathlib import Path
import shutil
import struct
import subprocess
from tempfile import TemporaryDirectory

from banner import render_banner
from generate_frontend_assets import write_assembly

STARTUP = Path(__file__).resolve().parent
ROOT = STARTUP.parent
IMAGES = {
    "arm9": (0x02000000, 0x98f70, "arm946e-s"),
    "arm7": (0x037f8000, 0xed94, "arm7tdmi"),
}


def tool(prefix, name):
    for suffix in ("", ".exe"):
        candidate = Path(f"{prefix}{name}{suffix}")
        if candidate.is_file():
            return str(candidate)
    raise FileNotFoundError(f"Could not find {prefix}{name}")


def run(executable, *args, work):
    subprocess.run([executable, *args], cwd=work, check=True)


def verify_nds(path, work):
    rom = path.read_bytes()
    for cpu, header in (("arm9", 0x20), ("arm7", 0x30)):
        offset, entry, load, size = struct.unpack_from("<4I", rom, header)
        expected_address, expected_size, _ = IMAGES[cpu]
        if (entry, load, size) != (expected_address, expected_address, expected_size):
            raise ValueError(f"{cpu} NDS header does not match linked layout")
        if rom[offset:offset+size] != (work / f"{cpu}.bin").read_bytes():
            raise ValueError(f"{cpu} NDS payload does not match linked image")
    return sha256(rom).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    wonderful = Path(os.environ.get("WONDERFUL_TOOLCHAIN", "/opt/wonderful"))
    blocksds = Path(os.environ.get("BLOCKSDS", wonderful / "thirdparty/blocksds/core"))
    if "BLOCKSDS" not in os.environ and not blocksds.is_dir():
        blocksds = Path("/opt/blocksds/core")
    parser.add_argument(
        "--tool-prefix", type=Path,
        default=wonderful / "toolchain/gcc-arm-none-eabi/bin/arm-none-eabi-",
        help="Path prefix for Wonderful's ARM binutils",
    )
    parser.add_argument(
        "--ndstool", type=Path, default=blocksds / "tools/ndstool/ndstool",
        help="Path to BlocksDS ndstool",
    )
    args = parser.parse_args()
    prefix = args.tool_prefix.expanduser().absolute()
    ndstool = str(args.ndstool.expanduser().absolute())
    assembler, linker, objcopy = (tool(prefix, name) for name in ("as", "ld", "objcopy"))
    output = ROOT / "build" / "blocksds-native"
    output.mkdir(parents=True, exist_ok=True)

    with TemporaryDirectory(prefix=".rebuild-", dir=output) as temp:
        work = Path(temp)
        startup_files = ("arm9.s", "arm7.s", "startup.inc", "arm9.ld", "arm7.ld")
        for name in startup_files:
            shutil.copyfile(STARTUP / name, work / name)
        shutil.copytree(STARTUP / "recovered", work, dirs_exist_ok=True)
        write_assembly(work / "frontend_assets.inc")
        (work / "banner.bin").write_bytes(render_banner())

        for cpu, (_, size, arch) in IMAGES.items():
            run(assembler, f"-mcpu={arch}", "-o", f"{cpu}.o", f"{cpu}.s", work=work)
            run(linker, "-T", f"{cpu}.ld", "-Map", f"{cpu}.map", "-o", f"{cpu}.elf",
                f"{cpu}.o", work=work)
            run(objcopy, "-O", "binary", f"{cpu}.elf", f"{cpu}.bin", work=work)
            if (work / f"{cpu}.bin").stat().st_size != size:
                raise ValueError(f"{cpu} image changed size")

        name = "jEnesisDS-BlocksDS.nds"
        run(ndstool, "-c", name, "-9", "arm9.elf", "-7", "arm7.elf", "-h", "0x200",
            "-t", "banner.bin", work=work)
        digest = verify_nds(work / name, work)
        for result in (name, "arm9.elf", "arm9.map", "arm7.elf", "arm7.map"):
            (work / result).replace(output / result)
        print(f"{digest}  {(output / name).relative_to(ROOT)}")


if __name__ == "__main__":
    main()
