#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
void rock_paper_scissor_game(void);
int random_num(void);
void sum_of_the_series(void);
void p2_turn(void);
void p1_turn(void);
void gotoxy(int ,int);
void comparing_the_user_and_computer_inputs(int,int,char *,char *,int *,int *);
void player1_turn(char*,int*);
void player2_turn(char *,int*);
void game_graphics_handler(char * );

void game_graphics_5x(int,int);
void game_graphics_7x(int,int);
void game_graphics_4x(int,int);
void game_graphics_6x(int,int);
void game_graphics_3x(int,int);
void game_graphics_2x(int,int);
void game_graphics_1x(int,int);
void game_graphics_8x(int,int);
void game_graphics_9x(int ,int);


void game_graphics_1o(int ,int);
void game_graphics_4o(int ,int);
void game_graphics_3o(int, int);
void game_graphics_2o(int,int);
void game_graphics_5o(int,int);
void game_graphics_6o(int,int );
void game_graphics_8o(int,int);
void game_graphics_7o(int,int);
void game_graphics_9o(int,int);

void game_graphics_main(void);


void gotoxy(int x,int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void game_graphics_main()
{
        printf("\n\n\n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                      =================================================\n");
    printf("                      =================================================\n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                      =================================================\n");
    printf("                      =================================================\n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");
    printf("                                      II             II                \n");

}


/////////////////////////////////////////

void game_graphics_9o(int gx,int gy)
{
    gotoxy(gx,gy);   // gx = 59 , gy=3
    printf("  __\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |  |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|    |\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |__|\n");

}


/////////////////////////////////    function of print 8o  ////////////////////////////////////

void game_graphics_8o(int gx,int gy)
{
    gotoxy(gx,gy);    // gx = 43 , gy = 3
    printf("  __\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |  |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|    |\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |__|\n");
}


/////////////////////////////////   function of print 7o  ////////////////////////////////

void game_graphics_7o(int gx,int gy)
{
    gotoxy(gx,gy);    // gx = 26 , gy = 3
    printf("  __\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |  |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|    |\n");
    gy++;
    gotoxy(gx, gy);
    printf(" |__|\n");

}

//////////////////////////////////   function of print 6o   //////////////////////////////////////

void game_graphics_6o(int gx,int gy)
{
    gotoxy(gx,gy);   // gx = 59, gy = 11
    printf("  __\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |  |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|    |\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |__|\n");
    printf("\n\n\n\n\n\n\n\n\n");
}

/////////////////////////////////////   function of print 5o   ////////////////////////////////////////

void game_graphics_5o(int gx,int gy)
{
    gotoxy(gx,gy);    // gx = 44 , gy = 11
    printf("  __\n");
    gotoxy(gx,gy);
    printf(" |  |\n");
    gotoxy(gx,gy);
    printf("|    |\n");
    gotoxy(gx,gy);
    printf(" |__|\n");
    printf("\n\n\n\n\n\n\n\n\n");
}


////////////////////////////////////////   function of game graphics 4o  ////////////////////////////////////////

void game_graphics_4o(int gx,int gy)
{
    gotoxy(gx,gy);   //  gx = 26 , gy = 11
    printf("  __\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |  |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|    |\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |__|\n");
    printf("\n\n\n\n\n\n\n\n\n");
}

////////////////////////////////////   function of graphics 3o   ////////////////////////////////

void game_graphics_3o(int gx, int gy)
{
    gotoxy(gx,gy);   //  x = 59 , y = 3
    printf("  __\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |  |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|    |\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |__|\n");
}


/////////////////////////////////////   function of graphic 2o   /////////////////////////////////////

void game_graphics_2o(int gx , int gy)
{
    gotoxy(gx,gy);  // x = 44, y = 3
    printf("  __ \n");
    gy++;
    gotoxy(gx,gy);
    printf(" |  |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|    |\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |__|\n");
}


void game_graphics_1o(int gx , int gy)
{
    gotoxy(gx,gy);  //   x = 26, y = 3
    printf("  ___\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|     |\n");
    gy++;
    gotoxy(gx,gy);
    printf(" |___|\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
}



/////////// ////////////////////////   function to print 8x   //////////////////////////////////

void game_graphics_8x(int gx,int gy)
{
    gotoxy(gx,gy);    //      x = 42, y = 3
    printf("|       |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("   | |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|       |\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}



/////////////////////////////////////   function to print 9x   /////////////////////////////////////////

void game_graphics_9x(int gx,int gy)
{
    gotoxy(gx,gy);  // x = 59 , y = 3
    printf("|       |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("   | |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|       |\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}



////////////////////////////////////////    function to print 1x   ////////////////////////////////////////


void game_graphics_1x(int gx, int gy)
{
    gotoxy(gx,gy);   //  x = 24, y = 18
    printf("|       |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("   | |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|       |\n");
    printf("\n\n\n\n\n\n\n");
}


///////////////////////////////////  function to print 2x   ////////////////////////////////////////

void game_graphics_2x(int gx,int gy)
{
    gotoxy(gx,gy);  // x = 42, y = 18
    printf("|       |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("   | |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|       |\n");
    printf("\n\n\n\n\n\n\n");
}



///////////////////////////////////////   function to print 3x   ////////////////////////////////////////////


void game_graphics_3x(int gx,int gy)
{
    gotoxy(gx,gy); // x = 59, y = 18
    printf("|       |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("   | |\n");
    gy++;
    gotoxy(gx , gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|       |\n");
    printf("\n\n\n\n\n\n\n");
}

////////////////////////////////////////  function to print 4x  ////////////////////////////////////////////

void game_graphics_4x(int gx,int gy)
{
    gotoxy(gx,gy);   //  24, 11
    printf("|       |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("   | |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|       |\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

///////////////////////////////////////    function of printing graphics of the game  5x   ////////////////////////////////////////


void  game_graphics_5x(int gx,int gy)
{
    gotoxy(gx,gy);  // 42, 11
    printf("|       |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("   | |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|       |\n");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n");

}


//////////////////////////////////////    function to print graphics of game with 5x  /////////////////////////////////////////


void game_graphics_7x(int gx,int gy)
{
    gotoxy(gx,gy); // 24,3
    printf("|       |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("   | | \n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("|       |\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}


/////////////////////////////////////////    Function to print graphics of 6x  /////////////////////////////////////

void game_graphics_6x(int gx,int gy)
{
    gotoxy(gx,gy);
    printf("|       |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(gx,gy);
    printf("   | |\n");
    gy++;
    gotoxy(gx,gy);
    printf("  |   |\n");
    gy++;
    gotoxy(59,15);
    printf("|       |\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}


/////////////////////////////////    game graphics handler   /////////////////////////////////


main()
{
    char A[3][3],p1_t,p2_t;
    int i,j;
    int x,y;
    int check1=0,check2=0;
    int loop=0;
    //////////////    work is being in pending     /////////////////
    game_graphics_main();



    fflush(stdin);
    player1_turn(&A,&check2);
    printf("\n\n\n\n\n\n");
    fflush(stdin);

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           if(A[i][j] == 'x')
            {
                switch(check1)
                {
                    case 1:
                        game_graphics_1x(24,18);
                        break;
                    case 2:
                        game_graphics_2o(42,18);
                        break;
                    case 3:
                        game_graphics_3o(59,18);
                        break;
                    case 4:
                        game_graphics_4o(24,11);
                        break;
                    case 5:
                        game_graphics_5o(42,11);
                        break;
                    case 6:
                        game_graphics_6o(59,11);
                        break;
                    case 7:
                        game_graphics_7o(26,3);
                        break;
                    case 8:
                        game_graphics_8o(42,3);
                        break;
                    case 9:
                        game_graphics_9o(59,3);
                }
            }
         }
      }
      fflush(stdin);

    player2_turn(&A,&check2);
    printf("\n\n\n\n\n\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           if(A[i][j] == 'o')
            {
                switch(check2)
                {
                    case 1:
                        game_graphics_1o(24,18);
                        break;
                    case 2:
                        game_graphics_2o(42,18);
                        break;
                    case 3:
                        game_graphics_3o(59,18);
                        break;
                    case 4:
                        game_graphics_4o(24,11);
                        break;
                    case 5:
                        game_graphics_5o(42,11);
                        break;
                    case 6:
                        game_graphics_6o(59,11);
                        break;
                    case 7:
                        game_graphics_7o(26,3);
                        break;
                    case 8:
                        game_graphics_8o(42,3);
                        break;
                    case 9:
                        game_graphics_9o(59,3);
                }
            }
         }
      }

}



void player1_turn(char *p,int *chk1)
{
    char p1;
    printf("First Player Turn: ");
    p1 = getch();
    switch(p1)
    {
    case '7':
        *(p) = 'x';
        *chk1 = 7;
        break;

    case '8':
        *(p+1) = 'x';
        *chk1 = 8;
        break;
    case '9':
        *(p+2) = 'x';
        *chk1 = 9;
        break;

    case '4':
        *(p+3) = 'x';
        *chk1 = 4;
        break;

    case '5':
        *(p+4) = 'x';
        *chk1 = 5;
        break;

    case '6':
        *(p+5) = 'x';
        *chk1 = 6;
        break;

    case '1':
        *(p+6) = 'x';
        *chk1 = 1;
        break;

    case '2':
        *(p+7) = 'x';
        *chk1 = 2;
        break;

    case '3':
        *(p+8) = 'x';
        *chk1 = 3;
        break;
    default:
        printf("");
    }
}

void player2_turn(char *q,int *chk2)
{
    char p2;
    printf("Second Player Turn: ");
    p2 = getch();
    switch(p2)
    {
    case '7':
        *(q) = 'o';
        *chk2 = 7;
        break;

    case '8':
        *(q+1) = 'o';
        *chk2 = 8;
        break;
    case '9':
        *(q+2) = 'o';
        *chk2 = 9;
        break;

    case '4':
        *(q+3) = 'o';
        *chk2 = 4;
        break;

    case '5':
        *(q+4) = 'o';
        *chk2 = 5;
        break;

    case '6':

        *(q+5) = 'o';
        *chk2 = 6;
        break;

    case '1':
        *(q+6) = 'o';
        *chk2 = 1;
        break;

    case '2':
        *(q+7) = 'o';
        *chk2 = 2;
        break;

    case '3':
        *(q+8) = 'o';
        *chk2 = 3;
        break;
    default:
        printf("");
    }
}



























///////////////////////////////  function of the sum of the series  /////////////////////////////////////

void sum_of_the_series()
{
    int a,d,n,sum=0,k;
    printf("Enter common difference ");
    scanf("%d",&d);
    printf("Enter First Term ");
    scanf("%d",&a);
    printf("Enter No Of Terms ");
    scanf("%d",&n);
    printf("\n\nThe Series Are: ");
    for(k=1;k<=n;k++)
    {

        printf("%d",a+(k-1)*d);
        if(k<n)
        {
            printf("+");
        }
        if(k==n)
        {
            printf(".");
        }
       sum =a+(k-1)*d +sum;
    }
    printf("\n\nAnd The Sum Of The Series Is: %d\n\n\n",sum);
}
























//////////////////////////////////////  Function Of Rock Paper Scissor Game!  /////////////////////////////////////

void rock_paper_scissor_game()
{
    int us=0,u2s=0;
    int loop;
    char str[50],srt[50],s,give;
    int user,user2;
    int a=0,b;
    printf("ENTER FIRST PLAYER NAME: ");
    gets(str);
    printf("KINDLY, ENTER SECOND PLAYER NAME: ");
    gets(srt);
    printf("\n\nHello, %s And %s Welcome To Hamza's (Rock,Paper & Scissor) GAME. ",str,srt);
    printf("\n\n\n\n\n");
    printf("_____________________________\n");
    printf("To Start The Game, Enter [s]: ");
    scanf("%c",&s);
    printf("-----------------------------");
    printf("\n\n\n\n\n");
    for(loop=0;loop<=2;loop++)

    {
        printf("--------------------\n");
        printf("%s  Score Is : %d ",str,us);
        printf(" \n%s Score Is : %d\n ",srt,u2s);
        printf("--------------------");
        printf("\n\n\n");
        while(a<=154 )
    {
        printf("_");
        if(a==30)
            printf("\n");
        if(a==61)
            printf("\n");
        if(a==92)
            printf("\n");
        if(a==123)
            printf("\n");
        a++;
    }
    printf("\n\n\n");
    printf("                                          Let's Start!\n\n");
    printf("Commander:\n");

    printf("          01] Choose ROCK:\n");
    printf("          02] Choose PAPER:\n");
    printf("          03] Choose SCISSOR:\n\n");
    scanf("%d",&user);
    if(user == 1)
        printf("\n\nYou Chose ROCK.");
    if(user == 2)
        printf("\n\nYou Chose PAPER.");
    if(user == 3)
        printf("\n\nYou Chose SCISSOR.");


     user2 = random_num();
     fflush(stdin);

     printf("\n\nNow, Hit Enter Key To Give Opportunity To %s.",srt);
     scanf("%c",&give);

     if(user2 == 1)
     {
         printf("\n\nSo, %s Chose Rock: ",srt);
     }
     if(user2 == 2 )
        printf("\n\nSo, %s Chose Paper:",srt);
     if(user2 == 3)
        printf("\n\nSo, %s Chose Scissor:",srt);

     printf("\n\n\n\n");
    comparing_the_user_and_computer_inputs(user,user2,&str,&srt,&us,&u2s);
    }
     if(us>u2s)
        {
            printf("\n\n %s IS THE WINNER OF THE MATCH \n\nWith The SCORE Of %d.\n\n\n\n\n\n",str,us);
        }
    if(us<u2s)
        {
            printf("\n\n %s IS THE WINNER OF THE MATCH \n\nWith The SCORE Of %d.\n\n\n\n\n\n",srt,u2s);
        }





}
int random_num()
{
    int a;
    int a1,b1;
    int i;
    srand(time(NULL));
    a1 = rand()%4+1;
    b1 = rand()%10+9;

    for(i=a1;i<=b1;i++)
    {
         a=rand()%3+1;
    }

    return a;
}
void comparing_the_user_and_computer_inputs(int a,int b,char *p1_n,char *p2_n,int *x,int *y)
{
    if(a<b)
    {
        if(a == 1)
        {
            if(b==2)
            {
                printf("\n\nCommander: Unfortunately! %s Won This Turn!",p2_n);
                ++(*y);
               // return u2s;

            }
        }
        if(a == 2)
        {
            if(b == 3)
            {
                printf("\n\nCommander: Unfortunately! %s Won This Turn!",p2_n);
                ++(*y);
                //return u2s;
            }
        }
        if(a == 1)
        {
            if(b == 3)
            {
                printf("\n\nCommander: Fortunately! %s Won This Turn!",p1_n);
                ++(*x);
                //return us;
            }
        }
    }
    if(a>b)
    {
        if(a==2)
        {
            if(b==1)
            {
                printf("\n\nCommander: Fortunately! %s Won This Turn!",p1_n);
                ++(*x);
                //return us;
            }
        }
        if(a == 3)
        {
            if(b == 2)
            {
                printf("\n\nCommander: Fortunately! %s Won This Turn!",p1_n);
                ++(*x);
                //return us;
            }
        }
        if(a == 3 )
        {
            if(b == 1)
            {
                printf("\n\nCommander: Unfortunately! %s Won This Turn!",p2_n);
                ++(*y);
                //return u2s;
            }
        }
    }

    if(a == b)
    {
        printf("\n\nCommander: Wow! This  Turn Was Draw! ");
    }
    printf("\n\n\n\n\n");

}
