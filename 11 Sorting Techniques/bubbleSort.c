#include<stdio.h>


void swap(int* a, int *b){
    int c =  *a;
    *a = *b;
    *b = c;
    
}

void nonAdaptiveBubbleSort(int arr[], int n){
  int i,j;
  for (i = 0; i < n - 1; i++) {
        for (j = 0; j <n-1-i; j++) {
            if (arr[j] > arr[j + 1]) {
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;

                swap(&arr[j+1],&arr[j]); 
            }
        }
}
}

void printArray(int A[], int size){
    printf("Arrays Elements : ");
    for(int i=0; i<size; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(){

    int b[] =  { 64, 34, 25, 12, 22, 11, 90 };
    int size = sizeof(b)/sizeof(b[0]);

    printArray(b,size);
    nonAdaptiveBubbleSort(b,size);
    printArray(b,size);


    return 0;
}