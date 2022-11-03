#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

/*----------------- Logic Of Harry Bhaiyaa (Created- Dynamically)---------------------*/
using namespace std;

class Queue
{
    int *Arr, backIndex, frontIndex, sizeOfQueue;

public:
    Queue(int size)
    {
        this->sizeOfQueue = size;
        this->frontIndex = -1;
        this->backIndex = -1;

        // Allocating Dynamic Memory For [Array] From "Head"; With "C++ Style"
        this->Arr = new int[size];
    }

    int isEmpty()
    {
        if (this->frontIndex == this->backIndex)
            return 1;
        return 0;
    }

    int isFull()
    {
        if ((this->backIndex) == (this->sizeOfQueue - 1))
            return 1;
        return 0;
    }

    // Insertion In Queue
    void enQueue(int item)
    {
        if (!this->isFull())
        {
            ++(this->backIndex);
            this->Arr[backIndex] = item;
        }
        else
            cout << "\nOver Flow!";
    }
    // Deletion From Queue
    int deQueue()
    {
        if (!this->isEmpty())
        {
            (this->frontIndex)++;
            int item = this->Arr[this->frontIndex];
            return item;
        }
        else
            cout << "\nUnder Flow!";
    }
};

int main(void)
{
    Queue q(10);

    q.enQueue(3);
    q.enQueue(3);
    q.enQueue(3);
    q.enQueue(3);
    q.enQueue(3);
    q.enQueue(3);
    cout << q.isEmpty();
    cout << q.isFull();

    /*------- Circular Increament ---------*/
    // int i = 0;
    // while (1)
    // {
    //     sleep(1);
    //     if (_kbhit())
    //     {
    //         if (' ' == getch())
    //             break;
    //     }
    //     cout << i << endl;
    //     i = (i + 1) % 5;     // [Circular-Increament]
    // }
    /*------- Circular Increament ---------*/
}