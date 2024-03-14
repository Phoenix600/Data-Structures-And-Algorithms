#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A[10] = {1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10; i++){
        printf("%d ",A[i]);
    }

    // 0 initlizer array
    // this initializes the first element to 0 and all other elements to 0 
    int B[10] = {0};
    printf("\nInitializer array\n");

    for(int i=0; i<10; i++){
        printf("%d ",B[i]);
    }

    
    // this is not initilizer array 
    int C[10] = {1};
    // this initializes the first element to 1 and all other elements to 0 

    printf("\nNot an initializer array : \n");
    for(int i=0; i<10; i++){
        printf("%d ",C[i]);
    }

    return 0;
}
