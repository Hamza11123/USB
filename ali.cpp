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



void gotoxy(int horizon_DirC, int vrt_DirC){
    COORD *__console_Axis = (COORD *)malloc(sizeof(COORD));
    __console_Axis->X = horizon_DirC;
    __console_Axis->Y = vrt_DirC;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), *(__console_Axis));
}
using namespace std;
class questionsHandler{
    public: 
        // [subject][level][qustion][all data related to the particularQuestion]
        string questions[3][3][10][6];
        // string questions[3][3][10][6] = {
        //     {
        //         {
        //             {
        //                 {"Q1: 2 + 3 = ____"}, {"1st"}, {"5"}, {"8"}, {"9"}, {"0"}
        //             },
        //             {
        //                 {"Q2: 2 * 3 = ____"}, {"2nd"}, {"5"}, {"6"}, {"23"}, {" none of these"}
        //             }, 
        //             {
        //                 {"Q3: ..."}, {"1st"}, {"math min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q4: ..."}, {"1st"}, {"math min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q5: ..."}, {"1st"}, {"math min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q6: ..."}, {"1st"}, {"math min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q7: ..."}, {"1st"}, {"math min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q8: ..."}, {"1st"}, {"math min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q9: ..."}, {"1st"}, {"math min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q10: ..."}, {"1st"}, {"math min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }
        //         },
        //         {
        //             {
        //                 {"Q1: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             },
        //             {
        //                 {"Q2: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q3: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q4: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q5: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q6: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q7: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q8: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q9: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q10: ..."}, {"1st"}, {"math mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }
        //         },
        //         {
        //             {
        //                 {"Q1: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             },
        //             {
        //                 {"Q2: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q3: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q4: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q5: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q6: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q7: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q8: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q9: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q10: ..."}, {"1st"}, {"math max: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }
        //         }
        //     },

        //     {
        //         {
        //             {
        //                 {"Q1: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             },
        //             {
        //                 {"Q2: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q3: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q4: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q5: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q6: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q7: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q8: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q9: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q10: ..."}, {"1st"}, {"physics min: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }
        //         },
        //         {
        //             {
        //                 {"Q1: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             },
        //             {
        //                 {"Q2: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q3: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q4: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q5: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q6: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q7: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q8: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q9: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q10: ..."}, {"1st"}, {"phy mid: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }
        //         },
        //         {
        //             {
        //                 {"Q1: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             },
        //             {
        //                 {"Q2: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q3: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q4: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q5: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q6: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q7: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q8: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q9: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q10: ..."}, {"1st"}, {"phy max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }
        //         }
        //     },

        //     {
        //         {
        //             {
        //                 {"Q1: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             },
        //             {
        //                 {"Q2: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q3: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q4: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q5: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q6: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q7: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q8: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q9: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q10: ..."}, {"1st"}, {"pst imn: A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }
        //         },
        //         {
        //             {
        //                 {"Q1: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             },
        //             {
        //                 {"Q2: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q3: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q4: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q5: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q6: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q7: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q8: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q9: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q10: ..."}, {"1st"}, {"pst mid A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }
        //         },
        //         {
        //             {
        //                 {"Q1: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             },
        //             {
        //                 {"Q2: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q3: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q4: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q5: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q6: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q7: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q8: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q9: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }, 
        //             {
        //                 {"Q10: ..."}, {"1st"}, {"pst max A"}, {"Option: A"}, {"Option: A"}, {"Option: A"}
        //             }
        //         }
        //     }
        // };
        questionsHandler(){
            string __tmpStr;
            ifstream __fetchQsts("./staticFiles/fetchQuestions.txt");

            for (int s = 0; s < 3; s++){
                for (int l = 0; l < 3; l++){
                    for(int q = 0; q < 10; q++){
                        for (int props = 0; props < 6; ++props){
                            // fetching questions from static files
                            __fetchQsts >> __tmpStr;

                            // Assigning.. it to the [Temp-String]-> '__tmpStr'
                            questions[s][l][q][props] = __tmpStr; 
                        }
                        
                    }
                }
                
            }
            
        }
        
        // Mthds.. 
        string getQuestionsProps(int givenSubject, int givenLevel, int givenQuestionNum, int givenQuestionProperty){
            if(givenSubject < 3 && givenSubject >= 0 && givenQuestionNum < 10 && givenQuestionNum >= 0)
                return(questions[givenSubject][givenLevel][givenQuestionNum][givenQuestionProperty]);
        }
        bool attempt(string userAttemptKey_strFormat, int subjectInd, int levelInd, int questionInd){
            if(this->questions[subjectInd][levelInd][questionInd][1] == userAttemptKey_strFormat)
                return true;
            return false;
        }
};

/*---------------- Functions Definition ----------------*/
int get_RandomNum(int max, int min){
    return ((rand() % min) + max);
}
void cls(){
    system("cls");
}
void horizontalLine(int lineLength){
    for(int i=0; i <= lineLength; i++)  
        cout<<'-';
    cout<<endl;
}
void getUsersInfo(string& __Nm, string& __fn){
    horizontalLine(24);
    cout<<" Your Name: ";
    cin>>__Nm;
    cout<<" Father Name: ";
    cin>>__fn;
    horizontalLine(24);
}
void loader(void){
    for (int i = 0; i < get_RandomNum(1, 3); i++) {
        sleep(get_RandomNum(7, 3)/2.80);
        cout<<".";   
    }   cout<<"\n\n";
    sleep(get_RandomNum(7, 3)/2.80);
}
string userAttemptKey_str(char& atmptKey_ch){ // returns The Corresponding String Related To The Passed-Char In The Func.
    // for Character-Handling..
    int __asc_Ch = 97;
    string _corrspndingSTR_toChar[4] = {"1st", "2nd", "3rd", "4th"};
    
    for (int st = __asc_Ch; st < (__asc_Ch + 4) ; st++) {
        if(atmptKey_ch == st) 
            return (_corrspndingSTR_toChar[(st - __asc_Ch)]);
    }
    // return ((atmptKey_ch == 97) ? "1st": (atmptKey_ch == 98) ? "2nd": (atmptKey_ch == 99) ? "3rd": (atmptKey_ch == 100)? "4th": " ");
}
void _err(int _lim1, int passedVal, int _lim2){
    if(_lim1 <= passedVal && _lim2 >= passedVal) return;
    exit(1);
}
char toLowr(char ch){
    int _chAscii = ch;
    if(_chAscii >= 97 && _chAscii <= 123) return ch;
    return (ch+= 32);
}

void modify(questionsHandler *__Qst2){
    int _Sbj, __edit_Lvls, __edit_Qst;

    // Printing all data From THe instance-Member -> Variable(questions) in an Ordered-Way To See Exact What To [EDIT]?
    for (int sbj = 0; sbj < 3; sbj++){
        for (int lls = 0; lls < 3; lls++){
            for (int qsts = 0; qsts < 10; qsts++){
                for (int _prps = 0; _prps < 6; _prps++)
                    cout<< endl<<__Qst2->questions[sbj][lls][qsts][_prps];                
            }   cout<<endl<<"[Level]- "<<lls+1;        
        }   cout<<endl<<"[subjct]- "<<sbj+1;
    }

    // Beginning Editing Process WhenEver Any-Key Hits By "User"
    cout<<"\n\npress any key to continue editing... ";
    _getch();

    loader();
    cls();

    // User -> Chossing Subject To Where The [Targeted-Question] Exist..!
    cout<< "\nenter subject: \n1. Math\n2.Physcs\n3. PST\n\n";
    cin>> _Sbj;
    

    // User -> Choosing Level Of The Targeted-Question
    cout<< "\nenter levl: \n1. Min\n2. Mid\n3. Max\n\n";
    cin >>__edit_Lvls;

    // Now, It's Time To -Enter Question-No To Select The Particular-QUestion..
    cout<< "\nenter qstin number: 1 - 10\n\n";
    cin>>__edit_Qst;

    loader();
    cls();
    
    
    string put_PROPS; // Creating an Empty String-Variable To Store User's Temproray-Data To Edit.. That Question
    cout<<"now, enter questions Properties:\n";
    for(int prs = 0; prs< 6; prs++){
        cin>>put_PROPS;
        
        // Reflecting The Changes Of The To [Each-Every-Question-PropertY] In An Ordered-Way (Sequence-Wise)!
        __Qst2->questions[_Sbj][__edit_Lvls][__edit_Qst][prs] = put_PROPS;
    }
    loader();

    ofstream _put("./staticFiles/fetchQuestions.txt");
    _put << "";

    


    

    
    // Getting The User To The Main-Menu.. After Completing Editing.. By 'Hitting' [Enter]
    cout<<endl<<"Saved Successfully... Press [Enter] To Jump Right Into \"Home-Section\" ";     
    cls();
}
/*---------------- Functions Definition ----------------*/

int main(void){
    string userName, userFatherName;
    int chosenDifficultyByUser, chosenSubjectByUser;
    float _Sc=0, tototalScr = 0;
    char userAttemptKey_char;
    srand(time(NULL));

    cls();
    cout<<"Welcome To MCQS App CPP"<<endl;
    cout<<"Press 'Enter' To Proceed... ";
    if(_getch() == 13){
        cls();

        // -Getting-User's-Info
        getUsersInfo(userName, userFatherName);
        
        // -Waitin' for Machine-Response..
        loader();

        // -Choose Difficulty
        cout<<"\nDifficulty:-\n\n1- Min\n2- Mid\n3- Max\n\nEnter: ";
        cin>>chosenDifficultyByUser;    // We gotta do something with the help of the int-data
        _err(1, chosenDifficultyByUser, 3); // [error-handling]

        loader();
        cls();
        
        for(int sbj = 0; sbj <= 3; sbj++)// it'll b iterated.. soon 
        {
            if(sbj > 0){
                cls();
                sleep(2);
    
                // Gotta iterate.. in future...Sooner
                gotoxy(12, 1 + sbj);
                cout<<"[Score: " <<_Sc<<" Out Of "<<(10)<<']';
                // Adding every [attempt-Score]
                tototalScr += _Sc;
                
                // reseting the Each Subject-Score.. To "Track The Next-Subject Score"
                _Sc = 0;
                gotoxy(0, 0);
                
            }
            cout<<"Subjects:-\n\n1- Maths\n2- Physics\n3- PST\n\n"<<((sbj != 3) ? "Enter: ": ("Total Score: " + to_string(tototalScr)));
            if(sbj == 3){
                exit(1);
            }
            cin >>chosenSubjectByUser;
            _err(1, chosenSubjectByUser, 3);
            loader();
            cls();

            // instantiating.. the mainObject, Which is Responsible To [Handle-Data-Base];
            questionsHandler *QST = new questionsHandler();

            for (int Q_Ind = 0; Q_Ind < 10; Q_Ind++) {
                cout<<' '<<QST->getQuestionsProps(chosenSubjectByUser-1, chosenDifficultyByUser-1, Q_Ind, 0) <<endl;

                // innerLoop to print [Options] for a [Particular-Question]
                for (int Q_Option = 2; Q_Option < 6; Q_Option++){
                    char *ch = new char[sizeof(char)];
                    *ch = (95+Q_Option);
 
                    cout<<"     ("<< *ch<<"): "<<QST->getQuestionsProps(chosenSubjectByUser-1,  chosenDifficultyByUser-1, Q_Ind, Q_Option) <<endl;

                    free(ch);
                }


                cout<<"\n Enter: ";
                
                // Getting char-key through keyboard..
                cin >> userAttemptKey_char;
                _err(97, toLowr(userAttemptKey_char), 100);

                // Getting the Correspnding To The Entered-Character-Key
                string atmptKey_InDefltStrForm = userAttemptKey_str(userAttemptKey_char);
                
                // Now, Passing to the Func.attempt(method) To Match-With-Data-Base.. [Continue From Here]- "First-Break"
                ( QST->attempt(atmptKey_InDefltStrForm, chosenSubjectByUser-1, chosenDifficultyByUser-1, Q_Ind)) ? _Sc+= 1: _Sc-= 0.25;
                cout<<" score is: "<<_Sc<<endl;
                cout<<"\n\n";
            }
            
        }  

    }
    
    
    // cout<<o->getQuestionsProps(0, 0, 0, 0)<<endl;
    // cout<<o->attempt("second", 0, 0, 0);

    return (0);
}