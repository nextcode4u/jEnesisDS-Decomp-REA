"""Common devkitARM r20 tool and binary comparison helpers."""
from pathlib import Path
import os
import subprocess


EXPECTED_ROM_SHA256 = "cc2ab8b1153cd115978a68c1490e6fe0ea578832f877e7cf3169cbd920cf8104"
CPU_FLAGS = {
    7: ("-mcpu=arm7tdmi", "-mtune=arm7tdmi", "-DARM7"),
    9: ("-march=armv5te", "-mtune=arm946e-s", "-DARM9"),
}


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


def compiler_command(root):
    gcc = tool(root / "bin/arm-eabi-", "gcc")
    command = [gcc]
    if gcc.endswith(".exe") and os.name != "nt":
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


def compile_c(compiler, root, source, cpu, optimization, instruction_set, *, interwork=True, tune=None):
    output = source.stem + f"-arm{cpu}-{optimization}.o"
    interwork_flag = "-mthumb-interwork" if interwork else "-mno-thumb-interwork"
    tuning_flags = [f"-mtune={tune}"] if tune else []
    subprocess.run(
        [*compiler, optimization, instruction_set, interwork_flag, *CPU_FLAGS[cpu], *tuning_flags,
         "-fomit-frame-pointer", "-ffast-math", "-Iinclude", "-c", str(source), "-o", output],
        cwd=root, check=True,
    )
    return root / output
