#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *l, *r;
};

Node *creatingTheNode(int data)
{
    Node *n;                          // Declaring Ndoe Pointer
    n = (Node *)malloc(sizeof(Node)); // Creating a NewNode & Assigning THe Address To The CreatedPointer
    n->data = 122;                    // setting the data;;
    n->l = NULL;                      // Setting the Left and Right Pointers to the NULL, [Initially]
    n->r = NULL;

    return (n); // Finally Returning the "Node" [After-Construction];
}
int main(void)
{
    // // Constructing first Parent-Node
    // Node *p;
    // p = (Node *)malloc(sizeof(Node));
    // p->data = 1;
    // p->l = NULL;
    // p->r = NULL;

    // // Constructing 2nd Child-Ndoe
    // Node *p1;
    // p1 = (Node *)malloc(sizeof(Node));
    // p1->data = 12;
    // p1->l = NULL;
    // p1->r = NULL;

    // // Constructing 3rd Child-Ndoe
    // Node *p2;
    // p2 = (Node *)malloc(sizeof(Node));
    // p2->data = 122;
    // p2->l = NULL;
    // p2->r = NULL;

    // linking the [Parent] to The [NODEs]
    Node *n, *n1, *n2, *n3, *n4, *n5, *n6, n7;
    n = creatingTheNode(41);
    n1 = creatingTheNode(12);
    n2 = creatingTheNode(63);
    n3 = creatingTheNode(43);
    n5 = creatingTheNode(43);
    n6 = creatingTheNode(2);
    n7 = creatingTheNode(1);
}