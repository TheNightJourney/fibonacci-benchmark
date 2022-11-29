#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main()
{
 
    double run_time = 0.0;

    clock_t start = clock();

    int N = 30;

    fibonacciRecursive(N);


    clock_t end = clock();

    run_time += (double)(end - start) / CLOCKS_PER_SEC;

    printf("The total time taken to run the code is %f seconds.", run_time);

    return 0;


}