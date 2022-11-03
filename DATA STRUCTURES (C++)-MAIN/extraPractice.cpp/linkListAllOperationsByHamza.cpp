#include <stdio.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

/*----------------- Link-Lists' Methods Decaration -----------------*/
void deleteInTheEnd(struct node *);
void deleteAfterNode(struct node *);
void deleteInBetween(struct node *, int);
struct node *deleteAtFirst(struct node *);
void insertAfterNode(struct node *, int);
void insertInEnd(struct node *, int);
void insertInBetween(struct node *, int, int);
struct node *insertAtFirst(struct node *, int);
void traverse(struct node *);
/*----------------- Link-Lists' Methods Decaration -----------------*/

struct node
{
    int data;
    struct node *next;
};

int main(void)
{
    // Declaring Nodes for L.L.
    struct node *head, *second, *third, *fourth;
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));

    // linking them
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    // assigning data
    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    // traversin'
    traverse(head);
    // head = insertAtFirst(head, 0); // 'Insert At first (head, data);'
    // insertInBetween(head, 78, 2);
    // insertInEnd(head, 12);
    // insertAfterNode(fourth, 45); // Insert After Passed-NODE...:)

    // head = deleteAtFirst(head);
    // deleteInBetween(head, 2); // Supply the index and the Node will be removed!
    // deleteAfterNode(sec https://gcc.gnu.org/onlinedocs/libstdc++/manual/streambufs.htmlond);
    deleteInTheEnd(head);
    cout << endl;
    traverse(head);
}

/*---------------------- Operations Of the linkList -----------------------*/
// delete In the End
void deleteInTheEnd(struct node *headPtr)
{

    struct node *p = headPtr;
    struct node *q = headPtr->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
}
// delete after a given Node Func.
void deleteAfterNode(struct node *givenNode)
{
    struct node *holdPtr;
    holdPtr = givenNode->next;
    givenNode->next = holdPtr->next;
    free(holdPtr);
}
// delete in between Func.
void deleteInBetween(struct node *HeadPtr, int index)
{
    struct node *HeadPtr2 = HeadPtr->next;
    for (int i = 1; i != index - 1; i++)
    {
        HeadPtr = HeadPtr->next;   // Back-Pointer
        HeadPtr2 = HeadPtr2->next; // Front-Pointer
    }
    HeadPtr->next = HeadPtr2->next;
    free(HeadPtr2);

    cout << "this is will before" << HeadPtr->data;
    cout << "this is will b deleted " << HeadPtr2->data;
}
// Delete at first Func.
struct node *deleteAtFirst(struct node *HeadPtr)
{
    struct node *Holdptr;
    Holdptr = HeadPtr;
    HeadPtr = HeadPtr->next;
    free(Holdptr);
    return (HeadPtr);
}

// Insert After A NODE Func. [time-comp.] = O(1)
void insertAfterNode(struct node *theNode, int Data) // would get "theNode" as an argument and insert [after it]
{
    struct node *newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->data = Data;

    newNode->next = theNode->next;
    theNode->next = newNode;
}
// Insert in The End Func. [time-comp.] = O(n)
void insertInEnd(struct node *HeadPtr, int Data)
{ // We get The access of head Pointer of the linklist so that, the list can be accessed

    struct node *newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->data = Data;

    while (HeadPtr->next != NULL)
        HeadPtr = HeadPtr->next;

    HeadPtr->next = newNode;
    newNode->next = NULL;
}
// insert In Between Func.
void insertInBetween(struct node *HeadPtr, int Data, int index)
{
    struct node *newNode;
    newNode = (node *)malloc(sizeof(node));
    newNode->data = Data;

    for (int i = 0; i < index - 1; i++)
        HeadPtr = HeadPtr->next;

    newNode->next = HeadPtr->next;
    HeadPtr->next = newNode;
}
// insert at first Func. [time-comp.] = O(1)
struct node *insertAtFirst(struct node *oldHead, int Data)
{
    struct node *newHead;
    newHead = (node *)malloc(sizeof(node));
    newHead->data = Data;
    newHead->next = oldHead;
    return (newHead);
}

// Traversal Func.
void traverse(struct node *traversalPtr)
{
    while (traversalPtr->next != NULL)
    {
        cout << traversalPtr->data << endl;
        traversalPtr = traversalPtr->next;
    }
    cout << traversalPtr->data << endl;
}

/*---------------------- Operations Of the linkList -----------------------*/