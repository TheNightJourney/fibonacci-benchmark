# The Fibonacci-Benchmark Repository

So, this is the fibonacci benchmark file. Welcome to a lot of fun!

## For Windows:

First, compile the code to make a library object. Just run the following
code in your terminal:

```compile
gcc -c mylib/mylib.c
```

This is the content of the "Makefile" file.

```makefile
all: your_file.exe

your_file.exe: mylib.o
	gcc -o your_file your_file.c mylib.o

mylib.o: mylib/mylib.c
	gcc -o your_file.exe your_file.c mylib.o

clear:
	rm *.exe
	rm *.o
```

To make the .exe file, simply input the command "make all", or if you use the MinGW32 software,
using the command "MinGW32-make". Make sure to replace "your_file" with the
name of the .c file you wish to run. Additionally, to run the .exe file, simply type in the command:
".\your_file.exe", replacing "your_file" with the name of the .c file, of course.

For the .c file names, please refer to the list given below.

## For Linux:
To run the main file, simply compile the code by using:

```linux
gcc -c mylib/mylib.c -o mylib.o
gcc -c main_test.c -o main.o
```

To run the benchmark files, replace "main_test.c" with the file names given in the list below.

After properly naming the file, run the file by inputting:

```linux2
gcc -o main.out main.o mylib.o
```

## Benchmark .C File Names:

- Time Iterative: main_b_time_iterative
- Time Recursive: main_b_time_recursive
- Space Iterative: main_b_space_iterative
- Space Recursive: main_b_space_recursive

Quick tip: In order to check the memory space, go to "Task Manager" for Windows users, and "System Monitor" for Linux users.
The way the code works is that it loops the function, so memory space should stay constant. For execution time, it is immediately printed, so 
no worries there.

## Personal Benchmarks

Here are my personal benchmark results:

1. Time Iterative: 0.000s
![time iterative](https://user-images.githubusercontent.com/106401357/204563956-92253cff-91cb-44cc-8f89-1730749a76b2.png)

2. Time Recursive: 0.005s
![time recursive](https://user-images.githubusercontent.com/106401357/204564220-09e8d333-41e2-429e-bea7-aabfbc8bd416.png)

3. Space Recursive: 0.5MB
![recursive space](https://user-images.githubusercontent.com/106401357/204564319-7bed54a0-8c36-48aa-bac5-c929101364db.png)

4. Space Iterative: 0.4MB
![iterative space](https://user-images.githubusercontent.com/106401357/204564361-53ccde17-7af8-4101-8a50-c785179ef509.png)

Bonus: If you think the iterative method is broken because it's 0.000s, that is incorrect.
The iterative approach is actually just really fast: (time taken to count 1000000)
![time iterative but 1000000](https://user-images.githubusercontent.com/106401357/204564682-15f665cb-9ab1-46a1-8653-f7706522ca06.png)

Personal benchmark results show that the iterative code is much more efficient and effective.
