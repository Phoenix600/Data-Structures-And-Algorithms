#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

/**
 * @brief Insertion sort is all about inserting an element in the sorted 
 * array at sorted position 
 * 
 * @param int A[] 
 * @param int size 
 */
void insertionSort(int A[], int size){
 int key,j;
 for(int i=1; i<size; i++){
    j = i-1;
    key = A[i];
    while(j>-1 && (A[j] > key)){
        A[j+1] = A[j]; 
        j--;
    }
    A[j+1] = key;
 }
}


void display(int A[], int size){
   printf("Array Content : ");
   for(int i=0; i<size; i++){
    printf("%d ",A[i]);
   } 
   printf("\n");
}

struct Node*  createLLFromArray(int A[],int size)
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = NULL;
    struct Node* temp;

    head->data = A[0];
    head->next = NULL;
    last = head;

    for(int i=1; i<size; i++){
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }

    return head;
}

void displayLL(struct Node* head)
{
    printf("Content Of The Linked List :[");
    while(head){
        printf("%d ",head->data);
        head = head->next;
    }
    printf("]\n");
}
int main(){
// Insertion Sort With Arrays 
    int A[] = {100,90,80,0,12,34};
    display(A,6);
    insertionSort(A,6);
    display(A,6);

    return 0;
}