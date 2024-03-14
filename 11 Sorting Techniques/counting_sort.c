#include<stdio.h>
#include<stdlib.h>

// Function to get Maximum Element in array 
int getMax(int A[], int n)
{
    int max = A[0];

    for(int i=1; i<n; i++){
        if(max < A[i]){
            max = A[i];
        }
    }
    return max;
}

/**
* Initializes the array to zeros 
*/
void initArray(int A[], int size){
    for(int i=0; i<size; i++){
        A[i] = 0;
    }
}

/**
* Setting the count of elements from the input array A[] to count[] array 
* size is the length of input array A 
*/
void setElementCount(int A[],int count[], int size){
    for(int i=0; i<size; i++){
        count[A[i]]++;
    }
}

void findCumulativeSum(int count[], int size){
    for(int i=1; i<size; i++){
        count[i] = count[i] + count[i-1];
    }
}

void mappingElementsFromCumulativeArray(int A[], int count[], int output[], int size){
    for(int i=size-1; i>=0; i--)
    {
        output[count[A[i]]-1] = A[i];
        count[A[i]]--;
    }
}


void copyArrayElements(int A[], int output[], int size){
    for(int i=0; i<size; i++){
        A[i] = output[i];
    }
}

void countingSort(int A[], int size){
    int max = getMax(A,size);
    int* output = (int*)malloc(sizeof(int)*size);  // Creating the array of same size of input array 
    int* count = (int*)malloc(sizeof(int)*(max+1)); // Frequency Array to store count of each element 
    initArray(count,max+1); // setting the count of each element in count array to zero initially 
    setElementCount(A,count,size); // Calculating the count element in array 
    findCumulativeSum(count,max+1); // Calculating the cumulative sum from the count array 
    mappingElementsFromCumulativeArray(A,count,output,size); // Mapping elements from input array and cummulative array to output array 
    copyArrayElements(A,output,size);
}

void display(int A[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",A[i]);
    }

    printf("\n");
}

int main(){
    int A[] = {4,2,2,8,3,3,1};
    int size = sizeof(A)/sizeof(A[0]);

    display(A,size);
    countingSort(A,size);
    display(A,size);


    return 0;
}