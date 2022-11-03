#include <bits/stdc++.h>
using namespace std;
FILE *F;
int main()
{
    int opt;
    string toAsk[12] = {"AID:", "PassengerName:", "PhoneNo:", "AirLine:", "FromCity:", "ToCity:", "FlyDate:", "TicketPrice:", "Seats:", "Total:"}, toGet[12];
    printf("1-Data Save into file.\n 2-Data Read from file. \n");
    printf("Enter option (1/2): ");
    scanf("%d", &opt);
    if (opt == 1)
    {
        F = fopen("D://flight.txt", "w");
        for (int i = 0; i < 10; i++)
        {
            cout << toAsk[i] << '\n';
            cin >> toGet[i];
            fputc('\n', F);
            for (int j = 0; j < toGet[i].length(); j++)
                fputc(toGet[i][j], F);
        }
        cout << "\n------Data-Saved!-----------\n";
        fclose(F);
    }
    else if (opt == 2)
    {
        system("cls");
        F = fopen("D://flight.txt", "r");
        while (!feof(F))
            printf("%c", (char)fgetc(F));
    }
    else
        printf("Sorry: Wrong option.");
}
