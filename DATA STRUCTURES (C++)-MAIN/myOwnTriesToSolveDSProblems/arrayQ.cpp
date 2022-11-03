#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int MissingNumber(int, int);
int MissingNumber(int array[], int n)
{
    for (int i = 1; i < n - 1; i++)
        array[0] += array[i];
    return ((n * (n + 1)) / 2) - array[0];
}

int starPattern(int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (i == 0 || j == 0 || i == len - 1 || j == len - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << '\n';
    }
}

class stack
{
    int top, size, *arr;

public:
    stack(int size)
    {
        this->size = size;
        this->arr = (int *)malloc(sizeof(int) * size);
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
        if (this->isEmpty())
        {
            cout << "inner Flow";
        }
        else
        {
            int itm = this->arr[this->top];
            this->top--;
            return itm;
        }
    }

    int push(int itm)
    {
        if (this->isFull())
        {
            cout << "over flow";
        }
        else
        {
            this->top++;
            this->arr[this->top] = itm;
        }
    }
};
int main(void)
{
    stack s(4);
    s.push(8);
    s.push(8);
    s.push(8);
    s.push(8);
    s.push(8);
}