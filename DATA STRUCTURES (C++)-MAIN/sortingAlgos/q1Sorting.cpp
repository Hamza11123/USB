#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int KthElem(int *, int, int);
int bubbleSortAddaptive(int *, int);
void arrayTraversal(int *, int);

int bubbleSortAddaptive(int *A, int sizeOfArr)
{
    int temp;
    bool isSorted = true;

    // Bubble Sorting Algorithm...
    for (int i = 0; i < sizeOfArr - 1; i++)
    {
        for (int j = 0; j < (sizeOfArr - 1 - i); j++)
        {
            if (*(A + j) > *(A + j + 1))
            {
                temp = *(A + j);
                *(A + j) = *(A + j + 1);
                *(A + j + 1) = temp;
                isSorted = false;
            }
        }
        if (isSorted)
            return true;
    }
}

// Array Traversal
void arrayTraversal(int *Arr, int sizeOf)
{
    for (int i = 0; i < sizeOf; i++)
        cout << *(Arr + i) << endl;
}

// Kth Smallest Element Function
int KthElem(int *A, int N, int size)
{
    int i = 0;
    bubbleSortAddaptive(A, size);
    arrayTraversal(A, size);

    for (i; i < N - 2; i++)
        ;
    return A[i];
}
int main(void)
{
    int A[] = {100, 4, 44, 6, 90, 77, 0, 34};
    cout << '\n'
         << KthElem(A, 3, 5);
}