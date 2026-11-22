WONDERFUL_TOOLCHAIN ?= /opt/wonderful
PYTHON ?= python3
PROFILE ?= 0
BUILD_DIR := build/c
PROFILE_SUFFIX :=
ifeq ($(PROFILE),1)
BUILD_DIR := build/c-profile
PROFILE_SUFFIX := -profile
endif
BLOCKSDS ?= $(if $(wildcard $(WONDERFUL_TOOLCHAIN)/thirdparty/blocksds/core),$(WONDERFUL_TOOLCHAIN)/thirdparty/blocksds/core,/opt/blocksds/core)
export BLOCKSDS

CC_ARM := $(WONDERFUL_TOOLCHAIN)/toolchain/gcc-arm-none-eabi/bin/arm-none-eabi-gcc
HOST_CC ?= cc
HOST_CHECK_FLAGS = -std=c11 -Wall -Wextra -Werror -Isource -DTEST_OUTPUT_DIR='"$(BUILD_DIR)"'
LIBNDS := $(BLOCKSDS)/libs/libnds
NDSTOOL := $(BLOCKSDS)/tools/ndstool/ndstool
ARM7_FLAGS := -specs="$(BLOCKSDS)/sys/crts/ds_arm7.specs" -mthumb -mcpu=arm7tdmi
ARM9_FLAGS := -specs="$(BLOCKSDS)/sys/crts/ds_arm9.specs" -mthumb -mcpu=arm946e-s+nofp
ARM7_OPT := -flto
ARM9_OPT := -flto
C_FLAGS := $(if $(PROFILE_SUFFIX),-DJENESIS_PROFILE) -I"$(LIBNDS)/include" -Wall -Wextra -O2 -ffunction-sections -fdata-sections -MMD -MP
# The emulator hot paths benefit from ARM's predication and register set.
$(BUILD_DIR)/m68k.o $(BUILD_DIR)/vdp_render.o $(BUILD_DIR)/vdp_ds.o $(BUILD_DIR)/megadrive.o $(BUILD_DIR)/dac.o $(BUILD_DIR)/z80_bus.o $(BUILD_DIR)/third_party/z80/z80.o: C_FLAGS += -marm -O3
# Compile the bitmap renderer separately so LTO cannot grow the ARM9 ITCM code.
$(BUILD_DIR)/vdp_render.o: C_FLAGS += -fno-lto
$(BUILD_DIR)/arm7/main.o $(BUILD_DIR)/arm7/psg.o $(BUILD_DIR)/arm7/fm.o: C_FLAGS += -marm -O3
ARM7_OBJ := $(BUILD_DIR)/arm7/main.o $(BUILD_DIR)/arm7/psg.o $(BUILD_DIR)/arm7/fm.o $(BUILD_DIR)/arm7/fm_tables.o
Z80_SRC := source/z80_bus.c source/third_party/z80/z80.c
HOST_CORE_SRC := source/m68k.c source/megadrive.c source/vdp_render.c source/savestate.c source/dac.c $(Z80_SRC)
ARM9_OBJ := $(BUILD_DIR)/main.o $(BUILD_DIR)/frontend.o $(BUILD_DIR)/cartridge.o $(BUILD_DIR)/m68k.o $(BUILD_DIR)/megadrive.o $(BUILD_DIR)/vdp_render.o $(BUILD_DIR)/vdp_ds.o $(BUILD_DIR)/savestate.o $(BUILD_DIR)/dac.o $(Z80_SRC:source/%.c=$(BUILD_DIR)/%.o) $(BUILD_DIR)/frontend_assets.o
ARM7_ELF := $(BUILD_DIR)/arm7.elf
ARM9_ELF := $(BUILD_DIR)/arm9.elf
ROM := build/jEnesisDS-C$(PROFILE_SUFFIX).nds

.PHONY: all check
all: $(ROM)

check: $(BUILD_DIR)/fm_tables.c
	@mkdir -p "$(BUILD_DIR)"
	"$(HOST_CC)" $(HOST_CHECK_FLAGS) \
		tests/boot.c $(HOST_CORE_SRC) source/arm7/psg.c source/arm7/fm.c $(BUILD_DIR)/fm_tables.c -o $(BUILD_DIR)/boot-test
	$(BUILD_DIR)/boot-test
	"$(HOST_CC)" $(HOST_CHECK_FLAGS) \
		tests/memory_layout.c source/cartridge.c $(HOST_CORE_SRC) -o $(BUILD_DIR)/raw-memory-test
	"$(HOST_CC)" $(HOST_CHECK_FLAGS) -DJENESIS_NATIVE_WORDS \
		tests/memory_layout.c source/cartridge.c $(HOST_CORE_SRC) -o $(BUILD_DIR)/native-memory-test
	$(BUILD_DIR)/raw-memory-test $(BUILD_DIR)/raw-memory-test.jsc
	$(BUILD_DIR)/native-memory-test $(BUILD_DIR)/native-memory-test.jsc
	cmp $(BUILD_DIR)/raw-memory-test.jsc $(BUILD_DIR)/native-memory-test.jsc
	rm $(BUILD_DIR)/raw-memory-test.jsc $(BUILD_DIR)/native-memory-test.jsc

$(BUILD_DIR)/fm_tables.c: tools/generate_fm_tables.py
	@mkdir -p "$(@D)"
	"$(PYTHON)" "$<" "$@"

$(BUILD_DIR)/arm7/fm_tables.o: $(BUILD_DIR)/fm_tables.c Makefile
	@mkdir -p "$(@D)"
	"$(CC_ARM)" $(ARM7_FLAGS) $(ARM7_OPT) $(C_FLAGS) -Isource -c "$<" -o "$@"

$(BUILD_DIR)/frontend_assets.c: tools/generate_frontend_assets.py $(wildcard assets/frontend/*)
	@mkdir -p "$(@D)"
	"$(PYTHON)" "$<" "$@"

$(BUILD_DIR)/frontend_assets.o: $(BUILD_DIR)/frontend_assets.c Makefile
	"$(CC_ARM)" $(ARM9_FLAGS) $(ARM9_OPT) $(C_FLAGS) -Isource -c "$<" -o "$@"

$(BUILD_DIR)/%.o: source/%.c Makefile
	@mkdir -p "$(@D)"
	"$(CC_ARM)" $(ARM9_FLAGS) $(ARM9_OPT) $(C_FLAGS) -c "$<" -o "$@"

$(BUILD_DIR)/arm7/%.o: source/arm7/%.c Makefile
	@mkdir -p "$(@D)"
	"$(CC_ARM)" $(ARM7_FLAGS) $(ARM7_OPT) $(C_FLAGS) -c "$<" -o "$@"

$(ARM7_ELF): $(ARM7_OBJ) Makefile
	"$(CC_ARM)" $(ARM7_FLAGS) $(ARM7_OPT) -O3 -L"$(LIBNDS)/lib" \
		-Wl,-Map,$(BUILD_DIR)/arm7.map,--defsym=__irq_stack_size=1024,--defsym=__svc_stack_size=1024 $(ARM7_OBJ) \
		-Wl,--start-group -lnds7 -lc -Wl,--end-group -o "$@"

$(ARM9_ELF): $(ARM9_OBJ) Makefile
	"$(CC_ARM)" $(ARM9_FLAGS) $(ARM9_OPT) -O3 -L"$(LIBNDS)/lib" -Wl,-Map,$(BUILD_DIR)/arm9.map $(ARM9_OBJ) \
		-Wl,--start-group -lnds9 -lc -Wl,--end-group -o "$@"

$(ROM): $(ARM9_ELF) $(ARM7_ELF) Makefile
	"$(NDSTOOL)" -c "$@" -9 "$(ARM9_ELF)" -7 "$(ARM7_ELF)" -g '####' 00 JENESISDS

-include $(ARM7_OBJ:.o=.d) $(ARM9_OBJ:.o=.d)
