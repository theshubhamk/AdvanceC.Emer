calc.exe: add.o mul.o main.o
	gcc -o calc.exe add.o mul.o main.o

add.o: add.c
	gcc -c add.c

mul.o: mul.c
	gcc -c mul.c

main.o: main.c
	gcc -c main.c

clean:
	rm *.o *.exe
