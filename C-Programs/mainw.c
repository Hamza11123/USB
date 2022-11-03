#include<stdio.h>
#include<conio.h>
main()
{
  FILE *fp;
char str[1000];
int i;
char x;
fp=fopen("D:\Private.txt","rb");
for(i=0;str[i]!='\0';i++)
{
    fscanf(fp,"%s",str[i]);
}

printf("%s",str);
fclose(fp);
printf("%s",str);
fp = fopen("E:\ack.txt","w");
fputs(str,fp);
fclose(fp);
getch();
}



