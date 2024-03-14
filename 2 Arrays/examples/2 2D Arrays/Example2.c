#include<stdio.h>
#include<stdlib.h>

int main(){
    // partial stack and partial heap array 
    int* A[3]; // Array of pointers 
    int cols;

    printf("Number of rows in matrix are 3\n");
    printf("[+]Enter the number of cols : ");
    scanf("%d",&cols);

    for(int i=0; i<3; i++){
        A[i] = (int*)malloc(sizeof(int)*cols);
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<cols; j++){
            printf("Enter the value of A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    for(int i=0; i<3; i++){
        for(int j=0; j<cols; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    return 0;
}