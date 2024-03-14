#include<stdio.h>
#include "./lib/header/stack_array.h"

int main(){
    int size;
    struct Stack s;

    printf("[+]Enter the size of the stack : ");
    scanf("%d",&size);
    initStack(&s,size);
    
    return 0;
}