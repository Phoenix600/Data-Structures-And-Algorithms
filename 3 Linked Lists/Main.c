#include "lib/header/LinkedList.h"
#include<stdio.h>

int main()
{
    int A[] = {34,12,14,16,-12,10,5,45,2,1};
    struct Node* head;
    createSinglyLL(A,10,&head);
    display(head);
    struct Node* node  = findMaximumNodeRecursive(head);
    printf("%d ",node->key);
    return 0;
}