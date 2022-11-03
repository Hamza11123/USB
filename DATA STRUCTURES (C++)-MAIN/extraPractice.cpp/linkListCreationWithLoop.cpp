#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

struct node
{
    char *str;
    struct node *next;
};
struct node *createLinkList(int length)
{
    // Array of char-Pointers to Store The Whole STrings..
    char *A[10] = {"you ", "are ", "the ", "best ", "friend! ", "hello"};

    node *head = NULL, *temp;

    for (int i = 0; i < length; i++)
    {
        struct node *newNode = (node *)malloc(sizeof(node));
        newNode->next = NULL;
        if (head == NULL)
            head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode; // 1-step forward, really neccesary..
            // you can also Enter Data..
        }
    }
    return head;
}