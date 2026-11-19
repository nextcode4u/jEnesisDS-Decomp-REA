#!/usr/bin/env bash
set -euo pipefail

cd -- "$(dirname -- "${BASH_SOURCE[0]}")/.."
workspace="$PWD"
tool_cache="${XDG_CACHE_HOME:-$HOME/.cache}/jenesisds-decomp"
export GHIDRA_INSTALL_DIR="${GHIDRA_INSTALL_DIR:-$tool_cache/ghidra_12.1.4_PUBLIC}"
export REA_GHIDRA_DECOMPILE_TIMEOUT_SECONDS="${REA_GHIDRA_DECOMPILE_TIMEOUT_SECONDS:-30}"
export REA_GHIDRA_STARTUP_TIMEOUT_MS="${REA_GHIDRA_STARTUP_TIMEOUT_MS:-180000}"

if [[ -x "$tool_cache/node_modules/.bin/rea" ]]; then
    export PATH="$tool_cache/node_modules/.bin:$PATH"
fi
export_root="$(realpath -m -- "${REA_OUTPUT_DIR:-decompiled}")"
report_root="$(realpath -m -- "${REA_EVIDENCE_DIR:-evidence}")"
mkdir -p "$export_root" "$report_root"

export_range() {
    local cpu="$1" output="$2" report="$3"
    shift 3
    local args=()
    if [[ -f "$output/decompile-journal.jsonl" ]]; then
        args+=(--resume)
    fi
    REA_GHIDRA_PROJECT_PATH="$workspace/ghidra/$cpu.gpr" \
        rea decompile-all "$workspace/extracted/$cpu.elf" \
            --provider ghidra --output "$output" "${args[@]}" "$@" --format json \
            > "$report_root/rea-$report-export.json" \
            2> "$report_root/rea-$report-export.log"
}

export_arm9() {
    mkdir -p "$export_root/arm9"
    local range_jobs=()
    export_range arm9 "$export_root"/arm9/part-01 arm9-part-01 --address-end 0x201bfff &
    range_jobs+=("$!")
    export_range arm9 "$export_root"/arm9/part-02 arm9-part-02 --address-start 0x201c000 --address-end 0x201ffff &
    range_jobs+=("$!")
    export_range arm9 "$export_root"/arm9/part-03 arm9-part-03 --address-start 0x2020000 --address-end 0x2023fff &
    range_jobs+=("$!")
    export_range arm9 "$export_root"/arm9/part-04 arm9-part-04 --address-start 0x2024000 --address-end 0x2027fff &
    range_jobs+=("$!")
    export_range arm9 "$export_root"/arm9/part-05 arm9-part-05 --address-start 0x2028000 --address-end 0x202bfff &
    range_jobs+=("$!")
    export_range arm9 "$export_root"/arm9/part-06 arm9-part-06 --address-start 0x202c000 --address-end 0x202ffff &
    range_jobs+=("$!")
    export_range arm9 "$export_root"/arm9/part-07 arm9-part-07 --address-start 0x2030000 &
    range_jobs+=("$!")

    local failed=0
    for job in "${range_jobs[@]}"; do
        wait "$job" || failed=1
    done
    if (( failed )); then
        return 1
    fi
    python3 scripts/index_arm9.py "$export_root/arm9"
}

case "${1:-both}" in
    arm9) export_arm9 ;;
    arm7) export_range arm7 "$export_root/arm7" arm7 ;;
    both)
        export_arm9
        export_range arm7 "$export_root/arm7" arm7
        ;;
    *)
        printf '%s\n' "Usage: bash scripts/decompile.sh [arm9|arm7]" >&2
        exit 2
        ;;
esac
