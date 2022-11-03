#include <iostream>

using namespace std;

int main(void)
{
    float f = 12;
    f /= 10;
    cout << "here is last digit " << (int)((f - (int)(f)) * 10);
}