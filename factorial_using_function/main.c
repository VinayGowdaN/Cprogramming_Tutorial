#include <stdio.h>
#include <stdlib.h>
int factorial(int a);
void printdata(int n);

void main()
{
    int i,n=4,n1=5,n2=7;
    printdata(n);
    printdata(n1);
    printdata(n2);
    getch();

    }
int factorial(int a)
{
    int result=1,i;
    for(i=1;i<=a;i++)
    result=result*i;
    return result;
}

void printdata(int n)
{
  printf("factorial of %d is %d\n",n,factorial(n));
}

