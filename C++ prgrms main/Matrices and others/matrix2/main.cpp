#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

int main()
{
    int A[3][3], B[3][3], C[3][3], i, j;
    cout <<"Enter 9 Numbers For First Matrix" <<endl;
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            cin >>A[i][j];
        }
    }
    cout <<"Re-Enter 9 Numbers For Second Matrix" <<endl;
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            cin >>B[i][j];
        }
    }

    C[0][0] = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0]) + (A[0][2] * B[2][0]);
    C[0][1] = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]) + (A[0][2] * B[2][1]);
    C[0][2] = (A[0][0] * B[0][2]) + (A[0][1] * B[1][2]) + (A[0][2] * B[2][2]);

    C[1][0] = (A[1][0] * B[0][0]) + (A[1][1] * B[1][0]) + (A[1][2] * B[2][0]);
    C[1][1] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]) + (A[1][2] * B[2][1]);
    C[1][2] = (A[1][0] * B[0][2]) + (A[1][1] * B[1][2]) + (A[1][2] * B[2][2]);

    C[2][0] = (A[2][0] * B[0][0]) + (A[2][1] * B[1][0]) + (A[2][2] * B[2][0]);
    C[2][1] = (A[2][0] * B[0][1]) + (A[2][1] * B[1][1]) + (A[2][2] * B[2][1]);
    C[2][2] = (A[2][0] * B[0][2]) + (A[2][1] * B[1][2]) + (A[2][2] * B[2][2]);

    for(i=0; i<=2; ++i)
    {
        for(j=0; j<=2; ++j)
        {
            cout <<"  " <<C[i][j];
        }
        printf("\n\n");
    }
}
