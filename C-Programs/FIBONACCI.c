#include<stdio.h>
#include<conio.h>
int fib(int);
main()
{
    int i,b,r=0;
    printf("Enter A Number To Print Fabinocii Series: ");
    scanf("%d",&i);
    for(b=1; b<=i; b++)
    {
        printf("%d ", fib(b));
    }
}

int fib(int n)
{
    int hold;
    if(n==1 || n==2)
    {
        return 1;
    }
    hold = fib(n-1)+fib(n-2);
    return hold;
}