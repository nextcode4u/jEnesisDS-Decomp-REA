#!/usr/bin/env bash
set -euo pipefail

cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.."
workspace="$PWD"
tool_cache="${XDG_CACHE_HOME:-$HOME/.cache}/jenesisds-decomp"
ghidra="${GHIDRA_INSTALL_DIR:-$tool_cache/ghidra_12.1.4_PUBLIC}"
arm_tools="${ARM_TOOL_PREFIX:-/opt/devkitpro/devkitARM/bin/arm-none-eabi-}"
python3 scripts/extract_nds.py
mkdir -p ghidra evidence

build_project() (
    local cpu="$1" base="$2" language="$3"
    if [[ -e "$workspace/ghidra/$cpu.gpr" ]]; then
        printf '%s\n' "Project already exists at $workspace/ghidra/$cpu.gpr" >&2
        return 1
    fi
    local scratch
    scratch="$(mktemp -d)"
    trap 'rm -r -- "$scratch"' EXIT
    cp -- "$workspace/scripts/PrepareJenesisAnalysis.java" "$scratch/"
    "${arm_tools}objcopy" -I binary -O elf32-littlearm -B arm \
        --rename-section .data=.text,alloc,load,code,contents \
        --strip-all "extracted/$cpu.bin" "$scratch/image.o"
    "${arm_tools}ld" -Ttext "$base" -e "$base" -o "extracted/$cpu.elf" "$scratch/image.o"
    "$ghidra/support/analyzeHeadless" "$workspace/ghidra" "$cpu" \
        -import "$workspace/extracted/$cpu.elf" -processor "$language" -cspec default \
        -scriptPath "$scratch" -preScript PrepareJenesisAnalysis.java "$cpu" \
        -analysisTimeoutPerFile 420 -max-cpu 4 \
        > "$workspace/evidence/ghidra-$cpu-elf.log" 2>&1
    rg -q 'REPORT: Analysis succeeded' "$workspace/evidence/ghidra-$cpu-elf.log"
    if rg -q 'ERROR' "$workspace/evidence/ghidra-$cpu-elf.log"; then
        cat "$workspace/evidence/ghidra-$cpu-elf.log" >&2
        return 1
    fi
)

if [[ "$#" == 0 || "$1" == arm9 ]]; then
    build_project arm9 0x02000000 ARM:LE:32:v5t
fi
if [[ "$#" == 0 || "$1" == arm7 ]]; then
    build_project arm7 0x037f8000 ARM:LE:32:v4t
fi
