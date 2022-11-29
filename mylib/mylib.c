#include <stdio.h>

int factorialIterative(int N){
    int output = 1;

    /* "for i = 1" denotes the start value, the following 
        denotes the stop.
        in c, "i++" is "i = i+1"
        */
    for(int i = 1; i <= N; i++){
        output = output*i;
    }

    return output;

    /*
        for i in range(N):
            output = output*i
     */

}

int factorialRecursive(int N){
    int output = 1;

    if (N == 1){
            return 1;
    } else {
        return N*factorialRecursive(N-1);
    }
}

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
