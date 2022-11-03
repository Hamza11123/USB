#include <stdio.h>
#include <conio.h>
#include <iostream>
int parenthesis(char);
using namespace std;
class Stack
{
    int top, size;
    char *Arr;

public:
    Stack(int sizeOfStack)
    {
        this->top = -1;
        this->size = sizeOfStack;
        this->Arr = new char[sizeOfStack]; // Allocating Mmeory From Heap
    }

    char pop()
    {
        if (this->top != -1)
        {
            char val = this->Arr[this->top];
            (this->top)--;
            return val;
        }
        else
            return '0';
    }

    void push(int item)
    {
        if (this->top != (this->size - 1))
        {
            this->top++;
            (this->Arr[this->top]) = item;
        }
        else
            cout << "\nOverFlow!\n";
    }

    int stackBottom()
    {
    }
};

int parenthesis(string str)
{
    Stack s(10);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else if (str[i] == ')')
        {
            if (s.pop() == '0')
                return 0;
        }
    }
    if (s.pop() == '0')
        return 1;
    return 0;
}

int main(void)
{
    char A[] = "()";
    cout << parenthesis(A);
}