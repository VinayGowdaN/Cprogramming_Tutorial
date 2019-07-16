#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    switch(ch)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       printf("vowel");
       break;
       default:printf("consonent");
       break;
    }
    return 0;
}
