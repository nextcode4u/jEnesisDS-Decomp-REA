.DEFAULT_GOAL := all

include $(DEVKITARM)/ds_rules

PYTHON ?= python3
SOURCE := ../../../rebuild/source
CHECK_SOURCE := ../../../rebuild/devkitpro
DEPSDIR := .
VPATH := $(SOURCE) $(CHECK_SOURCE)

# The archived Win32 tools need native paths when launched from WSL.
SDK_PATH = $(1)
ifneq ($(wildcard $(DEVKITARM)/bin/arm-eabi-gcc.exe),)
CC := $(DEVKITARM)/bin/arm-eabi-gcc.exe
AR := $(DEVKITARM)/bin/arm-eabi-ar.exe
OBJCOPY := $(DEVKITARM)/bin/arm-eabi-objcopy.exe
ifneq ($(shell command -v wslpath),)
SDK_PATH = $(shell wslpath -m "$(1)")
TOOLCHAIN := $(call SDK_PATH,$(DEVKITARM))
GCC_DIR := $(TOOLCHAIN)/lib/gcc/arm-eabi/4.1.1
DRIVER_FLAGS := -B"$(TOOLCHAIN)/libexec/gcc/arm-eabi/4.1.1/" \
	-B"$(TOOLCHAIN)/arm-eabi/bin/" -B"$(GCC_DIR)/" -B"$(TOOLCHAIN)/arm-eabi/lib/"
SYSTEM_INCLUDES := -isystem "$(TOOLCHAIN)/arm-eabi/include" -isystem "$(GCC_DIR)/include"
endif
endif

ARCH := -marm -mthumb-interwork
LIBDIRS := $(LIBNDS)
LIBS := -lrecovered -lnds$(CPU)
ifeq ($(CPU),7)
CPU_FLAGS := -mcpu=arm7tdmi -mtune=arm7tdmi
SOURCES := $(wildcard $(SOURCE)/arm7_*.c) arm7_ym2612_tables.c
else
CPU_FLAGS := -march=armv5te -mtune=arm946e-s
SOURCES := $(filter-out $(SOURCE)/arm7_%.c,$(wildcard $(SOURCE)/*.c)) m68k_operand_dispatch.c z80_dispatch.c vdp_timing_tables.c
LIBDIRS += $(LIBFAT)
LIBS := -lrecovered -lfat -lnds9
endif
LIBPATHS := -L. $(foreach dir,$(LIBDIRS),-L"$(call SDK_PATH,$(dir))/lib")
CFLAGS := $(DRIVER_FLAGS) $(SYSTEM_INCLUDES) -g -Wall -O2 $(ARCH) $(CPU_FLAGS) \
	-fomit-frame-pointer -ffast-math -DARM$(CPU) -I$(SOURCE) \
	$(foreach dir,$(LIBDIRS),-isystem "$(call SDK_PATH,$(dir))/include")
LDFLAGS := $(DRIVER_FLAGS) $(ARCH) -specs=ds_arm$(CPU).specs -Wl,-Map,sdk-check.map
LD := $(CC)

RECOVERED_OBJECTS := $(notdir $(SOURCES:.c=.o))
SDK_HEADERS := $(shell find $(addsuffix /include,$(LIBDIRS)) -name '*.h')
OFILES := sdk_check_arm$(CPU).o

.PHONY: all
all: sdk-check.arm$(CPU)

sdk-check.elf: $(OFILES) librecovered.a $(LIBNDS)/lib/libnds$(CPU).a
ifeq ($(CPU),9)
sdk-check.elf: $(LIBFAT)/lib/libfat.a
endif
librecovered.a: $(RECOVERED_OBJECTS)

$(OFILES) $(RECOVERED_OBJECTS): $(SDK_HEADERS)

m68k_operand_dispatch.c: ../../../rebuild/generate_m68k_operand_dispatch.py ../../../decompiled/arm9/functions.tsv
	$(PYTHON) $< $@

z80_dispatch.c: ../../../rebuild/generate_z80_dispatch.py ../../../decompiled/arm9/functions.tsv
	$(PYTHON) $< $@

vdp_timing_tables.c: ../../../rebuild/generate_vdp_timing_tables.py
	$(PYTHON) $< $@

arm7_ym2612_tables.c: ../../../rebuild/generate_ym2612_tables.py
	$(PYTHON) $< $@

arm7_ym2612_bank1.o: CFLAGS += -fno-reorder-blocks
lzss_decode.o: CFLAGS += -fno-tree-vrp
arm7_fm_reset.o arm7_ipc_init.o: CFLAGS += -fno-optimize-sibling-calls
m68k_default_bus.o m68k_io_read.o: CFLAGS += -fno-unit-at-a-time -fno-optimize-sibling-calls
m68k_refresh_pages.o: CFLAGS += -fno-tree-loop-optimize
psg_queue.o: CFLAGS += -fno-strict-aliasing
m68k_vdp_word_read.o: CFLAGS += -fno-optimize-sibling-calls
arm7_ipc_fifo.o arm9_audio_controls.o controller_io_write.o controller_write.o m68k_bus_pages.o m68k_io_write.o m68k_page_defaults.o \
m68k_vdp_write.o z80_bus_lines.o z80_memory.o: CFLAGS += -fno-unit-at-a-time

-include $(OFILES:.o=.d) $(RECOVERED_OBJECTS:.o=.d)
