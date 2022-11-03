#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
void traversal(struct node *);
struct node *insertAtFirst(struct node *, int);
struct node *insertAtLast(struct node *, int);
struct node *insertAtIndex(struct node *, int, int);
struct node *insertAfterNode(struct node *, int);
struct node *delFirstNode(struct node *head);

struct node
{
    int data;
    struct node *next;
};

// delete first node
struct node *delFirstNode(struct node *head)
{
    struct node *holdNode;

    // Holding the [Previous-Node], "which was Being Pointed By Head";
    holdNode = head;

    // Moving The Head To The (Next-Block)
    head = holdNode->next;

    // Free The (Memory-Block)/(Node)
    free(holdNode);

    // and now, the Pointer is not Pointing AnyWhere!
    holdNode = NULL;

    // Returning the new head! To Update the (Circular-LinkList)
    return head;
}

// Insert After a given NOde
struct node *insertAfterNode(struct node *givenNode, int data)
{
    struct node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;

    newNode->next = givenNode->next;
    givenNode->next = newNode;
}
// Insert at an index
struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;

    struct node *traversalPointer = (node *)malloc(sizeof(node));
    traversalPointer = head;

    for (int i = 1; i < index - 1; i++)
    {
        cout << "in loop at: " << traversalPointer->data << endl;
        traversalPointer = traversalPointer->next;
    }
    cout << "After Loop, I'm at: " << traversalPointer->data << endl;

    // chaining..
    newNode->next = traversalPointer->next;
    traversalPointer->next = newNode;
}
// Insert at last
struct node *insertAtLast(struct node *head, int data)
{
    struct node *Ptr = (node *)malloc(sizeof(node));
    Ptr->data = data;

    // The Pointer will traverse the list and takes us to the "NODE" which is before "Head"
    struct node *traversalPointer = head;
    while (traversalPointer->next != head)
        traversalPointer = traversalPointer->next;

    // Ptr inserted at the end of the CircularLinkList or Before "HEAD"
    traversalPointer->next = Ptr;

    // And its next will be Head
    Ptr->next = head;
    return head;
}
// Insert At First
struct node *insertAtFirst(struct node *head, int data)
{
    struct node *Ptr = (node *)malloc(sizeof(node));
    Ptr->data = data;

    struct node *p = head;

    cout << "Before Loop, I'm at " << p->data << endl;

    while (p->next != head)
    {
        cout << " inside the loop, I'm at " << p->data << endl;

        p = p->next;
    }
    // now We Are End Of the [Circular-Link-List] (Before the head);
    cout << "after while loop, I'm at: " << p->data << endl;

    p->next = Ptr;
    Ptr->next = head;

    // To Start the circularLink-List From this "Ptr-Node" instead of [old-one];
    head = Ptr;

    // the new head will be returned
    return head;
}
// Circular Link List Traversal
void traversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("Elemen is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
int main(void)
{
    struct node *head, *second, *third;

    head = (node *)malloc(sizeof(struct node));
    second = (node *)malloc(sizeof(struct node));
    third = (node *)malloc(sizeof(struct node));

    // linkin' the nodes
    head->next = second;
    second->next = third;
    third->next = head;

    // putting data into...
    head->data = 1;
    second->data = 2;
    third->data = 3;

    // traversal
    traversal(head);
    cout << endl
         << endl;
    // head = insertAtFirst(head, 34); // Inserts [IN-THE-PLACE-OF-HEAD]
    // head = insertAtLast(head, 34); // Inserts BEFORE-HEAD-NODE
    // insertAtIndex(head, 66, 2); // Inserts At A Particular Index
    // insertAfterNode(second, 99); give it a node as an argument and "it will insert a newNode after it"
    head = delFirstNode(head);
    traversal(head);
}
