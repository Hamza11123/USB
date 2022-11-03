#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// using namespace std;
// #include <mmsystem.h>
int main(void)
{
    int *ptr, x = 6;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 56;
    printf("val: %d address: %d", *ptr, ptr);

    free(ptr);

    printf("\n\nAfter Freeeeeeeeee!\n\n");

    ptr = NULL;
    printf("\n\nAfter assigning NULL Pointer");

    ptr = (int *)malloc(sizeof(int));
    // *ptr = 6;
    printf("after maiking new malloc");
    printf("val: %d address: %d", *ptr, ptr);
}
