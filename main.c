#include "LinkedList.h"

int main() {
    struct LinkedList list;
    createLinkedList(list);
    struct Node * n;
    insertLinkedList(list, n, 4);
    printLinkedList(list);
    return 0;
}
