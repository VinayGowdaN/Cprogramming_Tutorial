#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,a,b;
    char ch;
    do
    {
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    sum=a+b;
    printf("sum of %d and %d=%d",a,b,sum);
    printf("\n\n\ndo you want to add another set (y/n):");
    scanf(" %c",&ch);
    }
    while(ch=='y');

}
