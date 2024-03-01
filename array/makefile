all: array run clean
array: array.c bubble.o print.o
	gcc array.c bubble.o print.o
bubble.o: bubble.c
	gcc -c bubble.c
print.o: print.c
	gcc -c print.c
run:
	./a.exe
clean:
	rm *.exe *.o