#include<stdio.h>

void mergeTwoListsFromSingleArray(int A[], int low, int mid,int high){
    
    int i=low;
    int j = mid+1;
    int k = low;

    int* B = (int)malloc(sizeof(int)*(high+1));

    while (i<=mid && j<= high)
    {
        if(A[i] < A[j]){
            B[k++] = A[i++];
        }else{
            B[k++] = A[j++];
        }
    }


    for(;i<=mid; i++){B[k++] = A[i];}
    for(;j<=high; j++){B[k++] = A[j];}
    
}

int main(){
    return 0;
}