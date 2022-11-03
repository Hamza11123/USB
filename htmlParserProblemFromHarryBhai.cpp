#include <stdio.h>
#include <conio.h>
#include <string>
#include <iostream>
#include <string.h>
using namespace std;
void deletElem(int, char *);
void deletEleminyou(int, int, char *);
// Problem: HTML  PArser

/////////////////////////// Parser //////////////////////
void deletElem(char *Arr)
{
    for (int index = 0; index < strlen(Arr); index++)
    {
        if (*(Arr + index) == '<')
        {
            // deletEleminyou(index, index, Arr);
            for (int i = index; i < strlen(Arr); i++)
            {
                if (*(Arr + i) == '>')
                {
                    deletEleminyou(index, i, Arr);
                    break;
                }
            }
        }
        else
        {
            if (*(Arr + index) == ' ' && *(Arr + index + 1) == ' ')
                deletEleminyou(index, index + 2, Arr);
        }
    }
}
/////////////////////////// Parser //////////////////////

/////////////////////// Multiple Element Deletion /////////////////
void deletEleminyou(int initialInd, int finalInd, char *Arr)
{
    for (int index = finalInd; index >= initialInd; --index)
    {
        for (int index2 = index; index2 < strlen(Arr); index2++)
            *(Arr + index2) = *(Arr + index2 + 1);
    }
}
/////////////////////// Multiple Element Deletion /////////////////

int main(int argc, char const *argv[])
{
    char A[] = {"<body>     hamza             </body>"};

    // deletEleminyou(0, 3, A);

        deletElem(A);
    cout << A;

    return 0;
}

/*------------ Problem Solved! ------------ */
