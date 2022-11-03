#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void traversal(struct node *);
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

int main(void)
{

    struct node *n1, *n2, *n3, *n4, *n5;
    n1 = (node *)malloc(sizeof(node *));
    n2 = (node *)malloc(sizeof(node *));
    n3 = (node *)malloc(sizeof(node *));
    n4 = (node *)malloc(sizeof(node *));
    n5 = (node *)malloc(sizeof(node *));

    // linkin' the nodes
    n1->next = n2;
    n1->prev = NULL;

    n2->next = n3;
    n2->prev = n1;

    n3->next = n4;
    n3->prev = n2;

    n4->next = n5;
    n4->prev = n3;

    n5->next = NULL;
    n5->prev = n4;

    // Assigning data
    n1->data = 1;
    n2->data = 2;
    n3->data = 3;
    n4->data = 4;
    n5->data = 5;

    traversal(n1);
}

void traversal(struct node *traversalPointer)
{

    /*---------------- Version -1 -------------------(challenge By [Harry-Sir])*/
    // cout << "Before Loop: " << traversalPointer->data << endl;

    // // Reversing the linking List
    // while (traversalPointer->prev != NULL) // It Will REturn Before one Step
    // {
    //     cout << "Element is: " << traversalPointer->data << endl;
    //     traversalPointer = traversalPointer->prev;
    // }
    // cout << "Element is: " << traversalPointer->data << endl;
    // // cout << "after loop-1 is : " << traversalPointer->data << endl;

    // // Forwarding the linklist
    // while (traversalPointer->next != NULL) // It Will REturn Before one Step
    // {
    //     cout << "Element is: " << traversalPointer->data << endl;
    //     traversalPointer = traversalPointer->next;
    // }
    // cout << "Element is: " << traversalPointer->data << endl;
    // // cout << "after loop-2 is : " << traversalPointer->data << endl;
    /*---------------- Version -1 -------------------(challenge By [Harry-Sir])*/

    /*---------------- Version -1 -------------------(challenge By [Harry-Sir])*/
    while (1)
    {
        if (traversalPointer->next != NULL)
        {
            cout << "Element is: " << traversalPointer->data << endl;
            traversalPointer = traversalPointer->next;
        }
        else if (traversalPointer->prev != NULL)
        {
            cout << "Element is: " << traversalPointer->data << endl;
            traversalPointer = traversalPointer->prev;
        }
        else
        {
            break;
        }
    }
}