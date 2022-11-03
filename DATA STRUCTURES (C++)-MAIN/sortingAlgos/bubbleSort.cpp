#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

// Total Number Of "Comparisons & Swaps" that is: 1+2+3+4+5+6+...(n-1)+n = (n(n-1)/2) [comps & Swaps] = O(n^2) -> [Time-Complexity]

// 1. time-complexity-> [O(n^2)]
// 2. stability -> [Yeah, It's Stable]
// 3. Adaptive -> [By-deffault] it isn't Addaptive, But V can make it Addaptive

int bubbleSortAddaptive(int A[], int size)
{
    bool isSorted = true;
    // Bubble Sorting Algo.

    // For Number of Passes
    for (int i = 0; i < size - 1; ++i) // This is  [Decreasing/OuterLoop] Used To Decrease The [InnerLoop]'s Life "Gradually"
    {
        // for comparisons in each pass..
        for (int j = 0; j < (size - 1) - i; ++j) // & this is the [Main-Loop], It'll [Control/Handle], [Swapping-Iteration],
        {
            if (A[j] > A[j + 1]) // We'll Swap if "Previous" is Greater-than its "Next"
            {
                // This Condition Will Always B False..then  the arrY IS "SORTED"!
                isSorted = false; // a way to make the algo [addaptive]

                // Now, Here is The Normal Swapping-Glass-Technique
                A[j] = A[j] + A[j + 1];
                A[j + 1] = A[j] - A[j + 1];
                A[j] = A[j] - A[j + 1];
            }
            if (isSorted) // "Achieving Adaptiveness!"
                return 1;
        }
    }
}

// auto Variable-Name = [capture-list] (arguments-likeNormalFunction) -> return-type{
// ...
// };

auto func = [](int n1, int n2) -> int
{
    return (n1 + n2);
};

// int main(void)
// {
//     int temp;
//     bool isSorted = true;
//     int A[] = {2, 34, 3, 78};

//     // Bubble Sorting Algo.

//     // For Number of Passes
//     for (int i = 0; i < 3; ++i) // This is  [Decreasing/OuterLoop] Used To Decrease The [InnerLoop]'s Life "Gradually"
//     {
//         // for comparisons in each pass..
//         for (int j = 0; j < (4 - i - 1); ++j) // & this is the [Main-Loop], It'll [Control/Handle], [Swapping-Iteration],
//         {
//             if (A[j] > A[j + 1]) // We'll Swap if "Previous" is Greater-than its "Next"
//             {
//                 // This Condition Will Always B False..then  the arrY IS "SORTED"!
//                 isSorted = false; // a way to make the algo [addaptive]

//                 // Now, Here is The Normal Swapping-Glass-Technique
//                 A[j] = A[j] + A[j + 1];
//                 A[j + 1] = A[j] - A[j + 1];
//                 A[j] = A[j] - A[j + 1];
//             }
//             if (isSorted) // "Achieving Adaptiveness!"
//                 break;
//         }
//        cout << '\n';
//     }

//     // Now Traversing...
//     for (int index = 0; index < 4; ++index)
//         cout << A[index] << '\n';
// }

int main(int argc, char const *argv[])
{
    // int A[] = {2, 5, 2, 33, 1, 0};
    // bubbleSortAddaptive(A, 6);
    // return 0;
}
