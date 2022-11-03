#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
using namespace std;
struct Node *createLinkList(int);

struct Node
{
    int index, data;
    struct Node *next; // pointing the next Node..
};

struct Node *createLinkList(int lengthOfLinkList)
{
    struct Node *Head, *LinkList_TraversalPtr;

    Head = (struct Node *)malloc(sizeof(struct Node)); // Making a Node Dynamically & Assignin To the Head

    LinkList_TraversalPtr = Head; // Assigning the Address of StartingLinkList_Dynamic Block to the "TraverSalPointer" Variable

    for (int index = 0; index < lengthOfLinkList; index++) // Looping it for 5 times
    {

        // Step-1
        LinkList_TraversalPtr->next = (struct Node *)malloc(sizeof(struct Node)); // A Dynamic Block of "Node" Type is Created and To Access The Block, We'll Assign the Address of Block to the "Head's *next" (Pointer-Variable)

        LinkList_TraversalPtr->data = 9;      // Entering data in Every Node
        LinkList_TraversalPtr->index = index; // Assigning the "Serial Number Like Array"

        // Step-2
        LinkList_TraversalPtr = LinkList_TraversalPtr->next; // Important-Step: Exchanging the "Head's Block" With its "Next" Block and the Process Will Keep on continuing...
    }

    LinkList_TraversalPtr->next = NULL;
    return (Head);
}

int main(void)
{
    struct Node *HEAD;
    HEAD = createLinkList(4);
    cout << (HEAD->index) << endl;
    cout << (HEAD->next)->index << endl;
    cout << ((HEAD->next)->next)->index << endl;
    cout << (((HEAD->next)->next)->next)->index << endl;
    cout << ((((HEAD->next)->next)->next)->next)->index << endl; // this Block Doesn't Exist It Would Be containing A [GARBAGE-VALUE]
    // cout << HEAD->data << HEAD->index << endl;
    // cout << (HEAD->next)->data << (HEAD->next)->index << endl;
    // cout << ((HEAD->next)->next)->data << ((HEAD->next)->next)->index << endl;
    // cout << (((HEAD->next)->next)->next)->data << (((HEAD->next)->next)->next)->index << endl;
}
