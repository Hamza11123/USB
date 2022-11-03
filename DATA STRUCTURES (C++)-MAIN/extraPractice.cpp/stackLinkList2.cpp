#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

// Malloc returns-> NULL, when it "fails to make a Block Dynamically from Heap!"
using namespace std;
/*-------------------- Declaration of the Functions ---------------------*/
void peekOp_stack(struct node *, int);
void linkListTraversal(struct node *);
int isEmpty(struct node *);
int isFull(struct node *);
struct node *push(struct node *);
struct node *pop(struct node *);
void stackBottom(struct node *);
void stackTop(struct node *);

/*-------------------- Declaration of the Functions ---------------------*/

// "Implementing STACK Using linkList" instead of using Array!

struct node
{
    int data;
    struct node *next;
};

int isEmpty(struct node *top)
{
    if (top == NULL)
        return true;
    return false;
}

// If returns 1 means the HEAP Space is Filled... and malloc failed to Request a Block Dynamically!!
int isFull(struct node *top)
{
    struct node *p = (node *)malloc(sizeof(struct node));
    if (p == NULL)
        return true;
    return false;
}

// Push Operation Of Stack Using Link-List
struct node *push(struct node *top, int data)
{

    if (isFull(top))
        cout << "Stack Over Flow \n\n";
    else
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = top;
        top = newNode; // It's Really Important To Update [TOP]!!
        return top;
    }
}

struct node *pop(struct node *top)
{
    if (isEmpty((top)))
        cout << "stack Under Flow" << endl
             << endl;
    else
    {
        struct node *holdingNode = (top);
        (top) = (top)->next;

        int x = holdingNode->data;
        free(holdingNode);
        holdingNode = NULL;
        return top;
    }
}

void peekOp_stack(struct node *top, int index)
{
    if (index > 0)
    {
        for (int i = 0; i < index - 1; i++)
            top = top->next;
        cout << "The Element At Index " << index << " is " << top->data << endl
             << endl;
    }
    else
        cout << " Please Enter The Valid Index :(" << endl;
}

void stackTop(struct node *top)
{
    cout << "Toppest Elmeent is: " << top->data << endl;
}
void stackBottom(struct node *top)
{
    while (top->next != NULL)
        top = top->next;
    cout << "The Bottom Element Is: " << top->data << endl
         << endl;
}

int main(void)
{
    node *top = NULL;

    // Pushing the Elements in the Stack-link-List
    top = push(top, 88);
    top = push(top, 2);
    top = push(top, 32);

    // Traversing the linkList
    linkListTraversal(top);

    // Popped Element
    top = pop(top);

    cout << " After Popping...\n\n";
    // After Popping the Elements
    linkListTraversal(top);

    // // Peek Operation Is Used To Access The Elements, With The Postion Numbers, [Assigined To The Elements];
    // peekOp_stack(top, 1);

    // // (stackBottom) FUnction Is Used to Get The (Element or Node) At Bottom;
    // stackTop(top);
    // stackBottom(top);

    return 0;
}

void linkListTraversal(struct node *traversalPtr)
{
    while (traversalPtr->next != NULL)
    {
        cout << traversalPtr->data << endl;
        traversalPtr = traversalPtr->next;
    }
    cout << traversalPtr->data << endl;
}