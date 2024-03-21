/**
 * @file LinkedList.h
 * @author Pranay Ramteke 
 * @brief Linked List Header File 
 * @version 0.1
 * @date 2024-03-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node{
    int key;
    struct Node* next;
};


/**
 * @brief Displays the content of the linked list by traversing the LL from Left-Right
 * @param struct Node* 
 * @return void 
*/
void display(struct Node* head);



/**
 * @brief Recursive implementation of display method  * 
 * @param struct Node* head 
 * @return void
 */
void rescrusiveDisplay(struct Node* head);

/**
 * @brief Returns the number of count in linked list
 * @param struct Node* head 
 * @return int 
 */
int countNodes(struct Node* head);

/**
 * @brief Returns the sum nodes for lined list 
 * 
 * @param struct Node* head 
 * @return int count 
 */
int sumOfAllElements(struct Node* head);


/**
 * @brief Returns the maximum Node in linked list 
 * 
 * @param head 
 * @return struct Node* 
 */
struct Node* findMaximumNode(struct Node* head);


/**
 * @brief Recursive implementation of MaximumNode() function 
 * 
 * @param struct Node* head 
 * @return struct Node* 
 */
struct Node* findMaximumNodeRecursive(struct Node* head);

/**
 * @brief Create a Singly Linked List From Array passed. 
 * @param int* array  
 * @param size 
 * @param struct Node** 
 * @return void  
 */
void createSinglyLL(int A[], int size,struct Node** head_ref);




#endif