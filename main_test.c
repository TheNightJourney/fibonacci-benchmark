#include <stdio.h>

#include "mylib/mylib.h"

int main(void){

    int N = 10;

    printf("%d = %d\n",fibonacciIterative(N),fibonacciRecursive(N));
    printf("The Iterative result for %d values is %d.\n",N,fibonacciIterative(N));
    printf("The Recursive approach for %d values is %d.",N,fibonacciRecursive(N));

    return 0;
}

