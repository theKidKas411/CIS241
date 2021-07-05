CC=gcc
CFLAGS=-I .
DEPS = calculator.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

make: calculator.o 
	gcc -o make calculator.o -I .

clean: 
	rm -f *.o make