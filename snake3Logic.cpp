#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <iostream>
using namespace std;
void print(int);
void print(int A[4][2])
{

    system("cls");
    for (int j = 0; j < 4; j++)
    {
        for (int k = 0; k < 2; k++)
            cout << A[j][k] << ' ';
        cout << endl;
    }
}
void gotoxy(int, int);
void gotoxy(int _x, int _y)
{
    COORD c;
    c.X = _x, c.Y = _y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{
    int A[4][2] = {
        {1, 1},
        {2, 32},
        {1, 4},
        {1, 34}};

    while (1)
    {
        switch (getch())
        {
        case ',':
            int temp[1][2];
            --(A[0][1]); // decreasing the value according to the user's "Move"

            // Storing the whole [Last-element] in the [temp-variable]
            for (int j = 0; j < 2; j++)
                temp[0][j] = A[3][j];

            // now, shifiting the elements Forwards, till 2nd Element
            for (int i = 4; i >= 1; i--)

            case 'o':
                A[0][0], ++A[0][1];
            break;
        case 'a':
            --A[0][0], A[0][1];
            break;
        case 'e':
            ++A[0][0], ++A[0][1];
            break;
        }
        print(A);
    }
}
