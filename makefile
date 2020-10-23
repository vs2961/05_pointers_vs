all: madness.c
	gcc -o madness madness.c
run: madness
	./madness
