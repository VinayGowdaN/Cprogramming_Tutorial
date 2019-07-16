#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,length=0;
    char name[30];
    printf("enter the char name");
    scanf("%s",&name);
    for(i=0;name[i]!='\0';i++)
    length=length+1;
    printf("entered length of the string is:%d\n",length);
    for(i=length-1;i>=0;i--)
    printf("%c",name[i]);
    return 0;
}
