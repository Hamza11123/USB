#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
struct node *insertion(struct node *, int);
void traversal(struct node *);
struct node
{
    int data;
    node *next;
};

int isEmpty(struct node *head)
{
    if (head == NULL)
        return 1;
    return 0;
}
int isFull(struct node *head)
{
    node *newNode = (node *)malloc(sizeof(node));
    if (newNode == NULL)
        return 1;
    return 0;
}
struct node *insertion(struct node *head, int item)
{
    node *p = head;
    // creating node
    node *n = (struct node *)malloc(sizeof(node));

    if (n == NULL)
        cout << "OverFlow!\n";
    else
    {
        if (head == NULL)
            head = n;
        else
        {
            while (p->next != NULL)
                p = p->next;
            p->next = n;
        }

        n->next = NULL;
        n->data = item;
    }
    return head;
}

void traversal(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main(void)
{
    node *h = NULL;
    h = insertion(h, 8);
    h = insertion(h, 2);
    h = insertion(h, 1);
    h = insertion(h, 1);
    h = insertion(h, 1);

    traversal(h);
}