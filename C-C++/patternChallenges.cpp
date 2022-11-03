#include <iostream>
#include <stdio.h>
#include <conio.h>
void p(int, int);
using namespace std;
int main(void)
{
    int cd;

    for (int i = 0; i <= 100; i += cd)
    {
        cout << i << " " << endl;
        p(i, cd);
        cd++;
    }
}

void p(int start_i, int numberOfTimesCD)
{

    for (int i = 1; i <= numberOfTimesCD; i++)
    {

        cout << start_i + i << " ";
    }
}