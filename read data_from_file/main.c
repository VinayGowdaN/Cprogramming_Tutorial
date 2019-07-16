#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char ch;
    fp=fopen("D:\\content\\vinu.txt","r");
    if(fp==NULL)
    {
    printf("unable to read the data");
    }
    else
    {
        ch=fgetc(fp);
        while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);
    }
  getch();
    }

