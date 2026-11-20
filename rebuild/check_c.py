#!/usr/bin/env python3
"""Compile reconstructed and historical C with devkitARM r20 and check ROM bytes."""
import argparse
from hashlib import sha256
import io
import shutil
from pathlib import Path
import struct
import subprocess
import tarfile
from tempfile import TemporaryDirectory

from build import EXPECTED_ROM_SHA256, check_match, run, tool


SOURCE = Path(__file__).resolve().parent
NDSLIB_2005 = "eafb2703db6e2b6b414a2fa15107212522666bff"
LIBNDS_APR_2006 = "79e4f563e2ed88f404b72e0d8a4f8b079b2abe2a"
LIBNDS_OCT_2007 = "8ea06b95fe716cfceff0bce34232217a61e0e6c9"

STREAM_FUNCTIONS = {
    "read_bounded_stream_byte": 0x0200C82C,
    "write_bounded_stream_byte": 0x0200C858,
}
STREAM_SIZES = {"read_bounded_stream_byte": 44, "write_bounded_stream_byte": 36}
LZSS_RING = 0x023DDEC0
RECOVERED_REGIONS = (
    ("LZSS match tree", "lzss_match_tree.c", "initialize_lzss_match_trees",
     0x0200C5D8, 0x0200C82C, {
         "lzss_ring_buffer": LZSS_RING,
         "lzss_left_child": 0x023DEEE4,
         "lzss_parent": 0x023E2EEC,
         "lzss_right_child": 0x023E6EF0,
         "lzss_match_position": 0x023EB30C,
         "lzss_match_length": 0x023EB310,
     }),
    ("LZSS stream decoder", "lzss_decode.c", "decode_lzss_stream",
     0x0200CB78, 0x0200CCB4, {
         **STREAM_FUNCTIONS,
         "lzss_ring_buffer": LZSS_RING,
         "lzss_input_stream": 0x023DDEBC,
         "lzss_output_stream": 0x023EB2F8,
     }),
    ("Cartridge bus", "cartridge_bus.c", "get_cartridge_rom_buffer",
     0x02003CA4, 0x02003CF8, {
         "cartridge_rom_bytes": 0x020B4CEC,
         "genesis_work_ram_bytes": 0x023CB634,
         "z80_cartridge_bank_base": 0x02099008,
     }),
)
TOUCH_FUNCTIONS = {
    "touchRead": 0x03801244,
    "readTouchValue": 0x03801310,
    "touchReadXY": 0x03801360,
    "touchReadTemperature": 0x0380152C,
}
RTC_FUNCTIONS = {
    "BCDToInteger": 0x03801060,
    "integerToBCD": 0x0380108C,
    "rtcTransaction": 0x038010C8,
    "rtcReset": 0x03801200,
}
CARD_FUNCTIONS = {
    "cardWriteCommand": 0x0207FDA8,
    "cardPolledTransfer": 0x0207FDCC,
    "cardStartTransfer": 0x0207FE0C,
}
KEY_FUNCTIONS = {
    "keysHeld": 0x0207FB70,
    "keysDown": 0x0207FB7C,
    "scanKeys": 0x0207FB90,
}
IRQ_FUNCTIONS = {
    "irqSet": 0x02080098,
    "irqInit": 0x02080100,
    "irqClear": 0x0208014C,
    "irqInitHandler": 0x020801CC,
    "irqEnable": 0x020801FC,
    "irqDisable": 0x0208024C,
}
ARM7_IRQ_FUNCTIONS = {
    "irqSet": 0x03801564,
    "irqInit": 0x038015D0,
    "irqClear": 0x03801620,
    "irqInitHandler": 0x038016A4,
    "irqEnable": 0x038016D8,
}
CPU_FLAGS = {
    7: ("-mcpu=arm7tdmi", "-mtune=arm7tdmi", "-DARM7"),
    9: ("-march=armv5te", "-mtune=arm946e-s", "-DARM9"),
}


def rom_images(path):
    rom = path.read_bytes()
    if sha256(rom).hexdigest() != EXPECTED_ROM_SHA256:
        raise ValueError("Expected the original jEnesisDS 0.7.4 ROM")
    images = {}
    for cpu, header in ((9, 0x20), (7, 0x30)):
        offset, _, base, size = struct.unpack_from("<4I", rom, header)
        images[cpu] = base, rom[offset:offset + size]
    return images


def functions_in_object(path):
    """Read sized functions and their relocation-byte ranges from an ELF32 ARM object."""
    data = path.read_bytes()
    if data[:6] != b"\x7fELF\x01\x01" or struct.unpack_from("<HH", data, 16) != (1, 40):
        raise ValueError(f"Expected a little-endian ARM ELF32 object: {path}")
    section_offset, = struct.unpack_from("<I", data, 32)
    section_stride, section_count = struct.unpack_from("<HH", data, 46)
    sections = [struct.unpack_from("<10I", data, section_offset + idx * section_stride)
                for idx in range(section_count)]
    relocations = {}
    for header in sections:
        if header[1] in (4, 9):
            offsets = relocations.setdefault(header[7], [])
            for pos in range(header[4], header[4] + header[5], header[9]):
                offsets.append(struct.unpack_from("<I", data, pos)[0])
    for table in sections:
        if table[1] != 2:
            continue
        strings = sections[table[6]][4]
        for pos in range(table[4], table[4] + table[5], table[9]):
            name, value, size, info, _, section = struct.unpack_from("<IIIBBH", data, pos)
            if info & 15 != 2 or not size or not 0 < section < section_count:
                continue
            label = data[strings + name:data.index(0, strings + name)].decode("ascii")
            start = value & ~1
            code_offset = sections[section][4] + start
            masked = {offset + byte - start for offset in relocations.get(section, ())
                      for byte in range(4) if start <= offset + byte < start + size}
            yield label, data[code_offset:code_offset + size], masked


def compare(object_path, symbols, image, exact_sizes=None):
    base, memory = image
    functions = {name: (code, masked) for name, code, masked in functions_in_object(object_path)}
    exact = set()
    for name, address in symbols.items():
        if name not in functions:
            print(f"  {address:#010x} {name:25} absent")
            continue
        code, masked = functions[name]
        if exact_sizes is not None and (len(code) != exact_sizes[name] or masked):
            raise ValueError(f"{name} must match the original size without relocations")
        start = address - base
        expected = memory[start:start + len(code)]
        if start < 0 or len(expected) != len(code):
            raise ValueError(f"{name} at {address:#x} does not fit in its processor image")
        checked = len(code) - len(masked)
        matching = sum(actual == expected[i] for i, actual in enumerate(code) if i not in masked)
        if matching == checked and checked:
            exact.add(name)
        print(f"  {address:#010x} {name:25} {matching}/{checked} bytes"
              f" ({len(masked)} relocation bytes skipped)")
    return exact


def compiler_command(root):
    gcc = tool(root / "bin/arm-eabi-", "gcc")
    command = [gcc]
    if gcc.endswith(".exe"):
        # r20 Win32 derives search paths from argv[0]. Give it its host paths
        # explicitly when starting it from a WSL shell.
        for option, directory in (
            ("-B", root / "libexec/gcc/arm-eabi/4.1.1"),
            ("-B", root / "arm-eabi/bin"),
            ("-isystem", root / "arm-eabi/include"),
            ("-isystem", root / "lib/gcc/arm-eabi/4.1.1/include"),
        ):
            path = subprocess.check_output(["wslpath", "-w", str(directory)], text=True).strip()
            command.append(option + path + ("/" if option == "-B" else ""))
    version = subprocess.check_output([gcc, "--version"], text=True).splitlines()[0]
    if "4.1.1" not in version or "devkitARM release 20" not in version:
        raise ValueError(f"Expected GCC 4.1.1 from devkitARM r20, received {version}")
    print(version)
    return command


def compile_c(compiler, root, source, cpu, optimization, instruction_set):
    output = source.stem + f"-arm{cpu}-{optimization}.o"
    subprocess.run(
        [*compiler, optimization, instruction_set, "-mthumb-interwork", *CPU_FLAGS[cpu],
         "-fomit-frame-pointer", "-ffast-math", "-Iinclude", "-c", str(source), "-o", output],
        cwd=root, check=True,
    )
    return root / output


def check_recovered_regions(compiler, prefix, work, arm9):
    linker, objcopy = (tool(prefix, name) for name in ("ld", "objcopy"))
    base, memory = arm9
    for label, filename, entry, start, end, symbols in RECOVERED_REGIONS:
        obj = compile_c(compiler, work, Path(filename), 9, "-O2", "-marm")
        elf, binary = (obj.with_suffix(ext).name for ext in (".elf", ".bin"))
        definitions = [f"--defsym={name}={address:#x}" for name, address in symbols.items()]
        run(work, linker, "-Ttext", f"{start:#x}", "-e", entry, *definitions, "-o", elf, obj.name)
        run(work, objcopy, "-O", "binary", "--only-section=.text", elf, binary)
        expected = memory[start - base:end - base]
        check_match(expected, (work / binary).read_bytes(), label)
        print(f"  {start:#010x}–{end - 1:#010x} {label}"
              f" {len(expected)}/{len(expected)} bytes (including linked addresses)")


def snapshot(repository, revision, directory, paths):
    directory.mkdir()
    archive = subprocess.check_output(["git", "-C", str(repository), "archive", revision, *paths])
    with tarfile.open(fileobj=io.BytesIO(archive)) as tree:
        tree.extractall(directory, filter="data")


def check_sdk(compiler, work, images, libnds, ndslib):
    sdk_2005 = work / "ndslib-2005"
    sdk_2006 = work / "libnds-2006"
    sdk_2007 = work / "libnds-2007"
    for root, repository, revision, paths in (
        (sdk_2005, ndslib, NDSLIB_2005, ("include", "lib")),
        (sdk_2006, libnds, LIBNDS_APR_2006, ("include", "source")),
        (sdk_2007, libnds, LIBNDS_OCT_2007, ("include", "source")),
    ):
        snapshot(repository, revision, root, paths)
    for root, path, cpu, opt, symbols, required in (
        (sdk_2005, "lib/ARM7/touch.c", 7, "-O2", TOUCH_FUNCTIONS, set()),
        (sdk_2005, "lib/ARM9/keys.c", 9, "-O2", KEY_FUNCTIONS, set()),
        (sdk_2005, "lib/common/interrupts.c", 9, "-O2", IRQ_FUNCTIONS, set()),
        (sdk_2006, "source/arm7/touch.c", 7, "-O2", TOUCH_FUNCTIONS, set(TOUCH_FUNCTIONS)),
        (sdk_2006, "source/arm7/clock.c", 7, "-O2", RTC_FUNCTIONS, set(RTC_FUNCTIONS)),
        (sdk_2006, "source/common/card.c", 9, "-O2", CARD_FUNCTIONS, set(CARD_FUNCTIONS)),
        (sdk_2007, "source/arm7/touch.c", 7, "-O2", TOUCH_FUNCTIONS, {"touchRead", "touchReadTemperature"}),
        (sdk_2007, "source/arm9/keys.c", 9, "-O2", KEY_FUNCTIONS, {"keysHeld", "keysDown"}),
        (sdk_2007, "source/common/interrupts.c", 7, "-O2", ARM7_IRQ_FUNCTIONS,
         set(ARM7_IRQ_FUNCTIONS) - {"irqEnable"}),
        (sdk_2007, "source/common/interrupts.c", 7, "-Os",
         {"irqEnable": ARM7_IRQ_FUNCTIONS["irqEnable"]}, {"irqEnable"}),
        (sdk_2007, "source/common/interrupts.c", 9, "-O2", IRQ_FUNCTIONS, set(IRQ_FUNCTIONS) - {"irqEnable"}),
        (sdk_2007, "source/common/interrupts.c", 9, "-Os", {"irqEnable": IRQ_FUNCTIONS["irqEnable"]}, {"irqEnable"}),
    ):
        print(f"{root.name} / {path} / ARM{cpu} {opt}")
        obj = compile_c(compiler, root, Path(path), cpu, opt, "-mthumb")
        exact = compare(obj, symbols, images[cpu])
        if not required <= exact:
            raise ValueError(f"Expected matches missing: {', '.join(sorted(required - exact))}")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--r20-root", default="", help="Complete devkitARM r20 installation")
    parser.add_argument("--build-dir", type=Path, default=Path("build"))
    parser.add_argument("--rom", type=Path, default=Path("input/jEnesisDS.nds"))
    parser.add_argument("--libnds-repo", type=Path)
    parser.add_argument("--ndslib-repo", type=Path)
    args = parser.parse_args()
    if not args.r20_root:
        parser.error("set R20_ROOT to the extracted devkitARM r20 directory")
    if bool(args.libnds_repo) != bool(args.ndslib_repo):
        parser.error("supply both SDK repositories for the SDK comparison")
    try:
        r20 = Path(args.r20_root).expanduser().resolve()
        compiler = compiler_command(r20)
        images = rom_images(args.rom)
        build = args.build_dir.resolve()
        build.mkdir(parents=True, exist_ok=True)
        with TemporaryDirectory(prefix="r20-c-", dir=build) as directory:
            work = Path(directory)
            shutil.copytree(SOURCE / "source", work, dirs_exist_ok=True)
            print("Reconstructed C / ARM9 -O2")
            obj = compile_c(compiler, work, Path("bounded_stream.c"), 9, "-O2", "-marm")
            if compare(obj, STREAM_FUNCTIONS, images[9], STREAM_SIZES) != set(STREAM_FUNCTIONS):
                raise ValueError("Reconstructed LZSS stream helpers differ from the ROM")
            check_recovered_regions(compiler, r20 / "bin/arm-eabi-", work, images[9])
            if args.libnds_repo:
                check_sdk(compiler, work, images, args.libnds_repo, args.ndslib_repo)
    except (OSError, ValueError, subprocess.CalledProcessError) as error:
        parser.exit(1, f"{error}\n")


if __name__ == "__main__":
    main()
