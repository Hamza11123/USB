#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct node *createNode(int);
void inOrder(struct node *);
void postOrder(struct node *);
void preOrder(struct node *);

/*
    Pre-order-Traversal :- root -> left-Sub-Tree -> Right-Sub-Tree
    post-order-Traversal :- left-Sub-Tree ->  right-Sub-Tree -> root
    In-order-Traversal :- left-Sub-Tree -> root ->  right-Sub-Tree

*/

struct node
{
    int data;
    node *l, *r;
};

struct node *createNode(int item)
{
    // Declaring the pointer, & [Requesting A "newNode" FRom "Heap" Dynamically]
    node *n = new node[sizeof(node)];
    // node *n2 = new node ();  // modern-Way To Declare Objects In CPP

    // Putting data in it!
    n->data = item;

    // setting the newNode's Value To the 'NULL'
    n->l = NULL, n->r = NULL;

    // now, returning the Node's [Address/Referenceu] So, it can be accessible from the AnyWhere!
    return n;
}
int main(void)
{
    // declaring the pointers of 'node-type' to store the Reference/Address To [ACCESS-THEM]
    struct node *n, *n1, *n2, *n3, *n4, *n5, *n6;

    // Creating the "nodes" THrough Function, & the Pointers
    n = createNode(8);
    n1 = createNode(83);
    n2 = createNode(82);
    n3 = createNode(81);
    n4 = createNode(2);
    n5 = createNode(4);
    n6 = createNode(3);

    // linking the nodes as Binary-Tree Structure
    n->l = n1;
    n->r = n2;

    n1->l = n3;
    n1->r = n4;

    n2->l = n5;
    n2->r = n6;

    // traversing.. them
    cout << "\ninOrder Traversal...\n";
    inOrder(n);
    cout << "\npostOrder Traversal...\n";
    postOrder(n);
    cout << "\npreOrder Traversal...\n";
    preOrder(n);
}

// Preorder Traversal
void preOrder(node *root)
{
    // if the root is NULL it'll Return "As It is" & "no-More Recursive Calls will OCCUR"
    if (root == NULL)
        return;
    cout << root->data << endl;
    preOrder(root->l);
    preOrder(root->r);
}
void postOrder(node *root)
{
    // if the root is NULL it'll Return "As It is" & "no-More Recursive Calls will OCCUR"
    if (root == NULL)
        return;
    preOrder(root->l);
    preOrder(root->r);
    cout << root->data << endl;
}
void inOrder(node *root)
{
    // if the root is NULL it'll Return "As It is" & "no-More Recursive Calls will OCCUR"
    if (root == NULL)
        return;
    preOrder(root->l);
    cout << root->data << endl;
    preOrder(root->r);
}
