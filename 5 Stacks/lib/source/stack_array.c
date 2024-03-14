#include "../header/stack_array.h"
#include<stdio.h>
#include<stdlib.h>


void initStack(struct Stack* s, int size){
    s->top = -1;
    s->capacity = size;

    s->A = (int*)malloc(sizeof(int)*size);

    for(int i=0; i<size; i++)
        s->A[i] = 0;
}

/// @brief 
/// @param s 
/// @param x 
void push(struct Stack*s, int x){
    s->A[s->top++] = x;
}

