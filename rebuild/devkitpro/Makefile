.DEFAULT_GOAL := all

ifeq ($(strip $(DEVKITARM)),)
$(error Set DEVKITARM to the devkitARM r20 directory)
endif

include $(DEVKITARM)/ds_rules

LIBFAT ?= $(DEVKITPRO)/libfat
export LIBNDS LIBFAT

BUILD := build/r20-homebrew
NDSTOOL := $(DEVKITARM)/bin/ndstool$(if $(wildcard $(DEVKITARM)/bin/ndstool.exe),.exe)

.PHONY: all
all: $(BUILD)/sdk-check.nds

$(BUILD)/sdk-check.nds: $(BUILD)/arm7/sdk-check.arm7 $(BUILD)/arm9/sdk-check.arm9
	cd "$(BUILD)" && "$(NDSTOOL)" -c sdk-check.nds -7 arm7/sdk-check.arm7 -9 arm9/sdk-check.arm9

# Let the processor Makefiles check source and header dependencies.
.PHONY: arm7 arm9
$(BUILD)/arm7/sdk-check.arm7: arm7 ; @test -f "$@"
$(BUILD)/arm9/sdk-check.arm9: arm9 ; @test -f "$@"
arm7 arm9:
	@mkdir -p "$(BUILD)/$@"
	$(MAKE) -C "$(BUILD)/$@" -f ../../../rebuild/devkitpro/cpu.mk CPU=$(@:arm%=%)
