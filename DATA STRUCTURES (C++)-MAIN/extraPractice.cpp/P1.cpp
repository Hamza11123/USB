#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int A[] = {1, 2, 3, 4};
    int x = 6;

    for (int i = 0; i < (sizeof(A) / sizeof(int)); i++) // Another way to calculate lenThOf Array of int type
    {
        int firstNum;
        firstNum = x - A[i];
        for (int find = 0; find < (sizeof(A) / sizeof(int)); find++)
        {
            if (A[find] == firstNum)
            {
                cout << firstNum << A[i];
                return 0;
            }
        }
    }
}
