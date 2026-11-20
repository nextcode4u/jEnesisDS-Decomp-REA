PYTHON ?= python3
R20_ROOT ?=
R20_BUILD_DIR ?= build
ROM ?= input/jEnesisDS.nds
LIBNDS_REPO ?= build/sdk-sources/libnds
NDSLIB_REPO ?= build/sdk-sources/ndslib-archive

.PHONY: check-c check-lzss check-sdk check-pseudocode reference reference-c

check-c:
	$(PYTHON) rebuild/check_c.py --r20-root "$(R20_ROOT)" --build-dir "$(R20_BUILD_DIR)" --rom "$(ROM)"

check-lzss:
	$(PYTHON) rebuild/check_lzss.py --r20-root "$(R20_ROOT)" --build-dir "$(R20_BUILD_DIR)" --rom "$(ROM)"

check-sdk:
	$(PYTHON) rebuild/check_c.py --r20-root "$(R20_ROOT)" --build-dir "$(R20_BUILD_DIR)" --rom "$(ROM)" \
		--libnds-repo "$(LIBNDS_REPO)" --ndslib-repo "$(NDSLIB_REPO)"

check-pseudocode:
	$(PYTHON) scripts/check_pseudocode.py

reference:
	$(PYTHON) rebuild/build.py --rom "$(ROM)" $(if $(R20_ROOT),--tool-prefix "$(R20_ROOT)/bin/arm-eabi-")

reference-c:
	$(PYTHON) rebuild/build.py --rom "$(ROM)" --r20-root "$(R20_ROOT)"
