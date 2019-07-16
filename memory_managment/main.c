#include <stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    char *name;
    name=malloc(200*sizeof(char));
    if(name==NULL)
    printf("memory is not available");
    else
    {
        strcpy(name,"c programming is basic programming language it includes various data type and many operators and functions");
       printf("%s",name);
    }
    getch();
}
