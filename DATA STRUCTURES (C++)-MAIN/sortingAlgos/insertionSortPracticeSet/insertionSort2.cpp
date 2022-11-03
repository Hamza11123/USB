#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void insertionSort(int *A, int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > A[i])
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

void bubbleSort(int *A, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
    }
}
int main(void)
{
    int A[] = {2, 7, 1, 0};

    for (int i = 0; i < 4; i++)
        cout << " " << A[i] << '\n';

    insertionSort(A, 4);

    for (int i = 0; i < 4; i++)
        cout << " " << A[i];
}