#include<stdio.h>
#include<stdlib.h>
#include "../header/LinkedList.h"

void display(struct Node* head)
{
    struct Node* p = head;
    printf("Linked List Content = [");
    while (p != NULL)
    {
        printf("%d ",p->key);
        p = p->next;
    }
    printf("]\n");
    
}


void rescrusiveDisplay(struct Node* head)
{
    if(head == NULL)
        return ;
    printf("%d ",head->key);
    return rescrusiveDisplay(head->next);
}

int countNodes(struct Node* head)
{
    struct Node* p = head;
    int count = 0;
    while (p!=NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

int sumOfAllElements(struct Node* head)
{
    int sum = 0;
    while (head)
    {
        sum += head->key;
        head = head->next;
    }
    
}

struct Node* findMaximumNode(struct Node* head)
{
    struct Node* maxNode = head;
    head = head->next;

    while (head)
    {
        if(head->key > maxNode->key)
        {
            maxNode = head;
        }
        head = head->next;
    }
    return maxNode;
}

struct Node* findMaximumNodeRecursive(struct Node* head)
{
    struct Node* node = head;
    head = head->next;
    if(head == NULL)
        return NULL;
    else{
        if(node->key < head->key)
        {
            node = head;
            return findMaximumNodeRecursive(head->next);
        }
        return node;
    }
    
}


void createSinglyLL(int A[], int size,struct Node** head_ref)
{
    int i; 
    struct Node* t;
    struct Node* last;
    
    *head_ref  = (struct Node*)malloc(sizeof(struct Node));
    (*head_ref)->key = A[0];
    (*head_ref)->next = NULL;

    last = *head_ref;

    for(i=1; i<size; i++)
    {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->key = A[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }

}