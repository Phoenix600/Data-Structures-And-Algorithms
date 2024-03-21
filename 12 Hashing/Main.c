#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int key)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = key;
    node->next = NULL;

    return node;
}

void insertInSortedPosition(struct Node **head_ref, int key)
{
    struct Node *node = createNode(key);

    struct Node *p = *head_ref;
    struct Node *q = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = node;
    }
    else
    {

        while (p && p->data < key)
        {
            q = p;
            p = p->next;
        }
        q->next = node;
        node->next = p;
    }
}

struct Node *searchNode(struct Node *head, int key)
{
    struct Node *node = NULL;
    while (head && head->data <= key)
    {
        if (head->data == key)
        {
            node = head;
        }
        head = head->next;
    }
    return node;
}

int deleteNode(struct Node **head_ref, int key)
{
    struct Node *q = NULL;
    struct Node *p = NULL;
    struct Node *deletedNode = NULL;
    int data = -1;

    if (*head_ref == NULL)
        return -1;

    if ((*head_ref)->data == key)
    {
        deletedNode = *head_ref;
        *head_ref = (*head_ref)->next;
        data = deletedNode->data;
        free(deletedNode);
        return data;
    }
    else
    {

        p = *head_ref;

        while (p && p->data != key)
        {
            q = p;
            p = p->next;
        }

        deletedNode = p;
        q->next = p->next;
        data = p->data;

        free(p);

        return data;
    }
}

int hash(int key)
{
    return key % 10;
}

void insert(struct Node *H[], int key)
{
    int index = hash(key);
    insertInSortedPosition(&H[index], key);
}

struct Node *search(struct Node *H[], int key)
{
    int index = hash(key);
    return searchNode(H[index], key);
}

int delete(struct Node *H[], int key)
{
    int index = hash(key);
    return deleteNode(&H[index], key);
}

int main()
{
    // Creating the array of linked Lists Pointers
    struct Node *HT[10];
    // index variable for keeping the track of index of hash-table
    int i;

    // initializing the hash function
    for (int i = 0; i < 10; i++)
    {
        HT[i] = NULL;
    }

    insert(HT, 12);
    insert(HT, 22);
    insert(HT, 42);

    struct Node *resultNode = search(HT, 42);
    int x = delete (HT, 12);
    printf("%d is deleted...", x);
    return 0;
}