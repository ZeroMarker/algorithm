src = bubble
cc = gcc
ext = c
out = exe

all: src run clean
src:
	$(cc) -o $(src).$(out) $(src).$(ext)
run:
	./$(src).$(out)
clean:
	rm *.$(out)