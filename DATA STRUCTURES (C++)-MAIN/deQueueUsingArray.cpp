#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

// DE-Queue means "Double-Ended-Queue";
class DE_Queue
{
    int frontInd, rareInd, *Arr, size;

public:
    // constructor to construct [Objects]
    DE_Queue(int sizeOfQueue)
    {
        this->size = sizeOfQueue;
        this->Arr = new int[sizeOfQueue]; // Requesting DynamicArray From Heap
        // Initially Both The Pointers are at '0';
        this->frontInd = this->rareInd = 0;
    }
    int isEmpty()
    {
        // The Queue must be Empty, when Both The Pointers Are Converged!
        if (this->frontInd == this->rareInd)
            return 1;
        return 0;
    }

    int isFull()
    {
        if ((this->rareInd + 1) % (this->size) == this->frontInd) // Queue is Full, if the The [FrontInd] is Converged to [RareInd] after Having a "Circular Increament"
            return 1;
        return 0;
    }

    int deQueueRare()
    {
        if (!this->isEmpty())
        {
            // storing value To Return
            int val_holder = this->Arr[this->rareInd];
            // Circular Decreament.. [To Get The Repeating OutPut]!
            this->rareInd = (this->rareInd + (this->size - 1)) % this->size;
            return val_holder;
        }
        else
            cout << "\n UnderFlow\n";
    }

    void enQueueRare(int item)
    {
        if (!this->isFull())
        {
            this->rareInd = (this->rareInd + 1) % this->size;
            // Putting The Value/Item in [Rarest-Position] of The Queue
            this->Arr[this->rareInd] = item;
        }
        else
            cout << "\n OverFlow\n";
    }
    void traverse()
    {
        for (int i = this->frontInd + 1; i <= this->rareInd; i++)
            cout << '\n'
                 << this->Arr[i] << '\n';
    }
};
int main(void)
{
    DE_Queue q(5);
    q.enQueueRare(2);
    q.enQueueRare(3);
    q.enQueueRare(1);
    q.deQueueRare();
    q.traverse();

    // int i = 0;

    // // cout << (i - 1) % 8;
    // for (int i = 0;;)
    // {
    //     if (_getch() == ' ')
    //         break;
    //     cout << i << endl;
    //     // main Step For Circular "DE_Queue"
    //     i = (i + (60 - 1)) % 60; // Circular Decreament [formula]
    // }
}