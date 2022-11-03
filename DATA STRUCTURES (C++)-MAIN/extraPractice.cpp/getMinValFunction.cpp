#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

/*--------------- Important Problem, Simple Solution!! :) -----------------*/
int getMin(int[], int);

// {2, 44, -2, 88}
int getMin(int Numbers[], int sizeOfArr)
{
    int min = Numbers[0];
    for (int i = 1; i < sizeOfArr; i++)
    {
        if (Numbers[i] < min)
            // It'll Assign Lowest Value From The Min, And Then It'll Go Over & Over Again!!
            min = Numbers[i]; // Real Logic STarts FRom Here!!
    }
    return min;
}

int getMax(int Numbers[], int sizeOfArr)
{
    int max = Numbers[0];
    for (int i = 1; i < sizeOfArr; i++)
    {
        // If the Condition true, the "min" Value Will Be More Higher Than Before!!
        if (Numbers[i] > max)
            max = Numbers[i];
    }
    return max;
}

int main(void)
{
    int Arr[5] = {2, 44, -2, 88};
    cout << getMin(Arr, 5);

    /*-------------------- Dynamic Memory Allocation In C++ not Like 'C' malloc(), free() functions --------------------*/

    // Creating The Arrays Dynamicall With C++ Style, Using The 'new' or 'delete' Keywordsi
    int size;
    int *myArray = new int[size];

    // Releasing The Memory... Or Deleting THe "Dynamic Array"
    delete[] myArray;
    myArray = NULL;
}