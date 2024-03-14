#ifndef STACK_A_H
#define STACK_A_H

/// @brief Stack Data Structure ADT
/// @memberof Struct 
struct Stack{
    int *A;
    int capacity;
    int top;
};

void initStack(struct Stack* s, int size);

/// @brief 
/// @param s 
/// @param x 
void push(struct Stack* s,int x);

/// @brief 
/// @param s 
/// @return 
int pop(struct Stack* s);

/// @brief 
/// @param s 
/// @return 
int peek(struct Stack* s);

/// @brief 
/// @param s 
/// @return 
int stackTop(struct Stack* s);

/// @brief 
/// @param s 
/// @return 
int isEmpty(struct Stack* s);

/// @brief 
/// @param s 
/// @return 
int isFull(struct Stack* s);


#endif