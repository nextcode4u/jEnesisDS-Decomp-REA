PYTHON ?= python3
HOSTCC ?= cc
R20_ROOT ?=
R20_BUILD_DIR ?= build
ROM ?= input/jEnesisDS.nds
LIBNDS_REPO ?= build/sdk-sources/libnds
NDSLIB_REPO ?= build/sdk-sources/ndslib-archive

LZSS_SOURCES = bounded_stream lzss_match_tree lzss_encode lzss_decode lzss_memory lzss_buffers lzss_state

.PHONY: check-c check-lzss check-lzss-standalone check-codec-rom check-sdk check-pseudocode arm7-sdk check-arm7-sdk \
	reference reference-c reference-c-sdk reference-c-codec

check-c:
	$(PYTHON) rebuild/check_c.py --r20-root "$(R20_ROOT)" --build-dir "$(R20_BUILD_DIR)" --rom "$(ROM)"

check-lzss:
	$(PYTHON) rebuild/check_lzss.py --r20-root "$(R20_ROOT)" --build-dir "$(R20_BUILD_DIR)" --rom "$(ROM)"

check-lzss-standalone:
	@set -eu; work=$$(mktemp -d); trap 'rm -rf -- "$$work"' EXIT; \
	$(HOSTCC) -std=c99 -O2 -Wall -Wextra -Werror -Irebuild/source \
		rebuild/check_lzss_host.c $(addprefix rebuild/source/,$(addsuffix .c,$(LZSS_SOURCES))) -o "$$work/check-lzss"; \
	"$$work/check-lzss" "$$work/stream.bin"

check-codec-rom: reference-c-codec
	$(PYTHON) rebuild/check_lzss.py --rom "$(ROM)" --codec-rom build/reference-c-codec/jEnesisDS-codec-test.nds

check-sdk:
	$(PYTHON) rebuild/check_c.py --r20-root "$(R20_ROOT)" --build-dir "$(R20_BUILD_DIR)" --rom "$(ROM)" \
		--libnds-repo "$(LIBNDS_REPO)" --ndslib-repo "$(NDSLIB_REPO)"

arm7-sdk:
	$(PYTHON) rebuild/sdk_arm7.py --r20-root "$(R20_ROOT)" --libnds-repo "$(LIBNDS_REPO)" --output "$(R20_BUILD_DIR)/arm7-sdk"

check-arm7-sdk: arm7-sdk
	$(PYTHON) rebuild/sdk_arm7.py --output "$(R20_BUILD_DIR)/arm7-sdk" --compare "$(ROM)"

check-pseudocode:
	$(PYTHON) scripts/check_pseudocode.py

reference:
	$(PYTHON) rebuild/build.py --rom "$(ROM)" $(if $(R20_ROOT),--tool-prefix "$(R20_ROOT)/bin/arm-eabi-")

reference-c:
	$(PYTHON) rebuild/build.py --rom "$(ROM)" --r20-root "$(R20_ROOT)"

reference-c-sdk:
	$(PYTHON) rebuild/build.py --rom "$(ROM)" --r20-root "$(R20_ROOT)" --libnds-repo "$(LIBNDS_REPO)"

reference-c-codec:
	$(PYTHON) rebuild/build.py --rom "$(ROM)" --r20-root "$(R20_ROOT)" --replace-codec
