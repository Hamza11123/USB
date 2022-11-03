#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
void funMat(int *, int * = NULL, int * = NULL);

//int main(void)
//{
///////////////// programm to check wheather it is prime or not..!!?? //////////////////
// int n, i;
// cin >> n;
// for (i = 2; i < n; i++)
// {
//     if (n % i == 0)
//         break;
// }
// i == n ? cout << "A prime" : cout << " not prime";
////////////////////////////////////////////////////////////////////////////////////////

//int i, j, mA[3][3], mB[3][3], mR[3][3];

//}

int main(void)
{
    int A[3][3], B[3][3], Cr[3][3];
    cout << "enter 1st Mat" << endl;
    funMat(&A[0][0]);
    cout << endl
         << " Enter 2nd mat" << endl;
    funMat(&B[0][0]);

    funMat(&A[0][0], &B[0][0], &Cr[0][0]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "  " << Cr[i][j];
        }
        cout << endl
             << endl;
    }
}

void funMat(int *m, int *m2, int *m3R)
{
    if (m2 == NULL || m3R == NULL)
    {
        for (int i = 0; i < 8; i++)
            cin >> *(m + i);
    }
    else
    {
        for (int j = 0; j < 9; j++)
            *(m3R + j) = *(m + j) + *(m2 + j);
    }
}