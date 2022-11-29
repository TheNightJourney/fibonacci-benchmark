all: main_b_time_iterative.exe

main_b_time_iterative.exe: mylib.o
	gcc -o main_b_time_iterative main_b_time_iterative.c mylib.o

mylib.o: mylib/mylib.c
	gcc -o main_b_time_iterative.exe main_b_time_iterative.c mylib.o

clear:
	rm *.exe
	rm *.o