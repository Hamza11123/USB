#include<stdio.h>
#include<conio.h>


long tatti(int);

long tatti(int n)
{
int s;
   if(n!=1){
   s=n+tatti(n-1);
   return s;
} 
else{
    return 1;}
}

main()
{
   int i;
  scanf("%d",&i);
  printf("the sum of %ld ",tatti(i));
}