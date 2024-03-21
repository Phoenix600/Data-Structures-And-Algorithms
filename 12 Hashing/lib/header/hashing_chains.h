/**
 * @file hashing_chains.h
 * @author Pranay Ramteke (pranayramteke613@gmail.com)
 * @brief Header file for Hashing Methods using Chaining Resolution Method
 * @version 0.1
 * @date 2024-03-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef HASHING_CHAINS_H
#define HASHING_CHAINS_H
#include<stdio.h>
#include<stdlib.h>
/**
 * @brief Node structure to model the Hash-Table chains by 
 * implementing the Linked representation 
 */
struct Node{
    int data;
    struct Node* next;
};


/**
 * @brief Inserts the node in linked list chain at sorted position 
 * 
 * @param head_ref 
 * @param key 
 */
void insertInSortedPosition(struct Node** head_ref, int key);

/**
 * @brief Searches the given key at in sorted linked chain 
 * 
 * @param head 
 * @param key 
 * @return struct Node* 
 */
struct Node* searchNode(struct Node* head,int key);


/**
 * @brief Returns the data object of node and delete the node in linked list chain 
 * 
 * @param head_ref 
 * @param key 
 * @return int 
 */
int deleteNode(struct Node** head_ref, int key);


/**
 * @brief Hashcode function that generates the hashcode or indexed-key for storing value
 * in the hashtable.
 * Modify this function based on the knowledge of keys
 * @param key 
 * @return int 
 */
int hash(int key);

/**
 * @brief Inserts the data in hash-table by using the hash() and insertInSortedPosition 
 * 
 * @param struct Node* H[] 
 * @param int key 
 */
void insert(struct Node* H[], int key);

/**
 * @brief Searches the 
 * 
 * @param H 
 * @param key 
 * @return struct Node* 
 */
struct Node* search(struct Node* H[], int key);

/**
 * @brief Deletes the node form the chain of linked list.
 * Internally uses the hash() and deleteNode() from 
 * linkedList data structure
 * @param head_ref 
 * @param key 
 * @return int 
 */
int deleteNode(struct Node **head_ref, int key);


#endif 