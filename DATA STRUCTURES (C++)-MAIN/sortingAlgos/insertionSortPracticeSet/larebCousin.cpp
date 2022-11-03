#include <stdio.h>
#include <iostream>
#include <conio.h>

/*------------- Inserting In THe Sorted Array (By-Hamza) -------------*/

using namespace std;

// Array Traversal
void arrayTraversal(int *Arr, int sizeOf)
{
    for (int i = 0; i < sizeOf; i++)
        cout << *(Arr + i) << endl;
}

int main(void)
{
    int item = 9;
    // Initializing The Array!
    //           0  1  2  3  4   5   6
    int A[10] = {2, 3, 5, 6, 8, 19, 77};

    // Geting Size Of Given Array..
    int size = sizeof(A) / sizeof(int);
    int flag = 1;
    // [Reverse-loop]..!
    for (int i = 0; i < size; i++)
    {
        if (A[i] == item)
        {
            cout << "Item Exists\n";
            flag = 0;
        }
    }
    if (flag)
    {
        for (int i = 0; i < size; i++)
        {
            if (A[i] > item)
            {
                for (int j = size + 1; j > i; j--)
                {
                    A[j] = A[j - 1];
                }
                //   A[i]=item;
                break;
            }
        }
    }

    // Re-Initialization of The 'size' [variable];
    size = sizeof(A) / sizeof(int);
    for (int i = 0; i < size; i++)
        cout << A[i] << endl;
}
//------------- Inse rting In THe Sorted Array (By-Hamza) -------------*Thank you for your business! We look forward to working with you again