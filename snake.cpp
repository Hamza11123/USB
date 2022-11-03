#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<unistd.h>
#include<condition_variable>
using namespace std;

void gotoxy(int _x, int _y){
    COORD c;
    c.X = _x, c.Y = _y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main(void){
    char ch, pen = '*';
    int x=0, y=0;
    system("cls");
    while (1)
    {
        
        ch = getch();
        switch (ch)
        {
            case 27:
                exit(1);
                break;
            case ',':
                --y;
                break;
            case 'e':
                ++x;
                break;
            case 'o':
                ++y;
                break;
            case 'a':
                --x;
                break;
            case '1':
                pen = getch();
                break;
            case '-':
                pen = ' ';
        }
        gotoxy(x, y);
        cout<<pen;
    }
    
    
    
    
    
}