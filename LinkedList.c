#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"

void createLinkedList(LinkedList ll) {
    Node * h;
    h = (struct Node *) malloc(sizeof(Node));
    ll.head = h;
    ll.size = 0;
}

void insertLinkedList(LinkedList ll, Node * n, int d) {
    n = (struct Node *) malloc(sizeof(Node));
    n->data = d;
    Node * current;
    current = (struct Node *) malloc(sizeof(Node));
    current = ll.head;

    if(current == NULL) {
        ll.head = n;
    }
    else {
        for(int i = 0; i < ll.size; i++) {
            if(current->next != NULL) {
                current = current->next;
            }
        }
        current->next = n;
        current->next->prev = current;
        ll.size++;
    }
}

void printLinkedList(LinkedList ll) {
    Node * current;
    current = (struct Node *) malloc(sizeof(Node));
    current = ll.head;
    for(int i = 0; i < ll.size; i++) {
        printf("%i \n", current->data);
        current = current->next;
    }
}
