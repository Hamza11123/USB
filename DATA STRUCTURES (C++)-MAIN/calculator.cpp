#include <stdio.h>
#include <conio.h>
#include <iostream>  // C++
using namespace std; // C++

int main(void)
{
    int n1;
    int n2;
    char choice;
    fflush(stdin);
    cin >> n1;
    cin >> choice;
    cin >> n2;
    switch (choice)
    {
    case '*':
        printf("\n\n%d * %d = %d", n1, n2, n1 * n2);
        break;
    case '+':
        printf("\n\n%d + %d = %d", n1, n2, n1 + n2);
        break;
    case '-':
        printf("\n\n%d - %d = %d", n1, n2, n1 - n2);
        break;
    case '/':
        printf("\n\n%d / %d = %d", n1, n2, n1 / n2);
        break;

    default:
        printf("\n\nWrong!");
        break;
    }
    return 0;
}