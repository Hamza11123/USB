#include<stdio.h>
#include<conio.h>
int GCD(int, int);
int lowest(int, int);
int greatest(int, int);
main()
{
    int i,j;
    scanf("%d%d", &i, &j);
    printf("%d Is Greatest Common Number ", GCD(i, j));
}


int GCD(int a, int b)
{
    int hld;
    int g,l;
    g = greatest(a,b);
    l = lowest(a,b);
    hld = g % l;
    if(hld == 0)
    {
        return l;
    }
    if(a<b)
    {
        GCD(hld, b);
    }
    if(a>b)
    {
        GCD(a, hld);
    }
}
int lowest(int x2, int y2)
{
    if(x2<y2)
    {
        return y2;
    }
}
int greatest(int x, int y)
{
    if(x > y)
    {
        return x;
    }
}