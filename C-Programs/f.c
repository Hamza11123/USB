#include<stdio.h>
#include<conio.h>
long fab(int);
main()
{
    int cl,i;
    printf("Enter The Number To Print Fabinocci Series:");
    scanf("%d",&cl);
    //printf("The %dth Term Is %d",cl,fab(cl));
    for(i=1;i<=cl;i++)
    {
        printf("\n");
        
        if(i == 1)
        {
            printf("%dst Term: ",1);
        }
        else
        {
            if(i == 2)
            {
                 printf("%dnd Term: ",2);
            }
            else
            {
                 if(i == 3)
                 {
                      printf("%drd Term: ",3);
                 }
                 else
                 {
                      printf("%dth Term: ", i);
                 }
                 
            } 
        }
        
        
        
        
        /////////////////////
        
        printf("%ld  ",fab(i));
    }
    getch();
}


long fab(int N)
{
    if(N==1 || N==2)
    {
        return 1;
    }
    else
    {
        return (fab(N-1)+fab(N-2));
    }
}