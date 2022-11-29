#include <stdio.h>

int fibonacciIterative(int N){
    int output = 1, initial = 0, secondary = 1, final, i;
    for (i = 0; i < N; i++){
        if (i<=0)
            final = i;
        else {
            final = initial + secondary;
            initial = secondary;
            secondary = final;
        }
        
    }
    
    return final;

}

int fibonacciRecursive(int N){
    int result;
    if (N==0) {
        return 0;
        }
    else if (N==1) {
        return 1;
        }
    else if (N>1) {
        return fibonacciRecursive(N-1)+fibonacciRecursive(N-2);
    }
    else {
        printf("Outside specified field\n");
    }
}
