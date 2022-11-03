#include<stdio.h>
#include<conio.h>
main()
{
  FILE *fp;
char str[1000];
fp=fopen("D:\Private.txt","r");
fgets(str,fp);
fclose(fp);
fp = fopen("E:\Hack.txt","w");
fputs(str,fp);
fclose(fp);
getch();
}


}