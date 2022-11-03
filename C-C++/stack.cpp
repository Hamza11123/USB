#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
using namespace std;

class stak
{

    int top = -1, *pointerToPointMallocArray, sizeOfTheStack;

public:
    stak(int sizeOfTheStackArray)
    {
        this->sizeOfTheStack = sizeOfTheStackArray;
        this->pointerToPointMallocArray = (int *)malloc(sizeof(int) * sizeOfTheStackArray);
    }

    int push(int getItemFrmUser_PushInTheStack)
    {
        if ((this->top) == (this->sizeOfTheStack) - 1) ///////////////////////////// Stck Is Full...///////////////////
            return 0;
        else
        {
            --(this->top);
            (this->pointerToPointMallocArray)[this->top] = getItemFrmUser_PushInTheStack;
            return 1;
        }
    }

    int pop()
    {
        if (this->top == -1)
            return 0;
        else
        {
            this->pointerToPointMallocArray[this->top] = NULL;
            --(this->top);
            return 1;
        }
    }
};

// int main(void)
// {
//     int itm;
//     stak obj1(3);
//     for (int i = 0; i < 6; i++)
//     {
//         int n;
//         cin >> n;
//         switch (n)
//         {

//         case 1:
//             cin >> itm;

//             if (obj1.push(itm))
//                 cout << itm << " is pushed now\n\n";
//             else
//                 cout << "Fuck You, The stakc is Full Now..\n";
//             break;
//         case 2:
//             obj1.pop();
//         }
//     }
// }
