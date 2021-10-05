all: funky.o
	gcc -o funky funky.o

main.o: funky.c
	gcc -c funky.c

run:
	./funky
	
clean:
	rm *.o