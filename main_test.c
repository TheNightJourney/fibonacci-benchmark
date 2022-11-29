#include <stdio.h>

#include "mylib/mylib.h"

int main(void){

    int N = 10;

    printf("%d = %d\n",fibonacciIterative(N),fibonacciRecursive(N));

    return 0;
}

