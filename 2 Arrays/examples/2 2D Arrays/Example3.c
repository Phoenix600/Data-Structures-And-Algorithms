#include<stdio.h>
#include<stdlib.h>

int main(){
    // Heap Array
    // Each and every component of this array is created inside the heap 
    int** A;

    printf("[+]Example of heap array :\n");
    A = (int**)malloc(sizeof(int*)*3);
    
    for(int i=0; i<3; i++){
        A[i] = (int*)malloc(sizeof(int)*3);
    }

        for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter the value of A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}