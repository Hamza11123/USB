#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void main(void)
{
    char st[20], ch, n;
    static char Hld[60], empty[2];
    FILE *p;
    int i = 0, s = 0;
    p = fopen("h.txt", "w");
    fclose(p);
    while (1)
    {
        p = fopen("h.txt", "a");

        ch = getch();

        switch (ch)
        {
        case 13:

            fprintf(p, "\n");
            printf("\n");
            fclose(p);
            break;

        case 8:

        {

            strcpy(Hld, empty);

            fclose(p);

            p = fopen("h.txt", "r");
            s = 0;
            while (!feof(p))
            {

                Hld[s] = fgetc(p);
                s++;
            }
            fclose(p);

            system("cls");

            p = fopen("h.txt", "w");
            for (i = 0; i < (s - 2); i++)
            {
                printf("%c", Hld[i]);
                fputc(Hld[i], p);
            }
            fclose(p);
        }
        break;
        case 27:
            fclose(p);
            printf("\n\nYour Data Is Saved In The File h.txt\n");
            exit(1);
        default:
            printf("%c", ch);
            fputc(ch, p);
            fclose(p);
            break;
        }
    }

    fclose(p);
}