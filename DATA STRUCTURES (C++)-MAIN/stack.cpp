// linear Data-Structures (Stack)
// Operations on stack are performed According to "FILO" (last-in-first-out)
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

#include <iostream>

using namespace std;

// Array as an "abstract-data-Type"
class stack
{
private:
    int top, size, *Arr; // Private Variables, which stores the information related to the Stack! )

public:
    // constructor, which takes size of stack and, initialize it.
    stack(int Size)
    {
        this->top = -1;
        this->size = Size;
        this->Arr = (int *)calloc(Size, sizeof(int));
    }

    // Method, to pop an element from the stack;
    void pop()
    {
        if (!this->isEmpty())
        {
            free((this->Arr + this->top)); //  Getting the Block Which Will b POPED FRom the Stack And FReeing That Memory;
            --(this->top);
        }
        else
        {
            cout << endl
                 << "can't Pop It's Empty :(" << endl;
        }
    }

    // Method, to push an element in the stack;
    void push(int item)
    {
        if (!this->isFull())
        {
            this->top++;
            this->Arr[top] = item;
        }
        else
        {
            cout << endl
                 << "can't Push it's Filled :(" << endl;
        }
    }

    // Show status of the top(index-Number);
    void topStatus()
    {
        cout << "  Top at: " << this->top << endl;
    }
    // Peek Operation
    void peek(int postionOfElements)
    {
        // Operation that takes POSITION as an Argument and returns the lowest value of "top ";
        cout << "Element is " << this->Arr[((this->top) - (postionOfElements) + 1)] << " at Postion: " << postionOfElements << " and top is: " << this->top << endl;
    }
    void showStats()
    {
        if (this->isEmpty())
            cout << "Empty!" << endl;
        for (int i = 0; i <= this->top; i++)
            cout << endl
                 << this->Arr[i] << endl;
    }

    // Find out! if the stack is "Empty or Not" ?
    int isEmpty()
    {
        if (this->top == -1)
            return true;
        else
            return false;
    }

    // Find out! if the stack is "Full or Not" ?
    int isFull()
    {
        if (this->top == (this->size - 1))
            return true;
        else
            return false;
    }
};

int main(void)
{
    stack s1(4);
    // cout << s1.isFull() << endl;

    // s1.push(34);
    // s1.push(343);
    // s1.push(32);
    // s1.push(321);
    // s1.pop();
    // s1.showStats();
    // s1.topStatus();
    // // cout << "stack us" << s1.isFull();
    // s1.push(443);

    while (1)
    {
        system("cls");
        int userInput;
        cout << "1: push" << endl
             << "2: pop" << endl
             << "3: showstats" << endl
             << "4: topstats" << endl
             << "5: Peek Operation" << endl
             << '\n';

        cin >> userInput;
        switch (userInput)
        {
        case 1:
            s1.push(0);

            break;
        case 2:
            s1.pop();
            break;
        case 3:
            s1.showStats();
            break;
        case 4:
            s1.topStatus();
            break;
        case 5:
            system("cls");
            int getPositon;
            cin >> getPositon;
            s1.peek(getPositon);
            break;

        default:
            exit(1);
            break;
        }
        getch();
    }
}