.PHONY: all clean

PROJ_ROOT = $(PWD)
PROJ_BUILD = $(PROJ_ROOT)/build

all: main
main: main.c dir
	gcc $< -o build/main

dir:
	mkdir build

clean:
	@rm -rf build
