#include <stdio.h>
#include <iostream>
#include <conio.h>

/*------------- Inserting In THe Sorted Array (By-Hamza) -------------*/

using namespace std;

// Array Traversal
void arrayTraversal(int *Arr, int sizeOf)
{
    for (int i = 0; i < sizeOf; i++)
        cout << *(Arr + i) << endl;
}

int main(void)
{
    int item = 23;
    // Initializing The Array!
    //           0  1  2  3  4   5   6
    int A[10] = {2, 3, 5, 6, 8, 19, 77};

    // Geting Size Of Given Array..
    int size = 7; // this is the problem i was facing alot!! D:

    // [Reverse-loop]..!
    for (int ind = size - 1; ind >= 0; ind--)
    {

        // if the "element" is [Greater-than] the [ith-Index]...
        if (A[ind] > item)
        {
            cout << " Loop at: " << ind << endl;
            A[ind + 1] = A[ind];
        }
        else
        {
            A[ind + 1] = item;
            cout << " Loop terminates at: " << ind << endl;
            break;
        }
    }

    // Re-Initialization of The 'size' [variable];
    size = sizeof(A) / sizeof(int);
    for (int i = 0; i < size; i++)
        cout << A[i] << endl;
}
/*------------- Inserting In THe Sorted Array (By-Hamza) -------------*/