#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int createRandomNumber(int);

int main(void)
{
    int user1[20], user2[20];
    printf("Player 1, Enter Your Name: ");
    gets(&user1[0]);
    printf("Player 2, Enter Your Name: ");
    gets(&user2[0]);
}

int createRandomNumber(int randomNumberLimit)
{
    srand(time(NULL));
    return (rand() % randomNumberLimit);
}