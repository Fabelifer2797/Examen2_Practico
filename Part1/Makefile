all: clean build init

build:
	gcc StaticFunction.c -o StaticFunction.o
	gcc -S StaticFunction.c
	gcc NoStaticFunction.c -o NoStaticFunction.o
	gcc -S NoStaticFunction.c
	gcc test.c -o test.o
	valgrind --tool=callgrind --cache-sim=yes ./test.o

init:
	./test.o
	kcachegrind callgrind.out.*

clean:
	rm -rf ./*.o ./*.s ./callgrind.out.*