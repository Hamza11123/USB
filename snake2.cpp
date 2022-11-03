#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
// #include<unistd.h>
#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int _Height = 20, _Width = 50;

void gotoxy(int _x, int _y){
    COORD c;
    c.X = _x, c.Y = _y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int fruitX(){
    srand(time(NULL));
    return ((rand() % _Width - 1) + 1);
}
int fruitY(){
    srand(time(NULL));
    return ((rand() % _Height - 1) + 1);
}
void setUp(){
    
    // gotoxy(fruitX(), fruitY());
    // cout<<'*';
    bool gameOver = false;
    int snakePosX = _Width / 2, snakePosY = _Height / 2;
    


}

int main(void){
    char direction;
    

    // while (1)
    // {
    //     if(kbhit()){
    //         direction = getch();
    //     }
    //     system("cls");
    //     switch(direction){
    //         case ',':
    //             gotoxy(x, --y);
    //             break;
    //         case 'e':
    //             gotoxy(++x, y);
    //             break;
    //         case 'o':
    //             gotoxy(x, ++y);
    //             break;
    //         case 'a':
    //             gotoxy(--x, y);
    //             break;
    //         case ' ':
    //             exit(1);
    //     }
    //     cout<<"*";
    // }
    

    for (int boundaryX = 0; boundaryX <= _Height; boundaryX++)
    {
        for (int boundaryY = 0; boundaryY <= _Width; boundaryY++)
        {
            if(boundaryY == 0 || boundaryY == _Width || boundaryX == 0 || boundaryX == _Height) {
                cout<<'*';
            }
            else {
                cout<<' ';
            }
        }
        cout<<endl;
        
    }
    // setUp();
    
    
}