#include<stdio.h>

void swap(int* A, int *B){
    int C = *A;
    *A = *B;
    *B = C; 
}

void reverseRecursion(int A[], int low,int high){
    if(low>= high){
        return ;
    }
    swap(&A[low],&A[high]);
    reverseRecursion(A,low+1, high-1);
}


void reverseArrayItr(int A[], int low, int high){
    while (low<high)
    {
        swap(&A[low],&A[high]);
        low++;
        high--;
    }
    
}


void reverseArrayUsingSinglePointer(int A[], int i, int size){
    if(i >= size/2){return ;}
    swap(&A[i],&A[size-i-1]);
    reverseArrayUsingSinglePointer(A,i+1,size);
}

void print(int A[], int size){
    printf("Arrays Content : [");
    for(int i=0; i<size; i++){
        printf("%d ",A[i]);
    }
    printf("] \n");
}



int main(){
    int A[] = {1,2,3,4,2};
    print(A,5);
    reverseRecursion(A,0,5-1);
    print(A,5);
    reverseArrayItr(A,0,5-1);
    print(A,5);

    int B[] = {45,67,2,78,2,90};
    print(B,6);
    reverseArrayUsingSinglePointer(B,0,6);
    print(B,6);

}