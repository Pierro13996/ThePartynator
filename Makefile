Test: main.o fichier.o struct.o
	gcc -o Test main.o fichier.o  struct.o

main.o: main.c
	gcc -c main.c

fichier.o: fichier.c
	gcc -c fichier.c

struct.o: struct.c
	gcc -c struct.c

clean:
	rm *.o Test