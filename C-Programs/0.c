#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main()
{
    int a,*b, **cc;
    b = calloc(4, 4);
    *b = 8;
    *(b+1) = 9;
    *(b+2) = 4;
    *(b+3) = 6;
    cc = &b;
    printf("\n\n%d %d %d %d ", *(cc),**(cc+1),**(cc+2),**(cc+3));

}