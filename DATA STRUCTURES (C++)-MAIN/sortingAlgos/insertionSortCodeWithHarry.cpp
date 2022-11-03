#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void insertionSort(int *A, int n)
{
    int key, j; // 'key' is the Line that is Separatin' THe [Sorting & Non-Sorting] -> Array
                // 'J' Will Always Present (Right-Before) The'Key' "variable"
    // Loop for passes
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        // Loop for each pass

        // These Both Conditions "MUST" Satisfy To [Enter-THe-Loop]
        while (j >= 0 && A[j] > key) // this is the [Loop-Reversing] Loop
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }

    // From By[My - Side](I personally Prefer 'For' Loops)
    for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        for (; j >= 0; j--)
        {
            if (A[j] > key)
                A[j + 1] = A[j];
            else
                break;
        }
        A[j + 1] = key;
    }
}

int main()
{
    // -1   0    1   2   3   4   5
    //      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
    //      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

    //      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
    //      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

    //      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
    //      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
    //      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
    //      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
    //      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

    // Fast forwarding and 4th and 5th pass will give:
    //      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
    //      07, 12, 23, 54,| 65, 09 --> After the 4th pass

    //      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
    //      07, 09, 12, 23, 54, 65| --> After the 5th pass

    int A[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
    return 0;
}
