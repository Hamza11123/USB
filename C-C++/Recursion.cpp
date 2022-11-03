#include<iostream>
#include<stdio.h>
#include<stdlib.h>
void toh(int , char , char , char );


int main(void)
{

    toh(4, 'A', 'B', 'C'); 
}

    ////////////////////////////////// Recursive Solution Of Tower Hanoi  /////////////////////////////
         // 3          A        B         C   
         // 2          A        C         B
         // 1          A        B         C,  print A to C 
               
void toh(int n, char BEG, char AUX, char END){

    if(n>=1)
    {
        toh(n-1, BEG, END, AUX );   // Swapping B And C
        printf("%c to %c \n", BEG, END);
        toh(n-1, AUX, BEG, END);      // Swaping Three Of them 
    }
}