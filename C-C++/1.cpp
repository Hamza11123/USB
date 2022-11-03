#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
// #include <windows.h>

int sumFirstN(int);
using namespace std;
int convertToInt(char); // converts the Ascii Code of the (Num-Character) into a PURE Int!! By Subtracting 48 from the Ascii code
int convertCharToLongInteger(char *);
int convertCharToLongInt2(char *);

int main(void)
{

    // int doesLoopTerminates = 0;
    char getOperatorAddress;
    bool should_loop_terminate = false;
    long long int get_Returned_Number_For_Operation, Sum_Holder = 0;

    for (int i = 0; i <= 8; i++)
    {

        get_Returned_Number_For_Operation = convertCharToLongInt2(&getOperatorAddress);
        cout << getOperatorAddress;
        switch (getOperatorAddress)
        {
        case '+':

            cout << "+Case runs" << endl
                 << endl;
            Sum_Holder += get_Returned_Number_For_Operation;
            break;
        default:
            should_loop_terminate = true;
            break;
        }
        if (should_loop_terminate == true)
            break;
    }

    cout << endl
         << endl
         << "sum = " << Sum_Holder;

    // printf("returned valu = %ld \n\nassigned operator: %c", get_Returned_Number_For_Operation, getOperatorAddress);
}

int convertCharToLongInt2(char *getChar)
{
    int charToInt, S = 0;

    *getChar = getche();
    if (*getChar != 'e')
    {
        for (int i = 0; 1; i++)
        {
            charToInt = convertToInt(getche());

            if (i == 0)
                S = charToInt;
            else
            {
                if (0 <= (int)charToInt && (int)charToInt <= 9)
                    S = (S * 10) + (int)charToInt;
                else
                    break;
            }
        }

        return S;
    }
    return 0;
}

int convertCharToLongInteger(char *getChar)
{
    int charToInt, S = 0;

    for (int i = 0; 1; i++)
    {
        charToInt = convertToInt(getche());

        if (i == 0)
            S = charToInt;
        else
        {
            if (0 <= (int)charToInt && (int)charToInt <= 9)
                S = (S * 10) + (int)charToInt;
            else
                break;
        }
    }

    *getChar = (char)((int)charToInt + 48);
    return (S);
}

int convertToInt(char getChar)
{
    return ((int)getChar - 48);
}

////////////////////////// Function To Return The Sum Of First 10 Natural Numbers ////////////////////////////
int sumFirstN(int getNum)
{
    if (getNum == 0)
        return (0);
    else
        return (getNum + sumFirstN(getNum - 1));
}
////////////////////////// Function To Return The Sum Of First 10 Natural Numbers ////////////////////////////