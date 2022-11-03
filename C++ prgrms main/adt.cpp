#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct ADT
{

private:
    int *arrayPointer, sizeOfArray;

public:
    ADT(int sizeOfTheArr)
    {
        this->sizeOfArray = sizeOfTheArr;
        this->arrayPointer = (int *)malloc(sizeof((this->sizeOfArray)) * 4);

        // inserting the data in the Array
        *(this->arrayPointer) = 9;
        *(this->arrayPointer + 1) = 345;
        *(this->arrayPointer + 2) = 93;
    }

    void getADT(int **pointer) // It'll Get The Address Of AnOther Pointer Variable
    {
        *pointer = this->arrayPointer;
    }
};

int main(void)
{
    int *ArrayP;
    ADT p(12);
    p.getADT(&ArrayP);

    for (int i = 0; i <= 3; i++)
    {
        printf("%d  ", *(ArrayP + i));
    }
}