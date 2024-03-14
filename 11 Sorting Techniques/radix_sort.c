#include<stdio.h>
#include<stdlib.h>

// TO get maxumum element from the array
int getMaxElementFromArray(int A[], int size){
    int max = A[0];
    for(int i=1; i<size; i++){
        if(max < A[i]){
            max = A[i];
        }
    }
    return max;
}

// initialize the array to 0s  
void initArray(int A[], int size){
    for(int i=0; i<size; i++){
        A[i] = 0;
    }
}

// Setting the count of each element in the array 
void setFrequnecyCount(int A[],int count[], int size){
    for(int i=0; i<size; i++){
        count[A[i]]++;
    }
}


/**
 * Finding the cummulative sum of frquency count array 
*/
void calculateCummulativeSum(int A[], int size){
    for(int i=1; i<size; i++){
        A[i] = A[i-1] + A[i];
    }
}


/**
 * Mapping the Index form the Input Array and CounterArrays to output array
*/
void mappingIndexFromInputArrayCountArrayToOutputArray(int A[], int count[], int output[], int placeValue, int size){
    for(int i=size-1; i>=0; i--){
        output[count[A[i]]-1] = A[i];
        count[A[i]]--;
    }
}

// copying the elements from array A to array output 
void copyArray(int A[], int output[], int size){
    for(int i=0; i<size; i++){
        A[i] = output[i];
    }
}

void countingSort(int A[], int size, int placeValue){    
    // Findig the maximum element from the array 
    int max = getMaxElementFromArray(A,size);
    // Creating the count  array of size of max+1
    int* count = (int*)malloc(sizeof(int)*(max+1));
    initArray(count,max+1); // initialize the array to 0s 
    setFrequnecyCount(A,count,size); // Setting the count of the elements from A[] to count[] arrays 
    calculateCummulativeSum(count,max+1); // Getting the cummulative sum of elements 
    // Creating the output array of same size of input array
    int* output = (int*)malloc(sizeof(int)*(size));
    mappingIndexFromInputArrayCountArrayToOutputArray(A,count,output,placeValue,size);
    copyArray(A,output,size);
}


void radixSort(int A[], int size){
    int max = getMaxElementFromArray(A,size);
    for(int placeValue =1; max/placeValue; placeValue *= 10){
        countingSort(A, size, placeValue);
    }
}

void display(int A[], int size){
    printf("Array Elements : ");
    for(int i=0; i<size; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main(int argc, const char* argv[] ){
       
     int A[] = {4,2,2,8,3,3,1};
    int size = sizeof(A)/sizeof(A[0]);

    // display(A,size);
    // countingSort(A,size);
    // display(A,size);
    return 0;
}