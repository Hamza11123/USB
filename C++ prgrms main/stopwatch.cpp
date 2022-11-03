#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>

using namespace std;

int main(void)
{
    sleep(2);
    cout << " Hello World!";
}
// int main(void)
// {

//     int  setValue_ForMin=0, setValue_ForSec=0;

//     cout << "Press \"Enter\"...";
//     if (getch() == 13)
//     {
//         ////////////////////////// Entering Data Before STarting The main program /////////////////////
//         system("cls");
//         cout << "                                 Welcome To Hamza's Stop Watch! :)...";
//         cout<<endl<<endl<<"Enter No. For m: ";
//         cin >> setValue_ForMin;
//         cout << endl<< "Enter No. For s: ";
//         cin >> setValue_ForSec;
//         ////////////////////////// Entering Data Before STarting The main program /////////////////////

//         ////////////////////////////// main program,from where the Logic Starts ///////////////////////

//         for (int m = setValue_ForMin; m >= 0; --m)
//         { // OUTER LOOP,  Used To Apply Logic For "Minutes"

//             for (int s = setValue_ForSec; s >= 0; --s)
//             { // OUTER LOOP, USED  tO APPLY logic for "Seconds"

//                 ///////////////////////////////// Delay Block /////////////
//                 sleep(1);
//                 system("cls");
//                 ///////////////////////////////// Delay Block //////////////
//                 printf("%d:%d\n", m, s);
//             }
//         }
//         system("cls");
//         cout<<"Times Out!";
//     }

//     else {
//         cout << endl << "GOOD BYE! Have A Nice Day :) <3";
//     }
//     getch();
//     ////////////////////////////// main program,from where the Logic Starts ///////////////////////
// }
