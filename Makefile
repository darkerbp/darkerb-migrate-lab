.PHONY: all clean

all: main
main: main.c
	gcc $^ -o main

clean:
	@rm main
