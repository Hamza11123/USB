#include<stdio.h>
#include<stdlib.h>
#include<gotoxy.h>
int player_1x(int *, int, int *, int *);
int player_2o(int *, int, int *, int *);


void main()
{
////////////////////////////////////
    int i, a, trn, t=0;           // Variables For Temporary Use (During Programming) : 
    int A[9]={0,0,0,0,0}, _x, _y; // Variables For Permenantly Use :
////////////////////////////////////
    
    while(1)
    {
        scanf("%d", &trn);
        printf("\n\nyou entered %d\n\n\n\n\n ", player_2o(A, trn, &_x, &_y));
        for(a=0; a<=8; a++)
        {
            printf("%d ", A[a]);
        }
    }    
}


int player_1x(int *Arp, int turn_1, int *x, int *y)
{
    // Co-ordinates will be call that assigns the co-ordinates to variable "Through Call By Reference"

    if(*((--turn_1) + Arp) == 0 && (turn_1) > -1 && (turn_1) < 9 )
    {
        *(turn_1 + Arp) = 123;
        return(++turn_1); 
    }
    else
    {
        return 0;
    }
}

int player_2o(int *Arp, int turn_1, int *x, int *y)
{
    // Co-ordinates will be call that assigns the co-ordinates to variable "Through Call By Reference"
    
    if(*(--turn_1 + Arp) == 0 && (turn_1) > -1 && (turn_1) < 9 )
    {
        *(turn_1 + Arp) = 321;
        return(++turn_1); 
    }
    else
    {
        return 0;
    }
}




