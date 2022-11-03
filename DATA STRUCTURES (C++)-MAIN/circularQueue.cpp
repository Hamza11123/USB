#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

class Queue
{
private:
    int *Arr, frontInd, rareInd, size;

public:
    // Initializing The Queue With a Constructor
    Queue(int sizeOfQueue)
    {
        // Catching The "Size" From The User, And Assigning To The [Instance-Member-Variable]-> 'size';
        this->size = sizeOfQueue;
        // Requestin' The Memory-Blocks From [Heap] "Dynamically" And Assigning To The "Arr" Pointer To Get [Accessed The Blocks]
        this->Arr = new int[sizeOfQueue];
        // initializing The Positions Of The [Index-Variables] "frontInd & rareInd", They Both will Stand At "-1", As The Condition Of Empty "QUEUE"
        // this->frontInd = this->rareInd = -1; // [Starting Point] for Linear-QUEUE

        this->frontInd = this->rareInd = 0; // [Starting Point] for Circular-QUEUE
    }
    int isEmpty()
    {
        // The "frontInd & rareInd" Should B "Equal" As The Condition Of The [Empty]
        if (this->frontInd == this->rareInd)
            return 1;
        return 0;
    }

    int isFull()
    {
        // The "rareInd" & "size"(Total size of queue - 1)  Must B "Equal", to satisfy the condition of [Full]
        if (this->rareInd == (this->size - 1))
            return 1;
        return 0;
    }

    void enQueue(int item)
    {
        // The Queue Mustn't B Full, We Need At Least [One-remaining-BLock] For Insertion!
        if (!this->isFull()) // Insertion in Queue, means Insert At The End Of [Dynamic-Array]!
        {
            this->rareInd++;                 // Increasing The [RareInd] To Access The [Next Block] "If It Exists"
            this->Arr[this->rareInd] = item; // Now At That Particular Index, V r Storing "Data";
        }
        else
            // If The Stack Is Full, Means The Queue Is OverFlow!
            cout << "\nOver Flow\n";
    }

    /*------------------------ Operations for Circular QUEUE --------------------------*/
    void enQueueCIrcular(int item)
    {
        // the "rareInd" will b increased -> [Circularly], [zigZag Graph like]; if we assume the Expression as a Function
        if ((this->rareInd + 1) % (this->size) == this->frontInd)
            printf("queue is OverFLow!\n");
        else
        {
            this->rareInd = (this->rareInd + 1) % (this->size);
            this->Arr[this->rareInd] = item;
        }
    }

    int deQueueCircular()
    {
        if (this->rareInd == this->frontInd)
            printf("Queue is Under Flow or Empty! \n");
        else
        {
            // first, Storing The "Data" into The [deQueuedVal] named Variable
            int deQueuedVal = this->Arr[this->frontInd];
            // Now Increasing Circular The [frontInd] by "1", so that we can start the queue from [There]
            this->frontInd = (this->frontInd + 1) % this->size;
            return deQueuedVal; // And Finally Returnin' The "deQueued" Value From The [Queue];
        }
    }
    /*------------------------ Operations for Circular QUEUE --------------------------*/

    int deQueue()
    {
        // The Queue Should Mustn't B Empty For [Deletion Operation]!
        if (!this->isEmpty()) //  At Least Some Data Must B Stored In The "QUEUE"
            this->frontInd++; // Increasing The "StartingPointer" [FrontInd] {To Start QUEUE} From "There"
        else
            cout << "\nunder Flow\n";
    }

    // Returns The rareAt [Position];
    int rareAt()
    {
        cout << "Rare At: " << this->rareInd << '\n';
    }
    // Returns The frontInd [Position]
    int frontAt()
    {
        cout << "front At: " << this->frontInd << '\n';
    }

    int traversalOfTheQueue()
    {
        int elemCounter = 0;
        // Loop Starts From The [frontInd + 1] To The '<=' [rareInd];
        for (int i = this->frontInd; i <= this->rareInd; i++)
        {
            printf("\nElement: %d At Index: %d is \'%d\'\n", elemCounter + 1, i, this->Arr[i]);
            elemCounter++;
        }
        // for (int i = this->frontInd + 1; i <= this->rareInd; i++)
        // {
        //     printf("\nElement: %d At Index: %d is \'%d\'\n", elemCounter + 1, i, this->Arr[i]);
        //     elemCounter++;
        // }
    }
};

int main(void)
{
    Queue q(4);
    // cout << q.isEmpty();
    // cout << q.isFull();

    q.enQueueCIrcular(3);
    q.enQueueCIrcular(3);
    q.enQueueCIrcular(3);
    q.enQueueCIrcular(3);

    // cout << "traversing...\n";
    // q.traversalOfTheQueue();
}