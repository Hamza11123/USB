#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

class Book
{
    private:
        int bookId;
        float price;
        char Title[45];
    public:
        
        Book()
        {
            gets(&Title[0]);
            Bookid = 2395, price = 99.43399 ;
        }
        void show()
        {
            printf("")
        }
};

int main(void)
{
    Book g;
}
/*
class complx
{
private:
    int a, b;

public:
    setData(int x, int y)
    {
        a = x, b = y;
    }

    void show(void)
    {
        cout << a << " + " << b << 'i' << endl;
    }

    complx add(complx C)
    {
        complx temprorary;
        temprorary.a = a + C.a;
        temprorary.b = b + C.b;
        return temprorary;
    }
};
scanf

    int
    main(void)
{
    int realPart, imagnaryPart;
    complx putComplxNo, putComplxNo2, Result;
    cout << "                                 Enter First Complex Number:" << endl;
    cout << "Enter Real Part: ";
    cin >> realPart;
    cout << "Enter Imaginary Part: ";
    cin >> imagnaryPart;
    putComplxNo.setData(realPart, imagnaryPart);
    system("cls");

    cout << "Enter Second Complex Number:" << endl;
    cout << "Enter Real Part: ";
    cin >> realPart;
    cout << "Enter Imaginary Part: ";
    cin >> imagnaryPart;
    putComplxNo2.setData(realPart, imagnaryPart);
    system("cls");

    Result = putComplxNo.add(putComplxNo2);

    Result.show();
    return 0;
}
*/
