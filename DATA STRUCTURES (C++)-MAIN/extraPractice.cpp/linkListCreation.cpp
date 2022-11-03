#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct node *insertion(struct node *);
void traverse(struct node *);
struct node
{
    int key, data;
    struct node *next;
};
int main(void)
{
    // Creating Pointer Variables Access [Dynamic-Memory-Blocks];
    struct node *head, *second, *third;

    // Creating Nodes And Being Assigned Their Addresses To Their Corresponding Pointers
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));

    // Linkin' the nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    // setting data
    head->data = 22;
    second->data = 32;
    third->data = 33;

    // configuring keys
    head->key = 0;
    second->key = 1;
    third->key = 2;

    // Traversing... the list (before and after Insertion)
    traverse(head);
    head = insertion(head);
    cout << endl
         << endl;
    traverse(head);
}

// LinkList-Traversal Function, which takes "Head" Block
void traverse(node *traversalPtr)
{
    while (traversalPtr->next != NULL)
    {
        cout << "index: " << traversalPtr->key << "data: " << traversalPtr->data << endl;
        traversalPtr = traversalPtr->next;
    }
    cout << "index: " << traversalPtr->key << " data: " << traversalPtr->data << endl;
}

// Insert In the begining of the link List..
node *insertion(node *oldHeadCatcher)
{
    node *newHead;
    // Creating and Initializing the New Node
    newHead = (node *)malloc(sizeof(node));

    // Giving Sample data and keys
    newHead->key = -1;
    newHead->data = 100;

    // Chaining with the head
    newHead->next = oldHeadCatcher;

    // reuturning the node and being assigned to (Original to UPDATE the OLD Head)
    return (newHead);
}

// Insert in the end of the link list..
node *insertInTheEnd(node *ptr)
{
}