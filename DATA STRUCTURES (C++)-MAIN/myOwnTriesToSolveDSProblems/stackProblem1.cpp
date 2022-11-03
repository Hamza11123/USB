#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
class stack
{
    int top, size, *arr;

public:
    stack(int size)
    {
        this->top = -1;
        this->size = size;
        this->arr = new int[size];
    }

    push(int item)
    {
        if (this->top == (this->size - 1))
        {
            cout << "\nstack is over flow!\n";
        }
        else
        {
            this->top++;
            this->arr[this->top] = item;
        }
    }
    int getMin()
    {
        int min = this->arr[0];
        for (int i = 0; i < this->top; i++)
        {
            if (this->arr[i] < min)
                min = this->arr[i];
        }

        return min;
    }

    int pop()
    {
        if (this->top == -1)
            cout << "\n stack is inner-Flow!";
        else
        {
            int item = this->arr[this->top];
            this->top--;
            return item;
        }
    }
};

int main(void)
{
    stack s(4);
    s.push(9);
    s.push(2);
    s.push(1);
    s.push(23);
    cout << s.getMin();
}