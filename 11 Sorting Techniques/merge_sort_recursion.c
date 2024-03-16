#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = l;
    // int B[100];
    int* B = (int*)malloc(sizeof(int)*(h+1)); 

    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= mid; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];
    for (i = l; i <= h; i++)
        A[i] = B[i];
}


void mergeSort(int A[], int low, int high){
    int mid;
    if(low < high){
        mid = (low+high)/2;
        mergeSort(A,low,mid); // To divide array to left sub-arrays   
        mergeSort(A,mid+1,high); // To divide array to right sub-array  
        merge(A,low,mid,high);
    }else{
        return ;
    }
}