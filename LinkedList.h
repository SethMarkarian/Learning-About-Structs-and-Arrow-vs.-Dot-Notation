#include <stdio.h>
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct Node{
  struct Node * next;
  struct Node * prev;
  int data;
} Node;

typedef struct LinkedList{
  int size;
  Node * head;
  Node * tail;
} LinkedList;
  
void createLinkedList(LinkedList ll);
void insertLinkedList(LinkedList ll, Node * n, int d);
void printLinkedList(LinkedList ll);

#endif
