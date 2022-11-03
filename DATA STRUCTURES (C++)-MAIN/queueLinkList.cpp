#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node *enQueue(node *, node *, int);
void traverse(struct node *);
node *f = NULL, *r = NULL;
struct node
{
    int data;
    node *next;
};
struct node *enQueue(int item)
{
    node *n = (node *)malloc(sizeof(node));
    if (n == NULL)
    {
        cout << "Ovr fl!";
    }
    else
    {
        // Configuring The "newNode" Before [Insertion];
        n->data = item;
        n->next = NULL;

        // If The Linked List is Not Carrying any Kinda Memory Block, then we needa Assign a Memory Block!
        if (f == NULL)
        {
            // If The Link List is [Fully-Empty] then, Firstly we needa assign a [Memory Block]
            f = r = n;
        }
        else
        {
            // if the List carryin' at least '1' or "More " Nodes, then Assign The [newNode] to rareIndex's "next"
            r->next = n;
            // & then, [rareInd] ko Ek Qadam Aagy Krdo!
            r = n;
        }
    }
    return (f);
}

int deQueue()
{
    if (f == NULL)
        cout << "\nUnder Flow!\n";
    else
    {
        int deQueuedVal = f->data; // Extracting data from the [deQueueed-val]
        node *holdingPointer = f;  // Holding The Address Of [First-Node] Of The "List" to [Free-taht-MEMORY-BLOCK]
        free(holdingPointer);      // Now, FReeing The Memory Through The [AddressOf 1st Block]
        f = f->next;               // Step-Forward-> "By One Node"
        return (deQueuedVal);      // returnin8g the stored "Val" After freeing the memory
    }
}

void traverse(struct node *traversalPtr)
{
    while (traversalPtr != NULL)
    {
        cout << "first elem: " << traversalPtr->data << endl;
        traversalPtr = traversalPtr->next;
    }
}

int main(void)
{
    enQueue(9);
    enQueue(3);
    enQueue(2);
    enQueue(12);

    deQueue();

    traverse(f);
    return 0;
}
