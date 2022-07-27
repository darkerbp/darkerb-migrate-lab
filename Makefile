.PHONY: all clean

all: main
main: main.c dir
	gcc $< -o build/main

dir:
	mkdir build

clean:
	@rm -rf build
