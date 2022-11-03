#include<stdio.h>
#include<windows.h>
#include<conio.h>
// calloc (numberOfVariables, sizeOfThoseVariables);
// malloc (sizeOfThoseVariables);
void main(void)
{
    int *p ;
    p = calloc();
    *p = 5;
    *(p +1) = 55;
    *(p +2) = 55;
    *(p +3) = 55;
    printf("%d\n", *p);
    printf("%d\n", sizeof *(p+1));
    printf("%d\n", sizeof *(p+2));
}