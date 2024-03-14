#include <stdio.h>
#include <stdlib.h>
/**
 * @brief implementation of stack usng array
 * Both Insertion and deletion opertion is done from top in stack
 * Stack follows the LAST-IN-FIRST-OUT Principle
 **/

struct Stack {
  int *S; // Pointer variable which will be pointing to the array
  int capacity;
  int nSize;
  int top;
};

// Doing basic setup for working with stack
void init(struct Stack *stack) {
  int size;

  printf("Enter the size of stack");
  scanf("%d", &size);

  // creating the array of specied size
  stack->S = (int *)malloc(sizeof(int) * size);
  // the capacity of stack  is the size of the array
  stack->capacity = size;

  // maximum index till we can store elements
  stack->nSize = size - 1;

  // initially stack's top index pointer will point to -1
  stack->top = -1;

  // initializing all elements to -1 in array, initially to show the absence of
  // elements
  for (int i = 0; i < size; i++) {
    stack->S[i] = -1;
  }
}

// inserting in the stack
void push(struct Stack *stack, int key) {
  // Checking whether stack full or not
  if (stack->top != stack->nSize) {
    printf("Stack is Full"); //overflow
  } else {
    // if stack is not full, store the value of key at location pointed
    // top-index variable
    // then increment the value of top
    stack->S[stack->top++] = key;
  }
}

/**
 * @brief Before deleting the element, first check whether the 
 * stack is empty or not 
 * If stack is not empty then copy the value which you want to delete in some 
 * variable and delete the element in stack by simply assigning the -1 at that 
 * location, return the deleted value to the user 
 * TimeComplexity: 0(1)
 * SpaceComplexity: 0(1)
 * @param stack 
 * @return int 
 */
int pop(struct Stack *stack) {
  int x = -1; // if -1 is returned means stack is empty 
  if (stack->top == -1) {
    printf("stack is already empty"); //undeflow
  } else {
    x = stack->S[stack->top];
    stack->S[stack->top--] = -1;
  }
  return x;
}

int peek()

int main() {

  struct Stack s;
  init(&s); // passing by reference, so changes will happen on same memory
            // location
}