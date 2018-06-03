CFLAGS=-std=gnu99 -O0 -Wall -Wextra 

all: debug inc torture nested guard

guard: demo_guard.c
	cc demo_guard.c $(CFLAGS) -o guard

main: demo_main.c
	cc debug.c demo_main.c $(CFLAGS) -o main

inc: demo_include.c
	cc demo_include.c $(CFLAGS) -E -o include 

torture: demo_torture.c
	cc torture.h demo_torture.c $(CFLAGS) -o torture

nested: demo_nested.c
	cc nested.h demo_nested.c $(CFLAGS) -o nested

.PHONY: clean
clean:
	rm -f guard main inc torture nested
