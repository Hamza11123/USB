#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Book input(void);
void display(struct Book);
void ascen(int *pts);

struct Book
{
    int bookId;
    char bookTitle[30];
    float bookPrize;
} B1;

enum Month
{
    jun,  feb, march, april, may, june, july, august, septemper, oct, nov, december
};
void main(void)
{
    enum Month M2; 
    M2=march;

    printf("%d", march);

}

//-------------------------------------->
//-------------------------------------->

// Functions For Handling The Information Of A Particular Book:-

struct Book input(void) // Function For Putting The Value Into The Structure & Will Return The Data From It:
{
    struct Book B1; // Using A Data Type (Book) In which we declared some variables to store Its Unique Id,
                    // Tittle, And Price As well. So Declaring A variable (B1) of (book) type to handle These three prperties
                    // "Title, Id, Price"

    printf("Enter Book Id: "); //
    scanf("%d", &B1.bookId);   // Entering I.D of book(Integer Constants) in the member variable (bookId), Which exists in (B1) Variable
    fflush(stdin);             // using fflush function to "clean the buffer" from where the [scanf()] gets any kind of unit data.

    printf("Enter Book Title: ");
    gets(B1.bookTitle); //Entering Title(String Constant) of the book in bookTitle variable, which is in B1
    fflush(stdin);

    printf("Enter Its Price: ");
    scanf("%f", &B1.bookPrize); // Entering Price(float constant) of th book in bookPrize variable, which is also in B1
    return (B1);                // Returning the variable whose member variables is filled with information by using scanf so that's why we need to return it.
}

void display(struct Book bcatch) // Function To Display The Data Which Was Taken From User by using printf function just before that.
{
    printf("Your Book Title: %s\nIts Unique Id: %d\nIts Price: %f", bcatch.bookTitle, bcatch.bookId, bcatch.bookPrize);
}

//------------------------------------->
//------------------------------------->

void reverseString(char *getRefernc)
{
    char sW;
    int i, hld;

    hld = strlen(getRefernc);              // Holding The Lenght of string in hld(variable). 
    for (i = 0; i < (hld / 2); i++)        // looping from 0 to half of string's lenght, cuz swapping always occurs between two numbers
    {                                      // let's have an example, suppose an string, having 8 chars, & we'll swap two characters at a time or (one round) hence, it is looped, half of its lenght 
        sW = *(getRefernc + i);            // assingning the 1st char of string in sw(variable). 
        *(getRefernc + i) = *(getRefernc + (hld - i - 1));  // and then, assingning its 2nd last(array[n-1]) char in the place of 1st block(array[0]).
        *(getRefernc + (hld - i - 1)) = sW;
    }
}