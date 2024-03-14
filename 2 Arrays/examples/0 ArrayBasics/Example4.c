#include<stdio.h>

int main(int argc,char const *argv[]){

    // arrays do behave as a pointer, since they are simply pointing to the 
    // base address of the continuous block of memory 

    // malloc returns the address of memory block of specified size, 
    // this raw memory address must be converted to pointer type, this extra
    // type conversion of (int*) is required. This conversion type depends on the 
    //  pointer type
    int* A = (int*)malloc(sizeof(int)*5);

    A[0] = 12;
    A[1] = 89;
    A[2] = 0;
    A[4] = 14;

    // 1. Accessing the array element by indexing
    printf("A[2] : %d\n",A[2]);
    printf("(2[A]) : %d\n",2[A]);
    
    // 2. Accessing the array elements using the pointer arithmetic 
    printf("*(A+2) : %d\n",*(A+2)); // Pointer Arithmetic 

    // 3. Traversing the array elements using the loop 
    for(int i=0; i<5; i++){
        printf("A[%d] = %d\n",i,A[i]);
    }

    return 0;
}