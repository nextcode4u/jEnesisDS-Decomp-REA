PYTHON ?= python3
ROM ?= input/jEnesisDS.nds
OUTPUT := build/blocksds-native/jEnesisDS-BlocksDS.nds

.PHONY: all compare
all:
	"$(PYTHON)" blocksds/build.py

compare:
	cmp -i 512 "$(ROM)" "$(OUTPUT)"
