WONDERFUL_TOOLCHAIN ?= /opt/wonderful
PYTHON ?= python3
BLOCKSDS ?= $(if $(wildcard $(WONDERFUL_TOOLCHAIN)/thirdparty/blocksds/core),$(WONDERFUL_TOOLCHAIN)/thirdparty/blocksds/core,/opt/blocksds/core)
export BLOCKSDS

CC_ARM := $(WONDERFUL_TOOLCHAIN)/toolchain/gcc-arm-none-eabi/bin/arm-none-eabi-gcc
HOST_CC ?= cc
LIBNDS := $(BLOCKSDS)/libs/libnds
NDSTOOL := $(BLOCKSDS)/tools/ndstool/ndstool
ARM7_FLAGS := -specs="$(BLOCKSDS)/sys/crts/ds_arm7.specs" -mthumb -mcpu=arm7tdmi
ARM9_FLAGS := -specs="$(BLOCKSDS)/sys/crts/ds_arm9.specs" -mthumb -mcpu=arm946e-s+nofp
ARM7_OPT := -flto
ARM9_OPT := -flto
C_FLAGS := -I"$(LIBNDS)/include" -Wall -Wextra -O2 -ffunction-sections -fdata-sections -MMD -MP
# The emulator hot paths benefit from ARM's predication and register set.
build/c/m68k.o build/c/vdp_render.o build/c/vdp_ds.o build/c/megadrive.o build/c/dac.o build/c/z80_bus.o build/c/third_party/z80/z80.o: C_FLAGS += -marm -O3
build/c/arm7/main.o build/c/arm7/psg.o build/c/arm7/fm.o: C_FLAGS += -marm -O3
ARM7_OBJ := build/c/arm7/main.o build/c/arm7/psg.o build/c/arm7/fm.o build/c/arm7/fm_tables.o
Z80_SRC := source/z80_bus.c source/third_party/z80/z80.c
HOST_CORE_SRC := source/m68k.c source/megadrive.c source/vdp_render.c source/savestate.c source/dac.c $(Z80_SRC)
ARM9_OBJ := build/c/main.o build/c/frontend.o build/c/cartridge.o build/c/m68k.o build/c/megadrive.o build/c/vdp_render.o build/c/vdp_ds.o build/c/savestate.o build/c/dac.o $(Z80_SRC:source/%.c=build/c/%.o) build/c/frontend_assets.o
ARM7_ELF := build/c/arm7.elf
ARM9_ELF := build/c/arm9.elf
ROM := build/jEnesisDS-C.nds

.PHONY: all check
all: $(ROM)

check: build/c/fm_tables.c
	@mkdir -p build/c
	"$(HOST_CC)" -std=c11 -Wall -Wextra -Werror -Isource \
		tests/boot.c $(HOST_CORE_SRC) source/arm7/psg.c source/arm7/fm.c build/c/fm_tables.c -o build/c/boot-test
	build/c/boot-test
	"$(HOST_CC)" -std=c11 -Wall -Wextra -Werror -Isource \
		tests/memory_layout.c source/cartridge.c $(HOST_CORE_SRC) -o build/c/raw-memory-test
	"$(HOST_CC)" -std=c11 -Wall -Wextra -Werror -DJENESIS_NATIVE_WORDS -Isource \
		tests/memory_layout.c source/cartridge.c $(HOST_CORE_SRC) -o build/c/native-memory-test
	build/c/raw-memory-test build/c/raw-memory-test.jsc
	build/c/native-memory-test build/c/native-memory-test.jsc
	cmp build/c/raw-memory-test.jsc build/c/native-memory-test.jsc
	rm build/c/raw-memory-test.jsc build/c/native-memory-test.jsc

build/c/fm_tables.c: tools/generate_fm_tables.py
	@mkdir -p "$(@D)"
	"$(PYTHON)" "$<" "$@"

build/c/arm7/fm_tables.o: build/c/fm_tables.c Makefile
	@mkdir -p "$(@D)"
	"$(CC_ARM)" $(ARM7_FLAGS) $(ARM7_OPT) $(C_FLAGS) -Isource -c "$<" -o "$@"

build/c/frontend_assets.c: tools/generate_frontend_assets.py $(wildcard assets/frontend/*)
	@mkdir -p "$(@D)"
	"$(PYTHON)" "$<" "$@"

build/c/frontend_assets.o: build/c/frontend_assets.c Makefile
	"$(CC_ARM)" $(ARM9_FLAGS) $(ARM9_OPT) $(C_FLAGS) -Isource -c "$<" -o "$@"

build/c/%.o: source/%.c Makefile
	@mkdir -p "$(@D)"
	"$(CC_ARM)" $(ARM9_FLAGS) $(ARM9_OPT) $(C_FLAGS) -c "$<" -o "$@"

build/c/arm7/%.o: source/arm7/%.c Makefile
	@mkdir -p "$(@D)"
	"$(CC_ARM)" $(ARM7_FLAGS) $(ARM7_OPT) $(C_FLAGS) -c "$<" -o "$@"

$(ARM7_ELF): $(ARM7_OBJ) Makefile
	"$(CC_ARM)" $(ARM7_FLAGS) $(ARM7_OPT) -O3 -L"$(LIBNDS)/lib" -Wl,-Map,build/c/arm7.map $(ARM7_OBJ) \
		-Wl,--start-group -lnds7 -lc -Wl,--end-group -o "$@"

$(ARM9_ELF): $(ARM9_OBJ) Makefile
	"$(CC_ARM)" $(ARM9_FLAGS) $(ARM9_OPT) -O3 -L"$(LIBNDS)/lib" -Wl,-Map,build/c/arm9.map $(ARM9_OBJ) \
		-Wl,--start-group -lnds9 -lc -Wl,--end-group -o "$@"

$(ROM): $(ARM9_ELF) $(ARM7_ELF) Makefile
	"$(NDSTOOL)" -c "$@" -9 "$(ARM9_ELF)" -7 "$(ARM7_ELF)" -g '####' 00 JENESISDS

-include $(ARM7_OBJ:.o=.d) $(ARM9_OBJ:.o=.d)
