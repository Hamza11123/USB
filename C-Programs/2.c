#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,s=0,sum=0,c;
    char ch;
    printf("Enter A No: ");
    scanf("%d",&a);
    printf("\n\n");
    printf("The Reverse OF The Number: ");
    while(a!=0)
    {
        b = a%10;
        c = b;
        sum = sum+c;
        printf("%d",c);
        a = a/10;
        s++;
    }
    printf("\nThe Length Of The Number: %d", s);
    printf("\nThe Sum Of The Digits: %d", sum);
    getch();
}