#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(void)
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (j < 3 - i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}