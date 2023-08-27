CC      = emcc
CFLAGS  = -sASYNCIFY

CP      = cp
RM      = rm

default: all

all: clean run simple multivalue

clean:
	$(RM) -f build/*

run:
	$(CP) run.html build/run.html

simple: simple.c
	$(CC) $(CFLAGS) -o build/simple.js simple.c

multivalue: multivalue.c
	$(CC) $(CFLAGS) -o build/multivalue.js multivalue.c
