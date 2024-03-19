#include<stdio.h>

void swap(int* A, int* B)
{
    int C = *A;
    *A = *B;
    *B = C;
}

void selectionSort(int A[], int size){
    int minIndex;
    for(int i=0; i<size-1; i++){
        minIndex = i;
        for(int j=i+1; j<size; j++)
        {
            if(A[j] < A[minIndex])
            {
                minIndex = j;
            }
        }   
        swap(&A[i],&A[minIndex]);
    }
}

void print(int A[], int size){
    printf("Array Content = [");
    for(int i=0; i<size; i++)
    {
        printf("%d ",A[i]);
    }
    printf("]\n");
}

int main(){
    int A[] = {100,90,80,34,-1,0};
    print(A,6);
    selectionSort(A,6);
    print(A,6);
    return 0;
}