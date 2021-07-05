CC=gcc
CFLAGS=-I .
DEPS = palindromes.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

make: palindromes.o 
	gcc -o make palindromes.o -I .

clean: 
	rm -f *.o make