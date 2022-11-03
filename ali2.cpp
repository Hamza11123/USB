
#include<stdio.h>
#include <fstream>
#include<unistd.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
#include<malloc.h>
#include<time.h>
#include<math.h>
#include<random>
using namespace std;

int main(){
    string questions[3][3][10][6];
    
    string __tmpStr;
    ifstream __fetchQsts("./staticFiles/fetchQuestions.txt");

    for (int s = 0; s < 3; s++){
        for (int l = 0; l < 3; l++){
            for(int q = 0; q < 10; q++){
                for (int props = 0; props < 6; ++props)
                {
                    // fetching questions from static files
                    __fetchQsts >> __tmpStr;

                    // Assigning.. it to the [Temp-String]-> '__tmpStr'
                    questions[s][l][q][props] = __tmpStr;
                }
            }
        }
    }


    for (int s = 0; s < 3; s++){
        for (int l = 0; l < 3; l++){
            for(int q = 0; q < 10; q++){
                for (int props = 0; props < 6; ++props){
                    cout<< questions[s][l][q][props];
                }
                cout<<endl;
            }
        }
    }

    return 0;

}



