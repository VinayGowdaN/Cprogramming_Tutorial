#include <stdio.h>
#include <conio.h>

void main()
{
    char data[200];
    FILE *fp;
    fp=fopen("D:\\info\\hello.txt","w");
    if(fp==NULL)
    {
    printf("unable to open the file click the path");
    }
    else
  {

        printf("enter any sentence to write in to file:");
        gets(data);

        fprintf(fp,"%s",data);
        fclose(fp);
        printf("data saved file.thank you.");
   }

getch();
}
