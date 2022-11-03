#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int linearSearch(int, int, int);
int binarySearch(int, int, int);

int linearSearch(int Arr[], int sizeOfArr, int element)
{
    for (int i = 0; i < sizeOfArr; i++)
    {
        if (Arr[i] == element)
            return i;
    }
    return -1;
}

int binarySearch(int Arr[], int sizeOfArr, int element) // For binarySearch, We Definitely Need "SORTED ARRAY"(Mandantory)!!
{
    int low = 0;              // Lowest Index Of the Array is Always [0]
    int high = sizeOfArr - 1; // Highest Index of the Array is always [sizeOfArr - 1]
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2; // Greatest Integer Of Mid Of the Array;
        if (Arr[mid] == element)
            return mid;
        else if (Arr[mid] > element)
            high = mid - 1;
        else
            low = mid + 1;
    }
}

int main(void)
{
    // int Array[] = {23, 32, 9, 83, 332, 11, 3, 34};
    // int sizeOfArr = sizeof(Array) / sizeof(int);
    // cout << "The Element at " << linearSearch(Array, sizeOfArr, 11);

    int Array[] = {1, 3, 32, 323, 788, 888, 889}; // Array must be sorted For Binary-Search-Traversal
    int sizeOfArr = sizeof(Array) / sizeof(int);
    cout << "The Element at " << binarySearch(Array, sizeOfArr, 323);
}
