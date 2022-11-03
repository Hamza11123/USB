#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main(void)
{
    int A[] = {1, 3, 5, 78, 448};
    int length = (sizeof(A) / sizeof(int));

    int low = 0;
    int high = length - 1;
    int mid;

    // Finding 78;
    int element = 3;

    // // Main Part: "Basic Algo Of Binary Tree"
    // while (low <= high)
    // {
    //     mid = (high + low) / 2;
    //     if (A[mid] == element)
    //     {
    //         cout << "Found! at " << mid;
    //         break;
    //     }

    //     else if (A[mid] < element)
    //         low = mid + 1;
    //     else if (A[mid] > element)
    //         high = mid - 1;
    // }
    // cout << "Not Found!";
    // // Main Part: "Basic Algo Of Binary Tree"
}

int u(int lengthOfTheArr, char Arr[], int element) // Should be sorted In Ascending Order
{
    int low = 0;
    int high = lengthOfTheArr - 1;
    int mid;

    while (low <= high)
    {
        mid = (high + low) / 2;
        if (Arr[mid] == element)
            return (mid);

        else if (Arr[mid] < element)
            low = mid + 1;
        else if (Arr[mid] > element)
            high = mid - 1;
    }
    return -1;
}
