all: clean build init

build:
	g++ Part2.cpp -o Part2
	valgrind --tool=callgrind --cache-sim=yes ./Part2

init:
	./Part2
	kcachegrind callgrind.out.* 

clean:
	rm -rf ./*.o Part2 ./callgrind.out.*