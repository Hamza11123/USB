#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

using namespace std;

class BST
{
public:
    int data;
    BST *left, *right;

    BST()
    {
        this->left = NULL, this->right = NULL;
    }
    BST(int givenData)
    {
        this->data = givenData, this->left = NULL, this->right = NULL;
    }

    void inOrderTraversal(BST *root)
    {
        if (root == NULL)
            return;
        inOrderTraversal(root->left);
        cout << root->data << endl;
        inOrderTraversal(root->right);
    }

    BST *createNode(int givenData)
    {
        BST *newNode = new BST(givenData);
        return newNode;
    }

    BST *search(BST *root, int key)
    {
        BST *prev = root;
        while (root != NULL)
        {
            if (root->data == key)
                return root;
            else if (root->data < key)
            {
                cout << root->data << endl;
                root = root->right;
            }
            else if (root->data > key)
                root = root->left;
        }
        return NULL;
    }

    /*
    DELETE A NODE FROM BST:-
    Case 1: Node is a [Leaf-Node]
    Case 2: Node is a [Non-Leaf-Node]
    Case 3: Node is The [Root-Node]

    CASE 1:
    Step 1 -> Searth The Node
    Step 2 -> Delete The Node

    CASE 3: (this is applicable for all [Cases])
    Step 1 -> Searth The Node
    Step 2 -> Search For "Inorder-Pre" & "Inorder-Post"
    Step 3 -> Keep Doing this until the tree has no empty nodes.

    */
    // In process... (not-working)
    BST *deletion(BST *root, int value)
    {
        BST *iPre = NULL;
        if (root == NULL)
        {
            return NULL;
        }
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
        }
        // search for the node "to-be-deleted"
        if (value < root->data)
        {
            deletion(root->left, value);
        }
        else if (value > root->data)
        {
            deletion(root->right, value);
        }
        else
        {
            // deletion strategy, when the node is found!
            iPre = inOrderPredecessor(root);
            root->data = iPre->data;
            deletion(root->left, iPre->data);
        }
    }

    // [Insert] Operation from By [My-Side]  would Solve Soon!! -> "this my code is Working! for at-least '3' Nodes should b present :(, Not Working For '1' Node :( "
    void insertion(BST *root, int key)
    {
        BST *N = new BST(key);
        // It'll Stop At Its Last Node:
        while (root->left != NULL || root->right != NULL)
        {
            if (root->data < key)
            {
                cout << "right" << root->data << endl;
                root = root->right;
            }
            else if (root->data > key)
            {
                cout << "left" << root->data << endl;
                root = root->left;
            }
            else if (root->data == key)
            {
                cout << "\ncan't Insert:\n";
                return;
            }
        }
        cout << "after while loop, I'm Here->" << root->data << endl;
        if (root->data > key)
        {
            root->left = N;
        }
        else
        {
            root->right = N;
        }
    }

    // insert Operation From Code With Harry(Minor-Difference) With 'C' Style
    void insert2(BST *root, int key)
    {
        BST *prev = NULL;
        while (root != NULL)
        {
            prev = root;
            if (root->data == key)
            {
                printf("Cannot insert %d, already in BST", key);
                return;
            }
            else if (key < root->data)
            {
                root = root->left;
            }
            else
            {
                root = root->right;
            }
        }
        BST *newNode = new BST(key);
        if (key < prev->data)
        {
            prev->left = newNode;
        }
        else
        {
            prev->right = newNode;
        }
    }

    BST *inOrderPredecessor(BST *root)
    {
        root = root->left;

        while (root->right != NULL)
            root = root->right;
        return (root);
    }
    BST *inOrderPostdecessor(BST *root)
    {
        root = root->right;

        while (root->left != NULL)
            root = root->left;
        return (root);
    }
};
int main()
{
    BST *n, *n1, *n2, *n3, *n4, *n5, *n6;
    n = n->createNode(10);
    n1 = n1->createNode(14);
    n2 = n2->createNode(30);
    n3 = n3->createNode(8);
    n4 = n4->createNode(17);
    n5 = n5->createNode(27);
    n6 = n6->createNode(36);

    // // linkin' them...
    // n->left = n1;
    // n->right = n2;

    // n1->left = n3;
    // n1->right = n4;

    // n2->left = n5;
    // n2->right = n6;

    cout << "inorder traversal\n";
    n->inOrderTraversal(n);
    // BST *nw = n->search(n, 14);
    n->insert2(n, 7);
    n->insert2(n, 15);
    n->insert2(n, 5);
    n->insert2(n, 9);
    n->insert2(n, 13);
    n->insert2(n, 20);
    cout << "inorder traversal\n";
    // n->inOrderTraversal(n);

    cout << n->inOrderPostdecessor(n)->data;
}