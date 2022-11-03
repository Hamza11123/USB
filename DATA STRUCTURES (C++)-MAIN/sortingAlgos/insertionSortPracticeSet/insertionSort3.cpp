#include <stdio.h>
#include <iostream>

using namespace std;
void insertionSort(int *A, int length)
{
    for (int i = 1; i < length; i++)
    {
        // 'j' variable ko 'i' sy ek qadam peechy rakhrahy hn..
        int temp = A[i], j = i - 1;

        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j]; // conndition k true hony pr..jth position waly ko Ek.. Qadam aagy Khis kaarahy hn..
            j--;
        }
        A[j + 1] = temp;
    }
}

void insertionSort2(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = *(a + i); // storing the value from ith index, so it's not lost! during iteration
        int j = i - 1;      //  'j' would b one step backward than 'i'

        while (j >= 0 && *(a + j) > key)
        {
            *(a + j + 1) = *(a + j);
            j--;
        }
        *(a + j + 1) = key;
    }
}

int main(void)
{
    int A[] = {2, 0, 1, 55, 44, 7};
    insertionSort2(A, 6);
    for (int i = 0; i < 6; i++)
        cout << " " << A[i] << endl;
}