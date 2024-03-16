#include<stdio.h>
#include<stdlib.h>

int* mergeTwoSortedListIntoAuxillaryList(int A[], int B[], int m, int n){
    int i,j,k;
    i=j=k=0;
    
    // creating the output array of combined size of two input arrays 
    int* C = (int*)malloc(sizeof(int)*(m+n));

    while(i<m && j<n){
        if(A[i] < B[j]){
            C[k++] = A[i++]; 
        }else{
            C[k++] = B[j++];
        }
    }

    for(;i<m; i++){C[k++] = A[i++];}
    for(;j<n; j++){C[k++] = A[j++];}

    return C;

}

void displayArray(int A[], int size){
    printf("Arrays Content  : [ ");
    for(int i=0; i<size; i++)
    {
        printf("%d ",A[i]);
    }
    printf("]\n");
}

int main(int argc, char const *argv[])
{
    int A[] = {2,10,18,20,23};
    int B[] = {4,9,19,25};
    
    int m = sizeof(A)/sizeof(sizeof(A[0]));
    int n =  sizeof(B)/sizeof(B[0]);

    int* C = mergeTwoSortedListIntoAuxillaryList(A,B,m,n);
    displayArray(C,m+n);
    return 0;
}
