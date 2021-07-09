CC=gcc
CFLAGS=-I .
DEPS = reverse.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

make: reverse.o 
	gcc -o make reverse.o -I .

clean: 
	rm -f *.o make

