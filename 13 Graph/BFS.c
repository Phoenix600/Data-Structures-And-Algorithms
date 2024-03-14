#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

struct Node* createNode(int data){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void enQueue(int data){
    struct Node* newNode = createNode(data);
    if(front == NULL && rear == NULL){
        front = rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
}

int deQueue(){
    if(front == NULL){ // check if the queue is empty
        printf("Queue is empty\n");
        return -1; // return some default value or handle error as per your requirement
    }
    int data = front->data;
    struct Node* temp = front;
    front = front->next;
    if(front == NULL) // if dequeued element was the last element
        rear = NULL;
    free(temp);
    return data;
}

int isEmpty(){
    if(front == NULL && rear == NULL){
        return 1;
    }
    return 0;
}

void displayQueue(){
    struct Node* temp = front;
    while (temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int A[8][8] = {
    {0,0,0,0,0,0,0,0},
    {0,0,1,1,1,0,0,0},
    {0,1,0,1,0,0,0,0},
    {0,1,1,0,1,1,0,0},
    {0,1,0,1,0,1,0,0},
    {0,0,0,1,1,0,1,1},
    {0,0,0,0,0,1,0,0},
    {0,0,0,0,0,1,0,0}
};

void BFS(int vertices, int startVertex){
    int* visited;
    visited = calloc(vertices,sizeof(int));

    printf("%d ",startVertex);
    visited[startVertex] = 1;
    enQueue(startVertex);

    while (!isEmpty())
    {
        int u = deQueue();

        for(int v=0; v<vertices; v++){
            if(A[u][v] == 1 && visited[v] == 0)
            {
                printf("%d ",v);
                visited[v] = 1;
                enQueue(v);
            }
        }
    }

    free(visited); // free allocated memory for visited array
}

int main(){
    BFS(8,1); // Changed to 8, as there are 8 vertices in the graph
    return 0;
}
