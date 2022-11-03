

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <dirent.h>
// #include <dir.h>
#include <io.h>

using namespace std;

int main(void)
{
    struct dirent *drent;
    DIR *directory = opendir("hamza");

    cout << directory;
}