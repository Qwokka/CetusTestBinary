CC      = emcc
CFLAGS  = -sASYNCIFY

default: all

all: main

main: main.c
	$(CC) $(CFLAGS) -o build/main main.c
