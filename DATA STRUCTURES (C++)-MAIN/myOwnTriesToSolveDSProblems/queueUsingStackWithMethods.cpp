#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
class stack
{
    int top, size;
    int *Arr;

public:
    stack(int sizeOfStack)
    {
        this->size = sizeOfStack;
        this->Arr = new int[sizeOfStack];
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
        if (this->top == this->size - 1)
            return 1;
        return 0;
    }
    int pop()
    {
        if (!this->isEmpty())
        {
            int poppedItem = this->Arr[0]; // EnQueued Item!
            for (int i = 0; i < this->size; i++)
                this->Arr[i] = this->Arr[(i + 1)];
            this->top--; // Decreasing The "Top", as an Element Removed From The QUEUE
            return poppedItem;
        }
    }
    void push(int toBe_PushItem)
    {
        if (!this->isFull())
        {
            this->top++;
            this->Arr[this->top] = toBe_PushItem;
        }
    }
    int peek(int index)
    {
        if (index > 0)
            return (this->Arr[((this->top) - index + 1)]);
    }
    int traversal()
    {
        for (int i = 0; i <= this->top; i++)
            cout << " Elemnet at: " << i << " is " << this->Arr[i] << endl;
    }
};
int main(void)
{
    stack s(4);

    s.push(12);
    s.push(2);
    s.push(33);
    s.push(32); // En-Queue -> insertion In "Queue"
    s.pop();    // De-Queue -> deletion In "Queue"
}