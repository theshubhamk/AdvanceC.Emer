SRC:= $(wildcard *.c)
OBJ:= $(patsubst %.c, %.o, $(SRC))

calc.exe: $(OBJ)
	gcc -o $@ $^

clean: 
	rm *.o *.exe

run:
	make && ./calc.exe
