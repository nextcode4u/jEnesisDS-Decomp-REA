WONDERFUL_TOOLCHAIN ?= /opt/wonderful
BLOCKSDS ?= $(if $(wildcard $(WONDERFUL_TOOLCHAIN)/thirdparty/blocksds/core),$(WONDERFUL_TOOLCHAIN)/thirdparty/blocksds/core,/opt/blocksds/core)
export BLOCKSDS

CC_ARM := $(WONDERFUL_TOOLCHAIN)/toolchain/gcc-arm-none-eabi/bin/arm-none-eabi-gcc
HOST_CC ?= cc
LIBNDS := $(BLOCKSDS)/libs/libnds
SPECS := $(BLOCKSDS)/sys/crts/ds_arm9.specs
NDSTOOL := $(BLOCKSDS)/tools/ndstool/ndstool
ARM7 := $(BLOCKSDS)/sys/arm7/main_core/arm7_minimal.elf
OBJ := build/c/main.o build/c/cartridge.o build/c/m68k.o build/c/megadrive.o
ELF := build/c/arm9.elf
ROM := build/jEnesisDS-C.nds

.PHONY: all check
all: $(ROM)

check:
	@mkdir -p build/c
	"$(HOST_CC)" -std=c11 -Wall -Wextra -Werror -Isource \
		tests/boot.c source/m68k.c source/megadrive.c -o build/c/boot-test
	build/c/boot-test

build/c/%.o: source/%.c Makefile
	@mkdir -p "$(@D)"
	"$(CC_ARM)" -specs="$(SPECS)" -mthumb -mcpu=arm946e-s+nofp \
		-I"$(LIBNDS)/include" -Wall -Wextra -O2 -ffunction-sections \
		-fdata-sections -MMD -MP -c "$<" -o "$@"

$(ELF): $(OBJ) Makefile
	"$(CC_ARM)" -specs="$(SPECS)" -mthumb -mcpu=arm946e-s+nofp \
		-L"$(LIBNDS)/lib" -Wl,-Map,build/c/arm9.map $(OBJ) \
		-Wl,--start-group -lnds9 -lc -Wl,--end-group -o "$@"

$(ROM): $(ELF) $(ARM7) Makefile
	"$(NDSTOOL)" -c "$@" -9 "$(ELF)" -7 "$(ARM7)" -g '####' 00 JENESISDS

-include $(OBJ:.o=.d)
