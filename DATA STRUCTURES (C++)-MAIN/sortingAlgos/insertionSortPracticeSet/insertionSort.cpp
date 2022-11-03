#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void bubbleSort(int *, int);
void insertionSort(int *, int, int);
void traverse(int *, int);

void traverse(int *A, int size)
{
    for (int i = 0; i < size; i++)
        cout << '\n'
             << *(A + i);
}
void bubbleSort(int *A, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(A + j) > *(A + j + 1))
            {
                // Swapping Between 2-Blocks, if they satisfy the Condition!
                temp = *(A + j);
                *(A + j) = *(A + j + 1);
                *(A + j + 1) = temp;
            }
        }
    }
}

void insertionSort(int *A, int size, int item)
{
    for (int i = 0; i < size; i++)
    {
        if (*(A + i) >= item)
        {
            cout << " Element inserts at: " << i;
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    int A[] = {34, 4, 22};
    int S = sizeof(A) / sizeof(int);
    bubbleSort(A, S);
    insertionSort(A, S, 77);

    traverse(A, S);
    return 0;
}
