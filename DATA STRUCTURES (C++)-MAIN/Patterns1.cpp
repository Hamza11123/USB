#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
void RectangleStar_Pattern(void);
void RightAngleTriangle_Pattern(void);
void RightAngleTriangle_Pattern2(void);
void GeneralTriangle_Pattern(void);

void Practice1(void);
void Practice2(void);
/*=================================== Main-Patterns ===================================*/

/*---------- Print Simple Rectangle-Star-Pattern -----------*/
/* * *
 * * */
void RectangleStar_Pattern()
{
    for (int no_of_rows = 1; no_of_rows <= 8; no_of_rows++) // Rows
    {
        for (int no_of_columns = 1; no_of_columns <= 3; no_of_columns++) // Columns
            cout << " * ";
        cout << endl;
    }
}

/*------ Print Simple Right-Angled-Triangle-Star-Pattern -------*/
/* 
 * *
 * * */
void RightAngleTriangle_Pattern()
{
    for (int no_of_rows = 0; no_of_rows <= 8; no_of_rows++) // Rows
    {
        for (int no_of_columns = 1; no_of_columns <= no_of_rows; no_of_columns++) // Columns
            cout << " * ";
        cout << endl;
    }
}

/*------ Print Simple Right-Angled-Triangle-Star-Pattern -----------*/
/* * *
 * *
 */
void RightAngleTriangle_Pattern2()
{
    for (int no_of_rows = 8; no_of_rows >= 1; no_of_rows--)
    {
        for (int no_of_columns = 1; no_of_columns <= no_of_rows; no_of_columns++)
            cout << " * ";
        cout << endl;
    }
}

/*------------------- Can Print All-Possible-Triangles (On-Manipulating) ------------------------*/
void GeneralTriangle_Pattern()
{
    for (int no_of_rows = 1; no_of_rows <= 8; no_of_rows++)
    {
        for (int no_of_columns = 1; no_of_columns <= 8; no_of_columns++)
        {
            if (no_of_columns <= (8 - no_of_rows)) // This Is The Middle Condition Of 2nd-Loop Use (if/Else)-functionality,
                                                   // we could [EVEN] put the condition in the 2nd loop, but we couldn't be able to use "else"... that's The Main Reason! :}

                if (no_of_columns <= (no_of_rows)) // We Can Also Use To "Reverse-The-Direction-Of-Flow-OF-LOOP" And (Triangle Will Also Reversed)::
                    cout << "*";
                else
                    cout << " ";
        }
        cout << endl;
    }
}

/* =================================== Main-Patterns ===================================*/

/*============================= EXTRA ============================*/
// Half
void Practice1()
{
    for (int rows = 1; rows <= 8; rows++)
    {
        for (int columns = 1; columns <= rows; columns++)
            cout << rows;
        cout << endl;
    }
}

void Practice2()
{
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            if (j <= i)
                cout << "*";
            cout << " ";
        }
        cout << endl;
    }
}
/*============================= EXTRA ============================*/
int main(void)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (j <= i)
                cout << "   ";
            else
                cout << " * ";
        }
        cout << endl;
    }
}