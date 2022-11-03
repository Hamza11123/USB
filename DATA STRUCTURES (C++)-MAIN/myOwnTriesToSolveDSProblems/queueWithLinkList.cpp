#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
/* ============================ QUEUE data-Structure Using (Link_List)============================*/
struct node
{
    int data;
    struct node *n;
};

/*---------------------- Generally We InsertTheElements Before The [Line/QUEUE] -----------------------*/
// We can't Insert Them In Between!!
struct node *insertionIn_Queue(struct node *AccessPtr, int data) // Would Get The Reference Of Head
{
    // Creating And Initializing The Newnode For Insertion!
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;

    // Chaining The Nodes
    newNode->n = AccessPtr; // Now, the Pointer "AccessPtr" is POINTING To FirstNode..
    return (newNode);
}
/*---------------------- Generally We InsertTheElements Before The [Line/QUEUE] -----------------------*/

struct node *insertAtLast(node *AccessPtr, int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    while (AccessPtr->n != NULL)
        AccessPtr = AccessPtr->n;

    // Chaining The Nodes
    AccessPtr->n = newNode; // Now, the Pointer "AccessPtr" is POINTING To LastNODE..
    newNode->n = NULL;
}

/*---------------------- Generally We delete The Elements In The End Of The [Line/QUEUE] -----------------------*/
struct node *deleteElemIn_Queue(node *AccessPtr)
{

    node *P, *Q;
    P = AccessPtr;
    Q = AccessPtr->n;
    while (Q->n != NULL)
    {
        P = P->n; // Second Last Node
        Q = Q->n; // Last Node!
    }

    free(Q);     // Last Node Will Be Free
    P->n = NULL; // And 2ndLast Node's Next Will Carry "NULL", As The Termination Of QUEUE
    Q = NULL;    // After FReeing The MEmory The Pointer, Which was Pointing The Second Last Node, now Pointing [NoWhere]!
}
/*---------------------- Generally We delete The Elements In The End Of The [Line/QUEUE] -----------------------*/

void traverse(node *traversalPtr)
{
    int i = 0;
    while (traversalPtr->n != NULL)
    {
        cout << "Elem: " << traversalPtr->data << "  " << i << '\n';
        traversalPtr = traversalPtr->n;
        i++;
    }
    cout << "Elem: " << traversalPtr->data << "  " << i << '\n'; // Last Node!!
}

int main(void)
{
    node *HEAD = NULL;
    // It's Really (Important/Mandontary) To Update The HEAD!
    HEAD = insertionIn_Queue(HEAD, 1);
    HEAD = insertionIn_Queue(HEAD, 2);
    HEAD = insertionIn_Queue(HEAD, 3);

    // insertAtLast(HEAD, 11);
    // insertAtLast(HEAD, 22);
    // insertAtLast(HEAD, 33);

    deleteElemIn_Queue(HEAD);
    traverse(HEAD);
}