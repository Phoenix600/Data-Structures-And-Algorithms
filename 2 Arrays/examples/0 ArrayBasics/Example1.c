#include<stdio.h>



int main(int argc, char* const argvc[]){
    // Declare the array
    int A[10];

    // Garbage values will be printed since no array elements are assigned
    for(int i=0; i<10; i++){
        printf("%d ",A[i]);
    }
    return 0;
}