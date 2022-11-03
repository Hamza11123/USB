#include <iostream>
#include <conio.h>
#include <stdio.h>
void trianglesNto1toN(void);
void rectangle(int);
void numberTriangle(void);
void triangle(int);
void CountingfronNto1toN(int);
void rohumbus(void);
using namespace std;

int main(void)
{
    rohumbus();
}

void trianglesNto1toN(void)
{
    for (int k = 1; k <= 9; k++)
    {
        for (int j = 1; j <= 9 - k; j++)
            cout << "  ";
        CountingfronNto1toN(k);
        cout << endl;
    }
}
///////////////////////////////////////// Counting From N to 1 and 1 to N /////////////////////////////////////
void CountingfronNto1toN(int n)
{
    for (int i = n; i > 1; i--) //n, n-1, n-2, n-3,...1, 2, 3,...n
        cout << i << " ";
    for (int i = 1; i <= n; i++)
        cout << i << " ";
}
/////////////////////////////////// Numbers Triangle ///////////////////////////////////////////
void numberTriangle(void)
{
    for (int i = 1; i <= 8; i++)
    {
        for (int k = 0; k <= 9 - i; k++)
            cout << i;
        for (int j = 1; j <= i; j++)
            cout << j << " ";
        cout << endl;
    }
}

/////////////////////////////////// Numbers Triangles ////////////////////////////////////////////

/////////////////////////////////// Rohumbs Pattern ////////////////////////////////////////////////
void rohumbus()
{

    for (int i = 0; i <= 8; i++)
    {
        for (int k = 0; k <= 8 - i; k++)
            cout << " ";
        for (int j = 0; j <= 8; j++)
            cout << "*";
        cout << endl;
    }
}
/////////////////////////////////// Rohumbs Pattern ////////////////////////////////////////////////

////////////////////////////// Basic Rectangle/Square Pattern With "For" Loops ////////////////////////////
void rectangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Basic Rectangle/Square Pattern With "For" Loops <<<<<<<<<<<<<<<<<<<<<<<<<<<<<

void triangle(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++) // REMEMBER: We Use n-i To REVERSE A LOOP :)
        {                            // IT WILL RUN LIKE: 8 ----> 0  instead of 0 ----> 8 ... Alright!
            if (j <= n - i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
// void triangle(int n)
// {
//     for(int i=0; i<=n; i++)
//     {
//         for(int j=0; j <= i; j++)
//             cout<<"*";
//         cout<<endl;
//     }
// }