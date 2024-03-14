#include<stdio.h>

int main(int argc, char const *argv[]){

    // stack array declaration and assignment 
    // array of arrays, where each element in array is pointing to the 
    // another array 
    int A[2][2] = {{1,2},{3,4}};

    for(int i=0; i<2; i++){
        for(int j=0; j<2 ;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    } 

    // 9 Continous memory blocks are allocated, compiler logically calculates 
    // the address of the elements in terms of rows and column number 
    //  for this compiler uses two methods : 
    //  1. Row Major Mapping 
    //  2. Column Major Mapping  
    int B[3][3]; // stack array declaration 





    return 0;

}