#include <iostream>

using namespace std;

int primeNumberChecker(int);
void get(int*, int*);

int main(void)
{   
    int getNum1, getNum2;
    int smallerNum;

    cin >> getNum1 >> getNum2;
    get(&getNum1, &getNum2);
    for(int i = getNum1; i < getNum2 ; i++)
    {
        cout<<" "<<primeNumberChecker(i);

    }
    

   
}

void get(int *n, int *n1)
{
    if(*n < *n1)
    {
        
    }
    else{
        
        int temp;
        temp = *n;
        *n = *n1;
        *n1 = temp;
    }
}


 



    ////////////////// Function That Returns '1' When The Number Is Prime //////////////////////
    int primeNumberChecker(int getNumberToCheckPrimeOrNot)
    {
        int i;
        for (i = 2; i < getNumberToCheckPrimeOrNot; i++)
        {
            if ((getNumberToCheckPrimeOrNot % i) == 0)
                break;
        }

        if (i == getNumberToCheckPrimeOrNot)
            return (getNumberToCheckPrimeOrNot);
        else{
            return 0;
        }
    }
    ////////////////// Function That Returns '1' When The Number Is Prime //////////////////////