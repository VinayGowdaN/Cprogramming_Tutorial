#include <stdio.h>
#include <conio.h>

int main()
{
    int marks[3];
    int sum=0,i;
    for(i=0;i<3;i++)
    {
     printf("enter any number");
     scanf("%d",&marks[i]);
    }
    for(i=0;i<3;i++)
    sum=sum+marks[i];
    printf("sum=%d",sum);
    return 0;
}
