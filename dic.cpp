#include <stdio.h>
#include <iostream> // stream is a Medium between (input) and program and similarly, output and progrm
// main note: in "iostream" header file there're two major Classes "istream and ostrem"
// in "cin" obj. from "istream" class and similarly, "cout" from "ostream";
// #include <fstream.h>
#include <conio.h>
#include <string>
#include <string.h>
int stringAsciiSum(char *);
char convert_to_int(char *);

using namespace std;

int main(void)
{
    int main_Input_String;
    cin >> main_Input_String;

    switch (main_Input_String)
    {
    case 349:
        cout << "you means tum";
        break;

    default:
        break;
    }
}

// convert to lower case any string!
char convert_to_int(char *str)
{
    int str_length_holder = strlen(str), typeCastedTo_Integer;

    for (int i = 0; i < str_length_holder; i++)
    {
        typeCastedTo_Integer = (int)*(i + str);
        if (typeCastedTo_Integer <= 90 && typeCastedTo_Integer >= 65)
            *(i + str) = typeCastedTo_Integer + 32;
    }
}

// for dictionary purpose we'll give only lowerCase Characters so, that the out put is kept constant for every other sentence;
int stringAsciiSum(char *str)
{
    int sum_of_Ascii_codes_holder = 0; // during Loop

    for (int i = 0; *(i + str) != '\0'; i++)
        sum_of_Ascii_codes_holder += (int)*(i + str);

    return sum_of_Ascii_codes_holder;
}
