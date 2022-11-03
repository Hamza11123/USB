#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct ADT *create(int, int, struct ADT *);
void displayADT(struct ADT *);
struct ADT *getDataFromUser(struct ADT *);
void getTheDataFromUser(int *, int * = NULL, int * = NULL);

// CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC [Section: 1]  Stack By Using Classes In "C++"(Cpp)  CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC
class stak
{
    int top = -1, *pointerToPointMallocArray, sizeOfTheStack;

public: // Members Are Public We Can Use Them By Calling Them...
        // Constructor Used To Create An Stack
    stak(int sizeOfTheStackArray)
    {
        this->sizeOfTheStack = sizeOfTheStackArray;
        this->pointerToPointMallocArray = (int *)malloc(sizeof(int) * sizeOfTheStackArray);
    }
    /////////////////////////////////// Function To Push The Value In Stack //////////////////////////////////////
    int push(int getItemFrmUser_PushInTheStack)
    {
        if ((this->top) == (this->sizeOfTheStack) - 1) //  Stck Is Full
            return 0;
        else
        {
            --(this->top);
            (this->pointerToPointMallocArray)[this->top] = getItemFrmUser_PushInTheStack;
            return 1;
        }
    }
    /////////////////////////////////// Function To Pop The Values From The Stack //////////////////////////////////////
    int pop()
    {
        if (this->top == -1)
            return 0;
        else
        {
            this->pointerToPointMallocArray[this->top] = NULL;
            --(this->top);
            return 1;
        }
    }
};
// CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC Stack By Using Classes In "C++"(Cpp)  CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC

// SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS [Section: 2] ADT By Using Structures In "C" SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS

struct ADT
{
    int usedSize, totalSize, *pointing_Malloc_Array_Block;
};
/////////////////////////////////===== method to create an ADT ====////////////////////////////////////
struct ADT *create(int us, int ts, struct ADT *getReferenceOfStructADT)
{
    getReferenceOfStructADT->totalSize = ts;
    getReferenceOfStructADT->usedSize = us;
    getReferenceOfStructADT->pointing_Malloc_Array_Block = (int *)malloc(sizeof(int) * ts);
    return (getReferenceOfStructADT);
}

/////////////////////////////////======= Method To Display The data Of ADT =======///////////////////////////////
void displayADT(struct ADT *getReferenceOfStructADT)
{
    cout << "running \"dsiplayAdt\" function \n\n ";
    for (int i = 0; i < getReferenceOfStructADT->totalSize; i++)
        cout << "the value at " << i << " is " << (getReferenceOfStructADT->pointing_Malloc_Array_Block)[i] << endl;
}

/////////////////////////////////======== Method To Get Input To The Array ========///////////////////////////////
struct ADT *getDataFromUser(struct ADT *getReferenceOfStructADT)
{
    cout << "running \" getDataFromUser \" function \n\n";
    for (int i = 0; i < getReferenceOfStructADT->usedSize; i++)
        cin >> (getReferenceOfStructADT->pointing_Malloc_Array_Block)[i];
    return (getReferenceOfStructADT);
}

// // SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS ADT By Using Structures In "C" SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS

// Starting... Of Main Function..

int main(void)
{
    int A[3][3], B[3][3], C[3][3] = {0};
    // getTheDataFromUser(&A[0][0], NULL, NULL);   // function takes First block address as an argument and then, manipulate the data by using pointers* ;)
    // getTheDataFromUser(&B[0][0], NULL, NULL);

    // C[0][0] = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0]) + (A[0][2] * B[2][0]);
    // C[0][1] = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]) + (A[0][2] * B[2][1]);
    // C[0][2] = (A[0][0] * B[0][2]) + (A[0][1] * B[1][2]) + (A[0][2] * B[2][2]);

    // C[1][0] = (A[1][0] * B[0][0]) + (A[1][1] * B[1][0]) + (A[1][2] * B[2][0]);
    // C[1][1] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]) + (A[1][2] * B[2][1]);
    // C[1][2] = (A[1][0] * B[0][2]) + (A[1][1] * B[1][2]) + (A[1][2] * B[2][2]);   Poor Coding...

    // C[2][0] = (A[2][0] * B[0][0]) + (A[2][1] * B[1][0]) + (A[2][2] * B[2][0]);
    // C[2][1] = (A[2][0] * B[0][1]) + (A[2][1] * B[1][1]) + (A[2][2] * B[2][1]);
    // C[2][2] = (A[2][0] * B[0][2]) + (A[2][1] * B[1][2]) + (A[2][2] * B[2][2]);
    ////////////////////////////////////////////////////////////////////////////////////eueu//////////////
    // for (int i = 0; i < 3; i++)
    // {
    //     C[i][0] = (A[i][0] * B[0][0]) + (A[i][1] * B[1][0]) + (A[i][2] * B[2][0]);
    //     C[i][1] = (A[i][0] * B[0][1]) + (A[i][1] * B[1][1]) + (A[i][2] * B[2][1]);
    //     C[i][2] = (A[i][0] * B[0][2]) + (A[i][1] * B[1][2]) + (A[i][2] * B[2][2]);
    // }

    /////////////////////////////////// Supper Smart ////////////////////// Algorithm... /////////////////////////
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         for (int k = 0; k < 3; k++)
    //             C[i][j] += (A[i][k] * B[k][j]);
    //     }
    // }
    ///////////////////////////////// Supper Smart ////////////////////// Algorithm... /////////////////////////

    /////////////////////////////////// Smart ////////////////////// Algorithm... /////////////////////////
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //         C[i][j] = (A[i][0] * B[0][j]) + (A[i][1] * B[1][j]) + (A[i][2] * B[2][j]);
    // }
    /////////////////////////////////// Smart ////////////////////// Algorithm... /////////////////////////

    // for (int i = 0; i < 3; i++)  Printing the resultant Matrix!
    // {
    //     for (int j = 0; j < 3; j++)
    //         cout << "  " << C[i][j];
    //     cout << endl;
    // }

    while (1)
    {
        /* code */
        char p;
        p = getch();
        cout << (int)p - 48;
    }
}
void getTheDataFromUser(int *getReferenceOfTheMatrixArray1, int *getReferenceOfTheMatrixArray2, int *getReferenceOfTheMatrixArrayResult)
{
    if (*getReferenceOfTheMatrixArray2 == NULL || *getReferenceOfTheMatrixArrayResult == NULL)
    {
        for (int i = 0; i < 9; i++)
            cin >> *(getReferenceOfTheMatrixArray1 + i);
    }
}