#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    // Arrays Created inside the stack are known as stack arrays 
    // In Any Programming langauge, When you declare the variable in 
    // the memory for that varibale is created inside the stack only.
    int A[5]; 
    int B[] = {1,2,3,4,5,6};
    int*p; // memory for pointer p of int type is created inside the stack 

    p = (int*)malloc(sizeof(int)*5);
    // malloc function returns the void pointer to memory location, basically it returns the 
    //  RAW memory address, before using with pointer variable, it must be type-casted with specified pointer type 
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    // p = {1,2,3,4,5} // this arrays is created inside the heap 

    // #FIXME: This is not possible in case of pointer 
    // int size = sizeof(p)/sizeof(p[0]);
    // printf("%d",size);

    printf("\n");
    for(int i=0; i<5; i++){
        printf("%d ",p[i]);        
    }

    printf("\n");
    for(int i=0; i<5; i++){
        printf("%d ",*(p+i));
    }


    free(p);

    return 0;
}