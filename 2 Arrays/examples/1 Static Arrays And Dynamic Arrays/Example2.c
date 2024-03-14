#include<stdio.h>
#include<stdlib.h>

// Increate the size of the array without using realloc()
int main(){

    int* p = (int*)malloc(sizeof(int)*5);
    
    p[0] = 12;
    p[1] = 1;
    p[2] = 45;
    p[3] = 6;
    p[4] = 0;

    for(int i=0; i < 5; i++)
    {
        printf("%d ",p[i]);
    }

    int* q;

    q = (int*)malloc(sizeof(int)*5*2);

    // copying the elements of array pointed by p in array pointed by q
    for(int i=0; i<5; i++){
        q[i] = p[i];
    }

    free(p);
    p = q;
    q = NULL;
    
    for(int i=0; i<10; i++){
        printf("P[%d]",p[i]);
    }

    //  THis Loop Wont Even run for NULL pointer 
    for(int j=0; j<10; j++){
        printf("%d\n",q[j]);
    }


    

    return 0;
}