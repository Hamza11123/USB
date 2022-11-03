#include<stdio.h>
#include<conio.h>
#include<windows.h>
int player1turn(char*,char*);
void gotoxy(int,int);
int winchecker(char*,char*,char*);
void study(void);
void maine(void);
int player2turn(char*,char*);
void draw_graphics(int);
void gotoxy(int x,int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int player2turn(char *arp2, char *turn2)
{
    switch(*turn2)
    {
       case '1':
           *(arp2) = 'O';
           return 10;
           break;

       case '2':
        *(arp2+1) = 'O';
        return 11;
        break;

       case '3':
        *(arp2+2) = 'O';
        return 12;
        break;

       case '4':
           *(arp2 +3) = 'O';
           return 13;
           break;
       case '5':
        *(arp2+4) = 'O';
        return 14;
        break;

       case '6':
        *(arp2 + 5) = 'O';
        return 15;
        break;

       case '7':
        *(arp2 + 6) = 'O';
        return 16;
        break;

       case '8':
        *(arp2 + 7) = 'O';
        return 17;
        break;

       case '9':
        *(arp2+8) = 'O';
        return 18;
        break;

       default:
           return 0;
           printf("");


    }
}

main()
{
    char  ar[9],ch,pla,choose;
    int brk=0;
    int chk=0,turn_manager=1,lp = 0,pn[20],p2n[20];
    printf("                                 Welcome, Hamza's Tic Tac Toe Game!\n\nPress Any Key To Continue:");
    getch();
    system("cls");
    printf("Hey! If You Want To First Player: So, Press [y]\n");
    pla = getch();
    if(pla == 'y')
    {
        turn_manager=2;
    }
    else
    {
        turn_manager=1;
    }
    if(turn_manager == 2)
    {
        printf("\nWoah! First Player Kindly, Enter Your Name: ");
        gets(pn);
    }
    else
    {
        printf("\nSecond Player Kindly Enter Your Name: ");
        gets(p2n);
    }
    if(turn_manager == 1)
    {
       printf("\nFirst Player Kindly Enter Your Name: ");
       gets(pn);
    }
    else
    {
       printf("\nSecond Player Kindly Enter Your Name: ");
       gets(p2n);
    }

    system("cls");
    printf("Choose Your Sign: [X] Or [O]?");
    printf("\n\n%s Please, Enter Your Choice:    (Press X Or O)\n",pn);
    choose = getch();
    if(choose == 'x')
    {
         printf("\nThankyou! For Choose [X].");
    }
    if(choose == 'o')
    {
        printf("\nThankyou! For Choose [O]");
    }
    getch();


    system("cls");
    board();
    while(lp<9)
    {

            if(turn_manager&1)
            {
               gotoxy(0,15);                       //      start from 1,15
               printf("%s Player, Enter The Number:\n",p2n);
               ch = getch();
               if(choose == 'x')
               {
                   chk = player2turn(&ar,&ch);
               }
               if(choose == 'o')
               {
                   chk = player1turn(&ar,&ch);
               }
               draw_graphics(chk);
               brk = winchecker(&ar,&pn,&p2n);
               turn_manager++;
            }
           else
           {
               gotoxy(0,15);
                printf("%s Player,Enter The Number:\n",pn);
               ch = getch();
               if(choose == 'x')
               {
                   chk = player1turn(&ar,&ch);
               }
               if(choose == 'o')
               {
                   chk = player2turn(&ar,&ch);
               }
               draw_graphics(chk);
               brk = winchecker(&ar,&pn,&p2n);
//    check

               if(brk == 1)
               {
                   printf("\n\n\n\n\n\n\n\n\n\n");
                   getch();
                   exit(1);
               }

               turn_manager++;
           }
           lp++;
    }
    printf("\nThe Match Was Draw!\n\n");
    getch();

}






int winchecker(char *cp, char *p_1, char *p_2)
{
    int draw=0;

    if(*cp == 'X' && *(cp+1) == 'X' && *(cp+2) == 'X')
    {
        printf("\n---------------------------------------\n");
        printf("%s Is Won The Match!\n",p_1);
        printf("---------------------------------------\n");
        draw=1;
        return 1;
    }
    else
    {
        if(*cp == 'X' && *(cp+3) == 'X' && *(cp+6) == 'X')
        {
             printf("\n---------------------------------------\n");
             printf("%s Is Won The Match!\n",p_1);
             printf("---------------------------------------\n");
             draw=1;
             return 1;
        }
        else
        {
            if(*(cp+2) == 'X' && *(cp+5)=='X' && *(cp+8)=='X')
            {
                printf("\n---------------------------------------\n");
                printf("%s Is Won The Match!\n",p_1);
                printf("---------------------------------------\n");
                draw=1;
                return 1;
            }
            else
            {
                if(*(cp+6) == 'X' && *(cp+7) == 'X' && *(cp+8) == 'X')
                {

                    printf("\n---------------------------------------\n");
                    printf("%s Is Won The Match!\n",p_1);
                    printf("---------------------------------------\n");
                    draw=1;
                    return 1;
                }
                else
                {
                    if(*(cp+3) == 'X' && *(cp+4)== 'X' && *(cp+5) == 'X')
                    {
                       printf("\n---------------------------------------\n");
                       printf("%s Is Won The Match!\n",p_1);
                       printf("---------------------------------------\n");
                       draw=1;
                       return 1;
                    }
                    else
                    {
                        if(*(cp) == 'X'  && *(cp+4) == 'X' && *(cp+8) == 'X')
                        {


                             printf("\n---------------------------------------\n");
                             printf("%s Is Won The Match!\n",p_1);
                             printf("---------------------------------------\n");
                             draw=1;
                             return 1;
                        }
                        else
                        {
                            if(*(cp+1) == 'X' && *(cp+4) == 'X'  && *(cp+7) == 'X')
                            {
                                 printf("\n---------------------------------------\n");
                                 printf("%s Is Won The Match!\n",p_1);
                                 printf("---------------------------------------\n");
                                 draw=1;
                                 return 1;
                            }
                            else
                            {
                                if(*(cp+2)=='X'&& *(cp+4) == 'X' && *(cp+6)=='X')
                                {
                                     printf("\n---------------------------------------\n");
                                     printf("%s Is Won The Match!\n",p_1);
                                     printf("---------------------------------------\n");
                                     draw=1;
                                     return 1;
                                }
                                else                                                       //
                                {                                                          //
                                    if(*(cp+1)=='O' && *(cp+2) == 'O' && *(cp) == 'O')    //   ---
                                    {
                                          printf("\n%s Is Won The Match!\n",p_2);
                                          draw=1;
                                          return 1;
                                    }
                                    else                                                    //|
                                    {                                                       //|
                                        if(*(cp+6) == 'O' && *(cp+3) == 'O' && *cp == 'O')  //|
                                        {
                                            printf("\n%s Is Won The Match!\n",p_2);
                                            draw=1;
                                            return 1;
                                        }
                                        else
                                        {                                                           // |
                                            if(*(cp+6) == 'O' && *(cp+4) == 'O' && *(cp+2) == 'O')  //  |
                                            {                                                       //   |
                                                printf("\n%s Is Won The Match!\n",p_2);
                                                draw=1;
                                                return 1;
                                            }
                                            else
                                            {
                                                if(*(cp) == 'O' && *(cp+4)=='O' && *(cp+8) == 'O')  //   |
                                                {                                                   //  |
                                                    printf("\n%s Is Won The Match!\n",p_2);         // |
                                                    draw=1;
                                                    return 1;
                                                }
                                                else
                                                {                                                           //
                                                    if(*(cp+5) == 'O' && *(cp+4) == 'O' && *(cp+3) == 'O')  // ---
                                                    {                                                       //
                                                        printf("\n%s Is Won The Match!\n",p_2);
                                                        draw=1;
                                                        return 1;
                                                    }
                                                    else
                                                    {
                                                        if(*(cp+6)== 'O' && *(cp+7) == 'O' && *(cp+8) == 'O')  // ---
                                                        {                                                      //
                                                            printf("\n%s Is Won The Match!\n",p_2);            //
                                                            draw=1;
                                                            return 1;
                                                        }
                                                        else
                                                        {                                                          // |
                                                            if(*(cp+7) == 'O' && *(cp+4) == 'O' && *(cp+1) == 'O')
                                                            {                                                      // |
                                                                printf("\n%s Is Won The Match!\n",p_2);
                                                                draw=1;           // |
                                                                return 1;
                                                            }
                                                            else
                                                            {
                                                                if(*(cp+8) == 'O' && *(cp+5) == 'O' && *(cp+2) == 'O') //  |
                                                                {                                                      //  |
                                                                    printf("\n%s Is Won The Match!\n",p_2);
                                                                    draw=1;          //  |
                                                                    return 1;
                                                                }
                                                                else
                                                                {
                                                                        return 0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

        }
    }
}





void draw_graphics(int chk_)
{
    if(chk_ == 1)
    {
        gotoxy(13,11);
        printf("X");
        printf("\n\n\n\n\n");
    }
    else
    {
        if(chk_ == 2)
        {
            gotoxy(22,11);
            printf("X");
            printf("\n\n\n\n\n");
        }
        else
        {
            if(chk_ == 3)
            {
                gotoxy(32,11);
                printf("X");
                printf("\n\n\n\n\n");
            }
            else
            {
                if(chk_ == 4)
                {
                    gotoxy(13,6);
                    printf("X");
                    printf("\n\n\n\n\n\n\n\n\n\n");
                }
                else
                {
                    if(chk_ == 5)
                    {
                        gotoxy(22,6);
                        printf("X");
                        printf("\n\n\n\n\n\n\n\n\n\n");
                    }
                    else
                    {
                        if(chk_  == 6)
                        {
                            gotoxy(32,6);
                            printf("X");
                            printf("\n\n\n\n\n\n\n\n\n\n");
                        }
                        else
                        {
                            if(chk_ == 7)
                            {
                                gotoxy(13,1);
                                printf("X");
                                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                            }
                            else
                            {
                                if(chk_ == 8)
                                {
                                    gotoxy(22,1);
                                    printf("X");
                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                }
                                else
                                {
                                    if(chk_ == 9)
                                    {
                                        gotoxy(32,1);
                                        printf("X");
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                    }
                                    else
                                    {
                                        if(chk_ == 10)
                                        {
                                            gotoxy(13,11);
                                            printf("O");
                                            printf("\n\n\n\n\n");
                                        }
                                        else
                                        {
                                            if(chk_ == 11)
                                            {
                                                gotoxy(22,11);
                                                printf("O");
                                                printf("\n\n\n\n\n");
                                            }
                                            else
                                            {
                                                if(chk_ == 12)
                                                {
                                                    gotoxy(32,11);
                                                    printf("O");
                                                    printf("\n\n\n\n\n");
                                                }
                                                else
                                                {
                                                    if(chk_ == 13)
                                                    {
                                                        gotoxy(13,6);
                                                        printf("O");
                                                        printf("\n\n\n\n\n\n\n\n\n\n");
                                                    }
                                                    else
                                                    {
                                                        if(chk_ == 14)
                                                        {
                                                            gotoxy(22,6);
                                                            printf("O");
                                                            printf("\n\n\n\n\n\n\n\n\n\n");
                                                        }
                                                        else
                                                        {
                                                            if(chk_ == 15)
                                                            {
                                                                gotoxy(32,6);
                                                                printf("O");
                                                                printf("\n\n\n\n\n\n\n\n\n\n");
                                                            }
                                                            else
                                                            {
                                                                if(chk_ == 16)
                                                                {
                                                                    gotoxy(13,1);
                                                                    printf("O");
                                                                    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                                                }
                                                                else
                                                                {
                                                                    if(chk_ == 17)
                                                                    {
                                                                        gotoxy(22,1);
                                                                        printf("O");
                                                                        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                                                    }
                                                                    else
                                                                    {
                                                                        if(chk_ == 18)
                                                                        {
                                                                            gotoxy(32,1);
                                                                            printf("O");
                                                                            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                                                                        }
                                                                        else
                                                                        {
                                                                            if(chk_ == 0)
                                                                            {
                                                                                printf("\n\nINVALID CHOICE!,\n            Sorry! There Is A Problem! (Game Is Crashed) Try To Restart It:");
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}


int player1turn(char *arp, char *turn)
{
    switch(*turn)
    {
        case '1':
            *(arp) = 'X';
            return 1;
            break;

        case '2':
            *(arp+1) = 'X';
            return 2;
            break;
        case '3':
            *(arp+2) = 'X';
            return 3;
            break;
        case '4':
            *(arp+3) = 'X';
            return 4;
            break;

        case '5':
            *(arp+4) = 'X';
            return 5;
            break;
        case '6':
            *(arp+5) = 'X';
            return 6;
            break;
        case '7':
            *(arp + 6) = 'X';
            return 7;
            break;
        case '8':
            *(arp+7) = 'X';
            return 8;
            break;
        case '9':
            *(arp+8 )= 'X';
            return 9;
            break;
        default:
            return 0;
            printf("");
    }
}
void board(void)
{

    printf("                  |       |          \n");
    printf("             7    |   8   |     9     \n");  //  13,1   // 22,1  // 32,1
    printf("                  |       |           \n");
    printf("                  |       |           \n");
    printf("        ----------------------------\n");
    printf("                  |       |           \n");
    printf("             4    |   5   |     6     \n");  //  13,6  //  22,6, // 32,6
    printf("                  |       |           \n");
    printf("        ----------------------------\n");
    printf("                  |       |           \n");
    printf("                  |       |           \n");
    printf("             1    |   2   |     3     \n");  // 13,11   22,11   32,11
    printf("                  |       |           \n");
}
