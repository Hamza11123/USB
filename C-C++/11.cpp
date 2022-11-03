#include <iostream>
#include <stdio.h>
#include <string>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include <conio.h>
#include <stdlib.h>
#include <strings.h>
#include <dos.h>
using namespace std;
void gotoxy(int, int);
void printingDivisibleNumbers(int);
int _add(int);

int main(void)
{
    int S = 0;
    for (int i = 0; i <= 10; i++)
        S = S + i;
    cout << S;
}

int _add(int getVal)
{
    if (1 == getVal)
        return (1);
    return (_add(getVal - 1) + getVal);
}
// int main(void)
// {
//     for (int i = 0; i <= 8; i++)
//     {
//         for (int j = 0; j <= 8; j++)
//         {
//             if (j <= i)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         for (int j = 0; j <= 8; j++)
//         {
//             if (j < 8 - i)
//                 cout << " ";
//             else
//                 cout << "*";
//         }
//         cout << endl;
//     }
// }
void printingDivisibleNumbers(int till)
{
    for (int i = 0; i < till; i++)
    {
        if (i % 3 == 0)
            continue;
        cout << i << " ";
    }
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}