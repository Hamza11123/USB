#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

int main(void)
{
    // discussion about file
    // An stream is a "Zaria"(Medium or Way)

    // 1. input-STream is a Medium, From where the data is come to My CPP Program
    // 2. Output-STream is a Medium, From where the data is Gone in The File..

    FILE *fp;
    // fopen(fp, "path", )
    string st = "Samplestring";

    ifstream OBJ("Y.txt"); // OBJ is an Object from "ofstream" Class...
    char str[99999] = {"N"};
    cout << str << endl;

    OBJ >> str; // Extract data from The File To the program Through [Stream]

    cout << str;
}
