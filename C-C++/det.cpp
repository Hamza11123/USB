#include <iostream>
#include <stdio.h>

using namespace std;
// void f(int A = NULL);
void f(int);
int main(void)
{
    long int A[3][3], R[3], Result;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];
    }

    R[0] = (A[1][1] * A[2][2]) - (A[1][2] * A[2][1]);
    R[1] = (A[1][0] * A[2][2]) - (A[1][2] * A[2][0]);
    R[2] = (A[1][0] * A[2][1]) - (A[1][1] * A[2][0]);
    Result = (R[0] * A[0][0]) - (R[1] * A[0][1]) + (R[2] * A[0][2]);
}
