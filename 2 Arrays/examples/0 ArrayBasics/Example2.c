#include<stdio.h>

int main(int argc, char const *argv[]){

    // Declaring the array and initializing at the same time, 
    // Size of the array is calculated based on the array attached to 
    // the array variable or pointer 
    int A[] = {2,3,4,5,6,7,8};

    for(int i=0; i<7; i++){
        printf("%d ",A[i]);
    }

    // Declaring the array of specific size and then initializing the 
    // array 
    int B[5];
    B[0] = 12;
    B[1] = 56;
    B[2] = 90;
    B[3] = 80;
    B[4] = -190;

    printf("\nArray-2 :\n");

    for(int i=0; i<7; i++){
        printf("%d ",B[i]);
    }

    return 0;
}