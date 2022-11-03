#include <conio.h>
#include <stdio.h>

int main(void)
{
    char items[4][20] = {"youtube",
                         "yotubeu",
                         "hello",
                         "there"};
    fetchUser(items);
}

int fetchUser(char items[4][20])
{
    printf("%s", items[1]);
}