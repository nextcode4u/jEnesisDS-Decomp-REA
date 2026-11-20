#!/usr/bin/env python3
"""Compare recovered ARM9 LZSS C with the original jEnesisDS routines in Unicorn."""
import argparse
from pathlib import Path
from random import Random
import shutil
from struct import pack
import subprocess
from tempfile import TemporaryDirectory

from check_c import rom_images
from r20 import compile_c, compiler_command, run, tool
from recovered import LZSS_STREAMS, LZSS_TREES, SOURCE


ORIGINAL = {
    "encode": 0x0200C87C,
    "memory": 0x0200CCB4,
    "load": 0x0200CDA4,
    "write": 0x0200CF28,
}
FUNCTIONS = {
    "encode": "encode_lzss_stream",
    "memory": "decode_lzss_from_memory_with_prefix",
    "load": "load_file_and_decode_lzss_with_prefix",
    "write": "write_file_and_encode_lzss_with_prefix",
}
LIBC = {
    "fclose": 0x02081020,
    "fopen": 0x02081588,
    "fread": 0x02081788,
    "fseek": 0x02081FF0,
    "ftell": 0x0208212C,
    "fwrite": 0x020822E0,
    "memcpy": 0x02082EC0,
}
COUNTERS = 0x020B4C40
CODE = 0x02100000
RETURN = 0x021FFFF0
INPUT = 0x02200000
OUTPUT = 0x02210000
PATH = 0x02220000
FILE = 0x02220080
STACK = 0x03008000
MASK32 = (1 << 32) - 1


def compile_codec(r20, work):
    compiler = compiler_command(r20)
    prefix = r20 / "bin/arm-eabi-"
    shutil.copytree(SOURCE / "source", work, dirs_exist_ok=True)
    objects = [
        compile_c(compiler, work, Path(name + ".c"), 9, "-O2", "-marm").name
        for name in ("bounded_stream", "lzss_match_tree", "lzss_encode", "lzss_decode", "lzss_buffers")
    ]
    addresses = {
        **LZSS_TREES, **LZSS_STREAMS, **LIBC,
        "lzss_bytes_read": COUNTERS,
        "lzss_bytes_written": COUNTERS + 4,
        "binary_read_mode": 0x0208F074,
        "binary_write_mode": 0x0208F070,
    }
    definitions = [f"--defsym={name}={address:#x}" for name, address in addresses.items()]
    run(work, tool(prefix, "ld"), "-Ttext", f"{CODE:#x}",
        "-e", FUNCTIONS["encode"], *definitions, "-o", "codec.elf", *objects)
    run(work, tool(prefix, "objcopy"), "-O", "binary", "--only-section=.text", "codec.elf", "codec.bin")
    listing = subprocess.check_output([tool(prefix, "nm"), "--defined-only", "codec.elf"], cwd=work, text=True)
    symbols = {name: int(address, 16) for address, _, name in map(str.split, listing.splitlines())}
    return (work / "codec.bin").read_bytes(), {role: symbols[name] for role, name in FUNCTIONS.items()}


def u32(*values):
    return pack(f"<{len(values)}I", *values)


def execute(image, codec, entry, role, data, capacity, prefix=0, *,
            input_address=INPUT, output_address=OUTPUT, path=PATH,
            file_exists=True, close_status=0, reported_size=None):
    from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UC_HOOK_CODE
    from unicorn.arm_const import (UC_ARM_REG_CPSR, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_R0,
                                   UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_SP)

    cpu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
    cpu.mem_map(0x02000000, 0x400000)
    cpu.mem_map(STACK - 0x8000, 0x8000)
    cpu.mem_write(image[0], image[1])
    if codec:
        cpu.mem_write(CODE, codec)
    cpu.mem_write(INPUT, b"\xa5" * max(len(data), capacity))
    cpu.mem_write(OUTPUT, b"\xa5" * capacity)
    if role != "load":
        cpu.mem_write(INPUT, data)
    cpu.mem_write(PATH, b"state.jst\0")
    cpu.mem_write(COUNTERS, u32(17, 13))
    cpu.reg_write(UC_ARM_REG_CPSR, 0x1F)
    cpu.reg_write(UC_ARM_REG_SP, STACK - 8)
    cpu.reg_write(UC_ARM_REG_LR, RETURN)
    cpu.mem_write(STACK - 8, u32(prefix))

    io_log = []
    file_position = 0

    def file_call(uc, address, _size, operation):
        nonlocal file_position
        r0, r1, r2, r3 = (uc.reg_read(reg) for reg in registers)
        io_log.append((operation, r0, r1) if operation == "fopen" else operation)
        if operation == "fopen":
            result = FILE if file_exists else 0
            file_position = 0
        elif operation == "fseek":
            assert r0 == FILE and r2 in (0, 2)
            file_position = r1 + (len(data) if r2 == 2 else 0)
            result = 0
        elif operation == "ftell":
            assert r0 == FILE
            result = file_position if reported_size is None else reported_size
        elif operation == "fread":
            assert r3 == FILE and r1 == 1
            contents = data[file_position:file_position + r2]
            uc.mem_write(r0, contents)
            file_position += len(contents)
            result = len(contents)
        elif operation == "fwrite":
            assert r3 == FILE and r1 == 1
            io_log.append(bytes(uc.mem_read(r0, r2)))
            result = r2
        else:
            assert operation == "fclose" and r0 == FILE
            result = close_status
        uc.reg_write(UC_ARM_REG_R0, result & MASK32)
        uc.reg_write(UC_ARM_REG_PC, uc.reg_read(UC_ARM_REG_LR))

    registers = (UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3)
    if role == "encode":
        for buffer, base, size in (("input", INPUT, len(data)), ("output", OUTPUT, capacity)):
            stream = LZSS_STREAMS[f"lzss_{buffer}"]
            cpu.mem_write(LZSS_STREAMS[f"lzss_{buffer}_stream"], u32(stream))
            cpu.mem_write(stream, u32(base, base, size, 0))
    else:
        arguments = (input_address, output_address, len(data) if role == "memory" else path, capacity)
        for register, value in zip(registers, arguments):
            cpu.reg_write(register, value)
    if role in ("load", "write"):
        for operation, address in LIBC.items():
            if operation != "memcpy":
                cpu.hook_add(UC_HOOK_CODE, file_call, operation, begin=address, end=address)

    cpu.emu_start(entry, RETURN, count=30_000_000)
    if cpu.reg_read(UC_ARM_REG_PC) != RETURN:
        raise ValueError(f"{role} exceeded the instruction budget at {entry:#x}")
    start = LZSS_STREAMS["lzss_input_stream"]
    end = LZSS_TREES["lzss_match_length"] + 4
    return {
        "status": cpu.reg_read(UC_ARM_REG_R0) if role in ("load", "write") else None,
        "input": bytes(cpu.mem_read(INPUT, max(len(data), capacity))),
        "output": bytes(cpu.mem_read(OUTPUT, capacity)),
        "state": bytes(cpu.mem_read(start, end - start)),
        "counters": bytes(cpu.mem_read(COUNTERS, 8)),
        "file operations": io_log,
    }


def compare_codec(image, codec, entries):
    random = Random(20)
    case_count = 0

    def compare(role, data, capacity, *args, **kwargs):
        nonlocal case_count
        expected = execute(image, None, ORIGINAL[role], role, data, capacity, *args, **kwargs)
        recovered = execute(image, codec, entries[role], role, data, capacity, *args, **kwargs)
        differences = [field for field in expected if expected[field] != recovered[field]]
        if differences:
            raise ValueError(f"{role}, input {len(data)}, capacity {capacity}, prefix {args}: "
                             f"mismatch in {', '.join(differences)}")
        case_count += 1
        return expected

    samples = [
        b"", b"A", b" " * 18, b"AB" * 100, bytes(range(256)), bytes(range(256)) * 24,
        b"\0" * 13000, b" " * 4096 + random.randbytes(4096), random.randbytes(0x3100),
    ]
    for data in samples:
        for capacity in (0, 1, 17, 2 * len(data) + 1):
            encoded = compare("encode", data, capacity)
        written = int.from_bytes(encoded["counters"][4:], "little") - 13
        if not data:
            continue
        packed = b"HEAD" + encoded["output"][:written]
        output_size = max(len(packed), len(data) + 4)
        for role in ("memory", "load"):
            decoded = compare(role, packed, output_size, 4)
            if decoded["output"][:len(data) + 4] != b"HEAD" + data:
                raise ValueError(f"{role} failed the encode/decode round trip")
    for data in (b"", b"header", b"HEAD\xff", b"HEAD\x00\xee", b"HEAD\x00\xee\xff"):
        for capacity, prefix in ((0, 0), (4, 2), (32, 0), (32, 4), (32, 8)):
            compare("memory", data, capacity, prefix)
            compare("load", data, capacity, prefix)
    compare("memory", b"HEAD\x01A", 16, 4, output_address=0)
    compare("load", b"HEAD\x01A", 16, 4, input_address=0)
    compare("load", b"HEAD\x01A", 16, 4, path=0)
    compare("load", b"HEAD\x01A", 16, 4, file_exists=False)
    compare("load", b"HEAD\x01A", 16, 4, reported_size=-1, close_status=-1)
    compare("load", b"HEAD\x01A", 16, 4, reported_size=12)
    for data in samples[1:]:
        for prefix in (0, 1, len(data)):
            compare("write", data, len(data), prefix)
    compare("write", b"text", 4, output_address=0)
    compare("write", b"text", 4, file_exists=False)
    compare("write", b"text", 4, close_status=-1)
    print(f"Original ARM9 and recovered C match for {case_count} encoder, decoder, and file cases.")


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--r20-root", required=True, type=Path)
    parser.add_argument("--rom", required=True, type=Path)
    parser.add_argument("--build-dir", required=True, type=Path)
    args = parser.parse_args()
    try:
        image = rom_images(args.rom)[9]
        build = args.build_dir.resolve()
        build.mkdir(parents=True, exist_ok=True)
        with TemporaryDirectory(prefix="r20-lzss-", dir=build) as directory:
            codec, entries = compile_codec(args.r20_root.resolve(), Path(directory))
            compare_codec(image, codec, entries)
    except ModuleNotFoundError as error:
        if error.name != "unicorn":
            raise
        parser.exit(1, "The LZSS behavior check requires the Python unicorn package.\n")
    except (OSError, ValueError, subprocess.CalledProcessError) as error:
        parser.exit(1, f"{error}\n")


if __name__ == "__main__":
    main()
