#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
struct node *createNode(int);
struct node *reversingLL(struct node *);
// implementation of LL
struct node
{
    int data;
    node *next;
};
struct node *createNode(int item)
{
    struct node *n = new node[sizeof(node)];
    n->next = NULL;
    n->data = item;
    return (n);
}
void LLtraversal(struct node *traversalPtr)
{
    while (traversalPtr != NULL)
    {
        cout << traversalPtr->data << endl;
        traversalPtr = traversalPtr->next;
    }
}

// implementatino of stack
class stack
{
    int top, size;
    int *arr;

public:
    stack(int size)
    {
        this->size = size;
        this->arr = new int[sizeof(size)];
        this->top = -1;
    }

    int isEmpty()
    {
        if (this->top == -1)
            return 1;
        return 0;
    }
    int isFull()
    {
        if (this->size - 1 == this->top)
            return 1;
        return 0;
    }

    int pop()
    {
        if (!this->isEmpty())
        {
            int item = this->arr[top];
            this->top--;
            return item;
        }
        else
            cout << "\n under flow!\n";
    }
    int push(int item)
    {
        if (!this->isFull())
        {
            this->top++;
            this->arr[top] = item;
        }
        else
            cout << "\n over flow!\n";
    }

    void traversal()
    {
        if (!this->isEmpty())
        {

            for (int i = 0; i <= this->top; i++)
                cout << this->arr[i] << endl;
        }
        else
            cout << "\nunder Flow!!\n";
    }
};
struct node *reversingLL(struct node *head)
{
    struct node *headPtr = head;
    class stack s(10);
    // pushing the Elements of linkList into the [STACK]
    while (headPtr != NULL)
    {
        s.push(headPtr->data);
        headPtr = headPtr->next;
    }

    headPtr = head; // now, again starting the 'headPtr' From the begining~

    // POPing the ELments from the stack and assigning Them into The "Linked-List's-NODES"
    while (headPtr != NULL)
    {
        headPtr->data = s.pop();
        headPtr = headPtr->next;
    }
    // returning the newHead Of the [ReversedLINKED_LIST] :}
    return (head);
}
int main(void)
{
    node *n, *n1, *n2, *n3, *n4;
    // creating and assigning the nodes
    n = createNode(85);
    n1 = createNode(81);
    n2 = createNode(28);
    n3 = createNode(83);
    n4 = createNode(1);

    // linking the nodes
    n->next = n1; // head of the LL
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    // reversing the linkedList..
    n = reversingLL(n);
    LLtraversal(n);
}
