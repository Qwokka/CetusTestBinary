CC      = emcc
CFLAGS  = -sASYNCIFY

CP      = cp
RM      = rm

default: all

all: clean run simple multivalue

clean:
	$(RM) -f build/*

run:
	$(CP) html/* build/

simple: src/simple.c
	$(CC) $(CFLAGS) -o build/simple.js src/simple.c

multivalue: src/multivalue.c
	$(CC) $(CFLAGS) -o build/multivalue.js src/multivalue.c
