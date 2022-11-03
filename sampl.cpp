#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(void){
    string st;

    char ch;
    // ofstream writeF("ff.txt");

    ifstream readF("./staticFiles/fetchQuestions.txt");
    // for(int i=0; !readF.eof(); i++ )
    // {
        
    // }
    string str[3][3][10][6];

    for (int l = 0; l < 3; l++)
    {
        for (int k = 0; k < 3; k++)
        {
            for (int  j = 0; j < 10; j++)
            {
                for (int i = 0; i < 6; i++)
                {
                    readF >> st;
                    str[l][k][j][i] = st;
                }
            }
        }
    }

    // [sbj][lvl][qust][props]
    cout<<str[0][2][1][0];
    
    
       





    // cout<<st;





}
