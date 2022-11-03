#include <stdio.h>
#include <iostream>
using namespace std;

/*-------- linkList With CPP-Style(OOPS) ---------*/
class linkList
{
public:
    int data;
    linkList *next;

    // Deffault-Constructor
    linkList()
    {
        this->next = NULL;
    }
    // Paramatrize Constructor
    linkList(int givenData)
    {
        this->data = givenData;
        this->next = NULL;
    }

    linkList *insertion(int givenData, linkList *head)
    {
        linkList *temp = head;
        // creating "New-Node"
        linkList *newNode = new linkList(givenData);

        // if the head Of the linked List Isn't Carrying Any Kinda Node, then firstly assign it a 'Node'
        if (head == NULL)
            head = newNode;
        else
        {
            // traversing the [linkedList] Until we Reach to the [last-Node]
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
        return head;
    }
};

void traverse(linkList *traversalPtr)
{
    while (traversalPtr != NULL)
    {
        cout << traversalPtr->data << endl;
        traversalPtr = traversalPtr->next;
    }
}

int main(void)
{
    // the head-Pointer Of "linkList" Type Isn't Pointing To AnyOther Node
    linkList *head = NULL;
    // The Constructor Would Run And Its "Next" is Automatically Assigned With "NULL"
    head = head->insertion(343, head);
    head = head->insertion(23, head);
    head = head->insertion(42, head);
    head = head->insertion(134, head);
    head = head->insertion(4, head);
    traverse(head);
}
